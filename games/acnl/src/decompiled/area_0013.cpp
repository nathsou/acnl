// Functions decompiled by tools/decomp (docs/decomp.md), each proved equal to the recompiled original (prove-cpp). The
// names come from games/acnl/names (tools/decomp/names.py); the others are generated (d_<address>::f_<address>,
// Object_<address>_<argument>, word_<offset>) and still to be chosen.
#include "guest/guest.hpp"
#include "recovered/structs.hpp"

#include <bit>

using guest::gptr;

// f_00130054: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00130054 {

inline constexpr u32 global_0097d7e0_address = 0x0097d7e0u;
inline constexpr guest::Function<0x00128c0c, u32(u32, u32, u32, u32)> call_00128c0c;

u32 f_00130054() {
    return call_00128c0c(global_0097d7e0_address, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_00130054
GUEST_EXPORT(0x00130054, d_00130054::f_00130054);

// f_00130060: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00130060 {

inline constexpr u32 global_0097d7e0_address = 0x0097d7e0u;
inline constexpr guest::Function<0x0012ef20, u32(u32, u32, u32, u32)> LightEvent__wait;

u32 wait_on_main_event() {
    return LightEvent__wait(global_0097d7e0_address, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_00130060
GUEST_EXPORT(0x00130060, d_00130060::wait_on_main_event);

// f_0013010c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0013010c {

inline constexpr u32 global_0097d7e0_address = 0x0097d7e0u;
inline constexpr guest::Function<0x0012efe8, u32(u32, u32)> LightEvent__try_wait;

u32 try_wait_on_main_event() {
    return LightEvent__try_wait(global_0097d7e0_address, guest::cpu()->r[1]);
}

}  // namespace d_0013010c
GUEST_EXPORT(0x0013010c, d_0013010c::try_wait_on_main_event);

// f_001306e0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001306e0 {

inline guest::global<u8, 0x0097d800> global_0097d800;
inline guest::global<u8, 0x0097d801> global_0097d801;
inline constexpr guest::Function<0x00130750, u32(u32, u32)> call_00130750;
inline constexpr guest::Function<0x0013078c, u32(u32, u32)> call_0013078c;
inline constexpr guest::Function<0x001307c8, u32(u32, u32, u32, u32)> call_001307c8;
inline constexpr guest::Function<0x00136598, u32(u32, u32)> call_00136598;

struct __attribute__((packed)) Frame_001306e0 {
    u8 byte_0;
    u8 unknown_1[0x3];  // (not read or written by name)
    u8 byte_4;
    u8 unknown_5[0x3];  // (not read or written by name)
};
GUEST_OFFSET(Frame_001306e0, byte_0, 0x0);
GUEST_OFFSET(Frame_001306e0, byte_4, 0x4);
GUEST_SIZE(Frame_001306e0, 0x8);

u32 f_001306e0(u32 r0_unused, u32 r1) {
    guest::StackFrameOf<Frame_001306e0> frame;  // the original's stack frame
    u32 r0_1 = *global_0097d801;
    if (r0_1 == 0) {
        return r0_1;
    }
    u32 r0_3 = call_001307c8(frame.at(0).addr(), r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r1_1 = r0_3 & 0x80000000u;  // (from the original)
    if (s32(r1_1) < 0) {
        guest::cpu()->r[1] = r1_1;
        return r0_3;
    }
    u32 r0_5 = call_00130750(frame.at(4).addr(), r1_1);
    u32 r1_2 = r0_5 & 0x80000000u;  // (from the original)
    if (s32(r1_2) < 0) {
        guest::cpu()->r[1] = r1_2;
        return r0_5;
    }
    u32 r1_3 = frame->byte_4;
    *global_0097d800 = u8(u32(frame->byte_0) | r1_3);
    u32 r0_6 = call_00136598(0u, r1_3);
    u32 r1_4 = 0xc9405001u;  // (from the original)
    if (r0_6 == r1_4) {
        r0_6 = call_0013078c(0u, r1_4);
        r1_4 = guest::cpu()->r[1];
    }
    guest::cpu()->r[1] = r1_4;
    return r0_6;
}

}  // namespace d_001306e0
GUEST_EXPORT_FRAMED(0x001306e0, d_001306e0::f_001306e0, 0x4010);  // pushes {r4, lr} first, as the original

// f_00130c70: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00130c70 {

inline constexpr u32 vtable_nw__lyt__Layout = 0x00901b9cu;

void nw__lyt__Layout__Layout(gptr<nw__lyt__Layout> layout) {
    u32 r3_1 = layout.addr() + 8u;
    layout->word_0 = vtable_nw__lyt__Layout;
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
namespace d_00130d6c {

inline constexpr u32 vtable_nw__snd__SoundArchivePlayer__SequenceNoteOnCallback = 0x00901ef0u;
inline constexpr u32 vtable_nw__snd__SoundArchivePlayer = 0x00901f04u;
inline constexpr u32 vtable_nw__snd__internal__LoaderManager_nw__snd__internal__driver__WaveSoundLoader_ = 0x00902048u;
inline constexpr u32 vtable_nw__snd__internal__LoaderManager_nw__snd__internal__driver__SequenceSoundLoader_ = 0x00902060u;
inline constexpr u32 vtable_nw__snd__internal__driver__MmlSequenceTrackAllocator = 0x00902424u;
inline constexpr u32 vtable_nw__snd__internal__driver__MmlParser = 0x00902454u;

void nw__snd__SoundArchivePlayer__SoundArchivePlayer(gptr<nw__snd__SoundArchivePlayer> sound_archive_player) {
    sound_archive_player->word_0 = vtable_nw__snd__SoundArchivePlayer;
    sound_archive_player->word_4 = 0;
    sound_archive_player->word_8 = vtable_nw__snd__SoundArchivePlayer__SequenceNoteOnCallback;
    sound_archive_player->word_c = sound_archive_player.addr();
    sound_archive_player->word_10 = 0;
    sound_archive_player->word_14 = 0;
    sound_archive_player->word_18 = 0;
    sound_archive_player->word_1c = 0;
    sound_archive_player->word_20 = 0;
    u32 r12_1 = sound_archive_player.addr() + 0x2cu;  // (from the original)
    sound_archive_player->word_24 = 0;
    sound_archive_player->word_28 = 0;
    sound_archive_player->word_2c = r12_1;
    sound_archive_player->word_30 = r12_1;
    u32 r3_1 = sound_archive_player.addr() + 0x38u;  // (from the original)
    sound_archive_player->word_34 = 0;
    sound_archive_player->word_38 = r3_1;
    u32 r12_2 = sound_archive_player.addr() + 0x58u;  // (from the original)
    sound_archive_player->word_44 = 0;
    sound_archive_player->word_3c = r3_1;
    sound_archive_player->word_48 = 0;
    sound_archive_player->word_40 = vtable_nw__snd__internal__LoaderManager_nw__snd__internal__driver__SequenceSoundLoader_;
    sound_archive_player->word_4c = 0;
    sound_archive_player->word_50 = 0;
    sound_archive_player->word_54 = 0;
    sound_archive_player->word_58 = r12_2;
    sound_archive_player->word_5c = r12_2;
    u32 r3_2 = sound_archive_player.addr() + 0x64u;  // (from the original)
    sound_archive_player->word_60 = 0;
    sound_archive_player->word_64 = r3_2;
    u32 r12_3 = sound_archive_player.addr() + 0x78u;  // (from the original)
    sound_archive_player->word_6c = 0;
    sound_archive_player->word_68 = r3_2;
    sound_archive_player->word_70 = 0;
    sound_archive_player->word_74 = 0;
    sound_archive_player->word_78 = r12_3;
    sound_archive_player->word_7c = r12_3;
    u32 r3_3 = sound_archive_player.addr() + 0x84u;  // (from the original)
    sound_archive_player->word_80 = 0;
    sound_archive_player->word_84 = r3_3;
    u32 r12_4 = sound_archive_player.addr() + 0xa4u;  // (from the original)
    sound_archive_player->word_90 = 0;
    sound_archive_player->word_88 = r3_3;
    sound_archive_player->word_94 = 0;
    sound_archive_player->word_8c = vtable_nw__snd__internal__LoaderManager_nw__snd__internal__driver__WaveSoundLoader_;
    sound_archive_player->word_98 = 0;
    sound_archive_player->word_9c = 0;
    sound_archive_player->word_a0 = 0;
    sound_archive_player->word_a4 = r12_4;
    sound_archive_player->word_a8 = r12_4;
    u32 r3_4 = sound_archive_player.addr() + 0xb0u;  // (from the original)
    sound_archive_player->word_ac = 0;
    sound_archive_player->word_b0 = r3_4;
    sound_archive_player->word_b8 = 0;
    sound_archive_player->word_b4 = r3_4;
    u32 r12_5 = sound_archive_player.addr() + 0xc4u;  // (from the original)
    sound_archive_player->word_bc = 0;
    sound_archive_player->word_c0 = 0;
    sound_archive_player->word_c4 = r12_5;
    sound_archive_player->word_c8 = r12_5;
    u32 r2_1 = sound_archive_player.addr() + 0xd0u;  // (from the original)
    sound_archive_player->word_cc = 0;
    sound_archive_player->word_d0 = r2_1;
    sound_archive_player->word_f0 = 0;
    sound_archive_player->word_d4 = r2_1;
    sound_archive_player->word_f8 = sound_archive_player.addr() + 0x100u;  // (from the original)
    sound_archive_player->word_fc = 0;
    sound_archive_player->word_100 = vtable_nw__snd__internal__driver__MmlParser;
    sound_archive_player->word_f4 = vtable_nw__snd__internal__driver__MmlSequenceTrackAllocator;
    sound_archive_player->word_104 = 0;
    sound_archive_player->word_108 = 0;
    sound_archive_player->word_10c = 0;
    sound_archive_player->word_110 = 0;
    sound_archive_player->word_114 = 0;
}

}  // namespace d_00130d6c
GUEST_EXPORT(0x00130d6c, d_00130d6c::nw__snd__SoundArchivePlayer__SoundArchivePlayer);

// f_0013121c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0013121c {

inline constexpr u32 vtable_SoundFader_rec = 0x008eb474u;
inline constexpr u32 vtable_SoundMelodyPlayerOneSeqTimeTone = 0x008f7210u;
inline constexpr guest::Function<0x00135134, u32(u32)> SoundMelodyPlayerOneSeqBase__SoundMelodyPlayerOneSeqBase;

u32 SoundMelodyPlayerOneSeqTimeTone__SoundMelodyPlayerOneSeqTimeTone(gptr<SoundMelodyPlayerOneSeqTimeTone> sound_melody_player_one_seq_time_tone) {
    SoundMelodyPlayerOneSeqBase__SoundMelodyPlayerOneSeqBase(sound_melody_player_one_seq_time_tone.addr());
    float S0_1 = 0.0f;
    sound_melody_player_one_seq_time_tone->word_0 = vtable_SoundMelodyPlayerOneSeqTimeTone;
    sound_melody_player_one_seq_time_tone->byte_12 = 0;
    sound_melody_player_one_seq_time_tone->byte_13 = 0;
    sound_melody_player_one_seq_time_tone->byte_14 = 0;
    sound_melody_player_one_seq_time_tone->word_18 = vtable_SoundFader_rec;
    sound_melody_player_one_seq_time_tone->float_1c = S0_1;
    sound_melody_player_one_seq_time_tone->float_20 = S0_1;
    sound_melody_player_one_seq_time_tone->float_24 = S0_1;
    u32 r3_1 = ~0u;
    sound_melody_player_one_seq_time_tone->word_2c = vtable_SoundFader_rec;
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
inline constexpr guest::Function<0x0013bb80, u32(u32)> call_0013bb80;
inline constexpr guest::Function<0x0013bc00, u32(u32)> destroy_load_split;

u32 destroy_font_sets(u32 r0) {
    u32 last = r0 + 0x7e8u;  // (from the original)
    nw__font__ResFont__destructor(last, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    destroy_load_split(last - 0x164u);  // (from the original)
    call_0013bb80(last - 0x174u);  // (from the original)
    nw__font__ResFont__destructor(last - 0x198u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    destroy_load_split(last - 0x2fcu);  // (from the original)
    call_0013bb80(last - 0x30cu);  // (from the original)
    nw__font__ResFont__destructor(last - 0x330u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    destroy_load_split(last - 0x494u);  // (from the original)
    call_0013bb80(last - 0x4a4u);  // (from the original)
    nw__font__ResFont__destructor(last - 0x4c8u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    destroy_load_split(last - 0x62cu);  // (from the original)
    call_0013bb80(last - 0x63cu);  // (from the original)
    nw__font__ResFont__destructor(last - 0x660u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    destroy_load_split(last - 0x7c4u);  // (from the original)
    call_0013bb80(last - 0x7c4u);  // (from the original)
    return last - 0x7e8u;  // (from the original)
}

}  // namespace d_00131580
GUEST_EXPORT_FRAMED(0x00131580, d_00131580::destroy_font_sets, 0x4010);  // pushes {r4, lr} first, as the original

// f_001316b8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001316b8 {

struct __attribute__((packed)) Object_001316b8_0 {
    u32 word_0;
    u8 unknown_4[0x48];  // (not used here)
    u8 byte_4c;
};
GUEST_OFFSET(Object_001316b8_0, word_0, 0x0);
GUEST_OFFSET(Object_001316b8_0, byte_4c, 0x4c);


u32 f_001316b8(gptr<Object_001316b8_0> arg0) {
    if (arg0->byte_4c == 0) {
        return 0u;
    }
    u32 r2_1 = *gptr<u32>(arg0->word_0 + 0x28u);  // (from the original)
    // virtual function 10 of arg0.addr()
    return guest::call_address<u32>(r2_1, arg0.addr(), guest::cpu()->r[1], r2_1, guest::cpu()->r[3]);
}

}  // namespace d_001316b8
GUEST_EXPORT(0x001316b8, d_001316b8::f_001316b8);

// f_001316d8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
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
    u32 word_0;
    u8 unknown_4[0xc];  // (not used here)
    u32 word_10;
    u32 word_14;
};
GUEST_OFFSET(Local_001316d8_r0_5, word_0, 0x0);
GUEST_OFFSET(Local_001316d8_r0_5, word_10, 0x10);
GUEST_OFFSET(Local_001316d8_r0_5, word_14, 0x14);

struct __attribute__((packed)) Local_001316d8_r0_6 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_001316d8_r0_6, word_0, 0x0);
GUEST_OFFSET(Local_001316d8_r0_6, word_4, 0x4);
GUEST_OFFSET(Local_001316d8_r0_6, word_8, 0x8);

struct __attribute__((packed)) Local_001316d8_r1_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_001316d8_r1_1, word_0, 0x0);
GUEST_OFFSET(Local_001316d8_r1_1, word_4, 0x4);

inline constexpr u32 vtable_sead__SafeStringBase_char_ = 0x009047f8u;
inline constexpr u32 vtable_sead__FixedSafeString_32_ = 0x009048ecu;
inline constexpr u32 vtable_sead__ResourceFactory = 0x00904a10u;
inline constexpr u32 vtable_sead__FixedSafeStringBase_char__32_ = 0x00905120u;
inline constexpr u32 vtable_sead__DirectResourceFactory_sead__DirectResource_ = 0x00905460u;
inline constexpr u32 vtable_sead__BufferedSafeStringBase_char_ = 0x0090558cu;
inline constexpr u32 global_00975338_address = 0x00975338u;
inline guest::global<u8, 0x008c9f1c> empty_string;
inline guest::global<u32, 0x00975338> global_00975338;
inline constexpr guest::Function<0x00132174, u32(u32, u32)> sead__IDisposer__IDisposer_00132174;
inline constexpr guest::Function<0x00137c78, u32(u32, u32, u32, u32)> call_00137c78;
inline constexpr guest::Function<0x00138fec, u32(u32, u32, u32, u32)> find_owner_in_heap;
inline constexpr guest::Function<0x002fd108, u32(u32, u32, u32)> allocate_from_heap_002fd108;

struct __attribute__((packed)) Frame_001316d8 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Frame_001316d8, word_0, 0x0);
GUEST_OFFSET(Frame_001316d8, word_4, 0x4);
GUEST_SIZE(Frame_001316d8, 0x8);

u32 sead__ResourceFactory__ResourceFactory_001316d8(gptr<sead__ResourceFactory> resource_factory, u32 r1_unused, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_001316d8> frame;  // the original's stack frame
    u32 r0_1 = resource_factory.addr() + 0x10u;  // (from the original)
    resource_factory->word_14 = r0_1;
    resource_factory->word_18 = 0;
    resource_factory->word_10 = r0_1;
    u32 r0_2 = resource_factory.addr() + 0x1cu;  // (from the original)
    resource_factory->word_20 = r0_2;
    resource_factory->word_24 = 0;
    resource_factory->word_1c = r0_2;
    resource_factory->word_28 = 0;
    resource_factory->word_2c = 0;
    u32 r0_3 = *global_00975338;
    if (r0_3 != 0) {
        u32 r0_4 = find_owner_in_heap(r0_3, resource_factory.addr(), r2, r3);
        gptr<Local_001316d8_r0_5> block = gptr<Local_001316d8_r0_5>(allocate_from_heap_002fd108(0x4cu, r0_4, 4u));  // (from the original)
        gptr<Local_001316d8_r1_1> r1_1 = gptr<Local_001316d8_r1_1>(block.addr() + 0x18u);  // (from the original)
        block->word_10 = 0;
        block->word_14 = 0;
        r1_1->word_0 = block.addr();
        r1_1->word_4 = 0;
        sead__IDisposer__IDisposer_00132174(block.addr(), r1_1.addr());
        block->word_0 = vtable_sead__ResourceFactory;
        gptr<Local_001316d8_r0_6> r0_6 = gptr<Local_001316d8_r0_6>(block.addr() + 0x20u);  // (from the original)
        r0_6->word_4 = r0_6.addr() + 0xcu;  // (from the original)
        r0_6->word_0 = vtable_sead__BufferedSafeStringBase_char_;
        r0_6->word_8 = 0x20;  // (from the original)
        u32 r6_1 = *empty_string;
        *gptr<u8>(r0_6->word_4 + 0x1fu) = u8(r6_1);  // (from the original)
        r0_6->word_0 = vtable_sead__FixedSafeStringBase_char__32_;
        *gptr<u8>(r0_6->word_4) = *empty_string;
        r0_6->word_0 = vtable_sead__FixedSafeString_32_;
        block->word_0 = vtable_sead__DirectResourceFactory_sead__DirectResource_;
        resource_factory->word_28 = block.addr();
        resource_factory->word_2c = block.addr();
        frame->word_4 = 0x8ae110;  // (from the original)
        frame->word_0 = vtable_sead__SafeStringBase_char_;
        call_00137c78(resource_factory.addr(), resource_factory->word_2c, frame.at(0).addr(), vtable_sead__SafeStringBase_char_);
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
namespace d_001318c0 {

inline constexpr u32 vtable_sead__AudioResetter = 0x009041f4u;

void sead__AudioResetter__AudioResetter(gptr<sead__AudioResetter> audio_resetter) {
    audio_resetter->word_0 = vtable_sead__AudioResetter;
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

inline guest::global<u32, 0x009753d0> global_009753d0;
inline constexpr guest::Function<0x00135740, u32(u32, u32)> lock_member_lock;
inline constexpr guest::Function<0x00138c78, u32(u32, u32, u32, u32)> ThreadLocal__get;

u32 ThreadLock__lock(gptr<ThreadLock> lock, u32 r1) {
    u32 depth = 0;
    u32 thread = ThreadLocal__get(*global_009753d0 + 0x40u, r1, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
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
namespace d_00131b3c {

struct __attribute__((packed)) Object_00131b3c_0 {
    u32 word_0;
    u32 word_4;
    u8 unknown_8[0x20];  // (not used here)
    u8 byte_28;
};
GUEST_OFFSET(Object_00131b3c_0, word_0, 0x0);
GUEST_OFFSET(Object_00131b3c_0, word_4, 0x4);
GUEST_OFFSET(Object_00131b3c_0, byte_28, 0x28);

inline constexpr guest::Function<0x00137c60, u32(u32)> OffsetList__initialize;
inline constexpr guest::Function<0x00137e9c, u32(u32)> sead__AudioFxMemoryMgrCtr__AudioFxMemoryMgrCtr;
inline constexpr guest::Function<0x001391d8, u32(u32, u32, u32, u32)> allocate;

u32 f_00131b3c(gptr<Object_00131b3c_0> arg0, u32 r1_unused, u32 r2, u32 r3) {
    u32 r0 = arg0.addr();
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = 0u;
    arg0->word_0 = r6;
    arg0->word_4 = r6;
    u32 r4 = r0;
    arg0->byte_28 = u8(r6);
    u32 block = allocate(0x10u, r5, r2, r3);  // (from the original)
    if (block != 0) {
        block = OffsetList__initialize(block);
    }
    arg0->word_0 = block;
    u32 block_2 = allocate(0xcu, r5, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    if (block_2 != 0) {
        block_2 = sead__AudioFxMemoryMgrCtr__AudioFxMemoryMgrCtr(block_2);
    }
    arg0->word_4 = block_2;
    r0 = 0u;
    do {
        r2 = 0u;
        r3 = r4 + 8u + r0 * 0xcu;  // (from the original)
        do {
            u32 r1_3 = r4 + 8u;
            if (r0 < 2u) {
                r1_3 = r3;
            }
            if (r2 < 3u) {
                r1_3 += (r2 << 2);
            }
            r2 += 1u;
            *gptr<u32>(r1_3) = r6;
            guest::preempt();
        } while (s32(r2) < 3);
        u32 r1_4 = r4 + 0x20u;  // (from the original)
        if (r0 < 2u) {
            r1_4 += (r0 << 2);
        }
        r0 += 1u;
        *gptr<u32>(r1_4) = r6;
        guest::preempt();
    } while (s32(r0) < 2);
    return r4;
}

}  // namespace d_00131b3c
GUEST_EXPORT_FRAMED(0x00131b3c, d_00131b3c::f_00131b3c, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_00131be0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00131be0 {

inline constexpr u32 vtable_sead__AudioSoundDataMgrCtr = 0x009052d0u;
inline constexpr u32 vtable_sead__AudioSoundDataMgrCtr_at_c = 0x009052f0u;
inline constexpr guest::Function<0x00136e0c, u32(u32)> nw__snd__internal__driver__DisposeCallback__DisposeCallback_00136e0c;

u32 sead__AudioSoundDataMgrCtr__AudioSoundDataMgrCtr(gptr<sead__AudioSoundDataMgrCtr> audio_sound_data_mgr_ctr) {
    nw__snd__internal__driver__DisposeCallback__DisposeCallback_00136e0c(audio_sound_data_mgr_ctr.addr());
    audio_sound_data_mgr_ctr->word_220 = 0;
    audio_sound_data_mgr_ctr->word_0 = vtable_sead__AudioSoundDataMgrCtr;
    audio_sound_data_mgr_ctr->word_c = vtable_sead__AudioSoundDataMgrCtr_at_c;
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

struct __attribute__((packed)) Object_00131c14_0 {
    u8 unknown_0[0x70];  // (not used here)
    u16 half_70;
};
GUEST_OFFSET(Object_00131c14_0, half_70, 0x70);

struct __attribute__((packed)) Local_00131c14_r5_1 {
    u8 unknown_0[0x8];  // (not used here)
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Local_00131c14_r5_1, word_8, 0x8);
GUEST_OFFSET(Local_00131c14_r5_1, word_c, 0xc);

inline constexpr u32 global_00ae53d4_address = 0x00ae53d4u;
inline constexpr guest::Function<0x00135740, u32(u32, u32, u32, u32)> lock_member_lock;
inline constexpr guest::Function<0x00137e84, u32(u32, u32)> unlock_member_lock;
inline constexpr guest::Function<0x00138560, u32(u32, u32)> insert_node_after_00138560;

void insert_into_list_28_locked(gptr<Object_00131c14_0> owner, u32 index) {
    guest::StackFrame frame(0x18);  // the original's stack frame
    lock_member_lock(global_00ae53d4_address, index, guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r4_1 = 0u;
    u32 r1_1 = u32(owner->half_70) & 1u;
    if (r1_1 != 0) {
        r1_1 = 1u;
    }
    if (r1_1 != 0) {
        r4_1 = owner.addr() + 0x54u;  // (from the original)
        lock_member_lock(owner.addr() + 0x54u, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    }
    gptr<Local_00131c14_r5_1> r5_1 = gptr<Local_00131c14_r5_1>(owner.addr() + 0x28u);  // (from the original)
    insert_node_after_00138560(r5_1.addr(), r5_1->word_c + index);
    r5_1->word_8 = r5_1->word_8 + 1u;
    if (r4_1 != 0) {
        unlock_member_lock(r4_1, guest::cpu()->r[1]);
    }
    frame.release();
    unlock_member_lock(global_00ae53d4_address, guest::cpu()->r[1]);
    return;
}

}  // namespace d_00131c14
GUEST_EXPORT(0x00131c14, d_00131c14::insert_into_list_28_locked);

// f_00131e5c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Builds an expandable heap in the memory at `start` (its size rounded up to 4 bytes; null when too small for the
// header).
namespace d_00131e5c {

inline constexpr guest::Function<0x00131dc4, u32(u32, u32, u32, u32)> call_00131dc4;
inline constexpr guest::Function<0x00131eb8, u32(u32, u32, u32, u32)> sead__ExpHeap__ExpHeap;

struct __attribute__((packed)) Frame_00131e5c {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u8 unknown_c[0x4];  // (not read or written by name)
};
GUEST_OFFSET(Frame_00131e5c, word_0, 0x0);
GUEST_OFFSET(Frame_00131e5c, word_4, 0x4);
GUEST_OFFSET(Frame_00131e5c, word_8, 0x8);
GUEST_SIZE(Frame_00131e5c, 0x10);

u32 sead__ExpHeap__create_at(u32 start, u32 size, u32 name, u32 r3) {
    guest::StackFrameOf<Frame_00131e5c> frame;  // the original's stack frame
    u32 heap = 0;
    u32 aligned_size = size + 3u & ~3u;
    if (aligned_size <= 0xa8u) {  // (from the original)
        return 0u;
    }
    if (start == 0) {
        heap = 0u;
    } else {
        frame->word_0 = aligned_size;
        frame->word_4 = 1;
        frame->word_8 = r3;
        u32 constructed = sead__ExpHeap__ExpHeap(start, name, 0u, start);
        aligned_size = guest::cpu()->r[1];
        name = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        heap = constructed;
    }
    call_00131dc4(heap, aligned_size, name, r3);
    return heap;
}

}  // namespace d_00131e5c
GUEST_EXPORT_FRAMED(0x00131e5c, d_00131e5c::sead__ExpHeap__create_at, 0x4010);  // pushes {r4, lr} first, as the original

// f_00131eb8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
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

struct __attribute__((packed)) Local_00131eb8_r0_1 {
    u32 word_0;
    u8 unknown_4[0x14];  // (not used here)
    u32 word_18;
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
GUEST_OFFSET(Local_00131eb8_r0_1, word_0, 0x0);
GUEST_OFFSET(Local_00131eb8_r0_1, word_18, 0x18);
GUEST_OFFSET(Local_00131eb8_r0_1, half_70, 0x70);
GUEST_OFFSET(Local_00131eb8_r0_1, byte_74, 0x74);
GUEST_OFFSET(Local_00131eb8_r0_1, word_84, 0x84);
GUEST_OFFSET(Local_00131eb8_r0_1, word_88, 0x88);
GUEST_OFFSET(Local_00131eb8_r0_1, word_94, 0x94);

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

struct __attribute__((packed)) Frame_00131eb8 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Frame_00131eb8, word_0, 0x0);
GUEST_OFFSET(Frame_00131eb8, word_4, 0x4);
GUEST_OFFSET(Frame_00131eb8, word_8, 0x8);
GUEST_SIZE(Frame_00131eb8, 0xc);

u32 sead__ExpHeap__ExpHeap(u32 r0, u32 r1, u32 r2) {
    guest::StackFrameOf<Frame_00131eb8> frame;  // the original's stack frame
    gptr<Local_00131eb8_ea_1> ea_1 = gptr<Local_00131eb8_ea_1>(frame.at(0x18).addr());  // (from the original)
    u32 r4_1 = ea_1->word_0;
    u32 r5_1 = ea_1->word_4;
    u32 r12_1 = ea_1->word_8;
    frame->word_0 = r4_1;
    frame->word_4 = r5_1;
    frame->word_8 = r12_1;
    gptr<Local_00131eb8_r0_1> heap = gptr<Local_00131eb8_r0_1>(sead__SafeStringBase_char___SafeStringBase_00131c8c(r0, r1, r2, guest::cpu()->r[3]));
    u32 r5_2 = 0u;
    heap->word_0 = vtable_sead__ExpHeap;
    heap->word_18 = vtable_sead__ExpHeap_at_18;
    heap->byte_74 = u8(r5_2);
    gptr<Local_00131eb8_r0_2> r0_2 = gptr<Local_00131eb8_r0_2>(heap.addr() + 0x78u);  // (from the original)
    u32 r1_1 = ~0u;
    gptr<Local_00131eb8_ea_2> ea_2 = gptr<Local_00131eb8_ea_2>(r0_2.addr() + 4u);
    ea_2->word_0 = r0_2.addr();
    ea_2->word_4 = r5_2;
    r0_2->word_0 = r0_2.addr();
    r0_2->word_c = r1_1;
    u32 r0_3 = heap.addr() + 0x88u;  // (from the original)
    gptr<Local_00131eb8_ea_3> ea_3 = gptr<Local_00131eb8_ea_3>(heap.addr() + 0x8cu);  // (from the original)
    ea_3->word_0 = r0_3;
    ea_3->word_4 = r5_2;
    heap->word_88 = r0_3;
    heap->word_94 = r1_1;
    u32 r1_2 = heap.addr() + 0x54u;  // (from the original)
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
namespace d_00131f64 {

struct __attribute__((packed)) sead__SafeStringBase_char_ {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(sead__SafeStringBase_char_, word_0, 0x0);
GUEST_OFFSET(sead__SafeStringBase_char_, word_4, 0x4);

inline constexpr u32 vtable_sead__SafeStringBase_char_ = 0x009047f8u;
inline constexpr u32 global_00975344_address = 0x00975344u;
inline constexpr u32 global_00ae53b8_address = 0x00ae53b8u;
inline guest::global<u32, 0x00975338> global_00975338;
inline guest::global<u32, 0x0097533c> global_0097533c;
inline guest::global<u32, 0x00975348> global_00975348;
inline guest::global<u32, 0x00ae53b8> global_00ae53b8;
inline guest::global<u32, 0x00ae53bc> global_00ae53bc;
inline guest::global<u32, 0x00ae53c0> global_00ae53c0;
inline constexpr guest::Function<0x00131e5c, u32(u32, u32, u32, u32)> sead__ExpHeap__create_at;

struct __attribute__((packed)) Frame_00131f64 {
    u32 word_0;
    u32 word_4;
    u8 unknown_8[0x4];  // (not read or written by name)
};
GUEST_OFFSET(Frame_00131f64, word_0, 0x0);
GUEST_OFFSET(Frame_00131f64, word_4, 0x4);
GUEST_SIZE(Frame_00131f64, 0xc);

void sead__SafeStringBase_char___SafeStringBase_00131f64(gptr<sead__SafeStringBase_char_> safe_string_base_char) {
    guest::StackFrameOf<Frame_00131f64> frame;  // the original's stack frame
    *global_0097533c = safe_string_base_char.addr();
    *global_00975348 = 0;
    u32 r0_1 = safe_string_base_char->word_0;
    u32 r1_1 = safe_string_base_char->word_4;
    frame->word_4 = 0x8a3bc4;  // (from the original)
    frame->word_0 = vtable_sead__SafeStringBase_char_;
    u32 r0_2 = sead__ExpHeap__create_at(r0_1, r1_1, frame.at(0).addr(), 0u);
    u32 r2_2 = *global_00ae53b8;
    if (s32(r2_2) < s32(*global_00ae53bc)) {
        *gptr<u32>(*global_00ae53c0 + (r2_2 << 2)) = r0_2;
        *global_00ae53b8 = *global_00ae53b8 + 1u;
    }
    *global_00975338 = 0x975344;  // (from the original)
}

}  // namespace d_00131f64
GUEST_EXPORT_FRAMED(0x00131f64, d_00131f64::sead__SafeStringBase_char___SafeStringBase_00131f64, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_00131fe0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00131fe0 {

struct __attribute__((packed)) Local_00131fe0_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_00131fe0_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_00131fe0_ea_1, word_4, 0x4);

inline constexpr u32 vtable_sead__SafeStringBase_char_ = 0x009047f8u;
inline constexpr u32 global_0097533c_address = 0x0097533cu;
inline constexpr u32 global_00975344_address = 0x00975344u;
inline constexpr u32 global_00ae53ac_address = 0x00ae53acu;
inline constexpr u32 global_00ae53b8_address = 0x00ae53b8u;
inline constexpr u32 global_00ae53d4_address = 0x00ae53d4u;
inline guest::global<u32, 0x00975338> global_00975338;
inline guest::global<u32, 0x0097533c> global_0097533c;
inline guest::global<u32, 0x00975348> global_00975348;
inline guest::global<u32, 0x00ae53b8> global_00ae53b8;
inline guest::global<u32, 0x00ae53bc> global_00ae53bc;
inline guest::global<u32, 0x00ae53c0> global_00ae53c0;
inline constexpr guest::Function<0x00131e5c, u32(u32, u32, u32, u32)> sead__ExpHeap__create_at;
inline constexpr guest::Function<0x00135740, u32(u32, u32, u32, u32)> lock_member_lock;
inline constexpr guest::Function<0x00137e84, u32(u32, u32)> unlock_member_lock;
inline constexpr guest::Function<0x001382cc, u32(u32, u32)> call_001382cc;

struct __attribute__((packed)) Frame_00131fe0 {
    u32 word_0;
    u32 word_4;
    u8 unknown_8[0x10];  // (not read or written by name)
};
GUEST_OFFSET(Frame_00131fe0, word_0, 0x0);
GUEST_OFFSET(Frame_00131fe0, word_4, 0x4);
GUEST_SIZE(Frame_00131fe0, 0x18);

void sead__SafeStringBase_char___SafeStringBase_00131fe0(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_00131fe0> frame;  // the original's stack frame
    lock_member_lock(global_00ae53d4_address, r1, r2, r3);
    *global_0097533c = 0xae53ac;  // (from the original)
    call_001382cc(global_00ae53ac_address, r0);
    *global_00975348 = 0;
    gptr<Local_00131fe0_ea_1> ea_1 = gptr<Local_00131fe0_ea_1>(*global_0097533c);
    u32 r0_1 = ea_1->word_0;
    u32 r1_1 = ea_1->word_4;
    frame->word_4 = 0x8a3bc4;  // (from the original)
    frame->word_0 = vtable_sead__SafeStringBase_char_;
    u32 r0_2 = sead__ExpHeap__create_at(r0_1, r1_1, frame.at(0).addr(), 0u);
    u32 r2_3 = *global_00ae53b8;
    if (s32(r2_3) < s32(*global_00ae53bc)) {
        *gptr<u32>(*global_00ae53c0 + (r2_3 << 2)) = r0_2;
        *global_00ae53b8 = *global_00ae53b8 + 1u;
    }
    *global_00975338 = 0x975344;  // (from the original)
    frame.release();
    unlock_member_lock(global_00ae53d4_address, global_00ae53b8_address);
    return;
}

}  // namespace d_00131fe0
GUEST_EXPORT(0x00131fe0, d_00131fe0::sead__SafeStringBase_char___SafeStringBase_00131fe0);

// f_0013208c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0013208c {

inline constexpr u32 vtable_sead__DelegateEvent_void__ = 0x009043ccu;
inline constexpr u32 vtable_sead__Framework = 0x00905f9cu;

void sead__Framework__Framework(gptr<sead__Framework> framework) {
    framework->word_0 = vtable_sead__Framework;
    framework->byte_4 = 0;
    framework->word_8 = 0;
    framework->word_c = vtable_sead__DelegateEvent_void__;
    u32 r1_1 = framework.addr() + 0x10u;  // (from the original)
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
namespace d_001320cc {

inline constexpr u32 vtable_sead__IDisposer = 0x00905fecu;
inline constexpr u32 global_00975338_address = 0x00975338u;
inline guest::global<u32, 0x00975338> global_00975338;
inline constexpr guest::Function<0x00137ec0, u32(u32, u32, u32, u32)> insert_into_list_40_locked;
inline constexpr guest::Function<0x00138fec, u32(u32, u32, u32, u32)> find_owner_in_heap;
inline constexpr guest::Function<0x003045a8, u32(u32, u32, u32, u32)> call_3045a8;

u32 sead__IDisposer__IDisposer_001320cc(gptr<sead__IDisposer> i_disposer, u32 r1, u32 r2) {
    u32 r0 = i_disposer.addr();
    u32 r0_2 = 0;
    i_disposer->word_0 = vtable_sead__IDisposer;
    i_disposer->word_4 = r1;
    i_disposer->word_8 = 0;
    i_disposer->word_c = 0;
    u32 r0_1 = i_disposer->word_4;
    if (r0_1 == 0) {
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
        r0_2 = *global_00975338;
        if (r0_2 == 0) {
            guest::cpu()->r[1] = 0u;
            return r0;
        }
        r0_1 = find_owner_in_heap(r0_2, r0, r2, guest::cpu()->r[3]);
        r2 = guest::cpu()->r[2];
        i_disposer->word_4 = r0_1;
        if (r0_1 == 0) {
            return r0;
        }
        goto L_13215c;
L_132140:;
        u32 r0_3 = *global_00975338;
        if (r0_3 == 0) {
            guest::cpu()->r[1] = 0u;
            return r0;
        }
        r0_1 = call_3045a8(r0_3, 0u, r2, guest::cpu()->r[3]);
        r2 = guest::cpu()->r[2];
        i_disposer->word_4 = r0_1;
        if (r0_1 == 0) {
            return r0;
        }
    }
L_13215c:;
    insert_into_list_40_locked(r0_1, r0, r2, guest::cpu()->r[3]);
    return r0;
}

}  // namespace d_001320cc
GUEST_EXPORT_FRAMED(0x001320cc, d_001320cc::sead__IDisposer__IDisposer_001320cc, 0x4010);  // pushes {r4, lr} first, as the original

// f_00132174: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00132174 {

inline constexpr u32 vtable_sead__IDisposer = 0x00905fecu;
inline constexpr u32 global_00975338_address = 0x00975338u;
inline guest::global<u32, 0x00975338> global_00975338;
inline constexpr guest::Function<0x00137ec0, u32(u32, u32)> insert_into_list_40_locked;
inline constexpr guest::Function<0x00138fec, u32(u32, u32, u32, u32)> find_owner_in_heap;

u32 sead__IDisposer__IDisposer_00132174(gptr<sead__IDisposer> i_disposer) {
    i_disposer->word_0 = vtable_sead__IDisposer;
    i_disposer->word_4 = 0;
    i_disposer->word_8 = 0;
    i_disposer->word_c = 0;
    u32 r0_1 = *global_00975338;
    if (r0_1 == 0) {
        guest::cpu()->r[1] = 0u;
        return i_disposer.addr();
    }
    u32 r0_2 = find_owner_in_heap(r0_1, i_disposer.addr(), guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r1_1 = guest::cpu()->r[1];
    if (r0_2 != 0) {
        r1_1 = i_disposer.addr();
    }
    i_disposer->word_4 = r0_2;
    if (r0_2 != 0) {
        insert_into_list_40_locked(r0_2, r1_1);
        r1_1 = guest::cpu()->r[1];
    }
    guest::cpu()->r[1] = r1_1;
    return i_disposer.addr();
}

}  // namespace d_00132174
GUEST_EXPORT_FRAMED(0x00132174, d_00132174::sead__IDisposer__IDisposer_00132174, 0x4010);  // pushes {r4, lr} first, as the original

// f_001321c8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001321c8 {

inline constexpr u32 vtable_sead__ThreadMgr__SingletonDisposer_ = 0x0090600cu;
inline guest::global<u32, 0x009753d0> global_009753d0;
inline guest::global<u32, 0x009753d4> global_009753d4;
inline constexpr guest::Function<0x00131280, u32(u32, u32, u32, u32)> allocate_from_heap_00131280;
inline constexpr guest::Function<0x001320cc, u32(u32, u32, u32)> sead__IDisposer__IDisposer_001320cc;
inline constexpr guest::Function<0x001385fc, u32(u32, u32, u32)> sead__ThreadMgr__ThreadMgr;

void sead__ThreadMgr__SingletonDisposer___SingletonDisposer_(u32 r0) {
    u32 r0_3 = 0;
    if (*global_009753d0 == 0) {
        u32 r2_1 = 4u;
        u32 r1_1 = r0;
        u32 block = allocate_from_heap_00131280(0x44u, r1_1, r2_1, guest::cpu()->r[3]);  // (from the original)
        u32 r0_2 = block + 4u;
        if (r0_2 != 0) {
            r1_1 = r0;
            r2_1 = 3u;
            r0_2 = sead__IDisposer__IDisposer_001320cc(r0_2, r1_1, r2_1);
            *gptr<u32>(r0_2) = vtable_sead__ThreadMgr__SingletonDisposer_;
        }
        *global_009753d4 = r0_2;
        if (block == 0) {
            r0_3 = 0u;
        } else {
            r0_3 = sead__ThreadMgr__ThreadMgr(block, r1_1, r2_1);
        }
        *global_009753d0 = r0_3;
    }
}

}  // namespace d_001321c8
GUEST_EXPORT_FRAMED(0x001321c8, d_001321c8::sead__ThreadMgr__SingletonDisposer___SingletonDisposer_, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_001323b4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001323b4 {

inline constexpr guest::Function<0x00136cb0, u32(u32, u32, u32, u32)> nw__lyt__Layout__virtual_9;

u32 f_001323b4(u32 r0) {
    return nw__lyt__Layout__virtual_9(r0 + 0x10u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
}

}  // namespace d_001323b4
GUEST_EXPORT(0x001323b4, d_001323b4::f_001323b4);

// f_00132530: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00132530 {

struct __attribute__((packed)) Object_00132530_0 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Object_00132530_0, word_0, 0x0);
GUEST_OFFSET(Object_00132530_0, word_4, 0x4);

inline constexpr guest::Function<0x0013d040, u32(u32, u32, u32, u32)> call_0013d040;

void release_and_clear_pair(gptr<Object_00132530_0> pair) {
    u32 r0_1 = pair->word_0;
    if (r0_1 == 0) {
        return;
    }
    call_0013d040(r0_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    pair->word_0 = 0;
    pair->word_4 = 0;
}

}  // namespace d_00132530
GUEST_EXPORT_FRAMED(0x00132530, d_00132530::release_and_clear_pair, 0x4010);  // pushes {r4, lr} first, as the original

// f_001325a0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001325a0 {

inline constexpr guest::Function<0x00134fec, u32(u32, u32, u32, u32)> call_00134fec;
inline constexpr guest::Function<0x002f76ad, u32(u32, u32, u32, u32)> destroy_array_elements;

u32 f_001325a0(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r0_1 = r0 + 0xf0u;  // (from the original)
    call_00134fec(r0_1, r1, r2, r3);
    destroy_array_elements(r0_1 - 8u, 0x134fe8u, 4u, 2u);  // (from the original)
    destroy_array_elements(r0_1 - 0xe8u, 0x134fe8u, 4u, 0x38u);  // (from the original)
    return r0_1 - 0xf0u;  // (from the original)
}

}  // namespace d_001325a0
GUEST_EXPORT_FRAMED(0x001325a0, d_001325a0::f_001325a0, 0x4010);  // pushes {r4, lr} first, as the original

// f_0013293c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0013293c {

inline constexpr guest::Function<0x002f76ad, u32(u32, u32, u32, u32)> destroy_array_elements;

u32 f_0013293c(u32 r0) {
    u32 r0_1 = r0 + 0x6480u;  // (from the original)
    destroy_array_elements(r0_1 - 0x1428u, 0x134f6cu, 0x100u, 0x14u);  // (from the original)
    destroy_array_elements(r0_1 - 0x6428u, 0x138b98u, 0x400u, 0x14u);  // (from the original)
    destroy_array_elements(r0_1 - 0x647cu, 0x138ab0u, 2u, 0x2au);  // (from the original)
    return r0_1 - 0x6480u;  // (from the original)
}

}  // namespace d_0013293c
GUEST_EXPORT_FRAMED(0x0013293c, d_0013293c::f_0013293c, 0x4010);  // pushes {r4, lr} first, as the original

// f_001329a8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001329a8 {

inline constexpr u32 global_00986f10_address = 0x00986f10u;
inline constexpr guest::Function<0x00138bbc, u32(u32, u32)> call_00138bbc;

u32 prepare_flagged_object(u32 r0, u32 r1) {
    if (r0 == 0) {
        return r0;
    }
    return call_00138bbc(global_00986f10_address, r0);
}

}  // namespace d_001329a8
GUEST_EXPORT(0x001329a8, d_001329a8::prepare_flagged_object);

// f_001330fc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001330fc {

struct __attribute__((packed)) Object_001330fc_0 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
};
GUEST_OFFSET(Object_001330fc_0, word_4, 0x4);

inline constexpr guest::Function<0x00138c88, u32(u32)> field_nonzero_138c88;

u32 f_001330fc(gptr<Object_001330fc_0> arg0) {
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
GUEST_EXPORT_FRAMED(0x001330fc, d_001330fc::f_001330fc, 0x4010);  // pushes {r4, lr} first, as the original

// f_00133580: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
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
inline constexpr guest::Function<0x00138f3c, u32(u32, u32)> call_00138f3c;

struct __attribute__((packed)) Frame_00133580 {
    u32 word_0;
    u32 word_4;
    u8 unknown_8[0x4];  // (not read or written by name)
    u8 byte_c;
    u8 unknown_d[0x23];  // (not read or written by name)
};
GUEST_OFFSET(Frame_00133580, word_0, 0x0);
GUEST_OFFSET(Frame_00133580, word_4, 0x4);
GUEST_OFFSET(Frame_00133580, byte_c, 0xc);
GUEST_SIZE(Frame_00133580, 0x30);

u32 sead__FixedSafeString_32___FixedSafeString_00133580(u32 r0, u32 r1, u32 r2) {
    guest::StackFrameOf<Frame_00133580> frame;  // the original's stack frame
    u32 r4_1 = 0;
    gptr<Local_00133580_ea_1> ea_1 = gptr<Local_00133580_ea_1>(frame.at(4).addr());
    ea_1->word_0 = frame.at(0xc).addr();  // (from the original)
    ea_1->word_4 = 0x20;  // (from the original)
    u32 r3_1 = *empty_string;
    *gptr<u8>(frame->word_4 + 0x1fu) = u8(r3_1);  // (from the original)
    frame->byte_c = *empty_string;
    frame->word_0 = vtable_sead__FixedSafeString_32_;
    u32 r0_2 = sead__SafeStringBase_char___SafeStringBase_00137fa4(frame.at(0).addr(), r1, 0x20u, r3_1);  // (from the original)
    if (r0_2 != 0) {
        u32 r0_3 = call_00138f3c(r0, frame.at(0).addr());
        r4_1 = r0_3;
    } else {
        r4_1 = *gptr<u32>(r0 + 0x1cu);  // (from the original)
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
GUEST_EXPORT_FRAMED(0x00133580, d_00133580::sead__FixedSafeString_32___FixedSafeString_00133580, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_001342a4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001342a4 {

inline constexpr guest::Function<0x00135f34, u32(u32, u32, u32, u32)> call_00135f34;

struct __attribute__((packed)) Frame_001342a4 {
    u32 word_0;
};
GUEST_OFFSET(Frame_001342a4, word_0, 0x0);
GUEST_SIZE(Frame_001342a4, 0x4);

void f_001342a4(u32 r0_unused, u32 r1_unused, u32 r2_unused, u32 r3) {
    guest::StackFrameOf<Frame_001342a4> frame;  // the original's stack frame
    frame->word_0 = r3;
    frame->word_0 = 1;
    call_00135f34(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], r3);
}

}  // namespace d_001342a4
GUEST_EXPORT_FRAMED(0x001342a4, d_001342a4::f_001342a4, 0x4000);  // pushes {lr} first, as the original

// f_001342b8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001342b8 {

struct __attribute__((packed)) Local_001342b8_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_001342b8_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_001342b8_ea_1, word_4, 0x4);
GUEST_OFFSET(Local_001342b8_ea_1, word_8, 0x8);

inline constexpr guest::Function<0x00136344, u32(u32, u32, u32, u32)> call_00136344;

struct __attribute__((packed)) Frame_001342b8 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Frame_001342b8, word_0, 0x0);
GUEST_OFFSET(Frame_001342b8, word_4, 0x4);
GUEST_OFFSET(Frame_001342b8, word_8, 0x8);
GUEST_SIZE(Frame_001342b8, 0xc);

void f_001342b8() {
    guest::StackFrameOf<Frame_001342b8> frame;  // the original's stack frame
    gptr<Local_001342b8_ea_1> ea_1 = gptr<Local_001342b8_ea_1>(frame.at(0x18).addr());  // (from the original)
    u32 r4_1 = ea_1->word_0;
    u32 r5_1 = ea_1->word_4;
    u32 r12_1 = ea_1->word_8;
    frame->word_0 = r4_1;
    frame->word_4 = r5_1;
    frame->word_8 = r12_1;
    call_00136344(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_001342b8
GUEST_EXPORT_FRAMED(0x001342b8, d_001342b8::f_001342b8, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_001342d8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
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

inline constexpr guest::Function<0x00136014, u32(u32, u32, u32, u32)> call_00136014;

struct __attribute__((packed)) Frame_001342d8 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Frame_001342d8, word_0, 0x0);
GUEST_OFFSET(Frame_001342d8, word_4, 0x4);
GUEST_OFFSET(Frame_001342d8, word_8, 0x8);
GUEST_OFFSET(Frame_001342d8, word_c, 0xc);
GUEST_SIZE(Frame_001342d8, 0x10);

void f_001342d8() {
    guest::StackFrameOf<Frame_001342d8> frame;  // the original's stack frame
    gptr<Local_001342d8_ea_1> ea_1 = gptr<Local_001342d8_ea_1>(frame.at(0x20).addr());  // (from the original)
    u32 r4_1 = ea_1->word_0;
    u32 r5_1 = ea_1->word_4;
    u32 r6_1 = ea_1->word_8;
    u32 r12_1 = ea_1->word_c;
    frame->word_0 = r4_1;
    frame->word_4 = r5_1;
    frame->word_8 = r6_1;
    frame->word_c = r12_1;
    call_00136014(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_001342d8
GUEST_EXPORT_FRAMED(0x001342d8, d_001342d8::f_001342d8, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_001342f8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
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

inline constexpr guest::Function<0x00136188, u32(u32, u32, u32, u32)> call_00136188;

struct __attribute__((packed)) Frame_001342f8 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Frame_001342f8, word_0, 0x0);
GUEST_OFFSET(Frame_001342f8, word_4, 0x4);
GUEST_OFFSET(Frame_001342f8, word_8, 0x8);
GUEST_OFFSET(Frame_001342f8, word_c, 0xc);
GUEST_SIZE(Frame_001342f8, 0x10);

void f_001342f8() {
    guest::StackFrameOf<Frame_001342f8> frame;  // the original's stack frame
    gptr<Local_001342f8_ea_1> ea_1 = gptr<Local_001342f8_ea_1>(frame.at(0x20).addr());  // (from the original)
    u32 r4_1 = ea_1->word_0;
    u32 r5_1 = ea_1->word_4;
    u32 r6_1 = ea_1->word_8;
    u32 r12_1 = ea_1->word_c;
    frame->word_0 = r4_1;
    frame->word_4 = r5_1;
    frame->word_8 = r6_1;
    frame->word_c = r12_1;
    call_00136188(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_001342f8
GUEST_EXPORT_FRAMED(0x001342f8, d_001342f8::f_001342f8, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

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

inline constexpr u32 global_00ae0cc8_address = 0x00ae0cc8u;

u32 find_archive(u32 path) {
    u32 r0_1 = 0;
    u32 name_low = 0u;
    u32 name_high = name_low;
    u32 i = name_low;
L_134328:;
    u32 r12_1 = gptr<u16>(path)[i];
    if (r12_1 != 0x3au) {  // (from the original)
        u32 r12_2 = sxtb(r12_1);
        i += 1u;
        u32 r2_1 = name_low >> 0x18 | name_high << 8;  // (from the original)
        name_low = r12_2 | name_low << 8;
        name_high = r2_1 | u32(s32(r12_2) >> 0x1f);  // (from the original)
        if (s32(i) < 8) {
            guest::preempt();
            goto L_134328;
        }
        name_low = 0u;
        name_high = name_low;
    }
    if ((name_low | name_high) != 0) {
        i = global_00ae0cc8_address;
        path = 0u;
        do {
            gptr<Local_00134318_r5_1> r5_1 = gptr<Local_00134318_r5_1>(i + (path << 4));
            if ((r5_1->word_0 ^ name_low | r5_1->word_4 ^ name_high) == 0) {
                r0_1 = i + (path << 4);
            } else {
                gptr<Local_00134318_ea_1> ea_1 = gptr<Local_00134318_ea_1>(r5_1.addr() + 0x10u);  // (from the original)
                if ((ea_1->word_4 ^ name_high | ea_1->word_0 ^ name_low) != 0) {
                    goto L_1343c8;
                }
                r0_1 = i + (path << 4) + 0x10u;  // (from the original)
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
        } while (s32(path) < 0x20);  // (from the original)
    }
    guest::cpu()->r[1] = name_low;
    return 0u;
}

}  // namespace d_00134318
GUEST_EXPORT_FRAMED(0x00134318, d_00134318::find_archive, 0x30);  // pushes {r4, r5} first, as the original

// f_001343e4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001343e4 {

inline constexpr u32 vtable_sead__FixedSafeString_256_ = 0x009048b0u;
inline constexpr u32 vtable_sead__FixedSafeStringBase_char__256_ = 0x009050f8u;
inline constexpr u32 vtable_sead__BufferedSafeStringBase_char_ = 0x0090558cu;
inline guest::global<u8, 0x008c9f1c> empty_string;

void sead__BufferedSafeStringBase_char___BufferedSafeStringBase_001343e4(gptr<sead__FixedSafeString_256_> fixed_safe_string) {
    fixed_safe_string->word_4 = fixed_safe_string.addr() + 0xcu;  // (from the original)
    fixed_safe_string->word_0 = vtable_sead__BufferedSafeStringBase_char_;
    fixed_safe_string->word_8 = 0x100;  // (from the original)
    *gptr<u8>(fixed_safe_string->word_4 + 0xffu) = *empty_string;  // (from the original)
    fixed_safe_string->word_0 = vtable_sead__FixedSafeStringBase_char__256_;
    *gptr<u8>(fixed_safe_string->word_4) = *empty_string;
    fixed_safe_string->word_0 = vtable_sead__FixedSafeString_256_;
    guest::cpu()->r[1] = vtable_sead__FixedSafeString_256_;
}

}  // namespace d_001343e4
GUEST_EXPORT(0x001343e4, d_001343e4::sead__BufferedSafeStringBase_char___BufferedSafeStringBase_001343e4);

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
namespace d_00134f04 {

inline constexpr u32 global_00975268_address = 0x00975268u;
inline constexpr u32 global_00975270_address = 0x00975270u;
inline guest::global<u32, 0x00975270> global_00975270;
inline constexpr guest::Function<0x00139668, u32(u32, u32, u32, u32)> call_virtual_1_139668;

void f_00134f04() {
    call_virtual_1_139668(*global_00975270, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    *global_00975270 = 0;
}

}  // namespace d_00134f04
GUEST_EXPORT_FRAMED(0x00134f04, d_00134f04::f_00134f04, 0x4010);  // pushes {r4, lr} first, as the original

// f_00134f24: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00134f24 {

inline guest::global<u8, 0x00975268> global_00975268;
inline constexpr guest::Function<0x00135520, u32(u32)> cfl_unmount_135520;

void unmount_cfl_resources() {
    if (*global_00975268 == 0) {
        return;
    }
    cfl_unmount_135520(0x134f50u);  // (from the original)
    *global_00975268 = 0;
}

}  // namespace d_00134f24
GUEST_EXPORT_FRAMED(0x00134f24, d_00134f24::unmount_cfl_resources, 0x4010);  // pushes {r4, lr} first, as the original

// f_00134f70: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00134f70 {

inline constexpr u32 vtable_SoundFaderEx = 0x008ed7f4u;

void SoundFaderEx__SoundFaderEx(gptr<SoundFaderEx> sound_fader_ex) {
    float S0_1 = 0.0f;
    sound_fader_ex->word_4 = std::bit_cast<u32>(S0_1);
    sound_fader_ex->word_8 = std::bit_cast<u32>(S0_1);
    sound_fader_ex->float_c = S0_1;
    sound_fader_ex->word_10 = ~0u;
    sound_fader_ex->word_14 = 0;
    sound_fader_ex->word_0 = vtable_SoundFaderEx;
    guest::cpu()->s[0] = S0_1;
}

}  // namespace d_00134f70
GUEST_EXPORT(0x00134f70, d_00134f70::SoundFaderEx__SoundFaderEx);

// f_00134fec: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00134fec {

inline constexpr guest::Function<0x002f76ad, u32(u32, u32, u32, u32)> destroy_array_elements;

u32 f_00134fec(u32 r0) {
    destroy_array_elements(r0, 0x139d20u, 0x878u, 8u);  // (from the original)
    return r0;
}

}  // namespace d_00134fec
GUEST_EXPORT_FRAMED(0x00134fec, d_00134fec::f_00134fec, 0x4010);  // pushes {r4, lr} first, as the original

// f_00135010: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00135010 {

struct __attribute__((packed)) Local_00135010_r5_1 {
    u8 unknown_0[0x14];  // (not used here)
    u32 word_14;
};
GUEST_OFFSET(Local_00135010_r5_1, word_14, 0x14);

inline constexpr guest::Function<0x00135748, u32(u32, u32)> RecursiveLock__lock;
inline constexpr guest::Function<0x001357ec, u32(u32)> RecursiveLock__unlock;
inline constexpr guest::Function<0x00138f30, u32(u32)> List__last_index;
inline constexpr guest::Function<0x0013b6e0, u32(u32, u32)> call_0013b6e0;
inline constexpr guest::Function<0x0013c0e8, u32(u32, u32, u32, u32)> state_is_1_or_2;

u32 f_00135010(u32 r0, u32 r1, u32 r2) {
    u32 r7_1 = r1;
    if (r2 < 6u) {
        gptr<Local_00135010_r5_1> r5_1 = gptr<Local_00135010_r5_1>(r0 + (r2 << 2));
        r1 = r5_1->word_14;
        if (r1 != 0) {
            u32 r1_1 = r2 * 3u;
            u32 r0_2 = state_is_1_or_2(r0 + (r1_1 << 3) + 0x2cu, r1_1, r2, guest::cpu()->r[3]);  // (from the original)
            r1 = guest::cpu()->r[1];
            if (r0_2 == 0) {
                u32 r4_1 = r5_1->word_14;
                RecursiveLock__lock(r4_1 + 4u, r1);
                u32 r0_4 = List__last_index(r4_1 + 0x10u);  // (from the original)
                RecursiveLock__unlock(r4_1 + 4u);
                if (s32(r0_4) > s32(r7_1)) {
                    call_0013b6e0(r5_1->word_14, r7_1);
                }
                return 1u;
            }
        }
    }
    guest::cpu()->r[1] = r1;
    return 0u;
}

}  // namespace d_00135010
GUEST_EXPORT_FRAMED(0x00135010, d_00135010::f_00135010, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_00135134: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00135134 {

inline constexpr u32 vtable_SoundMelodyPlayerOneSeqBase = 0x008f701cu;

void SoundMelodyPlayerOneSeqBase__SoundMelodyPlayerOneSeqBase(gptr<SoundMelodyPlayerOneSeqBase> sound_melody_player_one_seq_base) {
    sound_melody_player_one_seq_base->word_0 = vtable_SoundMelodyPlayerOneSeqBase;
    sound_melody_player_one_seq_base->word_4 = 0;
    sound_melody_player_one_seq_base->word_8 = 0;
    sound_melody_player_one_seq_base->word_c = 0;
    sound_melody_player_one_seq_base->byte_10 = 0;
    sound_melody_player_one_seq_base->byte_11 = 0;
}

}  // namespace d_00135134
GUEST_EXPORT(0x00135134, d_00135134::SoundMelodyPlayerOneSeqBase__SoundMelodyPlayerOneSeqBase);

// f_001352dc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001352dc {

inline guest::global<u32, 0x00974f10> global_00974f10;
inline constexpr guest::Function<0x0013a1f0, u32(u32, u32, u32, u32)> call_0013a1f0;

struct __attribute__((packed)) Frame_001352dc {
    u32 word_0;
};
GUEST_OFFSET(Frame_001352dc, word_0, 0x0);
GUEST_SIZE(Frame_001352dc, 0x4);

void f_001352dc(u32 r0, u32 r1_unused, u32 r2_unused, u32 r3) {
    guest::StackFrameOf<Frame_001352dc> frame;  // the original's stack frame
    frame->word_0 = r3;
    *global_00974f10 = r0;
    frame->word_0 = r0;
    call_0013a1f0(frame.at(0).addr(), 0xb0500c8u, guest::cpu()->r[2], r3);  // (from the original)
}

}  // namespace d_001352dc
GUEST_EXPORT_FRAMED(0x001352dc, d_001352dc::f_001352dc, 0x4000);  // pushes {lr} first, as the original

// f_00135384: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
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

inline constexpr u32 global_00ae0cc8_address = 0x00ae0cc8u;
inline constexpr guest::Function<0x00134250, u32(u32, u32, u32, u32)> call_00134250;

u32 f_00135384(u32 r0, u32 r1, u32 r2, u32 r3) {
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
    u32 r2_1 = *gptr<s8>(r0 + r1);
    if (r2_1 != 0 && r2_1 != 0x3au) {  // (from the original)
        *gptr<u8>(r3 + r1) = u8(r2_1);
        r1 += 1u;
        if (s32(r1) < 8) {
            guest::preempt();
            goto L_1353a0;
        }
        call_00134250(r0, r1, r2_1, r3);
        r2 = 0x89d9d8u;  // (from the original)
        r12 = 0u;
        r14 = r12;
        r0 = r12;
        do {
            r1 = *gptr<s8>(r2 + r0);
            if (r1 == 0x3au) {  // (from the original)
                goto L_135450;
            }
            r0 += 1u;
            r14 = r12 >> 0x18 | r14 << 8;  // (from the original)
            r12 = r1 | r12 << 8;
            r14 |= u32(s32(r1) >> 0x1f);  // (from the original)
            guest::preempt();
        } while (s32(r0) < 8);
    } else {
        r12 = 0u;
        *gptr<u8>(r3 + r1) = 0x3a;  // (from the original)
        r14 = r12;
        r2 = r3;
        r0 = r12;
        do {
            r1 = *gptr<s8>(r2 + r0);
            if (r1 == 0x3au) {  // (from the original)
                goto L_135450;
            }
            r0 += 1u;
            r14 = r12 >> 0x18 | r14 << 8;  // (from the original)
            r12 = r1 | r12 << 8;
            r14 |= u32(s32(r1) >> 0x1f);  // (from the original)
            guest::preempt();
        } while (s32(r0) < 8);
    }
    r12 = 0u;
    r14 = r12;
L_135450:;
    if ((r12 | r14) == 0) {
        r0_1 = 0xe0e046bcu;  // (from the original)
    } else {
        r3 = global_00ae0cc8_address;
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
            if (s32(r1) >= 0x20) {  // (from the original)
                guest::cpu()->r[1] = r1;
                return 0xd8604659u;  // (from the original)
            }
            guest::preempt();
            goto L_135464;
        }
        r0_1 = 0xc82044b4u;  // (from the original)
    }
    guest::cpu()->r[1] = r1;
    return r0_1;
}

}  // namespace d_00135384
GUEST_EXPORT_FRAMED(0x00135384, d_00135384::f_00135384, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_00135720: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00135720 {

struct __attribute__((packed)) Object_00135720_0 {
    u8 unknown_0[0x8];  // (not used here)
    u32 word_8;
};
GUEST_OFFSET(Object_00135720_0, word_8, 0x8);

inline constexpr u32 global_00ae0f64_address = 0x00ae0f64u;
inline constexpr guest::Function<0x0013e0ec, u32(u32, u32, u32, u32)> call_0013e0ec;

void f_00135720(gptr<Object_00135720_0> arg0) {
    u32 r1_1 = arg0->word_8;
    if (r1_1 == 0) {
        guest::cpu()->r[1] = r1_1;
        return;
    }
    call_0013e0ec(global_00ae0f64_address, arg0.addr(), guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_00135720
GUEST_EXPORT(0x00135720, d_00135720::f_00135720);

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

inline constexpr guest::Function<0x0012f050, u32(u32, u32, u32, u32)> call_0012f050;

u32 RecursiveLock__lock(gptr<RecursiveLock> lock) {
    u32 owner = lock->owner;
    if (guest::cpu()->tls != owner) {
        call_0012f050(lock.addr(), owner, guest::cpu()->r[2], guest::cpu()->r[3]);
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

inline constexpr guest::Function<0x00128c70, u32(u32, u32)> call_00128c70;

u32 RecursiveLock__unlock(gptr<RecursiveLock> lock) {
    u32 depth = lock->depth - 1u;
    lock->depth = depth;
    if (depth != 0) {
        guest::cpu()->r[1] = depth;
        return lock.addr();
    }
    lock->owner = 0;
    return call_00128c70(lock.addr(), 0u);
}

}  // namespace d_001357ec
GUEST_EXPORT(0x001357ec, d_001357ec::RecursiveLock__unlock);

// f_0013580c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0013580c {

inline constexpr u32 global_0097dff8_address = 0x0097dff8u;
inline guest::global<u32, 0x0097dff8> global_0097dff8;
inline constexpr guest::Function<0x00134c68, u32(u32, u32, u32, u32)> svc_arbitrate_address;

struct __attribute__((packed)) Frame_0013580c {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Frame_0013580c, word_0, 0x0);
GUEST_OFFSET(Frame_0013580c, word_4, 0x4);
GUEST_SIZE(Frame_0013580c, 0x8);

void LightLock__unlock(u32 light_lock) {
    guest::StackFrameOf<Frame_0013580c> frame;  // the original's stack frame
    do {
        *gptr<u32>(light_lock) = 0u - *gptr<u32>(light_lock);
        guest::preempt();
    } while (!u32(1));
    u32 r0_1 = *global_0097dff8;
    frame->word_0 = 0;
    frame->word_4 = 0;
    svc_arbitrate_address(r0_1, light_lock, 0u, ~0u);
}

}  // namespace d_0013580c
GUEST_EXPORT_FRAMED(0x0013580c, d_0013580c::LightLock__unlock, 0x4010);  // pushes {r4, lr} first, as the original

// f_00135858: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
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
namespace d_001358c0 {

inline constexpr u32 global_0097dffc_address = 0x0097dffcu;
inline guest::global<u32, 0x0097dffc> global_0097dffc;
inline constexpr guest::Function<0x00129270, u32(u32, u32)> call_00129270;
inline constexpr guest::Function<0x00135520, u32(u32, u32, u32, u32)> cfl_unmount_135520;

void f_001358c0(u32 r0_unused, u32 r1, u32 r2) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 r0_2 = cfl_unmount_135520(*global_0097dffc, r1, r2, guest::cpu()->r[3]);
    u32 r1_1 = r0_2 & 0x80000000u;  // (from the original)
    if (s32(r1_1) >= 0) {
        guest::cpu()->r[1] = r1_1;
        return;
    }
    if ((r0_2 >> 0x1f) == 0) {  // (from the original)
        guest::cpu()->r[1] = 0x1358e0u;  // (from the original)
        return;
    }
    frame.release();
    call_00129270(r0_2, 0x1358e0u);
    return;  // (from the original)
}

}  // namespace d_001358c0
GUEST_EXPORT(0x001358c0, d_001358c0::f_001358c0);

// f_00135a8c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00135a8c {

inline constexpr u32 vtable_nn__cec__CTR__MessageBox = 0x008faf48u;
inline constexpr guest::Function<0x0013a63c, u32(u32, u32, u32, u32)> call_0013a63c;

u32 nn__cec__CTR__MessageBox__destructor(gptr<nn__cec__CTR__MessageBox> message_box) {
    message_box->word_0 = vtable_nn__cec__CTR__MessageBox;
    call_0013a63c(message_box.addr(), guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    return message_box.addr();
}

}  // namespace d_00135a8c
GUEST_EXPORT_FRAMED(0x00135a8c, d_00135a8c::nn__cec__CTR__MessageBox__destructor, 0x4010);  // pushes {r4, lr} first, as the original

// f_00135bb8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00135bb8 {

struct __attribute__((packed)) Object_00135bb8_0 {
    u8 unknown_0[0x18];  // (not used here)
    u32 word_18;
    u8 unknown_1c[0x38];  // (not used here)
    u32 word_54;
};
GUEST_OFFSET(Object_00135bb8_0, word_18, 0x18);
GUEST_OFFSET(Object_00135bb8_0, word_54, 0x54);

inline constexpr guest::Function<0x0013e6bc, u32(u32, u32, u32, u32)> call_0013e6bc;

void release_region_18(gptr<Object_00135bb8_0> owner) {
    owner->word_54 = 0;
    if (owner->word_18 != 0) {
        call_0013e6bc(owner.addr() + 0x18u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        owner->word_18 = 0;
    }
}

}  // namespace d_00135bb8
GUEST_EXPORT_FRAMED(0x00135bb8, d_00135bb8::release_region_18, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_00135be4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00135be4 {

inline constexpr guest::Function<0x0013e6bc, u32(u32, u32, u32, u32)> call_0013e6bc;

void ExpHeapBase__release_region(gptr<nn__fnd__ExpHeapBase> heap) {
    if (heap->word_18 == 0) {
        return;
    }
    call_0013e6bc(heap.addr() + 0x18u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    heap->word_18 = 0;
}

}  // namespace d_00135be4
GUEST_EXPORT_FRAMED(0x00135be4, d_00135be4::ExpHeapBase__release_region, 0x4010);  // pushes {r4, lr} first, as the original

// f_00135efc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00135efc {

inline constexpr guest::Function<0x00134250, u32(u32, u32, u32, u32)> call_00134250;
inline constexpr guest::Function<0x0013a7c8, u32(u32, u32, u32, u32)> call_0013a7c8;

u32 f_00135efc(u32 r0) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 r0_1 = call_0013a7c8(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_2 = r0_1 >> 0x1f;  // (from the original)
    if (r0_2 == 0) {
        return r0_2;
    }
    frame.release();
    return call_00134250(r0_2, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_00135efc
GUEST_EXPORT(0x00135efc, d_00135efc::f_00135efc);

// f_00135f18: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00135f18 {

inline constexpr guest::Function<0x00134250, u32(u32)> call_00134250;
inline constexpr guest::Function<0x0013a7f8, u32(u32, u32, u32, u32)> call_0013a7f8;

u32 f_00135f18(u32 r0_unused, u32 r1_unused, u32 r2_unused, u32 r3) {
    guest::StackFrame frame(0x4);  // the original's stack frame
    *frame.at<u32>(0) = r3;
    u32 r0_2 = call_0013a7f8(frame.at(0).addr(), guest::cpu()->r[1], guest::cpu()->r[2], r3);
    if ((r0_2 >> 0x1f) != 0) {  // (from the original)
        call_00134250(r0_2);
    }
    return s8(*frame.at<u8>(0));
}

}  // namespace d_00135f18
GUEST_EXPORT_FRAMED(0x00135f18, d_00135f18::f_00135f18, 0x4000);  // pushes {lr} first, as the original

// f_00135f34: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
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
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_00135f34_r4_1, word_0, 0x0);
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

inline constexpr u32 global_0097ea3c_address = 0x0097ea3cu;
inline guest::global<u8, 0x0097ea38> global_0097ea38;
inline guest::global<u32, 0x0097ea3c> global_0097ea3c;
inline constexpr guest::Function<0x00136464, u32(u32, u32, u32, u32)> read_u32_0x0097d8bc_;
inline constexpr guest::Function<0x0013a834, u32(u32, u32)> call_0013a834;

struct __attribute__((packed)) Frame_00135f34 {
    u8 unknown_0[0x3];  // (not read or written by name)
    u8 byte_3;
    u32 word_4;
    u8 unknown_8[0x14];  // (not read or written by name)
    u32 word_1c;
    u8 unknown_20[0x4];  // (not read or written by name)
};
GUEST_OFFSET(Frame_00135f34, byte_3, 0x3);
GUEST_OFFSET(Frame_00135f34, word_4, 0x4);
GUEST_OFFSET(Frame_00135f34, word_1c, 0x1c);
GUEST_SIZE(Frame_00135f34, 0x24);

void f_00135f34(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_00135f34> frame;  // the original's stack frame
    if (*frame.at<u32>(0x38) == 0 || r0 + 0xe1000000u < 0x600000u) {  // (from the original)
        gptr<Local_00135f34_r7_1> r7_1 = gptr<Local_00135f34_r7_1>(*global_0097ea3c);
        u32 r12_1 = r7_1->word_0;
        u32 r5_1 = r7_1->word_10;
        u32 r6_1 = r7_1->word_14;
        u32 r7_2 = r7_1->word_18;
        *frame.at<u32>(0) = r12_1;
        gptr<Local_00135f34_ea_2> ea_2 = gptr<Local_00135f34_ea_2>(frame.at(0x10).addr());  // (from the original)
        ea_2->word_0 = r5_1;
        ea_2->word_4 = r6_1;
        ea_2->word_8 = r7_2;
        *frame.at<u8>(0) = 0;
        u32 r12_2 = *global_0097ea38;
        gptr<Local_00135f34_r4_1> r4_1 = gptr<Local_00135f34_r4_1>(frame.at(8).addr());
        frame->word_4 = r1;
        frame->byte_3 = u8(r12_2);
        frame->word_1c = r3;
        r4_1->word_0 = r0;
        r4_1->word_4 = r2;
        u32 r0_1 = read_u32_0x0097d8bc_(r0, r1, r2, r3);
        call_0013a834(r0_1 + 0x58u, frame.at(0).addr());  // (from the original)
    }
}

}  // namespace d_00135f34
GUEST_EXPORT_FRAMED(0x00135f34, d_00135f34::f_00135f34, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_00135fb4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00135fb4 {

struct __attribute__((packed)) Object_00135fb4_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_00135fb4_0, word_0, 0x0);

struct __attribute__((packed)) Local_00135fb4_r3_1 {
    u32 word_0;
};
GUEST_OFFSET(Local_00135fb4_r3_1, word_0, 0x0);


void f_00135fb4(gptr<Object_00135fb4_0> arg0, u32 r1) {
    arg0->word_0 = r1;
    r1 = 0u;
    do {
        gptr<Local_00135fb4_r3_1> r3_1 = gptr<Local_00135fb4_r3_1>(arg0->word_0);
        u32 r2_1 = r3_1->word_0;
        if ((r2_1 & 0xffu) >= 0xfu) {  // (from the original)
            r2_1 = r2_1 & ~0xffu | r1;  // (from the original)
        }
        r3_1->word_0 = ((r2_1 & ~0xff00u | r1 << 8 & 0xff00u) & ~0xff0000u | r1 << 0x10 & 0xff0000u) & ~0xff000000u | r1 << 0x18;  // (from the original)
        guest::preempt();
    } while (!u32(1));
}

}  // namespace d_00135fb4
GUEST_EXPORT_FRAMED(0x00135fb4, d_00135fb4::f_00135fb4, 0x10);  // pushes {r4} first, as the original

// f_00136014: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
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
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_00136014_ea_7, word_0, 0x0);
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

inline constexpr u32 global_0097ea3c_address = 0x0097ea3cu;
inline guest::global<u8, 0x0097ea38> global_0097ea38;
inline guest::global<u32, 0x0097ea3c> global_0097ea3c;
inline constexpr guest::Function<0x00136464, u32(u32, u32, u32, u32)> read_u32_0x0097d8bc_;
inline constexpr guest::Function<0x0013a834, u32(u32, u32)> call_0013a834;

struct __attribute__((packed)) Frame_00136014 {
    u8 unknown_0[0x3];  // (not read or written by name)
    u8 byte_3;
    u8 unknown_4[0x14];  // (not read or written by name)
    u32 word_18;
    u8 unknown_1c[0x2];  // (not read or written by name)
    u16 half_1e;
    u8 unknown_20[0x4];  // (not read or written by name)
};
GUEST_OFFSET(Frame_00136014, byte_3, 0x3);
GUEST_OFFSET(Frame_00136014, word_18, 0x18);
GUEST_OFFSET(Frame_00136014, half_1e, 0x1e);
GUEST_SIZE(Frame_00136014, 0x24);

void f_00136014(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_00136014> frame;  // the original's stack frame
    gptr<Local_00136014_ea_1> ea_1 = gptr<Local_00136014_ea_1>(frame.at(0x40).addr());  // (from the original)
    u32 r5_1 = ea_1->word_0;
    u32 r6_1 = ea_1->word_4;
    u32 r7_1 = ea_1->word_8;
    u32 r8_1 = ea_1->word_c;
    gptr<Local_00136014_r9_1> r9_1 = gptr<Local_00136014_r9_1>(*global_0097ea3c);
    u32 r12_1 = r9_1->word_0;
    u32 r9_2 = r9_1->word_1c;
    *frame.at<u32>(0) = r12_1;
    *frame.at<u32>(0x1c) = r9_2;  // (from the original)
    *frame.at<u8>(0) = 2;
    u32 r12_2 = *global_0097ea38;
    frame->word_18 = r6_1;
    frame->byte_3 = u8(r12_2);
    gptr<Local_00136014_ea_7> ea_7 = gptr<Local_00136014_ea_7>(frame.at(4).addr());
    ea_7->word_0 = r0;
    ea_7->word_4 = r2;
    gptr<Local_00136014_r4_1> r4_1 = gptr<Local_00136014_r4_1>(frame.at(0xc).addr());  // (from the original)
    r4_1->word_0 = r1;
    r4_1->word_4 = r5_1;
    r4_1->word_8 = r7_1;
    *frame.at<u16>(0x1c) = u16(r3);  // (from the original)
    frame->half_1e = u16(r8_1);
    u32 r0_1 = read_u32_0x0097d8bc_(r0, r1, r2, r3);
    call_0013a834(r0_1 + 0x58u, frame.at(0).addr());  // (from the original)
}

}  // namespace d_00136014
GUEST_EXPORT_FRAMED(0x00136014, d_00136014::f_00136014, 0x43f0);  // pushes {r4, r5, r6, r7, r8, r9, lr} first, as the original

// f_00136188: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
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
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
};
GUEST_OFFSET(Local_00136188_r4_1, word_0, 0x0);
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

inline constexpr u32 global_0097ea38_address = 0x0097ea38u;
inline constexpr u32 global_0097ea3c_address = 0x0097ea3cu;
inline guest::global<u8, 0x0097ea38> global_0097ea38;
inline guest::global<u32, 0x0097ea3c> global_0097ea3c;
inline constexpr guest::Function<0x00136464, u32(u32, u32, u32, u32)> read_u32_0x0097d8bc_;
inline constexpr guest::Function<0x0013a834, u32(u32, u32)> call_0013a834;

struct __attribute__((packed)) Frame_00136188 {
    u8 unknown_0[0x3];  // (not read or written by name)
    u8 byte_3;
    u8 unknown_4[0x18];  // (not read or written by name)
    u32 word_1c;
    u8 unknown_20[0x4];  // (not read or written by name)
};
GUEST_OFFSET(Frame_00136188, byte_3, 0x3);
GUEST_OFFSET(Frame_00136188, word_1c, 0x1c);
GUEST_SIZE(Frame_00136188, 0x24);

void f_00136188(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_00136188> frame;  // the original's stack frame
    gptr<Local_00136188_ea_1> ea_1 = gptr<Local_00136188_ea_1>(frame.at(0x40).addr());  // (from the original)
    u32 r6_1 = ea_1->word_4;
    u32 r7_1 = ea_1->word_8;
    u32 r8_1 = ea_1->word_c;
    u32 r3_1 = r3 | ea_1->word_0 << 0x10;  // (from the original)
    gptr<Local_00136188_r9_1> r9_1 = gptr<Local_00136188_r9_1>(*global_0097ea3c);
    u32 r12_1 = r9_1->word_0;
    u32 r9_2 = r9_1->word_1c;
    *frame.at<u32>(0) = r12_1;
    frame->word_1c = r9_2;
    *frame.at<u8>(0) = 4;
    u32 r12_2 = *global_0097ea38;
    gptr<Local_00136188_r4_1> r4_1 = gptr<Local_00136188_r4_1>(frame.at(4).addr());
    frame->byte_3 = u8(r12_2);
    r4_1->word_0 = r0;
    r4_1->word_4 = r1;
    r4_1->word_8 = r2;
    r4_1->word_c = r3_1;
    r4_1->word_10 = r6_1 | r7_1 << 0x10;  // (from the original)
    r4_1->word_14 = r8_1;
    u32 r0_1 = read_u32_0x0097d8bc_(r0, r1, r2, r3_1);
    call_0013a834(r0_1 + 0x58u, frame.at(0).addr());  // (from the original)
}

}  // namespace d_00136188
GUEST_EXPORT_FRAMED(0x00136188, d_00136188::f_00136188, 0x43f0);  // pushes {r4, r5, r6, r7, r8, r9, lr} first, as the original

// f_00136344: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
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
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_00136344_ea_7, word_0, 0x0);
GUEST_OFFSET(Local_00136344_ea_7, word_4, 0x4);

struct __attribute__((packed)) Local_00136344_r4_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_00136344_r4_1, word_0, 0x0);
GUEST_OFFSET(Local_00136344_r4_1, word_4, 0x4);
GUEST_OFFSET(Local_00136344_r4_1, word_8, 0x8);

inline constexpr u32 global_0097ea3c_address = 0x0097ea3cu;
inline guest::global<u8, 0x0097ea38> global_0097ea38;
inline guest::global<u32, 0x0097ea3c> global_0097ea3c;
inline constexpr guest::Function<0x00136464, u32(u32, u32, u32, u32)> read_u32_0x0097d8bc_;
inline constexpr guest::Function<0x0013a834, u32(u32, u32)> call_0013a834;

struct __attribute__((packed)) Frame_00136344 {
    u8 unknown_0[0x3];  // (not read or written by name)
    u8 byte_3;
    u8 unknown_4[0x20];  // (not read or written by name)
};
GUEST_OFFSET(Frame_00136344, byte_3, 0x3);
GUEST_SIZE(Frame_00136344, 0x24);

void f_00136344(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_00136344> frame;  // the original's stack frame
    u32 r1_1 = r1 | r2 << 0x10;  // (from the original)
    gptr<Local_00136344_ea_1> ea_1 = gptr<Local_00136344_ea_1>(frame.at(0x40).addr());  // (from the original)
    u32 r5_1 = ea_1->word_0;
    u32 r6_1 = ea_1->word_4;
    u32 r7_1 = ea_1->word_8;
    u32 r2_1 = r5_1 | r6_1 << 0x10;  // (from the original)
    u32 r9_1 = *global_0097ea3c;
    u32 r12_1 = *gptr<u32>(r9_1);
    gptr<Local_00136344_ea_2> ea_2 = gptr<Local_00136344_ea_2>(r9_1 + 0x18u);  // (from the original)
    u32 r8_1 = ea_2->word_0;
    u32 r9_2 = ea_2->word_4;
    *frame.at<u32>(0) = r12_1;
    gptr<Local_00136344_ea_4> ea_4 = gptr<Local_00136344_ea_4>(frame.at(0x18).addr());  // (from the original)
    ea_4->word_0 = r8_1;
    ea_4->word_4 = r9_2;
    *frame.at<u8>(0) = 3;
    frame->byte_3 = *global_0097ea38;
    gptr<Local_00136344_ea_7> ea_7 = gptr<Local_00136344_ea_7>(frame.at(4).addr());
    ea_7->word_0 = r0;
    ea_7->word_4 = r3;
    gptr<Local_00136344_r4_1> r4_1 = gptr<Local_00136344_r4_1>(frame.at(0xc).addr());  // (from the original)
    r4_1->word_0 = r1_1;
    r4_1->word_4 = r2_1;
    r4_1->word_8 = r7_1;
    u32 r0_1 = read_u32_0x0097d8bc_(r0, r1_1, r2_1, r3);
    call_0013a834(r0_1 + 0x58u, frame.at(0).addr());  // (from the original)
}

}  // namespace d_00136344
GUEST_EXPORT_FRAMED(0x00136344, d_00136344::f_00136344, 0x43f0);  // pushes {r4, r5, r6, r7, r8, r9, lr} first, as the original

// f_00136490: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00136490 {

inline guest::global<u32, 0x00974af0> global_00974af0;

u32 f_00136490() {
    return (*global_00974af0 & 7u) == 2u;
}

}  // namespace d_00136490
GUEST_EXPORT(0x00136490, d_00136490::f_00136490);

// f_00136530: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00136530 {

inline constexpr guest::Function<0x00134250, u32(u32, u32, u32, u32)> call_00134250;
inline constexpr guest::Function<0x0013a968, u32(u32, u32, u32, u32)> call_0013a968;

u32 f_00136530(u32 r0) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 r0_1 = call_0013a968(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_2 = r0_1 >> 0x1f;  // (from the original)
    if (r0_2 == 0) {
        return r0_2;
    }
    frame.release();
    return call_00134250(r0_2, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_00136530
GUEST_EXPORT(0x00136530, d_00136530::f_00136530);

// f_0013654c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0013654c {

inline constexpr guest::Function<0x00134250, u32(u32, u32, u32, u32)> call_00134250;
inline constexpr guest::Function<0x0013a9a4, u32(u32, u32, u32, u32)> call_0013a9a4;

u32 f_0013654c(u32 r0) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 r0_1 = call_0013a9a4(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_2 = r0_1 >> 0x1f;  // (from the original)
    if (r0_2 == 0) {
        return r0_2;
    }
    frame.release();
    return call_00134250(r0_2, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0013654c
GUEST_EXPORT(0x0013654c, d_0013654c::f_0013654c);

// f_001365d4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Calls call_00136598 up to twice while it fails with a retryable result; the result (one kind of failure is mapped to
// a fixed result code).
namespace d_001365d4 {

inline constexpr guest::Function<0x00134250, u32(u32, u32, u32)> call_00134250;
inline constexpr guest::Function<0x00136598, u32(u32, u32, u32, u32)> call_00136598;

u32 retry_service_call_twice(u32 r0, u32 r1_unused, u32 r2) {
    u32 r8 = r0;
    u32 r1 = 0x4000188u;  // (from the original)
    u32 r5 = 0xf9605002u;  // (from the original)
    u32 r7 = 0xc9405001u;  // (from the original)
    u32 r4 = 0u;
    u32 r6 = r5 + 0x3fcu;  // (from the original)
L_1365f8:;
    u32 r0_1 = call_00136598(r8, r1, r2, guest::cpu()->r[3]);
    u32 res_1 = r0_1 & 0x80000000u;  // (from the original)
    r1 = res_1;
    r2 = r0_1;
    if (s32(res_1) < 0) {
        if (r0_1 == r7) {
            guest::cpu()->r[1] = r1;
            return r0_1;
        }
        r1 = r0_1 & 0x3fc00u;  // (from the original)
        if (r1 != 0x2c00u) {  // (from the original)
            if (r0_1 == r6) {
                guest::cpu()->r[1] = r1;
                return r5;
            }
            u32 r0_2 = r2 >> 0x1f;  // (from the original)
            if (r0_2 != 0) {
                call_00134250(r0_2, r1, r2);
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

struct __attribute__((packed)) Object_00136718_1 {
    u32 word_0;
};
GUEST_OFFSET(Object_00136718_1, word_0, 0x0);


u32 LinkedList__clear(u32 linked_list, gptr<Object_00136718_1> sentinel) {
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
namespace d_00136764 {

struct __attribute__((packed)) Object_00136764_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_00136764_0, word_0, 0x0);

inline constexpr u32 global_00975100_address = 0x00975100u;
inline constexpr u32 global_00975104_address = 0x00975104u;
inline constexpr u32 global_00975108_address = 0x00975108u;
inline constexpr u32 global_0097510c_address = 0x0097510cu;
inline constexpr u32 global_00975110_address = 0x00975110u;
inline guest::global<u32, 0x00975100> global_00975100;
inline guest::global<u32, 0x00975104> global_00975104;
inline guest::global<u32, 0x00975108> global_00975108;
inline guest::global<u32, 0x0097510c> global_0097510c;
inline guest::global<u32, 0x00975110> global_00975110;

u32 f_00136764(gptr<Object_00136764_0> arg0) {
    u32 r0_1 = arg0->word_0;
    u32 r2_1 = *gptr<u32>(r0_1);
    u32 zf_1 = r2_1 + 0xdffffff7u == 0;  // (from the original)
    if (zf_1) {
        u32 r1_1 = *global_00975104;
        return guest::call_address<u32>(r1_1, r0_1, r1_1, r2_1, guest::cpu()->r[3]);
    }
    if (zf_1 || (r2_1 + 0xdffffff7u >> 0x1f) != (((r2_1 ^ 0x20000009u) & (r2_1 ^ r2_1 + 0xdffffff7u)) >> 0x1f)) {  // (from the original)
        if (r2_1 == 0x20000002u) {  // (from the original)
            u32 r1_2 = *global_0097510c;
            return guest::call_address<u32>(r1_2, r0_1, r1_2, r2_1, guest::cpu()->r[3]);
        }
        if (r2_1 != 0x20000004u) {  // (from the original)
            guest::cpu()->r[1] = global_00975100_address;
            return r0_1;
        }
        u32 r1_3 = *global_00975108;
        return guest::call_address<u32>(r1_3, r0_1, r1_3, r2_1, guest::cpu()->r[3]);
    }
    if (r2_1 + 0xdfffffefu == 0) {  // (from the original)
        u32 r1_4 = *global_00975100;
        return guest::call_address<u32>(r1_4, r0_1, r1_4, r2_1 + 0xdfffffefu, guest::cpu()->r[3]);  // (from the original)
    }
    if (r2_1 + 0xdfffffefu != 0x10u) {  // (from the original)
        guest::cpu()->r[1] = global_00975100_address;
        return r0_1;
    }
    u32 r1_5 = *global_00975110;
    return guest::call_address<u32>(r1_5, r0_1, r1_5, r2_1 + 0xdfffffefu, guest::cpu()->r[3]);  // (from the original)
}

}  // namespace d_00136764
GUEST_EXPORT(0x00136764, d_00136764::f_00136764);

// f_00136860: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00136860 {

struct __attribute__((packed)) Object_00136860_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_00136860_0, word_0, 0x0);

inline constexpr guest::Function<0x0013e9e4, u32(u32, u32, u32, u32)> HeapHandle__dispatch_by_kind;

struct __attribute__((packed)) Frame_00136860 {
    u32 word_0;
};
GUEST_OFFSET(Frame_00136860, word_0, 0x0);
GUEST_SIZE(Frame_00136860, 0x4);

void f_00136860(gptr<Object_00136860_0> arg0, u32 r1_unused, u32 r2_unused, u32 r3) {
    guest::StackFrameOf<Frame_00136860> frame;  // the original's stack frame
    frame->word_0 = r3;
    u32 ea_1 = arg0->word_0 + 0xc4u;  // (from the original)
    u32 r1_1 = *gptr<u32>(ea_1);
    u32 r0_1 = r1_1 == 0 ? 0u : ea_1 + r1_1;
    frame->word_0 = r0_1;
    if (r0_1 != 0) {
        HeapHandle__dispatch_by_kind(frame.at(0).addr(), r1_1, guest::cpu()->r[2], r3);
    }
}

}  // namespace d_00136860
GUEST_EXPORT_FRAMED(0x00136860, d_00136860::f_00136860, 0x4000);  // pushes {lr} first, as the original

// f_00136c9c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00136c9c {

struct __attribute__((packed)) Object_00136c9c_0 {
    u8 unknown_0[0x20];  // (not used here)
    u32 word_20;
};
GUEST_OFFSET(Object_00136c9c_0, word_20, 0x20);


void f_00136c9c(gptr<Object_00136c9c_0> arg0) {
    u32 r1_1 = arg0->word_20;
    arg0->word_20 = 0;
    guest::cpu()->r[1] = r1_1;
}

}  // namespace d_00136c9c
GUEST_EXPORT(0x00136c9c, d_00136c9c::f_00136c9c);

// f_00136cb0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00136cb0 {


u32 nw__lyt__Layout__virtual_9(gptr<nw__lyt__Layout> layout) {
    u32 r2_1 = *gptr<u32>(layout->word_0 + 0x20u);  // (from the original)
    // virtual function 8 of layout.addr() (nw__lyt__Layout)
    return guest::call_address<u32>(r2_1, layout.addr(), 0u, r2_1, guest::cpu()->r[3]);
}

}  // namespace d_00136cb0
GUEST_EXPORT(0x00136cb0, d_00136cb0::nw__lyt__Layout__virtual_9);

// f_00136d2c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00136d2c {

struct __attribute__((packed)) Object_00136d2c_0 {
    u8 unknown_0[0x10];  // (not used here)
    u32 word_10;
    u8 unknown_14[0x44];  // (not used here)
    u8 byte_58;
};
GUEST_OFFSET(Object_00136d2c_0, word_10, 0x10);
GUEST_OFFSET(Object_00136d2c_0, byte_58, 0x58);

struct __attribute__((packed)) Object_00136d2c_1 {
    u8 unknown_0[0x50];  // (not used here)
    u32 word_50;
    u8 unknown_54[0x49];  // (not used here)
    u8 byte_9d;
};
GUEST_OFFSET(Object_00136d2c_1, word_50, 0x50);
GUEST_OFFSET(Object_00136d2c_1, byte_9d, 0x9d);

struct __attribute__((packed)) Local_00136d2c_r3_1 {
    u8 unknown_0[0x50];  // (not used here)
    u32 word_50;
    u8 unknown_54[0x49];  // (not used here)
    u8 byte_9d;
};
GUEST_OFFSET(Local_00136d2c_r3_1, word_50, 0x50);
GUEST_OFFSET(Local_00136d2c_r3_1, byte_9d, 0x9d);

inline constexpr guest::Function<0x0013e7d8, u32(u32, u32, u32)> linked_list_insert_before;

void f_00136d2c(gptr<Object_00136d2c_0> arg0, gptr<Object_00136d2c_1> arg1) {
    guest::StackFrame frame(0x18);  // the original's stack frame
    u32 r0 = arg0.addr();
    u32 r1 = arg1.addr();
    u32 r14 = guest::cpu()->r[14];
    u32 r12 = r1;
    r1 = arg0->word_10;
    if (r1 != r0 + 0x10u) {  // (from the original)
        r14 = s8(arg0->byte_58);
        u32 r2 = u32(arg1->byte_9d) + arg1->word_50;
        do {
            gptr<Local_00136d2c_r3_1> r3_1 = gptr<Local_00136d2c_r3_1>(r1 - 0x108u);  // (from the original)
            if (r14 != 0) {
                u32 res_1 = r2 - 0x7fu;  // (from the original)
                u32 nf_1 = res_1 >> 0x1f;  // (from the original)
                u32 vf_1 = ((r2 ^ 0x7fu) & (r2 ^ res_1)) >> 0x1f;  // (from the original)
                u32 r4_1 = 0x7fu;  // (from the original)
                if (res_1 == 0 || nf_1 != vf_1) {
                    nf_1 = r2 >> 0x1f;  // (from the original)
                    vf_1 = 0u;
                    r4_1 = r2;
                }
                u32 r5_1 = 0u;
                if (nf_1 == vf_1) {
                    r5_1 = r4_1;
                }
                u32 r3_2 = r3_1->word_50 + u32(r3_1->byte_9d);
                if (s32(r3_2) > 0x7f) {  // (from the original)
                    r3_2 = 0x7fu;  // (from the original)
                } else if (s32(r3_2) < 0) {
                    r3_2 = 0u;
                }
                if (s32(r5_1) <= s32(r3_2)) {
                    break;
                }
            } else {
                u32 res_2 = r2 - 0x7fu;  // (from the original)
                u32 nf_2 = res_2 >> 0x1f;  // (from the original)
                u32 vf_2 = ((r2 ^ 0x7fu) & (r2 ^ res_2)) >> 0x1f;  // (from the original)
                u32 r5_2 = 0x7fu;  // (from the original)
                if (res_2 == 0 || nf_2 != vf_2) {
                    nf_2 = r2 >> 0x1f;  // (from the original)
                    vf_2 = 0u;
                    r5_2 = r2;
                }
                u32 r4_2 = 0u;
                if (nf_2 == vf_2) {
                    r4_2 = r5_2;
                }
                u32 r3_3 = r3_1->word_50 + u32(r3_1->byte_9d);
                if (s32(r3_3) > 0x7f) {  // (from the original)
                    r3_3 = 0x7fu;  // (from the original)
                } else if (s32(r3_3) < 0) {
                    r3_3 = 0u;
                }
                if (s32(r4_2) < s32(r3_3)) {
                    break;
                }
            }
            r1 = *gptr<u32>(r1);
            guest::preempt();
        } while (r1 != r0 + 0x10u);  // (from the original)
    }
    frame.release();
    linked_list_insert_before(r0 + 0xcu, r1, r12 + 0x108u);  // (from the original)
    return;
}

}  // namespace d_00136d2c
GUEST_EXPORT(0x00136d2c, d_00136d2c::f_00136d2c);

// f_00136e0c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00136e0c {

inline constexpr u32 vtable_nw__snd__SoundDataManager = 0x00901e94u;
inline constexpr u32 vtable_nw__snd__SoundDataManager_at_c = 0x00901eb4u;
inline constexpr u32 vtable_nw__snd__internal__driver__DisposeCallback = 0x00902278u;
inline constexpr guest::Function<0x0013b560, u32(u32)> nw__snd__internal__SoundArchiveLoader__SoundArchiveLoader;

u32 nw__snd__internal__driver__DisposeCallback__DisposeCallback_00136e0c(gptr<nw__snd__SoundDataManager> sound_data_manager) {
    sound_data_manager->word_0 = vtable_nw__snd__internal__driver__DisposeCallback;
    sound_data_manager->word_4 = 0;
    u32 ea_1 = sound_data_manager.addr() + 8u;
    sound_data_manager->word_8 = 0;
    nw__snd__internal__SoundArchiveLoader__SoundArchiveLoader(ea_1 + 4u);
    sound_data_manager->word_218 = 0;
    sound_data_manager->word_c = vtable_nw__snd__SoundDataManager_at_c;
    sound_data_manager->word_0 = vtable_nw__snd__SoundDataManager;
    sound_data_manager->word_21c = 0;
    return ea_1 - 8u;
}

}  // namespace d_00136e0c
GUEST_EXPORT_FRAMED(0x00136e0c, d_00136e0c::nw__snd__internal__driver__DisposeCallback__DisposeCallback_00136e0c, 0x4010);  // pushes {r4, lr} first, as the original

// f_00136f2c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00136f2c {

struct __attribute__((packed)) Object_00136f2c_0 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
};
GUEST_OFFSET(Object_00136f2c_0, word_4, 0x4);

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
inline constexpr guest::Function<0x0013c240, u32(u32, u32, u32, u32)> call_0013c240;
inline constexpr guest::Function<0x0013c2f0, u32(u32, u32, u32, u32)> call_0013c2f0;
inline constexpr guest::Function<0x0013c718, u32(u32, u32, u32, u32)> archive_file_of_item;

struct __attribute__((packed)) Frame_00136f2c {
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
GUEST_OFFSET(Frame_00136f2c, word_0, 0x0);
GUEST_OFFSET(Frame_00136f2c, word_4, 0x4);
GUEST_OFFSET(Frame_00136f2c, word_8, 0x8);
GUEST_OFFSET(Frame_00136f2c, word_c, 0xc);
GUEST_OFFSET(Frame_00136f2c, word_14, 0x14);
GUEST_OFFSET(Frame_00136f2c, word_18, 0x18);
GUEST_OFFSET(Frame_00136f2c, word_1c, 0x1c);
GUEST_OFFSET(Frame_00136f2c, word_20, 0x20);
GUEST_OFFSET(Frame_00136f2c, word_24, 0x24);
GUEST_OFFSET(Frame_00136f2c, word_28, 0x28);
GUEST_OFFSET(Frame_00136f2c, byte_2c, 0x2c);
GUEST_OFFSET(Frame_00136f2c, byte_2d, 0x2d);
GUEST_SIZE(Frame_00136f2c, 0x34);

u32 load_kind_2(gptr<Object_00136f2c_0> arg0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_00136f2c> frame;  // the original's stack frame
    u32 r0 = arg0.addr();
    u32 r4 = 0;
    u32 r9 = 0;
    u32 r8 = r0;
    u32 r4_1 = ~0u;
    u32 r5 = *frame.at<u32>(0x58);  // (from the original)
    u32 r11 = 0u;
    frame->word_8 = r4_1;
    gptr<Local_00136f2c_ea_3> ea_3 = gptr<Local_00136f2c_ea_3>(frame.at(0xc).addr());  // (from the original)
    ea_3->word_0 = r4_1;
    ea_3->word_4 = r11;
    u32 r10 = r2;
    u32 r0_1 = arg0->word_4;
    u32 r6 = r1;
    u32 r7 = r3;
    u32 r0_2 = call_0013c2f0(r0_1, r1, frame.at(8).addr(), r3);
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
                r4 = frame->word_8;
                if (frame->word_c >= r4) {
                    do {
                        frame->word_0 = r5;
                        frame->word_4 = r6;
                        r0_2 = load_sound_type_3(r8, r4, r10, r7);
                        if (r0_2 == 0) {
                            return r0_2;
                        }
                        r4 += 1u;
                        guest::preempt();
                    } while (r4 <= frame->word_c);
                }
                return 1u;
            }
            return 1u;
        }
        r6 = frame->word_8;
        if (frame->word_c >= r6) {
            r9 = frame.at(0x14).addr();  // (from the original)
        } else {
            return 1u;
        }
        do {
            if ((r7 & 1u) != 0) {
                u32 r0_7 = archive_file_of_item(*gptr<u32>(r8 + 4u), r6, r2, r3);
                frame->word_0 = r11;
                u32 r0_8 = load_file(r8, r0_7, r10, r5);
                r2 = guest::cpu()->r[2];
                r3 = guest::cpu()->r[3];
                if (r0_8 == 0) {
                    goto L_137080;
                }
            }
            if ((r7 & 0xcu) != 0) {  // (from the original)
                u32 r0_9 = ~0u;
                frame->byte_2c = u8(r11);
                frame->word_14 = r11;
                frame->byte_2d = u8(r11);
                frame->word_28 = r11;
                frame->word_18 = r0_9;
                frame->word_1c = r0_9;
                frame->word_20 = r0_9;
                frame->word_24 = r0_9;
                u32 r0_11 = call_0013c240(*gptr<u32>(r8 + 4u), r6, frame.at(0x14).addr(), r3);  // (from the original)
                r2 = guest::cpu()->r[2];
                r3 = guest::cpu()->r[3];
                if (r0_11 == 0) {
                    goto L_137080;
                } else {
                    r4 = 0u;
                }
                do {
                    u32 r1_1 = *gptr<u32>(r9 + (r4 << 2) + 4u);
                    if (r1_1 + 1u != 0) {
                        frame->word_0 = r5;
                        u32 r0_12 = load_kind_3(r8, r1_1, r10, r7);
                        r2 = guest::cpu()->r[2];
                        r3 = guest::cpu()->r[3];
                        if (r0_12 == 0) {
                            goto L_137080;
                        }
                    }
                    r4 += 1u;
                    guest::preempt();
                } while (r4 < 4u);
            }
            r6 += 1u;
            guest::preempt();
        } while (r6 <= frame->word_c);
        return 1u;
L_137080:;
        r0_2 = 0u;
    }
    return r0_2;
}

}  // namespace d_00136f2c
GUEST_EXPORT_FRAMED(0x00136f2c, d_00136f2c::load_kind_2, 0x4ff0);  // pushes {r4, r5, r6, r7, r8, r9, r10, r11, lr} first, as the original

// f_001370dc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001370dc {

struct __attribute__((packed)) Object_001370dc_0 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
};
GUEST_OFFSET(Object_001370dc_0, word_4, 0x4);

inline constexpr guest::Function<0x0013b22c, u32(u32, u32, u32, u32)> load_kind_3;
inline constexpr guest::Function<0x0013b438, u32(u32, u32, u32, u32)> load_file;
inline constexpr guest::Function<0x0013c240, u32(u32, u32, u32, u32)> call_0013c240;
inline constexpr guest::Function<0x0013c718, u32(u32, u32, u32, u32)> archive_file_of_item;

struct __attribute__((packed)) Frame_001370dc {
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
GUEST_OFFSET(Frame_001370dc, word_0, 0x0);
GUEST_OFFSET(Frame_001370dc, word_4, 0x4);
GUEST_OFFSET(Frame_001370dc, word_8, 0x8);
GUEST_OFFSET(Frame_001370dc, word_c, 0xc);
GUEST_OFFSET(Frame_001370dc, word_10, 0x10);
GUEST_OFFSET(Frame_001370dc, word_14, 0x14);
GUEST_OFFSET(Frame_001370dc, word_18, 0x18);
GUEST_OFFSET(Frame_001370dc, byte_1c, 0x1c);
GUEST_OFFSET(Frame_001370dc, byte_1d, 0x1d);
GUEST_SIZE(Frame_001370dc, 0x24);

u32 load_sound_type_1(gptr<Object_001370dc_0> arg0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_001370dc> frame;  // the original's stack frame
    u32 r0 = arg0.addr();
    u32 r4 = 0;
    u32 r9 = 0;
    u32 r0_3 = 0;
    u32 r6 = r0;
    u32 r5 = *frame.at<u32>(0x40);  // (from the original)
    u32 r8 = r2;
    u32 r7 = r3;
    if ((r3 & 1u) != 0) {
        u32 r0_2 = archive_file_of_item(arg0->word_4, r1, r2, r3);
        frame->word_0 = 0;
        r0_3 = load_file(r6, r0_2, r8, r5);
        r3 = guest::cpu()->r[3];
        if (r0_3 == 0) {
            return r0_3;
        }
    }
    if ((r7 & 0xcu) != 0) {  // (from the original)
        u32 r0_4 = ~0u;
        frame->byte_1c = 0;
        frame->word_4 = 0;
        frame->byte_1d = 0;
        frame->word_18 = 0;
        frame->word_8 = r0_4;
        frame->word_c = r0_4;
        frame->word_10 = r0_4;
        frame->word_14 = r0_4;
        r0_3 = call_0013c240(*gptr<u32>(r6 + 4u), r1, frame.at(4).addr(), r3);
        if (r0_3 == 0) {
            return r0_3;
        } else {
            r4 = 0u;
            r9 = frame.at(4).addr();
        }
        do {
            u32 r1_1 = *gptr<u32>(r9 + (r4 << 2) + 4u);
            if (r1_1 + 1u != 0) {
                frame->word_0 = r5;
                r0_3 = load_kind_3(r6, r1_1, r8, r7);
                if (r0_3 == 0) {
                    return r0_3;
                }
            }
            r4 += 1u;
            guest::preempt();
        } while (r4 < 4u);
    }
    return 1u;
}

}  // namespace d_001370dc
GUEST_EXPORT_FRAMED(0x001370dc, d_001370dc::load_sound_type_1, 0x43f0);  // pushes {r4, r5, r6, r7, r8, r9, lr} first, as the original

// f_001376d8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Replaces the owner's frame heap (destroying the old one) by a new one on the region (start, size), 4-byte aligned;
// false when the region is too small or it fails.
namespace d_001376d8 {

struct __attribute__((packed)) Object_001376d8_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_001376d8_0, word_0, 0x0);

inline constexpr guest::Function<0x0013a9e0, u32(u32, u32, u32, u32)> nw__ut__FrameHeap__FrameHeap;
inline constexpr guest::Function<0x0013edb4, u32(u32, u32)> call_0013edb4;
inline constexpr guest::Function<0x0014077c, u32(u32, u32)> call_0014077c;
inline constexpr guest::Function<0x00140900, u32(u32)> call_00140900;
inline constexpr guest::Function<0x001412f8, u32(u32, u32, u32, u32)> call_001412f8;

u32 init_frame_heap_in_region(gptr<Object_001376d8_0> owner, u32 start, u32 size) {
    u32 r0_4 = 0;
    if (owner->word_0 != 0) {
        call_001412f8(owner.addr(), start, size, guest::cpu()->r[3]);
        call_0014077c(owner->word_0, 3u);
        call_00140900(owner->word_0);
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
            r0_4 = call_0013edb4(owner.addr(), r1_2);
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
namespace d_00137830 {

struct __attribute__((packed)) Object_00137830_0 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
};
GUEST_OFFSET(Object_00137830_0, word_4, 0x4);

inline constexpr guest::Function<0x0013b72c, u32(u32, u32, u32, u32)> call_0013b72c;

void f_00137830(gptr<Object_00137830_0> arg0) {
    u32 r1 = 0;
    if (arg0->word_4 == 0) {
        return;
    }
    call_0013b72c(arg0.addr(), r1, guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_00137830
GUEST_EXPORT(0x00137830, d_00137830::f_00137830);

// f_00137848: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00137848 {

inline constexpr u32 vtable_nw__font__ResFont = 0x00902720u;
inline constexpr guest::Function<0x0013b72c, u32(u32, u32, u32, u32)> call_0013b72c;
inline constexpr guest::Function<0x0013ef10, u32(u32, u32)> nw__font__ResFontBase__destructor;

u32 nw__font__ResFont__destructor(gptr<nw__font__ResFont> res_font) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 r1_1 = res_font->word_4;
    res_font->word_0 = vtable_nw__font__ResFont;
    if (r1_1 != 0) {
        call_0013b72c(res_font.addr(), r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1_1 = guest::cpu()->r[1];
    }
    frame.release();
    return nw__font__ResFontBase__destructor(res_font.addr(), r1_1);
}

}  // namespace d_00137848
GUEST_EXPORT(0x00137848, d_00137848::nw__font__ResFont__destructor);

// f_00137878: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00137878 {

struct __attribute__((packed)) Object_00137878_0 {
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
GUEST_OFFSET(Object_00137878_0, word_0, 0x0);
GUEST_OFFSET(Object_00137878_0, word_4, 0x4);
GUEST_OFFSET(Object_00137878_0, word_8, 0x8);
GUEST_OFFSET(Object_00137878_0, word_c, 0xc);
GUEST_OFFSET(Object_00137878_0, word_10, 0x10);
GUEST_OFFSET(Object_00137878_0, word_18, 0x18);
GUEST_OFFSET(Object_00137878_0, word_1c, 0x1c);
GUEST_OFFSET(Object_00137878_0, word_20, 0x20);
GUEST_OFFSET(Object_00137878_0, word_28, 0x28);
GUEST_OFFSET(Object_00137878_0, word_2c, 0x2c);
GUEST_OFFSET(Object_00137878_0, word_30, 0x30);
GUEST_OFFSET(Object_00137878_0, word_38, 0x38);
GUEST_OFFSET(Object_00137878_0, word_3c, 0x3c);
GUEST_OFFSET(Object_00137878_0, word_40, 0x40);
GUEST_OFFSET(Object_00137878_0, word_48, 0x48);
GUEST_OFFSET(Object_00137878_0, word_4c, 0x4c);
GUEST_OFFSET(Object_00137878_0, word_50, 0x50);
GUEST_OFFSET(Object_00137878_0, word_54, 0x54);
GUEST_OFFSET(Object_00137878_0, word_58, 0x58);
GUEST_OFFSET(Object_00137878_0, word_5c, 0x5c);
GUEST_OFFSET(Object_00137878_0, byte_60, 0x60);
GUEST_OFFSET(Object_00137878_0, byte_61, 0x61);


void f_00137878(gptr<Object_00137878_0> arg0) {
    arg0->word_0 = 0;
    arg0->word_4 = 0;
    u32 r2_1 = ~2u;
    arg0->word_10 = 0;
    arg0->word_20 = 0;
    arg0->word_30 = 0;
    u32 r3_1 = ~0u;
    arg0->word_40 = 0;
    arg0->word_8 = r2_1;
    arg0->word_c = r3_1;
    arg0->word_18 = r2_1;
    arg0->word_1c = r3_1;
    arg0->word_38 = r2_1;
    arg0->word_3c = r3_1;
    arg0->word_28 = r2_1;
    arg0->word_2c = r3_1;
    arg0->word_58 = 0;
    arg0->word_5c = 0;
    arg0->byte_60 = 0;
    arg0->byte_61 = 0;
    arg0->word_48 = r2_1;
    arg0->word_4c = r3_1;
    arg0->word_50 = r2_1;
    arg0->word_54 = r3_1;
    guest::cpu()->r[1] = 0u;
}

}  // namespace d_00137878
GUEST_EXPORT_FRAMED(0x00137878, d_00137878::f_00137878, 0x70);  // pushes {r4, r5, r6} first, as the original

// f_0013796c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0013796c {

struct __attribute__((packed)) Object_0013796c_0 {
    u8 unknown_0[0x2c8];  // (not used here)
    u32 word_2c8;
    u32 word_2cc;
    u8 byte_2d0;
};
GUEST_OFFSET(Object_0013796c_0, word_2c8, 0x2c8);
GUEST_OFFSET(Object_0013796c_0, word_2cc, 0x2cc);
GUEST_OFFSET(Object_0013796c_0, byte_2d0, 0x2d0);

inline constexpr u32 global_00953658_address = 0x00953658u;
inline guest::global<u32, 0x0087bdb4> global_0087bdb4;
inline guest::global<u32, 0x0087bdb8> global_0087bdb8;
inline guest::global<u32, 0x00953658> global_00953658;
inline constexpr guest::Function<0x0013b7dc, u32(u32, u32, u32, u32)> call_0013b7dc;

void object_1c_prepare_release(gptr<Object_0013796c_0> arg0, u32 r1, u32 r2, u32 r3) {
    if (arg0->byte_2d0 == 0) {
        return;
    }
    call_0013b7dc(arg0.addr(), r1, r2, r3);
    u32 r2_1 = *global_0087bdb8;
    arg0->word_2c8 = *global_0087bdb4;
    arg0->word_2cc = r2_1;
    arg0->byte_2d0 = 0;
    *global_00953658 = 0;
    guest::cpu()->r[1] = global_00953658_address;
}

}  // namespace d_0013796c
GUEST_EXPORT_FRAMED(0x0013796c, d_0013796c::object_1c_prepare_release, 0x4010);  // pushes {r4, lr} first, as the original

// f_001379b4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001379b4 {

inline constexpr u32 global_00953658_address = 0x00953658u;
inline guest::global<u32, 0x00953658> global_00953658;
inline guest::global<u32, 0x0095365c> global_0095365c;
inline constexpr guest::Function<0x0013b80c, u32(u32, u32, u32, u32)> call_0013b80c;

u32 object_1c_finish(u32 r0) {
    u32 r0_1 = r0 + 0xcu;  // (from the original)
    *global_0095365c = 0;
    *global_00953658 = 0;
    call_0013b80c(r0_1, global_00953658_address, 0u, guest::cpu()->r[3]);
    return r0_1 - 0xcu;  // (from the original)
}

}  // namespace d_001379b4
GUEST_EXPORT_FRAMED(0x001379b4, d_001379b4::object_1c_finish, 0x4010);  // pushes {r4, lr} first, as the original

// f_001379e4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001379e4 {

struct __attribute__((packed)) Object_001379e4_0 {
    u8 byte_0;
    u8 unknown_1[0x3];  // (not used here)
    u32 word_4;
    u8 byte_8;
    u8 byte_9;
};
GUEST_OFFSET(Object_001379e4_0, byte_0, 0x0);
GUEST_OFFSET(Object_001379e4_0, word_4, 0x4);
GUEST_OFFSET(Object_001379e4_0, byte_8, 0x8);
GUEST_OFFSET(Object_001379e4_0, byte_9, 0x9);


void part_144_update(gptr<Object_001379e4_0> arg0) {
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
    offset_list->word_c = 0x10;  // (from the original)
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

inline constexpr guest::Function<0x00131280, u32(u32, u32, u32)> allocate_from_heap_00131280;
inline constexpr guest::Function<0x0013cbdc, u32(u32, u32, u32)> call_0013cbdc;

void PointerArray__allocate_2(gptr<PointerArray> array, u32 capacity, u32 heap) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    if (capacity != 0 && capacity >> 0x1f == ((capacity & (capacity ^ capacity)) >> 0x1f)) {  // (from the original)
        u32 block = allocate_from_heap_00131280(capacity << 2, heap, 4u);
        array->word_0 = block;
        frame.release();
        call_0013cbdc(array.addr() + 4u, block, capacity);
        return;
    }
}

}  // namespace d_00137d88
GUEST_EXPORT(0x00137d88, d_00137d88::PointerArray__allocate_2);

// f_00137dc4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00137dc4 {

struct __attribute__((packed)) Object_00137dc4_0 {
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
GUEST_OFFSET(Object_00137dc4_0, word_0, 0x0);
GUEST_OFFSET(Object_00137dc4_0, word_8, 0x8);
GUEST_OFFSET(Object_00137dc4_0, half_c, 0xc);
GUEST_OFFSET(Object_00137dc4_0, word_10, 0x10);
GUEST_OFFSET(Object_00137dc4_0, half_14, 0x14);
GUEST_OFFSET(Object_00137dc4_0, word_18, 0x18);
GUEST_OFFSET(Object_00137dc4_0, word_1c, 0x1c);
GUEST_OFFSET(Object_00137dc4_0, word_20, 0x20);
GUEST_OFFSET(Object_00137dc4_0, word_30, 0x30);
GUEST_OFFSET(Object_00137dc4_0, word_34, 0x34);


void f_00137dc4(gptr<Object_00137dc4_0> arg0) {
    arg0->word_0 = 0;
    arg0->word_8 = 0;
    arg0->half_c = 0;
    arg0->word_10 = 0;
    arg0->half_14 = 0;
    arg0->word_18 = 0;
    arg0->word_1c = 0;
    arg0->word_20 = ~0u;
    arg0->word_30 = 0;
    arg0->word_34 = 0;
}

}  // namespace d_00137dc4
GUEST_EXPORT(0x00137dc4, d_00137dc4::f_00137dc4);

// f_00137e84: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00137e84 {

inline constexpr guest::Function<0x001357ec, u32(u32, u32)> RecursiveLock__unlock;

u32 unlock_member_lock(u32 r0) {
    return RecursiveLock__unlock(r0 + 0x10u, guest::cpu()->r[1]);  // (from the original)
}

}  // namespace d_00137e84
GUEST_EXPORT(0x00137e84, d_00137e84::unlock_member_lock);

// f_00137e8c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00137e8c {

inline constexpr u32 vtable_sead__CriticalSection = 0x00904830u;
inline constexpr guest::Function<0x0013efb4, u32(u32, u32, u32, u32)> destroy_disposer;

u32 destroy_critical_section(gptr<sead__CriticalSection> critical_section) {
    critical_section->word_0 = vtable_sead__CriticalSection;
    return destroy_disposer(critical_section.addr(), vtable_sead__CriticalSection, guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_00137e8c
GUEST_EXPORT(0x00137e8c, d_00137e8c::destroy_critical_section);

// f_00137e9c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00137e9c {

inline constexpr u32 vtable_sead__AudioFxMemoryMgrCtr = 0x00905018u;
inline constexpr guest::Function<0x0013b910, u32(u32)> sead__AudioFxMemoryMgr__AudioFxMemoryMgr;

u32 sead__AudioFxMemoryMgrCtr__AudioFxMemoryMgrCtr(gptr<sead__AudioFxMemoryMgrCtr> audio_fx_memory_mgr_ctr) {
    sead__AudioFxMemoryMgr__AudioFxMemoryMgr(audio_fx_memory_mgr_ctr.addr());
    audio_fx_memory_mgr_ctr->word_0 = vtable_sead__AudioFxMemoryMgrCtr;
    return audio_fx_memory_mgr_ctr.addr();
}

}  // namespace d_00137e9c
GUEST_EXPORT_FRAMED(0x00137e9c, d_00137e9c::sead__AudioFxMemoryMgrCtr__AudioFxMemoryMgrCtr, 0x4010);  // pushes {r4, lr} first, as the original

// f_00137ec0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Inserts at position `index` of the list at +0x40, under the object's lock when it has one.
namespace d_00137ec0 {

struct __attribute__((packed)) Object_00137ec0_0 {
    u8 unknown_0[0x70];  // (not used here)
    u16 half_70;
};
GUEST_OFFSET(Object_00137ec0_0, half_70, 0x70);

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

void insert_into_list_40_locked(gptr<Object_00137ec0_0> owner, u32 index) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 r0_1 = owner.addr() + 0x54u;  // (from the original)
    u32 r4_1 = 0u;
    u32 r1_1 = u32(owner->half_70) & 1u;
    if (r1_1 != 0) {
        r1_1 = 1u;
    }
    if (r1_1 != 0) {
        r4_1 = r0_1;
        lock_member_lock(r0_1, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
    }
    gptr<Local_00137ec0_r5_1> r5_1 = gptr<Local_00137ec0_r5_1>(owner.addr() + 0x40u);  // (from the original)
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
namespace d_001382cc {

struct __attribute__((packed)) Object_001382cc_0 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Object_001382cc_0, word_0, 0x0);
GUEST_OFFSET(Object_001382cc_0, word_4, 0x4);

inline guest::global<u8, 0x0097e854> global_0097e854;
inline constexpr guest::Function<0x0013ff84, u32(u32)> read_u32_0x00974f54_;

void f_001382cc(gptr<Object_001382cc_0> arg0, u32 r1) {
    *global_0097e854 = 1;
    arg0->word_4 = r1;
    u32 r0_1 = read_u32_0x00974f54_(1u);
    arg0->word_0 = r0_1;
}

}  // namespace d_001382cc
GUEST_EXPORT_FRAMED(0x001382cc, d_001382cc::f_001382cc, 0x4010);  // pushes {r4, lr} first, as the original

// f_00138398: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00138398 {

inline constexpr u32 vtable_sead__AudioFx = 0x00905ac4u;

void sead__AudioFx__AudioFx(gptr<sead__AudioFx> audio_fx) {
    audio_fx->word_4 = 0;
    audio_fx->word_0 = vtable_sead__AudioFx;
    audio_fx->word_8 = 0;
    audio_fx->byte_c = 0xff;  // (from the original)
    audio_fx->word_10 = 0;
    audio_fx->word_14 = 0;
}

}  // namespace d_00138398
GUEST_EXPORT(0x00138398, d_00138398::sead__AudioFx__AudioFx);

// f_001385fc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001385fc {

inline constexpr u32 vtable_sead__ThreadMgr = 0x0090601cu;
inline constexpr guest::Function<0x0012bfec, u32(u32, u32, u32, u32)> sead__CriticalSection__CriticalSection_0012bfec;
inline constexpr guest::Function<0x0013a37c, u32(u32, u32)> ThreadLocal__set;
inline constexpr guest::Function<0x0013a38c, u32(u32)> ThreadLocal__allocate;

u32 sead__ThreadMgr__ThreadMgr(gptr<sead__ThreadMgr> thread_mgr) {
    u32 r2_1 = thread_mgr.addr() + 0x14u;  // (from the original)
    thread_mgr->word_0 = vtable_sead__ThreadMgr;
    thread_mgr->word_18 = r2_1;
    thread_mgr->word_1c = 0;
    u32 ea_1 = thread_mgr.addr() + 0x14u;  // (from the original)
    thread_mgr->word_14 = r2_1;
    sead__CriticalSection__CriticalSection_0012bfec(ea_1 + 0xcu, thread_mgr.addr() + 0x18u, r2_1, guest::cpu()->r[3]);  // (from the original)
    thread_mgr->word_3c = 0;
    u32 r0_3 = ThreadLocal__allocate(ea_1 + 0x2cu);  // (from the original)
    ThreadLocal__set(r0_3, 0u);
    return r0_3 - 0x40u;  // (from the original)
}

}  // namespace d_001385fc
GUEST_EXPORT_FRAMED(0x001385fc, d_001385fc::sead__ThreadMgr__ThreadMgr, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_001386f4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Releases the split's handle and takes one from the count of handles in use.
namespace d_001386f4 {

inline constexpr u32 global_00ae55f0_address = 0x00ae55f0u;
inline guest::global<u8, 0x00975c32> global_00975c32;
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
    release_owned_handle(split.addr() + 0xcu, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    lock_member_lock(global_00ae55f0_address, r1_1);
    u32 r1_2 = u32(*global_00975c32) - 1u;
    *global_00975c32 = u8(r1_2);
    frame.release();
    unlock_member_lock(global_00ae55f0_address, r1_2);
    return;
}

}  // namespace d_001386f4
GUEST_EXPORT(0x001386f4, d_001386f4::LoadSplit__release_handle);

// f_00138998: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00138998 {

struct __attribute__((packed)) Object_00138998_0 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Object_00138998_0, word_0, 0x0);
GUEST_OFFSET(Object_00138998_0, word_4, 0x4);

inline constexpr guest::Function<0x00139724, u32(u32, u32, u32, u32)> free_object_and_buffer;

void release_and_clear_pair_2(gptr<Object_00138998_0> pair) {
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
namespace d_001389c0 {

inline constexpr guest::Function<0x002f76ad, u32(u32, u32, u32, u32)> destroy_array_elements;

u32 f_001389c0(u32 r0) {
    destroy_array_elements(r0, 0x13bedcu, 0x40u, 8u);  // (from the original)
    return r0;
}

}  // namespace d_001389c0
GUEST_EXPORT_FRAMED(0x001389c0, d_001389c0::f_001389c0, 0x4010);  // pushes {r4, lr} first, as the original

// f_001389e4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001389e4 {


void do_nothing_001389e4(u32 r0) {
}

}  // namespace d_001389e4
GUEST_EXPORT_FRAMED(0x001389e4, d_001389e4::do_nothing_001389e4, 0x4010);  // pushes {r4, lr} first, as the original

// f_00138a00: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00138a00 {


void do_nothing_00138a00(u32 r0) {
}

}  // namespace d_00138a00
GUEST_EXPORT_FRAMED(0x00138a00, d_00138a00::do_nothing_00138a00, 0x4010);  // pushes {r4, lr} first, as the original

// f_00138a1c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
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
        u32 list = *gptr<u32>(r0 + (index << 2) + 0x14u);  // (from the original)
        if (list != 0) {
            RecursiveLock__lock(list + 4u, index, guest::cpu()->r[2], guest::cpu()->r[3]);
            u32 r0_2 = List__last_index(list + 0x10u);  // (from the original)
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
namespace d_00138f08 {

struct __attribute__((packed)) Object_00138f08_0 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
};
GUEST_OFFSET(Object_00138f08_0, word_4, 0x4);

inline constexpr guest::Function<0x0013f718, u32(u32, u32)> call_0013f718;
inline constexpr guest::Function<0x00141728, u32(u32, u32)> HandleTable__resolve;

u32 archive_sound_type(gptr<Object_00138f08_0> arg0) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 entry = HandleTable__resolve(*gptr<u32>(arg0->word_4 + 0x3cu), guest::cpu()->r[1]);  // (from the original)
    if (entry == 0) {
        return entry;
    }
    frame.release();
    return call_0013f718(entry, guest::cpu()->r[1]);
}

}  // namespace d_00138f08
GUEST_EXPORT(0x00138f08, d_00138f08::archive_sound_type);

// f_00138f30: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
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
namespace d_001391ec {

inline constexpr u32 global_00974a7c_address = 0x00974a7cu;

void f_001391ec(u32 r0, u32 r1, u32 r2) {
    u32 res_2 = 0;
    u32 res_4 = 0;
    u32 r7 = global_00974a7c_address;
    u32 r3 = *gptr<u32>(r7);
    u32 r12_1 = *gptr<u32>(r7 + 4);
    if (r12_1 <= r3 + ((r1 & ~1u) + (r1 >> 7 << 1) << 2) + 8u) {
        *gptr<u32>(r7) = r12_1;
    } else {
        u32 r6 = 0u;
        if (r1 >= 0u && r1 != 0) {
            u32 r8 = r6 - 0x100000u;  // (from the original)
            do {
                u32 r4_1 = r1 - r6;
                if (r4_1 > 0x80u) {  // (from the original)
                    r4_1 = 0x80u;  // (from the original)
                }
                u32 r12 = r4_1 >> 1;
                *gptr<u32>(r3) = r2;
                u32 r3_1 = r3 + 4u;
                u32 r4 = r8 + (r4_1 << 0x14) | r0 + r6 | 0x80000000u | 0xf0000u;  // (from the original)
                u32 res_1 = r12 + 0x80000001u;  // (from the original)
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
                    u32 vf_1 = (r5 & (r5 ^ res_3)) >> 0x1f;  // (from the original)
                    if (res_3 != 0 && s32(r5) >= 0) {
                        r4 = r3 - 4u;
                        r5 = s32(r5) >> 1;
                    }
                    if (res_3 != 0 && res_3 >> 0x1f == vf_1) {  // (from the original)
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
                r6 += 0x80u;  // (from the original)
                guest::preempt();
            } while (r6 < r1);
        }
        *gptr<u32>(r7) = r3;
    }
}

}  // namespace d_001391ec
GUEST_EXPORT_FRAMED(0x001391ec, d_001391ec::f_001391ec, 0x1f0);  // pushes {r4, r5, r6, r7, r8} first, as the original

// f_00139448: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00139448 {


u32 context_block_slot() {
    u32 r0_1 = guest::cpu()->tls + 0x5cu;  // (from the original)
    return r0_1;
}

}  // namespace d_00139448
GUEST_EXPORT(0x00139448, d_00139448::context_block_slot);

// f_0013959c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0013959c {

inline guest::global<u32, 0x008fac7c> global_008fac7c;
inline guest::global<u32, 0x008fac88> global_008fac88;
inline constexpr guest::Function<0x0012ede8, u32(u32, u32)> call_virtual_12_if_present;
inline constexpr guest::Function<0x00134250, u32(u32, u32)> call_00134250;
inline constexpr guest::Function<0x0013d85c, u32(u32, u32)> call_0013d85c;
inline constexpr guest::Function<0x0013df14, u32(u32, u32, u32, u32)> call_0013df14;

struct __attribute__((packed)) Frame_0013959c {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u8 unknown_18[0x4];  // (not read or written by name)
};
GUEST_OFFSET(Frame_0013959c, word_0, 0x0);
GUEST_OFFSET(Frame_0013959c, word_4, 0x4);
GUEST_OFFSET(Frame_0013959c, word_8, 0x8);
GUEST_OFFSET(Frame_0013959c, word_c, 0xc);
GUEST_OFFSET(Frame_0013959c, word_10, 0x10);
GUEST_OFFSET(Frame_0013959c, word_14, 0x14);
GUEST_SIZE(Frame_0013959c, 0x1c);

u32 cfl_file_exists_13959c(u32 r0) {
    guest::StackFrameOf<Frame_0013959c> frame;  // the original's stack frame
    u32 r4_1 = 0;
    frame->word_4 = 0;
    frame->word_8 = 0;
    frame->word_c = 0;
    frame->word_10 = 0;
    frame->word_14 = 0;
    u32 r1_1 = *global_008fac7c;
    u32 r3_1 = frame.at(0).addr();
    frame->word_0 = r1_1;
    *gptr<u32>(frame.at(0).addr() + *gptr<u32>(r1_1 - 0x30u)) = *global_008fac88;  // (from the original)
    u32 r0_2 = call_0013df14(r3_1 + 4u, r0, 1u, r3_1);
    u32 r1_2 = (r0_2 & 0x3fc00u) >> 0xa;  // (from the original)
    if (r1_2 == 0x11u) {  // (from the original)
        r1_2 = r0_2 & 0x3ffu;  // (from the original)
        r4_1 = !(s32(r1_2) >= 0x64 && s32(r1_2) <= 0xb3);  // (from the original)
    } else {
        r4_1 = 1u;
    }
    if (s32(r0_2) >= 0) {
        if ((frame->word_4 & ~1u) != 0) {
            u32 r0_3 = frame->word_4;
            if ((r0_3 & 1u) != 0) {
                call_00134250(r0_3, r1_2);
                r1_2 = guest::cpu()->r[1];
            }
            call_virtual_12_if_present(frame->word_4 & ~1u, r1_2);
            frame->word_4 = 0;
        }
    }
    call_0013d85c(frame.at(0).addr(), 0u);
    return r4_1;
}

}  // namespace d_0013959c
GUEST_EXPORT_FRAMED(0x0013959c, d_0013959c::cfl_file_exists_13959c, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_00139674: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00139674 {

inline constexpr u32 global_00975280_address = 0x00975280u;
inline constexpr u32 global_00975284_address = 0x00975284u;
inline guest::global<u32, 0x00975284> global_00975284;

u32 cfl_query_139674(u32 r0) {
    u32 r1_1 = *global_00975284;
    u32 r1_2 = *gptr<u32>(r1_1 == 0u ? global_00975280_address : r1_1 + 0xc4u);  // (from the original)
    u32 r0_1 = r1_2 & lsl_r(1u, r0 & 0xff);  // (from the original)
    if (r0_1 != 0) {
        r0_1 = 1u;
    }
    guest::cpu()->r[1] = r1_2;
    return r0_1;
}

}  // namespace d_00139674
GUEST_EXPORT(0x00139674, d_00139674::cfl_query_139674);

// f_001396a4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001396a4 {

inline constexpr guest::Function<0x0013d028, u32(u32)> cfl_state_flag_set;
inline constexpr guest::Function<0x0013d138, u32(u32)> read_u32_0x00975284_;

u32 cfl_query_1396a4(u32 r0) {
    u32 r0_1 = cfl_state_flag_set(r0);
    if (r0_1 == 0) {
        return r0_1;
    }
    u32 r0_2 = read_u32_0x00975284_(r0_1);
    return *gptr<u8>(r0_2 + 0xc0u);  // (from the original)
}

}  // namespace d_001396a4
GUEST_EXPORT_FRAMED(0x001396a4, d_001396a4::cfl_query_1396a4, 0x4010);  // pushes {r4, lr} first, as the original

// f_001396c0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001396c0 {

struct __attribute__((packed)) Local_001396c0_r3_3 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_001396c0_r3_3, word_0, 0x0);
GUEST_OFFSET(Local_001396c0_r3_3, word_4, 0x4);

inline constexpr guest::Function<0x0013d028, u32(u32, u32, u32, u32)> cfl_state_flag_set;
inline constexpr guest::Function<0x0013d138, u32(u32)> read_u32_0x00975284_;
inline constexpr guest::Function<0x0013d24c, u32(u32, u32, u32, u32)> call_0013d24c;

u32 cfl_set_callback_1396c0(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 r0_1 = cfl_state_flag_set(r0, r1, r2, r3);
    if (r0_1 != 0) {
        u32 r0_2 = read_u32_0x00975284_(r0_1);
        *gptr<u8>(r0_2 + 0xc0u) = 1;  // (from the original)
        u32 r0_3 = read_u32_0x00975284_(r0_2);
        *gptr<u32>(r0_3 + 0xc8u) = 0xa;  // (from the original)
    }
    gptr<Local_001396c0_r3_3> r3_3 = gptr<Local_001396c0_r3_3>(r0 + 0x24u);  // (from the original)
    r3_3->word_0 = 0;
    r3_3->word_4 = r1;
    *gptr<u32>(r0 + 0x18u) = 0;  // (from the original)
    *gptr<u32>(r0 + 0x20u) = 0;  // (from the original)
    *gptr<u32>(r0 + 0x1cu) = 0;  // (from the original)
    *gptr<u32>(r0 + 0xcu) = 0x13d24c;  // (from the original)
    *gptr<u8>(r0 + 0x10u) = 0;  // (from the original)
    frame.release();
    return call_0013d24c(r0, 0u, 0x13d24cu, r3_3.addr());  // (from the original)
}

}  // namespace d_001396c0
GUEST_EXPORT(0x001396c0, d_001396c0::cfl_set_callback_1396c0);

// f_00139724: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Frees the object's buffer (+0xc) when it has one, then the object, through the free hook.
namespace d_00139724 {

struct __attribute__((packed)) Object_00139724_0 {
    u8 unknown_0[0xc];  // (not used here)
    u32 word_c;
};
GUEST_OFFSET(Object_00139724_0, word_c, 0xc);

inline constexpr guest::Function<0x0013d060, u32(u32, u32, u32, u32)> call_free_hook;

void free_object_and_buffer(gptr<Object_00139724_0> object) {
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
namespace d_00139a90 {

inline constexpr u32 global_00975274_address = 0x00975274u;
inline constexpr u32 global_00975280_address = 0x00975280u;
inline constexpr guest::Function<0x001396a4, u32(u32, u32, u32, u32)> cfl_query_1396a4;

u32 cfl_handle_result_139a90(u32 r0_unused, u32 r1) {
    u32 r4 = global_00975274_address;
L_139a98:;
    u32 r0_1 = *gptr<u32>(r4 + 4u);
    if (*gptr<u32>(r4 + 0x10u) != 0) {  // (from the original)
        u32 r0_2 = cfl_query_1396a4(r0_1, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        if (r0_2 != 0) {
            guest::preempt();
            goto L_139a98;
        }
        u32 r0_3 = *gptr<u32>(r4 + 0x10u);  // (from the original)
        u32 r1_1 = *gptr<u32>(r0_3 == 0 ? global_00975280_address : r0_3 + 0xc4u);  // (from the original)
        if ((r1_1 & 4u) != 0) {
            guest::cpu()->r[1] = r1_1;
            return 3u;
        }
        r1 = *gptr<u32>(r0_3 == 0 ? global_00975280_address : r0_3 + 0xc4u);  // (from the original)
        if ((r1 & 8u) == 0) {
            r0_1 = *gptr<u32>(r0_3 + 0xc8u);  // (from the original)
        } else {
            guest::cpu()->r[1] = r1;
            return 3u;
        }
    }
    if (r0_1 != 0xau) {  // (from the original)
        guest::cpu()->r[1] = r1;
        return r0_1;
    }
    guest::preempt();
    goto L_139a98;
}

}  // namespace d_00139a90
GUEST_EXPORT_FRAMED(0x00139a90, d_00139a90::cfl_handle_result_139a90, 0x4010);  // pushes {r4, lr} first, as the original

// f_00139bb0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00139bb0 {


void cfl_setup_region_139bb0(u32 r0, u32 r1, u32 r2) {
    u32 r4 = guest::cpu()->r[4];
    u32 r6 = guest::cpu()->r[6];
    u32 ea_1 = r1 + r2 - 2u;
    *gptr<u16>(ea_1) = 0;
    u32 r5 = ea_1;
    if (r2 >= 0u && r2 != 0) {
        r4 = 0x1021u;  // (from the original)
        r6 = 0xffffu;  // (from the original)
    }
    r0 = uxth(r0);
    u32 r12 = 0u;
    if (r2 >= 0u && r2 != 0) {
        do {
            u32 r3 = 4u;
            do {
                u32 r0_1 = (r0 & 0x8000u) == 0 ? r6 & r0 << 1 : uxth(r4 ^ r0 << 1);  // (from the original)
                r0 = (r0_1 & 0x8000u) == 0 ? r6 & r0_1 << 1 : uxth(r4 ^ r0_1 << 1);  // (from the original)
                r3 -= 1u;
                guest::preempt();
            } while (r3 != 0);
            u32 v_1 = *gptr<u8>(r1);
            r1 += 1u;
            r12 += 1u;
            r0 ^= v_1;
            guest::preempt();
        } while (r12 < r2);
    }
    *gptr<u16>(r5) = u16(rev16(r0));
    guest::cpu()->r[1] = r1;
}

}  // namespace d_00139bb0
GUEST_EXPORT_FRAMED(0x00139bb0, d_00139bb0::cfl_setup_region_139bb0, 0xf0);  // pushes {r4, r5, r6, r7} first, as the original

// f_00139c30: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00139c30 {

inline constexpr u32 global_00975274_address = 0x00975274u;
inline constexpr u32 global_00975278_address = 0x00975278u;
inline constexpr u32 global_00975280_address = 0x00975280u;
inline constexpr u32 global_00975284_address = 0x00975284u;
inline guest::global<u32, 0x00975278> global_00975278;
inline guest::global<u32, 0x00975284> global_00975284;
inline constexpr guest::Function<0x001396a4, u32(u32, u32)> cfl_query_1396a4;

u32 cfl_run_139c30(u32 r0_unused, u32 r1) {
    u32 r0_1 = *global_00975278;
    if (*global_00975284 == 0) {
        return r0_1;
    }
    u32 r0_2 = cfl_query_1396a4(r0_1, r1);
    if (r0_2 != 0) {
        return 0xau;  // (from the original)
    }
    u32 r0_3 = *global_00975284;
    u32 r1_2 = *gptr<u32>(r0_3 == 0 ? global_00975280_address : r0_3 + 0xc4u);  // (from the original)
    if ((r1_2 & 4u) != 0) {
        guest::cpu()->r[1] = r1_2;
        return 3u;
    }
    u32 r1_3 = *gptr<u32>(r0_3 == 0 ? global_00975280_address : r0_3 + 0xc4u);  // (from the original)
    if ((r1_3 & 8u) == 0) {
        u32 r0_4 = *gptr<u32>(r0_3 + 0xc8u);  // (from the original)
        guest::cpu()->r[1] = r1_3;
        return r0_4;
    }
    guest::cpu()->r[1] = r1_3;
    return 3u;
}

}  // namespace d_00139c30
GUEST_EXPORT_FRAMED(0x00139c30, d_00139c30::cfl_run_139c30, 0x4010);  // pushes {r4, lr} first, as the original

// f_00139dac: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00139dac {

struct __attribute__((packed)) Object_00139dac_0 {
    u8 unknown_0[0x14];  // (not used here)
    u8 byte_14;
    u8 unknown_15[0x17];  // (not used here)
    u32 word_2c;
};
GUEST_OFFSET(Object_00139dac_0, byte_14, 0x14);
GUEST_OFFSET(Object_00139dac_0, word_2c, 0x2c);

inline constexpr guest::Function<0x0013fd78, u32(u32, u32, u32, u32)> call_0013fd78;
inline constexpr guest::Function<0x0014041c, u32(u32)> call_0014041c;
inline constexpr guest::Function<0x001404f0, u32(u32)> call_001404f0;
inline constexpr guest::Function<0x00140530, u32(u32)> call_00140530;
inline constexpr guest::Function<0x00140564, u32(u32)> call_00140564;
inline constexpr guest::Function<0x002f88b8, u32(u32)> release_owned_object;

void f_00139dac(gptr<Object_00139dac_0> arg0) {
    if (arg0->byte_14 != 0) {
        call_0013fd78(arg0.addr() + 0x34u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        u32 r0_2 = arg0->byte_14;
        if (r0_2 == 2u) {
            u32 r0_3 = call_00140530(r0_2);
            if (s32(r0_3) >= 0) {
                arg0->word_2c = 0;
                arg0->byte_14 = 1;
            }
            *gptr<u8>(arg0.addr() + 0x16u) = 0;  // (from the original)
            *gptr<u8>(arg0.addr() + 0x17u) = 0;  // (from the original)
        }
        u32 r0_4 = call_001404f0(0u);
        u32 r0_5 = call_0014041c(r0_4);
        call_00140564(r0_5);
        u32 r0_6 = *gptr<u32>(arg0.addr() + 0x28u);  // (from the original)
        if (r0_6 != 0) {
            release_owned_object(r0_6);
            *gptr<u32>(arg0.addr() + 0x28u) = 0;  // (from the original)
        }
        *gptr<u8>(arg0.addr() + 0x15u) = 2;  // (from the original)
        *gptr<u8>(arg0.addr() + 0x14u) = 0;  // (from the original)
    }
}

}  // namespace d_00139dac
GUEST_EXPORT_FRAMED(0x00139dac, d_00139dac::f_00139dac, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0013a37c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
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

// f_0013a414: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0013a414 {

struct __attribute__((packed)) Object_0013a414_0 {
    u8 unknown_0[0x8];  // (not used here)
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Object_0013a414_0, word_8, 0x8);
GUEST_OFFSET(Object_0013a414_0, word_c, 0xc);

inline guest::global<u32, 0x008a27c4> global_008a27c4;
inline constexpr guest::Function<0x0013a5a4, u32(u32, u32)> call_0013a5a4;
inline constexpr guest::Function<0x0013a62c, u32(u32)> store_global_word_13a62c;

u32 f_0013a414(gptr<Object_0013a414_0> arg0) {
    u32 r4_1 = arg0->word_c;
    if (r4_1 == 0) {
        r4_1 = arg0->word_8;
    }
    u32 r0_2 = call_0013a5a4(*global_008a27c4, arg0.addr());
    if (s32(r0_2) >= 0) {
        store_global_word_13a62c(r4_1);
    }
    return r0_2;
}

}  // namespace d_0013a414
GUEST_EXPORT_FRAMED(0x0013a414, d_0013a414::f_0013a414, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0013a63c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0013a63c {

inline constexpr u32 global_00ae0aa0_address = 0x00ae0aa0u;
inline guest::global<u8, 0x00974b99> global_00974b99;
inline guest::global<u8, 0x00974b9a> global_00974b9a;
inline guest::global<u8, 0x00974b9c> global_00974b9c;
inline guest::global<u8, 0x00974b9d> global_00974b9d;
inline constexpr guest::Function<0x00135748, u32(u32, u32, u32, u32)> RecursiveLock__lock;
inline constexpr guest::Function<0x001357ec, u32(u32)> RecursiveLock__unlock;
inline constexpr guest::Function<0x0013e360, u32(u32, u32, u32, u32)> call_0013e360;
inline constexpr guest::Function<0x001400b4, u32(u32)> call_001400b4;
inline constexpr guest::Function<0x001402b0, u32(u32)> call_001402b0;

void f_0013a63c(gptr<nn__cec__CTR__MessageBox> message_box, u32 r1) {
    message_box->word_4 = 0;
    if (*global_00974b99 != 0) {
        call_0013e360(message_box.addr(), 0u, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
    }
    RecursiveLock__lock(global_00ae0aa0_address, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    if (*global_00974b9c != 0) {
        call_001402b0(message_box->word_3a8);
        *global_00974b9c = 0;
    }
    RecursiveLock__unlock(global_00ae0aa0_address);
    RecursiveLock__lock(global_00ae0aa0_address, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    if (*global_00974b9d != 0) {
        call_001402b0(message_box->word_558);
        *global_00974b9d = 0;
    }
    RecursiveLock__unlock(global_00ae0aa0_address);
    if (*global_00974b9a != 0) {
        call_001400b4(0u);
        *global_00974b9a = 0;
    }
    if (message_box->byte_8 != 0) {
        message_box->byte_8 = 0;
    }
}

}  // namespace d_0013a63c
GUEST_EXPORT_FRAMED(0x0013a63c, d_0013a63c::f_0013a63c, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

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
        if (*gptr<u32>(child + 0x18u) > address || address >= *gptr<u32>(child + 0x1cu)) {  // (from the original)
            guest::preempt();
            goto L_13a708;
        }
        r0_1 = call_find_innermost_region(child + 0xcu, address);  // (from the original)
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
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_0013a768_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_0013a768_ea_1, word_4, 0x4);
GUEST_OFFSET(Local_0013a768_ea_1, word_8, 0x8);


struct __attribute__((packed)) Frame_0013a768 {
    u32 word_0;
    u32 word_4;
    u8 unknown_8[0x4];  // (not read or written by name)
};
GUEST_OFFSET(Frame_0013a768, word_0, 0x0);
GUEST_OFFSET(Frame_0013a768, word_4, 0x4);
GUEST_SIZE(Frame_0013a768, 0xc);

void fill_words(u32 begin, u32 end, u32 value) {
    guest::StackFrameOf<Frame_0013a768> frame;  // the original's stack frame
    u32 r1_2 = 0;
    gptr<Local_0013a768_ea_1> ea_1 = gptr<Local_0013a768_ea_1>(frame.at(0).addr());
    ea_1->word_0 = begin;
    ea_1->word_4 = end;
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

struct __attribute__((packed)) Local_0013a9e0_r4_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u8 unknown_c[0xc];  // (not used here)
    u32 word_18;
    u32 word_1c;
    u32 word_20;
};
GUEST_OFFSET(Local_0013a9e0_r4_1, word_0, 0x0);
GUEST_OFFSET(Local_0013a9e0_r4_1, word_4, 0x4);
GUEST_OFFSET(Local_0013a9e0_r4_1, word_8, 0x8);
GUEST_OFFSET(Local_0013a9e0_r4_1, word_18, 0x18);
GUEST_OFFSET(Local_0013a9e0_r4_1, word_1c, 0x1c);
GUEST_OFFSET(Local_0013a9e0_r4_1, word_20, 0x20);

inline constexpr u32 vtable_nw__ut__FrameHeap = 0x009012acu;
inline constexpr guest::Function<0x0013e75c, u32(u32, u32, u32, u32)> HeapBase__initialize;

struct __attribute__((packed)) Frame_0013a9e0 {
    u32 word_0;
};
GUEST_OFFSET(Frame_0013a9e0, word_0, 0x0);
GUEST_SIZE(Frame_0013a9e0, 0x4);

u32 nw__ut__FrameHeap__FrameHeap(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_0013a9e0> frame;  // the original's stack frame
    u32 r1_1 = r1 + r0;
    frame->word_0 = r3;
    u32 r3_1 = r1_1 & ~3u;
    gptr<Local_0013a9e0_r4_1> r4_1 = gptr<Local_0013a9e0_r4_1>(r0 + 3u & ~3u);
    if (s32(r4_1.addr() - r3_1) <= 0 && r3_1 - r4_1.addr() >= 0x34u) {  // (from the original)
        if (r4_1.addr() != 0) {
            r4_1->word_4 = 0;
            r4_1->word_8 = 0;
            r4_1->word_1c = r4_1.addr() + 0x1cu;  // (from the original)
            r4_1->word_18 = 0;
            r4_1->word_0 = vtable_nw__ut__FrameHeap;
            r4_1->word_20 = r4_1.addr() + 0x1cu;  // (from the original)
        }
        frame->word_0 = r2;
        HeapBase__initialize(r4_1.addr(), 0x46524d48u, r4_1.addr() + 0x34u, r3_1);  // (from the original)
        gptr<Local_0013a9e0_ea_1> ea_1 = gptr<Local_0013a9e0_ea_1>(r4_1.addr() + 0xcu);  // (from the original)
        u32 r0_1 = ea_1->word_0;
        u32 r1_3 = ea_1->word_4;
        gptr<Local_0013a9e0_ea_2> ea_2 = gptr<Local_0013a9e0_ea_2>(r4_1.addr() + 0x28u);  // (from the original)
        ea_2->word_0 = r0_1;
        ea_2->word_4 = r1_3;
        ea_2->word_8 = 0;
        guest::cpu()->r[1] = r1_3;
        return r4_1.addr();
    }
    guest::cpu()->r[1] = r1_1;
    return 0u;
}

}  // namespace d_0013a9e0
GUEST_EXPORT_FRAMED(0x0013a9e0, d_0013a9e0::nw__ut__FrameHeap__FrameHeap, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_0013ad90: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0013ad90 {

inline constexpr u32 global_00975138_address = 0x00975138u;
inline guest::global<u32, 0x00975138> global_00975138;

u32 release_target(u32 r0) {
    u32 r0_1 = *global_00975138;
    u32 r2_1 = *gptr<u32>(*gptr<u32>(r0_1) + 0xcu);  // (from the original)
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

struct __attribute__((packed)) Object_0013adac_1 {
    u32 word_0;
    u8 unknown_4[0x4];  // (not used here)
    u32 word_8;
};
GUEST_OFFSET(Object_0013adac_1, word_0, 0x0);
GUEST_OFFSET(Object_0013adac_1, word_8, 0x8);

inline constexpr guest::Function<0x0013c850, u32(u32)> BankFile__info_block;

void BankFileReader__initialize(gptr<BankFileReader> reader, gptr<Object_0013adac_1> file) {
    reader->word_0 = 0;
    reader->word_4 = 0;
    reader->byte_8 = 0;
    if (file.addr() == 0) {
        guest::cpu()->r[1] = file.addr();
        return;
    }
    u32 r1_1 = file->word_0;
    if (r1_1 != 0x4b4e4243u) {  // (from the original)
        guest::cpu()->r[1] = r1_1;
        return;
    }
    u32 r1_2 = file->word_8 + 0xff000000u;  // (from the original)
    if (r1_2 > 0x100u) {  // (from the original)
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
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(GroupFileReader, word_0, 0x0);
GUEST_OFFSET(GroupFileReader, word_4, 0x4);
GUEST_OFFSET(GroupFileReader, word_8, 0x8);

struct __attribute__((packed)) Object_0013ae10_1 {
    u32 word_0;
    u8 unknown_4[0x4];  // (not used here)
    u32 word_8;
};
GUEST_OFFSET(Object_0013ae10_1, word_0, 0x0);
GUEST_OFFSET(Object_0013ae10_1, word_8, 0x8);

inline constexpr guest::Function<0x0013f8cc, u32(u32)> GroupFile__file_block;
inline constexpr guest::Function<0x0013f934, u32(u32, u32)> GroupFile__info_block;
inline constexpr guest::Function<0x0013f9a0, u32(u32)> GroupFile__infox_block;

void GroupFileReader__initialize(gptr<GroupFileReader> reader, gptr<Object_0013ae10_1> file) {
    u32 r1 = file.addr();
    reader->word_0 = 0;
    reader->word_4 = 0;
    reader->word_8 = 0;
    if (file->word_0 == 0x50524743u && file->word_8 + 0xff000000u <= 0x10000u) {  // (from the original)
        u32 info = GroupFile__info_block(r1, r1);
        u32 files = GroupFile__file_block(r1);
        u32 infox = GroupFile__infox_block(r1);
        r1 = guest::cpu()->r[1];
        if (info != 0 && files != 0) {
            r1 = info + 8u;
            reader->word_0 = r1;
            reader->word_4 = files + 8u;
            if (infox != 0) {
                reader->word_8 = infox + 8u;
            }
        }
    }
    guest::cpu()->r[1] = r1;
}

}  // namespace d_0013ae10
GUEST_EXPORT_FRAMED(0x0013ae10, d_0013ae10::GroupFileReader__initialize, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_0013b034: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0013b034 {

struct __attribute__((packed)) Object_0013b034_0 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
};
GUEST_OFFSET(Object_0013b034_0, word_4, 0x4);

inline constexpr guest::Function<0x0013b438, u32(u32, u32, u32, u32)> load_file;
inline constexpr guest::Function<0x0013c718, u32(u32, u32)> archive_file_of_item;
inline constexpr guest::Function<0x0013ea78, u32(u32, u32, u32, u32)> call_0013ea78;
inline constexpr guest::Function<0x0013f2e4, u32(u32, u32, u32, u32)> call_0013f2e4;

struct __attribute__((packed)) Frame_0013b034 {
    u32 word_0;
    u32 word_4;
    u8 unknown_8[0x4];  // (not read or written by name)
    u8 byte_c;
    u8 unknown_d[0x7];  // (not read or written by name)
};
GUEST_OFFSET(Frame_0013b034, word_0, 0x0);
GUEST_OFFSET(Frame_0013b034, word_4, 0x4);
GUEST_OFFSET(Frame_0013b034, byte_c, 0xc);
GUEST_SIZE(Frame_0013b034, 0x14);

u32 f_0013b034(gptr<Object_0013b034_0> arg0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_0013b034> frame;  // the original's stack frame
    u32 r4_1 = *frame.at<u32>(0x34);  // (from the original)
    frame->word_4 = ~0u;
    frame->byte_c = 0;
    u32 r6_1 = *frame.at<u32>(0x30);  // (from the original)
    u32 r0_2 = call_0013f2e4(arg0->word_4, r1, frame.at(4).addr(), r3);
    u32 r1_1 = guest::cpu()->r[1];
    if (r0_2 != 0) {
        if (frame->byte_c != 0) {
            frame->word_0 = r4_1;
            r0_2 = call_0013ea78(arg0.addr(), r1, r2, r3);
            r1_1 = guest::cpu()->r[1];
            if (r0_2 == 0) {
                return r0_2;
            }
        } else {
            r1_1 = r1;
            if ((r6_1 & 8u) != 0) {
                u32 r0_4 = archive_file_of_item(arg0->word_4, r1_1);
                frame->word_0 = 1;
                r0_2 = load_file(arg0.addr(), r0_4, r3, r4_1);
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
GUEST_EXPORT_FRAMED(0x0013b034, d_0013b034::f_0013b034, 0x43f0);  // pushes {r4, r5, r6, r7, r8, r9, lr} first, as the original

// f_0013b560: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0013b560 {

inline constexpr u32 vtable_nw__snd__internal__SoundArchiveLoader = 0x009021d0u;

void nw__snd__internal__SoundArchiveLoader__SoundArchiveLoader(gptr<nw__snd__internal__SoundArchiveLoader> sound_archive_loader) {
    sound_archive_loader->word_4 = 0;
    sound_archive_loader->word_0 = vtable_nw__snd__internal__SoundArchiveLoader;
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

struct __attribute__((packed)) Object_0013b584_1 {
    u32 word_0;
    u8 unknown_4[0x4];  // (not used here)
    u32 word_8;
};
GUEST_OFFSET(Object_0013b584_1, word_0, 0x0);
GUEST_OFFSET(Object_0013b584_1, word_8, 0x8);

inline constexpr guest::Function<0x0013c348, u32(u32)> WaveSoundFile__info_block;

void WaveSoundFileReader__initialize(gptr<WaveSoundFileReader> reader, gptr<Object_0013b584_1> file) {
    reader->word_0 = 0;
    reader->word_4 = 0;
    if (file->word_0 != 0x44535743u || file->word_8 + 0xff000000u > 0x100u) {  // (from the original)
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
namespace d_0013b6e0 {

inline constexpr guest::Function<0x00135748, u32(u32, u32, u32, u32)> RecursiveLock__lock;
inline constexpr guest::Function<0x001357ec, u32(u32, u32)> RecursiveLock__unlock;
inline constexpr guest::Function<0x0013ecd8, u32(u32, u32)> call_0013ecd8;
inline constexpr guest::Function<0x00140f54, u32(u32)> call_00140f54;
inline constexpr guest::Function<0x00140fac, u32(u32, u32)> call_00140fac;
inline constexpr guest::Function<0x001411ec, u32(u32, u32)> call_001411ec;

void f_0013b6e0(u32 r0, u32 r1) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 r5_1 = r0 + 4u;
    RecursiveLock__lock(r5_1, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_2 = call_0013ecd8(r0 + 0x10u, r1);  // (from the original)
    u32 r0_3 = call_00140f54(r0_2);
    u32 r0_4 = call_00140fac(r0_3, 1u);
    call_001411ec(r0_3, r0_4);
    frame.release();
    RecursiveLock__unlock(r5_1, guest::cpu()->r[1]);
    return;
}

}  // namespace d_0013b6e0
GUEST_EXPORT(0x0013b6e0, d_0013b6e0::f_0013b6e0);

// f_0013b7a0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0013b7a0 {

struct __attribute__((packed)) Object_0013b7a0_0 {
    u8 unknown_0[0xc];  // (not used here)
    u32 word_c;
};
GUEST_OFFSET(Object_0013b7a0_0, word_c, 0xc);

inline constexpr guest::Function<0x0013eeb8, u32(u32, u32, u32, u32)> call_0013eeb8;
inline constexpr guest::Function<0x00142070, u32(u32, u32, u32, u32)> call_00142070;

void res_font_set_buffer(gptr<Object_0013b7a0_0> arg0, u32 r1) {
    u32 r0 = arg0.addr();
    u32 r4_1 = r1;
    u32 r5_1 = arg0->word_c;
    u32 r6_1 = r0;
    if (r5_1 != r4_1) {
        if (r5_1 != 0) {
            r0 = call_0013eeb8(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
            r1 = guest::cpu()->r[1];
        }
        if (r4_1 != 0) {
            r0 = r6_1;
        }
        arg0->word_c = r4_1;
        if (r4_1 != 0) {
            call_00142070(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        }
    }
}

}  // namespace d_0013b7a0
GUEST_EXPORT_FRAMED(0x0013b7a0, d_0013b7a0::res_font_set_buffer, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0013b8e0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0013b8e0 {

inline constexpr u32 vtable_sead__CriticalSection = 0x00904830u;
inline constexpr guest::Function<0x0012f154, u32(u32)> RecursiveLock__initialize;
inline constexpr guest::Function<0x001320cc, u32(u32, u32, u32, u32)> sead__IDisposer__IDisposer_001320cc;

u32 sead__CriticalSection__CriticalSection_0013b8e0(gptr<sead__CriticalSection> critical_section, u32 r1) {
    sead__IDisposer__IDisposer_001320cc(critical_section.addr(), r1, 1u, guest::cpu()->r[3]);
    critical_section->word_0 = vtable_sead__CriticalSection;
    critical_section->word_10 = 0;
    RecursiveLock__initialize(critical_section.addr() + 0x10u);  // (from the original)
    return critical_section.addr();
}

}  // namespace d_0013b8e0
GUEST_EXPORT_FRAMED(0x0013b8e0, d_0013b8e0::sead__CriticalSection__CriticalSection_0013b8e0, 0x4010);  // pushes {r4, lr} first, as the original

// f_0013b910: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0013b910 {

inline constexpr u32 vtable_sead__AudioFxMemoryMgr = 0x00904ce0u;

void sead__AudioFxMemoryMgr__AudioFxMemoryMgr(gptr<sead__AudioFxMemoryMgr> audio_fx_memory_mgr) {
    audio_fx_memory_mgr->word_4 = 0;
    audio_fx_memory_mgr->word_0 = vtable_sead__AudioFxMemoryMgr;
    audio_fx_memory_mgr->word_8 = 0;
}

}  // namespace d_0013b910
GUEST_EXPORT(0x0013b910, d_0013b910::sead__AudioFxMemoryMgr__AudioFxMemoryMgr);

// f_0013b92c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0013b92c {

struct __attribute__((packed)) Object_0013b92c_2 {
    u32 word_0;
};
GUEST_OFFSET(Object_0013b92c_2, word_0, 0x0);

inline constexpr u32 vtable_sead__SafeStringBase_char_ = 0x009047f8u;
inline constexpr u32 vtable_sead__Thread = 0x00905a58u;
inline constexpr u32 vtable_sead__Thread_at_18 = 0x00905aa8u;
inline constexpr guest::Function<0x0012f204, u32(u32, u32)> check_result;
inline constexpr guest::Function<0x00132174, u32(u32, u32, u32, u32)> sead__IDisposer__IDisposer_00132174;
inline constexpr guest::Function<0x00137d88, u32(u32, u32, u32)> PointerArray__allocate_2;
inline constexpr guest::Function<0x00137dc4, u32(u32, u32, u32, u32)> call_00137dc4;
inline constexpr guest::Function<0x00137eb4, u32(u32, u32)> store_word_constant_pack_0x0_00137eb4;
inline constexpr guest::Function<0x0013d00c, u32(u32, u32, u32)> call_0013d00c;
inline constexpr guest::Function<0x0013e164, u32(u32, u32)> call_0013e164;

struct __attribute__((packed)) Frame_0013b92c {
    u32 word_0;
};
GUEST_OFFSET(Frame_0013b92c, word_0, 0x0);
GUEST_SIZE(Frame_0013b92c, 0x4);

u32 sead__SafeStringBase_char___SafeStringBase_0013b92c(gptr<sead__Thread> thread, u32 r1, gptr<Object_0013b92c_2> arg2, u32 r3) {
    guest::StackFrameOf<Frame_0013b92c> frame;  // the original's stack frame
    frame->word_0 = r3;
    sead__IDisposer__IDisposer_00132174(thread.addr(), r1, arg2.addr(), r3);
    thread->word_10 = vtable_sead__SafeStringBase_char_;
    thread->word_14 = 0x8ae11c;  // (from the original)
    thread->word_0 = vtable_sead__Thread;
    thread->word_18 = vtable_sead__Thread_at_18;
    call_00137dc4(thread.addr() + 0x1cu, thread.addr(), vtable_sead__Thread_at_18, vtable_sead__SafeStringBase_char_);  // (from the original)
    thread->word_54 = 0;
    thread->word_58 = 0;
    thread->word_5c = 0;
    thread->word_60 = 0;
    thread->word_64 = 0;
    thread->word_68 = 0;
    store_word_constant_pack_0x0_00137eb4(thread.addr() + 0x6cu, thread.addr());  // (from the original)
    thread->byte_70 = 1;
    thread->word_74 = ~0x80000000u;  // (from the original)
    thread->word_78 = r3;
    thread->word_7c = 1;
    thread->word_80 = arg2.addr();
    thread->word_84 = 0;
    u32 r0_4 = call_0013d00c(frame.at(0).addr(), arg2->word_0, thread.addr() + 0x74u);  // (from the original)
    u32 r1_3 = r0_4 >> 0x1f;  // (from the original)
    if (r1_3 != 0) {
        check_result(r0_4, r1_3);
        r1_3 = guest::cpu()->r[1];
    }
    u32 r0_6 = call_0013e164(frame->word_0, r1_3);
    thread->word_60 = thread.addr();
    thread->word_88 = r0_6;
    thread->word_8c = ~1u;
    PointerArray__allocate_2(thread.addr() + 0x1cu, 0x20u, r1);  // (from the original)
    return thread.addr();
}

}  // namespace d_0013b92c
GUEST_EXPORT_FRAMED(0x0013b92c, d_0013b92c::sead__SafeStringBase_char___SafeStringBase_0013b92c, 0x43f0);  // pushes {r4, r5, r6, r7, r8, r9, lr} first, as the original

// f_0013bee0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0013bee0 {

struct __attribute__((packed)) Local_0013bee0_r4_3 {
    u8 unknown_0[0x58];  // (not used here)
    u32 word_58;
    u8 unknown_5c[0x10];  // (not used here)
    u32 word_6c;
};
GUEST_OFFSET(Local_0013bee0_r4_3, word_58, 0x58);
GUEST_OFFSET(Local_0013bee0_r4_3, word_6c, 0x6c);

struct __attribute__((packed)) Local_0013bee0_r5_2 {
    u8 unknown_0[0x68c];  // (not used here)
    u32 word_68c;
    u8 unknown_690[0xc4];  // (not used here)
    u32 word_754;
};
GUEST_OFFSET(Local_0013bee0_r5_2, word_68c, 0x68c);
GUEST_OFFSET(Local_0013bee0_r5_2, word_754, 0x754);

struct __attribute__((packed)) Local_0013bee0_r5_5 {
    u8 unknown_0[0x134];  // (not used here)
    u32 word_134;
    u8 unknown_138[0x45c];  // (not used here)
    u32 word_594;
};
GUEST_OFFSET(Local_0013bee0_r5_5, word_134, 0x134);
GUEST_OFFSET(Local_0013bee0_r5_5, word_594, 0x594);

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
inline constexpr guest::Function<0x0013ef18, u32(u32)> call_0013ef18;
inline constexpr guest::Function<0x0013efa0, u32(u32)> store_word_0x00905568_;
inline constexpr guest::Function<0x002f76ad, u32(u32, u32, u32, u32)> destroy_array_elements;

u32 SoundEnvMgr__SoundEnvMgr_0013bee0(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r0_2 = SoundSharedObjMgr__destructor(r0 + 0xbc8u, r1, r2, r3);  // (from the original)
    u32 r5_1 = r0_2 - 0xbc8u;  // (from the original)
    *gptr<u32>(r5_1 + 0xb00u) = vtable_SoundEnvMgr;  // (from the original)
    u32 r4_1 = r5_1 + 0xb00u;  // (from the original)
    destroy_array_elements(r5_1 + 0xb98u, 0x13d404u, 0x14u, 2u);  // (from the original)
    destroy_array_elements(r4_1 + 0x2cu, 0x137d74u, 4u, 2u);  // (from the original)
    detach_from_parent(r4_1 + 0x28u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    detach_from_parent(r4_1 + 0x24u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    detach_from_parent(r4_1 + 0x20u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_9 = SoundFxMgr__destructor(r5_1 + 0x860u);  // (from the original)
    gptr<Local_0013bee0_r5_2> r5_2 = gptr<Local_0013bee0_r5_2>(r0_9 - 0x860u);  // (from the original)
    r5_2->word_754 = vtable_SoundBgmMgr;
    u32 r4_2 = r5_2.addr() + 0x754u;  // (from the original)
    destroy_array_elements(r5_2.addr() + 0x824u, 0x137d74u, 4u, 2u);  // (from the original)
    detach_from_parent(r4_2 + 0x50u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    detach_from_parent(r4_2 + 0x40u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    detach_from_parent(r4_2 + 0x34u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    detach_from_parent(r4_2 + 0x10u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    gptr<Local_0013bee0_r4_3> r4_3 = gptr<Local_0013bee0_r4_3>(r5_2.addr() + 0x68cu);  // (from the original)
    r5_2->word_68c = vtable_SoundMelodyMgr;
    detach_from_parent(r5_2.addr() + 0x748u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r5_3 = r4_3.addr() + 0x6cu;  // (from the original)
    r4_3->word_6c = vtable_SoundMelodyPlayerOneSeqTimeTone;
    call_0013ef18(r5_3);
    *gptr<u32>(r5_3) = vtable_SoundMelodyPlayerOneSeqBase;
    detach_from_parent(r5_3 + 8u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r4_3->word_58 = vtable_SoundMelodyPlayerOneSeqBase;
    detach_from_parent(r4_3.addr() + 0x60u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    SoundMelodyPlayerBase__destructor(r4_3.addr() + 0xcu);  // (from the original)
    gptr<Local_0013bee0_r5_5> r5_5 = gptr<Local_0013bee0_r5_5>(r4_3.addr() - 0x68cu);  // (from the original)
    r5_5->word_594 = vtable_SoundDoubutsugoMgr;
    u32 r4_4 = r5_5.addr() + 0x594u;  // (from the original)
    destroy_array_elements(r5_5.addr() + 0x664u, 0x137d74u, 4u, 9u);  // (from the original)
    detach_from_parent(r4_4 + 0x18u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    destroy_array_elements(r4_4 + 0xcu, 0x137d74u, 4u, 3u);  // (from the original)
    r5_5->word_134 = vtable_SoundVolumeMgr;
    destroy_array_elements(r5_5.addr() + 0x328u, 0x13d598u, 0x1cu, 0x12u);  // (from the original)
    destroy_array_elements((r5_5.addr() + 0x134u) + 0xcu, 0x13fd70u, 0x1cu, 0xbu);  // (from the original)
    store_word_0x00905568_(r5_5.addr() + 0x100u);  // (from the original)
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    u32 r5 = r5_5.addr() + 0x1cu;  // (from the original)
    u32 r4 = 0u;
    do {
        u32 r0_24 = r5;
        if (r4 < 8u) {
            r0_24 = r5 + (r4 << 2);
        }
        detach_from_parent(r0_24, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r4 += 1u;
        guest::preempt();
    } while (s32(r4) < 8);
    destroy_array_elements(r5, 0x137d74u, 4u, 8u);  // (from the original)
    return r5 - 0x1cu;  // (from the original)
}

}  // namespace d_0013bee0
GUEST_EXPORT_FRAMED(0x0013bee0, d_0013bee0::SoundEnvMgr__SoundEnvMgr_0013bee0, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0013c0e8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0013c0e8 {

struct __attribute__((packed)) Object_0013c0e8_0 {
    u8 unknown_0[0xc];  // (not used here)
    u8 byte_c;
};
GUEST_OFFSET(Object_0013c0e8_0, byte_c, 0xc);


u32 state_is_1_or_2(gptr<Object_0013c0e8_0> object) {
    u32 r1_1 = object->byte_c;
    u32 r0_1 = (r1_1 == 1u || object->byte_c == 2u) ? 1u : 0u;
    guest::cpu()->r[1] = r1_1;
    return r0_1;
}

}  // namespace d_0013c0e8
GUEST_EXPORT(0x0013c0e8, d_0013c0e8::state_is_1_or_2);

// f_0013c348: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
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
    u32 r3 = r0 + 0x14u;  // (from the original)
    u32 r5 = r0;
    r0 = 0u;
    u32 r2 = 0x6800u;  // (from the original)
    u32 r1 = r0;
    if (s32(r12) <= 0) {
        return r0;
    }
    do {
        if (*gptr<u16>(r3 + r1 * 0xcu) == r2) {  // (from the original)
            u32 res_1 = r3 + r1 * 0xcu;  // (from the original)
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
        r1 += 1u;
        guest::preempt();
    } while (s32(r12) > s32(r1));
    return r0;
}

}  // namespace d_0013c348
GUEST_EXPORT_FRAMED(0x0013c348, d_0013c348::WaveSoundFile__info_block, 0x30);  // pushes {r4, r5} first, as the original

// f_0013c3c0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Entry `index` of the table at +word_c when its kind is 0x4900: its data; null otherwise.
namespace d_0013c3c0 {

struct __attribute__((packed)) Object_0013c3c0_0 {
    u8 unknown_0[0xc];  // (not used here)
    u32 word_c;
};
GUEST_OFFSET(Object_0013c3c0_0, word_c, 0xc);

struct __attribute__((packed)) Local_0013c3c0_r1_1 {
    u8 unknown_0[0x4];  // (not used here)
    u16 half_4;
    u8 unknown_6[0x2];  // (not used here)
    u32 word_8;
};
GUEST_OFFSET(Local_0013c3c0_r1_1, half_4, 0x4);
GUEST_OFFSET(Local_0013c3c0_r1_1, word_8, 0x8);


u32 section_4900_at(gptr<Object_0013c3c0_0> arg0, u32 r1) {
    u32 r0_1 = arg0.addr() + arg0->word_c;
    if (*gptr<u32>(r0_1) <= r1) {
        guest::cpu()->r[1] = r1;
        return 0u;
    }
    gptr<Local_0013c3c0_r1_1> r1_1 = gptr<Local_0013c3c0_r1_1>(r0_1 + (r1 << 3));
    if (r1_1->half_4 == 0x4900u) {  // (from the original)
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

struct __attribute__((packed)) Object_0013c3f4_0 {
    u8 unknown_0[0x14];  // (not used here)
    u32 word_14;
};
GUEST_OFFSET(Object_0013c3f4_0, word_14, 0x14);

struct __attribute__((packed)) Local_0013c3f4_r1_1 {
    u8 unknown_0[0x4];  // (not used here)
    u16 half_4;
    u8 unknown_6[0x2];  // (not used here)
    u32 word_8;
};
GUEST_OFFSET(Local_0013c3f4_r1_1, half_4, 0x4);
GUEST_OFFSET(Local_0013c3f4_r1_1, word_8, 0x8);


u32 section_4902_at(gptr<Object_0013c3f4_0> arg0, u32 r1) {
    u32 r0_1 = arg0.addr() + arg0->word_14;
    if (*gptr<u32>(r0_1) <= r1) {
        guest::cpu()->r[1] = r1;
        return 0u;
    }
    gptr<Local_0013c3f4_r1_1> r1_1 = gptr<Local_0013c3f4_r1_1>(r0_1 + (r1 << 3));
    if (r1_1->half_4 == 0x4902u) {  // (from the original)
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
namespace d_0013c430 {

inline constexpr u32 global_00981880_address = 0x00981880u;
inline constexpr guest::Function<0x00141a9c, u32(u32, u32, u32)> SparseArray__get;

struct __attribute__((packed)) Frame_0013c430 {
    u32 word_0;
};
GUEST_OFFSET(Frame_0013c430, word_0, 0x0);
GUEST_SIZE(Frame_0013c430, 0x4);

u32 f_0013c430(u32 r0, u32 r1_unused, u32 r2_unused, u32 r3) {
    guest::StackFrameOf<Frame_0013c430> frame;  // the original's stack frame
    frame->word_0 = r3;
    u32 found = SparseArray__get(r0 + 4u, frame.at(0).addr(), 9u);
    if (found == 0) {
        return global_00981880_address;
    }
    u32 r0_3 = frame->word_0 + r0;
    return r0_3 + *gptr<u32>(r0_3 + 4u);
}

}  // namespace d_0013c430
GUEST_EXPORT_FRAMED(0x0013c430, d_0013c430::f_0013c430, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_0013c46c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0013c46c {

inline constexpr guest::Function<0x00141a9c, u32(u32, u32, u32)> SparseArray__get;

struct __attribute__((packed)) Frame_0013c46c {
    u32 word_0;
};
GUEST_OFFSET(Frame_0013c46c, word_0, 0x0);
GUEST_SIZE(Frame_0013c46c, 0x4);

u32 f_0013c46c(u32 r0, u32 r1_unused, u32 r2_unused, u32 r3) {
    guest::StackFrameOf<Frame_0013c46c> frame;  // the original's stack frame
    frame->word_0 = r3;
    u32 found = SparseArray__get(r0 + 4u, frame.at(0).addr(), 0u);
    return found == 0 ? 0x40u : frame->word_0 & 0xffu;  // (from the original)
}

}  // namespace d_0013c46c
GUEST_EXPORT_FRAMED(0x0013c46c, d_0013c46c::f_0013c46c, 0x4000);  // pushes {lr} first, as the original

// f_0013c494: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0013c494 {

inline constexpr guest::Function<0x00141a9c, u32(u32, u32, u32)> SparseArray__get;

struct __attribute__((packed)) Frame_0013c494 {
    u32 word_0;
};
GUEST_OFFSET(Frame_0013c494, word_0, 0x0);
GUEST_SIZE(Frame_0013c494, 0x4);

u32 f_0013c494(u32 r0, u32 r1_unused, u32 r2_unused, u32 r3) {
    guest::StackFrameOf<Frame_0013c494> frame;  // the original's stack frame
    frame->word_0 = r3;
    u32 found = SparseArray__get(r0 + 4u, frame.at(0).addr(), 2u);
    if (found == 0) {
        return found;
    }
    return frame->word_0 >> 8u & 0xffu;  // (from the original)
}

}  // namespace d_0013c494
GUEST_EXPORT_FRAMED(0x0013c494, d_0013c494::f_0013c494, 0x4000);  // pushes {lr} first, as the original

// f_0013c4c0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0013c4c0 {

inline constexpr guest::Function<0x00141a9c, u32(u32, u32, u32)> SparseArray__get;

struct __attribute__((packed)) Frame_0013c4c0 {
    u32 word_0;
};
GUEST_OFFSET(Frame_0013c4c0, word_0, 0x0);
GUEST_SIZE(Frame_0013c4c0, 0x4);

u32 f_0013c4c0(u32 r0, u32 r1_unused, u32 r2_unused, u32 r3) {
    guest::StackFrameOf<Frame_0013c4c0> frame;  // the original's stack frame
    frame->word_0 = r3;
    u32 found = SparseArray__get(r0 + 4u, frame.at(0).addr(), 2u);
    return found == 0 ? 0x40u : frame->word_0 & 0xffu;  // (from the original)
}

}  // namespace d_0013c4c0
GUEST_EXPORT_FRAMED(0x0013c4c0, d_0013c4c0::f_0013c4c0, 0x4000);  // pushes {lr} first, as the original

// f_0013c4e8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0013c4e8 {

struct __attribute__((packed)) Object_0013c4e8_0 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
};
GUEST_OFFSET(Object_0013c4e8_0, word_4, 0x4);


void f_0013c4e8(gptr<Object_0013c4e8_0> arg0) {
    u32 r0 = arg0.addr();
    u32 res_1 = 0;
    u32 r6 = r0 + 4u;
    u32 r12 = 0u;
    u32 r4 = arg0->word_4;
    u32 r2 = 3u;
    r0 = r12;
    u32 r1 = r12;
    u32 r3 = 4u;
    u32 r5 = 1u;
    do {
        if ((r4 & lsl_r(r5, r1 & 0xff)) != 0) {  // (from the original)
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
GUEST_EXPORT_FRAMED(0x0013c4e8, d_0013c4e8::f_0013c4e8, 0xf0);  // pushes {r4, r5, r6, r7} first, as the original

// f_0013c55c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0013c55c {

inline constexpr guest::Function<0x00141a9c, u32(u32, u32, u32)> SparseArray__get;

struct __attribute__((packed)) Frame_0013c55c {
    u32 word_0;
};
GUEST_OFFSET(Frame_0013c55c, word_0, 0x0);
GUEST_SIZE(Frame_0013c55c, 0x4);

u32 f_0013c55c(u32 r0, u32 r1_unused, u32 r2_unused, u32 r3) {
    guest::StackFrameOf<Frame_0013c55c> frame;  // the original's stack frame
    frame->word_0 = r3;
    u32 found = SparseArray__get(r0 + 4u, frame.at(0).addr(), 1u);
    return found == 0 ? 0x60u : frame->word_0 & 0xffu;  // (from the original)
}

}  // namespace d_0013c55c
GUEST_EXPORT_FRAMED(0x0013c55c, d_0013c55c::f_0013c55c, 0x4000);  // pushes {lr} first, as the original

// f_0013c584: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0013c584 {

struct __attribute__((packed)) Object_0013c584_0 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
    u8 byte_8;
};
GUEST_OFFSET(Object_0013c584_0, word_4, 0x4);
GUEST_OFFSET(Object_0013c584_0, byte_8, 0x8);

inline constexpr guest::Function<0x0013c8bc, u32(u32, u32)> adjusted_this_0x4__0013c8bc;

u32 f_0013c584(gptr<Object_0013c584_0> arg0) {
    u32 r1_1 = arg0->byte_8;
    if (r1_1 == 0) {
        guest::cpu()->r[1] = r1_1;
        return 0u;
    }
    return adjusted_this_0x4__0013c8bc(arg0->word_4, r1_1);
}

}  // namespace d_0013c584
GUEST_EXPORT(0x0013c584, d_0013c584::f_0013c584);

// f_0013c5a0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0013c5a0 {

struct __attribute__((packed)) Object_0013c5a0_0 {
    u8 unknown_0[0x8];  // (not used here)
    u32 word_8;
};
GUEST_OFFSET(Object_0013c5a0_0, word_8, 0x8);


u32 f_0013c5a0(gptr<Object_0013c5a0_0> arg0) {
    u32 r0_1 = arg0->word_8;
    if (r0_1 != 0) {
        r0_1 = *gptr<u32>(r0_1);
    }
    return r0_1;
}

}  // namespace d_0013c5a0
GUEST_EXPORT(0x0013c5a0, d_0013c5a0::f_0013c5a0);

// f_0013c5b0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0013c5b0 {

struct __attribute__((packed)) Object_0013c5b0_0 {
    u8 unknown_0[0x8];  // (not used here)
    u32 word_8;
};
GUEST_OFFSET(Object_0013c5b0_0, word_8, 0x8);

struct __attribute__((packed)) Object_0013c5b0_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Object_0013c5b0_1, word_0, 0x0);
GUEST_OFFSET(Object_0013c5b0_1, word_4, 0x4);

struct __attribute__((packed)) Local_0013c5b0_r0_2 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0013c5b0_r0_2, word_0, 0x0);
GUEST_OFFSET(Local_0013c5b0_r0_2, word_4, 0x4);


u32 f_0013c5b0(gptr<Object_0013c5b0_0> arg0, gptr<Object_0013c5b0_1> arg1, u32 r2) {
    u32 r0_1 = arg0->word_8;
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
GUEST_EXPORT(0x0013c5b0, d_0013c5b0::f_0013c5b0);

// f_0013c5f0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0013c5f0 {

struct __attribute__((packed)) Object_0013c5f0_0 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Object_0013c5f0_0, word_0, 0x0);
GUEST_OFFSET(Object_0013c5f0_0, word_4, 0x4);

struct __attribute__((packed)) Object_0013c5f0_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Object_0013c5f0_1, word_0, 0x0);
GUEST_OFFSET(Object_0013c5f0_1, word_4, 0x4);

struct __attribute__((packed)) Local_0013c5f0_r2_1 {
    u32 word_0;
    u8 unknown_4[0x4];  // (not used here)
    u32 word_8;
};
GUEST_OFFSET(Local_0013c5f0_r2_1, word_0, 0x0);
GUEST_OFFSET(Local_0013c5f0_r2_1, word_8, 0x8);


u32 f_0013c5f0(gptr<Object_0013c5f0_0> arg0, gptr<Object_0013c5f0_1> arg1, u32 r2) {
    u32 r3_1 = arg0->word_0;
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
    arg1->word_4 = r2_2 + 1u == 0 ? 0u : arg0->word_4 + r2_2;
    return 1u;
}

}  // namespace d_0013c5f0
GUEST_EXPORT(0x0013c5f0, d_0013c5f0::f_0013c5f0);

// f_0013c644: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0013c644 {

struct __attribute__((packed)) Object_0013c644_0 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
};
GUEST_OFFSET(Object_0013c644_0, word_4, 0x4);

struct __attribute__((packed)) Object_0013c644_1 {
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
GUEST_OFFSET(Object_0013c644_1, word_0, 0x0);
GUEST_OFFSET(Object_0013c644_1, word_4, 0x4);
GUEST_OFFSET(Object_0013c644_1, byte_d, 0xd);
GUEST_OFFSET(Object_0013c644_1, byte_e, 0xe);
GUEST_OFFSET(Object_0013c644_1, byte_f, 0xf);
GUEST_OFFSET(Object_0013c644_1, byte_10, 0x10);
GUEST_OFFSET(Object_0013c644_1, float_14, 0x14);

struct __attribute__((packed)) Local_0013c644_r0_6 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0013c644_r0_6, word_0, 0x0);
GUEST_OFFSET(Local_0013c644_r0_6, word_4, 0x4);

inline constexpr guest::Function<0x0013c3b4, u32(u32)> adjusted_this_0x4__0013c3b4;
inline constexpr guest::Function<0x0013c3c0, u32(u32, u32, u32, u32)> section_4900_at;
inline constexpr guest::Function<0x0013c3f4, u32(u32, u32)> section_4902_at;
inline constexpr guest::Function<0x0013c430, u32(u32)> call_0013c430;
inline constexpr guest::Function<0x0013c46c, u32(u32)> call_0013c46c;
inline constexpr guest::Function<0x0013c494, u32(u32)> call_0013c494;
inline constexpr guest::Function<0x0013c4c0, u32(u32)> call_0013c4c0;
inline constexpr guest::Function<0x0013c4e8, u32(u32, u32, u32)> call_0013c4e8;
inline constexpr guest::Function<0x0013c55c, u32(u32)> call_0013c55c;
inline constexpr guest::Function<0x0013ca2c, u32(u32, u32)> call_0013ca2c;

u32 f_0013c644(gptr<Object_0013c644_0> arg0, gptr<Object_0013c644_1> arg1, u32 r2, u32 r3, float S0) {
    u32 r0_1 = arg0->word_4;
    u32 r0_2 = section_4900_at(r0_1, r2, r2, r3);
    u32 r0_3 = section_4902_at(r0_2, r3);
    u32 r0_5 = adjusted_this_0x4__0013c3b4(arg0->word_4);
    u32 r2_3 = *gptr<u32>(r0_5);
    u32 r1_2 = *gptr<u32>(r0_3);
    if (r2_3 > r1_2) {
        gptr<Local_0013c644_r0_6> r0_6 = gptr<Local_0013c644_r0_6>(r0_5 + (r1_2 << 3) + 4u);
        if (r0_6.addr() != 0) {
            u32 r1_3 = r0_6->word_0;
            arg1->word_0 = r1_3;
            arg1->word_4 = r0_6->word_4;
            call_0013c4e8(r0_3, r1_3, r2_3);
            float S0_4 = guest::cpu()->s[0];
            arg1->float_14 = S0_4;
            guest::cpu()->s[0] = S0_4;
            u32 r0_7 = call_0013c430(r0_3);
            call_0013ca2c(arg1.addr() + 8u, r0_7);
            u32 r0_9 = call_0013c46c(r0_3);
            arg1->byte_d = u8(r0_9);
            u32 r0_10 = call_0013c4c0(r0_3);
            arg1->byte_e = u8(r0_10);
            u32 r0_11 = call_0013c494(r0_3);
            arg1->byte_f = u8(r0_11);
            u32 r0_12 = call_0013c55c(r0_3);
            arg1->byte_10 = u8(r0_12);
            return 1u;
        }
    }
    guest::cpu()->r[1] = r1_2;
    return 0u;
}

}  // namespace d_0013c644
GUEST_EXPORT_FRAMED(0x0013c644, d_0013c644::f_0013c644, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0013c700: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0013c700 {

struct __attribute__((packed)) Object_0013c700_0 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
    u8 unknown_8[0x4];  // (not used here)
    u8 byte_c;
};
GUEST_OFFSET(Object_0013c700_0, word_4, 0x4);
GUEST_OFFSET(Object_0013c700_0, byte_c, 0xc);


u32 f_0013c700(gptr<Object_0013c700_0> arg0) {
    u32 r1_1 = arg0->byte_c;
    u32 r0_1 = r1_1 == 0 ? 0u : *gptr<u32>(arg0->word_4);
    guest::cpu()->r[1] = r1_1;
    return r0_1;
}

}  // namespace d_0013c700
GUEST_EXPORT(0x0013c700, d_0013c700::f_0013c700);

// f_0013c728: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0013c728 {

struct __attribute__((packed)) Object_0013c728_0 {
    u8 unknown_0[0x3c];  // (not used here)
    u32 word_3c;
};
GUEST_OFFSET(Object_0013c728_0, word_3c, 0x3c);

struct __attribute__((packed)) Object_0013c728_2 {
    u32 word_0;
    u32 word_4;
    u8 byte_8;
    u8 byte_9;
};
GUEST_OFFSET(Object_0013c728_2, word_0, 0x0);
GUEST_OFFSET(Object_0013c728_2, word_4, 0x4);
GUEST_OFFSET(Object_0013c728_2, byte_8, 0x8);
GUEST_OFFSET(Object_0013c728_2, byte_9, 0x9);

struct __attribute__((packed)) Local_0013c728_r0_4 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0013c728_r0_4, word_0, 0x0);
GUEST_OFFSET(Local_0013c728_r0_4, word_4, 0x4);

inline constexpr guest::Function<0x0013f5e8, u32(u32)> call_0013f5e8;
inline constexpr guest::Function<0x0013f610, u32(u32)> call_0013f610;
inline constexpr guest::Function<0x0013f718, u32(u32)> call_0013f718;
inline constexpr guest::Function<0x0013f748, u32(u32)> adjusted_this_0x10__0013f748;
inline constexpr guest::Function<0x00141728, u32(u32, u32, u32, u32)> HandleTable__resolve;

u32 f_0013c728(gptr<Object_0013c728_0> arg0, u32 r1_unused, gptr<Object_0013c728_2> arg2) {
    u32 entry_2 = HandleTable__resolve(arg0->word_3c, guest::cpu()->r[1], arg2.addr(), guest::cpu()->r[3]);
    if (entry_2 != 0) {
        u32 r0_3 = call_0013f718(entry_2);
        if (r0_3 != 3u) {
            entry_2 = 0u;
        } else {
            gptr<Local_0013c728_r0_4> r0_4 = gptr<Local_0013c728_r0_4>(adjusted_this_0x10__0013f748(entry_2));
            arg2->word_0 = r0_4->word_0;
            arg2->word_4 = r0_4->word_4;
            u32 r0_5 = call_0013f5e8(r0_4.addr());
            arg2->byte_8 = u8(r0_5);
            u32 r0_6 = call_0013f610(r0_4.addr());
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
GUEST_EXPORT_FRAMED(0x0013c728, d_0013c728::f_0013c728, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0013c794: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0013c794 {

struct __attribute__((packed)) Object_0013c794_0 {
    u8 unknown_0[0x3c];  // (not used here)
    u32 word_3c;
};
GUEST_OFFSET(Object_0013c794_0, word_3c, 0x3c);

struct __attribute__((packed)) Object_0013c794_2 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Object_0013c794_2, word_0, 0x0);
GUEST_OFFSET(Object_0013c794_2, word_4, 0x4);
GUEST_OFFSET(Object_0013c794_2, word_8, 0x8);

struct __attribute__((packed)) Local_0013c794_r0_2 {
    u32 word_0;
    u32 word_4;
    u8 unknown_8[0x4];  // (not used here)
    u32 word_c;
};
GUEST_OFFSET(Local_0013c794_r0_2, word_0, 0x0);
GUEST_OFFSET(Local_0013c794_r0_2, word_4, 0x4);
GUEST_OFFSET(Local_0013c794_r0_2, word_c, 0xc);

inline constexpr guest::Function<0x00141764, u32(u32, u32)> call_00141764;

u32 f_0013c794(gptr<Object_0013c794_0> arg0, u32 r1, gptr<Object_0013c794_2> arg2) {
    gptr<Local_0013c794_r0_2> r0_2 = gptr<Local_0013c794_r0_2>(call_00141764(arg0->word_3c, r1));
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
GUEST_EXPORT_FRAMED(0x0013c794, d_0013c794::f_0013c794, 0x4010);  // pushes {r4, lr} first, as the original

// f_0013c7e0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0013c7e0 {

struct __attribute__((packed)) Object_0013c7e0_0 {
    u8 unknown_0[0x3c];  // (not used here)
    u32 word_3c;
};
GUEST_OFFSET(Object_0013c7e0_0, word_3c, 0x3c);

struct __attribute__((packed)) Object_0013c7e0_2 {
    u32 word_0;
    u8 unknown_4[0x10];  // (not used here)
    u32 word_14;
    u8 byte_18;
    u8 byte_19;
};
GUEST_OFFSET(Object_0013c7e0_2, word_0, 0x0);
GUEST_OFFSET(Object_0013c7e0_2, word_14, 0x14);
GUEST_OFFSET(Object_0013c7e0_2, byte_18, 0x18);
GUEST_OFFSET(Object_0013c7e0_2, byte_19, 0x19);

inline constexpr guest::Function<0x0013f63c, u32(u32, u32)> call_0013f63c;
inline constexpr guest::Function<0x0013f69c, u32(u32)> call_0013f69c;
inline constexpr guest::Function<0x0013f6bc, u32(u32)> call_0013f6bc;
inline constexpr guest::Function<0x0013f6e4, u32(u32)> call_0013f6e4;
inline constexpr guest::Function<0x0013f718, u32(u32)> call_0013f718;
inline constexpr guest::Function<0x0013f754, u32(u32)> adjusted_this_0x10__0013f754;
inline constexpr guest::Function<0x00141728, u32(u32, u32, u32, u32)> HandleTable__resolve;

u32 f_0013c7e0(gptr<Object_0013c7e0_0> arg0, u32 r1, gptr<Object_0013c7e0_2> arg2) {
    u32 entry_2 = HandleTable__resolve(arg0->word_3c, r1, arg2.addr(), guest::cpu()->r[3]);
    if (entry_2 != 0) {
        u32 r0_3 = call_0013f718(entry_2);
        if (r0_3 != 1u) {
            entry_2 = 0u;
        } else {
            u32 r0_4 = adjusted_this_0x10__0013f754(entry_2);
            u32 r0_5 = call_0013f69c(r0_4);
            arg2->word_0 = r0_5;
            arg2->word_14 = *gptr<u32>(r0_4 + 8u);
            u32 r0_6 = call_0013f6bc(r0_4);
            arg2->byte_18 = u8(r0_6);
            u32 r0_7 = call_0013f6e4(r0_4);
            arg2->byte_19 = u8(r0_7);
            call_0013f63c(r0_4, arg2.addr() + 4u);
            entry_2 = 1u;
        }
    }
    return entry_2;
}

}  // namespace d_0013c7e0
GUEST_EXPORT_FRAMED(0x0013c7e0, d_0013c7e0::f_0013c7e0, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

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
    u32 r3 = r0 + 0x14u;  // (from the original)
    u32 r5 = r0;
    r0 = 0u;
    u32 r2 = 0x5800u;  // (from the original)
    u32 r1 = r0;
    if (s32(r12) <= 0) {
        return r0;
    }
    do {
        if (*gptr<u16>(r3 + r1 * 0xcu) == r2) {  // (from the original)
            u32 res_1 = r3 + r1 * 0xcu;  // (from the original)
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
        r1 += 1u;
        guest::preempt();
    } while (s32(r12) > s32(r1));
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

struct __attribute__((packed)) Object_0013c8c8_1 {
    u32 word_0;
};
GUEST_OFFSET(Object_0013c8c8_1, word_0, 0x0);

struct __attribute__((packed)) Local_0013c8c8_r4_1 {
    u8 unknown_0[0x8];  // (not used here)
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Local_0013c8c8_r4_1, word_8, 0x8);
GUEST_OFFSET(Local_0013c8c8_r4_1, word_c, 0xc);


u32 RangeTable__find(gptr<RangeTable> table, gptr<Object_0013c8c8_1> key) {
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
namespace d_0013c938 {

struct __attribute__((packed)) Object_0013c938_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_0013c938_0, word_0, 0x0);

struct __attribute__((packed)) Object_0013c938_1 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
};
GUEST_OFFSET(Object_0013c938_1, word_4, 0x4);

struct __attribute__((packed)) Local_0013c938_r4_1 {
    u8 unknown_0[0x8];  // (not used here)
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Local_0013c938_r4_1, word_8, 0x8);
GUEST_OFFSET(Local_0013c938_r4_1, word_c, 0xc);


u32 f_0013c938(gptr<Object_0013c938_0> arg0, gptr<Object_0013c938_1> arg1) {
    u32 r0 = arg0.addr();
    u32 r1 = arg1.addr();
    u32 r12 = r0;
    u32 r5 = arg0->word_0;
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
GUEST_EXPORT_FRAMED(0x0013c938, d_0013c938::f_0013c938, 0x70);  // pushes {r4, r5, r6} first, as the original

// f_0013c9b8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0013c9b8 {

struct __attribute__((packed)) Object_0013c9b8_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_0013c9b8_0, word_0, 0x0);

struct __attribute__((packed)) Object_0013c9b8_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Object_0013c9b8_1, word_0, 0x0);
GUEST_OFFSET(Object_0013c9b8_1, word_4, 0x4);

struct __attribute__((packed)) Local_0013c9b8_r5_1 {
    u8 unknown_0[0x8];  // (not used here)
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Local_0013c9b8_r5_1, word_8, 0x8);
GUEST_OFFSET(Local_0013c9b8_r5_1, word_c, 0xc);


u32 f_0013c9b8(gptr<Object_0013c9b8_0> arg0, gptr<Object_0013c9b8_1> arg1) {
    u32 r0 = arg0.addr();
    u32 r12 = r0;
    r0 = arg0->word_0;
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
GUEST_EXPORT_FRAMED(0x0013c9b8, d_0013c9b8::f_0013c9b8, 0x70);  // pushes {r4, r5, r6} first, as the original

// f_0013ca2c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0013ca2c {

struct __attribute__((packed)) Object_0013ca2c_0 {
    u32 word_0;
    u8 byte_4;
};
GUEST_OFFSET(Object_0013ca2c_0, word_0, 0x0);
GUEST_OFFSET(Object_0013ca2c_0, byte_4, 0x4);

struct __attribute__((packed)) Object_0013ca2c_1 {
    u32 word_0;
    u8 byte_4;
};
GUEST_OFFSET(Object_0013ca2c_1, word_0, 0x0);
GUEST_OFFSET(Object_0013ca2c_1, byte_4, 0x4);


void f_0013ca2c(gptr<Object_0013ca2c_0> arg0, gptr<Object_0013ca2c_1> arg1) {
    arg0->word_0 = arg1->word_0;
    arg0->byte_4 = arg1->byte_4;
}

}  // namespace d_0013ca2c
GUEST_EXPORT(0x0013ca2c, d_0013ca2c::f_0013ca2c);

// f_0013cbdc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0013cbdc {

struct __attribute__((packed)) Object_0013cbdc_0 {
    u32 word_0;
    u8 unknown_4[0x1c];  // (not used here)
    u32 word_20;
    u32 word_24;
    u32 word_28;
};
GUEST_OFFSET(Object_0013cbdc_0, word_0, 0x0);
GUEST_OFFSET(Object_0013cbdc_0, word_20, 0x20);
GUEST_OFFSET(Object_0013cbdc_0, word_24, 0x24);
GUEST_OFFSET(Object_0013cbdc_0, word_28, 0x28);

inline constexpr guest::Function<0x0012f154, u32(u32, u32)> RecursiveLock__initialize;

void f_0013cbdc(gptr<Object_0013cbdc_0> arg0, u32 r1, u32 r2) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 r0 = arg0.addr();
    u32 r3 = 0u;
    arg0->word_0 = r1;
    arg0->word_20 = r2;
    arg0->word_24 = r3;
    r1 = r0 + 0x2cu;  // (from the original)
    arg0->word_28 = r3;
    do {
        *gptr<u32>(r1) = r3;
        guest::preempt();
    } while (!u32(1));
    r1 = 0u;
    r2 = r0 + 0x30u;  // (from the original)
    do {
        *gptr<u32>(r2) = r1;
        guest::preempt();
    } while (!u32(1));
    u32 r12 = 0x7fffu;  // (from the original)
    u32 r14 = r0 + 4u;
    r2 = 0u;
    r1 = r14;
    do {
        *gptr<u32>(r1) = r2;
        guest::preempt();
    } while (!u32(1));
    r1 = r14 + 4u;
    do {
        *gptr<u16>(r1) = u16(sxth(r3));
        guest::preempt();
    } while (!u32(1));
    r2 = 0u;
    r1 = r0 + 0xcu;  // (from the original)
    *gptr<u16>(r14 + 6u) = u16(r12);
    do {
        *gptr<u32>(r1) = r2;
        guest::preempt();
    } while (!u32(1));
    r2 = r1 + 4u;
    do {
        *gptr<u16>(r2) = u16(sxth(r3));
        guest::preempt();
    } while (!u32(1));
    *gptr<u16>(r1 + 6u) = u16(r12);
    frame.release();
    RecursiveLock__initialize(r0 + 0x14u, r1);  // (from the original)
    return;
}

}  // namespace d_0013cbdc
GUEST_EXPORT(0x0013cbdc, d_0013cbdc::f_0013cbdc);

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
    u32 r0_1 = pool.addr() + 0x30u;  // (from the original)
    RecursiveLock__lock(r0_1, r1, r2, guest::cpu()->r[3]);
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
    RecursiveLock__unlock(r0_1, r1_1);
    return block;
}

}  // namespace d_0013cc9c
GUEST_EXPORT_FRAMED(0x0013cc9c, d_0013cc9c::FixedPool__allocate, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0013d060: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0013d060 {

inline constexpr u32 global_0095e0c4_address = 0x0095e0c4u;
inline guest::global<u32, 0x0095e0c4> global_0095e0c4;

u32 call_free_hook() {
    u32 r1_1 = *global_0095e0c4;
    return guest::call_address<u32>(r1_1, guest::cpu()->r[0], r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0013d060
GUEST_EXPORT(0x0013d060, d_0013d060::call_free_hook);

// f_0013d118: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0013d118 {

inline constexpr u32 global_00975284_address = 0x00975284u;
inline guest::global<u32, 0x00975284> global_00975284;
inline constexpr guest::Function<0x0013e560, u32(u32, u32, u32, u32)> ExpHeap__free;

u32 free_in_default_heap(u32 block) {
    if (block == 0) {
        guest::cpu()->r[1] = block;
        return block;
    }
    return ExpHeap__free(*gptr<u32>(*global_00975284), block, guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0013d118
GUEST_EXPORT(0x0013d118, d_0013d118::free_in_default_heap);

// f_0013d148: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0013d148 {

inline constexpr u32 global_00975284_address = 0x00975284u;
inline guest::global<u32, 0x00975284> global_00975284;
inline constexpr guest::Function<0x0012f600, u32(u32, u32, u32, u32)> call_0012f600;

struct __attribute__((packed)) Frame_0013d148 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Frame_0013d148, word_0, 0x0);
GUEST_OFFSET(Frame_0013d148, word_4, 0x4);
GUEST_SIZE(Frame_0013d148, 0x8);

u32 allocate_in_default_heap(u32 size, u32 alignment) {
    guest::StackFrameOf<Frame_0013d148> frame;  // the original's stack frame
    u32 r0_1 = *gptr<u32>(*global_00975284);
    frame->word_0 = 0;
    frame->word_4 = 0;
    u32 r0_2 = call_0012f600(r0_1, size, alignment, 0u);
    return r0_2;
}

}  // namespace d_0013d148
GUEST_EXPORT_FRAMED(0x0013d148, d_0013d148::allocate_in_default_heap, 0x4010);  // pushes {r4, lr} first, as the original

// f_0013d408: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0013d408 {

inline constexpr u32 vtable_SoundFxMgr = 0x008eb490u;
inline constexpr guest::Function<0x0014156c, u32(u32, u32, u32)> call_0014156c;
inline constexpr guest::Function<0x002f76ad, u32(u32, u32, u32, u32)> destroy_array_elements;

u32 SoundFxMgr__destructor(gptr<SoundFxMgr> sound_fx_mgr) {
    sound_fx_mgr->word_0 = vtable_SoundFxMgr;
    destroy_array_elements(sound_fx_mgr.addr() + 0x44u, 0x14152cu, 0x20u, 0xau);  // (from the original)
    u32 r0_3 = call_0014156c(sound_fx_mgr.addr() + 0x14u, guest::cpu()->r[1], 0x20u);  // (from the original)
    return r0_3 - 0x14u;  // (from the original)
}

}  // namespace d_0013d408
GUEST_EXPORT_FRAMED(0x0013d408, d_0013d408::SoundFxMgr__destructor, 0x4010);  // pushes {r4, lr} first, as the original

// f_0013d444: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0013d444 {

struct __attribute__((packed)) Object_0013d444_0 {
    u8 unknown_0[0x14];  // (not used here)
    u8 byte_14;
    u8 byte_15;
    u8 byte_16;
    u8 byte_17;
    u8 unknown_18[0x10];  // (not used here)
    u32 word_28;
    u32 word_2c;
};
GUEST_OFFSET(Object_0013d444_0, byte_14, 0x14);
GUEST_OFFSET(Object_0013d444_0, byte_15, 0x15);
GUEST_OFFSET(Object_0013d444_0, byte_16, 0x16);
GUEST_OFFSET(Object_0013d444_0, byte_17, 0x17);
GUEST_OFFSET(Object_0013d444_0, word_28, 0x28);
GUEST_OFFSET(Object_0013d444_0, word_2c, 0x2c);

inline constexpr guest::Function<0x0013fd78, u32(u32, u32, u32, u32)> call_0013fd78;
inline constexpr guest::Function<0x0014041c, u32(u32)> call_0014041c;
inline constexpr guest::Function<0x001404f0, u32(u32, u32)> call_001404f0;
inline constexpr guest::Function<0x00140530, u32(u32, u32)> call_00140530;
inline constexpr guest::Function<0x00140564, u32(u32)> call_00140564;
inline constexpr guest::Function<0x002f76ad, u32(u32, u32, u32, u32)> destroy_array_elements;
inline constexpr guest::Function<0x002f88b8, u32(u32)> release_owned_object;

u32 f_0013d444(gptr<Object_0013d444_0> arg0, u32 r1, u32 r2, u32 r3) {
    if (arg0->byte_14 != 0) {
        call_0013fd78(arg0.addr() + 0x34u, r1, r2, r3);  // (from the original)
        u32 r1_1 = guest::cpu()->r[1];
        u32 r0_2 = arg0->byte_14;
        if (r0_2 == 2u) {
            u32 r0_3 = call_00140530(r0_2, r1_1);
            r1_1 = guest::cpu()->r[1];
            if (s32(r0_3) >= 0) {
                r1_1 = 1u;
                arg0->word_2c = 0;
                arg0->byte_14 = u8(r1_1);
            }
            arg0->byte_16 = 0;
            arg0->byte_17 = 0;
        }
        u32 r0_4 = call_001404f0(0u, r1_1);
        u32 r0_5 = call_0014041c(r0_4);
        call_00140564(r0_5);
        u32 r0_6 = arg0->word_28;
        if (r0_6 != 0) {
            release_owned_object(r0_6);
            arg0->word_28 = 0;
        }
        arg0->byte_15 = 2;
        arg0->byte_14 = 0;
    }
    destroy_array_elements(arg0.addr() + 0x40u, 0x13bbfcu, 0xecu, 6u);  // (from the original)
    return arg0.addr();
}

}  // namespace d_0013d444
GUEST_EXPORT_FRAMED(0x0013d444, d_0013d444::f_0013d444, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0013d6d0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0013d6d0 {

struct __attribute__((packed)) Object_0013d6d0_0 {
    u8 unknown_0[0xc];  // (not used here)
    u8 byte_c;
};
GUEST_OFFSET(Object_0013d6d0_0, byte_c, 0xc);

struct __attribute__((packed)) Local_0013d6d0_ea_2 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0013d6d0_ea_2, word_0, 0x0);
GUEST_OFFSET(Local_0013d6d0_ea_2, word_4, 0x4);

inline constexpr u32 global_00982864_address = 0x00982864u;
inline constexpr u32 global_00982870_address = 0x00982870u;
inline constexpr guest::Function<0x00135740, u32(u32, u32, u32, u32)> lock_member_lock;
inline constexpr guest::Function<0x00137e84, u32(u32, u32)> unlock_member_lock;
inline constexpr guest::Function<0x0013f000, u32(u32, u32)> unlink_from_ends;

void f_0013d6d0(gptr<Object_0013d6d0_0> arg0, u32 r1) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    lock_member_lock(global_00982870_address, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    if (arg0->byte_c == 1u || arg0->byte_c == 2u) {
        lock_member_lock(global_00982870_address, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        unlink_from_ends(global_00982864_address, arg0.addr());
        unlock_member_lock(global_00982870_address, arg0.addr());
    }
    u32 r1_1 = ~0u;
    *gptr<u8>(arg0.addr() + 0xcu) = 0;  // (from the original)
    gptr<Local_0013d6d0_ea_2> ea_2 = gptr<Local_0013d6d0_ea_2>(arg0.addr() + 0x10u);  // (from the original)
    ea_2->word_0 = 0;
    ea_2->word_4 = r1_1;
    frame.release();
    unlock_member_lock(global_00982870_address, r1_1);
    return;
}

}  // namespace d_0013d6d0
GUEST_EXPORT(0x0013d6d0, d_0013d6d0::f_0013d6d0);

// f_0013d73c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0013d73c {

struct __attribute__((packed)) Local_0013d73c_r1_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0013d73c_r1_1, word_0, 0x0);
GUEST_OFFSET(Local_0013d73c_r1_1, word_4, 0x4);

inline constexpr u32 vtable_SoundDataLoadRequest = 0x008f4a84u;
inline constexpr u32 global_00982864_address = 0x00982864u;
inline constexpr u32 global_00982870_address = 0x00982870u;
inline constexpr guest::Function<0x00135740, u32(u32, u32, u32, u32)> lock_member_lock;
inline constexpr guest::Function<0x00137e84, u32(u32, u32)> unlock_member_lock;
inline constexpr guest::Function<0x0013f000, u32(u32, u32)> unlink_from_ends;

u32 SoundDataLoadRequest__destructor(gptr<SoundDataLoadRequest> sound_data_load_request, u32 r1, u32 r2) {
    sound_data_load_request->word_0 = vtable_SoundDataLoadRequest;
    lock_member_lock(global_00982870_address, r1, r2, guest::cpu()->r[3]);
    if (sound_data_load_request->byte_c == 1u || sound_data_load_request->byte_c == 2u) {
        lock_member_lock(global_00982870_address, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        unlink_from_ends(global_00982864_address, sound_data_load_request.addr());
        unlock_member_lock(global_00982870_address, sound_data_load_request.addr());
    }
    sound_data_load_request->byte_c = 0;
    gptr<Local_0013d73c_r1_1> r1_1 = gptr<Local_0013d73c_r1_1>(sound_data_load_request.addr() + 0x10u);  // (from the original)
    r1_1->word_0 = 0;
    r1_1->word_4 = ~0u;
    unlock_member_lock(global_00982870_address, r1_1.addr());
    return sound_data_load_request.addr();
}

}  // namespace d_0013d73c
GUEST_EXPORT_FRAMED(0x0013d73c, d_0013d73c::SoundDataLoadRequest__destructor, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_0013d7cc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0013d7cc {

inline constexpr u32 vtable_SoundMelodyPlayerBase = 0x008f54d0u;
inline constexpr u32 global_0094cd20_address = 0x0094cd20u;
inline guest::global<u32, 0x0094cd20> global_0094cd20;
inline constexpr guest::Function<0x00136cc8, u32(u32, u32)> detach_from_parent;
inline constexpr guest::Function<0x00136e58, u32(u32, u32, u32, u32)> call_00136e58;
inline constexpr guest::Function<0x00138c2c, u32(u32, u32, u32, u32)> locked_list_last_index;
inline constexpr guest::Function<0x0013d4f0, u32(u32, u32, u32)> call_0013d4f0;

u32 SoundMelodyPlayerBase__destructor(gptr<SoundMelodyPlayerBase> sound_melody_player_base, u32 r1, u32 r2) {
    sound_melody_player_base->word_0 = vtable_SoundMelodyPlayerBase;
    u32 r0_1 = sound_melody_player_base->word_4;
    if (r0_1 != 0) {
        call_00136e58(r0_1, 0u, r2, guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
    }
    if (sound_melody_player_base->word_44 + 1u != 0) {
        u32 r0_2 = *global_0094cd20;
        if (r0_2 != 0) {
            u32 r0_3 = locked_list_last_index(r0_2, 0u, r2, guest::cpu()->r[3]);
            r1 = sound_melody_player_base->word_44;
            if (s32(r1) <= s32(r0_3)) {
                u32 r0_5 = call_0013d4f0(*global_0094cd20, r1, 0u);
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
namespace d_0013d85c {

inline constexpr guest::Function<0x0012ede8, u32(u32, u32, u32, u32)> call_virtual_12_if_present;
inline constexpr guest::Function<0x00134250, u32(u32, u32, u32, u32)> call_00134250;

u32 f_0013d85c(gptr<nn__fs__FileInputStream> file_input_stream) {
    u32 r4_1 = file_input_stream.addr() + 4u;
    u32 r0_1 = file_input_stream->word_4;
    u32 r1_1 = r0_1 & ~1u;
    if (r1_1 == 0) {
        guest::cpu()->r[1] = r1_1;
        return r4_1 - 4u;
    }
    if ((r0_1 & 1u) != 0) {
        call_00134250(r0_1, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
    }
    call_virtual_12_if_present(file_input_stream->word_4 & ~1u, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
    file_input_stream->word_4 = 0;
    guest::cpu()->r[1] = 0u;
    return r4_1 - 4u;
}

}  // namespace d_0013d85c
GUEST_EXPORT_FRAMED(0x0013d85c, d_0013d85c::f_0013d85c, 0x4010);  // pushes {r4, lr} first, as the original

// f_0013dc74: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0013dc74 {

inline constexpr u32 vtable_nn__fnd__UnitHeapTemplate_nn__os__LockPolicy__Object_nn__os__CriticalSection__ = 0x008fb030u;
inline constexpr u32 global_0094a940_address = 0x0094a940u;
inline constexpr u32 global_00974f0c_address = 0x00974f0cu;
inline constexpr u32 global_00ae0bc8_address = 0x00ae0bc8u;
inline constexpr u32 global_00ae0bf8_address = 0x00ae0bf8u;
inline constexpr u32 global_00ae0cb8_address = 0x00ae0cb8u;
inline guest::global<u32, 0x00974f04> global_00974f04;
inline guest::global<u32, 0x00974f0c> global_00974f0c;
inline guest::global<u32, 0x00ae0bc8> global_00ae0bc8;
inline guest::global<u32, 0x00ae0bcc> global_00ae0bcc;
inline guest::global<u32, 0x00ae0bd0> global_00ae0bd0;
inline guest::global<u32, 0x00ae0bd4> global_00ae0bd4;
inline guest::global<u32, 0x00ae0bd8> global_00ae0bd8;
inline guest::global<u32, 0x00ae0bdc> global_00ae0bdc;
inline guest::global<u32, 0x00ae0bec> global_00ae0bec;
inline guest::global<u32, 0x00ae0bf8> global_00ae0bf8;
inline guest::global<u32, 0x00ae0bfc> global_00ae0bfc;
inline guest::global<u32, 0x00ae0c00> global_00ae0c00;
inline constexpr guest::Function<0x0012f154, u32(u32)> RecursiveLock__initialize;
inline constexpr guest::Function<0x00135748, u32(u32, u32, u32, u32)> RecursiveLock__lock;
inline constexpr guest::Function<0x001357ec, u32(u32)> RecursiveLock__unlock;
inline constexpr guest::Function<0x0013cc9c, u32(u32, u32, u32)> FixedPool__allocate;
inline constexpr guest::Function<0x0014031c, u32(u32, u32, u32, u32)> call_0014031c;
inline constexpr guest::Function<0x002fe7dd, u32(u32, u32, u32)> claim_flag;

struct __attribute__((packed)) Frame_0013dc74 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Frame_0013dc74, word_0, 0x0);
GUEST_OFFSET(Frame_0013dc74, word_4, 0x4);
GUEST_SIZE(Frame_0013dc74, 0x8);

u32 nn__fnd__UnitHeapTemplate_nn__os__LockPolicy__Object_nn__os__CriticalSection____CriticalSection___0013dc74(u32 r0_unused, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_0013dc74> frame;  // the original's stack frame
    RecursiveLock__lock(global_00ae0cb8_address, r1, r2, r3);
    u32 r2_1 = guest::cpu()->r[2];
    if ((*global_00974f0c & 1u) == 0) {
        u32 r0_1 = claim_flag(global_00974f0c_address, guest::cpu()->r[1], r2_1);
        r2_1 = guest::cpu()->r[2];
        if (r0_1 != 0) {
            *global_00ae0bcc = 0;
            *global_00ae0bd0 = 0;
            *global_00ae0bd4 = 0;
            *global_00ae0bd8 = 0;
            *global_00ae0bdc = 0;
            *global_00ae0bec = 0;
            *global_00ae0bf8 = 0;
            *global_00ae0bc8 = vtable_nn__fnd__UnitHeapTemplate_nn__os__LockPolicy__Object_nn__os__CriticalSection__;
            *global_00ae0c00 = ~0u;
            *global_00ae0bfc = 0;
            frame->word_0 = 4;
            frame->word_4 = 0;
            call_0014031c(global_00ae0bc8_address, 0x130u, global_0094a940_address, 0x1300u);  // (from the original)
            RecursiveLock__initialize(global_00ae0bf8_address);
            r2_1 = 0x100000u;  // (from the original)
        }
    }
    *global_00974f04 = 0xae0bc8;  // (from the original)
    u32 r0_2 = FixedPool__allocate(global_00ae0bc8_address, guest::cpu()->r[1], r2_1);
    RecursiveLock__unlock(global_00ae0cb8_address);
    return r0_2;
}

}  // namespace d_0013dc74
GUEST_EXPORT_FRAMED(0x0013dc74, d_0013dc74::nn__fnd__UnitHeapTemplate_nn__os__LockPolicy__Object_nn__os__CriticalSection____CriticalSection___0013dc74, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_0013dd5c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0013dd5c {

inline constexpr u32 vtable_nn__fs__CTR__MPCore__detail__ContentRomFsArchive = 0x008faed0u;
inline constexpr u32 vtable_nn__fnd__UnitHeapTemplate_nn__os__LockPolicy__Object_nn__os__CriticalSection__ = 0x008fb030u;

void nn__fnd__UnitHeapTemplate_nn__os__LockPolicy__Object_nn__os__CriticalSection____CriticalSection___0013dd5c(gptr<nn__fs__CTR__MPCore__detail__ContentRomFsArchive> content_rom_fs_archive) {
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
    content_rom_fs_archive->word_b8 = vtable_nn__fnd__UnitHeapTemplate_nn__os__LockPolicy__Object_nn__os__CriticalSection__;
    content_rom_fs_archive->word_fc = 0;
    content_rom_fs_archive->word_100 = 0;
    content_rom_fs_archive->word_104 = 0;
    content_rom_fs_archive->word_108 = 0;
    content_rom_fs_archive->word_118 = 0;
    content_rom_fs_archive->word_124 = 0;
    content_rom_fs_archive->word_128 = 0;
    content_rom_fs_archive->word_12c = r12_1;
    content_rom_fs_archive->word_c = 0;
    content_rom_fs_archive->word_f4 = vtable_nn__fnd__UnitHeapTemplate_nn__os__LockPolicy__Object_nn__os__CriticalSection__;
    content_rom_fs_archive->word_10 = 0;
    content_rom_fs_archive->word_14 = 0;
    content_rom_fs_archive->word_18 = 0;
    content_rom_fs_archive->word_0 = vtable_nn__fs__CTR__MPCore__detail__ContentRomFsArchive;
    content_rom_fs_archive->word_1c = 0;
}

}  // namespace d_0013dd5c
GUEST_EXPORT_FRAMED(0x0013dd5c, d_0013dd5c::nn__fnd__UnitHeapTemplate_nn__os__LockPolicy__Object_nn__os__CriticalSection____CriticalSection___0013dd5c, 0x10);  // pushes {r4} first, as the original

// f_0013dee0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0013dee0 {

inline constexpr u32 global_00974ef8_address = 0x00974ef8u;
inline guest::global<u32, 0x00974ef8> global_00974ef8;
inline constexpr guest::Function<0x0012f598, u32(u32, u32)> report_fatal_result_with_info;

u32 f_0013dee0() {
    if (*global_00974ef8 == 0) {
        report_fatal_result_with_info(0xe0a046dbu, 0x13defcu);  // (from the original)
    }
    return *global_00974ef8;
}

}  // namespace d_0013dee0
GUEST_EXPORT_FRAMED(0x0013dee0, d_0013dee0::f_0013dee0, 0x4010);  // pushes {r4, lr} first, as the original

// f_0013df14: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0013df14 {

inline constexpr guest::Function<0x00100cfd, u32(u32, u32, u32, u32)> pointer_is_null_or_points_to_zero;
inline constexpr guest::Function<0x00100d0f, u32(u32, u32, u32, u32)> multibyte_to_wide_stateless;
inline constexpr guest::Function<0x00139ffc, u32(u32, u32, u32, u32)> call_00139ffc;
inline constexpr guest::Function<0x002f7951, u32(u32, u32, u32, u32)> multibyte_to_wide;

struct __attribute__((packed)) Frame_0013df14 {
    u8 unknown_0[0x210];  // (not read or written by name)
    u32 word_210;
    u32 word_214;
};
GUEST_OFFSET(Frame_0013df14, word_210, 0x210);
GUEST_OFFSET(Frame_0013df14, word_214, 0x214);
GUEST_SIZE(Frame_0013df14, 0x218);

u32 f_0013df14(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_0013df14> frame;  // the original's stack frame
    u32 r7 = r0;
    u32 r9 = 0u;
    u32 r6 = r1;
    u32 r8 = r2;
    u32 r5 = frame.at(0).addr();
    frame->word_210 = r9;
    frame->word_214 = r9;
    pointer_is_null_or_points_to_zero(frame.at(0x210).addr(), r1, r2, r3);  // (from the original)
    r3 = guest::cpu()->r[3];
    u32 r10 = 0x105u;  // (from the original)
L_13df44:;
    u32 r0_2 = multibyte_to_wide_stateless(r6, r10, frame.at(0x210).addr(), r3);  // (from the original)
    r3 = guest::cpu()->r[3];
    if (r0_2 != 0) {
        u32 r0_3 = multibyte_to_wide(r5, r6, r0_2, frame.at(0x210).addr());  // (from the original)
        r3 = guest::cpu()->r[3];
        if (r0_3 != 0) {
            r5 += 2u;
            r6 += r0_2;
            guest::preempt();
            goto L_13df44;
        }
    }
    *gptr<u16>(r5) = u16(r9);
    *gptr<u32>(r7 + 0xcu) = r9;  // (from the original)
    *gptr<u32>(r7 + 0x10u) = r9;  // (from the original)
    *gptr<u32>(r7 + 4u) = r9;
    *gptr<u32>(r7 + 8u) = r9;
    u32 r0_4 = call_00139ffc(r7, frame.at(0).addr(), r8, r3);
    return r0_4;
}

}  // namespace d_0013df14
GUEST_EXPORT_FRAMED(0x0013df14, d_0013df14::f_0013df14, 0x47f0);  // pushes {r4, r5, r6, r7, r8, r9, r10, lr} first, as the original

// f_0013e164: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0013e164 {


u32 f_0013e164(u32 r0) {
    u32 r1_1 = 0;
    if (s32(r0) >= 0x20) {  // (from the original)
        return r0 - 0x20u;  // (from the original)
    }
    if (s32(r0) >= 0x18) {  // (from the original)
        r1_1 = 0x5109d500u;  // (from the original)
        r0 -= 0x18u;  // (from the original)
    } else {
        r1_1 = 0x6c8da500u;  // (from the original)
    }
    return r0 + r1_1;
}

}  // namespace d_0013e164
GUEST_EXPORT(0x0013e164, d_0013e164::f_0013e164);

// f_0013e258: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0013e258 {


u32 f_0013e258(u32 r0) {
    if (r0 < 0xaf9000u) {  // (from the original)
        return r0;
    }
    return r0 + 0x7507000u;  // (from the original)
}

}  // namespace d_0013e258
GUEST_EXPORT(0x0013e258, d_0013e258::f_0013e258);

// f_0013e560: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0013e560 {

inline constexpr guest::Function<0x0013e580, u32(u32, u32, u32, u32)> call_0013e580;

u32 ExpHeap__free(gptr<nn__fnd__ExpHeapTemplate_nn__os__LockPolicy__NoLock_> no_lock) {
    call_0013e580(no_lock.addr() + 0x18u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
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
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u8 unknown_18[0xc];  // (not used here)
    u32 word_24;
};
GUEST_OFFSET(HeapBase, word_c, 0xc);
GUEST_OFFSET(HeapBase, word_10, 0x10);
GUEST_OFFSET(HeapBase, word_14, 0x14);
GUEST_OFFSET(HeapBase, word_24, 0x24);

inline constexpr u32 global_00981890_address = 0x00981890u;
inline constexpr u32 global_00af51c0_address = 0x00af51c0u;
inline guest::global<u32, 0x00981890> global_00981890;
inline constexpr guest::Function<0x0013e7d8, u32(u32, u32, u32)> linked_list_insert_before;
inline constexpr guest::Function<0x0013fac4, u32(u32, u32, u32, u32)> set_bytes;
inline constexpr guest::Function<0x001432c8, u32(u32, u32)> call_001432c8;

void HeapBase__initialize(gptr<HeapBase> heap, u32 signature, u32 start, u32 end) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 options = *frame.at<u32>(0x10) & 0xffu;  // (from the original)
    heap->word_24 = options;
    heap->word_14 = signature;
    heap->word_c = start;
    heap->word_10 = end;
    if ((options & 2u) != 0) {
        set_bytes(start, end - start, *global_00981890, end);
    }
    u32 list = global_00af51c0_address;
    u32 r0_2 = call_001432c8(list, heap.addr());
    if (r0_2 != 0) {
        list = r0_2 + 0x18u;  // (from the original)
    }
    frame.release();
    linked_list_insert_before(list, list + 4u, heap.addr() + 4u);
    return;
}

}  // namespace d_0013e75c
GUEST_EXPORT(0x0013e75c, d_0013e75c::HeapBase__initialize);

// f_0013ea18: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0013ea18 {

struct __attribute__((packed)) Object_0013ea18_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_0013ea18_0, word_0, 0x0);

inline constexpr u32 global_0097511c_address = 0x0097511cu;
inline constexpr u32 global_00975120_address = 0x00975120u;
inline guest::global<u32, 0x0097511c> global_0097511c;
inline guest::global<u32, 0x00975120> global_00975120;

void f_0013ea18(gptr<Object_0013ea18_0> arg0) {
    u32 r0_1 = arg0->word_0;
    u32 r2_1 = *gptr<u32>(r0_1);
    if (r2_1 == 0x80000000u) {  // (from the original)
        u32 r1_1 = *global_0097511c;
        guest::call_address<u32>(r1_1, r0_1, r1_1, r2_1, guest::cpu()->r[3]);
        return;
    }
    if (r2_1 != 0x40000000u) {  // (from the original)
        return;
    }
    u32 r1_2 = *global_00975120;
    guest::call_address<u32>(r1_2, r0_1, r1_2, r2_1, guest::cpu()->r[3]);
}

}  // namespace d_0013ea18
GUEST_EXPORT(0x0013ea18, d_0013ea18::f_0013ea18);

// f_0013ea4c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0013ea4c {

struct __attribute__((packed)) Object_0013ea4c_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_0013ea4c_0, word_0, 0x0);

inline constexpr guest::Function<0x00140914, u32(u32, u32, u32, u32)> call_00140914;

struct __attribute__((packed)) Frame_0013ea4c {
    u32 word_0;
};
GUEST_OFFSET(Frame_0013ea4c, word_0, 0x0);
GUEST_SIZE(Frame_0013ea4c, 0x4);

void f_0013ea4c(gptr<Object_0013ea4c_0> arg0, u32 r1_unused, u32 r2_unused, u32 r3) {
    guest::StackFrameOf<Frame_0013ea4c> frame;  // the original's stack frame
    frame->word_0 = r3;
    u32 ea_1 = arg0->word_0 + 0x28u;  // (from the original)
    u32 r1_1 = *gptr<u32>(ea_1);
    u32 r0_1 = r1_1 == 0 ? 0u : ea_1 + r1_1;
    frame->word_0 = r0_1;
    if (r0_1 != 0) {
        call_00140914(frame.at(0).addr(), r1_1, guest::cpu()->r[2], r3);
    }
}

}  // namespace d_0013ea4c
GUEST_EXPORT_FRAMED(0x0013ea4c, d_0013ea4c::f_0013ea4c, 0x4000);  // pushes {lr} first, as the original

// f_0013ebec: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0013ebec {

struct __attribute__((packed)) Object_0013ebec_0 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
    u32 word_8;
    u8 byte_c;
};
GUEST_OFFSET(Object_0013ebec_0, word_4, 0x4);
GUEST_OFFSET(Object_0013ebec_0, word_8, 0x8);
GUEST_OFFSET(Object_0013ebec_0, byte_c, 0xc);


void f_0013ebec(gptr<Object_0013ebec_0> arg0, u32 r1, u32 r2) {
    u32 r3_1 = arg0->byte_c;
    u32 zf_1 = r3_1 == 0;
    if (!zf_1) {
        r3_1 = arg0->word_8;
        zf_1 = r3_1 == 0;
    }
    if (zf_1) {
        return;
    }
    if (*gptr<u32>(arg0->word_4) > r1) {
        *gptr<u32>(r3_1 + (r1 << 2)) = r2;
        return;
    }
}

}  // namespace d_0013ebec
GUEST_EXPORT(0x0013ebec, d_0013ebec::f_0013ebec);

// f_0013ec20: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Reads a wave archive (CWAR, version 1.0.0.0): its INFO block and, when asked, its file table.
namespace d_0013ec20 {

struct __attribute__((packed)) WaveArchiveFileReader {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u8 byte_c;
};
GUEST_OFFSET(WaveArchiveFileReader, word_0, 0x0);
GUEST_OFFSET(WaveArchiveFileReader, word_4, 0x4);
GUEST_OFFSET(WaveArchiveFileReader, word_8, 0x8);
GUEST_OFFSET(WaveArchiveFileReader, byte_c, 0xc);

struct __attribute__((packed)) Object_0013ec20_1 {
    u32 word_0;
    u8 unknown_4[0x4];  // (not used here)
    u32 word_8;
};
GUEST_OFFSET(Object_0013ec20_1, word_0, 0x0);
GUEST_OFFSET(Object_0013ec20_1, word_8, 0x8);

inline constexpr guest::Function<0x0013f3cc, u32(u32)> WaveArchiveFile__info_block;
inline constexpr guest::Function<0x001416bc, u32(u32, u32)> call_001416bc;

void WaveArchiveFileReader__initialize(gptr<WaveArchiveFileReader> reader, gptr<Object_0013ec20_1> file, u32 with_table) {
    u32 r1 = file.addr();
    u32 r5_1 = r1;
    reader->word_0 = 0;
    reader->word_4 = 0;
    reader->word_8 = 0;
    reader->byte_c = 0;
    if (r1 != 0) {
        r1 = 0x52415743u;  // (from the original)
        if (file->word_0 == r1 && file->word_8 == 0x1000000u) {  // (from the original)
            reader->word_0 = r5_1;
            u32 info = WaveArchiveFile__info_block(r5_1);
            r1 = info + 8u;
            reader->word_4 = r1;
            reader->byte_c = 1;
            reader->word_8 = 0;
            if (with_table != 0 && 1) {
                u32 r6_1 = reader->word_0;
                u32 r0_2 = call_001416bc(r6_1, r1);
                r1 = 0x54415743u;  // (from the original)
                if (*gptr<u32>(r6_1 + r0_2) == r1) {
                    u32 r0_4 = call_001416bc(reader->word_0, r1);
                    r1 = guest::cpu()->r[1];
                    reader->word_8 = r0_4 + 4u + r5_1;
                }
            }
        }
    }
    guest::cpu()->r[1] = r1;
}

}  // namespace d_0013ec20
GUEST_EXPORT_FRAMED(0x0013ec20, d_0013ec20::WaveArchiveFileReader__initialize, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_0013edb4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0013edb4 {

struct __attribute__((packed)) Object_0013edb4_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_0013edb4_0, word_0, 0x0);

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
inline constexpr guest::Function<0x0014087c, u32(u32, u32, u32)> call_0014087c;

u32 f_0013edb4(gptr<Object_0013edb4_0> arg0) {
    gptr<Local_0013edb4_r0_2> r0_2 = gptr<Local_0013edb4_r0_2>(FrameHeap__allocate(arg0->word_0, 0x18u, 4u));  // (from the original)
    if (r0_2.addr() != 0) {
        r0_2->word_0 = 0;
        *gptr<u32>(r0_2.addr() + 4u) = 0;
        *gptr<u32>(r0_2.addr() + 8u) = 0;
        *gptr<u32>(r0_2.addr() + 0xcu) = 0;  // (from the original)
        *gptr<u32>(r0_2.addr() + 0x10u) = 0;  // (from the original)
        *gptr<u32>(r0_2.addr() + 0x14u) = 0;  // (from the original)
        r0_2->word_0 = 0;
        u32 ea_6 = r0_2.addr() + 4u;
        *gptr<u32>(ea_6) = 0;
        u32 r0_3 = ea_6 + 4u;
        gptr<Local_0013edb4_ea_7> ea_7 = gptr<Local_0013edb4_ea_7>(r0_2.addr() + 8u);
        ea_7->word_0 = 0;
        ea_7->word_4 = r0_3 + 4u;
        *gptr<u32>(r0_3 + 8u) = r0_3 + 4u;
        r0_2->byte_14 = 1;
        call_0014087c(r0_2.addr() + 8u, r0_2->word_c, r0_2.addr() + 0xcu);  // (from the original)
        linked_list_insert_before(arg0.addr() + 4u, arg0.addr() + 8u, r0_2.addr());
        r0_2 = gptr<Local_0013edb4_r0_2>(1u);
    }
    return r0_2.addr();
}

}  // namespace d_0013edb4
GUEST_EXPORT_FRAMED(0x0013edb4, d_0013edb4::f_0013edb4, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0013ee40: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0013ee40 {

inline constexpr guest::Function<0x00135748, u32(u32, u32, u32, u32)> RecursiveLock__lock;
inline constexpr guest::Function<0x001357ec, u32(u32, u32, u32, u32)> RecursiveLock__unlock;
inline constexpr guest::Function<0x00140f54, u32(u32)> call_00140f54;
inline constexpr guest::Function<0x00140fac, u32(u32, u32)> call_00140fac;
inline constexpr guest::Function<0x001411ec, u32(u32, u32)> call_001411ec;
inline constexpr guest::Function<0x00141490, u32(u32)> call_00141490;
inline constexpr guest::Function<0x001414b4, u32(u32)> call_001414b4;

void f_0013ee40(gptr<sead__AudioSoundHeapCtr> audio_sound_heap_ctr, u32 r1) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 r5_1 = audio_sound_heap_ctr.addr() + 4u;
    RecursiveLock__lock(r5_1, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    if (audio_sound_heap_ctr->word_10 != 0) {
        RecursiveLock__lock(audio_sound_heap_ctr.addr() + 4u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
        call_00141490(audio_sound_heap_ctr.addr() + 0x10u);  // (from the original)
        u32 r0_2 = RecursiveLock__unlock(audio_sound_heap_ctr.addr() + 4u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
        u32 r0_3 = call_00140f54(r0_2);
        u32 r0_4 = call_00140fac(r0_3, 1u);
        call_001411ec(r0_3, r0_4);
        call_001414b4(audio_sound_heap_ctr.addr() + 0x10u);  // (from the original)
        frame.release();
        RecursiveLock__unlock(r5_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
        return;
    }
    frame.release();
    RecursiveLock__unlock(r5_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    return;
}

}  // namespace d_0013ee40
GUEST_EXPORT(0x0013ee40, d_0013ee40::f_0013ee40);

// f_0013ef18: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0013ef18 {

inline constexpr guest::Function<0x00136e58, u32(u32, u32, u32, u32)> call_00136e58;

void f_0013ef18(gptr<SoundMelodyPlayerOneSeqBase> sound_melody_player_one_seq_base) {
    u32 r0_1 = sound_melody_player_one_seq_base->word_8;
    if (r0_1 == 0) {
        guest::cpu()->r[1] = 0u;
        return;
    }
    call_00136e58(r0_1, 0u, guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0013ef18
GUEST_EXPORT(0x0013ef18, d_0013ef18::f_0013ef18);

// f_0013efb4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0013efb4 {

inline constexpr u32 vtable_sead__IDisposer = 0x00905fecu;
inline constexpr u32 global_00975334_address = 0x00975334u;
inline guest::global<u32, 0x00975334> global_00975334;
inline constexpr guest::Function<0x00141650, u32(u32, u32, u32, u32)> call_00141650;

u32 destroy_disposer(gptr<sead__IDisposer> i_disposer) {
    i_disposer->word_0 = vtable_sead__IDisposer;
    u32 r0_1 = i_disposer->word_4;
    u32 r1_1 = *global_00975334;
    if (r0_1 != r1_1) {
        if (r0_1 != 0) {
            call_00141650(r0_1, i_disposer.addr(), guest::cpu()->r[2], guest::cpu()->r[3]);
            r1_1 = guest::cpu()->r[1];
        }
        i_disposer->word_4 = *global_00975334;
    }
    guest::cpu()->r[1] = r1_1;
    return i_disposer.addr();
}

}  // namespace d_0013efb4
GUEST_EXPORT_FRAMED(0x0013efb4, d_0013efb4::destroy_disposer, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0013f398: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
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
    if (wave_archive_file->half_14 == 0x6801u) {  // (from the original)
        u32 r1_2 = *gptr<u32>((wave_archive_file.addr() + 0x14u) + 4u);  // (from the original)
        guest::cpu()->r[1] = r1_2;
        return wave_archive_file.addr() + r1_2;
    }
    u32 r1_4 = *gptr<u32>((wave_archive_file->half_20 == 0x6801u ? wave_archive_file.addr() + 0x20u : 0u) + 4u);  // (from the original)
    guest::cpu()->r[1] = r1_4;
    return wave_archive_file.addr() + r1_4;
}

}  // namespace d_0013f398
GUEST_EXPORT(0x0013f398, d_0013f398::WaveArchiveFile__file_block);

// f_0013f3cc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
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
    if (wave_archive_file->half_14 == 0x6800u) {  // (from the original)
        return wave_archive_file.addr() + *gptr<u32>((wave_archive_file.addr() + 0x14u) + 4u);  // (from the original)
    }
    return wave_archive_file.addr() + *gptr<u32>((wave_archive_file->half_20 == 0x6800u ? wave_archive_file.addr() + 0x20u : 0u) + 4u);  // (from the original)
}

}  // namespace d_0013f3cc
GUEST_EXPORT(0x0013f3cc, d_0013f3cc::WaveArchiveFile__info_block);

// f_0013f5e8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0013f5e8 {

inline constexpr guest::Function<0x00141a9c, u32(u32, u32, u32)> SparseArray__get;

struct __attribute__((packed)) Frame_0013f5e8 {
    u32 word_0;
};
GUEST_OFFSET(Frame_0013f5e8, word_0, 0x0);
GUEST_SIZE(Frame_0013f5e8, 0x4);

u32 f_0013f5e8(u32 r0, u32 r1_unused, u32 r2_unused, u32 r3) {
    guest::StackFrameOf<Frame_0013f5e8> frame;  // the original's stack frame
    frame->word_0 = r3;
    u32 found = SparseArray__get(r0 + 8u, frame.at(0).addr(), 0u);
    return found == 0 ? 0x40u : frame->word_0 & 0xffu;  // (from the original)
}

}  // namespace d_0013f5e8
GUEST_EXPORT_FRAMED(0x0013f5e8, d_0013f5e8::f_0013f5e8, 0x4000);  // pushes {lr} first, as the original

// f_0013f610: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0013f610 {

inline constexpr guest::Function<0x00141a9c, u32(u32, u32, u32)> SparseArray__get;

struct __attribute__((packed)) Frame_0013f610 {
    u32 word_0;
};
GUEST_OFFSET(Frame_0013f610, word_0, 0x0);
GUEST_SIZE(Frame_0013f610, 0x4);

u32 f_0013f610(u32 r0, u32 r1_unused, u32 r2_unused, u32 r3) {
    guest::StackFrameOf<Frame_0013f610> frame;  // the original's stack frame
    frame->word_0 = r3;
    u32 found = SparseArray__get(r0 + 8u, frame.at(0).addr(), 0u);
    if (found == 0) {
        return found;
    }
    return frame->word_0 >> 8u & 0xffu;  // (from the original)
}

}  // namespace d_0013f610
GUEST_EXPORT_FRAMED(0x0013f610, d_0013f610::f_0013f610, 0x4000);  // pushes {lr} first, as the original

// f_0013f69c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0013f69c {

inline constexpr guest::Function<0x00141a9c, u32(u32, u32, u32)> SparseArray__get;

struct __attribute__((packed)) Frame_0013f69c {
    u32 word_0;
};
GUEST_OFFSET(Frame_0013f69c, word_0, 0x0);
GUEST_SIZE(Frame_0013f69c, 0x4);

u32 f_0013f69c(u32 r0, u32 r1_unused, u32 r2_unused, u32 r3) {
    guest::StackFrameOf<Frame_0013f69c> frame;  // the original's stack frame
    frame->word_0 = r3;
    u32 found = SparseArray__get(r0 + 0xcu, frame.at(0).addr(), 0u);  // (from the original)
    if (found != 0) {
        found = frame->word_0;
    }
    return found;
}

}  // namespace d_0013f69c
GUEST_EXPORT_FRAMED(0x0013f69c, d_0013f69c::f_0013f69c, 0x4000);  // pushes {lr} first, as the original

// f_0013f6bc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0013f6bc {

inline constexpr guest::Function<0x00141a9c, u32(u32, u32, u32)> SparseArray__get;

struct __attribute__((packed)) Frame_0013f6bc {
    u32 word_0;
};
GUEST_OFFSET(Frame_0013f6bc, word_0, 0x0);
GUEST_SIZE(Frame_0013f6bc, 0x4);

u32 f_0013f6bc(u32 r0, u32 r1_unused, u32 r2_unused, u32 r3) {
    guest::StackFrameOf<Frame_0013f6bc> frame;  // the original's stack frame
    frame->word_0 = r3;
    u32 found = SparseArray__get(r0 + 0xcu, frame.at(0).addr(), 1u);  // (from the original)
    return found == 0 ? 0x40u : frame->word_0 & 0xffu;  // (from the original)
}

}  // namespace d_0013f6bc
GUEST_EXPORT_FRAMED(0x0013f6bc, d_0013f6bc::f_0013f6bc, 0x4000);  // pushes {lr} first, as the original

// f_0013f6e4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0013f6e4 {

inline constexpr guest::Function<0x00141a9c, u32(u32, u32, u32)> SparseArray__get;

struct __attribute__((packed)) Frame_0013f6e4 {
    u32 word_0;
};
GUEST_OFFSET(Frame_0013f6e4, word_0, 0x0);
GUEST_SIZE(Frame_0013f6e4, 0x4);

u32 f_0013f6e4(u32 r0, u32 r1_unused, u32 r2_unused, u32 r3) {
    guest::StackFrameOf<Frame_0013f6e4> frame;  // the original's stack frame
    frame->word_0 = r3;
    u32 found = SparseArray__get(r0 + 0xcu, frame.at(0).addr(), 1u);  // (from the original)
    if (found == 0) {
        return 1u;
    }
    u32 r0_3 = frame->word_0 >> 8u & 0xffu;  // (from the original)
    return r0_3 == 0 ? r0_3 : 1u;
}

}  // namespace d_0013f6e4
GUEST_EXPORT_FRAMED(0x0013f6e4, d_0013f6e4::f_0013f6e4, 0x4000);  // pushes {lr} first, as the original

// f_0013f718: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0013f718 {

struct __attribute__((packed)) Object_0013f718_0 {
    u8 unknown_0[0xc];  // (not used here)
    u16 half_c;
};
GUEST_OFFSET(Object_0013f718_0, half_c, 0xc);


u32 f_0013f718(gptr<Object_0013f718_0> arg0) {
    u32 r0_1 = u32(arg0->half_c) - 0x2201u;  // (from the original)
    if (r0_1 == 0) {
        return 2u;
    }
    if (r0_1 == 1u) {
        return 3u;
    }
    return r0_1 == 2u;
}

}  // namespace d_0013f718
GUEST_EXPORT(0x0013f718, d_0013f718::f_0013f718);

// f_0013f7b8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0013f7b8 {

struct __attribute__((packed)) WaveArchiveFileReader {
    u32 word_0;
    u8 unknown_4[0x8];  // (not used here)
    u8 byte_c;
};
GUEST_OFFSET(WaveArchiveFileReader, word_0, 0x0);
GUEST_OFFSET(WaveArchiveFileReader, byte_c, 0xc);

inline constexpr guest::Function<0x001416bc, u32(u32)> call_001416bc;

u32 WaveArchiveFileReader__has_table(gptr<WaveArchiveFileReader> wave_archive_file_reader) {
    u32 r1_1 = wave_archive_file_reader->byte_c;
    if (r1_1 == 0) {
        guest::cpu()->r[1] = r1_1;
        return 0u;
    }
    u32 r4_1 = wave_archive_file_reader->word_0;
    u32 r0_1 = call_001416bc(r4_1);
    if (*gptr<u32>(r4_1 + r0_1) == 0x54415743u) {  // (from the original)
        guest::cpu()->r[1] = 0x54415743u;  // (from the original)
        return 1u;
    }
    guest::cpu()->r[1] = 0x54415743u;  // (from the original)
    return 0u;
}

}  // namespace d_0013f7b8
GUEST_EXPORT_FRAMED(0x0013f7b8, d_0013f7b8::WaveArchiveFileReader__has_table, 0x4010);  // pushes {r4, lr} first, as the original

// f_0013f7f4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0013f7f4 {

struct __attribute__((packed)) Object_0013f7f4_0 {
    u8 unknown_0[0x3c];  // (not used here)
    u32 word_3c;
};
GUEST_OFFSET(Object_0013f7f4_0, word_3c, 0x3c);

struct __attribute__((packed)) Object_0013f7f4_2 {
    u32 word_0;
};
GUEST_OFFSET(Object_0013f7f4_2, word_0, 0x0);

inline constexpr guest::Function<0x001416ec, u32(u32, u32)> call_001416ec;

u32 f_0013f7f4(gptr<Object_0013f7f4_0> arg0, u32 r1_unused, gptr<Object_0013f7f4_2> arg2) {
    u32 r0_2 = call_001416ec(arg0->word_3c, guest::cpu()->r[1]);
    if (r0_2 == 0) {
        return r0_2;
    }
    arg2->word_0 = *gptr<u32>(r0_2);
    return 1u;
}

}  // namespace d_0013f7f4
GUEST_EXPORT_FRAMED(0x0013f7f4, d_0013f7f4::f_0013f7f4, 0x4010);  // pushes {r4, lr} first, as the original

// f_0013f81c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0013f81c {

struct __attribute__((packed)) Object_0013f81c_0 {
    u8 unknown_0[0x3c];  // (not used here)
    u32 word_3c;
};
GUEST_OFFSET(Object_0013f81c_0, word_3c, 0x3c);

struct __attribute__((packed)) Object_0013f81c_2 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u8 byte_14;
    u8 byte_15;
    u8 byte_16;
};
GUEST_OFFSET(Object_0013f81c_2, word_0, 0x0);
GUEST_OFFSET(Object_0013f81c_2, word_4, 0x4);
GUEST_OFFSET(Object_0013f81c_2, word_8, 0x8);
GUEST_OFFSET(Object_0013f81c_2, word_c, 0xc);
GUEST_OFFSET(Object_0013f81c_2, word_10, 0x10);
GUEST_OFFSET(Object_0013f81c_2, byte_14, 0x14);
GUEST_OFFSET(Object_0013f81c_2, byte_15, 0x15);
GUEST_OFFSET(Object_0013f81c_2, byte_16, 0x16);

struct __attribute__((packed)) Local_0013f81c_r0_2 {
    u32 word_0;
    u32 word_4;
    u8 byte_8;
};
GUEST_OFFSET(Local_0013f81c_r0_2, word_0, 0x0);
GUEST_OFFSET(Local_0013f81c_r0_2, word_4, 0x4);
GUEST_OFFSET(Local_0013f81c_r0_2, byte_8, 0x8);

inline constexpr guest::Function<0x00141728, u32(u32, u32, u32, u32)> HandleTable__resolve;
inline constexpr guest::Function<0x001417fc, u32(u32)> call_001417fc;
inline constexpr guest::Function<0x00141820, u32(u32)> call_00141820;
inline constexpr guest::Function<0x0014184c, u32(u32)> call_0014184c;
inline constexpr guest::Function<0x00141870, u32(u32)> call_00141870;
inline constexpr guest::Function<0x0014189c, u32(u32)> call_0014189c;

u32 f_0013f81c(gptr<Object_0013f81c_0> arg0, u32 r1_unused, gptr<Object_0013f81c_2> arg2) {
    u32 r0_1 = arg0->word_3c;
    gptr<Local_0013f81c_r0_2> entry_2 = gptr<Local_0013f81c_r0_2>(HandleTable__resolve(r0_1, guest::cpu()->r[1], arg2.addr(), guest::cpu()->r[3]));
    if (entry_2.addr() != 0) {
        arg2->word_0 = entry_2->word_0;
        arg2->word_4 = entry_2->word_4;
        arg2->word_10 = u32(entry_2->byte_8);
        u32 r0_3 = call_001417fc(entry_2.addr());
        arg2->byte_14 = u8(r0_3);
        u32 r0_4 = call_00141820(entry_2.addr());
        arg2->byte_15 = u8(r0_4);
        u32 r0_5 = call_0014189c(entry_2.addr());
        arg2->word_c = r0_5;
        u32 r0_6 = call_00141870(entry_2.addr());
        arg2->word_8 = r0_6;
        u32 r0_7 = call_0014184c(entry_2.addr());
        arg2->byte_16 = u8(r0_7);
        entry_2 = gptr<Local_0013f81c_r0_2>(1u);
    }
    return entry_2.addr();
}

}  // namespace d_0013f81c
GUEST_EXPORT_FRAMED(0x0013f81c, d_0013f81c::f_0013f81c, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0013f890: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0013f890 {

struct __attribute__((packed)) Object_0013f890_0 {
    u8 unknown_0[0x3c];  // (not used here)
    u32 word_3c;
};
GUEST_OFFSET(Object_0013f890_0, word_3c, 0x3c);

struct __attribute__((packed)) Object_0013f890_2 {
    u32 word_0;
    u32 word_4;
    u8 byte_8;
};
GUEST_OFFSET(Object_0013f890_2, word_0, 0x0);
GUEST_OFFSET(Object_0013f890_2, word_4, 0x4);
GUEST_OFFSET(Object_0013f890_2, byte_8, 0x8);

struct __attribute__((packed)) Local_0013f890_r0_2 {
    u32 word_0;
    u8 byte_4;
};
GUEST_OFFSET(Local_0013f890_r0_2, word_0, 0x0);
GUEST_OFFSET(Local_0013f890_r0_2, byte_4, 0x4);

inline constexpr guest::Function<0x001417a0, u32(u32, u32, u32, u32)> call_001417a0;
inline constexpr guest::Function<0x001417dc, u32(u32, u32, u32)> call_001417dc;

u32 f_0013f890(gptr<Object_0013f890_0> arg0, u32 r1_unused, gptr<Object_0013f890_2> arg2) {
    u32 r0_1 = arg0->word_3c;
    gptr<Local_0013f890_r0_2> r0_2 = gptr<Local_0013f890_r0_2>(call_001417a0(r0_1, guest::cpu()->r[1], arg2.addr(), guest::cpu()->r[3]));
    if (r0_2.addr() != 0) {
        arg2->word_0 = r0_2->word_0;
        u32 r0_3 = call_001417dc(r0_2.addr(), guest::cpu()->r[1], arg2.addr());
        arg2->word_4 = r0_3;
        arg2->byte_8 = r0_2->byte_4;
        r0_2 = gptr<Local_0013f890_r0_2>(1u);
    }
    return r0_2.addr();
}

}  // namespace d_0013f890
GUEST_EXPORT_FRAMED(0x0013f890, d_0013f890::f_0013f890, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0013f8cc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
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
    u32 r12 = 0x7801u;  // (from the original)
    u32 r5 = 0u;
    u32 r2 = r0 + 0x14u;  // (from the original)
    u32 r1 = r5;
    if (s32(r3) <= 0) {
        guest::cpu()->r[1] = r1;
        return r5;
    }
L_13f8ec:;
    if (*gptr<u16>(r2 + r1 * 0xcu) != r12) {  // (from the original)
        goto L_13f920;
    }
    res_1 = r2 + r1 * 0xcu;  // (from the original)
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
    u32 r3 = r0 + 0x14u;  // (from the original)
    u32 r5 = r0;
    r0 = 0u;
    u32 r2 = 0x7800u;  // (from the original)
    u32 r1 = r0;
    if (s32(r12) <= 0) {
        guest::cpu()->r[1] = r1;
        return r0;
    }
    do {
        if (*gptr<u16>(r3 + r1 * 0xcu) == r2) {  // (from the original)
            u32 res_1 = r3 + r1 * 0xcu;  // (from the original)
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
        r1 += 1u;
        guest::preempt();
    } while (s32(r12) > s32(r1));
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0013f934
GUEST_EXPORT_FRAMED(0x0013f934, d_0013f934::GroupFile__info_block, 0x30);  // pushes {r4, r5} first, as the original

// f_0013f9a0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
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
    u32 r12 = 0x7802u;  // (from the original)
    u32 r5 = 0u;
    u32 r2 = r0 + 0x14u;  // (from the original)
    u32 r1 = r5;
    if (s32(r3) <= 0) {
        guest::cpu()->r[1] = r1;
        return r5;
    }
L_13f9c0:;
    if (*gptr<u16>(r2 + r1 * 0xcu) != r12) {  // (from the original)
        goto L_13f9f4;
    }
    res_1 = r2 + r1 * 0xcu;  // (from the original)
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
namespace d_0013fa08 {


void do_nothing_0013fa08(u32 r0) {
}

}  // namespace d_0013fa08
GUEST_EXPORT(0x0013fa08, d_0013fa08::do_nothing_0013fa08);

// f_0013fad4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0013fad4 {


void division_by_zero_handler() {
}

}  // namespace d_0013fad4
GUEST_EXPORT(0x0013fad4, d_0013fad4::division_by_zero_handler);

// f_0013fe18: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0013fe18 {

inline constexpr guest::Function<0x0013dee0, u32(u32, u32, u32, u32)> call_0013dee0;
inline constexpr guest::Function<0x001429f4, u32(u32, u32)> call_001429f4;

struct __attribute__((packed)) Frame_0013fe18 {
    u32 word_0;
};
GUEST_OFFSET(Frame_0013fe18, word_0, 0x0);
GUEST_SIZE(Frame_0013fe18, 0x4);

u32 f_0013fe18(u32 r0, u32 r1, u32 r2_unused, u32 r3) {
    guest::StackFrameOf<Frame_0013fe18> frame;  // the original's stack frame
    frame->word_0 = r3;
    u32 r0_1 = call_0013dee0(r0, r1, guest::cpu()->r[2], r3);
    frame->word_0 = r0_1;
    u32 r0_3 = call_001429f4(frame.at(0).addr(), r0);
    return r0_3;
}

}  // namespace d_0013fe18
GUEST_EXPORT_FRAMED(0x0013fe18, d_0013fe18::f_0013fe18, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_0013fefc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0013fefc {

struct __attribute__((packed)) Object_0013fefc_1 {
    u32 word_0;
};
GUEST_OFFSET(Object_0013fefc_1, word_0, 0x0);


u32 query_handle(u32 r0, gptr<Object_0013fefc_1> arg1) {
    u32 zf_1 = r0 == 0;
    if (!zf_1) {
        zf_1 = arg1.addr() == 0;
    }
    if (zf_1) {
        return 0xe0e046bcu;  // (from the original)
    }
    u32 r3_1 = *gptr<u32>(arg1->word_0 + 0xcu);  // (from the original)
    // virtual function 3 of arg1.addr()
    return guest::call_address<u32>(r3_1, arg1.addr(), r0, r0, r3_1);
}

}  // namespace d_0013fefc
GUEST_EXPORT(0x0013fefc, d_0013fefc::query_handle);

// f_0013ff94: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0013ff94 {

struct __attribute__((packed)) Object_0013ff94_0 {
    u8 unknown_0[0xa0];  // (not used here)
    u32 word_a0;
    u8 unknown_a4[0x24];  // (not used here)
    u32 word_c8;
    u32 word_cc;
};
GUEST_OFFSET(Object_0013ff94_0, word_a0, 0xa0);
GUEST_OFFSET(Object_0013ff94_0, word_c8, 0xc8);
GUEST_OFFSET(Object_0013ff94_0, word_cc, 0xcc);

struct __attribute__((packed)) Local_0013ff94_r0_2 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0013ff94_r0_2, word_0, 0x0);
GUEST_OFFSET(Local_0013ff94_r0_2, word_4, 0x4);


u32 f_0013ff94(gptr<Object_0013ff94_0> arg0, u32 r1, u32 r2) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 r1_1 = arg0->word_a0;
    u32 r3_1 = arg0->word_c8;
    u32 r0_1 = r1_1 & 0xfu;  // (from the original)
    u32 r1_2 = r1_1 >> 4;
    if (s32(arg0->word_cc) > s32(r0_1)) {
        gptr<Local_0013ff94_r0_2> r0_2 = gptr<Local_0013ff94_r0_2>(r3_1 + r0_1 * 0xcu);  // (from the original)
        if (r0_2->word_4 > r1_2) {
            u32 r3_2 = r0_2->word_0 + r1_2;
            if (r3_2 != 0) {
                frame.release();
                return guest::call_address<u32>(r3_2, r1, r2, r2, r3_2);
            }
        }
    }
    guest::cpu()->r[1] = r1_2;
    return 0xd8e12c04u;  // (from the original)
}

}  // namespace d_0013ff94
GUEST_EXPORT(0x0013ff94, d_0013ff94::f_0013ff94);
