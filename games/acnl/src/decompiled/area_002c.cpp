// Functions decompiled by tools/decomp (docs/decomp.md), each proved equal to the recompiled original (prove-cpp). The
// names come from games/acnl/names (tools/decomp/names.py); the others are generated (d_<address>::f_<address>,
// Object_<address>_<argument>, word_<offset>) and still to be chosen.
#include "guest/guest.hpp"
#include "graphics/hemisphere_light.hpp"
#include "recovered/structs.hpp"

#include <bit>

using guest::gptr;

// f_002c2024: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Stores and applies the value (system value 2), on the old 3DS only.
namespace d_002c2024 {

struct __attribute__((packed)) SystemValueSetting {
    u8 byte_0;
    u8 unknown_1[0x1];  // (not used here)
    u16 half_2;
};
GUEST_OFFSET(SystemValueSetting, byte_0, 0x0);
GUEST_OFFSET(SystemValueSetting, half_2, 0x2);

inline constexpr guest::Function<0x0011d258, u32(u32, u32, u32, u32)> is_new_3ds_mode;
inline constexpr guest::Function<0x0011e340, u32(u32, u32, u32, u32)> query_system_value_2;

u32 SystemValueSetting__set(gptr<SystemValueSetting> system_value_setting, u32 r1) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 r0_1 = is_new_3ds_mode(system_value_setting.addr(), r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0_1 == 0) {
        u32 r0_2 = sxth(r1);
        system_value_setting->byte_0 = 1;
        system_value_setting->half_2 = u16(r0_2);
        frame.release();
        return query_system_value_2(r0_2, 1u, guest::cpu()->r[2], guest::cpu()->r[3]);
    }
    return r0_1;
}

}  // namespace d_002c2024
GUEST_EXPORT(0x002c2024, d_002c2024::SystemValueSetting__set);

// f_002c2058: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Applies the default value (30) and marks it unset.
namespace d_002c2058 {

struct __attribute__((packed)) SystemValueSetting {
    u8 byte_0;
    u8 unknown_1[0x1];  // (not used here)
    u16 half_2;
};
GUEST_OFFSET(SystemValueSetting, byte_0, 0x0);
GUEST_OFFSET(SystemValueSetting, half_2, 0x2);

inline constexpr guest::Function<0x0011e340, u32(u32, u32, u32, u32)> query_system_value_2;

u32 SystemValueSetting__reset(gptr<SystemValueSetting> system_value_setting) {
    system_value_setting->half_2 = 0x1e;  // (from the original)
    query_system_value_2(0x1eu, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    system_value_setting->byte_0 = 0;
    return 0u;
}

}  // namespace d_002c2058
GUEST_EXPORT_FRAMED(0x002c2058, d_002c2058::SystemValueSetting__reset, 0x4010);  // pushes {r4, lr} first, as the original

// f_002c2078: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Initializes the flags and colors to their defaults.
namespace d_002c2078 {

struct __attribute__((packed)) DrawFlags {
    u8 byte_0;
    u8 byte_1;
    u8 byte_2;
    u8 byte_3;
    u8 byte_4;
    u8 byte_5;
    u8 unknown_6[0x4];  // (not used here)
    u16 half_a;
    u8 unknown_c[0x28];  // (not used here)
    u8 byte_34;
    u8 byte_35;
    u8 byte_36;
    u8 byte_37;
    u8 byte_38;
    u8 byte_39;
    u8 byte_3a;
    u8 byte_3b;
};
GUEST_OFFSET(DrawFlags, byte_0, 0x0);
GUEST_OFFSET(DrawFlags, byte_1, 0x1);
GUEST_OFFSET(DrawFlags, byte_2, 0x2);
GUEST_OFFSET(DrawFlags, byte_3, 0x3);
GUEST_OFFSET(DrawFlags, byte_4, 0x4);
GUEST_OFFSET(DrawFlags, byte_5, 0x5);
GUEST_OFFSET(DrawFlags, half_a, 0xa);
GUEST_OFFSET(DrawFlags, byte_34, 0x34);
GUEST_OFFSET(DrawFlags, byte_35, 0x35);
GUEST_OFFSET(DrawFlags, byte_36, 0x36);
GUEST_OFFSET(DrawFlags, byte_37, 0x37);
GUEST_OFFSET(DrawFlags, byte_38, 0x38);
GUEST_OFFSET(DrawFlags, byte_39, 0x39);
GUEST_OFFSET(DrawFlags, byte_3a, 0x3a);
GUEST_OFFSET(DrawFlags, byte_3b, 0x3b);

inline guest::global<u16, 0x008c9f1e> default_object_id;

void DrawFlags__init(gptr<DrawFlags> draw_flags) {
    draw_flags->half_a = *default_object_id;
    draw_flags->byte_0 = u8(u32(draw_flags->byte_0) & ~0xbcu);  // (from the original)
    draw_flags->byte_1 = u8(u32(draw_flags->byte_1) & ~0xffu | 0x5eu);  // (from the original)
    draw_flags->byte_2 = 0xff;  // (from the original)
    draw_flags->byte_3 = 0x3f;  // (from the original)
    draw_flags->byte_4 = 0;
    draw_flags->byte_5 = u8(u32(draw_flags->byte_5) & ~0x7fu);  // (from the original)
    draw_flags->byte_34 = 0;
    draw_flags->byte_38 = 0;
    draw_flags->byte_35 = 0;
    draw_flags->byte_39 = 0;
    draw_flags->byte_36 = 0;
    draw_flags->byte_3a = 0;
    draw_flags->byte_37 = 0;
    draw_flags->byte_3b = 0;
    guest::cpu()->r[1] = 0u;
}

}  // namespace d_002c2078
GUEST_EXPORT(0x002c2078, d_002c2078::DrawFlags__init);

// f_002c2510: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Looks the resource up in the data at +0x62138 and stores it (+0x2c), marking it set.
namespace d_002c2510 {

struct __attribute__((packed)) Object_002c2510_0 {
    u8 unknown_0[0x2c];  // (not used here)
    u32 word_2c;
    u8 unknown_30[0x4];  // (not used here)
    u8 byte_34;
};
GUEST_OFFSET(Object_002c2510_0, word_2c, 0x2c);
GUEST_OFFSET(Object_002c2510_0, byte_34, 0x34);

inline constexpr guest::Function<0x002fae84, u32(u32, u32, u32, u32)> get_data_base;
inline constexpr guest::Function<0x00313a84, u32(u32, u32)> Resource__find_kind_16;

void set_resource_from_data_62138(gptr<Object_002c2510_0> arg0, u32 r1) {
    u32 data_base_2 = get_data_base(arg0.addr(), r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_3 = Resource__find_kind_16(data_base_2 + 0x62138u, r1);  // (from the original)
    arg0->word_2c = r0_3;
    arg0->byte_34 = 1;
    guest::cpu()->r[1] = 1u;
}

}  // namespace d_002c2510
GUEST_EXPORT_FRAMED(0x002c2510, d_002c2510::set_resource_from_data_62138, 0x4010);  // pushes {r4, lr} first, as the original

// f_002c2544: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Sets the flag (+0x31) and enables the switch at +0x22.
namespace d_002c2544 {

struct __attribute__((packed)) Toggle22 {
    u8 unknown_0[0x31];  // (not used here)
    u8 byte_31;
};
GUEST_OFFSET(Toggle22, byte_31, 0x31);

inline constexpr guest::Function<0x002bb4b0, u32(u32, u32, u32, u32)> SwitchBlock__set_all;

void Toggle22__enable(gptr<Toggle22> toggle22) {
    toggle22->byte_31 = 1;
    SwitchBlock__set_all(toggle22.addr() + 0x22u, 1u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
}

}  // namespace d_002c2544
GUEST_EXPORT_FRAMED(0x002c2544, d_002c2544::Toggle22__enable, 0x4010);  // pushes {r4, lr} first, as the original

// f_002c2710: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Clears the flag (+0x31) and disables the switch at +0x22.
namespace d_002c2710 {

struct __attribute__((packed)) Toggle22 {
    u8 unknown_0[0x31];  // (not used here)
    u8 byte_31;
};
GUEST_OFFSET(Toggle22, byte_31, 0x31);

inline constexpr guest::Function<0x002bb4b0, u32(u32, u32, u32, u32)> SwitchBlock__set_all;

u32 Toggle22__disable(gptr<Toggle22> toggle22) {
    toggle22->byte_31 = 0;
    u32 r0_2 = SwitchBlock__set_all(toggle22.addr() + 0x22u, 0u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    return r0_2;
}

}  // namespace d_002c2710
GUEST_EXPORT_FRAMED(0x002c2710, d_002c2710::Toggle22__disable, 0x4010);  // pushes {r4, lr} first, as the original

// f_002c2974: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The holder's item (its virtual function 17), or an empty item when it has none.
namespace d_002c2974 {

struct __attribute__((packed)) Object_002c2974_1 {
    u32 word_0;
};
GUEST_OFFSET(Object_002c2974_1, word_0, 0x0);

inline constexpr guest::Function<0x002fcbb0, u32(u32, u32, u32, u32)> construct_item;

void Holder__item(u32 r0_unused, gptr<Object_002c2974_1> arg1) {
    u32 r2 = 0;
    u32 r1_1 = arg1->word_0;
    if (r1_1 == 0) {
        construct_item(guest::cpu()->r[0], 0x7ffeu, r2, guest::cpu()->r[3]);
        return;  // (from the original)
    }
    u32 r2_1 = *gptr<u32>(*gptr<u32>(r1_1) + 0x44u);  // (from the original)
    // virtual function 17 of r1_1
    guest::call_address<u32>(r2_1, guest::cpu()->r[0], r1_1, r2_1, guest::cpu()->r[3]);
}

}  // namespace d_002c2974
GUEST_EXPORT(0x002c2974, d_002c2974::Holder__item);

// f_002c2a64: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The catch state of the actor's slot, 3 when it has no live object.
namespace d_002c2a64 {

struct __attribute__((packed)) Actor {
    u32 word_0;
};
GUEST_OFFSET(Actor, word_0, 0x0);

inline constexpr guest::Function<0x006d926c, u32(u32, u32)> CatchMgr__catch_state;

u32 Actor__catch_state(gptr<Actor> actor, u32 r1) {
    u32 r0_1 = actor->word_0;
    if (r0_1 == 0 || u32(*gptr<s8>(r0_1 + 0xfu)) != 0) {  // (from the original)
        return 3u;
    }
    u32 r1_1 = *gptr<u8>(actor->word_0 + 0x18cu);  // (from the original)
    u32 r0_2 = CatchMgr__catch_state(1u, r1_1);
    return r0_2 & 0xffu;  // (from the original)
}

}  // namespace d_002c2a64
GUEST_EXPORT_FRAMED(0x002c2a64, d_002c2a64::Actor__catch_state, 0x4010);  // pushes {r4, lr} first, as the original

// f_002c2d58: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Pushes the node on the actor's list (+0x1b0) and links it back to the actor.
namespace d_002c2d58 {

struct __attribute__((packed)) Actor {
    u8 unknown_0[0x1b0];  // (not used here)
    u32 word_1b0;
};
GUEST_OFFSET(Actor, word_1b0, 0x1b0);

struct __attribute__((packed)) Object_002c2d58_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Object_002c2d58_1, word_0, 0x0);
GUEST_OFFSET(Object_002c2d58_1, word_4, 0x4);


void Actor__push_child(gptr<Actor> actor, gptr<Object_002c2d58_1> arg1) {
    if (arg1.addr() == 0) {
        return;
    }
    arg1->word_4 = actor->word_1b0;
    actor->word_1b0 = arg1.addr();
    arg1->word_0 = actor.addr();
}

}  // namespace d_002c2d58
GUEST_EXPORT(0x002c2d58, d_002c2d58::Actor__push_child);

// f_002c2fd4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Unlinks the node from the actor's list (+0x1b0) and clears its links.
namespace d_002c2fd4 {

struct __attribute__((packed)) Actor {
    u8 unknown_0[0x1b0];  // (not used here)
    u32 word_1b0;
};
GUEST_OFFSET(Actor, word_1b0, 0x1b0);

struct __attribute__((packed)) Object_002c2fd4_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Object_002c2fd4_1, word_0, 0x0);
GUEST_OFFSET(Object_002c2fd4_1, word_4, 0x4);


u32 Actor__remove_child(gptr<Actor> actor, gptr<Object_002c2fd4_1> arg1) {
    u32 r0 = actor.addr();
    u32 r1 = arg1.addr();
    if (r1 == 0) {
        return r0;
    }
    u32 r2 = actor->word_1b0;
    u32 r12 = 0u;
    u32 r3 = r12;
    if (r2 == 0) {
        arg1->word_0 = r12;
        arg1->word_4 = r12;
        return r0;
    }
    do {
        if (r2 == r1) {
            if (r3 == 0) {
                *gptr<u32>(r0 + 0x1b0u) = *gptr<u32>(r2 + 4u);  // (from the original)
            } else {
                r0 = *gptr<u32>(r2 + 4u);
                *gptr<u32>(r3 + 4u) = r0;
            }
            arg1->word_0 = r12;
            arg1->word_4 = r12;
            return r0;
        }
        r3 = r2;
        r2 = *gptr<u32>(r2 + 4u);
        guest::preempt();
    } while (r2 != 0);
    arg1->word_0 = r12;
    arg1->word_4 = r12;
    return r0;
}

}  // namespace d_002c2fd4
GUEST_EXPORT(0x002c2fd4, d_002c2fd4::Actor__remove_child);

// f_002c3758: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Places the actor at the position with no rotation, the first time only, and updates it (virtual function 42).
namespace d_002c3758 {

struct __attribute__((packed)) Actor {
    u32 word_0;
    u8 unknown_4[0x10];  // (not used here)
    float float_14;
    float float_18;
    float float_1c;
    float float_20;
    float float_24;
    float float_28;
    u16 half_2c;
    u16 half_2e;
    u16 half_30;
    u8 unknown_32[0x6];  // (not used here)
    u16 half_38;
    u16 half_3a;
    u16 half_3c;
    u8 unknown_3e[0x2e];  // (not used here)
    float float_6c;
    float float_70;
    float float_74;
    u8 unknown_78[0x150];  // (not used here)
    u8 byte_1c8;
    u8 unknown_1c9[0x3];  // (not used here)
    u8 byte_1cc;
};
GUEST_OFFSET(Actor, word_0, 0x0);
GUEST_OFFSET(Actor, float_14, 0x14);
GUEST_OFFSET(Actor, float_18, 0x18);
GUEST_OFFSET(Actor, float_1c, 0x1c);
GUEST_OFFSET(Actor, float_20, 0x20);
GUEST_OFFSET(Actor, float_24, 0x24);
GUEST_OFFSET(Actor, float_28, 0x28);
GUEST_OFFSET(Actor, half_2c, 0x2c);
GUEST_OFFSET(Actor, half_2e, 0x2e);
GUEST_OFFSET(Actor, half_30, 0x30);
GUEST_OFFSET(Actor, half_38, 0x38);
GUEST_OFFSET(Actor, half_3a, 0x3a);
GUEST_OFFSET(Actor, half_3c, 0x3c);
GUEST_OFFSET(Actor, float_6c, 0x6c);
GUEST_OFFSET(Actor, float_70, 0x70);
GUEST_OFFSET(Actor, float_74, 0x74);
GUEST_OFFSET(Actor, byte_1c8, 0x1c8);
GUEST_OFFSET(Actor, byte_1cc, 0x1cc);


struct __attribute__((packed)) Frame_002c3758 {
    u16 half_0;
    u16 half_2;
    u16 half_4;
    u8 unknown_6[0x2];  // (not read or written by name)
};
GUEST_OFFSET(Frame_002c3758, half_0, 0x0);
GUEST_OFFSET(Frame_002c3758, half_2, 0x2);
GUEST_OFFSET(Frame_002c3758, half_4, 0x4);
GUEST_SIZE(Frame_002c3758, 0x8);

u32 Actor__place_once(gptr<Actor> actor, gptr<Float3> arg1) {
    guest::StackFrameOf<Frame_002c3758> frame;  // the original's stack frame
    if (actor->byte_1cc != 0) {
        guest::cpu()->r[1] = arg1.addr();
        return actor.addr();
    }
    actor->byte_1cc = 1;
    actor->byte_1c8 = 0;
    actor->float_6c = arg1->v[0];
    actor->float_70 = arg1->v[1];
    actor->float_74 = arg1->v[2];
    actor->float_14 = arg1->v[0];
    actor->float_18 = arg1->v[1];
    actor->float_1c = arg1->v[2];
    actor->float_20 = arg1->v[0];
    actor->float_24 = arg1->v[1];
    actor->float_28 = arg1->v[2];
    frame->half_0 = 0;
    frame->half_2 = 0;
    frame->half_4 = 0;
    actor->half_38 = u16(uxth(0u));
    actor->half_3a = frame->half_2;
    actor->half_3c = frame->half_4;
    actor->half_2c = frame->half_0;
    actor->half_2e = frame->half_2;
    u32 r2_1 = frame->half_4;
    actor->half_30 = u16(r2_1);
    u32 r1_1 = *gptr<u32>(actor->word_0 + 0xa8u);  // (from the original)
    // virtual function 42 of actor.addr()
    frame.release();
    return guest::call_address<u32>(r1_1, actor.addr(), r1_1, r2_1, 0u);
}

}  // namespace d_002c3758
GUEST_EXPORT(0x002c3758, d_002c3758::Actor__place_once);

// f_002c3954: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Clears the owner's pointer back to the actor and the actor's own (+0x1b4).
namespace d_002c3954 {

struct __attribute__((packed)) Actor {
    u8 unknown_0[0x1b4];  // (not used here)
    u32 word_1b4;
};
GUEST_OFFSET(Actor, word_1b4, 0x1b4);


void Actor__detach_owner(gptr<Actor> actor) {
    u32 r1_1 = actor->word_1b4;
    if (r1_1 == 0) {
        guest::cpu()->r[1] = r1_1;
        return;
    }
    *gptr<u32>(r1_1) = 0;
    actor->word_1b4 = 0;
    guest::cpu()->r[1] = r1_1;
}

}  // namespace d_002c3954
GUEST_EXPORT(0x002c3954, d_002c3954::Actor__detach_owner);

// f_002c3b70: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Constructs the sound object actor with the class's vtables and clears its fields.
namespace d_002c3b70 {

struct __attribute__((packed)) Object_002c3b70_1 {
    u32 word_0;
    u8 unknown_4[0x10];  // (not used here)
    u32 word_14;
};
GUEST_OFFSET(Object_002c3b70_1, word_0, 0x0);
GUEST_OFFSET(Object_002c3b70_1, word_14, 0x14);

struct __attribute__((packed)) Local_002c3b70_r0_1 {
    u32 word_0;
    u8 unknown_4[0x18c];  // (not used here)
    u32 word_190;
    u8 unknown_194[0x8];  // (not used here)
    u8 byte_19c;
    u8 byte_19d;
    u8 unknown_19e[0xa];  // (not used here)
    u8 byte_1a8;
    u8 unknown_1a9[0x3];  // (not used here)
    u32 word_1ac;
    u32 word_1b0;
    u32 word_1b4;
    u32 word_1b8;
    u32 word_1bc;
    u8 unknown_1c0[0xa];  // (not used here)
    u8 byte_1ca;
    u8 unknown_1cb[0x3];  // (not used here)
    u8 byte_1ce;
};
GUEST_OFFSET(Local_002c3b70_r0_1, word_0, 0x0);
GUEST_OFFSET(Local_002c3b70_r0_1, word_190, 0x190);
GUEST_OFFSET(Local_002c3b70_r0_1, byte_19c, 0x19c);
GUEST_OFFSET(Local_002c3b70_r0_1, byte_19d, 0x19d);
GUEST_OFFSET(Local_002c3b70_r0_1, byte_1a8, 0x1a8);
GUEST_OFFSET(Local_002c3b70_r0_1, word_1ac, 0x1ac);
GUEST_OFFSET(Local_002c3b70_r0_1, word_1b0, 0x1b0);
GUEST_OFFSET(Local_002c3b70_r0_1, word_1b4, 0x1b4);
GUEST_OFFSET(Local_002c3b70_r0_1, word_1b8, 0x1b8);
GUEST_OFFSET(Local_002c3b70_r0_1, word_1bc, 0x1bc);
GUEST_OFFSET(Local_002c3b70_r0_1, byte_1ca, 0x1ca);
GUEST_OFFSET(Local_002c3b70_r0_1, byte_1ce, 0x1ce);

inline constexpr guest::Function<0x0024f400, u32(u32, u32, u32, u32)> SoundObjActor__construct;

u32 SoundObjActorEx__construct(u32 sound_obj_actor_ex, gptr<Object_002c3b70_1> arg1, u32 r2, u32 r3) {
    gptr<Local_002c3b70_r0_1> r0_1 = gptr<Local_002c3b70_r0_1>(SoundObjActor__construct(sound_obj_actor_ex, arg1.addr() + 4u, r2, r3));
    u32 r2_1 = arg1->word_0;
    r0_1->word_0 = r2_1;
    *gptr<u32>(r0_1.addr() + *gptr<u32>(r2_1 - 0xcu)) = arg1->word_14;  // (from the original)
    r0_1->word_190 = 0;
    r0_1->byte_19c = 0;
    r0_1->byte_19d = 0;
    r0_1->byte_1a8 = 0;
    r0_1->word_1ac = 0;
    r0_1->word_1b0 = 0;
    r0_1->word_1b4 = 0;
    r0_1->word_1b8 = 0;
    r0_1->word_1bc = 0;
    r0_1->byte_1ca = 0;
    r0_1->byte_1ce = 0;
    guest::cpu()->r[1] = 0u;
    return r0_1.addr();
}

}  // namespace d_002c3b70
GUEST_EXPORT_FRAMED(0x002c3b70, d_002c3b70::SoundObjActorEx__construct, 0x4010);  // pushes {r4, lr} first, as the original

// f_002c44d8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The id of the current catalog page, or -1 when no catalog is open.
namespace d_002c44d8 {

inline constexpr u32 catalog_page_address = 0x0094d774u;
inline guest::global<u8, 0x0094d76c> catalog_mode;
inline guest::global<u32, 0x0094d770> catalog_instance;
inline guest::global<u32, 0x0094d774> catalog_page;
inline constexpr guest::Function<0x006165c4, u32(u32)> table_952880_at;
inline constexpr guest::Function<0x007017a8, u32(u32)> word_of_3_95321c;

u32 Catalog__current_page_id() {
    if (*catalog_instance == 0) {
        return ~0u;
    }
    u32 r0_2 = *catalog_page;
    if (*catalog_mode != 0) {
        u32 r0_3 = word_of_3_95321c(r0_2);
        return *gptr<u8>(gptr<u32>(*gptr<u32>(r0_3 + 4u))[u32(*gptr<u8>(*catalog_instance + 0xe1u))]);  // (from the original)
    }
    u32 r0_5 = table_952880_at(r0_2);
    return *gptr<u8>(gptr<u32>(*gptr<u32>(r0_5 + 4u))[u32(*gptr<u8>(*catalog_instance + 0xe1u))]);  // (from the original)
}

}  // namespace d_002c44d8
GUEST_EXPORT_FRAMED(0x002c44d8, d_002c44d8::Catalog__current_page_id, 0x4010);  // pushes {r4, lr} first, as the original

// f_002c4544: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The item at the index of the current page when the player has seen it, else the empty item.
namespace d_002c4544 {

inline constexpr u32 catalog_mode_address = 0x0094d76cu;
inline constexpr u32 catalog_page_address = 0x0094d774u;
inline constexpr u32 empty_item_address = 0x0095bfdcu;
inline guest::global<u8, 0x0094d76c> catalog_mode;
inline guest::global<u32, 0x0094d770> catalog_instance;
inline guest::global<u32, 0x0094d774> catalog_page;
inline constexpr guest::Function<0x002fb328, u32(u32, u32)> get_save_data;
inline constexpr guest::Function<0x002fc934, u32(u32, u32)> Item__copy_b;
inline constexpr guest::Function<0x006162e0, u32(u32, u32, u32)> Item__from_catalog_index;
inline constexpr guest::Function<0x006165c4, u32(u32, u32, u32, u32)> table_952880_at;
inline constexpr guest::Function<0x00616c68, u32(u32, u32, u32)> catalog_index_to_category;
inline constexpr guest::Function<0x00701694, u32(u32, u32, u32, u32)> Item__from_insect_index;
inline constexpr guest::Function<0x007017a8, u32(u32, u32, u32, u32)> word_of_3_95321c;
inline constexpr guest::Function<0x0076c808, u32(u32, u32, u32)> Museum__is_marked;

struct __attribute__((packed)) Frame_002c4544 {
    u32 word_0;
    u32 word_4;
    u8 unknown_8[0x18];  // (not read or written by name)
};
GUEST_OFFSET(Frame_002c4544, word_0, 0x0);
GUEST_OFFSET(Frame_002c4544, word_4, 0x4);
GUEST_SIZE(Frame_002c4544, 0x20);

void Catalog__item_at(u32 catalog, u32 r1, u32 r2) {
    guest::StackFrameOf<Frame_002c4544> frame;  // the original's stack frame
    if (*catalog_instance != 0) {
        u32 r1_1 = *catalog_mode;
        u32 r0_1 = *catalog_page;
        if (r1_1 != 0) {
            u32 r0_2 = word_of_3_95321c(r0_1, r1_1, r2, guest::cpu()->r[3]);
            u32 r1_2 = *gptr<u8>(*catalog_instance + 0xe1u);  // (from the original)
            u32 r0_3 = *gptr<u32>(gptr<u32>(*gptr<u32>(r0_2 + 4u))[r1_2] + 4u);
            u32 r4_1 = *gptr<u8>(r0_3 + r1);
            u32 save_data_3 = get_save_data(r0_3, r1_2);
            u32 r0_6 = Museum__is_marked(save_data_3 + 0x6aeb8u, 0x24u, r4_1);  // (from the original)
            if (r0_6 == 0) {
                frame.release();
                Item__copy_b(catalog, empty_item_address);
                return;
            }
            frame.release();
            Item__from_insect_index(catalog, r4_1, 0u, guest::cpu()->r[3]);
            return;
        }
        u32 r0_7 = table_952880_at(r0_1, r1_1, r2, guest::cpu()->r[3]);
        u32 r4_2 = *gptr<u8>(*gptr<u32>(gptr<u32>(*gptr<u32>(r0_7 + 4u))[u32(*gptr<u8>(*catalog_instance + 0xe1u))] + 4u) + r1);  // (from the original)
        frame->word_0 = 0;
        frame->word_4 = 0x27;  // (from the original)
        u32 r0_8 = frame.at(0).addr();
        catalog_index_to_category(r0_8, frame.at(4).addr(), r4_2);
        u32 save_data_4 = get_save_data(r0_8, guest::cpu()->r[1]);
        u32 r0_11 = Museum__is_marked(save_data_4 + 0x6aeb8u, frame->word_4 & 0xffu, frame->word_0);  // (from the original)
        if (r0_11 != 0) {
            Item__from_catalog_index(catalog, r4_2, 0u);
            return;
        }
    }
    frame.release();
    Item__copy_b(catalog, empty_item_address);
    return;
}

}  // namespace d_002c4544
GUEST_EXPORT(0x002c4544, d_002c4544::Catalog__item_at);

// f_002c4ad4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Clears the flag at 0x94d92e.
namespace d_002c4ad4 {

inline constexpr u32 global_0094d92c_address = 0x0094d92cu;
inline guest::global<u16, 0x0094d92e> global_0094d92e;

void clear_global_94d92e() {
    *global_0094d92e = 0;
    guest::cpu()->r[1] = global_0094d92c_address;
}

}  // namespace d_002c4ad4
GUEST_EXPORT(0x002c4ad4, d_002c4ad4::clear_global_94d92e);

// f_002c6b0c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002c6b0c {

inline constexpr u32 vtable_ExchangeResBank_66000u__BankVramConfig_66000u__1u__0u__0u__false___ExchangeBankKeywordMyDesignFgNameEx__SvFgName__Name_32766___item__ResLoader__1u__false_ = 0x008f0a58u;
inline constexpr u32 vtable_ExchangeResBank_8600u__BankVramConfig_8320u__1u__0u__0u__false___ExchangeBankKeywordMyDesignFgNameEx__SvFgName__Name_32766___item__ResLoader__1u__false_ = 0x008f0aa8u;
inline constexpr u32 vtable_BsCharRoomViewMgr = 0x008f2390u;
inline constexpr guest::Function<0x0014fb84, u32(u32)> import_thunk_14fb84;
inline constexpr guest::Function<0x0018e970, u32(u32)> ModelGrid7__destroy;
inline constexpr guest::Function<0x002f76ad, u32(u32, u32, u32, u32)> destroy_array_elements;
inline constexpr guest::Function<0x00317dec, u32(u32)> ssys__ma__HeapAllocator__destructor;
inline constexpr guest::Function<0x004f14ac, u32(u32)> g3d__Model__destructor;
inline constexpr guest::Function<0x00521ae0, u32(u32, u32)> do_nothing_00521ae0;
inline constexpr guest::Function<0x007c9cac, u32(u32)> false___virtual_0_007c9cac;
inline constexpr guest::Function<0x007ca3b8, u32(u32)> false___virtual_0_007ca3b8;

u32 BsCharRoomViewMgr__destructor(gptr<BsCharRoomViewMgr> bs_char_room_view_mgr) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    bs_char_room_view_mgr->vtable = vtable_BsCharRoomViewMgr;
    bs_char_room_view_mgr->false_vtable = vtable_ExchangeResBank_8600u__BankVramConfig_8320u__1u__0u__0u__false___ExchangeBankKeywordMyDesignFgNameEx__SvFgName__Name_32766___item__ResLoader__1u__false_;
    destroy_array_elements(bs_char_room_view_mgr.addr() + 0x3d18u, 0x53721cu, 0x114u, 2u);  // (from the original)
    u32 r0_2 = false___virtual_0_007ca3b8(bs_char_room_view_mgr.addr() + 0x3cb8u);  // (from the original)
    u32 r4_2 = r0_2 - 0xd0u;  // (from the original)
    destroy_array_elements(r4_2, 0x60d5ccu, 0x34u, 4u);  // (from the original)
    u32 r4_3 = r4_2 - 0x398u;  // (from the original)
    destroy_array_elements(r4_3 + 0x28cu, 0x52b4c4u, 0x40u, 4u);  // (from the original)
    *gptr<u32>(r4_3) = vtable_ExchangeResBank_8600u__BankVramConfig_8320u__1u__0u__0u__false___ExchangeBankKeywordMyDesignFgNameEx__SvFgName__Name_32766___item__ResLoader__1u__false_;
    destroy_array_elements(r4_3 + 0x60u, 0x53721cu, 0x114u, 2u);  // (from the original)
    u32 r0_5 = false___virtual_0_007ca3b8(r4_3);
    g3d__Model__destructor(r0_5 - 0x1cu);  // (from the original)
    u32 ea_1 = r0_5 - 0x2a8u;  // (from the original)
    *gptr<u32>(ea_1) = vtable_ExchangeResBank_66000u__BankVramConfig_66000u__1u__0u__0u__false___ExchangeBankKeywordMyDesignFgNameEx__SvFgName__Name_32766___item__ResLoader__1u__false_;
    destroy_array_elements(ea_1 + 0x60u, 0x53721cu, 0x114u, 2u);  // (from the original)
    u32 r0_8 = false___virtual_0_007c9cac(ea_1);
    ssys__ma__HeapAllocator__destructor(r0_8 - 8u);
    u32 r0_11 = import_thunk_14fb84(r0_8 - 0x70u);  // (from the original)
    ModelGrid7__destroy(r0_11 - 0x3290u);  // (from the original)
    u32 r4_4 = r0_11 - 0x3504u;  // (from the original)
    destroy_array_elements(r0_11 - 0x34fcu, 0x5b1c68u, 0x11cu, 2u);  // (from the original)
    ssys__ma__HeapAllocator__destructor(r4_4);
    ssys__ma__HeapAllocator__destructor(r4_4 - 0x1cu);  // (from the original)
    frame.release();
    return do_nothing_00521ae0(r4_4 - 0x34u, guest::cpu()->r[1]);  // (from the original)
}

}  // namespace d_002c6b0c
GUEST_EXPORT(0x002c6b0c, d_002c6b0c::BsCharRoomViewMgr__destructor);

// f_002c7060: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002c7060 {

inline constexpr guest::Function<0x004ee39c, u32(u32, u32, u32, u32)> Camera__virtual_3;
inline constexpr guest::Function<0x00521a2c, u32(u32)> BsLightBase__do_delete;

u32 BsLightAmbientFix__do_delete(u32 bs_light_ambient_fix) {
    u32 r0_1 = bs_light_ambient_fix + 0x18u;  // (from the original)
    Camera__virtual_3(r0_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    BsLightBase__do_delete(r0_1);
    return 2u;
}

}  // namespace d_002c7060
GUEST_EXPORT_FRAMED(0x002c7060, d_002c7060::BsLightAmbientFix__do_delete, 0x4010);  // pushes {r4, lr} first, as the original

// f_002c71ec: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Copies the letter of a page entry into the letter, with its sender and attachment.
namespace d_002c71ec {

struct __attribute__((packed)) Local_002c71ec_r0_1 {
    u8 unknown_0[0x26e];  // (not used here)
    u8 byte_26e;
    u8 byte_26f;
    u8 byte_270;
    u8 byte_271;
    u8 byte_272;
};
GUEST_OFFSET(Local_002c71ec_r0_1, byte_26e, 0x26e);
GUEST_OFFSET(Local_002c71ec_r0_1, byte_26f, 0x26f);
GUEST_OFFSET(Local_002c71ec_r0_1, byte_270, 0x270);
GUEST_OFFSET(Local_002c71ec_r0_1, byte_271, 0x271);
GUEST_OFFSET(Local_002c71ec_r0_1, byte_272, 0x272);

struct __attribute__((packed)) Local_002c71ec_r0_2 {
    u8 unknown_0[0x26e];  // (not used here)
    u8 byte_26e;
    u8 byte_26f;
    u8 byte_270;
    u8 byte_271;
    u8 byte_272;
};
GUEST_OFFSET(Local_002c71ec_r0_2, byte_26e, 0x26e);
GUEST_OFFSET(Local_002c71ec_r0_2, byte_26f, 0x26f);
GUEST_OFFSET(Local_002c71ec_r0_2, byte_270, 0x270);
GUEST_OFFSET(Local_002c71ec_r0_2, byte_271, 0x271);
GUEST_OFFSET(Local_002c71ec_r0_2, byte_272, 0x272);

inline constexpr guest::Function<0x002c83a8, u32(u32, u32, u32, u32)> LetterList__entry;
inline constexpr guest::Function<0x002cc1b0, u32(u32, u32)> LetterPage__entry;
inline constexpr guest::Function<0x002e354c, u32(u32, u32)> LetterPage__release_entry;
inline constexpr guest::Function<0x002f77e8, u32(u32)> same_pointer;
inline constexpr guest::Function<0x002f8574, u32(u32, u32, u32)> copy_bytes_at_any_alignment;
inline constexpr guest::Function<0x002fbb30, u32(u32, u32, u32)> copy_aligned_bytes;
inline constexpr guest::Function<0x002fc8e8, u32(u32, u32)> Item__copy;
inline constexpr guest::Function<0x002ff368, u32(u32)> Letter__Letter;
inline constexpr guest::Function<0x00311c70, u32(u32, u32)> copy_8_bytes_returning_destination;
inline constexpr guest::Function<0x0071ed64, u32(u32, u32)> index_in_window_10;
inline constexpr guest::Function<0x00723f84, u32(u32, u32)> Page10__contains;

struct __attribute__((packed)) Frame_002c71ec {
    u8 unknown_0[0x26e];  // (not read or written by name)
    u8 byte_26e;
    u8 byte_26f;
    u8 byte_270;
    u8 byte_271;
    u8 byte_272;
    u8 unknown_273[0x11];  // (not read or written by name)
};
GUEST_OFFSET(Frame_002c71ec, byte_26e, 0x26e);
GUEST_OFFSET(Frame_002c71ec, byte_26f, 0x26f);
GUEST_OFFSET(Frame_002c71ec, byte_270, 0x270);
GUEST_OFFSET(Frame_002c71ec, byte_271, 0x271);
GUEST_OFFSET(Frame_002c71ec, byte_272, 0x272);
GUEST_SIZE(Frame_002c71ec, 0x284);

void LetterList__copy_entry(u32 letter_list, u32 r1, u32 r2) {
    guest::StackFrameOf<Frame_002c71ec> frame;  // the original's stack frame
    gptr<Local_002c71ec_r0_1> r0_1 = gptr<Local_002c71ec_r0_1>(LetterList__entry(letter_list, r1, r2, guest::cpu()->r[3]));
    gptr<Local_002c71ec_r0_2> r0_2 = gptr<Local_002c71ec_r0_2>(LetterList__entry(letter_list, r2, guest::cpu()->r[2], guest::cpu()->r[3]));
    Letter__Letter(frame.at(0).addr());
    u32 r6_1 = frame.at(0).addr();
    copy_aligned_bytes(r6_1, r0_1.addr(), 0x31u);  // (from the original)
    copy_aligned_bytes(r6_1 + 0x34u, r0_1.addr() + 0x34u, 0x31u);  // (from the original)
    copy_aligned_bytes(r6_1 + 0x68u, r0_1.addr() + 0x68u, 0x42u);  // (from the original)
    copy_bytes_at_any_alignment(r6_1 + 0xaau, r0_1.addr() + 0xaau, 0x182u);  // (from the original)
    copy_aligned_bytes(r6_1 + 0x22cu, r0_1.addr() + 0x22cu, 0x42u);  // (from the original)
    frame->byte_26e = r0_1->byte_26e;
    frame->byte_26f = r0_1->byte_26f;
    frame->byte_270 = r0_1->byte_270;
    frame->byte_271 = r0_1->byte_271;
    frame->byte_272 = r0_1->byte_272;
    Item__copy(r6_1 + 0x274u, r0_1.addr() + 0x274u);  // (from the original)
    copy_8_bytes_returning_destination(r6_1 + 0x278u, r0_1.addr() + 0x278u);  // (from the original)
    copy_aligned_bytes(r0_1.addr(), r0_2.addr(), 0x31u);  // (from the original)
    copy_aligned_bytes(r0_1.addr() + 0x34u, r0_2.addr() + 0x34u, 0x31u);  // (from the original)
    copy_aligned_bytes(r0_1.addr() + 0x68u, r0_2.addr() + 0x68u, 0x42u);  // (from the original)
    copy_bytes_at_any_alignment(r0_1.addr() + 0xaau, r0_2.addr() + 0xaau, 0x182u);  // (from the original)
    copy_aligned_bytes(r0_1.addr() + 0x22cu, r0_2.addr() + 0x22cu, 0x42u);  // (from the original)
    r0_1->byte_26e = r0_2->byte_26e;
    r0_1->byte_26f = r0_2->byte_26f;
    r0_1->byte_270 = r0_2->byte_270;
    r0_1->byte_271 = r0_2->byte_271;
    r0_1->byte_272 = r0_2->byte_272;
    Item__copy(r0_1.addr() + 0x274u, r0_2.addr() + 0x274u);  // (from the original)
    copy_8_bytes_returning_destination(r0_1.addr() + 0x278u, r0_2.addr() + 0x278u);  // (from the original)
    u32 r5_1 = frame.at(0).addr();
    copy_aligned_bytes(r0_2.addr(), r5_1, 0x31u);  // (from the original)
    copy_aligned_bytes(r0_2.addr() + 0x34u, r5_1 + 0x34u, 0x31u);  // (from the original)
    copy_aligned_bytes(r0_2.addr() + 0x68u, r5_1 + 0x68u, 0x42u);  // (from the original)
    copy_bytes_at_any_alignment(r0_2.addr() + 0xaau, r5_1 + 0xaau, 0x182u);  // (from the original)
    copy_aligned_bytes(r0_2.addr() + 0x22cu, r5_1 + 0x22cu, 0x42u);  // (from the original)
    r0_2->byte_26e = frame->byte_26e;
    r0_2->byte_26f = frame->byte_26f;
    r0_2->byte_270 = frame->byte_270;
    r0_2->byte_271 = frame->byte_271;
    r0_2->byte_272 = frame->byte_272;
    Item__copy(r0_2.addr() + 0x274u, r5_1 + 0x274u);  // (from the original)
    copy_8_bytes_returning_destination(r0_2.addr() + 0x278u, r5_1 + 0x278u);  // (from the original)
    u32 r0_23 = index_in_window_10(letter_list + 0x294u, r1);  // (from the original)
    u32 r4_1 = letter_list + 0x37b8u;  // (from the original)
    if (r0_23 != 0) {
        LetterPage__entry(letter_list + 0x294u, r1);  // (from the original)
    } else {
        u32 r0_25 = Page10__contains(r4_1, r1);
        if (r0_25 != 0) {
            LetterPage__release_entry(r4_1, r1);
        }
    }
    u32 r0_27 = index_in_window_10(letter_list + 0x294u, r2);  // (from the original)
    if (r0_27 != 0) {
        LetterPage__entry(letter_list + 0x294u, r2);  // (from the original)
    } else {
        u32 r0_29 = Page10__contains(r4_1, r2);
        if (r0_29 != 0) {
            LetterPage__release_entry(r4_1, r2);
        }
    }
    u32 r0_31 = index_in_window_10(letter_list + 0x294u, r1);  // (from the original)
    if (r0_31 == 0) {
        r0_31 = index_in_window_10(letter_list + 0x294u, r2);  // (from the original)
        if (r0_31 != 0) {
            *gptr<u8>(letter_list + 0x6c48u) = 1;  // (from the original)
        }
    } else {
        *gptr<u8>(letter_list + 0x6c48u) = 1;  // (from the original)
    }
    same_pointer(r0_31);
}

}  // namespace d_002c71ec
GUEST_EXPORT_FRAMED(0x002c71ec, d_002c71ec::LetterList__copy_entry, 0x4ff0);  // pushes {r4, r5, r6, r7, r8, r9, r10, r11, lr} first, as the original

// f_002c85bc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002c85bc {

struct __attribute__((packed)) Local_002c85bc_r0_12 {
    u32 vtable;
    u8 unknown_4[0xa3c];  // (not used here)
    u32 change_stock_letter_vtable;
};
GUEST_OFFSET(Local_002c85bc_r0_12, vtable, 0x0);
GUEST_OFFSET(Local_002c85bc_r0_12, change_stock_letter_vtable, 0xa40);

inline constexpr u32 vtable_DragIconGroup = 0x008ee248u;
inline constexpr u32 vtable_DragIconGroup_at_c = 0x008ee258u;
inline constexpr u32 vtable_DragIconControl_rec = 0x008f08acu;
inline constexpr u32 vtable_BsMenuLetterStock = 0x008f2448u;
inline constexpr u32 vtable_BsMenuLetterStock_at_28 = 0x008f24b4u;
inline constexpr u32 vtable_ChangeStockLetter = 0x008f26b8u;
inline constexpr u32 vtable_ChangeStockLetter_at_a40 = 0x008f26e4u;
inline constexpr u32 vtable_ChangeStockLetter_at_1888 = 0x008f26f8u;
inline constexpr u32 vtable_ItemSelectNameWindow = 0x008f47a0u;
inline constexpr u32 vtable_script__WordFix_40u_ = 0x0090a030u;
inline constexpr guest::Function<0x002684c0, u32(u32)> ChangeListBase__ChangeListBase;
inline constexpr guest::Function<0x002f76ad, u32(u32, u32, u32, u32)> destroy_array_elements;
inline constexpr guest::Function<0x002f7710, u32(u32, u32)> destroy_button_action_control;
inline constexpr guest::Function<0x003288a4, u32(u32)> LetterDragStockWindow__destructor;
inline constexpr guest::Function<0x00567ef0, u32(u32)> ssys__ma__lyt__ArcResAccReader__destructor;
inline constexpr guest::Function<0x0056988c, u32(u32, u32, u32, u32)> destroy_animation;
inline constexpr guest::Function<0x005bf744, u32(u32)> Layout__destructor;
inline constexpr guest::Function<0x005e3194, u32(u32, u32, u32, u32)> script__RenderMain__RenderMain_005e3194;
inline constexpr guest::Function<0x005e8a7c, u32(u32)> script__ChoiceStandardItem__destructor;
inline constexpr guest::Function<0x006aaa30, u32(u32, u32)> MenuBase__destructor;

u32 BsMenuLetterStock__virtual_0_002c85bc(gptr<BsMenuLetterStock> bs_menu_letter_stock, u32 r1_unused, u32 r2_unused, u32 r3) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    bs_menu_letter_stock->bs_menu_letter_stock_vtable = vtable_BsMenuLetterStock_at_28;
    bs_menu_letter_stock->vtable = vtable_BsMenuLetterStock;
    bs_menu_letter_stock->word_fix_40u_vtable = vtable_script__WordFix_40u_;
    bs_menu_letter_stock->item_select_name_window_vtable = vtable_ItemSelectNameWindow;
    u32 r0_1 = bs_menu_letter_stock.addr() + 0x6b00u;  // (from the original)
    script__RenderMain__RenderMain_005e3194(r0_1, vtable_ItemSelectNameWindow, vtable_BsMenuLetterStock, r3);
    u32 r0_2 = r0_1 - 0x28u;  // (from the original)
    destroy_animation(r0_2, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_3 = r0_2 - 0x28u;  // (from the original)
    destroy_animation(r0_3, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_5 = Layout__destructor(r0_3 - 0x15cu);  // (from the original)
    u32 r0_7 = ssys__ma__lyt__ArcResAccReader__destructor(r0_5 - 0x24cu);  // (from the original)
    u32 r0_9 = script__ChoiceStandardItem__destructor(r0_7 - 0xc88u);  // (from the original)
    u32 ea_1 = r0_9 - 0x118u;  // (from the original)
    *gptr<u32>(ea_1) = vtable_DragIconControl_rec;
    destroy_button_action_control(ea_1, vtable_DragIconControl_rec);
    u32 r0_11 = LetterDragStockWindow__destructor(ea_1 - 0x21b0u);  // (from the original)
    gptr<Local_002c85bc_r0_12> r0_12 = gptr<Local_002c85bc_r0_12>(r0_11 - 0x3524u);  // (from the original)
    r0_12->change_stock_letter_vtable = vtable_ChangeStockLetter_at_a40;
    r0_12->vtable = vtable_ChangeStockLetter;
    *gptr<u32>(r0_12.addr() + 0x1888u) = vtable_ChangeStockLetter_at_1888;  // (from the original)
    u32 r0_13 = r0_12.addr() + 0x33dcu;  // (from the original)
    *gptr<u32>(r0_13) = vtable_DragIconGroup;
    u32 r0_14 = r0_13 + 0xcu;  // (from the original)
    *gptr<u32>(r0_14) = vtable_DragIconGroup_at_c;
    u32 r0_15 = r0_14 + 0x108u;  // (from the original)
    destroy_animation(r0_15, vtable_DragIconGroup_at_c, vtable_DragIconGroup, vtable_ChangeStockLetter);
    u32 r0_16 = r0_15 - 0x28u;  // (from the original)
    destroy_animation(r0_16, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_17 = r0_16 - 0x28u;  // (from the original)
    destroy_animation(r0_17, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_18 = r0_17 - 0x28u;  // (from the original)
    destroy_animation(r0_18, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_19 = r0_18 - 0x28u;  // (from the original)
    destroy_animation(r0_19, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_20 = r0_19 - 0x28u;  // (from the original)
    destroy_animation(r0_20, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_21 = r0_20 - 0x2cu;  // (from the original)
    destroy_animation(r0_21, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    destroy_array_elements(r0_21 - 0x1b28u, 0x2e3854u, 0x2b4u, 0xau);  // (from the original)
    u32 r0_23 = r0_21 - 0x1b50u;  // (from the original)
    destroy_animation(r0_23, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_25 = ChangeListBase__ChangeListBase(r0_23 - 0x18acu);  // (from the original)
    u32 r0_27 = ssys__ma__lyt__ArcResAccReader__destructor(r0_25 - 0x248u);  // (from the original)
    frame.release();
    return MenuBase__destructor(r0_27 - 0x4cu, guest::cpu()->r[1]);  // (from the original)
}

}  // namespace d_002c85bc
GUEST_EXPORT(0x002c85bc, d_002c85bc::BsMenuLetterStock__virtual_0_002c85bc);

// f_002c8f70: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002c8f70 {

inline constexpr u32 vtable_ComButton2Lyt = 0x008ee228u;
inline constexpr u32 vtable_Control2Button = 0x008ef284u;
inline constexpr u32 vtable_Control2Button_at_e4 = 0x008ef2c8u;
inline constexpr u32 vtable_ComButtonLytBase = 0x008f18f4u;
inline constexpr u32 vtable_BsMenuNumberInput = 0x008f24c8u;
inline constexpr u32 vtable_BsMenuNumberInput_at_28 = 0x008f2534u;
inline constexpr u32 vtable_ComTitle = 0x008f8b4cu;
inline constexpr u32 vtable_TenkeyPad = 0x008f978cu;
inline constexpr guest::Function<0x002f76ad, u32(u32, u32, u32, u32)> destroy_array_elements;
inline constexpr guest::Function<0x002f770c, u32(u32)> ControlButtonBase__virtual_0_002f770c;
inline constexpr guest::Function<0x002f7710, u32(u32)> destroy_button_action_control;
inline constexpr guest::Function<0x00567ef0, u32(u32, u32)> ssys__ma__lyt__ArcResAccReader__destructor;
inline constexpr guest::Function<0x0056988c, u32(u32, u32)> destroy_animation;
inline constexpr guest::Function<0x005bf744, u32(u32)> Layout__destructor;
inline constexpr guest::Function<0x005d703c, u32(u32)> script__MsgEngine__MsgEngine_005d703c;
inline constexpr guest::Function<0x005e3194, u32(u32)> script__RenderMain__RenderMain_005e3194;
inline constexpr guest::Function<0x006aaa30, u32(u32, u32)> MenuBase__destructor;

u32 BsMenuNumberInput__virtual_0_002c8f70(gptr<BsMenuNumberInput> bs_menu_number_input) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    bs_menu_number_input->bs_menu_number_input_vtable = vtable_BsMenuNumberInput_at_28;
    bs_menu_number_input->vtable = vtable_BsMenuNumberInput;
    u32 r4_1 = bs_menu_number_input.addr() + 0x25f8u;  // (from the original)
    bs_menu_number_input->vtable_2260 = vtable_ComButton2Lyt;
    bs_menu_number_input->control2_button_vtable = vtable_Control2Button;
    bs_menu_number_input->control2_button_vtable_26dc = vtable_Control2Button_at_e4;
    destroy_array_elements(bs_menu_number_input.addr() + 0x2710u, 0x2e0b3cu, 0x518u, 2u);  // (from the original)
    ControlButtonBase__virtual_0_002f770c(r4_1);
    bs_menu_number_input->vtable_2260 = vtable_ComButtonLytBase;
    u32 r0_3 = ssys__ma__lyt__ArcResAccReader__destructor(r4_1 - 0x248u, vtable_ComButtonLytBase);  // (from the original)
    u32 r0_5 = Layout__destructor(r0_3 - 0x14cu);  // (from the original)
    *gptr<u32>(r0_5 - 0x954u) = vtable_ComTitle;  // (from the original)
    u32 r0_6 = r0_5 - 0x44u;  // (from the original)
    destroy_animation(r0_6, vtable_ComTitle);
    u32 r0_7 = r0_6 - 0x28u;  // (from the original)
    destroy_animation(r0_7, guest::cpu()->r[1]);
    u32 r0_8 = r0_7 - 0x28u;  // (from the original)
    destroy_animation(r0_8, guest::cpu()->r[1]);
    u32 r0_9 = r0_8 - 0x28u;  // (from the original)
    destroy_animation(r0_9, guest::cpu()->r[1]);
    u32 r0_11 = ssys__ma__lyt__ArcResAccReader__destructor(r0_9 - 0x248u, guest::cpu()->r[1]);  // (from the original)
    u32 r0_13 = Layout__destructor(r0_11 - 0x14cu);  // (from the original)
    u32 r0_14 = r0_13 - 0xd0u;  // (from the original)
    script__RenderMain__RenderMain_005e3194(r0_14);
    u32 r0_15 = r0_14 - 0xc4u;  // (from the original)
    script__RenderMain__RenderMain_005e3194(r0_15);
    u32 r0_16 = r0_15 - 0xc4u;  // (from the original)
    script__RenderMain__RenderMain_005e3194(r0_16);
    u32 r0_17 = r0_16 - 0xc4u;  // (from the original)
    script__RenderMain__RenderMain_005e3194(r0_17);
    u32 r0_18 = r0_17 - 0xc4u;  // (from the original)
    script__RenderMain__RenderMain_005e3194(r0_18);
    u32 r0_19 = r0_18 - 0x100u;  // (from the original)
    script__MsgEngine__MsgEngine_005d703c(r0_19);
    u32 ea_1 = r0_19 - 0x18e4u;  // (from the original)
    *gptr<u32>(ea_1) = vtable_TenkeyPad;
    destroy_array_elements(ea_1 + 0xe40u, 0x2b6ef8u, 0xe0u, 0xcu);  // (from the original)
    u32 r0_21 = ea_1 + 0xd5cu;  // (from the original)
    destroy_button_action_control(r0_21);
    destroy_array_elements(r0_21 - 0x930u, 0x6eed5cu, 0xc4u, 0xcu);  // (from the original)
    u32 r0_23 = r0_21 - 0x97cu;  // (from the original)
    destroy_animation(r0_23, guest::cpu()->r[1]);
    u32 r0_24 = r0_23 - 0x28u;  // (from the original)
    destroy_animation(r0_24, guest::cpu()->r[1]);
    u32 r0_26 = Layout__destructor(r0_24 - 0x14cu);  // (from the original)
    u32 r0_28 = ssys__ma__lyt__ArcResAccReader__destructor(r0_26 - 0x248u, guest::cpu()->r[1]);  // (from the original)
    frame.release();
    return MenuBase__destructor(r0_28 - 0x74u, guest::cpu()->r[1]);  // (from the original)
}

}  // namespace d_002c8f70
GUEST_EXPORT(0x002c8f70, d_002c8f70::BsMenuNumberInput__virtual_0_002c8f70);

// f_002caabc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The resource named `name` (by CRC) in the builder's list (+0x1368), or null.
namespace d_002caabc {

inline constexpr guest::Function<0x002fa9d0, u32(u32, u32, u32, u32)> string_length;
inline constexpr guest::Function<0x003193e8, u32(u32, u32, u32, u32)> crc32;
inline constexpr guest::Function<0x005b19e8, u32(u32, u32)> set_word_and_clear_flag;
inline constexpr guest::Function<0x005b1a08, u32(u32, u32)> construct_value_with_flag;
inline constexpr guest::Function<0x005b1a1c, u32(u32)> ClearableSlot__clear;
inline constexpr guest::Function<0x00755ad4, u32(u32, u32, u32, u32)> words_equal_00755ad4;

u32 FieldBuilder__find_resource(gptr<FieldBuilder> field_builder, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 r6_1 = frame.at(0).addr();
    u32 length_2 = string_length(r1, r1, r2, r3);
    u32 r3_1 = ~0u;
    u32 crc_2 = crc32(r1, length_2, r3_1, r3_1);
    ClearableSlot__clear(r6_1);
    set_word_and_clear_flag(r6_1, crc_2);
    u32 r5 = construct_value_with_flag(frame.at(8).addr(), frame.at(0).addr());
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    u32 r6 = 0u;
    u32 r4 = field_builder->word_1368;
    if (r4 != 0) {
        do {
            u32 r0_4 = words_equal_00755ad4(r5, r4 + 0xcu, r2, r3);  // (from the original)
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            if (r0_4 != 0) {
                r6 = r4 + 0x14u;  // (from the original)
                break;
            }
            r4 = *gptr<u32>(r4 + 8u);
            guest::preempt();
        } while (r4 != 0);
    }
    return r6;
}

}  // namespace d_002caabc
GUEST_EXPORT_FRAMED(0x002caabc, d_002caabc::FieldBuilder__find_resource, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_002cab78: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The grass wear texture in the list (+0x13c), or null.
namespace d_002cab78 {

struct __attribute__((packed)) Object_002cab78_0 {
    u8 unknown_0[0x13c];  // (not used here)
    u32 word_13c;
};
GUEST_OFFSET(Object_002cab78_0, word_13c, 0x13c);

inline constexpr guest::Function<0x002fa9d0, u32(u32, u32, u32, u32)> string_length;
inline constexpr guest::Function<0x003193e8, u32(u32, u32, u32, u32)> crc32;
inline constexpr guest::Function<0x005b19e8, u32(u32, u32)> set_word_and_clear_flag;
inline constexpr guest::Function<0x005b1a08, u32(u32, u32)> construct_value_with_flag;
inline constexpr guest::Function<0x005b1a1c, u32(u32)> ClearableSlot__clear;
inline constexpr guest::Function<0x00755ad4, u32(u32, u32, u32, u32)> words_equal_00755ad4;

u32 find_grass_wear_texture(gptr<Object_002cab78_0> arg0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 r6_1 = frame.at(0).addr();
    u32 length_2 = string_length(0x2cac2cu, r1, r2, r3);  // (from the original)
    u32 r3_1 = ~0u;
    u32 crc_2 = crc32(0x2cac2cu, length_2, r3_1, r3_1);  // (from the original)
    ClearableSlot__clear(r6_1);
    set_word_and_clear_flag(r6_1, crc_2);
    u32 r0_3 = frame.at(8).addr();
    construct_value_with_flag(r0_3, frame.at(0).addr());
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    u32 r4 = arg0->word_13c;
    u32 r5 = r0_3;
    u32 r6 = 0u;
    if (r4 != 0) {
        do {
            u32 r0_4 = words_equal_00755ad4(r5, r4 + 0xcu, r2, r3);  // (from the original)
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            if (r0_4 != 0) {
                r6 = r4 + 0x14u;  // (from the original)
                break;
            }
            r4 = *gptr<u32>(r4 + 8u);
            guest::preempt();
        } while (r4 != 0);
    }
    return r6;
}

}  // namespace d_002cab78
GUEST_EXPORT_FRAMED(0x002cab78, d_002cab78::find_grass_wear_texture, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_002cae6c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Sets the touch area from the pane's size and position, in screen coordinates (origin at the top left of 320x240).
namespace d_002cae6c {

struct __attribute__((packed)) TouchArea {
    u8 unknown_0[0x13c];  // (not used here)
    u8 byte_13c;
    u8 unknown_13d[0x3];  // (not used here)
    float float_140;
    float float_144;
    float float_148;
    float float_14c;
};
GUEST_OFFSET(TouchArea, byte_13c, 0x13c);
GUEST_OFFSET(TouchArea, float_140, 0x140);
GUEST_OFFSET(TouchArea, float_144, 0x144);
GUEST_OFFSET(TouchArea, float_148, 0x148);
GUEST_OFFSET(TouchArea, float_14c, 0x14c);

struct __attribute__((packed)) Object_002cae6c_1 {
    u8 unknown_0[0x48];  // (not used here)
    float float_48;
    float float_4c;
    u8 unknown_50[0x3c];  // (not used here)
    float float_8c;
    u8 unknown_90[0xc];  // (not used here)
    float float_9c;
};
GUEST_OFFSET(Object_002cae6c_1, float_48, 0x48);
GUEST_OFFSET(Object_002cae6c_1, float_4c, 0x4c);
GUEST_OFFSET(Object_002cae6c_1, float_8c, 0x8c);
GUEST_OFFSET(Object_002cae6c_1, float_9c, 0x9c);


void TouchArea__set_from_pane(gptr<TouchArea> touch_area, gptr<Object_002cae6c_1> arg1) {
    float S2_1 = arg1->float_48;
    float S3_1 = arg1->float_4c;
    float S4_1 = 0.5f;
    float S6_1 = 160.0f;
    float S0_1 = arg1->float_8c + S2_1 * S4_1;
    float S1_1 = arg1->float_9c - S3_1 * S4_1;
    float S5_1 = 120.0f;
    touch_area->byte_13c = 1;
    float S4_2 = S6_1 - S0_1;
    float S0_2 = S1_1 + S5_1;
    touch_area->float_140 = S4_2;
    touch_area->float_144 = S0_2;
    touch_area->float_148 = S2_1;
    touch_area->float_14c = S3_1;
    guest::cpu()->r[1] = 1u;
    guest::cpu()->s[0] = S0_2;
    guest::cpu()->s[1] = S1_1;
}

}  // namespace d_002cae6c
GUEST_EXPORT(0x002cae6c, d_002cae6c::TouchArea__set_from_pane);

// f_002cb150: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002cb150 {

inline constexpr u32 vtable_script__WordFix_64u_ = 0x0090a228u;
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

struct __attribute__((packed)) Frame_002cb150 {
    u32 word_0;
    u8 unknown_4[0x4];  // (not read or written by name)
    u32 word_8;
    u8 unknown_c[0x98];  // (not read or written by name)
};
GUEST_OFFSET(Frame_002cb150, word_0, 0x0);
GUEST_OFFSET(Frame_002cb150, word_8, 0x8);
GUEST_SIZE(Frame_002cb150, 0xa4);

void show_ui_message_1d8(u32 r0, u32 r1_unused, u32 r2_unused, u32 r3) {
    guest::StackFrameOf<Frame_002cb150> frame;  // the original's stack frame
    u32 res_1 = 0;
    u32 r3_4 = 0;
    u32 r6 = r0;
    u32 r0_1 = frame.at(8).addr();
    script__construct_word_ptr(r0_1, frame.at(0x20).addr(), 0x40u, r3);  // (from the original)
    u32 r5 = vtable_script__WordFix_64u_;
    *gptr<u32>(r0_1) = r5;
    u32 r0_2 = r0_1 + 0xcu;  // (from the original)
    construct_script_word(r0_2);
    clear_aligned(r0_2 + 0xcu, 0x80u);  // (from the original)
    u32 r2 = 0x8906ecu;  // (from the original)
    u32 r4 = 0u;
    r0 = (r0_2 + 0xcu) - 2u;  // (from the original)
    u32 r1 = 0x20u;  // (from the original)
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
    load_message(*message_store, frame.at(8).addr(), 0x879e2cu, 0x1d8u);  // (from the original)
    LinkOwner__unlink(*message_store, 0u);
    u32 view = r6 + 0xd24u;  // (from the original)
    start_message(view, frame.at(8).addr());
    TextBox__layout_lines(view);
    frame->word_8 = r5;
}

}  // namespace d_002cb150
GUEST_EXPORT_FRAMED(0x002cb150, d_002cb150::show_ui_message_1d8, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_002cb8e4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Hides the cursor on the first row; otherwise shows it at the selected row's height.
namespace d_002cb8e4 {

struct __attribute__((packed)) ListWindow {
    u8 unknown_0[0xd04];  // (not used here)
    u32 word_d04;
    u8 unknown_d08[0x7fc];  // (not used here)
    u32 word_1504;
    u8 unknown_1508[0x13c];  // (not used here)
    float float_1644;
};
GUEST_OFFSET(ListWindow, word_d04, 0xd04);
GUEST_OFFSET(ListWindow, word_1504, 0x1504);
GUEST_OFFSET(ListWindow, float_1644, 0x1644);

struct __attribute__((packed)) Local_002cb8e4_r0_1 {
    u8 unknown_0[0xb7];  // (not used here)
    u8 byte_b7;
};
GUEST_OFFSET(Local_002cb8e4_r0_1, byte_b7, 0xb7);

struct __attribute__((packed)) Local_002cb8e4_r0_2 {
    u8 unknown_0[0x30];  // (not used here)
    u32 word_30;
    u8 unknown_34[0x83];  // (not used here)
    u8 byte_b7;
};
GUEST_OFFSET(Local_002cb8e4_r0_2, word_30, 0x30);
GUEST_OFFSET(Local_002cb8e4_r0_2, byte_b7, 0xb7);

struct __attribute__((packed)) Local_002cb8e4_r12_1 {
    float float_0;
    float float_4;
};
GUEST_OFFSET(Local_002cb8e4_r12_1, float_0, 0x0);
GUEST_OFFSET(Local_002cb8e4_r12_1, float_4, 0x4);

struct __attribute__((packed)) Local_002cb8e4_r1_2 {
    u8 unknown_0[0xb7];  // (not used here)
    u8 byte_b7;
};
GUEST_OFFSET(Local_002cb8e4_r1_2, byte_b7, 0xb7);

struct __attribute__((packed)) Local_002cb8e4_r1_3 {
    u8 unknown_0[0x324];  // (not used here)
    float float_324;
    u8 unknown_328[0x20];  // (not used here)
    float float_348;
};
GUEST_OFFSET(Local_002cb8e4_r1_3, float_324, 0x324);
GUEST_OFFSET(Local_002cb8e4_r1_3, float_348, 0x348);

struct __attribute__((packed)) Local_002cb8e4_r1_4 {
    u8 unknown_0[0x28];  // (not used here)
    float float_28;
    u8 unknown_2c[0x4];  // (not used here)
    u32 word_30;
};
GUEST_OFFSET(Local_002cb8e4_r1_4, float_28, 0x28);
GUEST_OFFSET(Local_002cb8e4_r1_4, word_30, 0x30);

struct __attribute__((packed)) Local_002cb8e4_r2_1 {
    u32 word_0;
};
GUEST_OFFSET(Local_002cb8e4_r2_1, word_0, 0x0);


void ListWindow__place_cursor(gptr<ListWindow> list_window, float S0, float S1) {
    gptr<Local_002cb8e4_r2_1> r2_1 = gptr<Local_002cb8e4_r2_1>(list_window.addr() + 0xd04u);  // (from the original)
    if (list_window->word_1504 != 0) {
        gptr<Local_002cb8e4_r0_1> r0_1 = gptr<Local_002cb8e4_r0_1>(list_window->word_d04);
        u32 r1_1 = u32(r0_1->byte_b7) & 0xfeu;  // (from the original)
        r0_1->byte_b7 = u8(r1_1);
        guest::cpu()->r[1] = r1_1;
        return;
    }
    gptr<Local_002cb8e4_r1_2> r1_2 = gptr<Local_002cb8e4_r1_2>(list_window->word_d04);
    r1_2->byte_b7 = u8(u32(r1_2->byte_b7) & 0xfeu | 1u);  // (from the original)
    gptr<Local_002cb8e4_r1_3> r1_3 = gptr<Local_002cb8e4_r1_3>(list_window.addr() + 0x11e8u);  // (from the original)
    float S1_1 = r1_3->float_324;
    float S2_1 = r1_3->float_348;
    gptr<Local_002cb8e4_r1_4> r1_4 = gptr<Local_002cb8e4_r1_4>(r2_1->word_0);
    float S1_2 = S1_1 + float(s32(*gptr<u32>(list_window.addr() + 0x1504u))) * S2_1;  // (from the original)
    float S2_2 = list_window->float_1644;
    gptr<Local_002cb8e4_r0_2> r0_2 = gptr<Local_002cb8e4_r0_2>(r2_1->word_0);
    float S0_1 = r1_4->float_28;
    u32 r1_5 = r1_4->word_30;
    gptr<Local_002cb8e4_r12_1> r12_1 = gptr<Local_002cb8e4_r12_1>(r0_2.addr() + 0x28u);  // (from the original)
    float S1_3 = S2_2 + S1_2;
    r12_1->float_0 = S0_1;
    r12_1->float_4 = S1_3;
    r0_2->word_30 = r1_5;
    u32 r1_6 = u32(r0_2->byte_b7) & 0xcfu;  // (from the original)
    r0_2->byte_b7 = u8(r1_6);
    guest::cpu()->r[1] = r1_6;
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_3;
}

}  // namespace d_002cb8e4
GUEST_EXPORT(0x002cb8e4, d_002cb8e4::ListWindow__place_cursor);

// f_002cbad8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002cbad8 {

inline constexpr u32 vtable_CommonScrollBar = 0x008f0888u;
inline constexpr u32 vtable_CensusContentList = 0x008f2638u;
inline constexpr guest::Function<0x001cb8fc, u32(u32, u32, u32, u32)> InOutWindow__destructor;
inline constexpr guest::Function<0x002b7c94, u32(u32, u32, u32, u32)> destroy_animation_pair;
inline constexpr guest::Function<0x002f76ad, u32(u32, u32, u32, u32)> destroy_array_elements;
inline constexpr guest::Function<0x002f7710, u32(u32, u32)> destroy_button_action_control;
inline constexpr guest::Function<0x00567ef0, u32(u32)> ssys__ma__lyt__ArcResAccReader__destructor;
inline constexpr guest::Function<0x0056988c, u32(u32)> destroy_animation;
inline constexpr guest::Function<0x005bf744, u32(u32)> Layout__destructor;
inline constexpr guest::Function<0x005e3194, u32(u32)> script__RenderMain__RenderMain_005e3194;

u32 CensusContentList__destructor(gptr<CensusContentList> census_content_list, u32 r1_unused, u32 r2, u32 r3) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    census_content_list->vtable = vtable_CensusContentList;
    u32 r0_1 = census_content_list.addr() + 0x1650u;  // (from the original)
    destroy_animation_pair(r0_1, vtable_CensusContentList, r2, r3);
    destroy_array_elements(r0_1 - 0xd0u, 0x1c81ccu, 0x1cu, 7u);  // (from the original)
    census_content_list->common_scroll_bar_vtable = vtable_CommonScrollBar;
    destroy_button_action_control(r0_1 - 0x260u, vtable_CommonScrollBar);  // (from the original)
    destroy_array_elements(r0_1 - 0x420u, 0x2b6ef8u, 0xe0u, 2u);  // (from the original)
    destroy_animation(r0_1 - 0x458u);  // (from the original)
    destroy_animation(r0_1 - 0x480u);  // (from the original)
    destroy_animation(r0_1 - 0x4a8u);  // (from the original)
    destroy_animation(r0_1 - 0x4d0u);  // (from the original)
    u32 r0_10 = Layout__destructor(r0_1 - 0x61cu);  // (from the original)
    u32 r0_12 = ssys__ma__lyt__ArcResAccReader__destructor(r0_10 - 0x248u);  // (from the original)
    script__RenderMain__RenderMain_005e3194(r0_12 - 0xc8u);  // (from the original)
    destroy_animation(r0_12 - 0x114u);  // (from the original)
    destroy_array_elements(r0_12 - 0xc3cu, 0x2caf00u, 0x198u, 7u);  // (from the original)
    frame.release();
    return InOutWindow__destructor(r0_12 - 0xdecu, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
}

}  // namespace d_002cbad8
GUEST_EXPORT(0x002cbad8, d_002cbad8::CensusContentList__destructor);

// f_002cbbbc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002cbbbc {

inline constexpr guest::Function<0x002fb94c, u32(u32, u32, u32, u32)> get_current_player;
inline constexpr guest::Function<0x007200fc, u32(u32, u32)> ItemRows__first_empty;

u32 ChangeStockCooler__virtual_9(gptr<ChangeStockCooler> change_stock_cooler, u32 r1) {
    u32 player_2 = get_current_player(change_stock_cooler.addr(), r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 free_index = ItemRows__first_empty(player_2 + 0x6f10u, *gptr<u32>(change_stock_cooler.addr() + (change_stock_cooler->word_185c << 2) + 0x1860u) - 1u);  // (from the original)
    if (s32(free_index) < 0) {
        return free_index;
    }
    u32 r1_3 = change_stock_cooler->word_3ca0;
    guest::cpu()->r[1] = r1_3;
    return free_index + r1_3;
}

}  // namespace d_002cbbbc
GUEST_EXPORT_FRAMED(0x002cbbbc, d_002cbbbc::ChangeStockCooler__virtual_9, 0x4010);  // pushes {r4, lr} first, as the original

// f_002cbea4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Stores the selected row (counting the earlier pages of 10) in the player's data (+0x6f10).
namespace d_002cbea4 {

struct __attribute__((packed)) ListWindow {
    u8 unknown_0[0x3ca0];  // (not used here)
    u32 word_3ca0;
};
GUEST_OFFSET(ListWindow, word_3ca0, 0x3ca0);

inline constexpr guest::Function<0x002d49d8, u32(u32, u32, u32, u32)> store_sanitized_item;
inline constexpr guest::Function<0x002fb94c, u32(u32, u32, u32, u32)> get_current_player;

void ListWindow__store_selection(gptr<ListWindow> list_window, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 r1_2 = 0;
    u32 player_2 = get_current_player(list_window.addr(), r1, r2, r3);
    u32 r3_1 = guest::cpu()->r[3];
    u32 r1_1 = list_window->word_3ca0;
    if (s32(r1_1) <= s32(r1)) {
        r3_1 = r1_1 + 0xau;  // (from the original)
        r1_2 = r3_1 > r1 ? r1 - r1_1 : ~0u;
    } else {
        r1_2 = ~0u;
    }
    u32 r1_3 = r1_2 + (*gptr<u32>(list_window.addr() + (*gptr<u32>(list_window.addr() + 0x185cu) << 2) + 0x1860u) - 1u) * 0xau;  // (from the original)
    frame.release();
    store_sanitized_item(player_2 + 0x6f10u, r1_3, r2, r3_1);
    return;  // (from the original)
}

}  // namespace d_002cbea4
GUEST_EXPORT(0x002cbea4, d_002cbea4::ListWindow__store_selection);

// f_002cc00c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002cc00c {

struct __attribute__((packed)) Local_002cc00c_ea_5 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_002cc00c_ea_5, word_0, 0x0);
GUEST_OFFSET(Local_002cc00c_ea_5, word_4, 0x4);

struct __attribute__((packed)) Local_002cc00c_r0_1 {
    u32 vtable;
    u8 unknown_4[0xa3c];  // (not used here)
    u32 change_stock_cooler_vtable;
};
GUEST_OFFSET(Local_002cc00c_r0_1, vtable, 0x0);
GUEST_OFFSET(Local_002cc00c_r0_1, change_stock_cooler_vtable, 0xa40);

inline constexpr u32 vtable_ChangeStockCooler = 0x008f2674u;
inline constexpr u32 vtable_ChangeStockCooler_at_a40 = 0x008f26a4u;
inline constexpr u32 global_00a1877c_address = 0x00a1877cu;
inline constexpr guest::Function<0x002682ac, u32(u32, u32, u32, u32)> ChangeRentalBase__ChangeRentalBase_002682ac;
inline constexpr guest::Function<0x002cdcb0, u32(u32)> ItemDragIconGroup__ItemDragIconGroup;
inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> for_each_element;

u32 ChangeStockCooler__ChangeStockCooler(u32 change_stock_cooler, u32 r1, u32 r2, u32 r3) {
    gptr<Local_002cc00c_r0_1> r0_1 = gptr<Local_002cc00c_r0_1>(ChangeRentalBase__ChangeRentalBase_002682ac(change_stock_cooler, r1, r2, r3));
    r0_1->change_stock_cooler_vtable = vtable_ChangeStockCooler_at_a40;
    r0_1->vtable = vtable_ChangeStockCooler;
    u32 r0_3 = for_each_element(r0_1.addr() + 0x1888u, 0x2b9440u, 0x36cu, 0xau);  // (from the original)
    u32 item_drag_icon_group = r0_3 + 0x2238u;  // (from the original)
    ItemDragIconGroup__ItemDragIconGroup(item_drag_icon_group);
    u32 r0_5 = item_drag_icon_group - 0x3ac0u;  // (from the original)
    *gptr<u32>(r0_5 + 0x3ca0u) = 0;  // (from the original)
    *gptr<u8>(r0_5 + 0x3ca4u) = 0;  // (from the original)
    *gptr<u32>(r0_5 + 0xa64u) = 0x2cc0a0;  // (from the original)
    *gptr<u32>(r0_5 + 0x24u) = 0x2cc090;  // (from the original)
    gptr<Local_002cc00c_ea_5> ea_5 = gptr<Local_002cc00c_ea_5>(r0_5 + 0xa68u);  // (from the original)
    ea_5->word_0 = 0xa1877c;  // (from the original)
    ea_5->word_4 = 0x2cc0b0;  // (from the original)
    guest::cpu()->r[1] = global_00a1877c_address;
    return r0_5;
}

}  // namespace d_002cc00c
GUEST_EXPORT_FRAMED(0x002cc00c, d_002cc00c::ChangeStockCooler__ChangeStockCooler, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_002cc1b0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The entry (0x2b4 bytes) for the index on the current page of 10, or the one before the first when outside it.
namespace d_002cc1b0 {

struct __attribute__((packed)) LetterPage {
    u8 unknown_0[0x3520];  // (not used here)
    u32 word_3520;
};
GUEST_OFFSET(LetterPage, word_3520, 0x3520);

inline constexpr guest::Function<0x002e3568, u32(u32, u32, u32, u32)> LetterEntry__release;

void LetterPage__entry(gptr<LetterPage> letter_page, u32 r1, u32 r2_unused, u32 r3) {
    u32 r2_1 = letter_page->word_3520;
    if (s32(r2_1) > s32(r1)) {
        u32 r1_2 = (~0u) * 0xadu;  // (from the original)
        LetterEntry__release(letter_page.addr() + (r1_2 << 2) + 0x18d4u, r1_2, 0xadu, r3);  // (from the original)
        return;  // (from the original)
    }
    if (r2_1 + 0xau > r1) {  // (from the original)
        u32 r1_4 = (r1 - r2_1) * 0xadu;  // (from the original)
        LetterEntry__release(letter_page.addr() + (r1_4 << 2) + 0x18d4u, r1_4, 0xadu, r1);  // (from the original)
        return;  // (from the original)
    }
    u32 r1_6 = (~0u) * 0xadu;  // (from the original)
    LetterEntry__release(letter_page.addr() + (r1_6 << 2) + 0x18d4u, r1_6, 0xadu, r1);  // (from the original)
    return;  // (from the original)
}

}  // namespace d_002cc1b0
GUEST_EXPORT(0x002cc1b0, d_002cc1b0::LetterPage__entry);

// f_002cc4bc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002cc4bc {

struct __attribute__((packed)) Local_002cc4bc_ea_3 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_002cc4bc_ea_3, word_0, 0x0);
GUEST_OFFSET(Local_002cc4bc_ea_3, word_4, 0x4);

struct __attribute__((packed)) Local_002cc4bc_r0_1 {
    u32 vtable;
    u8 unknown_4[0xa3c];  // (not used here)
    u32 change_stock_letter_vtable;
};
GUEST_OFFSET(Local_002cc4bc_r0_1, vtable, 0x0);
GUEST_OFFSET(Local_002cc4bc_r0_1, change_stock_letter_vtable, 0xa40);

struct __attribute__((packed)) Local_002cc4bc_r1_1 {
    u32 vtable;
    u32 word_4;
    u8 byte_8;
    u8 unknown_9[0xf];  // (not used here)
    u8 byte_18;
    u8 unknown_19[0x3];  // (not used here)
    u32 word_1c;
    u32 word_20;
};
GUEST_OFFSET(Local_002cc4bc_r1_1, vtable, 0x0);
GUEST_OFFSET(Local_002cc4bc_r1_1, word_4, 0x4);
GUEST_OFFSET(Local_002cc4bc_r1_1, byte_8, 0x8);
GUEST_OFFSET(Local_002cc4bc_r1_1, byte_18, 0x18);
GUEST_OFFSET(Local_002cc4bc_r1_1, word_1c, 0x1c);
GUEST_OFFSET(Local_002cc4bc_r1_1, word_20, 0x20);

struct __attribute__((packed)) Local_002cc4bc_r5_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_002cc4bc_r5_1, word_0, 0x0);
GUEST_OFFSET(Local_002cc4bc_r5_1, word_4, 0x4);
GUEST_OFFSET(Local_002cc4bc_r5_1, word_8, 0x8);

inline constexpr u32 vtable_ChangeStockLetter = 0x008f26b8u;
inline constexpr u32 vtable_ChangeStockLetter_at_a40 = 0x008f26e4u;
inline constexpr u32 vtable_ChangeStockLetter_at_1888 = 0x008f26f8u;
inline constexpr u32 stock_letter_state_address = 0x009533c4u;
inline guest::global<u32, 0x0087a2a8> global_0087a2a8;
inline guest::global<u32, 0x0087a2ac> global_0087a2ac;
inline constexpr guest::Function<0x00125aec, u32(u32, u32, u32, u32)> construct_layout_animation;
inline constexpr guest::Function<0x002682ac, u32(u32, u32, u32, u32)> ChangeRentalBase__ChangeRentalBase_002682ac;
inline constexpr guest::Function<0x002f915c, u32(u32)> LetterDragIconGroup__LetterDragIconGroup;
inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> for_each_element;

u32 ChangeStockLetter__ChangeStockLetter(u32 change_stock_letter, u32 r1, u32 r2, u32 r3) {
    gptr<Local_002cc4bc_r0_1> r0_1 = gptr<Local_002cc4bc_r0_1>(ChangeRentalBase__ChangeRentalBase_002682ac(change_stock_letter, r1, r2, r3));
    gptr<Local_002cc4bc_r1_1> r1_1 = gptr<Local_002cc4bc_r1_1>(r0_1.addr() + 0x1888u);  // (from the original)
    r1_1->word_4 = 0;
    r1_1->byte_8 = 0;
    u32 r3_1 = *global_0087a2ac;
    gptr<Local_002cc4bc_r5_1> r5_1 = gptr<Local_002cc4bc_r5_1>(r0_1.addr() + 0x1894u);  // (from the original)
    r5_1->word_0 = *global_0087a2a8;
    r5_1->word_4 = r3_1;
    r5_1->word_8 = 0;
    r1_1->byte_18 = 0;
    r1_1->word_1c = 0;
    r1_1->word_20 = 0;
    r0_1->vtable = vtable_ChangeStockLetter;
    r0_1->change_stock_letter_vtable = vtable_ChangeStockLetter_at_a40;
    u32 r0_2 = r0_1.addr() + 0x18acu;  // (from the original)
    r1_1->vtable = vtable_ChangeStockLetter_at_1888;
    construct_layout_animation(r0_2, r1_1.addr(), vtable_ChangeStockLetter, vtable_ChangeStockLetter_at_a40);
    u32 r0_4 = for_each_element(r0_2 + 0x28u, 0x2e37acu, 0x2b4u, 0xau);  // (from the original)
    u32 letter_drag_icon_group = r0_4 + 0x1b08u;  // (from the original)
    LetterDragIconGroup__LetterDragIconGroup(letter_drag_icon_group);
    u32 r0_6 = letter_drag_icon_group - 0x33dcu;  // (from the original)
    *gptr<u8>(r0_6 + 0x351cu) = 0;  // (from the original)
    *gptr<u32>(r0_6 + 0x3520u) = 0;  // (from the original)
    *gptr<u32>(r0_6 + 0x24u) = 0x2cc588;  // (from the original)
    *gptr<u32>(r0_6 + 0xa64u) = 0x2cc594;  // (from the original)
    gptr<Local_002cc4bc_ea_3> ea_3 = gptr<Local_002cc4bc_ea_3>(r0_6 + 0xa68u);  // (from the original)
    ea_3->word_0 = 0x9533c4;  // (from the original)
    ea_3->word_4 = 0x2cc59c;  // (from the original)
    guest::cpu()->r[1] = stock_letter_state_address;
    return r0_6;
}

}  // namespace d_002cc4bc
GUEST_EXPORT_FRAMED(0x002cc4bc, d_002cc4bc::ChangeStockLetter__ChangeStockLetter, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_002cc5c4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002cc5c4 {

inline constexpr u32 vtable_DragIconGroup = 0x008ee248u;
inline constexpr u32 vtable_DragIconGroup_at_c = 0x008ee258u;
inline constexpr u32 vtable_ChangeStockLetter = 0x008f26b8u;
inline constexpr u32 vtable_ChangeStockLetter_at_a40 = 0x008f26e4u;
inline constexpr u32 vtable_ChangeStockLetter_at_1888 = 0x008f26f8u;
inline constexpr guest::Function<0x002684c0, u32(u32, u32, u32, u32)> ChangeListBase__ChangeListBase;
inline constexpr guest::Function<0x002f76ad, u32(u32, u32, u32, u32)> destroy_array_elements;
inline constexpr guest::Function<0x0056988c, u32(u32, u32, u32, u32)> destroy_animation;

u32 ChangeStockLetter__virtual_0_002cc5c4(gptr<ChangeStockLetter> change_stock_letter) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    change_stock_letter->change_stock_letter_vtable = vtable_ChangeStockLetter_at_a40;
    change_stock_letter->vtable = vtable_ChangeStockLetter;
    change_stock_letter->change_stock_letter_vtable_1888 = vtable_ChangeStockLetter_at_1888;
    change_stock_letter->drag_icon_group_vtable = vtable_DragIconGroup;
    change_stock_letter->drag_icon_group_vtable_33e8 = vtable_DragIconGroup_at_c;
    u32 r0_1 = change_stock_letter.addr() + 0x34f0u;  // (from the original)
    destroy_animation(r0_1, vtable_DragIconGroup_at_c, vtable_DragIconGroup, vtable_ChangeStockLetter);
    destroy_animation(r0_1 - 0x28u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    destroy_animation(r0_1 - 0x50u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    destroy_animation(r0_1 - 0x78u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    destroy_animation(r0_1 - 0xa0u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    destroy_animation(r0_1 - 0xc8u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    destroy_animation(r0_1 - 0xf4u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    destroy_array_elements(r0_1 - 0x1c1cu, 0x2e3854u, 0x2b4u, 0xau);  // (from the original)
    destroy_animation(r0_1 - 0x1c44u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    frame.release();
    return ChangeListBase__ChangeListBase(r0_1 - 0x34f0u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
}

}  // namespace d_002cc5c4
GUEST_EXPORT(0x002cc5c4, d_002cc5c4::ChangeStockLetter__virtual_0_002cc5c4);

// f_002cca88: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002cca88 {

inline constexpr u32 vtable_ChangeStockRental = 0x008f270cu;
inline constexpr guest::Function<0x002b7938, u32(u32, u32, u32, u32)> ChangeRentalBase__ChangeRentalBase_002b7938;
inline constexpr guest::Function<0x002cdcb0, u32(u32)> ItemDragIconGroup__ItemDragIconGroup;
inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> for_each_element;

u32 ChangeStockRental__ChangeStockRental(u32 change_stock_rental, u32 r1, u32 r2, u32 r3) {
    u32 r0_1 = ChangeRentalBase__ChangeRentalBase_002b7938(change_stock_rental, r1, r2, r3);
    *gptr<u32>(r0_1) = vtable_ChangeStockRental;
    u32 r0_3 = for_each_element(r0_1 + 0xa40u, 0x2b9440u, 0x36cu, 8u);  // (from the original)
    u32 item_drag_icon_group = r0_3 + 0x1b60u;  // (from the original)
    ItemDragIconGroup__ItemDragIconGroup(item_drag_icon_group);
    u32 r0_5 = item_drag_icon_group - 0x25a0u;  // (from the original)
    *gptr<u32>(r0_5 + 0x2780u) = 0;  // (from the original)
    *gptr<u8>((0x2780u | u32(s32(0x2780u) >> 0xb)) + r0_5) = 0;  // (from the original)
    *gptr<u32>(r0_5 + 0x24u) = 0x2ccae4;  // (from the original)
    guest::cpu()->r[1] = 0u;
    return r0_5;
}

}  // namespace d_002cca88
GUEST_EXPORT_FRAMED(0x002cca88, d_002cca88::ChangeStockRental__ChangeStockRental, 0x4010);  // pushes {r4, lr} first, as the original

// f_002ccb84: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Sets the two sharing flags (bits 0 and 2 of +0x9f) from the settings.
namespace d_002ccb84 {

struct __attribute__((packed)) NpcNetShareInfo {
    u8 byte_0;
    u8 byte_1;
};
GUEST_OFFSET(NpcNetShareInfo, byte_0, 0x0);
GUEST_OFFSET(NpcNetShareInfo, byte_1, 0x1);

struct __attribute__((packed)) Local_002ccb84_r1_1 {
    u8 unknown_0[0x9f];  // (not used here)
    u8 byte_9f;
};
GUEST_OFFSET(Local_002ccb84_r1_1, byte_9f, 0x9f);

inline constexpr u32 npc_net_share_info_instance_address = 0x0095386cu;
inline guest::global<u32, 0x0095386c> npc_net_share_info_instance;

u32 NpcNetShareInfo__set_flags(gptr<NpcNetShareInfo> npc_net_share_info) {
    gptr<Local_002ccb84_r1_1> r1_1 = gptr<Local_002ccb84_r1_1>(*npc_net_share_info_instance);
    if (r1_1.addr() == 0) {
        guest::cpu()->r[1] = r1_1.addr();
        return npc_net_share_info.addr();
    }
    u32 r2_1 = r1_1->byte_9f;
    u32 r2_2 = npc_net_share_info->byte_0 == 0 ? r2_1 & ~1u : r2_1 | 1u;
    r1_1->byte_9f = u8(r2_2);
    u32 r0_1 = r2_2 & 0xffu;  // (from the original)
    u32 r0_2 = npc_net_share_info->byte_1 == 0 ? r0_1 & ~4u : r0_1 | 4u;
    r1_1->byte_9f = u8(r0_2);
    guest::cpu()->r[1] = r1_1.addr();
    return r0_2;
}

}  // namespace d_002ccb84
GUEST_EXPORT(0x002ccb84, d_002ccb84::NpcNetShareInfo__set_flags);

// f_002ccbd4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Disables the window's button (+0xd9).
namespace d_002ccbd4 {

struct __attribute__((packed)) Window {
    u8 unknown_0[0x318];  // (not used here)
    u32 word_318;
};
GUEST_OFFSET(Window, word_318, 0x318);


void Window__disable_button(gptr<Window> window) {
    u32 r1_1 = 1u;
    *gptr<u8>(*gptr<u32>(window->word_318 + 0x4a0u) + 0xd9u) = u8(r1_1);  // (from the original)
    guest::cpu()->r[1] = r1_1;
}

}  // namespace d_002ccbd4
GUEST_EXPORT(0x002ccbd4, d_002ccbd4::Window__disable_button);

// f_002ccc70: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Selects or unselects the button `index` (0x518 bytes each), disabling the others' input when selected.
namespace d_002ccc70 {

struct __attribute__((packed)) ButtonList {
    u8 unknown_0[0x108];  // (not used here)
    u32 word_108;
};
GUEST_OFFSET(ButtonList, word_108, 0x108);

inline constexpr guest::Function<0x002e0428, u32(u32, u32, u32, u32)> LayoutButton__set_selected;

u32 ButtonList__set_selected(gptr<ButtonList> button_list, u32 r1, u32 r2) {
    u32 r3_1 = r1 * 0xa3u;  // (from the original)
    u32 r2_1 = r2 ^ 1u;
    *gptr<u8>(button_list->word_108 + (r3_1 << 3) + 0xd9u) = u8(r2_1);  // (from the original)
    return LayoutButton__set_selected(button_list->word_108 + (r3_1 << 3), r2, r2_1, r3_1);
}

}  // namespace d_002ccc70
GUEST_EXPORT(0x002ccc70, d_002ccc70::ButtonList__set_selected);

// f_002cd064: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Starts the open animation of the visible buttons and of the window.
namespace d_002cd064 {

struct __attribute__((packed)) ButtonList {
    u8 unknown_0[0x10c];  // (not used here)
    u32 word_10c;
    u32 word_110;
};
GUEST_OFFSET(ButtonList, word_10c, 0x10c);
GUEST_OFFSET(ButtonList, word_110, 0x110);

struct __attribute__((packed)) Local_002cd064_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Local_002cd064_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_002cd064_ea_1, word_4, 0x4);
GUEST_OFFSET(Local_002cd064_ea_1, word_8, 0x8);
GUEST_OFFSET(Local_002cd064_ea_1, word_c, 0xc);

struct __attribute__((packed)) Local_002cd064_ea_2 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Local_002cd064_ea_2, word_0, 0x0);
GUEST_OFFSET(Local_002cd064_ea_2, word_4, 0x4);
GUEST_OFFSET(Local_002cd064_ea_2, word_8, 0x8);
GUEST_OFFSET(Local_002cd064_ea_2, word_c, 0xc);

inline guest::global<u32, 0x00857d28> global_00857d28;
inline guest::global<u32, 0x00857d2c> global_00857d2c;
inline constexpr guest::Function<0x0056939c, u32(u32, u32, u32, u32)> LayoutButton__start_animation;
inline constexpr guest::Function<0x00818fa0, u32(u32, u32, u32)> LayoutAnimator__play_b;

u32 ButtonList__start_open(gptr<ButtonList> button_list, u32 r1_unused, u32 r2) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 r0 = button_list.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r14 = guest::cpu()->r[14];
    gptr<Local_002cd064_ea_1> ea_1 = gptr<Local_002cd064_ea_1>(frame.at(0).addr());
    ea_1->word_0 = r4;
    ea_1->word_4 = r5;
    ea_1->word_8 = r6;
    ea_1->word_c = r14;
    r5 = r0;
    r4 = button_list->word_110;
    if (s32(button_list->word_10c) > s32(r4)) {
        do {
            u32 r1_1 = r4 * 0xa3u;  // (from the original)
            LayoutButton__start_animation(*gptr<u32>(r5 + 0x108u) + (r1_1 << 3), r1_1, r2, guest::cpu()->r[3]);  // (from the original)
            r2 = guest::cpu()->r[2];
            r4 += 1u;
            guest::preempt();
        } while (s32(*gptr<u32>(r5 + 0x10cu)) > s32(r4));  // (from the original)
    }
    u32 r0_3 = LayoutAnimator__play_b(r5 + 0xe4u, *global_00857d28, *global_00857d2c);  // (from the original)
    gptr<Local_002cd064_ea_2> ea_2 = gptr<Local_002cd064_ea_2>(frame.at(0).addr());
    u32 r4_1 = ea_2->word_0;
    u32 r5_1 = ea_2->word_4;
    u32 r6_1 = ea_2->word_8;
    guest::cpu()->r[4] = r4_1;
    guest::cpu()->r[5] = r5_1;
    guest::cpu()->r[6] = r6_1;
    return r0_3;
}

}  // namespace d_002cd064
GUEST_EXPORT(0x002cd064, d_002cd064::ButtonList__start_open);

// f_002cd120: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Finishes the animation of the visible buttons and starts the window's next one.
namespace d_002cd120 {

struct __attribute__((packed)) ButtonList {
    u8 unknown_0[0x10c];  // (not used here)
    u32 word_10c;
    u32 word_110;
};
GUEST_OFFSET(ButtonList, word_10c, 0x10c);
GUEST_OFFSET(ButtonList, word_110, 0x110);

struct __attribute__((packed)) Local_002cd120_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Local_002cd120_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_002cd120_ea_1, word_4, 0x4);
GUEST_OFFSET(Local_002cd120_ea_1, word_8, 0x8);
GUEST_OFFSET(Local_002cd120_ea_1, word_c, 0xc);

struct __attribute__((packed)) Local_002cd120_ea_2 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Local_002cd120_ea_2, word_0, 0x0);
GUEST_OFFSET(Local_002cd120_ea_2, word_4, 0x4);
GUEST_OFFSET(Local_002cd120_ea_2, word_8, 0x8);
GUEST_OFFSET(Local_002cd120_ea_2, word_c, 0xc);

inline guest::global<u32, 0x00857d30> global_00857d30;
inline guest::global<u32, 0x00857d34> global_00857d34;
inline constexpr guest::Function<0x002e086c, u32(u32, u32, u32, u32)> LayoutButton__finish_animation_3ac;
inline constexpr guest::Function<0x00818fa0, u32(u32, u32, u32)> LayoutAnimator__play_b;

u32 ButtonList__finish_open(gptr<ButtonList> button_list, u32 r1_unused, u32 r2) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 r0 = button_list.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r14 = guest::cpu()->r[14];
    gptr<Local_002cd120_ea_1> ea_1 = gptr<Local_002cd120_ea_1>(frame.at(0).addr());
    ea_1->word_0 = r4;
    ea_1->word_4 = r5;
    ea_1->word_8 = r6;
    ea_1->word_c = r14;
    r5 = r0;
    r4 = button_list->word_110;
    if (s32(button_list->word_10c) > s32(r4)) {
        do {
            u32 r1_1 = r4 * 0xa3u;  // (from the original)
            LayoutButton__finish_animation_3ac(*gptr<u32>(r5 + 0x108u) + (r1_1 << 3), r1_1, r2, guest::cpu()->r[3]);  // (from the original)
            r2 = guest::cpu()->r[2];
            r4 += 1u;
            guest::preempt();
        } while (s32(*gptr<u32>(r5 + 0x10cu)) > s32(r4));  // (from the original)
    }
    u32 r0_3 = LayoutAnimator__play_b(r5 + 0xe4u, *global_00857d30, *global_00857d34);  // (from the original)
    gptr<Local_002cd120_ea_2> ea_2 = gptr<Local_002cd120_ea_2>(frame.at(0).addr());
    u32 r4_1 = ea_2->word_0;
    u32 r5_1 = ea_2->word_4;
    u32 r6_1 = ea_2->word_8;
    guest::cpu()->r[4] = r4_1;
    guest::cpu()->r[5] = r5_1;
    guest::cpu()->r[6] = r6_1;
    return r0_3;
}

}  // namespace d_002cd120
GUEST_EXPORT(0x002cd120, d_002cd120::ButtonList__finish_open);

// f_002cd2c0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Starts the window's close animation.
namespace d_002cd2c0 {

inline guest::global<u32, 0x00857d18> global_00857d18;
inline guest::global<u32, 0x00857d1c> global_00857d1c;
inline constexpr guest::Function<0x00818fa0, u32(u32, u32, u32)> LayoutAnimator__play_b;

u32 ButtonList__start_close(u32 button_list) {
    LayoutAnimator__play_b(button_list + 0xe4u, *global_00857d18, *global_00857d1c);  // (from the original)
    return 1u;
}

}  // namespace d_002cd2c0
GUEST_EXPORT_FRAMED(0x002cd2c0, d_002cd2c0::ButtonList__start_close, 0x4010);  // pushes {r4, lr} first, as the original

// f_002cd2e0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Sets the message of the button `index` and marks it for update.
namespace d_002cd2e0 {

struct __attribute__((packed)) ButtonList {
    u8 unknown_0[0x108];  // (not used here)
    u32 word_108;
};
GUEST_OFFSET(ButtonList, word_108, 0x108);

struct __attribute__((packed)) Local_002cd2e0_r0_1 {
    u8 unknown_0[0xcc];  // (not used here)
    u32 word_cc;
    u8 unknown_d0[0xa];  // (not used here)
    u8 byte_da;
};
GUEST_OFFSET(Local_002cd2e0_r0_1, word_cc, 0xcc);
GUEST_OFFSET(Local_002cd2e0_r0_1, byte_da, 0xda);


u32 ButtonList__set_message(gptr<ButtonList> button_list, u32 r1, u32 r2) {
    gptr<Local_002cd2e0_r0_1> r0_1 = gptr<Local_002cd2e0_r0_1>(button_list->word_108 + r2 * 0x518u);  // (from the original)
    r0_1->word_cc = r1;
    r0_1->byte_da = 1;
    return r0_1.addr();
}

}  // namespace d_002cd2e0
GUEST_EXPORT(0x002cd2e0, d_002cd2e0::ButtonList__set_message);

// f_002cd30c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Starts the window's closed animation.
namespace d_002cd30c {

inline guest::global<u32, 0x00857d20> global_00857d20;
inline guest::global<u32, 0x00857d24> global_00857d24;
inline constexpr guest::Function<0x00818fa0, u32(u32, u32, u32)> LayoutAnimator__play_b;

u32 ButtonList__start_closed(u32 button_list) {
    LayoutAnimator__play_b(button_list + 0xe4u, *global_00857d20, *global_00857d24);  // (from the original)
    return 1u;
}

}  // namespace d_002cd30c
GUEST_EXPORT_FRAMED(0x002cd30c, d_002cd30c::ButtonList__start_closed, 0x4010);  // pushes {r4, lr} first, as the original

// f_002cd378: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Sets the window's selected flag (bit 3 of +0xd4) and selects or unselects every button.
namespace d_002cd378 {

struct __attribute__((packed)) ButtonList {
    u8 unknown_0[0xd4];  // (not used here)
    u32 word_d4;
    u8 unknown_d8[0x34];  // (not used here)
    u32 word_10c;
};
GUEST_OFFSET(ButtonList, word_d4, 0xd4);
GUEST_OFFSET(ButtonList, word_10c, 0x10c);

struct __attribute__((packed)) Local_002cd378_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Local_002cd378_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_002cd378_ea_1, word_4, 0x4);
GUEST_OFFSET(Local_002cd378_ea_1, word_8, 0x8);
GUEST_OFFSET(Local_002cd378_ea_1, word_c, 0xc);

struct __attribute__((packed)) Local_002cd378_ea_2 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Local_002cd378_ea_2, word_0, 0x0);
GUEST_OFFSET(Local_002cd378_ea_2, word_4, 0x4);
GUEST_OFFSET(Local_002cd378_ea_2, word_8, 0x8);
GUEST_OFFSET(Local_002cd378_ea_2, word_c, 0xc);

inline constexpr guest::Function<0x002e0428, u32(u32, u32, u32, u32)> LayoutButton__set_selected;

u32 ButtonList__set_all_selected(gptr<ButtonList> button_list, u32 r1) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 r0 = button_list.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r14 = guest::cpu()->r[14];
    gptr<Local_002cd378_ea_1> ea_1 = gptr<Local_002cd378_ea_1>(frame.at(0).addr());
    ea_1->word_0 = r4;
    ea_1->word_4 = r5;
    ea_1->word_8 = r6;
    ea_1->word_c = r14;
    r5 = r0;
    u32 r0_1 = button_list->word_d4;
    r6 = r1;
    r4 = 0u;
    button_list->word_d4 = r1 == 0 ? r0_1 & ~8u : r0_1 | 8u;
    u32 r0_2 = button_list->word_10c;
    if (s32(r0_2) > 0) {
        do {
            LayoutButton__set_selected(*gptr<u32>(r5 + 0x108u) + r4 * 0x518u, r6, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
            r1 = guest::cpu()->r[1];
            r0_2 = *gptr<u32>(r5 + 0x10cu);  // (from the original)
            r4 += 1u;
            guest::preempt();
        } while (s32(r0_2) > s32(r4));
    }
    gptr<Local_002cd378_ea_2> ea_2 = gptr<Local_002cd378_ea_2>(frame.at(0).addr());
    u32 r4_1 = ea_2->word_0;
    u32 r5_1 = ea_2->word_4;
    u32 r6_1 = ea_2->word_8;
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[4] = r4_1;
    guest::cpu()->r[5] = r5_1;
    guest::cpu()->r[6] = r6_1;
    return r0_2;
}

}  // namespace d_002cd378
GUEST_EXPORT(0x002cd378, d_002cd378::ButtonList__set_all_selected);

// f_002cd4bc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Resets the park data when asked, makes it the current one and marks it loaded.
namespace d_002cd4bc {

struct __attribute__((packed)) ExhibitionParkFile {
    u32 word_0;
    u8 unknown_4[0x3c];  // (not used here)
    u8 byte_40;
};
GUEST_OFFSET(ExhibitionParkFile, word_0, 0x0);
GUEST_OFFSET(ExhibitionParkFile, byte_40, 0x40);

inline guest::global<u32, 0x0095262c> exhibition_park_data;
inline constexpr guest::Function<0x002bed58, u32(u32, u32, u32, u32)> ParkSets3__reset;

void ExhibitionParkFile__activate(gptr<ExhibitionParkFile> exhibition_park_file, u32 r1, u32 r2) {
    if (r1 != 0) {
        ParkSets3__reset(exhibition_park_file->word_0, r1, r2, guest::cpu()->r[3]);
    }
    *exhibition_park_data = exhibition_park_file->word_0;
    exhibition_park_file->byte_40 = 1;
}

}  // namespace d_002cd4bc
GUEST_EXPORT_FRAMED(0x002cd4bc, d_002cd4bc::ExhibitionParkFile__activate, 0x4010);  // pushes {r4, lr} first, as the original

// f_002cd520: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Opens the park's save file over the data buffer.
namespace d_002cd520 {

struct __attribute__((packed)) ExhibitionParkFile {
    u32 word_0;
};
GUEST_OFFSET(ExhibitionParkFile, word_0, 0x0);

inline constexpr guest::Function<0x001b8b74, u32(u32, u32, u32, u32)> sead__FileHandle__FileHandle;

u32 ExhibitionParkFile__open(gptr<ExhibitionParkFile> exhibition_park_file) {
    return sead__FileHandle__FileHandle(0x85ed32u, 0u, exhibition_park_file->word_0, 0x17be10u);  // (from the original)
}

}  // namespace d_002cd520
GUEST_EXPORT(0x002cd520, d_002cd520::ExhibitionParkFile__open);

// f_002cd574: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Allocates and constructs the park data (0x17be10 bytes), from the scene heap or the stage heap.
namespace d_002cd574 {

struct __attribute__((packed)) ExhibitionParkFile {
    u32 word_0;
};
GUEST_OFFSET(ExhibitionParkFile, word_0, 0x0);

inline constexpr u32 stage_heap_address = 0x00952c3cu;
inline constexpr u32 exhibition_park_heap_address = 0x00952ca4u;
inline guest::global<u32, 0x00952c3c> stage_heap;
inline guest::global<u32, 0x00952ca4> exhibition_park_heap;
inline constexpr guest::Function<0x002bee6c, u32(u32)> ParkSets3__construct;
inline constexpr guest::Function<0x002fd108, u32(u32, u32, u32, u32)> allocate_on_heap;

void ExhibitionParkFile__allocate(gptr<ExhibitionParkFile> exhibition_park_file, u32 r1) {
    if (exhibition_park_file->word_0 != 0) {
        return;
    }
    u32 r1_1 = *exhibition_park_heap;
    if (r1_1 != 0) {
        u32 block = allocate_on_heap(0x17be10u, r1_1, 4u, guest::cpu()->r[3]);  // (from the original)
        u32 r0_2 = ParkSets3__construct(block);
        exhibition_park_file->word_0 = r0_2;
        return;
    }
    u32 block_2 = allocate_on_heap(0x17be10u, *stage_heap, 4u, guest::cpu()->r[3]);  // (from the original)
    u32 r0_4 = ParkSets3__construct(block_2);
    exhibition_park_file->word_0 = r0_4;
}

}  // namespace d_002cd574
GUEST_EXPORT_FRAMED(0x002cd574, d_002cd574::ExhibitionParkFile__allocate, 0x4010);  // pushes {r4, lr} first, as the original

// f_002cd5e4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Destroys and frees the park data, and marks the park not ready.
namespace d_002cd5e4 {

struct __attribute__((packed)) ExhibitionParkFile {
    u32 park_sets3;
    u8 unknown_4[0x3c];  // (not used here)
    u8 byte_40;
};
GUEST_OFFSET(ExhibitionParkFile, park_sets3, 0x0);
GUEST_OFFSET(ExhibitionParkFile, byte_40, 0x40);

inline constexpr u32 exhibition_park_file_address = 0x00952628u;
inline constexpr guest::Function<0x002bef2c, u32(u32, u32, u32, u32)> ParkSets3__destroy;
inline constexpr guest::Function<0x002ffb64, u32(u32)> free_memory;
inline constexpr guest::Function<0x00537464, u32(u32)> ExhibitionPark__if_ready;

u32 ExhibitionParkFile__free(gptr<ExhibitionParkFile> exhibition_park_file) {
    u32 park_sets3 = exhibition_park_file->park_sets3;
    if (park_sets3 != 0) {
        ParkSets3__destroy(park_sets3, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
        free_memory(park_sets3);
        park_sets3 = exhibition_park_file_address;
        exhibition_park_file->park_sets3 = 0;
        *gptr<u32>(park_sets3 + 4u) = 0;
        exhibition_park_file->byte_40 = 0;
    }
    u32 r0_2 = ExhibitionPark__if_ready(park_sets3);
    if (r0_2 != 0) {
        *gptr<u8>(r0_2 + 0xa1u) = 0;  // (from the original)
    }
    return r0_2;
}

}  // namespace d_002cd5e4
GUEST_EXPORT_FRAMED(0x002cd5e4, d_002cd5e4::ExhibitionParkFile__free, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_002cd640: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Initializes the request (type 0x3800) with its three arguments.
namespace d_002cd640 {

struct __attribute__((packed)) NetRequest3800 {
    u8 unknown_0[0x10];  // (not used here)
    u32 word_10;
    u32 word_14;
    u8 unknown_18[0x10];  // (not used here)
    u32 word_28;
    u32 word_2c;
    u32 word_30;
};
GUEST_OFFSET(NetRequest3800, word_10, 0x10);
GUEST_OFFSET(NetRequest3800, word_14, 0x14);
GUEST_OFFSET(NetRequest3800, word_28, 0x28);
GUEST_OFFSET(NetRequest3800, word_2c, 0x2c);
GUEST_OFFSET(NetRequest3800, word_30, 0x30);

inline constexpr guest::Function<0x005cd270, u32(u32, u32, u32, u32)> reset_request_record;

void NetRequest3800__init(gptr<NetRequest3800> net_request3800, u32 r1, u32 r2, u32 r3) {
    reset_request_record(net_request3800.addr() + 8u, r1, r2, r3);
    net_request3800->word_10 = 0x3800;  // (from the original)
    net_request3800->word_14 = 0;
    net_request3800->word_28 = r1;
    net_request3800->word_2c = r2;
    net_request3800->word_30 = r3;
    guest::cpu()->r[1] = 0x3800u;  // (from the original)
}

}  // namespace d_002cd640
GUEST_EXPORT_FRAMED(0x002cd640, d_002cd640::NetRequest3800__init, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_002cdcb0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002cdcb0 {

inline constexpr u32 vtable_ItemDragIconGroup = 0x008f2a0cu;
inline constexpr u32 vtable_ItemDragIconGroup_at_c = 0x008f2a1cu;
inline constexpr guest::Function<0x00125aec, u32(u32)> construct_layout_animation;
inline constexpr guest::Function<0x0022c53c, u32(u32)> DragIconGroup__DragIconGroup;

u32 ItemDragIconGroup__ItemDragIconGroup(gptr<ItemDragIconGroup> item_drag_icon_group) {
    DragIconGroup__DragIconGroup(item_drag_icon_group.addr());
    item_drag_icon_group->vtable = vtable_ItemDragIconGroup;
    item_drag_icon_group->item_drag_icon_group_vtable = vtable_ItemDragIconGroup_at_c;
    construct_layout_animation(item_drag_icon_group.addr() + 0x140u);  // (from the original)
    construct_layout_animation(item_drag_icon_group.addr() + 0x168u);  // (from the original)
    construct_layout_animation(item_drag_icon_group.addr() + 0x190u);  // (from the original)
    construct_layout_animation(item_drag_icon_group.addr() + 0x1b8u);  // (from the original)
    return item_drag_icon_group.addr();
}

}  // namespace d_002cdcb0
GUEST_EXPORT_FRAMED(0x002cdcb0, d_002cdcb0::ItemDragIconGroup__ItemDragIconGroup, 0x4010);  // pushes {r4, lr} first, as the original

// f_002cdd00: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002cdd00 {

inline constexpr u32 vtable_ItemDragIconGroup = 0x008f2a0cu;
inline constexpr u32 vtable_ItemDragIconGroup_at_c = 0x008f2a1cu;
inline constexpr guest::Function<0x0022c5d8, u32(u32)> DragIconGroup__virtual_0_0022c5d8;
inline constexpr guest::Function<0x0056988c, u32(u32, u32, u32, u32)> destroy_animation;

u32 ItemDragIconGroup__virtual_0_002cdd00(gptr<ItemDragIconGroup> item_drag_icon_group) {
    item_drag_icon_group->vtable = vtable_ItemDragIconGroup;
    item_drag_icon_group->item_drag_icon_group_vtable = vtable_ItemDragIconGroup_at_c;
    u32 r0_1 = item_drag_icon_group.addr() + 0x1b8u;  // (from the original)
    destroy_animation(r0_1, vtable_ItemDragIconGroup, vtable_ItemDragIconGroup_at_c, guest::cpu()->r[3]);
    destroy_animation(r0_1 - 0x28u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    destroy_animation(r0_1 - 0x50u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    destroy_animation(r0_1 - 0x78u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    DragIconGroup__virtual_0_0022c5d8(r0_1 - 0x1b8u);  // (from the original)
    return r0_1 - 0x1b8u;  // (from the original)
}

}  // namespace d_002cdd00
GUEST_EXPORT_FRAMED(0x002cdd00, d_002cdd00::ItemDragIconGroup__virtual_0_002cdd00, 0x4010);  // pushes {r4, lr} first, as the original

// f_002cdd40: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Adds the object's icon (+0x20) to the drag icon list.
namespace d_002cdd40 {

struct __attribute__((packed)) DragIconList {
    u8 unknown_0[0x20];  // (not used here)
    u32 word_20;
};
GUEST_OFFSET(DragIconList, word_20, 0x20);

inline constexpr guest::Function<0x004b6d74, u32(u32, u32)> DragIconList__add;

void DragIconList__add_own(gptr<DragIconList> drag_icon_list, u32 list) {
    DragIconList__add(list, drag_icon_list->word_20);
}

}  // namespace d_002cdd40
GUEST_EXPORT(0x002cdd40, d_002cdd40::DragIconList__add_own);

// f_002cdf30: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether the day's event counter of the current player is in progress (between 1 and 101); else forgets the event.
namespace d_002cdf30 {

inline constexpr u32 global_0095335c_address = 0x0095335cu;
inline constexpr u32 daily_event_id_address = 0x00953364u;
inline guest::global<u32, 0x00953364> daily_event_id;
inline constexpr guest::Function<0x002fb94c, u32(u32, u32, u32, u32)> get_current_player;
inline constexpr guest::Function<0x007159b0, u32(u32, u32)> player_counter_for_weekday;

u32 DailyEvent__is_active(u32 r0_unused, u32 r1) {
    u32 r0_1 = *daily_event_id;
    if (r0_1 + 1u != 0) {
        u32 player_2 = get_current_player(r0_1, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        if (player_2 != 0) {
            u32 player_counter_2 = player_counter_for_weekday(player_2 + 0x8ae0u, *daily_event_id);  // (from the original)
            r1 = guest::cpu()->r[1];
            if (player_counter_2 != 0 && player_counter_2 < 0x66u) {  // (from the original)
                return 1u;
            }
        }
        *daily_event_id = ~0u;
    }
    guest::cpu()->r[1] = r1;
    return 0u;
}

}  // namespace d_002cdf30
GUEST_EXPORT_FRAMED(0x002cdf30, d_002cdf30::DailyEvent__is_active, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_002ced34: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002ced34 {

struct __attribute__((packed)) Local_002ced34_r0_13 {
    u8 unknown_0[0xc5c];  // (not used here)
    u32 word_c5c;
    u32 word_c60;
    u32 word_c64;
    u32 word_c68;
    u8 unknown_c6c[0x4];  // (not used here)
    u32 word_c70;
    u32 word_c74;
    u32 word_c78;
    u32 word_c7c;
    u8 unknown_c80[0x5c];  // (not used here)
    u8 byte_cdc;
    u8 byte_cdd;
    u8 byte_cde;
    u8 byte_cdf;
    u32 word_ce0;
};
GUEST_OFFSET(Local_002ced34_r0_13, word_c5c, 0xc5c);
GUEST_OFFSET(Local_002ced34_r0_13, word_c60, 0xc60);
GUEST_OFFSET(Local_002ced34_r0_13, word_c64, 0xc64);
GUEST_OFFSET(Local_002ced34_r0_13, word_c68, 0xc68);
GUEST_OFFSET(Local_002ced34_r0_13, word_c70, 0xc70);
GUEST_OFFSET(Local_002ced34_r0_13, word_c74, 0xc74);
GUEST_OFFSET(Local_002ced34_r0_13, word_c78, 0xc78);
GUEST_OFFSET(Local_002ced34_r0_13, word_c7c, 0xc7c);
GUEST_OFFSET(Local_002ced34_r0_13, byte_cdc, 0xcdc);
GUEST_OFFSET(Local_002ced34_r0_13, byte_cdd, 0xcdd);
GUEST_OFFSET(Local_002ced34_r0_13, byte_cde, 0xcde);
GUEST_OFFSET(Local_002ced34_r0_13, byte_cdf, 0xcdf);
GUEST_OFFSET(Local_002ced34_r0_13, word_ce0, 0xce0);

struct __attribute__((packed)) Local_002ced34_r0_26 {
    u8 unknown_0[0x5c0];  // (not used here)
    u32 word_5c0;
    u8 byte_5c4;
};
GUEST_OFFSET(Local_002ced34_r0_26, word_5c0, 0x5c0);
GUEST_OFFSET(Local_002ced34_r0_26, byte_5c4, 0x5c4);

inline constexpr u32 vtable_ContentList = 0x008ebaccu;
inline constexpr u32 vtable_LifeSupportWindow_rec = 0x008f2a2cu;
inline constexpr u32 vtable_LifeSupportWindow_rec_at_24 = 0x008f2a60u;
inline constexpr u32 vtable_InOutWindowInButton_4_ = 0x008f3fbcu;
inline constexpr u32 vtable_LifeSupportExplainWindow = 0x008f6800u;
inline constexpr u32 vtable_state__Mode_LifeSupportWindow_ = 0x009081d8u;
inline guest::global<u32, 0x00879ea0> global_00879ea0;
inline guest::global<u32, 0x00879ea4> global_00879ea4;
inline constexpr guest::Function<0x001207d8, u32(u32, u32, u32)> ssys__ma__lyt__ArcResAcc__ArcResAcc_001207d8;
inline constexpr guest::Function<0x00125aec, u32(u32, u32)> construct_layout_animation;
inline constexpr guest::Function<0x001cb884, u32(u32)> InOutWindow__InOutWindow_001cb884;
inline constexpr guest::Function<0x002b7c68, u32(u32, u32, u32)> construct_animation_pair;
inline constexpr guest::Function<0x002bc928, u32(u32, u32, u32, u32)> SoPaCaWindowBase__SoPaCaWindowBase;
inline constexpr guest::Function<0x002f7604, u32(u32)> construct_button_action_control;
inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> for_each_element;
inline constexpr guest::Function<0x005d6fac, u32(u32, u32, u32)> script__RenderRuby__RenderRuby_005d6fac;
inline constexpr guest::Function<0x005e3128, u32(u32, u32, u32)> script__RenderTrace__RenderTrace;

u32 state__Mode_LifeSupportWindow___Mode(gptr<LifeSupportWindow_rec> life_support_window_rec) {
    life_support_window_rec->word_4 = 0;
    life_support_window_rec->byte_8 = 0;
    u32 r2_1 = *global_00879ea4;
    life_support_window_rec->word_c = *global_00879ea0;
    life_support_window_rec->word_10 = r2_1;
    life_support_window_rec->word_14 = 0;
    life_support_window_rec->vtable = vtable_state__Mode_LifeSupportWindow_;
    life_support_window_rec->byte_18 = 0;
    life_support_window_rec->word_1c = 0;
    life_support_window_rec->word_20 = 0;
    u32 so_pa_ca_window_base = (life_support_window_rec.addr() + 0x20u) + 4u;  // (from the original)
    SoPaCaWindowBase__SoPaCaWindowBase(so_pa_ca_window_base, vtable_state__Mode_LifeSupportWindow_, r2_1, life_support_window_rec.addr() + 0xcu);  // (from the original)
    life_support_window_rec->vtable = vtable_LifeSupportWindow_rec;
    life_support_window_rec->life_support_window_rec_vtable = vtable_LifeSupportWindow_rec_at_24;
    u32 r0_3 = ssys__ma__lyt__ArcResAcc__ArcResAcc_001207d8(so_pa_ca_window_base + 8u, vtable_LifeSupportWindow_rec, vtable_LifeSupportWindow_rec_at_24);
    u32 r0_5 = InOutWindow__InOutWindow_001cb884(r0_3 + 0x248u);  // (from the original)
    *gptr<u32>(r0_5) = vtable_InOutWindowInButton_4_;
    u32 r0_7 = for_each_element(r0_5 + 0x1b0u, 0x2b6de0u, 0xe0u, 4u);  // (from the original)
    u32 r0_8 = r0_7 + 0x380u;  // (from the original)
    construct_button_action_control(r0_8);
    u32 ea_2 = r0_8 - 0x530u;  // (from the original)
    *gptr<u32>(ea_2) = vtable_ContentList;
    u32 r0_10 = for_each_element(ea_2 + 0x614u, 0x1c79a8u, 0x188u, 4u);  // (from the original)
    u32 r0_11 = r0_10 + 0x620u;  // (from the original)
    construct_layout_animation(r0_11, guest::cpu()->r[1]);
    u32 ea_3 = r0_11 + 0x38u;  // (from the original)
    *gptr<u32>(ea_3) = 0;
    u32 r0_12 = ea_3 + 0x14u;  // (from the original)
    construct_animation_pair(r0_12, guest::cpu()->r[1], guest::cpu()->r[2]);
    gptr<Local_002ced34_r0_13> r0_13 = gptr<Local_002ced34_r0_13>(r0_12 - 0xc80u);  // (from the original)
    r0_13->word_ce0 = 0;
    r0_13->word_c5c = 0;
    r0_13->word_c70 = 0;
    r0_13->byte_cdc = 0;
    r0_13->word_c60 = 0;
    r0_13->word_c74 = 0;
    r0_13->byte_cdd = 0;
    r0_13->word_c64 = 0;
    r0_13->word_c78 = 0;
    r0_13->byte_cde = 0;
    r0_13->word_c68 = 0;
    r0_13->word_c7c = 0;
    r0_13->byte_cdf = 0;
    u32 r0_15 = InOutWindow__InOutWindow_001cb884(r0_13.addr() + 0xce4u);  // (from the original)
    *gptr<u32>(r0_15) = vtable_LifeSupportExplainWindow;
    u32 r0_16 = r0_15 + 0x1b0u;  // (from the original)
    construct_layout_animation(r0_16, vtable_LifeSupportExplainWindow);
    u32 ea_4 = r0_16 + 0x28u;  // (from the original)
    *gptr<u32>(ea_4) = 0;
    u32 r0_18 = script__RenderRuby__RenderRuby_005d6fac(ea_4 + 4u, 0x5eu, 0x1eu);  // (from the original)
    u32 r0_20 = script__RenderTrace__RenderTrace(r0_18 + 0x100u, 0x32u, guest::cpu()->r[2]);  // (from the original)
    u32 r0_22 = script__RenderRuby__RenderRuby_005d6fac(r0_20 + 0xc4u, 0xbcu, 0x3cu);  // (from the original)
    u32 r0_24 = script__RenderTrace__RenderTrace(r0_22 + 0x100u, 0x32u, 0x3cu);  // (from the original)
    u32 r0_25 = r0_24 + 0xc4u;  // (from the original)
    construct_animation_pair(r0_25, 0x32u, 0x3cu);  // (from the original)
    gptr<Local_002ced34_r0_26> r0_26 = gptr<Local_002ced34_r0_26>(r0_25 - 0x564u);  // (from the original)
    r0_26->word_5c0 = 0;
    r0_26->byte_5c4 = 0;
    u32 r0_27 = r0_26.addr() - 0xf58u;  // (from the original)
    *gptr<u8>(r0_27 + 0x1520u) = 0;  // (from the original)
    return r0_27;
}

}  // namespace d_002ced34
GUEST_EXPORT_FRAMED(0x002ced34, d_002ced34::state__Mode_LifeSupportWindow___Mode, 0x4010);  // pushes {r4, lr} first, as the original

// f_002ceee0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002ceee0 {

inline constexpr u32 vtable_ContentList = 0x008ebaccu;
inline constexpr u32 vtable_LifeSupportWindow_rec = 0x008f2a2cu;
inline constexpr u32 vtable_LifeSupportWindow_rec_at_24 = 0x008f2a60u;
inline constexpr u32 vtable_InOutWindowInButton_4_ = 0x008f3fbcu;
inline constexpr u32 vtable_LifeSupportExplainWindow = 0x008f6800u;
inline constexpr guest::Function<0x001cb8fc, u32(u32)> InOutWindow__destructor;
inline constexpr guest::Function<0x002b7c94, u32(u32, u32, u32, u32)> destroy_animation_pair;
inline constexpr guest::Function<0x002f76ad, u32(u32, u32, u32, u32)> destroy_array_elements;
inline constexpr guest::Function<0x002f7710, u32(u32)> destroy_button_action_control;
inline constexpr guest::Function<0x00567ef0, u32(u32)> ssys__ma__lyt__ArcResAccReader__destructor;
inline constexpr guest::Function<0x0056988c, u32(u32)> destroy_animation;
inline constexpr guest::Function<0x005d703c, u32(u32)> script__MsgEngine__MsgEngine_005d703c;
inline constexpr guest::Function<0x005e3194, u32(u32)> script__RenderMain__RenderMain_005e3194;

u32 LifeSupportWindow__virtual_0_002ceee0(gptr<LifeSupportWindow_rec> life_support_window_rec, u32 r1_unused, u32 r2_unused, u32 r3) {
    life_support_window_rec->vtable = vtable_LifeSupportWindow_rec;
    life_support_window_rec->life_support_window_rec_vtable = vtable_LifeSupportWindow_rec_at_24;
    life_support_window_rec->life_support_explain_window_vtable = vtable_LifeSupportExplainWindow;
    u32 r0_1 = (life_support_window_rec.addr() + 0x24u) + 0x1498u;  // (from the original)
    destroy_animation_pair(r0_1, vtable_LifeSupportExplainWindow, vtable_LifeSupportWindow_rec_at_24, r3);
    u32 r0_2 = r0_1 - 0xc4u;  // (from the original)
    script__RenderMain__RenderMain_005e3194(r0_2);
    u32 r0_3 = r0_2 - 0x100u;  // (from the original)
    script__MsgEngine__MsgEngine_005d703c(r0_3);
    u32 r0_4 = r0_3 - 0xc4u;  // (from the original)
    script__RenderMain__RenderMain_005e3194(r0_4);
    u32 r0_5 = r0_4 - 0x100u;  // (from the original)
    script__MsgEngine__MsgEngine_005d703c(r0_5);
    u32 r0_6 = r0_5 - 0x2cu;  // (from the original)
    destroy_animation(r0_6);
    u32 r0_8 = InOutWindow__destructor(r0_6 - 0x1b0u);  // (from the original)
    *gptr<u32>(r0_8 - 0xce4u) = vtable_ContentList;  // (from the original)
    u32 r0_9 = r0_8 - 0x64u;  // (from the original)
    destroy_animation_pair(r0_9, vtable_ContentList, guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_10 = r0_9 - 0x4cu;  // (from the original)
    destroy_animation(r0_10);
    u32 r4_1 = r0_10 - 0xc34u;  // (from the original)
    destroy_array_elements(r0_10 - 0x620u, 0x5e317cu, 0x188u, 4u);  // (from the original)
    *gptr<u32>(r4_1) = vtable_InOutWindowInButton_4_;
    u32 r0_12 = r4_1 + 0x530u;  // (from the original)
    destroy_button_action_control(r0_12);
    destroy_array_elements(r0_12 - 0x380u, 0x2b6ef8u, 0xe0u, 4u);  // (from the original)
    u32 r0_14 = InOutWindow__destructor(r0_12 - 0x530u);  // (from the original)
    u32 r0_16 = ssys__ma__lyt__ArcResAccReader__destructor(r0_14 - 0x248u);  // (from the original)
    return r0_16 - 0x2cu;  // (from the original)
}

}  // namespace d_002ceee0
GUEST_EXPORT_FRAMED(0x002ceee0, d_002ceee0::LifeSupportWindow__virtual_0_002ceee0, 0x4010);  // pushes {r4, lr} first, as the original

// f_002cf018: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Sets channel 0's buffer and size, and resets its progress, under the lock.
namespace d_002cf018 {

struct __attribute__((packed)) NetTransfer {
    u8 unknown_0[0x2c0];  // (not used here)
    u32 word_2c0;
    u8 unknown_2c4[0x8];  // (not used here)
    u32 word_2cc;
    u8 unknown_2d0[0x8];  // (not used here)
    u32 word_2d8;
};
GUEST_OFFSET(NetTransfer, word_2c0, 0x2c0);
GUEST_OFFSET(NetTransfer, word_2cc, 0x2cc);
GUEST_OFFSET(NetTransfer, word_2d8, 0x2d8);

inline constexpr guest::Function<0x00135748, u32(u32, u32, u32, u32)> RecursiveLock__lock;
inline constexpr guest::Function<0x001357ec, u32(u32, u32)> RecursiveLock__unlock;

void NetTransfer__set_channel_0(gptr<NetTransfer> net_transfer, u32 r1, u32 r2) {
    guest::StackFrame frame(0x18);  // the original's stack frame
    u32 lock = net_transfer.addr() + 8u;
    RecursiveLock__lock(lock, r1, r2, guest::cpu()->r[3]);
    net_transfer->word_2c0 = r1;
    net_transfer->word_2cc = r2;
    net_transfer->word_2d8 = 0;
    frame.release();
    RecursiveLock__unlock(lock, r1);
    return;
}

}  // namespace d_002cf018
GUEST_EXPORT(0x002cf018, d_002cf018::NetTransfer__set_channel_0);

// f_002cf050: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Sets channel 1's buffer and size, and resets its progress, under the lock.
namespace d_002cf050 {

struct __attribute__((packed)) NetTransfer {
    u8 unknown_0[0x2c4];  // (not used here)
    u32 word_2c4;
    u8 unknown_2c8[0x8];  // (not used here)
    u32 word_2d0;
    u8 unknown_2d4[0x8];  // (not used here)
    u32 word_2dc;
};
GUEST_OFFSET(NetTransfer, word_2c4, 0x2c4);
GUEST_OFFSET(NetTransfer, word_2d0, 0x2d0);
GUEST_OFFSET(NetTransfer, word_2dc, 0x2dc);

inline constexpr guest::Function<0x00135748, u32(u32, u32, u32, u32)> RecursiveLock__lock;
inline constexpr guest::Function<0x001357ec, u32(u32, u32)> RecursiveLock__unlock;

void NetTransfer__set_channel_1(gptr<NetTransfer> net_transfer, u32 r1, u32 r2) {
    guest::StackFrame frame(0x18);  // the original's stack frame
    u32 lock = net_transfer.addr() + 8u;
    RecursiveLock__lock(lock, r1, r2, guest::cpu()->r[3]);
    net_transfer->word_2c4 = r1;
    net_transfer->word_2d0 = r2;
    net_transfer->word_2dc = 0;
    frame.release();
    RecursiveLock__unlock(lock, r1);
    return;
}

}  // namespace d_002cf050
GUEST_EXPORT(0x002cf050, d_002cf050::NetTransfer__set_channel_1);

// f_002cf088: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Sets channel 2's buffer and size, and resets its progress, under the lock.
namespace d_002cf088 {

struct __attribute__((packed)) NetTransfer {
    u8 unknown_0[0x2c8];  // (not used here)
    u32 word_2c8;
    u8 unknown_2cc[0x8];  // (not used here)
    u32 word_2d4;
    u8 unknown_2d8[0x8];  // (not used here)
    u32 word_2e0;
};
GUEST_OFFSET(NetTransfer, word_2c8, 0x2c8);
GUEST_OFFSET(NetTransfer, word_2d4, 0x2d4);
GUEST_OFFSET(NetTransfer, word_2e0, 0x2e0);

inline constexpr guest::Function<0x00135748, u32(u32, u32, u32, u32)> RecursiveLock__lock;
inline constexpr guest::Function<0x001357ec, u32(u32, u32)> RecursiveLock__unlock;

void NetTransfer__set_channel_2(gptr<NetTransfer> net_transfer, u32 r1, u32 r2) {
    guest::StackFrame frame(0x18);  // the original's stack frame
    u32 lock = net_transfer.addr() + 8u;
    RecursiveLock__lock(lock, r1, r2, guest::cpu()->r[3]);
    net_transfer->word_2c8 = r1;
    net_transfer->word_2d4 = r2;
    net_transfer->word_2e0 = 0;
    frame.release();
    RecursiveLock__unlock(lock, r1);
    return;
}

}  // namespace d_002cf088
GUEST_EXPORT(0x002cf088, d_002cf088::NetTransfer__set_channel_2);

// f_002cf0c0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether the state (+0x2e4) has reached connected (10).
namespace d_002cf0c0 {

struct __attribute__((packed)) NetTransfer {
    u8 unknown_0[0x2e4];  // (not used here)
    u8 byte_2e4;
};
GUEST_OFFSET(NetTransfer, byte_2e4, 0x2e4);


u32 NetTransfer__is_connected(gptr<NetTransfer> net_transfer) {
    return net_transfer->byte_2e4 >= 0xau;  // (from the original)
}

}  // namespace d_002cf0c0
GUEST_EXPORT(0x002cf0c0, d_002cf0c0::NetTransfer__is_connected);

// f_002cf1a8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether the state (+0x2e4) has reached finished (13).
namespace d_002cf1a8 {

struct __attribute__((packed)) NetTransfer {
    u8 unknown_0[0x2e4];  // (not used here)
    u8 byte_2e4;
};
GUEST_OFFSET(NetTransfer, byte_2e4, 0x2e4);


u32 NetTransfer__is_finished(gptr<NetTransfer> net_transfer) {
    return net_transfer->byte_2e4 >= 0xdu;  // (from the original)
}

}  // namespace d_002cf1a8
GUEST_EXPORT(0x002cf1a8, d_002cf1a8::NetTransfer__is_finished);

// f_002cf87c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Destroys the transfer and clears the instance.
namespace d_002cf87c {

inline guest::global<u32, 0x00953568> global_00953568;
inline constexpr guest::Function<0x002f76ad, u32(u32, u32, u32, u32)> destroy_array_elements;

u32 NetTransferHolder__destroy(u32 net_transfer_holder) {
    destroy_array_elements(net_transfer_holder + 0x7cu, 0x2cf4c4u, 0x210u, 1u);  // (from the original)
    *global_00953568 = 0;
    guest::cpu()->r[1] = 0u;
    return net_transfer_holder;
}

}  // namespace d_002cf87c
GUEST_EXPORT_FRAMED(0x002cf87c, d_002cf87c::NetTransferHolder__destroy, 0x4010);  // pushes {r4, lr} first, as the original
