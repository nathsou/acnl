// Functions decompiled by tools/decomp (docs/decomp.md), each proved equal to the recompiled original (prove-cpp). The
// names come from games/acnl/names (tools/decomp/names.py); the others are generated (d_<address>::f_<address>,
// Object_<address>_<argument>, word_<offset>) and still to be chosen. Hexadecimal constants are the original's
// (addresses, offsets, sizes and ids as the game has them).
#include "guest/guest.hpp"
#include "recovered/structs.hpp"

#include <bit>

using guest::gptr;

// f_00130054: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Calls 00128c0c on the object at 0x97d7e0.
namespace d_00130054 {

inline constexpr u32 main_event_address = 0x0097d7e0u;
inline constexpr guest::Function<0x00128c0c, u32(u32, u32, u32, u32)> OnceFlag__reset;

u32 call_128c0c_on_97d7e0() {
    return OnceFlag__reset(main_event_address, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_00130054
GUEST_EXPORT(0x00130054, d_00130054::call_128c0c_on_97d7e0);

// f_00130060: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Waits on the main event.
namespace d_00130060 {

inline constexpr u32 main_event_address = 0x0097d7e0u;
inline constexpr guest::Function<0x0012ef20, u32(u32, u32, u32, u32)> LightEvent__wait;

u32 wait_on_main_event() {
    return LightEvent__wait(main_event_address, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_00130060
GUEST_EXPORT(0x00130060, d_00130060::wait_on_main_event);

// f_0013010c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Tries to wait on the main event: 1 when it is signalled.
namespace d_0013010c {

inline constexpr u32 main_event_address = 0x0097d7e0u;
inline constexpr guest::Function<0x0012efe8, u32(u32, u32)> LightEvent__try_wait;

u32 try_wait_on_main_event() {
    return LightEvent__try_wait(main_event_address, guest::cpu()->r[1]);
}

}  // namespace d_0013010c
GUEST_EXPORT(0x0013010c, d_0013010c::try_wait_on_main_event);

// f_001306e0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// When enabled (0x97d801): reads two system flags into 0x97d800 and applies them (retrying on result 0xc9405001).
namespace d_001306e0 {

inline guest::global<u8, 0x0097d800> global_0097d800;
inline guest::global<u8, 0x0097d801> global_0097d801;
inline constexpr guest::Function<0x00130750, u32(u32, u32)> ipc_974b90_command_3c;
inline constexpr guest::Function<0x0013078c, u32(u32, u32)> ipc_command_3d_flag;
inline constexpr guest::Function<0x001307c8, u32(u32, u32, u32, u32)> ipc_command_3b_out;
inline constexpr guest::Function<0x00136598, u32(u32, u32)> ipc_command_13_flag;

struct __attribute__((packed)) InitHeadphoneStateFrame {
    u8 byte_0;
    u8 unknown_1[0x3];  // (not read or written by name)
    u8 byte_4;
    u8 unknown_5[0x3];  // (not read or written by name)
};
GUEST_OFFSET(InitHeadphoneStateFrame, byte_0, 0x0);
GUEST_OFFSET(InitHeadphoneStateFrame, byte_4, 0x4);
GUEST_SIZE(InitHeadphoneStateFrame, 0x8);

u32 init_headphone_state(u32 r0_unused, u32 r1) {
    guest::StackFrameOf<InitHeadphoneStateFrame> frame;  // the original's stack frame
    u32 r0_1 = *global_0097d801;
    if (r0_1 == 0) {
        return r0_1;
    }
    u32 r0_3 = ipc_command_3b_out(frame.at(0).addr(), r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r1_1 = r0_3 & 0x80000000u;
    if (s32(r1_1) < 0) {
        guest::cpu()->r[1] = r1_1;
        return r0_3;
    }
    u32 r0_5 = ipc_974b90_command_3c(frame.at(4).addr(), r1_1);
    u32 r1_2 = r0_5 & 0x80000000u;
    if (s32(r1_2) < 0) {
        guest::cpu()->r[1] = r1_2;
        return r0_5;
    }
    u32 r1_3 = frame->byte_4;
    *global_0097d800 = u8(u32(frame->byte_0) | r1_3);
    u32 r0_6 = ipc_command_13_flag(0u, r1_3);
    u32 r1_4 = 0xc9405001u;
    if (r0_6 == r1_4) {
        r0_6 = ipc_command_3d_flag(0u, r1_4);
        r1_4 = guest::cpu()->r[1];
    }
    guest::cpu()->r[1] = r1_4;
    return r0_6;
}

}  // namespace d_001306e0
GUEST_EXPORT_FRAMED(0x001306e0, d_001306e0::init_headphone_state, 0x4010);  // pushes {r4, lr} first, as the original

// f_00130c70: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Constructs a layout: no root pane, an empty animation list, size zero.
namespace d_00130c70 {

inline constexpr u32 vtable_nw__lyt__Layout = 0x00901b9cu;

void nw__lyt__Layout__Layout(gptr<nw__lyt__Layout> layout) {
    u32 r3_1 = layout.addr() + 8u;
    layout->vtable = vtable_nw__lyt__Layout;
    float S0_1 = 0.0f;
    layout->word_4 = 0;
    layout->word_8 = r3_1;
    layout->word_10 = 0;
    layout->word_c = r3_1;
    layout->word_14 = 0;
    layout->float_18 = S0_1;
    layout->float_1c = S0_1;
    guest::cpu()->s[0] = S0_1;
}

}  // namespace d_00130c70
GUEST_EXPORT(0x00130c70, d_00130c70::nw__lyt__Layout__Layout);

// f_00130d6c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Constructs the sound archive player: its sound players, loaders and note callback, nothing set up.
namespace d_00130d6c {

inline constexpr u32 vtable_nw__snd__SoundArchivePlayer__SequenceNoteOnCallback = 0x00901ef0u;
inline constexpr u32 vtable_nw__snd__SoundArchivePlayer = 0x00901f04u;
inline constexpr u32 vtable_nw__snd__internal__LoaderManager_nw__snd__internal__driver__WaveSoundLoader_ = 0x00902048u;
inline constexpr u32 vtable_nw__snd__internal__LoaderManager_nw__snd__internal__driver__SequenceSoundLoader_ = 0x00902060u;
inline constexpr u32 vtable_nw__snd__internal__driver__MmlSequenceTrackAllocator = 0x00902424u;
inline constexpr u32 vtable_nw__snd__internal__driver__MmlParser = 0x00902454u;

void nw__snd__SoundArchivePlayer__SoundArchivePlayer(gptr<nw__snd__SoundArchivePlayer> sound_archive_player) {
    sound_archive_player->vtable = vtable_nw__snd__SoundArchivePlayer;
    sound_archive_player->word_4 = 0;
    sound_archive_player->sequence_note_on_callback_vtable = vtable_nw__snd__SoundArchivePlayer__SequenceNoteOnCallback;
    sound_archive_player->word_c = sound_archive_player.addr();
    sound_archive_player->word_10 = 0;
    sound_archive_player->word_14 = 0;
    sound_archive_player->word_18 = 0;
    sound_archive_player->word_1c = 0;
    sound_archive_player->word_20 = 0;
    u32 r12_1 = sound_archive_player.addr() + 0x2cu;
    sound_archive_player->word_24 = 0;
    sound_archive_player->word_28 = 0;
    sound_archive_player->word_2c = r12_1;
    sound_archive_player->word_30 = r12_1;
    u32 r3_1 = sound_archive_player.addr() + 0x38u;
    sound_archive_player->word_34 = 0;
    sound_archive_player->word_38 = r3_1;
    u32 r12_2 = sound_archive_player.addr() + 0x58u;
    sound_archive_player->word_44 = 0;
    sound_archive_player->word_3c = r3_1;
    sound_archive_player->word_48 = 0;
    sound_archive_player->sequence_sound_loader_vtable = vtable_nw__snd__internal__LoaderManager_nw__snd__internal__driver__SequenceSoundLoader_;
    sound_archive_player->word_4c = 0;
    sound_archive_player->word_50 = 0;
    sound_archive_player->word_54 = 0;
    sound_archive_player->word_58 = r12_2;
    sound_archive_player->word_5c = r12_2;
    u32 r3_2 = sound_archive_player.addr() + 0x64u;
    sound_archive_player->word_60 = 0;
    sound_archive_player->word_64 = r3_2;
    u32 r12_3 = sound_archive_player.addr() + 0x78u;
    sound_archive_player->word_6c = 0;
    sound_archive_player->word_68 = r3_2;
    sound_archive_player->word_70 = 0;
    sound_archive_player->word_74 = 0;
    sound_archive_player->word_78 = r12_3;
    sound_archive_player->word_7c = r12_3;
    u32 r3_3 = sound_archive_player.addr() + 0x84u;
    sound_archive_player->word_80 = 0;
    sound_archive_player->word_84 = r3_3;
    u32 r12_4 = sound_archive_player.addr() + 0xa4u;
    sound_archive_player->word_90 = 0;
    sound_archive_player->word_88 = r3_3;
    sound_archive_player->word_94 = 0;
    sound_archive_player->wave_sound_loader_vtable = vtable_nw__snd__internal__LoaderManager_nw__snd__internal__driver__WaveSoundLoader_;
    sound_archive_player->word_98 = 0;
    sound_archive_player->word_9c = 0;
    sound_archive_player->word_a0 = 0;
    sound_archive_player->word_a4 = r12_4;
    sound_archive_player->word_a8 = r12_4;
    u32 r3_4 = sound_archive_player.addr() + 0xb0u;
    sound_archive_player->word_ac = 0;
    sound_archive_player->word_b0 = r3_4;
    sound_archive_player->word_b8 = 0;
    sound_archive_player->word_b4 = r3_4;
    u32 r12_5 = sound_archive_player.addr() + 0xc4u;
    sound_archive_player->word_bc = 0;
    sound_archive_player->word_c0 = 0;
    sound_archive_player->word_c4 = r12_5;
    sound_archive_player->word_c8 = r12_5;
    u32 r2_1 = sound_archive_player.addr() + 0xd0u;
    sound_archive_player->word_cc = 0;
    sound_archive_player->word_d0 = r2_1;
    sound_archive_player->word_f0 = 0;
    sound_archive_player->word_d4 = r2_1;
    sound_archive_player->word_f8 = sound_archive_player.addr() + 0x100u;
    sound_archive_player->word_fc = 0;
    sound_archive_player->mml_parser_vtable = vtable_nw__snd__internal__driver__MmlParser;
    sound_archive_player->mml_sequence_track_allocator_vtable = vtable_nw__snd__internal__driver__MmlSequenceTrackAllocator;
    sound_archive_player->word_104 = 0;
    sound_archive_player->word_108 = 0;
    sound_archive_player->word_10c = 0;
    sound_archive_player->word_110 = 0;
    sound_archive_player->word_114 = 0;
}

}  // namespace d_00130d6c
GUEST_EXPORT(0x00130d6c, d_00130d6c::nw__snd__SoundArchivePlayer__SoundArchivePlayer);

// f_0013121c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Constructs a time-tone melody player: a one-sequence player with two faders.
namespace d_0013121c {

inline constexpr u32 vtable_SoundFader_rec = 0x008eb474u;
inline constexpr u32 vtable_SoundMelodyPlayerOneSeqTimeTone = 0x008f7210u;
inline constexpr guest::Function<0x00135134, u32(u32)> SoundMelodyPlayerOneSeqBase__SoundMelodyPlayerOneSeqBase;

u32 SoundMelodyPlayerOneSeqTimeTone__SoundMelodyPlayerOneSeqTimeTone(gptr<SoundMelodyPlayerOneSeqTimeTone> sound_melody_player_one_seq_time_tone) {
    SoundMelodyPlayerOneSeqBase__SoundMelodyPlayerOneSeqBase(sound_melody_player_one_seq_time_tone.addr());
    float S0_1 = 0.0f;
    sound_melody_player_one_seq_time_tone->vtable = vtable_SoundMelodyPlayerOneSeqTimeTone;
    sound_melody_player_one_seq_time_tone->byte_12 = 0;
    sound_melody_player_one_seq_time_tone->byte_13 = 0;
    sound_melody_player_one_seq_time_tone->byte_14 = 0;
    sound_melody_player_one_seq_time_tone->sound_fader_vtable = vtable_SoundFader_rec;
    sound_melody_player_one_seq_time_tone->float_1c = S0_1;
    sound_melody_player_one_seq_time_tone->float_20 = S0_1;
    sound_melody_player_one_seq_time_tone->float_24 = S0_1;
    u32 r3_1 = ~0u;
    sound_melody_player_one_seq_time_tone->sound_fader_vtable_2c = vtable_SoundFader_rec;
    sound_melody_player_one_seq_time_tone->word_28 = r3_1;
    sound_melody_player_one_seq_time_tone->float_30 = S0_1;
    sound_melody_player_one_seq_time_tone->float_34 = S0_1;
    sound_melody_player_one_seq_time_tone->float_38 = S0_1;
    sound_melody_player_one_seq_time_tone->word_3c = r3_1;
    guest::cpu()->s[0] = S0_1;
    return sound_melody_player_one_seq_time_tone.addr();
}

}  // namespace d_0013121c
GUEST_EXPORT_FRAMED(0x0013121c, d_0013121c::SoundMelodyPlayerOneSeqTimeTone__SoundMelodyPlayerOneSeqTimeTone, 0x4010);  // pushes {r4, lr} first, as the original

// f_00131580: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Destroys five font sets (a font resource, its load split and its other part each), last to first.
namespace d_00131580 {

inline constexpr guest::Function<0x00137848, u32(u32, u32, u32, u32)> nw__font__ResFont__destructor;
inline constexpr guest::Function<0x0013bb80, u32(u32)> do_nothing_13bb80;
inline constexpr guest::Function<0x0013bc00, u32(u32)> destroy_load_split;

u32 destroy_font_sets(u32 r0) {
    u32 last = r0 + 0x7e8u;
    nw__font__ResFont__destructor(last, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    destroy_load_split(last - 0x164u);
    do_nothing_13bb80(last - 0x174u);
    nw__font__ResFont__destructor(last - 0x198u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    destroy_load_split(last - 0x2fcu);
    do_nothing_13bb80(last - 0x30cu);
    nw__font__ResFont__destructor(last - 0x330u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    destroy_load_split(last - 0x494u);
    do_nothing_13bb80(last - 0x4a4u);
    nw__font__ResFont__destructor(last - 0x4c8u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    destroy_load_split(last - 0x62cu);
    do_nothing_13bb80(last - 0x63cu);
    nw__font__ResFont__destructor(last - 0x660u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    destroy_load_split(last - 0x7c4u);
    do_nothing_13bb80(last - 0x7c4u);
    return last - 0x7e8u;
}

}  // namespace d_00131580
GUEST_EXPORT_FRAMED(0x00131580, d_00131580::destroy_font_sets, 0x4010);  // pushes {r4, lr} first, as the original

// f_001316b8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Calls virtual 10 of the file device when it is mounted (+0x4c), else 0.
namespace d_001316b8 {

struct __attribute__((packed)) FileDevice {
    u32 word_0;
    u8 unknown_4[0x48];  // (not used here)
    u8 byte_4c;
};
GUEST_OFFSET(FileDevice, word_0, 0x0);
GUEST_OFFSET(FileDevice, byte_4c, 0x4c);


u32 FileDevice__virtual_10_if_mounted(gptr<FileDevice> file_device) {
    if (file_device->byte_4c == 0) {
        return 0u;
    }
    u32 r2_1 = *gptr<u32>(file_device->word_0 + 0x28u);
    // virtual function 10 of file_device.addr()
    return guest::call_address<u32>(r2_1, file_device.addr(), guest::cpu()->r[1], r2_1, guest::cpu()->r[3]);
}

}  // namespace d_001316b8
GUEST_EXPORT(0x001316b8, d_001316b8::FileDevice__virtual_10_if_mounted);

// f_001316d8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Constructs a resource factory: a disposer with its name, registered with the heap that contains it.
namespace d_001316d8 {

struct __attribute__((packed)) sead__ResourceFactory {
    u8 unknown_0[0x10];  // (not used here)
    u32 word_10;
    u32 word_14;
    u32 word_18;
    u32 word_1c;
    u32 word_20;
    u32 word_24;
    u32 word_28;
    u32 word_2c;
};
GUEST_OFFSET(sead__ResourceFactory, word_10, 0x10);
GUEST_OFFSET(sead__ResourceFactory, word_14, 0x14);
GUEST_OFFSET(sead__ResourceFactory, word_18, 0x18);
GUEST_OFFSET(sead__ResourceFactory, word_1c, 0x1c);
GUEST_OFFSET(sead__ResourceFactory, word_20, 0x20);
GUEST_OFFSET(sead__ResourceFactory, word_24, 0x24);
GUEST_OFFSET(sead__ResourceFactory, word_28, 0x28);
GUEST_OFFSET(sead__ResourceFactory, word_2c, 0x2c);

struct __attribute__((packed)) Local_001316d8_r0_5 {
    u32 vtable;
    u8 unknown_4[0xc];  // (not used here)
    u32 word_10;
    u32 word_14;
};
GUEST_OFFSET(Local_001316d8_r0_5, vtable, 0x0);
GUEST_OFFSET(Local_001316d8_r0_5, word_10, 0x10);
GUEST_OFFSET(Local_001316d8_r0_5, word_14, 0x14);

struct __attribute__((packed)) Local_001316d8_r0_6 {
    u32 vtable;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_001316d8_r0_6, vtable, 0x0);
GUEST_OFFSET(Local_001316d8_r0_6, word_4, 0x4);
GUEST_OFFSET(Local_001316d8_r0_6, word_8, 0x8);

struct __attribute__((packed)) Local_001316d8_r1_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_001316d8_r1_1, word_0, 0x0);
GUEST_OFFSET(Local_001316d8_r1_1, word_4, 0x4);

inline constexpr u32 vtable_sead__SafeStringBase_char__rec = 0x009047f8u;
inline constexpr u32 vtable_sead__FixedSafeString_32_ = 0x009048ecu;
inline constexpr u32 vtable_sead__ResourceFactory_rec = 0x00904a10u;
inline constexpr u32 vtable_sead__FixedSafeStringBase_char__32_ = 0x00905120u;
inline constexpr u32 vtable_sead__DirectResourceFactory_sead__DirectResource_ = 0x00905460u;
inline constexpr u32 vtable_sead__BufferedSafeStringBase_char_ = 0x0090558cu;
inline constexpr u32 heap_mgr_instance_address = 0x00975338u;
inline guest::global<u8, 0x008c9f1c> empty_string;
inline guest::global<u32, 0x00975338> heap_mgr_instance;
inline constexpr guest::Function<0x00132174, u32(u32, u32)> IDisposer__construct;
inline constexpr guest::Function<0x00137c78, u32(u32, u32, u32, u32)> ResourceFactory__create;
inline constexpr guest::Function<0x00138fec, u32(u32, u32, u32, u32)> find_owner_in_heap;
inline constexpr guest::Function<0x002fd108, u32(u32, u32, u32)> allocate_on_heap;

struct __attribute__((packed)) SeadResourceFactoryResourceFactory001316d8Frame {
    u32 object_0_vtable;
    u32 word_4;
};
GUEST_OFFSET(SeadResourceFactoryResourceFactory001316d8Frame, object_0_vtable, 0x0);
GUEST_OFFSET(SeadResourceFactoryResourceFactory001316d8Frame, word_4, 0x4);
GUEST_SIZE(SeadResourceFactoryResourceFactory001316d8Frame, 0x8);

u32 sead__ResourceFactory__ResourceFactory_001316d8(gptr<sead__ResourceFactory> resource_factory, u32 r1_unused, u32 r2, u32 r3) {
    guest::StackFrameOf<SeadResourceFactoryResourceFactory001316d8Frame> frame;  // the original's stack frame
    u32 r0_1 = resource_factory.addr() + 0x10u;
    resource_factory->word_14 = r0_1;
    resource_factory->word_18 = 0;
    resource_factory->word_10 = r0_1;
    u32 r0_2 = resource_factory.addr() + 0x1cu;
    resource_factory->word_20 = r0_2;
    resource_factory->word_24 = 0;
    resource_factory->word_1c = r0_2;
    resource_factory->word_28 = 0;
    resource_factory->word_2c = 0;
    u32 r0_3 = *heap_mgr_instance;
    if (r0_3 != 0) {
        u32 r0_4 = find_owner_in_heap(r0_3, resource_factory.addr(), r2, r3);
        gptr<Local_001316d8_r0_5> block = gptr<Local_001316d8_r0_5>(allocate_on_heap(0x4cu, r0_4, 4u));
        gptr<Local_001316d8_r1_1> r1_1 = gptr<Local_001316d8_r1_1>(block.addr() + 0x18u);
        block->word_10 = 0;
        block->word_14 = 0;
        r1_1->word_0 = block.addr();
        r1_1->word_4 = 0;
        IDisposer__construct(block.addr(), r1_1.addr());
        block->vtable = vtable_sead__ResourceFactory_rec;
        gptr<Local_001316d8_r0_6> r0_6 = gptr<Local_001316d8_r0_6>(block.addr() + 0x20u);
        r0_6->word_4 = r0_6.addr() + 0xcu;
        r0_6->vtable = vtable_sead__BufferedSafeStringBase_char_;
        r0_6->word_8 = 0x20;
        u32 r6_1 = *empty_string;
        *gptr<u8>(r0_6->word_4 + 0x1fu) = u8(r6_1);
        r0_6->vtable = vtable_sead__FixedSafeStringBase_char__32_;
        *gptr<u8>(r0_6->word_4) = *empty_string;
        r0_6->vtable = vtable_sead__FixedSafeString_32_;
        block->vtable = vtable_sead__DirectResourceFactory_sead__DirectResource_;
        resource_factory->word_28 = block.addr();
        resource_factory->word_2c = block.addr();
        frame->word_4 = 0x8ae110;
        frame->object_0_vtable = vtable_sead__SafeStringBase_char__rec;
        ResourceFactory__create(resource_factory.addr(), resource_factory->word_2c, frame.at(0).addr(), vtable_sead__SafeStringBase_char__rec);
    }
    return resource_factory.addr();
}

}  // namespace d_001316d8
GUEST_EXPORT_FRAMED(0x001316d8, d_001316d8::sead__ResourceFactory__ResourceFactory_001316d8, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0013187c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Gives an empty array room for `capacity` pointers from the heap.
namespace d_0013187c {

struct __attribute__((packed)) PointerArray {
    u32 count;
    u32 capacity;
    u32 items;
};
GUEST_OFFSET(PointerArray, count, 0x0);
GUEST_OFFSET(PointerArray, capacity, 0x4);
GUEST_OFFSET(PointerArray, items, 0x8);

inline constexpr guest::Function<0x001391c4, u32(u32, u32, u32)> allocate_in;

void PointerArray__allocate(gptr<PointerArray> array, u32 capacity, u32 heap, u32 r3) {
    u32 count = capacity;
    if (s32(capacity) > 0) {
        u32 items = allocate_in(count << 2, heap, r3);
        capacity = 0u;
        if (items != 0) {
            array->items = items;
            array->count = capacity;
            array->capacity = count;
        }
    }
    guest::cpu()->r[1] = capacity;
}

}  // namespace d_0013187c
GUEST_EXPORT_FRAMED(0x0013187c, d_0013187c::PointerArray__allocate, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_001318c0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Constructs an audio resetter: nothing to reset.
namespace d_001318c0 {

inline constexpr u32 vtable_sead__AudioResetter = 0x009041f4u;

void sead__AudioResetter__AudioResetter(gptr<sead__AudioResetter> audio_resetter) {
    audio_resetter->vtable = vtable_sead__AudioResetter;
    audio_resetter->word_4 = 0;
}

}  // namespace d_001318c0
GUEST_EXPORT(0x001318c0, d_001318c0::sead__AudioResetter__AudioResetter);

// f_00131a88: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Takes the lock unless the current thread holds it already, and counts the nesting.
namespace d_00131a88 {

struct __attribute__((packed)) ThreadLock {
    u8 unknown_0[0x24];  // (not used here)
    u32 owner;
    u32 depth;
};
GUEST_OFFSET(ThreadLock, owner, 0x24);
GUEST_OFFSET(ThreadLock, depth, 0x28);

inline guest::global<u32, 0x009753d0> thread_mgr_instance;
inline constexpr guest::Function<0x00135740, u32(u32, u32)> lock_member_lock;
inline constexpr guest::Function<0x00138c78, u32(u32, u32, u32, u32)> ThreadLocal__get;

u32 ThreadLock__lock(gptr<ThreadLock> lock, u32 r1) {
    u32 depth = 0;
    u32 thread = ThreadLocal__get(*thread_mgr_instance + 0x40u, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 owner = lock->owner;
    if (owner == thread) {
        u32 r0_3 = lock->depth;
        if (s32(r0_3) > 0) {
            depth = r0_3 + 1u;
            lock->depth = depth;
            guest::cpu()->r[1] = owner;
            return depth;
        }
    }
    lock_member_lock(lock.addr() + 8u, owner);
    owner = guest::cpu()->r[1];
    depth = 1u;
    lock->owner = thread;
    lock->depth = depth;
    return depth;
}

}  // namespace d_00131a88
GUEST_EXPORT_FRAMED(0x00131a88, d_00131a88::ThreadLock__lock, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_00131af8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Unlocks a thread lock once: releases it when its depth reaches 0.
namespace d_00131af8 {

struct __attribute__((packed)) ThreadLock {
    u8 unknown_0[0x24];  // (not used here)
    u32 owner;
    u32 depth;
};
GUEST_OFFSET(ThreadLock, owner, 0x24);
GUEST_OFFSET(ThreadLock, depth, 0x28);

inline constexpr guest::Function<0x00137e84, u32(u32, u32)> unlock_member_lock;
inline constexpr guest::Function<0x00138c78, u32(u32)> ThreadLocal__get;

u32 ThreadLock__unlock(gptr<ThreadLock> lock) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    ThreadLocal__get(lock.addr());
    u32 depth = lock->depth - 1u;
    lock->depth = depth;
    if (depth != 0) {
        return depth;
    }
    lock->owner = 0;
    frame.release();
    return unlock_member_lock(lock.addr() + 8u, guest::cpu()->r[1]);
}

}  // namespace d_00131af8
GUEST_EXPORT(0x00131af8, d_00131af8::ThreadLock__unlock);

// f_00131b3c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Builds the sound effect manager's parts: an offset list, the effect memory manager and the 2 x 3 slots.
namespace d_00131b3c {

struct __attribute__((packed)) SoundFxMgrConstructPartsArg0 {
    u32 word_0;
    u32 word_4;
    u8 unknown_8[0x20];  // (not used here)
    u8 byte_28;
};
GUEST_OFFSET(SoundFxMgrConstructPartsArg0, word_0, 0x0);
GUEST_OFFSET(SoundFxMgrConstructPartsArg0, word_4, 0x4);
GUEST_OFFSET(SoundFxMgrConstructPartsArg0, byte_28, 0x28);

inline constexpr guest::Function<0x00137c60, u32(u32)> OffsetList__initialize;
inline constexpr guest::Function<0x00137e9c, u32(u32)> sead__AudioFxMemoryMgrCtr__AudioFxMemoryMgrCtr;
inline constexpr guest::Function<0x001391d8, u32(u32, u32, u32, u32)> allocate;

u32 SoundFxMgr__construct_parts(gptr<SoundFxMgrConstructPartsArg0> sound_fx_mgr, u32 r1_unused, u32 i, u32 r3) {
    u32 j = sound_fx_mgr.addr();
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = 0u;
    sound_fx_mgr->word_0 = r6;
    sound_fx_mgr->word_4 = r6;
    u32 r4 = j;
    sound_fx_mgr->byte_28 = u8(r6);
    u32 block = allocate(0x10u, r5, i, r3);
    if (block != 0) {
        block = OffsetList__initialize(block);
    }
    sound_fx_mgr->word_0 = block;
    u32 block_2 = allocate(0xcu, r5, guest::cpu()->r[2], guest::cpu()->r[3]);
    if (block_2 != 0) {
        block_2 = sead__AudioFxMemoryMgrCtr__AudioFxMemoryMgrCtr(block_2);
    }
    sound_fx_mgr->word_4 = block_2;
    j = 0u;
    do {
        i = 0u;
        r3 = r4 + 8u + j * 0xcu;
        do {
            u32 r1_3 = r4 + 8u;
            if (j < 2u) {
                r1_3 = r3;
            }
            if (i < 3u) {
                r1_3 += (i << 2);
            }
            i += 1u;
            *gptr<u32>(r1_3) = r6;
            guest::preempt();
        } while (s32(i) < 3);
        u32 r1_4 = r4 + 0x20u;
        if (j < 2u) {
            r1_4 += (j << 2);
        }
        j += 1u;
        *gptr<u32>(r1_4) = r6;
        guest::preempt();
    } while (s32(j) < 2);
    return r4;
}

}  // namespace d_00131b3c
GUEST_EXPORT_FRAMED(0x00131b3c, d_00131b3c::SoundFxMgr__construct_parts, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_00131be0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Constructs the sound data manager controller: a dispose callback, nothing loaded.
namespace d_00131be0 {

inline constexpr u32 vtable_sead__AudioSoundDataMgrCtr = 0x009052d0u;
inline constexpr u32 vtable_sead__AudioSoundDataMgrCtr_at_c = 0x009052f0u;
inline constexpr guest::Function<0x00136e0c, u32(u32)> nw__snd__internal__driver__DisposeCallback__DisposeCallback_00136e0c;

u32 sead__AudioSoundDataMgrCtr__AudioSoundDataMgrCtr(gptr<sead__AudioSoundDataMgrCtr> audio_sound_data_mgr_ctr) {
    nw__snd__internal__driver__DisposeCallback__DisposeCallback_00136e0c(audio_sound_data_mgr_ctr.addr());
    audio_sound_data_mgr_ctr->word_220 = 0;
    audio_sound_data_mgr_ctr->vtable = vtable_sead__AudioSoundDataMgrCtr;
    audio_sound_data_mgr_ctr->audio_sound_data_mgr_ctr_vtable = vtable_sead__AudioSoundDataMgrCtr_at_c;
    audio_sound_data_mgr_ctr->word_224 = 0;
    audio_sound_data_mgr_ctr->word_228 = 0;
    audio_sound_data_mgr_ctr->byte_22c = 0;
    guest::cpu()->r[1] = 0u;
    return audio_sound_data_mgr_ctr.addr();
}

}  // namespace d_00131be0
GUEST_EXPORT_FRAMED(0x00131be0, d_00131be0::sead__AudioSoundDataMgrCtr__AudioSoundDataMgrCtr, 0x4010);  // pushes {r4, lr} first, as the original

// f_00131c14: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Inserts at position `index` of the list at +0x28, under the global lock and the object's own when it has one.
namespace d_00131c14 {

struct __attribute__((packed)) Owner {
    u8 unknown_0[0x70];  // (not used here)
    u16 half_70;
};
GUEST_OFFSET(Owner, half_70, 0x70);

struct __attribute__((packed)) Local_00131c14_r5_1 {
    u8 unknown_0[0x8];  // (not used here)
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Local_00131c14_r5_1, word_8, 0x8);
GUEST_OFFSET(Local_00131c14_r5_1, word_c, 0xc);

inline constexpr u32 list_28_lock_address = 0x00ae53d4u;
inline constexpr guest::Function<0x00135740, u32(u32, u32, u32, u32)> lock_member_lock;
inline constexpr guest::Function<0x00137e84, u32(u32, u32)> unlock_member_lock;
inline constexpr guest::Function<0x00138560, u32(u32, u32)> insert_node_after_00138560;

void insert_into_list_28_locked(gptr<Owner> owner, u32 index) {
    guest::StackFrame frame(0x18);  // the original's stack frame
    lock_member_lock(list_28_lock_address, index, guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r4_1 = 0u;
    u32 r1_1 = u32(owner->half_70) & 1u;
    if (r1_1 != 0) {
        r1_1 = 1u;
    }
    if (r1_1 != 0) {
        r4_1 = owner.addr() + 0x54u;
        lock_member_lock(owner.addr() + 0x54u, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
    }
    gptr<Local_00131c14_r5_1> r5_1 = gptr<Local_00131c14_r5_1>(owner.addr() + 0x28u);
    insert_node_after_00138560(r5_1.addr(), r5_1->word_c + index);
    r5_1->word_8 = r5_1->word_8 + 1u;
    if (r4_1 != 0) {
        unlock_member_lock(r4_1, guest::cpu()->r[1]);
    }
    frame.release();
    unlock_member_lock(list_28_lock_address, guest::cpu()->r[1]);
    return;
}

}  // namespace d_00131c14
GUEST_EXPORT(0x00131c14, d_00131c14::insert_into_list_28_locked);

// f_00131e5c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Builds an expandable heap in the memory at `start` (its size rounded up to 4 bytes; null when too small for the
// header).
namespace d_00131e5c {

inline constexpr guest::Function<0x00131dc4, u32(u32, u32, u32, u32)> ExpHeap__alloc_named;
inline constexpr guest::Function<0x00131eb8, u32(u32, u32, u32, u32)> sead__ExpHeap__ExpHeap;

struct __attribute__((packed)) SeadExpHeapCreateAtFrame {
    u32 aligned_size;
    u32 word_4;
    u32 word_8;
    u8 unknown_c[0x4];  // (not read or written by name)
};
GUEST_OFFSET(SeadExpHeapCreateAtFrame, aligned_size, 0x0);
GUEST_OFFSET(SeadExpHeapCreateAtFrame, word_4, 0x4);
GUEST_OFFSET(SeadExpHeapCreateAtFrame, word_8, 0x8);
GUEST_SIZE(SeadExpHeapCreateAtFrame, 0x10);

u32 sead__ExpHeap__create_at(u32 start, u32 size, u32 name, u32 r3) {
    guest::StackFrameOf<SeadExpHeapCreateAtFrame> frame;  // the original's stack frame
    u32 heap = 0;
    u32 aligned_size = size + 3u & ~3u;
    if (aligned_size <= 0xa8u) {
        return 0u;
    }
    if (start == 0) {
        heap = 0u;
    } else {
        frame->aligned_size = aligned_size;
        frame->word_4 = 1;
        frame->word_8 = r3;
        u32 constructed = sead__ExpHeap__ExpHeap(start, name, 0u, start);
        aligned_size = guest::cpu()->r[1];
        name = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        heap = constructed;
    }
    ExpHeap__alloc_named(heap, aligned_size, name, r3);
    return heap;
}

}  // namespace d_00131e5c
GUEST_EXPORT_FRAMED(0x00131e5c, d_00131e5c::sead__ExpHeap__create_at, 0x4010);  // pushes {r4, lr} first, as the original

// f_00131eb8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Constructs an expanding heap over a block, under the heap list lock.
namespace d_00131eb8 {

struct __attribute__((packed)) Local_00131eb8_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_00131eb8_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_00131eb8_ea_1, word_4, 0x4);
GUEST_OFFSET(Local_00131eb8_ea_1, word_8, 0x8);

struct __attribute__((packed)) Local_00131eb8_ea_2 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_00131eb8_ea_2, word_0, 0x0);
GUEST_OFFSET(Local_00131eb8_ea_2, word_4, 0x4);

struct __attribute__((packed)) Local_00131eb8_ea_3 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_00131eb8_ea_3, word_0, 0x0);
GUEST_OFFSET(Local_00131eb8_ea_3, word_4, 0x4);

struct __attribute__((packed)) Heap {
    u32 vtable;
    u8 unknown_4[0x14];  // (not used here)
    u32 exp_heap_vtable;
    u8 unknown_1c[0x54];  // (not used here)
    u16 half_70;
    u8 unknown_72[0x2];  // (not used here)
    u8 byte_74;
    u8 unknown_75[0xf];  // (not used here)
    u32 word_84;
    u32 word_88;
    u8 unknown_8c[0x8];  // (not used here)
    u32 word_94;
};
GUEST_OFFSET(Heap, vtable, 0x0);
GUEST_OFFSET(Heap, exp_heap_vtable, 0x18);
GUEST_OFFSET(Heap, half_70, 0x70);
GUEST_OFFSET(Heap, byte_74, 0x74);
GUEST_OFFSET(Heap, word_84, 0x84);
GUEST_OFFSET(Heap, word_88, 0x88);
GUEST_OFFSET(Heap, word_94, 0x94);

struct __attribute__((packed)) Local_00131eb8_r0_2 {
    u32 word_0;
    u8 unknown_4[0x8];  // (not used here)
    u32 word_c;
};
GUEST_OFFSET(Local_00131eb8_r0_2, word_0, 0x0);
GUEST_OFFSET(Local_00131eb8_r0_2, word_c, 0xc);

inline constexpr u32 vtable_sead__ExpHeap = 0x00905adcu;
inline constexpr u32 vtable_sead__ExpHeap_at_18 = 0x00905b50u;
inline constexpr guest::Function<0x00131c8c, u32(u32, u32, u32, u32)> sead__SafeStringBase_char___SafeStringBase_00131c8c;
inline constexpr guest::Function<0x00135740, u32(u32, u32, u32)> lock_member_lock;
inline constexpr guest::Function<0x00137e84, u32(u32, u32)> unlock_member_lock;

struct __attribute__((packed)) SeadExpHeapExpHeapFrame {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(SeadExpHeapExpHeapFrame, word_0, 0x0);
GUEST_OFFSET(SeadExpHeapExpHeapFrame, word_4, 0x4);
GUEST_OFFSET(SeadExpHeapExpHeapFrame, word_8, 0x8);
GUEST_SIZE(SeadExpHeapExpHeapFrame, 0xc);

u32 sead__ExpHeap__ExpHeap(u32 exp_heap, u32 name, u32 r2) {
    guest::StackFrameOf<SeadExpHeapExpHeapFrame> frame;  // the original's stack frame
    gptr<Local_00131eb8_ea_1> ea_1 = gptr<Local_00131eb8_ea_1>(frame.at(0x18).addr());
    u32 r4_1 = ea_1->word_0;
    u32 r5_1 = ea_1->word_4;
    u32 r12_1 = ea_1->word_8;
    frame->word_0 = r4_1;
    frame->word_4 = r5_1;
    frame->word_8 = r12_1;
    gptr<Heap> heap = gptr<Heap>(sead__SafeStringBase_char___SafeStringBase_00131c8c(exp_heap, name, r2, guest::cpu()->r[3]));
    u32 r5_2 = 0u;
    heap->vtable = vtable_sead__ExpHeap;
    heap->exp_heap_vtable = vtable_sead__ExpHeap_at_18;
    heap->byte_74 = u8(r5_2);
    gptr<Local_00131eb8_r0_2> r0_2 = gptr<Local_00131eb8_r0_2>(heap.addr() + 0x78u);
    u32 r1_1 = ~0u;
    gptr<Local_00131eb8_ea_2> ea_2 = gptr<Local_00131eb8_ea_2>(r0_2.addr() + 4u);
    ea_2->word_0 = r0_2.addr();
    ea_2->word_4 = r5_2;
    r0_2->word_0 = r0_2.addr();
    r0_2->word_c = r1_1;
    u32 r0_3 = heap.addr() + 0x88u;
    gptr<Local_00131eb8_ea_3> ea_3 = gptr<Local_00131eb8_ea_3>(heap.addr() + 0x8cu);
    ea_3->word_0 = r0_3;
    ea_3->word_4 = r5_2;
    heap->word_88 = r0_3;
    heap->word_94 = r1_1;
    u32 r1_2 = heap.addr() + 0x54u;
    u32 r0_4 = u32(heap->half_70) & 1u;
    if (r0_4 != 0) {
        r0_4 = 1u;
    }
    if (r0_4 != 0) {
        r5_2 = r1_2;
        lock_member_lock(r1_2, r1_2, vtable_sead__ExpHeap_at_18);
        r1_2 = guest::cpu()->r[1];
    }
    heap->word_84 = 0;
    heap->word_94 = 0;
    if (r5_2 != 0) {
        unlock_member_lock(r5_2, r1_2);
        r1_2 = guest::cpu()->r[1];
    }
    guest::cpu()->r[1] = r1_2;
    return heap.addr();
}

}  // namespace d_00131eb8
GUEST_EXPORT_FRAMED(0x00131eb8, d_00131eb8::sead__ExpHeap__ExpHeap, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_00131f64: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Creates the root heap over the memory arena (arg 0) and adds it to the root heaps; the heap manager is up.
namespace d_00131f64 {

struct __attribute__((packed)) sead__SafeStringBase_char_ {
    u32 start;
    u32 word_4;
};
GUEST_OFFSET(sead__SafeStringBase_char_, start, 0x0);
GUEST_OFFSET(sead__SafeStringBase_char_, word_4, 0x4);

inline constexpr u32 vtable_sead__SafeStringBase_char__rec = 0x009047f8u;
inline constexpr u32 heap_mgr_address = 0x00975344u;
inline constexpr u32 root_heaps_count_address = 0x00ae53b8u;
inline guest::global<u32, 0x00975338> heap_mgr_instance;
inline guest::global<u32, 0x0097533c> root_memory_arena;
inline guest::global<u32, 0x00975348> heap_mgr_current;
inline guest::global<u32, 0x00ae53b8> root_heaps_count;
inline guest::global<u32, 0x00ae53bc> root_heaps_capacity;
inline guest::global<u32, 0x00ae53c0> root_heaps_data;
inline constexpr guest::Function<0x00131e5c, u32(u32, u32, u32, u32)> sead__ExpHeap__create_at;

struct __attribute__((packed)) CreateRootHeapFrame {
    u32 object_0_vtable;
    u32 word_4;
    u8 unknown_8[0x4];  // (not read or written by name)
};
GUEST_OFFSET(CreateRootHeapFrame, object_0_vtable, 0x0);
GUEST_OFFSET(CreateRootHeapFrame, word_4, 0x4);
GUEST_SIZE(CreateRootHeapFrame, 0xc);

void create_root_heap(gptr<sead__SafeStringBase_char_> safe_string_base_char) {
    guest::StackFrameOf<CreateRootHeapFrame> frame;  // the original's stack frame
    *root_memory_arena = safe_string_base_char.addr();
    *heap_mgr_current = 0;
    u32 start = safe_string_base_char->start;
    u32 r1_1 = safe_string_base_char->word_4;
    frame->word_4 = 0x8a3bc4;
    frame->object_0_vtable = vtable_sead__SafeStringBase_char__rec;
    u32 r0_2 = sead__ExpHeap__create_at(start, r1_1, frame.at(0).addr(), 0u);
    u32 r2_2 = *root_heaps_count;
    if (s32(r2_2) < s32(*root_heaps_capacity)) {
        *gptr<u32>(*root_heaps_data + (r2_2 << 2)) = r0_2;
        *root_heaps_count = *root_heaps_count + 1u;
    }
    *heap_mgr_instance = 0x975344;
}

}  // namespace d_00131f64
GUEST_EXPORT_FRAMED(0x00131f64, d_00131f64::create_root_heap, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_00131fe0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Creates the root heap over the memory (from arg 0's info) under the root lock, as create_root_heap.
namespace d_00131fe0 {

struct __attribute__((packed)) Local_00131fe0_ea_1 {
    u32 start;
    u32 word_4;
};
GUEST_OFFSET(Local_00131fe0_ea_1, start, 0x0);
GUEST_OFFSET(Local_00131fe0_ea_1, word_4, 0x4);

inline constexpr u32 vtable_sead__SafeStringBase_char__rec = 0x009047f8u;
inline constexpr u32 root_memory_arena_address = 0x0097533cu;
inline constexpr u32 heap_mgr_address = 0x00975344u;
inline constexpr u32 root_memory_info_address = 0x00ae53acu;
inline constexpr u32 root_heaps_count_address = 0x00ae53b8u;
inline constexpr u32 list_28_lock_address = 0x00ae53d4u;
inline guest::global<u32, 0x00975338> heap_mgr_instance;
inline guest::global<u32, 0x0097533c> root_memory_arena;
inline guest::global<u32, 0x00975348> heap_mgr_current;
inline guest::global<u32, 0x00ae53b8> root_heaps_count;
inline guest::global<u32, 0x00ae53bc> root_heaps_capacity;
inline guest::global<u32, 0x00ae53c0> root_heaps_data;
inline constexpr guest::Function<0x00131e5c, u32(u32, u32, u32, u32)> sead__ExpHeap__create_at;
inline constexpr guest::Function<0x00135740, u32(u32, u32, u32, u32)> lock_member_lock;
inline constexpr guest::Function<0x00137e84, u32(u32, u32)> unlock_member_lock;
inline constexpr guest::Function<0x001382cc, u32(u32, u32)> init_memory_info;

struct __attribute__((packed)) CreateRootHeapLockedFrame {
    u32 object_0_vtable;
    u32 word_4;
    u8 unknown_8[0x10];  // (not read or written by name)
};
GUEST_OFFSET(CreateRootHeapLockedFrame, object_0_vtable, 0x0);
GUEST_OFFSET(CreateRootHeapLockedFrame, word_4, 0x4);
GUEST_SIZE(CreateRootHeapLockedFrame, 0x18);

void create_root_heap_locked(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<CreateRootHeapLockedFrame> frame;  // the original's stack frame
    lock_member_lock(list_28_lock_address, r1, r2, r3);
    *root_memory_arena = 0xae53ac;
    init_memory_info(root_memory_info_address, r0);
    *heap_mgr_current = 0;
    gptr<Local_00131fe0_ea_1> ea_1 = gptr<Local_00131fe0_ea_1>(*root_memory_arena);
    u32 start = ea_1->start;
    u32 r1_1 = ea_1->word_4;
    frame->word_4 = 0x8a3bc4;
    frame->object_0_vtable = vtable_sead__SafeStringBase_char__rec;
    u32 r0_2 = sead__ExpHeap__create_at(start, r1_1, frame.at(0).addr(), 0u);
    u32 r2_3 = *root_heaps_count;
    if (s32(r2_3) < s32(*root_heaps_capacity)) {
        *gptr<u32>(*root_heaps_data + (r2_3 << 2)) = r0_2;
        *root_heaps_count = *root_heaps_count + 1u;
    }
    *heap_mgr_instance = 0x975344;
    frame.release();
    unlock_member_lock(list_28_lock_address, root_heaps_count_address);
    return;
}

}  // namespace d_00131fe0
GUEST_EXPORT(0x00131fe0, d_00131fe0::create_root_heap_locked);

// f_0013208c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Constructs a framework: no run loop yet, an empty delegate list.
namespace d_0013208c {

inline constexpr u32 vtable_sead__DelegateEvent_void__ = 0x009043ccu;
inline constexpr u32 vtable_sead__Framework = 0x00905f9cu;

void sead__Framework__Framework(gptr<sead__Framework> framework) {
    framework->vtable = vtable_sead__Framework;
    framework->byte_4 = 0;
    framework->word_8 = 0;
    framework->vtable_c = vtable_sead__DelegateEvent_void__;
    u32 r1_1 = framework.addr() + 0x10u;
    framework->word_14 = r1_1;
    framework->word_18 = 0;
    framework->word_10 = r1_1;
    framework->word_1c = 0;
    framework->word_20 = 0;
    framework->word_24 = 0;
}

}  // namespace d_0013208c
GUEST_EXPORT(0x0013208c, d_0013208c::sead__Framework__Framework);

// f_001320cc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Constructs a disposer and registers it with a heap: the given one, else (by mode, arg 2) the heap that
// contains it or the current thread's heap.
namespace d_001320cc {

inline constexpr u32 vtable_sead__IDisposer = 0x00905fecu;
inline constexpr u32 heap_mgr_instance_address = 0x00975338u;
inline guest::global<u32, 0x00975338> heap_mgr_instance;
inline constexpr guest::Function<0x00137ec0, u32(u32, u32, u32, u32)> insert_into_list_40_locked;
inline constexpr guest::Function<0x00138fec, u32(u32, u32, u32, u32)> find_owner_in_heap;
inline constexpr guest::Function<0x003045a8, u32(u32, u32, u32, u32)> current_thread_context;

u32 IDisposer__construct_in_heap(gptr<sead__IDisposer> i_disposer, u32 singleton_disposer, u32 r2) {
    u32 r0 = i_disposer.addr();
    u32 r0_2 = 0;
    i_disposer->vtable = vtable_sead__IDisposer;
    i_disposer->disposer_heap = singleton_disposer;
    i_disposer->word_8 = 0;
    i_disposer->word_c = 0;
    u32 owner = i_disposer->disposer_heap;
    if (owner == 0) {
        if (r2 != 0 && r2 != 1u) {
            if (r2 == 2u) {
                guest::cpu()->r[1] = 0u;
                return r0;
            }
            if (r2 == 3u) {
                goto L_132140;
            }
            guest::cpu()->r[1] = 0u;
            return r0;
        }
        r0_2 = *heap_mgr_instance;
        if (r0_2 == 0) {
            guest::cpu()->r[1] = 0u;
            return r0;
        }
        owner = find_owner_in_heap(r0_2, r0, r2, guest::cpu()->r[3]);
        r2 = guest::cpu()->r[2];
        i_disposer->disposer_heap = owner;
        if (owner == 0) {
            return r0;
        }
        goto L_13215c;
L_132140:;
        u32 r0_3 = *heap_mgr_instance;
        if (r0_3 == 0) {
            guest::cpu()->r[1] = 0u;
            return r0;
        }
        owner = current_thread_context(r0_3, 0u, r2, guest::cpu()->r[3]);
        r2 = guest::cpu()->r[2];
        i_disposer->disposer_heap = owner;
        if (owner == 0) {
            return r0;
        }
    }
L_13215c:;
    insert_into_list_40_locked(owner, r0, r2, guest::cpu()->r[3]);
    return r0;
}

}  // namespace d_001320cc
GUEST_EXPORT_FRAMED(0x001320cc, d_001320cc::IDisposer__construct_in_heap, 0x4010);  // pushes {r4, lr} first, as the original

// f_00132174: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Constructs a disposer and registers it with the heap that contains it (when the heap manager is up).
namespace d_00132174 {

inline constexpr u32 vtable_sead__IDisposer = 0x00905fecu;
inline constexpr u32 heap_mgr_instance_address = 0x00975338u;
inline guest::global<u32, 0x00975338> heap_mgr_instance;
inline constexpr guest::Function<0x00137ec0, u32(u32, u32)> insert_into_list_40_locked;
inline constexpr guest::Function<0x00138fec, u32(u32, u32, u32, u32)> find_owner_in_heap;

u32 IDisposer__construct(gptr<sead__IDisposer> i_disposer) {
    i_disposer->vtable = vtable_sead__IDisposer;
    i_disposer->disposer_heap = 0;
    i_disposer->word_8 = 0;
    i_disposer->word_c = 0;
    u32 r0_1 = *heap_mgr_instance;
    if (r0_1 == 0) {
        guest::cpu()->r[1] = 0u;
        return i_disposer.addr();
    }
    u32 owner = find_owner_in_heap(r0_1, i_disposer.addr(), guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r1_1 = guest::cpu()->r[1];
    if (owner != 0) {
        r1_1 = i_disposer.addr();
    }
    i_disposer->disposer_heap = owner;
    if (owner != 0) {
        insert_into_list_40_locked(owner, r1_1);
        r1_1 = guest::cpu()->r[1];
    }
    guest::cpu()->r[1] = r1_1;
    return i_disposer.addr();
}

}  // namespace d_00132174
GUEST_EXPORT_FRAMED(0x00132174, d_00132174::IDisposer__construct, 0x4010);  // pushes {r4, lr} first, as the original

// f_001321c8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Creates the singleton on a heap (arg 0), with its disposer, unless it exists.
namespace d_001321c8 {

inline constexpr u32 vtable_sead__ThreadMgr__SingletonDisposer_ = 0x0090600cu;
inline guest::global<u32, 0x009753d0> thread_mgr_instance;
inline guest::global<u32, 0x009753d4> global_009753d4;
inline constexpr guest::Function<0x00131280, u32(u32, u32, u32, u32)> allocate_on_heap_entry;
inline constexpr guest::Function<0x001320cc, u32(u32, u32, u32)> IDisposer__construct_in_heap;
inline constexpr guest::Function<0x001385fc, u32(u32, u32, u32)> sead__ThreadMgr__ThreadMgr;

void sead__ThreadMgr__create_instance(u32 singleton_disposer) {
    u32 r0_3 = 0;
    if (*thread_mgr_instance == 0) {
        u32 r2_1 = 4u;
        u32 r1_1 = singleton_disposer;
        u32 block_2 = allocate_on_heap_entry(0x44u, r1_1, r2_1, guest::cpu()->r[3]);
        u32 i_disposer = block_2 + 4u;
        if (i_disposer != 0) {
            r1_1 = singleton_disposer;
            r2_1 = 3u;
            i_disposer = IDisposer__construct_in_heap(i_disposer, r1_1, r2_1);
            *gptr<u32>(i_disposer) = vtable_sead__ThreadMgr__SingletonDisposer_;
        }
        *global_009753d4 = i_disposer;
        if (block_2 == 0) {
            r0_3 = 0u;
        } else {
            r0_3 = sead__ThreadMgr__ThreadMgr(block_2, r1_1, r2_1);
        }
        *thread_mgr_instance = r0_3;
    }
}

}  // namespace d_001321c8
GUEST_EXPORT_FRAMED(0x001321c8, d_001321c8::sead__ThreadMgr__create_instance, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_001323b4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Calls virtual 8 of the object at offset 0x10 (with 0).
namespace d_001323b4 {

inline constexpr guest::Function<0x00136cb0, u32(u32, u32, u32, u32)> call_virtual_8_with_0;

u32 layout_at_10_virtual_8(u32 r0) {
    return call_virtual_8_with_0(r0 + 0x10u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_001323b4
GUEST_EXPORT(0x001323b4, d_001323b4::layout_at_10_virtual_8);

// f_00132530: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Joins the thread a pair holds (when running), then clears the pair.
namespace d_00132530 {

struct __attribute__((packed)) Pair {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Pair, word_0, 0x0);
GUEST_OFFSET(Pair, word_4, 0x4);

inline constexpr guest::Function<0x0013d040, u32(u32, u32, u32, u32)> Thread__join_if_running;

void Thread__join_and_clear(gptr<Pair> pair) {
    u32 r0_1 = pair->word_0;
    if (r0_1 == 0) {
        return;
    }
    Thread__join_if_running(r0_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    pair->word_0 = 0;
    pair->word_4 = 0;
}

}  // namespace d_00132530
GUEST_EXPORT_FRAMED(0x00132530, d_00132530::Thread__join_and_clear, 0x4010);  // pushes {r4, lr} first, as the original

// f_001325a0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Destroys the 56 and 2 slot entries and the table at +0xf0.
namespace d_001325a0 {

inline constexpr guest::Function<0x00134fec, u32(u32, u32, u32, u32)> destroy_eight_patterns;
inline constexpr guest::Function<0x002f76ad, u32(u32, u32, u32, u32)> destroy_array_elements;

u32 SlotList56__destruct(u32 slot_list56, u32 r1, u32 r2, u32 r3) {
    u32 r0_1 = slot_list56 + 0xf0u;
    destroy_eight_patterns(r0_1, r1, r2, r3);
    destroy_array_elements(r0_1 - 8u, 0x134fe8u, 4u, 2u);
    destroy_array_elements(r0_1 - 0xe8u, 0x134fe8u, 4u, 0x38u);
    return r0_1 - 0xf0u;
}

}  // namespace d_001325a0
GUEST_EXPORT_FRAMED(0x001325a0, d_001325a0::SlotList56__destruct, 0x4010);  // pushes {r4, lr} first, as the original

// f_0013293c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Destroys the town map: the 20 small blocks, the 20 acre blocks and the 42 terrain ids.
namespace d_0013293c {

inline constexpr guest::Function<0x002f76ad, u32(u32, u32, u32, u32)> destroy_array_elements;

u32 Town__destruct_map(u32 town) {
    u32 r0_1 = town + 0x6480u;
    destroy_array_elements(r0_1 - 0x1428u, 0x134f6cu, 0x100u, 0x14u);
    destroy_array_elements(r0_1 - 0x6428u, 0x138b98u, 0x400u, 0x14u);
    destroy_array_elements(r0_1 - 0x647cu, 0x138ab0u, 2u, 0x2au);
    return r0_1 - 0x6480u;
}

}  // namespace d_0013293c
GUEST_EXPORT_FRAMED(0x0013293c, d_0013293c::Town__destruct_map, 0x4010);  // pushes {r4, lr} first, as the original

// f_001329a8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Removes an object (unless null) from the flagged objects' list.
namespace d_001329a8 {

inline constexpr u32 flagged_objects_address = 0x00986f10u;
inline constexpr guest::Function<0x00138bbc, u32(u32, u32)> PtrList__remove;

u32 prepare_flagged_object(u32 r0, u32 r1) {
    if (r0 == 0) {
        return r0;
    }
    return PtrList__remove(flagged_objects_address, r0);
}

}  // namespace d_001329a8
GUEST_EXPORT(0x001329a8, d_001329a8::prepare_flagged_object);

// f_001330fc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether the child at +4 has its field set.
namespace d_001330fc {

struct __attribute__((packed)) HasActiveChildAt4Arg0 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
};
GUEST_OFFSET(HasActiveChildAt4Arg0, word_4, 0x4);

inline constexpr guest::Function<0x00138c88, u32(u32)> field_nonzero_138c88;

u32 has_active_child_at_4(gptr<HasActiveChildAt4Arg0> arg0) {
    u32 r0_1 = arg0->word_4;
    if (r0_1 == 0) {
        return r0_1;
    }
    u32 r0_2 = field_nonzero_138c88(r0_1);
    if (r0_2 != 0) {
        r0_2 = 1u;
    }
    return r0_2;
}

}  // namespace d_001330fc
GUEST_EXPORT_FRAMED(0x001330fc, d_001330fc::has_active_child_at_4, 0x4010);  // pushes {r4, lr} first, as the original

// f_00133580: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The file device for a path (arg 1): the one its drive prefix names, else the default; the rest of the
// path goes to arg 2 when given.
namespace d_00133580 {

struct __attribute__((packed)) Local_00133580_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_00133580_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_00133580_ea_1, word_4, 0x4);

inline constexpr u32 vtable_sead__FixedSafeString_32_ = 0x009048ecu;
inline guest::global<u8, 0x008c9f1c> empty_string;
inline constexpr guest::Function<0x00137fa4, u32(u32, u32, u32, u32)> sead__SafeStringBase_char___SafeStringBase_00137fa4;
inline constexpr guest::Function<0x0013805c, u32(u32, u32)> sead__SafeStringBase_char___SafeStringBase_0013805c;
inline constexpr guest::Function<0x00138f3c, u32(u32, u32)> ResourceFactory__find_by_name;

struct __attribute__((packed)) FileDeviceMgrDeviceForPathFrame {
    u32 object_0_vtable;
    u32 word_4;
    u8 unknown_8[0x4];  // (not read or written by name)
    u8 byte_c;
    u8 unknown_d[0x23];  // (not read or written by name)
};
GUEST_OFFSET(FileDeviceMgrDeviceForPathFrame, object_0_vtable, 0x0);
GUEST_OFFSET(FileDeviceMgrDeviceForPathFrame, word_4, 0x4);
GUEST_OFFSET(FileDeviceMgrDeviceForPathFrame, byte_c, 0xc);
GUEST_SIZE(FileDeviceMgrDeviceForPathFrame, 0x30);

u32 FileDeviceMgr__device_for_path(u32 r0, u32 r1, u32 r2) {
    guest::StackFrameOf<FileDeviceMgrDeviceForPathFrame> frame;  // the original's stack frame
    u32 r4_1 = 0;
    gptr<Local_00133580_ea_1> ea_1 = gptr<Local_00133580_ea_1>(frame.at(4).addr());
    ea_1->word_0 = frame.at(0xc).addr();
    ea_1->word_4 = 0x20;
    u32 r3_1 = *empty_string;
    *gptr<u8>(frame->word_4 + 0x1fu) = u8(r3_1);
    frame->byte_c = *empty_string;
    frame->object_0_vtable = vtable_sead__FixedSafeString_32_;
    if (sead__SafeStringBase_char___SafeStringBase_00137fa4(frame.at(0).addr(), r1, 0x20u, r3_1) != 0) {
        u32 by_name = ResourceFactory__find_by_name(r0, frame.at(0).addr());
        r4_1 = by_name;
    } else {
        r4_1 = *gptr<u32>(r0 + 0x1cu);
        if (r4_1 == 0) {
            return 0u;
        }
    }
    if (r2 != 0) {
        sead__SafeStringBase_char___SafeStringBase_0013805c(r2, r1);
    }
    return r4_1;
}

}  // namespace d_00133580
GUEST_EXPORT_FRAMED(0x00133580, d_00133580::FileDeviceMgr__device_for_path, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_001342a4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Calls 00135f34 with 1 as the stack argument.
namespace d_001342a4 {

inline constexpr guest::Function<0x00135f34, u32(u32, u32, u32, u32)> ErrorReport__send_generic;

struct __attribute__((packed)) ErrorReportSendGeneric1Frame {
    u32 word_0;
};
GUEST_OFFSET(ErrorReportSendGeneric1Frame, word_0, 0x0);
GUEST_SIZE(ErrorReportSendGeneric1Frame, 0x4);

void ErrorReport__send_generic_1(u32 r0_unused, u32 r1_unused, u32 r2_unused, u32 r3) {
    guest::StackFrameOf<ErrorReportSendGeneric1Frame> frame;  // the original's stack frame
    frame->word_0 = r3;
    frame->word_0 = 1;
    ErrorReport__send_generic(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], r3);
}

}  // namespace d_001342a4
GUEST_EXPORT_FRAMED(0x001342a4, d_001342a4::ErrorReport__send_generic_1, 0x4000);  // pushes {lr} first, as the original

// f_001342b8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Forwards to 00136344 with the three stack arguments.
namespace d_001342b8 {

struct __attribute__((packed)) Local_001342b8_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_001342b8_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_001342b8_ea_1, word_4, 0x4);
GUEST_OFFSET(Local_001342b8_ea_1, word_8, 0x8);

inline constexpr guest::Function<0x00136344, u32(u32, u32, u32, u32)> ErrorReport__send_exception;

struct __attribute__((packed)) ErrorReportSendExceptionForwardFrame {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(ErrorReportSendExceptionForwardFrame, word_0, 0x0);
GUEST_OFFSET(ErrorReportSendExceptionForwardFrame, word_4, 0x4);
GUEST_OFFSET(ErrorReportSendExceptionForwardFrame, word_8, 0x8);
GUEST_SIZE(ErrorReportSendExceptionForwardFrame, 0xc);

void ErrorReport__send_exception_forward() {
    guest::StackFrameOf<ErrorReportSendExceptionForwardFrame> frame;  // the original's stack frame
    gptr<Local_001342b8_ea_1> ea_1 = gptr<Local_001342b8_ea_1>(frame.at(0x18).addr());
    u32 r4_1 = ea_1->word_0;
    u32 r5_1 = ea_1->word_4;
    u32 r12_1 = ea_1->word_8;
    frame->word_0 = r4_1;
    frame->word_4 = r5_1;
    frame->word_8 = r12_1;
    ErrorReport__send_exception(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_001342b8
GUEST_EXPORT_FRAMED(0x001342b8, d_001342b8::ErrorReport__send_exception_forward, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_001342d8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Forwards to 00136014 with the four stack arguments.
namespace d_001342d8 {

struct __attribute__((packed)) Local_001342d8_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Local_001342d8_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_001342d8_ea_1, word_4, 0x4);
GUEST_OFFSET(Local_001342d8_ea_1, word_8, 0x8);
GUEST_OFFSET(Local_001342d8_ea_1, word_c, 0xc);

inline constexpr guest::Function<0x00136014, u32(u32, u32, u32, u32)> ErrorReport__send_result;

struct __attribute__((packed)) ErrorReportSendResultForwardFrame {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(ErrorReportSendResultForwardFrame, word_0, 0x0);
GUEST_OFFSET(ErrorReportSendResultForwardFrame, word_4, 0x4);
GUEST_OFFSET(ErrorReportSendResultForwardFrame, word_8, 0x8);
GUEST_OFFSET(ErrorReportSendResultForwardFrame, word_c, 0xc);
GUEST_SIZE(ErrorReportSendResultForwardFrame, 0x10);

void ErrorReport__send_result_forward() {
    guest::StackFrameOf<ErrorReportSendResultForwardFrame> frame;  // the original's stack frame
    gptr<Local_001342d8_ea_1> ea_1 = gptr<Local_001342d8_ea_1>(frame.at(0x20).addr());
    u32 r4_1 = ea_1->word_0;
    u32 r5_1 = ea_1->word_4;
    u32 r6_1 = ea_1->word_8;
    u32 r12_1 = ea_1->word_c;
    frame->word_0 = r4_1;
    frame->word_4 = r5_1;
    frame->word_8 = r6_1;
    frame->word_c = r12_1;
    ErrorReport__send_result(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_001342d8
GUEST_EXPORT_FRAMED(0x001342d8, d_001342d8::ErrorReport__send_result_forward, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_001342f8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Forwards to 00136188 with the four stack arguments.
namespace d_001342f8 {

struct __attribute__((packed)) Local_001342f8_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Local_001342f8_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_001342f8_ea_1, word_4, 0x4);
GUEST_OFFSET(Local_001342f8_ea_1, word_8, 0x8);
GUEST_OFFSET(Local_001342f8_ea_1, word_c, 0xc);

inline constexpr guest::Function<0x00136188, u32(u32, u32, u32, u32)> ErrorReport__send_failure;

struct __attribute__((packed)) ErrorReportSendFailureForwardFrame {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(ErrorReportSendFailureForwardFrame, word_0, 0x0);
GUEST_OFFSET(ErrorReportSendFailureForwardFrame, word_4, 0x4);
GUEST_OFFSET(ErrorReportSendFailureForwardFrame, word_8, 0x8);
GUEST_OFFSET(ErrorReportSendFailureForwardFrame, word_c, 0xc);
GUEST_SIZE(ErrorReportSendFailureForwardFrame, 0x10);

void ErrorReport__send_failure_forward() {
    guest::StackFrameOf<ErrorReportSendFailureForwardFrame> frame;  // the original's stack frame
    gptr<Local_001342f8_ea_1> ea_1 = gptr<Local_001342f8_ea_1>(frame.at(0x20).addr());
    u32 r4_1 = ea_1->word_0;
    u32 r5_1 = ea_1->word_4;
    u32 r6_1 = ea_1->word_8;
    u32 r12_1 = ea_1->word_c;
    frame->word_0 = r4_1;
    frame->word_4 = r5_1;
    frame->word_8 = r6_1;
    frame->word_c = r12_1;
    ErrorReport__send_failure(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_001342f8
GUEST_EXPORT_FRAMED(0x001342f8, d_001342f8::ErrorReport__send_failure_forward, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_00134318: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The mounted archive whose name is the path's prefix up to ':' (at most 8 characters); null when none.
namespace d_00134318 {

struct __attribute__((packed)) Local_00134318_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_00134318_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_00134318_ea_1, word_4, 0x4);

struct __attribute__((packed)) Local_00134318_r5_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_00134318_r5_1, word_0, 0x0);
GUEST_OFFSET(Local_00134318_r5_1, word_4, 0x4);

inline constexpr u32 archive_list_address = 0x00ae0cc8u;

u32 find_archive(u32 path) {
    u32 r0_1 = 0;
    u32 name_low = 0u;
    u32 name_high = name_low;
    u32 i = name_low;
L_134328:;
    u32 r12_1 = gptr<u16>(path)[i];
    if (r12_1 != 0x3au) {
        u32 r12_2 = sxtb(r12_1);
        i += 1u;
        u32 r2_1 = name_low >> 0x18 | name_high << 8;
        name_low = r12_2 | name_low << 8;
        name_high = r2_1 | u32(s32(r12_2) >> 0x1f);
        if (s32(i) < 8) {
            guest::preempt();
            goto L_134328;
        }
        name_low = 0u;
        name_high = name_low;
    }
    if ((name_low | name_high) != 0) {
        i = archive_list_address;
        path = 0u;
        do {
            gptr<Local_00134318_r5_1> r5_1 = gptr<Local_00134318_r5_1>(i + (path << 4));
            if ((r5_1->word_0 ^ name_low | r5_1->word_4 ^ name_high) == 0) {
                r0_1 = i + (path << 4);
            } else {
                gptr<Local_00134318_ea_1> ea_1 = gptr<Local_00134318_ea_1>(r5_1.addr() + 0x10u);
                if ((ea_1->word_4 ^ name_high | ea_1->word_0 ^ name_low) != 0) {
                    goto L_1343c8;
                }
                r0_1 = i + (path << 4) + 0x10u;
            }
            if (r0_1 != 0) {
                u32 r0_2 = *gptr<u32>(r0_1 + 8u);
                guest::cpu()->r[1] = name_low;
                return r0_2;
            }
            break;
L_1343c8:;
            path += 2u;
            guest::preempt();
        } while (s32(path) < 0x20);
    }
    guest::cpu()->r[1] = name_low;
    return 0u;
}

}  // namespace d_00134318
GUEST_EXPORT_FRAMED(0x00134318, d_00134318::find_archive, 0x30);  // pushes {r4, r5} first, as the original

// f_001343e4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Constructs a 256-character fixed string, empty.
namespace d_001343e4 {

inline constexpr u32 vtable_sead__FixedSafeString_256_ = 0x009048b0u;
inline constexpr u32 vtable_sead__FixedSafeStringBase_char__256_ = 0x009050f8u;
inline constexpr u32 vtable_sead__BufferedSafeStringBase_char_ = 0x0090558cu;
inline guest::global<u8, 0x008c9f1c> empty_string;

void FixedSafeString256__construct(gptr<sead__FixedSafeString_256_> fixed_safe_string) {
    fixed_safe_string->word_4 = fixed_safe_string.addr() + 0xcu;
    fixed_safe_string->vtable = vtable_sead__BufferedSafeStringBase_char_;
    fixed_safe_string->word_8 = 0x100;
    *gptr<u8>(fixed_safe_string->word_4 + 0xffu) = *empty_string;
    fixed_safe_string->vtable = vtable_sead__FixedSafeStringBase_char__256_;
    *gptr<u8>(fixed_safe_string->word_4) = *empty_string;
    fixed_safe_string->vtable = vtable_sead__FixedSafeString_256_;
    guest::cpu()->r[1] = vtable_sead__FixedSafeString_256_;
}

}  // namespace d_001343e4
GUEST_EXPORT(0x001343e4, d_001343e4::FixedSafeString256__construct);

// f_00134440: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// From `from` to `to` in `count` steps: the value at step `step` (`to` once done).
namespace d_00134440 {

struct __attribute__((packed)) Interpolation {
    float from;
    float to;
    u32 count;
    u32 step;
};
GUEST_OFFSET(Interpolation, from, 0x0);
GUEST_OFFSET(Interpolation, to, 0x4);
GUEST_OFFSET(Interpolation, count, 0x8);
GUEST_OFFSET(Interpolation, step, 0xc);


void Interpolation__value(gptr<Interpolation> interpolation, float S0_unused, float S1) {
    float to = interpolation->to;
    u32 count = interpolation->count;
    u32 step = interpolation->step;
    if (s32(step) >= s32(count)) {
        guest::cpu()->r[1] = count;
        guest::cpu()->s[0] = to;
        return;
    }
    float from = interpolation->from;
    float S0_2 = (to - from) * float(s32(step)) / float(s32(count)) + from;
    guest::cpu()->r[1] = count;
    guest::cpu()->s[0] = S0_2;
    guest::cpu()->s[1] = from;
}

}  // namespace d_00134440
GUEST_EXPORT(0x00134440, d_00134440::Interpolation__value);

// f_00134f04: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Releases the object at 0x975270 (its virtual 1) and clears it.
namespace d_00134f04 {

inline constexpr u32 release_object_a_address = 0x00975268u;
inline constexpr u32 release_object_b_address = 0x00975270u;
inline guest::global<u32, 0x00975270> release_object_b;
inline constexpr guest::Function<0x00139668, u32(u32, u32, u32, u32)> call_virtual_1_139668;

void release_object_975270() {
    call_virtual_1_139668(*release_object_b, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    *release_object_b = 0;
}

}  // namespace d_00134f04
GUEST_EXPORT_FRAMED(0x00134f04, d_00134f04::release_object_975270, 0x4010);  // pushes {r4, lr} first, as the original

// f_00134f24: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Unmounts the CFL resource archive, when mounted.
namespace d_00134f24 {

inline guest::global<u8, 0x00975268> release_object_a;
inline constexpr guest::Function<0x00135520, u32(u32)> cfl_unmount_135520;

void unmount_cfl_resources() {
    if (*release_object_a == 0) {
        return;
    }
    cfl_unmount_135520(0x134f50u);
    *release_object_a = 0;
}

}  // namespace d_00134f24
GUEST_EXPORT_FRAMED(0x00134f24, d_00134f24::unmount_cfl_resources, 0x4010);  // pushes {r4, lr} first, as the original

// f_00134f70: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Constructs a fader: volume and target 0, no fade running.
namespace d_00134f70 {

inline constexpr u32 vtable_SoundFaderEx = 0x008ed7f4u;

void SoundFaderEx__SoundFaderEx(gptr<SoundFaderEx> sound_fader_ex) {
    float S0_1 = 0.0f;
    sound_fader_ex->word_4 = std::bit_cast<u32>(S0_1);
    sound_fader_ex->word_8 = std::bit_cast<u32>(S0_1);
    sound_fader_ex->float_c = S0_1;
    sound_fader_ex->res = ~0u;
    sound_fader_ex->word_14 = 0;
    sound_fader_ex->vtable = vtable_SoundFaderEx;
    guest::cpu()->s[0] = S0_1;
}

}  // namespace d_00134f70
GUEST_EXPORT(0x00134f70, d_00134f70::SoundFaderEx__SoundFaderEx);

// f_00134fec: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Destroys eight 0x878-byte pattern records.
namespace d_00134fec {

inline constexpr guest::Function<0x002f76ad, u32(u32, u32, u32, u32)> destroy_array_elements;

u32 destroy_eight_patterns(u32 r0) {
    destroy_array_elements(r0, 0x139d20u, 0x878u, 8u);
    return r0;
}

}  // namespace d_00134fec
GUEST_EXPORT_FRAMED(0x00134fec, d_00134fec::destroy_eight_patterns, 0x4010);  // pushes {r4, lr} first, as the original

// f_00135010: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// For slot `index` (below 6) not playing: trims its queue past `count` (under its lock); true when the slot is set.
namespace d_00135010 {

struct __attribute__((packed)) Local_00135010_r5_1 {
    u8 unknown_0[0x14];  // (not used here)
    u32 word_14;
};
GUEST_OFFSET(Local_00135010_r5_1, word_14, 0x14);

inline constexpr guest::Function<0x00135748, u32(u32, u32)> RecursiveLock__lock;
inline constexpr guest::Function<0x001357ec, u32(u32)> RecursiveLock__unlock;
inline constexpr guest::Function<0x00138f30, u32(u32)> List__last_index;
inline constexpr guest::Function<0x0013b6e0, u32(u32, u32)> SoundPlayer__stop_from;
inline constexpr guest::Function<0x0013c0e8, u32(u32, u32, u32, u32)> state_is_1_or_2;

u32 SoundSlots__trim_queue(u32 sound_slots, u32 r1, u32 r2) {
    u32 r7_1 = r1;
    if (r2 < 6u) {
        gptr<Local_00135010_r5_1> r5_1 = gptr<Local_00135010_r5_1>(sound_slots + (r2 << 2));
        r1 = r5_1->word_14;
        if (r1 != 0) {
            u32 r1_1 = r2 * 3u;
            u32 r0_2 = state_is_1_or_2(sound_slots + (r1_1 << 3) + 0x2cu, r1_1, r2, guest::cpu()->r[3]);
            r1 = guest::cpu()->r[1];
            if (r0_2 == 0) {
                u32 r4_1 = r5_1->word_14;
                RecursiveLock__lock(r4_1 + 4u, r1);
                u32 r0_4 = List__last_index(r4_1 + 0x10u);
                RecursiveLock__unlock(r4_1 + 4u);
                if (s32(r0_4) > s32(r7_1)) {
                    SoundPlayer__stop_from(r5_1->word_14, r7_1);
                }
                return 1u;
            }
        }
    }
    guest::cpu()->r[1] = r1;
    return 0u;
}

}  // namespace d_00135010
GUEST_EXPORT_FRAMED(0x00135010, d_00135010::SoundSlots__trim_queue, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_00135134: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Constructs a one-sequence melody player's base: no sequence, not playing.
namespace d_00135134 {

inline constexpr u32 vtable_SoundMelodyPlayerOneSeqBase = 0x008f701cu;

void SoundMelodyPlayerOneSeqBase__SoundMelodyPlayerOneSeqBase(gptr<SoundMelodyPlayerOneSeqBase> sound_melody_player_one_seq_base) {
    sound_melody_player_one_seq_base->vtable = vtable_SoundMelodyPlayerOneSeqBase;
    sound_melody_player_one_seq_base->word_4 = 0;
    sound_melody_player_one_seq_base->word_8 = 0;
    sound_melody_player_one_seq_base->word_c = 0;
    sound_melody_player_one_seq_base->byte_10 = 0;
    sound_melody_player_one_seq_base->byte_11 = 0;
}

}  // namespace d_00135134
GUEST_EXPORT(0x00135134, d_00135134::SoundMelodyPlayerOneSeqBase__SoundMelodyPlayerOneSeqBase);

// f_001352dc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Keeps a value at 0x974f10 and sends it with request 0xb0500c8.
namespace d_001352dc {

inline guest::global<u32, 0x00974f10> file_server_archive_count;
inline constexpr guest::Function<0x0013a1f0, u32(u32, u32, u32, u32)> ipc_command_861;

struct __attribute__((packed)) SetErrorContextFrame {
    u32 word_0;
};
GUEST_OFFSET(SetErrorContextFrame, word_0, 0x0);
GUEST_SIZE(SetErrorContextFrame, 0x4);

void set_error_context(u32 r0, u32 r1_unused, u32 r2_unused, u32 r3) {
    guest::StackFrameOf<SetErrorContextFrame> frame;  // the original's stack frame
    frame->word_0 = r3;
    *file_server_archive_count = r0;
    frame->word_0 = r0;
    ipc_command_861(frame.at(0).addr(), 0xb0500c8u, guest::cpu()->r[2], r3);
}

}  // namespace d_001352dc
GUEST_EXPORT_FRAMED(0x001352dc, d_001352dc::set_error_context, 0x4000);  // pushes {lr} first, as the original

// f_00135384: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Checks a list of results, reporting a fatal error for a failing one.
namespace d_00135384 {

struct __attribute__((packed)) Local_00135384_r1_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_00135384_r1_1, word_0, 0x0);
GUEST_OFFSET(Local_00135384_r1_1, word_4, 0x4);

struct __attribute__((packed)) Local_00135384_r2_2 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u8 byte_c;
    u8 byte_d;
};
GUEST_OFFSET(Local_00135384_r2_2, word_0, 0x0);
GUEST_OFFSET(Local_00135384_r2_2, word_4, 0x4);
GUEST_OFFSET(Local_00135384_r2_2, word_8, 0x8);
GUEST_OFFSET(Local_00135384_r2_2, byte_c, 0xc);
GUEST_OFFSET(Local_00135384_r2_2, byte_d, 0xd);

inline constexpr u32 archive_list_address = 0x00ae0cc8u;
inline constexpr guest::Function<0x00134250, u32(u32, u32, u32, u32)> fatal_result;

u32 fatal_with_list_check(u32 i, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0xc);  // the original's stack frame
    u32 r12 = 0;
    u32 r14 = 0;
    u32 r0_1 = 0;
    u32 r4 = r1;
    u32 r6 = r3;
    u32 r5 = r2;
    r1 = 0u;
    r3 = frame.at(0).addr();
L_1353a0:;
    u32 r2_1 = *gptr<s8>(i + r1);
    if (r2_1 != 0 && r2_1 != 0x3au) {
        *gptr<u8>(r3 + r1) = u8(r2_1);
        r1 += 1u;
        if (s32(r1) < 8) {
            guest::preempt();
            goto L_1353a0;
        }
        fatal_result(i, r1, r2_1, r3);
        r2 = 0x89d9d8u;
        r12 = 0u;
        r14 = r12;
        i = r12;
        do {
            r1 = *gptr<s8>(r2 + i);
            if (r1 == 0x3au) {
                goto L_135450;
            }
            i += 1u;
            r14 = r12 >> 0x18 | r14 << 8;
            r12 = r1 | r12 << 8;
            r14 |= u32(s32(r1) >> 0x1f);
            guest::preempt();
        } while (s32(i) < 8);
    } else {
        r12 = 0u;
        *gptr<u8>(r3 + r1) = 0x3a;
        r14 = r12;
        r2 = r3;
        i = r12;
        do {
            r1 = *gptr<s8>(r2 + i);
            if (r1 == 0x3au) {
                goto L_135450;
            }
            i += 1u;
            r14 = r12 >> 0x18 | r14 << 8;
            r12 = r1 | r12 << 8;
            r14 |= u32(s32(r1) >> 0x1f);
            guest::preempt();
        } while (s32(i) < 8);
    }
    r12 = 0u;
    r14 = r12;
L_135450:;
    if ((r12 | r14) == 0) {
        r0_1 = 0xe0e046bcu;
    } else {
        r3 = archive_list_address;
        r1 = 0u;
L_135464:;
        gptr<Local_00135384_r2_2> r2_2 = gptr<Local_00135384_r2_2>(r3 + (r1 << 4));
        if (r2_2->word_8 == 0) {
            gptr<Local_00135384_r1_1> r1_1 = gptr<Local_00135384_r1_1>(r3 + (r1 << 4));
            r1_1->word_0 = r12;
            r1_1->word_4 = r14;
            r2_2->word_8 = r4;
            r2_2->byte_c = u8(r5);
            r2_2->byte_d = u8(r6);
            guest::cpu()->r[1] = r1_1.addr();
            return 0u;
        }
        if ((r2_2->word_0 ^ r12 | r2_2->word_4 ^ r14) != 0) {
            r1 += 1u;
            if (s32(r1) >= 0x20) {
                guest::cpu()->r[1] = r1;
                return 0xd8604659u;
            }
            guest::preempt();
            goto L_135464;
        }
        r0_1 = 0xc82044b4u;
    }
    guest::cpu()->r[1] = r1;
    return r0_1;
}

}  // namespace d_00135384
GUEST_EXPORT_FRAMED(0x00135384, d_00135384::fatal_with_list_check, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_00135720: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Releases the memory block (from the block pool at 0xae0f64) when it has one (+8).
namespace d_00135720 {

struct __attribute__((packed)) ReleaseMemoryBlockIfSetArg0 {
    u8 unknown_0[0x8];  // (not used here)
    u32 word_8;
};
GUEST_OFFSET(ReleaseMemoryBlockIfSetArg0, word_8, 0x8);

inline constexpr u32 memory_block_list_address = 0x00ae0f64u;
inline constexpr guest::Function<0x0013e0ec, u32(u32, u32, u32, u32)> MemoryPool__free_pages;

void release_memory_block_if_set(gptr<ReleaseMemoryBlockIfSetArg0> arg0) {
    u32 r1_1 = arg0->word_8;
    if (r1_1 == 0) {
        guest::cpu()->r[1] = r1_1;
        return;
    }
    MemoryPool__free_pages(memory_block_list_address, arg0.addr(), guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_00135720
GUEST_EXPORT(0x00135720, d_00135720::release_memory_block_if_set);

// f_00135748: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Takes the lock unless this thread already holds it, and counts the nesting.
namespace d_00135748 {

struct __attribute__((packed)) RecursiveLock {
    u8 unknown_0[0x4];  // (not used here)
    u32 owner;
    u32 depth;
};
GUEST_OFFSET(RecursiveLock, owner, 0x4);
GUEST_OFFSET(RecursiveLock, depth, 0x8);

inline constexpr guest::Function<0x0012f050, u32(u32, u32, u32, u32)> LightEvent__clear;

u32 RecursiveLock__lock(gptr<RecursiveLock> lock) {
    u32 owner = lock->owner;
    if (guest::cpu()->tls != owner) {
        LightEvent__clear(lock.addr(), owner, guest::cpu()->r[2], guest::cpu()->r[3]);
        owner = guest::cpu()->r[1];
        lock->owner = guest::cpu()->tls;
    }
    u32 depth = lock->depth + 1u;
    lock->depth = depth;
    guest::cpu()->r[1] = owner;
    return depth;
}

}  // namespace d_00135748
GUEST_EXPORT_FRAMED(0x00135748, d_00135748::RecursiveLock__lock, 0x4010);  // pushes {r4, lr} first, as the original

// f_001357ec: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Ends one level of holding the lock; the last one clears the owner and releases it.
namespace d_001357ec {

struct __attribute__((packed)) RecursiveLock {
    u8 unknown_0[0x4];  // (not used here)
    u32 owner;
    u32 depth;
};
GUEST_OFFSET(RecursiveLock, owner, 0x4);
GUEST_OFFSET(RecursiveLock, depth, 0x8);

inline constexpr guest::Function<0x00128c70, u32(u32, u32)> LightEvent__signal;

u32 RecursiveLock__unlock(gptr<RecursiveLock> lock) {
    u32 depth = lock->depth - 1u;
    lock->depth = depth;
    if (depth != 0) {
        guest::cpu()->r[1] = depth;
        return lock.addr();
    }
    lock->owner = 0;
    return LightEvent__signal(lock.addr(), 0u);
}

}  // namespace d_001357ec
GUEST_EXPORT(0x001357ec, d_001357ec::RecursiveLock__unlock);

// f_0013580c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Unlocks a light lock and wakes a waiting thread (address arbitration).
namespace d_0013580c {

inline constexpr u32 service_handle_cache_address = 0x0097dff8u;
inline guest::global<u32, 0x0097dff8> service_handle_cache;
inline constexpr guest::Function<0x00134c68, u32(u32, u32, u32, u32)> svc_arbitrate_address;

struct __attribute__((packed)) LightLockUnlockFrame {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(LightLockUnlockFrame, word_0, 0x0);
GUEST_OFFSET(LightLockUnlockFrame, word_4, 0x4);
GUEST_SIZE(LightLockUnlockFrame, 0x8);

void LightLock__unlock(u32 light_lock) {
    guest::StackFrameOf<LightLockUnlockFrame> frame;  // the original's stack frame
    do {
        *gptr<u32>(light_lock) = 0u - *gptr<u32>(light_lock);
        guest::preempt();
    } while (!u32(1));
    u32 r0_1 = *service_handle_cache;
    frame->word_0 = 0;
    frame->word_4 = 0;
    svc_arbitrate_address(r0_1, light_lock, 0u, ~0u);
}

}  // namespace d_0013580c
GUEST_EXPORT_FRAMED(0x0013580c, d_0013580c::LightLock__unlock, 0x4010);  // pushes {r4, lr} first, as the original

// f_00135858: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Tries to take a light lock: 1 when it was free.
namespace d_00135858 {


u32 LightLock__try_lock(u32 light_lock) {
    u32 r1 = ~0u;
    do {
        if (*gptr<u32>(light_lock) != 1u) {
            guest::cpu()->r[1] = r1;
            return 0u;
        }
        *gptr<u32>(light_lock) = r1;
        guest::preempt();
    } while (!u32(1));
    guest::cpu()->r[1] = r1;
    return 1u;
}

}  // namespace d_00135858
GUEST_EXPORT(0x00135858, d_00135858::LightLock__try_lock);

// f_001358c0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Unmounts the storage (through the service at 0x97dffc), reporting a failure with its location.
namespace d_001358c0 {

inline constexpr u32 storage_service_address = 0x0097dffcu;
inline guest::global<u32, 0x0097dffc> storage_service;
inline constexpr guest::Function<0x00129270, u32(u32, u32)> raise_fatal_error_5;
inline constexpr guest::Function<0x00135520, u32(u32, u32, u32, u32)> cfl_unmount_135520;

void unmount_storage_or_report(u32 r0_unused, u32 r1, u32 r2) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 r0_2 = cfl_unmount_135520(*storage_service, r1, r2, guest::cpu()->r[3]);
    u32 r1_1 = r0_2 & 0x80000000u;
    if (s32(r1_1) >= 0) {
        guest::cpu()->r[1] = r1_1;
        return;
    }
    if ((r0_2 >> 0x1f) == 0) {
        guest::cpu()->r[1] = 0x1358e0u;
        return;
    }
    frame.release();
    raise_fatal_error_5(r0_2, 0x1358e0u);
    return;
}

}  // namespace d_001358c0
GUEST_EXPORT(0x001358c0, d_001358c0::unmount_storage_or_report);

// f_00135a8c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Destroys a CEC message box: closes it.
namespace d_00135a8c {

inline constexpr u32 vtable_nn__cec__CTR__MessageBox = 0x008faf48u;
inline constexpr guest::Function<0x0013a63c, u32(u32, u32, u32, u32)> MessageBox__close;

u32 nn__cec__CTR__MessageBox__destructor(gptr<nn__cec__CTR__MessageBox> message_box) {
    message_box->vtable = vtable_nn__cec__CTR__MessageBox;
    MessageBox__close(message_box.addr(), guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    return message_box.addr();
}

}  // namespace d_00135a8c
GUEST_EXPORT_FRAMED(0x00135a8c, d_00135a8c::nn__cec__CTR__MessageBox__destructor, 0x4010);  // pushes {r4, lr} first, as the original

// f_00135bb8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Releases the owner's region at 0x18 from its heap list (and clears its size).
namespace d_00135bb8 {

struct __attribute__((packed)) Owner {
    u8 unknown_0[0x18];  // (not used here)
    u32 word_18;
    u8 unknown_1c[0x38];  // (not used here)
    u32 word_54;
};
GUEST_OFFSET(Owner, word_18, 0x18);
GUEST_OFFSET(Owner, word_54, 0x54);

inline constexpr guest::Function<0x0013e6bc, u32(u32, u32, u32, u32)> HeapList__remove;

void release_region_18(gptr<Owner> owner) {
    owner->word_54 = 0;
    if (owner->word_18 != 0) {
        HeapList__remove(owner.addr() + 0x18u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
        owner->word_18 = 0;
    }
}

}  // namespace d_00135bb8
GUEST_EXPORT_FRAMED(0x00135bb8, d_00135bb8::release_region_18, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_00135be4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Releases an expanding heap's region from its heap list.
namespace d_00135be4 {

inline constexpr guest::Function<0x0013e6bc, u32(u32, u32, u32, u32)> HeapList__remove;

void ExpHeapBase__release_region(gptr<nn__fnd__ExpHeapBase> heap) {
    if (heap->word_18 == 0) {
        return;
    }
    HeapList__remove(heap.addr() + 0x18u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    heap->word_18 = 0;
}

}  // namespace d_00135be4
GUEST_EXPORT_FRAMED(0x00135be4, d_00135be4::ExpHeapBase__release_region, 0x4010);  // pushes {r4, lr} first, as the original

// f_00135efc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Calls 0013a7c8 and reports a fatal error when it fails.
namespace d_00135efc {

inline constexpr guest::Function<0x00134250, u32(u32, u32, u32, u32)> fatal_result;
inline constexpr guest::Function<0x0013a7c8, u32(u32, u32, u32, u32)> ipc_command_27;

u32 call_13a7c8_or_fatal(u32 r0) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 r0_2 = ipc_command_27(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]) >> 0x1f;
    if (r0_2 == 0) {
        return r0_2;
    }
    frame.release();
    return fatal_result(r0_2, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_00135efc
GUEST_EXPORT(0x00135efc, d_00135efc::call_13a7c8_or_fatal);

// f_00135f18: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Reads a byte through 0013a7f8 (fatal on failure).
namespace d_00135f18 {

inline constexpr guest::Function<0x00134250, u32(u32)> fatal_result;
inline constexpr guest::Function<0x0013a7f8, u32(u32, u32, u32, u32)> ipc_command_28_out;

u32 read_os_byte_or_fatal(u32 r0_unused, u32 r1_unused, u32 r2_unused, u32 r3) {
    guest::StackFrame frame(0x4);  // the original's stack frame
    *frame.at<u32>(0) = r3;
    u32 r0_2 = ipc_command_28_out(frame.at(0).addr(), guest::cpu()->r[1], guest::cpu()->r[2], r3);
    if ((r0_2 >> 0x1f) != 0) {
        fatal_result(r0_2);
    }
    return s8(*frame.at<u8>(0));
}

}  // namespace d_00135f18
GUEST_EXPORT_FRAMED(0x00135f18, d_00135f18::read_os_byte_or_fatal, 0x4000);  // pushes {lr} first, as the original

// f_00135f34: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Sends an error report of kind 0 (a result and its location) to the error service, unless filtered.
namespace d_00135f34 {

struct __attribute__((packed)) Local_00135f34_ea_2 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_00135f34_ea_2, word_0, 0x0);
GUEST_OFFSET(Local_00135f34_ea_2, word_4, 0x4);
GUEST_OFFSET(Local_00135f34_ea_2, word_8, 0x8);

struct __attribute__((packed)) Local_00135f34_r4_1 {
    u32 error_report;
    u32 word_4;
};
GUEST_OFFSET(Local_00135f34_r4_1, error_report, 0x0);
GUEST_OFFSET(Local_00135f34_r4_1, word_4, 0x4);

struct __attribute__((packed)) Local_00135f34_r7_1 {
    u32 word_0;
    u8 unknown_4[0xc];  // (not used here)
    u32 word_10;
    u32 word_14;
    u32 word_18;
};
GUEST_OFFSET(Local_00135f34_r7_1, word_0, 0x0);
GUEST_OFFSET(Local_00135f34_r7_1, word_10, 0x10);
GUEST_OFFSET(Local_00135f34_r7_1, word_14, 0x14);
GUEST_OFFSET(Local_00135f34_r7_1, word_18, 0x18);

inline constexpr u32 error_report_buffer_address = 0x0097ea3cu;
inline guest::global<u8, 0x0097ea38> error_report_handle;
inline guest::global<u32, 0x0097ea3c> error_report_buffer;
inline constexpr guest::Function<0x00136464, u32(u32, u32, u32, u32)> read_applet_instance;
inline constexpr guest::Function<0x0013a834, u32(u32, u32)> LightLock__lock;

struct __attribute__((packed)) ErrorReportSendGenericFrame {
    u8 unknown_0[0x3];  // (not read or written by name)
    u8 byte_3;
    u32 word_4;
    u8 unknown_8[0x14];  // (not read or written by name)
    u32 word_1c;
    u8 unknown_20[0x4];  // (not read or written by name)
};
GUEST_OFFSET(ErrorReportSendGenericFrame, byte_3, 0x3);
GUEST_OFFSET(ErrorReportSendGenericFrame, word_4, 0x4);
GUEST_OFFSET(ErrorReportSendGenericFrame, word_1c, 0x1c);
GUEST_SIZE(ErrorReportSendGenericFrame, 0x24);

void ErrorReport__send_generic(u32 error_report, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<ErrorReportSendGenericFrame> frame;  // the original's stack frame
    if (*frame.at<u32>(0x38) == 0 || error_report + 0xe1000000u < 0x600000u) {
        gptr<Local_00135f34_r7_1> r7_1 = gptr<Local_00135f34_r7_1>(*error_report_buffer);
        u32 r12_1 = r7_1->word_0;
        u32 r5_1 = r7_1->word_10;
        u32 r6_1 = r7_1->word_14;
        u32 r7_2 = r7_1->word_18;
        *frame.at<u32>(0) = r12_1;
        gptr<Local_00135f34_ea_2> ea_2 = gptr<Local_00135f34_ea_2>(frame.at(0x10).addr());
        ea_2->word_0 = r5_1;
        ea_2->word_4 = r6_1;
        ea_2->word_8 = r7_2;
        *frame.at<u8>(0) = 0;
        u32 r12_2 = *error_report_handle;
        gptr<Local_00135f34_r4_1> r4_1 = gptr<Local_00135f34_r4_1>(frame.at(8).addr());
        frame->word_4 = r1;
        frame->byte_3 = u8(r12_2);
        frame->word_1c = r3;
        r4_1->error_report = error_report;
        r4_1->word_4 = r2;
        u32 r0_1 = read_applet_instance(error_report, r1, r2, r3);
        LightLock__lock(r0_1 + 0x58u, frame.at(0).addr());
    }
}

}  // namespace d_00135f34
GUEST_EXPORT_FRAMED(0x00135f34, d_00135f34::ErrorReport__send_generic, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_00135fb4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Fills the four bytes of the target word (+0) with a value (the low byte only below 0xf).
namespace d_00135fb4 {

struct __attribute__((packed)) FillBytesWithValueArg0 {
    u32 word_0;
};
GUEST_OFFSET(FillBytesWithValueArg0, word_0, 0x0);

struct __attribute__((packed)) Local_00135fb4_r3_1 {
    u32 word_0;
};
GUEST_OFFSET(Local_00135fb4_r3_1, word_0, 0x0);


void fill_bytes_with_value(gptr<FillBytesWithValueArg0> arg0, u32 r1) {
    arg0->word_0 = r1;
    r1 = 0u;
    do {
        gptr<Local_00135fb4_r3_1> r3_1 = gptr<Local_00135fb4_r3_1>(arg0->word_0);
        u32 r2_1 = r3_1->word_0;
        if ((r2_1 & 0xffu) >= 0xfu) {
            r2_1 = r2_1 & ~0xffu | r1;
        }
        r3_1->word_0 = ((r2_1 & ~0xff00u | r1 << 8 & 0xff00u) & ~0xff0000u | r1 << 0x10 & 0xff0000u) & ~0xff000000u | r1 << 0x18;
        guest::preempt();
    } while (!u32(1));
}

}  // namespace d_00135fb4
GUEST_EXPORT_FRAMED(0x00135fb4, d_00135fb4::fill_bytes_with_value, 0x10);  // pushes {r4} first, as the original

// f_00136014: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Sends an error report of kind 2 (a result with its module and location) to the error service.
namespace d_00136014 {

struct __attribute__((packed)) Local_00136014_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Local_00136014_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_00136014_ea_1, word_4, 0x4);
GUEST_OFFSET(Local_00136014_ea_1, word_8, 0x8);
GUEST_OFFSET(Local_00136014_ea_1, word_c, 0xc);

struct __attribute__((packed)) Local_00136014_ea_7 {
    u32 error_report;
    u32 word_4;
};
GUEST_OFFSET(Local_00136014_ea_7, error_report, 0x0);
GUEST_OFFSET(Local_00136014_ea_7, word_4, 0x4);

struct __attribute__((packed)) Local_00136014_r4_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_00136014_r4_1, word_0, 0x0);
GUEST_OFFSET(Local_00136014_r4_1, word_4, 0x4);
GUEST_OFFSET(Local_00136014_r4_1, word_8, 0x8);

struct __attribute__((packed)) Local_00136014_r9_1 {
    u32 word_0;
    u8 unknown_4[0x18];  // (not used here)
    u32 word_1c;
};
GUEST_OFFSET(Local_00136014_r9_1, word_0, 0x0);
GUEST_OFFSET(Local_00136014_r9_1, word_1c, 0x1c);

inline constexpr u32 error_report_buffer_address = 0x0097ea3cu;
inline guest::global<u8, 0x0097ea38> error_report_handle;
inline guest::global<u32, 0x0097ea3c> error_report_buffer;
inline constexpr guest::Function<0x00136464, u32(u32, u32, u32, u32)> read_applet_instance;
inline constexpr guest::Function<0x0013a834, u32(u32, u32)> LightLock__lock;

struct __attribute__((packed)) ErrorReportSendResultFrame {
    u8 unknown_0[0x3];  // (not read or written by name)
    u8 byte_3;
    u8 unknown_4[0x14];  // (not read or written by name)
    u32 word_18;
    u8 unknown_1c[0x2];  // (not read or written by name)
    u16 half_1e;
    u8 unknown_20[0x4];  // (not read or written by name)
};
GUEST_OFFSET(ErrorReportSendResultFrame, byte_3, 0x3);
GUEST_OFFSET(ErrorReportSendResultFrame, word_18, 0x18);
GUEST_OFFSET(ErrorReportSendResultFrame, half_1e, 0x1e);
GUEST_SIZE(ErrorReportSendResultFrame, 0x24);

void ErrorReport__send_result(u32 error_report, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<ErrorReportSendResultFrame> frame;  // the original's stack frame
    gptr<Local_00136014_ea_1> ea_1 = gptr<Local_00136014_ea_1>(frame.at(0x40).addr());
    u32 r5_1 = ea_1->word_0;
    u32 r6_1 = ea_1->word_4;
    u32 r7_1 = ea_1->word_8;
    u32 r8_1 = ea_1->word_c;
    gptr<Local_00136014_r9_1> r9_1 = gptr<Local_00136014_r9_1>(*error_report_buffer);
    u32 r12_1 = r9_1->word_0;
    u32 r9_2 = r9_1->word_1c;
    *frame.at<u32>(0) = r12_1;
    *frame.at<u32>(0x1c) = r9_2;
    *frame.at<u8>(0) = 2;
    u32 r12_2 = *error_report_handle;
    frame->word_18 = r6_1;
    frame->byte_3 = u8(r12_2);
    gptr<Local_00136014_ea_7> ea_7 = gptr<Local_00136014_ea_7>(frame.at(4).addr());
    ea_7->error_report = error_report;
    ea_7->word_4 = r2;
    gptr<Local_00136014_r4_1> r4_1 = gptr<Local_00136014_r4_1>(frame.at(0xc).addr());
    r4_1->word_0 = r1;
    r4_1->word_4 = r5_1;
    r4_1->word_8 = r7_1;
    *frame.at<u16>(0x1c) = u16(r3);
    frame->half_1e = u16(r8_1);
    u32 r0_1 = read_applet_instance(error_report, r1, r2, r3);
    LightLock__lock(r0_1 + 0x58u, frame.at(0).addr());
}

}  // namespace d_00136014
GUEST_EXPORT_FRAMED(0x00136014, d_00136014::ErrorReport__send_result, 0x43f0);  // pushes {r4, r5, r6, r7, r8, r9, lr} first, as the original

// f_00136188: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Sends an error report of kind 4 (a result with its packed arguments) to the error service.
namespace d_00136188 {

struct __attribute__((packed)) Local_00136188_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Local_00136188_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_00136188_ea_1, word_4, 0x4);
GUEST_OFFSET(Local_00136188_ea_1, word_8, 0x8);
GUEST_OFFSET(Local_00136188_ea_1, word_c, 0xc);

struct __attribute__((packed)) Local_00136188_r4_1 {
    u32 error_report;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
};
GUEST_OFFSET(Local_00136188_r4_1, error_report, 0x0);
GUEST_OFFSET(Local_00136188_r4_1, word_4, 0x4);
GUEST_OFFSET(Local_00136188_r4_1, word_8, 0x8);
GUEST_OFFSET(Local_00136188_r4_1, word_c, 0xc);
GUEST_OFFSET(Local_00136188_r4_1, word_10, 0x10);
GUEST_OFFSET(Local_00136188_r4_1, word_14, 0x14);

struct __attribute__((packed)) Local_00136188_r9_1 {
    u32 word_0;
    u8 unknown_4[0x18];  // (not used here)
    u32 word_1c;
};
GUEST_OFFSET(Local_00136188_r9_1, word_0, 0x0);
GUEST_OFFSET(Local_00136188_r9_1, word_1c, 0x1c);

inline constexpr u32 error_report_handle_address = 0x0097ea38u;
inline constexpr u32 error_report_buffer_address = 0x0097ea3cu;
inline guest::global<u8, 0x0097ea38> error_report_handle;
inline guest::global<u32, 0x0097ea3c> error_report_buffer;
inline constexpr guest::Function<0x00136464, u32(u32, u32, u32, u32)> read_applet_instance;
inline constexpr guest::Function<0x0013a834, u32(u32, u32)> LightLock__lock;

struct __attribute__((packed)) ErrorReportSendFailureFrame {
    u8 unknown_0[0x3];  // (not read or written by name)
    u8 byte_3;
    u8 unknown_4[0x18];  // (not read or written by name)
    u32 word_1c;
    u8 unknown_20[0x4];  // (not read or written by name)
};
GUEST_OFFSET(ErrorReportSendFailureFrame, byte_3, 0x3);
GUEST_OFFSET(ErrorReportSendFailureFrame, word_1c, 0x1c);
GUEST_SIZE(ErrorReportSendFailureFrame, 0x24);

void ErrorReport__send_failure(u32 error_report, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<ErrorReportSendFailureFrame> frame;  // the original's stack frame
    gptr<Local_00136188_ea_1> ea_1 = gptr<Local_00136188_ea_1>(frame.at(0x40).addr());
    u32 r6_1 = ea_1->word_4;
    u32 r7_1 = ea_1->word_8;
    u32 r8_1 = ea_1->word_c;
    u32 r3_1 = r3 | ea_1->word_0 << 0x10;
    gptr<Local_00136188_r9_1> r9_1 = gptr<Local_00136188_r9_1>(*error_report_buffer);
    u32 r12_1 = r9_1->word_0;
    u32 r9_2 = r9_1->word_1c;
    *frame.at<u32>(0) = r12_1;
    frame->word_1c = r9_2;
    *frame.at<u8>(0) = 4;
    u32 r12_2 = *error_report_handle;
    gptr<Local_00136188_r4_1> r4_1 = gptr<Local_00136188_r4_1>(frame.at(4).addr());
    frame->byte_3 = u8(r12_2);
    r4_1->error_report = error_report;
    r4_1->word_4 = r1;
    r4_1->word_8 = r2;
    r4_1->word_c = r3_1;
    r4_1->word_10 = r6_1 | r7_1 << 0x10;
    r4_1->word_14 = r8_1;
    u32 r0_1 = read_applet_instance(error_report, r1, r2, r3_1);
    LightLock__lock(r0_1 + 0x58u, frame.at(0).addr());
}

}  // namespace d_00136188
GUEST_EXPORT_FRAMED(0x00136188, d_00136188::ErrorReport__send_failure, 0x43f0);  // pushes {r4, r5, r6, r7, r8, r9, lr} first, as the original

// f_00136344: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Sends an error report of kind 3 (an exception with its packed arguments) to the error service.
namespace d_00136344 {

struct __attribute__((packed)) Local_00136344_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_00136344_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_00136344_ea_1, word_4, 0x4);
GUEST_OFFSET(Local_00136344_ea_1, word_8, 0x8);

struct __attribute__((packed)) Local_00136344_ea_2 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_00136344_ea_2, word_0, 0x0);
GUEST_OFFSET(Local_00136344_ea_2, word_4, 0x4);

struct __attribute__((packed)) Local_00136344_ea_4 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_00136344_ea_4, word_0, 0x0);
GUEST_OFFSET(Local_00136344_ea_4, word_4, 0x4);

struct __attribute__((packed)) Local_00136344_ea_7 {
    u32 error_report;
    u32 word_4;
};
GUEST_OFFSET(Local_00136344_ea_7, error_report, 0x0);
GUEST_OFFSET(Local_00136344_ea_7, word_4, 0x4);

struct __attribute__((packed)) Local_00136344_r4_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_00136344_r4_1, word_0, 0x0);
GUEST_OFFSET(Local_00136344_r4_1, word_4, 0x4);
GUEST_OFFSET(Local_00136344_r4_1, word_8, 0x8);

inline constexpr u32 error_report_buffer_address = 0x0097ea3cu;
inline guest::global<u8, 0x0097ea38> error_report_handle;
inline guest::global<u32, 0x0097ea3c> error_report_buffer;
inline constexpr guest::Function<0x00136464, u32(u32, u32, u32, u32)> read_applet_instance;
inline constexpr guest::Function<0x0013a834, u32(u32, u32)> LightLock__lock;

struct __attribute__((packed)) ErrorReportSendExceptionFrame {
    u8 unknown_0[0x3];  // (not read or written by name)
    u8 byte_3;
    u8 unknown_4[0x20];  // (not read or written by name)
};
GUEST_OFFSET(ErrorReportSendExceptionFrame, byte_3, 0x3);
GUEST_SIZE(ErrorReportSendExceptionFrame, 0x24);

void ErrorReport__send_exception(u32 error_report, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<ErrorReportSendExceptionFrame> frame;  // the original's stack frame
    u32 r1_1 = r1 | r2 << 0x10;
    gptr<Local_00136344_ea_1> ea_1 = gptr<Local_00136344_ea_1>(frame.at(0x40).addr());
    u32 r5_1 = ea_1->word_0;
    u32 r6_1 = ea_1->word_4;
    u32 r7_1 = ea_1->word_8;
    u32 r2_1 = r5_1 | r6_1 << 0x10;
    u32 r9_1 = *error_report_buffer;
    u32 r12_1 = *gptr<u32>(r9_1);
    gptr<Local_00136344_ea_2> ea_2 = gptr<Local_00136344_ea_2>(r9_1 + 0x18u);
    u32 r8_1 = ea_2->word_0;
    u32 r9_2 = ea_2->word_4;
    *frame.at<u32>(0) = r12_1;
    gptr<Local_00136344_ea_4> ea_4 = gptr<Local_00136344_ea_4>(frame.at(0x18).addr());
    ea_4->word_0 = r8_1;
    ea_4->word_4 = r9_2;
    *frame.at<u8>(0) = 3;
    frame->byte_3 = *error_report_handle;
    gptr<Local_00136344_ea_7> ea_7 = gptr<Local_00136344_ea_7>(frame.at(4).addr());
    ea_7->error_report = error_report;
    ea_7->word_4 = r3;
    gptr<Local_00136344_r4_1> r4_1 = gptr<Local_00136344_r4_1>(frame.at(0xc).addr());
    r4_1->word_0 = r1_1;
    r4_1->word_4 = r2_1;
    r4_1->word_8 = r7_1;
    u32 r0_1 = read_applet_instance(error_report, r1_1, r2_1, r3);
    LightLock__lock(r0_1 + 0x58u, frame.at(0).addr());
}

}  // namespace d_00136344
GUEST_EXPORT_FRAMED(0x00136344, d_00136344::ErrorReport__send_exception, 0x43f0);  // pushes {r4, r5, r6, r7, r8, r9, lr} first, as the original

// f_00136490: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether the low three bits of the applet word (0x974af0) are 2.
namespace d_00136490 {

inline guest::global<u32, 0x00974af0> applet_state;

u32 applet_state_is_2() {
    return (*applet_state & 7u) == 2u;
}

}  // namespace d_00136490
GUEST_EXPORT(0x00136490, d_00136490::applet_state_is_2);

// f_00136530: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Calls 0013a968 and reports a fatal error when it fails.
namespace d_00136530 {

inline constexpr guest::Function<0x00134250, u32(u32, u32, u32, u32)> fatal_result;
inline constexpr guest::Function<0x0013a968, u32(u32, u32, u32, u32)> ipc_command_4_flag;

u32 call_13a968_or_fatal(u32 r0) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 r0_2 = ipc_command_4_flag(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]) >> 0x1f;
    if (r0_2 == 0) {
        return r0_2;
    }
    frame.release();
    return fatal_result(r0_2, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_00136530
GUEST_EXPORT(0x00136530, d_00136530::call_13a968_or_fatal);

// f_0013654c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Calls 0013a9a4 and reports a fatal error when it fails.
namespace d_0013654c {

inline constexpr guest::Function<0x00134250, u32(u32, u32, u32, u32)> fatal_result;
inline constexpr guest::Function<0x0013a9a4, u32(u32, u32, u32, u32)> ipc_command_2_flag;

u32 call_13a9a4_or_fatal(u32 r0) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 r0_2 = ipc_command_2_flag(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]) >> 0x1f;
    if (r0_2 == 0) {
        return r0_2;
    }
    frame.release();
    return fatal_result(r0_2, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0013654c
GUEST_EXPORT(0x0013654c, d_0013654c::call_13a9a4_or_fatal);

// f_001365d4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Calls call_00136598 up to twice while it fails with a retryable result; the result (one kind of failure is mapped to
// a fixed result code).
namespace d_001365d4 {

inline constexpr guest::Function<0x00134250, u32(u32, u32, u32)> fatal_result;
inline constexpr guest::Function<0x00136598, u32(u32, u32, u32, u32)> ipc_command_13_flag;

u32 retry_service_call_twice(u32 r0, u32 r1_unused, u32 r2) {
    u32 r8 = r0;
    u32 r1 = 0x4000188u;
    u32 r5 = 0xf9605002u;
    u32 r7 = 0xc9405001u;
    u32 r4 = 0u;
    u32 r6 = r5 + 0x3fcu;
L_1365f8:;
    u32 r0_1 = ipc_command_13_flag(r8, r1, r2, guest::cpu()->r[3]);
    u32 res_1 = r0_1 & 0x80000000u;
    r1 = res_1;
    r2 = r0_1;
    if (s32(res_1) < 0) {
        if (r0_1 == r7) {
            guest::cpu()->r[1] = r1;
            return r0_1;
        }
        r1 = r0_1 & 0x3fc00u;
        if (r1 != 0x2c00u) {
            if (r0_1 == r6) {
                guest::cpu()->r[1] = r1;
                return r5;
            }
            u32 r0_2 = r2 >> 0x1f;
            if (r0_2 != 0) {
                fatal_result(r0_2, r1, r2);
                r1 = guest::cpu()->r[1];
                r2 = guest::cpu()->r[2];
            }
        }
        r4 += 1u;
        if (s32(r4) < 2) {
            guest::preempt();
            goto L_1365f8;
        }
    } else if (s32(r4) < 2) {
        guest::cpu()->r[1] = r1;
        return 0u;
    }
    guest::cpu()->r[1] = r1;
    return r5;
}

}  // namespace d_001365d4
GUEST_EXPORT_FRAMED(0x001365d4, d_001365d4::retry_service_call_twice, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_00136718: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Unlinks every node, counting each down and leaving it detached.
namespace d_00136718 {

struct __attribute__((packed)) Sentinel {
    u32 word_0;
};
GUEST_OFFSET(Sentinel, word_0, 0x0);


u32 LinkedList__clear(u32 linked_list, gptr<Sentinel> sentinel) {
    u32 node = sentinel.addr();
    u32 r4 = 0;
    u32 next = 0;
    u32 r3 = linked_list;
    linked_list = sentinel->word_0;
    if (node == linked_list) {
        guest::cpu()->r[1] = node;
        return linked_list;
    } else {
        r4 = 0u;
    }
    do {
        next = *gptr<u32>(node);
        u32 r12_1 = *gptr<u32>(node + 4);
        *gptr<u32>(next + 4u) = r12_1;
        *gptr<u32>(r12_1) = next;
        *gptr<u32>(r3) = *gptr<u32>(r3) - 1u;
        *gptr<u32>(node) = r4;
        *gptr<u32>(node + 4u) = r4;
        node = next;
        guest::preempt();
    } while (next != linked_list);
    guest::cpu()->r[1] = node;
    return linked_list;
}

}  // namespace d_00136718
GUEST_EXPORT_FRAMED(0x00136718, d_00136718::LinkedList__clear, 0x10);  // pushes {r4} first, as the original

// f_00136764: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Calls the handler for the model's kind (0x20000002, 0x20000004, 0x20000009, 0x20000011, 0x20000021) from the table
// at 0x975100.
namespace d_00136764 {

struct __attribute__((packed)) ResModel {
    u32 word_0;
};
GUEST_OFFSET(ResModel, word_0, 0x0);

inline constexpr u32 res_model_dispatch_address = 0x00975100u;
inline constexpr u32 res_model_dispatch_a_address = 0x00975104u;
inline constexpr u32 res_model_dispatch_b_address = 0x00975108u;
inline constexpr u32 res_model_dispatch_c_address = 0x0097510cu;
inline constexpr u32 res_model_dispatch_d_address = 0x00975110u;
inline guest::global<u32, 0x00975100> res_model_dispatch;
inline guest::global<u32, 0x00975104> res_model_dispatch_a;
inline guest::global<u32, 0x00975108> res_model_dispatch_b;
inline guest::global<u32, 0x0097510c> res_model_dispatch_c;
inline guest::global<u32, 0x00975110> res_model_dispatch_d;

u32 ResModel__dispatch_by_kind(gptr<ResModel> res_model) {
    u32 r0_1 = res_model->word_0;
    u32 r2_1 = *gptr<u32>(r0_1);
    u32 zf_1 = r2_1 + 0xdffffff7u == 0;
    if (zf_1) {
        u32 r1_1 = *res_model_dispatch_a;
        return guest::call_address<u32>(r1_1, r0_1, r1_1, r2_1, guest::cpu()->r[3]);
    }
    if (zf_1 || (r2_1 + 0xdffffff7u >> 0x1f) != (((r2_1 ^ 0x20000009u) & (r2_1 ^ r2_1 + 0xdffffff7u)) >> 0x1f)) {
        if (r2_1 == 0x20000002u) {
            u32 r1_2 = *res_model_dispatch_c;
            return guest::call_address<u32>(r1_2, r0_1, r1_2, r2_1, guest::cpu()->r[3]);
        }
        if (r2_1 != 0x20000004u) {
            guest::cpu()->r[1] = res_model_dispatch_address;
            return r0_1;
        }
        u32 r1_3 = *res_model_dispatch_b;
        return guest::call_address<u32>(r1_3, r0_1, r1_3, r2_1, guest::cpu()->r[3]);
    }
    if (r2_1 + 0xdfffffefu == 0) {
        u32 r1_4 = *res_model_dispatch;
        return guest::call_address<u32>(r1_4, r0_1, r1_4, r2_1 + 0xdfffffefu, guest::cpu()->r[3]);
    }
    if (r2_1 + 0xdfffffefu != 0x10u) {
        guest::cpu()->r[1] = res_model_dispatch_address;
        return r0_1;
    }
    u32 r1_5 = *res_model_dispatch_d;
    return guest::call_address<u32>(r1_5, r0_1, r1_5, r2_1 + 0xdfffffefu, guest::cpu()->r[3]);
}

}  // namespace d_00136764
GUEST_EXPORT(0x00136764, d_00136764::ResModel__dispatch_by_kind);

// f_00136860: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Dispatches the model's child (+0xc4 offset) by its kind when it has one.
namespace d_00136860 {

struct __attribute__((packed)) ResModel {
    u32 word_0;
};
GUEST_OFFSET(ResModel, word_0, 0x0);

inline constexpr guest::Function<0x0013e9e4, u32(u32, u32, u32, u32)> HeapHandle__dispatch_by_kind;

struct __attribute__((packed)) ResModelDispatchChildFrame {
    u32 word_0;
};
GUEST_OFFSET(ResModelDispatchChildFrame, word_0, 0x0);
GUEST_SIZE(ResModelDispatchChildFrame, 0x4);

void ResModel__dispatch_child(gptr<ResModel> res_model, u32 r1_unused, u32 r2_unused, u32 r3) {
    guest::StackFrameOf<ResModelDispatchChildFrame> frame;  // the original's stack frame
    frame->word_0 = r3;
    u32 ea_1 = res_model->word_0 + 0xc4u;
    u32 r1_1 = *gptr<u32>(ea_1);
    u32 r0_1 = r1_1 == 0 ? 0u : ea_1 + r1_1;
    frame->word_0 = r0_1;
    if (r0_1 != 0) {
        HeapHandle__dispatch_by_kind(frame.at(0).addr(), r1_1, guest::cpu()->r[2], r3);
    }
}

}  // namespace d_00136860
GUEST_EXPORT_FRAMED(0x00136860, d_00136860::ResModel__dispatch_child, 0x4000);  // pushes {lr} first, as the original

// f_00136c9c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Clears +0x20.
namespace d_00136c9c {

struct __attribute__((packed)) ClearWord20Arg0 {
    u8 unknown_0[0x20];  // (not used here)
    u32 word_20;
};
GUEST_OFFSET(ClearWord20Arg0, word_20, 0x20);


void clear_word_20(gptr<ClearWord20Arg0> arg0) {
    u32 r1_1 = arg0->word_20;
    arg0->word_20 = 0;
    guest::cpu()->r[1] = r1_1;
}

}  // namespace d_00136c9c
GUEST_EXPORT(0x00136c9c, d_00136c9c::clear_word_20);

// f_00136cb0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Calls virtual 8 of the object with 0.
namespace d_00136cb0 {


u32 call_virtual_8_with_0(gptr<nw__lyt__Layout> layout) {
    u32 r2_1 = *gptr<u32>(layout->vtable + 0x20u);
    // virtual function 8 of layout.addr() (nw__lyt__Layout)
    return guest::call_address<u32>(r2_1, layout.addr(), 0u, r2_1, guest::cpu()->r[3]);
}

}  // namespace d_00136cb0
GUEST_EXPORT(0x00136cb0, d_00136cb0::call_virtual_8_with_0);

// f_00136d2c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Inserts a sound in the player's list by priority, releasing one when full.
namespace d_00136d2c {

struct __attribute__((packed)) SoundPlayer {
    u8 unknown_0[0x10];  // (not used here)
    u32 word_10;
    u8 unknown_14[0x44];  // (not used here)
    u8 byte_58;
};
GUEST_OFFSET(SoundPlayer, word_10, 0x10);
GUEST_OFFSET(SoundPlayer, byte_58, 0x58);

struct __attribute__((packed)) SoundPlayerInsertByPriorityArg1 {
    u8 unknown_0[0x50];  // (not used here)
    u32 word_50;
    u8 unknown_54[0x49];  // (not used here)
    u8 byte_9d;
};
GUEST_OFFSET(SoundPlayerInsertByPriorityArg1, word_50, 0x50);
GUEST_OFFSET(SoundPlayerInsertByPriorityArg1, byte_9d, 0x9d);

struct __attribute__((packed)) Local_00136d2c_r3_1 {
    u8 unknown_0[0x50];  // (not used here)
    u32 word_50;
    u8 unknown_54[0x49];  // (not used here)
    u8 byte_9d;
};
GUEST_OFFSET(Local_00136d2c_r3_1, word_50, 0x50);
GUEST_OFFSET(Local_00136d2c_r3_1, byte_9d, 0x9d);

inline constexpr guest::Function<0x0013e7d8, u32(u32, u32, u32)> linked_list_insert_before;

void SoundPlayer__insert_by_priority(gptr<SoundPlayer> sound_player, gptr<SoundPlayerInsertByPriorityArg1> arg1) {
    guest::StackFrame frame(0x18);  // the original's stack frame
    u32 r0 = sound_player.addr();
    u32 r1 = arg1.addr();
    u32 r14 = guest::cpu()->r[14];
    u32 r12 = r1;
    r1 = sound_player->word_10;
    if (r1 != r0 + 0x10u) {
        r14 = s8(sound_player->byte_58);
        u32 r2 = u32(arg1->byte_9d) + arg1->word_50;
        do {
            gptr<Local_00136d2c_r3_1> r3_1 = gptr<Local_00136d2c_r3_1>(r1 - 0x108u);
            if (r14 != 0) {
                u32 res_1 = r2 - 0x7fu;
                u32 nf_1 = res_1 >> 0x1f;
                u32 vf_1 = ((r2 ^ 0x7fu) & (r2 ^ res_1)) >> 0x1f;
                u32 r4_1 = 0x7fu;
                if (res_1 == 0 || nf_1 != vf_1) {
                    nf_1 = r2 >> 0x1f;
                    vf_1 = 0u;
                    r4_1 = r2;
                }
                u32 r5_1 = 0u;
                if (nf_1 == vf_1) {
                    r5_1 = r4_1;
                }
                u32 r3_2 = r3_1->word_50 + u32(r3_1->byte_9d);
                if (s32(r3_2) > 0x7f) {
                    r3_2 = 0x7fu;
                } else if (s32(r3_2) < 0) {
                    r3_2 = 0u;
                }
                if (s32(r5_1) <= s32(r3_2)) {
                    break;
                }
            } else {
                u32 res_2 = r2 - 0x7fu;
                u32 nf_2 = res_2 >> 0x1f;
                u32 vf_2 = ((r2 ^ 0x7fu) & (r2 ^ res_2)) >> 0x1f;
                u32 r5_2 = 0x7fu;
                if (res_2 == 0 || nf_2 != vf_2) {
                    nf_2 = r2 >> 0x1f;
                    vf_2 = 0u;
                    r5_2 = r2;
                }
                u32 r4_2 = 0u;
                if (nf_2 == vf_2) {
                    r4_2 = r5_2;
                }
                u32 r3_3 = r3_1->word_50 + u32(r3_1->byte_9d);
                if (s32(r3_3) > 0x7f) {
                    r3_3 = 0x7fu;
                } else if (s32(r3_3) < 0) {
                    r3_3 = 0u;
                }
                if (s32(r4_2) < s32(r3_3)) {
                    break;
                }
            }
            r1 = *gptr<u32>(r1);
            guest::preempt();
        } while (r1 != r0 + 0x10u);
    }
    frame.release();
    linked_list_insert_before(r0 + 0xcu, r1, r12 + 0x108u);
    return;
}

}  // namespace d_00136d2c
GUEST_EXPORT(0x00136d2c, d_00136d2c::SoundPlayer__insert_by_priority);

// f_00136e0c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Constructs a sound data manager: a dispose callback with a sound archive loader, nothing loaded.
namespace d_00136e0c {

inline constexpr u32 vtable_nw__snd__SoundDataManager = 0x00901e94u;
inline constexpr u32 vtable_nw__snd__SoundDataManager_at_c = 0x00901eb4u;
inline constexpr u32 vtable_nw__snd__internal__driver__DisposeCallback = 0x00902278u;
inline constexpr guest::Function<0x0013b560, u32(u32)> nw__snd__internal__SoundArchiveLoader__SoundArchiveLoader;

u32 nw__snd__internal__driver__DisposeCallback__DisposeCallback_00136e0c(gptr<nw__snd__SoundDataManager> sound_data_manager) {
    sound_data_manager->vtable = vtable_nw__snd__internal__driver__DisposeCallback;
    sound_data_manager->word_4 = 0;
    u32 ea_1 = sound_data_manager.addr() + 8u;
    sound_data_manager->word_8 = 0;
    nw__snd__internal__SoundArchiveLoader__SoundArchiveLoader(ea_1 + 4u);
    sound_data_manager->word_218 = 0;
    sound_data_manager->sound_data_manager_vtable = vtable_nw__snd__SoundDataManager_at_c;
    sound_data_manager->vtable = vtable_nw__snd__SoundDataManager;
    sound_data_manager->word_21c = 0;
    return ea_1 - 8u;
}

}  // namespace d_00136e0c
GUEST_EXPORT_FRAMED(0x00136e0c, d_00136e0c::nw__snd__internal__driver__DisposeCallback__DisposeCallback_00136e0c, 0x4010);  // pushes {r4, lr} first, as the original

// f_00136f2c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Loads a sound archive item of kind 2 (a sequence with its banks and groups).
namespace d_00136f2c {

struct __attribute__((packed)) LoadKind2Arg0 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
};
GUEST_OFFSET(LoadKind2Arg0, word_4, 0x4);

struct __attribute__((packed)) Local_00136f2c_ea_3 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_00136f2c_ea_3, word_0, 0x0);
GUEST_OFFSET(Local_00136f2c_ea_3, word_4, 0x4);

inline constexpr guest::Function<0x00138f08, u32(u32, u32)> archive_sound_type;
inline constexpr guest::Function<0x0013aea0, u32(u32, u32, u32, u32)> load_sound_type_3;
inline constexpr guest::Function<0x0013b22c, u32(u32, u32, u32, u32)> load_kind_3;
inline constexpr guest::Function<0x0013b438, u32(u32, u32, u32, u32)> load_file;
inline constexpr guest::Function<0x0013c240, u32(u32, u32, u32, u32)> SoundArchive__sequence_info;
inline constexpr guest::Function<0x0013c2f0, u32(u32, u32, u32, u32)> SoundArchive__group_info;
inline constexpr guest::Function<0x0013c718, u32(u32, u32, u32, u32)> archive_file_of_item;

struct __attribute__((packed)) LoadKind2Frame {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u8 unknown_10[0x4];  // (not read or written by name)
    u32 word_14;
    u32 word_18;
    u32 word_1c;
    u32 word_20;
    u32 word_24;
    u32 word_28;
    u8 byte_2c;
    u8 byte_2d;
    u8 unknown_2e[0x6];  // (not read or written by name)
};
GUEST_OFFSET(LoadKind2Frame, word_0, 0x0);
GUEST_OFFSET(LoadKind2Frame, word_4, 0x4);
GUEST_OFFSET(LoadKind2Frame, word_8, 0x8);
GUEST_OFFSET(LoadKind2Frame, word_c, 0xc);
GUEST_OFFSET(LoadKind2Frame, word_14, 0x14);
GUEST_OFFSET(LoadKind2Frame, word_18, 0x18);
GUEST_OFFSET(LoadKind2Frame, word_1c, 0x1c);
GUEST_OFFSET(LoadKind2Frame, word_20, 0x20);
GUEST_OFFSET(LoadKind2Frame, word_24, 0x24);
GUEST_OFFSET(LoadKind2Frame, word_28, 0x28);
GUEST_OFFSET(LoadKind2Frame, byte_2c, 0x2c);
GUEST_OFFSET(LoadKind2Frame, byte_2d, 0x2d);
GUEST_SIZE(LoadKind2Frame, 0x34);

u32 load_kind_2(gptr<LoadKind2Arg0> arg0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<LoadKind2Frame> frame;  // the original's stack frame
    u32 r0 = arg0.addr();
    u32 i = 0;
    u32 r9 = 0;
    u32 r8 = r0;
    u32 r4_1 = ~0u;
    u32 r5 = *frame.at<u32>(0x58);
    u32 r11 = 0u;
    frame->word_8 = r4_1;
    gptr<Local_00136f2c_ea_3> ea_3 = gptr<Local_00136f2c_ea_3>(frame.at(0xc).addr());
    ea_3->word_0 = r4_1;
    ea_3->word_4 = r11;
    u32 r10 = r2;
    u32 r0_1 = arg0->word_4;
    u32 j = r1;
    u32 r7 = r3;
    u32 r0_2 = SoundArchive__group_info(r0_1, r1, frame.at(8).addr(), r3);
    if (r0_2 != 0) {
        u32 r0_3 = frame->word_8;
        if (r0_3 + 1u == 0) {
            return 1u;
        }
        u32 r0_5 = archive_sound_type(arg0->word_4, r0_3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (r0_5 != 1u) {
            if (r0_5 == 3u) {
                i = frame->word_8;
                if (frame->word_c >= i) {
                    do {
                        frame->word_0 = r5;
                        frame->word_4 = j;
                        r0_2 = load_sound_type_3(r8, i, r10, r7);
                        if (r0_2 == 0) {
                            return r0_2;
                        }
                        i += 1u;
                        guest::preempt();
                    } while (i <= frame->word_c);
                }
                return 1u;
            }
            return 1u;
        }
        j = frame->word_8;
        if (frame->word_c >= j) {
            r9 = frame.at(0x14).addr();
        } else {
            return 1u;
        }
        do {
            if ((r7 & 1u) != 0) {
                u32 archive_file = archive_file_of_item(*gptr<u32>(r8 + 4u), j, r2, r3);
                frame->word_0 = r11;
                u32 r0_8 = load_file(r8, archive_file, r10, r5);
                r2 = guest::cpu()->r[2];
                r3 = guest::cpu()->r[3];
                if (r0_8 == 0) {
                    goto L_137080;
                }
            }
            if ((r7 & 0xcu) != 0) {
                u32 r0_9 = ~0u;
                frame->byte_2c = u8(r11);
                frame->word_14 = r11;
                frame->byte_2d = u8(r11);
                frame->word_28 = r11;
                frame->word_18 = r0_9;
                frame->word_1c = r0_9;
                frame->word_20 = r0_9;
                frame->word_24 = r0_9;
                u32 r0_11 = SoundArchive__sequence_info(*gptr<u32>(r8 + 4u), j, frame.at(0x14).addr(), r3);
                r2 = guest::cpu()->r[2];
                r3 = guest::cpu()->r[3];
                if (r0_11 == 0) {
                    goto L_137080;
                } else {
                    i = 0u;
                }
                do {
                    u32 r1_1 = *gptr<u32>(r9 + (i << 2) + 4u);
                    if (r1_1 + 1u != 0) {
                        frame->word_0 = r5;
                        u32 r0_12 = load_kind_3(r8, r1_1, r10, r7);
                        r2 = guest::cpu()->r[2];
                        r3 = guest::cpu()->r[3];
                        if (r0_12 == 0) {
                            goto L_137080;
                        }
                    }
                    i += 1u;
                    guest::preempt();
                } while (i < 4u);
            }
            j += 1u;
            guest::preempt();
        } while (j <= frame->word_c);
        return 1u;
L_137080:;
        r0_2 = 0u;
    }
    return r0_2;
}

}  // namespace d_00136f2c
GUEST_EXPORT_FRAMED(0x00136f2c, d_00136f2c::load_kind_2, 0x4ff0);  // pushes {i, r5, j, r7, r8, r9, r10, r11, lr} first, as the original

// f_001370dc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Loads a sound archive item of kind 1 (a sequence) by its file.
namespace d_001370dc {

struct __attribute__((packed)) LoadSoundType1Arg0 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
};
GUEST_OFFSET(LoadSoundType1Arg0, word_4, 0x4);

inline constexpr guest::Function<0x0013b22c, u32(u32, u32, u32, u32)> load_kind_3;
inline constexpr guest::Function<0x0013b438, u32(u32, u32, u32, u32)> load_file;
inline constexpr guest::Function<0x0013c240, u32(u32, u32, u32, u32)> SoundArchive__sequence_info;
inline constexpr guest::Function<0x0013c718, u32(u32, u32, u32, u32)> archive_file_of_item;

struct __attribute__((packed)) LoadSoundType1Frame {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u32 word_18;
    u8 byte_1c;
    u8 byte_1d;
    u8 unknown_1e[0x6];  // (not read or written by name)
};
GUEST_OFFSET(LoadSoundType1Frame, word_0, 0x0);
GUEST_OFFSET(LoadSoundType1Frame, word_4, 0x4);
GUEST_OFFSET(LoadSoundType1Frame, word_8, 0x8);
GUEST_OFFSET(LoadSoundType1Frame, word_c, 0xc);
GUEST_OFFSET(LoadSoundType1Frame, word_10, 0x10);
GUEST_OFFSET(LoadSoundType1Frame, word_14, 0x14);
GUEST_OFFSET(LoadSoundType1Frame, word_18, 0x18);
GUEST_OFFSET(LoadSoundType1Frame, byte_1c, 0x1c);
GUEST_OFFSET(LoadSoundType1Frame, byte_1d, 0x1d);
GUEST_SIZE(LoadSoundType1Frame, 0x24);

u32 load_sound_type_1(gptr<LoadSoundType1Arg0> arg0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<LoadSoundType1Frame> frame;  // the original's stack frame
    u32 r0 = arg0.addr();
    u32 i = 0;
    u32 r9 = 0;
    u32 r0_3 = 0;
    u32 r6 = r0;
    u32 r5 = *frame.at<u32>(0x40);
    u32 r8 = r2;
    u32 r7 = r3;
    if ((r3 & 1u) != 0) {
        u32 archive_file = archive_file_of_item(arg0->word_4, r1, r2, r3);
        frame->word_0 = 0;
        r0_3 = load_file(r6, archive_file, r8, r5);
        r3 = guest::cpu()->r[3];
        if (r0_3 == 0) {
            return r0_3;
        }
    }
    if ((r7 & 0xcu) != 0) {
        u32 r0_4 = ~0u;
        frame->byte_1c = 0;
        frame->word_4 = 0;
        frame->byte_1d = 0;
        frame->word_18 = 0;
        frame->word_8 = r0_4;
        frame->word_c = r0_4;
        frame->word_10 = r0_4;
        frame->word_14 = r0_4;
        r0_3 = SoundArchive__sequence_info(*gptr<u32>(r6 + 4u), r1, frame.at(4).addr(), r3);
        if (r0_3 == 0) {
            return r0_3;
        } else {
            i = 0u;
            r9 = frame.at(4).addr();
        }
        do {
            u32 r1_1 = *gptr<u32>(r9 + (i << 2) + 4u);
            if (r1_1 + 1u != 0) {
                frame->word_0 = r5;
                r0_3 = load_kind_3(r6, r1_1, r8, r7);
                if (r0_3 == 0) {
                    return r0_3;
                }
            }
            i += 1u;
            guest::preempt();
        } while (i < 4u);
    }
    return 1u;
}

}  // namespace d_001370dc
GUEST_EXPORT_FRAMED(0x001370dc, d_001370dc::load_sound_type_1, 0x43f0);  // pushes {i, r5, r6, r7, r8, r9, lr} first, as the original

// f_001376d8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Replaces the owner's frame heap (destroying the old one) by a new one on the region (start, size), 4-byte aligned;
// false when the region is too small or it fails.
namespace d_001376d8 {

struct __attribute__((packed)) Owner {
    u32 word_0;
};
GUEST_OFFSET(Owner, word_0, 0x0);

inline constexpr guest::Function<0x0013a9e0, u32(u32, u32, u32, u32)> nw__ut__FrameHeap__FrameHeap;
inline constexpr guest::Function<0x0013edb4, u32(u32, u32)> SoundHeap__push_section;
inline constexpr guest::Function<0x0014077c, u32(u32, u32)> SoundHeap__set_mode;
inline constexpr guest::Function<0x00140900, u32(u32)> SoundHeap__destroy;
inline constexpr guest::Function<0x001412f8, u32(u32, u32, u32, u32)> SoundHeap__free_to;

u32 init_frame_heap_in_region(gptr<Owner> owner, u32 start, u32 size) {
    u32 r0_4 = 0;
    if (owner->word_0 != 0) {
        SoundHeap__free_to(owner.addr(), start, size, guest::cpu()->r[3]);
        SoundHeap__set_mode(owner->word_0, 3u);
        SoundHeap__destroy(owner->word_0);
        owner->word_0 = 0;
    }
    u32 r1_2 = start + size;
    u32 aligned = start + 3u & ~3u;
    if (aligned > r1_2) {
        r0_4 = 0u;
    } else {
        r0_4 = nw__ut__FrameHeap__FrameHeap(aligned, r1_2 - aligned, 0u, guest::cpu()->r[3]);
        r1_2 = guest::cpu()->r[1];
        owner->word_0 = r0_4;
        if (r0_4 != 0) {
            r0_4 = SoundHeap__push_section(owner.addr(), r1_2);
            r1_2 = guest::cpu()->r[1];
            if (r0_4 != 0) {
                r0_4 = 1u;
            }
        }
    }
    guest::cpu()->r[1] = r1_2;
    return r0_4;
}

}  // namespace d_001376d8
GUEST_EXPORT_FRAMED(0x001376d8, d_001376d8::init_frame_heap_in_region, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0013775c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Initializes a linked list: empty, its sentinel pointing at itself.
namespace d_0013775c {

struct __attribute__((packed)) LinkedList {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(LinkedList, word_0, 0x0);
GUEST_OFFSET(LinkedList, word_4, 0x4);
GUEST_OFFSET(LinkedList, word_8, 0x8);
GUEST_OFFSET(LinkedList, word_c, 0xc);


void LinkedList__initialize(gptr<LinkedList> list) {
    u32 r3_1 = list.addr() + 8u;
    list->word_0 = 0;
    list->word_4 = 0;
    list->word_8 = r3_1;
    list->word_c = r3_1;
}

}  // namespace d_0013775c
GUEST_EXPORT(0x0013775c, d_0013775c::LinkedList__initialize);

// f_00137830: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Releases the handle at +4 (0013b72c) when it is set.
namespace d_00137830 {

struct __attribute__((packed)) ReleaseHandleIfSetArg0 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
};
GUEST_OFFSET(ReleaseHandleIfSetArg0, word_4, 0x4);

inline constexpr guest::Function<0x0013b72c, u32(u32, u32, u32, u32)> ResFont__release_textures;

void release_handle_if_set(gptr<ReleaseHandleIfSetArg0> arg0) {
    u32 r1 = 0;
    if (arg0->word_4 == 0) {
        return;
    }
    ResFont__release_textures(arg0.addr(), r1, guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_00137830
GUEST_EXPORT(0x00137830, d_00137830::release_handle_if_set);

// f_00137848: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Destroys a font resource: releases its textures, then the font base.
namespace d_00137848 {

inline constexpr u32 vtable_nw__font__ResFont = 0x00902720u;
inline constexpr guest::Function<0x0013b72c, u32(u32, u32, u32, u32)> ResFont__release_textures;
inline constexpr guest::Function<0x0013ef10, u32(u32, u32)> nw__font__ResFontBase__destructor;

u32 nw__font__ResFont__destructor(gptr<nw__font__ResFont> res_font) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 r1_1 = res_font->word_4;
    res_font->vtable = vtable_nw__font__ResFont;
    if (r1_1 != 0) {
        ResFont__release_textures(res_font.addr(), r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1_1 = guest::cpu()->r[1];
    }
    frame.release();
    return nw__font__ResFontBase__destructor(res_font.addr(), r1_1);
}

}  // namespace d_00137848
GUEST_EXPORT(0x00137848, d_00137848::nw__font__ResFont__destructor);

// f_00137878: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Clears a set of network addresses (each the empty pair -3, -1) and its counters.
namespace d_00137878 {

struct __attribute__((packed)) NetAddressSet {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u8 unknown_14[0x4];  // (not used here)
    u32 word_18;
    u32 word_1c;
    u32 word_20;
    u8 unknown_24[0x4];  // (not used here)
    u32 word_28;
    u32 word_2c;
    u32 word_30;
    u8 unknown_34[0x4];  // (not used here)
    u32 word_38;
    u32 word_3c;
    u32 word_40;
    u8 unknown_44[0x4];  // (not used here)
    u32 word_48;
    u32 word_4c;
    u32 word_50;
    u32 word_54;
    u32 word_58;
    u32 word_5c;
    u8 byte_60;
    u8 byte_61;
};
GUEST_OFFSET(NetAddressSet, word_0, 0x0);
GUEST_OFFSET(NetAddressSet, word_4, 0x4);
GUEST_OFFSET(NetAddressSet, word_8, 0x8);
GUEST_OFFSET(NetAddressSet, word_c, 0xc);
GUEST_OFFSET(NetAddressSet, word_10, 0x10);
GUEST_OFFSET(NetAddressSet, word_18, 0x18);
GUEST_OFFSET(NetAddressSet, word_1c, 0x1c);
GUEST_OFFSET(NetAddressSet, word_20, 0x20);
GUEST_OFFSET(NetAddressSet, word_28, 0x28);
GUEST_OFFSET(NetAddressSet, word_2c, 0x2c);
GUEST_OFFSET(NetAddressSet, word_30, 0x30);
GUEST_OFFSET(NetAddressSet, word_38, 0x38);
GUEST_OFFSET(NetAddressSet, word_3c, 0x3c);
GUEST_OFFSET(NetAddressSet, word_40, 0x40);
GUEST_OFFSET(NetAddressSet, word_48, 0x48);
GUEST_OFFSET(NetAddressSet, word_4c, 0x4c);
GUEST_OFFSET(NetAddressSet, word_50, 0x50);
GUEST_OFFSET(NetAddressSet, word_54, 0x54);
GUEST_OFFSET(NetAddressSet, word_58, 0x58);
GUEST_OFFSET(NetAddressSet, word_5c, 0x5c);
GUEST_OFFSET(NetAddressSet, byte_60, 0x60);
GUEST_OFFSET(NetAddressSet, byte_61, 0x61);


void NetAddressSet__clear(gptr<NetAddressSet> net_address_set) {
    net_address_set->word_0 = 0;
    net_address_set->word_4 = 0;
    u32 r2_1 = ~2u;
    net_address_set->word_10 = 0;
    net_address_set->word_20 = 0;
    net_address_set->word_30 = 0;
    u32 r3_1 = ~0u;
    net_address_set->word_40 = 0;
    net_address_set->word_8 = r2_1;
    net_address_set->word_c = r3_1;
    net_address_set->word_18 = r2_1;
    net_address_set->word_1c = r3_1;
    net_address_set->word_38 = r2_1;
    net_address_set->word_3c = r3_1;
    net_address_set->word_28 = r2_1;
    net_address_set->word_2c = r3_1;
    net_address_set->word_58 = 0;
    net_address_set->word_5c = 0;
    net_address_set->byte_60 = 0;
    net_address_set->byte_61 = 0;
    net_address_set->word_48 = r2_1;
    net_address_set->word_4c = r3_1;
    net_address_set->word_50 = r2_1;
    net_address_set->word_54 = r3_1;
    guest::cpu()->r[1] = 0u;
}

}  // namespace d_00137878
GUEST_EXPORT_FRAMED(0x00137878, d_00137878::NetAddressSet__clear, 0x70);  // pushes {r4, r5, r6} first, as the original

// f_0013796c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Releases the net event handler (when set up): resets it and its clock handler, and clears the global
// handler.
namespace d_0013796c {

struct __attribute__((packed)) Object1cPrepareReleaseArg0 {
    u8 unknown_0[0x2c8];  // (not used here)
    u32 word_2c8;
    u32 word_2cc;
    u8 byte_2d0;
};
GUEST_OFFSET(Object1cPrepareReleaseArg0, word_2c8, 0x2c8);
GUEST_OFFSET(Object1cPrepareReleaseArg0, word_2cc, 0x2cc);
GUEST_OFFSET(Object1cPrepareReleaseArg0, byte_2d0, 0x2d0);

inline constexpr u32 net_event_handler_address = 0x00953658u;
inline guest::global<u32, 0x0087bdb4> net_clock_handler;
inline guest::global<u32, 0x0087bdb8> net_clock_handler_adjust;
inline guest::global<u32, 0x00953658> net_event_handler;
inline constexpr guest::Function<0x0013b7dc, u32(u32, u32, u32, u32)> NetEventHandler__reset;

void NetEventHandler__release(gptr<Object1cPrepareReleaseArg0> arg0, u32 r1, u32 r2, u32 r3) {
    if (arg0->byte_2d0 == 0) {
        return;
    }
    NetEventHandler__reset(arg0.addr(), r1, r2, r3);
    u32 r2_1 = *net_clock_handler_adjust;
    arg0->word_2c8 = *net_clock_handler;
    arg0->word_2cc = r2_1;
    arg0->byte_2d0 = 0;
    *net_event_handler = 0;
    guest::cpu()->r[1] = net_event_handler_address;
}

}  // namespace d_0013796c
GUEST_EXPORT_FRAMED(0x0013796c, d_0013796c::NetEventHandler__release, 0x4010);  // pushes {r4, lr} first, as the original

// f_001379b4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Finishes the net event handler: clears the net clock and the global handler, and notifies it.
namespace d_001379b4 {

inline constexpr u32 net_event_handler_address = 0x00953658u;
inline guest::global<u32, 0x00953658> net_event_handler;
inline guest::global<u32, 0x0095365c> net_clock;
inline constexpr guest::Function<0x0013b80c, u32(u32, u32, u32, u32)> NetEventHandler__notify;

u32 NetEventHandler__finish(u32 r0) {
    u32 r0_1 = r0 + 0xcu;
    *net_clock = 0;
    *net_event_handler = 0;
    NetEventHandler__notify(r0_1, net_event_handler_address, 0u, guest::cpu()->r[3]);
    return r0_1 - 0xcu;
}

}  // namespace d_001379b4
GUEST_EXPORT_FRAMED(0x001379b4, d_001379b4::NetEventHandler__finish, 0x4010);  // pushes {r4, lr} first, as the original

// f_001379e4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Resets a part below state 4: state 0, no data, kind 6.
namespace d_001379e4 {

struct __attribute__((packed)) Part144UpdateArg0 {
    u8 byte_0;
    u8 unknown_1[0x3];  // (not used here)
    u32 word_4;
    u8 byte_8;
    u8 byte_9;
};
GUEST_OFFSET(Part144UpdateArg0, byte_0, 0x0);
GUEST_OFFSET(Part144UpdateArg0, word_4, 0x4);
GUEST_OFFSET(Part144UpdateArg0, byte_8, 0x8);
GUEST_OFFSET(Part144UpdateArg0, byte_9, 0x9);


void part_144_update(gptr<Part144UpdateArg0> arg0) {
    u32 r1_1 = arg0->byte_0;
    if (r1_1 >= 4u) {
        guest::cpu()->r[1] = r1_1;
        return;
    }
    arg0->byte_0 = 0;
    arg0->word_4 = 0;
    arg0->byte_8 = 0;
    arg0->byte_9 = 6;
    guest::cpu()->r[1] = 0u;
}

}  // namespace d_001379e4
GUEST_EXPORT(0x001379e4, d_001379e4::part_144_update);

// f_00137c60: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// An empty intrusive list whose nodes sit 0x10 bytes into their objects.
namespace d_00137c60 {

struct __attribute__((packed)) OffsetList {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(OffsetList, word_0, 0x0);
GUEST_OFFSET(OffsetList, word_4, 0x4);
GUEST_OFFSET(OffsetList, word_8, 0x8);
GUEST_OFFSET(OffsetList, word_c, 0xc);


void OffsetList__initialize(gptr<OffsetList> offset_list) {
    offset_list->word_4 = offset_list.addr();
    offset_list->word_8 = 0;
    offset_list->word_0 = offset_list.addr();
    offset_list->word_c = 0x10;
}

}  // namespace d_00137c60
GUEST_EXPORT(0x00137c60, d_00137c60::OffsetList__initialize);

// f_00137d88: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Gives an empty array room for `capacity` pointers from the heap (a positive capacity only).
namespace d_00137d88 {

struct __attribute__((packed)) PointerArray {
    u32 word_0;
};
GUEST_OFFSET(PointerArray, word_0, 0x0);

inline constexpr guest::Function<0x00131280, u32(u32, u32, u32)> allocate_on_heap_entry;
inline constexpr guest::Function<0x0013cbdc, u32(u32, u32, u32)> SoundChannel__init;

void PointerArray__allocate_2(gptr<PointerArray> array, u32 capacity, u32 heap) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    if (capacity != 0 && capacity >> 0x1f == ((capacity & (capacity ^ capacity)) >> 0x1f)) {
        u32 block_2 = allocate_on_heap_entry(capacity << 2, heap, 4u);
        array->word_0 = block_2;
        frame.release();
        SoundChannel__init(array.addr() + 4u, block_2, capacity);
        return;
    }
}

}  // namespace d_00137d88
GUEST_EXPORT(0x00137d88, d_00137d88::PointerArray__allocate_2);

// f_00137dc4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Clears a thread's parameter block (id -1).
namespace d_00137dc4 {

struct __attribute__((packed)) ThreadParams {
    u32 word_0;
    u8 unknown_4[0x4];  // (not used here)
    u32 word_8;
    u16 half_c;
    u8 unknown_e[0x2];  // (not used here)
    u32 word_10;
    u16 half_14;
    u8 unknown_16[0x2];  // (not used here)
    u32 word_18;
    u32 word_1c;
    u32 word_20;
    u8 unknown_24[0xc];  // (not used here)
    u32 word_30;
    u32 word_34;
};
GUEST_OFFSET(ThreadParams, word_0, 0x0);
GUEST_OFFSET(ThreadParams, word_8, 0x8);
GUEST_OFFSET(ThreadParams, half_c, 0xc);
GUEST_OFFSET(ThreadParams, word_10, 0x10);
GUEST_OFFSET(ThreadParams, half_14, 0x14);
GUEST_OFFSET(ThreadParams, word_18, 0x18);
GUEST_OFFSET(ThreadParams, word_1c, 0x1c);
GUEST_OFFSET(ThreadParams, word_20, 0x20);
GUEST_OFFSET(ThreadParams, word_30, 0x30);
GUEST_OFFSET(ThreadParams, word_34, 0x34);


void ThreadParams__clear(gptr<ThreadParams> thread_params) {
    thread_params->word_0 = 0;
    thread_params->word_8 = 0;
    thread_params->half_c = 0;
    thread_params->word_10 = 0;
    thread_params->half_14 = 0;
    thread_params->word_18 = 0;
    thread_params->word_1c = 0;
    thread_params->word_20 = ~0u;
    thread_params->word_30 = 0;
    thread_params->word_34 = 0;
}

}  // namespace d_00137dc4
GUEST_EXPORT(0x00137dc4, d_00137dc4::ThreadParams__clear);

// f_00137e84: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Unlocks the recursive lock at the object's offset 0x10.
namespace d_00137e84 {

inline constexpr guest::Function<0x001357ec, u32(u32, u32)> RecursiveLock__unlock;

u32 unlock_member_lock(u32 r0) {
    return RecursiveLock__unlock(r0 + 0x10u, guest::cpu()->r[1]);
}

}  // namespace d_00137e84
GUEST_EXPORT(0x00137e84, d_00137e84::unlock_member_lock);

// f_00137e8c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Destroys a critical section: its disposer.
namespace d_00137e8c {

inline constexpr u32 vtable_sead__CriticalSection = 0x00904830u;
inline constexpr guest::Function<0x0013efb4, u32(u32, u32, u32, u32)> destroy_disposer;

u32 destroy_critical_section(gptr<sead__CriticalSection> critical_section) {
    critical_section->vtable = vtable_sead__CriticalSection;
    return destroy_disposer(critical_section.addr(), vtable_sead__CriticalSection, guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_00137e8c
GUEST_EXPORT(0x00137e8c, d_00137e8c::destroy_critical_section);

// f_00137e9c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Constructs the audio effects memory manager controller.
namespace d_00137e9c {

inline constexpr u32 vtable_sead__AudioFxMemoryMgrCtr = 0x00905018u;
inline constexpr guest::Function<0x0013b910, u32(u32)> sead__AudioFxMemoryMgr__AudioFxMemoryMgr;

u32 sead__AudioFxMemoryMgrCtr__AudioFxMemoryMgrCtr(gptr<sead__AudioFxMemoryMgrCtr> audio_fx_memory_mgr_ctr) {
    sead__AudioFxMemoryMgr__AudioFxMemoryMgr(audio_fx_memory_mgr_ctr.addr());
    audio_fx_memory_mgr_ctr->vtable = vtable_sead__AudioFxMemoryMgrCtr;
    return audio_fx_memory_mgr_ctr.addr();
}

}  // namespace d_00137e9c
GUEST_EXPORT_FRAMED(0x00137e9c, d_00137e9c::sead__AudioFxMemoryMgrCtr__AudioFxMemoryMgrCtr, 0x4010);  // pushes {r4, lr} first, as the original

// f_00137ec0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Inserts at position `index` of the list at +0x40, under the object's lock when it has one.
namespace d_00137ec0 {

struct __attribute__((packed)) Owner {
    u8 unknown_0[0x70];  // (not used here)
    u16 half_70;
};
GUEST_OFFSET(Owner, half_70, 0x70);

struct __attribute__((packed)) Local_00137ec0_r5_1 {
    u8 unknown_0[0x8];  // (not used here)
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Local_00137ec0_r5_1, word_8, 0x8);
GUEST_OFFSET(Local_00137ec0_r5_1, word_c, 0xc);

inline constexpr guest::Function<0x00135740, u32(u32, u32, u32, u32)> lock_member_lock;
inline constexpr guest::Function<0x00137e84, u32(u32, u32)> unlock_member_lock;
inline constexpr guest::Function<0x00138560, u32(u32, u32)> insert_node_after_00138560;

void insert_into_list_40_locked(gptr<Owner> owner, u32 index) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 r0_1 = owner.addr() + 0x54u;
    u32 r4_1 = 0u;
    u32 r1_1 = u32(owner->half_70) & 1u;
    if (r1_1 != 0) {
        r1_1 = 1u;
    }
    if (r1_1 != 0) {
        r4_1 = r0_1;
        lock_member_lock(r0_1, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
    }
    gptr<Local_00137ec0_r5_1> r5_1 = gptr<Local_00137ec0_r5_1>(owner.addr() + 0x40u);
    insert_node_after_00138560(r5_1.addr(), r5_1->word_c + index);
    r5_1->word_8 = r5_1->word_8 + 1u;
    if (r4_1 != 0) {
        frame.release();
        unlock_member_lock(r4_1, guest::cpu()->r[1]);
        return;
    }
}

}  // namespace d_00137ec0
GUEST_EXPORT(0x00137ec0, d_00137ec0::insert_into_list_40_locked);

// f_001382cc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Marks 0x97e854, stores a value at +4 and the memory size (0x974f54) at +0.
namespace d_001382cc {

struct __attribute__((packed)) InitMemoryInfoArg0 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(InitMemoryInfoArg0, word_0, 0x0);
GUEST_OFFSET(InitMemoryInfoArg0, word_4, 0x4);

inline guest::global<u8, 0x0097e854> global_0097e854;
inline constexpr guest::Function<0x0013ff84, u32(u32)> read_u32_0x00974f54_;

void init_memory_info(gptr<InitMemoryInfoArg0> root_memory_info_address, u32 r1) {
    *global_0097e854 = 1;
    root_memory_info_address->word_4 = r1;
    root_memory_info_address->word_0 = read_u32_0x00974f54_(1u);
}

}  // namespace d_001382cc
GUEST_EXPORT_FRAMED(0x001382cc, d_001382cc::init_memory_info, 0x4010);  // pushes {r4, lr} first, as the original

// f_00138398: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Constructs an audio effect: none, unassigned (0xff).
namespace d_00138398 {

inline constexpr u32 vtable_sead__AudioFx = 0x00905ac4u;

void sead__AudioFx__AudioFx(gptr<sead__AudioFx> audio_fx) {
    audio_fx->word_4 = 0;
    audio_fx->vtable = vtable_sead__AudioFx;
    audio_fx->word_8 = 0;
    audio_fx->byte_c = 0xff;
    audio_fx->word_10 = 0;
    audio_fx->word_14 = 0;
}

}  // namespace d_00138398
GUEST_EXPORT(0x00138398, d_00138398::sead__AudioFx__AudioFx);

// f_001385fc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Constructs the thread manager: an empty thread list, its lock, and a thread-local slot for the current
// thread.
namespace d_001385fc {

inline constexpr u32 vtable_sead__ThreadMgr = 0x0090601cu;
inline constexpr guest::Function<0x0012bfec, u32(u32, u32, u32, u32)> CriticalSection__construct;
inline constexpr guest::Function<0x0013a37c, u32(u32, u32)> ThreadLocal__set;
inline constexpr guest::Function<0x0013a38c, u32(u32)> ThreadLocal__allocate;

u32 sead__ThreadMgr__ThreadMgr(gptr<sead__ThreadMgr> thread_mgr) {
    u32 r2_1 = thread_mgr.addr() + 0x14u;
    thread_mgr->vtable = vtable_sead__ThreadMgr;
    thread_mgr->word_18 = r2_1;
    thread_mgr->word_1c = 0;
    u32 ea_1 = thread_mgr.addr() + 0x14u;
    thread_mgr->word_14 = r2_1;
    CriticalSection__construct(ea_1 + 0xcu, thread_mgr.addr() + 0x18u, r2_1, guest::cpu()->r[3]);
    thread_mgr->word_3c = 0;
    u32 slot = ThreadLocal__allocate(ea_1 + 0x2cu);
    ThreadLocal__set(slot, 0u);
    return slot - 0x40u;
}

}  // namespace d_001385fc
GUEST_EXPORT_FRAMED(0x001385fc, d_001385fc::sead__ThreadMgr__ThreadMgr, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_001386f4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Releases the split's handle and takes one from the count of handles in use.
namespace d_001386f4 {

inline constexpr u32 load_split_handles_address = 0x00ae55f0u;
inline guest::global<u8, 0x00975c32> load_split_handle_state;
inline constexpr guest::Function<0x00135740, u32(u32, u32)> lock_member_lock;
inline constexpr guest::Function<0x00137e84, u32(u32, u32)> unlock_member_lock;
inline constexpr guest::Function<0x0013bb88, u32(u32, u32, u32, u32)> release_owned_handle;

void LoadSplit__release_handle(gptr<ssys__ma__LoadSplit> split) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 r1_1 = split->word_3c;
    if (r1_1 == 0) {
        guest::cpu()->r[1] = r1_1;
        return;
    }
    release_owned_handle(split.addr() + 0xcu, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
    lock_member_lock(load_split_handles_address, r1_1);
    u32 r1_2 = u32(*load_split_handle_state) - 1u;
    *load_split_handle_state = u8(r1_2);
    frame.release();
    unlock_member_lock(load_split_handles_address, r1_2);
    return;
}

}  // namespace d_001386f4
GUEST_EXPORT(0x001386f4, d_001386f4::LoadSplit__release_handle);

// f_00138998: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Frees the object a pair holds (with its buffer), then clears the pair.
namespace d_00138998 {

struct __attribute__((packed)) Pair {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Pair, word_0, 0x0);
GUEST_OFFSET(Pair, word_4, 0x4);

inline constexpr guest::Function<0x00139724, u32(u32, u32, u32, u32)> free_object_and_buffer;

void release_and_clear_pair_2(gptr<Pair> pair) {
    u32 r0_1 = pair->word_0;
    if (r0_1 == 0) {
        return;
    }
    free_object_and_buffer(r0_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    pair->word_0 = 0;
    pair->word_4 = 0;
}

}  // namespace d_00138998
GUEST_EXPORT_FRAMED(0x00138998, d_00138998::release_and_clear_pair_2, 0x4010);  // pushes {r4, lr} first, as the original

// f_001389c0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Destroys eight 0x40-byte entries.
namespace d_001389c0 {

inline constexpr guest::Function<0x002f76ad, u32(u32, u32, u32, u32)> destroy_array_elements;

u32 destroy_eight_entries_40(u32 r0) {
    destroy_array_elements(r0, 0x13bedcu, 0x40u, 8u);
    return r0;
}

}  // namespace d_001389c0
GUEST_EXPORT_FRAMED(0x001389c0, d_001389c0::destroy_eight_entries_40, 0x4010);  // pushes {r4, lr} first, as the original

// f_001389e4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Nothing.
namespace d_001389e4 {


void do_nothing_001389e4(u32 r0) {
}

}  // namespace d_001389e4
GUEST_EXPORT_FRAMED(0x001389e4, d_001389e4::do_nothing_001389e4, 0x4010);  // pushes {r4, lr} first, as the original

// f_00138a00: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Nothing.
namespace d_00138a00 {


void do_nothing_00138a00(u32 r0) {
}

}  // namespace d_00138a00
GUEST_EXPORT_FRAMED(0x00138a00, d_00138a00::do_nothing_00138a00, 0x4010);  // pushes {r4, lr} first, as the original

// f_00138a1c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Nothing.
namespace d_00138a1c {


void do_nothing_00138a1c(u32 r0) {
}

}  // namespace d_00138a1c
GUEST_EXPORT_FRAMED(0x00138a1c, d_00138a1c::do_nothing_00138a1c, 0x4010);  // pushes {r4, lr} first, as the original

// f_00138c2c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The last index of list `index` (fewer than 6), read under its lock; -1 without one.
namespace d_00138c2c {

inline constexpr guest::Function<0x00135748, u32(u32, u32, u32, u32)> RecursiveLock__lock;
inline constexpr guest::Function<0x001357ec, u32(u32)> RecursiveLock__unlock;
inline constexpr guest::Function<0x00138f30, u32(u32)> List__last_index;

u32 locked_list_last_index(u32 r0, u32 index) {
    if (index < 6u) {
        u32 list = *gptr<u32>(r0 + (index << 2) + 0x14u);
        if (list != 0) {
            RecursiveLock__lock(list + 4u, index, guest::cpu()->r[2], guest::cpu()->r[3]);
            u32 r0_2 = List__last_index(list + 0x10u);
            RecursiveLock__unlock(list + 4u);
            return r0_2;
        }
    }
    return ~0u;
}

}  // namespace d_00138c2c
GUEST_EXPORT_FRAMED(0x00138c2c, d_00138c2c::locked_list_last_index, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_00138c78: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The value of a thread-local slot for the current thread.
namespace d_00138c78 {

struct __attribute__((packed)) ThreadLocal {
    u32 word_0;
};
GUEST_OFFSET(ThreadLocal, word_0, 0x0);


u32 ThreadLocal__get(gptr<ThreadLocal> slot) {
    u32 thread_slots = guest::cpu()->tls;
    u32 r0_1 = gptr<u32>(thread_slots)[slot->word_0];
    guest::cpu()->r[1] = thread_slots;
    return r0_1;
}

}  // namespace d_00138c78
GUEST_EXPORT(0x00138c78, d_00138c78::ThreadLocal__get);

// f_00138f08: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The type of a sound archive entry, by its id (arg 1); 0 when no entry has it.
namespace d_00138f08 {

struct __attribute__((packed)) ArchiveSoundTypeArg0 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
};
GUEST_OFFSET(ArchiveSoundTypeArg0, word_4, 0x4);

inline constexpr guest::Function<0x0013f718, u32(u32, u32)> ResSoundEntry__type;
inline constexpr guest::Function<0x00141728, u32(u32, u32)> HandleTable__resolve;

u32 archive_sound_type(gptr<ArchiveSoundTypeArg0> arg0) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 entry = HandleTable__resolve(*gptr<u32>(arg0->word_4 + 0x3cu), guest::cpu()->r[1]);
    if (entry == 0) {
        return entry;
    }
    frame.release();
    return ResSoundEntry__type(entry, guest::cpu()->r[1]);
}

}  // namespace d_00138f08
GUEST_EXPORT(0x00138f08, d_00138f08::archive_sound_type);

// f_00138f30: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// A list's last index (its count minus one).
namespace d_00138f30 {

struct __attribute__((packed)) List {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
};
GUEST_OFFSET(List, word_4, 0x4);


u32 List__last_index(gptr<List> list) {
    return list->word_4 - 1u;
}

}  // namespace d_00138f30
GUEST_EXPORT(0x00138f30, d_00138f30::List__last_index);

// f_001391c4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Allocates size bytes (arg 0) on a heap (arg 1).
namespace d_001391c4 {

inline constexpr guest::Function<0x00131294, u32(u32, u32, u32, u32)> Heap__allocate;

u32 allocate_in(u32 size, u32 heap) {
    return Heap__allocate(heap, size, guest::cpu()->r[2], 0u);
}

}  // namespace d_001391c4
GUEST_EXPORT(0x001391c4, d_001391c4::allocate_in);

// f_001391d8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Allocates from the current heap, 4-byte aligned.
namespace d_001391d8 {

inline constexpr guest::Function<0x00131294, u32(u32, u32, u32, u32)> Heap__allocate;

u32 allocate(u32 size) {
    return Heap__allocate(0u, size, 4u, 0u);
}

}  // namespace d_001391d8
GUEST_EXPORT(0x001391d8, d_001391d8::allocate);

// f_001391ec: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Initializes the vertex attribute tables at 0x974a7c.
namespace d_001391ec {

inline constexpr u32 command_list_cursor_address = 0x00974a7cu;

void init_vertex_tables(u32 r0, u32 r1, u32 r2) {
    u32 res_2 = 0;
    u32 res_4 = 0;
    u32 r7 = command_list_cursor_address;
    u32 r3 = *gptr<u32>(r7);
    u32 r12_1 = *gptr<u32>(r7 + 4);
    if (r12_1 <= r3 + ((r1 & ~1u) + (r1 >> 7 << 1) << 2) + 8u) {
        *gptr<u32>(r7) = r12_1;
    } else {
        u32 r6 = 0u;
        if (r1 >= 0u && r1 != 0) {
            u32 r8 = r6 - 0x100000u;
            do {
                u32 r4_1 = r1 - r6;
                if (r4_1 > 0x80u) {
                    r4_1 = 0x80u;
                }
                u32 r12 = r4_1 >> 1;
                *gptr<u32>(r3) = r2;
                u32 r3_1 = r3 + 4u;
                u32 r4 = r8 + (r4_1 << 0x14) | r0 + r6 | 0x80000000u | 0xf0000u;
                u32 res_1 = r12 + 0x80000001u;
                *gptr<u32>(r3_1) = r4;
                r3 = r3_1 + 4u;
                if (res_1 < r12 && res_1 != 0) {
                    do {
                        *gptr<u32>(r3) = r2;
                        u32 r3_2 = r3 + 4u;
                        res_2 = r12 - 1u;
                        r12 = res_2;
                        *gptr<u32>(r3_2) = r2;
                        r3 = r3_2 + 4u;
                        guest::preempt();
                    } while (res_2 != 0);
                } else {
                    u32 r5 = r12 << 1;
                    u32 res_3 = r5;
                    u32 vf_1 = (r5 & (r5 ^ res_3)) >> 0x1f;
                    if (res_3 != 0 && s32(r5) >= 0) {
                        r4 = r3 - 4u;
                        r5 = s32(r5) >> 1;
                    }
                    if (res_3 != 0 && res_3 >> 0x1f == vf_1) {
                        do {
                            *gptr<u32>(r4 + 4u) = r2;
                            res_4 = r5 - 1u;
                            r5 = res_4;
                            u32 ea_2 = r4 + 8u;
                            *gptr<u32>(ea_2) = r2;
                            r4 = ea_2;
                            guest::preempt();
                        } while (res_4 != 0);
                        r3 += (r12 << 3);
                    }
                }
                r6 += 0x80u;
                guest::preempt();
            } while (r6 < r1);
        }
        *gptr<u32>(r7) = r3;
    }
}

}  // namespace d_001391ec
GUEST_EXPORT_FRAMED(0x001391ec, d_001391ec::init_vertex_tables, 0x1f0);  // pushes {r4, r5, r6, r7, r8} first, as the original

// f_00139448: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The address of the thread's context block slot (in its thread-local storage).
namespace d_00139448 {


u32 context_block_slot() {
    u32 r0_1 = guest::cpu()->tls + 0x5cu;
    return r0_1;
}

}  // namespace d_00139448
GUEST_EXPORT(0x00139448, d_00139448::context_block_slot);

// f_00139454: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Sets vertex attribute `index` (0x10 clears all) from its description: its address and its stride (the given one, or
// the element count times the type size).
namespace d_00139454 {

struct __attribute__((packed)) Local_00139454_r1_1 {
    u32 word_0;
    u8 unknown_4[0x44];  // (not used here)
    u32 word_48;
};
GUEST_OFFSET(Local_00139454_r1_1, word_0, 0x0);
GUEST_OFFSET(Local_00139454_r1_1, word_48, 0x48);

struct __attribute__((packed)) Local_00139454_r1_2 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Local_00139454_r1_2, word_0, 0x0);
GUEST_OFFSET(Local_00139454_r1_2, word_4, 0x4);
GUEST_OFFSET(Local_00139454_r1_2, word_8, 0x8);
GUEST_OFFSET(Local_00139454_r1_2, word_c, 0xc);

struct __attribute__((packed)) Local_00139454_r2_2 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
    u8 unknown_8[0x44];  // (not used here)
    u32 word_4c;
    u8 unknown_50[0x3c];  // (not used here)
    u32 word_8c;
};
GUEST_OFFSET(Local_00139454_r2_2, word_4, 0x4);
GUEST_OFFSET(Local_00139454_r2_2, word_4c, 0x4c);
GUEST_OFFSET(Local_00139454_r2_2, word_8c, 0x8c);

inline constexpr u32 gpu_state_address = 0x0097d784u;
inline guest::global<u32, 0x0097d784> gpu_state;

void VertexState__set_attribute(u32 vertex_state) {
    u32 r2_1 = *gpu_state;
    gptr<Local_00139454_r1_1> r1_1 = gptr<Local_00139454_r1_1>(r2_1 + 0x6a0u);
    if (vertex_state == 0x10u) {
        r1_1->word_0 = 0;
        r1_1->word_48 = 0;
        guest::cpu()->r[1] = r1_1.addr();
        return;
    }
    gptr<Local_00139454_r2_2> r2_2 = gptr<Local_00139454_r2_2>(r1_1.addr() + (vertex_state << 2));
    gptr<Local_00139454_r1_2> r1_2 = gptr<Local_00139454_r1_2>(r2_1 + 0x458u + vertex_state * 0x18u);
    u32 r0_1 = r1_2->word_0;
    r2_2->word_4 = r0_1;
    r2_2->word_4c = r0_1;
    u32 r0_2 = r1_2->word_8;
    u32 zf_1 = r0_2 - 0x1400u == 0;
    if (!zf_1) {
        zf_1 = r0_2 - 0x1401u == 0;
        r0_2 = r0_2 - 0x1401u;
    }
    u32 r3_2 = r1_2->word_c;
    if (r3_2 == 0) {
        r1_2 = gptr<Local_00139454_r1_2>(r1_2->word_4);
        r3_2 = r1_2.addr() * (zf_1 ? 1u : r0_2 == 1u ? 2u : r0_2 == 5u ? 4u : 0u);
    }
    r2_2->word_8c = r3_2;
    guest::cpu()->r[1] = r1_2.addr();
}

}  // namespace d_00139454
GUEST_EXPORT(0x00139454, d_00139454::VertexState__set_attribute);

// f_0013959c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether a file (path arg 0) opens, closing it again (not-found errors 100 to 179 of module 0x11 count as
// absent).
namespace d_0013959c {

inline guest::global<u32, 0x008fac7c> global_008fac7c;
inline guest::global<u32, 0x008fac88> global_008fac88;
inline constexpr guest::Function<0x0012ede8, u32(u32, u32)> call_virtual_12_if_present;
inline constexpr guest::Function<0x00134250, u32(u32, u32)> fatal_result;
inline constexpr guest::Function<0x0013d85c, u32(u32, u32)> FileInputStream__close;
inline constexpr guest::Function<0x0013df14, u32(u32, u32, u32, u32)> FileInputStream__open_path;

struct __attribute__((packed)) CflFileExists13959cFrame {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u8 unknown_18[0x4];  // (not read or written by name)
};
GUEST_OFFSET(CflFileExists13959cFrame, word_0, 0x0);
GUEST_OFFSET(CflFileExists13959cFrame, word_4, 0x4);
GUEST_OFFSET(CflFileExists13959cFrame, word_8, 0x8);
GUEST_OFFSET(CflFileExists13959cFrame, word_c, 0xc);
GUEST_OFFSET(CflFileExists13959cFrame, word_10, 0x10);
GUEST_OFFSET(CflFileExists13959cFrame, word_14, 0x14);
GUEST_SIZE(CflFileExists13959cFrame, 0x1c);

u32 cfl_file_exists(u32 r0) {
    guest::StackFrameOf<CflFileExists13959cFrame> frame;  // the original's stack frame
    u32 r4_1 = 0;
    frame->word_4 = 0;
    frame->word_8 = 0;
    frame->word_c = 0;
    frame->word_10 = 0;
    frame->word_14 = 0;
    u32 r1_1 = *global_008fac7c;
    u32 r3_1 = frame.at(0).addr();
    frame->word_0 = r1_1;
    *gptr<u32>(frame.at(0).addr() + *gptr<u32>(r1_1 - 0x30u)) = *global_008fac88;
    u32 r0_2 = FileInputStream__open_path(r3_1 + 4u, r0, 1u, r3_1);
    u32 r1_2 = (r0_2 & 0x3fc00u) >> 0xa;
    if (r1_2 == 0x11u) {
        r1_2 = r0_2 & 0x3ffu;
        r4_1 = !(s32(r1_2) >= 0x64 && s32(r1_2) <= 0xb3);
    } else {
        r4_1 = 1u;
    }
    if (s32(r0_2) >= 0) {
        if ((frame->word_4 & ~1u) != 0) {
            u32 r0_3 = frame->word_4;
            if ((r0_3 & 1u) != 0) {
                fatal_result(r0_3, r1_2);
                r1_2 = guest::cpu()->r[1];
            }
            call_virtual_12_if_present(frame->word_4 & ~1u, r1_2);
            frame->word_4 = 0;
        }
    }
    FileInputStream__close(frame.at(0).addr(), 0u);
    return r4_1;
}

}  // namespace d_0013959c
GUEST_EXPORT_FRAMED(0x0013959c, d_0013959c::cfl_file_exists, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_00139674: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether bit arg 0 of the CFL state (the instance's, else the global one) is set.
namespace d_00139674 {

inline constexpr u32 cfl_state_address = 0x00975280u;
inline constexpr u32 cfl_instance_address = 0x00975284u;
inline guest::global<u32, 0x00975284> cfl_instance;

u32 cfl_state_bit(u32 r0) {
    u32 r1_1 = *cfl_instance;
    u32 r1_2 = *gptr<u32>(r1_1 == 0u ? cfl_state_address : r1_1 + 0xc4u);
    u32 r0_1 = r1_2 & lsl_r(1u, r0 & 0xff);
    if (r0_1 != 0) {
        r0_1 = 1u;
    }
    guest::cpu()->r[1] = r1_2;
    return r0_1;
}

}  // namespace d_00139674
GUEST_EXPORT(0x00139674, d_00139674::cfl_state_bit);

// f_001396a4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The CFL instance's byte 0xc0, when the CFL state flag is set; else 0.
namespace d_001396a4 {

inline constexpr guest::Function<0x0013d028, u32(u32)> cfl_state_flag_set;
inline constexpr guest::Function<0x0013d138, u32(u32)> read_cfl_instance;

u32 cfl_query_1396a4(u32 r0) {
    u32 r0_1 = cfl_state_flag_set(r0);
    if (r0_1 == 0) {
        return r0_1;
    }
    u32 r0_2 = read_cfl_instance(r0_1);
    return *gptr<u8>(r0_2 + 0xc0u);
}

}  // namespace d_001396a4
GUEST_EXPORT_FRAMED(0x001396a4, d_001396a4::cfl_query_1396a4, 0x4010);  // pushes {r4, lr} first, as the original

// f_001396c0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Starts the CFL worker thread with a callback argument (arg 1), marking the CFL instance busy when its flag
// is set.
namespace d_001396c0 {

struct __attribute__((packed)) Local_001396c0_r3_3 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_001396c0_r3_3, word_0, 0x0);
GUEST_OFFSET(Local_001396c0_r3_3, word_4, 0x4);

inline constexpr guest::Function<0x0013d028, u32(u32, u32, u32, u32)> cfl_state_flag_set;
inline constexpr guest::Function<0x0013d138, u32(u32)> read_cfl_instance;
inline constexpr guest::Function<0x0013d24c, u32(u32, u32, u32, u32)> Thread__run_main;

u32 cfl_start_thread(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 r0_1 = cfl_state_flag_set(r0, r1, r2, r3);
    if (r0_1 != 0) {
        u32 r0_2 = read_cfl_instance(r0_1);
        *gptr<u8>(r0_2 + 0xc0u) = 1;
        u32 r0_3 = read_cfl_instance(r0_2);
        *gptr<u32>(r0_3 + 0xc8u) = 0xa;
    }
    gptr<Local_001396c0_r3_3> r3_3 = gptr<Local_001396c0_r3_3>(r0 + 0x24u);
    r3_3->word_0 = 0;
    r3_3->word_4 = r1;
    *gptr<u32>(r0 + 0x18u) = 0;
    *gptr<u32>(r0 + 0x20u) = 0;
    *gptr<u32>(r0 + 0x1cu) = 0;
    *gptr<u32>(r0 + 0xcu) = 0x13d24c;
    *gptr<u8>(r0 + 0x10u) = 0;
    frame.release();
    return Thread__run_main(r0, 0u, 0x13d24cu, r3_3.addr());
}

}  // namespace d_001396c0
GUEST_EXPORT(0x001396c0, d_001396c0::cfl_start_thread);

// f_00139724: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Frees the object's buffer (+0xc) when it has one, then the object, through the free hook.
namespace d_00139724 {

struct __attribute__((packed)) FreeObjectAndBufferArg0 {
    u8 unknown_0[0xc];  // (not used here)
    u32 word_c;
};
GUEST_OFFSET(FreeObjectAndBufferArg0, word_c, 0xc);

inline constexpr guest::Function<0x0013d060, u32(u32, u32, u32, u32)> call_free_hook;

void free_object_and_buffer(gptr<FreeObjectAndBufferArg0> object) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 r0_1 = object->word_c;
    if (r0_1 != 0) {
        call_free_hook(r0_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    }
    frame.release();
    call_free_hook(object.addr(), guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    return;
}

}  // namespace d_00139724
GUEST_EXPORT(0x00139724, d_00139724::free_object_and_buffer);

// f_00139a90: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Waits for the CFL's result: while it is busy, then 3 when it failed, else its result.
namespace d_00139a90 {

inline constexpr u32 cfl_result_address = 0x00975274u;
inline constexpr u32 cfl_state_address = 0x00975280u;
inline constexpr guest::Function<0x001396a4, u32(u32, u32, u32, u32)> cfl_query_1396a4;

u32 cfl_wait_result(u32 r0_unused, u32 r1) {
    u32 r4 = cfl_result_address;
L_139a98:;
    u32 r0_1 = *gptr<u32>(r4 + 4u);
    if (*gptr<u32>(r4 + 0x10u) != 0) {
        u32 r0_2 = cfl_query_1396a4(r0_1, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        if (r0_2 != 0) {
            guest::preempt();
            goto L_139a98;
        }
        u32 r0_3 = *gptr<u32>(r4 + 0x10u);
        u32 r1_1 = *gptr<u32>(r0_3 == 0 ? cfl_state_address : r0_3 + 0xc4u);
        if ((r1_1 & 4u) != 0) {
            guest::cpu()->r[1] = r1_1;
            return 3u;
        }
        r1 = *gptr<u32>(r0_3 == 0 ? cfl_state_address : r0_3 + 0xc4u);
        if ((r1 & 8u) == 0) {
            r0_1 = *gptr<u32>(r0_3 + 0xc8u);
        } else {
            guest::cpu()->r[1] = r1;
            return 3u;
        }
    }
    if (r0_1 != 0xau) {
        guest::cpu()->r[1] = r1;
        return r0_1;
    }
    guest::preempt();
    goto L_139a98;
}

}  // namespace d_00139a90
GUEST_EXPORT_FRAMED(0x00139a90, d_00139a90::cfl_wait_result, 0x4010);  // pushes {r4, lr} first, as the original

// f_00139bb0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Computes a CRC-16 (CCITT, polynomial 0x1021, from arg 0) over a buffer (arg 1, length arg 2 including the
// two-byte slot at its end) and stores it there, big-endian.
namespace d_00139bb0 {


void crc16_ccitt_append(u32 r0, u32 r1, u32 r2) {
    u32 r4 = guest::cpu()->r[4];
    u32 r6 = guest::cpu()->r[6];
    u32 ea_1 = r1 + r2 - 2u;
    *gptr<u16>(ea_1) = 0;
    u32 r5 = ea_1;
    if (r2 >= 0u && r2 != 0) {
        r4 = 0x1021u;
        r6 = 0xffffu;
    }
    r0 = uxth(r0);
    u32 i = 0u;
    if (r2 >= 0u && r2 != 0) {
        do {
            u32 r3 = 4u;
            do {
                u32 r0_1 = (r0 & 0x8000u) == 0 ? r6 & r0 << 1 : uxth(r4 ^ r0 << 1);
                r0 = (r0_1 & 0x8000u) == 0 ? r6 & r0_1 << 1 : uxth(r4 ^ r0_1 << 1);
                r3 -= 1u;
                guest::preempt();
            } while (r3 != 0);
            u32 v_1 = *gptr<u8>(r1);
            r1 += 1u;
            i += 1u;
            r0 ^= v_1;
            guest::preempt();
        } while (i < r2);
    }
    *gptr<u16>(r5) = u16(rev16(r0));
    guest::cpu()->r[1] = r1;
}

}  // namespace d_00139bb0
GUEST_EXPORT_FRAMED(0x00139bb0, d_00139bb0::crc16_ccitt_append, 0xf0);  // pushes {r4, r5, r6, r7} first, as the original

// f_00139c30: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The CFL status: 10 while busy, 3 when it failed (bits 2 or 3), else the instance's result.
namespace d_00139c30 {

inline constexpr u32 cfl_result_address = 0x00975274u;
inline constexpr u32 cfl_run_state_address = 0x00975278u;
inline constexpr u32 cfl_state_address = 0x00975280u;
inline constexpr u32 cfl_instance_address = 0x00975284u;
inline guest::global<u32, 0x00975278> cfl_run_state;
inline guest::global<u32, 0x00975284> cfl_instance;
inline constexpr guest::Function<0x001396a4, u32(u32, u32)> cfl_query_1396a4;

u32 cfl_status(u32 r0_unused, u32 r1) {
    u32 r0_1 = *cfl_run_state;
    if (*cfl_instance == 0) {
        return r0_1;
    }
    if (cfl_query_1396a4(r0_1, r1) != 0) {
        return 0xau;
    }
    u32 r0_3 = *cfl_instance;
    u32 r1_2 = *gptr<u32>(r0_3 == 0 ? cfl_state_address : r0_3 + 0xc4u);
    if ((r1_2 & 4u) != 0) {
        guest::cpu()->r[1] = r1_2;
        return 3u;
    }
    u32 r1_3 = *gptr<u32>(r0_3 == 0 ? cfl_state_address : r0_3 + 0xc4u);
    if ((r1_3 & 8u) == 0) {
        u32 r0_4 = *gptr<u32>(r0_3 + 0xc8u);
        guest::cpu()->r[1] = r1_3;
        return r0_4;
    }
    guest::cpu()->r[1] = r1_3;
    return 3u;
}

}  // namespace d_00139c30
GUEST_EXPORT_FRAMED(0x00139c30, d_00139c30::cfl_status, 0x4010);  // pushes {r4, lr} first, as the original

// f_00139dac: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Stops the camera when it is running: stops capture, releases its buffer and marks it stopped.
namespace d_00139dac {

struct __attribute__((packed)) Camera {
    u8 unknown_0[0x14];  // (not used here)
    u8 byte_14;
    u8 unknown_15[0x17];  // (not used here)
    u32 word_2c;
};
GUEST_OFFSET(Camera, byte_14, 0x14);
GUEST_OFFSET(Camera, word_2c, 0x2c);

inline constexpr guest::Function<0x0013fd78, u32(u32, u32, u32, u32)> MicInput__stop;
inline constexpr guest::Function<0x0014041c, u32(u32)> Dsp__get_state;
inline constexpr guest::Function<0x001404f0, u32(u32)> ipc_command_a_flag;
inline constexpr guest::Function<0x00140530, u32(u32)> ipc_command_5;
inline constexpr guest::Function<0x00140564, u32(u32)> Dsp__finalize;
inline constexpr guest::Function<0x002f88b8, u32(u32)> release_owned_object;

void Camera__shutdown(gptr<Camera> camera) {
    if (camera->byte_14 != 0) {
        MicInput__stop(camera.addr() + 0x34u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
        u32 r0_2 = camera->byte_14;
        if (r0_2 == 2u) {
            if (s32(ipc_command_5(r0_2) & 0x80000000u) >= 0) {
                camera->word_2c = 0;
                camera->byte_14 = 1;
            }
            *gptr<u8>(camera.addr() + 0x16u) = 0;
            *gptr<u8>(camera.addr() + 0x17u) = 0;
        }
        u32 state = Dsp__get_state(ipc_command_a_flag(0u));
        Dsp__finalize(state);
        u32 r0_6 = *gptr<u32>(camera.addr() + 0x28u);
        if (r0_6 != 0) {
            release_owned_object(r0_6);
            *gptr<u32>(camera.addr() + 0x28u) = 0;
        }
        *gptr<u8>(camera.addr() + 0x15u) = 2;
        *gptr<u8>(camera.addr() + 0x14u) = 0;
    }
}

}  // namespace d_00139dac
GUEST_EXPORT_FRAMED(0x00139dac, d_00139dac::Camera__shutdown, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0013a37c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Sets the thread's value in a thread-local slot.
namespace d_0013a37c {

struct __attribute__((packed)) ThreadLocal {
    u32 word_0;
};
GUEST_OFFSET(ThreadLocal, word_0, 0x0);


void ThreadLocal__set(gptr<ThreadLocal> slot, u32 value) {
    *gptr<u32>(guest::cpu()->tls + (slot->word_0 << 2)) = value;
}

}  // namespace d_0013a37c
GUEST_EXPORT(0x0013a37c, d_0013a37c::ThreadLocal__set);

// f_0013a38c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Takes the first free one of the 16 thread-local slots (fatal when none is free).
namespace d_0013a38c {

struct __attribute__((packed)) Local_0013a38c_r12 {
    u16 half_0;
};
GUEST_OFFSET(Local_0013a38c_r12, half_0, 0x0);

inline constexpr u32 global_00974f74_address = 0x00974f74u;
inline constexpr u32 global_00ae0f94_address = 0x00ae0f94u;
inline constexpr guest::Function<0x0012f204, u32(u32)> check_result;

u32 ThreadLocal__allocate(u32 the_thread_local) {
    gptr<Local_0013a38c_r12> r12 = gptr<Local_0013a38c_r12>(global_00974f74_address);
    u32 slot = the_thread_local;
    u32 index = 0u;
    u32 used = r12->half_0;
    for (;;) {
        the_thread_local = lsr_r(used, index & 0xff);
        if ((the_thread_local & 1u) == 0) {
            goto L_13a3cc;
        }
        index += 1u;
        if (s32(index) >= 0x10) {
            break;
        }
        if (index >= 0x10u) {
            goto L_13a3cc;
        }
        guest::preempt();
    }
    index = ~0u;
    goto L_13a3e0;
L_13a3cc:;
    if (index < 0x10u) {
        the_thread_local = used | lsl_r(1u, index & 0xff);
        r12->half_0 = u16(the_thread_local);
    }
L_13a3e0:;
    if (s32(index) < 0) {
        the_thread_local = 0xd8601838u;
    }
    *gptr<u32>(slot) = index;
    if (s32(index) < 0) {
        check_result(the_thread_local);
    }
    *gptr<u32>((*gptr<u32>(slot) << 2) + global_00ae0f94_address) = 0;
    return slot;
}

}  // namespace d_0013a38c
GUEST_EXPORT_FRAMED(0x0013a38c, d_0013a38c::ThreadLocal__allocate, 0x4010);  // pushes {slot, lr} first, as the original

// f_0013a414: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Sends the request to the service (0013a5a4) and keeps its value (+0xc, else +8) on success.
namespace d_0013a414 {

struct __attribute__((packed)) SendServiceRequestAndKeepArg0 {
    u8 unknown_0[0x8];  // (not used here)
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(SendServiceRequestAndKeepArg0, word_8, 0x8);
GUEST_OFFSET(SendServiceRequestAndKeepArg0, word_c, 0xc);

inline guest::global<u32, 0x008a27c4> global_008a27c4;
inline constexpr guest::Function<0x0013a5a4, u32(u32, u32)> ipc_command_3_handle;
inline constexpr guest::Function<0x0013a62c, u32(u32)> store_global_word_13a62c;

u32 send_service_request_and_keep(gptr<SendServiceRequestAndKeepArg0> arg0) {
    u32 r4_1 = arg0->word_c;
    if (r4_1 == 0) {
        r4_1 = arg0->word_8;
    }
    u32 r0_2 = ipc_command_3_handle(*global_008a27c4, arg0.addr());
    if (s32(r0_2) >= 0) {
        store_global_word_13a62c(r4_1);
    }
    return r0_2;
}

}  // namespace d_0013a414
GUEST_EXPORT_FRAMED(0x0013a414, d_0013a414::send_service_request_and_keep, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0013a63c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Closes the StreetPass message box: finishes its open part, releases its two buffers (under the lock) and the session
// when they are flagged.
namespace d_0013a63c {

inline constexpr u32 message_box_address = 0x00ae0aa0u;
inline guest::global<u8, 0x00974b99> global_00974b99;
inline guest::global<u8, 0x00974b9a> message_box_flag_a;
inline guest::global<u8, 0x00974b9c> message_box_flag_b;
inline guest::global<u8, 0x00974b9d> message_box_flag_c;
inline constexpr guest::Function<0x00135748, u32(u32, u32, u32, u32)> RecursiveLock__lock;
inline constexpr guest::Function<0x001357ec, u32(u32)> RecursiveLock__unlock;
inline constexpr guest::Function<0x0013e360, u32(u32, u32, u32, u32)> DataStoreService__close_box;
inline constexpr guest::Function<0x001400b4, u32(u32)> DataStoreService__start;
inline constexpr guest::Function<0x001402b0, u32(u32)> MessageBox__release;

void MessageBox__close(gptr<nn__cec__CTR__MessageBox> message_box, u32 r1) {
    message_box->word_4 = 0;
    if (*global_00974b99 != 0) {
        DataStoreService__close_box(message_box.addr(), 0u, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
    }
    RecursiveLock__lock(message_box_address, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    if (*message_box_flag_b != 0) {
        MessageBox__release(message_box->word_3a8);
        *message_box_flag_b = 0;
    }
    RecursiveLock__unlock(message_box_address);
    RecursiveLock__lock(message_box_address, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    if (*message_box_flag_c != 0) {
        MessageBox__release(message_box->word_558);
        *message_box_flag_c = 0;
    }
    RecursiveLock__unlock(message_box_address);
    if (*message_box_flag_a != 0) {
        DataStoreService__start(0u);
        *message_box_flag_a = 0;
    }
    if (message_box->byte_8 != 0) {
        message_box->byte_8 = 0;
    }
}

}  // namespace d_0013a63c
GUEST_EXPORT_FRAMED(0x0013a63c, d_0013a63c::MessageBox__close, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_0013a6f8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The innermost region of the tree (children from call_0013a750) whose range [+0x18, +0x1c) holds `address`; null when
// none.
namespace d_0013a6f8 {

inline constexpr guest::Function<0x0013a6f8, u32(u32, u32)> call_find_innermost_region;
inline constexpr guest::Function<0x0013a750, u32(u32, u32, u32, u32)> Tree__next_child;

u32 find_innermost_region(u32 r0, u32 r1) {
    u32 tree = r0;
    u32 address = r1;
    u32 child = 0u;
L_13a708:;
    u32 r0_1 = Tree__next_child(tree, child, guest::cpu()->r[2], guest::cpu()->r[3]);
    child = r0_1;
    if (r0_1 != 0) {
        if (*gptr<u32>(child + 0x18u) > address || address >= *gptr<u32>(child + 0x1cu)) {
            guest::preempt();
            goto L_13a708;
        }
        r0_1 = call_find_innermost_region(child + 0xcu, address);
        if (r0_1 == 0) {
            r0_1 = child;
        }
    }
    return r0_1;
}

}  // namespace d_0013a6f8
GUEST_EXPORT_FRAMED(0x0013a6f8, d_0013a6f8::find_innermost_region, 0x4070);  // pushes {child, address, tree, lr} first, as the original

// f_0013a750: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The first child when `child` is null, else the sibling after it (through the link offset at +0xa).
namespace d_0013a750 {

struct __attribute__((packed)) Tree {
    u32 word_0;
    u8 unknown_4[0x6];  // (not used here)
    u16 half_a;
};
GUEST_OFFSET(Tree, word_0, 0x0);
GUEST_OFFSET(Tree, half_a, 0xa);


u32 Tree__next_child(gptr<Tree> tree, u32 child) {
    return child == 0 ? tree->word_0 : *gptr<u32>(u32(tree->half_a) + (child + 4u));
}

}  // namespace d_0013a750
GUEST_EXPORT(0x0013a750, d_0013a750::Tree__next_child);

// f_0013a768: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Stores the value in every word from `begin` up to `end`.
namespace d_0013a768 {

struct __attribute__((packed)) Local_0013a768_ea_1 {
    u32 begin;
    u32 end;
    u32 word_8;
};
GUEST_OFFSET(Local_0013a768_ea_1, begin, 0x0);
GUEST_OFFSET(Local_0013a768_ea_1, end, 0x4);
GUEST_OFFSET(Local_0013a768_ea_1, word_8, 0x8);


struct __attribute__((packed)) FillWordsFrame {
    u32 word_0;
    u32 word_4;
    u8 unknown_8[0x4];  // (not read or written by name)
};
GUEST_OFFSET(FillWordsFrame, word_0, 0x0);
GUEST_OFFSET(FillWordsFrame, word_4, 0x4);
GUEST_SIZE(FillWordsFrame, 0xc);

void fill_words(u32 begin, u32 end, u32 value) {
    guest::StackFrameOf<FillWordsFrame> frame;  // the original's stack frame
    u32 r1_2 = 0;
    gptr<Local_0013a768_ea_1> ea_1 = gptr<Local_0013a768_ea_1>(frame.at(0).addr());
    ea_1->begin = begin;
    ea_1->end = end;
    ea_1->word_8 = value;
    begin = frame->word_0;
    u32 r1_1 = frame->word_4;
    if (begin == r1_1) {
        guest::cpu()->r[1] = r1_1;
        return;
    }
    do {
        frame->word_0 = begin + 4u;
        *gptr<u32>(begin) = value;
        begin = frame->word_0;
        r1_2 = frame->word_4;
        guest::preempt();
    } while (begin != r1_2);
    guest::cpu()->r[1] = r1_2;
}

}  // namespace d_0013a768
GUEST_EXPORT(0x0013a768, d_0013a768::fill_words);

// f_0013a9e0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Constructs a frame heap over a block.
namespace d_0013a9e0 {

struct __attribute__((packed)) Local_0013a9e0_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0013a9e0_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_0013a9e0_ea_1, word_4, 0x4);

struct __attribute__((packed)) Local_0013a9e0_ea_2 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_0013a9e0_ea_2, word_0, 0x0);
GUEST_OFFSET(Local_0013a9e0_ea_2, word_4, 0x4);
GUEST_OFFSET(Local_0013a9e0_ea_2, word_8, 0x8);

struct __attribute__((packed)) Heap {
    u32 vtable;
    u32 word_4;
    u32 word_8;
    u8 unknown_c[0xc];  // (not used here)
    u32 word_18;
    u32 word_1c;
    u32 word_20;
};
GUEST_OFFSET(Heap, vtable, 0x0);
GUEST_OFFSET(Heap, word_4, 0x4);
GUEST_OFFSET(Heap, word_8, 0x8);
GUEST_OFFSET(Heap, word_18, 0x18);
GUEST_OFFSET(Heap, word_1c, 0x1c);
GUEST_OFFSET(Heap, word_20, 0x20);

inline constexpr u32 vtable_nw__ut__FrameHeap = 0x009012acu;
inline constexpr guest::Function<0x0013e75c, u32(u32, u32, u32, u32)> HeapBase__initialize;

struct __attribute__((packed)) NwUtFrameHeapFrameHeapFrame {
    u32 word_0;
};
GUEST_OFFSET(NwUtFrameHeapFrameHeapFrame, word_0, 0x0);
GUEST_SIZE(NwUtFrameHeapFrameHeapFrame, 0x4);

u32 nw__ut__FrameHeap__FrameHeap(u32 frame_heap, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<NwUtFrameHeapFrameHeapFrame> frame;  // the original's stack frame
    u32 r1_1 = r1 + frame_heap;
    frame->word_0 = r3;
    u32 end = r1_1 & ~3u;
    gptr<Heap> heap = gptr<Heap>(frame_heap + 3u & ~3u);
    if (s32(heap.addr() - end) <= 0 && end - heap.addr() >= 0x34u) {
        if (heap.addr() != 0) {
            heap->word_4 = 0;
            heap->word_8 = 0;
            heap->word_1c = heap.addr() + 0x1cu;
            heap->word_18 = 0;
            heap->vtable = vtable_nw__ut__FrameHeap;
            heap->word_20 = heap.addr() + 0x1cu;
        }
        frame->word_0 = r2;
        HeapBase__initialize(heap.addr(), 0x46524d48u, heap.addr() + 0x34u, end);
        gptr<Local_0013a9e0_ea_1> ea_1 = gptr<Local_0013a9e0_ea_1>(heap.addr() + 0xcu);
        u32 r0_1 = ea_1->word_0;
        u32 r1_3 = ea_1->word_4;
        gptr<Local_0013a9e0_ea_2> ea_2 = gptr<Local_0013a9e0_ea_2>(heap.addr() + 0x28u);
        ea_2->word_0 = r0_1;
        ea_2->word_4 = r1_3;
        ea_2->word_8 = 0;
        guest::cpu()->r[1] = r1_3;
        return heap.addr();
    }
    guest::cpu()->r[1] = r1_1;
    return 0u;
}

}  // namespace d_0013a9e0
GUEST_EXPORT_FRAMED(0x0013a9e0, d_0013a9e0::nw__ut__FrameHeap__FrameHeap, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_0013ad90: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Calls the release target's virtual 3 with an object (arg 0).
namespace d_0013ad90 {

inline constexpr u32 release_target_value_address = 0x00975138u;
inline guest::global<u32, 0x00975138> release_target_value;

u32 release_target(u32 r0) {
    u32 r0_1 = *release_target_value;
    u32 r2_1 = *gptr<u32>(*gptr<u32>(r0_1) + 0xcu);
    // virtual function 3 of r0_1
    return guest::call_address<u32>(r2_1, r0_1, r0, r2_1, guest::cpu()->r[3]);
}

}  // namespace d_0013ad90
GUEST_EXPORT(0x0013ad90, d_0013ad90::release_target);

// f_0013adac: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Reads a bank file (CBNK, version up to 1.0.1.0): its header and INFO block.
namespace d_0013adac {

struct __attribute__((packed)) BankFileReader {
    u32 word_0;
    u32 word_4;
    u8 byte_8;
};
GUEST_OFFSET(BankFileReader, word_0, 0x0);
GUEST_OFFSET(BankFileReader, word_4, 0x4);
GUEST_OFFSET(BankFileReader, byte_8, 0x8);

struct __attribute__((packed)) File {
    u32 word_0;
    u8 unknown_4[0x4];  // (not used here)
    u32 word_8;
};
GUEST_OFFSET(File, word_0, 0x0);
GUEST_OFFSET(File, word_8, 0x8);

inline constexpr guest::Function<0x0013c850, u32(u32)> BankFile__info_block;

void BankFileReader__initialize(gptr<BankFileReader> reader, gptr<File> file) {
    reader->word_0 = 0;
    reader->word_4 = 0;
    reader->byte_8 = 0;
    if (file.addr() == 0) {
        guest::cpu()->r[1] = file.addr();
        return;
    }
    u32 r1_1 = file->word_0;
    if (r1_1 != 0x4b4e4243u) {
        guest::cpu()->r[1] = r1_1;
        return;
    }
    u32 r1_2 = file->word_8 + 0xff000000u;
    if (r1_2 > 0x100u) {
        guest::cpu()->r[1] = r1_2;
        return;
    }
    reader->word_0 = file.addr();
    u32 info = BankFile__info_block(file.addr());
    reader->byte_8 = 1;
    reader->word_4 = info + 8u;
    guest::cpu()->r[1] = 1u;
}

}  // namespace d_0013adac
GUEST_EXPORT_FRAMED(0x0013adac, d_0013adac::BankFileReader__initialize, 0x4010);  // pushes {r4, lr} first, as the original

// f_0013ae10: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Reads a group file (CGRP, version up to 1.1.0.0): its INFO, FILE and (optional) INFX blocks.
namespace d_0013ae10 {

struct __attribute__((packed)) GroupFileReader {
    u32 group_file;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(GroupFileReader, group_file, 0x0);
GUEST_OFFSET(GroupFileReader, word_4, 0x4);
GUEST_OFFSET(GroupFileReader, word_8, 0x8);

struct __attribute__((packed)) File {
    u32 word_0;
    u8 unknown_4[0x4];  // (not used here)
    u32 word_8;
};
GUEST_OFFSET(File, word_0, 0x0);
GUEST_OFFSET(File, word_8, 0x8);

inline constexpr guest::Function<0x0013f8cc, u32(u32)> GroupFile__file_block;
inline constexpr guest::Function<0x0013f934, u32(u32, u32)> GroupFile__info_block;
inline constexpr guest::Function<0x0013f9a0, u32(u32)> GroupFile__infox_block;

void GroupFileReader__initialize(gptr<GroupFileReader> reader, gptr<File> file) {
    u32 group_file = file.addr();
    reader->group_file = 0;
    reader->word_4 = 0;
    reader->word_8 = 0;
    if (file->word_0 == 0x50524743u && file->word_8 + 0xff000000u <= 0x10000u) {
        u32 info = GroupFile__info_block(group_file, group_file);
        u32 files = GroupFile__file_block(group_file);
        u32 infox = GroupFile__infox_block(group_file);
        group_file = guest::cpu()->r[1];
        if (info != 0 && files != 0) {
            group_file = info + 8u;
            reader->group_file = group_file;
            reader->word_4 = files + 8u;
            if (infox != 0) {
                reader->word_8 = infox + 8u;
            }
        }
    }
    guest::cpu()->r[1] = group_file;
}

}  // namespace d_0013ae10
GUEST_EXPORT_FRAMED(0x0013ae10, d_0013ae10::GroupFileReader__initialize, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_0013b034: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Loads an entry of the archive: through its own loader when it is packed, else its file (when flag 8 asks); true when
// loaded.
namespace d_0013b034 {

struct __attribute__((packed)) Archive {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
};
GUEST_OFFSET(Archive, word_4, 0x4);

inline constexpr guest::Function<0x0013b438, u32(u32, u32, u32, u32)> load_file;
inline constexpr guest::Function<0x0013c718, u32(u32, u32)> archive_file_of_item;
inline constexpr guest::Function<0x0013ea78, u32(u32, u32, u32, u32)> SoundPlayer__prepare;
inline constexpr guest::Function<0x0013f2e4, u32(u32, u32, u32, u32)> SoundArchive__wave_archive_info;

struct __attribute__((packed)) ArchiveLoadEntryFrame {
    u32 word_0;
    u32 word_4;
    u8 unknown_8[0x4];  // (not read or written by name)
    u8 byte_c;
    u8 unknown_d[0x7];  // (not read or written by name)
};
GUEST_OFFSET(ArchiveLoadEntryFrame, word_0, 0x0);
GUEST_OFFSET(ArchiveLoadEntryFrame, word_4, 0x4);
GUEST_OFFSET(ArchiveLoadEntryFrame, byte_c, 0xc);
GUEST_SIZE(ArchiveLoadEntryFrame, 0x14);

u32 Archive__load_entry(gptr<Archive> archive, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<ArchiveLoadEntryFrame> frame;  // the original's stack frame
    u32 r4_1 = *frame.at<u32>(0x34);
    frame->word_4 = ~0u;
    frame->byte_c = 0;
    u32 r6_1 = *frame.at<u32>(0x30);
    u32 r0_2 = SoundArchive__wave_archive_info(archive->word_4, r1, frame.at(4).addr(), r3);
    u32 r1_1 = guest::cpu()->r[1];
    if (r0_2 != 0) {
        if (frame->byte_c != 0) {
            frame->word_0 = r4_1;
            r0_2 = SoundPlayer__prepare(archive.addr(), r1, r2, r3);
            r1_1 = guest::cpu()->r[1];
            if (r0_2 == 0) {
                return r0_2;
            }
        } else {
            r1_1 = r1;
            if ((r6_1 & 8u) != 0) {
                u32 archive_file = archive_file_of_item(archive->word_4, r1_1);
                frame->word_0 = 1;
                r0_2 = load_file(archive.addr(), archive_file, r3, r4_1);
                r1_1 = guest::cpu()->r[1];
                if (r0_2 == 0) {
                    return r0_2;
                }
            }
        }
        r0_2 = 1u;
    }
    guest::cpu()->r[1] = r1_1;
    return r0_2;
}

}  // namespace d_0013b034
GUEST_EXPORT_FRAMED(0x0013b034, d_0013b034::Archive__load_entry, 0x43f0);  // pushes {r4, r5, r6, r7, r8, r9, lr} first, as the original

// f_0013b560: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Constructs a sound archive loader: no archive.
namespace d_0013b560 {

inline constexpr u32 vtable_nw__snd__internal__SoundArchiveLoader = 0x009021d0u;

void nw__snd__internal__SoundArchiveLoader__SoundArchiveLoader(gptr<nw__snd__internal__SoundArchiveLoader> sound_archive_loader) {
    sound_archive_loader->word_4 = 0;
    sound_archive_loader->vtable = vtable_nw__snd__internal__SoundArchiveLoader;
    sound_archive_loader->half_208 = 0;
    sound_archive_loader->byte_20a = 0;
}

}  // namespace d_0013b560
GUEST_EXPORT(0x0013b560, d_0013b560::nw__snd__internal__SoundArchiveLoader__SoundArchiveLoader);

// f_0013b584: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Reads a wave sound file (CWSD, version up to 1.0.1.0): its header and INFO block.
namespace d_0013b584 {

struct __attribute__((packed)) WaveSoundFileReader {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(WaveSoundFileReader, word_0, 0x0);
GUEST_OFFSET(WaveSoundFileReader, word_4, 0x4);

struct __attribute__((packed)) File {
    u32 word_0;
    u8 unknown_4[0x4];  // (not used here)
    u32 word_8;
};
GUEST_OFFSET(File, word_0, 0x0);
GUEST_OFFSET(File, word_8, 0x8);

inline constexpr guest::Function<0x0013c348, u32(u32)> WaveSoundFile__info_block;

void WaveSoundFileReader__initialize(gptr<WaveSoundFileReader> reader, gptr<File> file) {
    reader->word_0 = 0;
    reader->word_4 = 0;
    if (file->word_0 != 0x44535743u || file->word_8 + 0xff000000u > 0x100u) {
        return;
    }
    reader->word_0 = file.addr();
    u32 info = WaveSoundFile__info_block(file.addr());
    if (info == 0) {
        return;
    }
    reader->word_4 = info + 8u;
}

}  // namespace d_0013b584
GUEST_EXPORT_FRAMED(0x0013b584, d_0013b584::WaveSoundFileReader__initialize, 0x4010);  // pushes {r4, lr} first, as the original

// f_0013b6e0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Stops the sounds of the player's list from `index` (under its lock).
namespace d_0013b6e0 {

inline constexpr guest::Function<0x00135748, u32(u32, u32, u32, u32)> RecursiveLock__lock;
inline constexpr guest::Function<0x001357ec, u32(u32, u32)> RecursiveLock__unlock;
inline constexpr guest::Function<0x0013ecd8, u32(u32, u32)> SoundHeap__load_group;
inline constexpr guest::Function<0x00140f54, u32(u32)> sound_archive_instance;
inline constexpr guest::Function<0x00140fac, u32(u32, u32)> SoundHandle__set_flag;
inline constexpr guest::Function<0x001411ec, u32(u32, u32)> SoundArchivePlayer__find_player;

void SoundPlayer__stop_from(u32 sound_player, u32 r1) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 lock = sound_player + 4u;
    RecursiveLock__lock(lock, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_3 = sound_archive_instance(SoundHeap__load_group(sound_player + 0x10u, r1));
    SoundArchivePlayer__find_player(r0_3, SoundHandle__set_flag(r0_3, 1u));
    frame.release();
    RecursiveLock__unlock(lock, guest::cpu()->r[1]);
    return;
}

}  // namespace d_0013b6e0
GUEST_EXPORT(0x0013b6e0, d_0013b6e0::SoundPlayer__stop_from);

// f_0013b7a0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Switches a sound heap to another group (arg 1): unloads the current one, loads the new.
namespace d_0013b7a0 {

struct __attribute__((packed)) ResFontSetBufferArg0 {
    u8 unknown_0[0xc];  // (not used here)
    u32 word_c;
};
GUEST_OFFSET(ResFontSetBufferArg0, word_c, 0xc);

inline constexpr guest::Function<0x0013eeb8, u32(u32, u32, u32, u32)> SoundHeap__load_all;
inline constexpr guest::Function<0x00142070, u32(u32, u32, u32, u32)> SoundHeap__load_group_2;

void SoundHeap__switch_group(gptr<ResFontSetBufferArg0> arg0, u32 r1) {
    u32 r0 = arg0.addr();
    u32 r4_1 = r1;
    u32 r5_1 = arg0->word_c;
    u32 r6_1 = r0;
    if (r5_1 != r4_1) {
        if (r5_1 != 0) {
            r0 = SoundHeap__load_all(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
            r1 = guest::cpu()->r[1];
        }
        if (r4_1 != 0) {
            r0 = r6_1;
        }
        arg0->word_c = r4_1;
        if (r4_1 != 0) {
            SoundHeap__load_group_2(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        }
    }
}

}  // namespace d_0013b7a0
GUEST_EXPORT_FRAMED(0x0013b7a0, d_0013b7a0::SoundHeap__switch_group, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0013b8e0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Constructs a critical section registered with a heap (arg 1).
namespace d_0013b8e0 {

inline constexpr u32 vtable_sead__CriticalSection = 0x00904830u;
inline constexpr guest::Function<0x0012f154, u32(u32)> RecursiveLock__initialize;
inline constexpr guest::Function<0x001320cc, u32(u32, u32, u32, u32)> IDisposer__construct_in_heap;

u32 CriticalSection__construct_in_heap(gptr<sead__CriticalSection> critical_section, u32 singleton_disposer) {
    IDisposer__construct_in_heap(critical_section.addr(), singleton_disposer, 1u, guest::cpu()->r[3]);
    critical_section->vtable = vtable_sead__CriticalSection;
    critical_section->word_10 = 0;
    RecursiveLock__initialize(critical_section.addr() + 0x10u);
    return critical_section.addr();
}

}  // namespace d_0013b8e0
GUEST_EXPORT_FRAMED(0x0013b8e0, d_0013b8e0::CriticalSection__construct_in_heap, 0x4010);  // pushes {r4, lr} first, as the original

// f_0013b910: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Constructs the audio effects memory manager: no memory.
namespace d_0013b910 {

inline constexpr u32 vtable_sead__AudioFxMemoryMgr = 0x00904ce0u;

void sead__AudioFxMemoryMgr__AudioFxMemoryMgr(gptr<sead__AudioFxMemoryMgr> audio_fx_memory_mgr) {
    audio_fx_memory_mgr->word_4 = 0;
    audio_fx_memory_mgr->vtable = vtable_sead__AudioFxMemoryMgr;
    audio_fx_memory_mgr->word_8 = 0;
}

}  // namespace d_0013b910
GUEST_EXPORT(0x0013b910, d_0013b910::sead__AudioFxMemoryMgr__AudioFxMemoryMgr);

// f_0013b92c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Constructs the main thread object for the current thread: its priority, stack and a pool of 32 messages.
namespace d_0013b92c {

struct __attribute__((packed)) ThreadConstructMainArg2 {
    u32 word_0;
};
GUEST_OFFSET(ThreadConstructMainArg2, word_0, 0x0);

inline constexpr u32 vtable_sead__SafeStringBase_char__rec = 0x009047f8u;
inline constexpr u32 vtable_sead__Thread = 0x00905a58u;
inline constexpr u32 vtable_sead__Thread_at_18 = 0x00905aa8u;
inline constexpr guest::Function<0x0012f204, u32(u32, u32)> check_result;
inline constexpr guest::Function<0x00132174, u32(u32, u32, u32, u32)> IDisposer__construct;
inline constexpr guest::Function<0x00137d88, u32(u32, u32, u32)> PointerArray__allocate_2;
inline constexpr guest::Function<0x00137dc4, u32(u32, u32, u32, u32)> ThreadParams__clear;
inline constexpr guest::Function<0x00137eb4, u32(u32, u32)> store_word_constant_pack_0x0_00137eb4;
inline constexpr guest::Function<0x0013d00c, u32(u32, u32, u32)> svc_get_thread_priority;
inline constexpr guest::Function<0x0013e164, u32(u32, u32)> physical_address_of_vram;

struct __attribute__((packed)) ThreadConstructMainFrame {
    u32 word_0;
};
GUEST_OFFSET(ThreadConstructMainFrame, word_0, 0x0);
GUEST_SIZE(ThreadConstructMainFrame, 0x4);

u32 Thread__construct_main(gptr<sead__Thread> thread, u32 heap, gptr<ThreadConstructMainArg2> arg2, u32 r3) {
    guest::StackFrameOf<ThreadConstructMainFrame> frame;  // the original's stack frame
    frame->word_0 = r3;
    IDisposer__construct(thread.addr(), heap, arg2.addr(), r3);
    thread->safe_string_base_char_vtable = vtable_sead__SafeStringBase_char__rec;
    thread->word_14 = 0x8ae11c;
    thread->vtable = vtable_sead__Thread;
    thread->thread_vtable = vtable_sead__Thread_at_18;
    ThreadParams__clear(thread.addr() + 0x1cu, thread.addr(), vtable_sead__Thread_at_18, vtable_sead__SafeStringBase_char__rec);
    thread->word_54 = 0;
    thread->word_58 = 0;
    thread->word_5c = 0;
    thread->word_60 = 0;
    thread->word_64 = 0;
    thread->word_68 = 0;
    store_word_constant_pack_0x0_00137eb4(thread.addr() + 0x6cu, thread.addr());
    thread->byte_70 = 1;
    thread->word_74 = ~0x80000000u;
    thread->word_78 = r3;
    thread->word_7c = 1;
    thread->word_80 = arg2.addr();
    thread->word_84 = 0;
    u32 r0_4 = svc_get_thread_priority(frame.at(0).addr(), arg2->word_0, thread.addr() + 0x74u);
    u32 r1_3 = r0_4 >> 0x1f;
    if (r1_3 != 0) {
        check_result(r0_4, r1_3);
        r1_3 = guest::cpu()->r[1];
    }
    u32 physical_address = physical_address_of_vram(frame->word_0, r1_3);
    thread->word_60 = thread.addr();
    thread->physical_address = physical_address;
    thread->word_8c = ~1u;
    PointerArray__allocate_2(thread.addr() + 0x1cu, 0x20u, heap);
    return thread.addr();
}

}  // namespace d_0013b92c
GUEST_EXPORT_FRAMED(0x0013b92c, d_0013b92c::Thread__construct_main, 0x43f0);  // pushes {r4, r5, r6, r7, r8, r9, lr} first, as the original

// f_0013bee0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Destroys the sound system's managers: shared objects, environment, effects, BGM, melodies, animal speech
// and volume, detaching their sounds.
namespace d_0013bee0 {

struct __attribute__((packed)) Local_0013bee0_r4_3 {
    u8 unknown_0[0x58];  // (not used here)
    u32 sound_melody_player_one_seq_base_vtable;
    u8 unknown_5c[0x10];  // (not used here)
    u32 sound_melody_player_one_seq_time_tone_vtable;
};
GUEST_OFFSET(Local_0013bee0_r4_3, sound_melody_player_one_seq_base_vtable, 0x58);
GUEST_OFFSET(Local_0013bee0_r4_3, sound_melody_player_one_seq_time_tone_vtable, 0x6c);

struct __attribute__((packed)) Local_0013bee0_r5_2 {
    u8 unknown_0[0x68c];  // (not used here)
    u32 sound_melody_mgr_vtable;
    u8 unknown_690[0xc4];  // (not used here)
    u32 sound_bgm_mgr_vtable;
};
GUEST_OFFSET(Local_0013bee0_r5_2, sound_melody_mgr_vtable, 0x68c);
GUEST_OFFSET(Local_0013bee0_r5_2, sound_bgm_mgr_vtable, 0x754);

struct __attribute__((packed)) Local_0013bee0_r5_5 {
    u8 unknown_0[0x134];  // (not used here)
    u32 sound_volume_mgr_vtable;
    u8 unknown_138[0x45c];  // (not used here)
    u32 sound_doubutsugo_mgr_vtable;
};
GUEST_OFFSET(Local_0013bee0_r5_5, sound_volume_mgr_vtable, 0x134);
GUEST_OFFSET(Local_0013bee0_r5_5, sound_doubutsugo_mgr_vtable, 0x594);

inline constexpr u32 vtable_SoundBgmMgr = 0x008ebcacu;
inline constexpr u32 vtable_SoundEnvMgr = 0x008ebd04u;
inline constexpr u32 vtable_SoundMelodyMgr = 0x008ef740u;
inline constexpr u32 vtable_SoundVolumeMgr = 0x008ef900u;
inline constexpr u32 vtable_SoundDoubutsugoMgr = 0x008f39fcu;
inline constexpr u32 vtable_SoundMelodyPlayerOneSeqBase = 0x008f701cu;
inline constexpr u32 vtable_SoundMelodyPlayerOneSeqTimeTone = 0x008f7210u;
inline constexpr guest::Function<0x00136cc8, u32(u32, u32, u32, u32)> detach_from_parent;
inline constexpr guest::Function<0x0013d408, u32(u32)> SoundFxMgr__destructor;
inline constexpr guest::Function<0x0013d59c, u32(u32, u32, u32, u32)> SoundSharedObjMgr__destructor;
inline constexpr guest::Function<0x0013d7cc, u32(u32)> SoundMelodyPlayerBase__destructor;
inline constexpr guest::Function<0x0013ef18, u32(u32)> SoundMelodyPlayerOneSeqBase__stop;
inline constexpr guest::Function<0x0013efa0, u32(u32)> store_word_0x00905568_;
inline constexpr guest::Function<0x002f76ad, u32(u32, u32, u32, u32)> destroy_array_elements;

u32 SoundSystem__destroy_managers(u32 sound_env_mgr, u32 r1, u32 r2, u32 r3) {
    u32 r5_1 = SoundSharedObjMgr__destructor(sound_env_mgr + 0xbc8u, r1, r2, r3) - 0xbc8u;
    *gptr<u32>(r5_1 + 0xb00u) = vtable_SoundEnvMgr;
    u32 r4_1 = r5_1 + 0xb00u;
    destroy_array_elements(r5_1 + 0xb98u, 0x13d404u, 0x14u, 2u);
    destroy_array_elements(r4_1 + 0x2cu, 0x137d74u, 4u, 2u);
    detach_from_parent(r4_1 + 0x28u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    detach_from_parent(r4_1 + 0x24u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    detach_from_parent(r4_1 + 0x20u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    gptr<Local_0013bee0_r5_2> r5_2 = gptr<Local_0013bee0_r5_2>(SoundFxMgr__destructor(r5_1 + 0x860u) - 0x860u);
    r5_2->sound_bgm_mgr_vtable = vtable_SoundBgmMgr;
    u32 r4_2 = r5_2.addr() + 0x754u;
    destroy_array_elements(r5_2.addr() + 0x824u, 0x137d74u, 4u, 2u);
    detach_from_parent(r4_2 + 0x50u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    detach_from_parent(r4_2 + 0x40u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    detach_from_parent(r4_2 + 0x34u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    detach_from_parent(r4_2 + 0x10u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    gptr<Local_0013bee0_r4_3> r4_3 = gptr<Local_0013bee0_r4_3>(r5_2.addr() + 0x68cu);
    r5_2->sound_melody_mgr_vtable = vtable_SoundMelodyMgr;
    detach_from_parent(r5_2.addr() + 0x748u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 sound_melody_player_one_seq_base = r4_3.addr() + 0x6cu;
    r4_3->sound_melody_player_one_seq_time_tone_vtable = vtable_SoundMelodyPlayerOneSeqTimeTone;
    SoundMelodyPlayerOneSeqBase__stop(sound_melody_player_one_seq_base);
    *gptr<u32>(sound_melody_player_one_seq_base) = vtable_SoundMelodyPlayerOneSeqBase;
    detach_from_parent(sound_melody_player_one_seq_base + 8u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r4_3->sound_melody_player_one_seq_base_vtable = vtable_SoundMelodyPlayerOneSeqBase;
    detach_from_parent(r4_3.addr() + 0x60u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    SoundMelodyPlayerBase__destructor(r4_3.addr() + 0xcu);
    gptr<Local_0013bee0_r5_5> r5_5 = gptr<Local_0013bee0_r5_5>(r4_3.addr() - 0x68cu);
    r5_5->sound_doubutsugo_mgr_vtable = vtable_SoundDoubutsugoMgr;
    u32 r4_4 = r5_5.addr() + 0x594u;
    destroy_array_elements(r5_5.addr() + 0x664u, 0x137d74u, 4u, 9u);
    detach_from_parent(r4_4 + 0x18u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    destroy_array_elements(r4_4 + 0xcu, 0x137d74u, 4u, 3u);
    r5_5->sound_volume_mgr_vtable = vtable_SoundVolumeMgr;
    destroy_array_elements(r5_5.addr() + 0x328u, 0x13d598u, 0x1cu, 0x12u);
    destroy_array_elements((r5_5.addr() + 0x134u) + 0xcu, 0x13fd70u, 0x1cu, 0xbu);
    store_word_0x00905568_(r5_5.addr() + 0x100u);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    u32 r5 = r5_5.addr() + 0x1cu;
    u32 i = 0u;
    do {
        u32 r0_24 = r5;
        if (i < 8u) {
            r0_24 = r5 + (i << 2);
        }
        detach_from_parent(r0_24, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        i += 1u;
        guest::preempt();
    } while (s32(i) < 8);
    destroy_array_elements(r5, 0x137d74u, 4u, 8u);
    return r5 - 0x1cu;
}

}  // namespace d_0013bee0
GUEST_EXPORT_FRAMED(0x0013bee0, d_0013bee0::SoundSystem__destroy_managers, 0x4070);  // pushes {i, r5, r6, lr} first, as the original

// f_0013c0e8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether the object's state (byte 0xc) is 1 or 2.
namespace d_0013c0e8 {

struct __attribute__((packed)) StateIs1Or2Arg0 {
    u8 unknown_0[0xc];  // (not used here)
    u8 byte_c;
};
GUEST_OFFSET(StateIs1Or2Arg0, byte_c, 0xc);


u32 state_is_1_or_2(gptr<StateIs1Or2Arg0> object) {
    u32 r1_1 = object->byte_c;
    u32 r0_1 = (r1_1 == 1u || object->byte_c == 2u) ? 1u : 0u;
    guest::cpu()->r[1] = r1_1;
    return r0_1;
}

}  // namespace d_0013c0e8
GUEST_EXPORT(0x0013c0e8, d_0013c0e8::state_is_1_or_2);

// f_0013c348: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// A wave sound file's info block (the section with kind 0x6800); 0 when it has none.
namespace d_0013c348 {

struct __attribute__((packed)) WaveSoundFile {
    u8 unknown_0[0x10];  // (not used here)
    u16 half_10;
};
GUEST_OFFSET(WaveSoundFile, half_10, 0x10);


u32 WaveSoundFile__info_block(gptr<WaveSoundFile> wave_sound_file) {
    u32 r0 = wave_sound_file.addr();
    u32 r0_1 = 0;
    u32 r12 = wave_sound_file->half_10;
    u32 r3 = r0 + 0x14u;
    u32 r5 = r0;
    r0 = 0u;
    u32 r2 = 0x6800u;
    u32 i = r0;
    if (s32(r12) <= 0) {
        return r0;
    }
    do {
        if (*gptr<u16>(r3 + i * 0xcu) == r2) {
            u32 res_1 = r3 + i * 0xcu;
            u32 zf_1 = res_1 == 0;
            u32 r1_1 = res_1;
            if (!zf_1) {
                r1_1 = *gptr<u32>(r1_1 + 4u);
                zf_1 = r1_1 == 0;
            }
            if (zf_1) {
                return r0;
            } else {
                r0_1 = r1_1 + r5;
            }
            return r0_1;
        }
        i += 1u;
        guest::preempt();
    } while (s32(r12) > s32(i));
    return r0;
}

}  // namespace d_0013c348
GUEST_EXPORT_FRAMED(0x0013c348, d_0013c348::WaveSoundFile__info_block, 0x30);  // pushes {r4, r5} first, as the original

// f_0013c3c0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Entry `index` of the table at +word_c when its kind is 0x4900: its data; null otherwise.
namespace d_0013c3c0 {

struct __attribute__((packed)) Section4900AtArg0 {
    u8 unknown_0[0xc];  // (not used here)
    u32 word_c;
};
GUEST_OFFSET(Section4900AtArg0, word_c, 0xc);

struct __attribute__((packed)) Local_0013c3c0_r1_1 {
    u8 unknown_0[0x4];  // (not used here)
    u16 half_4;
    u8 unknown_6[0x2];  // (not used here)
    u32 word_8;
};
GUEST_OFFSET(Local_0013c3c0_r1_1, half_4, 0x4);
GUEST_OFFSET(Local_0013c3c0_r1_1, word_8, 0x8);


u32 section_4900_at(gptr<Section4900AtArg0> arg0, u32 r1) {
    u32 r0_1 = arg0.addr() + arg0->word_c;
    if (*gptr<u32>(r0_1) <= r1) {
        guest::cpu()->r[1] = r1;
        return 0u;
    }
    gptr<Local_0013c3c0_r1_1> r1_1 = gptr<Local_0013c3c0_r1_1>(r0_1 + (r1 << 3));
    if (r1_1->half_4 == 0x4900u) {
        u32 r1_2 = r1_1->word_8;
        guest::cpu()->r[1] = r1_2;
        return r0_1 + r1_2;
    }
    guest::cpu()->r[1] = r1_1.addr();
    return 0u;
}

}  // namespace d_0013c3c0
GUEST_EXPORT(0x0013c3c0, d_0013c3c0::section_4900_at);

// f_0013c3f4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Entry `index` of the table at +word_14 when its kind is 0x4902: its data; null otherwise.
namespace d_0013c3f4 {

struct __attribute__((packed)) Section4902AtArg0 {
    u8 unknown_0[0x14];  // (not used here)
    u32 word_14;
};
GUEST_OFFSET(Section4902AtArg0, word_14, 0x14);

struct __attribute__((packed)) Local_0013c3f4_r1_1 {
    u8 unknown_0[0x4];  // (not used here)
    u16 half_4;
    u8 unknown_6[0x2];  // (not used here)
    u32 word_8;
};
GUEST_OFFSET(Local_0013c3f4_r1_1, half_4, 0x4);
GUEST_OFFSET(Local_0013c3f4_r1_1, word_8, 0x8);


u32 section_4902_at(gptr<Section4902AtArg0> arg0, u32 r1) {
    u32 r0_1 = arg0.addr() + arg0->word_14;
    if (*gptr<u32>(r0_1) <= r1) {
        guest::cpu()->r[1] = r1;
        return 0u;
    }
    gptr<Local_0013c3f4_r1_1> r1_1 = gptr<Local_0013c3f4_r1_1>(r0_1 + (r1 << 3));
    if (r1_1->half_4 == 0x4902u) {
        u32 r1_2 = r1_1->word_8;
        guest::cpu()->r[1] = r1_2;
        return r0_1 + r1_2;
    }
    guest::cpu()->r[1] = r1_1.addr();
    return 0u;
}

}  // namespace d_0013c3f4
GUEST_EXPORT(0x0013c3f4, d_0013c3f4::section_4902_at);

// f_0013c430: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The data of key 9 of the sparse array at +4 (an offset from the object), or the empty data.
namespace d_0013c430 {

inline constexpr u32 global_00981880_address = 0x00981880u;
inline constexpr guest::Function<0x00141a9c, u32(u32, u32, u32)> SparseArray__get;

struct __attribute__((packed)) SparseArrayDataOf9BFrame {
    u32 word_0;
};
GUEST_OFFSET(SparseArrayDataOf9BFrame, word_0, 0x0);
GUEST_SIZE(SparseArrayDataOf9BFrame, 0x4);

u32 SparseArray__data_of_9_b(u32 sparse_array, u32 r1_unused, u32 r2_unused, u32 r3) {
    guest::StackFrameOf<SparseArrayDataOf9BFrame> frame;  // the original's stack frame
    frame->word_0 = r3;
    u32 found = SparseArray__get(sparse_array + 4u, frame.at(0).addr(), 9u);
    if (found == 0) {
        return global_00981880_address;
    }
    u32 r0_3 = frame->word_0 + sparse_array;
    return r0_3 + *gptr<u32>(r0_3 + 4u);
}

}  // namespace d_0013c430
GUEST_EXPORT_FRAMED(0x0013c430, d_0013c430::SparseArray__data_of_9_b, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_0013c46c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The low byte of the value of key 0 of the sparse array at +4, or 0x40.
namespace d_0013c46c {

inline constexpr guest::Function<0x00141a9c, u32(u32, u32, u32)> SparseArray__get;

struct __attribute__((packed)) SparseArrayByte0Of0Or40Frame {
    u32 word_0;
};
GUEST_OFFSET(SparseArrayByte0Of0Or40Frame, word_0, 0x0);
GUEST_SIZE(SparseArrayByte0Of0Or40Frame, 0x4);

u32 SparseArray__byte_0_of_0_or_40(u32 sparse_array, u32 r1_unused, u32 r2_unused, u32 r3) {
    guest::StackFrameOf<SparseArrayByte0Of0Or40Frame> frame;  // the original's stack frame
    frame->word_0 = r3;
    u32 found = SparseArray__get(sparse_array + 4u, frame.at(0).addr(), 0u);
    return found == 0 ? 0x40u : frame->word_0 & 0xffu;
}

}  // namespace d_0013c46c
GUEST_EXPORT_FRAMED(0x0013c46c, d_0013c46c::SparseArray__byte_0_of_0_or_40, 0x4000);  // pushes {lr} first, as the original

// f_0013c494: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Bits 8-15 of the value of key 2 of the sparse array at +4, or 0.
namespace d_0013c494 {

inline constexpr guest::Function<0x00141a9c, u32(u32, u32, u32)> SparseArray__get;

struct __attribute__((packed)) SparseArrayByte1Of2Frame {
    u32 word_0;
};
GUEST_OFFSET(SparseArrayByte1Of2Frame, word_0, 0x0);
GUEST_SIZE(SparseArrayByte1Of2Frame, 0x4);

u32 SparseArray__byte_1_of_2(u32 sparse_array, u32 r1_unused, u32 r2_unused, u32 r3) {
    guest::StackFrameOf<SparseArrayByte1Of2Frame> frame;  // the original's stack frame
    frame->word_0 = r3;
    u32 found = SparseArray__get(sparse_array + 4u, frame.at(0).addr(), 2u);
    if (found == 0) {
        return found;
    }
    return frame->word_0 >> 8u & 0xffu;
}

}  // namespace d_0013c494
GUEST_EXPORT_FRAMED(0x0013c494, d_0013c494::SparseArray__byte_1_of_2, 0x4000);  // pushes {lr} first, as the original

// f_0013c4c0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The low byte of the value of key 2 of the sparse array at +4, or 0x40.
namespace d_0013c4c0 {

inline constexpr guest::Function<0x00141a9c, u32(u32, u32, u32)> SparseArray__get;

struct __attribute__((packed)) SparseArrayByte0Of2Or40BFrame {
    u32 word_0;
};
GUEST_OFFSET(SparseArrayByte0Of2Or40BFrame, word_0, 0x0);
GUEST_SIZE(SparseArrayByte0Of2Or40BFrame, 0x4);

u32 SparseArray__byte_0_of_2_or_40_b(u32 sparse_array, u32 r1_unused, u32 r2_unused, u32 r3) {
    guest::StackFrameOf<SparseArrayByte0Of2Or40BFrame> frame;  // the original's stack frame
    frame->word_0 = r3;
    u32 found = SparseArray__get(sparse_array + 4u, frame.at(0).addr(), 2u);
    return found == 0 ? 0x40u : frame->word_0 & 0xffu;
}

}  // namespace d_0013c4c0
GUEST_EXPORT_FRAMED(0x0013c4c0, d_0013c4c0::SparseArray__byte_0_of_2_or_40_b, 0x4000);  // pushes {lr} first, as the original

// f_0013c4e8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The float of key 3 of the packed float set (mask +4), or 1.0 when absent.
namespace d_0013c4e8 {

struct __attribute__((packed)) SparseFloats {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
};
GUEST_OFFSET(SparseFloats, word_4, 0x4);


void SparseFloats__value_3_b(gptr<SparseFloats> sparse_floats) {
    u32 r0 = sparse_floats.addr();
    u32 res_1 = 0;
    u32 r6 = r0 + 4u;
    u32 r12 = 0u;
    u32 r4 = sparse_floats->word_4;
    u32 r2 = 3u;
    r0 = r12;
    u32 r1 = r12;
    u32 r3 = 4u;
    u32 r5 = 1u;
    do {
        if ((r4 & lsl_r(r5, r1 & 0xff)) != 0) {
            r0 += 1u;
            if (r1 == r2) {
                r12 = 1u;
            }
        }
        res_1 = r3 - 1u;
        r3 = res_1;
        r1 += 1u;
        guest::preempt();
    } while (res_1 != 0);
    if (r12 != 0 && r0 != 0) {
        float S0_1 = std::bit_cast<float>(gptr<u32>(r6)[r0]);
        guest::cpu()->r[1] = r1;
        guest::cpu()->s[0] = S0_1;
        return;
    }
    float S0_2 = 1.0f;
    guest::cpu()->r[1] = r1;
    guest::cpu()->s[0] = S0_2;
}

}  // namespace d_0013c4e8
GUEST_EXPORT_FRAMED(0x0013c4e8, d_0013c4e8::SparseFloats__value_3_b, 0xf0);  // pushes {r4, r5, r6, r7} first, as the original

// f_0013c55c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The low byte of the value of key 1 of the sparse array at +4, or 0x60.
namespace d_0013c55c {

inline constexpr guest::Function<0x00141a9c, u32(u32, u32, u32)> SparseArray__get;

struct __attribute__((packed)) SparseArrayByte0Of1Or60Frame {
    u32 word_0;
};
GUEST_OFFSET(SparseArrayByte0Of1Or60Frame, word_0, 0x0);
GUEST_SIZE(SparseArrayByte0Of1Or60Frame, 0x4);

u32 SparseArray__byte_0_of_1_or_60(u32 sparse_array, u32 r1_unused, u32 r2_unused, u32 r3) {
    guest::StackFrameOf<SparseArrayByte0Of1Or60Frame> frame;  // the original's stack frame
    frame->word_0 = r3;
    u32 found = SparseArray__get(sparse_array + 4u, frame.at(0).addr(), 1u);
    return found == 0 ? 0x60u : frame->word_0 & 0xffu;
}

}  // namespace d_0013c55c
GUEST_EXPORT_FRAMED(0x0013c55c, d_0013c55c::SparseArray__byte_0_of_1_or_60, 0x4000);  // pushes {lr} first, as the original

// f_0013c584: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The adjusted data of the sound resource (+4) when it is loaded (+8), else 0.
namespace d_0013c584 {

struct __attribute__((packed)) ResSound {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
    u8 byte_8;
};
GUEST_OFFSET(ResSound, word_4, 0x4);
GUEST_OFFSET(ResSound, byte_8, 0x8);

inline constexpr guest::Function<0x0013c8bc, u32(u32, u32)> adjusted_this_0x4__0013c8bc;

u32 ResSound__data_if_loaded(gptr<ResSound> res_sound) {
    u32 r1_1 = res_sound->byte_8;
    if (r1_1 == 0) {
        guest::cpu()->r[1] = r1_1;
        return 0u;
    }
    return adjusted_this_0x4__0013c8bc(res_sound->word_4, r1_1);
}

}  // namespace d_0013c584
GUEST_EXPORT(0x0013c584, d_0013c584::ResSound__data_if_loaded);

// f_0013c5a0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The entry count of the table (+8), or 0.
namespace d_0013c5a0 {

struct __attribute__((packed)) ResTable {
    u8 unknown_0[0x8];  // (not used here)
    u32 word_8;
};
GUEST_OFFSET(ResTable, word_8, 0x8);


u32 ResTable__count(gptr<ResTable> res_table) {
    u32 r0_1 = res_table->word_8;
    if (r0_1 != 0) {
        r0_1 = *gptr<u32>(r0_1);
    }
    return r0_1;
}

}  // namespace d_0013c5a0
GUEST_EXPORT(0x0013c5a0, d_0013c5a0::ResTable__count);

// f_0013c5b0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Copies the two words of entry `index` of the table (+8); true when it is in range.
namespace d_0013c5b0 {

struct __attribute__((packed)) ResTable {
    u8 unknown_0[0x8];  // (not used here)
    u32 word_8;
};
GUEST_OFFSET(ResTable, word_8, 0x8);

struct __attribute__((packed)) ResTableEntryPairArg1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(ResTableEntryPairArg1, word_0, 0x0);
GUEST_OFFSET(ResTableEntryPairArg1, word_4, 0x4);

struct __attribute__((packed)) Local_0013c5b0_r0_2 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0013c5b0_r0_2, word_0, 0x0);
GUEST_OFFSET(Local_0013c5b0_r0_2, word_4, 0x4);


u32 ResTable__entry_pair(gptr<ResTable> res_table, gptr<ResTableEntryPairArg1> arg1, u32 r2) {
    u32 r0_1 = res_table->word_8;
    if (r0_1 == 0) {
        return r0_1;
    }
    if (*gptr<u32>(r0_1) <= r2) {
        return 0u;
    }
    gptr<Local_0013c5b0_r0_2> r0_2 = gptr<Local_0013c5b0_r0_2>(r0_1 + *gptr<u32>(r0_1 + (r2 << 3) + 8u));
    if (r0_2.addr() == 0) {
        return 0u;
    }
    u32 r2_1 = r0_2->word_4;
    arg1->word_0 = r0_2->word_0;
    arg1->word_4 = r2_1;
    return 1u;
}

}  // namespace d_0013c5b0
GUEST_EXPORT(0x0013c5b0, d_0013c5b0::ResTable__entry_pair);

// f_0013c5f0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Copies the id and the data address (from +4, 0 for -1) of entry `index` of the table (+0); true when it is in range.
namespace d_0013c5f0 {

struct __attribute__((packed)) ResTable {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(ResTable, word_0, 0x0);
GUEST_OFFSET(ResTable, word_4, 0x4);

struct __attribute__((packed)) ResTableEntryWithDataArg1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(ResTableEntryWithDataArg1, word_0, 0x0);
GUEST_OFFSET(ResTableEntryWithDataArg1, word_4, 0x4);

struct __attribute__((packed)) Local_0013c5f0_r2_1 {
    u32 word_0;
    u8 unknown_4[0x4];  // (not used here)
    u32 word_8;
};
GUEST_OFFSET(Local_0013c5f0_r2_1, word_0, 0x0);
GUEST_OFFSET(Local_0013c5f0_r2_1, word_8, 0x8);


u32 ResTable__entry_with_data(gptr<ResTable> res_table, gptr<ResTableEntryWithDataArg1> arg1, u32 r2) {
    u32 r3_1 = res_table->word_0;
    u32 zf_1 = r3_1 == 0;
    u32 cf_1 = r3_1 >= 0u;
    if (!zf_1) {
        u32 r12_1 = *gptr<u32>(r3_1);
        zf_1 = r12_1 == r2;
        cf_1 = r12_1 >= r2;
    }
    if (!cf_1 || zf_1) {
        return 0u;
    }
    gptr<Local_0013c5f0_r2_1> r2_1 = gptr<Local_0013c5f0_r2_1>(*gptr<u32>(r3_1 + (r2 << 3) + 8u) + r3_1);
    if (r2_1.addr() == 0) {
        return 0u;
    }
    arg1->word_0 = r2_1->word_0;
    u32 r2_2 = r2_1->word_8;
    arg1->word_4 = r2_2 + 1u == 0 ? 0u : res_table->word_4 + r2_2;
    return 1u;
}

}  // namespace d_0013c5f0
GUEST_EXPORT(0x0013c5f0, d_0013c5f0::ResTable__entry_with_data);

// f_0013c644: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Fills the information of a sound's wave entry: its id, offset, volume, pan and priorities from its sparse
// parameters; true when it is in range.
namespace d_0013c644 {

struct __attribute__((packed)) ResSound {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
};
GUEST_OFFSET(ResSound, word_4, 0x4);

struct __attribute__((packed)) ResSoundWaveInfoArg1 {
    u32 word_0;
    u32 word_4;
    u8 unknown_8[0x5];  // (not used here)
    u8 byte_d;
    u8 byte_e;
    u8 byte_f;
    u8 byte_10;
    u8 unknown_11[0x3];  // (not used here)
    float float_14;
};
GUEST_OFFSET(ResSoundWaveInfoArg1, word_0, 0x0);
GUEST_OFFSET(ResSoundWaveInfoArg1, word_4, 0x4);
GUEST_OFFSET(ResSoundWaveInfoArg1, byte_d, 0xd);
GUEST_OFFSET(ResSoundWaveInfoArg1, byte_e, 0xe);
GUEST_OFFSET(ResSoundWaveInfoArg1, byte_f, 0xf);
GUEST_OFFSET(ResSoundWaveInfoArg1, byte_10, 0x10);
GUEST_OFFSET(ResSoundWaveInfoArg1, float_14, 0x14);

struct __attribute__((packed)) Local_0013c644_r0_6 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0013c644_r0_6, word_0, 0x0);
GUEST_OFFSET(Local_0013c644_r0_6, word_4, 0x4);

inline constexpr guest::Function<0x0013c3b4, u32(u32)> adjusted_this_0x4__0013c3b4;
inline constexpr guest::Function<0x0013c3c0, u32(u32, u32, u32, u32)> section_4900_at;
inline constexpr guest::Function<0x0013c3f4, u32(u32, u32)> section_4902_at;
inline constexpr guest::Function<0x0013c430, u32(u32)> SparseArray__data_of_9_b;
inline constexpr guest::Function<0x0013c46c, u32(u32)> SparseArray__byte_0_of_0_or_40;
inline constexpr guest::Function<0x0013c494, u32(u32)> SparseArray__byte_1_of_2;
inline constexpr guest::Function<0x0013c4c0, u32(u32)> SparseArray__byte_0_of_2_or_40_b;
inline constexpr guest::Function<0x0013c4e8, u32(u32, u32, u32)> SparseFloats__value_3_b;
inline constexpr guest::Function<0x0013c55c, u32(u32)> SparseArray__byte_0_of_1_or_60;
inline constexpr guest::Function<0x0013ca2c, u32(u32, u32)> copy_word_and_byte;

u32 ResSound__wave_info(gptr<ResSound> res_sound, gptr<ResSoundWaveInfoArg1> arg1, u32 r2, u32 r3, float S0) {
    u32 r0_1 = res_sound->word_4;
    u32 r0_3 = section_4902_at(section_4900_at(r0_1, r2, r2, r3), r3);
    u32 r0_5 = adjusted_this_0x4__0013c3b4(res_sound->word_4);
    u32 r2_3 = *gptr<u32>(r0_5);
    u32 r1_2 = *gptr<u32>(r0_3);
    if (r2_3 > r1_2) {
        gptr<Local_0013c644_r0_6> r0_6 = gptr<Local_0013c644_r0_6>(r0_5 + (r1_2 << 3) + 4u);
        if (r0_6.addr() != 0) {
            u32 r1_3 = r0_6->word_0;
            arg1->word_0 = r1_3;
            arg1->word_4 = r0_6->word_4;
            SparseFloats__value_3_b(r0_3, r1_3, r2_3);
            float S0_4 = guest::cpu()->s[0];
            arg1->float_14 = S0_4;
            guest::cpu()->s[0] = S0_4;
            copy_word_and_byte(arg1.addr() + 8u, SparseArray__data_of_9_b(r0_3));
            u32 r0_9 = SparseArray__byte_0_of_0_or_40(r0_3);
            arg1->byte_d = u8(r0_9);
            u32 r0_10 = SparseArray__byte_0_of_2_or_40_b(r0_3);
            arg1->byte_e = u8(r0_10);
            u32 r0_11 = SparseArray__byte_1_of_2(r0_3);
            arg1->byte_f = u8(r0_11);
            u32 r0_12 = SparseArray__byte_0_of_1_or_60(r0_3);
            arg1->byte_10 = u8(r0_12);
            return 1u;
        }
    }
    guest::cpu()->r[1] = r1_2;
    return 0u;
}

}  // namespace d_0013c644
GUEST_EXPORT_FRAMED(0x0013c644, d_0013c644::ResSound__wave_info, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0013c700: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The first word of the table (+4) when it is loaded (+0xc), else 0.
namespace d_0013c700 {

struct __attribute__((packed)) ResTable {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
    u8 unknown_8[0x4];  // (not used here)
    u8 byte_c;
};
GUEST_OFFSET(ResTable, word_4, 0x4);
GUEST_OFFSET(ResTable, byte_c, 0xc);


u32 ResTable__first_word_if_loaded(gptr<ResTable> res_table) {
    u32 r1_1 = res_table->byte_c;
    u32 r0_1 = r1_1 == 0 ? 0u : *gptr<u32>(res_table->word_4);
    guest::cpu()->r[1] = r1_1;
    return r0_1;
}

}  // namespace d_0013c700
GUEST_EXPORT(0x0013c700, d_0013c700::ResTable__first_word_if_loaded);

// f_0013c728: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// For an entry of type 3: copies its two words and its two flags; true when found.
namespace d_0013c728 {

struct __attribute__((packed)) ResFile {
    u8 unknown_0[0x3c];  // (not used here)
    u32 word_3c;
};
GUEST_OFFSET(ResFile, word_3c, 0x3c);

struct __attribute__((packed)) ResFileStreamInfoArg2 {
    u32 word_0;
    u32 word_4;
    u8 byte_8;
    u8 byte_9;
};
GUEST_OFFSET(ResFileStreamInfoArg2, word_0, 0x0);
GUEST_OFFSET(ResFileStreamInfoArg2, word_4, 0x4);
GUEST_OFFSET(ResFileStreamInfoArg2, byte_8, 0x8);
GUEST_OFFSET(ResFileStreamInfoArg2, byte_9, 0x9);

struct __attribute__((packed)) SparseArray {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(SparseArray, word_0, 0x0);
GUEST_OFFSET(SparseArray, word_4, 0x4);

inline constexpr guest::Function<0x0013f5e8, u32(u32)> SparseArray__byte_0_of_0_or_40_at_8;
inline constexpr guest::Function<0x0013f610, u32(u32)> SparseArray__byte_1_of_0_at_8;
inline constexpr guest::Function<0x0013f718, u32(u32)> ResSoundEntry__type;
inline constexpr guest::Function<0x0013f748, u32(u32)> adjusted_this_0x10__0013f748;
inline constexpr guest::Function<0x00141728, u32(u32, u32, u32, u32)> HandleTable__resolve;

u32 ResFile__stream_info(gptr<ResFile> res_file, u32 r1_unused, gptr<ResFileStreamInfoArg2> arg2) {
    u32 entry_2 = HandleTable__resolve(res_file->word_3c, guest::cpu()->r[1], arg2.addr(), guest::cpu()->r[3]);
    if (entry_2 != 0) {
        if (ResSoundEntry__type(entry_2) != 3u) {
            entry_2 = 0u;
        } else {
            gptr<SparseArray> sparse_array = gptr<SparseArray>(adjusted_this_0x10__0013f748(entry_2));
            arg2->word_0 = sparse_array->word_0;
            arg2->word_4 = sparse_array->word_4;
            u32 r0_5 = SparseArray__byte_0_of_0_or_40_at_8(sparse_array.addr());
            arg2->byte_8 = u8(r0_5);
            u32 r0_6 = SparseArray__byte_1_of_0_at_8(sparse_array.addr());
            if (r0_6 != 0) {
                r0_6 = 1u;
            }
            arg2->byte_9 = u8(r0_6);
            entry_2 = 1u;
        }
    }
    return entry_2;
}

}  // namespace d_0013c728
GUEST_EXPORT_FRAMED(0x0013c728, d_0013c728::ResFile__stream_info, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0013c794: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Copies the two words and the data address of a group entry; true when found.
namespace d_0013c794 {

struct __attribute__((packed)) ResFile {
    u8 unknown_0[0x3c];  // (not used here)
    u32 word_3c;
};
GUEST_OFFSET(ResFile, word_3c, 0x3c);

struct __attribute__((packed)) ResFileGroupInfoArg2 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(ResFileGroupInfoArg2, word_0, 0x0);
GUEST_OFFSET(ResFileGroupInfoArg2, word_4, 0x4);
GUEST_OFFSET(ResFileGroupInfoArg2, word_8, 0x8);

struct __attribute__((packed)) Local_0013c794_r0_2 {
    u32 word_0;
    u32 word_4;
    u8 unknown_8[0x4];  // (not used here)
    u32 word_c;
};
GUEST_OFFSET(Local_0013c794_r0_2, word_0, 0x0);
GUEST_OFFSET(Local_0013c794_r0_2, word_4, 0x4);
GUEST_OFFSET(Local_0013c794_r0_2, word_c, 0xc);

inline constexpr guest::Function<0x00141764, u32(u32, u32)> SoundArchive__find_kind_2;

u32 ResFile__group_info(gptr<ResFile> res_file, u32 r1, gptr<ResFileGroupInfoArg2> arg2) {
    gptr<Local_0013c794_r0_2> r0_2 = gptr<Local_0013c794_r0_2>(SoundArchive__find_kind_2(res_file->word_3c, r1));
    if (r0_2.addr() == 0) {
        return r0_2.addr();
    }
    arg2->word_0 = r0_2->word_0;
    arg2->word_4 = r0_2->word_4;
    u32 r1_2 = r0_2->word_c;
    arg2->word_8 = r0_2.addr() + r1_2;
    guest::cpu()->r[1] = r1_2;
    return 1u;
}

}  // namespace d_0013c794
GUEST_EXPORT_FRAMED(0x0013c794, d_0013c794::ResFile__group_info, 0x4010);  // pushes {r4, lr} first, as the original

// f_0013c7e0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// For an entry of type 1: copies its data, size, two flags and bank list; true when found.
namespace d_0013c7e0 {

struct __attribute__((packed)) ResFile {
    u8 unknown_0[0x3c];  // (not used here)
    u32 word_3c;
};
GUEST_OFFSET(ResFile, word_3c, 0x3c);

struct __attribute__((packed)) ResFileSequenceInfoArg2 {
    u32 word_0;
    u8 unknown_4[0x10];  // (not used here)
    u32 word_14;
    u8 byte_18;
    u8 byte_19;
};
GUEST_OFFSET(ResFileSequenceInfoArg2, word_0, 0x0);
GUEST_OFFSET(ResFileSequenceInfoArg2, word_14, 0x14);
GUEST_OFFSET(ResFileSequenceInfoArg2, byte_18, 0x18);
GUEST_OFFSET(ResFileSequenceInfoArg2, byte_19, 0x19);

inline constexpr guest::Function<0x0013f63c, u32(u32, u32)> ResRef__value_or_none;
inline constexpr guest::Function<0x0013f69c, u32(u32)> SparseArray__value_of_0_at_c;
inline constexpr guest::Function<0x0013f6bc, u32(u32)> SparseArray__byte_0_of_1_or_40_at_c;
inline constexpr guest::Function<0x0013f6e4, u32(u32)> SparseArray__byte_1_of_1_is_set_at_c;
inline constexpr guest::Function<0x0013f718, u32(u32)> ResSoundEntry__type;
inline constexpr guest::Function<0x0013f754, u32(u32)> adjusted_this_0x10__0013f754;
inline constexpr guest::Function<0x00141728, u32(u32, u32, u32, u32)> HandleTable__resolve;

u32 ResFile__sequence_info(gptr<ResFile> res_file, u32 handle, gptr<ResFileSequenceInfoArg2> arg2) {
    u32 entry_2 = HandleTable__resolve(res_file->word_3c, handle, arg2.addr(), guest::cpu()->r[3]);
    if (entry_2 != 0) {
        if (ResSoundEntry__type(entry_2) != 1u) {
            entry_2 = 0u;
        } else {
            u32 sparse_array = adjusted_this_0x10__0013f754(entry_2);
            arg2->word_0 = SparseArray__value_of_0_at_c(sparse_array);
            arg2->word_14 = *gptr<u32>(sparse_array + 8u);
            u32 r0_6 = SparseArray__byte_0_of_1_or_40_at_c(sparse_array);
            arg2->byte_18 = u8(r0_6);
            u32 r0_7 = SparseArray__byte_1_of_1_is_set_at_c(sparse_array);
            arg2->byte_19 = u8(r0_7);
            ResRef__value_or_none(sparse_array, arg2.addr() + 4u);
            entry_2 = 1u;
        }
    }
    return entry_2;
}

}  // namespace d_0013c7e0
GUEST_EXPORT_FRAMED(0x0013c7e0, d_0013c7e0::ResFile__sequence_info, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0013c850: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The bank file's INFO block (block id 0x5800); null when the file has none.
namespace d_0013c850 {

struct __attribute__((packed)) BankFile {
    u8 unknown_0[0x10];  // (not used here)
    u16 half_10;
};
GUEST_OFFSET(BankFile, half_10, 0x10);


u32 BankFile__info_block(gptr<BankFile> bank_file) {
    u32 r0 = bank_file.addr();
    u32 r0_1 = 0;
    u32 r12 = bank_file->half_10;
    u32 r3 = r0 + 0x14u;
    u32 r5 = r0;
    r0 = 0u;
    u32 r2 = 0x5800u;
    u32 i = r0;
    if (s32(r12) <= 0) {
        return r0;
    }
    do {
        if (*gptr<u16>(r3 + i * 0xcu) == r2) {
            u32 res_1 = r3 + i * 0xcu;
            u32 zf_1 = res_1 == 0;
            u32 r1_1 = res_1;
            if (!zf_1) {
                r1_1 = *gptr<u32>(r1_1 + 4u);
                zf_1 = r1_1 == 0;
            }
            if (zf_1) {
                return r0;
            } else {
                r0_1 = r1_1 + r5;
            }
            return r0_1;
        }
        i += 1u;
        guest::preempt();
    } while (s32(r12) > s32(i));
    return r0;
}

}  // namespace d_0013c850
GUEST_EXPORT_FRAMED(0x0013c850, d_0013c850::BankFile__info_block, 0x30);  // pushes {r4, r5} first, as the original

// f_0013c8c8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The index of the range (8-byte entries [first, last] from +8) holding `key`, by binary search; the insertion point
// when none does.
namespace d_0013c8c8 {

struct __attribute__((packed)) RangeTable {
    u32 word_0;
};
GUEST_OFFSET(RangeTable, word_0, 0x0);

struct __attribute__((packed)) Key {
    u32 word_0;
};
GUEST_OFFSET(Key, word_0, 0x0);

struct __attribute__((packed)) Local_0013c8c8_r4_1 {
    u8 unknown_0[0x8];  // (not used here)
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Local_0013c8c8_r4_1, word_8, 0x8);
GUEST_OFFSET(Local_0013c8c8_r4_1, word_c, 0xc);


u32 RangeTable__find(gptr<RangeTable> table, gptr<Key> key) {
    u32 r0 = table.addr();
    u32 r1 = key.addr();
    u32 r12 = r0;
    u32 r0_1 = table->word_0;
    if (r0_1 == 0) {
        return r0_1;
    }
    r1 = key->word_0;
    u32 low = 0u;
    u32 high = r0_1 - 1u;
L_13c8e8:;
    u32 r0_2 = low + high >> 1;
    gptr<Local_0013c8c8_r4_1> r4_1 = gptr<Local_0013c8c8_r4_1>(r12 + (r0_2 << 3));
    if (r1 >= r4_1->word_8) {
        if (r4_1->word_c >= r1) {
            return r0_2;
        }
        if (r0_2 != high) {
            low = r0_2 + 1u;
            guest::preempt();
            goto L_13c8e8;
        }
        return r0_2 + 1u;
    }
    if (r0_2 != low) {
        high = r0_2 - 1u;
        guest::preempt();
        goto L_13c8e8;
    }
    return r0_2;
}

}  // namespace d_0013c8c8
GUEST_EXPORT_FRAMED(0x0013c8c8, d_0013c8c8::RangeTable__find, 0x30);  // pushes {r4, r5} first, as the original

// f_0013c938: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The index of the range (sorted, 8 bytes each from +8) that contains a value by binary search; the one before when
// none does.
namespace d_0013c938 {

struct __attribute__((packed)) RangeTable {
    u32 word_0;
};
GUEST_OFFSET(RangeTable, word_0, 0x0);

struct __attribute__((packed)) RangeTableFindContainingArg1 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
};
GUEST_OFFSET(RangeTableFindContainingArg1, word_4, 0x4);

struct __attribute__((packed)) Local_0013c938_r4_1 {
    u8 unknown_0[0x8];  // (not used here)
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Local_0013c938_r4_1, word_8, 0x8);
GUEST_OFFSET(Local_0013c938_r4_1, word_c, 0xc);


u32 RangeTable__find_containing(gptr<RangeTable> range_table, gptr<RangeTableFindContainingArg1> arg1) {
    u32 r0 = range_table.addr();
    u32 r1 = arg1.addr();
    u32 r12 = r0;
    u32 r5 = range_table->word_0;
    if (r5 == 0) {
        return 0u;
    }
    r1 = arg1->word_4;
    u32 r2 = 0u;
    u32 r3 = r5 - 1u;
L_13c95c:;
    r0 = r2 + r3 >> 1;
    gptr<Local_0013c938_r4_1> r4_1 = gptr<Local_0013c938_r4_1>(r12 + (r0 << 3));
    if (r1 >= r4_1->word_8) {
        goto L_13c994;
    }
    if (r0 != r2) {
        r3 = r0 - 1u;
        guest::preempt();
        goto L_13c95c;
    }
    r0 = r0 == 0 ? r5 : r0 - 1u;
    return r0;
L_13c994:;
    if (r1 <= r4_1->word_c) {
        return r0;
    }
    if (r0 != r3) {
        r2 = r0 + 1u;
        guest::preempt();
        goto L_13c95c;
    }
    return r0;
}

}  // namespace d_0013c938
GUEST_EXPORT_FRAMED(0x0013c938, d_0013c938::RangeTable__find_containing, 0x70);  // pushes {r4, r5, r6} first, as the original

// f_0013c9b8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The index of the range (sorted, 8 bytes each from +8) that overlaps the given range by binary search; the insertion
// index when none does.
namespace d_0013c9b8 {

struct __attribute__((packed)) RangeTable {
    u32 word_0;
};
GUEST_OFFSET(RangeTable, word_0, 0x0);

struct __attribute__((packed)) RangeTableFindOverlappingArg1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(RangeTableFindOverlappingArg1, word_0, 0x0);
GUEST_OFFSET(RangeTableFindOverlappingArg1, word_4, 0x4);

struct __attribute__((packed)) Local_0013c9b8_r5_1 {
    u8 unknown_0[0x8];  // (not used here)
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Local_0013c9b8_r5_1, word_8, 0x8);
GUEST_OFFSET(Local_0013c9b8_r5_1, word_c, 0xc);


u32 RangeTable__find_overlapping(gptr<RangeTable> range_table, gptr<RangeTableFindOverlappingArg1> arg1) {
    u32 r0 = range_table.addr();
    u32 r12 = r0;
    r0 = range_table->word_0;
    if (r0 == 0) {
        return r0;
    }
    u32 r4 = arg1->word_4;
    u32 r2 = 0u;
    u32 r3 = r0 - 1u;
L_13c9d8:;
    r0 = r2 + r3 >> 1;
    gptr<Local_0013c9b8_r5_1> r5_1 = gptr<Local_0013c9b8_r5_1>(r12 + (r0 << 3));
    if (r4 >= r5_1->word_8) {
        goto L_13ca04;
    }
    if (r0 != r2) {
        r3 = r0 - 1u;
        guest::preempt();
        goto L_13c9d8;
    }
    return r0;
L_13ca04:;
    if (r5_1->word_c >= arg1->word_0) {
        return r0;
    }
    if (r0 != r3) {
        r2 = r0 + 1u;
        guest::preempt();
        goto L_13c9d8;
    }
    return r0 + 1u;
}

}  // namespace d_0013c9b8
GUEST_EXPORT_FRAMED(0x0013c9b8, d_0013c9b8::RangeTable__find_overlapping, 0x70);  // pushes {r4, r5, r6} first, as the original

// f_0013ca2c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Copies a word and a byte.
namespace d_0013ca2c {

struct __attribute__((packed)) CopyWordAndByteArg0 {
    u32 word_0;
    u8 byte_4;
};
GUEST_OFFSET(CopyWordAndByteArg0, word_0, 0x0);
GUEST_OFFSET(CopyWordAndByteArg0, byte_4, 0x4);

struct __attribute__((packed)) CopyWordAndByteArg1 {
    u32 word_0;
    u8 byte_4;
};
GUEST_OFFSET(CopyWordAndByteArg1, word_0, 0x0);
GUEST_OFFSET(CopyWordAndByteArg1, byte_4, 0x4);


void copy_word_and_byte(gptr<CopyWordAndByteArg0> arg0, gptr<CopyWordAndByteArg1> arg1) {
    arg0->word_0 = arg1->word_0;
    arg0->byte_4 = arg1->byte_4;
}

}  // namespace d_0013ca2c
GUEST_EXPORT(0x0013ca2c, d_0013ca2c::copy_word_and_byte);

// f_0013cbdc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Initializes a sound channel: its owner, priority, two volume ramps (target 0x7fff) and its lock.
namespace d_0013cbdc {

struct __attribute__((packed)) SoundChannel {
    u32 word_0;
    u8 unknown_4[0x1c];  // (not used here)
    u32 capacity;
    u32 word_24;
    u32 word_28;
};
GUEST_OFFSET(SoundChannel, word_0, 0x0);
GUEST_OFFSET(SoundChannel, capacity, 0x20);
GUEST_OFFSET(SoundChannel, word_24, 0x24);
GUEST_OFFSET(SoundChannel, word_28, 0x28);

inline constexpr guest::Function<0x0012f154, u32(u32, u32)> RecursiveLock__initialize;

void SoundChannel__init(gptr<SoundChannel> sound_channel, u32 r1, u32 capacity) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 r0 = sound_channel.addr();
    u32 r3 = 0u;
    sound_channel->word_0 = r1;
    sound_channel->capacity = capacity;
    sound_channel->word_24 = r3;
    r1 = r0 + 0x2cu;
    sound_channel->word_28 = r3;
    do {
        *gptr<u32>(r1) = r3;
        guest::preempt();
    } while (!u32(1));
    r1 = 0u;
    capacity = r0 + 0x30u;
    do {
        *gptr<u32>(capacity) = r1;
        guest::preempt();
    } while (!u32(1));
    u32 r12 = 0x7fffu;
    u32 r14 = r0 + 4u;
    capacity = 0u;
    r1 = r14;
    do {
        *gptr<u32>(r1) = capacity;
        guest::preempt();
    } while (!u32(1));
    r1 = r14 + 4u;
    do {
        *gptr<u16>(r1) = u16(sxth(r3));
        guest::preempt();
    } while (!u32(1));
    capacity = 0u;
    r1 = r0 + 0xcu;
    *gptr<u16>(r14 + 6u) = u16(r12);
    do {
        *gptr<u32>(r1) = capacity;
        guest::preempt();
    } while (!u32(1));
    capacity = r1 + 4u;
    do {
        *gptr<u16>(capacity) = u16(sxth(r3));
        guest::preempt();
    } while (!u32(1));
    *gptr<u16>(r1 + 6u) = u16(r12);
    frame.release();
    RecursiveLock__initialize(r0 + 0x14u, r1);
    return;
}

}  // namespace d_0013cbdc
GUEST_EXPORT(0x0013cbdc, d_0013cbdc::SoundChannel__init);

// f_0013cc9c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Takes a block off the pool's free list under its lock (zeroed when the pool clears its blocks); null when none is
// left.
namespace d_0013cc9c {

struct __attribute__((packed)) FixedPool {
    u8 unknown_0[0x14];  // (not used here)
    u32 word_14;
    u32 word_18;
    u8 unknown_1c[0x8];  // (not used here)
    u32 word_24;
    u8 unknown_28[0x4];  // (not used here)
    u32 word_2c;
};
GUEST_OFFSET(FixedPool, word_14, 0x14);
GUEST_OFFSET(FixedPool, word_18, 0x18);
GUEST_OFFSET(FixedPool, word_24, 0x24);
GUEST_OFFSET(FixedPool, word_2c, 0x2c);

inline constexpr guest::Function<0x00135748, u32(u32, u32, u32, u32)> RecursiveLock__lock;
inline constexpr guest::Function<0x001357ec, u32(u32, u32)> RecursiveLock__unlock;
inline constexpr guest::Function<0x0013a768, u32(u32, u32, u32)> fill_words;

u32 FixedPool__allocate(gptr<FixedPool> pool, u32 r1, u32 r2) {
    u32 lock = pool.addr() + 0x30u;
    RecursiveLock__lock(lock, r1, r2, guest::cpu()->r[3]);
    u32 r1_1 = guest::cpu()->r[1];
    u32 block = pool->word_24;
    if (block != 0) {
        pool->word_24 = *gptr<u32>(block);
        pool->word_2c = pool->word_2c + 1u;
        r1_1 = pool->word_18;
        if ((pool->word_14 & 1u) != 0) {
            fill_words(block, r1_1 + block, 0u);
            r1_1 = guest::cpu()->r[1];
        }
    }
    RecursiveLock__unlock(lock, r1_1);
    return block;
}

}  // namespace d_0013cc9c
GUEST_EXPORT_FRAMED(0x0013cc9c, d_0013cc9c::FixedPool__allocate, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0013d060: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Calls the free hook.
namespace d_0013d060 {

inline constexpr u32 free_hook_address = 0x0095e0c4u;
inline guest::global<u32, 0x0095e0c4> free_hook;

u32 call_free_hook() {
    u32 r1_1 = *free_hook;
    return guest::call_address<u32>(r1_1, guest::cpu()->r[0], r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0013d060
GUEST_EXPORT(0x0013d060, d_0013d060::call_free_hook);

// f_0013d118: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Frees a block (unless null) on the CFL's default heap.
namespace d_0013d118 {

inline constexpr u32 cfl_instance_address = 0x00975284u;
inline guest::global<u32, 0x00975284> cfl_instance;
inline constexpr guest::Function<0x0013e560, u32(u32, u32, u32, u32)> ExpHeap__free;

u32 free_in_default_heap(u32 block) {
    if (block == 0) {
        guest::cpu()->r[1] = block;
        return block;
    }
    return ExpHeap__free(*gptr<u32>(*cfl_instance), block, guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0013d118
GUEST_EXPORT(0x0013d118, d_0013d118::free_in_default_heap);

// f_0013d148: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Allocates size bytes (arg 0, aligned arg 1) on the CFL's default heap.
namespace d_0013d148 {

inline constexpr u32 cfl_instance_address = 0x00975284u;
inline guest::global<u32, 0x00975284> cfl_instance;
inline constexpr guest::Function<0x0012f600, u32(u32, u32, u32, u32)> ExpHeap__allocate_counted;

struct __attribute__((packed)) AllocateInDefaultHeapFrame {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(AllocateInDefaultHeapFrame, word_0, 0x0);
GUEST_OFFSET(AllocateInDefaultHeapFrame, word_4, 0x4);
GUEST_SIZE(AllocateInDefaultHeapFrame, 0x8);

u32 allocate_in_default_heap(u32 size, u32 alignment) {
    guest::StackFrameOf<AllocateInDefaultHeapFrame> frame;  // the original's stack frame
    u32 exp_heap = *gptr<u32>(*cfl_instance);
    frame->word_0 = 0;
    frame->word_4 = 0;
    return ExpHeap__allocate_counted(exp_heap, size, alignment, 0u);
}

}  // namespace d_0013d148
GUEST_EXPORT_FRAMED(0x0013d148, d_0013d148::allocate_in_default_heap, 0x4010);  // pushes {r4, lr} first, as the original

// f_0013d408: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Destroys the sound effects manager: its ten effect slots, then resets it.
namespace d_0013d408 {

inline constexpr u32 vtable_SoundFxMgr = 0x008eb490u;
inline constexpr guest::Function<0x0014156c, u32(u32, u32, u32)> SoundFxMgr__reset;
inline constexpr guest::Function<0x002f76ad, u32(u32, u32, u32, u32)> destroy_array_elements;

u32 SoundFxMgr__destructor(gptr<SoundFxMgr> sound_fx_mgr) {
    sound_fx_mgr->vtable = vtable_SoundFxMgr;
    destroy_array_elements(sound_fx_mgr.addr() + 0x44u, 0x14152cu, 0x20u, 0xau);
    return SoundFxMgr__reset(sound_fx_mgr.addr() + 0x14u, guest::cpu()->r[1], 0x20u) - 0x14u;
}

}  // namespace d_0013d408
GUEST_EXPORT_FRAMED(0x0013d408, d_0013d408::SoundFxMgr__destructor, 0x4010);  // pushes {r4, lr} first, as the original

// f_0013d444: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Stops the camera when it is running and destroys its six 0xec-byte parts.
namespace d_0013d444 {

struct __attribute__((packed)) Camera {
    u8 unknown_0[0x14];  // (not used here)
    u8 byte_14;
    u8 byte_15;
    u8 byte_16;
    u8 byte_17;
    u8 unknown_18[0x10];  // (not used here)
    u32 word_28;
    u32 word_2c;
};
GUEST_OFFSET(Camera, byte_14, 0x14);
GUEST_OFFSET(Camera, byte_15, 0x15);
GUEST_OFFSET(Camera, byte_16, 0x16);
GUEST_OFFSET(Camera, byte_17, 0x17);
GUEST_OFFSET(Camera, word_28, 0x28);
GUEST_OFFSET(Camera, word_2c, 0x2c);

inline constexpr guest::Function<0x0013fd78, u32(u32, u32, u32, u32)> MicInput__stop;
inline constexpr guest::Function<0x0014041c, u32(u32)> Dsp__get_state;
inline constexpr guest::Function<0x001404f0, u32(u32, u32)> ipc_command_a_flag;
inline constexpr guest::Function<0x00140530, u32(u32, u32)> ipc_command_5;
inline constexpr guest::Function<0x00140564, u32(u32)> Dsp__finalize;
inline constexpr guest::Function<0x002f76ad, u32(u32, u32, u32, u32)> destroy_array_elements;
inline constexpr guest::Function<0x002f88b8, u32(u32)> release_owned_object;

u32 Camera__destruct(gptr<Camera> camera, u32 r1, u32 r2, u32 r3) {
    if (camera->byte_14 != 0) {
        MicInput__stop(camera.addr() + 0x34u, r1, r2, r3);
        u32 r1_1 = guest::cpu()->r[1];
        u32 r0_2 = camera->byte_14;
        if (r0_2 == 2u) {
            u32 r0_3 = ipc_command_5(r0_2, r1_1);
            r1_1 = guest::cpu()->r[1];
            if (s32(r0_3) >= 0) {
                r1_1 = 1u;
                camera->word_2c = 0;
                camera->byte_14 = u8(r1_1);
            }
            camera->byte_16 = 0;
            camera->byte_17 = 0;
        }
        u32 state = Dsp__get_state(ipc_command_a_flag(0u, r1_1));
        Dsp__finalize(state);
        u32 r0_6 = camera->word_28;
        if (r0_6 != 0) {
            release_owned_object(r0_6);
            camera->word_28 = 0;
        }
        camera->byte_15 = 2;
        camera->byte_14 = 0;
    }
    destroy_array_elements(camera.addr() + 0x40u, 0x13bbfcu, 0xecu, 6u);
    return camera.addr();
}

}  // namespace d_0013d444
GUEST_EXPORT_FRAMED(0x0013d444, d_0013d444::Camera__destruct, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0013d6d0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Unlinks the request from the pending list (when queued or running, under the list lock) and clears it.
namespace d_0013d6d0 {

struct __attribute__((packed)) SoundRequest {
    u8 unknown_0[0xc];  // (not used here)
    u8 byte_c;
};
GUEST_OFFSET(SoundRequest, byte_c, 0xc);

struct __attribute__((packed)) Local_0013d6d0_ea_2 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0013d6d0_ea_2, word_0, 0x0);
GUEST_OFFSET(Local_0013d6d0_ea_2, word_4, 0x4);

inline constexpr u32 sound_request_list_b_address = 0x00982864u;
inline constexpr u32 sound_request_list_address = 0x00982870u;
inline constexpr guest::Function<0x00135740, u32(u32, u32, u32, u32)> lock_member_lock;
inline constexpr guest::Function<0x00137e84, u32(u32, u32)> unlock_member_lock;
inline constexpr guest::Function<0x0013f000, u32(u32, u32)> unlink_from_ends;

void SoundRequest__cancel(gptr<SoundRequest> sound_request, u32 r1) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    lock_member_lock(sound_request_list_address, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    if (sound_request->byte_c == 1u || sound_request->byte_c == 2u) {
        lock_member_lock(sound_request_list_address, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        unlink_from_ends(sound_request_list_b_address, sound_request.addr());
        unlock_member_lock(sound_request_list_address, sound_request.addr());
    }
    u32 r1_1 = ~0u;
    *gptr<u8>(sound_request.addr() + 0xcu) = 0;
    gptr<Local_0013d6d0_ea_2> ea_2 = gptr<Local_0013d6d0_ea_2>(sound_request.addr() + 0x10u);
    ea_2->word_0 = 0;
    ea_2->word_4 = r1_1;
    frame.release();
    unlock_member_lock(sound_request_list_address, r1_1);
    return;
}

}  // namespace d_0013d6d0
GUEST_EXPORT(0x0013d6d0, d_0013d6d0::SoundRequest__cancel);

// f_0013d73c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Destroys a sound data load request: takes it out of the request list (when queued or loading), under the
// list's lock.
namespace d_0013d73c {

struct __attribute__((packed)) Local_0013d73c_r1_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0013d73c_r1_1, word_0, 0x0);
GUEST_OFFSET(Local_0013d73c_r1_1, word_4, 0x4);

inline constexpr u32 vtable_SoundDataLoadRequest = 0x008f4a84u;
inline constexpr u32 sound_request_list_b_address = 0x00982864u;
inline constexpr u32 sound_request_list_address = 0x00982870u;
inline constexpr guest::Function<0x00135740, u32(u32, u32, u32, u32)> lock_member_lock;
inline constexpr guest::Function<0x00137e84, u32(u32, u32)> unlock_member_lock;
inline constexpr guest::Function<0x0013f000, u32(u32, u32)> unlink_from_ends;

u32 SoundDataLoadRequest__destructor(gptr<SoundDataLoadRequest> sound_data_load_request, u32 r1, u32 r2) {
    sound_data_load_request->vtable = vtable_SoundDataLoadRequest;
    lock_member_lock(sound_request_list_address, r1, r2, guest::cpu()->r[3]);
    if (sound_data_load_request->byte_c == 1u || sound_data_load_request->byte_c == 2u) {
        lock_member_lock(sound_request_list_address, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        unlink_from_ends(sound_request_list_b_address, sound_data_load_request.addr());
        unlock_member_lock(sound_request_list_address, sound_data_load_request.addr());
    }
    sound_data_load_request->byte_c = 0;
    gptr<Local_0013d73c_r1_1> r1_1 = gptr<Local_0013d73c_r1_1>(sound_data_load_request.addr() + 0x10u);
    r1_1->word_0 = 0;
    r1_1->word_4 = ~0u;
    unlock_member_lock(sound_request_list_address, r1_1.addr());
    return sound_data_load_request.addr();
}

}  // namespace d_0013d73c
GUEST_EXPORT_FRAMED(0x0013d73c, d_0013d73c::SoundDataLoadRequest__destructor, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_0013d7cc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Destroys a melody player's base: stops its sound and frees its sound bank slot.
namespace d_0013d7cc {

inline constexpr u32 vtable_SoundMelodyPlayerBase = 0x008f54d0u;
inline constexpr u32 sound_data_load_mgr_instance_address = 0x0094cd20u;
inline guest::global<u32, 0x0094cd20> sound_data_load_mgr_instance;
inline constexpr guest::Function<0x00136cc8, u32(u32, u32)> detach_from_parent;
inline constexpr guest::Function<0x00136e58, u32(u32, u32, u32, u32)> BasicSound__stop;
inline constexpr guest::Function<0x00138c2c, u32(u32, u32, u32, u32)> locked_list_last_index;
inline constexpr guest::Function<0x0013d4f0, u32(u32, u32, u32)> SoundBank__slot_ready;

u32 SoundMelodyPlayerBase__destructor(gptr<SoundMelodyPlayerBase> sound_melody_player_base, u32 r1, u32 r2) {
    sound_melody_player_base->vtable = vtable_SoundMelodyPlayerBase;
    u32 r0_1 = sound_melody_player_base->word_4;
    if (r0_1 != 0) {
        BasicSound__stop(r0_1, 0u, r2, guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
    }
    if (sound_melody_player_base->word_44 + 1u != 0) {
        u32 r0_2 = *sound_data_load_mgr_instance;
        if (r0_2 != 0) {
            u32 r0_3 = locked_list_last_index(r0_2, 0u, r2, guest::cpu()->r[3]);
            r1 = sound_melody_player_base->word_44;
            if (s32(r1) <= s32(r0_3)) {
                u32 r0_5 = SoundBank__slot_ready(*sound_data_load_mgr_instance, r1, 0u);
                r1 = guest::cpu()->r[1];
                if (r0_5 != 0) {
                    sound_melody_player_base->word_44 = ~0u;
                }
            }
        }
    }
    sound_melody_player_base->byte_24 = 0;
    detach_from_parent(sound_melody_player_base.addr() + 4u, r1);
    return sound_melody_player_base.addr();
}

}  // namespace d_0013d7cc
GUEST_EXPORT_FRAMED(0x0013d7cc, d_0013d7cc::SoundMelodyPlayerBase__destructor, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0013d85c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Closes the file stream's handle (+4; a pending failure is fatal).
namespace d_0013d85c {

inline constexpr guest::Function<0x0012ede8, u32(u32, u32, u32, u32)> call_virtual_12_if_present;
inline constexpr guest::Function<0x00134250, u32(u32, u32, u32, u32)> fatal_result;

u32 FileInputStream__close(gptr<nn__fs__FileInputStream> file_input_stream) {
    u32 r4_1 = file_input_stream.addr() + 4u;
    u32 r0_1 = file_input_stream->word_4;
    u32 r1_1 = r0_1 & ~1u;
    if (r1_1 == 0) {
        guest::cpu()->r[1] = r1_1;
        return r4_1 - 4u;
    }
    if ((r0_1 & 1u) != 0) {
        fatal_result(r0_1, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
    }
    call_virtual_12_if_present(file_input_stream->word_4 & ~1u, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
    file_input_stream->word_4 = 0;
    guest::cpu()->r[1] = 0u;
    return r4_1 - 4u;
}

}  // namespace d_0013d85c
GUEST_EXPORT_FRAMED(0x0013d85c, d_0013d85c::FileInputStream__close, 0x4010);  // pushes {r4, lr} first, as the original

// f_0013dc74: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0013dc74 {

inline constexpr u32 vtable_nn__fnd__UnitHeapTemplate_nn__os__LockPolicy__Object_nn__os__CriticalSection__ = 0x008fb030u;
inline constexpr u32 global_0094a940_address = 0x0094a940u;
inline constexpr u32 unit_heap_lock_c_address = 0x00974f0cu;
inline constexpr u32 unit_heap_lock_address = 0x00ae0bc8u;
inline constexpr u32 unit_heap_lock_b_address = 0x00ae0bf8u;
inline constexpr u32 unit_heap_lock_d_address = 0x00ae0cb8u;
inline guest::global<u32, 0x00974f04> global_00974f04;
inline guest::global<u32, 0x00974f0c> unit_heap_lock_c;
inline guest::global<u32, 0x00ae0bc8> unit_heap_lock;
inline guest::global<u32, 0x00ae0bcc> global_00ae0bcc;
inline guest::global<u32, 0x00ae0bd0> global_00ae0bd0;
inline guest::global<u32, 0x00ae0bd4> global_00ae0bd4;
inline guest::global<u32, 0x00ae0bd8> global_00ae0bd8;
inline guest::global<u32, 0x00ae0bdc> global_00ae0bdc;
inline guest::global<u32, 0x00ae0bec> global_00ae0bec;
inline guest::global<u32, 0x00ae0bf8> unit_heap_lock_b;
inline guest::global<u32, 0x00ae0bfc> global_00ae0bfc;
inline guest::global<u32, 0x00ae0c00> global_00ae0c00;
inline constexpr guest::Function<0x0012f154, u32(u32)> RecursiveLock__initialize;
inline constexpr guest::Function<0x00135748, u32(u32, u32, u32, u32)> RecursiveLock__lock;
inline constexpr guest::Function<0x001357ec, u32(u32)> RecursiveLock__unlock;
inline constexpr guest::Function<0x0013cc9c, u32(u32, u32, u32)> FixedPool__allocate;
inline constexpr guest::Function<0x0014031c, u32(u32, u32, u32, u32)> SoundSystem__init_heaps;
inline constexpr guest::Function<0x002fe7dd, u32(u32, u32, u32)> static_guard_acquire;

struct __attribute__((packed)) NnFndUnitHeapTemplateNnOsLockPolicyObjectNnOsCriticalSectionCriticalSection0013dc74Frame {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(NnFndUnitHeapTemplateNnOsLockPolicyObjectNnOsCriticalSectionCriticalSection0013dc74Frame, word_0, 0x0);
GUEST_OFFSET(NnFndUnitHeapTemplateNnOsLockPolicyObjectNnOsCriticalSectionCriticalSection0013dc74Frame, word_4, 0x4);
GUEST_SIZE(NnFndUnitHeapTemplateNnOsLockPolicyObjectNnOsCriticalSectionCriticalSection0013dc74Frame, 0x8);

u32 nn__fnd__UnitHeapTemplate_nn__os__LockPolicy__Object_nn__os__CriticalSection____CriticalSection___0013dc74(u32 r0_unused, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<NnFndUnitHeapTemplateNnOsLockPolicyObjectNnOsCriticalSectionCriticalSection0013dc74Frame> frame;  // the original's stack frame
    RecursiveLock__lock(unit_heap_lock_d_address, r1, r2, r3);
    u32 r2_1 = guest::cpu()->r[2];
    if ((*unit_heap_lock_c & 1u) == 0) {
        u32 first_time_2 = static_guard_acquire(unit_heap_lock_c_address, guest::cpu()->r[1], r2_1);
        r2_1 = guest::cpu()->r[2];
        if (first_time_2 != 0) {
            *global_00ae0bcc = 0;
            *global_00ae0bd0 = 0;
            *global_00ae0bd4 = 0;
            *global_00ae0bd8 = 0;
            *global_00ae0bdc = 0;
            *global_00ae0bec = 0;
            *unit_heap_lock_b = 0;
            *unit_heap_lock = vtable_nn__fnd__UnitHeapTemplate_nn__os__LockPolicy__Object_nn__os__CriticalSection__;
            *global_00ae0c00 = ~0u;
            *global_00ae0bfc = 0;
            frame->word_0 = 4;
            frame->word_4 = 0;
            SoundSystem__init_heaps(unit_heap_lock_address, 0x130u, global_0094a940_address, 0x1300u);
            RecursiveLock__initialize(unit_heap_lock_b_address);
            r2_1 = 0x100000u;
        }
    }
    *global_00974f04 = 0xae0bc8;
    u32 r0_2 = FixedPool__allocate(unit_heap_lock_address, guest::cpu()->r[1], r2_1);
    RecursiveLock__unlock(unit_heap_lock_d_address);
    return r0_2;
}

}  // namespace d_0013dc74
GUEST_EXPORT_FRAMED(0x0013dc74, d_0013dc74::nn__fnd__UnitHeapTemplate_nn__os__LockPolicy__Object_nn__os__CriticalSection____CriticalSection___0013dc74, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_0013dd5c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Constructs the content RomFS archive: empty, with its unit heap's lock, nothing open.
namespace d_0013dd5c {

inline constexpr u32 vtable_nn__fs__CTR__MPCore__detail__ContentRomFsArchive = 0x008faed0u;
inline constexpr u32 vtable_nn__fnd__UnitHeapTemplate_nn__os__LockPolicy__Object_nn__os__CriticalSection__ = 0x008fb030u;

void ContentRomFsArchive__construct(gptr<nn__fs__CTR__MPCore__detail__ContentRomFsArchive> content_rom_fs_archive) {
    content_rom_fs_archive->word_4 = 0;
    content_rom_fs_archive->word_8 = 0;
    content_rom_fs_archive->word_20 = 0;
    content_rom_fs_archive->word_24 = 0;
    content_rom_fs_archive->word_28 = 0;
    content_rom_fs_archive->word_2c = 0;
    content_rom_fs_archive->word_30 = 0;
    content_rom_fs_archive->word_34 = 0;
    content_rom_fs_archive->word_38 = 0;
    content_rom_fs_archive->word_3c = 0;
    content_rom_fs_archive->word_40 = 0;
    content_rom_fs_archive->word_44 = 0;
    content_rom_fs_archive->word_48 = 0;
    content_rom_fs_archive->word_4c = 0;
    content_rom_fs_archive->word_50 = 0;
    content_rom_fs_archive->word_54 = 0;
    content_rom_fs_archive->word_58 = 0;
    content_rom_fs_archive->word_5c = 0;
    content_rom_fs_archive->word_60 = 0;
    content_rom_fs_archive->word_64 = 0;
    content_rom_fs_archive->word_68 = 0;
    content_rom_fs_archive->word_6c = 0;
    content_rom_fs_archive->word_bc = 0;
    content_rom_fs_archive->word_c0 = 0;
    content_rom_fs_archive->word_c4 = 0;
    content_rom_fs_archive->word_c8 = 0;
    content_rom_fs_archive->word_cc = 0;
    content_rom_fs_archive->word_dc = 0;
    content_rom_fs_archive->word_e8 = 0;
    u32 r12_1 = ~0u;
    content_rom_fs_archive->word_ec = 0;
    content_rom_fs_archive->word_f0 = r12_1;
    content_rom_fs_archive->word_f8 = 0;
    content_rom_fs_archive->vtable_b8 = vtable_nn__fnd__UnitHeapTemplate_nn__os__LockPolicy__Object_nn__os__CriticalSection__;
    content_rom_fs_archive->word_fc = 0;
    content_rom_fs_archive->word_100 = 0;
    content_rom_fs_archive->word_104 = 0;
    content_rom_fs_archive->word_108 = 0;
    content_rom_fs_archive->word_118 = 0;
    content_rom_fs_archive->word_124 = 0;
    content_rom_fs_archive->word_128 = 0;
    content_rom_fs_archive->word_12c = r12_1;
    content_rom_fs_archive->word_c = 0;
    content_rom_fs_archive->vtable_f4 = vtable_nn__fnd__UnitHeapTemplate_nn__os__LockPolicy__Object_nn__os__CriticalSection__;
    content_rom_fs_archive->word_10 = 0;
    content_rom_fs_archive->word_14 = 0;
    content_rom_fs_archive->word_18 = 0;
    content_rom_fs_archive->vtable = vtable_nn__fs__CTR__MPCore__detail__ContentRomFsArchive;
    content_rom_fs_archive->word_1c = 0;
}

}  // namespace d_0013dd5c
GUEST_EXPORT_FRAMED(0x0013dd5c, d_0013dd5c::ContentRomFsArchive__construct, 0x10);  // pushes {r4} first, as the original

// f_0013dee0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The handle at 0x974ef8 (a fatal error when it is not set).
namespace d_0013dee0 {

inline constexpr u32 required_handle_address = 0x00974ef8u;
inline guest::global<u32, 0x00974ef8> required_handle;
inline constexpr guest::Function<0x0012f598, u32(u32, u32)> report_fatal_result_with_info;

u32 required_handle_974ef8() {
    if (*required_handle == 0) {
        report_fatal_result_with_info(0xe0a046dbu, 0x13defcu);
    }
    return *required_handle;
}

}  // namespace d_0013dee0
GUEST_EXPORT_FRAMED(0x0013dee0, d_0013dee0::required_handle_974ef8, 0x4010);  // pushes {r4, lr} first, as the original

// f_0013df14: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Converts a multibyte path to wide characters and opens it as a file stream.
namespace d_0013df14 {

inline constexpr guest::Function<0x00100cfd, u32(u32, u32, u32, u32)> pointer_is_null_or_points_to_zero;
inline constexpr guest::Function<0x00100d0f, u32(u32, u32, u32, u32)> multibyte_to_wide_stateless;
inline constexpr guest::Function<0x00139ffc, u32(u32, u32, u32, u32)> Archive__open_file;
inline constexpr guest::Function<0x002f7951, u32(u32, u32, u32, u32)> multibyte_to_wide;

struct __attribute__((packed)) FileInputStreamOpenPathFrame {
    u8 unknown_0[0x210];  // (not read or written by name)
    u32 word_210;
    u32 word_214;
};
GUEST_OFFSET(FileInputStreamOpenPathFrame, word_210, 0x210);
GUEST_OFFSET(FileInputStreamOpenPathFrame, word_214, 0x214);
GUEST_SIZE(FileInputStreamOpenPathFrame, 0x218);

u32 FileInputStream__open_path(u32 file_input_stream, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<FileInputStreamOpenPathFrame> frame;  // the original's stack frame
    u32 r7 = file_input_stream;
    u32 r9 = 0u;
    u32 r6 = r1;
    u32 r8 = r2;
    u32 r5 = frame.at(0).addr();
    frame->word_210 = r9;
    frame->word_214 = r9;
    pointer_is_null_or_points_to_zero(frame.at(0x210).addr(), r1, r2, r3);
    r3 = guest::cpu()->r[3];
    u32 r10 = 0x105u;
L_13df44:;
    u32 r0_2 = multibyte_to_wide_stateless(r6, r10, frame.at(0x210).addr(), r3);
    r3 = guest::cpu()->r[3];
    if (r0_2 != 0) {
        u32 r0_3 = multibyte_to_wide(r5, r6, r0_2, frame.at(0x210).addr());
        r3 = guest::cpu()->r[3];
        if (r0_3 != 0) {
            r5 += 2u;
            r6 += r0_2;
            guest::preempt();
            goto L_13df44;
        }
    }
    *gptr<u16>(r5) = u16(r9);
    *gptr<u32>(r7 + 0xcu) = r9;
    *gptr<u32>(r7 + 0x10u) = r9;
    *gptr<u32>(r7 + 4u) = r9;
    *gptr<u32>(r7 + 8u) = r9;
    return Archive__open_file(r7, frame.at(0).addr(), r8, r3);
}

}  // namespace d_0013df14
GUEST_EXPORT_FRAMED(0x0013df14, d_0013df14::FileInputStream__open_path, 0x47f0);  // pushes {r4, r5, r6, r7, r8, r9, r10, lr} first, as the original

// f_0013e164: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The physical address for an offset in the video memory banks (by its range).
namespace d_0013e164 {


u32 physical_address_of_vram(u32 r0) {
    u32 r1_1 = 0;
    if (s32(r0) >= 0x20) {
        return r0 - 0x20u;
    }
    if (s32(r0) >= 0x18) {
        r1_1 = 0x5109d500u;
        r0 -= 0x18u;
    } else {
        r1_1 = 0x6c8da500u;
    }
    return r0 + r1_1;
}

}  // namespace d_0013e164
GUEST_EXPORT(0x0013e164, d_0013e164::physical_address_of_vram);

// f_0013e258: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Converts a linear heap address to its physical address (unchanged below 0xaf9000).
namespace d_0013e258 {


u32 linear_to_physical(u32 r0) {
    if (r0 < 0xaf9000u) {
        return r0;
    }
    return r0 + 0x7507000u;
}

}  // namespace d_0013e258
GUEST_EXPORT(0x0013e258, d_0013e258::linear_to_physical);

// f_0013e274: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// When reports are on (0x97e038): hashes the archive's name and sends its entry and kind to the report hook.
namespace d_0013e274 {

struct __attribute__((packed)) ReportLoadErrorNameArg0 {
    u8 unknown_0[0xc8];  // (not used here)
    u32 word_c8;
    u32 word_cc;
};
GUEST_OFFSET(ReportLoadErrorNameArg0, word_c8, 0xc8);
GUEST_OFFSET(ReportLoadErrorNameArg0, word_cc, 0xcc);

struct __attribute__((packed)) Local_0013e274_ea_2 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0013e274_ea_2, word_0, 0x0);
GUEST_OFFSET(Local_0013e274_ea_2, word_4, 0x4);

struct __attribute__((packed)) Local_0013e274_ea_3 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0013e274_ea_3, word_0, 0x0);
GUEST_OFFSET(Local_0013e274_ea_3, word_4, 0x4);

struct __attribute__((packed)) Local_0013e274_ea_4 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_0013e274_ea_4, word_0, 0x0);
GUEST_OFFSET(Local_0013e274_ea_4, word_4, 0x4);
GUEST_OFFSET(Local_0013e274_ea_4, word_8, 0x8);

struct __attribute__((packed)) Local_0013e274_r0_6 {
    u32 word_0;
    u8 unknown_4[0x4];  // (not used here)
    u8 byte_8;
};
GUEST_OFFSET(Local_0013e274_r0_6, word_0, 0x0);
GUEST_OFFSET(Local_0013e274_r0_6, byte_8, 0x8);

inline guest::global<u8, 0x0097e038> global_0097e038;
inline constexpr guest::Function<0x00134c80, u32(u32, u32, u32, u32)> svc_break;
inline constexpr guest::Function<0x0013fff8, u32(u32, u32)> Friends__local_identity;
inline constexpr guest::Function<0x00140694, u32(u32, u32, u32, u32)> nn__crypto__Sha256Context__Sha256Context;

struct __attribute__((packed)) ReportLoadErrorNameFrame {
    u8 unknown_0[0xc];  // (not read or written by name)
    u32 word_c;
    u8 unknown_10[0xc];  // (not read or written by name)
    u32 word_1c;
    u8 unknown_20[0x24];  // (not read or written by name)
};
GUEST_OFFSET(ReportLoadErrorNameFrame, word_c, 0xc);
GUEST_OFFSET(ReportLoadErrorNameFrame, word_1c, 0x1c);
GUEST_SIZE(ReportLoadErrorNameFrame, 0x44);

void report_load_error_name(gptr<ReportLoadErrorNameArg0> arg0, u32 r1_unused, u32 r2_unused, u32 r3) {
    guest::StackFrameOf<ReportLoadErrorNameFrame> frame;  // the original's stack frame
    u32 r0 = arg0.addr();
    u32 r1_1 = *global_0097e038;
    if (r1_1 == 0) {
        guest::cpu()->r[1] = r1_1;
        return;
    }
    nn__crypto__Sha256Context__Sha256Context(frame.at(0x20).addr(), r0, 0x80u, r3);
    u32 r0_3 = Friends__local_identity(frame.at(0xc).addr(), frame.at(0x20).addr());
    u32 r5 = 0u;
    if (s32(r0_3) < 0) {
        guest::cpu()->r[1] = r0_3;
        return;
    }
    u32 r0_4 = frame->word_c;
    if (*gptr<u32>(r0_4 + 0x14u) == 0) {
        guest::cpu()->r[1] = r0_3;
        return;
    }
    gptr<Local_0013e274_ea_2> ea_2 = gptr<Local_0013e274_ea_2>(*gptr<u32>(r0_4 + 0x10u) + r0_4);
    u32 r12 = ea_2->word_4;
    u32 r2 = ea_2->word_0 + r0_4;
    if (s32(r12) <= s32(r0_3)) {
        guest::cpu()->r[1] = r0_3;
        return;
    }
    gptr<Local_0013e274_ea_3> ea_3 = gptr<Local_0013e274_ea_3>(*gptr<u32>(r2 + (r0_3 << 3)) + r0_4);
    u32 r1_3 = ea_3->word_4;
    u32 r0_5 = r0_4 + ea_3->word_0;
    if (r0_5 == 0) {
        guest::cpu()->r[1] = r1_3;
        return;
    }
    gptr<Local_0013e274_ea_4> ea_4 = gptr<Local_0013e274_ea_4>(frame.at(0x10).addr());
    ea_4->word_0 = r0_5;
    ea_4->word_4 = r1_3 + 1u;
    ea_4->word_8 = r0;
    u32 i = 0u;
    r3 = arg0->word_cc;
    if (r3 != 0 && s32(r3) >= 0) {
        r12 = arg0->word_c8;
    }
    if (s32(r3) > 0) {
        do {
            gptr<Local_0013e274_r0_6> r0_6 = gptr<Local_0013e274_r0_6>(r12 + i * 0xcu);
            if (r0_6->byte_8 == 2u) {
                r5 = r0_6->word_0;
                break;
            }
            i += 1u;
            guest::preempt();
        } while (s32(r3) > s32(i));
    }
    frame->word_1c = r5;
    svc_break(frame.at(0x10).addr(), 0x10u, r2, r3);
}

}  // namespace d_0013e274
GUEST_EXPORT_FRAMED(0x0013e274, d_0013e274::report_load_error_name, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_0013e560: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Frees a block of an expanding heap (no lock), counting one block fewer.
namespace d_0013e560 {

inline constexpr guest::Function<0x0013e580, u32(u32, u32, u32, u32)> ExpHeap__block_info;

u32 ExpHeap__free(gptr<nn__fnd__ExpHeapTemplate_nn__os__LockPolicy__NoLock_> no_lock) {
    ExpHeap__block_info(no_lock.addr() + 0x18u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_2 = no_lock->word_54 - 1u;
    no_lock->word_54 = r0_2;
    return r0_2;
}

}  // namespace d_0013e560
GUEST_EXPORT_FRAMED(0x0013e560, d_0013e560::ExpHeap__free, 0x4010);  // pushes {r4, lr} first, as the original

// f_0013e75c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Sets a heap's range (filled with the debug pattern when its option asks) and adds it to its parent's list of heaps.
namespace d_0013e75c {

struct __attribute__((packed)) HeapBase {
    u8 unknown_0[0xc];  // (not used here)
    u32 start;
    u32 end;
    u32 signature;
    u8 unknown_18[0xc];  // (not used here)
    u32 options;
};
GUEST_OFFSET(HeapBase, start, 0xc);
GUEST_OFFSET(HeapBase, end, 0x10);
GUEST_OFFSET(HeapBase, signature, 0x14);
GUEST_OFFSET(HeapBase, options, 0x24);

inline constexpr u32 heap_base_state_address = 0x00981890u;
inline constexpr u32 global_00af51c0_address = 0x00af51c0u;
inline guest::global<u32, 0x00981890> heap_base_state;
inline constexpr guest::Function<0x0013e7d8, u32(u32, u32, u32)> linked_list_insert_before;
inline constexpr guest::Function<0x0013fac4, u32(u32, u32, u32, u32)> set_bytes;
inline constexpr guest::Function<0x001432c8, u32(u32, u32)> HeapList__find;

void HeapBase__initialize(gptr<HeapBase> heap, u32 signature, u32 start, u32 end) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 options = *frame.at<u32>(0x10) & 0xffu;
    heap->options = options;
    heap->signature = signature;
    heap->start = start;
    heap->end = end;
    if ((options & 2u) != 0) {
        set_bytes(start, end - start, *heap_base_state, end);
    }
    u32 list = global_00af51c0_address;
    u32 r0_2 = HeapList__find(list, heap.addr());
    if (r0_2 != 0) {
        list = r0_2 + 0x18u;
    }
    frame.release();
    linked_list_insert_before(list, list + 4u, heap.addr() + 4u);
    return;
}

}  // namespace d_0013e75c
GUEST_EXPORT(0x0013e75c, d_0013e75c::HeapBase__initialize);

// f_0013ea18: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Calls the handler for the animation's kind (0x80000000 or 0x40000000) from the table at 0x97511c.
namespace d_0013ea18 {

struct __attribute__((packed)) ResAnim {
    u32 word_0;
};
GUEST_OFFSET(ResAnim, word_0, 0x0);

inline constexpr u32 res_anim_dispatch_a_address = 0x0097511cu;
inline constexpr u32 res_anim_dispatch_b_address = 0x00975120u;
inline guest::global<u32, 0x0097511c> res_anim_dispatch_a;
inline guest::global<u32, 0x00975120> res_anim_dispatch_b;

void ResAnim__dispatch_by_kind(gptr<ResAnim> res_anim) {
    u32 r0_1 = res_anim->word_0;
    u32 r2_1 = *gptr<u32>(r0_1);
    if (r2_1 == 0x80000000u) {
        u32 r1_1 = *res_anim_dispatch_a;
        guest::call_address<u32>(r1_1, r0_1, r1_1, r2_1, guest::cpu()->r[3]);
        return;
    }
    if (r2_1 != 0x40000000u) {
        return;
    }
    u32 r1_2 = *res_anim_dispatch_b;
    guest::call_address<u32>(r1_2, r0_1, r1_2, r2_1, guest::cpu()->r[3]);
}

}  // namespace d_0013ea18
GUEST_EXPORT(0x0013ea18, d_0013ea18::ResAnim__dispatch_by_kind);

// f_0013ea4c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Dispatches the animation's child (+0x28 offset) when it has one.
namespace d_0013ea4c {

struct __attribute__((packed)) ResAnim {
    u32 word_0;
};
GUEST_OFFSET(ResAnim, word_0, 0x0);

inline constexpr guest::Function<0x00140914, u32(u32, u32, u32, u32)> SoundArchive__first_block;

struct __attribute__((packed)) ResAnimDispatchChildFrame {
    u32 word_0;
};
GUEST_OFFSET(ResAnimDispatchChildFrame, word_0, 0x0);
GUEST_SIZE(ResAnimDispatchChildFrame, 0x4);

void ResAnim__dispatch_child(gptr<ResAnim> res_anim, u32 r1_unused, u32 r2_unused, u32 r3) {
    guest::StackFrameOf<ResAnimDispatchChildFrame> frame;  // the original's stack frame
    frame->word_0 = r3;
    u32 ea_1 = res_anim->word_0 + 0x28u;
    u32 r1_1 = *gptr<u32>(ea_1);
    u32 r0_1 = r1_1 == 0 ? 0u : ea_1 + r1_1;
    frame->word_0 = r0_1;
    if (r0_1 != 0) {
        SoundArchive__first_block(frame.at(0).addr(), r1_1, guest::cpu()->r[2], r3);
    }
}

}  // namespace d_0013ea4c
GUEST_EXPORT_FRAMED(0x0013ea4c, d_0013ea4c::ResAnim__dispatch_child, 0x4000);  // pushes {lr} first, as the original

// f_0013ebec: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Stores a word at `index` of the table's values (+8) when it is loaded and in range.
namespace d_0013ebec {

struct __attribute__((packed)) ResTable {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
    u32 word_8;
    u8 byte_c;
};
GUEST_OFFSET(ResTable, word_4, 0x4);
GUEST_OFFSET(ResTable, word_8, 0x8);
GUEST_OFFSET(ResTable, byte_c, 0xc);


void ResTable__set_word(gptr<ResTable> res_table, u32 r1, u32 r2) {
    u32 r3_1 = res_table->byte_c;
    u32 zf_1 = r3_1 == 0;
    if (!zf_1) {
        r3_1 = res_table->word_8;
        zf_1 = r3_1 == 0;
    }
    if (zf_1) {
        return;
    }
    if (*gptr<u32>(res_table->word_4) > r1) {
        *gptr<u32>(r3_1 + (r1 << 2)) = r2;
        return;
    }
}

}  // namespace d_0013ebec
GUEST_EXPORT(0x0013ebec, d_0013ebec::ResTable__set_word);

// f_0013ec20: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Reads a wave archive (CWAR, version 1.0.0.0): its INFO block and, when asked, its file table.
namespace d_0013ec20 {

struct __attribute__((packed)) WaveArchiveFileReader {
    u32 wave_archive_file;
    u32 word_4;
    u32 word_8;
    u8 byte_c;
};
GUEST_OFFSET(WaveArchiveFileReader, wave_archive_file, 0x0);
GUEST_OFFSET(WaveArchiveFileReader, word_4, 0x4);
GUEST_OFFSET(WaveArchiveFileReader, word_8, 0x8);
GUEST_OFFSET(WaveArchiveFileReader, byte_c, 0xc);

struct __attribute__((packed)) File {
    u32 word_0;
    u8 unknown_4[0x4];  // (not used here)
    u32 word_8;
};
GUEST_OFFSET(File, word_0, 0x0);
GUEST_OFFSET(File, word_8, 0x8);

inline constexpr guest::Function<0x0013f3cc, u32(u32)> WaveArchiveFile__info_block;
inline constexpr guest::Function<0x001416bc, u32(u32, u32)> SoundArchive__block_offset;

void WaveArchiveFileReader__initialize(gptr<WaveArchiveFileReader> reader, gptr<File> file, u32 with_table) {
    u32 r1 = file.addr();
    u32 wave_archive_file = r1;
    reader->wave_archive_file = 0;
    reader->word_4 = 0;
    reader->word_8 = 0;
    reader->byte_c = 0;
    if (r1 != 0) {
        r1 = 0x52415743u;
        if (file->word_0 == r1 && file->word_8 == 0x1000000u) {
            reader->wave_archive_file = wave_archive_file;
            u32 info = WaveArchiveFile__info_block(wave_archive_file);
            r1 = info + 8u;
            reader->word_4 = r1;
            reader->byte_c = 1;
            reader->word_8 = 0;
            if (with_table != 0 && 1) {
                u32 r6_1 = reader->wave_archive_file;
                u32 r0_2 = SoundArchive__block_offset(r6_1, r1);
                r1 = 0x54415743u;
                if (*gptr<u32>(r6_1 + r0_2) == r1) {
                    u32 r0_4 = SoundArchive__block_offset(reader->wave_archive_file, r1);
                    r1 = guest::cpu()->r[1];
                    reader->word_8 = r0_4 + 4u + wave_archive_file;
                }
            }
        }
    }
    guest::cpu()->r[1] = r1;
}

}  // namespace d_0013ec20
GUEST_EXPORT_FRAMED(0x0013ec20, d_0013ec20::WaveArchiveFileReader__initialize, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_0013edb4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Allocates a new section record on the frame heap and links it in the heap's section list; true when it did.
namespace d_0013edb4 {

struct __attribute__((packed)) SoundHeap {
    u32 word_0;
};
GUEST_OFFSET(SoundHeap, word_0, 0x0);

struct __attribute__((packed)) Local_0013edb4_ea_7 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0013edb4_ea_7, word_0, 0x0);
GUEST_OFFSET(Local_0013edb4_ea_7, word_4, 0x4);

struct __attribute__((packed)) Local_0013edb4_r0_2 {
    u32 word_0;
    u8 unknown_4[0x8];  // (not used here)
    u32 word_c;
    u8 unknown_10[0x4];  // (not used here)
    u8 byte_14;
};
GUEST_OFFSET(Local_0013edb4_r0_2, word_0, 0x0);
GUEST_OFFSET(Local_0013edb4_r0_2, word_c, 0xc);
GUEST_OFFSET(Local_0013edb4_r0_2, byte_14, 0x14);

inline constexpr guest::Function<0x0013e7d8, u32(u32, u32, u32)> linked_list_insert_before;
inline constexpr guest::Function<0x0013e92c, u32(u32, u32, u32)> FrameHeap__allocate;
inline constexpr guest::Function<0x0014087c, u32(u32, u32, u32)> PtrList__remove_b;

u32 SoundHeap__push_section(gptr<SoundHeap> sound_heap) {
    gptr<Local_0013edb4_r0_2> r0_2 = gptr<Local_0013edb4_r0_2>(FrameHeap__allocate(sound_heap->word_0, 0x18u, 4u));
    if (r0_2.addr() != 0) {
        r0_2->word_0 = 0;
        *gptr<u32>(r0_2.addr() + 4u) = 0;
        *gptr<u32>(r0_2.addr() + 8u) = 0;
        *gptr<u32>(r0_2.addr() + 0xcu) = 0;
        *gptr<u32>(r0_2.addr() + 0x10u) = 0;
        *gptr<u32>(r0_2.addr() + 0x14u) = 0;
        r0_2->word_0 = 0;
        u32 ea_6 = r0_2.addr() + 4u;
        *gptr<u32>(ea_6) = 0;
        u32 r0_3 = ea_6 + 4u;
        gptr<Local_0013edb4_ea_7> ea_7 = gptr<Local_0013edb4_ea_7>(r0_2.addr() + 8u);
        ea_7->word_0 = 0;
        ea_7->word_4 = r0_3 + 4u;
        *gptr<u32>(r0_3 + 8u) = r0_3 + 4u;
        r0_2->byte_14 = 1;
        PtrList__remove_b(r0_2.addr() + 8u, r0_2->word_c, r0_2.addr() + 0xcu);
        linked_list_insert_before(sound_heap.addr() + 4u, sound_heap.addr() + 8u, r0_2.addr());
        r0_2 = gptr<Local_0013edb4_r0_2>(1u);
    }
    return r0_2.addr();
}

}  // namespace d_0013edb4
GUEST_EXPORT_FRAMED(0x0013edb4, d_0013edb4::SoundHeap__push_section, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0013ee40: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Clears the sound heap (under its lock): stops the sounds using it and frees its sections.
namespace d_0013ee40 {

inline constexpr guest::Function<0x00135748, u32(u32, u32, u32, u32)> RecursiveLock__lock;
inline constexpr guest::Function<0x001357ec, u32(u32, u32, u32, u32)> RecursiveLock__unlock;
inline constexpr guest::Function<0x00140f54, u32(u32)> sound_archive_instance;
inline constexpr guest::Function<0x00140fac, u32(u32, u32)> SoundHandle__set_flag;
inline constexpr guest::Function<0x001411ec, u32(u32, u32)> SoundArchivePlayer__find_player;
inline constexpr guest::Function<0x00141490, u32(u32)> SoundHeap__reset;
inline constexpr guest::Function<0x001414b4, u32(u32)> SoundHeap__clear;

void AudioSoundHeapCtr__clear(gptr<sead__AudioSoundHeapCtr> audio_sound_heap_ctr, u32 r1) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 lock = audio_sound_heap_ctr.addr() + 4u;
    RecursiveLock__lock(lock, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    if (audio_sound_heap_ctr->word_10 != 0) {
        RecursiveLock__lock(audio_sound_heap_ctr.addr() + 4u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
        SoundHeap__reset(audio_sound_heap_ctr.addr() + 0x10u);
        u32 r0_3 = sound_archive_instance(RecursiveLock__unlock(audio_sound_heap_ctr.addr() + 4u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]));
        SoundArchivePlayer__find_player(r0_3, SoundHandle__set_flag(r0_3, 1u));
        SoundHeap__clear(audio_sound_heap_ctr.addr() + 0x10u);
        frame.release();
        RecursiveLock__unlock(lock, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
        return;
    }
    frame.release();
    RecursiveLock__unlock(lock, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    return;
}

}  // namespace d_0013ee40
GUEST_EXPORT(0x0013ee40, d_0013ee40::AudioSoundHeapCtr__clear);

// f_0013ef18: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Stops the player's sound (+8) at once when it has one.
namespace d_0013ef18 {

inline constexpr guest::Function<0x00136e58, u32(u32, u32, u32, u32)> BasicSound__stop;

void SoundMelodyPlayerOneSeqBase__stop(gptr<SoundMelodyPlayerOneSeqBase> sound_melody_player_one_seq_base) {
    u32 r0_1 = sound_melody_player_one_seq_base->word_8;
    if (r0_1 == 0) {
        guest::cpu()->r[1] = 0u;
        return;
    }
    BasicSound__stop(r0_1, 0u, guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0013ef18
GUEST_EXPORT(0x0013ef18, d_0013ef18::SoundMelodyPlayerOneSeqBase__stop);

// f_0013efb4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Destroys a disposer: its heap forgets it, and it is left with the singletons' list as its heap.
namespace d_0013efb4 {

inline constexpr u32 vtable_sead__IDisposer = 0x00905fecu;
inline constexpr u32 singleton_disposer_list_address = 0x00975334u;
inline guest::global<u32, 0x00975334> singleton_disposer_list;
inline constexpr guest::Function<0x00141650, u32(u32, u32, u32, u32)> Heap__remove_disposer;

u32 destroy_disposer(gptr<sead__IDisposer> i_disposer) {
    i_disposer->vtable = vtable_sead__IDisposer;
    u32 disposer_heap = i_disposer->disposer_heap;
    u32 r1_1 = *singleton_disposer_list;
    if (disposer_heap != r1_1) {
        if (disposer_heap != 0) {
            Heap__remove_disposer(disposer_heap, i_disposer.addr(), guest::cpu()->r[2], guest::cpu()->r[3]);
            r1_1 = guest::cpu()->r[1];
        }
        i_disposer->disposer_heap = *singleton_disposer_list;
    }
    guest::cpu()->r[1] = r1_1;
    return i_disposer.addr();
}

}  // namespace d_0013efb4
GUEST_EXPORT_FRAMED(0x0013efb4, d_0013efb4::destroy_disposer, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0013f398: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// A wave archive file's file block (its first or second section, whichever has kind 0x6801).
namespace d_0013f398 {

struct __attribute__((packed)) WaveArchiveFile {
    u8 unknown_0[0x14];  // (not used here)
    u16 half_14;
    u8 unknown_16[0xa];  // (not used here)
    u16 half_20;
};
GUEST_OFFSET(WaveArchiveFile, half_14, 0x14);
GUEST_OFFSET(WaveArchiveFile, half_20, 0x20);


u32 WaveArchiveFile__file_block(gptr<WaveArchiveFile> wave_archive_file) {
    if (wave_archive_file->half_14 == 0x6801u) {
        u32 r1_2 = *gptr<u32>((wave_archive_file.addr() + 0x14u) + 4u);
        guest::cpu()->r[1] = r1_2;
        return wave_archive_file.addr() + r1_2;
    }
    u32 r1_4 = *gptr<u32>((wave_archive_file->half_20 == 0x6801u ? wave_archive_file.addr() + 0x20u : 0u) + 4u);
    guest::cpu()->r[1] = r1_4;
    return wave_archive_file.addr() + r1_4;
}

}  // namespace d_0013f398
GUEST_EXPORT(0x0013f398, d_0013f398::WaveArchiveFile__file_block);

// f_0013f3cc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// A wave archive file's info block (its first or second section, whichever has kind 0x6800).
namespace d_0013f3cc {

struct __attribute__((packed)) WaveArchiveFile {
    u8 unknown_0[0x14];  // (not used here)
    u16 half_14;
    u8 unknown_16[0xa];  // (not used here)
    u16 half_20;
};
GUEST_OFFSET(WaveArchiveFile, half_14, 0x14);
GUEST_OFFSET(WaveArchiveFile, half_20, 0x20);


u32 WaveArchiveFile__info_block(gptr<WaveArchiveFile> wave_archive_file) {
    if (wave_archive_file->half_14 == 0x6800u) {
        return wave_archive_file.addr() + *gptr<u32>((wave_archive_file.addr() + 0x14u) + 4u);
    }
    return wave_archive_file.addr() + *gptr<u32>((wave_archive_file->half_20 == 0x6800u ? wave_archive_file.addr() + 0x20u : 0u) + 4u);
}

}  // namespace d_0013f3cc
GUEST_EXPORT(0x0013f3cc, d_0013f3cc::WaveArchiveFile__info_block);

// f_0013f5e8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The low byte of the value of key 0 of the sparse array at +8, or 0x40.
namespace d_0013f5e8 {

inline constexpr guest::Function<0x00141a9c, u32(u32, u32, u32)> SparseArray__get;

struct __attribute__((packed)) SparseArrayByte0Of0Or40At8Frame {
    u32 word_0;
};
GUEST_OFFSET(SparseArrayByte0Of0Or40At8Frame, word_0, 0x0);
GUEST_SIZE(SparseArrayByte0Of0Or40At8Frame, 0x4);

u32 SparseArray__byte_0_of_0_or_40_at_8(u32 sparse_array, u32 r1_unused, u32 r2_unused, u32 r3) {
    guest::StackFrameOf<SparseArrayByte0Of0Or40At8Frame> frame;  // the original's stack frame
    frame->word_0 = r3;
    u32 found = SparseArray__get(sparse_array + 8u, frame.at(0).addr(), 0u);
    return found == 0 ? 0x40u : frame->word_0 & 0xffu;
}

}  // namespace d_0013f5e8
GUEST_EXPORT_FRAMED(0x0013f5e8, d_0013f5e8::SparseArray__byte_0_of_0_or_40_at_8, 0x4000);  // pushes {lr} first, as the original

// f_0013f610: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Bits 8-15 of the value of key 0 of the sparse array at +8, or 0.
namespace d_0013f610 {

inline constexpr guest::Function<0x00141a9c, u32(u32, u32, u32)> SparseArray__get;

struct __attribute__((packed)) SparseArrayByte1Of0At8Frame {
    u32 word_0;
};
GUEST_OFFSET(SparseArrayByte1Of0At8Frame, word_0, 0x0);
GUEST_SIZE(SparseArrayByte1Of0At8Frame, 0x4);

u32 SparseArray__byte_1_of_0_at_8(u32 sparse_array, u32 r1_unused, u32 r2_unused, u32 r3) {
    guest::StackFrameOf<SparseArrayByte1Of0At8Frame> frame;  // the original's stack frame
    frame->word_0 = r3;
    u32 found = SparseArray__get(sparse_array + 8u, frame.at(0).addr(), 0u);
    if (found == 0) {
        return found;
    }
    return frame->word_0 >> 8u & 0xffu;
}

}  // namespace d_0013f610
GUEST_EXPORT_FRAMED(0x0013f610, d_0013f610::SparseArray__byte_1_of_0_at_8, 0x4000);  // pushes {lr} first, as the original

// f_0013f69c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The value of key 0 of the sparse array at +0xc, or 0.
namespace d_0013f69c {

inline constexpr guest::Function<0x00141a9c, u32(u32, u32, u32)> SparseArray__get;

struct __attribute__((packed)) SparseArrayValueOf0AtCFrame {
    u32 word_0;
};
GUEST_OFFSET(SparseArrayValueOf0AtCFrame, word_0, 0x0);
GUEST_SIZE(SparseArrayValueOf0AtCFrame, 0x4);

u32 SparseArray__value_of_0_at_c(u32 sparse_array, u32 r1_unused, u32 r2_unused, u32 r3) {
    guest::StackFrameOf<SparseArrayValueOf0AtCFrame> frame;  // the original's stack frame
    frame->word_0 = r3;
    u32 found = SparseArray__get(sparse_array + 0xcu, frame.at(0).addr(), 0u);
    if (found != 0) {
        found = frame->word_0;
    }
    return found;
}

}  // namespace d_0013f69c
GUEST_EXPORT_FRAMED(0x0013f69c, d_0013f69c::SparseArray__value_of_0_at_c, 0x4000);  // pushes {lr} first, as the original

// f_0013f6bc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The low byte of the value of key 1 of the sparse array at +0xc, or 0x40.
namespace d_0013f6bc {

inline constexpr guest::Function<0x00141a9c, u32(u32, u32, u32)> SparseArray__get;

struct __attribute__((packed)) SparseArrayByte0Of1Or40AtCFrame {
    u32 word_0;
};
GUEST_OFFSET(SparseArrayByte0Of1Or40AtCFrame, word_0, 0x0);
GUEST_SIZE(SparseArrayByte0Of1Or40AtCFrame, 0x4);

u32 SparseArray__byte_0_of_1_or_40_at_c(u32 sparse_array, u32 r1_unused, u32 r2_unused, u32 r3) {
    guest::StackFrameOf<SparseArrayByte0Of1Or40AtCFrame> frame;  // the original's stack frame
    frame->word_0 = r3;
    u32 found = SparseArray__get(sparse_array + 0xcu, frame.at(0).addr(), 1u);
    return found == 0 ? 0x40u : frame->word_0 & 0xffu;
}

}  // namespace d_0013f6bc
GUEST_EXPORT_FRAMED(0x0013f6bc, d_0013f6bc::SparseArray__byte_0_of_1_or_40_at_c, 0x4000);  // pushes {lr} first, as the original

// f_0013f6e4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether bits 8-15 of the value of key 1 of the sparse array at +0xc are set (true when absent).
namespace d_0013f6e4 {

inline constexpr guest::Function<0x00141a9c, u32(u32, u32, u32)> SparseArray__get;

struct __attribute__((packed)) SparseArrayByte1Of1IsSetAtCFrame {
    u32 word_0;
};
GUEST_OFFSET(SparseArrayByte1Of1IsSetAtCFrame, word_0, 0x0);
GUEST_SIZE(SparseArrayByte1Of1IsSetAtCFrame, 0x4);

u32 SparseArray__byte_1_of_1_is_set_at_c(u32 sparse_array, u32 r1_unused, u32 r2_unused, u32 r3) {
    guest::StackFrameOf<SparseArrayByte1Of1IsSetAtCFrame> frame;  // the original's stack frame
    frame->word_0 = r3;
    u32 found = SparseArray__get(sparse_array + 0xcu, frame.at(0).addr(), 1u);
    if (found == 0) {
        return 1u;
    }
    u32 r0_3 = frame->word_0 >> 8u & 0xffu;
    return r0_3 == 0 ? r0_3 : 1u;
}

}  // namespace d_0013f6e4
GUEST_EXPORT_FRAMED(0x0013f6e4, d_0013f6e4::SparseArray__byte_1_of_1_is_set_at_c, 0x4000);  // pushes {lr} first, as the original

// f_0013f718: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The sound entry's type from its kind (+0xc): 0x2201 -> 2 (wave), 0x2202 -> 3 (stream), 0x2203 -> 1 (sequence), else
// 0.
namespace d_0013f718 {

struct __attribute__((packed)) ResSoundEntry {
    u8 unknown_0[0xc];  // (not used here)
    u16 half_c;
};
GUEST_OFFSET(ResSoundEntry, half_c, 0xc);


u32 ResSoundEntry__type(gptr<ResSoundEntry> res_sound_entry) {
    u32 r0_1 = u32(res_sound_entry->half_c) - 0x2201u;
    if (r0_1 == 0) {
        return 2u;
    }
    if (r0_1 == 1u) {
        return 3u;
    }
    return r0_1 == 2u;
}

}  // namespace d_0013f718
GUEST_EXPORT(0x0013f718, d_0013f718::ResSoundEntry__type);

// f_0013f7b8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether a wave archive's file (when open) has its table block ('CWAT').
namespace d_0013f7b8 {

struct __attribute__((packed)) WaveArchiveFileReader {
    u32 word_0;
    u8 unknown_4[0x8];  // (not used here)
    u8 byte_c;
};
GUEST_OFFSET(WaveArchiveFileReader, word_0, 0x0);
GUEST_OFFSET(WaveArchiveFileReader, byte_c, 0xc);

inline constexpr guest::Function<0x001416bc, u32(u32)> SoundArchive__block_offset;

u32 WaveArchiveFileReader__has_table(gptr<WaveArchiveFileReader> wave_archive_file_reader) {
    u32 r1_1 = wave_archive_file_reader->byte_c;
    if (r1_1 == 0) {
        guest::cpu()->r[1] = r1_1;
        return 0u;
    }
    u32 r4_1 = wave_archive_file_reader->word_0;
    u32 r0_1 = SoundArchive__block_offset(r4_1);
    if (*gptr<u32>(r4_1 + r0_1) == 0x54415743u) {
        guest::cpu()->r[1] = 0x54415743u;
        return 1u;
    }
    guest::cpu()->r[1] = 0x54415743u;
    return 0u;
}

}  // namespace d_0013f7b8
GUEST_EXPORT_FRAMED(0x0013f7b8, d_0013f7b8::WaveArchiveFileReader__has_table, 0x4010);  // pushes {r4, lr} first, as the original

// f_0013f7f4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Copies the first word of a bank entry; true when found.
namespace d_0013f7f4 {

struct __attribute__((packed)) ResFile {
    u8 unknown_0[0x3c];  // (not used here)
    u32 word_3c;
};
GUEST_OFFSET(ResFile, word_3c, 0x3c);

struct __attribute__((packed)) ResFileBankInfoArg2 {
    u32 word_0;
};
GUEST_OFFSET(ResFileBankInfoArg2, word_0, 0x0);

inline constexpr guest::Function<0x001416ec, u32(u32, u32)> SoundArchive__find_kind_3;

u32 ResFile__bank_info(gptr<ResFile> res_file, u32 r1_unused, gptr<ResFileBankInfoArg2> arg2) {
    u32 r0_2 = SoundArchive__find_kind_3(res_file->word_3c, guest::cpu()->r[1]);
    if (r0_2 == 0) {
        return r0_2;
    }
    arg2->word_0 = *gptr<u32>(r0_2);
    return 1u;
}

}  // namespace d_0013f7f4
GUEST_EXPORT_FRAMED(0x0013f7f4, d_0013f7f4::ResFile__bank_info, 0x4010);  // pushes {r4, lr} first, as the original

// f_0013f81c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Copies a player entry's words and its flags; true when found.
namespace d_0013f81c {

struct __attribute__((packed)) ResFile {
    u8 unknown_0[0x3c];  // (not used here)
    u32 table;
};
GUEST_OFFSET(ResFile, table, 0x3c);

struct __attribute__((packed)) ResFilePlayerInfoArg2 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u8 byte_14;
    u8 byte_15;
    u8 byte_16;
};
GUEST_OFFSET(ResFilePlayerInfoArg2, word_0, 0x0);
GUEST_OFFSET(ResFilePlayerInfoArg2, word_4, 0x4);
GUEST_OFFSET(ResFilePlayerInfoArg2, word_8, 0x8);
GUEST_OFFSET(ResFilePlayerInfoArg2, word_c, 0xc);
GUEST_OFFSET(ResFilePlayerInfoArg2, word_10, 0x10);
GUEST_OFFSET(ResFilePlayerInfoArg2, byte_14, 0x14);
GUEST_OFFSET(ResFilePlayerInfoArg2, byte_15, 0x15);
GUEST_OFFSET(ResFilePlayerInfoArg2, byte_16, 0x16);

struct __attribute__((packed)) Entry {
    u32 word_0;
    u32 word_4;
    u8 byte_8;
};
GUEST_OFFSET(Entry, word_0, 0x0);
GUEST_OFFSET(Entry, word_4, 0x4);
GUEST_OFFSET(Entry, byte_8, 0x8);

inline constexpr guest::Function<0x00141728, u32(u32, u32, u32, u32)> HandleTable__resolve;
inline constexpr guest::Function<0x001417fc, u32(u32)> SoundInfo__byte_1;
inline constexpr guest::Function<0x00141820, u32(u32)> SoundInfo__value_1;
inline constexpr guest::Function<0x0014184c, u32(u32)> SoundInfo__flag_11;
inline constexpr guest::Function<0x00141870, u32(u32)> SoundInfo__value_2;
inline constexpr guest::Function<0x0014189c, u32(u32)> SoundInfo__priority;

u32 ResFile__player_info(gptr<ResFile> res_file, u32 r1_unused, gptr<ResFilePlayerInfoArg2> arg2) {
    u32 table = res_file->table;
    gptr<Entry> entry_2 = gptr<Entry>(HandleTable__resolve(table, guest::cpu()->r[1], arg2.addr(), guest::cpu()->r[3]));
    if (entry_2.addr() != 0) {
        arg2->word_0 = entry_2->word_0;
        arg2->word_4 = entry_2->word_4;
        arg2->word_10 = u32(entry_2->byte_8);
        u32 r0_3 = SoundInfo__byte_1(entry_2.addr());
        arg2->byte_14 = u8(r0_3);
        u32 r0_4 = SoundInfo__value_1(entry_2.addr());
        arg2->byte_15 = u8(r0_4);
        arg2->word_c = SoundInfo__priority(entry_2.addr());
        arg2->word_8 = SoundInfo__value_2(entry_2.addr());
        u32 r0_7 = SoundInfo__flag_11(entry_2.addr());
        arg2->byte_16 = u8(r0_7);
        entry_2 = gptr<Entry>(1u);
    }
    return entry_2.addr();
}

}  // namespace d_0013f81c
GUEST_EXPORT_FRAMED(0x0013f81c, d_0013f81c::ResFile__player_info, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0013f890: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Copies a wave archive entry's word, data and flag; true when found.
namespace d_0013f890 {

struct __attribute__((packed)) ResFile {
    u8 unknown_0[0x3c];  // (not used here)
    u32 word_3c;
};
GUEST_OFFSET(ResFile, word_3c, 0x3c);

struct __attribute__((packed)) ResFileWaveArchiveInfoArg2 {
    u32 word_0;
    u32 word_4;
    u8 byte_8;
};
GUEST_OFFSET(ResFileWaveArchiveInfoArg2, word_0, 0x0);
GUEST_OFFSET(ResFileWaveArchiveInfoArg2, word_4, 0x4);
GUEST_OFFSET(ResFileWaveArchiveInfoArg2, byte_8, 0x8);

struct __attribute__((packed)) Local_0013f890_r0_2 {
    u32 word_0;
    u8 byte_4;
};
GUEST_OFFSET(Local_0013f890_r0_2, word_0, 0x0);
GUEST_OFFSET(Local_0013f890_r0_2, byte_4, 0x4);

inline constexpr guest::Function<0x001417a0, u32(u32, u32, u32, u32)> SoundArchive__find_kind_5;
inline constexpr guest::Function<0x001417dc, u32(u32, u32, u32)> SoundArchive__entry_value_1;

u32 ResFile__wave_archive_info(gptr<ResFile> res_file, u32 r1_unused, gptr<ResFileWaveArchiveInfoArg2> arg2) {
    u32 r0_1 = res_file->word_3c;
    gptr<Local_0013f890_r0_2> r0_2 = gptr<Local_0013f890_r0_2>(SoundArchive__find_kind_5(r0_1, guest::cpu()->r[1], arg2.addr(), guest::cpu()->r[3]));
    if (r0_2.addr() != 0) {
        arg2->word_0 = r0_2->word_0;
        arg2->word_4 = SoundArchive__entry_value_1(r0_2.addr(), guest::cpu()->r[1], arg2.addr());
        arg2->byte_8 = r0_2->byte_4;
        r0_2 = gptr<Local_0013f890_r0_2>(1u);
    }
    return r0_2.addr();
}

}  // namespace d_0013f890
GUEST_EXPORT_FRAMED(0x0013f890, d_0013f890::ResFile__wave_archive_info, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0013f8cc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// A group file's file block (the section with kind 0x7801); 0 when it has none.
namespace d_0013f8cc {

struct __attribute__((packed)) GroupFile {
    u8 unknown_0[0x10];  // (not used here)
    u16 half_10;
};
GUEST_OFFSET(GroupFile, half_10, 0x10);


u32 GroupFile__file_block(gptr<GroupFile> group_file) {
    u32 r0 = group_file.addr();
    u32 res_1 = 0;
    u32 zf_1 = 0;
    u32 r3 = group_file->half_10;
    u32 r12 = 0x7801u;
    u32 r5 = 0u;
    u32 r2 = r0 + 0x14u;
    u32 r1 = r5;
    if (s32(r3) <= 0) {
        guest::cpu()->r[1] = r1;
        return r5;
    }
L_13f8ec:;
    if (*gptr<u16>(r2 + r1 * 0xcu) != r12) {
        goto L_13f920;
    }
    res_1 = r2 + r1 * 0xcu;
    zf_1 = res_1 == 0;
    r1 = res_1;
    if (!zf_1) {
        r1 = *gptr<u32>(r1 + 4u);
        zf_1 = r1 == 0;
    }
    if (!zf_1) {
        r5 = r1 + r0;
    }
    guest::cpu()->r[1] = r1;
    return r5;
L_13f920:;
    r1 += 1u;
    if (s32(r3) > s32(r1)) {
        guest::preempt();
        goto L_13f8ec;
    }
    guest::cpu()->r[1] = r1;
    return r5;
}

}  // namespace d_0013f8cc
GUEST_EXPORT_FRAMED(0x0013f8cc, d_0013f8cc::GroupFile__file_block, 0x30);  // pushes {r4, r5} first, as the original

// f_0013f934: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// A group file's info block (the section with kind 0x7800); 0 when it has none.
namespace d_0013f934 {

struct __attribute__((packed)) GroupFile {
    u8 unknown_0[0x10];  // (not used here)
    u16 half_10;
};
GUEST_OFFSET(GroupFile, half_10, 0x10);


u32 GroupFile__info_block(gptr<GroupFile> group_file) {
    u32 r0 = group_file.addr();
    u32 r0_1 = 0;
    u32 r12 = group_file->half_10;
    u32 r3 = r0 + 0x14u;
    u32 r5 = r0;
    r0 = 0u;
    u32 r2 = 0x7800u;
    u32 i = r0;
    if (s32(r12) <= 0) {
        guest::cpu()->r[1] = i;
        return r0;
    }
    do {
        if (*gptr<u16>(r3 + i * 0xcu) == r2) {
            u32 res_1 = r3 + i * 0xcu;
            u32 zf_1 = res_1 == 0;
            u32 r1_1 = res_1;
            if (!zf_1) {
                r1_1 = *gptr<u32>(r1_1 + 4u);
                zf_1 = r1_1 == 0;
            }
            if (zf_1) {
                guest::cpu()->r[1] = r1_1;
                return r0;
            } else {
                r0_1 = r1_1 + r5;
            }
            guest::cpu()->r[1] = r1_1;
            return r0_1;
        }
        i += 1u;
        guest::preempt();
    } while (s32(r12) > s32(i));
    guest::cpu()->r[1] = i;
    return r0;
}

}  // namespace d_0013f934
GUEST_EXPORT_FRAMED(0x0013f934, d_0013f934::GroupFile__info_block, 0x30);  // pushes {r4, r5} first, as the original

// f_0013f9a0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// A group file's extended info block (the section with kind 0x7802); 0 when it has none.
namespace d_0013f9a0 {

struct __attribute__((packed)) GroupFile {
    u8 unknown_0[0x10];  // (not used here)
    u16 half_10;
};
GUEST_OFFSET(GroupFile, half_10, 0x10);


u32 GroupFile__infox_block(gptr<GroupFile> group_file) {
    u32 r0 = group_file.addr();
    u32 res_1 = 0;
    u32 zf_1 = 0;
    u32 r3 = group_file->half_10;
    u32 r12 = 0x7802u;
    u32 r5 = 0u;
    u32 r2 = r0 + 0x14u;
    u32 r1 = r5;
    if (s32(r3) <= 0) {
        guest::cpu()->r[1] = r1;
        return r5;
    }
L_13f9c0:;
    if (*gptr<u16>(r2 + r1 * 0xcu) != r12) {
        goto L_13f9f4;
    }
    res_1 = r2 + r1 * 0xcu;
    zf_1 = res_1 == 0;
    r1 = res_1;
    if (!zf_1) {
        r1 = *gptr<u32>(r1 + 4u);
        zf_1 = r1 == 0;
    }
    if (!zf_1) {
        r5 = r1 + r0;
    }
    guest::cpu()->r[1] = r1;
    return r5;
L_13f9f4:;
    r1 += 1u;
    if (s32(r3) > s32(r1)) {
        guest::preempt();
        goto L_13f9c0;
    }
    guest::cpu()->r[1] = r1;
    return r5;
}

}  // namespace d_0013f9a0
GUEST_EXPORT_FRAMED(0x0013f9a0, d_0013f9a0::GroupFile__infox_block, 0x30);  // pushes {r4, r5} first, as the original

// f_0013fa08: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Nothing.
namespace d_0013fa08 {


void do_nothing_0013fa08(u32 r0) {
}

}  // namespace d_0013fa08
GUEST_EXPORT(0x0013fa08, d_0013fa08::do_nothing_0013fa08);

// f_0013fad4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The handler for an integer division by zero: nothing.
namespace d_0013fad4 {


void division_by_zero_handler() {
}

}  // namespace d_0013fad4
GUEST_EXPORT(0x0013fad4, d_0013fad4::division_by_zero_handler);

// f_0013fe18: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Calls 001429f4 with the required handle at 0x974ef8.
namespace d_0013fe18 {

inline constexpr guest::Function<0x0013dee0, u32(u32, u32, u32, u32)> required_handle_974ef8;
inline constexpr guest::Function<0x001429f4, u32(u32, u32)> ipc_command_863;

struct __attribute__((packed)) Call1429f4WithHandleFrame {
    u32 word_0;
};
GUEST_OFFSET(Call1429f4WithHandleFrame, word_0, 0x0);
GUEST_SIZE(Call1429f4WithHandleFrame, 0x4);

u32 call_1429f4_with_handle(u32 r0, u32 r1, u32 r2_unused, u32 r3) {
    guest::StackFrameOf<Call1429f4WithHandleFrame> frame;  // the original's stack frame
    frame->word_0 = r3;
    frame->word_0 = required_handle_974ef8(r0, r1, guest::cpu()->r[2], r3);
    return ipc_command_863(frame.at(0).addr(), r0);
}

}  // namespace d_0013fe18
GUEST_EXPORT_FRAMED(0x0013fe18, d_0013fe18::call_1429f4_with_handle, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_0013fefc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Asks a handler (arg 1) about an object (arg 0) through its virtual 3; an error result when either is null.
namespace d_0013fefc {

struct __attribute__((packed)) QueryHandleArg1 {
    u32 word_0;
};
GUEST_OFFSET(QueryHandleArg1, word_0, 0x0);


u32 query_handle(u32 r0, gptr<QueryHandleArg1> arg1) {
    u32 zf_1 = r0 == 0;
    if (!zf_1) {
        zf_1 = arg1.addr() == 0;
    }
    if (zf_1) {
        return 0xe0e046bcu;
    }
    u32 r3_1 = *gptr<u32>(arg1->word_0 + 0xcu);
    // virtual function 3 of arg1.addr()
    return guest::call_address<u32>(r3_1, arg1.addr(), r0, r0, r3_1);
}

}  // namespace d_0013fefc
GUEST_EXPORT(0x0013fefc, d_0013fefc::query_handle);

// f_0013ff94: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Calls the service handler for the command (+0xa0: table in its low nibble, entry above), or returns the not-found
// result.
namespace d_0013ff94 {

struct __attribute__((packed)) ServiceTable {
    u8 unknown_0[0xa0];  // (not used here)
    u32 word_a0;
    u8 unknown_a4[0x24];  // (not used here)
    u32 word_c8;
    u32 word_cc;
};
GUEST_OFFSET(ServiceTable, word_a0, 0xa0);
GUEST_OFFSET(ServiceTable, word_c8, 0xc8);
GUEST_OFFSET(ServiceTable, word_cc, 0xcc);

struct __attribute__((packed)) Local_0013ff94_r0_2 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0013ff94_r0_2, word_0, 0x0);
GUEST_OFFSET(Local_0013ff94_r0_2, word_4, 0x4);


u32 ServiceTable__dispatch(gptr<ServiceTable> service_table, u32 r1, u32 r2) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 r1_1 = service_table->word_a0;
    u32 r3_1 = service_table->word_c8;
    u32 r0_1 = r1_1 & 0xfu;
    u32 r1_2 = r1_1 >> 4;
    if (s32(service_table->word_cc) > s32(r0_1)) {
        gptr<Local_0013ff94_r0_2> r0_2 = gptr<Local_0013ff94_r0_2>(r3_1 + r0_1 * 0xcu);
        if (r0_2->word_4 > r1_2) {
            u32 r3_2 = r0_2->word_0 + r1_2;
            if (r3_2 != 0) {
                frame.release();
                return guest::call_address<u32>(r3_2, r1, r2, r2, r3_2);
            }
        }
    }
    guest::cpu()->r[1] = r1_2;
    return 0xd8e12c04u;
}

}  // namespace d_0013ff94
GUEST_EXPORT(0x0013ff94, d_0013ff94::ServiceTable__dispatch);
