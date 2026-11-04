// Functions decompiled by tools/decomp (docs/decomp.md), each proved equal to the recompiled original (prove-cpp). The
// names come from games/acnl/names (tools/decomp/names.py); the others are generated (d_<address>::f_<address>,
// Object_<address>_<argument>, word_<offset>) and still to be chosen. Hexadecimal constants are the original's
// (addresses, offsets, sizes and ids as the game has them).
#include "guest/guest.hpp"
#include "core/date.hpp"
#include "recovered/structs.hpp"

#include <bit>

using guest::gptr;

// f_00331550: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Gives the villager of the record (+2) the item (+0) as its +0x8e6 item.
namespace d_00331550 {

struct __attribute__((packed)) Villager {
    u16 half_0;
    u8 byte_2;
};
GUEST_OFFSET(Villager, half_0, 0x0);
GUEST_OFFSET(Villager, byte_2, 0x2);

inline constexpr guest::Function<0x00112e09, u32(u32, u32)> SaveVillager__set_item_8e6;
inline constexpr guest::Function<0x002fae84, u32(u32, u32, u32, u32)> get_data_base;
inline constexpr guest::Function<0x002fb310, u32(u32)> slot_records_of;
inline constexpr guest::Function<0x002fcbb0, u32(u32, u32)> construct_item;
inline constexpr guest::Function<0x003058c9, u32(u32, u32)> valid_villager_at;

struct __attribute__((packed)) VillagerReceiveItem8e6Frame {
    u32 word_0;
};
GUEST_OFFSET(VillagerReceiveItem8e6Frame, word_0, 0x0);
GUEST_SIZE(VillagerReceiveItem8e6Frame, 0x4);

u32 Villager__receive_item_8e6(gptr<Villager> villager, u32 r1, u32 r2_unused, u32 r3) {
    guest::StackFrameOf<VillagerReceiveItem8e6Frame> frame;  // the original's stack frame
    frame->word_0 = r3;
    u32 data_base = get_data_base(villager.addr(), r1, guest::cpu()->r[2], r3);
    u32 records = slot_records_of(data_base);
    u32 r1_2 = s8(villager->byte_2);
    u32 valid_villager = valid_villager_at(records + 4u, r1_2);
    if (valid_villager == 0) {
        return valid_villager;
    }
    u32 r1_4 = villager->half_0;
    u32 r0_5 = frame.at(0).addr();
    construct_item(r0_5, r1_4);
    SaveVillager__set_item_8e6(valid_villager, r0_5);
    return frame.at(0).addr();
}

}  // namespace d_00331550
GUEST_EXPORT_FRAMED(0x00331550, d_00331550::Villager__receive_item_8e6, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_00331778: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Copies the half at +0x2e of the target (+0x4e4) to +0x4ec and marks it set.
namespace d_00331778 {

struct __attribute__((packed)) CopyTargetHalf2eArg0 {
    u8 unknown_0[0x4e4];  // (not used here)
    u32 word_4e4;
    u8 unknown_4e8[0x4];  // (not used here)
    u16 half_4ec;
    u8 byte_4ee;
};
GUEST_OFFSET(CopyTargetHalf2eArg0, word_4e4, 0x4e4);
GUEST_OFFSET(CopyTargetHalf2eArg0, half_4ec, 0x4ec);
GUEST_OFFSET(CopyTargetHalf2eArg0, byte_4ee, 0x4ee);


void copy_target_half_2e(gptr<CopyTargetHalf2eArg0> arg0) {
    u32 r1_1 = *gptr<u16>(arg0->word_4e4 + 0x2eu);
    arg0->half_4ec = u16(r1_1);
    arg0->byte_4ee = 1;
    guest::cpu()->r[1] = r1_1;
}

}  // namespace d_00331778
GUEST_EXPORT(0x00331778, d_00331778::copy_target_half_2e);

// f_003317b4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Creates the singleton on a heap (arg 0), with its disposer, unless it exists.
namespace d_003317b4 {

struct __attribute__((packed)) Local_003317b4_r4_1 {
    u8 unknown_0[0x10];  // (not used here)
    u8 byte_10;
    u8 byte_11;
    u8 byte_12;
    u8 byte_13;
    u32 word_14;
};
GUEST_OFFSET(Local_003317b4_r4_1, byte_10, 0x10);
GUEST_OFFSET(Local_003317b4_r4_1, byte_11, 0x11);
GUEST_OFFSET(Local_003317b4_r4_1, byte_12, 0x12);
GUEST_OFFSET(Local_003317b4_r4_1, byte_13, 0x13);
GUEST_OFFSET(Local_003317b4_r4_1, word_14, 0x14);

inline constexpr u32 vtable_NpcLockPlayerPermitBit__SingletonDisposer_ = 0x008faafcu;
inline guest::global<u32, 0x0095385c> npc_lock_player_permit_bit_instance;
inline guest::global<u32, 0x00953860> npc_lock_player_permit_disposer;
inline constexpr guest::Function<0x00131280, u32(u32, u32, u32, u32)> allocate_on_heap_entry;
inline constexpr guest::Function<0x001320cc, u32(u32, u32, u32)> IDisposer__construct_in_heap;

void NpcLockPlayerPermitBit__create_instance(u32 singleton_disposer, u32 r1_unused, u32 r2_unused, u32 r3) {
    if (*npc_lock_player_permit_bit_instance == 0) {
        u32 block_2 = allocate_on_heap_entry(0x18u, singleton_disposer, 4u, r3);
        gptr<Local_003317b4_r4_1> r4_1 = gptr<Local_003317b4_r4_1>(block_2);
        if (block_2 == 0) {
            *npc_lock_player_permit_disposer = r4_1.addr();
        } else {
            IDisposer__construct_in_heap(block_2, singleton_disposer, 3u);
            *gptr<u32>(block_2) = vtable_NpcLockPlayerPermitBit__SingletonDisposer_;
            *npc_lock_player_permit_disposer = block_2;
            r4_1->byte_10 = 0;
            r4_1->byte_11 = 0;
            r4_1->byte_12 = 4;
            r4_1->byte_13 = 0x3f;
            block_2 = r4_1.addr();
            r4_1->word_14 = 0;
        }
        *npc_lock_player_permit_bit_instance = block_2;
    }
}

}  // namespace d_003317b4
GUEST_EXPORT_FRAMED(0x003317b4, d_003317b4::NpcLockPlayerPermitBit__create_instance, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_003319e8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Resets the permit record (state 4, mask 0x3f).
namespace d_003319e8 {

struct __attribute__((packed)) NpcLockPlayerPermitBit {
    u8 unknown_0[0x10];  // (not used here)
    u8 byte_10;
    u8 byte_11;
    u8 byte_12;
    u8 byte_13;
    u32 word_14;
};
GUEST_OFFSET(NpcLockPlayerPermitBit, byte_10, 0x10);
GUEST_OFFSET(NpcLockPlayerPermitBit, byte_11, 0x11);
GUEST_OFFSET(NpcLockPlayerPermitBit, byte_12, 0x12);
GUEST_OFFSET(NpcLockPlayerPermitBit, byte_13, 0x13);
GUEST_OFFSET(NpcLockPlayerPermitBit, word_14, 0x14);


void NpcLockPlayerPermitBit__reset(gptr<NpcLockPlayerPermitBit> npc_lock_player_permit_bit) {
    npc_lock_player_permit_bit->byte_10 = 0;
    npc_lock_player_permit_bit->byte_11 = 0;
    npc_lock_player_permit_bit->byte_12 = 4;
    npc_lock_player_permit_bit->byte_13 = 0x3f;
    npc_lock_player_permit_bit->word_14 = 0;
    guest::cpu()->r[1] = 0u;
}

}  // namespace d_003319e8
GUEST_EXPORT(0x003319e8, d_003319e8::NpcLockPlayerPermitBit__reset);

// f_00331a0c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Sets the two halves and the two floats.
namespace d_00331a0c {

struct __attribute__((packed)) HalfFloat2 {
    u16 half_0;
    u8 unknown_2[0x2];  // (not used here)
    float float_4;
    float float_8;
    u16 half_c;
};
GUEST_OFFSET(HalfFloat2, half_0, 0x0);
GUEST_OFFSET(HalfFloat2, float_4, 0x4);
GUEST_OFFSET(HalfFloat2, float_8, 0x8);
GUEST_OFFSET(HalfFloat2, half_c, 0xc);


void HalfFloat2__set(gptr<HalfFloat2> half_float2, u32 r1, float S0, float S1) {
    half_float2->half_0 = u16(r1);
    half_float2->half_c = u16(r1);
    half_float2->float_4 = S0;
    half_float2->float_8 = S1;
}

}  // namespace d_00331a0c
GUEST_EXPORT(0x00331a0c, d_00331a0c::HalfFloat2__set);

// f_00331a20: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Zeroes the two halves and the two floats.
namespace d_00331a20 {

struct __attribute__((packed)) HalfFloat2 {
    u16 half_0;
    u8 unknown_2[0x2];  // (not used here)
    float float_4;
    float float_8;
    u16 half_c;
};
GUEST_OFFSET(HalfFloat2, half_0, 0x0);
GUEST_OFFSET(HalfFloat2, float_4, 0x4);
GUEST_OFFSET(HalfFloat2, float_8, 0x8);
GUEST_OFFSET(HalfFloat2, half_c, 0xc);


void HalfFloat2__clear(gptr<HalfFloat2> half_float2) {
    float S0_1 = 0.0f;
    half_float2->half_0 = 0;
    half_float2->float_4 = S0_1;
    half_float2->float_8 = S0_1;
    half_float2->half_c = 0;
    guest::cpu()->s[0] = S0_1;
}

}  // namespace d_00331a20
GUEST_EXPORT(0x00331a20, d_00331a20::HalfFloat2__clear);

// f_00331a40: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Starts a furniture audio sound object (unless started): kind 9, then the furniture start.
namespace d_00331a40 {

inline constexpr guest::Function<0x002d1f40, u32(u32, u32, u32, u32)> SoundObjFurniture__start;

struct __attribute__((packed)) SoundObjFurnitureAudioStartFrame {
    u32 word_0;
};
GUEST_OFFSET(SoundObjFurnitureAudioStartFrame, word_0, 0x0);
GUEST_SIZE(SoundObjFurnitureAudioStartFrame, 0x4);

u32 SoundObjFurnitureAudio__start(gptr<SoundObjFurnitureAudio> sound_obj_furniture_audio, u32 r1_unused, u32 r2_unused, u32 r3) {
    guest::StackFrameOf<SoundObjFurnitureAudioStartFrame> frame;  // the original's stack frame
    frame->word_0 = r3;
    u32 r12_1 = *frame.at<u32>(0x10);
    if (sound_obj_furniture_audio->started != 0) {
        return sound_obj_furniture_audio.addr();
    }
    sound_obj_furniture_audio->kind = 9;
    frame->word_0 = r12_1;
    return SoundObjFurniture__start(sound_obj_furniture_audio.addr(), guest::cpu()->r[1], guest::cpu()->r[2], r3);
}

}  // namespace d_00331a40
GUEST_EXPORT_FRAMED(0x00331a40, d_00331a40::SoundObjFurnitureAudio__start, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_00331a68: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Stops the room music player when this furniture audio is its source, and forgets it.
namespace d_00331a68 {

struct __attribute__((packed)) Local_00331a68_r4_1 {
    u8 unknown_0[0x794];  // (not used here)
    u32 word_794;
};
GUEST_OFFSET(Local_00331a68_r4_1, word_794, 0x794);

inline constexpr u32 sound_room_music_player_instance_address = 0x0094d548u;
inline constexpr guest::Function<0x0012eb50, u32(u32, u32, u32, u32)> SoundHandle__stop_with;

u32 AudioObjFurnitureAudio__forget(u32 audio_obj_furniture_audio) {
    u32 r5_1 = audio_obj_furniture_audio + 8u;
    u32 r0_1 = sound_room_music_player_instance_address;
    gptr<Local_00331a68_r4_1> r4_1 = gptr<Local_00331a68_r4_1>(*gptr<u32>(r0_1));
    if (r4_1.addr() != 0) {
        if (r4_1->word_794 == r5_1) {
            SoundHandle__stop_with(r4_1.addr(), guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
        }
        r0_1 = r4_1->word_794;
        if (r0_1 == r5_1) {
            r0_1 = 0u;
            r4_1->word_794 = r0_1;
        }
    }
    return r0_1;
}

}  // namespace d_00331a68
GUEST_EXPORT_FRAMED(0x00331a68, d_00331a68::AudioObjFurnitureAudio__forget, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_00331ab0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Plays the room music (when the room music player exists).
namespace d_00331ab0 {

inline constexpr u32 sound_room_music_player_instance_address = 0x0094d548u;
inline guest::global<u32, 0x0094d548> sound_room_music_player_instance;
inline constexpr guest::Function<0x003220e0, u32(u32, u32, u32, u32)> RoomMusicPlayer__play;

u32 AudioObjFurnitureAudio__play_room_music() {
    u32 r0_1 = *sound_room_music_player_instance;
    if (r0_1 == 0) {
        return r0_1;
    }
    return RoomMusicPlayer__play(r0_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_00331ab0
GUEST_EXPORT(0x00331ab0, d_00331ab0::AudioObjFurnitureAudio__play_room_music);

// f_00331ad4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Makes this furniture audio the room music player's source and stops the music.
namespace d_00331ad4 {

inline constexpr u32 sound_room_music_player_instance_address = 0x0094d548u;
inline guest::global<u32, 0x0094d548> sound_room_music_player_instance;
inline constexpr guest::Function<0x0032245c, u32(u32, u32, u32, u32)> RoomMusicPlayer__stop;

u32 AudioObjFurnitureAudio__stop_room_music(u32 audio_obj_furniture_audio) {
    u32 r2_1 = audio_obj_furniture_audio + 8u;
    u32 r0_1 = *sound_room_music_player_instance;
    if (r0_1 == 0) {
        return r0_1;
    }
    *gptr<u32>(r0_1 + 0x794u) = r2_1;
    return RoomMusicPlayer__stop(r0_1, guest::cpu()->r[1], r2_1, guest::cpu()->r[3]);
}

}  // namespace d_00331ad4
GUEST_EXPORT(0x00331ad4, d_00331ad4::AudioObjFurnitureAudio__stop_room_music);

// f_00331c1c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Stops a furniture audio sound object (when started): the room music player stops it if it is its source,
// then the furniture stop.
namespace d_00331c1c {

struct __attribute__((packed)) Local_00331c1c_r4_1 {
    u8 unknown_0[0x794];  // (not used here)
    u32 word_794;
};
GUEST_OFFSET(Local_00331c1c_r4_1, word_794, 0x794);

inline constexpr u32 sound_room_music_player_instance_address = 0x0094d548u;
inline constexpr guest::Function<0x0012eb50, u32(u32, u32, u32, u32)> SoundHandle__stop_with;
inline constexpr guest::Function<0x002d27e0, u32(u32, u32, u32, u32)> SoundObjFurniture__stop;

u32 SoundObjFurnitureAudio__stop(gptr<SoundObjFurnitureAudio> sound_obj_furniture_audio, u32 r1) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 r0_1 = sound_obj_furniture_audio->started;
    if (r0_1 != 0) {
        r0_1 = sound_room_music_player_instance_address;
        gptr<Local_00331c1c_r4_1> r4_1 = gptr<Local_00331c1c_r4_1>(*gptr<u32>(r0_1));
        if (r4_1.addr() != 0) {
            if (r4_1->word_794 == sound_obj_furniture_audio.addr()) {
                SoundHandle__stop_with(r4_1.addr(), 5u, guest::cpu()->r[2], guest::cpu()->r[3]);
                r1 = guest::cpu()->r[1];
                if (r4_1->word_794 == sound_obj_furniture_audio.addr()) {
                    r4_1->word_794 = 0;
                }
            }
            frame.release();
            return SoundObjFurniture__stop(sound_obj_furniture_audio.addr(), r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        }
    }
    guest::cpu()->r[1] = r1;
    return r0_1;
}

}  // namespace d_00331c1c
GUEST_EXPORT(0x00331c1c, d_00331c1c::SoundObjFurnitureAudio__stop);

// f_00331c7c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Constructs a furniture audio sound object: a furniture sound object with its own vtable.
namespace d_00331c7c {

inline constexpr u32 vtable_SoundObjFurnitureAudio = 0x008f5bb0u;
inline constexpr guest::Function<0x002d2a4c, u32(u32, u32, u32, u32)> SoundObjFurniture__construct;

u32 SoundObjFurnitureAudio__SoundObjFurnitureAudio(u32 sound_obj_furniture_audio, u32 r1) {
    u32 r0_1 = SoundObjFurniture__construct(sound_obj_furniture_audio, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    *gptr<u32>(r0_1) = vtable_SoundObjFurnitureAudio;
    guest::cpu()->r[1] = vtable_SoundObjFurnitureAudio;
    return r0_1;
}

}  // namespace d_00331c7c
GUEST_EXPORT_FRAMED(0x00331c7c, d_00331c7c::SoundObjFurnitureAudio__SoundObjFurnitureAudio, 0x4010);  // pushes {r4, lr} first, as the original

// f_00331d0c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Destroys a furniture audio sound object: stops it (as SoundObjFurnitureAudio__stop), then the furniture
// sound object.
namespace d_00331d0c {

struct __attribute__((packed)) Local_00331d0c_r5_1 {
    u8 unknown_0[0x794];  // (not used here)
    u32 word_794;
};
GUEST_OFFSET(Local_00331d0c_r5_1, word_794, 0x794);

inline constexpr u32 vtable_SoundObjFurnitureAudio = 0x008f5bb0u;
inline constexpr u32 sound_room_music_player_instance_address = 0x0094d548u;
inline guest::global<u32, 0x0094d548> sound_room_music_player_instance;
inline constexpr guest::Function<0x0012eb50, u32(u32, u32, u32, u32)> SoundHandle__stop_with;
inline constexpr guest::Function<0x002d27e0, u32(u32, u32, u32, u32)> SoundObjFurniture__stop;
inline constexpr guest::Function<0x002d2b90, u32(u32, u32, u32, u32)> SoundObjFurniture__destructor;

u32 SoundObjFurnitureAudio__destructor(gptr<SoundObjFurnitureAudio> sound_obj_furniture_audio, u32 r1) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    sound_obj_furniture_audio->vtable = vtable_SoundObjFurnitureAudio;
    if (sound_obj_furniture_audio->started != 0) {
        gptr<Local_00331d0c_r5_1> r5_1 = gptr<Local_00331d0c_r5_1>(*sound_room_music_player_instance);
        if (r5_1.addr() != 0) {
            u32 r1_1 = r5_1->word_794;
            if (r1_1 == sound_obj_furniture_audio.addr()) {
                SoundHandle__stop_with(r5_1.addr(), 5u, guest::cpu()->r[2], guest::cpu()->r[3]);
                r1_1 = r5_1->word_794;
                if (r1_1 == sound_obj_furniture_audio.addr()) {
                    r5_1->word_794 = 0;
                }
            }
            SoundObjFurniture__stop(sound_obj_furniture_audio.addr(), r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
            r1 = guest::cpu()->r[1];
        }
    }
    frame.release();
    return SoundObjFurniture__destructor(sound_obj_furniture_audio.addr(), r1, guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_00331d0c
GUEST_EXPORT(0x00331d0c, d_00331d0c::SoundObjFurnitureAudio__destructor);

// f_003324bc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Stops a music box furniture's sound (when playing) and forgets its tune.
namespace d_003324bc {

inline constexpr guest::Function<0x00136e58, u32(u32, u32, u32, u32)> BasicSound__stop;

u32 SoundObjFurnitureOrgel__stop(gptr<SoundObjFurnitureOrgel> sound_obj_furniture_orgel, u32 r1) {
    u32 r0_1 = sound_obj_furniture_orgel->word_90;
    if (r0_1 == 0) {
        return r0_1;
    }
    u32 r0_2 = sound_obj_furniture_orgel->word_94;
    if (r0_2 != 0) {
        BasicSound__stop(r0_2, 0u, guest::cpu()->r[2], guest::cpu()->r[3]);
    }
    u32 r1_1 = ~0u;
    sound_obj_furniture_orgel->word_98 = r1_1;
    sound_obj_furniture_orgel->word_a0 = 0;
    sound_obj_furniture_orgel->word_9c = r1_1;
    sound_obj_furniture_orgel->word_a4 = 0;
    sound_obj_furniture_orgel->word_90 = 0;
    guest::cpu()->r[1] = r1_1;
    return 0u;
}

}  // namespace d_003324bc
GUEST_EXPORT_FRAMED(0x003324bc, d_003324bc::SoundObjFurnitureOrgel__stop, 0x4010);  // pushes {r4, lr} first, as the original

// f_0033254c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Constructs a music box furniture sound object: a furniture sound object with a fader.
namespace d_0033254c {

struct __attribute__((packed)) Local_0033254c_ea_2 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0033254c_ea_2, word_0, 0x0);
GUEST_OFFSET(Local_0033254c_ea_2, word_4, 0x4);

struct __attribute__((packed)) Local_0033254c_r0_1 {
    u32 vtable;
    u32 word_4;
    u8 unknown_8[0x94];  // (not used here)
    u32 word_9c;
    u32 word_a0;
    u32 word_a4;
    u32 word_a8;
    u32 sound_fader_vtable;
    float float_b0;
    float float_b4;
    float float_b8;
    u32 word_bc;
    float float_c0;
    float float_c4;
};
GUEST_OFFSET(Local_0033254c_r0_1, vtable, 0x0);
GUEST_OFFSET(Local_0033254c_r0_1, word_4, 0x4);
GUEST_OFFSET(Local_0033254c_r0_1, word_9c, 0x9c);
GUEST_OFFSET(Local_0033254c_r0_1, word_a0, 0xa0);
GUEST_OFFSET(Local_0033254c_r0_1, word_a4, 0xa4);
GUEST_OFFSET(Local_0033254c_r0_1, word_a8, 0xa8);
GUEST_OFFSET(Local_0033254c_r0_1, sound_fader_vtable, 0xac);
GUEST_OFFSET(Local_0033254c_r0_1, float_b0, 0xb0);
GUEST_OFFSET(Local_0033254c_r0_1, float_b4, 0xb4);
GUEST_OFFSET(Local_0033254c_r0_1, float_b8, 0xb8);
GUEST_OFFSET(Local_0033254c_r0_1, word_bc, 0xbc);
GUEST_OFFSET(Local_0033254c_r0_1, float_c0, 0xc0);
GUEST_OFFSET(Local_0033254c_r0_1, float_c4, 0xc4);

inline constexpr u32 vtable_SoundFader_rec = 0x008eb474u;
inline constexpr u32 vtable_SoundObjFurnitureOrgel = 0x008f5bf8u;
inline constexpr guest::Function<0x002d2a4c, u32(u32, u32, u32, u32)> SoundObjFurniture__construct;

u32 SoundObjFurnitureOrgel__SoundObjFurnitureOrgel(u32 sound_obj_furniture_orgel, u32 r1, u32 r2, u32 r3, float S0) {
    gptr<Local_0033254c_r0_1> r0_1 = gptr<Local_0033254c_r0_1>(SoundObjFurniture__construct(sound_obj_furniture_orgel, r1, r2, r3));
    u32 r3_1 = ~0u;
    r0_1->vtable = vtable_SoundObjFurnitureOrgel;
    *gptr<u32>(r0_1.addr() + 0x90u) = 0;
    gptr<Local_0033254c_ea_2> ea_2 = gptr<Local_0033254c_ea_2>(r0_1.addr() + 0x94u);
    ea_2->word_0 = 0;
    ea_2->word_4 = r3_1;
    r0_1->word_a0 = 0;
    r0_1->word_9c = r3_1;
    r0_1->word_a4 = 0;
    r0_1->word_a8 = 0x78;
    float S0_1 = 0.0f;
    r0_1->sound_fader_vtable = vtable_SoundFader_rec;
    r0_1->float_b0 = S0_1;
    r0_1->float_b4 = S0_1;
    r0_1->float_b8 = S0_1;
    r0_1->word_bc = r3_1;
    r0_1->float_c0 = S0_1;
    r0_1->float_c4 = S0_1;
    r0_1->word_4 = 4;
    guest::cpu()->r[1] = 4u;
    guest::cpu()->s[0] = S0_1;
    return r0_1.addr();
}

}  // namespace d_0033254c
GUEST_EXPORT_FRAMED(0x0033254c, d_0033254c::SoundObjFurnitureOrgel__SoundObjFurnitureOrgel, 0x4010);  // pushes {r4, lr} first, as the original

// f_00332628: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Destroys a music box furniture sound object: stops its sound, then the furniture sound object.
namespace d_00332628 {

inline constexpr u32 vtable_SoundObjFurnitureOrgel = 0x008f5bf8u;
inline constexpr guest::Function<0x00136cc8, u32(u32, u32, u32, u32)> detach_from_parent;
inline constexpr guest::Function<0x00136e58, u32(u32, u32, u32, u32)> BasicSound__stop;
inline constexpr guest::Function<0x002d2b90, u32(u32, u32, u32, u32)> SoundObjFurniture__destructor;

u32 SoundObjFurnitureOrgel__destructor(gptr<SoundObjFurnitureOrgel> sound_obj_furniture_orgel, u32 r1) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    sound_obj_furniture_orgel->vtable = vtable_SoundObjFurnitureOrgel;
    if (sound_obj_furniture_orgel->word_90 != 0) {
        u32 r0_1 = sound_obj_furniture_orgel->word_94;
        if (r0_1 != 0) {
            BasicSound__stop(r0_1, 0u, guest::cpu()->r[2], guest::cpu()->r[3]);
        }
        r1 = ~0u;
        sound_obj_furniture_orgel->word_98 = r1;
        sound_obj_furniture_orgel->word_a0 = 0;
        sound_obj_furniture_orgel->word_9c = r1;
        sound_obj_furniture_orgel->word_a4 = 0;
        sound_obj_furniture_orgel->word_90 = 0;
    }
    detach_from_parent(sound_obj_furniture_orgel.addr() + 0x94u, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    frame.release();
    return SoundObjFurniture__destructor(sound_obj_furniture_orgel.addr(), guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_00332628
GUEST_EXPORT(0x00332628, d_00332628::SoundObjFurnitureOrgel__destructor);

// f_00332688: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Copies the letter (with its item and texts) into the first free of the 80 letter slots.
namespace d_00332688 {

struct __attribute__((packed)) StoreLetterInFirstFreeSlotArg0 {
    u8 unknown_0[0xc80];  // (not used here)
    u32 word_c80;
};
GUEST_OFFSET(StoreLetterInFirstFreeSlotArg0, word_c80, 0xc80);

struct __attribute__((packed)) Local_00332688_r4_1 {
    u8 unknown_0[0x26e];  // (not used here)
    u8 byte_26e;
    u8 byte_26f;
    u8 byte_270;
    u8 byte_271;
    u8 byte_272;
};
GUEST_OFFSET(Local_00332688_r4_1, byte_26e, 0x26e);
GUEST_OFFSET(Local_00332688_r4_1, byte_26f, 0x26f);
GUEST_OFFSET(Local_00332688_r4_1, byte_270, 0x270);
GUEST_OFFSET(Local_00332688_r4_1, byte_271, 0x271);
GUEST_OFFSET(Local_00332688_r4_1, byte_272, 0x272);

struct __attribute__((packed)) Local_00332688_r5_2 {
    u8 unknown_0[0x26e];  // (not used here)
    u8 byte_26e;
    u8 byte_26f;
    u8 byte_270;
    u8 byte_271;
    u8 byte_272;
};
GUEST_OFFSET(Local_00332688_r5_2, byte_26e, 0x26e);
GUEST_OFFSET(Local_00332688_r5_2, byte_26f, 0x26f);
GUEST_OFFSET(Local_00332688_r5_2, byte_270, 0x270);
GUEST_OFFSET(Local_00332688_r5_2, byte_271, 0x271);
GUEST_OFFSET(Local_00332688_r5_2, byte_272, 0x272);

inline constexpr guest::Function<0x001e4348, u32(u32, u32, u32)> LetterStorage__store_at;
inline constexpr guest::Function<0x002f8574, u32(u32, u32, u32)> copy_bytes_at_any_alignment;
inline constexpr guest::Function<0x002fb918, u32(u32)> data_block_71900;
inline constexpr guest::Function<0x002fb94c, u32(u32, u32, u32, u32)> get_current_player;
inline constexpr guest::Function<0x002fbb30, u32(u32, u32, u32)> copy_aligned_bytes;
inline constexpr guest::Function<0x002fc8e8, u32(u32, u32)> Item__copy;
inline constexpr guest::Function<0x00311c70, u32(u32, u32)> copy_8_bytes_returning_destination;
inline constexpr guest::Function<0x007105d4, u32(u32, u32, u32)> first_clear_entry_of_80;

void store_letter_in_first_free_slot(gptr<StoreLetterInFirstFreeSlotArg0> arg0, u32 r1, u32 r2) {
    u32 r0 = arg0.addr();
    u32 r7 = r0;
    u32 player = get_current_player(r0, r1, r2, guest::cpu()->r[3]);
    if (player != 0) {
        u32 r0_2 = data_block_71900(player);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        u32 r0_3 = arg0->word_c80;
        u32 r8 = 0u;
        u32 letter_storage = (r0_2 + 0xa400u) + 0xf8u;
        u32 r9 = r7 + 0xc80u;
        u32 i = r8;
        if (r0_3 >= 0u && r0_3 != 0) {
            do {
                u32 r0_4 = first_clear_entry_of_80(letter_storage, r1, r2);
                if (r0_4 + 1u == 0) {
                    break;
                }
                LetterStorage__store_at(letter_storage, r0_4, r7 + (i + (i << 2) << 7));
                r1 = guest::cpu()->r[1];
                r2 = guest::cpu()->r[2];
                i += 1u;
                r8 += 1u;
                guest::preempt();
            } while (*gptr<u32>(r7 + 0xc80u) > i);
        }
        u32 r0_5 = *gptr<u32>(r7 + 0xc80u);
        u32 zf_1 = r0_5 == r8;
        if (zf_1) {
            r0_5 = 0u;
            *gptr<u32>(r7 + 0xc80u) = r0_5;
        } else {
            zf_1 = r8 == 0;
        }
        if (!zf_1) {
            u32 j = r8;
            if (r0_5 > j) {
                u32 r10 = 0x182u;
                do {
                    u32 r0_6 = j - r8;
                    gptr<Local_00332688_r5_2> r5_2 = gptr<Local_00332688_r5_2>(r7 + (j + (j << 2) << 7));
                    gptr<Local_00332688_r4_1> r4_1 = gptr<Local_00332688_r4_1>(r7 + (r0_6 + (r0_6 << 2) << 7));
                    copy_aligned_bytes(r4_1.addr(), r5_2.addr(), 0x31u);
                    copy_aligned_bytes(r4_1.addr() + 0x34u, r5_2.addr() + 0x34u, 0x31u);
                    copy_aligned_bytes(r4_1.addr() + 0x68u, r5_2.addr() + 0x68u, 0x42u);
                    copy_bytes_at_any_alignment(r4_1.addr() + 0xaau, r5_2.addr() + 0xaau, r10);
                    copy_aligned_bytes(r4_1.addr() + 0x22cu, r5_2.addr() + 0x22cu, 0x42u);
                    r4_1->byte_26e = r5_2->byte_26e;
                    r4_1->byte_26f = r5_2->byte_26f;
                    r4_1->byte_270 = r5_2->byte_270;
                    r4_1->byte_271 = r5_2->byte_271;
                    r4_1->byte_272 = r5_2->byte_272;
                    Item__copy(r4_1.addr() + 0x274u, r5_2.addr() + 0x274u);
                    copy_8_bytes_returning_destination(r4_1.addr() + 0x278u, r5_2.addr() + 0x278u);
                    r0_5 = *gptr<u32>(r7 + 0xc80u);
                    j += 1u;
                    guest::preempt();
                } while (r0_5 > j);
            }
            *gptr<u32>(r9) = r0_5 - r8;
        }
    }
}

}  // namespace d_00332688
GUEST_EXPORT_FRAMED(0x00332688, d_00332688::store_letter_in_first_free_slot, 0x47f0);  // pushes {i, letter_storage, j, r7, r8, r9, r10, lr} first, as the original

// f_003327e8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Adds an exhibition letter with the item to the 5 pending letters (0x280 bytes each); false when full.
namespace d_003327e8 {

struct __attribute__((packed)) ExhibitionLetters {
    u8 unknown_0[0xc80];  // (not used here)
    u32 word_c80;
};
GUEST_OFFSET(ExhibitionLetters, word_c80, 0xc80);

inline constexpr guest::Function<0x002fcbb0, u32(u32, u32, u32, u32)> construct_item;
inline constexpr guest::Function<0x005cc2f4, u32(u32, u32, u32, u32)> namespace___SimpleFuncDelegate__SimpleFuncDelegate_005cc2f4;
inline constexpr guest::Function<0x00768138, u32(u32, u32, u32)> set_held_item;

struct __attribute__((packed)) ExhibitionLettersAddFrame {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u8 unknown_c[0x8];  // (not read or written by name)
};
GUEST_OFFSET(ExhibitionLettersAddFrame, word_0, 0x0);
GUEST_OFFSET(ExhibitionLettersAddFrame, word_4, 0x4);
GUEST_OFFSET(ExhibitionLettersAddFrame, word_8, 0x8);
GUEST_SIZE(ExhibitionLettersAddFrame, 0x14);

u32 ExhibitionLetters__add(gptr<ExhibitionLetters> exhibition_letters, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<ExhibitionLettersAddFrame> frame;  // the original's stack frame
    u32 r0_1 = 0;
    u32 r5_1 = exhibition_letters.addr() + 0xc80u;
    if (exhibition_letters->word_c80 >= 5u) {
        r0_1 = 0u;
    } else {
        construct_item(frame.at(0xc).addr(), 0x225au, r2, r3);
        frame->word_0 = frame.at(0xc).addr();
        frame->word_4 = 9;
        frame->word_8 = 0x3327e4;
        namespace___SimpleFuncDelegate__SimpleFuncDelegate_005cc2f4(exhibition_letters.addr() + exhibition_letters->word_c80 * 0x280u, 0x332888u, 3u, r1);
        set_held_item(exhibition_letters.addr() + exhibition_letters->word_c80 * 0x280u, r2, 0u);
        r1 = guest::cpu()->r[1];
        exhibition_letters->word_c80 = exhibition_letters->word_c80 + 1u;
        r0_1 = 1u;
    }
    guest::cpu()->r[1] = r1;
    return r0_1;
}

}  // namespace d_003327e8
GUEST_EXPORT_FRAMED(0x003327e8, d_003327e8::ExhibitionLetters__add, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_003328ec: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Constructs the 5 pending letters.
namespace d_003328ec {

inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> for_each_element;

u32 ExhibitionLetters__ExhibitionLetters() {
    return for_each_element(guest::cpu()->r[0], 0x2ff368u, 0x280u, 5u);
}

}  // namespace d_003328ec
GUEST_EXPORT(0x003328ec, d_003328ec::ExhibitionLetters__ExhibitionLetters);

// f_00332900: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Packs the NPC state fields into the shared info's bit fields; state 3 notifies the listener.
namespace d_00332900 {

struct __attribute__((packed)) NpcNetShareInfo {
    u8 byte_0;
    u8 byte_1;
    u8 byte_2;
    u8 byte_3;
    u8 byte_4;
    u8 unknown_5[0x1];  // (not used here)
    u16 half_6;
};
GUEST_OFFSET(NpcNetShareInfo, byte_0, 0x0);
GUEST_OFFSET(NpcNetShareInfo, byte_1, 0x1);
GUEST_OFFSET(NpcNetShareInfo, byte_2, 0x2);
GUEST_OFFSET(NpcNetShareInfo, byte_3, 0x3);
GUEST_OFFSET(NpcNetShareInfo, byte_4, 0x4);
GUEST_OFFSET(NpcNetShareInfo, half_6, 0x6);

struct __attribute__((packed)) Local_00332900_r1_1 {
    u8 byte_0;
    u8 byte_1;
    u8 byte_2;
    u8 byte_3;
    u8 byte_4;
    u8 byte_5;
};
GUEST_OFFSET(Local_00332900_r1_1, byte_0, 0x0);
GUEST_OFFSET(Local_00332900_r1_1, byte_1, 0x1);
GUEST_OFFSET(Local_00332900_r1_1, byte_2, 0x2);
GUEST_OFFSET(Local_00332900_r1_1, byte_3, 0x3);
GUEST_OFFSET(Local_00332900_r1_1, byte_4, 0x4);
GUEST_OFFSET(Local_00332900_r1_1, byte_5, 0x5);

inline constexpr u32 net_share_state_address = 0x0094ddccu;
inline constexpr u32 npc_net_share_info_instance_address = 0x0095386cu;
inline guest::global<u32, 0x0014fbb8> global_0014fbb8;
inline guest::global<u32, 0x0094ddcc> net_share_state;
inline guest::global<u32, 0x0095386c> npc_net_share_info_instance;

u32 NpcNetShareInfo__pack_state(gptr<NpcNetShareInfo> npc_net_share_info) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    gptr<Local_00332900_r1_1> r1_1 = gptr<Local_00332900_r1_1>(*npc_net_share_info_instance);
    u32 r3_1 = u32(r1_1->byte_0) & ~3u | u32(npc_net_share_info->byte_0) & 3u;
    r1_1->byte_0 = u8(r3_1);
    u32 r3_2 = r3_1 & ~0x3cu | (u32(npc_net_share_info->byte_1) & 0xfu) << 2;
    r1_1->byte_0 = u8(r3_2);
    u32 r2_1 = npc_net_share_info->byte_2;
    r1_1->byte_0 = u8(r3_2 & ~0x80u | r2_1 << 7);
    u32 r3_3 = u32(r1_1->byte_1) & ~3u | (r2_1 & 6u) >> 1;
    r1_1->byte_1 = u8(r3_3);
    u32 r3_4 = r3_3 & ~0xcu | (u32(npc_net_share_info->byte_3) & 3u) << 2;
    r1_1->byte_1 = u8(r3_4);
    u32 r3_5 = r3_4 & ~0x70u | (u32(npc_net_share_info->byte_4) & 7u) << 4;
    r1_1->byte_1 = u8(r3_5);
    u32 r2_2 = npc_net_share_info->half_6;
    r1_1->byte_1 = u8(r3_5 & ~0x80u | r2_2 << 7);
    r1_1->byte_2 = u8(r2_2 >> 1);
    r1_1->byte_3 = u8(r2_2 >> 9);
    r1_1->byte_4 = u8(r2_2 >> 0x11);
    u32 r3_6 = u32(r1_1->byte_5) & ~0x7fu;
    u32 r2_3 = r3_6 | r2_2 >> 0x19;
    r1_1->byte_5 = u8(r2_3);
    u32 r0_1 = npc_net_share_info->byte_1;
    if (r0_1 != 3u) {
        guest::cpu()->r[1] = r1_1.addr();
        return r0_1;
    }
    u32 r0_2 = *net_share_state;
    if (r0_2 == 0) {
        guest::cpu()->r[1] = r1_1.addr();
        return r0_2;
    }
    frame.release();
    return guest::call_address<u32>(*global_0014fbb8, r0_2, r1_1.addr(), r2_3, r3_6);
}

}  // namespace d_00332900
GUEST_EXPORT(0x00332900, d_00332900::NpcNetShareInfo__pack_state);

// f_00333310: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Sets the flag at +0xb2 of the shared NPC info.
namespace d_00333310 {

inline constexpr u32 npc_net_share_info_instance_address = 0x0095386cu;
inline guest::global<u32, 0x0095386c> npc_net_share_info_instance;

u32 NpcNetShareInfo__set_flag_b2(u32 r0_unused, u32 r1) {
    u32 r0_1 = *npc_net_share_info_instance;
    if (r0_1 != 0) {
        r1 = 1u;
        *gptr<u8>(r0_1 + 0xb2u) = u8(r1);
    }
    guest::cpu()->r[1] = r1;
    return r0_1;
}

}  // namespace d_00333310
GUEST_EXPORT(0x00333310, d_00333310::NpcNetShareInfo__set_flag_b2);

// f_0033527c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Gives the villager of the record (+2) the item (+0) as its +0x249a item, registering special items first.
namespace d_0033527c {

struct __attribute__((packed)) Villager {
    u16 half_0;
    u8 byte_2;
};
GUEST_OFFSET(Villager, half_0, 0x0);
GUEST_OFFSET(Villager, byte_2, 0x2);

inline constexpr guest::Function<0x002fae84, u32(u32, u32, u32, u32)> get_data_base;
inline constexpr guest::Function<0x002fb310, u32(u32)> slot_records_of;
inline constexpr guest::Function<0x002fc8e8, u32(u32, u32)> Item__copy;
inline constexpr guest::Function<0x002fcbb0, u32(u32, u32)> construct_item;
inline constexpr guest::Function<0x00304f30, u32(u32, u32, u32, u32)> SpecialItem__variant;
inline constexpr guest::Function<0x003058c9, u32(u32, u32)> valid_villager_at;
inline constexpr guest::Function<0x0030f594, u32(u32)> is_special_item;

struct __attribute__((packed)) VillagerReceiveItem249aFrame {
    u32 word_0;
};
GUEST_OFFSET(VillagerReceiveItem249aFrame, word_0, 0x0);
GUEST_SIZE(VillagerReceiveItem249aFrame, 0x4);

u32 Villager__receive_item_249a(gptr<Villager> villager, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<VillagerReceiveItem249aFrame> frame;  // the original's stack frame
    frame->word_0 = r3;
    u32 data_base = get_data_base(villager.addr(), r1, r2, r3);
    u32 records = slot_records_of(data_base);
    u32 r1_2 = s8(villager->byte_2);
    u32 valid_villager = valid_villager_at(records + 4u, r1_2);
    if (valid_villager == 0) {
        return valid_villager;
    }
    u32 r1_4 = villager->half_0;
    construct_item(frame.at(0).addr(), r1_4);
    if (is_special_item(frame.at(0).addr()) != 0) {
        u32 r2_5 = s8(villager->byte_2);
        SpecialItem__variant(frame.at(0).addr(), 1u, r2_5, 0u);
    }
    Item__copy(valid_villager + 0x249au, frame.at(0).addr());
    return frame.at(0).addr();
}

}  // namespace d_0033527c
GUEST_EXPORT_FRAMED(0x0033527c, d_0033527c::Villager__receive_item_249a, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_003352f0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Finishes the pending work (+0xeb) when it can; true when nothing is pending.
namespace d_003352f0 {

struct __attribute__((packed)) LoadSplit {
    u8 unknown_0[0xeb];  // (not used here)
    u8 byte_eb;
};
GUEST_OFFSET(LoadSplit, byte_eb, 0xeb);

inline constexpr guest::Function<0x0056a9bc, u32(u32, u32, u32, u32)> LoadSplit__cancel;

u32 finish_pending_eb(gptr<LoadSplit> load_split) {
    if (load_split->byte_eb == 0) {
        return 1u;
    }
    u32 r0_1 = LoadSplit__cancel(load_split.addr(), guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0_1 == 0) {
        return r0_1;
    }
    load_split->byte_eb = 0;
    return 1u;
}

}  // namespace d_003352f0
GUEST_EXPORT_FRAMED(0x003352f0, d_003352f0::finish_pending_eb, 0x4010);  // pushes {r4, lr} first, as the original

// f_00335328: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Starts loading a camping car visitor's info file (for the name arg 1), falling back to the default
// visitor's when the file is absent, on a heap (arg 2, else the stage heap); 1 once started.
namespace d_00335328 {

struct __attribute__((packed)) sead__FixedSafeString_128_ {
    u8 unknown_0[0xeb];  // (not used here)
    u8 byte_eb;
};
GUEST_OFFSET(sead__FixedSafeString_128_, byte_eb, 0xeb);

struct __attribute__((packed)) Local_00335328_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_00335328_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_00335328_ea_1, word_4, 0x4);

struct __attribute__((packed)) Local_00335328_r4_1 {
    u8 unknown_0[0xeb];  // (not used here)
    u8 byte_eb;
};
GUEST_OFFSET(Local_00335328_r4_1, byte_eb, 0xeb);

inline constexpr u32 vtable_sead__FixedSafeString_128__rec = 0x00904860u;
inline constexpr u32 stage_heap_address = 0x00952c3cu;
inline guest::global<u8, 0x008c9f1c> empty_string;
inline guest::global<u32, 0x00952c3c> stage_heap;
inline constexpr guest::Function<0x0030f48c, u32(u32, u32, u32, u32)> format_string;
inline constexpr guest::Function<0x0056a4a4, u32(u32)> file_exists;
inline constexpr guest::Function<0x0056a94c, u32(u32, u32, u32, u32)> LoadSplit__start_compressed;

struct __attribute__((packed)) LoadCampingCarInfoFrame {
    u32 object_0_vtable;
    u32 word_4;
    u8 unknown_8[0x4];  // (not read or written by name)
    u8 byte_c;
    u8 unknown_d[0x83];  // (not read or written by name)
};
GUEST_OFFSET(LoadCampingCarInfoFrame, object_0_vtable, 0x0);
GUEST_OFFSET(LoadCampingCarInfoFrame, word_4, 0x4);
GUEST_OFFSET(LoadCampingCarInfoFrame, byte_c, 0xc);
GUEST_SIZE(LoadCampingCarInfoFrame, 0x90);

u32 load_camping_car_info(gptr<sead__FixedSafeString_128_> fixed_safe_string, u32 r1, u32 r2) {
    guest::StackFrameOf<LoadCampingCarInfoFrame> frame;  // the original's stack frame
    u32 r0 = fixed_safe_string.addr();
    u32 r3_1 = 0;
    u32 r0_5 = 0;
    gptr<Local_00335328_r4_1> r4_1 = gptr<Local_00335328_r4_1>(r0);
    u32 r5_1 = r2;
    if (r1 != 0 && fixed_safe_string->byte_eb < 3u) {
        gptr<Local_00335328_ea_1> ea_1 = gptr<Local_00335328_ea_1>(frame.at(4).addr());
        ea_1->word_0 = frame.at(0xc).addr();
        ea_1->word_4 = 0x80;
        r3_1 = 0x80u;
        *gptr<u8>(r3_1 + (frame->word_4 - 1u)) = *empty_string;
        frame->byte_c = *empty_string;
        frame->object_0_vtable = vtable_sead__FixedSafeString_128__rec;
        u32 r0_1 = r4_1->byte_eb;
        if (r0_1 != 0) {
            if (r0_1 == 2u) {
                goto L_3353dc;
            }
            goto L_3353ec;
        }
        format_string(frame.at(0).addr(), 0x881094u, r1, r3_1);
        u32 exists = file_exists(frame.at(0).addr());
        r3_1 = guest::cpu()->r[3];
        r4_1->byte_eb = u8(exists == 0 ? 2u : 1u);
        if (exists != 0) {
            goto L_3353ec;
        }
        goto L_3353dc;
    }
    guest::cpu()->r[1] = r1;
    return 1u;
L_3353dc:;
    r0_5 = frame.at(0).addr();
    format_string(r0_5, 0x881094u, 0x88108cu, r3_1);
    r3_1 = guest::cpu()->r[3];
L_3353ec:;
    if (r5_1 == 0) {
        r5_1 = *stage_heap;
    }
    r0 = LoadSplit__start_compressed(r4_1.addr(), frame.at(0).addr(), r5_1, r3_1);
    r1 = guest::cpu()->r[1];
    if (r0 != 0) {
        r4_1->byte_eb = 3;
        return 1u;
    }
    return r0;
}

}  // namespace d_00335328
GUEST_EXPORT_FRAMED(0x00335328, d_00335328::load_camping_car_info, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0033543c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Copies the resource's model name into the string, or the default model name when it has none.
namespace d_0033543c {

inline constexpr guest::Function<0x001b5d74, u32(u32)> model_name_of_id;
inline constexpr guest::Function<0x001b5d94, u32(u32, u32, u32, u32)> model_id_is_valid;
inline constexpr guest::Function<0x00335328, u32(u32, u32, u32)> load_camping_car_info;

u32 model_name_or_default(u32 fixed_safe_string, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x18);  // the original's stack frame
    if (model_id_is_valid(r1, r1, r2, r3) == 0) {
        r1 = 0x33548cu;
        frame.release();
        return load_camping_car_info(fixed_safe_string, r1, r2);
    }
    u32 model_name = model_name_of_id(r1);
    r1 = model_name;
    if (model_name == 0) {
        r1 = 0x33548cu;
    }
    frame.release();
    return load_camping_car_info(fixed_safe_string, r1, r2);
}

}  // namespace d_0033543c
GUEST_EXPORT(0x0033543c, d_0033543c::model_name_or_default);

// f_00335494: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Constructs the camping car info loader: a load split.
namespace d_00335494 {

inline constexpr u32 vtable_NpcCampingCarInfoLoader = 0x008f6224u;
inline constexpr guest::Function<0x0012ca7c, u32(u32)> construct_load_split;

u32 NpcCampingCarInfoLoader__NpcCampingCarInfoLoader(gptr<NpcCampingCarInfoLoader> npc_camping_car_info_loader) {
    construct_load_split(npc_camping_car_info_loader.addr());
    npc_camping_car_info_loader->vtable = vtable_NpcCampingCarInfoLoader;
    npc_camping_car_info_loader->byte_eb = 0;
    guest::cpu()->r[1] = 0u;
    return npc_camping_car_info_loader.addr();
}

}  // namespace d_00335494
GUEST_EXPORT_FRAMED(0x00335494, d_00335494::NpcCampingCarInfoLoader__NpcCampingCarInfoLoader, 0x4010);  // pushes {r4, lr} first, as the original

// f_003354c8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Refreshes an insect furniture's sound: the furniture refresh, then sets the sound of the slot playing its
// entry's sound (id 0xd) and marks whether it is audible.
namespace d_003354c8 {

inline constexpr guest::Function<0x00130ed8, u32(u32, u32)> SoundHandle__detach;
inline constexpr guest::Function<0x002d24e0, u32(u32, u32, u32, u32)> SoundObjFurniture__virtual_15;
inline constexpr guest::Function<0x004c331c, u32(u32, u32, u32, u32)> ResourceRef__acquire;
inline constexpr guest::Function<0x0073e780, u32(u32, u32, u32)> SoundPlayer__set_id;

struct __attribute__((packed)) SoundObjFurnitureInsectVirtual15Frame {
    u32 word_0;
    u16 half_4;
    u8 unknown_6[0x6];  // (not read or written by name)
};
GUEST_OFFSET(SoundObjFurnitureInsectVirtual15Frame, word_0, 0x0);
GUEST_OFFSET(SoundObjFurnitureInsectVirtual15Frame, half_4, 0x4);
GUEST_SIZE(SoundObjFurnitureInsectVirtual15Frame, 0xc);

u32 SoundObjFurnitureInsect__refresh(gptr<SoundObjFurnitureInsect> sound_obj_furniture_insect, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<SoundObjFurnitureInsectVirtual15Frame> frame;  // the original's stack frame
    u32 i = sound_obj_furniture_insect.addr();
    u32 r4 = i;
    SoundObjFurniture__virtual_15(i, r1, r2, r3);
    r1 = r4 + 0x44u;
    r3 = *gptr<u32>(sound_obj_furniture_insect->word_7c + 8u);
    i = 0u;
    u32 r5 = i;
    do {
        u32 r2_1 = *gptr<u32>(i >= 2u ? r1 : r1 + (i << 2));
        u32 r2_2 = r2_1 == 0 ? ~0u : *gptr<u32>(r2_1 + 0xb0u);
        if (r2_2 == r3) {
            if (i < 2u) {
                r1 += (i << 2);
            }
            if (r1 == 0) {
                break;
            }
            ResourceRef__acquire(frame.at(0).addr(), r1, r2_2, r3);
            u32 r0_2 = frame->word_0;
            u32 r1_1 = 0xdu;
            frame->half_4 = u16(r5);
            if (r0_2 != 0) {
                SoundPlayer__set_id(r0_2, r1_1, frame.at(4).addr());
                r1_1 = guest::cpu()->r[1];
            }
            u32 r0_3 = s16(frame->half_4);
            if (r0_3 != 0 && s32(r0_3) >= 0) {
                *gptr<u8>(r4 + 0x90u) = 1;
            }
            u32 r0_4 = frame.at(0).addr();
            if (r0_3 == 0 || r0_3 >> 0x1f != ((r0_3 & (r0_3 ^ r0_3)) >> 0x1f)) {
                *gptr<u8>(r4 + 0x90u) = u8(r5);
            }
            SoundHandle__detach(r0_4, r1_1);
            return r0_4;
        }
        i += 1u;
        guest::preempt();
    } while (s32(i) < 2);
    *gptr<u8>(r4 + 0x90u) = u8(r5);
    guest::cpu()->r[1] = r1;
    return i;
}

}  // namespace d_003354c8
GUEST_EXPORT_FRAMED(0x003354c8, d_003354c8::SoundObjFurnitureInsect__refresh, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_0033557c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Constructs an insect furniture sound object.
namespace d_0033557c {

struct __attribute__((packed)) Local_0033557c_r0_1 {
    u32 vtable;
    u8 unknown_4[0x8c];  // (not used here)
    u8 byte_90;
};
GUEST_OFFSET(Local_0033557c_r0_1, vtable, 0x0);
GUEST_OFFSET(Local_0033557c_r0_1, byte_90, 0x90);

inline constexpr u32 vtable_SoundObjFurnitureInsect = 0x008f623cu;
inline constexpr guest::Function<0x002d2a4c, u32(u32, u32, u32, u32)> SoundObjFurniture__construct;

u32 SoundObjFurnitureInsect__SoundObjFurnitureInsect(u32 sound_obj_furniture_insect, u32 r1, u32 r2) {
    gptr<Local_0033557c_r0_1> r0_1 = gptr<Local_0033557c_r0_1>(SoundObjFurniture__construct(sound_obj_furniture_insect, r1, r2, guest::cpu()->r[3]));
    r0_1->vtable = vtable_SoundObjFurnitureInsect;
    r0_1->byte_90 = 0;
    guest::cpu()->r[1] = 0u;
    return r0_1.addr();
}

}  // namespace d_0033557c
GUEST_EXPORT_FRAMED(0x0033557c, d_0033557c::SoundObjFurnitureInsect__SoundObjFurnitureInsect, 0x4010);  // pushes {r4, lr} first, as the original

// f_00335634: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Copies a 0x7dc8-byte block.
namespace d_00335634 {

inline constexpr guest::Function<0x002fbb30, u32(u32, u32, u32, u32)> copy_aligned_bytes;

void copy_7dc8_bytes() {
    copy_aligned_bytes(guest::cpu()->r[0], guest::cpu()->r[1], 0x7dc8u, guest::cpu()->r[3]);
    return;
}

}  // namespace d_00335634
GUEST_EXPORT(0x00335634, d_00335634::copy_7dc8_bytes);

// f_00335640: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Clears the block's parts (+0x1238, +0x7dc0) and its four header words.
namespace d_00335640 {

struct __attribute__((packed)) Block7dc8 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Block7dc8, word_0, 0x0);
GUEST_OFFSET(Block7dc8, word_4, 0x4);
GUEST_OFFSET(Block7dc8, word_8, 0x8);
GUEST_OFFSET(Block7dc8, word_c, 0xc);

inline constexpr guest::Function<0x0020c500, u32(u32, u32, u32, u32)> Player__clear_main_part;
inline constexpr guest::Function<0x006bc04c, u32(u32)> TownTune__get_packed;

u32 Block7dc8__clear(gptr<Block7dc8> block7dc8) {
    Player__clear_main_part(block7dc8.addr() + 0x1238u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    TownTune__get_packed(block7dc8.addr() + 0x7dc0u);
    block7dc8->word_8 = 0;
    block7dc8->word_c = 0;
    block7dc8->word_4 = 0;
    block7dc8->word_0 = 0;
    return 0u;
}

}  // namespace d_00335640
GUEST_EXPORT_FRAMED(0x00335640, d_00335640::Block7dc8__clear, 0x4010);  // pushes {r4, lr} first, as the original

// f_00335678: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Constructs the block's parts and clears it.
namespace d_00335678 {

struct __attribute__((packed)) Local_00335678_r4_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Local_00335678_r4_1, word_0, 0x0);
GUEST_OFFSET(Local_00335678_r4_1, word_4, 0x4);
GUEST_OFFSET(Local_00335678_r4_1, word_8, 0x8);
GUEST_OFFSET(Local_00335678_r4_1, word_c, 0xc);

inline constexpr guest::Function<0x0020c500, u32(u32)> Player__clear_main_part;
inline constexpr guest::Function<0x0020cbf0, u32(u32)> Player__construct_main_part;
inline constexpr guest::Function<0x0024dcc0, u32(u32, u32, u32, u32)> Block1228__construct;
inline constexpr guest::Function<0x006bc04c, u32(u32)> TownTune__get_packed;

u32 Block7dc8__Block7dc8(u32 block7dc8) {
    u32 r0_2 = Block1228__construct(block7dc8 + 0x10u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 player = Player__construct_main_part(r0_2 + 0x1228u);
    gptr<Local_00335678_r4_1> r4_1 = gptr<Local_00335678_r4_1>(player - 0x1238u);
    Player__clear_main_part(player);
    TownTune__get_packed(r4_1.addr() + 0x7dc0u);
    r4_1->word_8 = 0;
    r4_1->word_c = 0;
    r4_1->word_4 = 0;
    r4_1->word_0 = 0;
    return r4_1.addr();
}

}  // namespace d_00335678
GUEST_EXPORT_FRAMED(0x00335678, d_00335678::Block7dc8__Block7dc8, 0x4010);  // pushes {r4, lr} first, as the original

// f_003356dc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Destroys the four 0x18-byte elements and the base part.
namespace d_003356dc {

inline constexpr guest::Function<0x00134fa4, u32(u32)> Heap__destroy_children;
inline constexpr guest::Function<0x002f76ad, u32(u32, u32, u32, u32)> destroy_array_elements;

u32 Block6928__destroy(u32 block6928) {
    u32 r0_1 = block6928 + 0x6928u;
    destroy_array_elements(r0_1 - 0x1acu, 0x2f7744u, 0x18u, 4u);
    Heap__destroy_children(r0_1 - 0x6918u);
    return r0_1 - 0x6928u;
}

}  // namespace d_003356dc
GUEST_EXPORT_FRAMED(0x003356dc, d_003356dc::Block6928__destroy, 0x4010);  // pushes {r4, lr} first, as the original

// f_003357cc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Constructs a versatile flow talk receptor: an object talk receptor with a 32-character label.
namespace d_003357cc {

struct __attribute__((packed)) Local_003357cc_r0_1 {
    u32 vtable;
    u8 unknown_4[0x78];  // (not used here)
    u32 versatile_flow_talk_recept_vtable;
    u8 unknown_80[0x84];  // (not used here)
    u32 vtable_104;
    u32 word_108;
    u32 word_10c;
};
GUEST_OFFSET(Local_003357cc_r0_1, vtable, 0x0);
GUEST_OFFSET(Local_003357cc_r0_1, versatile_flow_talk_recept_vtable, 0x7c);
GUEST_OFFSET(Local_003357cc_r0_1, vtable_104, 0x104);
GUEST_OFFSET(Local_003357cc_r0_1, word_108, 0x108);
GUEST_OFFSET(Local_003357cc_r0_1, word_10c, 0x10c);

inline constexpr u32 vtable_VersatileFlowTalkRecept = 0x008f6284u;
inline constexpr u32 vtable_VersatileFlowTalkRecept_at_7c = 0x008f63acu;
inline constexpr u32 vtable_sead__FixedSafeString_32_ = 0x009048ecu;
inline constexpr u32 vtable_sead__FixedSafeStringBase_char__32_ = 0x00905120u;
inline constexpr u32 vtable_sead__BufferedSafeStringBase_char_ = 0x0090558cu;
inline guest::global<u8, 0x008c9f1c> empty_string;
inline constexpr guest::Function<0x0023bbe4, u32(u32, u32, u32, u32)> ObjTalkRecept__ObjTalkRecept;

u32 VersatileFlowTalkRecept__VersatileFlowTalkRecept(u32 versatile_flow_talk_recept, u32 r1, u32 r2_unused, u32 r3) {
    u32 r2 = 0;
    gptr<Local_003357cc_r0_1> r0_1 = gptr<Local_003357cc_r0_1>(ObjTalkRecept__ObjTalkRecept(versatile_flow_talk_recept, r1, r2, r3));
    r0_1->versatile_flow_talk_recept_vtable = vtable_VersatileFlowTalkRecept_at_7c;
    r0_1->vtable = vtable_VersatileFlowTalkRecept;
    r0_1->word_108 = r0_1.addr() + 0x110u;
    r0_1->vtable_104 = vtable_sead__BufferedSafeStringBase_char_;
    r0_1->word_10c = 0x20;
    *gptr<u8>(r0_1->word_108 + 0x1fu) = *empty_string;
    r0_1->vtable_104 = vtable_sead__FixedSafeStringBase_char__32_;
    *gptr<u8>(r0_1->word_108) = *empty_string;
    r0_1->vtable_104 = vtable_sead__FixedSafeString_32_;
    return r0_1.addr();
}

}  // namespace d_003357cc
GUEST_EXPORT_FRAMED(0x003357cc, d_003357cc::VersatileFlowTalkRecept__VersatileFlowTalkRecept, 0x4010);  // pushes {r4, lr} first, as the original

// f_00335ecc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Sets the fade step (+0x1ac) to -1 / frames (-1 for none).
namespace d_00335ecc {

struct __attribute__((packed)) SetFadeSpeedOutArg0 {
    u8 unknown_0[0x1ac];  // (not used here)
    float float_1ac;
};
GUEST_OFFSET(SetFadeSpeedOutArg0, float_1ac, 0x1ac);


void set_fade_speed_out(gptr<SetFadeSpeedOutArg0> arg0, u32 r1, float S0_unused, float S1) {
    float S0_1 = -1.0f;
    if (s32(r1) <= 0) {
        arg0->float_1ac = S0_1;
        guest::cpu()->s[0] = S0_1;
        return;
    }
    float S1_1 = float(s32(r1));
    arg0->float_1ac = S0_1 / S1_1;
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
}

}  // namespace d_00335ecc
GUEST_EXPORT(0x00335ecc, d_00335ecc::set_fade_speed_out);

// f_00335ef4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Sets the two fade steps (+0x1ac, +0x1b4) to 1 / frames and their values to 0.
namespace d_00335ef4 {

struct __attribute__((packed)) SetFadeSpeedsArg0 {
    u8 unknown_0[0x1a8];  // (not used here)
    float float_1a8;
    float float_1ac;
    float float_1b0;
    float float_1b4;
};
GUEST_OFFSET(SetFadeSpeedsArg0, float_1a8, 0x1a8);
GUEST_OFFSET(SetFadeSpeedsArg0, float_1ac, 0x1ac);
GUEST_OFFSET(SetFadeSpeedsArg0, float_1b0, 0x1b0);
GUEST_OFFSET(SetFadeSpeedsArg0, float_1b4, 0x1b4);


void set_fade_speeds(gptr<SetFadeSpeedsArg0> arg0, u32 r1, u32 r2) {
    float S0_1 = 1.0f;
    if (s32(r1) <= 0) {
        arg0->float_1ac = S0_1;
    } else {
        arg0->float_1ac = S0_1 / float(s32(r1));
    }
    float S1_1 = 0.0f;
    arg0->float_1a8 = S1_1;
    if (s32(r2) <= 0) {
        arg0->float_1b4 = S0_1;
        arg0->float_1b0 = S1_1;
        guest::cpu()->s[0] = S0_1;
        guest::cpu()->s[1] = S1_1;
        return;
    }
    arg0->float_1b4 = S0_1 / float(s32(r2));
    arg0->float_1b0 = S1_1;
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
}

}  // namespace d_00335ef4
GUEST_EXPORT(0x00335ef4, d_00335ef4::set_fade_speeds);

// f_00335f48: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Updates the object's transform with the matrix of the current view (0x38 bytes each, from +0x100).
namespace d_00335f48 {

inline guest::global<u32, 0x0095bf68> season_state;
inline constexpr guest::Function<0x001c25d8, u32(u32, u32, u32)> Transform__lerp_b;

u32 update_with_current_matrix(u32 r0) {
    float S0_1 = 1.0f;
    u32 r2_1 = r0 + u32(*gptr<u8>(*season_state + 0x11eu)) * 0x38u + 0x100u;
    guest::cpu()->s[0] = S0_1;
    return Transform__lerp_b(r0 + 0x90u, r0 + 0xc8u, r2_1);
}

}  // namespace d_00335f48
GUEST_EXPORT(0x00335f48, d_00335f48::update_with_current_matrix);

// f_00338d10: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Resets the four word pairs at +0x8c2c to the default pair.
namespace d_00338d10 {

struct __attribute__((packed)) ResetWordPairs8c2cArg0 {
    u8 unknown_0[0x8c2c];  // (not used here)
    u32 word_8c2c;
    u32 word_8c30;
    u32 word_8c34;
    u32 word_8c38;
    u32 word_8c3c;
    u32 word_8c40;
    u32 word_8c44;
    u32 word_8c48;
};
GUEST_OFFSET(ResetWordPairs8c2cArg0, word_8c2c, 0x8c2c);
GUEST_OFFSET(ResetWordPairs8c2cArg0, word_8c30, 0x8c30);
GUEST_OFFSET(ResetWordPairs8c2cArg0, word_8c34, 0x8c34);
GUEST_OFFSET(ResetWordPairs8c2cArg0, word_8c38, 0x8c38);
GUEST_OFFSET(ResetWordPairs8c2cArg0, word_8c3c, 0x8c3c);
GUEST_OFFSET(ResetWordPairs8c2cArg0, word_8c40, 0x8c40);
GUEST_OFFSET(ResetWordPairs8c2cArg0, word_8c44, 0x8c44);
GUEST_OFFSET(ResetWordPairs8c2cArg0, word_8c48, 0x8c48);

inline guest::global<u32, 0x00847e34> word_pair_a;
inline guest::global<u32, 0x00847e38> word_pair_b;

u32 reset_word_pairs_8c2c(gptr<ResetWordPairs8c2cArg0> arg0) {
    u32 r3_1 = *word_pair_b;
    arg0->word_8c3c = *word_pair_a;
    arg0->word_8c40 = r3_1;
    u32 r3_2 = *word_pair_b;
    arg0->word_8c44 = *word_pair_a;
    arg0->word_8c48 = r3_2;
    u32 r3_3 = *word_pair_b;
    arg0->word_8c2c = *word_pair_a;
    arg0->word_8c30 = r3_3;
    u32 r2_1 = *word_pair_b;
    u32 r1_1 = *word_pair_a;
    arg0->word_8c34 = r1_1;
    arg0->word_8c38 = r2_1;
    guest::cpu()->r[1] = r1_1;
    return arg0.addr() + 0x8c00u;
}

}  // namespace d_00338d10
GUEST_EXPORT(0x00338d10, d_00338d10::reset_word_pairs_8c2c);

// f_00338d48: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Shows UI message 0xc9 in the window's text view.
namespace d_00338d48 {

inline constexpr u32 vtable_script__WordFix_40u_ = 0x0090a030u;
inline constexpr u32 message_store_address = 0x0095deccu;
inline guest::global<u32, 0x0095decc> message_store;
inline constexpr guest::Function<0x002f825c, u32(u32, u32)> clear_aligned;
inline constexpr guest::Function<0x003083bc, u32(u32, u32, u32, u32)> script__construct_word_ptr;
inline constexpr guest::Function<0x005e2e50, u32(u32, u32)> start_message;
inline constexpr guest::Function<0x005e2f94, u32(u32)> TextBox__layout_lines;
inline constexpr guest::Function<0x005ea8dc, u32(u32, u32)> LinkOwner__unlink;
inline constexpr guest::Function<0x005ea8f8, u32(u32, u32, u32, u32)> MessageStore__attach_window;
inline constexpr guest::Function<0x005ea964, u32(u32, u32, u32, u32)> load_message;
inline constexpr guest::Function<0x005f4bfc, u32(u32)> construct_script_word;

struct __attribute__((packed)) ShowUiMessageC9Frame {
    u32 word_0;
    u8 unknown_4[0x4];  // (not read or written by name)
    u32 word_8;
    u8 unknown_c[0x68];  // (not read or written by name)
};
GUEST_OFFSET(ShowUiMessageC9Frame, word_0, 0x0);
GUEST_OFFSET(ShowUiMessageC9Frame, word_8, 0x8);
GUEST_SIZE(ShowUiMessageC9Frame, 0x74);

void show_ui_message_c9(u32 r0, u32 r1_unused, u32 r2_unused, u32 r3) {
    guest::StackFrameOf<ShowUiMessageC9Frame> frame;  // the original's stack frame
    u32 res_1 = 0;
    u32 r3_4 = 0;
    u32 r6 = r0;
    u32 r0_1 = frame.at(8).addr();
    script__construct_word_ptr(r0_1, frame.at(0x20).addr(), 0x28u, r3);
    u32 r5 = vtable_script__WordFix_40u_;
    *gptr<u32>(r0_1) = r5;
    u32 r0_2 = r0_1 + 0xcu;
    construct_script_word(r0_2);
    clear_aligned(r0_2 + 0xcu, 0x50u);
    u32 r2 = 0x8906ecu;
    u32 r4 = 0u;
    r0 = (r0_2 + 0xcu) - 2u;
    u32 r1 = 0x14u;
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
    MessageStore__attach_window(*message_store, 0u, r2, r3_4);
    frame->word_0 = r4;
    load_message(*message_store, frame.at(8).addr(), 0x8480ecu, 0xc9u);
    LinkOwner__unlink(*message_store, 0u);
    u32 view = r6 + 0x8b44u;
    start_message(view, frame.at(8).addr());
    TextBox__layout_lines(view);
    frame->word_8 = r5;
}

}  // namespace d_00338d48
GUEST_EXPORT_FRAMED(0x00338d48, d_00338d48::show_ui_message_c9, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_0033a7a4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Destroys the best friend registration menu: its renderer, passport, buttons, layouts and menu base.
namespace d_0033a7a4 {

struct __attribute__((packed)) Local_0033a7a4_r4_2 {
    u32 vtable;
    u8 unknown_4[0xe0];  // (not used here)
    u32 control1_button_vtable;
};
GUEST_OFFSET(Local_0033a7a4_r4_2, vtable, 0x0);
GUEST_OFFSET(Local_0033a7a4_r4_2, control1_button_vtable, 0xe4);

inline constexpr u32 vtable_ComButton1Lyt = 0x008ee218u;
inline constexpr u32 vtable_Control1Button = 0x008ef22cu;
inline constexpr u32 vtable_Control1Button_at_e4 = 0x008ef270u;
inline constexpr u32 vtable_ComButtonLytBase = 0x008f18f4u;
inline constexpr u32 vtable_BsMenuBestFriendRegister = 0x008f66a8u;
inline constexpr u32 vtable_BsMenuBestFriendRegister_at_28 = 0x008f6714u;
inline constexpr guest::Function<0x002f76ad, u32(u32, u32, u32, u32)> destroy_array_elements;
inline constexpr guest::Function<0x002f770c, u32(u32)> ControlButtonBase__destructor;
inline constexpr guest::Function<0x002f7710, u32(u32)> destroy_button_action_control;
inline constexpr guest::Function<0x00567ef0, u32(u32, u32)> ssys__ma__lyt__ArcResAccReader__destructor;
inline constexpr guest::Function<0x0056988c, u32(u32)> destroy_animation;
inline constexpr guest::Function<0x005bf744, u32(u32)> Layout__destructor;
inline constexpr guest::Function<0x005e3194, u32(u32, u32, u32, u32)> script__RenderTrace__destructor_b;
inline constexpr guest::Function<0x006aaa30, u32(u32, u32)> MenuBase__destructor;
inline constexpr guest::Function<0x006b0b74, u32(u32)> Passport__destructor;

u32 BsMenuBestFriendRegister__destructor(gptr<BsMenuBestFriendRegister> bs_menu_best_friend_register, u32 r1_unused, u32 r2_unused, u32 r3) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    bs_menu_best_friend_register->vtable = vtable_BsMenuBestFriendRegister;
    bs_menu_best_friend_register->bs_menu_best_friend_register_vtable = vtable_BsMenuBestFriendRegister_at_28;
    u32 r0_1 = bs_menu_best_friend_register.addr() + 0x8b44u;
    script__RenderTrace__destructor_b(r0_1, vtable_BsMenuBestFriendRegister, vtable_BsMenuBestFriendRegister_at_28, r3);
    u32 r4_1 = Passport__destructor(r0_1 - 0x6ba8u) - 0x9c8u;
    *gptr<u32>(r4_1) = vtable_ComButton1Lyt;
    gptr<Local_0033a7a4_r4_2> r4_2 = gptr<Local_0033a7a4_r4_2>(r4_1 + 0x398u);
    r4_2->control1_button_vtable = vtable_Control1Button_at_e4;
    r4_2->vtable = vtable_Control1Button;
    destroy_array_elements(r4_2.addr() + 0x118u, 0x2e0b3cu, 0x518u, 1u);
    ControlButtonBase__destructor(r4_2.addr());
    *gptr<u32>(r4_2.addr() - 0x398u) = vtable_ComButtonLytBase;
    u32 r0_8 = Layout__destructor(ssys__ma__lyt__ArcResAccReader__destructor(r4_2.addr() - 0x248u, vtable_ComButtonLytBase) - 0x14cu);
    destroy_array_elements(r0_8 - 0x2a4u, 0x2b6ef8u, 0xe0u, 3u);
    u32 r0_10 = (r0_8 - 0x15d8u) + 0x1250u;
    destroy_button_action_control(r0_10);
    destroy_array_elements(r0_10 - 0x2a0u, 0x2b6ef8u, 0xe0u, 3u);
    u32 r0_12 = (r0_10 - 0x1250u) + 0xeccu;
    destroy_button_action_control(r0_12);
    destroy_array_elements(r0_12 - 0x2a0u, 0x2b6ef8u, 0xe0u, 3u);
    u32 r0_14 = (r0_12 - 0xeccu) + 0xb48u;
    destroy_button_action_control(r0_14);
    destroy_array_elements(r0_14 - 0x6f0u, 0x2d5744u, 0x250u, 3u);
    u32 r0_16 = (r0_14 - 0xb48u) + 0x430u;
    destroy_animation(r0_16);
    u32 r0_17 = r0_16 - 0x28u;
    destroy_animation(r0_17);
    u32 r0_18 = r0_17 - 0x28u;
    destroy_animation(r0_18);
    u32 r0_21 = Layout__destructor(r0_18 - 0x14cu) - 0x248u;
    u32 r0_23 = ssys__ma__lyt__ArcResAccReader__destructor(r0_21, guest::cpu()->r[1]) - 0x4cu;
    frame.release();
    return MenuBase__destructor(r0_23, guest::cpu()->r[1]);
}

}  // namespace d_0033a7a4
GUEST_EXPORT(0x0033a7a4, d_0033a7a4::BsMenuBestFriendRegister__destructor);

// f_0033b748: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Places the entry's model under the screen (-125 minus the offset) and stores the resulting height at +0x3b54.
namespace d_0033b748 {

struct __attribute__((packed)) PlaceEntryModelBelowArg0 {
    u8 unknown_0[0x3b54];  // (not used here)
    float float_3b54;
};
GUEST_OFFSET(PlaceEntryModelBelowArg0, float_3b54, 0x3b54);

inline guest::global<u32, 0x00853c28> global_00853c28;
inline guest::global<u32, 0x00853c2c> global_00853c2c;
inline guest::global<u32, 0x0095008c> place_entry_model_state;
inline guest::global<u32, 0x00950094> global_00950094;
inline constexpr guest::Function<0x006b1a64, u32(u32, u32)> LabelPair__start_both;
inline constexpr guest::Function<0x006b1aa0, u32(u32, u32, u32)> LabelPair__set_position;
inline constexpr guest::Function<0x007259d4, u32(u32, u32, u32, u32)> Records9x__find_default;
inline constexpr guest::Function<0x0081b648, u32(u32, u32, u32)> LayoutAnimator__play_e;

void place_entry_model_below(gptr<PlaceEntryModelBelowArg0> arg0, u32 source, u32 r2, float S0, float S1) {
    u32 r0_1 = Records9x__find_default(arg0.addr(), source, r2, guest::cpu()->r[3]);
    u32 label_pair = arg0.addr() + (r0_1 * 9u + (r0_1 << 4) << 5) + 0x1234u;
    LabelPair__start_both(label_pair, source);
    u32 r1_1 = *global_00853c28;
    u32 r2_2 = *global_00853c2c;
    LayoutAnimator__play_e(label_pair, r1_1, r2_2);
    float S1_3 = -125.0f;
    float S0_3 = S1_3 - std::bit_cast<float>(*place_entry_model_state);
    guest::cpu()->s[0] = S0_3;
    guest::cpu()->s[1] = S1_3;
    LabelPair__set_position(label_pair, r1_1, r2_2);
    float S1_4 = std::bit_cast<float>(*place_entry_model_state);
    float S0_4 = std::bit_cast<float>(*global_00950094) + S1_4;
    arg0->float_3b54 = S0_4;
    guest::cpu()->s[0] = S0_4;
    guest::cpu()->s[1] = S1_4;
}

}  // namespace d_0033b748
GUEST_EXPORT_FRAMED(0x0033b748, d_0033b748::place_entry_model_below, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0033d150: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0033d150 {

struct __attribute__((packed)) Local_0033d150_r2_3 {
    u8 unknown_0[0xc];  // (not used here)
    u32 word_c;
    u32 word_10;
};
GUEST_OFFSET(Local_0033d150_r2_3, word_c, 0xc);
GUEST_OFFSET(Local_0033d150_r2_3, word_10, 0x10);

struct __attribute__((packed)) Local_0033d150_r6_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0033d150_r6_1, word_0, 0x0);
GUEST_OFFSET(Local_0033d150_r6_1, word_4, 0x4);

inline constexpr u32 vtable_script__WordFix_50u_ = 0x0090a148u;
inline constexpr u32 message_store_address = 0x0095deccu;
inline guest::global<u32, 0x0095decc> message_store;
inline constexpr guest::Function<0x00300914, u32(u32, u32, u32)> forward_to_held_object_slot_21;
inline constexpr guest::Function<0x00300924, u32(u32, u32, u32)> forward_to_held_object_slot_22;
inline constexpr guest::Function<0x005ea8dc, u32(u32, u32)> LinkOwner__unlink;
inline constexpr guest::Function<0x005ea8f8, u32(u32, u32)> MessageStore__attach_window;
inline constexpr guest::Function<0x005ea964, u32(u32, u32, u32, u32)> load_message;
inline constexpr guest::Function<0x005f1224, u32(u32, u32, u32)> call_target_with_two_0x50_;
inline constexpr guest::Function<0x006b1a64, u32(u32, u32, u32, u32)> LabelPair__start_both;
inline constexpr guest::Function<0x006b1aa0, u32(u32, u32, u32)> LabelPair__set_position;
inline constexpr guest::Function<0x0081b648, u32(u32, u32, u32)> LayoutAnimator__play_e;
inline constexpr guest::Function<0x0081e020, u32(u32, u32, u32, u32)> script__WordFix_50u___WordFix_0081e020;

struct __attribute__((packed)) ShowTreeDateMessageFrame {
    u32 word_0;
    u32 object_4_vtable;
    u8 unknown_8[0x78];  // (not read or written by name)
};
GUEST_OFFSET(ShowTreeDateMessageFrame, word_0, 0x0);
GUEST_OFFSET(ShowTreeDateMessageFrame, object_4_vtable, 0x4);
GUEST_SIZE(ShowTreeDateMessageFrame, 0x80);

void show_tree_date_message(u32 r0, gptr<Date> date, u32 r2, u32 r3, float S0) {
    guest::StackFrameOf<ShowTreeDateMessageFrame> frame;  // the original's stack frame
    u32 i = date.addr();
    u32 r3_6 = 0;
    gptr<Local_0033d150_r2_3> r2_3 = gptr<Local_0033d150_r2_3>(0u);
    u32 r5 = r0;
    script__WordFix_50u___WordFix_0081e020(frame.at(4).addr(), i, r2, r3);
    MessageStore__attach_window(*message_store, 0u);
    u32 r0_3 = *gptr<u32>(*message_store + 0x14u);
    u32 year = date->year;
    call_target_with_two_0x50_(r0_3, year, 0u);
    u32 r0_4 = *gptr<u32>(*message_store + 0x14u);
    u32 month = date->month;
    forward_to_held_object_slot_21(r0_4, month, 0u);
    u32 r0_5 = *gptr<u32>(*message_store + 0x14u);
    u32 day = date->day;
    forward_to_held_object_slot_22(r0_5, day, 0u);
    frame->word_0 = 0;
    load_message(*message_store, frame.at(4).addr(), 0x33d298u, 7u);
    LinkOwner__unlink(*message_store, 0u);
    S0 = guest::cpu()->s[0];
    u32 r6 = 0x853c20u;
    i = 0u;
    do {
        r3_6 = *gptr<u32>(r6);
        r2_3 = gptr<Local_0033d150_r2_3>(r5 + (i * 9u + (i << 4) << 5) + 0x294u);
        u32 r0_8 = *gptr<u32>(r6 + 4u);
        u32 r12_1 = r2_3->word_c;
        if (r12_1 == r3_6) {
            if (r12_1 == 0) {
                r3_6 = r2_3->word_10 | r0_8;
                if ((r3_6 & 1u) == 0) {
                    goto L_33d23c;
                }
            }
            r2_3 = gptr<Local_0033d150_r2_3>(r2_3->word_10);
            if (r2_3.addr() == r0_8) {
                goto L_33d23c;
            }
        }
        i += 1u;
        guest::preempt();
    } while (s32(i) < 5);
    i = ~0u;
L_33d23c:;
    u32 r4_1 = r5 + ((i * 9u + (i << 4)) << 5);
    guest::cpu()->s[0] = S0;
    LabelPair__start_both(r4_1 + 0x294u, frame.at(4).addr(), r2_3.addr(), r3_6);
    gptr<Local_0033d150_r6_1> r6_1 = gptr<Local_0033d150_r6_1>(r6 + 8u);
    u32 r1_6 = r6_1->word_0;
    u32 r2_4 = r6_1->word_4;
    LayoutAnimator__play_e(r4_1 + 0x294u, r1_6, r2_4);
    float S0_8 = -125.0f;
    guest::cpu()->s[0] = S0_8;
    LabelPair__set_position(r4_1 + 0x294u, r1_6, r2_4);
    frame->object_4_vtable = vtable_script__WordFix_50u_;
    guest::cpu()->r[1] = vtable_script__WordFix_50u_;
}

}  // namespace d_0033d150
GUEST_EXPORT_FRAMED(0x0033d150, d_0033d150::show_tree_date_message, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0033dab8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Shows a life support title message (by a counter, arg 1, from 1) in the badge window.
namespace d_0033dab8 {

inline constexpr u32 vtable_script__WordFix_94u_ = 0x0090a3b0u;
inline constexpr u32 message_store_address = 0x0095deccu;
inline guest::global<u32, 0x0095decc> message_store;
inline constexpr guest::Function<0x002f825c, u32(u32, u32)> clear_aligned;
inline constexpr guest::Function<0x003083bc, u32(u32, u32, u32, u32)> script__construct_word_ptr;
inline constexpr guest::Function<0x005d6cc0, u32(u32, u32)> start_window_message;
inline constexpr guest::Function<0x005d6d28, u32(u32)> TextBox__layout_lines_b;
inline constexpr guest::Function<0x005ea8dc, u32(u32, u32)> LinkOwner__unlink;
inline constexpr guest::Function<0x005ea8f8, u32(u32, u32, u32, u32)> MessageStore__attach_window;
inline constexpr guest::Function<0x005ea964, u32(u32, u32, u32, u32)> load_message;
inline constexpr guest::Function<0x005f4bfc, u32(u32)> construct_script_word;

struct __attribute__((packed)) ScriptWordFix94uWordFixFrame {
    u32 word_0;
    u32 word_4;
    u8 unknown_8[0xd0];  // (not read or written by name)
};
GUEST_OFFSET(ScriptWordFix94uWordFixFrame, word_0, 0x0);
GUEST_OFFSET(ScriptWordFix94uWordFixFrame, word_4, 0x4);
GUEST_SIZE(ScriptWordFix94uWordFixFrame, 0xd8);

void BadgeWindow__show_title(u32 badge_window, u32 player_counter_2, u32 r2_unused, u32 r3) {
    guest::StackFrameOf<ScriptWordFix94uWordFixFrame> frame;  // the original's stack frame
    u32 res_1 = 0;
    u32 r3_4 = 0;
    u32 r5 = badge_window;
    u32 r6 = player_counter_2 - 1u;
    u32 r0_1 = frame.at(4).addr();
    script__construct_word_ptr(r0_1, frame.at(0x1c).addr(), 0x5eu, r3);
    u32 r7 = vtable_script__WordFix_94u_;
    *gptr<u32>(r0_1) = r7;
    u32 r0_2 = r0_1 + 0xcu;
    construct_script_word(r0_2);
    clear_aligned(r0_2 + 0xcu, 0xbcu);
    u32 r2 = 0x8906ecu;
    u32 r4 = 0u;
    badge_window = (r0_2 + 0xcu) - 2u;
    player_counter_2 = 0x2fu;
    do {
        u32 r3_3 = *gptr<u16>(r2);
        res_1 = player_counter_2 - 1u;
        player_counter_2 = res_1;
        *gptr<u16>(badge_window + 2u) = u16(r3_3);
        r3_4 = *gptr<u16>(r2);
        u32 ea_2 = badge_window + 4u;
        *gptr<u16>(ea_2) = u16(r3_4);
        badge_window = ea_2;
        guest::preempt();
    } while (res_1 != 0);
    MessageStore__attach_window(*message_store, 0u, r2, r3_4);
    frame->word_0 = r4;
    load_message(*message_store, frame.at(4).addr(), 0x879f60u, r6 & 0xffu);
    LinkOwner__unlink(*message_store, 0u);
    start_window_message(r5 + 0x1dcu, frame.at(4).addr());
    TextBox__layout_lines_b(r5 + 0x1dcu);
    frame->word_4 = r7;
}

}  // namespace d_0033dab8
GUEST_EXPORT_FRAMED(0x0033dab8, d_0033dab8::BadgeWindow__show_title, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_0033db9c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Shows the player's badge for the counter: its tier, points, count and whether it was just earned (playing the earned
// animation).
namespace d_0033db9c {

struct __attribute__((packed)) BadgeWindow {
    u8 unknown_0[0x1b4];  // (not used here)
    float float_1b4;
    u8 unknown_1b8[0x20];  // (not used here)
    u32 word_1d8;
    u8 unknown_1dc[0x3e4];  // (not used here)
    u32 word_5c0;
    u8 byte_5c4;
};
GUEST_OFFSET(BadgeWindow, float_1b4, 0x1b4);
GUEST_OFFSET(BadgeWindow, word_1d8, 0x1d8);
GUEST_OFFSET(BadgeWindow, word_5c0, 0x5c0);
GUEST_OFFSET(BadgeWindow, byte_5c4, 0x5c4);

inline constexpr guest::Function<0x002fb94c, u32(u32, u32, u32, u32)> get_current_player;
inline constexpr guest::Function<0x0033d9d0, u32(u32, u32, u32)> sead__WFixedSafeString_50___WFixedSafeString;
inline constexpr guest::Function<0x0033dab8, u32(u32, u32)> BadgeWindow__show_title;
inline constexpr guest::Function<0x0033dcb0, u32(u32, u32)> script__WordFix_188u___WordFix;
inline constexpr guest::Function<0x0033de44, u32(u32, u32)> script__WordFix_50u___WordFix_0033de44;
inline constexpr guest::Function<0x00568630, u32(u32, u32, u32, u32)> notify_objects_of_list;
inline constexpr guest::Function<0x00568984, u32(u32, u32, u32, u32)> notify_list_objects;
inline constexpr guest::Function<0x00568c10, u32(u32, u32, u32, u32)> Layout__virtual_3;
inline constexpr guest::Function<0x005697e0, u32(u32)> Animation__set_value;
inline constexpr guest::Function<0x007159b0, u32(u32, u32)> player_counter_for_weekday;
inline constexpr guest::Function<0x00715b88, u32(u32, u32)> badge_tier_points;
inline constexpr guest::Function<0x00715c98, u32(u32, u32)> badge_counter_reached;

void BadgeWindow__show_badge(gptr<BadgeWindow> badge_window, u32 r1, u32 r2, u32 r3, float S0, float S1) {
    guest::StackFrame frame(0x18);  // the original's stack frame
    u32 r1_2 = 0;
    float S0_9 = 0;
    u32 player = get_current_player(badge_window.addr(), r1, r2, r3);
    if (player != 0) {
        badge_window->word_5c0 = r1;
        u32 player_counter = player_counter_for_weekday(player + 0x8ae0u, r1);
        BadgeWindow__show_title(badge_window.addr(), player_counter);
        script__WordFix_50u___WordFix_0033de44(badge_window.addr(), badge_tier_points(player + 0x8ae0u, player_counter));
        script__WordFix_188u___WordFix(badge_window.addr(), player_counter);
        sead__WFixedSafeString_50___WFixedSafeString(badge_window.addr(), player_counter, *gptr<u32>(player + 0x8ae0u + (player_counter << 2) + 0x1cu));
        u32 r0_4 = badge_counter_reached(player + 0x8ae0u, player_counter);
        if (r0_4 != 0) {
            if ((u32(*gptr<u8>(player + 0x8ae0u + player_counter + 0x1b4u)) & 2u) == 0) {
                r1_2 = 1u;
                r0_4 = 0u;
            } else {
                r1_2 = 0u;
            }
        } else {
            r1_2 = 0u;
        }
        badge_window->byte_5c4 = u8(r1_2);
        notify_objects_of_list(badge_window.addr() + 4u, badge_window.addr() + 0x1b0u, badge_window->word_1d8, 0u);
        float S1_9 = guest::cpu()->s[1];
        if (r0_4 == 0) {
            S0_9 = 0.0f;
        } else {
            S1_9 = 1.0f;
            S0_9 = badge_window->float_1b4 - S1_9;
        }
        guest::cpu()->s[0] = S0_9;
        guest::cpu()->s[1] = S1_9;
        Animation__set_value(badge_window.addr() + 0x1b0u);
        Layout__virtual_3(badge_window.addr() + 4u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
        notify_list_objects(badge_window.addr() + 4u, badge_window.addr() + 0x1b0u, badge_window->word_1d8, 0u);
        frame.release();
        Layout__virtual_3(badge_window.addr() + 4u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
        return;
    }
}

}  // namespace d_0033db9c
GUEST_EXPORT(0x0033db9c, d_0033db9c::BadgeWindow__show_badge);

// f_0033dcb0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0033dcb0 {

inline constexpr u32 vtable_script__WordFix_188u_ = 0x00909b98u;
inline constexpr u32 vtable_script__WordFix_33u__rec = 0x00909f18u;
inline constexpr u32 message_store_address = 0x0095deccu;
inline guest::global<u32, 0x0095decc> message_store;
inline constexpr guest::Function<0x0029b88c, u32(u32, u32, u32, u32)> counter_kind_info;
inline constexpr guest::Function<0x002f825c, u32(u32, u32)> clear_aligned;
inline constexpr guest::Function<0x002fb94c, u32(u32)> get_current_player;
inline constexpr guest::Function<0x002fe7f4, u32(u32, u32, u32)> construct_word_fix_33_into_text_box;
inline constexpr guest::Function<0x002fe874, u32(u32, u32, u32)> call_target_with_two_0x94_;
inline constexpr guest::Function<0x003083bc, u32(u32, u32, u32)> script__construct_word_ptr;
inline constexpr guest::Function<0x00312bd0, u32(u32)> construct_word_fix_19;
inline constexpr guest::Function<0x00312c4c, u32(u32, u32, u32, u32)> init_text_with_buffer;
inline constexpr guest::Function<0x00312ca0, u32(u32, u32, u32)> forward_to_target_virtual_19;
inline constexpr guest::Function<0x00312cb0, u32(u32)> set_word_num_digit_vtable;
inline constexpr guest::Function<0x005d6cc0, u32(u32, u32)> start_window_message;
inline constexpr guest::Function<0x005d6d28, u32(u32)> TextBox__layout_lines_b;
inline constexpr guest::Function<0x005ea8dc, u32(u32, u32)> LinkOwner__unlink;
inline constexpr guest::Function<0x005ea8f8, u32(u32, u32, u32, u32)> MessageStore__attach_window;
inline constexpr guest::Function<0x005ea964, u32(u32, u32, u32, u32)> load_message;
inline constexpr guest::Function<0x005f4bfc, u32(u32)> construct_script_word;

struct __attribute__((packed)) ScriptWordFix188uWordFixFrame {
    u32 word_0;
    u8 unknown_4[0x4];  // (not read or written by name)
    u32 word_8;
    u8 unknown_c[0x1d0];  // (not read or written by name)
    u32 object_1dc_vtable;
    u8 unknown_1e0[0x58];  // (not read or written by name)
};
GUEST_OFFSET(ScriptWordFix188uWordFixFrame, word_0, 0x0);
GUEST_OFFSET(ScriptWordFix188uWordFixFrame, word_8, 0x8);
GUEST_OFFSET(ScriptWordFix188uWordFixFrame, object_1dc_vtable, 0x1dc);
GUEST_SIZE(ScriptWordFix188uWordFixFrame, 0x238);

void script__WordFix_188u___WordFix(u32 badge_window, u32 player_counter_2, u32 r2, u32 r3) {
    guest::StackFrameOf<ScriptWordFix188uWordFixFrame> frame;  // the original's stack frame
    u32 res_1 = 0;
    u32 r3_7 = 0;
    u32 r5 = badge_window;
    u32 r8 = player_counter_2 - 1u;
    u32 r0_2 = counter_kind_info(player_counter_2 & 0xffu, player_counter_2, r2, r3);
    construct_word_fix_19(frame.at(0x198).addr());
    frame->word_0 = 4;
    u32 player = get_current_player(init_text_with_buffer(frame.at(0x198).addr(), *gptr<u32>(r0_2 + 0xcu), 0xau, 0xau));
    u32 r6 = player;
    u32 r0_7 = frame.at(8).addr();
    script__construct_word_ptr(r0_7, frame.at(0x20).addr(), 0xbcu);
    u32 r7 = vtable_script__WordFix_188u_;
    *gptr<u32>(r0_7) = r7;
    u32 r0_8 = r0_7 + 0xcu;
    construct_script_word(r0_8);
    clear_aligned(r0_8 + 0xcu, 0x178u);
    r2 = 0x8906ecu;
    u32 r9 = 0u;
    badge_window = (r0_8 - 0xcu) + 0x16u;
    player_counter_2 = 0x5eu;
    do {
        u32 r3_6 = *gptr<u16>(r2);
        res_1 = player_counter_2 - 1u;
        player_counter_2 = res_1;
        *gptr<u16>(badge_window + 2u) = u16(r3_6);
        r3_7 = *gptr<u16>(r2);
        u32 ea_2 = badge_window + 4u;
        *gptr<u16>(ea_2) = u16(r3_7);
        badge_window = ea_2;
        guest::preempt();
    } while (res_1 != 0);
    MessageStore__attach_window(*message_store, 0u, r2, r3_7);
    forward_to_target_virtual_19(*gptr<u32>(*message_store + 0x14u), frame.at(0x198).addr(), 0u);
    if (r6 != 0) {
        u32 r0_13 = construct_word_fix_33_into_text_box(frame.at(0x1dc).addr(), r6 + 0xa47au, 0u);
        call_target_with_two_0x94_(*gptr<u32>(*message_store + 0x14u), r0_13, 0u);
        frame->object_1dc_vtable = vtable_script__WordFix_33u__rec;
    }
    frame->word_0 = r9;
    load_message(*message_store, frame.at(8).addr(), 0x879f9cu, r8 & 0xffu);
    LinkOwner__unlink(*message_store, 0u);
    start_window_message(r5 + 0x3a0u, frame.at(8).addr());
    TextBox__layout_lines_b(r5 + 0x3a0u);
    frame->word_8 = r7;
    set_word_num_digit_vtable(frame.at(0x198).addr());
}

}  // namespace d_0033dcb0
GUEST_EXPORT_FRAMED(0x0033dcb0, d_0033dcb0::script__WordFix_188u___WordFix, 0x47f0);  // pushes {r4, r5, r6, r7, r8, r9, r10, lr} first, as the original

// f_0033e040: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Applies a received villager memory message: creates or updates the villager's record of the player, refreshing it
// when current.
namespace d_0033e040 {

inline constexpr guest::Function<0x00112ff5, u32(u32, u32, u32, u32)> SaveVillager__find_player_memory;
inline constexpr guest::Function<0x00113ecd, u32(u32, u32, u32, u32)> Villager__update_b6_if_current;
inline constexpr guest::Function<0x002fae84, u32(u32, u32, u32, u32)> get_data_base;
inline constexpr guest::Function<0x002fb310, u32(u32)> slot_records_of;
inline constexpr guest::Function<0x003058c9, u32(u32, u32)> valid_villager_at;
inline constexpr guest::Function<0x0030878d, u32(u32, u32, u32, u32)> SaveVillager__find_memory_slot;
inline constexpr guest::Function<0x00309f85, u32(u32, u32)> SaveVillager__find_player_record_00309f84;
inline constexpr guest::Function<0x005c4e5c, u32(u32)> player_of_slot_index_unreserved;

struct __attribute__((packed)) ApplyVillagerMemoryMessageFrame {
    u32 word_0;
    u32 word_4;
    u8 unknown_8[0x18];  // (not read or written by name)
};
GUEST_OFFSET(ApplyVillagerMemoryMessageFrame, word_0, 0x0);
GUEST_OFFSET(ApplyVillagerMemoryMessageFrame, word_4, 0x4);
GUEST_SIZE(ApplyVillagerMemoryMessageFrame, 0x20);

u32 apply_villager_memory_message(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<ApplyVillagerMemoryMessageFrame> frame;  // the original's stack frame
    u32 data_base = get_data_base(r0, r1, r2, r3);
    u32 records = slot_records_of(data_base);
    u32 r1_2 = *gptr<s8>(r0);
    u32 valid_villager = valid_villager_at(records + 4u, r1_2);
    u32 r0_5 = player_of_slot_index_unreserved(r1);
    u32 zf_1 = valid_villager == 0;
    if (!zf_1) {
        zf_1 = r0_5 == 0;
    }
    if (!zf_1) {
        u32 r0_6 = SaveVillager__find_player_record_00309f84(valid_villager, r0_5 + 0x55a6u);
        u32 r1_6 = *gptr<u8>(r0 + 1u);
        u32 villager = r0_6;
        u32 r4_1 = r1_6 & 1u;
        u32 r3_5 = (r1_6 & 2u) >> 1;
        if (r0_6 == 0) {
            r0_5 = SaveVillager__find_player_memory(valid_villager, r0_5, r4_1, r3_5);
            villager = r0_5;
        } else {
            frame->word_0 = 0;
            frame->word_4 = 0;
            r0_5 = SaveVillager__find_memory_slot(villager, r0_5, r4_1, r3_5);
        }
        if (r4_1 != 0) {
            frame.release();
            return Villager__update_b6_if_current(villager, valid_villager, guest::cpu()->r[2], guest::cpu()->r[3]);
        }
    }
    return r0_5;
}

}  // namespace d_0033e040
GUEST_EXPORT(0x0033e040, d_0033e040::apply_villager_memory_message);

// f_0033e104: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Applies a received item message to the player's record at +0x8d6c: the item (state 2) or none (state 1).
namespace d_0033e104 {

struct __attribute__((packed)) ApplyPlayerItemMessageArg0 {
    u16 half_0;
    u8 byte_2;
};
GUEST_OFFSET(ApplyPlayerItemMessageArg0, half_0, 0x0);
GUEST_OFFSET(ApplyPlayerItemMessageArg0, byte_2, 0x2);

inline constexpr guest::Function<0x002fc8e8, u32(u32, u32)> Item__copy;
inline constexpr guest::Function<0x002fcbb0, u32(u32, u32)> construct_item;
inline constexpr guest::Function<0x002fe8a8, u32(u32, u32, u32, u32)> player_of_slot_index;

struct __attribute__((packed)) ApplyPlayerItemMessageFrame {
    u32 word_0;
};
GUEST_OFFSET(ApplyPlayerItemMessageFrame, word_0, 0x0);
GUEST_SIZE(ApplyPlayerItemMessageFrame, 0x4);

u32 apply_player_item_message(gptr<ApplyPlayerItemMessageArg0> arg0, u32 r1, u32 r2_unused, u32 r3) {
    guest::StackFrameOf<ApplyPlayerItemMessageFrame> frame;  // the original's stack frame
    u32 r0_4 = 0;
    frame->word_0 = r3;
    u32 player = player_of_slot_index(r1, r1, guest::cpu()->r[2], r3);
    if (player == 0) {
        return player;
    }
    u32 r1_2 = arg0->byte_2;
    u32 r4_1 = player + 0x8d6cu;
    if (r1_2 == 0) {
        u32 r1_3 = arg0->half_0;
        u32 r0_2 = frame.at(0).addr();
        construct_item(r0_2, r1_3);
        Item__copy(r4_1 + 0xcu, r0_2);
        r1_2 = guest::cpu()->r[1];
        r0_4 = 2u;
    } else {
        r0_4 = 1u;
    }
    *gptr<u8>(r4_1 + 9u) = u8(r0_4);
    guest::cpu()->r[1] = r1_2;
    return r0_4;
}

}  // namespace d_0033e104
GUEST_EXPORT_FRAMED(0x0033e104, d_0033e104::apply_player_item_message, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_0033e230: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Stores the half at +0xa8 of the shared NPC info.
namespace d_0033e230 {

struct __attribute__((packed)) NpcNetShareInfo {
    u16 half_0;
};
GUEST_OFFSET(NpcNetShareInfo, half_0, 0x0);

inline constexpr u32 npc_net_share_info_instance_address = 0x0095386cu;
inline guest::global<u32, 0x0095386c> npc_net_share_info_instance;

u32 NpcNetShareInfo__set_half_a8(gptr<NpcNetShareInfo> npc_net_share_info) {
    u32 r0_1 = npc_net_share_info->half_0;
    u32 r1_1 = *npc_net_share_info_instance;
    *gptr<u16>(r1_1 + 0xa8u) = u16(r0_1);
    guest::cpu()->r[1] = r1_1;
    return r0_1;
}

}  // namespace d_0033e230
GUEST_EXPORT(0x0033e230, d_0033e230::NpcNetShareInfo__set_half_a8);

// f_0033e60c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Stops the microphone (in states 3 to 5) and goes back to state 2.
namespace d_0033e60c {

struct __attribute__((packed)) MicRecorder {
    u8 byte_0;
    u8 unknown_1[0x3];  // (not used here)
    u32 word_4;
    u8 unknown_8[0x5e8];  // (not used here)
    u32 word_5f0;
};
GUEST_OFFSET(MicRecorder, byte_0, 0x0);
GUEST_OFFSET(MicRecorder, word_4, 0x4);
GUEST_OFFSET(MicRecorder, word_5f0, 0x5f0);

inline constexpr u32 sound_mic_mgr_instance_address = 0x0094d090u;
inline guest::global<u32, 0x0094d090> sound_mic_mgr_instance;
inline constexpr guest::Function<0x001426b0, u32(u32, u32, u32, u32)> Mic__start_sampling;

void MicRecorder__stop(gptr<MicRecorder> mic_recorder, u32 r1) {
    u32 r0_1 = mic_recorder->byte_0;
    if (r0_1 != 3u && r0_1 != 4u && r0_1 != 5u) {
        return;
    }
    Mic__start_sampling(*gptr<u32>(*sound_mic_mgr_instance + 0x28u), 0u, guest::cpu()->r[2], guest::cpu()->r[3]);
    mic_recorder->word_5f0 = 0;
    mic_recorder->byte_0 = 2;
    mic_recorder->word_4 = 0;
    guest::cpu()->r[1] = 2u;
}

}  // namespace d_0033e60c
GUEST_EXPORT_FRAMED(0x0033e60c, d_0033e60c::MicRecorder__stop, 0x4010);  // pushes {r4, lr} first, as the original

// f_0033e8cc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Calls the member function of the current state (+0) from the table at 0x83b46c.
namespace d_0033e8cc {

struct __attribute__((packed)) DispatchState83b46cArg0 {
    u8 byte_0;
};
GUEST_OFFSET(DispatchState83b46cArg0, byte_0, 0x0);

struct __attribute__((packed)) Local_0033e8cc_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0033e8cc_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_0033e8cc_ea_1, word_4, 0x4);


void dispatch_state_83b46c(gptr<DispatchState83b46cArg0> arg0) {
    gptr<Local_0033e8cc_ea_1> ea_1 = gptr<Local_0033e8cc_ea_1>((u32(arg0->byte_0) << 3) + 0x83b46cu);
    u32 r1_1 = ea_1->word_0;
    u32 r2_1 = ea_1->word_4;
    u32 r0_1 = arg0.addr() + u32(s32(r2_1) >> 1);
    if ((r2_1 & 1u) == 0) {
        guest::call_address<u32>(r1_1, r0_1, r1_1, r2_1, guest::cpu()->r[3]);
        return;
    }
    u32 r2_2 = *gptr<u32>(r0_1);
    u32 r1_2 = *gptr<u32>(r2_2 + r1_1);
    guest::call_address<u32>(r1_2, r0_1, r1_2, r2_2, guest::cpu()->r[3]);
}

}  // namespace d_0033e8cc
GUEST_EXPORT(0x0033e8cc, d_0033e8cc::dispatch_state_83b46c);

// f_0033e960: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Constructs a versatile plate talk receptor: an object talk receptor with a 32-character label.
namespace d_0033e960 {

struct __attribute__((packed)) Local_0033e960_r0_1 {
    u32 vtable;
    u8 unknown_4[0x78];  // (not used here)
    u32 versatile_plate_talk_recept_vtable;
    u8 unknown_80[0x84];  // (not used here)
    u32 vtable_104;
    u32 word_108;
    u32 word_10c;
    u8 unknown_110[0x20];  // (not used here)
    u32 word_130;
};
GUEST_OFFSET(Local_0033e960_r0_1, vtable, 0x0);
GUEST_OFFSET(Local_0033e960_r0_1, versatile_plate_talk_recept_vtable, 0x7c);
GUEST_OFFSET(Local_0033e960_r0_1, vtable_104, 0x104);
GUEST_OFFSET(Local_0033e960_r0_1, word_108, 0x108);
GUEST_OFFSET(Local_0033e960_r0_1, word_10c, 0x10c);
GUEST_OFFSET(Local_0033e960_r0_1, word_130, 0x130);

inline constexpr u32 vtable_VersatilePlateTalkRecept = 0x008f68a0u;
inline constexpr u32 vtable_VersatilePlateTalkRecept_at_7c = 0x008f69c8u;
inline constexpr u32 vtable_sead__FixedSafeString_32_ = 0x009048ecu;
inline constexpr u32 vtable_sead__FixedSafeStringBase_char__32_ = 0x00905120u;
inline constexpr u32 vtable_sead__BufferedSafeStringBase_char_ = 0x0090558cu;
inline guest::global<u8, 0x008c9f1c> empty_string;
inline constexpr guest::Function<0x0023bbe4, u32(u32, u32, u32, u32)> ObjTalkRecept__ObjTalkRecept;

u32 VersatilePlateTalkRecept__VersatilePlateTalkRecept(u32 versatile_plate_talk_recept, u32 r1, u32 r2_unused, u32 r3) {
    u32 r2 = 0;
    gptr<Local_0033e960_r0_1> r0_1 = gptr<Local_0033e960_r0_1>(ObjTalkRecept__ObjTalkRecept(versatile_plate_talk_recept, r1, r2, r3));
    r0_1->versatile_plate_talk_recept_vtable = vtable_VersatilePlateTalkRecept_at_7c;
    r0_1->vtable = vtable_VersatilePlateTalkRecept;
    r0_1->word_108 = r0_1.addr() + 0x110u;
    r0_1->vtable_104 = vtable_sead__BufferedSafeStringBase_char_;
    r0_1->word_10c = 0x20;
    *gptr<u8>(r0_1->word_108 + 0x1fu) = *empty_string;
    r0_1->vtable_104 = vtable_sead__FixedSafeStringBase_char__32_;
    *gptr<u8>(r0_1->word_108) = *empty_string;
    r0_1->vtable_104 = vtable_sead__FixedSafeString_32_;
    r0_1->word_130 = 0;
    return r0_1.addr();
}

}  // namespace d_0033e960
GUEST_EXPORT_FRAMED(0x0033e960, d_0033e960::VersatilePlateTalkRecept__VersatilePlateTalkRecept, 0x4010);  // pushes {r4, lr} first, as the original

// f_0033f2c4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Applies a received message that the villager is moving: sets its moving flag (+0x2510 bit 9) and marks the player's
// record of it.
namespace d_0033f2c4 {

struct __attribute__((packed)) ApplyVillagerMovingMessageArg0 {
    u8 byte_0;
};
GUEST_OFFSET(ApplyVillagerMovingMessageArg0, byte_0, 0x0);

struct __attribute__((packed)) Local_0033f2c4_r0_8 {
    u32 word_0;
};
GUEST_OFFSET(Local_0033f2c4_r0_8, word_0, 0x0);

struct __attribute__((packed)) Local_0033f2c4_r4_1 {
    u8 unknown_0[0xb8];  // (not used here)
    u8 byte_b8;
    u8 unknown_b9[0x3];  // (not used here)
    u8 byte_bc;
};
GUEST_OFFSET(Local_0033f2c4_r4_1, byte_b8, 0xb8);
GUEST_OFFSET(Local_0033f2c4_r4_1, byte_bc, 0xbc);

inline constexpr guest::Function<0x00112ff5, u32(u32, u32, u32)> SaveVillager__find_player_memory;
inline constexpr guest::Function<0x00113469, u32(u32, u32)> SaveVillager__clear_flag_bc_bit5_of_used_records;
inline constexpr guest::Function<0x002fae84, u32(u32, u32, u32, u32)> get_data_base;
inline constexpr guest::Function<0x002fb310, u32(u32)> slot_records_of;
inline constexpr guest::Function<0x003058c9, u32(u32, u32)> valid_villager_at;
inline constexpr guest::Function<0x00309f85, u32(u32, u32)> SaveVillager__find_player_record_00309f84;
inline constexpr guest::Function<0x005c4e5c, u32(u32)> player_of_slot_index_unreserved;

u32 apply_villager_moving_message(gptr<ApplyVillagerMovingMessageArg0> arg0, u32 r1, u32 r2) {
    u32 data_base = get_data_base(arg0.addr(), r1, r2, guest::cpu()->r[3]);
    u32 records = slot_records_of(data_base);
    u32 r1_2 = s8(arg0->byte_0);
    u32 valid_villager = valid_villager_at(records + 4u, r1_2);
    u32 r0_5 = player_of_slot_index_unreserved(r1);
    u32 r1_4 = guest::cpu()->r[1];
    u32 zf_1 = valid_villager == 0;
    if (!zf_1) {
        zf_1 = r0_5 == 0;
    }
    if (!zf_1) {
        u32 r0_6 = SaveVillager__find_player_record_00309f84(valid_villager, r0_5 + 0x55a6u);
        gptr<Local_0033f2c4_r4_1> r4_1 = gptr<Local_0033f2c4_r4_1>(r0_6);
        if (r0_6 == 0) {
            u32 player_memory = SaveVillager__find_player_memory(valid_villager, r0_5, 1u);
            r4_1 = gptr<Local_0033f2c4_r4_1>(player_memory);
        }
        gptr<Local_0033f2c4_r0_8> r0_8 = gptr<Local_0033f2c4_r0_8>(valid_villager + 0x2510u);
        u32 r1_6 = r0_8->word_0 & ~0x600u | 0x200u;
        r0_8->word_0 = r1_6;
        r0_5 = SaveVillager__clear_flag_bc_bit5_of_used_records(valid_villager, r1_6);
        r4_1->byte_bc = u8(u32(r4_1->byte_bc) | 0x20u);
        r1_4 = u32(r4_1->byte_b8) | 4u;
        r4_1->byte_b8 = u8(r1_4);
    }
    guest::cpu()->r[1] = r1_4;
    return r0_5;
}

}  // namespace d_0033f2c4
GUEST_EXPORT_FRAMED(0x0033f2c4, d_0033f2c4::apply_villager_moving_message, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0033f368: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Applies a received villager state message: sets its state (0x17, 2 or 0) and updates its NPC.
namespace d_0033f368 {

struct __attribute__((packed)) ApplyVillagerStateMessageArg0 {
    u8 byte_0;
    u8 byte_1;
};
GUEST_OFFSET(ApplyVillagerStateMessageArg0, byte_0, 0x0);
GUEST_OFFSET(ApplyVillagerStateMessageArg0, byte_1, 0x1);

inline constexpr guest::Function<0x001139fd, u32(u32, u32)> SaveVillager__set_state_250f;
inline constexpr guest::Function<0x002fae84, u32(u32, u32, u32, u32)> get_data_base;
inline constexpr guest::Function<0x002fb310, u32(u32)> slot_records_of;
inline constexpr guest::Function<0x003058c9, u32(u32, u32)> valid_villager_at;
inline constexpr guest::Function<0x00697f60, u32(u32, u32, u32)> EventNpc__set_visible;

u32 apply_villager_state_message(gptr<ApplyVillagerStateMessageArg0> arg0, u32 r1, u32 r2) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 data_base = get_data_base(arg0.addr(), r1, r2, guest::cpu()->r[3]);
    u32 records = slot_records_of(data_base);
    u32 r1_2 = s8(arg0->byte_0);
    u32 valid_villager = valid_villager_at(records + 4u, r1_2);
    if (valid_villager == 0) {
        return valid_villager;
    }
    u32 r1_4 = arg0->byte_1;
    if (r1_4 != 0) {
        if (r1_4 == 1u) {
            SaveVillager__set_state_250f(valid_villager, 2u);
            u32 event_npc = s8(arg0->byte_0);
            frame.release();
            return EventNpc__set_visible(event_npc, 0u, 0u);
        }
        if (r1_4 != 2u) {
            guest::cpu()->r[1] = r1_4;
            return valid_villager;
        }
        SaveVillager__set_state_250f(valid_villager, 0u);
        u32 r0_6 = s8(arg0->byte_0);
        frame.release();
        return EventNpc__set_visible(r0_6, 1u, 0u);
    }
    SaveVillager__set_state_250f(valid_villager, 0x17u);
    u32 r0_7 = s8(arg0->byte_0);
    frame.release();
    return EventNpc__set_visible(r0_7, 1u, 0u);
}

}  // namespace d_0033f368
GUEST_EXPORT(0x0033f368, d_0033f368::apply_villager_state_message);

// f_0033fb8c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Clears bit 6 of the shared NPC info unless the word is set.
namespace d_0033fb8c {

struct __attribute__((packed)) NpcNetShareInfo {
    u32 word_0;
};
GUEST_OFFSET(NpcNetShareInfo, word_0, 0x0);

struct __attribute__((packed)) Local_0033fb8c_r0_2 {
    u8 byte_0;
};
GUEST_OFFSET(Local_0033fb8c_r0_2, byte_0, 0x0);

inline constexpr u32 npc_net_share_info_instance_address = 0x0095386cu;
inline guest::global<u32, 0x0095386c> npc_net_share_info_instance;

u32 NpcNetShareInfo__clear_flag_40(gptr<NpcNetShareInfo> npc_net_share_info, u32 r1) {
    u32 r0_1 = npc_net_share_info->word_0;
    if (r0_1 != 0) {
        return r0_1;
    }
    gptr<Local_0033fb8c_r0_2> r0_2 = gptr<Local_0033fb8c_r0_2>(*npc_net_share_info_instance);
    u32 r1_1 = u32(r0_2->byte_0) & ~0x40u;
    r0_2->byte_0 = u8(r1_1);
    guest::cpu()->r[1] = r1_1;
    return r0_2.addr();
}

}  // namespace d_0033fb8c
GUEST_EXPORT(0x0033fb8c, d_0033fb8c::NpcNetShareInfo__clear_flag_40);

// f_0033fbb4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Writes the secretary's letter to the player (its variant by the player's state), with its item.
namespace d_0033fbb4 {

struct __attribute__((packed)) LetterMakeSecretaryLetterArg1 {
    u8 unknown_0[0x5700];  // (not used here)
    u8 byte_5700;
};
GUEST_OFFSET(LetterMakeSecretaryLetterArg1, byte_5700, 0x5700);

inline constexpr guest::Function<0x002fcbb0, u32(u32, u32, u32, u32)> construct_item;
inline constexpr guest::Function<0x00306354, u32(u32, u32, u32, u32)> load_mail_with_adapter;
inline constexpr guest::Function<0x00768138, u32(u32, u32, u32)> set_held_item;

struct __attribute__((packed)) LetterMakeSecretaryLetterFrame {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u8 unknown_c[0xc];  // (not read or written by name)
};
GUEST_OFFSET(LetterMakeSecretaryLetterFrame, word_0, 0x0);
GUEST_OFFSET(LetterMakeSecretaryLetterFrame, word_4, 0x4);
GUEST_OFFSET(LetterMakeSecretaryLetterFrame, word_8, 0x8);
GUEST_SIZE(LetterMakeSecretaryLetterFrame, 0x18);

void Letter__make_secretary_letter(u32 letter, gptr<LetterMakeSecretaryLetterArg1> arg1, u32 r2, u32 r3) {
    guest::StackFrameOf<LetterMakeSecretaryLetterFrame> frame;  // the original's stack frame
    if (arg1.addr() != 0) {
        construct_item(frame.at(0xc).addr(), 0x2247u, r2, r3);
        construct_item(frame.at(0x10).addr(), 0x23c3u, guest::cpu()->r[2], guest::cpu()->r[3]);
        u32 r0_3 = u32(arg1->byte_5700) << 0x1b;
        frame->word_0 = frame.at(0xc).addr();
        frame->word_4 = 4;
        frame->word_8 = 0;
        load_mail_with_adapter(letter, 0x33fc4cu, s32(r0_3) < 0 ? 1u : 2u, arg1.addr() + 0x55a6u);
        set_held_item(letter, frame.at(0x10).addr(), 0u);
    }
}

}  // namespace d_0033fbb4
GUEST_EXPORT_FRAMED(0x0033fbb4, d_0033fbb4::Letter__make_secretary_letter, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original
