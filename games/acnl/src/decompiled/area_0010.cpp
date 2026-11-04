// Functions decompiled by tools/decomp (docs/decomp.md), each proved equal to the recompiled original (prove-cpp). The
// names come from games/acnl/names (tools/decomp/names.py); the others are generated (d_<address>::f_<address>,
// Object_<address>_<argument>, word_<offset>) and still to be chosen. Hexadecimal constants are the original's
// (addresses, offsets, sizes and ids as the game has them).
#include "guest/guest.hpp"
#include "recovered/structs.hpp"

#include <bit>

using guest::gptr;

// f_00100088: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Creates the net heap (0x215800 bytes) under a parent heap (arg 0).
namespace d_00100088 {

inline guest::global<u32, 0x00952c9c> net_heap;
inline constexpr guest::Function<0x002f6e64, u32(u32, u32, u32, u32)> construct_safe_string;
inline constexpr guest::Function<0x002f6e78, u32(u32, u32, u32, u32)> create_heap;
inline constexpr guest::Function<0x002f6e8c, u32(u32)> do_nothing_002f6e8c;

struct __attribute__((packed)) CreateNetHeapFrame {
    u32 word_0;
    u8 unknown_4[0xc];  // (not read or written by name)
};
GUEST_OFFSET(CreateNetHeapFrame, word_0, 0x0);
GUEST_SIZE(CreateNetHeapFrame, 0x10);

void create_net_heap(u32 parent, u32 r1_unused, u32 r2, u32 r3) {
    guest::StackFrameOf<CreateNetHeapFrame> frame;  // the original's stack frame
    u32 name = frame.at(8).addr();
    construct_safe_string(name, 0x1000b4u, r2, r3);
    frame->word_0 = 1;
    u32 heap = create_heap(0x215800u, name, parent, 1u);
    *net_heap = heap;
    do_nothing_002f6e8c(heap);
}

}  // namespace d_00100088
GUEST_EXPORT_FRAMED(0x00100089, d_00100088::create_net_heap, 0x4010);  // pushes {r4, lr} first, as the original

// f_001000c4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Creates the UGC (user content) heap (a fixed size bytes) under a parent heap (arg 0).
namespace d_001000c4 {

inline guest::global<u32, 0x00952c80> ugc_heap;
inline constexpr guest::Function<0x0012033c, u32(u32, u32, u32, u32)> return_constant_0x11400_;
inline constexpr guest::Function<0x002f6e64, u32(u32, u32)> construct_safe_string;
inline constexpr guest::Function<0x002f6e78, u32(u32, u32, u32, u32)> create_heap;
inline constexpr guest::Function<0x002f6e8c, u32(u32)> do_nothing_002f6e8c;

struct __attribute__((packed)) CreateUgcHeapFrame {
    u32 word_0;
    u8 unknown_4[0x10];  // (not read or written by name)
};
GUEST_OFFSET(CreateUgcHeapFrame, word_0, 0x0);
GUEST_SIZE(CreateUgcHeapFrame, 0x14);

void create_ugc_heap(u32 parent, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<CreateUgcHeapFrame> frame;  // the original's stack frame
    u32 size = return_constant_0x11400_(parent, r1, r2, r3);
    u32 name = frame.at(8).addr();
    construct_safe_string(name, 0x1000f8u);
    frame->word_0 = 0;
    u32 heap = create_heap(size, name, parent, 1u);
    *ugc_heap = heap;
    do_nothing_002f6e8c(heap);
}

}  // namespace d_001000c4
GUEST_EXPORT_FRAMED(0x001000c5, d_001000c4::create_ugc_heap, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_0010018c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Creates the work heap (0x19000 bytes) under a parent heap (arg 0).
namespace d_0010018c {

inline guest::global<u32, 0x00952cac> work_heap;
inline constexpr guest::Function<0x002f6e64, u32(u32, u32, u32, u32)> construct_safe_string;
inline constexpr guest::Function<0x002f6e78, u32(u32, u32, u32, u32)> create_heap;
inline constexpr guest::Function<0x002f6e8c, u32(u32)> do_nothing_002f6e8c;

struct __attribute__((packed)) CreateWorkHeapFrame {
    u32 word_0;
    u8 unknown_4[0x10];  // (not read or written by name)
};
GUEST_OFFSET(CreateWorkHeapFrame, word_0, 0x0);
GUEST_SIZE(CreateWorkHeapFrame, 0x14);

void create_work_heap(u32 parent, u32 r1_unused, u32 r2, u32 r3) {
    guest::StackFrameOf<CreateWorkHeapFrame> frame;  // the original's stack frame
    u32 name = frame.at(8).addr();
    construct_safe_string(name, 0x1001c0u, r2, r3);
    frame->word_0 = 0;
    u32 heap = create_heap(0x19u << 0xc, name, parent, 1u);
    *work_heap = heap;
    do_nothing_002f6e8c(heap);
}

}  // namespace d_0010018c
GUEST_EXPORT_FRAMED(0x0010018d, d_0010018c::create_work_heap, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_001001d0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Creates the fader heap (0x400 bytes) under a parent heap (arg 0).
namespace d_001001d0 {

inline constexpr u32 no_device_heap_address = 0x00952c38u;
inline constexpr u32 fader_heap_address = 0x00952c7cu;
inline guest::global<u32, 0x00952c7c> fader_heap;
inline constexpr guest::Function<0x002f6e64, u32(u32, u32, u32, u32)> construct_safe_string;
inline constexpr guest::Function<0x002f6e78, u32(u32, u32, u32, u32)> create_heap;
inline constexpr guest::Function<0x002f6e8c, u32(u32)> do_nothing_002f6e8c;

struct __attribute__((packed)) CreateFaderHeapFrame {
    u32 word_0;
    u8 unknown_4[0x10];  // (not read or written by name)
};
GUEST_OFFSET(CreateFaderHeapFrame, word_0, 0x0);
GUEST_SIZE(CreateFaderHeapFrame, 0x14);

u32 create_fader_heap(u32 parent, u32 r1_unused, u32 r2, u32 r3) {
    guest::StackFrameOf<CreateFaderHeapFrame> frame;  // the original's stack frame
    u32 name = frame.at(8).addr();
    construct_safe_string(name, 0x100204u, r2, r3);
    frame->word_0 = 0;
    u32 heap = create_heap(1u << 0xa, name, parent, 1u);
    *fader_heap = heap;
    do_nothing_002f6e8c(heap);
    return *fader_heap;
}

}  // namespace d_001001d0
GUEST_EXPORT_FRAMED(0x001001d1, d_001001d0::create_fader_heap, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_001002a4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Creates the sound heap (0x580000 bytes) under a parent heap (arg 0).
namespace d_001002a4 {

inline constexpr u32 no_device_heap_address = 0x00952c38u;
inline constexpr u32 sound_heap_address = 0x00952c94u;
inline guest::global<u32, 0x00952c94> sound_heap;
inline constexpr guest::Function<0x002f6e64, u32(u32, u32, u32, u32)> construct_safe_string;
inline constexpr guest::Function<0x002f6e78, u32(u32, u32, u32, u32)> create_heap;
inline constexpr guest::Function<0x002f6e8c, u32(u32)> do_nothing_002f6e8c;

struct __attribute__((packed)) CreateSoundHeapFrame {
    u32 word_0;
    u8 unknown_4[0x10];  // (not read or written by name)
};
GUEST_OFFSET(CreateSoundHeapFrame, word_0, 0x0);
GUEST_SIZE(CreateSoundHeapFrame, 0x14);

u32 create_sound_heap(u32 parent, u32 r1_unused, u32 r2, u32 r3) {
    guest::StackFrameOf<CreateSoundHeapFrame> frame;  // the original's stack frame
    u32 name = frame.at(8).addr();
    construct_safe_string(name, 0x1002d8u, r2, r3);
    frame->word_0 = 0;
    u32 heap = create_heap(0xbu << 0x13, name, parent, 1u);
    *sound_heap = heap;
    do_nothing_002f6e8c(heap);
    return *sound_heap;
}

}  // namespace d_001002a4
GUEST_EXPORT_FRAMED(0x001002a5, d_001002a4::create_sound_heap, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_001002e8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Creates the stage heap (0xeb8000 bytes) under a parent heap (arg 0).
namespace d_001002e8 {

inline constexpr u32 no_device_heap_address = 0x00952c38u;
inline constexpr u32 stage_heap_address = 0x00952c3cu;
inline guest::global<u32, 0x00952c3c> stage_heap;
inline constexpr guest::Function<0x002f6e64, u32(u32, u32, u32, u32)> construct_safe_string;
inline constexpr guest::Function<0x002f6e78, u32(u32, u32, u32, u32)> create_heap;
inline constexpr guest::Function<0x002f6e8c, u32(u32)> do_nothing_002f6e8c;

struct __attribute__((packed)) CreateStageHeapFrame {
    u32 word_0;
    u8 unknown_4[0x10];  // (not read or written by name)
};
GUEST_OFFSET(CreateStageHeapFrame, word_0, 0x0);
GUEST_SIZE(CreateStageHeapFrame, 0x14);

u32 create_stage_heap(u32 parent, u32 r1_unused, u32 r2, u32 r3) {
    guest::StackFrameOf<CreateStageHeapFrame> frame;  // the original's stack frame
    u32 name = frame.at(8).addr();
    construct_safe_string(name, 0x10031cu, r2, r3);
    frame->word_0 = 1;
    u32 heap = create_heap(0xeb8000u, name, parent, 1u);
    *stage_heap = heap;
    do_nothing_002f6e8c(heap);
    return *stage_heap;
}

}  // namespace d_001002e8
GUEST_EXPORT_FRAMED(0x001002e9, d_001002e8::create_stage_heap, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_0010032c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Creates the script heap under a parent heap (arg 0), then its sub heaps.
namespace d_0010032c {

inline constexpr u32 no_device_heap_address = 0x00952c38u;
inline constexpr u32 script_heap_address = 0x00952c84u;
inline guest::global<u32, 0x00952c84> script_heap;
inline constexpr guest::Function<0x0012089c, u32(u32)> create_script_sub_heaps;
inline constexpr guest::Function<0x001209ec, u32(u32, u32, u32, u32)> return_constant_0x1a3200_;
inline constexpr guest::Function<0x002f6e64, u32(u32, u32)> construct_safe_string;
inline constexpr guest::Function<0x002f6e78, u32(u32, u32, u32, u32)> create_heap;
inline constexpr guest::Function<0x002f6e8c, u32(u32)> do_nothing_002f6e8c;

struct __attribute__((packed)) CreateScriptHeapFrame {
    u32 word_0;
    u8 unknown_4[0x10];  // (not read or written by name)
};
GUEST_OFFSET(CreateScriptHeapFrame, word_0, 0x0);
GUEST_SIZE(CreateScriptHeapFrame, 0x14);

void create_script_heap(u32 parent, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<CreateScriptHeapFrame> frame;  // the original's stack frame
    u32 size = return_constant_0x1a3200_(parent, r1, r2, r3);
    u32 name = frame.at(8).addr();
    construct_safe_string(name, 0x100368u);
    frame->word_0 = 0;
    *script_heap = create_heap(size, name, parent, 1u);
    do_nothing_002f6e8c(frame.at(8).addr());
    create_script_sub_heaps(*script_heap);
}

}  // namespace d_0010032c
GUEST_EXPORT_FRAMED(0x0010032d, d_0010032c::create_script_heap, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_00100378: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Creates the net game heap (0xd4800 bytes) under a parent heap (arg 0).
namespace d_00100378 {

inline guest::global<u32, 0x00952ca0> net_game_heap;
inline constexpr guest::Function<0x002f6e64, u32(u32, u32, u32, u32)> construct_safe_string;
inline constexpr guest::Function<0x002f6e78, u32(u32, u32, u32, u32)> create_heap;
inline constexpr guest::Function<0x002f6e8c, u32(u32)> do_nothing_002f6e8c;

struct __attribute__((packed)) CreateNetGameHeapFrame {
    u32 word_0;
    u8 unknown_4[0x10];  // (not read or written by name)
};
GUEST_OFFSET(CreateNetGameHeapFrame, word_0, 0x0);
GUEST_SIZE(CreateNetGameHeapFrame, 0x14);

void create_net_game_heap(u32 parent, u32 r1_unused, u32 r2, u32 r3) {
    guest::StackFrameOf<CreateNetGameHeapFrame> frame;  // the original's stack frame
    u32 r0_1 = frame.at(8).addr();
    construct_safe_string(r0_1, 0x1003acu, r2, r3);
    frame->word_0 = 1;
    u32 heap = create_heap(0xd4800u, r0_1, parent, 1u);
    *net_game_heap = heap;
    do_nothing_002f6e8c(heap);
}

}  // namespace d_00100378
GUEST_EXPORT_FRAMED(0x00100379, d_00100378::create_net_game_heap, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_001003bc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Creates the weather heap (0x7600 bytes) under a parent heap (arg 0).
namespace d_001003bc {

inline guest::global<u32, 0x00952c48> weather_heap;
inline constexpr guest::Function<0x002f6e64, u32(u32, u32, u32, u32)> construct_safe_string;
inline constexpr guest::Function<0x002f6e78, u32(u32, u32, u32, u32)> create_heap;
inline constexpr guest::Function<0x002f6e8c, u32(u32)> do_nothing_002f6e8c;

struct __attribute__((packed)) CreateWeatherHeapFrame {
    u32 word_0;
    u8 unknown_4[0x10];  // (not read or written by name)
};
GUEST_OFFSET(CreateWeatherHeapFrame, word_0, 0x0);
GUEST_SIZE(CreateWeatherHeapFrame, 0x14);

void create_weather_heap(u32 parent, u32 r1_unused, u32 r2, u32 r3) {
    guest::StackFrameOf<CreateWeatherHeapFrame> frame;  // the original's stack frame
    u32 r0_1 = frame.at(8).addr();
    construct_safe_string(r0_1, 0x1003f0u, r2, r3);
    frame->word_0 = 0;
    u32 heap = create_heap(0x3bu << 9, r0_1, parent, 1u);
    *weather_heap = heap;
    do_nothing_002f6e8c(heap);
}

}  // namespace d_001003bc
GUEST_EXPORT_FRAMED(0x001003bd, d_001003bc::create_weather_heap, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_00100400: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Creates the no-device heap over a memory block (arg 0) and adds it to the root heaps.
namespace d_00100400 {

struct __attribute__((packed)) MemoryBlock {
    u8 unknown_0[0x8];  // (not used here)
    u32 start;
    u32 size;
};
GUEST_OFFSET(MemoryBlock, start, 0x8);
GUEST_OFFSET(MemoryBlock, size, 0xc);

inline constexpr u32 no_device_heap_address = 0x00952c38u;
inline constexpr u32 root_heaps_count_address = 0x00ae53b8u;
inline guest::global<u32, 0x00952c38> no_device_heap;
inline constexpr guest::Function<0x00122620, u32(u32, u32)> pointer_array_push;
inline constexpr guest::Function<0x00131e5c, u32(u32, u32, u32, u32)> sead__ExpHeap__create_at;
inline constexpr guest::Function<0x002f6e64, u32(u32, u32, u32, u32)> construct_safe_string;
inline constexpr guest::Function<0x002f6e8c, u32(u32)> do_nothing_002f6e8c;

u32 create_no_device_heap(gptr<MemoryBlock> block, u32 r1_unused, u32 r2, u32 r3) {
    guest::StackFrame frame(0xc);  // the original's stack frame
    u32 size = block->size;
    u32 start = block->start;
    u32 name = frame.at(0).addr();
    construct_safe_string(name, 0x100434u, r2, r3);
    u32 heap = sead__ExpHeap__create_at(start, size, name, 0u);
    *no_device_heap = heap;
    do_nothing_002f6e8c(heap);
    pointer_array_push(root_heaps_count_address, *no_device_heap);
    return *no_device_heap;
}

}  // namespace d_00100400
GUEST_EXPORT_FRAMED(0x00100401, d_00100400::create_no_device_heap, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_00100448: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Creates the real estate heap (0xa5000 bytes) under a parent heap (arg 0).
namespace d_00100448 {

inline guest::global<u32, 0x00952c54> real_estate_heap;
inline constexpr guest::Function<0x002f6e64, u32(u32, u32, u32, u32)> construct_safe_string;
inline constexpr guest::Function<0x002f6e78, u32(u32, u32, u32, u32)> create_heap;
inline constexpr guest::Function<0x002f6e8c, u32(u32)> do_nothing_002f6e8c;

struct __attribute__((packed)) CreateRealEstateHeapFrame {
    u32 word_0;
    u8 unknown_4[0x10];  // (not read or written by name)
};
GUEST_OFFSET(CreateRealEstateHeapFrame, word_0, 0x0);
GUEST_SIZE(CreateRealEstateHeapFrame, 0x14);

void create_real_estate_heap(u32 parent, u32 r1_unused, u32 r2, u32 r3) {
    guest::StackFrameOf<CreateRealEstateHeapFrame> frame;  // the original's stack frame
    u32 name = frame.at(8).addr();
    construct_safe_string(name, 0x10047cu, r2, r3);
    frame->word_0 = 0;
    u32 heap = create_heap(0xa5u << 0xc, name, parent, 1u);
    *real_estate_heap = heap;
    do_nothing_002f6e8c(heap);
}

}  // namespace d_00100448
GUEST_EXPORT_FRAMED(0x00100449, d_00100448::create_real_estate_heap, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_00100490: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Creates the model effect unit heap: 9 units of 0x2710 bytes.
namespace d_00100490 {

inline guest::global<u32, 0x00952c70> model_effect_unit_heap;
inline constexpr guest::Function<0x002f6e64, u32(u32, u32, u32, u32)> construct_safe_string;
inline constexpr guest::Function<0x002f6e8c, u32(u32)> do_nothing_002f6e8c;
inline constexpr guest::Function<0x002f70b4, u32(u32, u32, u32, u32)> sead__UnitHeap__UnitHeap_002f70b4;

struct __attribute__((packed)) CreateModelEffectUnitHeapFrame {
    u32 parent;
    u32 word_4;
    u8 unknown_8[0x8];  // (not read or written by name)
};
GUEST_OFFSET(CreateModelEffectUnitHeapFrame, parent, 0x0);
GUEST_OFFSET(CreateModelEffectUnitHeapFrame, word_4, 0x4);
GUEST_SIZE(CreateModelEffectUnitHeapFrame, 0x10);

void create_model_effect_unit_heap(u32 parent, u32 r1_unused, u32 r2, u32 r3) {
    guest::StackFrameOf<CreateModelEffectUnitHeapFrame> frame;  // the original's stack frame
    u32 name = frame.at(8).addr();
    construct_safe_string(name, 0x1004c0u, r2, r3);
    frame->word_4 = 0;
    frame->parent = parent;
    u32 heap = sead__UnitHeap__UnitHeap_002f70b4(0x2710u, 9u, name, 4u);
    *model_effect_unit_heap = heap;
    do_nothing_002f6e8c(heap);
}

}  // namespace d_00100490
GUEST_EXPORT_FRAMED(0x00100491, d_00100490::create_model_effect_unit_heap, 0x4010);  // pushes {r4, lr} first, as the original

// f_001004dc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Creates the particle heap (0x23fc00 bytes) under a parent heap (arg 0).
namespace d_001004dc {

inline guest::global<u32, 0x00952c68> sead_particle_heap;
inline constexpr guest::Function<0x002f6e64, u32(u32, u32, u32, u32)> construct_safe_string;
inline constexpr guest::Function<0x002f6e78, u32(u32, u32, u32, u32)> create_heap;
inline constexpr guest::Function<0x002f6e8c, u32(u32)> do_nothing_002f6e8c;

struct __attribute__((packed)) CreateSeadParticleHeapFrame {
    u32 word_0;
    u8 unknown_4[0x10];  // (not read or written by name)
};
GUEST_OFFSET(CreateSeadParticleHeapFrame, word_0, 0x0);
GUEST_SIZE(CreateSeadParticleHeapFrame, 0x14);

void create_sead_particle_heap(u32 parent, u32 r1_unused, u32 r2, u32 r3) {
    guest::StackFrameOf<CreateSeadParticleHeapFrame> frame;  // the original's stack frame
    u32 name = frame.at(8).addr();
    construct_safe_string(name, 0x100510u, r2, r3);
    frame->word_0 = 0;
    u32 heap = create_heap(0x23fc00u, name, parent, 1u);
    *sead_particle_heap = heap;
    do_nothing_002f6e8c(heap);
}

}  // namespace d_001004dc
GUEST_EXPORT_FRAMED(0x001004dd, d_001004dc::create_sead_particle_heap, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_00100528: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Creates the human animation bank heap (0x238333 bytes) under a parent heap (arg 0).
namespace d_00100528 {

inline guest::global<u32, 0x00952c64> human_anim_bank_heap;
inline constexpr guest::Function<0x002f6e64, u32(u32, u32, u32, u32)> construct_safe_string;
inline constexpr guest::Function<0x002f6e78, u32(u32, u32, u32, u32)> create_heap;
inline constexpr guest::Function<0x002f6e8c, u32(u32)> do_nothing_002f6e8c;

struct __attribute__((packed)) CreateHumanAnimBankHeapFrame {
    u32 word_0;
    u8 unknown_4[0x10];  // (not read or written by name)
};
GUEST_OFFSET(CreateHumanAnimBankHeapFrame, word_0, 0x0);
GUEST_SIZE(CreateHumanAnimBankHeapFrame, 0x14);

void create_human_anim_bank_heap(u32 parent, u32 r1_unused, u32 r2, u32 r3) {
    guest::StackFrameOf<CreateHumanAnimBankHeapFrame> frame;  // the original's stack frame
    u32 name = frame.at(8).addr();
    construct_safe_string(name, 0x10055cu, r2, r3);
    frame->word_0 = 0;
    u32 heap = create_heap(0x238333u, name, parent, 1u);
    *human_anim_bank_heap = heap;
    do_nothing_002f6e8c(heap);
}

}  // namespace d_00100528
GUEST_EXPORT_FRAMED(0x00100529, d_00100528::create_human_anim_bank_heap, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_00100574: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Creates the model effect resource heap (0x3c000 bytes) under a parent heap (arg 0).
namespace d_00100574 {

inline guest::global<u32, 0x00952c74> model_effect_res_heap;
inline constexpr guest::Function<0x002f6e64, u32(u32, u32, u32, u32)> construct_safe_string;
inline constexpr guest::Function<0x002f6e78, u32(u32, u32, u32, u32)> create_heap;
inline constexpr guest::Function<0x002f6e8c, u32(u32)> do_nothing_002f6e8c;

struct __attribute__((packed)) CreateModelEffectResHeapFrame {
    u32 word_0;
    u8 unknown_4[0x10];  // (not read or written by name)
};
GUEST_OFFSET(CreateModelEffectResHeapFrame, word_0, 0x0);
GUEST_SIZE(CreateModelEffectResHeapFrame, 0x14);

void create_model_effect_res_heap(u32 parent, u32 r1_unused, u32 r2, u32 r3) {
    guest::StackFrameOf<CreateModelEffectResHeapFrame> frame;  // the original's stack frame
    u32 name = frame.at(8).addr();
    construct_safe_string(name, 0x1005a8u, r2, r3);
    frame->word_0 = 0;
    u32 heap = create_heap(0xfu << 0xe, name, parent, 1u);
    *model_effect_res_heap = heap;
    do_nothing_002f6e8c(heap);
}

}  // namespace d_00100574
GUEST_EXPORT_FRAMED(0x00100575, d_00100574::create_model_effect_res_heap, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_001005c0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Creates the particle handle heap: 16 units of 0x18 bytes.
namespace d_001005c0 {

inline guest::global<u32, 0x00952c6c> particle_handle_heap;
inline constexpr guest::Function<0x002f6e64, u32(u32, u32, u32, u32)> construct_safe_string;
inline constexpr guest::Function<0x002f6e8c, u32(u32)> do_nothing_002f6e8c;
inline constexpr guest::Function<0x002f70b4, u32(u32, u32, u32, u32)> sead__UnitHeap__UnitHeap_002f70b4;

struct __attribute__((packed)) CreateParticleHandleHeapFrame {
    u32 parent;
    u32 word_4;
    u8 unknown_8[0x8];  // (not read or written by name)
};
GUEST_OFFSET(CreateParticleHandleHeapFrame, parent, 0x0);
GUEST_OFFSET(CreateParticleHandleHeapFrame, word_4, 0x4);
GUEST_SIZE(CreateParticleHandleHeapFrame, 0x10);

void create_particle_handle_heap(u32 parent, u32 r1_unused, u32 r2, u32 r3) {
    guest::StackFrameOf<CreateParticleHandleHeapFrame> frame;  // the original's stack frame
    u32 name = frame.at(8).addr();
    construct_safe_string(name, 0x1005f0u, r2, r3);
    frame->word_4 = 0;
    frame->parent = parent;
    u32 heap = sead__UnitHeap__UnitHeap_002f70b4(0x18u, 0x10u, name, 4u);
    *particle_handle_heap = heap;
    do_nothing_002f6e8c(heap);
}

}  // namespace d_001005c0
GUEST_EXPORT_FRAMED(0x001005c1, d_001005c0::create_particle_handle_heap, 0x4010);  // pushes {r4, lr} first, as the original

// f_00100608: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Initializes the system services chosen by the flags (bits 1 and 0: the main service set and the extra one); returns
// true.
namespace d_00100608 {

inline constexpr guest::Function<0x00127d54, u32(u32)> IslandData__release;
inline constexpr guest::Function<0x00127f88, u32(u32)> TourResult__release;
inline constexpr guest::Function<0x001282a8, u32(u32)> Global957308__destroy;
inline constexpr guest::Function<0x00128454, u32(u32)> NpcNetPacketMgr__release;
inline constexpr guest::Function<0x00128490, u32(u32)> NpcNetShareInfo__release;
inline constexpr guest::Function<0x001284cc, u32(u32)> NpcPermitBitMgr__release;
inline constexpr guest::Function<0x0012853c, u32(u32)> VisitorLocalInfo__release;
inline constexpr guest::Function<0x001285c8, u32(u32)> ExhibitionParkInfo__release;
inline constexpr guest::Function<0x001288e8, u32(u32)> NpcLockPlayerPermitBit__release;
inline constexpr guest::Function<0x0012b6c0, u32(u32)> script__WordFix_256u___WordFix;
inline constexpr guest::Function<0x0012b7c4, u32(u32)> FontMgr__release;
inline constexpr guest::Function<0x0012cb84, u32(u32)> SceneObjects__release;
inline constexpr guest::Function<0x0012cc78, u32(u32)> SaveData__finalize;
inline constexpr guest::Function<0x0012d19c, u32(u32)> TalkWindowHolder__release;
inline constexpr guest::Function<0x0012d3ac, u32(u32)> Global94ed44__release;
inline constexpr guest::Function<0x0012d444, u32(u32)> Tour__release_object;
inline constexpr guest::Function<0x001325e4, u32(u32)> return_zero_pair;
inline constexpr guest::Function<0x002f737c, u32(u32, u32, u32, u32)> flag_bit;

u32 initialize_services_by_flags(u32 r0) {
    flag_bit(r0, 4u, guest::cpu()->r[2], guest::cpu()->r[3]);
    flag_bit(r0, 3u, guest::cpu()->r[2], guest::cpu()->r[3]);
    flag_bit(r0, 2u, guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_1 = flag_bit(r0, 1u, guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0_1 != 0) {
        u32 r0_7 = NpcNetShareInfo__release(NpcLockPlayerPermitBit__release(NpcPermitBitMgr__release(NpcNetPacketMgr__release(SaveData__finalize(Global957308__destroy(r0_1))))));
        u32 r0_13 = Tour__release_object(IslandData__release(VisitorLocalInfo__release(Global94ed44__release(SceneObjects__release(script__WordFix_256u___WordFix(r0_7))))));
        return_zero_pair(ExhibitionParkInfo__release(TourResult__release(r0_13)));
    }
    u32 r0_16 = flag_bit(r0, 0u, guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0_16 == 0) {
        return 1u;
    }
    TalkWindowHolder__release(r0_16);
    FontMgr__release(r0_16);
    return 1u;
}

}  // namespace d_00100608
GUEST_EXPORT_FRAMED(0x00100609, d_00100608::initialize_services_by_flags, 0x4010);  // pushes {r4, lr} first, as the original

// f_00100684: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00100684 {

inline guest::global<u32, 0x00950148> npc_manager;
inline guest::global<u32, 0x00950158> global_00950158;
inline constexpr guest::Function<0x0012d198, u32(u32, u32, u32, u32)> do_nothing_0012d198;
inline constexpr guest::Function<0x0012d3f4, u32(u32)> release_scene_resources;
inline constexpr guest::Function<0x0014f6fc, u32(u32)> import_thunk_14f6fc;
inline constexpr guest::Function<0x002f73b8, u32(u32, u32, u32, u32)> unload_split_part;
inline constexpr guest::Function<0x002f747c, u32(u32)> ObjectOwner__release_object;
inline constexpr guest::Function<0x002f74a8, u32(u32, u32, u32, u32)> read_field_s8_0x10_;
inline constexpr guest::Function<0x002f74b0, u32(u32, u32, u32, u32)> FlaggedObject__reset;
inline constexpr guest::Function<0x002f74c8, u32(u32)> current_scene_id;
inline constexpr guest::Function<0x002f74e0, u32(u32, u32)> scene_has_flags;

struct __attribute__((packed)) BsNpcMgrDoDeleteFrame {
    u32 word_0;
};
GUEST_OFFSET(BsNpcMgrDoDeleteFrame, word_0, 0x0);
GUEST_SIZE(BsNpcMgrDoDeleteFrame, 0x4);

u32 BsNpcMgr__do_delete(gptr<BsNpcMgr> bs_npc_mgr, u32 r1, u32 r2_unused, u32 r3) {
    guest::StackFrameOf<BsNpcMgrDoDeleteFrame> frame;  // the original's stack frame
    u32 r0 = bs_npc_mgr.addr();
    u32 r0_14 = 0;
    frame->word_0 = r3;
    u32 r4 = r0;
    *npc_manager = 0;
    unload_split_part(r4 + 0xe5ccu, r1, guest::cpu()->r[2], r3);
    ObjectOwner__release_object(r4 + 0xe6d4u);
    release_scene_resources(r4);
    if (bs_npc_mgr->word_e7e8 != 0) {
        unload_split_part(r4 + 0xe6dcu, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
        ObjectOwner__release_object(r4 + 0xe7e4u);
    }
    if (*gptr<u32>(r4 + 0xe8f8u) != 0) {
        unload_split_part(r4 + 0xe7ecu, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
        ObjectOwner__release_object(r4 + 0xe8f4u);
    }
    if (*gptr<u32>(r4 + (0x75u << 9) + 8u) != 0) {
        unload_split_part(r4 + 0xe8fcu, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
        ObjectOwner__release_object(r4 + 0xea04u);
    }
    *global_00950158 = 0;
    u32 r0_9 = r4 + 0xef94u;
    if (read_field_s8_0x10_(r0_9, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]) != 0) {
        FlaggedObject__reset(r0_9, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    }
    u32 r0_11 = r4 + 0xefe0u;
    u32 r0_12 = read_field_s8_0x10_(r0_11, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r3 = guest::cpu()->r[3];
    if (r0_12 != 0) {
        FlaggedObject__reset(r0_11, r1, guest::cpu()->r[2], r3);
        r1 = guest::cpu()->r[1];
        r3 = guest::cpu()->r[3];
    }
    u32 r7 = 0xf02cu;
    u32 i = 0u;
    do {
        u32 r0_13 = 0x4cu * i + r4 + r7;
        r0_14 = read_field_s8_0x10_(r0_13, r1, guest::cpu()->r[2], r3);
        r1 = guest::cpu()->r[1];
        r3 = guest::cpu()->r[3];
        if (r0_14 != 0) {
            r0_14 = FlaggedObject__reset(r0_13, r1, guest::cpu()->r[2], r3);
            r1 = guest::cpu()->r[1];
            r3 = guest::cpu()->r[3];
        }
        i += 1u;
        guest::preempt();
    } while (s32(i) < 2);
    do_nothing_0012d198(r0_14, r1, guest::cpu()->r[2], r3);
    u32 scene_2 = current_scene_id(r0_14);
    u32 scene_flagged_2 = scene_has_flags(0x40u, scene_2);
    if (scene_flagged_2 != 0) {
        import_thunk_14f6fc(scene_flagged_2);
    }
    return 2u;
}

}  // namespace d_00100684
GUEST_EXPORT_FRAMED(0x00100685, d_00100684::BsNpcMgr__do_delete, 0x40f0);  // pushes {r4, i, r6, r7, lr} first, as the original

// f_0010082c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Jumps to string16_length.
namespace d_0010082c {

inline constexpr guest::Function<0x00100835, u32(u32, u32)> string16_length;

u32 string16_length_veneer() {
    return string16_length(guest::cpu()->r[0], guest::cpu()->r[1]);
}

}  // namespace d_0010082c
GUEST_EXPORT(0x0010082c, d_0010082c::string16_length_veneer);

// f_00100848: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Jumps to create_small_block.
namespace d_00100848 {

inline constexpr guest::Function<0x00100851, u32(u32, u32, u32, u32)> create_small_block;

u32 create_small_block_veneer() {
    return create_small_block(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_00100848
GUEST_EXPORT(0x00100848, d_00100848::create_small_block_veneer);

// f_00100a8c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Destroys the villager part: its four extra villagers, the two boards, its records and the ten villagers.
namespace d_00100a8c {

inline constexpr guest::Function<0x001389c0, u32(u32, u32, u32)> destroy_eight_entries_40;
inline constexpr guest::Function<0x001389e4, u32(u32, u32, u32)> do_nothing_001389e4;
inline constexpr guest::Function<0x001389f8, u32(u32, u32)> do_nothing_001389f8;
inline constexpr guest::Function<0x001389fc, u32(u32, u32, u32)> do_nothing_001389fc;
inline constexpr guest::Function<0x002f76ad, u32(u32, u32, u32, u32)> destroy_array_elements;
inline constexpr guest::Function<0x002f7708, u32(u32, u32, u32)> do_nothing_002f7708;

u32 VillagerPart__destruct(u32 villager_part) {
    u32 r4_1 = villager_part + 0x1976cu;
    destroy_array_elements(r4_1, 0x100b8du, 0x2518u, 4u);
    destroy_array_elements(r4_1 - 0x1146u, 0x100ccdu, 0xf2u, 0x10u);
    destroy_array_elements(r4_1 - 0x20c2u, 0x100ccdu, 0xf2u, 0x10u);
    u32 r0_3 = r4_1 - 0x211eu;
    do_nothing_001389f8(r0_3, 0x1764au);
    u32 r0_4 = r0_3 - 0x202u;
    destroy_eight_entries_40(r0_4, 0x17448u, 0xfffe89b6u);
    u32 r0_5 = r0_4 - 0x5cu;
    do_nothing_001389e4(r0_5, 0x173ecu, 0xfffe8bb8u);
    u32 r0_6 = r0_5 - 0x26u;
    do_nothing_002f7708(r0_6, 0x173c6u, 0xfffe8c14u);
    u32 r0_7 = r0_6 - 0x26u;
    do_nothing_002f7708(r0_7, 0x173a0u, 0xfffe8c3au);
    u32 r0_8 = r0_7 - 0xacu;
    do_nothing_001389fc(r0_8, 0x172f4u, 0xfffe8c60u);
    destroy_array_elements(r0_8 + 0xfffe8d0cu, 0x100b8du, 0x2518u, 0xau);
    return r0_8 + 0xfffe8d08u;
}

}  // namespace d_00100a8c
GUEST_EXPORT_FRAMED(0x00100a8d, d_00100a8c::VillagerPart__destruct, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_00100b80: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Forwards to Player__destruct.
namespace d_00100b80 {

inline constexpr guest::Function<0x00100b8d, u32(u32, u32, u32, u32)> Player__destruct;

u32 Player__destruct_veneer(u32 player) {
    return Player__destruct(player, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_00100b80
GUEST_EXPORT(0x00100b80, d_00100b80::Player__destruct_veneer);

// f_00100b8c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Destroys a player record's parts (items, letters, patterns and the rest).
namespace d_00100b8c {

inline constexpr guest::Function<0x00139d24, u32(u32, u32)> do_nothing_00139d24;
inline constexpr guest::Function<0x0013c0e4, u32(u32)> do_nothing_0013c0e4;
inline constexpr guest::Function<0x002f76ad, u32(u32, u32, u32, u32)> destroy_array_elements;
inline constexpr guest::Function<0x002f777c, u32(u32, u32, u32, u32)> do_nothing_002f777c;
inline constexpr guest::Function<0x002f77e8, u32(u32, u32, u32)> same_pointer;

u32 Player__destruct(u32 player, u32 r1_unused, u32 r2, u32 r3) {
    u32 r0_1 = player + 0x24eau;
    do_nothing_002f777c(r0_1, 0x249au, r2, r3);
    do_nothing_002f777c(r0_1 - 4u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    do_nothing_002f777c(r0_1 - 8u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    do_nothing_002f777c(r0_1 - 0xcu, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    do_nothing_002f777c(r0_1 - 0x10u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    do_nothing_002f777c(r0_1 - 0x14u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    do_nothing_002f777c(r0_1 - 0x18u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    do_nothing_002f777c(r0_1 - 0x1cu, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    do_nothing_002f777c(r0_1 - 0x20u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    do_nothing_002f777c(r0_1 - 0x24u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    do_nothing_002f777c(r0_1 - 0x28u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    do_nothing_002f777c(r0_1 - 0x2cu, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    do_nothing_002f777c(r0_1 - 0x30u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    do_nothing_002f777c(r0_1 - 0x34u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    do_nothing_002f777c(r0_1 - 0x38u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    do_nothing_002f777c(r0_1 - 0x3cu, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    do_nothing_002f777c(r0_1 - 0x40u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    do_nothing_002f777c(r0_1 - 0x44u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    do_nothing_002f777c(r0_1 - 0x48u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    do_nothing_002f777c(r0_1 - 0x4cu, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    do_nothing_002f777c(r0_1 - 0x50u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_22 = r0_1 - 0x2dau;
    same_pointer(r0_22, 0x2210u, 0xffffdb66u);
    destroy_array_elements(r0_22 - 0xa00u, 0x2f77e8u, 5u << 7, 4u);
    destroy_array_elements(r0_22 - 0x1922u, 0x100ccdu, 0xf2u, 0x10u);
    do_nothing_002f777c(r0_22 - 0x1926u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_26 = r0_22 - 0x192au;
    do_nothing_002f777c(r0_26, 0x8e6u, 0xfffff716u, guest::cpu()->r[3]);
    destroy_array_elements(r0_26 - 0x10u, 0x2f777cu, 4u, 4u);
    destroy_array_elements(r0_26 - 0x20u, 0x2f777cu, 4u, 4u);
    do_nothing_0013c0e4(r0_26 - 0x20u);
    do_nothing_00139d24(r0_26 - 0x30u, 0xfffff74au);
    return (r0_26 - 0x8b6u) - 0x30u;
}

}  // namespace d_00100b8c
GUEST_EXPORT_FRAMED(0x00100b8d, d_00100b8c::Player__destruct, 0x4010);  // pushes {r4, lr} first, as the original

// f_00100d0e: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Converts a multibyte string to wide characters without a shift state (C mbstowcs).
namespace d_00100d0e {

inline constexpr guest::Function<0x002f7951, u32(u32, u32, u32, u32)> multibyte_to_wide;

u32 multibyte_to_wide_stateless(u32 dst, u32 src, u32 count) {
    return multibyte_to_wide(0u, dst, src, count);
}

}  // namespace d_00100d0e
GUEST_EXPORT_FRAMED(0x00100d0f, d_00100d0e::multibyte_to_wide_stateless, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_00100e38: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Formats into a buffer from an argument list (C vsprintf).
namespace d_00100e38 {

struct __attribute__((packed)) Local_00100e38_ea_1 {
    u32 args;
    u32 word_4;
};
GUEST_OFFSET(Local_00100e38_ea_1, args, 0x0);
GUEST_OFFSET(Local_00100e38_ea_1, word_4, 0x4);

inline constexpr guest::Function<0x002f7a2f, u32(u32, u32, u32, u32)> format_with_sink;
inline constexpr guest::Function<0x002f7c91, u32(u32, u32)> put_char_to_buffer;

struct __attribute__((packed)) VsprintfFrame {
    u32 buffer;
    u8 unknown_4[0x4];  // (not read or written by name)
};
GUEST_OFFSET(VsprintfFrame, buffer, 0x0);
GUEST_SIZE(VsprintfFrame, 0x8);

void vsprintf(u32 buffer, u32 format, u32 args, u32 r3) {
    guest::StackFrameOf<VsprintfFrame> frame;  // the original's stack frame
    gptr<Local_00100e38_ea_1> ea_1 = gptr<Local_00100e38_ea_1>(frame.at(0).addr());
    ea_1->args = args;
    ea_1->word_4 = r3;
    frame->buffer = buffer;
    u32 written = format_with_sink(format, frame.at(0).addr(), args, 0x2f7c91u);
    put_char_to_buffer(0u, frame.at(0).addr());
}

}  // namespace d_00100e38
GUEST_EXPORT_FRAMED(0x00100e39, d_00100e38::vsprintf, 0x4010);  // pushes {r4, lr} first, as the original

// f_00100e5c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Formats into a buffer of `size` bytes, terminated when there is room; returns the length the output needed.
namespace d_00100e5c {

struct __attribute__((packed)) Local_00100e5c_ea_1 {
    u32 format;
    u32 args;
};
GUEST_OFFSET(Local_00100e5c_ea_1, format, 0x0);
GUEST_OFFSET(Local_00100e5c_ea_1, args, 0x4);

inline constexpr guest::Function<0x002f7a2f, u32(u32, u32, u32, u32)> format_with_sink;
inline constexpr guest::Function<0x002f7c91, u32(u32, u32)> put_char_to_buffer;

struct __attribute__((packed)) VsnprintfFrame {
    u32 buffer;
    u32 buffer_4;
};
GUEST_OFFSET(VsnprintfFrame, buffer, 0x0);
GUEST_OFFSET(VsnprintfFrame, buffer_4, 0x4);
GUEST_SIZE(VsnprintfFrame, 0x8);

u32 vsnprintf(u32 buffer, u32 size, u32 format, u32 args) {
    guest::StackFrameOf<VsnprintfFrame> frame;  // the original's stack frame
    gptr<Local_00100e5c_ea_1> ea_1 = gptr<Local_00100e5c_ea_1>(frame.at(0).addr());
    ea_1->format = format;
    ea_1->args = args;
    frame->buffer = buffer;
    if (size != 0) {
        buffer = buffer + size - 1u;
    }
    frame->buffer_4 = buffer;
    u32 written = format_with_sink(format, frame.at(0).addr(), args, 0x101a95u);
    if (size != 0) {
        put_char_to_buffer(0u, frame.at(0).addr());
    }
    return written;
}

}  // namespace d_00100e5c
GUEST_EXPORT_FRAMED(0x00100e5d, d_00100e5c::vsnprintf, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_00100e94: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Formats wide characters into a buffer of `count` characters; -1 when the output did not fit.
namespace d_00100e94 {

struct __attribute__((packed)) Local_00100e94_ea_1 {
    u32 format;
    u32 args;
};
GUEST_OFFSET(Local_00100e94_ea_1, format, 0x0);
GUEST_OFFSET(Local_00100e94_ea_1, args, 0x4);

inline constexpr guest::Function<0x002f7ca7, u32(u32, u32, u32, u32)> wide_format_with_sink_fn;
inline constexpr guest::Function<0x002f7ccd, u32(u32, u32)> put_wide_char_bounded;

struct __attribute__((packed)) VswprintfFrame {
    u32 buffer;
    u32 buffer_4;
};
GUEST_OFFSET(VswprintfFrame, buffer, 0x0);
GUEST_OFFSET(VswprintfFrame, buffer_4, 0x4);
GUEST_SIZE(VswprintfFrame, 0x8);

u32 vswprintf(u32 buffer, u32 count, u32 format, u32 args) {
    guest::StackFrameOf<VswprintfFrame> frame;  // the original's stack frame
    gptr<Local_00100e94_ea_1> ea_1 = gptr<Local_00100e94_ea_1>(frame.at(0).addr());
    ea_1->format = format;
    ea_1->args = args;
    frame->buffer = buffer;
    if (count != 0) {
        buffer = (count << 1) + buffer - 2u;
    }
    frame->buffer_4 = buffer;
    u32 written = wide_format_with_sink_fn(format, frame.at(0).addr(), args, 0x2f7ccdu);
    if (count != 0) {
        frame->buffer_4 = frame->buffer_4 + 2u;
        put_wide_char_bounded(0u, frame.at(0).addr());
    }
    if (written >= count) {
        return ~0u;
    }
    return written;
}

}  // namespace d_00100e94
GUEST_EXPORT_FRAMED(0x00100e95, d_00100e94::vswprintf, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_00100edc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Prints formatted text to the standard output (C printf).
namespace d_00100edc {

struct __attribute__((packed)) Local_00100edc_ea_1 {
    u32 format;
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Local_00100edc_ea_1, format, 0x0);
GUEST_OFFSET(Local_00100edc_ea_1, word_4, 0x4);
GUEST_OFFSET(Local_00100edc_ea_1, word_8, 0x8);
GUEST_OFFSET(Local_00100edc_ea_1, word_c, 0xc);

struct __attribute__((packed)) Local_00100edc_ea_2 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_00100edc_ea_2, word_0, 0x0);
GUEST_OFFSET(Local_00100edc_ea_2, word_4, 0x4);

inline constexpr u32 global_00af752c_address = 0x00af752cu;
inline constexpr guest::Function<0x002f7cdd, u32(u32, u32, u32, u32)> vfprintf;

void printf(u32 format, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    gptr<Local_00100edc_ea_1> ea_1 = gptr<Local_00100edc_ea_1>(r13 - 0x10);
    ea_1->format = format;
    ea_1->word_4 = r1;
    ea_1->word_8 = r2;
    ea_1->word_c = r3;
    gptr<Local_00100edc_ea_2> ea_2 = gptr<Local_00100edc_ea_2>(ea_1.addr() - 8);
    ea_2->word_0 = r4;
    ea_2->word_4 = r14;
    r13 = ea_2.addr();
    u32 r0_1 = *gptr<u32>(r13 + 8u);
    guest::cpu()->r[13] = r13;
    vfprintf(r0_1, global_00af752c_address, r13 + 0xcu, r3);
    u32 r4_1 = *gptr<u32>(r13);
    r13 += 4;
    u32 r3_1 = *gptr<u32>(r13);
    r13 += 0x14u;
    guest::cpu()->r[4] = r4_1;
    guest::cpu()->r[13] = r13;
}

}  // namespace d_00100edc
GUEST_EXPORT(0x00100edd, d_00100edc::printf);

// f_00100ef8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Formats into a buffer (C sprintf); returns the count written.
namespace d_00100ef8 {

struct __attribute__((packed)) Local_00100ef8_ea_1 {
    u32 buffer;
    u32 format;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Local_00100ef8_ea_1, buffer, 0x0);
GUEST_OFFSET(Local_00100ef8_ea_1, format, 0x4);
GUEST_OFFSET(Local_00100ef8_ea_1, word_8, 0x8);
GUEST_OFFSET(Local_00100ef8_ea_1, word_c, 0xc);

struct __attribute__((packed)) Local_00100ef8_ea_2 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Local_00100ef8_ea_2, word_0, 0x0);
GUEST_OFFSET(Local_00100ef8_ea_2, word_4, 0x4);
GUEST_OFFSET(Local_00100ef8_ea_2, word_8, 0x8);
GUEST_OFFSET(Local_00100ef8_ea_2, word_c, 0xc);

inline constexpr guest::Function<0x002f7a2f, u32(u32, u32, u32, u32)> format_with_sink;
inline constexpr guest::Function<0x002f7c91, u32(u32, u32)> put_char_to_buffer;

u32 sprintf(u32 buffer, u32 format, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    gptr<Local_00100ef8_ea_1> ea_1 = gptr<Local_00100ef8_ea_1>(r13 - 0x10);
    ea_1->buffer = buffer;
    ea_1->format = format;
    ea_1->word_8 = r2;
    ea_1->word_c = r3;
    gptr<Local_00100ef8_ea_2> ea_2 = gptr<Local_00100ef8_ea_2>(ea_1.addr() - 0x10);
    ea_2->word_0 = r2;
    ea_2->word_4 = r3;
    ea_2->word_8 = r4;
    ea_2->word_c = r14;
    r13 = ea_2.addr();
    *gptr<u32>(r13) = buffer;
    u32 r0_1 = *gptr<u32>(r13 + 0x14u);
    guest::cpu()->r[13] = r13;
    u32 written = format_with_sink(r0_1, r13, r13 + 0x18u, 0x2f7c91u);
    guest::cpu()->r[13] = r13;
    put_char_to_buffer(0u, r13);
    u32 r4_1 = *gptr<u32>(r13 + 8);
    r13 += 0xc;
    u32 r3_1 = *gptr<u32>(r13);
    r13 += 0x14u;
    guest::cpu()->r[4] = r4_1;
    guest::cpu()->r[13] = r13;
    return written;
}

}  // namespace d_00100ef8
GUEST_EXPORT(0x00100ef9, d_00100ef8::sprintf);

// f_00100f24: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Formats into a buffer of size bytes, truncated and terminated (C snprintf); returns the length it would have.
namespace d_00100f24 {

struct __attribute__((packed)) Local_00100f24_ea_1 {
    u32 buffer;
    u32 word_4;
    u32 format;
    u32 word_c;
};
GUEST_OFFSET(Local_00100f24_ea_1, buffer, 0x0);
GUEST_OFFSET(Local_00100f24_ea_1, word_4, 0x4);
GUEST_OFFSET(Local_00100f24_ea_1, format, 0x8);
GUEST_OFFSET(Local_00100f24_ea_1, word_c, 0xc);

struct __attribute__((packed)) Local_00100f24_ea_2 {
    u32 format;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
};
GUEST_OFFSET(Local_00100f24_ea_2, format, 0x0);
GUEST_OFFSET(Local_00100f24_ea_2, word_4, 0x4);
GUEST_OFFSET(Local_00100f24_ea_2, word_8, 0x8);
GUEST_OFFSET(Local_00100f24_ea_2, word_c, 0xc);
GUEST_OFFSET(Local_00100f24_ea_2, word_10, 0x10);
GUEST_OFFSET(Local_00100f24_ea_2, word_14, 0x14);

inline constexpr guest::Function<0x002f7a2f, u32(u32, u32, u32, u32)> format_with_sink;
inline constexpr guest::Function<0x002f7c91, u32(u32, u32)> put_char_to_buffer;

void snprintf(u32 buffer, u32 size, u32 format, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    gptr<Local_00100f24_ea_1> ea_1 = gptr<Local_00100f24_ea_1>(r13 - 0x10);
    ea_1->buffer = buffer;
    ea_1->word_4 = size;
    ea_1->format = format;
    ea_1->word_c = r3;
    gptr<Local_00100f24_ea_2> ea_2 = gptr<Local_00100f24_ea_2>(ea_1.addr() - 0x18);
    ea_2->format = format;
    ea_2->word_4 = r3;
    ea_2->word_8 = r4;
    ea_2->word_c = r5;
    ea_2->word_10 = r6;
    ea_2->word_14 = r14;
    r13 = ea_2.addr();
    *gptr<u32>(r13) = buffer;
    if (size != 0) {
        buffer = buffer + size - 1u;
    }
    *gptr<u32>(r13 + 4u) = buffer;
    u32 r0_1 = *gptr<u32>(r13 + 0x20u);
    guest::cpu()->r[13] = r13;
    u32 written = format_with_sink(r0_1, r13, r13 + 0x24u, 0x101a95u);
    if (size != 0) {
        guest::cpu()->r[13] = r13;
        put_char_to_buffer(0u, r13);
    }
    u32 r4_1 = *gptr<u32>(r13 + 8);
    u32 r5_1 = *gptr<u32>(r13 + 0xc);
    u32 r6_1 = *gptr<u32>(r13 + 0x10);
    r13 += 0x14;
    u32 r3_1 = *gptr<u32>(r13);
    r13 += 0x14u;
    guest::cpu()->r[4] = r4_1;
    guest::cpu()->r[5] = r5_1;
    guest::cpu()->r[6] = r6_1;
    guest::cpu()->r[13] = r13;
}

}  // namespace d_00100f24
GUEST_EXPORT(0x00100f25, d_00100f24::snprintf);

// f_00100f68: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Formats wide characters into a buffer of `count` characters; -1 when the output did not fit.
namespace d_00100f68 {

struct __attribute__((packed)) Local_00100f68_ea_1 {
    u32 buffer;
    u32 word_4;
    u32 format;
    u32 word_c;
};
GUEST_OFFSET(Local_00100f68_ea_1, buffer, 0x0);
GUEST_OFFSET(Local_00100f68_ea_1, word_4, 0x4);
GUEST_OFFSET(Local_00100f68_ea_1, format, 0x8);
GUEST_OFFSET(Local_00100f68_ea_1, word_c, 0xc);

struct __attribute__((packed)) Local_00100f68_ea_2 {
    u32 format;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
};
GUEST_OFFSET(Local_00100f68_ea_2, format, 0x0);
GUEST_OFFSET(Local_00100f68_ea_2, word_4, 0x4);
GUEST_OFFSET(Local_00100f68_ea_2, word_8, 0x8);
GUEST_OFFSET(Local_00100f68_ea_2, word_c, 0xc);
GUEST_OFFSET(Local_00100f68_ea_2, word_10, 0x10);
GUEST_OFFSET(Local_00100f68_ea_2, word_14, 0x14);

inline constexpr guest::Function<0x002f7ca7, u32(u32, u32, u32, u32)> wide_format_with_sink_fn;
inline constexpr guest::Function<0x002f7ccd, u32(u32, u32)> put_wide_char_bounded;

u32 swprintf(u32 buffer, u32 count, u32 format, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    gptr<Local_00100f68_ea_1> ea_1 = gptr<Local_00100f68_ea_1>(r13 - 0x10);
    ea_1->buffer = buffer;
    ea_1->word_4 = count;
    ea_1->format = format;
    ea_1->word_c = r3;
    gptr<Local_00100f68_ea_2> ea_2 = gptr<Local_00100f68_ea_2>(ea_1.addr() - 0x18);
    ea_2->format = format;
    ea_2->word_4 = r3;
    ea_2->word_8 = r4;
    ea_2->word_c = r5;
    ea_2->word_10 = r6;
    ea_2->word_14 = r14;
    r13 = ea_2.addr();
    *gptr<u32>(r13) = buffer;
    if (count != 0) {
        buffer = (count << 1) + buffer - 2u;
    }
    *gptr<u32>(r13 + 4u) = buffer;
    u32 r0_1 = *gptr<u32>(r13 + 0x20u);
    guest::cpu()->r[13] = r13;
    u32 written = wide_format_with_sink_fn(r0_1, r13, r13 + 0x24u, 0x2f7ccdu);
    if (count != 0) {
        *gptr<u32>(r13 + 4u) = *gptr<u32>(r13 + 4u) + 2u;
        guest::cpu()->r[13] = r13;
        put_wide_char_bounded(0u, r13);
    }
    u32 r4_1 = *gptr<u32>(r13 + 8);
    u32 r5_1 = *gptr<u32>(r13 + 0xc);
    u32 r6_1 = *gptr<u32>(r13 + 0x10);
    r13 += 0x14;
    u32 r3_1 = *gptr<u32>(r13);
    r13 += 0x14u;
    guest::cpu()->r[4] = r4_1;
    guest::cpu()->r[5] = r5_1;
    guest::cpu()->r[6] = r6_1;
    guest::cpu()->r[13] = r13;
    return written < count ? written : ~0u;
}

}  // namespace d_00100f68
GUEST_EXPORT(0x00100f69, d_00100f68::swprintf);

// f_001011e4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// printf's %o: the digits of the 64-bit value (r2, r3), least significant first, then the '0' prefix for the # flag.
namespace d_001011e4 {

struct __attribute__((packed)) Spec {
    u32 word_0;
    u8 unknown_4[0x18];  // (not used here)
    u32 word_1c;
};
GUEST_OFFSET(Spec, word_0, 0x0);
GUEST_OFFSET(Spec, word_1c, 0x1c);

inline constexpr guest::Function<0x002f7dad, u32(u32, u32, u32, u32)> format_emit_number;

u32 format_octal_digits(gptr<Spec> spec, u32 r1_unused, u32 low, u32 high) {
    u32 length = 0u;
    u32 r4 = spec.addr() + 0x24u;
    for (;;) {
        if ((low | high) == 0) {
            break;
        }
        *gptr<u8>(r4 + length) = u8((low & 7u) + 0x30u);
        length += 1u;
        low = low >> 3 | high << 0x1d;
        high >>= 3;
        guest::preempt();
    }
    u32 flags = spec->word_0;
    u32 prefix_length = 0u;
    u32 prefix = 0x10124cu;
    if ((flags & 0x8u) != 0) {
        if ((flags & 0x20u | length) != 0) {
            prefix_length = 1u;
            prefix = 0x101250u;
            spec->word_1c = spec->word_1c - 1u;
        }
    }
    return format_emit_number(spec.addr(), length, prefix, prefix_length);
}

}  // namespace d_001011e4
GUEST_EXPORT_FRAMED(0x001011e5, d_001011e4::format_octal_digits, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0010125c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// printf's %x, %X and %p: the digits of the 64-bit value (r2, r3), least significant first, then the 0x prefix for the
// # flag.
namespace d_0010125c {

struct __attribute__((packed)) Spec {
    u32 word_0;
};
GUEST_OFFSET(Spec, word_0, 0x0);

inline constexpr guest::Function<0x002f7dad, u32(u32, u32, u32, u32)> format_emit_number;

struct __attribute__((packed)) FormatHexDigitsFrame {
    u32 high;
};
GUEST_OFFSET(FormatHexDigitsFrame, high, 0x0);
GUEST_SIZE(FormatHexDigitsFrame, 0x4);

u32 format_hex_digits(gptr<Spec> spec, u32 conversion, u32 low, u32 high) {
    guest::StackFrameOf<FormatHexDigitsFrame> frame;  // the original's stack frame
    u32 r0 = spec.addr();
    frame->high = high;
    u32 r7 = conversion;
    u32 digits = s32(spec->word_0 << 0x14) < 0 ? 0x8c83ecu : 0x8c8400u;
    conversion = 0u;
    u32 r5 = r0 + 0x24u;
    for (;;) {
        if ((low | high) == 0) {
            break;
        }
        *gptr<u8>(r5 + conversion) = *gptr<u8>(digits + (low & 0xfu));
        conversion += 1u;
        low = low >> 4 | high << 0x1c;
        high >>= 4;
        guest::preempt();
    }
    u32 prefix = digits;
    u32 prefix_length = 0u;
    if (s32(*gptr<u32>(r0) << 0x1c) < 0) {
        if (r7 == 0x70u) {
            prefix += 0x10u;
            prefix_length = 1u;
        } else if (conversion != 0) {
            prefix += 0x11u;
            prefix_length = 2u;
        }
    }
    return format_emit_number(r0, conversion, prefix, prefix_length);
}

}  // namespace d_0010125c
GUEST_EXPORT_FRAMED(0x0010125d, d_0010125c::format_hex_digits, 0x40f0);  // pushes {digits, r5, r6, r7, lr} first, as the original

// f_001012f4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Scans a string by a format (C sscanf).
namespace d_001012f4 {

struct __attribute__((packed)) Local_001012f4_ea_1 {
    u32 string;
    u32 format;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Local_001012f4_ea_1, string, 0x0);
GUEST_OFFSET(Local_001012f4_ea_1, format, 0x4);
GUEST_OFFSET(Local_001012f4_ea_1, word_8, 0x8);
GUEST_OFFSET(Local_001012f4_ea_1, word_c, 0xc);

inline constexpr guest::Function<0x002f80c9, u32(u32, u32, u32, u32)> vsscanf;

void sscanf(u32 string, u32 format, u32 r2, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    gptr<Local_001012f4_ea_1> ea_1 = gptr<Local_001012f4_ea_1>(r13 - 0x10);
    ea_1->string = string;
    ea_1->format = format;
    ea_1->word_8 = r2;
    ea_1->word_c = r3;
    u32 ea_2 = ea_1.addr() - 4;
    *gptr<u32>(ea_2) = r14;
    r13 = ea_2 - 0x34u;
    *gptr<u32>(r13 + 0x24u) = string;
    *gptr<u32>(r13 + 0x2cu) = string;
    *gptr<u32>(r13) = r13 + 0x40u;
    *gptr<u32>(r13 + 0x28u) = ~0u;
    *gptr<u32>(r13 + 0x30u) = 0;
    *gptr<u32>(r13 + 0x18u) = 0x1020d5;
    *gptr<u32>(r13 + 0x1cu) = 0x1020f5;
    u32 r1_1 = *gptr<u32>(r13 + 0x3cu);
    guest::cpu()->r[13] = r13;
    vsscanf(r13 + 0x24u, r1_1, r13, r3);
    r13 += 0x34u;
    u32 r3_1 = *gptr<u32>(r13);
    r13 += 0x14u;
    guest::cpu()->r[13] = r13;
}

}  // namespace d_001012f4
GUEST_EXPORT(0x001012f5, d_001012f4::sscanf);

// f_00101334: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// strtol in base 10, errno left as it was.
namespace d_00101334 {

struct __attribute__((packed)) ErrnoAt {
    u32 saved_errno;
};
GUEST_OFFSET(ErrnoAt, saved_errno, 0x0);

inline constexpr guest::Function<0x0010211d, u32(u32, u32, u32)> strtol;
inline constexpr guest::Function<0x002f7a04, u32(u32, u32, u32, u32)> return_constant_0xaf75e8_;

u32 atoi(u32 string, u32 r1, u32 r2) {
    gptr<ErrnoAt> errno_at = gptr<ErrnoAt>(return_constant_0xaf75e8_(string, r1, r2, guest::cpu()->r[3]));
    u32 saved_errno = errno_at->saved_errno;
    u32 value = strtol(string, 0u, 0xau);
    errno_at->saved_errno = saved_errno;
    return value;
}

}  // namespace d_00101334
GUEST_EXPORT_FRAMED(0x00101335, d_00101334::atoi, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_001013c4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Calls 0010218c and returns its object.
namespace d_001013c4 {

inline constexpr guest::Function<0x0010218d, u32(u32, u32, u32, u32)> sscanf_skip_spaces;

u32 call_0010218c_return_self() {
    sscanf_skip_spaces(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    return guest::cpu()->r[0];
}

}  // namespace d_001013c4
GUEST_EXPORT_FRAMED(0x001013c5, d_001013c4::call_0010218c_return_self, 0x4010);  // pushes {r4, lr} first, as the original

// f_00101482: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Converts a wide string to multibyte characters, at most size bytes (C wcstombs).
namespace d_00101482 {

struct __attribute__((packed)) Local_00101482_ea_1 {
    u32 buffer;
    u32 wide;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u32 word_18;
    u32 word_1c;
};
GUEST_OFFSET(Local_00101482_ea_1, buffer, 0x0);
GUEST_OFFSET(Local_00101482_ea_1, wide, 0x4);
GUEST_OFFSET(Local_00101482_ea_1, word_8, 0x8);
GUEST_OFFSET(Local_00101482_ea_1, word_c, 0xc);
GUEST_OFFSET(Local_00101482_ea_1, word_10, 0x10);
GUEST_OFFSET(Local_00101482_ea_1, word_14, 0x14);
GUEST_OFFSET(Local_00101482_ea_1, word_18, 0x18);
GUEST_OFFSET(Local_00101482_ea_1, word_1c, 0x1c);

inline constexpr guest::Function<0x002f84e9, u32(u32, u32, u32, u32)> wcrtomb;
inline constexpr guest::Function<0x002f8574, u32(u32, u32, u32)> copy_bytes_at_any_alignment;

void wcstombs(u32 buffer, u32 wide, u32 size) {
    u32 length = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 at = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    u32 r4_1 = 0;
    u32 r5_1 = 0;
    u32 r6_1 = 0;
    u32 r7_1 = 0;
    u32 tpc_1 = 0;
    gptr<Local_00101482_ea_1> ea_1 = gptr<Local_00101482_ea_1>(r13 - 0x20);
    ea_1->buffer = buffer;
    ea_1->wide = wide;
    ea_1->word_8 = size;
    ea_1->word_c = length;
    ea_1->word_10 = r5;
    ea_1->word_14 = at;
    ea_1->word_18 = r7;
    ea_1->word_1c = r14;
    at = wide;
    length = 0u;
    r13 = ea_1.addr() - 0x10u;
    r7 = length;
L_101494:;
    if (r7 != 0) {
        u32 r0_1 = *gptr<u32>(r7);
        *gptr<u32>(r13 + 0xcu) = *gptr<u32>(r7 + 4u);
        *gptr<u32>(r13 + 8u) = r0_1;
    }
    u32 r1_1 = *gptr<u16>(at);
    guest::cpu()->r[13] = r13;
    u32 bytes = wcrtomb(r13, r1_1, r7, guest::cpu()->r[3]);
    wide = guest::cpu()->r[1];
    if (bytes + 1u != 0) {
        if (*gptr<u32>(r13 + 0x10u) == 0) {
            goto L_1014dc;
        }
        wide = bytes + length;
        if (wide <= *gptr<u32>(r13 + 0x18u)) {
            u32 r0_4 = *gptr<u32>(r13 + 0x10u) + length;
            guest::cpu()->r[13] = r13;
            copy_bytes_at_any_alignment(r0_4, r13, bytes);
            wide = guest::cpu()->r[1];
            goto L_1014dc;
        }
        if (r7 == 0) {
            r13 += 0x1cu;
            r4_1 = *gptr<u32>(r13);
            r5_1 = *gptr<u32>(r13 + 4);
            r6_1 = *gptr<u32>(r13 + 8);
            r7_1 = *gptr<u32>(r13 + 0xc);
            tpc_1 = *gptr<u32>(r13 + 0x10);
            r13 += 0x14;
            guest::cpu()->r[1] = wide;
            guest::cpu()->r[4] = r4_1;
            guest::cpu()->r[5] = r5_1;
            guest::cpu()->r[6] = r6_1;
            guest::cpu()->r[7] = r7_1;
            guest::cpu()->r[13] = r13;
            return;
        }
        wide = *gptr<u32>(r13 + 0xcu);
        *gptr<u32>(r7) = *gptr<u32>(r13 + 8u);
        *gptr<u32>(r7 + 4) = wide;
    }
    r13 += 0x1cu;
    r4_1 = *gptr<u32>(r13);
    r5_1 = *gptr<u32>(r13 + 4);
    r6_1 = *gptr<u32>(r13 + 8);
    r7_1 = *gptr<u32>(r13 + 0xc);
    tpc_1 = *gptr<u32>(r13 + 0x10);
    r13 += 0x14;
    guest::cpu()->r[1] = wide;
    guest::cpu()->r[4] = r4_1;
    guest::cpu()->r[5] = r5_1;
    guest::cpu()->r[6] = r6_1;
    guest::cpu()->r[7] = r7_1;
    guest::cpu()->r[13] = r13;
    return;
L_1014dc:;
    length += bytes;
    if (*gptr<u16>(at) != 0) {
        at += 2u;
        guest::preempt();
        goto L_101494;
    }
    r13 += 0x1cu;
    r4_1 = *gptr<u32>(r13);
    r5_1 = *gptr<u32>(r13 + 4);
    r6_1 = *gptr<u32>(r13 + 8);
    r7_1 = *gptr<u32>(r13 + 0xc);
    tpc_1 = *gptr<u32>(r13 + 0x10);
    r13 += 0x14;
    guest::cpu()->r[1] = wide;
    guest::cpu()->r[4] = r4_1;
    guest::cpu()->r[5] = r5_1;
    guest::cpu()->r[6] = r6_1;
    guest::cpu()->r[7] = r7_1;
    guest::cpu()->r[13] = r13;
}

}  // namespace d_00101482
GUEST_EXPORT(0x00101483, d_00101482::wcstombs);

// f_0010179a: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The first occurrence of needle in haystack, or null (C strstr).
namespace d_0010179a {


u32 strstr(u32 haystack, u32 needle) {
    u32 c = 0;
    u32 n = 0;
    u32 start = haystack;
    do {
        u32 r2 = start;
        u32 r3 = needle;
        do {
            c = *gptr<u8>(r2);
            n = *gptr<u8>(r3);
            r2 += 1u;
            r3 += 1u;
            guest::preempt();
        } while (c != 0 && c == n);
        if (n == 0) {
            return start;
        }
        if (c == 0) {
            return c;
        }
        start += 1u;
        guest::preempt();
    } while (1);
}

}  // namespace d_0010179a
GUEST_EXPORT_FRAMED(0x0010179b, d_0010179a::strstr, 0x4030);  // pushes {r4, start, lr} first, as the original

// f_00101800: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Copies at most count (arg 2) wide characters, padding with the terminator (C wcsncpy); returns dst.
namespace d_00101800 {


u32 wcsncpy(u32 dst, u32 src, u32 count) {
    u32 start = dst;
    for (;;) {
        u32 cf_1 = count >= 1u;
        count -= 1u;
        if (!cf_1) {
            break;
        }
        *gptr<u16>(dst) = *gptr<u16>(src);
        dst += 2u;
        if (*gptr<u16>(src) != 0) {
            src += 2u;
        }
        guest::preempt();
    }
    guest::cpu()->r[1] = src;
    return start;
}

}  // namespace d_00101800
GUEST_EXPORT_FRAMED(0x00101801, d_00101800::wcsncpy, 0x4010);  // pushes {r4, lr} first, as the original

// f_0010181c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Copies count (arg 2) 16-bit characters.
namespace d_0010181c {

inline constexpr guest::Function<0x002f8720, u32(u32, u32, u32)> memcpy;

void wmemcpy(u32 r0_unused, u32 r1_unused, u32 count) {
    memcpy(guest::cpu()->r[0], guest::cpu()->r[1], count << 1);
}

}  // namespace d_0010181c
GUEST_EXPORT_FRAMED(0x0010181d, d_0010181c::wmemcpy, 0x4010);  // pushes {r4, lr} first, as the original

// f_00101826: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Moves count (arg 2) 16-bit characters, overlapping allowed (C wmemmove).
namespace d_00101826 {

inline constexpr guest::Function<0x00150c2c, u32(u32, u32, u32)> memmove_returning_destination;

void wmemmove(u32 r0_unused, u32 r1_unused, u32 count) {
    memmove_returning_destination(guest::cpu()->r[0], guest::cpu()->r[1], count << 1);
}

}  // namespace d_00101826
GUEST_EXPORT_FRAMED(0x00101827, d_00101826::wmemmove, 0x4010);  // pushes {r4, lr} first, as the original

// f_00101890: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The first occurrence of a wide needle in a wide haystack, or null (C wcsstr).
namespace d_00101890 {


u32 wcsstr(u32 haystack, u32 needle) {
    do {
        u32 i = 0u;
        for (;;) {
            u32 r4 = i << 1;
            u32 n = *gptr<u16>(needle + r4);
            if (n == 0) {
                break;
            }
            u32 c = *gptr<u16>(haystack + r4);
            if (c == 0) {
                return 0u;
            }
            if (c != n) {
                goto L_1018b0;
            }
            i += 1u;
            guest::preempt();
        }
        return haystack;
L_1018b0:;
        if (gptr<u16>(needle)[i] == 0) {
            return haystack;
        }
        haystack += 2u;
        guest::preempt();
    } while (1);
}

}  // namespace d_00101890
GUEST_EXPORT_FRAMED(0x00101891, d_00101890::wcsstr, 0x4010);  // pushes {r4, lr} first, as the original

// f_001018bc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Splits a wide string into tokens by delimiters, with a saved position (C wcstok).
namespace d_001018bc {

struct __attribute__((packed)) WcstokArg2 {
    u32 word_0;
};
GUEST_OFFSET(WcstokArg2, word_0, 0x0);


u32 wcstok(u32 string, u32 delimiters, gptr<WcstokArg2> state) {
    u32 r3 = 0;
    u32 r5 = 0u;
    if (string == 0) {
        string = state->word_0;
        if (string == 0) {
            return string;
        }
    }
L_1018ea:;
    u32 token = *gptr<u16>(string);
    if (token != 0) {
        r3 = 0u;
        for (;;) {
            u32 r4 = gptr<u16>(delimiters)[r3];
            if (r4 == 0) {
                break;
            }
            if (r4 == token) {
                if (gptr<u16>(delimiters)[r3] == 0) {
                    break;
                }
                string += 2u;
                guest::preempt();
                goto L_1018ea;
            }
            r3 += 1u;
            guest::preempt();
        }
    } else {
        state->word_0 = r5;
        return 0u;
    }
    if ((token & 0xffffu) == 0) {
        state->word_0 = r5;
        return 0u;
    }
    token = string;
    r3 = 0u;
    goto L_10190c;
L_10190c:;
    u32 r4_1 = gptr<u16>(delimiters)[r3];
    if (r4_1 != 0) {
        u32 r7_1 = *gptr<u16>(string);
        if (r4_1 == r7_1) {
            if (gptr<u16>(delimiters)[r3] != 0) {
                if ((r7_1 & 0xffffu) == 0) {
                    state->word_0 = r5;
                    return token;
                }
                *gptr<u16>(string) = u16(r5);
                state->word_0 = string + 2u;
                return token;
            }
        } else {
            r3 += 1u;
            guest::preempt();
            goto L_10190c;
        }
    }
    string += 2u;
    if (*gptr<u16>(string) != 0) {
        r3 = 0u;
        guest::preempt();
        goto L_10190c;
    }
    state->word_0 = r5;
    return token;
}

}  // namespace d_001018bc
GUEST_EXPORT_FRAMED(0x001018bd, d_001018bc::wcstok, 0x40f0);  // pushes {r4, r5, token, r7, lr} first, as the original

// f_0010193a: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Fills count (arg 2) wide characters with c (C wmemset).
namespace d_0010193a {

struct __attribute__((packed)) WmemsetArg0 {
    u16 half_0;
};
GUEST_OFFSET(WmemsetArg0, half_0, 0x0);

struct __attribute__((packed)) Local_0010193a_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_0010193a_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_0010193a_ea_1, word_4, 0x4);
GUEST_OFFSET(Local_0010193a_ea_1, word_8, 0x8);

inline constexpr guest::Function<0x002f8260, u32(u32, u32, u32)> fill_aligned;

struct __attribute__((packed)) WmemsetFrame {
    u32 word_0;
    u32 word_4;
    u8 unknown_8[0x4];  // (not read or written by name)
};
GUEST_OFFSET(WmemsetFrame, word_0, 0x0);
GUEST_OFFSET(WmemsetFrame, word_4, 0x4);
GUEST_SIZE(WmemsetFrame, 0xc);

void wmemset(gptr<WmemsetArg0> dst, u32 c, u32 count, u32 r3) {
    guest::StackFrameOf<WmemsetFrame> frame;  // the original's stack frame
    u32 r0 = dst.addr();
    gptr<Local_0010193a_ea_1> ea_1 = gptr<Local_0010193a_ea_1>(frame.at(0).addr());
    ea_1->word_0 = c;
    ea_1->word_4 = count;
    ea_1->word_8 = r3;
    u32 cursor = r0;
    u32 left = count;
    frame->word_0 = r0;
    if ((r0 & 3u) != 0u) {
        if (left == 0) {
            goto L_10196e;
        }
        left = count - 1u;
        dst->half_0 = u16(c);
        cursor += 2u;
    }
    if (left >= 2u) {
        u32 r7_1 = left >> 1 << 1;
        u32 r1_1 = r7_1 << 1;
        frame->word_4 = r1_1;
        fill_aligned(cursor, r1_1, c << 0x10 | c);
        left -= r7_1;
        cursor = frame->word_4 + cursor;
    }
L_10196e:;
    if (left != 0) {
        *gptr<u16>(cursor) = u16(c);
    }
}

}  // namespace d_0010193a
GUEST_EXPORT_FRAMED(0x0010193b, d_0010193a::wmemset, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_00101978: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Compares two wide strings ignoring ASCII case (C wcsicmp).
namespace d_00101978 {

inline constexpr guest::Function<0x002f8849, u32(u32, u32, u32, u32)> towlower;

struct __attribute__((packed)) WcsicmpFrame {
    u32 word_0;
};
GUEST_OFFSET(WcsicmpFrame, word_0, 0x0);
GUEST_SIZE(WcsicmpFrame, 0x4);

u32 wcsicmp(u32 a, u32 b, u32 r2_unused, u32 r3) {
    guest::StackFrameOf<WcsicmpFrame> frame;  // the original's stack frame
    frame->word_0 = r3;
    u32 a_at = a;
    u32 i = 0u;
    frame->word_0 = b;
L_101984:;
    u32 r4_1 = i << 1;
    u32 c = *gptr<u16>(a_at + r4_1);
    u32 ca = towlower(c, b, guest::cpu()->r[2], r3);
    u32 r0_3 = *gptr<u16>(frame->word_0 + r4_1);
    u32 cb = towlower(r0_3, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    b = guest::cpu()->r[1];
    r3 = guest::cpu()->r[3];
    u32 difference = ca - cb;
    if (difference == 0) {
        b = *gptr<u16>(a_at + r4_1);
        if (b != 0) {
            i += 1u;
            guest::preempt();
            goto L_101984;
        }
    }
    guest::cpu()->r[1] = b;
    return difference;
}

}  // namespace d_00101978
GUEST_EXPORT_FRAMED(0x00101979, d_00101978::wcsicmp, 0x40f0);  // pushes {r4, i, a_at, r7, lr} first, as the original

// f_00101a00: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Forwards to store_word_af75e8.
namespace d_00101a00 {

inline constexpr guest::Function<0x00101a13, u32(u32, u32)> store_word_af75e8;

void store_word_af75e8_veneer() {
    store_word_af75e8(guest::cpu()->r[0], guest::cpu()->r[1]);
}

}  // namespace d_00101a00
GUEST_EXPORT(0x00101a00, d_00101a00::store_word_af75e8_veneer);

// f_00101a1e: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether the wide character has class bit 1.
namespace d_00101a1e {

inline constexpr guest::Function<0x001024ff, u32(u32, u32, u32, u32)> wide_char_class;

u32 wide_char_is_class_1(u32 c) {
    return wide_char_class(c, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]) & 1u;
}

}  // namespace d_00101a1e
GUEST_EXPORT_FRAMED(0x00101a1f, d_00101a1e::wide_char_is_class_1, 0x4010);  // pushes {r4, lr} first, as the original

// f_00101a2c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Formats into a buffer of size bytes from an argument list, truncated and terminated (C vsnprintf).
namespace d_00101a2c {

struct __attribute__((packed)) Local_00101a2c_ea_1 {
    u32 format;
    u32 args;
};
GUEST_OFFSET(Local_00101a2c_ea_1, format, 0x0);
GUEST_OFFSET(Local_00101a2c_ea_1, args, 0x4);

inline constexpr guest::Function<0x002f7a2f, u32(u32, u32, u32, u32)> format_with_sink;
inline constexpr guest::Function<0x002f7c91, u32(u32, u32)> put_char_to_buffer;

struct __attribute__((packed)) Vsnprintf00101a2cFrame {
    u32 buffer;
    u32 buffer_4;
};
GUEST_OFFSET(Vsnprintf00101a2cFrame, buffer, 0x0);
GUEST_OFFSET(Vsnprintf00101a2cFrame, buffer_4, 0x4);
GUEST_SIZE(Vsnprintf00101a2cFrame, 0x8);

u32 vsnprintf_00101a2c(u32 buffer, u32 size, u32 format, u32 args) {
    guest::StackFrameOf<Vsnprintf00101a2cFrame> frame;  // the original's stack frame
    gptr<Local_00101a2c_ea_1> ea_1 = gptr<Local_00101a2c_ea_1>(frame.at(0).addr());
    ea_1->format = format;
    ea_1->args = args;
    frame->buffer = buffer;
    if (size != 0) {
        buffer = buffer + size - 1u;
    }
    frame->buffer_4 = buffer;
    u32 written = format_with_sink(format, frame.at(0).addr(), args, 0x101a95u);
    if (size != 0) {
        put_char_to_buffer(0u, frame.at(0).addr());
    }
    return written;
}

}  // namespace d_00101a2c
GUEST_EXPORT_FRAMED(0x00101a2d, d_00101a2c::vsnprintf_00101a2c, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_00101bd0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Scans a string by a format (C sscanf); returns the count assigned.
namespace d_00101bd0 {

struct __attribute__((packed)) Local_00101bd0_ea_1 {
    u32 string;
    u32 format;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Local_00101bd0_ea_1, string, 0x0);
GUEST_OFFSET(Local_00101bd0_ea_1, format, 0x4);
GUEST_OFFSET(Local_00101bd0_ea_1, word_8, 0x8);
GUEST_OFFSET(Local_00101bd0_ea_1, word_c, 0xc);

inline constexpr guest::Function<0x002f80c9, u32(u32, u32, u32, u32)> vsscanf;

u32 sscanf_00101bd0(u32 string, u32 format, u32 r2, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    gptr<Local_00101bd0_ea_1> ea_1 = gptr<Local_00101bd0_ea_1>(r13 - 0x10);
    ea_1->string = string;
    ea_1->format = format;
    ea_1->word_8 = r2;
    ea_1->word_c = r3;
    u32 ea_2 = ea_1.addr() - 4;
    *gptr<u32>(ea_2) = r14;
    r13 = ea_2 - 0x34u;
    *gptr<u32>(r13 + 0x24u) = string;
    *gptr<u32>(r13 + 0x2cu) = string;
    *gptr<u32>(r13) = r13 + 0x40u;
    *gptr<u32>(r13 + 0x28u) = ~0u;
    *gptr<u32>(r13 + 0x30u) = 0;
    *gptr<u32>(r13 + 0x18u) = 0x1020d5;
    *gptr<u32>(r13 + 0x1cu) = 0x1020f5;
    u32 r1_1 = *gptr<u32>(r13 + 0x3cu);
    guest::cpu()->r[13] = r13;
    u32 assigned = vsscanf(r13 + 0x24u, r1_1, r13, r3);
    r13 += 0x34u;
    u32 r3_1 = *gptr<u32>(r13);
    r13 += 0x14u;
    guest::cpu()->r[13] = r13;
    return assigned;
}

}  // namespace d_00101bd0
GUEST_EXPORT(0x00101bd1, d_00101bd0::sscanf_00101bd0);

// f_0010211c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Skips white space and a sign, converts, and clamps to the long range on overflow (errno ERANGE).
namespace d_0010211c {

struct __attribute__((packed)) Local_0010211c_ea_1 {
    u32 string;
    u32 end;
    u32 word_8;
};
GUEST_OFFSET(Local_0010211c_ea_1, string, 0x0);
GUEST_OFFSET(Local_0010211c_ea_1, end, 0x4);
GUEST_OFFSET(Local_0010211c_ea_1, word_8, 0x8);

inline constexpr guest::Function<0x002f7a04, u32(u32)> return_constant_0xaf75e8_;
inline constexpr guest::Function<0x002f7a10, u32(u32, u32, u32, u32)> char_table_location;
inline constexpr guest::Function<0x002f80f1, u32(u32, u32, u32, u32)> strtoul_core;

struct __attribute__((packed)) StrtolFrame {
    u32 cursor;
    u8 unknown_4[0x4];  // (not read or written by name)
    u32 word_8;
};
GUEST_OFFSET(StrtolFrame, cursor, 0x0);
GUEST_OFFSET(StrtolFrame, word_8, 0x8);
GUEST_SIZE(StrtolFrame, 0xc);

u32 strtol(u32 string, u32 end, u32 base, u32 r3) {
    guest::StackFrameOf<StrtolFrame> frame;  // the original's stack frame
    gptr<Local_0010211c_ea_1> ea_1 = gptr<Local_0010211c_ea_1>(frame.at(0).addr());
    ea_1->string = string;
    ea_1->end = end;
    ea_1->word_8 = base;
    u32 end_out = end;
    u32 negative = 0u;
    u32 cursor = frame->cursor;
L_102124:;
    u32 c = *gptr<u8>(cursor);
    cursor += 1u;
    if (c != 0) {
        u32 r0_1 = char_table_location(string, end, base, r3);
        end = guest::cpu()->r[1];
        base = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        string = u32(*gptr<u8>(*gptr<u32>(r0_1) + c)) << 0x1f;
        if (string != 0) {
            guest::preempt();
            goto L_102124;
        }
    }
    if (c != 0x2bu) {
        if (c == 0x2du) {
            negative |= 1u << 0xa;
        } else {
            cursor -= 1u;
        }
    }
    u32 value = strtoul_core(cursor, end_out, frame->word_8, r3);
    if (end_out != 0 && *gptr<u32>(end_out) == cursor) {
        *gptr<u32>(end_out) = frame->cursor;
    }
    if ((negative & 0x400u) == 0) {
        if (s32(value) < 0) {
            u32 r0_3 = return_constant_0xaf75e8_(value);
            *gptr<u32>(r0_3) = 2;
            guest::cpu()->r[1] = frame->cursor;
            return 0x7fffffffu;
        }
    } else {
        value = 0u - value;
        if (s32(value) > 0) {
            u32 r0_4 = return_constant_0xaf75e8_(value);
            *gptr<u32>(r0_4) = 2;
            value = 2u << 0x1e;
        }
    }
    guest::cpu()->r[1] = frame->cursor;
    return value;
}

}  // namespace d_0010211c
GUEST_EXPORT_FRAMED(0x0010211d, d_0010211c::strtol, 0x40f0);  // pushes {cursor, r5, negative, end_out, lr} first, as the original

// f_001024e0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Returns 0xc.
namespace d_001024e0 {

inline constexpr guest::Function<0x002f9e18, u32(u32, u32)> do_nothing_002f9e18;

u32 return_0xc(u32 r0) {
    do_nothing_002f9e18(r0, r0);
    return 0xcu;
}

}  // namespace d_001024e0
GUEST_EXPORT_FRAMED(0x001024e1, d_001024e0::return_0xc, 0x4010);  // pushes {r4, lr} first, as the original

// f_001024fe: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// A wide character's class flags (C ctype for characters up to 0xff, with the derived classes added).
namespace d_001024fe {

inline constexpr guest::Function<0x002f7a10, u32(u32)> char_table_location;

u32 wide_char_class(u32 c, u32 r1) {
    u32 r0_3 = 0;
    u32 r1_2 = 0;
    if (c > 0xffu) {
        return 0u;
    }
    u32 r0_1 = char_table_location(c);
    u32 flags = *gptr<u8>(*gptr<u32>(r0_1) + c);
    if ((flags & 0x98u) != 0 && (flags & 1u) == 0u) {
        flags |= 1u << 0xa;
    }
    if ((flags & 0x21u << 5) != 0) {
        flags |= 1u << 0xb;
    }
    if ((flags & 0xbau) != 0) {
        flags |= 0x100u;
    }
    if ((flags & 0xbeu) != 0) {
        flags |= 1u << 9;
    }
    if ((flags & 0x20u) != 0) {
        r0_3 = (flags & 0x80u) == 0 ? flags | 0x80u : flags & ~0x20u;
    } else {
        r0_3 = flags & ~0x20u;
    }
    u32 r1_1 = r0_3 << 0x1f;
    if (r1_1 != 0) {
        r1_1 = r0_3 << 0x19;
        if (s32(r1_1) >= 0) {
            r1_2 = 1u << 0xc;
            guest::cpu()->r[1] = r1_2;
            return r0_3 | r1_2;
        }
    }
    if (c != 9u) {
        guest::cpu()->r[1] = r1_1;
        return r0_3;
    }
    r1_2 = 1u << 0xc;
    guest::cpu()->r[1] = r1_2;
    return r0_3 | r1_2;
}

}  // namespace d_001024fe
GUEST_EXPORT_FRAMED(0x001024ff, d_001024fe::wide_char_class, 0x4010);  // pushes {r4, lr} first, as the original

// f_001032ee: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// A file's error flag (C ferror).
namespace d_001032ee {

struct __attribute__((packed)) File {
    u8 unknown_0[0xc];  // (not used here)
    u32 word_c;
};
GUEST_OFFSET(File, word_c, 0xc);


u32 file_error_flag(gptr<File> file) {
    u32 flag = file->word_c & 0x80u;
    guest::cpu()->r[1] = 0x80u;
    return flag;
}

}  // namespace d_001032ee
GUEST_EXPORT(0x001032ef, d_001032ee::file_error_flag);

// f_001032f6: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Converts one wide character; -1 and errno EILSEQ when it has no multibyte form.
namespace d_001032f6 {

struct __attribute__((packed)) Local_001032f6_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_001032f6_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_001032f6_ea_1, word_4, 0x4);

inline constexpr guest::Function<0x002f7a04, u32(u32)> return_constant_0xaf75e8_;
inline constexpr guest::Function<0x002f84e9, u32(u32, u32, u32, u32)> wcrtomb;
inline constexpr guest::Function<0x002f8574, u32(u32, u32, u32)> copy_bytes_at_any_alignment;

u32 wctomb(u32 dst, u32 c, u32 r2, u32 r3) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    gptr<Local_001032f6_ea_1> ea_1 = gptr<Local_001032f6_ea_1>(frame.at(0).addr());
    ea_1->word_0 = r2;
    ea_1->word_4 = r3;
    if (r2 == 0) {
        r2 = 0u;
    }
    u32 length = wcrtomb(frame.at(0).addr(), c, r2, r3);
    u32 r0_3 = length + 1u;
    if (r0_3 == 0) {
        u32 r0_4 = return_constant_0xaf75e8_(r0_3);
        *gptr<u32>(r0_4) = 4;
    } else if (dst != 0) {
        copy_bytes_at_any_alignment(dst, frame.at(0).addr(), length);
    }
    return length;
}

}  // namespace d_001032f6
GUEST_EXPORT_FRAMED(0x001032f7, d_001032f6::wctomb, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_00103334: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Compares two strings by the locale's collation table, else plainly (C strcoll).
namespace d_00103334 {

inline constexpr guest::Function<0x002f91d4, u32(u32, u32, u32, u32)> return_constant_0xaf74c8_;
inline constexpr guest::Function<0x002fa90c, u32(u32, u32)> strcmp;

u32 strcoll(u32 a, u32 b, u32 r2, u32 r3) {
    u32 r0_3 = 0;
    u32 r2_1 = 0;
    u32 r3_2 = 0;
    u32 a_at = a;
    u32 b_at = b;
    u32 r0_1 = return_constant_0xaf74c8_(a, b, r2, r3);
    u32 locale = *gptr<u32>(r0_1);
    u32 table = *gptr<u32>(locale);
    if (table != 0) {
        b = locale + table;
        do {
            r0_3 = *gptr<u8>(a_at);
            u32 r3_1 = *gptr<u8>(b_at);
            a_at += 1u;
            b_at += 1u;
            r2_1 = *gptr<u8>(b + r0_3);
            r3_2 = *gptr<u8>(b + r3_1);
            guest::preempt();
        } while (r0_3 != 0 && r2_1 == r3_2);
        guest::cpu()->r[1] = b;
        return r2_1 - r3_2;
    }
    return strcmp(a_at, b_at);
}

}  // namespace d_00103334
GUEST_EXPORT_FRAMED(0x00103335, d_00103334::strcoll, 0x4070);  // pushes {a_at, b_at, r6, lr} first, as the original

// f_0010369c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Forwards to 00103374.
namespace d_0010369c {

inline constexpr guest::Function<0x00103375, u32(u32, u32, u32, u32)> format_float_f;

u32 call_00103374() {
    return format_float_f(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0010369c
GUEST_EXPORT(0x0010369c, d_0010369c::call_00103374);

// f_001036a0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Forwards to 001036ac.
namespace d_001036a0 {

inline constexpr guest::Function<0x001036ad, u32(u32, u32, u32, u32)> format_float_e;

u32 call_001036ac(u32 r0) {
    return format_float_e(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_001036a0
GUEST_EXPORT(0x001036a0, d_001036a0::call_001036ac);

// f_001059b4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Counts an item sale for the badges: the town's featured item adds 3 to its counter (part to the stock counter for
// type 4), other items add 2 or 3 to the general counter.
namespace d_001059b4 {

inline constexpr guest::Function<0x002f777c, u32(u32)> do_nothing_002f777c;
inline constexpr guest::Function<0x002fb328, u32(u32)> get_save_data;
inline constexpr guest::Function<0x002fc20c, u32(u32, u32, u32, u32)> construct_empty_item;
inline constexpr guest::Function<0x002fc934, u32(u32, u32)> Item__copy_b;
inline constexpr guest::Function<0x002fcb84, u32(u32, u32)> Item__has_number;
inline constexpr guest::Function<0x002fccdc, u32(u32)> indexed_item_type;
inline constexpr guest::Function<0x002fd068, u32(u32)> get_counter_block;
inline constexpr guest::Function<0x002fe4e0, u32(u32, u32)> get_indexed_item;
inline constexpr guest::Function<0x002fe53c, u32(u32)> Item__is_bell_bag;
inline constexpr guest::Function<0x002fe56c, u32(u32)> member_address_0x8__002fe56c;
inline constexpr guest::Function<0x002fe574, u32(u32, u32)> Item__same_number_as;
inline constexpr guest::Function<0x002fe594, u32(u32)> flagged_value_state;
inline constexpr guest::Function<0x002fe5c8, u32(u32, u32)> CounterObject__add_counter_140;
inline constexpr guest::Function<0x002fe618, u32(u32, u32)> CounterObject__add_counter_12c;
inline constexpr guest::Function<0x002fe668, u32(u32, u32)> CounterObject154__add_counter;

void count_item_sold_badges(u32 r0, u32 r1) {
    guest::StackFrame frame(0xc);  // the original's stack frame
    construct_empty_item(frame.at(0).addr(), r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 indexed_item = get_indexed_item(r0, frame.at(0).addr());
    if (indexed_item != 0) {
        indexed_item = Item__is_bell_bag(frame.at(0).addr());
        if (indexed_item == 0) {
            u32 save_data = get_save_data(indexed_item);
            u32 r0_6 = member_address_0x8__002fe56c(save_data + 0x62232u);
            Item__copy_b(frame.at(4).addr(), r0_6);
            if (Item__same_number_as(frame.at(4).addr(), frame.at(0).addr()) != 0) {
                u32 r4_1 = 3u;
                indexed_item = indexed_item_type(r0);
                if (indexed_item == 4u) {
                    indexed_item = flagged_value_state(r0);
                    u32 r5_1 = indexed_item;
                    if (s32(indexed_item) > 0) {
                        u32 counter_block = get_counter_block(indexed_item);
                        indexed_item = CounterObject__add_counter_140(counter_block, r5_1);
                        r4_1 -= r5_1;
                        if (s32(r4_1) <= 0) {
                            goto L_105a50;
                        }
                    }
                }
                indexed_item = get_counter_block(indexed_item);
                CounterObject__add_counter_12c(indexed_item, r4_1);
            } else {
                u32 r4_2 = 3u;
                u32 r0_11 = Item__has_number(r0, 0x35u);
                if (r0_11 == 0) {
                    r0_11 = Item__has_number(r0, 0x30u);
                    if (r0_11 != 0) {
                        r4_2 = 2u;
                    }
                } else {
                    r4_2 = 2u;
                }
                indexed_item = get_counter_block(r0_11);
                CounterObject154__add_counter(indexed_item, r4_2);
            }
L_105a50:;
            do_nothing_002f777c(indexed_item);
        }
    }
    do_nothing_002f777c(indexed_item);
}

}  // namespace d_001059b4
GUEST_EXPORT_FRAMED(0x001059b5, d_001059b4::count_item_sold_badges, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_00105d0c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Picks a random item into `out`, from group 5 (35%), 3 (20%), 4 (20%), 6 (15%) or kind 0x33 (10%), never `exclude`.
namespace d_00105d0c {

inline constexpr guest::Function<0x002fc288, u32(u32, u32, u32, u32)> ItemBitSet__clear_and_return;
inline constexpr guest::Function<0x002fc8fc, u32(u32)> do_nothing_002fc8fc;
inline constexpr guest::Function<0x002fcaf4, u32(u32)> Item__is_empty;
inline constexpr guest::Function<0x002fe9c8, u32(u32, u32, u32, u32)> ItemSet__add_group_without_flags;
inline constexpr guest::Function<0x002fe9dc, u32(u32, u32)> clear_bit_keeping_one;
inline constexpr guest::Function<0x002fea2c, u32(u32, u32)> pick_random_item;
inline constexpr guest::Function<0x002ff6f4, u32(u32)> random_below_entry;

void pick_random_item_from_groups(u32 out, u32 exclude, u32 r2, u32 r3) {
    guest::StackFrame frame(0x2ec);  // the original's stack frame
    ItemBitSet__clear_and_return(frame.at(0).addr(), exclude, r2, r3);
    u32 roll = random_below_entry(0x64u);
    if (s32(roll) < 0x23) {
        ItemSet__add_group_without_flags(frame.at(0).addr(), 5u, 1u, 0u);
    } else if (s32(roll) < 0x37) {
        ItemSet__add_group_without_flags(frame.at(0).addr(), 3u, 1u, 0u);
    } else if (s32(roll) < 0x4b) {
        ItemSet__add_group_without_flags(frame.at(0).addr(), 4u, 1u, 0u);
    } else if (s32(roll) < 0x5a) {
        ItemSet__add_group_without_flags(frame.at(0).addr(), 6u, 0xau, 0u);
    } else {
        ItemSet__add_group_without_flags(frame.at(0).addr(), 0x33u, 0u, 0u);
    }
    u32 is_empty = Item__is_empty(exclude);
    if (is_empty == 0) {
        clear_bit_keeping_one(frame.at(0).addr(), exclude);
    }
    pick_random_item(out, frame.at(0).addr());
    do_nothing_002fc8fc(out);
}

}  // namespace d_00105d0c
GUEST_EXPORT_FRAMED(0x00105d0d, d_00105d0c::pick_random_item_from_groups, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_00105f54: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Places the items of a list in the map cells (set C items as they are).
namespace d_00105f54 {

struct __attribute__((packed)) Local_00105f54_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u32 word_18;
    u32 word_1c;
};
GUEST_OFFSET(Local_00105f54_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_00105f54_ea_1, word_4, 0x4);
GUEST_OFFSET(Local_00105f54_ea_1, word_8, 0x8);
GUEST_OFFSET(Local_00105f54_ea_1, word_c, 0xc);
GUEST_OFFSET(Local_00105f54_ea_1, word_10, 0x10);
GUEST_OFFSET(Local_00105f54_ea_1, word_14, 0x14);
GUEST_OFFSET(Local_00105f54_ea_1, word_18, 0x18);
GUEST_OFFSET(Local_00105f54_ea_1, word_1c, 0x1c);

inline constexpr guest::Function<0x002f777c, u32(u32)> do_nothing_002f777c;
inline constexpr guest::Function<0x002fcb84, u32(u32, u32, u32, u32)> Item__has_number;
inline constexpr guest::Function<0x002fcbb0, u32(u32, u32, u32, u32)> construct_item;
inline constexpr guest::Function<0x002fcc14, u32(u32, u32, u32, u32)> set_cell_item;
inline constexpr guest::Function<0x002ff6a4, u32(u32)> Item__is_in_id_set_c;
inline constexpr guest::Function<0x00303134, u32(u32, u32, u32, u32)> cell_at_00770364_veneer;

void place_items_in_cells(u32 block, u32 r1, u32 r2, u32 r3) {
    u32 i = guest::cpu()->r[4];
    u32 j = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    gptr<Local_00105f54_ea_1> ea_1 = gptr<Local_00105f54_ea_1>(r13 - 0x20);
    ea_1->word_0 = block;
    ea_1->word_4 = r1;
    ea_1->word_8 = r2;
    ea_1->word_c = i;
    ea_1->word_10 = j;
    ea_1->word_14 = r6;
    ea_1->word_18 = r7;
    ea_1->word_1c = r14;
    r13 = ea_1.addr() - 8u;
    j = 0u;
    r7 = block;
    r6 = r2;
    do {
        i = 0u;
        do {
            guest::cpu()->r[13] = r13;
            u32 r0_1 = cell_at_00770364_veneer(r7, i, j, r3);
            *gptr<u32>(r13) = r0_1;
            guest::cpu()->r[13] = r13;
            u32 r0_2 = Item__is_in_id_set_c(r0_1);
            r3 = guest::cpu()->r[3];
            if (r0_2 != 0) {
                u32 r1_3 = *gptr<u32>(r13 + 0xcu);
                u32 r0_3 = r13;
                guest::cpu()->r[13] = r13;
                construct_item(r0_3, r1_3, guest::cpu()->r[2], r3);
                guest::cpu()->r[13] = r13;
                set_cell_item(r7, r0_3, i, j);
                guest::cpu()->r[13] = r13;
                do_nothing_002f777c(r13);
                r3 = guest::cpu()->r[3];
            } else if (r6 != 0) {
                u32 r0_5 = *gptr<u32>(r13);
                guest::cpu()->r[13] = r13;
                u32 r0_6 = Item__has_number(r0_5, 0x30u, guest::cpu()->r[2], r3);
                r3 = guest::cpu()->r[3];
                if (r0_6 != 0) {
                    u32 r0_7 = r13;
                    guest::cpu()->r[13] = r13;
                    construct_item(r0_7, 0x35u, guest::cpu()->r[2], r3);
                    guest::cpu()->r[13] = r13;
                    set_cell_item(r7, r0_7, i, j);
                    guest::cpu()->r[13] = r13;
                    do_nothing_002f777c(r13);
                    r3 = guest::cpu()->r[3];
                }
            }
            i += 1u;
            guest::preempt();
        } while (i < 0x10u);
        j += 1u;
        guest::preempt();
    } while (j < 0x10u);
    r13 += 0x14u;
    u32 r4_1 = *gptr<u32>(r13);
    u32 r5_1 = *gptr<u32>(r13 + 4);
    u32 r6_1 = *gptr<u32>(r13 + 8);
    u32 r7_1 = *gptr<u32>(r13 + 0xc);
    u32 tpc_1 = *gptr<u32>(r13 + 0x10);
    r13 += 0x14;
    guest::cpu()->r[4] = r4_1;
    guest::cpu()->r[5] = r5_1;
    guest::cpu()->r[6] = r6_1;
    guest::cpu()->r[7] = r7_1;
    guest::cpu()->r[13] = r13;
}

}  // namespace d_00105f54
GUEST_EXPORT(0x00105f55, d_00105f54::place_items_in_cells);

// f_00106318: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The byte of the current slot (below 4) from the table at 0x853e36, or 0.
namespace d_00106318 {

inline constexpr guest::Function<0x002ff8b0, u32(u32)> player_slot_byte;

u32 current_slot_byte_853e36() {
    u32 slot_byte = player_slot_byte(4u);
    if (slot_byte >= 4u) {
        return 0u;
    }
    return *gptr<u8>(slot_byte + 0x853e36u);
}

}  // namespace d_00106318
GUEST_EXPORT_FRAMED(0x00106319, d_00106318::current_slot_byte_853e36, 0x4010);  // pushes {r4, lr} first, as the original

// f_001063bc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Looks the key up in a pointer list.
namespace d_001063bc {

struct __attribute__((packed)) Local_001063bc_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
};
GUEST_OFFSET(Local_001063bc_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_001063bc_ea_1, word_4, 0x4);
GUEST_OFFSET(Local_001063bc_ea_1, word_8, 0x8);
GUEST_OFFSET(Local_001063bc_ea_1, word_c, 0xc);
GUEST_OFFSET(Local_001063bc_ea_1, word_10, 0x10);
GUEST_OFFSET(Local_001063bc_ea_1, word_14, 0x14);

inline constexpr guest::Function<0x002ffb15, u32(u32)> find_in_pointer_list;

struct __attribute__((packed)) FindInPointerListVeneerFrame {
    u8 unknown_0[0x10];  // (not read or written by name)
    u32 word_10;
    u32 tpc;
};
GUEST_OFFSET(FindInPointerListVeneerFrame, word_10, 0x10);
GUEST_OFFSET(FindInPointerListVeneerFrame, tpc, 0x14);
GUEST_SIZE(FindInPointerListVeneerFrame, 0x18);

u32 find_in_pointer_list_veneer(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<FindInPointerListVeneerFrame> frame;  // the original's stack frame
    u32 r4 = guest::cpu()->r[4];
    u32 r14 = guest::cpu()->r[14];
    gptr<Local_001063bc_ea_1> ea_1 = gptr<Local_001063bc_ea_1>(frame.at(0).addr());
    ea_1->word_0 = r0;
    ea_1->word_4 = r1;
    ea_1->word_8 = r2;
    ea_1->word_c = r3;
    ea_1->word_10 = r4;
    ea_1->word_14 = r14;
    find_in_pointer_list(r0);
    u32 r4_1 = frame->word_10;
    u32 tpc_1 = frame->tpc;
    guest::cpu()->r[4] = r4_1;
    return r3;
}

}  // namespace d_001063bc
GUEST_EXPORT(0x001063bd, d_001063bc::find_in_pointer_list_veneer);

// f_001063dc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Allocates and frees one byte; returns -1.
namespace d_001063dc {

struct __attribute__((packed)) Local_001063dc_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_001063dc_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_001063dc_ea_1, word_4, 0x4);

inline constexpr guest::Function<0x002ffb48, u32(u32, u32, u32, u32)> allocate_memory;
inline constexpr guest::Function<0x002ffb64, u32(u32)> free_memory;

u32 allocate_and_free_1(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    gptr<Local_001063dc_ea_1> ea_1 = gptr<Local_001063dc_ea_1>(frame.at(0).addr());
    ea_1->word_0 = r0;
    ea_1->word_4 = r1;
    free_memory(allocate_memory(1u, r1, r2, r3));
    return ~0u;
}

}  // namespace d_001063dc
GUEST_EXPORT_FRAMED(0x001063dd, d_001063dc::allocate_and_free_1, 0x4010);  // pushes {r4, lr} first, as the original

// f_00106940: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Frees the block `pointer` names in the pointer list and closes the gap.
namespace d_00106940 {

inline constexpr u32 pointer_list_address = 0x00981fd8u;
inline constexpr guest::Function<0x002ffb15, u32(u32, u32, u32, u32)> find_in_pointer_list;
inline constexpr guest::Function<0x002ffb64, u32(u32, u32)> free_memory;

void pointer_list_remove(u32 pointer, u32 r1, u32 r2, u32 r3) {
    u32 index = find_in_pointer_list(pointer, r1, r2, r3);
    u32 list = pointer_list_address;
    if (*gptr<u32>(list + 4u) > index) {
        u32 r1_1 = index << 2;
        free_memory(*gptr<u32>(*gptr<u32>(list) + r1_1), r1_1);
        pointer = *gptr<u32>(list);
        u32 r4 = index + 1u;
        do {
            u32 r1_2 = r4 << 2;
            u32 r2_2 = *gptr<u32>(pointer + r1_2);
            if (r2_2 == 0 || *gptr<u32>(list + 4u) <= r4) {
                if (*gptr<u32>(list + 4u) > r4) {
                    *gptr<u32>(pointer + (r4 << 2)) = 0;
                }
                return;
            }
            r4 += 1u;
            *gptr<u32>(pointer + (r1_2 - 4u)) = r2_2;
            guest::preempt();
        } while (1);
    }
}

}  // namespace d_00106940
GUEST_EXPORT_FRAMED(0x00106941, d_00106940::pointer_list_remove, 0x4070);  // pushes {r4, list, r6, lr} first, as the original

// f_00106998: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Updates the shop stock for the day (new items by date and the stock groups).
namespace d_00106998 {

struct __attribute__((packed)) Local_00106998_r12 {
    u8 unknown_0[0x1c];  // (not used here)
    u32 word_1c;
};
GUEST_OFFSET(Local_00106998_r12, word_1c, 0x1c);

inline constexpr u32 empty_item_address = 0x0095bfdcu;
inline guest::global<u8, 0x008c9f1c> empty_string;
inline constexpr guest::Function<0x001b5d6c, u32(u32, u32, u32, u32)> store_u32_argument_at_0_1b5d6c;
inline constexpr guest::Function<0x002f6e64, u32(u32, u32)> construct_safe_string;
inline constexpr guest::Function<0x002f6e8c, u32(u32)> do_nothing_002f6e8c;
inline constexpr guest::Function<0x002fb328, u32(u32)> get_save_data;
inline constexpr guest::Function<0x002fc288, u32(u32, u32, u32, u32)> ItemBitSet__clear_and_return;
inline constexpr guest::Function<0x002fc8e8, u32(u32, u32, u32, u32)> Item__copy;
inline constexpr guest::Function<0x002fc8fc, u32(u32)> do_nothing_002fc8fc;
inline constexpr guest::Function<0x002fe9c8, u32(u32, u32, u32, u32)> ItemSet__add_group_without_flags;
inline constexpr guest::Function<0x002ff6f8, u32(u32, u32, u32, u32)> random_below;
inline constexpr guest::Function<0x003002f0, u32(u32, u32, u32, u32)> Date__is_set;
inline constexpr guest::Function<0x0030031c, u32(u32, u32)> Date__is_today;
inline constexpr guest::Function<0x00300458, u32(u32, u32)> current_date;
inline constexpr guest::Function<0x003004c4, u32(u32, u32, u32)> pick_distinct_items;
inline constexpr guest::Function<0x00300634, u32(u32, u32)> store_mode_bytes;
inline constexpr guest::Function<0x00300650, u32(u32)> day_start_by_clock_mode;
inline constexpr guest::Function<0x00300768, u32(u32, u32)> Iterator__equals;
inline constexpr guest::Function<0x003007fc, u32(u32)> do_nothing_003007fc;
inline constexpr guest::Function<0x003036c0, u32(u32, u32, u32, u32)> thunk_0075db08;
inline constexpr guest::Function<0x003036c4, u32(u32)> thunk_0070c098;
inline constexpr guest::Function<0x003036c8, u32(u32, u32)> sead__BufferedSafeStringBase_char___BufferedSafeStringBase_003036c8;
inline constexpr guest::Function<0x003036cc, u32(u32, u32)> thunk_00827280;
inline constexpr guest::Function<0x004ddc94, u32(u32, u32, u32, u32)> Villagers__refresh_records;

struct __attribute__((packed)) UpdateDailyShopStockFrame {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u8 unknown_c[0x8];  // (not read or written by name)
    u32 word_14;
    u8 unknown_18[0x2d4];  // (not read or written by name)
};
GUEST_OFFSET(UpdateDailyShopStockFrame, word_0, 0x0);
GUEST_OFFSET(UpdateDailyShopStockFrame, word_4, 0x4);
GUEST_OFFSET(UpdateDailyShopStockFrame, word_8, 0x8);
GUEST_OFFSET(UpdateDailyShopStockFrame, word_14, 0x14);
GUEST_SIZE(UpdateDailyShopStockFrame, 0x2ec);

void update_daily_shop_stock(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<UpdateDailyShopStockFrame> frame;  // the original's stack frame
    gptr<Local_00106998_r12> r12 = gptr<Local_00106998_r12>(0u);
    u32 r4 = r0;
    u32 date = r0 + 0x18u;
    if (Date__is_set(date, r1, r2, r3) != 0) {
        u32 r0_3 = Date__is_today(date, 1u);
        r1 = guest::cpu()->r[1];
        if (r0_3 != 0) {
            return;
        }
    }
    u32 from_6am = 1u;
    current_date(date, from_6am);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    u32 i = 0u;
    u32 r7 = i;
    do {
        Item__copy((i << 2) + r4, empty_item_address, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        u32 r0_5 = r4 + i;
        i += 1u;
        *gptr<u8>(r0_5 + 8u) = u8(r7);
        guest::preempt();
    } while (s32(i) < 2);
    ItemBitSet__clear_and_return(frame.at(0).addr(), guest::cpu()->r[1], r2, r3);
    ItemSet__add_group_without_flags(frame.at(0).addr(), 5u, 0xb4u, 0u);
    pick_distinct_items(r4, 2u, frame.at(0).addr());
    do_nothing_002fc8fc(frame.at(0).addr());
    r1 = guest::cpu()->r[1];
    if (from_6am != 0) {
        store_mode_bytes(0u, 1u);
        *gptr<u16>(r4 + 0xeu) = 0xffff;
        *gptr<u16>(r4 + 0xcu) = 0xffff;
        u32 save_data = get_save_data(day_start_by_clock_mode(frame.at(0).addr()));
        u32 r0_13 = thunk_0075db08(save_data + 0x6e274u, frame->word_0, frame->word_4, frame->word_8);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        frame->word_14 = r0_13;
        i = 1u << 0xc;
L_106a2c:;
        u32 r0_14 = frame.at(0x20).addr();
        store_u32_argument_at_0_1b5d6c(r0_14, i, r2, r3);
        u32 r0_15 = thunk_0070c098(r0_14);
        u32 r0_16 = frame.at(0x18).addr();
        construct_safe_string(r0_16, r0_15);
        sead__BufferedSafeStringBase_char___BufferedSafeStringBase_003036c8(frame.at(0).addr(), r0_16);
        do_nothing_002f6e8c(frame.at(0x18).addr());
        u32 r1_8 = frame->word_8;
        if (s32(r1_8) <= 3) {
            thunk_00827280(frame.at(0).addr(), r1_8);
        } else {
            *gptr<u8>(frame->word_4 + 3u) = *empty_string;
        }
        u32 r1_9 = frame->word_14;
        u32 r0_20 = frame.at(0x18).addr();
        construct_safe_string(r0_20, r1_9);
        u32 r0_22 = Iterator__equals(frame.at(0).addr(), r0_20);
        do_nothing_002f6e8c(frame.at(0x18).addr());
        if (r0_22 != 0) {
            *gptr<u16>(r4 + 0xcu) = u16(i);
            do_nothing_003007fc(frame.at(0).addr());
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
        } else {
            do_nothing_003007fc(frame.at(0).addr());
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            i += 1u;
            if (s32(i) < s32(0x1010u)) {
                guest::preempt();
                goto L_106a2c;
            }
        }
        Villagers__refresh_records(1u, guest::cpu()->r[1], r2, r3);
        r1 = guest::cpu()->r[1];
        if (from_6am == 0) {
            return;
        }
        r0 = 0x88f3e8u;
        r2 = 0u;
        r3 = 3u;
        r12 = gptr<Local_00106998_r12>(r0);
        i = *gptr<u32>(r0 + 4u);
        r1 = *gptr<u32>(r0);
        do {
            r0 += 8u;
            r1 += i;
            i = *gptr<u32>(r0 + 4u);
            r2 += *gptr<u32>(r0);
            r3 -= 1u;
            guest::preempt();
        } while (r3 != 0);
        u32 r1_13 = r12->word_1c;
        u32 random = random_below(r1_13 + (r1 + r2), r1_13, r2, r3);
        r1 = 0u;
        r3 = random;
        r2 = 0x88f3e8u;
        *gptr<u8>(r4 + 0x14u) = 7;
        r0 = r1;
        goto L_106ad8;
    }
    guest::cpu()->r[1] = r1;
    return;
L_106ad8:;
    r1 = *gptr<u32>(r2) + r1;
    if (s32(r3) < s32(r1)) {
        *gptr<u8>(r4 + 0x14u) = u8(r0);
    } else {
        r2 += 4u;
        r0 = uxtb(r0 + 1u);
        if (r0 < 8u) {
            guest::preempt();
            goto L_106ad8;
        }
    }
    if (from_6am != 0) {
        r0 = 0x88f408u;
        r2 = 0u;
        r3 = 3u;
        r12 = gptr<Local_00106998_r12>(r0);
        i = *gptr<u32>(r0 + 4u);
        r1 = *gptr<u32>(r0);
        do {
            r0 += 8u;
            r1 += i;
            i = *gptr<u32>(r0 + 4u);
            r2 += *gptr<u32>(r0);
            r3 -= 1u;
            guest::preempt();
        } while (r3 != 0);
        u32 r1_14 = r12->word_1c;
        u32 random_2 = random_below(r1_14 + (r1 + r2), r1_14, r2, r3);
        r1 = 0u;
        r3 = random_2;
        r2 = 0x88f408u;
        *gptr<u8>(r4 + 0x15u) = 7;
        r0 = r1;
L_106b24:;
        r1 = *gptr<u32>(r2) + r1;
        if (s32(r3) < s32(r1)) {
            *gptr<u8>(r4 + 0x15u) = u8(r0);
        } else {
            r2 += 4u;
            r0 = uxtb(r0 + 1u);
            if (r0 < 8u) {
                guest::preempt();
                goto L_106b24;
            }
        }
        if (from_6am != 0) {
            r7 = 0x88f428u;
            r2 = 0u;
            r3 = 3u;
            r0 = r7;
            from_6am = *gptr<u32>(r7 + 4u);
            r1 = *gptr<u32>(r7);
            do {
                r0 += 8u;
                r1 += from_6am;
                from_6am = *gptr<u32>(r0 + 4u);
                r2 += *gptr<u32>(r0);
                r3 -= 1u;
                guest::preempt();
            } while (r3 != 0);
            u32 r1_15 = *gptr<u32>(r7 + 0x1cu);
            u32 random_3 = random_below(r1_15 + (r1 + r2), r1_15, r2, r3);
            r1 = 0u;
            r3 = random_3;
            r2 = 0x88f428u;
            *gptr<u8>(r4 + 0x16u) = 7;
            r0 = r1;
L_106b6e:;
            r1 = *gptr<u32>(r2) + r1;
            if (s32(r3) >= s32(r1)) {
                r2 += 4u;
                r0 = uxtb(r0 + 1u);
                if (r0 >= 8u) {
                    guest::cpu()->r[1] = r1;
                    return;
                }
                guest::preempt();
                goto L_106b6e;
            }
            *gptr<u8>(r4 + 0x16u) = u8(r0);
        }
    }
    guest::cpu()->r[1] = r1;
}

}  // namespace d_00106998
GUEST_EXPORT_FRAMED(0x00106999, d_00106998::update_daily_shop_stock, 0x40f0);  // pushes {r4, from_6am, i, r7, lr} first, as the original

// f_00106bb0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Clears a record with two items and their flag bytes, and its time part (+0x18).
namespace d_00106bb0 {

struct __attribute__((packed)) TwoItemRecord {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u32 word_18;
};
GUEST_OFFSET(TwoItemRecord, word_0, 0x0);
GUEST_OFFSET(TwoItemRecord, word_4, 0x4);
GUEST_OFFSET(TwoItemRecord, word_8, 0x8);
GUEST_OFFSET(TwoItemRecord, word_c, 0xc);
GUEST_OFFSET(TwoItemRecord, word_10, 0x10);
GUEST_OFFSET(TwoItemRecord, word_14, 0x14);
GUEST_OFFSET(TwoItemRecord, word_18, 0x18);

inline constexpr u32 empty_item_address = 0x0095bfdcu;
inline constexpr guest::Function<0x002fc8e8, u32(u32, u32, u32, u32)> Item__copy;
inline constexpr guest::Function<0x00300800, u32(u32)> store_constants_300800_00300800;

void TwoItemRecord__clear(gptr<TwoItemRecord> two_item_record) {
    u32 r0 = two_item_record.addr();
    u32 r6 = 0u;
    two_item_record->word_0 = r6;
    two_item_record->word_4 = r6;
    two_item_record->word_8 = r6;
    two_item_record->word_c = r6;
    two_item_record->word_10 = r6;
    two_item_record->word_14 = r6;
    u32 r4 = r0;
    u32 i = r6;
    two_item_record->word_18 = r6;
    do {
        Item__copy((i << 2) + r4, empty_item_address, guest::cpu()->r[2], guest::cpu()->r[3]);
        u32 r0_2 = r4 + i;
        i += 1u;
        *gptr<u8>(r0_2 + 8u) = u8(r6);
        guest::preempt();
    } while (s32(i) < 2);
    *gptr<u8>(r4 + 0x14u) = u8(r6);
    *gptr<u8>(r4 + 0x15u) = u8(r6);
    store_constants_300800_00300800(r4 + 0x18u);
}

}  // namespace d_00106bb0
GUEST_EXPORT_FRAMED(0x00106bb1, d_00106bb0::TwoItemRecord__clear, 0x4070);  // pushes {r4, i, r6, lr} first, as the original

// f_00106bfc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Returns its object.
namespace d_00106bfc {

inline constexpr guest::Function<0x00300815, u32(u32)> do_nothing_00300814;

u32 do_nothing_00300814_return_self() {
    do_nothing_00300814(guest::cpu()->r[0]);
    return guest::cpu()->r[0];
}

}  // namespace d_00106bfc
GUEST_EXPORT_FRAMED(0x00106bfd, d_00106bfc::do_nothing_00300814_return_self, 0x4010);  // pushes {r4, lr} first, as the original

// f_00106c0c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Returns its object.
namespace d_00106c0c {

inline constexpr guest::Function<0x00300815, u32(u32)> do_nothing_00300814;

u32 do_nothing_00300814_return_self_2() {
    do_nothing_00300814(guest::cpu()->r[0]);
    return guest::cpu()->r[0];
}

}  // namespace d_00106c0c
GUEST_EXPORT_FRAMED(0x00106c0d, d_00106c0c::do_nothing_00300814_return_self_2, 0x4010);  // pushes {r4, lr} first, as the original

// f_00106da4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Scans the map cells for items of an indexed type (by terrain), collecting them.
namespace d_00106da4 {

struct __attribute__((packed)) Local_00106da4_ea_1 {
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
GUEST_OFFSET(Local_00106da4_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_00106da4_ea_1, word_4, 0x4);
GUEST_OFFSET(Local_00106da4_ea_1, word_8, 0x8);
GUEST_OFFSET(Local_00106da4_ea_1, word_c, 0xc);
GUEST_OFFSET(Local_00106da4_ea_1, word_10, 0x10);
GUEST_OFFSET(Local_00106da4_ea_1, word_14, 0x14);
GUEST_OFFSET(Local_00106da4_ea_1, word_18, 0x18);
GUEST_OFFSET(Local_00106da4_ea_1, word_1c, 0x1c);
GUEST_OFFSET(Local_00106da4_ea_1, word_20, 0x20);

struct __attribute__((packed)) Local_00106da4_r1_4 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u16 half_10;
};
GUEST_OFFSET(Local_00106da4_r1_4, word_0, 0x0);
GUEST_OFFSET(Local_00106da4_r1_4, word_4, 0x4);
GUEST_OFFSET(Local_00106da4_r1_4, word_8, 0x8);
GUEST_OFFSET(Local_00106da4_r1_4, word_c, 0xc);
GUEST_OFFSET(Local_00106da4_r1_4, half_10, 0x10);

inline guest::global<u8, 0x00952b9d> map_default_kind;
inline constexpr guest::Function<0x002fc8e8, u32(u32, u32)> Item__copy;
inline constexpr guest::Function<0x002fccdc, u32(u32, u32)> indexed_item_type;
inline constexpr guest::Function<0x002feb00, u32(u32, u32, u32, u32)> GridMap__process_world_position;
inline constexpr guest::Function<0x00300a74, u32(u32, u32, u32, u32)> terrain_byte_db1c_unless_blocked;

void scan_map_for_items(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 i = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    u32 r1_1 = 0;
    gptr<Local_00106da4_ea_1> ea_1 = gptr<Local_00106da4_ea_1>(r13 - 0x24);
    ea_1->word_0 = r0;
    ea_1->word_4 = r1;
    ea_1->word_8 = r2;
    ea_1->word_c = r3;
    ea_1->word_10 = r4;
    ea_1->word_14 = i;
    ea_1->word_18 = r6;
    ea_1->word_1c = r7;
    ea_1->word_20 = r14;
    r13 = ea_1.addr() - 0x14u;
    i = 0u;
    r6 = r1;
    *gptr<u32>(r13 + 4u) = *gptr<u32>(r13 + 0x14u) + 0x180u;
    do {
        u32 r0_1 = i << 2;
        u32 r4_1 = *gptr<u32>(r6 + 8u) + *gptr<u32>(r0_1 + 0x8657acu);
        u32 r0_2 = *gptr<u32>(r6 + 0xcu) + *gptr<u32>(r0_1 + 0x8657ccu);
        r1_1 = *gptr<u32>(r13 + 0x1cu);
        *gptr<u32>(r13) = r0_2;
        if (r4_1 - 0x10u < 0x50u && r0_2 >= 0x10u && r0_2 < 0x50u) {
            u32 r0_3 = (r4_1 - 0x10u >> 4) + (r0_2 + (r0_2 << 2)) - 0x50u;
            u32 r3_1 = r4_1 & 0xfu;
            *gptr<u32>(r13 + 0xcu) = r0_3;
            *gptr<u32>(r13 + 8u) = r3_1;
            r1_1 = gptr<u16>(r1_1)[r0_3];
            u32 r0_4 = lsl_r(1u, r3_1 & 0xff);
            *gptr<u32>(r13 + 0x10u) = r0_4;
            if ((r1_1 & r0_4) != 0) {
                u32 r1_2 = *gptr<u32>(r13);
                u32 r2_2 = *map_default_kind;
                guest::cpu()->r[13] = r13;
                u32 r0_5 = terrain_byte_db1c_unless_blocked(r4_1, r1_2, r2_2, r3_1);
                u32 r1_3 = *gptr<u32>(r6 + 0xcu);
                u32 r0_6 = *gptr<u32>(r6 + 8u);
                u32 r2_3 = *map_default_kind;
                guest::cpu()->r[13] = r13;
                u32 r0_7 = terrain_byte_db1c_unless_blocked(r0_6, r1_3, r2_3, guest::cpu()->r[3]);
                r1_1 = guest::cpu()->r[1];
                if (r0_5 == r0_7) {
                    u32 r2_4 = *gptr<u32>(r13);
                    u32 r0_8 = *gptr<u32>(r13 + 0x20u);
                    guest::cpu()->r[13] = r13;
                    u32 item = GridMap__process_world_position(r0_8, r4_1, r2_4, 0u);
                    r1_1 = guest::cpu()->r[1];
                    if (item != 0) {
                        guest::cpu()->r[13] = r13;
                        r1_1 = indexed_item_type(item, r1_1);
                        if (r1_1 == *gptr<u32>(r13 + 0x38u)) {
                            u32 r0_11 = (*gptr<u32>(*gptr<u32>(r13 + 4u)) << 2) + *gptr<u32>(r13 + 0x14u) + 0x140u;
                            guest::cpu()->r[13] = r13;
                            Item__copy(r0_11, item);
                            gptr<Local_00106da4_r1_4> r1_4 = gptr<Local_00106da4_r1_4>(*gptr<u32>(*gptr<u32>(r13 + 4u)) * 0x14u + *gptr<u32>(r13 + 0x14u));
                            u32 r0_12 = *gptr<u32>(r13);
                            r1_4->word_8 = r4_1;
                            r1_4->word_c = r0_12;
                            r1_4->word_4 = *gptr<u32>(r13 + 8u);
                            r1_4->word_0 = *gptr<u32>(r13 + 0xcu);
                            r1_4->half_10 = u16(*gptr<u32>(r13 + 0x10u));
                            r1_1 = *gptr<u32>(r13 + 4u);
                            *gptr<u32>(r1_1) = *gptr<u32>(*gptr<u32>(r13 + 4u)) + 1u;
                        }
                    }
                }
            }
        }
        i += 1u;
        guest::preempt();
    } while (i < 8u);
    r13 += 0x24u;
    u32 r4_2 = *gptr<u32>(r13);
    u32 r5_1 = *gptr<u32>(r13 + 4);
    u32 r6_1 = *gptr<u32>(r13 + 8);
    u32 r7_2 = *gptr<u32>(r13 + 0xc);
    u32 tpc_1 = *gptr<u32>(r13 + 0x10);
    r13 += 0x14;
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->r[4] = r4_2;
    guest::cpu()->r[5] = r5_1;
    guest::cpu()->r[6] = r6_1;
    guest::cpu()->r[7] = r7_2;
    guest::cpu()->r[13] = r13;
}

}  // namespace d_00106da4
GUEST_EXPORT(0x00106da5, d_00106da4::scan_map_for_items);

// f_00107538: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Clears the bulletin-board update state (0x95c210).
namespace d_00107538 {

inline guest::global<u32, 0x0095c210> bbs_update_state;

void clear_bbs_update_state() {
    *bbs_update_state = 0;
}

}  // namespace d_00107538
GUEST_EXPORT(0x00107539, d_00107538::clear_bbs_update_state);

// f_00107544: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Removes the bulletin-board notices older than their dates, moving the rest down.
namespace d_00107544 {

struct __attribute__((packed)) Local_00107544_r0_3 {
    u16 year;
    u8 month;
    u8 day;
};
GUEST_OFFSET(Local_00107544_r0_3, year, 0x0);
GUEST_OFFSET(Local_00107544_r0_3, month, 0x2);
GUEST_OFFSET(Local_00107544_r0_3, day, 0x3);

inline constexpr u32 bbs_update_state_address = 0x0095c210u;
inline guest::global<u32, 0x0095c210> bbs_update_state;
inline constexpr guest::Function<0x002f8574, u32(u32, u32, u32)> copy_bytes_at_any_alignment;
inline constexpr guest::Function<0x003013c1, u32(u32, u32, u32, u32)> BbsNotice__clear;
inline constexpr guest::Function<0x00301400, u32(u32, u32, u32, u32)> Date__compare;

struct __attribute__((packed)) BbsNoticesExpireOldFrame {
    u32 word_0;
    u32 bbs_notices;
    u32 res;
    u32 word_c;
    u32 word_10;
    u8 unknown_14[0x1b0];  // (not read or written by name)
};
GUEST_OFFSET(BbsNoticesExpireOldFrame, word_0, 0x0);
GUEST_OFFSET(BbsNoticesExpireOldFrame, bbs_notices, 0x4);
GUEST_OFFSET(BbsNoticesExpireOldFrame, res, 0x8);
GUEST_OFFSET(BbsNoticesExpireOldFrame, word_c, 0xc);
GUEST_OFFSET(BbsNoticesExpireOldFrame, word_10, 0x10);
GUEST_SIZE(BbsNoticesExpireOldFrame, 0x1c4);

void BbsNotices__expire_old(u32 bbs_notices, u32 r1_unused, u32 r2, u32 r3) {
    guest::StackFrameOf<BbsNoticesExpireOldFrame> frame;  // the original's stack frame
    u32 r6_2 = 0;
    u32 r1_7 = 0;
    u32 r0_11 = 0;
    u32 r5 = bbs_notices;
    bbs_notices = 0u;
L_10754c:;
    if ((u32(*gptr<u16>(0x1acu * bbs_notices + r5 + 0x1aau)) & 1u) != 0) {
        bbs_notices += 1u;
        if (s32(bbs_notices) < 0xf) {
            guest::preempt();
            goto L_10754c;
        }
    }
    u32 r1_1 = *bbs_update_state;
    frame->bbs_notices = bbs_notices;
    u32 res_2 = bbs_notices - r1_1;
    frame->res = res_2;
    if (s32(res_2) < 0) {
        frame->res = 0;
    }
    BbsNotice__clear(frame.at(0x14).addr(), r1_1, r2, r3);
    u32 r1_2 = frame->bbs_notices;
    u32 r0_2 = frame->res + 1u;
    frame->word_0 = r0_2;
    if (s32(r0_2) < s32(r1_2)) {
        frame->word_c = frame.at(0x1ba).addr();
        do {
            u32 r4_1 = frame->word_0 * 0x1acu + r5;
            gptr<Local_00107544_r0_3> r0_3 = gptr<Local_00107544_r0_3>(r4_1 + 0x1a6u);
            u32 day = r0_3->day;
            u32 month = r0_3->month;
            u32 year = r0_3->year;
            u32 order_3 = Date__compare(r4_1 - 6u, year, month, day);
            if (s32(order_3) > 0) {
                copy_bytes_at_any_alignment(frame.at(0x14).addr(), r4_1, 0x1acu);
                u32 r7 = frame->word_c;
                copy_bytes_at_any_alignment(r4_1, r4_1 - 0x1acu, 0x1acu);
                u32 r4 = frame->word_0 - 1u;
                if (s32(r4) > s32(frame->res)) {
                    do {
                        r6_2 = r4 - 1u;
                        u32 r3_5 = *gptr<u8>(r7 + 3u);
                        u32 r2_2 = *gptr<u8>(r7 + 2u);
                        u32 r1_4 = *gptr<u16>(r7);
                        u32 r0_6 = 0x1acu * r6_2 + r5;
                        frame->word_10 = r0_6;
                        u32 order_4 = Date__compare(r0_6 + 0x1a6u, r1_4, r2_2, r3_5);
                        if (s32(order_4) <= 0) {
                            break;
                        }
                        copy_bytes_at_any_alignment((r4 * 0x1acu) + r5, frame->word_10, 0x1acu);
                        r4 = r6_2;
                        guest::preempt();
                    } while (s32(r6_2) > s32(frame->res));
                }
                copy_bytes_at_any_alignment((r4 * 0x1acu) + r5, frame.at(0x14).addr(), 0x1acu);
            }
            r1_7 = frame->bbs_notices;
            r0_11 = frame->word_0 + 1u;
            frame->word_0 = r0_11;
            guest::preempt();
        } while (s32(r0_11) < s32(r1_7));
    }
}

}  // namespace d_00107544
GUEST_EXPORT_FRAMED(0x00107545, d_00107544::BbsNotices__expire_old, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_00107634: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Removes notice `index` of the 15, moving the used ones after it up and clearing the last.
namespace d_00107634 {

struct __attribute__((packed)) Local_00107634_ea_1 {
    u32 word_0;
    u32 next;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
};
GUEST_OFFSET(Local_00107634_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_00107634_ea_1, next, 0x4);
GUEST_OFFSET(Local_00107634_ea_1, word_8, 0x8);
GUEST_OFFSET(Local_00107634_ea_1, word_c, 0xc);
GUEST_OFFSET(Local_00107634_ea_1, word_10, 0x10);
GUEST_OFFSET(Local_00107634_ea_1, word_14, 0x14);

inline constexpr guest::Function<0x002f8574, u32(u32, u32, u32, u32)> copy_bytes_at_any_alignment;
inline constexpr guest::Function<0x00301444, u32(u32, u32)> clear;

struct __attribute__((packed)) RemoveBbsNoticeFrame {
    u8 unknown_0[0x4];  // (not read or written by name)
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 tpc;
};
GUEST_OFFSET(RemoveBbsNoticeFrame, word_4, 0x4);
GUEST_OFFSET(RemoveBbsNoticeFrame, word_8, 0x8);
GUEST_OFFSET(RemoveBbsNoticeFrame, word_c, 0xc);
GUEST_OFFSET(RemoveBbsNoticeFrame, word_10, 0x10);
GUEST_OFFSET(RemoveBbsNoticeFrame, tpc, 0x14);
GUEST_SIZE(RemoveBbsNoticeFrame, 0x18);

void remove_bbs_notice(u32 notices, u32 index, u32 r2_unused, u32 r3) {
    guest::StackFrameOf<RemoveBbsNoticeFrame> frame;  // the original's stack frame
    u32 next = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r14 = guest::cpu()->r[14];
    if (index >= 0xfu) {
        guest::cpu()->r[1] = index;
        return;
    }
    gptr<Local_00107634_ea_1> ea_1 = gptr<Local_00107634_ea_1>(frame.at(0).addr());
    ea_1->word_0 = r3;
    ea_1->next = next;
    ea_1->word_8 = r5;
    ea_1->word_c = r6;
    ea_1->word_10 = r7;
    ea_1->word_14 = r14;
    next = index + 1u;
    r6 = notices;
    r7 = 0x1acu;
    notices = 0x1acu * index + r6;
    if (s32(next) < 0xf) {
        do {
            u32 res_1 = 0x1acu * next + r6;
            if ((u32(*gptr<u16>(res_1 + 0x1aau)) & 1u) == 0) {
                break;
            }
            copy_bytes_at_any_alignment(notices, res_1, r7, r3);
            r3 = guest::cpu()->r[3];
            next += 1u;
            notices = res_1;
            guest::preempt();
        } while (s32(next) < 0xf);
    }
    clear(notices, r7);
    u32 r4_1 = frame->word_4;
    u32 r5_1 = frame->word_8;
    u32 r6_1 = frame->word_c;
    u32 r7_1 = frame->word_10;
    u32 tpc_1 = frame->tpc;
    guest::cpu()->r[4] = r4_1;
    guest::cpu()->r[5] = r5_1;
    guest::cpu()->r[6] = r6_1;
    guest::cpu()->r[7] = r7_1;
}

}  // namespace d_00107634
GUEST_EXPORT(0x00107635, d_00107634::remove_bbs_notice);

// f_0010767c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Sets the bulletin-board update state (0x95c210) to -1.
namespace d_0010767c {

inline constexpr u32 bbs_update_state_address = 0x0095c210u;
inline guest::global<u32, 0x0095c210> bbs_update_state;

void reset_bbs_update_state() {
    *bbs_update_state = ~0u;
    guest::cpu()->r[1] = bbs_update_state_address;
}

}  // namespace d_0010767c
GUEST_EXPORT(0x0010767d, d_0010767c::reset_bbs_update_state);

// f_00107ed0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Posts the public works notice for the first player who qualifies, once (its flag is set after).
namespace d_00107ed0 {

struct __attribute__((packed)) Local_00107ed0_r4_1 {
    u8 byte_0;
    u8 unknown_1[0xa];  // (not used here)
    u8 byte_b;
};
GUEST_OFFSET(Local_00107ed0_r4_1, byte_0, 0x0);
GUEST_OFFSET(Local_00107ed0_r4_1, byte_b, 0xb);

inline constexpr u32 public_works_notice_posted_address = 0x00ad554cu;
inline guest::global<u32, 0x0088ec08> global_0088ec08;
inline guest::global<u32, 0x0088ec0c> global_0088ec0c;
inline constexpr guest::Function<0x002fae84, u32(u32, u32, u32, u32)> get_data_base;
inline constexpr guest::Function<0x002fb328, u32(u32, u32)> get_save_data;
inline constexpr guest::Function<0x002fbf30, u32(u32, u32)> FlagsAtB__set_bit_0;
inline constexpr guest::Function<0x003013c1, u32(u32, u32)> BbsNotice__clear;
inline constexpr guest::Function<0x00301df4, u32(u32, u32)> player_in_array;
inline constexpr guest::Function<0x00301ea9, u32(u32, u32, u32, u32)> BulletinBoard__post_message;
inline constexpr guest::Function<0x00301f09, u32(u32, u32)> NoticeBoard__post_notice;
inline constexpr guest::Function<0x00302204, u32(u32)> first_player_index_with_flag;
inline constexpr guest::Function<0x003022a4, u32(u32, u32, u32, u32)> set_words_4_8_c_2;
inline constexpr guest::Function<0x003022b8, u32(u32)> init_with_88ec20;

struct __attribute__((packed)) BbsPostPublicWorksNoticeOnceFrame {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u8 unknown_c[0x1b4];  // (not read or written by name)
};
GUEST_OFFSET(BbsPostPublicWorksNoticeOnceFrame, word_0, 0x0);
GUEST_OFFSET(BbsPostPublicWorksNoticeOnceFrame, word_4, 0x4);
GUEST_OFFSET(BbsPostPublicWorksNoticeOnceFrame, word_8, 0x8);
GUEST_SIZE(BbsPostPublicWorksNoticeOnceFrame, 0x1c0);

void Bbs__post_public_works_notice_once(u32 bbs, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<BbsPostPublicWorksNoticeOnceFrame> frame;  // the original's stack frame
    u32 data_base = get_data_base(bbs, r1, r2, r3);
    gptr<Local_00107ed0_r4_1> r4_1 = gptr<Local_00107ed0_r4_1>(data_base + 0x6214fu);
    if ((u32(r4_1->byte_0) & 1u) != 0u) {
        u32 r0_2 = u32(r4_1->byte_b) << 0x1f;
        if (r0_2 == 0) {
            u32 save_data = get_save_data(r0_2, 0x6214fu);
            u32 r0_5 = first_player_index_with_flag(save_data + 0xa0u);
            if (r0_5 != 4u) {
                u32 save_data_2 = get_save_data(r0_5, guest::cpu()->r[1]);
                u32 r0_8 = player_in_array(save_data_2 + 0xa0u, r0_5);
                if (r0_8 != 0) {
                    u32 r1_3 = 0x57u << 8;
                    u32 r0_9 = u32(*gptr<u8>(r0_8 + r1_3 + 1u)) << 0x1e;
                    if (s32(r0_9) < 0) {
                        u32 data_base_2 = get_data_base(r0_9, r1_3, guest::cpu()->r[2], guest::cpu()->r[3]);
                        u32 bbs_notice = frame.at(0x10).addr();
                        BbsNotice__clear(bbs_notice, 0x6e238u);
                        *gptr<u32>(bbs_notice + 0x1acu) = 0xfc;
                        set_words_4_8_c_2(public_works_notice_posted_address, frame.at(0x10).addr(), *global_0088ec08, *global_0088ec0c);
                        frame->word_0 = 0;
                        frame->word_8 = 0xad554c;
                        frame->word_4 = 0;
                        if (BulletinBoard__post_message(frame.at(0x10).addr(), 0x88ec50u, 1u, bbs) != 0) {
                            FlagsAtB__set_bit_0(r4_1.addr(), 1u);
                            NoticeBoard__post_notice(data_base_2 + 0x6e238u, frame.at(0x10).addr());
                            init_with_88ec20(public_works_notice_posted_address);
                        }
                    }
                }
            }
        }
    }
}

}  // namespace d_00107ed0
GUEST_EXPORT_FRAMED(0x00107ed1, d_00107ed0::Bbs__post_public_works_notice_once, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_00107f84: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Posts the bulletin board's notices for a player: public works (once) and the three town events.
namespace d_00107f84 {

inline constexpr guest::Function<0x00107ed1, u32(u32, u32, u32, u32)> Bbs__post_public_works_notice_once;
inline constexpr guest::Function<0x00108019, u32(u32, u32)> BulletinBoard__post_town_event_a;
inline constexpr guest::Function<0x001080ed, u32(u32, u32)> BulletinBoard__post_town_event_b;
inline constexpr guest::Function<0x001081d9, u32(u32, u32)> BulletinBoard__post_town_event_c;

u32 Bbs__update_notices(u32 bbs, u32 player) {
    Bbs__post_public_works_notice_once(player, player, guest::cpu()->r[2], guest::cpu()->r[3]);
    BulletinBoard__post_town_event_a(bbs, player);
    BulletinBoard__post_town_event_b(bbs, player);
    return BulletinBoard__post_town_event_c(bbs, player);
}

}  // namespace d_00107f84
GUEST_EXPORT_FRAMED(0x00107f85, d_00107f84::Bbs__update_notices, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_00107fac: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Posts the public works notice (variant 0x10) on the bulletin board when the town's flag asks for it.
namespace d_00107fac {

inline constexpr guest::Function<0x002fae84, u32(u32, u32)> get_data_base;
inline constexpr guest::Function<0x002fb328, u32(u32, u32, u32, u32)> get_save_data;
inline constexpr guest::Function<0x003013c1, u32(u32, u32)> BbsNotice__clear;
inline constexpr guest::Function<0x00301ea9, u32(u32, u32, u32, u32)> BulletinBoard__post_message;
inline constexpr guest::Function<0x00301f09, u32(u32, u32)> NoticeBoard__post_notice;

struct __attribute__((packed)) BbsPostPublicWorksNoticeFrame {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u8 unknown_c[0x1b8];  // (not read or written by name)
};
GUEST_OFFSET(BbsPostPublicWorksNoticeFrame, word_0, 0x0);
GUEST_OFFSET(BbsPostPublicWorksNoticeFrame, word_4, 0x4);
GUEST_OFFSET(BbsPostPublicWorksNoticeFrame, word_8, 0x8);
GUEST_SIZE(BbsPostPublicWorksNoticeFrame, 0x1c4);

void Bbs__post_public_works_notice(u32 bbs, u32 player, u32 r2, u32 r3) {
    guest::StackFrameOf<BbsPostPublicWorksNoticeFrame> frame;  // the original's stack frame
    if (bbs == 0) {
        return;
    }
    u32 save_data = get_save_data(bbs, player, r2, r3);
    u32 r0_2 = u32(*gptr<u8>(save_data + 0x621d2u)) >> 3 << 0x1f;
    if (r0_2 == 0) {
        guest::cpu()->r[1] = 0x6214fu;
        return;
    }
    u32 data_base = get_data_base(r0_2, 0x6214fu);
    u32 bbs_notice = frame.at(0x10).addr();
    BbsNotice__clear(bbs_notice, 0x6e238u);
    *gptr<u32>(bbs_notice + 0x1acu) = 0xfc;
    frame->word_0 = 0;
    frame->word_4 = 0;
    frame->word_8 = 0;
    if (BulletinBoard__post_message(frame.at(0x10).addr(), 0x10800cu, 0x10u, player) == 0) {
        return;
    }
    NoticeBoard__post_notice(data_base + 0x6e238u, frame.at(0x10).addr());
}

}  // namespace d_00107fac
GUEST_EXPORT_FRAMED(0x00107fad, d_00107fac::Bbs__post_public_works_notice, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_001082c8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Clears the bulletin board's 15 notices.
namespace d_001082c8 {

inline constexpr guest::Function<0x00301444, u32(u32, u32, u32, u32)> clear;

void clear_bbs_notices(u32 r0) {
    u32 i = 0u;
    u32 r6 = 0x1acu;
    u32 r5 = r0;
    do {
        clear(0x1acu * i + r5, r6, guest::cpu()->r[2], guest::cpu()->r[3]);
        i += 1u;
        guest::preempt();
    } while (s32(i) < 0xf);
}

}  // namespace d_001082c8
GUEST_EXPORT_FRAMED(0x001082c9, d_001082c8::clear_bbs_notices, 0x4070);  // pushes {i, r5, r6, lr} first, as the original

// f_001082e8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Posts the bulletin board's two default notices, dated today.
namespace d_001082e8 {

inline constexpr guest::Function<0x002fb378, u32(u32, u32, u32, u32)> game_time_now;
inline constexpr guest::Function<0x003013c1, u32(u32)> BbsNotice__clear;
inline constexpr guest::Function<0x00301f09, u32(u32, u32)> NoticeBoard__post_notice;
inline constexpr guest::Function<0x003026f8, u32(u32)> NoticeLoadAdapt__NoticeLoadAdapt;
inline constexpr guest::Function<0x00302788, u32(u32)> MessageStore__start_message;
inline constexpr guest::Function<0x0030279c, u32(u32, u32, u32, u32)> TextWords__set_from_table;
inline constexpr guest::Function<0x0030289c, u32(u32)> MessageStore__start_board;
inline constexpr guest::Function<0x003028b4, u32(u32)> NoticeLoadAdapt__destructor;

struct __attribute__((packed)) BbsPostDefaultNoticesFrame {
    u32 now;
    u32 word_4;
    u32 word_8;
    u8 unknown_c[0x294];  // (not read or written by name)
};
GUEST_OFFSET(BbsPostDefaultNoticesFrame, now, 0x0);
GUEST_OFFSET(BbsPostDefaultNoticesFrame, word_4, 0x4);
GUEST_OFFSET(BbsPostDefaultNoticesFrame, word_8, 0x8);
GUEST_SIZE(BbsPostDefaultNoticesFrame, 0x2a0);

u32 Bbs__post_default_notices(u32 bbs, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<BbsPostDefaultNoticesFrame> frame;  // the original's stack frame
    u32 now = game_time_now(bbs, r1, r2, r3);
    NoticeLoadAdapt__NoticeLoadAdapt(frame.at(0x1b8).addr());
    BbsNotice__clear(frame.at(0xc).addr());
    MessageStore__start_message(frame.at(0x1b8).addr());
    frame->word_4 = 0;
    frame->now = now;
    frame->word_8 = 0;
    TextWords__set_from_table(frame.at(0x1b8).addr(), frame.at(0xc).addr(), 0x88ec38u, 1u);
    NoticeBoard__post_notice(bbs, frame.at(0xc).addr());
    frame->word_4 = 0;
    frame->now = now;
    frame->word_8 = 0;
    TextWords__set_from_table(frame.at(0x1b8).addr(), frame.at(0xc).addr(), 0x88ec38u, 2u);
    NoticeBoard__post_notice(bbs, frame.at(0xc).addr());
    MessageStore__start_board(bbs);
    u32 notice_load_adapt = frame.at(0x1b8).addr();
    NoticeLoadAdapt__destructor(notice_load_adapt);
    return notice_load_adapt;
}

}  // namespace d_001082e8
GUEST_EXPORT_FRAMED(0x001082e9, d_001082e8::Bbs__post_default_notices, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_00108354: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Resets the bulletin board notices: clears them and posts the initial notice from its message.
namespace d_00108354 {

inline constexpr guest::Function<0x002fb328, u32(u32)> get_save_data;
inline constexpr guest::Function<0x002fb378, u32(u32, u32, u32, u32)> game_time_now;
inline constexpr guest::Function<0x003013c1, u32(u32)> BbsNotice__clear;
inline constexpr guest::Function<0x00301444, u32(u32, u32, u32, u32)> clear;
inline constexpr guest::Function<0x00301f09, u32(u32, u32)> NoticeBoard__post_notice;
inline constexpr guest::Function<0x003026f8, u32(u32)> NoticeLoadAdapt__NoticeLoadAdapt;
inline constexpr guest::Function<0x00302788, u32(u32, u32)> MessageStore__start_message;
inline constexpr guest::Function<0x0030279c, u32(u32, u32, u32, u32)> TextWords__set_from_table;
inline constexpr guest::Function<0x0030289c, u32(u32)> MessageStore__start_board;
inline constexpr guest::Function<0x003028b4, u32(u32)> NoticeLoadAdapt__destructor;
inline constexpr guest::Function<0x003028f0, u32(u32)> MessageStore__is_open;
inline constexpr guest::Function<0x00304438, u32(u32)> first_player_with_flag_5700_bit_4_veneer;
inline constexpr guest::Function<0x0030443c, u32(u32, u32)> OptionalWord64__is_present_and_nonzero_veneer;
inline constexpr guest::Function<0x00304440, u32(u32, u32)> pack_id_with_byte_9_veneer;
inline constexpr guest::Function<0x00304444, u32(u32, u32, u32, u32)> call_target_with_none_0xa4__veneer;

struct __attribute__((packed)) ResetBbsNoticesFrame {
    u32 now;
    u32 word_4;
    u32 word_8;
    u8 unknown_c[0x298];  // (not read or written by name)
};
GUEST_OFFSET(ResetBbsNoticesFrame, now, 0x0);
GUEST_OFFSET(ResetBbsNoticesFrame, word_4, 0x4);
GUEST_OFFSET(ResetBbsNoticesFrame, word_8, 0x8);
GUEST_SIZE(ResetBbsNoticesFrame, 0x2a4);

u32 reset_bbs_notices(u32 r0, u32 r1_unused, u32 r2, u32 r3) {
    guest::StackFrameOf<ResetBbsNoticesFrame> frame;  // the original's stack frame
    u32 r0_2 = 0;
    u32 i = 0u;
    u32 r6 = 0x1acu;
    u32 notice_board = r0;
    do {
        r0_2 = clear(0x1acu * i + notice_board, r6, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        i += 1u;
        guest::preempt();
    } while (s32(i) < 0xf);
    u32 now_2 = game_time_now(r0_2, guest::cpu()->r[1], r2, r3);
    frame->now = now_2;
    NoticeLoadAdapt__NoticeLoadAdapt(frame.at(0x10).addr());
    u32 bbs_notice = frame.at(0xf8).addr();
    BbsNotice__clear(bbs_notice);
    u32 save_data = get_save_data(bbs_notice);
    u32 r0_8 = first_player_with_flag_5700_bit_4_veneer(save_data + 0xa0u);
    u32 r1_6 = guest::cpu()->r[1];
    u32 r7_1 = 0u;
    u32 r6_1 = r7_1;
    if (r0_8 != 0) {
        u32 r0_9 = r0_8 + 0x56f0u;
        u32 r0_10 = OptionalWord64__is_present_and_nonzero_veneer(r0_9, 0x56f0u);
        r1_6 = guest::cpu()->r[1];
        if (r0_10 != 0) {
            u32 r0_11 = pack_id_with_byte_9_veneer(r0_9, r1_6);
            r1_6 = guest::cpu()->r[1];
            r7_1 = r0_11;
            r6_1 = r1_6;
        }
    }
    MessageStore__start_message(frame.at(0x10).addr(), r1_6);
    u32 r0_14 = MessageStore__is_open(frame.at(0x10).addr());
    call_target_with_none_0xa4__veneer(r0_14, guest::cpu()->r[1], r7_1, r6_1);
    frame->word_4 = 0;
    frame->word_8 = 0;
    TextWords__set_from_table(frame.at(0x10).addr(), frame.at(0xf8).addr(), 0x88ec44u, 3u);
    NoticeBoard__post_notice(notice_board, frame.at(0xf8).addr());
    MessageStore__start_board(notice_board);
    u32 notice_load_adapt = frame.at(0x10).addr();
    NoticeLoadAdapt__destructor(notice_load_adapt);
    return notice_load_adapt;
}

}  // namespace d_00108354
GUEST_EXPORT_FRAMED(0x00108355, d_00108354::reset_bbs_notices, 0x40f0);  // pushes {i, notice_board, r6, r7, lr} first, as the original

// f_001083fc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// When the update state (0x95c210) is above 1: expires the old bulletin-board notices of the town.
namespace d_001083fc {

inline constexpr u32 bbs_update_state_address = 0x0095c210u;
inline guest::global<u32, 0x0095c210> bbs_update_state;
inline constexpr guest::Function<0x00107545, u32(u32, u32)> BbsNotices__expire_old;
inline constexpr guest::Function<0x002fae84, u32(u32, u32, u32, u32)> get_data_base;

void update_bbs_if_pending(u32 r0_unused, u32 r1) {
    u32 r0_1 = *bbs_update_state;
    if (s32(r0_1) <= 1) {
        return;
    }
    u32 data_base = get_data_base(r0_1, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    BbsNotices__expire_old(data_base + 0x6e238u, 0x6e238u);
}

}  // namespace d_001083fc
GUEST_EXPORT_FRAMED(0x001083fd, d_001083fc::update_bbs_if_pending, 0x4010);  // pushes {r4, lr} first, as the original

// f_00108434: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Constructs fifteen bulletin board notices.
namespace d_00108434 {

inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> for_each_element;

u32 construct_bbs_notices() {
    for_each_element(guest::cpu()->r[0], 0x3013c1u, 0x1acu, 0xfu);
    return guest::cpu()->r[0];
}

}  // namespace d_00108434
GUEST_EXPORT_FRAMED(0x00108435, d_00108434::construct_bbs_notices, 0x4010);  // pushes {r4, lr} first, as the original

// f_00108448: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Clears the flag byte and the record after it (001e4524).
namespace d_00108448 {

struct __attribute__((packed)) ClearFlagAndRecord8b52Arg0 {
    u8 byte_0;
};
GUEST_OFFSET(ClearFlagAndRecord8b52Arg0, byte_0, 0x0);

inline constexpr guest::Function<0x001e4524, u32(u32, u32, u32, u32)> set_state_and_flag_6214f_b;

void clear_flag_and_record_8b52(gptr<ClearFlagAndRecord8b52Arg0> arg0) {
    arg0->byte_0 = 0;
    set_state_and_flag_6214f_b(arg0.addr(), 0u, guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_00108448
GUEST_EXPORT_FRAMED(0x00108449, d_00108448::clear_flag_and_record_8b52, 0x4010);  // pushes {r4, lr} first, as the original

// f_00108a9c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Clears a record of 18 items with their flags and its two 0x18-byte parts.
namespace d_00108a9c {

struct __attribute__((packed)) ItemRecord18 {
    u8 byte_0;
    u8 byte_1;
};
GUEST_OFFSET(ItemRecord18, byte_0, 0x0);
GUEST_OFFSET(ItemRecord18, byte_1, 0x1);

inline constexpr u32 empty_item_address = 0x0095bfdcu;
inline constexpr guest::Function<0x002fc8e8, u32(u32, u32)> Item__copy;
inline constexpr guest::Function<0x00301444, u32(u32, u32, u32, u32)> clear;
inline constexpr guest::Function<0x00303018, u32(u32, u32)> ItemSlots6__clear;

void ItemRecord18__clear(gptr<ItemRecord18> item_record18) {
    u32 r0 = item_record18.addr();
    u32 r1 = 0;
    u32 r4 = r0;
    clear(r0, 0x8cu, guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r6 = 0u;
    item_record18->byte_0 = u8(r6);
    u32 i = r6;
    item_record18->byte_1 = u8(r6);
    do {
        Item__copy((i << 2) + r4 + 2u, empty_item_address);
        r1 = guest::cpu()->r[1];
        u32 r0_2 = r4 + i + 0x40u;
        i += 1u;
        *gptr<u8>(r0_2 + 0xau) = u8(r6);
        guest::preempt();
    } while (s32(i) < 0x12);
    i = 0u;
    do {
        ItemSlots6__clear(0x18u * i + r4 + 0x5cu, r1);
        r1 = guest::cpu()->r[1];
        i += 1u;
        guest::preempt();
    } while (s32(i) < 2);
    guest::cpu()->r[1] = r1;
}

}  // namespace d_00108a9c
GUEST_EXPORT_FRAMED(0x00108a9d, d_00108a9c::ItemRecord18__clear, 0x4070);  // pushes {r4, i, r6, lr} first, as the original

// f_00108ae0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Clears six item slots, then fills four with distinct items of group 0xb and two with distinct items of group 0xa.
namespace d_00108ae0 {

inline constexpr u32 empty_item_address = 0x0095bfdcu;
inline constexpr guest::Function<0x002fc288, u32(u32, u32, u32, u32)> ItemBitSet__clear_and_return;
inline constexpr guest::Function<0x002fc8e8, u32(u32, u32, u32, u32)> Item__copy;
inline constexpr guest::Function<0x002fc8fc, u32(u32, u32, u32)> do_nothing_002fc8fc;
inline constexpr guest::Function<0x002fe9c8, u32(u32, u32, u32, u32)> ItemSet__add_group_without_flags;
inline constexpr guest::Function<0x003004c4, u32(u32, u32, u32)> pick_distinct_items;

void fill_item_slots_4_and_2(u32 r0, u32 r1_unused, u32 r2, u32 r3) {
    guest::StackFrame frame(0x2e8);  // the original's stack frame
    u32 i = 0u;
    u32 slots = r0;
    u32 r6 = i;
    do {
        Item__copy((i << 2) + slots + 0x12u, empty_item_address, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        u32 r0_2 = slots + i + 0x20u;
        i += 1u;
        *gptr<u8>(r0_2 + 0xau) = u8(r6);
        guest::preempt();
    } while (s32(i) < 6);
    ItemBitSet__clear_and_return(frame.at(0).addr(), guest::cpu()->r[1], r2, r3);
    ItemSet__add_group_without_flags(frame.at(0).addr(), 0xbu, 0x28u, 0u);
    pick_distinct_items(slots + 0x12u, 4u, frame.at(0).addr());
    do_nothing_002fc8fc(frame.at(0).addr(), guest::cpu()->r[1], guest::cpu()->r[2]);
    ItemBitSet__clear_and_return(frame.at(0).addr(), guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    ItemSet__add_group_without_flags(frame.at(0).addr(), 0xau, 0x28u, 0u);
    u32 r0_9 = slots + 0x22u;
    u32 r2_4 = frame.at(0).addr();
    pick_distinct_items(r0_9, 2u, r2_4);
    do_nothing_002fc8fc(r0_9, guest::cpu()->r[1], r2_4);
}

}  // namespace d_00108ae0
GUEST_EXPORT_FRAMED(0x00108ae1, d_00108ae0::fill_item_slots_4_and_2, 0x4070);  // pushes {i, slots, r6, lr} first, as the original

// f_00108b58: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Clears a reward entry, sets kind 0 and its encrypted value to 0.
namespace d_00108b58 {

struct __attribute__((packed)) RewardEntry {
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
};
GUEST_OFFSET(RewardEntry, word_0, 0x0);
GUEST_OFFSET(RewardEntry, word_4, 0x4);
GUEST_OFFSET(RewardEntry, word_8, 0x8);
GUEST_OFFSET(RewardEntry, word_c, 0xc);
GUEST_OFFSET(RewardEntry, word_10, 0x10);
GUEST_OFFSET(RewardEntry, word_14, 0x14);
GUEST_OFFSET(RewardEntry, word_18, 0x18);
GUEST_OFFSET(RewardEntry, word_1c, 0x1c);
GUEST_OFFSET(RewardEntry, word_20, 0x20);
GUEST_OFFSET(RewardEntry, word_24, 0x24);
GUEST_OFFSET(RewardEntry, word_28, 0x28);
GUEST_OFFSET(RewardEntry, word_2c, 0x2c);

inline constexpr guest::Function<0x00303534, u32(u32, u32)> EncryptedInt__set;
inline constexpr guest::Function<0x003035dd, u32(u32, u32, u32, u32)> init_reward_entry;

void RewardEntry__clear(gptr<RewardEntry> reward_entry) {
    reward_entry->word_0 = 0;
    reward_entry->word_4 = 0;
    reward_entry->word_8 = 0;
    reward_entry->word_c = 0;
    reward_entry->word_10 = 0;
    reward_entry->word_14 = 0;
    reward_entry->word_18 = 0;
    reward_entry->word_1c = 0;
    reward_entry->word_20 = 0;
    reward_entry->word_24 = 0;
    reward_entry->word_28 = 0;
    reward_entry->word_2c = 0;
    init_reward_entry(reward_entry.addr(), 0u, guest::cpu()->r[2], guest::cpu()->r[3]);
    EncryptedInt__set(reward_entry.addr() + 8u, 0u);
}

}  // namespace d_00108b58
GUEST_EXPORT_FRAMED(0x00108b59, d_00108b58::RewardEntry__clear, 0x4010);  // pushes {r4, lr} first, as the original

// f_00109614: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Clears a 0x9c-byte town record (count 10, limit 0xf, encrypted value 0).
namespace d_00109614 {

struct __attribute__((packed)) TownRecord9c {
    u8 unknown_0[0x10];  // (not used here)
    u32 word_10;
    u8 byte_14;
    u8 byte_15;
    u8 unknown_16[0x82];  // (not used here)
    u32 word_98;
};
GUEST_OFFSET(TownRecord9c, word_10, 0x10);
GUEST_OFFSET(TownRecord9c, byte_14, 0x14);
GUEST_OFFSET(TownRecord9c, byte_15, 0x15);
GUEST_OFFSET(TownRecord9c, word_98, 0x98);

inline constexpr guest::Function<0x002f825c, u32(u32, u32)> clear_aligned;
inline constexpr guest::Function<0x00303534, u32(u32, u32)> EncryptedInt__set;
inline constexpr guest::Function<0x00303cdc, u32(u32)> clear_inner;

void TownRecord9c__clear(gptr<TownRecord9c> town_record9c) {
    clear_aligned(town_record9c.addr(), 0x9cu);
    town_record9c->byte_15 = 0;
    town_record9c->byte_14 = 0;
    town_record9c->word_10 = 0xa;
    clear_inner(town_record9c.addr());
    clear_inner(town_record9c.addr() + 8u);
    EncryptedInt__set(town_record9c.addr() + 0x18u, 0u);
    town_record9c->word_98 = 0xf;
}

}  // namespace d_00109614
GUEST_EXPORT_FRAMED(0x00109615, d_00109614::TownRecord9c__clear, 0x4010);  // pushes {r4, lr} first, as the original

// f_00109930: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Creates the game's managers and singletons at start-up, in order.
namespace d_00109930 {

inline constexpr guest::Function<0x001acb90, u32(u32)> IslandData__create_instance;
inline constexpr guest::Function<0x001b1308, u32(u32)> recreate_resource_mgr_heaps;
inline constexpr guest::Function<0x001b31a4, u32(u32)> load_design_palettes;
inline constexpr guest::Function<0x001b7688, u32(u32)> TourResult__create_instance;
inline constexpr guest::Function<0x001c203c, u32(u32)> do_nothing_001c203c;
inline constexpr guest::Function<0x001e5ba0, u32(u32)> init_scene_resources;
inline constexpr guest::Function<0x00207330, u32(u32)> create_particle_system;
inline constexpr guest::Function<0x00243bd0, u32(u32)> RealEstate__update;
inline constexpr guest::Function<0x0029cb74, u32(u32)> NpcNetPacketMgr__create_instance;
inline constexpr guest::Function<0x0029cf7c, u32(u32)> NpcNetShareInfo__create_instance;
inline constexpr guest::Function<0x0029d060, u32(u32)> NpcPermitBitMgr__create_instance;
inline constexpr guest::Function<0x002c21c4, u32(u32)> VisitorLocalInfo__create_instance;
inline constexpr guest::Function<0x002e0bec, u32(u32)> ExhibitionParkInfo__create_instance;
inline constexpr guest::Function<0x002fc188, u32(u32)> return_constant_0xa84270_;
inline constexpr guest::Function<0x002fc194, u32(u32)> PlayerRecord4c__clear;
inline constexpr guest::Function<0x0030444c, u32(u32)> reset_record_tables_a82000;
inline constexpr guest::Function<0x00304530, u32(u32)> shared_load_splits;
inline constexpr guest::Function<0x0030459c, u32(u32)> return_constant_0x95bed0_;
inline constexpr guest::Function<0x00304f1c, u32(u32, u32, u32, u32)> thunk_0056b538;
inline constexpr guest::Function<0x00304f20, u32(u32)> thunk_00615554;
inline constexpr guest::Function<0x00304f24, u32(u32)> thunk_005cad7c;
inline constexpr guest::Function<0x00304f28, u32(u32)> thunk_006306f0;
inline constexpr guest::Function<0x00304f2c, u32(u32)> thunk_006a6840;
inline constexpr guest::Function<0x0030503c, u32(u32)> sead__SafeStringBase_char___SafeStringBase_0030503c;
inline constexpr guest::Function<0x00305040, u32(u32)> photo__Mgr__create_instance_veneer;
inline constexpr guest::Function<0x00305044, u32(u32)> BossMgr__create_instance_veneer;
inline constexpr guest::Function<0x00305048, u32(u32)> TourData__create_instance_veneer;
inline constexpr guest::Function<0x0030504c, u32(u32)> reset_bit_table_entries_veneer;
inline constexpr guest::Function<0x00305050, u32(u32)> thunk_006c9240;
inline constexpr guest::Function<0x003317b4, u32(u32)> NpcLockPlayerPermitBit__create_instance;
inline constexpr guest::Function<0x004e1ac4, u32(u32)> load_furniture_remake_params;
inline constexpr guest::Function<0x004eb268, u32(u32)> sead__SafeStringBase_char___SafeStringBase_004eb268;

void create_game_singletons(u32 bits) {
    thunk_0056b538(bits, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 j = init_scene_resources(thunk_00615554(sead__SafeStringBase_char___SafeStringBase_004eb268(create_particle_system(reset_record_tables_a82000(0xa82000u)))));
    u32 r0_7 = thunk_005cad7c(load_design_palettes(j));
    thunk_006306f0(r0_7);
    u32 player_record4c = return_constant_0xa84270_(r0_7);
    u32 r0_11 = shared_load_splits(thunk_006a6840(PlayerRecord4c__clear(player_record4c)));
    do_nothing_001c203c(r0_11);
    RealEstate__update(recreate_resource_mgr_heaps(return_constant_0x95bed0_(r0_11)));
    NpcNetPacketMgr__create_instance(0u);
    NpcPermitBitMgr__create_instance(0u);
    NpcLockPlayerPermitBit__create_instance(0u);
    BossMgr__create_instance_veneer(photo__Mgr__create_instance_veneer(sead__SafeStringBase_char___SafeStringBase_0030503c(NpcNetShareInfo__create_instance(0u))));
    VisitorLocalInfo__create_instance(0u);
    IslandData__create_instance(0u);
    TourData__create_instance_veneer(0u);
    TourResult__create_instance(0u);
    u32 r0_17 = ExhibitionParkInfo__create_instance(0u);
    reset_bit_table_entries_veneer(r0_17);
    load_furniture_remake_params(r0_17);
    thunk_006c9240(r0_17);
}

}  // namespace d_00109930
GUEST_EXPORT_FRAMED(0x00109931, d_00109930::create_game_singletons, 0x4010);  // pushes {r4, lr} first, as the original

// f_00109a90: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Loads the NPC packages (normal, normal constants, special constants) and the other startup resources; whether all
// loaded.
namespace d_00109a90 {

inline constexpr u32 human_anim_bank_heap_address = 0x00952c64u;
inline constexpr u32 heap_mgr_instance_address = 0x00975338u;
inline constexpr u32 human_model_part_table_address = 0x00a14b5cu;
inline constexpr u32 villager_template_table_address = 0x00a8349cu;
inline constexpr u32 npc_package_table_address = 0x00a83aecu;
inline constexpr u32 global_00a8413c_address = 0x00a8413cu;
inline guest::global<u32, 0x00952c64> human_anim_bank_heap;
inline guest::global<u32, 0x00975338> heap_mgr_instance;
inline constexpr guest::Function<0x001b1010, u32(u32)> load_static_tables;
inline constexpr guest::Function<0x001c1eb8, u32(u32)> load_ground_jump_data;
inline constexpr guest::Function<0x001de39c, u32(u32)> load_strc_data;
inline constexpr guest::Function<0x0028edfc, u32(u32)> sead__SafeStringBase_char___SafeStringBase_0028edfc;
inline constexpr guest::Function<0x002b6580, u32(u32)> sead__SafeStringBase_char___SafeStringBase_002b6580;
inline constexpr guest::Function<0x00304530, u32(u32)> shared_load_splits;
inline constexpr guest::Function<0x0030459c, u32(u32)> return_constant_0x95bed0_;
inline constexpr guest::Function<0x003045a8, u32(u32, u32, u32, u32)> current_thread_context;
inline constexpr guest::Function<0x00305054, u32(u32, u32, u32)> thunk_006e4dc4;
inline constexpr guest::Function<0x00305058, u32(u32, u32, u32, u32)> thunk_0081fbcc;
inline constexpr guest::Function<0x0030505c, u32(u32, u32, u32, u32)> thunk_0081fcb0;
inline constexpr guest::Function<0x00305060, u32(u32, u32, u32, u32)> thunk_0081fc44;
inline constexpr guest::Function<0x00305064, u32(u32, u32)> sead__SafeStringBase_char___SafeStringBase_00305064;
inline constexpr guest::Function<0x00305068, u32(u32)> sead__SafeStringBase_char___SafeStringBase_00305068;
inline constexpr guest::Function<0x0030506c, u32(u32)> sead__SafeStringBase_char___SafeStringBase_0030506c;
inline constexpr guest::Function<0x00305070, u32(u32)> sead__SafeStringBase_char___SafeStringBase_00305070;
inline constexpr guest::Function<0x00305074, u32(u32)> thunk_006d36d4;

u32 load_npc_packages(u32 r0_unused, u32 r1, u32 r2, u32 r3) {
    u32 context = current_thread_context(*heap_mgr_instance, r1, r2, r3);
    u32 r0_3 = thunk_006e4dc4(human_model_part_table_address, context, *human_anim_bank_heap);
    u32 context_2 = current_thread_context(*heap_mgr_instance, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r5_1 = r0_3 & thunk_0081fbcc(villager_template_table_address, 0x887628u, context_2, 0x20u);
    u32 context_3 = current_thread_context(*heap_mgr_instance, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r5_2 = r5_1 & thunk_0081fcb0(npc_package_table_address, 0x88760cu, context_3, 0x20u);
    u32 context_4 = current_thread_context(*heap_mgr_instance, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_12 = thunk_0081fc44(global_00a8413c_address, 0x8875f0u, context_4, 0x20u);
    u32 r1_4 = r0_12 & r5_2;
    u32 r0_14 = sead__SafeStringBase_char___SafeStringBase_00305064(r0_12, r1_4) & r1_4;
    u32 r0_15 = sead__SafeStringBase_char___SafeStringBase_00305068(r0_14);
    u32 r0_16 = load_strc_data(r0_15);
    u32 r0_17 = sead__SafeStringBase_char___SafeStringBase_0030506c(r0_16);
    u32 r0_18 = sead__SafeStringBase_char___SafeStringBase_00305070(r0_17);
    u32 r0_20 = load_ground_jump_data(shared_load_splits(r0_18));
    u32 r0_22 = load_static_tables(return_constant_0x95bed0_(r0_20));
    u32 r0_23 = sead__SafeStringBase_char___SafeStringBase_002b6580(r0_22);
    u32 r0_24 = sead__SafeStringBase_char___SafeStringBase_0028edfc(r0_23);
    u32 r0_25 = thunk_006d36d4(r0_24);
    return r0_25 & ((((((((r0_15 & r0_14) & r0_16) & r0_17) & r0_18) & r0_20) & r0_22) & r0_23) & r0_24);
}

}  // namespace d_00109a90
GUEST_EXPORT_FRAMED(0x00109a91, d_00109a90::load_npc_packages, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_00109b58: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Boot stage 3: loads the resources the boot needs.
namespace d_00109b58 {

struct __attribute__((packed)) Bits {
    u8 unknown_0[0x20];  // (not used here)
    u32 word_20;
    u32 word_24;
    u8 unknown_28[0xc];  // (not used here)
    u32 word_34;
    u8 byte_38;
    u8 unknown_39[0x33];  // (not used here)
    u32 word_6c;
    u8 byte_70;
};
GUEST_OFFSET(Bits, word_20, 0x20);
GUEST_OFFSET(Bits, word_24, 0x24);
GUEST_OFFSET(Bits, word_34, 0x34);
GUEST_OFFSET(Bits, byte_38, 0x38);
GUEST_OFFSET(Bits, word_6c, 0x6c);
GUEST_OFFSET(Bits, byte_70, 0x70);

inline constexpr u32 boot_load_stage_address = 0x0095168cu;
inline constexpr u32 stage_heap_address = 0x00952c3cu;
inline guest::global<u8, 0x009500e0> boot_resources_loaded;
inline guest::global<u32, 0x0095168c> boot_load_stage;
inline guest::global<u32, 0x00952c3c> stage_heap;
inline guest::global<u32, 0x00981ff0> request_record_ready;
inline constexpr guest::Function<0x0014f704, u32(u32)> import_thunk_14f704;
inline constexpr guest::Function<0x0014f70c, u32(u32)> import_thunk_14f70c;
inline constexpr guest::Function<0x001b85ac, u32(u32)> do_nothing_001b85ac;
inline constexpr guest::Function<0x001b9250, u32(u32)> do_nothing_001b9250;
inline constexpr guest::Function<0x001b95f4, u32(u32)> do_nothing_001b95f4;
inline constexpr guest::Function<0x002f3398, u32(u32)> refresh_boot_resource_flags;
inline constexpr guest::Function<0x002f341c, u32(u32)> setup_request_record_af7618;
inline constexpr guest::Function<0x00304640, u32(u32)> request_result;
inline constexpr guest::Function<0x00305078, u32(u32, u32, u32, u32)> thunk_006a50f4;
inline constexpr guest::Function<0x003050dc, u32(u32)> thunk_007ca97c;
inline constexpr guest::Function<0x003050e0, u32(u32)> thunk_007ca700;
inline constexpr guest::Function<0x003050e4, u32(u32)> thunk_0058c998;

struct __attribute__((packed)) BootLoadStage3Frame {
    u32 word_0;
};
GUEST_OFFSET(BootLoadStage3Frame, word_0, 0x0);
GUEST_SIZE(BootLoadStage3Frame, 0x4);

u32 boot_load_stage_3(gptr<Bits> bits, u32 r1_unused, u32 r2_unused, u32 r3) {
    guest::StackFrameOf<BootLoadStage3Frame> frame;  // the original's stack frame
    u32 r0 = bits.addr();
    u32 r0_9 = 0;
    u32 r0_11 = 0;
    u32 r0_12 = 0;
    frame->word_0 = r3;
    u32 r0_1 = *boot_load_stage;
    if (r0_1 != 0) {
        u32 r0_2 = thunk_006a50f4(r0_1, guest::cpu()->r[1], guest::cpu()->r[2], r3);
        if (r0_2 != 0) {
            do_nothing_001b95f4(r0_2);
            do_nothing_001b9250(r0_2);
            do_nothing_001b85ac(r0_2);
            if (bits->word_34 == 0) {
                bits->word_20 = 0x109a19;
                bits->word_24 = 0x1099cd;
                import_thunk_14f704(*stage_heap);
                request_result(r0 + 8u);
                return 0u;
            }
            u32 r0_5 = bits->byte_38;
            if (r0_5 == 0) {
                return r0_5;
            }
            if (bits->word_6c == 0) {
                request_result(r0 + 0x40u);
                return 0u;
            }
            u32 r0_7 = bits->byte_70;
            if (r0_7 == 0) {
                return r0_7;
            }
            u32 r0_8 = *boot_resources_loaded;
            if (r0_8 == 0) {
                refresh_boot_resource_flags(r0_8);
                r0_9 = *boot_resources_loaded;
                if (r0_9 == 0) {
                    goto L_109bf0;
                }
                goto L_109bd4;
            }
            goto L_109bd4;
        }
    }
    return 0u;
L_109bd4:;
    if (*request_record_ready == 0) {
        setup_request_record_af7618(*stage_heap);
    }
    r0_11 = frame.at(0).addr();
    r0_12 = thunk_007ca97c(r0_11);
    if (r0_12 == 0) {
        return r0_12;
    }
    r0_9 = thunk_007ca700(r0_12);
L_109bf0:;
    import_thunk_14f70c(thunk_0058c998(r0_9));
    return 1u;
}

}  // namespace d_00109b58
GUEST_EXPORT_FRAMED(0x00109b59, d_00109b58::boot_load_stage_3, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_00109c14: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Runs the boot stages not yet done (flags 0-4): core singletons and font/script, game singletons, NPC packages, stage
// 3, and the final setup; true when all are done.
namespace d_00109c14 {

inline constexpr guest::Function<0x00109931, u32(u32)> create_game_singletons;
inline constexpr guest::Function<0x00109a91, u32(u32)> load_npc_packages;
inline constexpr guest::Function<0x00109b59, u32(u32)> boot_load_stage_3;
inline constexpr guest::Function<0x002430ac, u32(u32)> RealEstate__reset;
inline constexpr guest::Function<0x002f737c, u32(u32, u32, u32, u32)> flag_bit;
inline constexpr guest::Function<0x00304bf4, u32(u32, u32)> set_bit_below_5;
inline constexpr guest::Function<0x003050e8, u32(u32)> sead__SafeStringBase_char___SafeStringBase_003050e8;
inline constexpr guest::Function<0x003050ec, u32(u32)> font__Mgr__create_instance_veneer;
inline constexpr guest::Function<0x003050f0, u32(u32)> script__Project__create_instance_veneer;
inline constexpr guest::Function<0x0030514c, u32(u32)> copy_table_9516c0_entry_veneer;
inline constexpr guest::Function<0x00305150, u32(u32)> thunk_00535798;

u32 ScBoot__load_stages(u32 sc_boot) {
    u32 r1 = 0;
    u32 bits = sc_boot;
    u32 r0_1 = flag_bit(sc_boot, 0u, guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0_1 == 0) {
        u32 r0_2 = sead__SafeStringBase_char___SafeStringBase_003050e8(r0_1);
        u32 r0_3 = font__Mgr__create_instance_veneer(r0_2);
        r1 = script__Project__create_instance_veneer(r0_3);
        if ((r1 & (r0_2 & r0_3)) == 0) {
            guest::cpu()->r[1] = r1;
            return 0u;
        }
        set_bit_below_5(bits, 0u);
    }
    if (flag_bit(bits, 1u, guest::cpu()->r[2], guest::cpu()->r[3]) == 0) {
        set_bit_below_5(bits, 1u);
        create_game_singletons(bits);
        goto L_109c60;
    }
    goto L_109c60;
L_109c60:;
    if (flag_bit(bits, 2u, guest::cpu()->r[2], guest::cpu()->r[3]) == 0) {
        sc_boot = load_npc_packages(bits);
        r1 = guest::cpu()->r[1];
        if (sc_boot == 0) {
            return sc_boot;
        }
        set_bit_below_5(bits, 2u);
    }
    if (flag_bit(bits, 3u, guest::cpu()->r[2], guest::cpu()->r[3]) == 0) {
        sc_boot = boot_load_stage_3(bits);
        r1 = guest::cpu()->r[1];
        if (sc_boot == 0) {
            return sc_boot;
        }
        set_bit_below_5(bits, 3u);
    }
    if (flag_bit(bits, 4u, guest::cpu()->r[2], guest::cpu()->r[3]) == 0) {
        set_bit_below_5(bits, 4u);
        copy_table_9516c0_entry_veneer(0u);
        RealEstate__reset(0u);
        thunk_00535798(0u);
    }
    return 1u;
}

}  // namespace d_00109c14
GUEST_EXPORT_FRAMED(0x00109c15, d_00109c14::ScBoot__load_stages, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_00109cc4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Chooses the scene after boot: the debug scene (0x62) with the right buttons held or in mode 4, else the title (0x5e)
// or the special start (0x9c).
namespace d_00109cc4 {

inline constexpr u32 boot_next_scene_address = 0x009506ccu;
inline guest::global<u32, 0x0094e4b8> popup_window;
inline guest::global<u32, 0x009506cc> boot_next_scene;
inline guest::global<u8, 0x00957224> global_00957224;
inline constexpr guest::Function<0x00304c1c, u32(u32)> pad_has_bit_110;
inline constexpr guest::Function<0x00304c68, u32(u32, u32, u32, u32)> call_5b4d7c_on_ac1948;
inline constexpr guest::Function<0x00305154, u32(u32, u32, u32, u32)> thunk_00521dd4;
inline constexpr guest::Function<0x0030516c, u32(u32)> thunk_00607b88;
inline constexpr guest::Function<0x00305170, u32(u32)> thunk_006078a4;

struct __attribute__((packed)) ScBootNextSceneFrame {
    u32 word_0;
};
GUEST_OFFSET(ScBootNextSceneFrame, word_0, 0x0);
GUEST_SIZE(ScBootNextSceneFrame, 0x4);

void ScBoot__next_scene(gptr<ScBoot> sc_boot, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<ScBootNextSceneFrame> frame;  // the original's stack frame
    u32 r0 = sc_boot.addr();
    u32 r0_6 = 0;
    u32 r1_7 = 0;
    frame->word_0 = r3;
    if (sc_boot->word_34 != 4u) {
        u32 r0_1 = *boot_next_scene;
        if (r0_1 == 0xbu) {
            goto L_109d2a;
        }
        thunk_00521dd4(r0_1, r1, r2, r3);
        if (pad_has_bit_110(1u) == 0) {
            goto L_109d2a;
        }
        if (pad_has_bit_110(2u) == 0) {
            goto L_109d2a;
        }
        if (pad_has_bit_110(8u) == 0) {
            goto L_109d2a;
        }
        u32 r0_5 = pad_has_bit_110(0x10u);
        if (r0_5 == 0) {
            goto L_109d2a;
        }
        thunk_00607b88(r0_5);
        frame->word_0 = 2;
        call_5b4d7c_on_ac1948(0x62u, 2u, 2u, 2u);
        return;
    }
    thunk_006078a4(r0);
    frame->word_0 = 2;
    call_5b4d7c_on_ac1948(0x62u, 2u, 2u, 2u);
    return;
L_109d2a:;
    if (*global_00957224 != 0) {
        *gptr<u8>(*popup_window + (5u << 9) + 0x10u) = 0;
        frame->word_0 = 1;
        r0_6 = 0x9cu;
        r1_7 = 1u;
    } else {
        frame->word_0 = 1;
        r0_6 = 0x5eu;
        r1_7 = 1u;
    }
    call_5b4d7c_on_ac1948(r0_6, r1_7, 0u, 1u);
}

}  // namespace d_00109cc4
GUEST_EXPORT_FRAMED(0x00109cc5, d_00109cc4::ScBoot__next_scene, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_00109d68: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Initializes the boot object and its two request records (kinds 0x540002 and 0x800000).
namespace d_00109d68 {

struct __attribute__((packed)) BootRequests {
    u8 unknown_0[0x78];  // (not used here)
    u8 byte_78;
};
GUEST_OFFSET(BootRequests, byte_78, 0x78);

inline constexpr guest::Function<0x00304ca4, u32(u32, u32, u32, u32)> init_request_record;
inline constexpr guest::Function<0x003051b8, u32(u32, u32)> thunk_00813b08;

u32 BootRequests__init(gptr<BootRequests> boot_requests) {
    thunk_00813b08(boot_requests.addr(), 0u);
    init_request_record(boot_requests.addr() + 8u, 0u, 0x540002u, 2u);
    init_request_record(boot_requests.addr() + 0x40u, 0u, 1u << 0x17, 0u);
    boot_requests->byte_78 = 0;
    return boot_requests.addr();
}

}  // namespace d_00109d68
GUEST_EXPORT_FRAMED(0x00109d69, d_00109d68::BootRequests__init, 0x4010);  // pushes {r4, lr} first, as the original

// f_00109da8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Picks the day's items for the season: three distinct items of categories 6 and 7 and two of category 9 (with the
// season's field), clearing the five slots first.
namespace d_00109da8 {

inline constexpr u32 empty_item_address = 0x0095bfdcu;
inline constexpr guest::Function<0x002fc288, u32(u32)> ItemBitSet__clear_and_return;
inline constexpr guest::Function<0x002fc8e8, u32(u32, u32, u32, u32)> Item__copy;
inline constexpr guest::Function<0x002fc8fc, u32(u32, u32, u32)> do_nothing_002fc8fc;
inline constexpr guest::Function<0x003004c4, u32(u32, u32, u32)> pick_distinct_items;
inline constexpr guest::Function<0x00302944, u32(u32, u32)> mark_category_in_set;
inline constexpr guest::Function<0x00302a5c, u32(u32, u32)> PtrArray__compact;
inline constexpr guest::Function<0x00304d30, u32(u32, u32, u32)> keep_items_with_field_15_high;
inline constexpr guest::Function<0x003051dc, u32(u32, u32, u32)> current_season_veneer;

void pick_seasonal_items(u32 r0, u32 r1_unused, u32 r2) {
    guest::StackFrame frame(0x2e8);  // the original's stack frame
    u32 r0_2 = 0;
    u32 i = 0u;
    u32 r5 = r0;
    u32 r6 = i;
    do {
        Item__copy((i << 2) + r5, empty_item_address, r2, guest::cpu()->r[3]);
        r2 = guest::cpu()->r[2];
        r0_2 = r5 + i + 0x20u;
        i += 1u;
        *gptr<u8>(r0_2 + 0x1cu) = u8(r6);
        guest::preempt();
    } while (s32(i) < 5);
    u32 r4_1 = 4u;
    u32 season_veneer = current_season_veneer(r0_2, guest::cpu()->r[1], r2);
    if (season_veneer != 0) {
        if (season_veneer == 1u) {
            r4_1 = 1u;
        } else if (season_veneer == 2u) {
            r4_1 = 2u;
        } else if (season_veneer == 3u) {
            r4_1 = 3u;
        }
    } else {
        r4_1 = 0u;
    }
    ItemBitSet__clear_and_return(frame.at(0).addr());
    mark_category_in_set(frame.at(0).addr(), 6u);
    mark_category_in_set(frame.at(0).addr(), 7u);
    PtrArray__compact(frame.at(0).addr(), 0xau);
    keep_items_with_field_15_high(frame.at(0).addr(), r4_1, 1u);
    pick_distinct_items(r5, 3u, frame.at(0).addr());
    do_nothing_002fc8fc(frame.at(0).addr(), guest::cpu()->r[1], guest::cpu()->r[2]);
    ItemBitSet__clear_and_return(frame.at(0).addr());
    mark_category_in_set(frame.at(0).addr(), 9u);
    PtrArray__compact(frame.at(0).addr(), 0xau);
    keep_items_with_field_15_high(frame.at(0).addr(), r4_1, 1u);
    u32 r0_14 = r5 + 0xcu;
    u32 r2_10 = frame.at(0).addr();
    pick_distinct_items(r0_14, 2u, r2_10);
    do_nothing_002fc8fc(r0_14, guest::cpu()->r[1], r2_10);
}

}  // namespace d_00109da8
GUEST_EXPORT_FRAMED(0x00109da9, d_00109da8::pick_seasonal_items, 0x4070);  // pushes {i, r5, r6, lr} first, as the original

// f_00109ff8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Clears a 0x43cc-byte town record, its part at +0x4c and its encrypted value.
namespace d_00109ff8 {

inline constexpr guest::Function<0x001e0114, u32(u32)> PatternSet8__clear;
inline constexpr guest::Function<0x002f825c, u32(u32, u32, u32, u32)> clear_aligned;
inline constexpr guest::Function<0x00303534, u32(u32, u32)> EncryptedInt__set;

void TownRecord43cc__clear(u32 town_record43cc) {
    clear_aligned(town_record43cc, 0x43ccu, guest::cpu()->r[2], guest::cpu()->r[3]);
    PatternSet8__clear(town_record43cc + 0x4cu);
    EncryptedInt__set(town_record43cc + 0x34u, 0u);
}

}  // namespace d_00109ff8
GUEST_EXPORT_FRAMED(0x00109ff9, d_00109ff8::TownRecord43cc__clear, 0x4010);  // pushes {r4, lr} first, as the original

// f_0010a0cc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Stores four bytes (the fourth from the stack).
namespace d_0010a0cc {

struct __attribute__((packed)) StoreFourBytesArg0 {
    u8 byte_0;
    u8 byte_1;
    u8 byte_2;
    u8 byte_3;
};
GUEST_OFFSET(StoreFourBytesArg0, byte_0, 0x0);
GUEST_OFFSET(StoreFourBytesArg0, byte_1, 0x1);
GUEST_OFFSET(StoreFourBytesArg0, byte_2, 0x2);
GUEST_OFFSET(StoreFourBytesArg0, byte_3, 0x3);


void store_four_bytes(gptr<StoreFourBytesArg0> arg0, u32 r1, u32 r2, u32 r3) {
    arg0->byte_3 = u8(*gptr<u32>(guest::cpu()->r[13] + 4u));
    arg0->byte_0 = u8(r1);
    arg0->byte_1 = u8(r2);
    arg0->byte_2 = u8(r3);
}

}  // namespace d_0010a0cc
GUEST_EXPORT_FRAMED(0x0010a0cd, d_0010a0cc::store_four_bytes, 0x10);  // pushes {r4} first, as the original

// f_0010a0dc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Stores four bytes, the stack one second.
namespace d_0010a0dc {

struct __attribute__((packed)) StoreFourBytesSwappedArg0 {
    u8 byte_0;
    u8 byte_1;
    u8 byte_2;
    u8 byte_3;
};
GUEST_OFFSET(StoreFourBytesSwappedArg0, byte_0, 0x0);
GUEST_OFFSET(StoreFourBytesSwappedArg0, byte_1, 0x1);
GUEST_OFFSET(StoreFourBytesSwappedArg0, byte_2, 0x2);
GUEST_OFFSET(StoreFourBytesSwappedArg0, byte_3, 0x3);


void store_four_bytes_swapped(gptr<StoreFourBytesSwappedArg0> arg0, u32 r1, u32 r2, u32 r3) {
    u32 r4_1 = *gptr<u32>(guest::cpu()->r[13] + 4u);
    arg0->byte_0 = u8(r1);
    arg0->byte_1 = u8(r4_1);
    arg0->byte_2 = u8(r2);
    arg0->byte_3 = u8(r3);
}

}  // namespace d_0010a0dc
GUEST_EXPORT_FRAMED(0x0010a0dd, d_0010a0dc::store_four_bytes_swapped, 0x10);  // pushes {r4} first, as the original

// f_0010a2cc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Initializes the new-town parts of the town flags block (+0x9c, +0x4650, +0x8b32).
namespace d_0010a2cc {

inline constexpr guest::Function<0x00109e65, u32(u32, u32, u32, u32)> PatternSet__init_records;
inline constexpr guest::Function<0x0010a301, u32(u32, u32, u32, u32)> Event__give_item_once;
inline constexpr guest::Function<0x0010a9bd, u32(u32)> TailorShop__init_new;

void TownFlags__init_new(u32 town_flags) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    PatternSet__init_records(town_flags + 0x9cu, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    TailorShop__init_new(town_flags + 0x4650u);
    frame.release();
    Event__give_item_once(town_flags + 0x8b32u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    return;
}

}  // namespace d_0010a2cc
GUEST_EXPORT(0x0010a2cc, d_0010a2cc::TownFlags__init_new);

// f_0010a400: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Clears a 0x20-byte reward record (kind 0) and its four items.
namespace d_0010a400 {

struct __attribute__((packed)) RewardRecord {
    u8 unknown_0[0x2];  // (not used here)
    u8 byte_2;
};
GUEST_OFFSET(RewardRecord, byte_2, 0x2);

inline constexpr u32 empty_item_address = 0x0095bfdcu;
inline constexpr guest::Function<0x0024ddec, u32(u32)> IdSlots6__clear;
inline constexpr guest::Function<0x002fc8e8, u32(u32, u32)> Item__copy;
inline constexpr guest::Function<0x00301444, u32(u32, u32, u32, u32)> clear;
inline constexpr guest::Function<0x00305280, u32(u32, u32)> init_reward_entry_2;

void RewardRecord__clear(gptr<RewardRecord> reward_record) {
    clear(reward_record.addr(), 0x20u, guest::cpu()->r[2], guest::cpu()->r[3]);
    init_reward_entry_2(reward_record.addr(), 0u);
    IdSlots6__clear(reward_record.addr());
    reward_record->byte_2 = 0;
    Item__copy(reward_record.addr() + 0x10u, empty_item_address);
    Item__copy(reward_record.addr() + 0x14u, empty_item_address);
    Item__copy(reward_record.addr() + 0x18u, empty_item_address);
    Item__copy(reward_record.addr() + 0x1cu, empty_item_address);
}

}  // namespace d_0010a400
GUEST_EXPORT_FRAMED(0x0010a401, d_0010a400::RewardRecord__clear, 0x4010);  // pushes {r4, lr} first, as the original

// f_0010a44c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Advances the reward by `days`: from state 1 counts its days down (to state 2 when the daily check fails), from state
// 0 starts it when flagged.
namespace d_0010a44c {

struct __attribute__((packed)) RewardRecord {
    u8 byte_0;
    u8 byte_1;
    u8 byte_2;
};
GUEST_OFFSET(RewardRecord, byte_0, 0x0);
GUEST_OFFSET(RewardRecord, byte_1, 0x1);
GUEST_OFFSET(RewardRecord, byte_2, 0x2);

struct __attribute__((packed)) Now {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Now, word_0, 0x0);
GUEST_OFFSET(Now, word_4, 0x4);
GUEST_OFFSET(Now, word_8, 0x8);

inline constexpr guest::Function<0x002fb378, u32(u32, u32, u32, u32)> game_time_now;
inline constexpr guest::Function<0x00305280, u32(u32, u32, u32, u32)> init_reward_entry_2;
inline constexpr guest::Function<0x0030556c, u32(u32, u32, u32, u32)> daily_event_check_58e228_veneer;

void RewardRecord__advance_days(gptr<RewardRecord> reward_record, u32 r1, u32 r2, u32 r3) {
    if (r1 == 0) {
        return;
    }
    u32 r0_1 = reward_record->byte_0;
    if (r0_1 != 0) {
        if (r0_1 != 1u || s32(r1) <= 0) {
            return;
        }
        u32 r0_2 = *gptr<s8>(reward_record.addr() + r0_1);
        if (s32(r0_2) <= 0) {
            return;
        }
        u32 r0_3 = sxtb(r0_2 - r1);
        reward_record->byte_1 = u8(r0_3);
        if (s32(r0_3) > 0) {
            return;
        }
        reward_record->byte_1 = 0;
        gptr<Now> now_2 = gptr<Now>(game_time_now(0u, r1, r2, r3));
        if (daily_event_check_58e228_veneer(now_2->word_0, now_2->word_4, now_2->word_8, 1u) == 0) {
            init_reward_entry_2(reward_record.addr(), 2u, guest::cpu()->r[2], guest::cpu()->r[3]);
            return;
        }
        reward_record->byte_1 = 1;
        return;
    }
    if (reward_record->byte_2 == 0) {
        return;
    }
    init_reward_entry_2(reward_record.addr(), 1u, r2, r3);
}

}  // namespace d_0010a44c
GUEST_EXPORT_FRAMED(0x0010a44d, d_0010a44c::RewardRecord__advance_days, 0x4010);  // pushes {r4, lr} first, as the original

// f_0010a4a8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Clears three words and the part after them.
namespace d_0010a4a8 {

struct __attribute__((packed)) ClearRecord8b54Arg0 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(ClearRecord8b54Arg0, word_0, 0x0);
GUEST_OFFSET(ClearRecord8b54Arg0, word_4, 0x4);
GUEST_OFFSET(ClearRecord8b54Arg0, word_8, 0x8);

inline constexpr guest::Function<0x0024dea8, u32(u32, u32, u32, u32)> set_state_and_flag_6214f;

void clear_record_8b54(gptr<ClearRecord8b54Arg0> arg0) {
    arg0->word_0 = 0;
    arg0->word_4 = 0;
    arg0->word_8 = 0;
    set_state_and_flag_6214f(arg0.addr(), 0u, guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0010a4a8
GUEST_EXPORT_FRAMED(0x0010a4a9, d_0010a4a8::clear_record_8b54, 0x4010);  // pushes {r4, lr} first, as the original

// f_0010a800: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Clears a visiting-shop record: four items with their owner identities, flags and encrypted prices.
namespace d_0010a800 {

inline constexpr u32 empty_item_address = 0x0095bfdcu;
inline constexpr guest::Function<0x002f825c, u32(u32, u32, u32, u32)> clear_aligned;
inline constexpr guest::Function<0x002fc8e8, u32(u32, u32)> Item__copy;
inline constexpr guest::Function<0x00303534, u32(u32, u32)> EncryptedInt__set;
inline constexpr guest::Function<0x003052f0, u32(u32)> clear_identity_with_flags;

void VisitorShop__clear(u32 visitor_shop) {
    u32 r5 = visitor_shop;
    clear_aligned(visitor_shop, 0xecu, guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 i = 0u;
    u32 r6 = i;
    do {
        Item__copy((i << 2) + r5, empty_item_address);
        clear_identity_with_flags(0x2eu * i + r5 + 0x14u);
        EncryptedInt__set((i << 3) + r5 + 0xccu, 0u);
        u32 r0_4 = r5 + i;
        i += 1u;
        *gptr<u8>(r0_4 + 0x10u) = u8(r6);
        guest::preempt();
    } while (s32(i) < 4);
}

}  // namespace d_0010a800
GUEST_EXPORT_FRAMED(0x0010a801, d_0010a800::VisitorShop__clear, 0x4070);  // pushes {i, r5, r6, lr} first, as the original

// f_0010a840: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Renews the visiting shop for the day and sends the shopkeeper's letter when due.
namespace d_0010a840 {

struct __attribute__((packed)) Local_0010a840_r0_24 {
    u8 unknown_0[0x1];  // (not used here)
    u8 byte_1;
};
GUEST_OFFSET(Local_0010a840_r0_24, byte_1, 0x1);

struct __attribute__((packed)) Local_0010a840_r0_26 {
    u8 byte_0;
};
GUEST_OFFSET(Local_0010a840_r0_26, byte_0, 0x0);

struct __attribute__((packed)) Local_0010a840_r0_7 {
    u8 byte_0;
};
GUEST_OFFSET(Local_0010a840_r0_7, byte_0, 0x0);

inline constexpr u32 empty_item_address = 0x0095bfdcu;
inline constexpr u32 global_0095c3a8_address = 0x0095c3a8u;
inline constexpr guest::Function<0x002f777c, u32(u32)> do_nothing_002f777c;
inline constexpr guest::Function<0x002f77e8, u32(u32, u32, u32)> same_pointer;
inline constexpr guest::Function<0x002fb96c, u32(u32, u32, u32, u32)> player_for_slot;
inline constexpr guest::Function<0x002fbd54, u32(u32, u32, u32, u32)> PersonalId__is_set;
inline constexpr guest::Function<0x002fc8e8, u32(u32, u32)> Item__copy;
inline constexpr guest::Function<0x002fcaf4, u32(u32, u32, u32, u32)> Item__is_empty;
inline constexpr guest::Function<0x002fcb34, u32(u32, u32, u32)> Item__category;
inline constexpr guest::Function<0x002fcbb0, u32(u32, u32)> construct_item;
inline constexpr guest::Function<0x002ff368, u32(u32, u32, u32, u32)> Letter__Letter;
inline constexpr guest::Function<0x002ff4d4, u32(u32, u32, u32, u32)> Item__check_property;
inline constexpr guest::Function<0x002ff6f8, u32(u32)> random_below;
inline constexpr guest::Function<0x00305894, u32(u32, u32, u32, u32)> namespace___SimpleFuncDelegate__SimpleFuncDelegate_005cc2f4_veneer;
inline constexpr guest::Function<0x00305898, u32(u32, u32, u32)> set_held_item_veneer;
inline constexpr guest::Function<0x0030589c, u32(u32, u32, u32)> PlayerRef__clear;

struct __attribute__((packed)) VisitorShopRenewFrame {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u8 unknown_c[0x288];  // (not read or written by name)
};
GUEST_OFFSET(VisitorShopRenewFrame, word_0, 0x0);
GUEST_OFFSET(VisitorShopRenewFrame, word_4, 0x4);
GUEST_OFFSET(VisitorShopRenewFrame, word_8, 0x8);
GUEST_SIZE(VisitorShopRenewFrame, 0x294);

void VisitorShop__renew(u32 r0_unused, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<VisitorShopRenewFrame> frame;  // the original's stack frame
    u32 i = 0;
    u32 r1_5 = 0;
    u32 r2_8 = 0;
    gptr<Local_0010a840_r0_24> r0_24 = gptr<Local_0010a840_r0_24>(0u);
    u32 r6 = 0x55a6u;
    u32 r7 = 0x5700u;
    if (r1 != 0) {
        i = 0u;
        do {
            u32 player = player_for_slot(uxtb(i), r1, r2, r3);
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            if (player != 0) {
                u32 r0_4 = PersonalId__is_set(player + r6, r1, r2, r3);
                r1 = guest::cpu()->r[1];
                r2 = guest::cpu()->r[2];
                r3 = guest::cpu()->r[3];
                if (r0_4 != 0) {
                    u32 is_empty = Item__is_empty(player + 0x8f0eu, r1, r2, r3);
                    r1 = guest::cpu()->r[1];
                    r2 = guest::cpu()->r[2];
                    r3 = guest::cpu()->r[3];
                    if (is_empty == 0) {
                        gptr<Local_0010a840_r0_7> r0_7 = gptr<Local_0010a840_r0_7>(player + r7 + 0x20u);
                        r2 = 0x20u;
                        r1 = u32(r0_7->byte_0) | r2;
                        r0_7->byte_0 = u8(r1);
                    }
                }
            }
            i += 1u;
            guest::preempt();
        } while (s32(i) < 4);
    }
    i = 0u;
    do {
        u32 player_2 = player_for_slot(uxtb(i), r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (player_2 != 0) {
            u32 r0_10 = player_2 + 0x55a6u;
            u32 r0_11 = PersonalId__is_set(r0_10, r1, r2, r3);
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            if (r0_11 != 0) {
                u32 r0_12 = player_2 + 0x8f0eu;
                u32 is_empty_2 = Item__is_empty(r0_12, r1, r2, r3);
                r1 = guest::cpu()->r[1];
                r2 = guest::cpu()->r[2];
                r3 = guest::cpu()->r[3];
                if (is_empty_2 == 0 && (u32(*gptr<u8>(player_2 + 0x5720u)) >> 5 & 1u) != 0u) {
                    Letter__Letter(frame.at(0x10).addr(), r1, r2, r3);
                    Item__copy(global_0095c3a8_address, r0_12);
                    frame->word_0 = construct_item(frame.at(0xc).addr(), 0x227cu);
                    u32 random = random_below(3u);
                    frame->word_8 = 0x24e080;
                    frame->word_4 = 0xd;
                    namespace___SimpleFuncDelegate__SimpleFuncDelegate_005cc2f4_veneer(frame.at(0x10).addr(), 0x10a978u, random + 1u, r0_10);
                    do_nothing_002f777c(frame.at(0xc).addr());
                    set_held_item_veneer(frame.at(0x10).addr(), r0_12, 0u);
                    u32 r0_21 = Item__check_property(frame.at(0x10).addr(), 3u, 0u, 0u);
                    u32 r1_3 = guest::cpu()->r[1];
                    u32 r2_6 = guest::cpu()->r[2];
                    if (r0_21 != 0) {
                        u32 category = Item__category(r0_12, r1_3, r2_6);
                        if (category != 0x55u) {
                            u32 category_2 = Item__category(r0_12, guest::cpu()->r[1], guest::cpu()->r[2]);
                            r1_5 = guest::cpu()->r[1];
                            r2_8 = guest::cpu()->r[2];
                            if (category_2 != 0x59u) {
                                goto L_10a92a;
                            }
                        }
                        r1_5 = 1u;
                        r0_24 = gptr<Local_0010a840_r0_24>(player_2 + (0x57u << 8));
                        r2_8 = u32(r0_24->byte_1) | r1_5;
                        r0_24->byte_1 = u8(r2_8);
L_10a92a:;
                        PlayerRef__clear(player_2 + 0x8f12u, r1_5, r2_8);
                        Item__copy(r0_12, empty_item_address);
                        r1_3 = 0xdfu;
                        gptr<Local_0010a840_r0_26> r0_26 = gptr<Local_0010a840_r0_26>(player_2 + (0x57u << 8) + 0x20u);
                        r2_6 = u32(r0_26->byte_0) & r1_3;
                        r0_26->byte_0 = u8(r2_6);
                    }
                    same_pointer(frame.at(0x10).addr(), r1_3, r2_6);
                    r1 = guest::cpu()->r[1];
                    r2 = guest::cpu()->r[2];
                    r3 = guest::cpu()->r[3];
                }
            }
        }
        i += 1u;
        guest::preempt();
    } while (s32(i) < 4);
}

}  // namespace d_0010a840
GUEST_EXPORT_FRAMED(0x0010a841, d_0010a840::VisitorShop__renew, 0x40f0);  // pushes {r4, i, r6, r7, lr} first, as the original

// f_0010a9bc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Initializes the tailor shop's records for a new town (display patterns and items picked at random).
namespace d_0010a9bc {

struct __attribute__((packed)) Local_0010a9bc_r3_6 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_0010a9bc_r3_6, word_0, 0x0);
GUEST_OFFSET(Local_0010a9bc_r3_6, word_4, 0x4);
GUEST_OFFSET(Local_0010a9bc_r3_6, word_8, 0x8);

inline guest::global<u32, 0x0088f624> global_0088f624;
inline guest::global<u32, 0x0088f628> global_0088f628;
inline guest::global<u32, 0x0088f62c> global_0088f62c;
inline constexpr guest::Function<0x001b3f24, u32(u32, u32, u32, u32)> sead__FixedSafeString_30___FixedSafeString_001b3f24;
inline constexpr guest::Function<0x002f777c, u32(u32)> do_nothing_002f777c;
inline constexpr guest::Function<0x002fae84, u32(u32, u32, u32, u32)> get_data_base;
inline constexpr guest::Function<0x002fb310, u32(u32)> slot_records_of;
inline constexpr guest::Function<0x002fcbb0, u32(u32, u32, u32, u32)> construct_item;
inline constexpr guest::Function<0x002ff6f8, u32(u32, u32, u32, u32)> random_below;
inline constexpr guest::Function<0x003058c9, u32(u32, u32)> valid_villager_at;
inline constexpr guest::Function<0x003058ec, u32(u32, u32, u32, u32)> set_slot;

struct __attribute__((packed)) TailorShopInitNewFrame {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u8 unknown_c[0x4];  // (not read or written by name)
    u32 word_10;
    u32 word_14;
    u8 unknown_18[0x4];  // (not read or written by name)
};
GUEST_OFFSET(TailorShopInitNewFrame, word_0, 0x0);
GUEST_OFFSET(TailorShopInitNewFrame, word_4, 0x4);
GUEST_OFFSET(TailorShopInitNewFrame, word_8, 0x8);
GUEST_OFFSET(TailorShopInitNewFrame, word_10, 0x10);
GUEST_OFFSET(TailorShopInitNewFrame, word_14, 0x14);
GUEST_SIZE(TailorShopInitNewFrame, 0x1c);

u32 TailorShop__init_new(u32 tailor_shop, u32 r1_unused, u32 r2, u32 r3) {
    guest::StackFrameOf<TailorShopInitNewFrame> frame;  // the original's stack frame
    u32 r1 = 0;
    u32 r6 = 0;
    u32 r0_7 = 0;
    u32 r0_8 = 0;
    u32 r0_15 = 0;
    u32 r0_16 = 0;
    u32 r0_20 = 0;
    u32 r0_21 = 0;
    u32 r1_10 = 0;
    u32 r0_23 = 0;
    u32 r1_11 = 0;
    u32 r0_24 = 0;
    u32 r0_25 = 0;
    u32 i = 0u;
    u32 r5 = tailor_shop;
    do {
        tailor_shop = sead__FixedSafeString_30___FixedSafeString_001b3f24((0x87u << 4) * i + r5 + 0x7cu, 0x16u, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        i += 1u;
        guest::preempt();
    } while (s32(i) < 8);
    i = 0u;
L_10a9dc:;
    u32 data_base = get_data_base(tailor_shop, r1, r2, r3);
    u32 records = slot_records_of(data_base);
    tailor_shop = valid_villager_at(records + 4u, i);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (tailor_shop == 0) {
        goto L_10aafc;
    }
    if (i < 0xau) {
        u32 r0_5 = frame.at(4).addr();
        construct_item(r0_5, 0x2c81u, r2, r3);
        frame->word_0 = 0x78;
        set_slot(r5, 4u, r0_5, i);
        tailor_shop = do_nothing_002f777c(frame.at(4).addr());
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        i += 1u;
    }
L_10aa14:;
    r6 = 0x88f484u;
L_10aa16:;
    r0_7 = get_data_base(tailor_shop, r1, r2, r3);
    r0_8 = slot_records_of(r0_7);
    tailor_shop = valid_villager_at(r0_8 + 4u, i);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (tailor_shop == 0) {
        goto L_10ab04;
    }
    if (i < 0xau) {
        u32 r0_10 = *gptr<u32>(r6 + 8u);
        frame->word_14 = *gptr<u32>(r6 + 0xcu);
        frame->word_10 = r0_10;
        u32 r0_11 = *global_0088f624;
        u32 r1_4 = *global_0088f628;
        u32 r2_6 = *global_0088f62c;
        gptr<Local_0010a9bc_r3_6> r3_6 = gptr<Local_0010a9bc_r3_6>(frame.at(4).addr());
        r3_6->word_0 = r0_11;
        r3_6->word_4 = r1_4;
        r3_6->word_8 = r2_6;
        u32 random = random_below(3u, r1_4, r2_6, r3_6.addr() + 0xc);
        u32 r1_5 = gptr<u16>(frame.at(0x10).addr())[random];
        u32 r0_13 = frame.at(0x18).addr();
        construct_item(r0_13, r1_5, guest::cpu()->r[2], guest::cpu()->r[3]);
        frame->word_0 = gptr<u32>(frame.at(4).addr())[random];
        set_slot(r5, 5u, r0_13, i);
        tailor_shop = do_nothing_002f777c(frame.at(0x18).addr());
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        i += 1u;
    }
L_10aa70:;
    r0_15 = get_data_base(tailor_shop, r1, r2, r3);
    r0_16 = slot_records_of(r0_15);
    tailor_shop = valid_villager_at(r0_16 + 4u, i);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (tailor_shop == 0) {
        goto L_10ab0c;
    }
    if (i < 0xau) {
        u32 r0_18 = frame.at(4).addr();
        construct_item(r0_18, 0x2c59u, r2, r3);
        frame->word_0 = 0x1f4;
        set_slot(r5, 6u, r0_18, i);
        tailor_shop = do_nothing_002f777c(frame.at(4).addr());
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        i += 1u;
    }
L_10aaaa:;
    r0_20 = get_data_base(tailor_shop, r1, r2, r3);
    r0_21 = slot_records_of(r0_20);
    tailor_shop = valid_villager_at(r0_21 + 4u, i);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (tailor_shop == 0) {
        goto L_10ab14;
    }
    if (i >= 0xau) {
        return tailor_shop;
    }
    r1_10 = *gptr<u32>(r6 + 0x14u);
    frame->word_4 = *gptr<u32>(r6 + 0x10u);
    frame->word_8 = r1_10;
    r0_23 = random_below(3u, r1_10, r2, r3);
    r1_11 = gptr<u16>(frame.at(4).addr())[r0_23];
    r0_24 = frame.at(0xc).addr();
    construct_item(r0_24, r1_11, guest::cpu()->r[2], guest::cpu()->r[3]);
    frame->word_0 = 0x19u << 5;
    goto L_10aaee;
L_10aaee:;
    set_slot(r5, 7u, r0_24, i);
    r0_25 = frame.at(0xc).addr();
    tailor_shop = do_nothing_002f777c(r0_25);
    r1 = guest::cpu()->r[1];
    return tailor_shop;
L_10aafc:;
    if (i >= 0xau) {
        guest::preempt();
        goto L_10aa14;
    }
    i += 1u;
    guest::preempt();
    goto L_10a9dc;
L_10ab04:;
    if (i >= 0xau) {
        guest::preempt();
        goto L_10aa70;
    }
    i += 1u;
    guest::preempt();
    goto L_10aa16;
L_10ab0c:;
    if (i >= 0xau) {
        guest::preempt();
        goto L_10aaaa;
    }
    i += 1u;
    guest::preempt();
    goto L_10aa70;
L_10ab14:;
    if (i >= 0xau) {
        guest::cpu()->r[1] = r1;
        return tailor_shop;
    }
    i += 1u;
    guest::preempt();
    goto L_10aaaa;
}

}  // namespace d_0010a9bc
GUEST_EXPORT_FRAMED(0x0010a9bd, d_0010a9bc::TailorShop__init_new, 0x40f0);  // pushes {i, r5, r6, r7, lr} first, as the original

// f_0010ab2c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Clears the tailor shop: eight display patterns (item 0x2085, owner -1, price, pattern), five empty items and four
// encrypted values.
namespace d_0010ab2c {

inline constexpr guest::Function<0x002f777c, u32(u32)> do_nothing_002f777c;
inline constexpr guest::Function<0x002f825c, u32(u32, u32, u32, u32)> clear_aligned;
inline constexpr guest::Function<0x002fc8e8, u32(u32, u32, u32)> Item__copy;
inline constexpr guest::Function<0x002fcbb0, u32(u32, u32, u32, u32)> construct_item;
inline constexpr guest::Function<0x00303534, u32(u32, u32, u32, u32)> EncryptedInt__set;
inline constexpr guest::Function<0x003059f8, u32(u32)> Pattern__clear;

struct __attribute__((packed)) TailorShopClearFrame {
    u32 word_0;
};
GUEST_OFFSET(TailorShopClearFrame, word_0, 0x0);
GUEST_SIZE(TailorShopClearFrame, 0x4);

void TailorShop__clear(u32 tailor_shop, u32 r1_unused, u32 r2, u32 r3) {
    guest::StackFrameOf<TailorShopClearFrame> frame;  // the original's stack frame
    frame->word_0 = r3;
    u32 r5 = tailor_shop;
    clear_aligned(tailor_shop, 0x441cu, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    u32 r7 = 0x2085u;
    u32 i = 0u;
    u32 r6 = i - 1u;
    do {
        u32 r0_1 = frame.at(0).addr();
        construct_item(r0_1, r7, r2, r3);
        Item__copy((i << 2) + r5 + 0x14u, r0_1, guest::cpu()->r[2]);
        do_nothing_002f777c(frame.at(0).addr());
        *gptr<u8>(r5 + i + 0x34u) = u8(r6);
        EncryptedInt__set((i << 3) + r5 + 0x3cu, 0u, guest::cpu()->r[2], guest::cpu()->r[3]);
        Pattern__clear((0x87u << 4) * i + r5 + 0x7cu);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        i += 1u;
        guest::preempt();
    } while (s32(i) < 8);
    r6 = 0x7ffeu;
    i = 0u;
    do {
        u32 r0_6 = frame.at(0).addr();
        construct_item(r0_6, r6, r2, r3);
        u32 r2_5 = (i << 2) + r5;
        Item__copy(r2_5, r0_6, r2_5);
        do_nothing_002f777c(frame.at(0).addr());
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        i += 1u;
        guest::preempt();
    } while (s32(i) < 5);
    r6 = 0x43fcu;
    i = 0u;
    do {
        EncryptedInt__set((i << 3) + r5 + r6, 0u, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        i += 1u;
        guest::preempt();
    } while (s32(i) < 4);
}

}  // namespace d_0010ab2c
GUEST_EXPORT_FRAMED(0x0010ab2d, d_0010ab2c::TailorShop__clear, 0x40f0);  // pushes {i, r5, r6, r7, lr} first, as the original

// f_0010abc8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// For each existing player: deposits their pattern sales (encrypted at +0x43fc) into the bank, flags bit 7 of +0x5715
// and records the balance; then clears the four sales.
namespace d_0010abc8 {

struct __attribute__((packed)) Local_0010abc8_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
};
GUEST_OFFSET(Local_0010abc8_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_0010abc8_ea_1, word_4, 0x4);
GUEST_OFFSET(Local_0010abc8_ea_1, word_8, 0x8);
GUEST_OFFSET(Local_0010abc8_ea_1, word_c, 0xc);
GUEST_OFFSET(Local_0010abc8_ea_1, word_10, 0x10);
GUEST_OFFSET(Local_0010abc8_ea_1, word_14, 0x14);

struct __attribute__((packed)) Local_0010abc8_r0_9 {
    u8 unknown_0[0x15];  // (not used here)
    u8 byte_15;
};
GUEST_OFFSET(Local_0010abc8_r0_9, byte_15, 0x15);

inline constexpr guest::Function<0x002fb96c, u32(u32, u32, u32, u32)> player_for_slot;
inline constexpr guest::Function<0x002fbd54, u32(u32)> PersonalId__is_set;
inline constexpr guest::Function<0x002fd068, u32(u32)> get_counter_block;
inline constexpr guest::Function<0x00303534, u32(u32, u32)> EncryptedInt__set;
inline constexpr guest::Function<0x00303660, u32(u32, u32, u32)> EncryptedInt__get;
inline constexpr guest::Function<0x00305940, u32(u32, u32, u32)> ClampedCounters__set_count_veneer;
inline constexpr guest::Function<0x00305a40, u32(u32, u32)> SavePlayer__deposit;

struct __attribute__((packed)) TailorShopPayOutSalesFrame {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 tpc;
};
GUEST_OFFSET(TailorShopPayOutSalesFrame, word_0, 0x0);
GUEST_OFFSET(TailorShopPayOutSalesFrame, word_4, 0x4);
GUEST_OFFSET(TailorShopPayOutSalesFrame, word_8, 0x8);
GUEST_OFFSET(TailorShopPayOutSalesFrame, word_c, 0xc);
GUEST_OFFSET(TailorShopPayOutSalesFrame, word_10, 0x10);
GUEST_OFFSET(TailorShopPayOutSalesFrame, tpc, 0x14);
GUEST_SIZE(TailorShopPayOutSalesFrame, 0x18);

void TailorShop__pay_out_sales(u32 tailor_shop, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<TailorShopPayOutSalesFrame> frame;  // the original's stack frame
    u32 i = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r14 = guest::cpu()->r[14];
    if (r1 == 0) {
        return;
    }
    gptr<Local_0010abc8_ea_1> ea_1 = gptr<Local_0010abc8_ea_1>(frame.at(0).addr());
    ea_1->word_0 = r3;
    ea_1->word_4 = i;
    ea_1->word_8 = r5;
    ea_1->word_c = r6;
    ea_1->word_10 = r7;
    ea_1->word_14 = r14;
    i = 0u;
    r6 = tailor_shop;
    r7 = 0x43fcu;
    do {
        u32 player = player_for_slot(uxtb(i), r1, r2, r3);
        if (player != 0) {
            if (PersonalId__is_set(player + 0x55a6u) != 0) {
                u32 r0_5 = (i << 3) + r6 + r7;
                frame->word_0 = r0_5;
                if (EncryptedInt__get(r0_5, guest::cpu()->r[1], guest::cpu()->r[2]) != 0) {
                    SavePlayer__deposit(player, EncryptedInt__get(frame->word_0, guest::cpu()->r[1], guest::cpu()->r[2]));
                    gptr<Local_0010abc8_r0_9> r0_9 = gptr<Local_0010abc8_r0_9>(player + (0x57u << 8));
                    u32 r2_3 = u32(r0_9->byte_15) | 0x80u;
                    r0_9->byte_15 = u8(r2_3);
                    u32 r0_11 = EncryptedInt__get(player + 0x6b8cu, 0x80u, r2_3);
                    u32 counter_block = get_counter_block(r0_11);
                    ClampedCounters__set_count_veneer(counter_block, i, r0_11);
                }
            }
        }
        EncryptedInt__set((i << 3) + r6 + r7, 0u);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        i += 1u;
        guest::preempt();
    } while (s32(i) < 4);
    u32 r4_1 = frame->word_4;
    u32 r5_1 = frame->word_8;
    u32 r6_1 = frame->word_c;
    u32 r7_1 = frame->word_10;
    u32 tpc_1 = frame->tpc;
    guest::cpu()->r[4] = r4_1;
    guest::cpu()->r[5] = r5_1;
    guest::cpu()->r[6] = r6_1;
    guest::cpu()->r[7] = r7_1;
}

}  // namespace d_0010abc8
GUEST_EXPORT(0x0010abc9, d_0010abc8::TailorShop__pay_out_sales);

// f_0010ac50: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Copies an outfit: eight items and the flag byte.
namespace d_0010ac50 {

struct __attribute__((packed)) Outfit {
    u8 unknown_0[0x20];  // (not used here)
    u8 byte_20;
};
GUEST_OFFSET(Outfit, byte_20, 0x20);

struct __attribute__((packed)) OutfitCopyArg1 {
    u8 unknown_0[0x20];  // (not used here)
    u8 byte_20;
};
GUEST_OFFSET(OutfitCopyArg1, byte_20, 0x20);

inline constexpr guest::Function<0x002fc8e8, u32(u32, u32)> Item__copy;

void Outfit__copy(gptr<Outfit> outfit, gptr<OutfitCopyArg1> arg1) {
    Item__copy(outfit.addr(), arg1.addr());
    Item__copy(outfit.addr() + 4u, arg1.addr() + 4u);
    Item__copy(outfit.addr() + 8u, arg1.addr() + 8u);
    Item__copy(outfit.addr() + 0xcu, arg1.addr() + 0xcu);
    Item__copy(outfit.addr() + 0x10u, arg1.addr() + 0x10u);
    Item__copy(outfit.addr() + 0x14u, arg1.addr() + 0x14u);
    Item__copy(outfit.addr() + 0x18u, arg1.addr() + 0x18u);
    Item__copy(outfit.addr() + 0x1cu, arg1.addr() + 0x1cu);
    u32 r1_8 = arg1->byte_20;
    outfit->byte_20 = u8(r1_8);
    guest::cpu()->r[1] = r1_8;
}

}  // namespace d_0010ac50
GUEST_EXPORT_FRAMED(0x0010ac51, d_0010ac50::Outfit__copy, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0010acb8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Picks the museum shop's items by which collections are complete (insects, fish, fossils, art).
namespace d_0010acb8 {

inline constexpr u32 empty_item_address = 0x0095bfdcu;
inline constexpr guest::Function<0x002f777c, u32(u32)> do_nothing_002f777c;
inline constexpr guest::Function<0x002fb328, u32(u32)> get_save_data;
inline constexpr guest::Function<0x002fc288, u32(u32, u32, u32, u32)> ItemBitSet__clear_and_return;
inline constexpr guest::Function<0x002fc8e8, u32(u32, u32, u32, u32)> Item__copy;
inline constexpr guest::Function<0x002fc8fc, u32(u32, u32, u32)> do_nothing_002fc8fc;
inline constexpr guest::Function<0x002fcbb0, u32(u32, u32)> construct_item;
inline constexpr guest::Function<0x002fe9c8, u32(u32, u32, u32, u32)> ItemSet__add_group_without_flags;
inline constexpr guest::Function<0x003004c4, u32(u32, u32, u32)> pick_distinct_items;
inline constexpr guest::Function<0x00303094, u32(u32, u32)> ItemBitSet__add;
inline constexpr guest::Function<0x003059ec, u32(u32)> all_insects_recorded_veneer;
inline constexpr guest::Function<0x003059f0, u32(u32)> all_fish_recorded_veneer;
inline constexpr guest::Function<0x003059f4, u32(u32)> all_fossils_recorded_veneer;
inline constexpr guest::Function<0x00305a3c, u32(u32)> all_art_recorded_veneer;
inline constexpr guest::Function<0x00305a54, u32(u32)> count_recorded_art_veneer;
inline constexpr guest::Function<0x00305ad0, u32(u32)> museum_complete_veneer;
inline constexpr guest::Function<0x00305b7c, u32(u32)> count_recorded_insects;
inline constexpr guest::Function<0x00305bcc, u32(u32)> count_recorded_fish_and_sea_creatures;
inline constexpr guest::Function<0x00305c64, u32(u32)> count_recorded_fossils;

void Museum__pick_shop_items(u32 museum, u32 r1_unused, u32 r2, u32 r3) {
    guest::StackFrame frame(0x2f8);  // the original's stack frame
    u32 i = 0u;
    u32 r5 = museum;
    u32 r6 = i;
    do {
        Item__copy((i << 2) + r5 + 2u, empty_item_address, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        u32 r0_2 = r5 + i;
        i += 1u;
        *gptr<u8>(r0_2 + 0xeu) = u8(r6);
        guest::preempt();
    } while (s32(i) < 3);
    ItemBitSet__clear_and_return(frame.at(0).addr(), guest::cpu()->r[1], r2, r3);
    ItemSet__add_group_without_flags(frame.at(0).addr(), 5u, 0x30u, 0u);
    pick_distinct_items(r5 + 2u, 1u, frame.at(0).addr());
    do_nothing_002fc8fc(frame.at(0).addr(), guest::cpu()->r[1], guest::cpu()->r[2]);
    u32 r0_7 = frame.at(8).addr();
    ItemBitSet__clear_and_return(r0_7, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 save_data = get_save_data(r0_7);
    u32 r4_1 = save_data + 0x6aeb8u;
    u32 r0_9 = frame.at(4).addr();
    construct_item(r0_9, 0x23c7u);
    ItemBitSet__add(frame.at(8).addr(), r0_9);
    do_nothing_002f777c(frame.at(4).addr());
    if (all_insects_recorded_veneer(r4_1) != 0) {
        u32 r0_13 = frame.at(0x2f0).addr();
        construct_item(r0_13, 0x23a8u);
        ItemBitSet__add(frame.at(8).addr(), r0_13);
        do_nothing_002f777c(frame.at(0x2f0).addr());
    }
    if (all_fish_recorded_veneer(r4_1) != 0) {
        u32 r0_17 = frame.at(0x2f0).addr();
        construct_item(r0_17, 0x23a9u);
        ItemBitSet__add(frame.at(8).addr(), r0_17);
        do_nothing_002f777c(frame.at(0x2f0).addr());
    }
    if (all_fossils_recorded_veneer(r4_1) != 0) {
        u32 r0_21 = frame.at(0x2f0).addr();
        construct_item(r0_21, 0x23aau);
        ItemBitSet__add(frame.at(8).addr(), r0_21);
        do_nothing_002f777c(frame.at(0x2f0).addr());
    }
    if (all_art_recorded_veneer(r4_1) != 0) {
        u32 r0_25 = frame.at(0x2f0).addr();
        construct_item(r0_25, 0x23abu);
        ItemBitSet__add(frame.at(8).addr(), r0_25);
        do_nothing_002f777c(frame.at(0x2f0).addr());
    }
    u32 r0_28 = frame.at(4).addr();
    construct_item(r0_28, 0x2461u);
    ItemBitSet__add(frame.at(8).addr(), r0_28);
    do_nothing_002f777c(frame.at(4).addr());
    u32 insects_3 = count_recorded_insects(r4_1);
    if (s32(insects_3) >= 0x32) {
        u32 r0_32 = frame.at(0x2f0).addr();
        construct_item(r0_32, 0x2446u);
        ItemBitSet__add(frame.at(8).addr(), r0_32);
        do_nothing_002f777c(frame.at(0x2f0).addr());
    }
    u32 fish_3 = count_recorded_fish_and_sea_creatures(r4_1);
    if (s32(fish_3) >= 0x32) {
        u32 r0_36 = frame.at(0x2f0).addr();
        construct_item(r0_36, 0x2447u);
        ItemBitSet__add(frame.at(8).addr(), r0_36);
        do_nothing_002f777c(frame.at(0x2f0).addr());
    }
    u32 fossils_3 = count_recorded_fossils(r4_1);
    if (s32(fossils_3) >= 0x1e) {
        u32 r0_40 = frame.at(0x2f0).addr();
        construct_item(r0_40, 0x2448u);
        ItemBitSet__add(frame.at(8).addr(), r0_40);
        do_nothing_002f777c(frame.at(0x2f0).addr());
    }
    if (s32(count_recorded_art_veneer(r4_1)) >= 0x14) {
        u32 r0_44 = frame.at(0x2f0).addr();
        construct_item(r0_44, 0x2449u);
        ItemBitSet__add(frame.at(8).addr(), r0_44);
        do_nothing_002f777c(frame.at(0x2f0).addr());
    }
    u32 insects_4 = count_recorded_insects(r4_1);
    if (s32(insects_4) >= 0x1e) {
        u32 r0_48 = frame.at(0x2f0).addr();
        construct_item(r0_48, 0x3352u);
        ItemBitSet__add(frame.at(8).addr(), r0_48);
        do_nothing_002f777c(frame.at(0x2f0).addr());
    }
    u32 fish_4 = count_recorded_fish_and_sea_creatures(r4_1);
    if (s32(fish_4) >= 0x1e) {
        u32 r0_52 = frame.at(0x2f0).addr();
        construct_item(r0_52, 0x3356u);
        ItemBitSet__add(frame.at(8).addr(), r0_52);
        do_nothing_002f777c(frame.at(0x2f0).addr());
    }
    u32 fossils_4 = count_recorded_fossils(r4_1);
    if (s32(fossils_4) >= 0xf) {
        u32 r0_56 = frame.at(0x2f0).addr();
        construct_item(r0_56, 0x335au);
        ItemBitSet__add(frame.at(8).addr(), r0_56);
        do_nothing_002f777c(frame.at(0x2f0).addr());
    }
    if (museum_complete_veneer(r4_1) != 0) {
        u32 r0_60 = frame.at(0).addr();
        construct_item(r0_60, 0x2cdfu);
        ItemBitSet__add(frame.at(8).addr(), r0_60);
        do_nothing_002f777c(frame.at(0).addr());
    }
    u32 r0_63 = r5 + 6u;
    u32 r2_48 = frame.at(8).addr();
    pick_distinct_items(r0_63, 2u, r2_48);
    do_nothing_002fc8fc(r0_63, guest::cpu()->r[1], r2_48);
}

}  // namespace d_0010acb8
GUEST_EXPORT_FRAMED(0x0010acb9, d_0010acb8::Museum__pick_shop_items, 0x4070);  // pushes {i, r5, r6, lr} first, as the original

// f_0010af10: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Sets the record's state: 0 clears its days, 1 starts a 7-day period and updates the town flags.
namespace d_0010af10 {

inline constexpr guest::Function<0x002fae84, u32(u32, u32, u32, u32)> get_data_base;
inline constexpr guest::Function<0x003035a4, u32(u32, u32)> TourResult__clear_score;
inline constexpr guest::Function<0x00305b74, u32(u32, u32)> thunk_006bc4c4;
inline constexpr guest::Function<0x00305b78, u32(u32, u32, u32)> assign_bit2_of_byte04_305b78;

void ShopRecord__set_state(u32 shop_record, u32 r1, u32 r2) {
    u32 r5_1 = r1;
    if (r1 != 0) {
        if (r5_1 == 1u) {
            u32 data_base = get_data_base(shop_record, r1, r2, guest::cpu()->r[3]);
            u32 r0_3 = thunk_006bc4c4(data_base + 0x6ae38u, 0x6ae38u);
            u32 data_base_2 = get_data_base(r0_3, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
            u32 r0_5 = data_base_2 + 0x6214fu;
            assign_bit2_of_byte04_305b78(r0_5, 1u, 0x6214fu);
            u32 data_base_3 = get_data_base(r0_5, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
            TourResult__clear_score(data_base_3 + 0x7170cu, 8u);
            r1 = guest::cpu()->r[1];
            *gptr<u8>(shop_record + 0x11u) = 7;
        }
    } else {
        *gptr<u8>(shop_record + 0x11u) = 0;
    }
    *gptr<u8>(shop_record) = u8(r5_1);
    guest::cpu()->r[1] = r1;
}

}  // namespace d_0010af10
GUEST_EXPORT_FRAMED(0x0010af11, d_0010af10::ShopRecord__set_state, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0010af72: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// In state 1: counts the record's days (+0x11) down by `days`, stopping at 0.
namespace d_0010af72 {

struct __attribute__((packed)) ShopRecord {
    u8 byte_0;
    u8 unknown_1[0x10];  // (not used here)
    u8 byte_11;
};
GUEST_OFFSET(ShopRecord, byte_0, 0x0);
GUEST_OFFSET(ShopRecord, byte_11, 0x11);


void ShopRecord__advance_days(gptr<ShopRecord> shop_record, u32 r1) {
    u32 r2_1 = shop_record->byte_0;
    if (r2_1 == 0 || r2_1 != 1u || s32(r1) <= 0) {
        guest::cpu()->r[1] = r1;
        return;
    }
    u32 r2_2 = shop_record->byte_11;
    if (r2_2 == 0) {
        guest::cpu()->r[1] = r1;
        return;
    }
    if (s32(r2_2) <= s32(r1)) {
        shop_record->byte_11 = 0;
        guest::cpu()->r[1] = 0u;
        return;
    }
    u32 r1_1 = r2_2 - r1;
    shop_record->byte_11 = u8(r1_1);
    guest::cpu()->r[1] = r1_1;
}

}  // namespace d_0010af72
GUEST_EXPORT(0x0010af73, d_0010af72::ShopRecord__advance_days);

// f_0010b1e4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Clears a record and its three items.
namespace d_0010b1e4 {

inline constexpr u32 empty_item_address = 0x0095bfdcu;
inline constexpr guest::Function<0x0013366c, u32(u32, u32, u32, u32)> store_constants_13366c_0013366c;
inline constexpr guest::Function<0x002fc8e8, u32(u32, u32)> Item__copy;

u32 ThreeItemRecord__clear(u32 three_item_record, u32 r1) {
    u32 r0_1 = 0;
    u32 r5 = three_item_record;
    store_constants_13366c_0013366c(three_item_record, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    Item__copy(r5, empty_item_address);
    u32 i = 0u;
    do {
        r0_1 = (i << 2) + r5 + 4u;
        Item__copy(r0_1, empty_item_address);
        i += 1u;
        guest::preempt();
    } while (s32(i) < 2);
    return r0_1;
}

}  // namespace d_0010b1e4
GUEST_EXPORT_FRAMED(0x0010b1e5, d_0010b1e4::ThreeItemRecord__clear, 0x4070);  // pushes {i, r5, r6, lr} first, as the original

// f_0010b210: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Picks the items for the renewal (by the notice-renewal mode table).
namespace d_0010b210 {

inline constexpr u32 empty_item_address = 0x0095bfdcu;
inline constexpr guest::Function<0x002f777c, u32(u32)> do_nothing_002f777c;
inline constexpr guest::Function<0x002fc288, u32(u32, u32, u32, u32)> ItemBitSet__clear_and_return;
inline constexpr guest::Function<0x002fc2a4, u32(u32, u32)> ItemSet__add_kind;
inline constexpr guest::Function<0x002fc8e8, u32(u32, u32, u32, u32)> Item__copy;
inline constexpr guest::Function<0x002fc8fc, u32(u32)> do_nothing_002fc8fc;
inline constexpr guest::Function<0x002fcbb0, u32(u32, u32)> construct_item;
inline constexpr guest::Function<0x002fe9c8, u32(u32, u32, u32, u32)> ItemSet__add_group_without_flags;
inline constexpr guest::Function<0x002ff6f8, u32(u32, u32, u32, u32)> random_below;
inline constexpr guest::Function<0x003004c4, u32(u32, u32, u32)> pick_distinct_items;
inline constexpr guest::Function<0x00302944, u32(u32, u32)> mark_category_in_set;
inline constexpr guest::Function<0x00305cb4, u32(u32)> thunk_0071c534;
inline constexpr guest::Function<0x00305cb8, u32(u32)> thunk_0071c60c;
inline constexpr guest::Function<0x00305cbc, u32(u32)> thunk_0071c548;
inline constexpr guest::Function<0x00305d94, u32(u32)> thunk_0071c330;
inline constexpr guest::Function<0x00305d98, u32(u32)> thunk_0071c344;
inline constexpr guest::Function<0x00305d9c, u32(u32)> thunk_0071c3ac;
inline constexpr guest::Function<0x00305ffc, u32(u32)> NoticeRenewalState__mode_table_value;

void pick_renewal_items(u32 r0, u32 r1_unused, u32 r2, u32 r3) {
    guest::StackFrame frame(0x2ec);  // the original's stack frame
    u32 r0_26 = 0;
    u32 i = 0u;
    u32 r4 = r0;
    u32 r6 = i;
    do {
        Item__copy((i << 2) + r4 + 0x12u, empty_item_address, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        u32 r0_2 = r4 + i + 0x20u;
        i += 1u;
        *gptr<u8>(r0_2 + 0x1eu) = u8(r6);
        guest::preempt();
    } while (s32(i) < 0xb);
    ItemBitSet__clear_and_return(frame.at(0).addr(), guest::cpu()->r[1], r2, r3);
    ItemSet__add_group_without_flags(frame.at(0).addr(), 5u, 0x1cu, 0u);
    u32 r0_5 = thunk_0071c534(r4);
    pick_distinct_items(r4 + 0x12u, r0_5, frame.at(0).addr());
    do_nothing_002fc8fc(frame.at(0).addr());
    ItemBitSet__clear_and_return(frame.at(0).addr(), guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    ItemSet__add_kind(frame.at(0).addr(), 0x2cu);
    u32 r0_10 = thunk_0071c60c(r4);
    pick_distinct_items(r4 + 0x16u, r0_10, frame.at(0).addr());
    do_nothing_002fc8fc(frame.at(0).addr());
    ItemBitSet__clear_and_return(frame.at(0).addr(), guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    mark_category_in_set(frame.at(0).addr(), 0x37u);
    u32 r0_15 = thunk_0071c548(r4);
    pick_distinct_items(r4 + 0x1eu, r0_15, frame.at(0).addr());
    do_nothing_002fc8fc(frame.at(0).addr());
    i = 0u;
    u32 r0_18 = NoticeRenewalState__mode_table_value(r4);
    u32 r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0_18 >= 0u && r0_18 != 0) {
        r6 = 0x200bu;
        u32 r7 = r6 + 2u;
        do {
            u32 random = random_below(2u, r1, r2, r3);
            if (random == 0) {
                u32 r0_20 = frame.at(0).addr();
                construct_item(r0_20, r6);
                Item__copy((i << 2) + r4 + 0x26u, r0_20, guest::cpu()->r[2], guest::cpu()->r[3]);
                do_nothing_002f777c(frame.at(0).addr());
            } else {
                u32 r0_23 = frame.at(0).addr();
                construct_item(r0_23, r7);
                Item__copy((i << 2) + r4 + 0x26u, r0_23, guest::cpu()->r[2], guest::cpu()->r[3]);
                do_nothing_002f777c(frame.at(0).addr());
            }
            i += 1u;
            r0_26 = NoticeRenewalState__mode_table_value(r4);
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            guest::preempt();
        } while (r0_26 > i);
    }
    ItemBitSet__clear_and_return(frame.at(0).addr(), r1, r2, r3);
    ItemSet__add_group_without_flags(frame.at(0).addr(), 0x38u, 0xadu, 0u);
    u32 r0_29 = thunk_0071c330(r4);
    pick_distinct_items(r4 + 0x2au, r0_29, frame.at(0).addr());
    do_nothing_002fc8fc(frame.at(0).addr());
    ItemBitSet__clear_and_return(frame.at(0).addr(), guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    ItemSet__add_group_without_flags(frame.at(0).addr(), 0x36u, 0x29u, 0u);
    u32 r0_34 = thunk_0071c344(r4);
    pick_distinct_items(r4 + 0x32u, r0_34, frame.at(0).addr());
    do_nothing_002fc8fc(frame.at(0).addr());
    if (thunk_0071c3ac(r4) != 0) {
        u32 r0_38 = frame.at(0).addr();
        construct_item(r0_38, 0x202bu);
        u32 r0_39 = r4 + 0x3au;
        Item__copy(r0_39, r0_38, guest::cpu()->r[2], guest::cpu()->r[3]);
        do_nothing_002f777c(r0_39);
    }
}

}  // namespace d_0010b210
GUEST_EXPORT_FRAMED(0x0010b211, d_0010b210::pick_renewal_items, 0x40f0);  // pushes {r4, i, r6, r7, lr} first, as the original

// f_0010b390: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Clears the renewal record (0x4c bytes), its encrypted value and its mode.
namespace d_0010b390 {

inline constexpr guest::Function<0x002f825c, u32(u32, u32, u32, u32)> clear_aligned;
inline constexpr guest::Function<0x00303534, u32(u32, u32)> EncryptedInt__set;
inline constexpr guest::Function<0x0030608d, u32(u32, u32)> NoticeRenewalState__set_mode;

void NoticeRenewalState__clear(u32 notice_renewal_state) {
    clear_aligned(notice_renewal_state, 0x4cu, guest::cpu()->r[2], guest::cpu()->r[3]);
    EncryptedInt__set(notice_renewal_state + 8u, 0u);
    NoticeRenewalState__set_mode(notice_renewal_state, 0u);
}

}  // namespace d_0010b390
GUEST_EXPORT_FRAMED(0x0010b391, d_0010b390::NoticeRenewalState__clear, 0x4010);  // pushes {r4, lr} first, as the original

// f_0010b43c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Clears two words of the record.
namespace d_0010b43c {

struct __attribute__((packed)) ClearRecord8b60Arg0 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(ClearRecord8b60Arg0, word_0, 0x0);
GUEST_OFFSET(ClearRecord8b60Arg0, word_4, 0x4);


void clear_record_8b60(gptr<ClearRecord8b60Arg0> arg0) {
    arg0->word_0 = 0;
    arg0->word_4 = 0;
    *gptr<u8>(arg0.addr() + 4u) = 0;
    guest::cpu()->r[1] = 0u;
}

}  // namespace d_0010b43c
GUEST_EXPORT(0x0010b43d, d_0010b43c::clear_record_8b60);

// f_0010b448: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Advances the record at +0x8b60 for the new day (counts, encrypted values and town flags).
namespace d_0010b448 {

struct __attribute__((packed)) TownRecord8b60 {
    u32 word_0;
    u8 byte_4;
};
GUEST_OFFSET(TownRecord8b60, word_0, 0x0);
GUEST_OFFSET(TownRecord8b60, byte_4, 0x4);

struct __attribute__((packed)) Local_0010b448_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
};
GUEST_OFFSET(Local_0010b448_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_0010b448_ea_1, word_4, 0x4);
GUEST_OFFSET(Local_0010b448_ea_1, word_8, 0x8);
GUEST_OFFSET(Local_0010b448_ea_1, word_c, 0xc);
GUEST_OFFSET(Local_0010b448_ea_1, word_10, 0x10);
GUEST_OFFSET(Local_0010b448_ea_1, word_14, 0x14);

inline constexpr guest::Function<0x002fae84, u32(u32, u32, u32, u32)> get_data_base;
inline constexpr guest::Function<0x003035a4, u32(u32, u32, u32)> TourResult__clear_score;
inline constexpr guest::Function<0x00303660, u32(u32, u32, u32)> EncryptedInt__get;
inline constexpr guest::Function<0x00305de4, u32(u32, u32, u32)> assign_bit1_of_byte03_305de4;
inline constexpr guest::Function<0x00305e84, u32(u32, u32, u32)> thunk_00710c3c;

struct __attribute__((packed)) TownRecord8b60AdvanceDaysFrame {
    u8 unknown_0[0x4];  // (not read or written by name)
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 tpc;
};
GUEST_OFFSET(TownRecord8b60AdvanceDaysFrame, word_4, 0x4);
GUEST_OFFSET(TownRecord8b60AdvanceDaysFrame, word_8, 0x8);
GUEST_OFFSET(TownRecord8b60AdvanceDaysFrame, word_c, 0xc);
GUEST_OFFSET(TownRecord8b60AdvanceDaysFrame, word_10, 0x10);
GUEST_OFFSET(TownRecord8b60AdvanceDaysFrame, tpc, 0x14);
GUEST_SIZE(TownRecord8b60AdvanceDaysFrame, 0x18);

void TownRecord8b60__advance_days(gptr<TownRecord8b60> town_record8b60, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<TownRecord8b60AdvanceDaysFrame> frame;  // the original's stack frame
    u32 r0 = town_record8b60.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r14 = guest::cpu()->r[14];
    u32 r4_1 = 0;
    u32 r5_1 = 0;
    u32 r6_1 = 0;
    u32 r7_1 = 0;
    u32 tpc_1 = 0;
    if (r1 == 0) {
        return;
    }
    gptr<Local_0010b448_ea_1> ea_1 = gptr<Local_0010b448_ea_1>(frame.at(0).addr());
    ea_1->word_0 = r3;
    ea_1->word_4 = r4;
    ea_1->word_8 = r5;
    ea_1->word_c = r6;
    ea_1->word_10 = r7;
    ea_1->word_14 = r14;
    u32 r0_1 = town_record8b60->byte_4;
    if (r0_1 == 0) {
        goto L_10b492;
    }
    if (r0_1 == 1u && s32(r1) > 0) {
        u32 r0_2 = town_record8b60->word_0;
        if (s32(r0_2) > 0) {
            u32 r0_3 = r0_2 - r1;
            town_record8b60->word_0 = r0_3;
            if (s32(r0_3) <= 0) {
                town_record8b60->word_0 = 0;
                u32 data_base = get_data_base(0u, r1, r2, r3);
                u32 r0_6 = TourResult__clear_score(data_base + 0x7170cu, 0xfu, 0x7170cu);
                u32 data_base_2 = get_data_base(r0_6, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
                assign_bit1_of_byte03_305de4(data_base_2 + 0x6214fu, 1u, 0x6214fu);
                town_record8b60->byte_4 = 2;
            }
        }
    }
    r4_1 = frame->word_4;
    r5_1 = frame->word_8;
    r6_1 = frame->word_c;
    r7_1 = frame->word_10;
    tpc_1 = frame->tpc;
    guest::cpu()->r[4] = r4_1;
    guest::cpu()->r[5] = r5_1;
    guest::cpu()->r[6] = r6_1;
    guest::cpu()->r[7] = r7_1;
    return;
L_10b492:;
    u32 r5_2 = 0u;
    u32 r4_2 = r5_2;
    u32 data_base_3 = get_data_base(r0_1, r1, r2, r3);
    u32 r2_2 = 0x621d0u;
    u32 r1_2 = 0x45ccu;
    u32 r0_10 = data_base_3 + r2_2;
    u32 r7_2 = r0_10 + r1_2;
    if (r7_2 != 0) {
        r0_10 = EncryptedInt__get(r7_2 + 8u, r1_2, r2_2);
        r1_2 = guest::cpu()->r[1];
        r2_2 = guest::cpu()->r[2];
        r4_2 = 0u;
        r5_2 = r0_10;
    }
    u32 data_base_4 = get_data_base(r0_10, r1_2, r2_2, guest::cpu()->r[3]);
    u32 r2_3 = guest::cpu()->r[2];
    u32 r1_3 = 0x621d0u;
    u32 r0_13 = data_base_4 + r1_3 + 0x9cu;
    if (r0_13 != 0) {
        r0_13 = EncryptedInt__get(r0_13 + 0x34u, r1_3, r2_3);
        r1_3 = s32(r0_13) >> 0x1f;
        r2_3 = r4_2;
        u32 res_1 = r0_13 + r5_2;
        r5_2 = res_1;
        r4_2 = u64(r1_3) + r2_3 + u32(res_1 < r0_13);
    }
    u32 data_base_5 = get_data_base(r0_13, r1_3, r2_3, guest::cpu()->r[3]);
    u32 r2_4 = 0x621d0u;
    u32 r0_16 = data_base_5 + r2_4 + 0x4468u;
    if (r0_16 != 0) {
        u32 r0_18 = EncryptedInt__get(r0_16 + 0x24u, 0x4468u, r2_4);
        r2_4 = r4_2;
        u32 res_2 = r0_18 + r5_2;
        r5_2 = res_2;
        r4_2 = 0ull + r2_4 + u32(res_2 < r0_18);
    }
    u64 t_1 = u64(r4_2) + ~0u + u32(r5_2 >= 0x2710u);
    u32 r4_3 = t_1;
    if (u32(t_1 >> 0x20)) {
        if (thunk_00710c3c(r7_2, 0u, r2_4) == 0) {
            r4_1 = frame->word_4;
            r5_1 = frame->word_8;
            r6_1 = frame->word_c;
            r7_1 = frame->word_10;
            tpc_1 = frame->tpc;
            guest::cpu()->r[4] = r4_1;
            guest::cpu()->r[5] = r5_1;
            guest::cpu()->r[6] = r6_1;
            guest::cpu()->r[7] = r7_1;
            return;
        }
        *gptr<u32>(r0) = 3;
        *gptr<u8>(r0 + 4u) = 1;
        u32 r4_4 = frame->word_4;
        u32 r5_3 = frame->word_8;
        u32 r6_2 = frame->word_c;
        u32 r7_3 = frame->word_10;
        u32 tpc_2 = frame->tpc;
        guest::cpu()->r[4] = r4_4;
        guest::cpu()->r[5] = r5_3;
        guest::cpu()->r[6] = r6_2;
        guest::cpu()->r[7] = r7_3;
        return;
    }
    r4_1 = frame->word_4;
    r5_1 = frame->word_8;
    r6_1 = frame->word_c;
    r7_1 = frame->word_10;
    tpc_1 = frame->tpc;
    guest::cpu()->r[4] = r4_1;
    guest::cpu()->r[5] = r5_1;
    guest::cpu()->r[6] = r6_1;
    guest::cpu()->r[7] = r7_1;
}

}  // namespace d_0010b448
GUEST_EXPORT(0x0010b449, d_0010b448::TownRecord8b60__advance_days);

// f_0010b544: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Picks items for the category slots from the item sets (empty ones refilled).
namespace d_0010b544 {

inline constexpr u32 empty_item_address = 0x0095bfdcu;
inline constexpr guest::Function<0x002fae84, u32(u32, u32, u32, u32)> get_data_base;
inline constexpr guest::Function<0x002fb7e8, u32(u32, u32)> player_at;
inline constexpr guest::Function<0x002fbd54, u32(u32, u32, u32, u32)> PersonalId__is_set;
inline constexpr guest::Function<0x002fc288, u32(u32, u32, u32, u32)> ItemBitSet__clear_and_return;
inline constexpr guest::Function<0x002fc814, u32(u32, u32, u32, u32)> CategorySlots__store;
inline constexpr guest::Function<0x002fc8e8, u32(u32, u32, u32, u32)> Item__copy;
inline constexpr guest::Function<0x002fc8fc, u32(u32)> do_nothing_002fc8fc;
inline constexpr guest::Function<0x002fcaf4, u32(u32, u32, u32, u32)> Item__is_empty;
inline constexpr guest::Function<0x002fe9c8, u32(u32, u32, u32, u32)> ItemSet__add_group_without_flags;
inline constexpr guest::Function<0x003004c4, u32(u32, u32, u32)> pick_distinct_items;

void pick_category_slot_items(u32 r0, u32 r1_unused, u32 r2, u32 r3) {
    guest::StackFrame frame(0x2ec);  // the original's stack frame
    u32 i = 0u;
    u32 r4 = r0;
    u32 r6 = i;
    do {
        Item__copy((i << 2) + r4, empty_item_address, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        u32 r0_2 = r4 + i + 0x20u;
        i += 1u;
        *gptr<u8>(r0_2) = u8(r6);
        guest::preempt();
    } while (s32(i) < 8);
    ItemBitSet__clear_and_return(frame.at(0).addr(), guest::cpu()->r[1], r2, r3);
    ItemSet__add_group_without_flags(frame.at(0).addr(), 0x63u, 0x51u, 0u);
    pick_distinct_items(r4, 1u, frame.at(0).addr());
    do_nothing_002fc8fc(frame.at(0).addr());
    ItemBitSet__clear_and_return(frame.at(0).addr(), guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    ItemSet__add_group_without_flags(frame.at(0).addr(), 0x5du, 0x4bu, 0u);
    pick_distinct_items(r4 + 0x10u, 1u, frame.at(0).addr());
    do_nothing_002fc8fc(frame.at(0).addr());
    ItemBitSet__clear_and_return(frame.at(0).addr(), guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    ItemSet__add_group_without_flags(frame.at(0).addr(), 0x5fu, 0x4cu, 0u);
    pick_distinct_items(r4 + 0x14u, 1u, frame.at(0).addr());
    do_nothing_002fc8fc(frame.at(0).addr());
    ItemBitSet__clear_and_return(frame.at(0).addr(), guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    ItemSet__add_group_without_flags(frame.at(0).addr(), 0x5eu, 0x4du, 0u);
    pick_distinct_items(r4 + 0x18u, 1u, frame.at(0).addr());
    do_nothing_002fc8fc(frame.at(0).addr());
    ItemBitSet__clear_and_return(frame.at(0).addr(), guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    ItemSet__add_group_without_flags(frame.at(0).addr(), 0x62u, 0x50u, 0u);
    pick_distinct_items(r4 + 8u, 1u, frame.at(0).addr());
    do_nothing_002fc8fc(frame.at(0).addr());
    ItemBitSet__clear_and_return(frame.at(0).addr(), guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    ItemSet__add_group_without_flags(frame.at(0).addr(), 0x61u, 0x4fu, 0u);
    pick_distinct_items(r4 + 0xcu, 1u, frame.at(0).addr());
    do_nothing_002fc8fc(frame.at(0).addr());
    ItemBitSet__clear_and_return(frame.at(0).addr(), guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    ItemSet__add_group_without_flags(frame.at(0).addr(), 0x60u, 0x4eu, 0u);
    pick_distinct_items(r4 + 4u, 1u, frame.at(0).addr());
    do_nothing_002fc8fc(frame.at(0).addr());
    ItemBitSet__clear_and_return(frame.at(0).addr(), guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    ItemSet__add_group_without_flags(frame.at(0).addr(), 0x64u, 0x52u, 0u);
    pick_distinct_items(r4 + 0x1cu, 1u, frame.at(0).addr());
    r0 = do_nothing_002fc8fc(frame.at(0).addr());
    u32 r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    u32 r7 = 0x55a6u;
    i = 0u;
    do {
        u32 data_base = get_data_base(r0, r1, r2, r3);
        r0 = player_at(data_base + 0x20u, uxtb(i));
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        u32 r6_2 = r0;
        if (r0 != 0) {
            r0 = PersonalId__is_set(r6_2 + r7, r1, r2, r3);
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            if (r0 != 0) {
                u32 r0_37 = r6_2 + 0x8f0au;
                r0 = Item__is_empty(r0_37, r1, r2, r3);
                r1 = guest::cpu()->r[1];
                r2 = guest::cpu()->r[2];
                r3 = guest::cpu()->r[3];
                if (r0 == 0) {
                    r0 = CategorySlots__store(r4, r0_37, r2, r3);
                    r1 = guest::cpu()->r[1];
                    r2 = guest::cpu()->r[2];
                    r3 = guest::cpu()->r[3];
                }
            }
        }
        i += 1u;
        guest::preempt();
    } while (s32(i) < 4);
}

}  // namespace d_0010b544
GUEST_EXPORT_FRAMED(0x0010b545, d_0010b544::pick_category_slot_items, 0x40f0);  // pushes {r4, i, r6, r7, lr} first, as the original

// f_0010b6d0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Clears 0x28 bytes.
namespace d_0010b6d0 {

inline constexpr guest::Function<0x00301444, u32(u32, u32)> clear;

void clear_28_bytes() {
    clear(guest::cpu()->r[0], 0x28u);
}

}  // namespace d_0010b6d0
GUEST_EXPORT_FRAMED(0x0010b6d1, d_0010b6d0::clear_28_bytes, 0x4010);  // pushes {r4, lr} first, as the original

// f_0010b730: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Sends the exhibition letter to the players it concerns.
namespace d_0010b730 {

struct __attribute__((packed)) Local_0010b730_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u32 word_18;
};
GUEST_OFFSET(Local_0010b730_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_0010b730_ea_1, word_4, 0x4);
GUEST_OFFSET(Local_0010b730_ea_1, word_8, 0x8);
GUEST_OFFSET(Local_0010b730_ea_1, word_c, 0xc);
GUEST_OFFSET(Local_0010b730_ea_1, word_10, 0x10);
GUEST_OFFSET(Local_0010b730_ea_1, word_14, 0x14);
GUEST_OFFSET(Local_0010b730_ea_1, word_18, 0x18);

struct __attribute__((packed)) Local_0010b730_r0_14 {
    u8 unknown_0[0xd];  // (not used here)
    u8 byte_d;
};
GUEST_OFFSET(Local_0010b730_r0_14, byte_d, 0xd);

struct __attribute__((packed)) Local_0010b730_r4_3 {
    u8 unknown_0[0x13];  // (not used here)
    u8 byte_13;
};
GUEST_OFFSET(Local_0010b730_r4_3, byte_13, 0x13);

struct __attribute__((packed)) Local_0010b730_r6_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_0010b730_r6_1, word_0, 0x0);
GUEST_OFFSET(Local_0010b730_r6_1, word_4, 0x4);
GUEST_OFFSET(Local_0010b730_r6_1, word_8, 0x8);

inline constexpr guest::Function<0x002f777c, u32(u32, u32, u32)> do_nothing_002f777c;
inline constexpr guest::Function<0x002f77e8, u32(u32)> same_pointer;
inline constexpr guest::Function<0x002fae84, u32(u32, u32, u32, u32)> get_data_base;
inline constexpr guest::Function<0x002fb7e8, u32(u32, u32)> player_at;
inline constexpr guest::Function<0x002fb93c, u32(u32, u32, u32, u32)> get_value_953a8c;
inline constexpr guest::Function<0x002fbd54, u32(u32, u32, u32, u32)> PersonalId__is_set;
inline constexpr guest::Function<0x002fcbb0, u32(u32, u32)> construct_item;
inline constexpr guest::Function<0x002ff368, u32(u32, u32, u32, u32)> Letter__Letter;
inline constexpr guest::Function<0x002ff4d4, u32(u32, u32, u32, u32)> Item__check_property;
inline constexpr guest::Function<0x00306354, u32(u32, u32, u32, u32)> load_mail_with_adapter;

void send_exhibition_letter(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 i = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    gptr<Local_0010b730_ea_1> ea_1 = gptr<Local_0010b730_ea_1>(r13 - 0x1c);
    ea_1->word_0 = r0;
    ea_1->word_4 = r1;
    ea_1->word_8 = r4;
    ea_1->word_c = i;
    ea_1->word_10 = r6;
    ea_1->word_14 = r7;
    ea_1->word_18 = r14;
    i = 0u;
    r13 = ea_1.addr() - 0x2a4u;
    r7 = 0x55a6u;
    do {
        guest::cpu()->r[13] = r13;
        u32 data_base = get_data_base(r0, r1, r2, r3);
        guest::cpu()->r[13] = r13;
        r0 = player_at(data_base + 0x20u, uxtb(i));
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        u32 r4_2 = r0;
        if (r0 != 0) {
            u32 r0_3 = r4_2 + r7;
            guest::cpu()->r[13] = r13;
            r0 = PersonalId__is_set(r0_3, r1, r2, r3);
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            if (r0 != 0) {
                u32 r0_4 = *gptr<u32>(r13 + 0x2a8u);
                if (r0_4 != 0) {
                    u32 r0_5 = r4_2 + (0x57u << 8);
                    *gptr<u32>(r13 + 0x18u) = r0_5;
                    r0_4 = *gptr<u8>(r0_5 + 0x12u);
                    r1 = r0_4 >> 4 << 0x1f;
                    if (r1 != 0) {
                        r0_4 = r0_4 >> 5 << 0x1f;
                        if (r0_4 == 0) {
                            guest::cpu()->r[13] = r13;
                            Letter__Letter(r13 + 0x20u, r1, r2, r3);
                            guest::cpu()->r[13] = r13;
                            construct_item(r13 + 0x1cu, 0x225au);
                            *gptr<u32>(r13 + 8u) = 0;
                            *gptr<u32>(r13 + 4u) = 6;
                            *gptr<u32>(r13) = r13 + 0x1cu;
                            guest::cpu()->r[13] = r13;
                            u32 r0_9 = load_mail_with_adapter(r13 + 0x20u, 0x10b854u, 1u, r0_3);
                            u32 r1_1 = guest::cpu()->r[1];
                            u32 r2_3 = guest::cpu()->r[2];
                            if (r0_9 != 0) {
                                guest::cpu()->r[13] = r13;
                                u32 r0_11 = Item__check_property(r13 + 0x20u, 8u, 1u, 0u);
                                r1_1 = guest::cpu()->r[1];
                                r2_3 = guest::cpu()->r[2];
                                if (r0_11 != 0) {
                                    u32 r0_12 = (u32(*gptr<u8>(*gptr<u32>(r13 + 0x18u) + 0x12u)) | 0x20u) & 0xefu;
                                    u32 r1_2 = *gptr<u32>(r13 + 0x18u);
                                    *gptr<u8>(r1_2 + 0x12u) = u8(r0_12);
                                    guest::cpu()->r[13] = r13;
                                    u32 data_base_2 = get_data_base(r0_12, r1_2, r2_3, guest::cpu()->r[3]);
                                    gptr<Local_0010b730_r0_14> r0_14 = gptr<Local_0010b730_r0_14>(data_base_2 + 0x6214fu);
                                    r1_1 = 1u;
                                    r2_3 = u32(r0_14->byte_d) | r1_1;
                                    r0_14->byte_d = u8(r2_3);
                                }
                            }
                            guest::cpu()->r[13] = r13;
                            do_nothing_002f777c(r13 + 0x1cu, r1_1, r2_3);
                            guest::cpu()->r[13] = r13;
                            r0_4 = same_pointer(r13 + 0x20u);
                            r1 = guest::cpu()->r[1];
                            r2 = guest::cpu()->r[2];
                            r3 = guest::cpu()->r[3];
                        }
                    }
                }
                guest::cpu()->r[13] = r13;
                r0 = get_value_953a8c(r0_4, r1, r2, r3);
                r1 = guest::cpu()->r[1];
                r2 = guest::cpu()->r[2];
                r3 = guest::cpu()->r[3];
                if (r0 != 0) {
                    gptr<Local_0010b730_r4_3> r4_3 = gptr<Local_0010b730_r4_3>(r4_2 + (0x57u << 8));
                    r0 = u32(r4_3->byte_13) >> 1 << 0x1f;
                    if (r0 != 0) {
                        guest::cpu()->r[13] = r13;
                        Letter__Letter(r13 + 0x18u, r1, r2, r3);
                        guest::cpu()->r[13] = r13;
                        construct_item(r13 + 0x298u, 0x225au);
                        gptr<Local_0010b730_r6_1> r6_1 = gptr<Local_0010b730_r6_1>(r13);
                        r6_1->word_0 = r13 + 0x298u;
                        r6_1->word_4 = 6;
                        r6_1->word_8 = 0;
                        u32 r6_2 = r6_1.addr() + 0xc;
                        guest::cpu()->r[13] = r13;
                        u32 r0_20 = load_mail_with_adapter(r13 + 0x18u, 0x10b854u, 2u, r0_3);
                        u32 r1_4 = guest::cpu()->r[1];
                        if (r0_20 != 0) {
                            guest::cpu()->r[13] = r13;
                            u32 r0_22 = Item__check_property(r13 + 0x18u, 3u, 1u, 0u);
                            r1_4 = guest::cpu()->r[1];
                            if (r0_22 != 0) {
                                r1_4 = 0xfdu;
                                r4_3->byte_13 = u8(u32(r4_3->byte_13) & r1_4);
                            }
                        }
                        guest::cpu()->r[13] = r13;
                        do_nothing_002f777c(r13 + 0x298u, r1_4, guest::cpu()->r[2]);
                        guest::cpu()->r[13] = r13;
                        r0 = same_pointer(r13 + 0x18u);
                        r1 = guest::cpu()->r[1];
                        r2 = guest::cpu()->r[2];
                        r3 = guest::cpu()->r[3];
                    }
                }
            }
        }
        i += 1u;
        guest::preempt();
    } while (s32(i) < 4);
    r13 += 0x2acu;
    u32 r4_4 = *gptr<u32>(r13);
    u32 r5_1 = *gptr<u32>(r13 + 4);
    u32 r6_3 = *gptr<u32>(r13 + 8);
    u32 r7_1 = *gptr<u32>(r13 + 0xc);
    u32 tpc_1 = *gptr<u32>(r13 + 0x10);
    r13 += 0x14;
    guest::cpu()->r[4] = r4_4;
    guest::cpu()->r[5] = r5_1;
    guest::cpu()->r[6] = r6_3;
    guest::cpu()->r[7] = r7_1;
    guest::cpu()->r[13] = r13;
}

}  // namespace d_0010b730
GUEST_EXPORT(0x0010b731, d_0010b730::send_exhibition_letter);

// f_0010b86c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Sets up a demo doll NPC (after the NPC setup): by its flags, starts its action, takes object 4's rotation,
// queues a command and marks its model.
namespace d_0010b86c {

struct __attribute__((packed)) Local_0010b86c_r5_1 {
    u8 unknown_0[0x1c];  // (not used here)
    u8 byte_1c;
    u8 byte_1d;
    u8 byte_1e;
    u8 byte_1f;
};
GUEST_OFFSET(Local_0010b86c_r5_1, byte_1c, 0x1c);
GUEST_OFFSET(Local_0010b86c_r5_1, byte_1d, 0x1d);
GUEST_OFFSET(Local_0010b86c_r5_1, byte_1e, 0x1e);
GUEST_OFFSET(Local_0010b86c_r5_1, byte_1f, 0x1f);

inline constexpr guest::Function<0x001cd668, u32(u32, u32)> CommandQueue__push_kind_0;
inline constexpr guest::Function<0x00304224, u32(u32, u32)> begin_action_1b;
inline constexpr guest::Function<0x00305ff4, u32(u32, u32)> object_data_of_id_veneer;
inline constexpr guest::Function<0x00305ff8, u32(u32, u32)> copy_object_data_of_id_veneer;
inline constexpr guest::Function<0x003064ac, u32(u32, u32, u32, u32)> AcNpc__virtual_32;

u32 AcNpcDemoDollBase__setup(u32 ac_npc_demo_doll_base, u32 r1, u32 r2_unused, u32 r3) {
    guest::StackFrame frame(0x4);  // the original's stack frame
    *frame.at<u32>(0) = r3;
    u32 r0_1 = AcNpc__virtual_32(ac_npc_demo_doll_base, r1, guest::cpu()->r[2], r3);
    u32 r1_1 = guest::cpu()->r[1];
    if (r0_1 == 0) {
        return r0_1;
    }
    gptr<Local_0010b86c_r5_1> r5_1 = gptr<Local_0010b86c_r5_1>(ac_npc_demo_doll_base + (0xbu << 8));
    if (r5_1->byte_1c != 0) {
        begin_action_1b(ac_npc_demo_doll_base + 0x78u, 0u);
        r1_1 = guest::cpu()->r[1];
    }
    if (r5_1->byte_1d != 0) {
        u32 r0_3 = object_data_of_id_veneer(4u, 1u);
        r1_1 = guest::cpu()->r[1];
        if (r0_3 != 0) {
            *frame.at<u32>(0) = copy_object_data_of_id_veneer(ac_npc_demo_doll_base, 4u);
            r1_1 = *frame.at<u16>(0);
            *gptr<u16>(ac_npc_demo_doll_base + 0x2eu) = u16(r1_1);
            *gptr<u16>(ac_npc_demo_doll_base + 0x3au) = u16(r1_1);
        }
    }
    if (r5_1->byte_1e != 0) {
        CommandQueue__push_kind_0(ac_npc_demo_doll_base + (0x5du << 4), 1u);
        r1_1 = guest::cpu()->r[1];
    }
    if (r5_1->byte_1f != 0) {
        r1_1 = 1u;
        *gptr<u8>(*gptr<u32>(ac_npc_demo_doll_base + 0x68u) + 0x3eu) = u8(r1_1);
    }
    guest::cpu()->r[1] = r1_1;
    return 1u;
}

}  // namespace d_0010b86c
GUEST_EXPORT_FRAMED(0x0010b86d, d_0010b86c::AcNpcDemoDollBase__setup, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_0010b9b0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Advances an exhibition entry for the elapsed days: raises its level (2 to 4), records it for the slot and flags the
// player.
namespace d_0010b9b0 {

struct __attribute__((packed)) ExhibitionEntry {
    u8 unknown_0[0x1e];  // (not used here)
    u8 byte_1e;
    u8 byte_1f;
};
GUEST_OFFSET(ExhibitionEntry, byte_1e, 0x1e);
GUEST_OFFSET(ExhibitionEntry, byte_1f, 0x1f);

inline constexpr guest::Function<0x002d4d00, u32(u32, u32)> veneer_2d4bf4;
inline constexpr guest::Function<0x002d4d3c, u32(u32, u32, u32, u32)> RoomLayout__count_furniture;
inline constexpr guest::Function<0x002fb96c, u32(u32)> player_for_slot;
inline constexpr guest::Function<0x00305114, u32(u32, u32)> assign_bit7_of_byte0b_305114;
inline constexpr guest::Function<0x00306088, u32(u32)> byte_1f_is_set_veneer;
inline constexpr guest::Function<0x004e7f28, u32(u32, u32, u32)> RoomGrid__set_cell;

struct __attribute__((packed)) ExhibitionEntryAdvanceFrame {
    u32 word_0;
};
GUEST_OFFSET(ExhibitionEntryAdvanceFrame, word_0, 0x0);
GUEST_SIZE(ExhibitionEntryAdvanceFrame, 0x4);

void ExhibitionEntry__advance(gptr<ExhibitionEntry> exhibition_entry, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<ExhibitionEntryAdvanceFrame> frame;  // the original's stack frame
    u32 room_layout = exhibition_entry.addr();
    frame->word_0 = r3;
    RoomLayout__count_furniture(room_layout, r1, r2, r3);
    veneer_2d4bf4(room_layout, r3);
    if (s32(r3) > 0) {
        if (byte_1f_is_set_veneer(room_layout) != 0) {
            u32 r0_2 = exhibition_entry->byte_1e;
            if (r0_2 == 0) {
                r0_2 = 2u;
            } else {
                if (r0_2 >= 4u) {
                    goto L_10b9e2;
                }
                r0_2 += 1u;
            }
            exhibition_entry->byte_1e = u8(r0_2);
L_10b9e2:;
            RoomGrid__set_cell(uxtb(r0_2), uxtb(r2), uxtb(r1));
            exhibition_entry->byte_1f = 0;
            u32 player = player_for_slot(uxtb(r1));
            if (player != 0) {
                assign_bit7_of_byte0b_305114(player + (0x57u << 8), 1u);
            }
        }
    }
}

}  // namespace d_0010b9b0
GUEST_EXPORT_FRAMED(0x0010b9b1, d_0010b9b0::ExhibitionEntry__advance, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_0010bb34: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Word `index` of the table at 0x9502e8.
namespace d_0010bb34 {

inline constexpr u32 global_009502e8_address = 0x009502e8u;

u32 word_table_9502e8_at(u32 r0) {
    return gptr<u32>(global_009502e8_address)[r0];
}

}  // namespace d_0010bb34
GUEST_EXPORT(0x0010bb35, d_0010bb34::word_table_9502e8_at);

// f_0010beb8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Checks the held object's shop state (forwarding to the held object's slots 21 and 22).
namespace d_0010beb8 {

struct __attribute__((packed)) Local_0010beb8_ea_1 {
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
GUEST_OFFSET(Local_0010beb8_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_0010beb8_ea_1, word_4, 0x4);
GUEST_OFFSET(Local_0010beb8_ea_1, word_8, 0x8);
GUEST_OFFSET(Local_0010beb8_ea_1, word_c, 0xc);
GUEST_OFFSET(Local_0010beb8_ea_1, word_10, 0x10);
GUEST_OFFSET(Local_0010beb8_ea_1, word_14, 0x14);
GUEST_OFFSET(Local_0010beb8_ea_1, word_18, 0x18);
GUEST_OFFSET(Local_0010beb8_ea_1, word_1c, 0x1c);
GUEST_OFFSET(Local_0010beb8_ea_1, word_20, 0x20);

struct __attribute__((packed)) Local_0010beb8_ea_2 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Local_0010beb8_ea_2, word_0, 0x0);
GUEST_OFFSET(Local_0010beb8_ea_2, word_4, 0x4);
GUEST_OFFSET(Local_0010beb8_ea_2, word_8, 0x8);
GUEST_OFFSET(Local_0010beb8_ea_2, word_c, 0xc);

struct __attribute__((packed)) Local_0010beb8_r4_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0010beb8_r4_1, word_0, 0x0);
GUEST_OFFSET(Local_0010beb8_r4_1, word_4, 0x4);

inline constexpr guest::Function<0x002fb328, u32(u32, u32, u32, u32)> get_save_data;
inline constexpr guest::Function<0x002fb430, u32(u32, u32)> make_adjusted_words;
inline constexpr guest::Function<0x00300914, u32(u32, u32, u32)> forward_to_held_object_slot_21;
inline constexpr guest::Function<0x00300924, u32(u32, u32, u32)> forward_to_held_object_slot_22;
inline constexpr guest::Function<0x00302788, u32(u32, u32)> MessageStore__start_message;
inline constexpr guest::Function<0x0030279c, u32(u32, u32, u32, u32)> TextWords__set_from_table;
inline constexpr guest::Function<0x0030289c, u32(u32)> MessageStore__start_board;
inline constexpr guest::Function<0x003028f0, u32(u32)> MessageStore__is_open;
inline constexpr guest::Function<0x00303c84, u32(u32)> byte_ad_is_2;

u32 held_object_shop_check(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    gptr<Local_0010beb8_ea_1> ea_1 = gptr<Local_0010beb8_ea_1>(r13 - 0x24);
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
    u32 r6_1 = *gptr<u32>(r13 + 0x44u);
    u32 r5_1 = *gptr<u32>(r13 + 0x40u);
    guest::cpu()->r[13] = r13;
    u32 save_data = get_save_data(r0, r1, r2, r3);
    gptr<Local_0010beb8_r4_1> r4_1 = gptr<Local_0010beb8_r4_1>(save_data + 0x62250u);
    u32 r0_2 = *gptr<u32>(r13 + 0x1cu);
    guest::cpu()->r[13] = r13;
    MessageStore__start_message(r0_2, 0x621d0u);
    u32 r0_3 = r4_1->word_0;
    *gptr<u32>(r13 + 0x14u) = r4_1->word_4;
    *gptr<u32>(r13 + 0x10u) = r0_3;
    guest::cpu()->r[13] = r13;
    make_adjusted_words(r13, r13 + 0x10u);
    u32 r7_1 = *gptr<u32>(r13 + 4u);
    u32 r0_5 = *gptr<u32>(r13 + 0x1cu);
    guest::cpu()->r[13] = r13;
    u32 r0_6 = MessageStore__is_open(r0_5);
    guest::cpu()->r[13] = r13;
    forward_to_held_object_slot_21(r0_6, sxtb(r7_1), 0u);
    u32 r0_7 = r4_1->word_0;
    u32 r1_4 = r4_1->word_4;
    u32 r4_2 = r4_1.addr() + 8;
    *gptr<u32>(r13 + 0x10u) = r0_7;
    *gptr<u32>(r13 + 0x14u) = r1_4;
    guest::cpu()->r[13] = r13;
    make_adjusted_words(r13, r13 + 0x10u);
    u32 r4_3 = *gptr<u32>(r13 + 4u);
    u32 r0_9 = *gptr<u32>(r13 + 0x1cu);
    guest::cpu()->r[13] = r13;
    u32 r0_10 = MessageStore__is_open(r0_9);
    u32 r1_7 = s32(r4_3 << 0x10) >> 0x18;
    guest::cpu()->r[13] = r13;
    forward_to_held_object_slot_22(r0_10, r1_7, 0u);
    u32 r0_11 = *gptr<u32>(r13 + 0x48u);
    *gptr<u32>(r13 + 4u) = r6_1;
    *gptr<u32>(r13) = r5_1;
    *gptr<u32>(r13 + 8u) = r0_11;
    gptr<Local_0010beb8_ea_2> ea_2 = gptr<Local_0010beb8_ea_2>(r13 + 0x1cu);
    u32 r0_12 = ea_2->word_0;
    u32 r1_8 = ea_2->word_4;
    u32 r2_6 = ea_2->word_8;
    u32 r3_8 = ea_2->word_c;
    guest::cpu()->r[13] = r13;
    TextWords__set_from_table(r0_12, r1_8, r2_6, r3_8);
    guest::cpu()->r[13] = r13;
    MessageStore__start_board(r0_12);
    u32 r0_13 = *gptr<u32>(r13 + 0x1cu);
    guest::cpu()->r[13] = r13;
    u32 r0_14 = byte_ad_is_2(r0_13);
    r13 += 0x2cu;
    u32 r4_4 = *gptr<u32>(r13);
    u32 r5_2 = *gptr<u32>(r13 + 4);
    u32 r6_2 = *gptr<u32>(r13 + 8);
    u32 r7_2 = *gptr<u32>(r13 + 0xc);
    u32 tpc_1 = *gptr<u32>(r13 + 0x10);
    r13 += 0x14;
    guest::cpu()->r[4] = r4_4;
    guest::cpu()->r[5] = r5_2;
    guest::cpu()->r[6] = r6_2;
    guest::cpu()->r[7] = r7_2;
    guest::cpu()->r[13] = r13;
    return r0_14;
}

}  // namespace d_0010beb8
GUEST_EXPORT(0x0010beb9, d_0010beb8::held_object_shop_check);

// f_0010bf48: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Checks the held object's shop state (the variant without forwarding).
namespace d_0010bf48 {

struct __attribute__((packed)) Local_0010bf48_ea_1 {
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
GUEST_OFFSET(Local_0010bf48_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_0010bf48_ea_1, word_4, 0x4);
GUEST_OFFSET(Local_0010bf48_ea_1, word_8, 0x8);
GUEST_OFFSET(Local_0010bf48_ea_1, word_c, 0xc);
GUEST_OFFSET(Local_0010bf48_ea_1, word_10, 0x10);
GUEST_OFFSET(Local_0010bf48_ea_1, word_14, 0x14);
GUEST_OFFSET(Local_0010bf48_ea_1, word_18, 0x18);
GUEST_OFFSET(Local_0010bf48_ea_1, word_1c, 0x1c);
GUEST_OFFSET(Local_0010bf48_ea_1, word_20, 0x20);

struct __attribute__((packed)) Local_0010bf48_ea_2 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_0010bf48_ea_2, word_0, 0x0);
GUEST_OFFSET(Local_0010bf48_ea_2, word_4, 0x4);
GUEST_OFFSET(Local_0010bf48_ea_2, word_8, 0x8);

struct __attribute__((packed)) Local_0010bf48_ea_3 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Local_0010bf48_ea_3, word_0, 0x0);
GUEST_OFFSET(Local_0010bf48_ea_3, word_4, 0x4);
GUEST_OFFSET(Local_0010bf48_ea_3, word_8, 0x8);
GUEST_OFFSET(Local_0010bf48_ea_3, word_c, 0xc);

struct __attribute__((packed)) Local_0010bf48_r0_6 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_0010bf48_r0_6, word_0, 0x0);
GUEST_OFFSET(Local_0010bf48_r0_6, word_4, 0x4);
GUEST_OFFSET(Local_0010bf48_r0_6, word_8, 0x8);

inline constexpr guest::Function<0x002fb328, u32(u32, u32, u32, u32)> get_save_data;
inline constexpr guest::Function<0x00302788, u32(u32, u32)> MessageStore__start_message;
inline constexpr guest::Function<0x0030279c, u32(u32, u32, u32, u32)> TextWords__set_from_table;
inline constexpr guest::Function<0x0030289c, u32(u32)> MessageStore__start_board;
inline constexpr guest::Function<0x003028f0, u32(u32)> MessageStore__is_open;
inline constexpr guest::Function<0x00303c84, u32(u32)> byte_ad_is_2;
inline constexpr guest::Function<0x00306404, u32(u32)> thunk_007116fc;
inline constexpr guest::Function<0x00306408, u32(u32, u32, u32)> call_target_with_two_0x5c__veneer;

u32 held_object_shop_check_2(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    gptr<Local_0010bf48_ea_1> ea_1 = gptr<Local_0010bf48_ea_1>(r13 - 0x24);
    ea_1->word_0 = r0;
    ea_1->word_4 = r1;
    ea_1->word_8 = r2;
    ea_1->word_c = r3;
    ea_1->word_10 = r4;
    ea_1->word_14 = r5;
    ea_1->word_18 = r6;
    ea_1->word_1c = r7;
    ea_1->word_20 = r14;
    r13 = ea_1.addr() - 0xcu;
    gptr<Local_0010bf48_ea_2> ea_2 = gptr<Local_0010bf48_ea_2>(r13 + 0x30u);
    u32 r5_1 = ea_2->word_0;
    u32 r6_1 = ea_2->word_4;
    u32 r7_1 = ea_2->word_8;
    guest::cpu()->r[13] = r13;
    u32 save_data = get_save_data(r0, r1, r2, r3);
    u32 r0_2 = *gptr<u32>(r13 + 0xcu);
    guest::cpu()->r[13] = r13;
    MessageStore__start_message(r0_2, 0x621d0u);
    guest::cpu()->r[13] = r13;
    u32 r0_3 = thunk_007116fc(save_data + 0x62250u);
    u32 r0_4 = *gptr<u32>(r13 + 0xcu);
    guest::cpu()->r[13] = r13;
    u32 r0_5 = MessageStore__is_open(r0_4);
    guest::cpu()->r[13] = r13;
    call_target_with_two_0x5c__veneer(r0_5, r0_3, 0u);
    gptr<Local_0010bf48_r0_6> r0_6 = gptr<Local_0010bf48_r0_6>(r13);
    r0_6->word_0 = r5_1;
    r0_6->word_4 = r6_1;
    r0_6->word_8 = r7_1;
    gptr<Local_0010bf48_ea_3> ea_3 = gptr<Local_0010bf48_ea_3>(r13 + 0xcu);
    u32 r0_7 = ea_3->word_0;
    u32 r1_3 = ea_3->word_4;
    u32 r2_4 = ea_3->word_8;
    u32 r3_5 = ea_3->word_c;
    guest::cpu()->r[13] = r13;
    TextWords__set_from_table(r0_7, r1_3, r2_4, r3_5);
    guest::cpu()->r[13] = r13;
    MessageStore__start_board(r0_7);
    u32 r0_8 = *gptr<u32>(r13 + 0xcu);
    guest::cpu()->r[13] = r13;
    u32 r0_9 = byte_ad_is_2(r0_8);
    r13 += 0x1cu;
    u32 r4_2 = *gptr<u32>(r13);
    u32 r5_2 = *gptr<u32>(r13 + 4);
    u32 r6_2 = *gptr<u32>(r13 + 8);
    u32 r7_2 = *gptr<u32>(r13 + 0xc);
    u32 tpc_1 = *gptr<u32>(r13 + 0x10);
    r13 += 0x14;
    guest::cpu()->r[4] = r4_2;
    guest::cpu()->r[5] = r5_2;
    guest::cpu()->r[6] = r6_2;
    guest::cpu()->r[7] = r7_2;
    guest::cpu()->r[13] = r13;
    return r0_9;
}

}  // namespace d_0010bf48
GUEST_EXPORT(0x0010bf49, d_0010bf48::held_object_shop_check_2);

// f_0010bf98: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Allocates memory, reporting error 3 when it fails.
namespace d_0010bf98 {

struct __attribute__((packed)) Local_0010bf98_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0010bf98_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_0010bf98_ea_1, word_4, 0x4);

inline constexpr guest::Function<0x002ffb48, u32(u32, u32, u32, u32)> allocate_memory;
inline constexpr guest::Function<0x00307569, u32(u32)> debug_log;

u32 allocate_or_fail(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    gptr<Local_0010bf98_ea_1> ea_1 = gptr<Local_0010bf98_ea_1>(frame.at(0).addr());
    ea_1->word_0 = r0;
    ea_1->word_4 = r1;
    u32 r0_1 = allocate_memory(r0, r1, r2, r3);
    if (r0_1 != 0) {
        return r0_1;
    }
    debug_log(3u);
    return r0_1;
}

}  // namespace d_0010bf98
GUEST_EXPORT_FRAMED(0x0010bf99, d_0010bf98::allocate_or_fail, 0x4010);  // pushes {r4, lr} first, as the original

// f_0010c12c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Forwards to free_memory.
namespace d_0010c12c {

inline constexpr guest::Function<0x002ffb64, u32(u32, u32, u32, u32)> free_memory;

void free_memory_veneer_30() {
    free_memory(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0010c12c
GUEST_EXPORT_FRAMED(0x0010c12d, d_0010c12c::free_memory_veneer_30, 0x4010);  // pushes {r4, lr} first, as the original

// f_0010c228: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Releases the shared string at +4.
namespace d_0010c228 {

inline constexpr guest::Function<0x003076c9, u32(u32, u32, u32, u32)> call_0031c3a8_return_self;

u32 release_string_4(u32 r0) {
    u32 shared_string = r0 + 4u;
    call_0031c3a8_return_self(shared_string, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    return shared_string - 4u;
}

}  // namespace d_0010c228
GUEST_EXPORT_FRAMED(0x0010c229, d_0010c228::release_string_4, 0x4010);  // pushes {r4, lr} first, as the original

// f_0010c234: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Releases the shared strings at +0xc, +8 and +4.
namespace d_0010c234 {

inline constexpr guest::Function<0x0010c229, u32(u32)> release_string_4;
inline constexpr guest::Function<0x003076c9, u32(u32, u32, u32, u32)> call_0031c3a8_return_self;

u32 release_strings_4_8_c(u32 r0) {
    u32 shared_string = r0 + 0xcu;
    call_0031c3a8_return_self(shared_string, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r4_1 = shared_string - 0xcu;
    call_0031c3a8_return_self(shared_string - 4u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    release_string_4(shared_string - 0xcu);
    return shared_string - 0xcu;
}

}  // namespace d_0010c234
GUEST_EXPORT_FRAMED(0x0010c235, d_0010c234::release_strings_4_8_c, 0x4010);  // pushes {r4, lr} first, as the original

// f_0010c33c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Creates the structure heap (StrcHeap) and keeps it at 0x952c5c.
namespace d_0010c33c {

inline constexpr u32 no_device_heap_address = 0x00952c38u;
inline constexpr u32 strc_heap_address = 0x00952c5cu;
inline guest::global<u32, 0x00952c5c> strc_heap;
inline constexpr guest::Function<0x002f6e64, u32(u32, u32, u32, u32)> construct_safe_string;
inline constexpr guest::Function<0x002f6e78, u32(u32, u32, u32, u32)> create_heap;
inline constexpr guest::Function<0x002f6e8c, u32(u32)> do_nothing_002f6e8c;

struct __attribute__((packed)) CreateStrcHeapFrame {
    u32 word_0;
    u8 unknown_4[0x10];  // (not read or written by name)
};
GUEST_OFFSET(CreateStrcHeapFrame, word_0, 0x0);
GUEST_SIZE(CreateStrcHeapFrame, 0x14);

u32 create_strc_heap(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<CreateStrcHeapFrame> frame;  // the original's stack frame
    u32 r0_1 = frame.at(8).addr();
    construct_safe_string(r0_1, 0x10c36cu, r2, r3);
    frame->word_0 = 0;
    u32 r0_2 = create_heap(r1, r0_1, r0, 1u);
    *strc_heap = r0_2;
    do_nothing_002f6e8c(r0_2);
    return *strc_heap;
}

}  // namespace d_0010c33c
GUEST_EXPORT_FRAMED(0x0010c33d, d_0010c33c::create_strc_heap, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_0010c37c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Forwards to 0010c384.
namespace d_0010c37c {

inline constexpr guest::Function<0x0010c385, u32(u32, u32, u32, u32)> create_vr_box_heap;

void call_0010c384() {
    create_vr_box_heap(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0010c37c
GUEST_EXPORT(0x0010c37c, d_0010c37c::call_0010c384);

// f_0010c3c8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Forwards to 0010c3d0.
namespace d_0010c3c8 {

inline constexpr guest::Function<0x0010c3d1, u32(u32, u32, u32, u32)> Heaps__destroy_strc_heap;

void call_0010c3d0() {
    Heaps__destroy_strc_heap(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0010c3c8
GUEST_EXPORT(0x0010c3c8, d_0010c3c8::call_0010c3d0);

// f_0010c3e8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Forwards to 0010c3f0.
namespace d_0010c3e8 {

inline constexpr guest::Function<0x0010c3f1, u32(u32, u32, u32, u32)> destroy_vr_box_heap;

u32 call_0010c3f0() {
    return destroy_vr_box_heap(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0010c3e8
GUEST_EXPORT(0x0010c3e8, d_0010c3e8::call_0010c3f0);

// f_0010c408: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Forwards to 0010c410.
namespace d_0010c408 {

inline constexpr guest::Function<0x0010c411, u32(u32, u32, u32, u32)> create_island_field_heap;

u32 call_0010c410() {
    return create_island_field_heap(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0010c408
GUEST_EXPORT(0x0010c408, d_0010c408::call_0010c410);

// f_0010c458: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Creates the design work heap and keeps it at 0x952c60.
namespace d_0010c458 {

inline guest::global<u32, 0x00952c60> my_design_work_heap;
inline constexpr guest::Function<0x002f6e64, u32(u32, u32, u32, u32)> construct_safe_string;
inline constexpr guest::Function<0x002f6e78, u32(u32, u32, u32, u32)> create_heap;
inline constexpr guest::Function<0x002f6e8c, u32(u32)> do_nothing_002f6e8c;

struct __attribute__((packed)) CreateMyDesignWorkHeapFrame {
    u32 word_0;
    u8 unknown_4[0x10];  // (not read or written by name)
};
GUEST_OFFSET(CreateMyDesignWorkHeapFrame, word_0, 0x0);
GUEST_SIZE(CreateMyDesignWorkHeapFrame, 0x14);

void create_my_design_work_heap(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<CreateMyDesignWorkHeapFrame> frame;  // the original's stack frame
    u32 r0_1 = frame.at(8).addr();
    construct_safe_string(r0_1, 0x10c488u, r2, r3);
    frame->word_0 = 1;
    u32 r0_2 = create_heap(r1, r0_1, r0, 1u);
    *my_design_work_heap = r0_2;
    do_nothing_002f6e8c(r0_2);
}

}  // namespace d_0010c458
GUEST_EXPORT_FRAMED(0x0010c459, d_0010c458::create_my_design_work_heap, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_0010c4b8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Creates the extra sound stage heap (0x140000 bytes by default) and keeps it at 0x952c98.
namespace d_0010c4b8 {

inline constexpr u32 no_device_heap_address = 0x00952c38u;
inline constexpr u32 sound_ext_stage_heap_address = 0x00952c98u;
inline guest::global<u32, 0x00952c98> sound_ext_stage_heap;
inline constexpr guest::Function<0x002f6e64, u32(u32, u32, u32, u32)> construct_safe_string;
inline constexpr guest::Function<0x002f6e78, u32(u32, u32, u32, u32)> create_heap;
inline constexpr guest::Function<0x002f6e8c, u32(u32)> do_nothing_002f6e8c;

struct __attribute__((packed)) CreateSoundExtStageHeapFrame {
    u32 word_0;
    u8 unknown_4[0x10];  // (not read or written by name)
};
GUEST_OFFSET(CreateSoundExtStageHeapFrame, word_0, 0x0);
GUEST_SIZE(CreateSoundExtStageHeapFrame, 0x14);

u32 create_sound_ext_stage_heap(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<CreateSoundExtStageHeapFrame> frame;  // the original's stack frame
    u32 r4_1 = r1;
    if (r1 == 0) {
        r4_1 = 0x140000u;
    }
    u32 r0_1 = frame.at(8).addr();
    construct_safe_string(r0_1, 0x10c4f4u, r2, r3);
    frame->word_0 = 0;
    u32 r0_2 = create_heap(r4_1, r0_1, r0, 1u);
    *sound_ext_stage_heap = r0_2;
    do_nothing_002f6e8c(r0_2);
    return *sound_ext_stage_heap;
}

}  // namespace d_0010c4b8
GUEST_EXPORT_FRAMED(0x0010c4b9, d_0010c4b8::create_sound_ext_stage_heap, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_0010c50c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Forwards to 0010c514.
namespace d_0010c50c {

inline constexpr guest::Function<0x0010c515, u32(u32, u32, u32, u32)> create_village_season_heap;

void call_0010c514() {
    create_village_season_heap(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0010c50c
GUEST_EXPORT(0x0010c50c, d_0010c50c::call_0010c514);

// f_0010c560: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Forwards to 0010c568.
namespace d_0010c560 {

inline constexpr guest::Function<0x0010c569, u32(u32, u32, u32, u32)> Heaps__destroy_my_design_work_heap;

void call_0010c568() {
    Heaps__destroy_my_design_work_heap(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0010c560
GUEST_EXPORT(0x0010c560, d_0010c560::call_0010c568);

// f_0010c580: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Forwards to 0010c588.
namespace d_0010c580 {

inline constexpr guest::Function<0x0010c589, u32(u32, u32, u32, u32)> create_exhibition_park_heap;

u32 call_0010c588() {
    return create_exhibition_park_heap(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0010c580
GUEST_EXPORT(0x0010c580, d_0010c580::call_0010c588);

// f_0010c5d4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Forwards to 0010c5dc.
namespace d_0010c5d4 {

inline constexpr guest::Function<0x0010c5dd, u32(u32, u32, u32, u32)> Heaps__destroy_sound_ext_stage_heap;

u32 call_0010c5dc() {
    return Heaps__destroy_sound_ext_stage_heap(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0010c5d4
GUEST_EXPORT(0x0010c5d4, d_0010c5d4::call_0010c5dc);

// f_0010c5f4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Forwards to 0010c5fc.
namespace d_0010c5f4 {

inline constexpr guest::Function<0x0010c5fd, u32(u32, u32, u32, u32)> destroy_village_season_heap;

u32 call_0010c5fc() {
    return destroy_village_season_heap(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0010c5f4
GUEST_EXPORT(0x0010c5f4, d_0010c5f4::call_0010c5fc);

// f_0010c650: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// A fixed string's virtual 0: nothing.
namespace d_0010c650 {

inline constexpr guest::Function<0x003007fc, u32(u32)> do_nothing_003007fc;

u32 sead__FixedSafeString_7___virtual_0() {
    do_nothing_003007fc(guest::cpu()->r[0]);
    return guest::cpu()->r[0];
}

}  // namespace d_0010c650
GUEST_EXPORT_FRAMED(0x0010c651, d_0010c650::sead__FixedSafeString_7___virtual_0, 0x4010);  // pushes {r4, lr} first, as the original

// f_0010c658: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Builds four empty items.
namespace d_0010c658 {

inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> for_each_element;

void construct_four_empty_items() {
    for_each_element(guest::cpu()->r[0], 0x2fc20cu, 4u, 4u);
}

}  // namespace d_0010c658
GUEST_EXPORT_FRAMED(0x0010c659, d_0010c658::construct_four_empty_items, 0x4010);  // pushes {r4, lr} first, as the original

// f_0010c6b0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Detaches an NPC: stops its sounds and the NPC manager forgets it.
namespace d_0010c6b0 {

inline constexpr u32 npc_manager_address = 0x00950148u;
inline guest::global<u32, 0x00950148> npc_manager;
inline constexpr guest::Function<0x001c0f3c, u32(u32, u32, u32, u32)> SoundObjNpcHolder__stop;
inline constexpr guest::Function<0x00305e88, u32(u32)> forget_current_950170;
inline constexpr guest::Function<0x0030692c, u32(u32)> AcNpc_rec__notify_npc_manager_veneer;
inline constexpr guest::Function<0x00306930, u32(u32, u32)> thunk_0069579c;

u32 AcNpc__detach(u32 ac_npc, u32 r1) {
    SoundObjNpcHolder__stop(ac_npc + 0x9b4u, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    AcNpc_rec__notify_npc_manager_veneer(ac_npc);
    forget_current_950170(ac_npc);
    u32 r0_2 = *npc_manager;
    if (r0_2 == 0) {
        return 1u;
    }
    thunk_0069579c(r0_2, ac_npc);
    return 1u;
}

}  // namespace d_0010c6b0
GUEST_EXPORT_FRAMED(0x0010c6b1, d_0010c6b0::AcNpc__detach, 0x4010);  // pushes {r4, lr} first, as the original

// f_0010c720: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Copies 8 bytes into `out` (the static default record when none).
namespace d_0010c720 {

inline constexpr u32 default_pair_address = 0x0094d7a0u;
inline constexpr u32 default_pair_b_address = 0x0094d7a8u;
inline guest::global<u32, 0x0094d7a0> default_pair;
inline constexpr guest::Function<0x0029c964, u32(u32, u32)> StatePair__set;
inline constexpr guest::Function<0x002fe7dd, u32(u32)> static_guard_acquire;
inline constexpr guest::Function<0x003081b4, u32(u32, u32)> copy_8_bytes;

u32 copy_to_default_pair(u32 r0, u32 r1) {
    u32 r4_1 = r1;
    if ((*default_pair & 1u) == 0u) {
        u32 first_time_2 = static_guard_acquire(default_pair_address);
        if (first_time_2 != 0) {
            StatePair__set(default_pair_b_address, 3u);
        }
    }
    if (r4_1 == 0) {
        r4_1 = default_pair_b_address;
    }
    copy_8_bytes(r4_1, r0);
    return r4_1;
}

}  // namespace d_0010c720
GUEST_EXPORT_FRAMED(0x0010c721, d_0010c720::copy_to_default_pair, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0010c764: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Resets the runtime state of the town: records, NPC network parts, held item, notices, lists and global blocks.
namespace d_0010c764 {

inline constexpr u32 npc_lock_player_permit_bit_instance_address = 0x0095385cu;
inline constexpr u32 npc_net_packet_mgr_instance_address = 0x00953864u;
inline constexpr u32 npc_net_share_info_instance_address = 0x0095386cu;
inline constexpr u32 npc_permit_bit_mgr_instance_address = 0x00953874u;
inline constexpr u32 tour_instance_address = 0x0095c6d0u;
inline constexpr u32 toggle22_instance_address = 0x0095df64u;
inline constexpr u32 global_009c9fd0_address = 0x009c9fd0u;
inline guest::global<u32, 0x0095385c> npc_lock_player_permit_bit_instance;
inline guest::global<u32, 0x00953864> npc_net_packet_mgr_instance;
inline guest::global<u32, 0x0095386c> npc_net_share_info_instance;
inline guest::global<u32, 0x00953874> npc_permit_bit_mgr_instance;
inline guest::global<u32, 0x0095c6d0> tour_instance;
inline guest::global<u32, 0x0095df64> toggle22_instance;
inline constexpr guest::Function<0x0010767d, u32(u32)> reset_bbs_update_state;
inline constexpr guest::Function<0x0013873c, u32(u32)> SoundPlayer__update;
inline constexpr guest::Function<0x001bac9c, u32(u32)> reset_tables_a21f6c;
inline constexpr guest::Function<0x001ed594, u32(u32)> NpcDjCtrl__reset;
inline constexpr guest::Function<0x0022d734, u32(u32)> reset_random_a182fc;
inline constexpr guest::Function<0x00242744, u32(u32)> count_structures_by_kind;
inline constexpr guest::Function<0x0027c554, u32(u32)> clear_flag_95df50;
inline constexpr guest::Function<0x0029d150, u32(u32)> clear_64_bytes_10;
inline constexpr guest::Function<0x002b8898, u32(u32)> clear_word_953230;
inline constexpr guest::Function<0x002c20ec, u32(u32)> Toggle22__reset;
inline constexpr guest::Function<0x002f98a8, u32(u32)> NpcNetShareInfo__refresh;
inline constexpr guest::Function<0x002fc188, u32(u32)> return_constant_0xa84270_;
inline constexpr guest::Function<0x002fc194, u32(u32)> PlayerRecord4c__clear;
inline constexpr guest::Function<0x0030444c, u32(u32)> reset_record_tables_a82000;
inline constexpr guest::Function<0x00304530, u32(u32)> shared_load_splits;
inline constexpr guest::Function<0x00306934, u32(u32, u32, u32, u32)> thunk_006a8bf8;
inline constexpr guest::Function<0x00306938, u32(u32)> thunk_006a1b9c;
inline constexpr guest::Function<0x0030693c, u32(u32)> thunk_005bfb70;
inline constexpr guest::Function<0x00306940, u32(u32)> thunk_006e0a00;
inline constexpr guest::Function<0x00306944, u32(u32)> reset_held_item_record_veneer;
inline constexpr guest::Function<0x00306948, u32(u32)> set_byte_957326_5b492c_veneer;
inline constexpr guest::Function<0x0030694c, u32(u32)> reset_talk_queue_lists_veneer;
inline constexpr guest::Function<0x00306950, u32(u32)> thunk_006d4174;
inline constexpr guest::Function<0x00306954, u32(u32)> thunk_0058d3a0;
inline constexpr guest::Function<0x00306958, u32(u32)> thunk_005b3e2c;
inline constexpr guest::Function<0x0030695c, u32(u32)> thunk_00524b08;
inline constexpr guest::Function<0x00306960, u32(u32)> thunk_00601c38;
inline constexpr guest::Function<0x00306964, u32(u32)> thunk_0052ec00;
inline constexpr guest::Function<0x00306968, u32(u32)> thunk_00521dd8;
inline constexpr guest::Function<0x0030696c, u32(u32)> copy_reference_clock_veneer;
inline constexpr guest::Function<0x00306970, u32(u32)> thunk_005b4130;
inline constexpr guest::Function<0x003081c8, u32(u32)> reset_shared_entry_table_003081c8;
inline constexpr guest::Function<0x00308238, u32(u32)> reset_global_block_a;
inline constexpr guest::Function<0x003082bc, u32(u32)> reset_global_block_b;
inline constexpr guest::Function<0x00308340, u32(u32)> return_constant_0xac1948_;
inline constexpr guest::Function<0x0030834c, u32(u32)> member_address_0x24_;
inline constexpr guest::Function<0x003319e8, u32(u32)> NpcLockPlayerPermitBit__reset;
inline constexpr guest::Function<0x004e9dc8, u32(u32)> reset_global_items;

void reset_town_runtime_state() {
    u32 r0_1 = thunk_006a8bf8(global_009c9fd0_address, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    thunk_005bfb70(thunk_006a1b9c(r0_1));
    reset_record_tables_a82000(0xa82000u);
    u32 player_record4c = return_constant_0xa84270_(NpcNetShareInfo__refresh(*npc_net_share_info_instance));
    PlayerRecord4c__clear(player_record4c);
    Toggle22__reset(*toggle22_instance);
    reset_shared_entry_table_003081c8(*npc_net_packet_mgr_instance);
    NpcLockPlayerPermitBit__reset(*npc_lock_player_permit_bit_instance);
    thunk_006e0a00(clear_64_bytes_10(*npc_permit_bit_mgr_instance));
    NpcDjCtrl__reset(reset_tables_a21f6c(reset_bbs_update_state(reset_held_item_record_veneer(*tour_instance))));
    set_byte_957326_5b492c_veneer(0xfcu);
    count_structures_by_kind(0xfcu);
    u32 r0_20 = shared_load_splits(clear_word_953230(reset_random_a182fc(clear_flag_95df50(reset_global_block_a(reset_talk_queue_lists_veneer(1u))))));
    u32 r0_26 = thunk_00524b08(thunk_005b3e2c(thunk_0058d3a0(reset_global_block_b(thunk_006d4174(SoundPlayer__update(r0_20))))));
    u32 j = thunk_0052ec00(thunk_00601c38(r0_26));
    u32 r0_29 = reset_global_items(j);
    thunk_00521dd8(r0_29);
    thunk_005b4130(member_address_0x24_(return_constant_0xac1948_(copy_reference_clock_veneer(r0_29))));
}

}  // namespace d_0010c764
GUEST_EXPORT_FRAMED(0x0010c765, d_0010c764::reset_town_runtime_state, 0x4010);  // pushes {r4, lr} first, as the original

// f_0010cadc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The record of the same villager among the ten, when it is valid; else 0.
namespace d_0010cadc {

inline constexpr guest::Function<0x002fe470, u32(u32, u32)> is_record_valid;
inline constexpr guest::Function<0x00308971, u32(u32, u32, u32, u32)> index_of_same_villager;

u32 find_valid_villager_record(u32 r0, u32 r1) {
    u32 r0_1 = index_of_same_villager(r1, r0, 0xau, guest::cpu()->r[3]);
    if (r0_1 >= 0xau) {
        return 0u;
    }
    u32 r4_1 = r0_1 * 0x2518u + r0;
    if (r4_1 == 0) {
        guest::cpu()->r[1] = 0x2518u;
        return 0u;
    }
    if (is_record_valid(r4_1, 0x2518u) == 0) {
        return 0u;
    }
    return r4_1;
}

}  // namespace d_0010cadc
GUEST_EXPORT_FRAMED(0x0010cadd, d_0010cadc::find_valid_villager_record, 0x4010);  // pushes {r4, lr} first, as the original

// f_0010cb10: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Moves a villager into the town: finds a free record, clears it and fills it from the villager's data.
namespace d_0010cb10 {

struct __attribute__((packed)) Object_0010cb10_0 {
    u8 unknown_0[0x196f0];  // (not used here)
    u16 half_196f0;
};
GUEST_OFFSET(Object_0010cb10_0, half_196f0, 0x196f0);

struct __attribute__((packed)) Local_0010cb10_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u32 word_18;
    u32 word_1c;
};
GUEST_OFFSET(Local_0010cb10_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_0010cb10_ea_1, word_4, 0x4);
GUEST_OFFSET(Local_0010cb10_ea_1, word_8, 0x8);
GUEST_OFFSET(Local_0010cb10_ea_1, word_c, 0xc);
GUEST_OFFSET(Local_0010cb10_ea_1, word_10, 0x10);
GUEST_OFFSET(Local_0010cb10_ea_1, word_14, 0x14);
GUEST_OFFSET(Local_0010cb10_ea_1, word_18, 0x18);
GUEST_OFFSET(Local_0010cb10_ea_1, word_1c, 0x1c);

struct __attribute__((packed)) Local_0010cb10_r6_1 {
    u8 unknown_0[0x10];  // (not used here)
    u16 half_10;
};
GUEST_OFFSET(Local_0010cb10_r6_1, half_10, 0x10);

inline constexpr guest::Function<0x0010ef45, u32(u32, u32, u32, u32)> call_0010ef44;
inline constexpr guest::Function<0x0010fa09, u32(u32, u32)> call_0010fa08;
inline constexpr guest::Function<0x0010fc1d, u32(u32, u32)> call_0010fc1c;
inline constexpr guest::Function<0x001100ed, u32(u32)> call_001100ec;
inline constexpr guest::Function<0x003089d5, u32(u32, u32, u32, u32)> pick_villager_to_move_in;
inline constexpr guest::Function<0x00308a68, u32(u32, u32, u32, u32)> call_00308a68;
inline constexpr guest::Function<0x00308d05, u32(u32, u32, u32, u32)> find_villager_by_id_00308d04;
inline constexpr guest::Function<0x00308d4d, u32(u32, u32, u32, u32)> Villager__clear;

struct __attribute__((packed)) Frame_0010cb10 {
    u8 unknown_0[0x4];  // (not read or written by name)
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u32 word_18;
    u32 word_1c;
};
GUEST_OFFSET(Frame_0010cb10, word_4, 0x4);
GUEST_OFFSET(Frame_0010cb10, word_8, 0x8);
GUEST_OFFSET(Frame_0010cb10, word_c, 0xc);
GUEST_OFFSET(Frame_0010cb10, word_10, 0x10);
GUEST_OFFSET(Frame_0010cb10, word_14, 0x14);
GUEST_OFFSET(Frame_0010cb10, word_18, 0x18);
GUEST_OFFSET(Frame_0010cb10, word_1c, 0x1c);
GUEST_SIZE(Frame_0010cb10, 0x20);

u32 VillagerPart__move_in_villager(gptr<Object_0010cb10_0> arg0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_0010cb10> frame;  // the original's stack frame
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r14 = guest::cpu()->r[14];
    gptr<Local_0010cb10_ea_1> ea_1 = gptr<Local_0010cb10_ea_1>(frame.at(0).addr());
    ea_1->word_0 = r0;
    ea_1->word_4 = r1;
    ea_1->word_8 = r2;
    ea_1->word_c = r4;
    ea_1->word_10 = r5;
    ea_1->word_14 = r6;
    ea_1->word_18 = r7;
    ea_1->word_1c = r14;
    r4 = 0u;
    gptr<Local_0010cb10_r6_1> r6_1 = gptr<Local_0010cb10_r6_1>(r0 + 0x196e0u);
    if (arg0->half_196f0 != 0xffffu) {
        u32 r0_3 = call_00308a68(uxtb(pick_villager_to_move_in(r0, r0 + 0x196f0u, 5u, r3) + 8u), 0x50u, 8u, 1u);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (r0_3 == 0) {
            u32 r1_2 = r6_1->half_10;
            u32 r0_4 = find_villager_by_id_00308d04(r0, r1_2, r2, r3);
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            if (r0_4 != 0) {
                Villager__clear(r0_4, guest::cpu()->r[1], r2, r3);
                r2 = guest::cpu()->r[2];
                r3 = guest::cpu()->r[3];
            }
        } else {
            r4 = 1u;
        }
    }
    r6_1->half_10 = 0xffff;
    if (r4 == 0) {
        u32 r0_5 = call_0010ef44(r0, frame->word_4, r2, r3);
        u32 r0_6 = call_001100ec(r0);
        if (s32(r0_5) < 0 && s32(r0_6) < 0) {
            if ((r0_5 + 2u) == 0) {
                goto L_10cbb8;
            }
            if (s32(call_0010fa08(r0, frame->word_4)) >= 0) {
                if ((u32(*gptr<s8>(r0 + 0x19762u)) + 1u) == 0) {
                    r4 = 1u;
                    goto L_10cbb8;
                }
            } else {
                if (frame->word_8 == 0) {
                    goto L_10cbb8;
                }
                if (call_0010fc1c(r0, frame->word_4) >= 0xau) {
                    goto L_10cbb8;
                }
                if ((u32(*gptr<s8>(r0 + 0x19762u)) + 1u) == 0) {
                    r4 = 1u;
                    goto L_10cbb8;
                }
            }
        } else {
            if ((u32(*gptr<s8>(r0 + 0x19762u)) + 1u) == 0) {
                r4 = 1u;
                goto L_10cbb8;
            }
        }
        r4 = 0u;
    }
L_10cbb8:;
    u32 r4_1 = frame->word_c;
    u32 r5_1 = frame->word_10;
    u32 r6_3 = frame->word_14;
    u32 r7_2 = frame->word_18;
    u32 tpc_1 = frame->word_1c;
    guest::cpu()->r[4] = r4_1;
    guest::cpu()->r[5] = r5_1;
    guest::cpu()->r[6] = r6_3;
    guest::cpu()->r[7] = r7_2;
    return r4;
}

}  // namespace d_0010cb10
GUEST_EXPORT(0x0010cb11, d_0010cb10::VillagerPart__move_in_villager);

// f_0010cbd4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Schedules the villagers' events for the days ahead (random days, current event kind).
namespace d_0010cbd4 {

struct __attribute__((packed)) VillagerPart {
    u8 unknown_0[0x17655];  // (not used here)
    u8 byte_17655;
};
GUEST_OFFSET(VillagerPart, byte_17655, 0x17655);

struct __attribute__((packed)) VillagerPartScheduleEventsArg1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(VillagerPartScheduleEventsArg1, word_0, 0x0);
GUEST_OFFSET(VillagerPartScheduleEventsArg1, word_4, 0x4);
GUEST_OFFSET(VillagerPartScheduleEventsArg1, word_8, 0x8);

struct __attribute__((packed)) Local_0010cbd4_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_0010cbd4_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_0010cbd4_ea_1, word_4, 0x4);
GUEST_OFFSET(Local_0010cbd4_ea_1, word_8, 0x8);

struct __attribute__((packed)) Now {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Now, word_0, 0x0);
GUEST_OFFSET(Now, word_4, 0x4);
GUEST_OFFSET(Now, word_8, 0x8);

struct __attribute__((packed)) Local_0010cbd4_r3_4 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_0010cbd4_r3_4, word_0, 0x0);
GUEST_OFFSET(Local_0010cbd4_r3_4, word_4, 0x4);
GUEST_OFFSET(Local_0010cbd4_r3_4, word_8, 0x8);

struct __attribute__((packed)) Local_0010cbd4_r6_1 {
    u8 unknown_0[0x13];  // (not used here)
    u8 byte_13;
    u8 unknown_14[0x1];  // (not used here)
    u8 byte_15;
};
GUEST_OFFSET(Local_0010cbd4_r6_1, byte_13, 0x13);
GUEST_OFFSET(Local_0010cbd4_r6_1, byte_15, 0x15);

inline constexpr guest::Function<0x002fb378, u32(u32)> game_time_now;
inline constexpr guest::Function<0x002fd4b4, u32(u32, u32, u32)> days_between;
inline constexpr guest::Function<0x002fe419, u32(u32)> pick_random_set_bit;
inline constexpr guest::Function<0x002ff6f4, u32(u32, u32)> random_below_entry;
inline constexpr guest::Function<0x00306c6c, u32(u32, u32)> thunk_007569d0;
inline constexpr guest::Function<0x00306c70, u32(u32, u32)> GameTime__set_time_stamp_veneer_veneer;
inline constexpr guest::Function<0x00306c74, u32(u32, u32)> thunk_005bc010;
inline constexpr guest::Function<0x00308e80, u32(u32, u32, u32, u32)> current_event_kind;
inline constexpr guest::Function<0x00308efc, u32(u32, u32, u32, u32)> TimeStamp__move_to_day_start;

struct __attribute__((packed)) VillagerPartScheduleEventsFrame {
    u8 unknown_0[0x14];  // (not read or written by name)
    u32 word_14;
    u32 word_18;
    u32 word_1c;
    u8 unknown_20[0xc];  // (not read or written by name)
};
GUEST_OFFSET(VillagerPartScheduleEventsFrame, word_14, 0x14);
GUEST_OFFSET(VillagerPartScheduleEventsFrame, word_18, 0x18);
GUEST_OFFSET(VillagerPartScheduleEventsFrame, word_1c, 0x1c);
GUEST_SIZE(VillagerPartScheduleEventsFrame, 0x2c);

void VillagerPart__schedule_events(gptr<VillagerPart> villager_part, gptr<VillagerPartScheduleEventsArg1> arg1, u32 r2, u32 r3) {
    guest::StackFrameOf<VillagerPartScheduleEventsFrame> frame;  // the original's stack frame
    u32 r1_7 = 0;
    u32 r7_1 = 0;
    if (r2 == 0) {
        return;
    }
    u32 r0_1 = arg1->word_8;
    if (r0_1 != 0) {
        u32 event_kind = current_event_kind(r0_1, arg1.addr(), r2, r3);
        if (event_kind == 0x26u) {
            gptr<Local_0010cbd4_r6_1> r6_1 = gptr<Local_0010cbd4_r6_1>(villager_part.addr() + 0x17640u);
            u32 r0_3 = u32(s8(villager_part->byte_17655)) + 1u;
            if (r0_3 == 0) {
                gptr<Now> now_2 = gptr<Now>(game_time_now(r0_3));
                u32 r2_2 = now_2->word_4;
                u32 r1_2 = now_2->word_0;
                u32 r0_5 = now_2->word_8;
                frame->word_18 = r2_2;
                frame->word_14 = r1_2;
                frame->word_1c = r0_5;
                TimeStamp__move_to_day_start(frame.at(0x14).addr(), r1_2, r2_2, guest::cpu()->r[3]);
                u32 r1_3 = villager_part.addr() + 0x1764au;
                thunk_007569d0(frame.at(0x20).addr(), r1_3);
                gptr<Local_0010cbd4_r3_4> r3_4 = gptr<Local_0010cbd4_r3_4>(frame.at(8).addr());
                gptr<Local_0010cbd4_ea_1> ea_1 = gptr<Local_0010cbd4_ea_1>(frame.at(0x20).addr());
                u32 r1_4 = ea_1->word_4;
                u32 r2_4 = ea_1->word_8;
                r3_4->word_0 = ea_1->word_0;
                r3_4->word_4 = r1_4;
                r3_4->word_8 = r2_4;
                TimeStamp__move_to_day_start(frame.at(8).addr(), r1_4, r2_4, r3_4.addr() + 0xc);
                u32 r0_10 = days_between(frame.at(0x14).addr(), frame.at(8).addr(), 1u);
                if (s32(r0_10) < 0) {
                    GameTime__set_time_stamp_veneer_veneer(r1_3, frame.at(0x14).addr());
                    r0_10 = 0u;
                }
                if (r6_1->byte_13 == 2u) {
                    r1_7 = 0x14u;
                    r7_1 = (r0_10 - 7u) * r1_7;
                } else {
                    u32 r0_11 = r0_10 - 2u;
                    r1_7 = r0_11 << 2;
                    r7_1 = r0_11 + r1_7;
                    if (s32(r7_1) > 0x32) {
                        r7_1 = 0x32u;
                    }
                }
                if (s32(random_below_entry(0x64u, r1_7)) < s32(r7_1)) {
                    thunk_005bc010(r1_3, pick_random_set_bit(arg1.addr()));
                    u32 r2_7 = s8(r6_1->byte_15);
                    if (arg1->word_0 > r2_7) {
                        u32 r1_9 = arg1->word_4;
                        u32 r0_14 = lsl_r(1u, r2_7 & 0xff);
                        if ((r1_9 & r0_14) != 0) {
                            u32 r0_15 = arg1->word_8;
                            arg1->word_4 = r1_9 & ~r0_14;
                            arg1->word_8 = r0_15 - 1u;
                        }
                    }
                }
            }
        }
    }
}

}  // namespace d_0010cbd4
GUEST_EXPORT_FRAMED(0x0010cbd5, d_0010cbd4::VillagerPart__schedule_events, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_0010d454: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Advances the villagers' dated records by the elapsed days.
namespace d_0010d454 {

struct __attribute__((packed)) Local_0010d454_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_0010d454_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_0010d454_ea_1, word_4, 0x4);
GUEST_OFFSET(Local_0010d454_ea_1, word_8, 0x8);

struct __attribute__((packed)) Local_0010d454_ea_2 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_0010d454_ea_2, word_0, 0x0);
GUEST_OFFSET(Local_0010d454_ea_2, word_4, 0x4);
GUEST_OFFSET(Local_0010d454_ea_2, word_8, 0x8);

struct __attribute__((packed)) Now {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Now, word_0, 0x0);
GUEST_OFFSET(Now, word_4, 0x4);
GUEST_OFFSET(Now, word_8, 0x8);

struct __attribute__((packed)) Local_0010d454_r0_2 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_0010d454_r0_2, word_0, 0x0);
GUEST_OFFSET(Local_0010d454_r0_2, word_4, 0x4);
GUEST_OFFSET(Local_0010d454_r0_2, word_8, 0x8);

inline constexpr guest::Function<0x002fb378, u32(u32)> game_time_now;
inline constexpr guest::Function<0x002fb430, u32(u32, u32)> make_adjusted_words;
inline constexpr guest::Function<0x002fb4a0, u32(u32, u32, u32, u32)> words_not_less;
inline constexpr guest::Function<0x002fdf10, u32(u32, u32, u32, u32)> is_in_registered_list;
inline constexpr guest::Function<0x003002f0, u32(u32)> Date__is_set;
inline constexpr guest::Function<0x00309865, u32(u32, u32, u32, u32)> villager_slot_index;
inline constexpr guest::Function<0x00309ccc, u32(u32)> index_in_pair_a83370;
inline constexpr guest::Function<0x0030a2b4, u32(u32, u32)> reset_record_book_at;
inline constexpr guest::Function<0x0030a34c, u32(u32, u32)> make_value12_from_date;
inline constexpr guest::Function<0x0030a391, u32(u32, u32, u32, u32)> Villager__refresh_records;
inline constexpr guest::Function<0x0030a488, u32(u32, u32, u32, u32)> TimeStamp__advance;

struct __attribute__((packed)) VillagerPartAdvanceDaysRecordsFrame {
    u32 word_0;
    u32 word_4;
    u8 unknown_8[0x18];  // (not read or written by name)
    u32 word_20;
    u32 word_24;
    u32 word_28;
    u8 unknown_2c[0x4];  // (not read or written by name)
};
GUEST_OFFSET(VillagerPartAdvanceDaysRecordsFrame, word_0, 0x0);
GUEST_OFFSET(VillagerPartAdvanceDaysRecordsFrame, word_4, 0x4);
GUEST_OFFSET(VillagerPartAdvanceDaysRecordsFrame, word_20, 0x20);
GUEST_OFFSET(VillagerPartAdvanceDaysRecordsFrame, word_24, 0x24);
GUEST_OFFSET(VillagerPartAdvanceDaysRecordsFrame, word_28, 0x28);
GUEST_SIZE(VillagerPartAdvanceDaysRecordsFrame, 0x30);

void VillagerPart__advance_days_records(u32 villager_part, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<VillagerPartAdvanceDaysRecordsFrame> frame;  // the original's stack frame
    gptr<Local_0010d454_r0_2> r0_2 = gptr<Local_0010d454_r0_2>(0u);
    u32 r0_13 = 0;
    u32 villager = villager_part;
    u32 r5 = r1;
    u32 r4_1 = villager + 0x172f4u;
    if (s32(r1) <= 0) {
        u32 r0_1 = villager_slot_index(villager, 0u, r2, r3);
        if (r0_1 < 0xau) {
            r0_2 = gptr<Local_0010d454_r0_2>(game_time_now(r0_1));
            make_adjusted_words(frame.at(0x14).addr(), r4_1);
            u32 r1_2 = r0_2->word_8;
            frame->word_0 = r0_2->word_4;
            frame->word_4 = r1_2;
            gptr<Local_0010d454_ea_1> ea_1 = gptr<Local_0010d454_ea_1>(frame.at(0x14).addr());
            if (words_not_less(ea_1->word_0, ea_1->word_4, ea_1->word_8, r0_2->word_0) == 0) {
                goto L_10d4a0;
            }
            reset_record_book_at(r4_1, r0_2.addr());
        }
        return;
L_10d4a0:;
        u32 date = villager + 0x17396u;
        if (Date__is_set(date) == 0) {
            return;
        }
        make_value12_from_date(frame.at(0x10).addr(), date);
        u32 r1_5 = r0_2->word_8;
        frame->word_0 = r0_2->word_4;
        frame->word_4 = r1_5;
        gptr<Local_0010d454_ea_2> ea_2 = gptr<Local_0010d454_ea_2>(frame.at(0x10).addr());
        if (words_not_less(ea_2->word_0, ea_2->word_4, ea_2->word_8, r0_2->word_0) == 0) {
            return;
        }
        Villager__refresh_records(villager, r0_2.addr(), guest::cpu()->r[2], guest::cpu()->r[3]);
        return;
    }
    u32 r0_11 = is_in_registered_list(4u, r1, r2, r3);
    if (r0_11 == 0) {
        r0_11 = is_in_registered_list(2u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
        if (r0_11 != 0) {
            goto L_10d51a;
        }
        r0_11 = is_in_registered_list(0xdu, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
        if (r0_11 != 0) {
            goto L_10d51a;
        }
        r0_11 = is_in_registered_list(9u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
        if (r0_11 != 0) {
            goto L_10d51a;
        }
        r0_11 = is_in_registered_list(5u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
        if (r0_11 != 0) {
            goto L_10d51a;
        }
        r0_11 = index_in_pair_a83370(villager_slot_index(villager, 0u, guest::cpu()->r[2], guest::cpu()->r[3]));
        if (s32(r0_11) < 0) {
            goto L_10d52a;
        }
    }
L_10d51a:;
    r0_13 = game_time_now(r0_11);
    reset_record_book_at(r4_1, r0_13);
    return;
L_10d52a:;
    gptr<Now> now_2 = gptr<Now>(game_time_now(r0_11));
    u32 r2_11 = now_2->word_4;
    u32 r1_9 = now_2->word_0;
    u32 r0_15 = now_2->word_8;
    u32 r4 = 0u;
    frame->word_0 = r4;
    frame->word_28 = r0_15;
    frame->word_20 = r1_9;
    frame->word_24 = r2_11;
    TimeStamp__advance(frame.at(0x20).addr(), 0u - (r5 - 1u), r4, r4);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    do {
        if (Villager__refresh_records(villager, frame.at(0x20).addr(), r2, r3) == 0) {
            return;
        }
        r5 -= 1u;
        frame->word_0 = r4;
        TimeStamp__advance(frame.at(0x20).addr(), 1u, 0u, 0u);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        guest::preempt();
    } while (r5 != 0);
}

}  // namespace d_0010d454
GUEST_EXPORT_FRAMED(0x0010d455, d_0010d454::VillagerPart__advance_days_records, 0x4070);  // pushes {r4, r5, villager, lr} first, as the original

// f_0010d690: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Copies a block of villager data between records.
namespace d_0010d690 {

struct __attribute__((packed)) Local_0010d690_ea_1 {
    u32 villager_part;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u32 word_18;
};
GUEST_OFFSET(Local_0010d690_ea_1, villager_part, 0x0);
GUEST_OFFSET(Local_0010d690_ea_1, word_4, 0x4);
GUEST_OFFSET(Local_0010d690_ea_1, word_8, 0x8);
GUEST_OFFSET(Local_0010d690_ea_1, word_c, 0xc);
GUEST_OFFSET(Local_0010d690_ea_1, word_10, 0x10);
GUEST_OFFSET(Local_0010d690_ea_1, word_14, 0x14);
GUEST_OFFSET(Local_0010d690_ea_1, word_18, 0x18);

inline constexpr guest::Function<0x002f8574, u32(u32, u32, u32, u32)> copy_bytes_at_any_alignment;

void VillagerPart__copy_villager_block(u32 villager_part, u32 r1) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    u32 res_1 = 0;
    u32 r1_1 = 0;
    u32 r5_2 = 0;
    u32 r6_1 = 0;
    u32 r4_1 = 0;
    u32 r5_5 = 0;
    u32 r6_2 = 0;
    u32 r7_1 = 0;
    u32 tpc_1 = 0;
    gptr<Local_0010d690_ea_1> ea_1 = gptr<Local_0010d690_ea_1>(r13 - 0x1c);
    ea_1->villager_part = villager_part;
    ea_1->word_4 = r1;
    ea_1->word_8 = r4;
    ea_1->word_c = r5;
    ea_1->word_10 = r6;
    ea_1->word_14 = r7;
    ea_1->word_18 = r14;
    r13 = ea_1.addr() - 0x24u;
    r4 = villager_part;
    r7 = 0xffffu;
    u32 r0_1 = *gptr<u32>(r13 + 0x28u);
    if (r0_1 == r7) {
        r13 += 0x2cu;
        r4_1 = *gptr<u32>(r13);
        r5_5 = *gptr<u32>(r13 + 4);
        r6_2 = *gptr<u32>(r13 + 8);
        r7_1 = *gptr<u32>(r13 + 0xc);
        tpc_1 = *gptr<u32>(r13 + 0x10);
        r13 += 0x14;
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[4] = r4_1;
        guest::cpu()->r[5] = r5_5;
        guest::cpu()->r[6] = r6_2;
        guest::cpu()->r[7] = r7_1;
        guest::cpu()->r[13] = r13;
        return;
    }
    u32 r2 = r0_1;
    villager_part = r4 + 0x17656u;
    r1 = 0u;
    r5 = villager_part;
L_10d6a8:;
    u32 r3_1 = *gptr<u16>(villager_part);
    if (r3_1 != r2) {
        goto L_10d742;
    }
    if (r1 < 0x10u) {
        *gptr<u16>((r1 << 1) + r4 + 0x17656u) = u16(r7);
        r6 = r5;
        guest::cpu()->r[13] = r13;
        copy_bytes_at_any_alignment(r13, r5, 0x20u, r3_1);
        r5 = r6 - 2u;
        villager_part = 8u;
        do {
            *gptr<u16>(r5 + 2u) = u16(r7);
            r5 += 4u;
            res_1 = villager_part - 1u;
            villager_part = res_1;
            *gptr<u16>(r5) = u16(r7);
            guest::preempt();
        } while (res_1 != 0);
        r1 = 0u;
        r2 = 0x10u;
        villager_part = r13;
        do {
            u32 r3_2 = *gptr<u16>(villager_part);
            if (r3_2 != r7) {
                u32 r5_1 = r1 << 1;
                r1 += 1u;
                *gptr<u16>(r6 + r5_1) = u16(r3_2);
            }
            villager_part += 2u;
            r2 -= 1u;
            guest::preempt();
        } while (r2 != 0);
    }
L_10d6ee:;
    villager_part = 0x17640u;
    r1_1 = r4 + 0x1cu;
    r5_2 = *gptr<u16>(r1_1 + villager_part + 0x16u);
    r6_1 = r1_1 + 2u + villager_part;
    r7 = 0xfu;
    r1 = 1u;
    r2 = r1;
    *gptr<u16>(r6_1 + 0x16u) = u16(r5_2);
    do {
        u32 r1_2 = r1 + 1u;
        *gptr<u16>((r7 - r1 << 1) + r4 + villager_part + 0x16u) = *gptr<u16>(((0xeu - r1 << 1) + r4 + villager_part) + 0x16u);
        u32 r3_4 = *gptr<u16>((0xeu - r1_2 << 1) + r4 + villager_part + 0x16u);
        r1 = r1_2 + 1u;
        r2 += 2u;
        *gptr<u16>(((r7 - r1_2 << 1) + r4 + villager_part) + 0x16u) = u16(r3_4);
        guest::preempt();
    } while (s32(r2) < 0xf);
    r1 = r4 + villager_part;
    *gptr<u16>(r1 + 0x16u) = u16(*gptr<u32>(r13 + 0x28u));
    r13 += 0x2cu;
    r4_1 = *gptr<u32>(r13);
    r5_5 = *gptr<u32>(r13 + 4);
    r6_2 = *gptr<u32>(r13 + 8);
    r7_1 = *gptr<u32>(r13 + 0xc);
    tpc_1 = *gptr<u32>(r13 + 0x10);
    r13 += 0x14;
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[4] = r4_1;
    guest::cpu()->r[5] = r5_5;
    guest::cpu()->r[6] = r6_2;
    guest::cpu()->r[7] = r7_1;
    guest::cpu()->r[13] = r13;
    return;
L_10d742:;
    villager_part += 2u;
    r1 += 1u;
    if (s32(r1) >= 0x10) {
        guest::preempt();
        goto L_10d6ee;
    }
    guest::preempt();
    goto L_10d6a8;
}

}  // namespace d_0010d690
GUEST_EXPORT(0x0010d691, d_0010d690::VillagerPart__copy_villager_block);

// f_0010d984: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Advances the villager part by `days`: its records, visitors, level and each existing player's villager records.
namespace d_0010d984 {

inline constexpr guest::Function<0x0010d455, u32(u32, u32, u32, u32)> VillagerPart__advance_days_records;
inline constexpr guest::Function<0x00112e34, u32(u32, u32, u32)> VillagerRequest__update;
inline constexpr guest::Function<0x002fb96c, u32(u32, u32, u32, u32)> player_for_slot;
inline constexpr guest::Function<0x002fbd54, u32(u32, u32, u32, u32)> PersonalId__is_set;
inline constexpr guest::Function<0x00307104, u32(u32, u32)> LevelHolder__add_to_level;
inline constexpr guest::Function<0x00307108, u32(u32)> thunk_005bc1fc;
inline constexpr guest::Function<0x0030715c, u32(u32, u32, u32, u32)> TimedRecord__reset_if_stale;
inline constexpr guest::Function<0x00307160, u32(u32)> thunk_005bd974;
inline constexpr guest::Function<0x00307164, u32(u32, u32)> thunk_005bd388;
inline constexpr guest::Function<0x00307168, u32(u32, u32, u32)> thunk_005bcd4c;
inline constexpr guest::Function<0x0030aac8, u32(u32, u32)> Schedule__update;
inline constexpr guest::Function<0x0030ac68, u32(u32, u32, u32)> BadgeRecord__update;

struct __attribute__((packed)) VillagerPartAdvanceDaysFrame {
    u32 word_0;
};
GUEST_OFFSET(VillagerPartAdvanceDaysFrame, word_0, 0x0);
GUEST_SIZE(VillagerPartAdvanceDaysFrame, 0x4);

void VillagerPart__advance_days(u32 villager_part, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<VillagerPartAdvanceDaysFrame> frame;  // the original's stack frame
    frame->word_0 = r3;
    u32 r6 = r1;
    VillagerPart__advance_days_records(villager_part, r1, r2, r3);
    Schedule__update(villager_part + 0x173c6u, r6);
    Schedule__update(villager_part + 0x173a0u, r6);
    LevelHolder__add_to_level(villager_part + 0x173ecu, r6);
    thunk_005bc1fc(villager_part + 0x1764au);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    u32 r7 = 0x55a6u;
    u32 i = 0u;
    do {
        u32 player = player_for_slot(uxtb(i), r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (player != 0) {
            u32 r0_8 = PersonalId__is_set(player + r7, r1, r2, r3);
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            if (r0_8 != 0) {
                TimedRecord__reset_if_stale(player + 0x8d4cu, r6, r2, r3);
                if (r6 != 0) {
                    thunk_005bd974(player + 0x8d6cu);
                }
                thunk_005bd388(player + 0x8d5cu, r6);
                BadgeRecord__update(player + 0x8d84u, player, r6);
                VillagerRequest__update(player + 0x8dfau, r6, i);
                thunk_005bcd4c(player + 0x8e08u, r6, player);
                r1 = guest::cpu()->r[1];
                r2 = guest::cpu()->r[2];
                r3 = guest::cpu()->r[3];
            }
        }
        i += 1u;
        guest::preempt();
    } while (s32(i) < 4);
}

}  // namespace d_0010d984
GUEST_EXPORT_FRAMED(0x0010d985, d_0010d984::VillagerPart__advance_days, 0x40f0);  // pushes {r4, i, r6, r7, lr} first, as the original

// f_0010db50: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Clears the letter (0x280 bytes per slot) for player `slot` (below 4) in each valid villager.
namespace d_0010db50 {

inline constexpr guest::Function<0x002fe470, u32(u32, u32, u32, u32)> is_record_valid;
inline constexpr guest::Function<0x002ff408, u32(u32, u32, u32, u32)> Letter__clear;

struct __attribute__((packed)) VillagerPartClearLettersForSlotFrame {
    u32 word_0;
};
GUEST_OFFSET(VillagerPartClearLettersForSlotFrame, word_0, 0x0);
GUEST_SIZE(VillagerPartClearLettersForSlotFrame, 0x4);

void VillagerPart__clear_letters_for_slot(u32 villager_part, u32 r1, u32 r2_unused, u32 r3) {
    guest::StackFrameOf<VillagerPartClearLettersForSlotFrame> frame;  // the original's stack frame
    u32 r5_1 = 0;
    frame->word_0 = r3;
    u32 i = 0u;
    u32 r6 = r1;
    u32 r7 = villager_part;
    frame->word_0 = r6 * (5u << 7);
    do {
        if (i >= 0xau) {
            r5_1 = 0u;
        } else {
            r5_1 = i * 0x2518u + r7;
            if (r5_1 == 0) {
                goto L_10db8e;
            }
            u32 r0_1 = is_record_valid(r5_1, 0x2518u, guest::cpu()->r[2], r3);
            r3 = guest::cpu()->r[3];
            if (r0_1 == 0) {
                goto L_10db8e;
            }
        }
        if (r5_1 != 0 && r6 < 4u) {
            u32 r1_1 = frame->word_0 + r5_1;
            Letter__clear(r1_1 + 0x1810u, r1_1, guest::cpu()->r[2], r3);
            r3 = guest::cpu()->r[3];
        }
L_10db8e:;
        i += 1u;
        guest::preempt();
    } while (s32(i) < 0xa);
}

}  // namespace d_0010db50
GUEST_EXPORT_FRAMED(0x0010db51, d_0010db50::VillagerPart__clear_letters_for_slot, 0x40f0);  // pushes {i, r5, r6, r7, lr} first, as the original

// f_0010dea4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Updates the moving record (+0x173ec) when it has a value, unless a player matches it in state 4 with an item.
namespace d_0010dea4 {

inline constexpr guest::Function<0x002fae84, u32(u32)> get_data_base;
inline constexpr guest::Function<0x002fcaf4, u32(u32)> Item__is_empty;
inline constexpr guest::Function<0x002ff8f0, u32(u32, u32)> any_player_matches;
inline constexpr guest::Function<0x00309ef0, u32(u32, u32, u32, u32)> SavedRecordInner__has_value;
inline constexpr guest::Function<0x0030b250, u32(u32)> TimedRecord__clear_as_kind_21;

u32 VillagerPart__update_moving_record(u32 villager_part) {
    u32 r4_1 = villager_part + 0x173ecu;
    u32 r5_1 = r4_1 + 0x46u;
    u32 r0_1 = SavedRecordInner__has_value(r5_1, 0x173ecu, guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0_1 != 0) {
        u32 data_base = get_data_base(r0_1);
        u32 r0_4 = any_player_matches(data_base + 0x20u, r4_1);
        if (r0_4 != 0 && *gptr<u8>(r5_1 + 9u) == 4u) {
            u32 is_empty = Item__is_empty(r4_1 + 0x52u);
            if (is_empty == 0) {
                return is_empty;
            }
        }
        r0_1 = TimedRecord__clear_as_kind_21(r4_1);
    }
    return r0_1;
}

}  // namespace d_0010dea4
GUEST_EXPORT_FRAMED(0x0010dea5, d_0010dea4::VillagerPart__update_moving_record, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0010df1c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Clears bit `slot` (below 4) of bits 3-6 of +0x2510 in each villager.
namespace d_0010df1c {

struct __attribute__((packed)) Local_0010df1c_r0_2 {
    u8 unknown_0[0x10];  // (not used here)
    u32 word_10;
};
GUEST_OFFSET(Local_0010df1c_r0_2, word_10, 0x10);

inline constexpr guest::Function<0x00301e20, u32(u32, u32, u32, u32)> is_villager_record;

struct __attribute__((packed)) VillagerPartClearSlotBitFrame {
    u32 word_0;
};
GUEST_OFFSET(VillagerPartClearSlotBitFrame, word_0, 0x0);
GUEST_SIZE(VillagerPartClearSlotBitFrame, 0x4);

void VillagerPart__clear_slot_bit(u32 villager_part, u32 r1, u32 r2_unused, u32 r3) {
    guest::StackFrameOf<VillagerPartClearSlotBitFrame> frame;  // the original's stack frame
    frame->word_0 = r3;
    u32 r4 = villager_part;
    u32 r6 = r1;
    r1 = 0xfu & ~lsl_r(1u, r6 & 0xff);
    u32 r7 = 0x2518u;
    u32 i = 0u;
    u32 r2 = ~0x78u;
    frame->word_0 = r1 << 3 | r2;
    do {
        u32 is_villager = is_villager_record(r4, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (is_villager != 0 && r6 < 4u) {
            r2 = frame->word_0;
            gptr<Local_0010df1c_r0_2> r0_2 = gptr<Local_0010df1c_r0_2>(r4 + (0x25u << 8));
            r1 = r0_2->word_10 & r2;
            r0_2->word_10 = r1;
        }
        i += 1u;
        r4 += r7;
        guest::preempt();
    } while (s32(i) < 0xa);
}

}  // namespace d_0010df1c
GUEST_EXPORT_FRAMED(0x0010df1d, d_0010df1c::VillagerPart__clear_slot_bit, 0x40f0);  // pushes {r4, i, r6, r7, lr} first, as the original

// f_0010df64: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Updates each villager's flags for the date.
namespace d_0010df64 {

struct __attribute__((packed)) Local_0010df64_ea_1 {
    u32 villager_part;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u32 word_18;
};
GUEST_OFFSET(Local_0010df64_ea_1, villager_part, 0x0);
GUEST_OFFSET(Local_0010df64_ea_1, word_4, 0x4);
GUEST_OFFSET(Local_0010df64_ea_1, word_8, 0x8);
GUEST_OFFSET(Local_0010df64_ea_1, word_c, 0xc);
GUEST_OFFSET(Local_0010df64_ea_1, word_10, 0x10);
GUEST_OFFSET(Local_0010df64_ea_1, word_14, 0x14);
GUEST_OFFSET(Local_0010df64_ea_1, word_18, 0x18);

struct __attribute__((packed)) Local_0010df64_r4_1 {
    u8 unknown_0[0x10];  // (not used here)
    u32 word_10;
};
GUEST_OFFSET(Local_0010df64_r4_1, word_10, 0x10);

inline constexpr guest::Function<0x001b625c, u32(u32, u32, u32)> BitSet10__set;
inline constexpr guest::Function<0x002fae84, u32(u32, u32, u32)> get_data_base;
inline constexpr guest::Function<0x002fb378, u32(u32, u32, u32, u32)> game_time_now;
inline constexpr guest::Function<0x00301e20, u32(u32, u32, u32)> is_villager_record;

void VillagerPart__update_dated_flags(u32 villager_part, u32 r1, u32 r2) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 i = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    gptr<Local_0010df64_ea_1> ea_1 = gptr<Local_0010df64_ea_1>(r13 - 0x1c);
    ea_1->villager_part = villager_part;
    ea_1->word_4 = r1;
    ea_1->word_8 = r4;
    ea_1->word_c = r5;
    ea_1->word_10 = i;
    ea_1->word_14 = r7;
    ea_1->word_18 = r14;
    r13 = ea_1.addr() - 4u;
    r5 = villager_part;
    guest::cpu()->r[13] = r13;
    u32 now_2 = game_time_now(villager_part, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r7 = 0x2518u;
    i = 0u;
    *gptr<u32>(r13) = now_2;
    do {
        guest::cpu()->r[13] = r13;
        u32 is_villager = is_villager_record(r5, r1, r2);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        if (is_villager != 0) {
            gptr<Local_0010df64_r4_1> r4_1 = gptr<Local_0010df64_r4_1>(r5 + (0x25u << 8));
            u32 r0_3 = r4_1->word_10;
            r1 = r0_3 >> 1u & 1u;
            if (r1 != 0) {
                u32 r0_4 = r0_3 & ~(3u << 9);
                r4_1->word_10 = r0_4;
                if ((r0_4 & 1u) == 0u) {
                    if (*gptr<u8>(*gptr<u32>(r13) + 4u) == 0xcu) {
                        r1 = *gptr<u8>(*gptr<u32>(r13) + 5u);
                        if (r1 == 0x18u) {
                            goto L_10dfce;
                        }
                    }
                    u32 r0_5 = r0_4 | 1u;
                    r4_1->word_10 = r0_5;
                    guest::cpu()->r[13] = r13;
                    u32 data_base = get_data_base(r0_5, 1u, r2);
                    guest::cpu()->r[13] = r13;
                    BitSet10__set(data_base + 0x7170cu, i, 0x7170cu);
                    r1 = guest::cpu()->r[1];
                    r2 = guest::cpu()->r[2];
                    if (s32(*gptr<u32>(r13 + 8u)) <= 1) {
                        goto L_10dfce;
                    }
                    r0_4 = r4_1->word_10;
                }
                r1 = 2u;
                r4_1->word_10 = r0_4 >> 1 << 1 & ~r1;
            }
        }
L_10dfce:;
        i += 1u;
        r5 += r7;
        guest::preempt();
    } while (s32(i) < 0xa);
    r13 += 0xcu;
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

}  // namespace d_0010df64
GUEST_EXPORT(0x0010df65, d_0010df64::VillagerPart__update_dated_flags);

// f_0010dfe4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Updates the villagers' moods and their network share info for the day.
namespace d_0010dfe4 {

struct __attribute__((packed)) Local_0010dfe4_r7_3 {
    u8 unknown_0[0xe];  // (not used here)
    u8 byte_e;
    u8 villager_part;
};
GUEST_OFFSET(Local_0010dfe4_r7_3, byte_e, 0xe);
GUEST_OFFSET(Local_0010dfe4_r7_3, villager_part, 0xf);

inline constexpr u32 npc_net_share_info_instance_address = 0x0095386cu;
inline guest::global<u32, 0x0095386c> npc_net_share_info_instance;
inline constexpr guest::Function<0x001ad5c8, u32(u32, u32)> VisitingVillagers__clear;
inline constexpr guest::Function<0x002fe419, u32(u32, u32)> pick_random_set_bit;
inline constexpr guest::Function<0x002fe450, u32(u32, u32)> villager_runtime_entry_at;
inline constexpr guest::Function<0x002fe470, u32(u32, u32)> is_record_valid;
inline constexpr guest::Function<0x002fe4d0, u32(u32)> set_value_a83388;
inline constexpr guest::Function<0x003074b8, u32(u32, u32)> clear_field_or_update;
inline constexpr guest::Function<0x0030755c, u32(u32, u32)> FlagBits10__set;
inline constexpr guest::Function<0x00307560, u32(u32, u32)> index_of_value_in_3_veneer;
inline constexpr guest::Function<0x00307564, u32(u32, u32)> clear_flag_of_10;
inline constexpr guest::Function<0x003091e0, u32(u32, u32)> player_state_block_address;
inline constexpr guest::Function<0x003091ec, u32(u32)> read_field_u32_0x234_;
inline constexpr guest::Function<0x0030988c, u32(u32, u32)> saved_record_state_is_not_3;
inline constexpr guest::Function<0x003098b0, u32(u32, u32)> record_level_is_enough;
inline constexpr guest::Function<0x003099d0, u32(u32)> value_of_first_bit_9_or_10;
inline constexpr guest::Function<0x00309ccc, u32(u32)> index_in_pair_a83370;
inline constexpr guest::Function<0x0030b36c, u32(u32, u32, u32, u32)> ScheduledRecord__check_due;
inline constexpr guest::Function<0x0030b414, u32(u32)> VillagerTable__update;

struct __attribute__((packed)) VillagerPartUpdateMoodsFrame {
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
    u8 unknown_28[0xc];  // (not read or written by name)
    u32 word_34;
    u8 unknown_38[0x4];  // (not read or written by name)
};
GUEST_OFFSET(VillagerPartUpdateMoodsFrame, word_0, 0x0);
GUEST_OFFSET(VillagerPartUpdateMoodsFrame, word_4, 0x4);
GUEST_OFFSET(VillagerPartUpdateMoodsFrame, word_8, 0x8);
GUEST_OFFSET(VillagerPartUpdateMoodsFrame, word_c, 0xc);
GUEST_OFFSET(VillagerPartUpdateMoodsFrame, word_10, 0x10);
GUEST_OFFSET(VillagerPartUpdateMoodsFrame, word_14, 0x14);
GUEST_OFFSET(VillagerPartUpdateMoodsFrame, word_18, 0x18);
GUEST_OFFSET(VillagerPartUpdateMoodsFrame, word_1c, 0x1c);
GUEST_OFFSET(VillagerPartUpdateMoodsFrame, word_20, 0x20);
GUEST_OFFSET(VillagerPartUpdateMoodsFrame, word_24, 0x24);
GUEST_OFFSET(VillagerPartUpdateMoodsFrame, word_34, 0x34);
GUEST_SIZE(VillagerPartUpdateMoodsFrame, 0x3c);

u32 VillagerPart__update_moods(u32 villager_part, u32 r1) {
    guest::StackFrameOf<VillagerPartUpdateMoodsFrame> frame;  // the original's stack frame
    u32 r7_1 = 0;
    u32 r0_12 = 0;
    u32 r7_2 = 0;
    gptr<Local_0010dfe4_r7_3> r7_3 = gptr<Local_0010dfe4_r7_3>(0u);
    u32 r7_4 = 0;
    u32 r5 = villager_part;
    u32 scheduled_record = r5 + 0x173c6u;
    ScheduledRecord__check_due(scheduled_record, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_2 = r5 + 0x173a0u;
    ScheduledRecord__check_due(r0_2, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    set_value_a83388(~0u);
    VillagerTable__update(0u);
    u32 r0_4 = *npc_net_share_info_instance;
    frame->word_14 = r0_4;
    if (r0_4 != 0) {
        clear_field_or_update(r0_4 + 0x98u, 0u);
    }
    frame->word_4 = 0xa;
    frame->word_c = 0;
    u32 r6 = 0u;
    frame->word_8 = 0;
    frame->word_34 = 0;
    u32 r0_6 = r5 + 0x173ecu;
    frame->word_24 = r0_6;
    if (*gptr<u8>(r0_6 + 0x4fu) < 4u) {
        frame->word_34 = 1;
    }
    u32 r0_7 = ~0u;
    frame->word_10 = r0_7;
    frame->word_20 = r0_7;
    u32 r0_8 = record_level_is_enough(scheduled_record, 0x173ecu);
    u32 r1_4 = guest::cpu()->r[1];
    if (r0_8 == 0) {
        r1_4 = r5 + 0x173e0u;
        frame->word_10 = u32(*gptr<s8>(r1_4 + 7u));
    }
    u32 r0_9 = record_level_is_enough(r0_2, r1_4);
    u32 r1_5 = guest::cpu()->r[1];
    if (r0_9 == 0) {
        r1_5 = r5 + 0x173c0u;
        frame->word_20 = u32(*gptr<s8>(r1_5 + 1u));
    }
    u32 r0_10 = ~0u;
    frame->word_18 = r0_10;
    frame->word_1c = r0_10;
    villager_part = read_field_u32_0x234_(player_state_block_address(r0_10, r1_5));
    r1 = guest::cpu()->r[1];
    u32 r4 = villager_part;
    if (villager_part == 0) {
        goto L_10e0b8;
    }
    r7_1 = r4 + 0x8dfau;
    r0_12 = saved_record_state_is_not_3(r7_1, r1);
    if (r0_12 != 0) {
        frame->word_18 = u32(*gptr<s8>(r7_1 + 0xcu));
    }
    villager_part = *gptr<u8>(r4 + 0x8f88u);
    r1 = villager_part >> 6 << 0x1f;
    if (r1 != 0) {
        r1 = villager_part >> 7;
        if (r1 == 0) {
            r4 = 0u;
            frame->word_1c = villager_part >> 2u & 0xfu;
            goto L_10e0b2;
        }
    }
    r4 = 0u;
    goto L_10e0b8;
L_10e0b2:;
    villager_part = frame->word_1c;
    if (r4 == villager_part) {
        goto L_10e172;
    }
L_10e0b8:;
    if (r4 >= 0xau) {
        r7_2 = 0u;
    } else {
        r1 = 0x2518u;
        villager_part = r4 * r1;
        r7_2 = villager_part + r5;
        if (r7_2 == 0) {
            goto L_10e172;
        }
        villager_part = is_record_valid(r7_2, r1);
        r1 = guest::cpu()->r[1];
        if (villager_part == 0) {
            goto L_10e172;
        }
    }
    if (r7_2 != 0) {
        u32 r0_13 = villager_runtime_entry_at(r4, r1);
        if (r0_13 != 0) {
            if (s32(value_of_first_bit_9_or_10(r0_13)) >= 0) {
                villager_part = 2u;
                r1 = r7_2 + (0x25u << 8);
                *gptr<u8>(r1 + 0xfu) = u8(villager_part);
                goto L_10e172;
            }
        }
        u32 r0_15 = index_in_pair_a83370(r4);
        r1 = guest::cpu()->r[1];
        if (s32(r0_15) < 0) {
            r7_3 = gptr<Local_0010dfe4_r7_3>(r7_2 + (0x25u << 8));
            if (r7_3->byte_e == 0) {
                u32 r0_16 = frame->word_14;
                if (r0_16 != 0) {
                    FlagBits10__set(r0_16 + 0x98u, r4);
                    r1 = guest::cpu()->r[1];
                }
                r7_3->villager_part = 0;
                villager_part = frame->word_10;
                r6 += 1u;
                if (r4 == villager_part) {
                    goto L_10e172;
                }
                villager_part = frame->word_20;
                if (r4 == villager_part) {
                    goto L_10e172;
                }
                villager_part = frame->word_18;
                if (r4 == villager_part) {
                    goto L_10e172;
                }
                if (frame->word_34 != 0) {
                    villager_part = index_of_value_in_3_veneer(frame->word_24, r4);
                    r1 = guest::cpu()->r[1];
                    if (villager_part != 3u) {
                        goto L_10e172;
                    }
                }
                if (frame->word_4 > r4) {
                    r1 = frame->word_8;
                    u32 r0_19 = lsl_r(1u, r4 & 0xff);
                    if ((r1 & r0_19) == 0) {
                        r1 = frame->word_8 | r0_19;
                        u32 r0_20 = frame->word_c;
                        frame->word_8 = r1;
                        frame->word_c = r0_20 + 1u;
                    }
                }
            }
            goto L_10e160;
        }
        villager_part = 2u;
        r1 = r7_2 + (0x25u << 8);
        *gptr<u8>(r1 + 0xfu) = u8(villager_part);
        goto L_10e172;
L_10e160:;
        villager_part = r7_3->villager_part;
        if (villager_part == 3u || villager_part == 5u || villager_part == 6u) {
            villager_part = 2u;
            r7_3->villager_part = u8(villager_part);
        }
    }
L_10e172:;
    r4 += 1u;
    if (s32(r4) >= 0xa) {
        if (s32(r6) > 3) {
            frame->word_0 = frame->word_14 + 0x98u;
            do {
                villager_part = pick_random_set_bit(frame.at(4).addr(), r1);
                r1 = guest::cpu()->r[1];
                u32 r4_1 = villager_part;
                if (villager_part >= 0xau) {
                    r7_4 = 0u;
                } else {
                    r1 = 0x2518u;
                    villager_part = villager_part * r1;
                    r7_4 = villager_part + r5;
                    if (r7_4 == 0) {
                        goto L_10e1da;
                    }
                    villager_part = is_record_valid(r7_4, r1);
                    r1 = guest::cpu()->r[1];
                    if (villager_part == 0) {
                        goto L_10e1da;
                    }
                }
                if (r7_4 != 0) {
                    r1 = r7_4 + (0x25u << 8);
                    *gptr<u8>(r1 + 0xfu) = 2;
                    if (frame->word_4 > r4_1) {
                        r1 = frame->word_8;
                        u32 r0_22 = lsl_r(1u, r4_1 & 0xff);
                        if ((r1 & r0_22) != 0) {
                            r1 = frame->word_8 & ~r0_22;
                            u32 r0_23 = frame->word_c;
                            frame->word_8 = r1;
                            frame->word_c = r0_23 - 1u;
                        }
                    }
                    villager_part = frame->word_14;
                    r6 -= 1u;
                    if (villager_part != 0) {
                        villager_part = clear_flag_of_10(frame->word_0, r4_1);
                        r1 = guest::cpu()->r[1];
                    }
                }
L_10e1da:;
                guest::preempt();
            } while (s32(r6) > 3);
        }
        return VisitingVillagers__clear(villager_part, r1);
    }
    guest::preempt();
    goto L_10e0b2;
}

}  // namespace d_0010dfe4
GUEST_EXPORT_FRAMED(0x0010dfe5, d_0010dfe4::VillagerPart__update_moods, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_0010e210: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Resets the two visitor records (+0x173c6, +0x173a0).
namespace d_0010e210 {

inline constexpr guest::Function<0x0030b544, u32(u32)> ScheduledRecord__clear_waiting;

u32 VillagerPart__reset_visitor_records(u32 villager_part) {
    ScheduledRecord__clear_waiting(villager_part + 0x173c6u);
    ScheduledRecord__clear_waiting(villager_part + 0x173a0u);
    return villager_part + 0x173a0u;
}

}  // namespace d_0010e210
GUEST_EXPORT_FRAMED(0x0010e211, d_0010e210::VillagerPart__reset_visitor_records, 0x4010);  // pushes {r4, lr} first, as the original

// f_0010e230: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Picks items for the villagers from the item sets.
namespace d_0010e230 {

inline constexpr guest::Function<0x002f777c, u32(u32, u32)> do_nothing_002f777c;
inline constexpr guest::Function<0x002fc288, u32(u32, u32)> ItemBitSet__clear_and_return;
inline constexpr guest::Function<0x002fc8fc, u32(u32)> do_nothing_002fc8fc;
inline constexpr guest::Function<0x002fe419, u32(u32, u32, u32, u32)> pick_random_set_bit;
inline constexpr guest::Function<0x002fe470, u32(u32, u32, u32, u32)> is_record_valid;
inline constexpr guest::Function<0x002fea2c, u32(u32, u32)> pick_random_item;
inline constexpr guest::Function<0x003075c8, u32(u32, u32, u32, u32)> ItemSet__add_groups_veneer;
inline constexpr guest::Function<0x0030b5a5, u32(u32, u32, u32, u32)> copy_item_24ae;
inline constexpr guest::Function<0x0030b654, u32(u32)> item_has_valid_data;
inline constexpr guest::Function<0x0030b674, u32(u32, u32)> item_data_byte_19_value;
inline constexpr guest::Function<0x0030b6b8, u32(u32)> Item__number;

struct __attribute__((packed)) VillagerPartPickVillagerItemsFrame {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u8 unknown_14[0x2f0];  // (not read or written by name)
};
GUEST_OFFSET(VillagerPartPickVillagerItemsFrame, word_0, 0x0);
GUEST_OFFSET(VillagerPartPickVillagerItemsFrame, word_4, 0x4);
GUEST_OFFSET(VillagerPartPickVillagerItemsFrame, word_8, 0x8);
GUEST_OFFSET(VillagerPartPickVillagerItemsFrame, word_c, 0xc);
GUEST_OFFSET(VillagerPartPickVillagerItemsFrame, word_10, 0x10);
GUEST_SIZE(VillagerPartPickVillagerItemsFrame, 0x304);

void VillagerPart__pick_villager_items(u32 villager_part, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<VillagerPartPickVillagerItemsFrame> frame;  // the original's stack frame
    u32 r7 = 0;
    u32 r6 = villager_part;
    frame->word_8 = 0xa;
    u32 j = 0u;
    frame->word_c = 0;
    frame->word_10 = 0;
    do {
        if (j >= 0xau) {
            r7 = 0u;
        } else {
            r1 = 0x2518u;
            r7 = j * r1 + r6;
            if (r7 == 0) {
                goto L_10e290;
            }
            u32 r0_1 = is_record_valid(r7, r1, r2, r3);
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            if (r0_1 == 0) {
                goto L_10e290;
            }
        }
        if (r7 != 0) {
            u32 i = 0u;
            do {
                copy_item_24ae(frame.at(0).addr(), r7, i, r3);
                u32 r0_4 = item_has_valid_data(frame.at(0).addr());
                u32 r1_2 = guest::cpu()->r[1];
                if (r0_4 != 0) {
                    u32 r0_6 = item_data_byte_19_value(frame.at(0).addr(), r1_2);
                    r1_2 = guest::cpu()->r[1];
                    if (r0_6 == 1u || r0_6 == 2u) {
                        if (frame->word_8 > j) {
                            r1_2 = frame->word_c;
                            u32 r0_7 = lsl_r(1u, j & 0xff);
                            if ((r1_2 & r0_7) == 0) {
                                r1_2 = frame->word_c | r0_7;
                                u32 r0_8 = frame->word_10;
                                frame->word_c = r1_2;
                                frame->word_10 = r0_8 + 1u;
                            }
                        }
                        do_nothing_002f777c(frame.at(0).addr(), r1_2);
                        r1 = guest::cpu()->r[1];
                        r2 = guest::cpu()->r[2];
                        r3 = guest::cpu()->r[3];
                        break;
                    }
                }
                do_nothing_002f777c(frame.at(0).addr(), r1_2);
                r1 = guest::cpu()->r[1];
                r2 = guest::cpu()->r[2];
                r3 = guest::cpu()->r[3];
                i += 1u;
                guest::preempt();
            } while (s32(i) < 0xa);
        }
L_10e290:;
        j += 1u;
        guest::preempt();
    } while (s32(j) < 0xa);
    u32 r0_12 = pick_random_set_bit(frame.at(8).addr(), r1, r2, r3);
    u32 r1_3 = r6 + 0x19760u;
    *gptr<u8>(r1_3 + 7u) = u8(r0_12);
    ItemBitSet__clear_and_return(frame.at(0x18).addr(), r1_3);
    frame->word_0 = 1;
    frame->word_4 = 1;
    ItemSet__add_groups_veneer(frame.at(0x18).addr(), 5u, 0u, 1u);
    pick_random_item(frame.at(0x14).addr(), frame.at(0x18).addr());
    u32 number = Item__number(frame.at(0x14).addr());
    u32 r1_5 = r6 + 0x196e0u;
    *gptr<u16>(r1_5 + 0x1au) = u16(number);
    do_nothing_002f777c(number, r1_5);
    do_nothing_002fc8fc(number);
}

}  // namespace d_0010e230
GUEST_EXPORT_FRAMED(0x0010e231, d_0010e230::VillagerPart__pick_villager_items, 0x40f0);  // pushes {j, i, r6, r7, lr} first, as the original

// f_0010e360: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether `id` is one of the ten 16-bit ids at 0x95c230.
namespace d_0010e360 {

inline constexpr u32 global_0095c230_address = 0x0095c230u;

u32 id_in_table_95c230(u32 r0) {
    u32 r2 = global_0095c230_address;
    u32 r1 = 0u;
    do {
        u32 r3_1 = r1 << 1;
        if (*gptr<u16>(r2 + r3_1) == r0 || *gptr<u16>(r3_1 + r2 + 2u) == r0) {
            return 1u;
        }
        r1 += 2u;
        guest::preempt();
    } while (s32(r1) < 0xa);
    return 0u;
}

}  // namespace d_0010e360
GUEST_EXPORT_FRAMED(0x0010e361, d_0010e360::id_in_table_95c230, 0x10);  // pushes {r4} first, as the original

// f_0010e7ac: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Updates the villagers' records for the network (packets and boards).
namespace d_0010e7ac {

struct __attribute__((packed)) VillagerPart {
    u8 unknown_0[0x19767];  // (not used here)
    u8 byte_19767;
};
GUEST_OFFSET(VillagerPart, byte_19767, 0x19767);

struct __attribute__((packed)) Local_0010e7ac_r0_17 {
    u8 unknown_0[0x4];  // (not used here)
    u8 byte_4;
};
GUEST_OFFSET(Local_0010e7ac_r0_17, byte_4, 0x4);

struct __attribute__((packed)) Local_0010e7ac_r0_24 {
    u8 unknown_0[0xe];  // (not used here)
    u8 byte_e;
    u8 byte_f;
};
GUEST_OFFSET(Local_0010e7ac_r0_24, byte_e, 0xe);
GUEST_OFFSET(Local_0010e7ac_r0_24, byte_f, 0xf);

struct __attribute__((packed)) Local_0010e7ac_r1_12 {
    u8 unknown_0[0xe];  // (not used here)
    u8 byte_e;
    u8 unknown_f[0x1];  // (not used here)
    u32 word_10;
};
GUEST_OFFSET(Local_0010e7ac_r1_12, byte_e, 0xe);
GUEST_OFFSET(Local_0010e7ac_r1_12, word_10, 0x10);

inline constexpr u32 npc_net_packet_mgr_instance_address = 0x00953864u;
inline guest::global<u32, 0x00953864> npc_net_packet_mgr_instance;
inline constexpr guest::Function<0x0029cc7c, u32(u32, u32)> NetEntries10__reset;
inline constexpr guest::Function<0x002fe419, u32(u32, u32, u32)> pick_random_set_bit;
inline constexpr guest::Function<0x002fe470, u32(u32, u32, u32)> is_record_valid;
inline constexpr guest::Function<0x00301e20, u32(u32, u32, u32)> is_villager_record;
inline constexpr guest::Function<0x00308355, u32(u32)> init_object_with_sub_objects;
inline constexpr guest::Function<0x003091e0, u32(u32, u32, u32)> player_state_block_address;
inline constexpr guest::Function<0x003091ec, u32(u32)> read_field_u32_0x234_;
inline constexpr guest::Function<0x00309f85, u32(u32, u32, u32)> SaveVillager__find_player_record_00309f84;
inline constexpr guest::Function<0x0030b8bc, u32(u32)> reset_record_0030b8bc;
inline constexpr guest::Function<0x0030c428, u32(u32, u32, u32, u32)> reset_record_book;
inline constexpr guest::Function<0x0030c4d0, u32(u32)> reset_record_4e;
inline constexpr guest::Function<0x0030c4f4, u32(u32)> PlayerPairRecords__clear;
inline constexpr guest::Function<0x0030c578, u32(u32)> reset_record_kind_21;
inline constexpr guest::Function<0x0030c599, u32(u32)> clear_16_entries_of_12_bytes;

u32 VillagerPart__update_network_records(gptr<VillagerPart> villager_part, u32 j, u32 r2) {
    u32 r0 = villager_part.addr();
    u32 r13 = guest::cpu()->r[13];
    u32 r4 = r0;
    r13 -= 0x30u;
    guest::cpu()->r[13] = r13;
    reset_record_book(r4 + 0x172f4u, j, r2, guest::cpu()->r[3]);
    guest::cpu()->r[13] = r13;
    reset_record_0030b8bc(r4 + 0x173a0u);
    guest::cpu()->r[13] = r13;
    reset_record_0030b8bc(r4 + 0x173c6u);
    guest::cpu()->r[13] = r13;
    reset_record_4e(r4 + 0x173ecu);
    guest::cpu()->r[13] = r13;
    PlayerPairRecords__clear(r4 + 0x17448u);
    guest::cpu()->r[13] = r13;
    reset_record_kind_21(r4 + 0x1764au);
    guest::cpu()->r[13] = r13;
    init_object_with_sub_objects(r4 + 0x17676u);
    guest::cpu()->r[13] = r13;
    init_object_with_sub_objects(r4 + 0x185f2u);
    guest::cpu()->r[13] = r13;
    clear_16_entries_of_12_bytes(r4 + 0x19570u);
    guest::cpu()->r[13] = r13;
    clear_16_entries_of_12_bytes(r4 + 0x19630u);
    u32 r1_10 = ~0u;
    *gptr<u32>(r13 + 0xcu) = 5;
    villager_part->byte_19767 = u8(r1_10);
    *gptr<u32>(r13) = 0xa;
    u32 r7 = r4;
    *gptr<u32>(r13 + 4u) = 0;
    *gptr<u32>(r13 + 8u) = 0;
    guest::cpu()->r[13] = r13;
    u32 r0_11 = player_state_block_address(0u, r1_10, r4 + 0x19760u);
    guest::cpu()->r[13] = r13;
    u32 r0_12 = read_field_u32_0x234_(r0_11);
    r2 = guest::cpu()->r[2];
    j = 0x55a6u;
    u32 r6 = 0x2518u;
    u32 i = 0u;
    *gptr<u32>(r13 + 0x10u) = r0_12;
    *gptr<u32>(r13 + 0x14u) = r0_12 + j;
    do {
        guest::cpu()->r[13] = r13;
        u32 is_villager = is_villager_record(r7, j, r2);
        j = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        if (is_villager != 0) {
            gptr<Local_0010e7ac_r1_12> r1_12 = gptr<Local_0010e7ac_r1_12>(r7 + (0x25u << 8));
            r1_12->byte_e = 1;
            j = r1_12->word_10;
            r2 = j & 1u;
            if (r2 == 0) {
                j = j >> 1u & 1u;
                if (j == 0) {
                    j = *gptr<u32>(r13);
                    if (j > i) {
                        j = *gptr<u32>(r13 + 4u);
                        u32 r0_14 = lsl_r(1u, i & 0xff);
                        if ((j & r0_14) == 0) {
                            j = *gptr<u32>(r13 + 4u) | r0_14;
                            u32 r0_15 = *gptr<u32>(r13 + 8u);
                            *gptr<u32>(r13 + 4u) = j;
                            *gptr<u32>(r13 + 8u) = r0_15 + 1u;
                        }
                    }
                }
            }
            if (*gptr<u32>(r13 + 0x10u) != 0) {
                u32 r1_13 = *gptr<u32>(r13 + 0x14u);
                guest::cpu()->r[13] = r13;
                u32 r0_16 = SaveVillager__find_player_record_00309f84(r7, r1_13, r2);
                j = guest::cpu()->r[1];
                r2 = guest::cpu()->r[2];
                if (r0_16 != 0) {
                    gptr<Local_0010e7ac_r0_17> r0_17 = gptr<Local_0010e7ac_r0_17>(r0_16 + 0xb6u);
                    r2 = 0x8fu;
                    j = u32(r0_17->byte_4) & 0xf1u & r2;
                    r0_17->byte_4 = u8(j);
                }
            }
        }
        i += 1u;
        r7 += r6;
        guest::preempt();
    } while (s32(i) < 0xa);
    goto L_10e8ea;
L_10e8b4:;
    if (r7 != 0) {
        j = 0u;
        *gptr<u8>(r7 + (0x25u << 8) + 0xeu) = u8(j);
        if (*gptr<u32>(r13) > i) {
            j = *gptr<u32>(r13 + 4u);
            u32 r0_18 = lsl_r(1u, i & 0xff);
            if ((j & r0_18) != 0) {
                j = *gptr<u32>(r13 + 4u) & ~r0_18;
                u32 r0_19 = *gptr<u32>(r13 + 8u);
                *gptr<u32>(r13 + 4u) = j;
                *gptr<u32>(r13 + 8u) = r0_19 - 1u;
            }
        }
        *gptr<u32>(r13 + 0xcu) = *gptr<u32>(r13 + 0xcu) - 1u;
    }
L_10e8e4:;
    if (s32(*gptr<u32>(r13 + 0xcu)) <= 0) {
        goto L_10e8f0;
    }
L_10e8ea:;
    if (*gptr<u32>(r13 + 8u) != 0) {
        guest::cpu()->r[13] = r13;
        u32 r0_21 = pick_random_set_bit(r13, j, r2);
        j = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        i = r0_21;
        if (r0_21 >= 0xau) {
            r7 = 0u;
            guest::preempt();
            goto L_10e8b4;
        }
        j = 0x2518u;
        r7 = r0_21 * j + r4;
        if (r7 == 0) {
            guest::preempt();
            goto L_10e8e4;
        }
        guest::cpu()->r[13] = r13;
        u32 r0_22 = is_record_valid(r7, j, r2);
        j = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        if (r0_22 == 0) {
            guest::preempt();
            goto L_10e8e4;
        }
        guest::preempt();
        goto L_10e8b4;
    }
L_10e8f0:;
    i = 0u;
    r7 = 0x25u << 8;
    do {
        guest::cpu()->r[13] = r13;
        u32 is_villager_2 = is_villager_record(r4, j, r2);
        j = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        if (is_villager_2 != 0) {
            gptr<Local_0010e7ac_r0_24> r0_24 = gptr<Local_0010e7ac_r0_24>(r4 + r7);
            j = r0_24->byte_e;
            if (j != 0) {
                j = 2u;
            }
            r0_24->byte_f = u8(j);
        }
        i += 1u;
        r4 += r6;
        guest::preempt();
    } while (s32(i) < 0xa);
    u32 net_entries10 = *npc_net_packet_mgr_instance;
    guest::cpu()->r[13] = r13;
    u32 r0_26 = NetEntries10__reset(net_entries10, j);
    r13 += 0x30u;
    guest::cpu()->r[13] = r13;
    return r0_26;
}

}  // namespace d_0010e7ac
GUEST_EXPORT(0x0010e7ad, d_0010e7ac::VillagerPart__update_network_records);

// f_0010e9a8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Clears flag 2 of +0x2510 and the record at +0x8be of each villager, then rates the current player for each villager.
namespace d_0010e9a8 {

inline constexpr guest::Function<0x00301e20, u32(u32, u32, u32, u32)> is_villager_record;
inline constexpr guest::Function<0x00303cdc, u32(u32, u32, u32, u32)> clear_inner;
inline constexpr guest::Function<0x0030c824, u32(u32, u32, u32, u32)> villager_runtime_entry;
inline constexpr guest::Function<0x0030c868, u32(u32, u32, u32, u32)> rate_player_for_villager;

struct __attribute__((packed)) VillagerPartResetDailyRatingsFrame {
    u32 word_0;
};
GUEST_OFFSET(VillagerPartResetDailyRatingsFrame, word_0, 0x0);
GUEST_SIZE(VillagerPartResetDailyRatingsFrame, 0x4);

u32 VillagerPart__reset_daily_ratings(u32 villager_part) {
    guest::StackFrameOf<VillagerPartResetDailyRatingsFrame> frame;  // the original's stack frame
    u32 r2 = 0;
    u32 r0_2 = 0;
    frame->word_0 = villager_part;
    u32 i = 0u;
    u32 r4 = 0x2518u;
    villager_part = frame->word_0;
    u32 j = 0x25u << 8;
    u32 r3 = 4u;
    do {
        r2 = villager_part + j;
        villager_part += r4;
        i += 1u;
        *gptr<u32>(r2 + 0x10u) = *gptr<u32>(r2 + 0x10u) & ~r3;
        guest::preempt();
    } while (s32(i) < 0xa);
    u32 r7 = 0x8beu;
    u32 save_villager = frame->word_0;
    j = 0u;
    do {
        clear_inner(save_villager + r7, i, r2, r3);
        i = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        j += 1u;
        save_villager += r4;
        guest::preempt();
    } while (s32(j) < 0xa);
    save_villager = frame->word_0;
    r7 = 0u;
    j = r7;
    do {
        r0_2 = is_villager_record(save_villager, i, r2, r3);
        i = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (r0_2 != 0) {
            r0_2 = villager_runtime_entry(save_villager, i, r2, r3);
            i = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            if (r0_2 != 0) {
                r0_2 = rate_player_for_villager(r0_2 + 0x38u, save_villager, r7, r3);
                i = guest::cpu()->r[1];
                r2 = guest::cpu()->r[2];
                r3 = guest::cpu()->r[3];
            }
        }
        j += 1u;
        save_villager += r4;
        guest::preempt();
    } while (s32(j) < 0xa);
    guest::cpu()->r[1] = i;
    return r0_2;
}

}  // namespace d_0010e9a8
GUEST_EXPORT_FRAMED(0x0010e9a9, d_0010e9a8::VillagerPart__reset_daily_ratings, 0x40f0);  // pushes {r4, save_villager, j, r7, lr} first, as the original

// f_0010eeec: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Starts the countdown of the event at +0x19760 when it has none: 7 (or 10 when its villager is close to a player)
// minus the elapsed days; -1 without a valid villager.
namespace d_0010eeec {

struct __attribute__((packed)) VillagerPart {
    u8 unknown_0[0x19762];  // (not used here)
    u8 byte_19762;
};
GUEST_OFFSET(VillagerPart, byte_19762, 0x19762);

struct __attribute__((packed)) Local_0010eeec_r4_1 {
    u8 byte_0;
    u8 byte_1;
};
GUEST_OFFSET(Local_0010eeec_r4_1, byte_0, 0x0);
GUEST_OFFSET(Local_0010eeec_r4_1, byte_1, 0x1);

inline constexpr guest::Function<0x002fe470, u32(u32, u32, u32, u32)> is_record_valid;
inline constexpr guest::Function<0x0030aa59, u32(u32, u32, u32, u32)> villager_is_close_to_a_player;

void VillagerPart__start_event_countdown(gptr<VillagerPart> villager_part) {
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    gptr<Local_0010eeec_r4_1> r4_1 = gptr<Local_0010eeec_r4_1>(villager_part.addr() + 0x19760u);
    u32 r0_1 = 0u;
    u32 r2_1 = s8(villager_part->byte_19762);
    if (r2_1 < 0xau) {
        u32 r2_2 = r2_1 * 0x2518u;
        u32 r5_1 = r2_2 + villager_part.addr();
        if (r5_1 == 0) {
            r0_5 = ~0u;
            r4_1->byte_1 = u8(r0_5);
            return;
        }
        u32 r0_2 = is_record_valid(r5_1, villager_part.addr(), r2_2, guest::cpu()->r[3]);
        r2_1 = guest::cpu()->r[2];
        if (r0_2 == 0) {
            r0_5 = ~0u;
            r4_1->byte_1 = u8(r0_5);
            return;
        }
        r0_1 = r5_1;
    }
    if (r0_1 != 0) {
        u32 r1_1 = s8(r4_1->byte_1);
        if (s32(r1_1) >= 0) {
            return;
        }
        if (villager_is_close_to_a_player(r0_1, r1_1, r2_1, guest::cpu()->r[3]) == 0) {
            r0_4 = 7u;
            r0_5 = r0_4 - u32(r4_1->byte_0);
            r4_1->byte_1 = u8(r0_5);
            return;
        }
        r0_4 = 0xau;
        r0_5 = r0_4 - u32(r4_1->byte_0);
        r4_1->byte_1 = u8(r0_5);
        return;
    }
    r0_5 = ~0u;
    r4_1->byte_1 = u8(r0_5);
}

}  // namespace d_0010eeec
GUEST_EXPORT_FRAMED(0x0010eeed, d_0010eeec::VillagerPart__start_event_countdown, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0010f044: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Forwards to 0010f04c.
namespace d_0010f044 {

inline constexpr guest::Function<0x0010f04d, u32(u32, u32, u32, u32)> Villager__clear_player_slot;

void call_0010f04c() {
    Villager__clear_player_slot(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0010f044
GUEST_EXPORT(0x0010f044, d_0010f044::call_0010f04c);

// f_0010f0b0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Runs the villager part's new-day update: its records, the event state, the two 16-entry tables and the moving
// record; returns true.
namespace d_0010f0b0 {

struct __attribute__((packed)) VillagerPart {
    u8 unknown_0[0x19760];  // (not used here)
    u8 byte_19760;
    u8 unknown_19761[0x1];  // (not used here)
    u8 byte_19762;
};
GUEST_OFFSET(VillagerPart, byte_19760, 0x19760);
GUEST_OFFSET(VillagerPart, byte_19762, 0x19762);

inline constexpr guest::Function<0x002fe4d0, u32(u32)> set_value_a83388;
inline constexpr guest::Function<0x00300634, u32(u32, u32)> store_mode_bytes;
inline constexpr guest::Function<0x00307fcc, u32(u32, u32)> thunk_005b743c;
inline constexpr guest::Function<0x00307fd0, u32(u32, u32)> thunk_005b71bc;
inline constexpr guest::Function<0x00307fd4, u32(u32, u32)> thunk_005bb2bc;
inline constexpr guest::Function<0x0030c599, u32(u32)> clear_16_entries_of_12_bytes;
inline constexpr guest::Function<0x0030ddb4, u32(u32, u32, u32, u32)> thunk_0051f2b0;

u32 VillagerPart__on_new_day(gptr<VillagerPart> villager_part, u32 r1) {
    thunk_0051f2b0(villager_part.addr(), r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    set_value_a83388(~0u);
    if (r1 != 0) {
        u32 r0_2 = thunk_005b743c(villager_part.addr(), r1);
        if (r0_2 != 0 && s8(villager_part->byte_19762) < 0) {
            villager_part->byte_19760 = 0;
        }
        thunk_005b71bc(villager_part.addr(), r1);
        clear_16_entries_of_12_bytes(villager_part.addr() + 0x19570u);
        clear_16_entries_of_12_bytes(villager_part.addr() + 0x19630u);
    }
    thunk_005bb2bc(villager_part.addr() + 0x17448u, r1);
    store_mode_bytes(1u, 0u);
    return 1u;
}

}  // namespace d_0010f0b0
GUEST_EXPORT_FRAMED(0x0010f0b1, d_0010f0b0::VillagerPart__on_new_day, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0010f138: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Adds `days` to the event's elapsed days (up to 0x7f) and counts its countdown down.
namespace d_0010f138 {

struct __attribute__((packed)) VillagerPart {
    u8 unknown_0[0x19760];  // (not used here)
    u8 byte_19760;
};
GUEST_OFFSET(VillagerPart, byte_19760, 0x19760);

struct __attribute__((packed)) Local_0010f138_r0_1 {
    u8 byte_0;
    u8 byte_1;
};
GUEST_OFFSET(Local_0010f138_r0_1, byte_0, 0x0);
GUEST_OFFSET(Local_0010f138_r0_1, byte_1, 0x1);


u32 VillagerPart__advance_event_days(gptr<VillagerPart> villager_part, u32 r1) {
    gptr<Local_0010f138_r0_1> r0_1 = gptr<Local_0010f138_r0_1>(villager_part.addr() + 0x19760u);
    u32 r2_1 = u32(s8(villager_part->byte_19760)) + r1;
    if (r2_1 > 0x7fu) {
        r2_1 = 0x7fu;
    }
    u32 r3_1 = s8(r0_1->byte_1);
    r0_1->byte_0 = u8(r2_1);
    if (s32(r3_1) <= 0) {
        guest::cpu()->r[1] = r1;
        return r0_1.addr();
    }
    if (r3_1 > r1) {
        u32 r1_1 = r3_1 - r1;
        r0_1->byte_1 = u8(r1_1);
        guest::cpu()->r[1] = r1_1;
        return r0_1.addr();
    }
    r0_1->byte_1 = 0;
    guest::cpu()->r[1] = 0u;
    return r0_1.addr();
}

}  // namespace d_0010f138
GUEST_EXPORT(0x0010f139, d_0010f138::VillagerPart__advance_event_days);

// f_0010f16c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// After loading: refreshes the visitor records and the moving record, resets the NPC packets and clears 0x95c219.
namespace d_0010f16c {

struct __attribute__((packed)) VillagerPart {
    u8 unknown_0[0x1743b];  // (not used here)
    u8 byte_1743b;
};
GUEST_OFFSET(VillagerPart, byte_1743b, 0x1743b);

inline constexpr u32 npc_net_packet_mgr_instance_address = 0x00953864u;
inline constexpr u32 villager_part_flags_address = 0x0095c218u;
inline guest::global<u32, 0x00953864> npc_net_packet_mgr_instance;
inline guest::global<u8, 0x0095c219> villager_part_loaded;
inline constexpr guest::Function<0x002fae84, u32(u32, u32)> get_data_base;
inline constexpr guest::Function<0x002fcaf4, u32(u32, u32)> Item__is_empty;
inline constexpr guest::Function<0x002ff8f0, u32(u32, u32)> any_player_matches;
inline constexpr guest::Function<0x003081c8, u32(u32)> reset_shared_entry_table_003081c8;
inline constexpr guest::Function<0x00309ef0, u32(u32)> SavedRecordInner__has_value;
inline constexpr guest::Function<0x0030b250, u32(u32, u32)> TimedRecord__clear_as_kind_21;
inline constexpr guest::Function<0x0030ddb4, u32(u32, u32)> thunk_0051f2b0;
inline constexpr guest::Function<0x0030e185, u32(u32, u32, u32, u32)> ScheduledRecord__update_for_player;

u32 VillagerPart__on_load(gptr<VillagerPart> villager_part) {
    u32 r0 = villager_part.addr();
    ScheduledRecord__update_for_player(r0, r0 + 0x173c6u, guest::cpu()->r[2], guest::cpu()->r[3]);
    ScheduledRecord__update_for_player(r0, r0 + 0x173a0u, guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r4 = r0 + 0x173ecu;
    u32 r0_1 = SavedRecordInner__has_value(r4 + 0x46u);
    u32 r1 = guest::cpu()->r[1];
    if (r0_1 != 0) {
        u32 data_base = get_data_base(r0_1, r1);
        u32 r0_4 = any_player_matches(data_base + 0x20u, r4);
        r1 = guest::cpu()->r[1];
        if (r0_4 != 0 && villager_part->byte_1743b == 4u) {
            goto L_10f1b4;
        }
L_10f1ac:;
        r0_1 = r4;
        TimedRecord__clear_as_kind_21(r0_1, r1);
        goto L_10f1c0;
L_10f1b4:;
        r0_1 = Item__is_empty(r4 + 0x52u, r1);
        r1 = guest::cpu()->r[1];
        if (r0_1 != 0) {
            guest::preempt();
            goto L_10f1ac;
        }
    }
L_10f1c0:;
    thunk_0051f2b0(r0_1, r1);
    reset_shared_entry_table_003081c8(*npc_net_packet_mgr_instance);
    *villager_part_loaded = 0;
    guest::cpu()->r[1] = villager_part_flags_address;
    return 0u;
}

}  // namespace d_0010f16c
GUEST_EXPORT_FRAMED(0x0010f16d, d_0010f16c::VillagerPart__on_load, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0010f3d0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Updates the villagers' slot flags (by their slot index and state).
namespace d_0010f3d0 {

struct __attribute__((packed)) Local_0010f3d0_ea_1 {
    u32 villager_part;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
};
GUEST_OFFSET(Local_0010f3d0_ea_1, villager_part, 0x0);
GUEST_OFFSET(Local_0010f3d0_ea_1, word_4, 0x4);
GUEST_OFFSET(Local_0010f3d0_ea_1, word_8, 0x8);
GUEST_OFFSET(Local_0010f3d0_ea_1, word_c, 0xc);
GUEST_OFFSET(Local_0010f3d0_ea_1, word_10, 0x10);
GUEST_OFFSET(Local_0010f3d0_ea_1, word_14, 0x14);

struct __attribute__((packed)) Local_0010f3d0_r7_1 {
    u8 unknown_0[0x10];  // (not used here)
    u32 word_10;
};
GUEST_OFFSET(Local_0010f3d0_r7_1, word_10, 0x10);

inline constexpr guest::Function<0x00301e20, u32(u32, u32, u32)> is_villager_record;
inline constexpr guest::Function<0x00309865, u32(u32, u32, u32, u32)> villager_slot_index;
inline constexpr guest::Function<0x0030e430, u32(u32, u32, u32)> field_2510_is_2;
inline constexpr guest::Function<0x0030e455, u32(u32, u32, u32)> pick_random_villager_slot;

void VillagerPart__update_slot_flags(u32 villager_part, u32 r1_unused, u32 r2) {
    u32 r4 = guest::cpu()->r[4];
    u32 i = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    gptr<Local_0010f3d0_ea_1> ea_1 = gptr<Local_0010f3d0_ea_1>(r13 - 0x18);
    ea_1->villager_part = villager_part;
    ea_1->word_4 = r4;
    ea_1->word_8 = i;
    ea_1->word_c = r6;
    ea_1->word_10 = r7;
    ea_1->word_14 = r14;
    r13 = ea_1.addr() - 0x10u;
    *gptr<u32>(r13) = 0xa;
    r4 = *gptr<u32>(r13 + 0x10u);
    *gptr<u32>(r13 + 4u) = 0;
    *gptr<u32>(r13 + 8u) = 0;
    guest::cpu()->r[13] = r13;
    u32 r0_1 = villager_slot_index(r4, 0u, r2, guest::cpu()->r[3]);
    u32 r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    i = 0u;
    r6 = 0x25u << 8;
    *gptr<u32>(r13 + 0xcu) = r0_1;
    do {
        guest::cpu()->r[13] = r13;
        u32 is_villager = is_villager_record(r4, r1, r2);
        if (is_villager != 0) {
            gptr<Local_0010f3d0_r7_1> r7_1 = gptr<Local_0010f3d0_r7_1>(r4 + r6);
            u32 r1_1 = r7_1->word_10;
            u32 r2_1 = r1_1 >> 1u & 1u;
            if (r2_1 != 0) {
                r1_1 &= 1u;
                if (r1_1 == 0) {
                    goto L_10f43e;
                }
            }
            guest::cpu()->r[13] = r13;
            u32 r0_3 = field_2510_is_2(r4, r1_1, r2_1);
            if (r0_3 == 0 && *gptr<u32>(r13 + 0xcu) != i) {
                if ((r7_1->word_10 & 1u) == 0 && *gptr<u32>(r13) > i) {
                    u32 r0_4 = lsl_r(1u, i & 0xff);
                    if ((*gptr<u32>(r13 + 4u) & r0_4) == 0) {
                        u32 r1_2 = *gptr<u32>(r13 + 4u) | r0_4;
                        u32 r0_5 = *gptr<u32>(r13 + 8u);
                        *gptr<u32>(r13 + 4u) = r1_2;
                        *gptr<u32>(r13 + 8u) = r0_5 + 1u;
                    }
                }
            }
        }
L_10f43e:;
        r2 = 0x2518u;
        r1 = r4 + r6;
        u32 r0_6 = ~0u;
        i += 1u;
        r4 += r2;
        *gptr<u8>(r1 + 0x16u) = u8(r0_6);
        *gptr<u8>(r1 + 0x15u) = u8(r0_6);
        guest::preempt();
    } while (s32(i) < 0xa);
    if (s32(*gptr<u32>(r13 + 8u)) >= 2) {
        u32 r0_7 = *gptr<u32>(r13 + 0x10u);
        guest::cpu()->r[13] = r13;
        pick_random_villager_slot(r0_7, r13, 0u);
        r1 = guest::cpu()->r[1];
        if (s32(*gptr<u32>(r13 + 8u)) >= 2) {
            u32 r0_8 = *gptr<u32>(r13 + 0x10u);
            guest::cpu()->r[13] = r13;
            pick_random_villager_slot(r0_8, r13, 1u);
            r1 = guest::cpu()->r[1];
            if (s32(*gptr<u32>(r13 + 8u)) >= 2) {
                u32 r0_9 = *gptr<u32>(r13 + 0x10u);
                guest::cpu()->r[13] = r13;
                pick_random_villager_slot(r0_9, r13, 0u);
                r1 = guest::cpu()->r[1];
            }
        }
    }
    r13 += 0x14u;
    u32 r4_1 = *gptr<u32>(r13);
    u32 r5_1 = *gptr<u32>(r13 + 4);
    u32 r6_1 = *gptr<u32>(r13 + 8);
    u32 r7_2 = *gptr<u32>(r13 + 0xc);
    u32 tpc_1 = *gptr<u32>(r13 + 0x10);
    r13 += 0x14;
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[4] = r4_1;
    guest::cpu()->r[5] = r5_1;
    guest::cpu()->r[6] = r6_1;
    guest::cpu()->r[7] = r7_2;
    guest::cpu()->r[13] = r13;
}

}  // namespace d_0010f3d0
GUEST_EXPORT(0x0010f3d1, d_0010f3d0::VillagerPart__update_slot_flags);
