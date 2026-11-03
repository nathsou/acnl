// Functions decompiled by tools/decomp (docs/decomp.md), each proved equal to the recompiled original (prove-cpp). The
// names come from games/acnl/names (tools/decomp/names.py); the others are generated (d_<address>::f_<address>,
// Object_<address>_<argument>, word_<offset>) and still to be chosen.
#include "guest/guest.hpp"
#include "graphics/hemisphere_light.hpp"
#include "recovered/structs.hpp"

#include <bit>

using guest::gptr;

// f_004f027c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004f027c {

inline constexpr guest::Function<0x004ed26c, u32(u32, u32, u32, u32)> g3d__FragmentLight__virtual_5;
inline constexpr guest::Function<0x004ee2b0, u32(u32, u32)> PositionSetter__set_position;

struct __attribute__((packed)) Frame_004f027c {
    float float_0;
    float float_4;
    float float_8;
    u8 unknown_c[0x4];  // (not read or written by name)
};
GUEST_OFFSET(Frame_004f027c, float_0, 0x0);
GUEST_OFFSET(Frame_004f027c, float_4, 0x4);
GUEST_OFFSET(Frame_004f027c, float_8, 0x8);
GUEST_SIZE(Frame_004f027c, 0x10);

u32 g3d__PointFragmentLight__virtual_5(gptr<g3d__PointFragmentLight> point_fragment_light, u32 r1, float S0) {
    guest::StackFrameOf<Frame_004f027c> frame;  // the original's stack frame
    u32 r0_1 = g3d__FragmentLight__virtual_5(point_fragment_light.addr(), r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0_1 == 0) {
        return r0_1;
    }
    float S0_2 = 0.0f;
    *gptr<u32>(point_fragment_light->word_114 + 0xb8u) = 1;  // (from the original)
    frame->float_0 = S0_2;
    frame->float_4 = S0_2;
    frame->float_8 = S0_2;
    guest::cpu()->s[0] = S0_2;
    PositionSetter__set_position(point_fragment_light.addr(), frame.at(0).addr());
    return 1u;
}

}  // namespace d_004f027c
GUEST_EXPORT_FRAMED(0x004f027c, d_004f027c::g3d__PointFragmentLight__virtual_5, 0x4010);  // pushes {r4, lr} first, as the original

// f_004f0310: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Points the camera at its alternative target, marks the mode on and saves and sets the friend list's flag.
namespace d_004f0310 {

inline constexpr u32 camera_manager_address = 0x0094edd8u;
inline guest::global<u32, 0x0094edd8> camera_manager;
inline guest::global<u8, 0x00952a20> photo_mode_active;
inline guest::global<u8, 0x00952a21> global_00952a21;
inline constexpr guest::Function<0x0024ebc0, u32(u32)> read_u32_0x009529c8_;

u32 Camera__enter_photo_mode() {
    u32 r0_1 = *camera_manager;
    if (r0_1 != 0) {
        *gptr<u32>(r0_1 + 0x1a8u) = r0_1 + 0x300u;  // (from the original)
    }
    *photo_mode_active = 1;
    u32 r0_2 = read_u32_0x009529c8_(1u);
    u32 r0_3 = *gptr<u8>(r0_2 + 0x168u);  // (from the original)
    *global_00952a21 = u8(r0_3);
    u32 r0_4 = read_u32_0x009529c8_(r0_3);
    *gptr<u8>(r0_4 + 0x168u) = 1;  // (from the original)
    guest::cpu()->r[1] = 1u;
    return r0_4;
}

}  // namespace d_004f0310
GUEST_EXPORT_FRAMED(0x004f0310, d_004f0310::Camera__enter_photo_mode, 0x4010);  // pushes {r4, lr} first, as the original

// f_004f0568: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The scene environment's light of the index when it is enabled and visible, or null.
namespace d_004f0568 {

inline guest::global<u32, 0x00952a40> global_00952a40;

u32 SceneEnv__light_if_enabled(u32 scene_env) {
    u32 r1_1 = 0u;
    u32 ea_1 = *gptr<u32>(*global_00952a40 + 8u) + 0x40u;  // (from the original)
    u32 r3_1 = *gptr<u32>(ea_1);
    u32 r2_1 = r3_1 == 0 ? r1_1 : ea_1 + r3_1;
    if (r2_1 == 0) {
        r1_1 = 0u;
    } else {
        u32 ea_2 = r2_1 + (scene_env << 4) + 0x28u;  // (from the original)
        u32 r2_2 = *gptr<u32>(ea_2);
        if (r2_2 != 0) {
            r1_1 = r2_2 + ea_2;
        }
    }
    if (r1_1 == 0) {
        return 0u;
    }
    if ((0x80000002u & ~*gptr<u32>(r1_1)) == 0) {  // (from the original)
        return r1_1;
    }
    return 0u;
}

}  // namespace d_004f0568
GUEST_EXPORT(0x004f0568, d_004f0568::SceneEnv__light_if_enabled);

// f_004f05cc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Sets the scene environment's value 0x107.
namespace d_004f05cc {

inline constexpr u32 scene_environment_address = 0x00952a38u;
inline guest::global<u32, 0x00952a38> scene_environment;
inline constexpr guest::Function<0x00495474, u32(u32, u32, u32, u32)> SceneEnv__set_value;

u32 SceneEnv__set_value_107(u32 scene_env) {
    return SceneEnv__set_value(*scene_environment, 0x107u, scene_env, guest::cpu()->r[3]);  // (from the original)
}

}  // namespace d_004f05cc
GUEST_EXPORT(0x004f05cc, d_004f05cc::SceneEnv__set_value_107);

// f_004f0818: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004f0818 {

struct __attribute__((packed)) Local_004f0818_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_004f0818_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_004f0818_ea_1, word_4, 0x4);
GUEST_OFFSET(Local_004f0818_ea_1, word_8, 0x8);

struct __attribute__((packed)) Local_004f0818_ea_3 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_004f0818_ea_3, word_0, 0x0);
GUEST_OFFSET(Local_004f0818_ea_3, word_4, 0x4);

inline constexpr guest::Function<0x004ed26c, u32(u32, u32, u32, u32)> g3d__FragmentLight__virtual_5;
inline constexpr guest::Function<0x0056a378, u32(u32)> normalize;

struct __attribute__((packed)) Frame_004f0818 {
    float float_0;
    float float_4;
    float float_8;
    u8 unknown_c[0x4];  // (not read or written by name)
};
GUEST_OFFSET(Frame_004f0818, float_0, 0x0);
GUEST_OFFSET(Frame_004f0818, float_4, 0x4);
GUEST_OFFSET(Frame_004f0818, float_8, 0x8);
GUEST_SIZE(Frame_004f0818, 0x10);

u32 g3d__DirectionalFragmentLight__virtual_5(gptr<g3d__DirectionalFragmentLight> directional_fragment_light, u32 r1, u32 r2, u32 r3, float S0, float S1) {
    guest::StackFrameOf<Frame_004f0818> frame;  // the original's stack frame
    u32 r0_1 = g3d__FragmentLight__virtual_5(directional_fragment_light.addr(), r1, r2, r3);
    if (r0_1 == 0) {
        return r0_1;
    }
    float S0_2 = -0.40824828f;
    float S1_2 = -0.81649655f;
    *gptr<u32>(directional_fragment_light->word_114 + 0xb8u) = 0;  // (from the original)
    frame->float_0 = S0_2;
    frame->float_4 = S1_2;
    frame->float_8 = S0_2;
    guest::cpu()->s[0] = S0_2;
    guest::cpu()->s[1] = S1_2;
    normalize(frame.at(0).addr());
    u32 r0_3 = directional_fragment_light->word_118;
    gptr<Local_004f0818_ea_1> ea_1 = gptr<Local_004f0818_ea_1>(frame.at(0).addr());
    u32 r1_2 = ea_1->word_0;
    u32 r2_1 = ea_1->word_4;
    u32 r3_1 = ea_1->word_8;
    *gptr<u32>(r0_3 + 0x17cu) = r1_2;  // (from the original)
    gptr<Local_004f0818_ea_3> ea_3 = gptr<Local_004f0818_ea_3>(r0_3 + 0x180u);  // (from the original)
    ea_3->word_0 = r2_1;
    ea_3->word_4 = r3_1;
    guest::cpu()->r[1] = r1_2;
    return 1u;
}

}  // namespace d_004f0818
GUEST_EXPORT_FRAMED(0x004f0818, d_004f0818::g3d__DirectionalFragmentLight__virtual_5, 0x4010);  // pushes {r4, lr} first, as the original

// f_004f0b90: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Creates the fog with a white color and a linear range (10 to 1000).
namespace d_004f0b90 {

struct __attribute__((packed)) Local_004f0b90_r0_5 {
    float float_0;
    float float_4;
    float float_8;
    float float_c;
};
GUEST_OFFSET(Local_004f0b90_r0_5, float_0, 0x0);
GUEST_OFFSET(Local_004f0b90_r0_5, float_4, 0x4);
GUEST_OFFSET(Local_004f0b90_r0_5, float_8, 0x8);
GUEST_OFFSET(Local_004f0b90_r0_5, float_c, 0xc);

struct __attribute__((packed)) Local_004f0b90_r0_6 {
    u32 word_0;
    u32 word_4;
    float float_8;
    float float_c;
};
GUEST_OFFSET(Local_004f0b90_r0_6, word_0, 0x0);
GUEST_OFFSET(Local_004f0b90_r0_6, word_4, 0x4);
GUEST_OFFSET(Local_004f0b90_r0_6, float_8, 0x8);
GUEST_OFFSET(Local_004f0b90_r0_6, float_c, 0xc);

struct __attribute__((packed)) Local_004f0b90_r3_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_004f0b90_r3_1, word_0, 0x0);
GUEST_OFFSET(Local_004f0b90_r3_1, word_4, 0x4);

inline guest::global<u32, 0x004f0c3c> global_004f0c3c;
inline constexpr guest::Function<0x004a455c, u32(u32, u32, u32, u32)> nw__gfx__Fog__Fog_004a455c;
inline constexpr guest::Function<0x004f000c, u32(u32, u32, u32, u32)> SceneEnv__default_fog;

struct __attribute__((packed)) Frame_004f0b90 {
    u8 byte_0;
    u8 byte_1;
    u8 unknown_2[0x2];  // (not read or written by name)
    u32 word_4;
    u8 unknown_8[0xc];  // (not read or written by name)
};
GUEST_OFFSET(Frame_004f0b90, byte_0, 0x0);
GUEST_OFFSET(Frame_004f0b90, byte_1, 0x1);
GUEST_OFFSET(Frame_004f0b90, word_4, 0x4);
GUEST_SIZE(Frame_004f0b90, 0x14);

u32 Fog__create(u32 fog, u32 r1, u32 r2, u32 r3, float S0) {
    guest::StackFrameOf<Frame_004f0b90> frame;  // the original's stack frame
    if (r1 == 0) {
        u32 r0_1 = SceneEnv__default_fog(fog, r1, r2, r3);
        S0 = guest::cpu()->s[0];
        r1 = r0_1;
    }
    gptr<Local_004f0b90_r3_1> r3_1 = gptr<Local_004f0b90_r3_1>(frame.at(8).addr());
    frame->byte_0 = 1;
    frame->byte_1 = 1;
    frame->word_4 = 0;
    r3_1->word_0 = 0;
    r3_1->word_4 = 1;
    guest::cpu()->s[0] = S0;
    u32 r0_3 = nw__gfx__Fog__Fog_004a455c(frame.at(0).addr(), r1, 0u, r3_1.addr());
    u32 r0_4 = *gptr<u32>(r0_3 + 8u);
    float S0_1 = 1.0f;
    *gptr<u32>(fog + 8u) = r0_4;
    gptr<Local_004f0b90_r0_5> r0_5 = gptr<Local_004f0b90_r0_5>(r0_4 + 0xb4u);  // (from the original)
    r0_5->float_0 = S0_1;
    r0_5->float_4 = S0_1;
    r0_5->float_8 = S0_1;
    r0_5->float_c = S0_1;
    float S0_2 = 10.0f;
    u32 ea_3 = *gptr<u32>(fog + 8u) + 0xc8u;  // (from the original)
    u32 r2_1 = *gptr<u32>(ea_3);
    gptr<Local_004f0b90_r0_6> r0_6 = gptr<Local_004f0b90_r0_6>(r2_1 == 0 ? 0u : ea_3 + r2_1);
    r0_6->word_0 = 1;
    r0_6->float_c = S0_2;
    r0_6->word_4 = *global_004f0c3c;
    float S0_3 = 1000.0f;
    r0_6->float_8 = S0_3;
    *gptr<u32>(fog + 4u) = r0_3;
    guest::cpu()->r[1] = r0_3;
    guest::cpu()->s[0] = S0_3;
    return 1u;
}

}  // namespace d_004f0b90
GUEST_EXPORT_FRAMED(0x004f0b90, d_004f0b90::Fog__create, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_004f0c4c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004f0c4c {

inline constexpr guest::Function<0x004ee4b8, u32(u32, u32, u32, u32)> escape__MapFogModel__virtual_2;

u32 g3d__Fog__virtual_2() {
    return escape__MapFogModel__virtual_2(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_004f0c4c
GUEST_EXPORT(0x004f0c4c, d_004f0c4c::g3d__Fog__virtual_2);

// f_004f0de0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Resets the model's two animation results.
namespace d_004f0de0 {

struct __attribute__((packed)) Model {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
};
GUEST_OFFSET(Model, word_4, 0x4);

inline constexpr guest::Function<0x0048b4dc, u32(u32, u32, u32, u32)> nw__anim__AnimResult__AnimResult;

u32 Model__reset_anim_results(gptr<Model> model, u32 r1) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 r0_1 = *gptr<u32>(model->word_4 + 0x28u);  // (from the original)
    if (r0_1 == 0) {
        return r0_1;
    }
    nw__anim__AnimResult__AnimResult(r0_1, 0u, guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_2 = *gptr<u32>(model->word_4 + 0x28u);  // (from the original)
    frame.release();
    return nw__anim__AnimResult__AnimResult(r0_2, 1u, guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_004f0de0
GUEST_EXPORT(0x004f0de0, d_004f0de0::Model__reset_anim_results);

// f_004f0eb8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Sorts the model's draw entries by address and stores them as relative offsets.
namespace d_004f0eb8 {

struct __attribute__((packed)) Local_004f0eb8_r1_1 {
    u8 unknown_0[0x8];  // (not used here)
    u32 word_8;
    u8 unknown_c[0x164];  // (not used here)
    u32 word_170;
    u32 word_174;
};
GUEST_OFFSET(Local_004f0eb8_r1_1, word_8, 0x8);
GUEST_OFFSET(Local_004f0eb8_r1_1, word_170, 0x170);
GUEST_OFFSET(Local_004f0eb8_r1_1, word_174, 0x174);

struct __attribute__((packed)) Local_004f0eb8_r3_1 {
    u32 word_0;
};
GUEST_OFFSET(Local_004f0eb8_r3_1, word_0, 0x0);

inline constexpr guest::Function<0x004f0f80, u32(u32, u32, u32, u32)> collect_entries;

void Model__sort_draw_entries(gptr<g3d__Model> model, u32 r1_unused, u32 r2_unused, u32 r3) {
    guest::StackFrame frame(0x104);  // the original's stack frame
    u32 r0 = model.addr();
    u32 r5 = 0u;
    gptr<Local_004f0eb8_r1_1> r1_1 = gptr<Local_004f0eb8_r1_1>(model->word_4);
    u32 r2_1 = r1_1->word_174;
    u32 r4 = r1_1->word_170;
    if (r4 == r2_1) {
        u32 ea_1 = r1_1->word_8 + 0xb8u;  // (from the original)
        r2_1 = *gptr<u32>(ea_1);
        r4 = r2_1 == 0 ? r5 : r2_1 + ea_1;
    }
    r0 = collect_entries(r0, frame.at(0).addr(), r2_1, r3);
    r3 = guest::cpu()->r[3];
    u32 r1 = frame.at(0).addr();
    u32 r2 = 0u;
    if (s32(r0) > 0) {
        do {
            u32 r7 = r2 + 1u;
            u32 r6 = r0 - r7;
            if (r6 != 0 && s32(r6) >= 0) {
                r3 = 0u;
            }
            if (s32(r6) > 0) {
                do {
                    u32 r12_1 = r7 + r3;
                    u32 r8_1 = gptr<u32>(r1)[r2];
                    u32 r9_1 = gptr<u32>(r1)[r12_1];
                    r3 += 1u;
                    if (r8_1 > r9_1) {
                        *gptr<u32>(r1 + (r2 << 2)) = r9_1;
                        *gptr<u32>(r1 + (r12_1 << 2)) = r8_1;
                    }
                    r6 -= 1u;
                    guest::preempt();
                } while (r6 != 0);
            }
            r2 += 1u;
            guest::preempt();
        } while (s32(r0) > s32(r2));
    }
    r2 = 0u;
    if (s32(r0) > 0) {
        do {
            u32 r12_2 = gptr<u32>(r1)[r2];
            gptr<Local_004f0eb8_r3_1> r3_1 = gptr<Local_004f0eb8_r3_1>(r4 + (r2 << 2));
            r2 += 1u;
            if (r12_2 == 0) {
                r3_1->word_0 = r5;
            } else {
                r3_1->word_0 = r12_2 - r3_1.addr();
            }
            guest::preempt();
        } while (s32(r2) < s32(r0));
    }
    guest::cpu()->r[1] = r1;
}

}  // namespace d_004f0eb8
GUEST_EXPORT_FRAMED(0x004f0eb8, d_004f0eb8::Model__sort_draw_entries, 0x43f0);  // pushes {r4, r5, r6, r7, r8, r9, lr} first, as the original

// f_004f0f80: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004f0f80 {

struct __attribute__((packed)) Local_004f0f80_r0_1 {
    u8 unknown_0[0x8];  // (not used here)
    u32 word_8;
    u8 unknown_c[0x164];  // (not used here)
    u32 word_170;
    u32 word_174;
};
GUEST_OFFSET(Local_004f0f80_r0_1, word_8, 0x8);
GUEST_OFFSET(Local_004f0f80_r0_1, word_170, 0x170);
GUEST_OFFSET(Local_004f0f80_r0_1, word_174, 0x174);

struct __attribute__((packed)) Local_004f0f80_r0_2 {
    u8 unknown_0[0xb4];  // (not used here)
    u32 word_b4;
    u32 word_b8;
};
GUEST_OFFSET(Local_004f0f80_r0_2, word_b4, 0xb4);
GUEST_OFFSET(Local_004f0f80_r0_2, word_b8, 0xb8);

struct __attribute__((packed)) Local_004f0f80_r2_2 {
    u8 unknown_0[0x8];  // (not used here)
    u32 word_8;
    u8 unknown_c[0x164];  // (not used here)
    u32 word_170;
    u32 word_174;
};
GUEST_OFFSET(Local_004f0f80_r2_2, word_8, 0x8);
GUEST_OFFSET(Local_004f0f80_r2_2, word_170, 0x170);
GUEST_OFFSET(Local_004f0f80_r2_2, word_174, 0x174);


u32 collect_entries(gptr<g3d__Model> model, u32 r1) {
    u32 r0 = model.addr();
    gptr<Local_004f0f80_r0_1> r0_1 = gptr<Local_004f0f80_r0_1>(model->word_4);
    u32 r5 = 0u;
    u32 r2_1 = r0_1->word_174;
    u32 r12_1 = r0_1->word_170;
    if (r12_1 == r2_1) {
        gptr<Local_004f0f80_r0_2> r0_2 = gptr<Local_004f0f80_r0_2>(r0_1->word_8);
        u32 r12_2 = r0_2->word_b8;
        r12_1 = r12_2 == 0 ? r5 : r12_2 + (r0_2.addr() + 0xb8u);  // (from the original)
        r2_1 = r12_1 + (r0_2->word_b4 << 2);
    }
    gptr<Local_004f0f80_r2_2> r2_2 = gptr<Local_004f0f80_r2_2>(*gptr<u32>(r0 + 4u));
    r0 = (r2_1 - r12_1) >> 2;
    u32 r3 = r2_2->word_170;
    if (r3 == r2_2->word_174) {
        u32 ea_1 = r2_2->word_8 + 0xb8u;  // (from the original)
        u32 r3_1 = *gptr<u32>(ea_1);
        r3 = r3_1 == 0 ? r5 : r3_1 + ea_1;
    }
    u32 r2 = 0u;
    if (s32(r0) <= 0) {
        return r0;
    }
    do {
        u32 r12_3 = r3 + (r2 << 2);
        u32 r4_1 = *gptr<u32>(r12_3);
        *gptr<u32>(r1 + (r2 << 2)) = r4_1 == 0 ? r5 : r12_3 + r4_1;
        r2 += 1u;
        guest::preempt();
    } while (s32(r2) < s32(r0));
    return r0;
}

}  // namespace d_004f0f80
GUEST_EXPORT_FRAMED(0x004f0f80, d_004f0f80::collect_entries, 0x30);  // pushes {r4, r5} first, as the original

// f_004f1164: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Sets the value of the model's current animation member at its frame.
namespace d_004f1164 {

struct __attribute__((packed)) Model {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
};
GUEST_OFFSET(Model, word_4, 0x4);

struct __attribute__((packed)) Object_004f1164_1 {
    u8 unknown_0[0x8];  // (not used here)
    float float_8;
};
GUEST_OFFSET(Object_004f1164_1, float_8, 0x8);

struct __attribute__((packed)) Local_004f1164_ea_1 {
    u32 word_0;
    u8 unknown_4[0x128];  // (not used here)
    u32 word_12c;
};
GUEST_OFFSET(Local_004f1164_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_004f1164_ea_1, word_12c, 0x12c);

struct __attribute__((packed)) Local_004f1164_r0_2 {
    u8 unknown_0[0xc];  // (not used here)
    u32 word_c;
    u32 word_10;
    u8 unknown_14[0x8];  // (not used here)
    u32 word_1c;
    u8 unknown_20[0x8];  // (not used here)
    u32 word_28;
};
GUEST_OFFSET(Local_004f1164_r0_2, word_c, 0xc);
GUEST_OFFSET(Local_004f1164_r0_2, word_10, 0x10);
GUEST_OFFSET(Local_004f1164_r0_2, word_1c, 0x1c);
GUEST_OFFSET(Local_004f1164_r0_2, word_28, 0x28);


u32 Model__set_anim_frame_value(gptr<Model> model, gptr<Object_004f1164_1> arg1) {
    u32 r2_1 = model->word_4;
    float S0_1 = arg1->float_8;
    u32 r0_1 = *gptr<u32>(r2_1 + 0x150u);  // (from the original)
    if (r0_1 == 0) {
        guest::cpu()->r[1] = arg1.addr();
        guest::cpu()->s[0] = S0_1;
        return r0_1;
    }
    gptr<Local_004f1164_ea_1> ea_1 = gptr<Local_004f1164_ea_1>(r2_1 + 0x28u);  // (from the original)
    gptr<Local_004f1164_r0_2> r0_2 = gptr<Local_004f1164_r0_2>(ea_1->word_0);
    u32 r1_1 = ea_1->word_12c;
    if (s32(r1_1) < 0) {
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->s[0] = S0_1;
        return r0_2.addr();
    }
    u32 b_2 = s32(r0_2->word_10 - r0_2->word_c) >> 2;
    if (s32(r1_1) >= s32(b_2)) {
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->s[0] = S0_1;
        return r0_2.addr();
    }
    u32 r2_2 = r0_2->word_28;
    if (s32(r2_2) <= 0) {
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->s[0] = S0_1;
        return r0_2.addr();
    }
    u32 r1_2 = r1_1 * r2_2;
    u32 r0_3 = r0_2->word_1c + (r1_2 << 2);
    *gptr<u32>(r0_3) = std::bit_cast<u32>(S0_1);
    guest::cpu()->r[1] = r1_2;
    guest::cpu()->s[0] = S0_1;
    return r0_3;
}

}  // namespace d_004f1164
GUEST_EXPORT(0x004f1164, d_004f1164::Model__set_anim_frame_value);

// f_004f1270: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004f1270 {

inline constexpr guest::Function<0x004ee39c, u32(u32, u32, u32, u32)> Camera__virtual_3;
inline constexpr guest::Function<0x004f0eb8, u32(u32, u32, u32, u32)> Model__sort_draw_entries;

u32 model_virtual_3(gptr<g3d__Model> model) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    if (model->word_4 != 0) {
        Model__sort_draw_entries(model.addr(), guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    }
    frame.release();
    return Camera__virtual_3(model.addr(), guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_004f1270
GUEST_EXPORT(0x004f1270, d_004f1270::model_virtual_3);

// f_004f14ac: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004f14ac {

inline constexpr guest::Function<0x004ee514, u32(u32, u32)> set_base_vtable_004ee514;

u32 g3d__Model__destructor() {
    return set_base_vtable_004ee514(guest::cpu()->r[0], guest::cpu()->r[1]);
}

}  // namespace d_004f14ac
GUEST_EXPORT(0x004f14ac, d_004f14ac::g3d__Model__destructor);

// f_004f1510: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The index of the named material in the model's dictionary, or -1.
namespace d_004f1510 {

struct __attribute__((packed)) ResModel {
    u8 unknown_0[0xe0];  // (not used here)
    u32 word_e0;
};
GUEST_OFFSET(ResModel, word_e0, 0xe0);

inline constexpr guest::Function<0x002fa9d0, u32(u32, u32, u32)> string_length;
inline constexpr guest::Function<0x00736a1c, u32(u32, u32, u32)> ResDic__find;

struct __attribute__((packed)) Frame_004f1510 {
    u32 word_0;
};
GUEST_OFFSET(Frame_004f1510, word_0, 0x0);
GUEST_SIZE(Frame_004f1510, 0x4);

u32 ResModel__material_index(gptr<ResModel> res_model, u32 name, u32 r2_unused, u32 r3) {
    guest::StackFrameOf<Frame_004f1510> frame;  // the original's stack frame
    frame->word_0 = r3;
    u32 r2_1 = 0u;
    u32 r3_1 = res_model->word_e0;
    u32 ea_2 = (r3_1 == 0 ? r2_1 : (res_model.addr() + 0xe0u) + r3_1) + 0x1cu;  // (from the original)
    u32 r3_2 = *gptr<u32>(ea_2);
    if (r3_2 != 0) {
        r2_1 = r3_2 + ea_2;
    }
    frame->word_0 = r2_1;
    if (r2_1 != 0 && name != 0) {
        u32 length_2 = string_length(name, name, r2_1);
        u32 entry_3 = ResDic__find(frame.at(0).addr(), name, length_2);
        name = guest::cpu()->r[1];
        if (entry_3 != 0) {
            u32 r1_1 = frame->word_0;
            guest::cpu()->r[1] = r1_1;
            return s32(entry_3 - r1_1 - 0x1cu) >> 4;  // (from the original)
        }
    }
    guest::cpu()->r[1] = name;
    return ~0u;
}

}  // namespace d_004f1510
GUEST_EXPORT_FRAMED(0x004f1510, d_004f1510::ResModel__material_index, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_004f1648: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Sets the named material's color (or one of its texture coordinates) from the values.
namespace d_004f1648 {

struct __attribute__((packed)) ResModel {
    u8 unknown_0[0xc0];  // (not used here)
    u32 word_c0;
};
GUEST_OFFSET(ResModel, word_c0, 0xc0);

struct __attribute__((packed)) Local_004f1648_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_004f1648_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_004f1648_ea_1, word_4, 0x4);
GUEST_OFFSET(Local_004f1648_ea_1, word_8, 0x8);

struct __attribute__((packed)) Local_004f1648_r4_1 {
    float float_0;
    float float_4;
};
GUEST_OFFSET(Local_004f1648_r4_1, float_0, 0x0);
GUEST_OFFSET(Local_004f1648_r4_1, float_4, 0x4);

inline constexpr guest::Function<0x002fa9d0, u32(u32, u32, u32, u32)> string_length;
inline constexpr guest::Function<0x004f2b8c, u32(u32, u32, u32, u32)> Material__get_value_of_kind;
inline constexpr guest::Function<0x004f2c10, u32(u32, u32, u32, u32)> Material__set_value_of_kind;
inline constexpr guest::Function<0x00736a1c, u32(u32, u32, u32)> ResDic__find;

struct __attribute__((packed)) Frame_004f1648 {
    u32 word_0;
    float float_4;
    float float_8;
    float float_c;
    u8 unknown_10[0x4];  // (not read or written by name)
};
GUEST_OFFSET(Frame_004f1648, word_0, 0x0);
GUEST_OFFSET(Frame_004f1648, float_4, 0x4);
GUEST_OFFSET(Frame_004f1648, float_8, 0x8);
GUEST_OFFSET(Frame_004f1648, float_c, 0xc);
GUEST_SIZE(Frame_004f1648, 0x14);

u32 ResModel__set_material_color(gptr<ResModel> res_model, u32 r1, u32 r2, u32 r3, float S0, float S1) {
    guest::StackFrameOf<Frame_004f1648> frame;  // the original's stack frame
    u32 r0_4 = 0;
    u32 r11_1 = 0u;
    gptr<Local_004f1648_ea_1> ea_1 = gptr<Local_004f1648_ea_1>(frame.at(0x38).addr());  // (from the original)
    u32 r5_1 = ea_1->word_0;
    u32 r6_1 = ea_1->word_4;
    u32 r7_1 = ea_1->word_8;
    u32 r2_1 = res_model->word_c0;
    u32 r0_1 = r2_1 == 0 ? r11_1 : (res_model.addr() + 0xc0u) + r2_1;  // (from the original)
    frame->word_0 = r0_1;
    if (r0_1 != 0 && r1 != 0) {
        u32 length_2 = string_length(r1, r1, r2_1, r3);
        u32 entry_3 = ResDic__find(frame.at(0).addr(), r1, length_2);
        r1 = guest::cpu()->r[1];
        S0 = guest::cpu()->s[0];
        S1 = guest::cpu()->s[1];
        if (entry_3 != 0) {
            u32 ea_3 = entry_3 + 0xcu;  // (from the original)
            r1 = *gptr<u32>(ea_3);
            if (r1 != 0) {
                r11_1 = r1 + ea_3;
            }
        } else {
            r11_1 = 0u;
        }
    } else {
        r11_1 = 0u;
    }
    if (r11_1 == 0) {
        r0_4 = 0u;
    } else {
        gptr<Local_004f1648_r4_1> r4_1 = gptr<Local_004f1648_r4_1>(frame.at(8).addr());
        float S0_2 = 0.0f;
        float S1_2 = 1.0f;
        frame->word_0 = std::bit_cast<u32>(S0_2);
        frame->float_4 = S0_2;
        r4_1->float_0 = S0_2;
        r4_1->float_4 = S1_2;
        guest::cpu()->s[0] = S0_2;
        guest::cpu()->s[1] = S1_2;
        Material__get_value_of_kind(frame.at(0).addr(), r11_1, r2, r11_1);
        u32 r3_2 = guest::cpu()->r[3];
        float S1_3 = guest::cpu()->s[1];
        float S0_3 = 0.003921569f;
        if (r3 < 0x100u) {  // (from the original)
            S1_3 = float(s32(r3)) * S0_3;
            frame->word_0 = std::bit_cast<u32>(S1_3);
        }
        if (r5_1 < 0x100u) {  // (from the original)
            S1_3 = float(s32(r5_1)) * S0_3;
            frame->float_4 = S1_3;
        }
        if (r6_1 < 0x100u) {  // (from the original)
            S1_3 = float(s32(r6_1)) * S0_3;
            frame->float_8 = S1_3;
        }
        if (r7_1 < 0x100u) {  // (from the original)
            S1_3 = float(s32(r7_1));
            S0_3 = S1_3 * S0_3;
            frame->float_c = S0_3;
        }
        guest::cpu()->s[0] = S0_3;
        guest::cpu()->s[1] = S1_3;
        Material__set_value_of_kind(r3_2, frame.at(0).addr(), r2, r3_2);
        r1 = guest::cpu()->r[1];
        S0 = guest::cpu()->s[0];
        S1 = guest::cpu()->s[1];
        r0_4 = 1u;
    }
    guest::cpu()->r[1] = r1;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return r0_4;
}

}  // namespace d_004f1648
GUEST_EXPORT_FRAMED(0x004f1648, d_004f1648::ResModel__set_material_color, 0x4ff0);  // pushes {r4, r5, r6, r7, r8, r9, r10, r11, lr} first, as the original

// f_004f1b64: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Sets the material's color to the value in all four channels.
namespace d_004f1b64 {

inline constexpr guest::Function<0x004f1918, u32(u32, u32)> ResModel__set_color_all;

struct __attribute__((packed)) Frame_004f1b64 {
    float float_0;
    float float_4;
    float float_8;
    float float_c;
    u8 unknown_10[0x4];  // (not read or written by name)
};
GUEST_OFFSET(Frame_004f1b64, float_0, 0x0);
GUEST_OFFSET(Frame_004f1b64, float_4, 0x4);
GUEST_OFFSET(Frame_004f1b64, float_8, 0x8);
GUEST_OFFSET(Frame_004f1b64, float_c, 0xc);
GUEST_SIZE(Frame_004f1b64, 0x14);

u32 Material__set_color_all(float S0) {
    guest::StackFrameOf<Frame_004f1b64> frame;  // the original's stack frame
    frame->float_c = S0;
    frame->float_8 = S0;
    frame->float_4 = S0;
    frame->float_0 = S0;
    guest::cpu()->s[0] = S0;
    ResModel__set_color_all(guest::cpu()->r[0], frame.at(0).addr());
    return guest::cpu()->r[0];
}

}  // namespace d_004f1b64
GUEST_EXPORT_FRAMED(0x004f1b64, d_004f1b64::Material__set_color_all, 0x4000);  // pushes {lr} first, as the original

// f_004f1cdc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Sets the material's second color to the value in all four channels.
namespace d_004f1cdc {

inline constexpr guest::Function<0x004f1b8c, u32(u32, u32)> ResModel__set_color_b_all;

struct __attribute__((packed)) Frame_004f1cdc {
    float float_0;
    float float_4;
    float float_8;
    float float_c;
    u8 unknown_10[0x4];  // (not read or written by name)
};
GUEST_OFFSET(Frame_004f1cdc, float_0, 0x0);
GUEST_OFFSET(Frame_004f1cdc, float_4, 0x4);
GUEST_OFFSET(Frame_004f1cdc, float_8, 0x8);
GUEST_OFFSET(Frame_004f1cdc, float_c, 0xc);
GUEST_SIZE(Frame_004f1cdc, 0x14);

u32 Material__set_color_all_b(float S0) {
    guest::StackFrameOf<Frame_004f1cdc> frame;  // the original's stack frame
    frame->float_c = S0;
    frame->float_8 = S0;
    frame->float_4 = S0;
    frame->float_0 = S0;
    guest::cpu()->s[0] = S0;
    ResModel__set_color_b_all(guest::cpu()->r[0], frame.at(0).addr());
    return guest::cpu()->r[0];
}

}  // namespace d_004f1cdc
GUEST_EXPORT_FRAMED(0x004f1cdc, d_004f1cdc::Material__set_color_all_b, 0x4000);  // pushes {lr} first, as the original

// f_004f1d6c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Sets the flags (with bit 25) on every primitive of every shape of the model.
namespace d_004f1d6c {

struct __attribute__((packed)) ResModel {
    u8 unknown_0[0x2c];  // (not used here)
    u32 word_2c;
    u32 word_30;
};
GUEST_OFFSET(ResModel, word_2c, 0x2c);
GUEST_OFFSET(ResModel, word_30, 0x30);

struct __attribute__((packed)) Local_004f1d6c_r1_1 {
    u8 unknown_0[0xc];  // (not used here)
    u32 word_c;
    u32 word_10;
};
GUEST_OFFSET(Local_004f1d6c_r1_1, word_c, 0xc);
GUEST_OFFSET(Local_004f1d6c_r1_1, word_10, 0x10);


void ResModel__set_shape_flags(gptr<ResModel> res_model, u32 r1) {
    u32 r0 = res_model.addr();
    u32 r8 = guest::cpu()->r[8];
    u32 r12 = r1 | 0x2000000u;  // (from the original)
    u32 r10 = 0u;
    u32 r9 = res_model->word_2c;
    if (r9 != 0 && s32(r9) >= 0) {
        r8 = 0u;
    }
    if (s32(r9) > 0) {
        do {
            u32 r2_1 = res_model->word_30;
            u32 ea_1 = (r2_1 == 0 ? r8 : r0 + 0x30u + r2_1) + (r10 << 2);  // (from the original)
            u32 r2_2 = *gptr<u32>(ea_1);
            gptr<Local_004f1d6c_r1_1> r1_1 = gptr<Local_004f1d6c_r1_1>(r2_2 == 0 ? r8 : ea_1 + r2_2);
            u32 r3_1 = r1_1->word_10;
            r1 = r1_1->word_c;
            u32 r6 = r3_1 == 0 ? r8 : r3_1 + (r1_1.addr() + 0x10u);  // (from the original)
            u32 r7 = r6 + (r1 << 2);
            if (r6 != r7) {
                do {
                    u32 r1_2 = *gptr<u32>(r6);
                    u32 r3 = 0u;
                    r1 = r1_2 == 0 ? r8 : r1_2 + r6;
                    u32 r4 = *gptr<u32>(r1);
                    if (r4 >= 0u && r4 != 0) {
                        do {
                            u32 r5_1 = *gptr<u32>(r1 + 4u);
                            u32 ea_3 = (r5_1 == 0 ? r8 : r1 + 4u + r5_1) + (r3 << 2);
                            u32 r5_2 = *gptr<u32>(ea_3);
                            r3 += 1u;
                            *gptr<u32>((r5_2 == 0 ? r8 : ea_3 + r5_2) + 0x14u) = r12;  // (from the original)
                            guest::preempt();
                        } while (r3 < r4);
                    }
                    r6 += 4u;
                    guest::preempt();
                } while (r6 != r7);
            }
            r10 += 1u;
            guest::preempt();
        } while (s32(r10) < s32(r9));
    }
    guest::cpu()->r[1] = r1;
}

}  // namespace d_004f1d6c
GUEST_EXPORT_FRAMED(0x004f1d6c, d_004f1d6c::ResModel__set_shape_flags, 0x7f0);  // pushes {r4, r5, r6, r7, r8, r9, r10} first, as the original

// f_004f1e44: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Sets the light's color and its direction from the three angles.
namespace d_004f1e44 {

struct __attribute__((packed)) Light {
    u8 unknown_0[0x8];  // (not used here)
    u32 word_8;
};
GUEST_OFFSET(Light, word_8, 0x8);

struct __attribute__((packed)) Local_004f1e44_r1_1 {
    float float_0;
    float float_4;
};
GUEST_OFFSET(Local_004f1e44_r1_1, float_0, 0x0);
GUEST_OFFSET(Local_004f1e44_r1_1, float_4, 0x4);

struct __attribute__((packed)) Local_004f1e44_r1_5 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_004f1e44_r1_5, word_0, 0x0);
GUEST_OFFSET(Local_004f1e44_r1_5, word_4, 0x4);

inline constexpr guest::Function<0x0056a1d4, u32(u32, u32, u32, u32)> Vec3__rotate_x;
inline constexpr guest::Function<0x0056a224, u32(u32, u32)> rotate_xz;

struct __attribute__((packed)) Frame_004f1e44 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u8 unknown_c[0x4];  // (not read or written by name)
};
GUEST_OFFSET(Frame_004f1e44, word_0, 0x0);
GUEST_OFFSET(Frame_004f1e44, word_4, 0x4);
GUEST_OFFSET(Frame_004f1e44, word_8, 0x8);
GUEST_SIZE(Frame_004f1e44, 0x10);

void Light__set_color_and_direction(gptr<Light> light, gptr<Float4> float4, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_004f1e44> frame;  // the original's stack frame
    u32 r0_1 = light->word_8;
    float S1_1 = float4->v[1];
    float S2_1 = float4->v[2];
    gptr<Local_004f1e44_r1_1> r1_1 = gptr<Local_004f1e44_r1_1>(r0_1 + 0xcu);  // (from the original)
    u32 r5_1 = *frame.at<u32>(0x20);  // (from the original)
    *gptr<u32>(r0_1 + 8u) = std::bit_cast<u32>(float4->v[0]);
    float S0_1 = 0.0f;
    r1_1->float_0 = S1_1;
    r1_1->float_4 = S2_1;
    float S1_2 = 1.0f;
    frame->word_0 = std::bit_cast<u32>(S0_1);
    frame->word_4 = std::bit_cast<u32>(S1_2);
    frame->word_8 = std::bit_cast<u32>(S0_1);
    *frame.at<u16>(0xc) = u16(r2);  // (from the original)
    u32 r1_2 = *frame.at<u32>(0xc);  // (from the original)
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_2;
    guest::cpu()->s[2] = S2_1;
    Vec3__rotate_x(frame.at(0).addr(), r1_2, r2, r3);
    *frame.at<u16>(0xc) = u16(r3);  // (from the original)
    rotate_xz(frame.at(0).addr(), *frame.at<u32>(0xc));  // (from the original)
    *frame.at<u16>(0xc) = u16(r5_1);  // (from the original)
    Vec3__rotate_x(frame.at(0).addr(), *frame.at<u32>(0xc), guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_5 = light->word_8;
    u32 r3_2 = frame->word_4;
    u32 r12_1 = frame->word_8;
    gptr<Local_004f1e44_r1_5> r1_5 = gptr<Local_004f1e44_r1_5>(r0_5 + 0x18u);  // (from the original)
    *gptr<u32>(r0_5 + 0x14u) = frame->word_0;  // (from the original)
    r1_5->word_0 = r3_2;
    r1_5->word_4 = r12_1;
    guest::cpu()->r[1] = r1_5.addr();
}

}  // namespace d_004f1e44
GUEST_EXPORT_FRAMED(0x004f1e44, d_004f1e44::Light__set_color_and_direction, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_004f2198: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004f2198 {

inline constexpr u32 vtable_g3d__Camera = 0x00902b34u;
inline constexpr guest::Function<0x004ee4ec, u32(u32, u32, u32, u32)> construct_transform_node;
inline constexpr guest::Function<0x0054a9f0, u32(u32, u32, u32)> sead__Projection__Projection_0054a9f0;

u32 g3d__Camera__Camera(gptr<g3d__Camera> camera, u32 r1, u32 r2) {
    construct_transform_node(camera.addr(), r1, r2, guest::cpu()->r[3]);
    camera->vtable = vtable_g3d__Camera;
    camera->word_8 = 0;
    sead__Projection__Projection_0054a9f0(camera.addr() + 0x10u, 0u, camera.addr());  // (from the original)
    return camera.addr();
}

}  // namespace d_004f2198
GUEST_EXPORT_FRAMED(0x004f2198, d_004f2198::g3d__Camera__Camera, 0x4010);  // pushes {r4, lr} first, as the original

// f_004f220c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Walks the resource node's chain to its renderable kind and sets its flags (with bit 25).
namespace d_004f220c {


u32 ResNode__set_flags(u32 res_node, u32 r1) {
    do {
        u32 r2_1 = *gptr<u32>(res_node);
        if (r2_1 == 0x20000002u) {  // (from the original)
            guest::cpu()->r[1] = r1;
            return res_node;
        }
        if (r2_1 != 0x20000004u) {  // (from the original)
            if (r2_1 == 0x20000009u) {  // (from the original)
                u32 r1_1 = r1 | 0x2000000u;  // (from the original)
                *gptr<u32>(res_node + 0x30u) = r1_1;  // (from the original)
                guest::cpu()->r[1] = r1_1;
                return res_node;
            }
            if (r2_1 + 0xdfffffefu != 0) {  // (from the original)
                guest::cpu()->r[1] = r1;
                return res_node;
            }
            if (res_node == 0) {
                u32 r1_2 = r1 | 0x2000000u;  // (from the original)
                *gptr<u32>(res_node + 0x30u) = r1_2;  // (from the original)
                guest::cpu()->r[1] = r1_2;
                return res_node;
            }
            if ((0x20000011u & ~*gptr<u32>(res_node)) != 0) {  // (from the original)
                res_node = 0u;
            }
            u32 r1_3 = r1 | 0x2000000u;  // (from the original)
            *gptr<u32>(res_node + 0x30u) = r1_3;  // (from the original)
            guest::cpu()->r[1] = r1_3;
            return res_node;
        }
        u32 r3_1 = res_node + 0x1cu;  // (from the original)
        u32 r2_2 = res_node;
        u32 r12_1 = *gptr<u32>(r3_1);
        res_node = 0u;
        if ((r12_1 == 0 ? res_node : r3_1 + r12_1) == 0) {
            guest::cpu()->r[1] = r1;
            return res_node;
        }
        if (r12_1 != 0) {
            res_node = r12_1 + (r2_2 + 0x1cu);  // (from the original)
        }
        guest::preempt();
    } while (1);
}

}  // namespace d_004f220c
GUEST_EXPORT(0x004f220c, d_004f220c::ResNode__set_flags);

// f_004f2638: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Clears the model's material slot to the default.
namespace d_004f2638 {

struct __attribute__((packed)) Model {
    u8 unknown_0[0x8];  // (not used here)
    u32 word_8;
};
GUEST_OFFSET(Model, word_8, 0x8);

inline guest::global<u32, 0x008a29a8> global_008a29a8;

void Model__clear_material_slot(gptr<Model> model, u32 r1) {
    *gptr<u32>(*gptr<u32>(model->word_8 + 0x24u) + (r1 << 2)) = *global_008a29a8;  // (from the original)
}

}  // namespace d_004f2638
GUEST_EXPORT(0x004f2638, d_004f2638::Model__clear_material_slot);

// f_004f2a18: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Resets the three scene lists, the animation cursors and the environment, and flips the buffer index.
namespace d_004f2a18 {

inline constexpr u32 photo_mode_active_address = 0x00952a20u;
inline constexpr u32 scene_environment_address = 0x00952a38u;
inline constexpr u32 global_009c90c4_address = 0x009c90c4u;
inline guest::global<u32, 0x00952a38> scene_environment;
inline guest::global<u32, 0x00952a48> scene_env_frame;
inline constexpr guest::Function<0x00495534, u32(u32)> SceneEnv__reset;
inline constexpr guest::Function<0x0049a0e4, u32(u32, u32, u32, u32)> store_word_constant_pack_0x8;
inline constexpr guest::Function<0x004eb148, u32(u32, u32)> reset_animation_cursors;
inline constexpr guest::Function<0x007b1038, u32(u32)> GpuState__mark_dirty;

void SceneEnv__reset_frame(u32 r0_unused, u32 r1) {
    u32 r0_1 = 0;
    u32 r4 = 0u;
    u32 r5 = global_009c90c4_address;
    do {
        r0_1 = gptr<u32>(r5)[r4];
        store_word_constant_pack_0x8(r0_1, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        r4 += 1u;
        guest::preempt();
    } while (s32(r4) < 3);
    reset_animation_cursors(r0_1, r1);
    SceneEnv__reset(*scene_environment);
    GpuState__mark_dirty(0x3fffu);  // (from the original)
    *gptr<u32>(*gptr<u32>(*scene_environment + 0xc0u)) = 0;  // (from the original)
    *scene_env_frame = 1u - *scene_env_frame;
}

}  // namespace d_004f2a18
GUEST_EXPORT_FRAMED(0x004f2a18, d_004f2a18::SceneEnv__reset_frame, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_004f2d48: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Sets the color's components given as 0-255 (256 and above leave a component as it was).
namespace d_004f2d48 {

struct __attribute__((packed)) Local_004f2d48_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_004f2d48_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_004f2d48_ea_1, word_4, 0x4);

struct __attribute__((packed)) Local_004f2d48_r12_1 {
    float float_0;
    float float_4;
};
GUEST_OFFSET(Local_004f2d48_r12_1, float_0, 0x0);
GUEST_OFFSET(Local_004f2d48_r12_1, float_4, 0x4);

inline constexpr guest::Function<0x004f2b8c, u32(u32, u32, u32, u32)> Material__get_value_of_kind;
inline constexpr guest::Function<0x004f2c10, u32(u32, u32, u32, u32)> Material__set_value_of_kind;

struct __attribute__((packed)) Frame_004f2d48 {
    float float_0;
    float float_4;
    float float_8;
    float float_c;
};
GUEST_OFFSET(Frame_004f2d48, float_0, 0x0);
GUEST_OFFSET(Frame_004f2d48, float_4, 0x4);
GUEST_OFFSET(Frame_004f2d48, float_8, 0x8);
GUEST_OFFSET(Frame_004f2d48, float_c, 0xc);
GUEST_SIZE(Frame_004f2d48, 0x10);

u32 set_color_from_bytes(u32 r0, u32 r1, u32 r2, u32 r3, float S0, float S1) {
    guest::StackFrameOf<Frame_004f2d48> frame;  // the original's stack frame
    gptr<Local_004f2d48_ea_1> ea_1 = gptr<Local_004f2d48_ea_1>(frame.at(0x28).addr());  // (from the original)
    u32 r6_1 = ea_1->word_0;
    u32 r7_1 = ea_1->word_4;
    if (r0 != 0) {
        float S0_1 = 0.0f;
        float S1_1 = 1.0f;
        frame->float_0 = S0_1;
        frame->float_4 = S0_1;
        gptr<Local_004f2d48_r12_1> r12_1 = gptr<Local_004f2d48_r12_1>(frame.at(8).addr());
        r12_1->float_0 = S0_1;
        r12_1->float_4 = S1_1;
        guest::cpu()->s[0] = S0_1;
        guest::cpu()->s[1] = S1_1;
        Material__get_value_of_kind(frame.at(0).addr(), r0, r1, r3);
        u32 r3_1 = guest::cpu()->r[3];
        float S1_2 = guest::cpu()->s[1];
        float S0_2 = 0.003921569f;
        if (r2 < 0x100u) {  // (from the original)
            S1_2 = float(s32(r2)) * S0_2;
            frame->float_0 = S1_2;
        }
        if (r3_1 < 0x100u) {  // (from the original)
            S1_2 = float(s32(r3_1)) * S0_2;
            frame->float_4 = S1_2;
        }
        if (r6_1 < 0x100u) {  // (from the original)
            S1_2 = float(s32(r6_1)) * S0_2;
            frame->float_8 = S1_2;
        }
        if (r7_1 < 0x100u) {  // (from the original)
            S1_2 = float(s32(r7_1));
            S0_2 = S1_2 * S0_2;
            frame->float_c = S0_2;
        }
        guest::cpu()->s[0] = S0_2;
        guest::cpu()->s[1] = S1_2;
        Material__set_value_of_kind(r0, frame.at(0).addr(), r1, r3_1);
        r1 = guest::cpu()->r[1];
        S0 = guest::cpu()->s[0];
        S1 = guest::cpu()->s[1];
        r0 = 1u;
    }
    guest::cpu()->r[1] = r1;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return r0;
}

}  // namespace d_004f2d48
GUEST_EXPORT_FRAMED(0x004f2d48, d_004f2d48::set_color_from_bytes, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_004f2ef0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Sets the model's visibility when it exists; whether it did.
namespace d_004f2ef0 {

struct __attribute__((packed)) Local_004f2ef0_ea_1 {
    u32 model;
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Local_004f2ef0_ea_1, model, 0x0);
GUEST_OFFSET(Local_004f2ef0_ea_1, word_4, 0x4);
GUEST_OFFSET(Local_004f2ef0_ea_1, word_8, 0x8);
GUEST_OFFSET(Local_004f2ef0_ea_1, word_c, 0xc);

inline constexpr guest::Function<0x004a5b04, u32(u32, u32, u32, u32)> Fog__setup;

struct __attribute__((packed)) Frame_004f2ef0 {
    u32 word_0;
    u8 unknown_4[0x8];  // (not read or written by name)
    u32 word_c;
};
GUEST_OFFSET(Frame_004f2ef0, word_0, 0x0);
GUEST_OFFSET(Frame_004f2ef0, word_c, 0xc);
GUEST_SIZE(Frame_004f2ef0, 0x10);

u32 Model__set_visible_if_any(u32 model, u32 r1, u32 r2) {
    guest::StackFrameOf<Frame_004f2ef0> frame;  // the original's stack frame
    u32 r14 = guest::cpu()->r[14];
    gptr<Local_004f2ef0_ea_1> ea_1 = gptr<Local_004f2ef0_ea_1>(frame.at(0).addr());
    ea_1->model = model;
    ea_1->word_4 = r1;
    ea_1->word_8 = r2;
    ea_1->word_c = r14;
    u32 r0_1 = frame->word_0;
    if (r0_1 == 0) {
        u32 v_1 = frame->word_c;
        return r0_1;
    }
    Fog__setup(frame.at(0).addr(), r1, r2, guest::cpu()->r[3]);
    u32 v_2 = frame->word_c;
    return 1u;
}

}  // namespace d_004f2ef0
GUEST_EXPORT(0x004f2ef0, d_004f2ef0::Model__set_visible_if_any);

// f_004f2f48: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The animation's current frame (in s0), or 0.
namespace d_004f2f48 {


void AnimFrame__frame(u32 anim_frame) {
    u32 zf_1 = anim_frame == 0;
    if (!zf_1) {
        u32 res_1 = anim_frame + 0x104u;  // (from the original)
        zf_1 = res_1 == 0;
        anim_frame = res_1;
    }
    float S0_1 = zf_1 ? 0.0f : std::bit_cast<float>(*gptr<u32>(anim_frame + 8u));
    guest::cpu()->s[0] = S0_1;
}

}  // namespace d_004f2f48
GUEST_EXPORT(0x004f2f48, d_004f2f48::AnimFrame__frame);

// f_004f2f60: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The animation's current frame (in s0) when it is playing, or 0.
namespace d_004f2f60 {


void AnimFrame__frame_if_playing(u32 anim_frame) {
    u32 zf_1 = anim_frame == 0;
    float S0_1 = 0.0f;
    if (!zf_1) {
        u32 res_1 = anim_frame + 0x104u;  // (from the original)
        zf_1 = res_1 == 0;
        anim_frame = res_1;
    }
    if (zf_1) {
        guest::cpu()->s[0] = S0_1;
        return;
    }
    if ((*gptr<u32>(anim_frame) & 1u) != 0) {
        S0_1 = std::bit_cast<float>(*gptr<u32>(anim_frame + 8u));
    }
    guest::cpu()->s[0] = S0_1;
}

}  // namespace d_004f2f60
GUEST_EXPORT(0x004f2f60, d_004f2f60::AnimFrame__frame_if_playing);

// f_004f3068: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Flushes the shadow pool in photo mode; else resets the environment's shadow list.
namespace d_004f3068 {

inline constexpr u32 scene_environment_address = 0x00952a38u;
inline guest::global<u8, 0x00952a20> photo_mode_active;
inline guest::global<u32, 0x00952a38> scene_environment;
inline constexpr guest::Function<0x004efb0c, u32(u32, u32, u32, u32)> SceneEnv__set_layer;
inline constexpr guest::Function<0x006ef650, u32(u32, u32)> ShadowPool__flush;

u32 SceneEnv__flush_shadows(u32 scene_env) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 r1_1 = *photo_mode_active;
    if (r1_1 != 0) {
        frame.release();
        return ShadowPool__flush(scene_env, r1_1);
    }
    SceneEnv__set_layer(scene_env, 0u, guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_1 = *gptr<u32>(*scene_environment + 0xc0u);  // (from the original)
    *gptr<u32>(r0_1) = 0;
    guest::cpu()->r[1] = 0u;
    return r0_1;
}

}  // namespace d_004f3068
GUEST_EXPORT(0x004f3068, d_004f3068::SceneEnv__flush_shadows);

// f_004f33dc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004f33dc {

inline constexpr u32 vtable_gui__ButtonBase = 0x00902bc8u;
inline constexpr u32 vtable_gui__Widget = 0x00903054u;
inline constexpr u32 global_00ad662c_address = 0x00ad662cu;
inline constexpr u32 widget_state_address = 0x00ad6630u;
inline guest::global<u32, 0x00ad6630> widget_state;
inline constexpr guest::Function<0x0013e7d8, u32(u32, u32, u32)> linked_list_insert_before;
inline constexpr guest::Function<0x002f825c, u32(u32, u32)> clear_aligned;

u32 gui__Widget__Widget(gptr<gui__ButtonBase> button_base) {
    button_base->vtable = vtable_gui__Widget;
    button_base->word_4 = 0;
    button_base->word_8 = 0;
    button_base->byte_c = 0;
    linked_list_insert_before(global_00ad662c_address, *widget_state, button_base.addr() + 4u);
    button_base->vtable = vtable_gui__ButtonBase;
    button_base->word_10 = 0;
    button_base->byte_14 = 1;
    button_base->word_18 = 0;
    clear_aligned(button_base.addr() + 0x1cu, 0x11u);  // (from the original)
    return button_base.addr();
}

}  // namespace d_004f33dc
GUEST_EXPORT_FRAMED(0x004f33dc, d_004f33dc::gui__Widget__Widget, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_004f3a64: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether the kind is between 10 and 15.
namespace d_004f3a64 {


u32 is_kind_10_to_15(u32 r0_unused, u32 r1) {
    u32 r0_1 = r1 - 0xau;  // (from the original)
    u32 zf_1 = r0_1 == 5u;
    u32 cf_1 = r0_1 >= 5u;
    if (r0_1 <= 5u) {
        r0_1 = 1u;
    }
    if (cf_1 && !zf_1) {
        r0_1 = 0u;
    }
    return r0_1;
}

}  // namespace d_004f3a64
GUEST_EXPORT(0x004f3a64, d_004f3a64::is_kind_10_to_15);

// f_004f3b48: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The value paired with the key in the table of 6 pairs, or -1.
namespace d_004f3b48 {

struct __attribute__((packed)) Local_004f3b48_r3_1 {
    u32 word_0;
    u8 unknown_4[0x4];  // (not used here)
    u32 word_8;
};
GUEST_OFFSET(Local_004f3b48_r3_1, word_0, 0x0);
GUEST_OFFSET(Local_004f3b48_r3_1, word_8, 0x8);


u32 table_896f28_lookup(u32 r0_unused, u32 r1) {
    u32 r2 = 0x896f28u;  // (from the original)
    u32 r0 = 0u;
    do {
        gptr<Local_004f3b48_r3_1> r3_1 = gptr<Local_004f3b48_r3_1>(r2 + (r0 << 3));
        if (r3_1->word_0 == r1) {
            return *gptr<u32>(r2 + (r0 << 3) + 4u);
        }
        if (r3_1->word_8 == r1) {
            return *gptr<u32>(r2 + (r0 << 3) + 0xcu);  // (from the original)
        }
        r0 += 2u;
        guest::preempt();
    } while (s32(r0) < 6);
    return ~0u;
}

}  // namespace d_004f3b48
GUEST_EXPORT(0x004f3b48, d_004f3b48::table_896f28_lookup);

// f_004f4e58: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004f4e58 {

inline constexpr u32 vtable_gui__GridKeySet = 0x00902c58u;
inline constexpr u32 vtable_gui__KeySet = 0x00902fc8u;
inline constexpr guest::Function<0x0013fac4, u32(u32, u32, u32)> set_bytes;
inline constexpr guest::Function<0x002f825c, u32(u32, u32, u32, u32)> clear_aligned;

u32 gui__KeySet__KeySet_004f4e58(gptr<gui__GridKeySet> grid_key_set, u32 r1, u32 r2) {
    u32 r0 = grid_key_set.addr();
    u32 r5 = r0;
    u32 r7 = 0u;
    grid_key_set->vtable = vtable_gui__KeySet;
    grid_key_set->word_104 = r7;
    grid_key_set->byte_108 = u8(r7);
    grid_key_set->word_10c = r1;
    clear_aligned(r5 + 4u, 0x100u, r2, guest::cpu()->r[3]);  // (from the original)
    grid_key_set->vtable = vtable_gui__GridKeySet;
    grid_key_set->word_110 = r7;
    grid_key_set->word_a14 = r7;
    grid_key_set->word_a18 = ~0u;
    grid_key_set->word_a1c = r7;
    u32 r4_1 = r5 + 0xa14u;  // (from the original)
    clear_aligned(r5 + 0x114u, 0x100u, r5 + 0xa18u, guest::cpu()->r[3]);  // (from the original)
    grid_key_set->word_a14 = 0x28;  // (from the original)
    u32 r4 = 0u;
    do {
        u32 r6_1 = r5 + (r4 << 4);
        *gptr<u32>(r5 + (r4 << 2) + 0x114u) = r7;  // (from the original)
        set_bytes(r6_1 + 0x214u, 0x10u, 1u);  // (from the original)
        set_bytes(r6_1 + 0x614u, 0x10u, 1u);  // (from the original)
        r4 += 1u;
        guest::preempt();
    } while (s32(*gptr<u32>(r5 + 0xa14u)) > s32(r4));  // (from the original)
    return r5;
}

}  // namespace d_004f4e58
GUEST_EXPORT_FRAMED(0x004f4e58, d_004f4e58::gui__KeySet__KeySet_004f4e58, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_004f524c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Updates the letter list's entries and scroll.
namespace d_004f524c {

struct __attribute__((packed)) Local_004f524c_r1_1 {
    u8 unknown_0[0x10];  // (not used here)
    u32 word_10;
    u32 word_14;
};
GUEST_OFFSET(Local_004f524c_r1_1, word_10, 0x10);
GUEST_OFFSET(Local_004f524c_r1_1, word_14, 0x14);

struct __attribute__((packed)) Local_004f524c_r1_3 {
    u8 unknown_0[0x2];  // (not used here)
    u16 half_2;
    u8 unknown_4[0x6];  // (not used here)
    u16 half_a;
};
GUEST_OFFSET(Local_004f524c_r1_3, half_2, 0x2);
GUEST_OFFSET(Local_004f524c_r1_3, half_a, 0xa);

struct __attribute__((packed)) Local_004f524c_r1_4 {
    u8 unknown_0[0x4];  // (not used here)
    u16 half_4;
    u8 unknown_6[0x6];  // (not used here)
    u16 half_c;
};
GUEST_OFFSET(Local_004f524c_r1_4, half_4, 0x4);
GUEST_OFFSET(Local_004f524c_r1_4, half_c, 0xc);

struct __attribute__((packed)) Local_004f524c_r1_5 {
    u8 unknown_0[0x6];  // (not used here)
    u16 half_6;
    u8 unknown_8[0x6];  // (not used here)
    u16 half_e;
};
GUEST_OFFSET(Local_004f524c_r1_5, half_6, 0x6);
GUEST_OFFSET(Local_004f524c_r1_5, half_e, 0xe);

struct __attribute__((packed)) Local_004f524c_r1_6 {
    u8 unknown_0[0x6];  // (not used here)
    u16 half_6;
    u8 unknown_8[0x6];  // (not used here)
    u16 half_e;
};
GUEST_OFFSET(Local_004f524c_r1_6, half_6, 0x6);
GUEST_OFFSET(Local_004f524c_r1_6, half_e, 0xe);

inline constexpr u32 letter_list_instance_address = 0x0095e0fcu;
inline guest::global<u32, 0x0095e0fc> letter_list_instance;
inline constexpr guest::Function<0x004dae58, u32(u32, u32, u32, u32)> letter_paper_index;
inline constexpr guest::Function<0x004f5144, u32(u32, u32, u32, u32)> LetterList__draw_entry;

void LetterList__update(u32 letter_list, u32 r1_unused, u32 r2_unused, u32 r3) {
    guest::StackFrame frame(0x20);  // the original's stack frame
    u32 r5 = 0u;
    u32 r6 = r5;
    u32 r10 = letter_list;
    u32 r7 = r5;
    gptr<Local_004f524c_r1_1> r1_1 = gptr<Local_004f524c_r1_1>(*letter_list_instance);
    u32 r0_1 = r1_1->word_14;
    if (s32(r0_1) > 0) {
        u32 r1_2 = r1_1->word_10;
        u32 r2_1 = ~1u;
        u32 r4 = *gptr<u16>(r1_2 + (r2_1 + (r0_1 << 1)));
        u32 r0_2 = letter_paper_index(r4, r1_2, r2_1, r3);
        gptr<Local_004f524c_r1_3> r1_3 = gptr<Local_004f524c_r1_3>(guest::cpu()->r[1]);
        u32 r2 = guest::cpu()->r[2];
        u32 r3_1 = guest::cpu()->r[3];
        u32 zf_1 = r0_2 == 0;
        u32 r8 = 0x896f58u;  // (from the original)
        if (!zf_1) {
            r0_2 = *gptr<u16>(r0_2 + 2u);
            zf_1 = r0_2 == 0;
        }
        if (zf_1) {
            r0_2 = r4;
        }
        u32 r9 = r8 + 0x170u;  // (from the original)
        if (r0_2 == r4) {
            letter_list = r4 - 0x3041u;  // (from the original)
            u32 zf_2 = letter_list == 0x52u;  // (from the original)
            u32 cf_1 = letter_list >= 0x52u;  // (from the original)
            if (letter_list <= 0x52u) {  // (from the original)
                letter_list = 0u;
            }
            if (!cf_1 || zf_2) {
                do {
                    r1_3 = gptr<Local_004f524c_r1_3>(r8 + (letter_list << 3));
                    r3_1 = r1_3->half_2;
                    u32 zf_3 = r3_1 == r4;
                    if (!zf_3) {
                        r2 = r1_3->half_a;
                        zf_3 = r2 == r4;
                    }
                    if (zf_3) {
                        goto L_4f5324;
                    }
                    letter_list += 2u;
                    guest::preempt();
                } while (s32(letter_list) < 0x2e);  // (from the original)
                goto L_4f5328;
            }
            letter_list = r4 - 0x30a1u;  // (from the original)
            u32 zf_4 = letter_list == 0x55u;  // (from the original)
            u32 cf_2 = letter_list >= 0x55u;  // (from the original)
            if (letter_list <= 0x55u) {  // (from the original)
                letter_list = 0u;
            }
            if (cf_2 && !zf_4) {
                goto L_4f5328;
            }
            do {
                r1_3 = gptr<Local_004f524c_r1_3>(r9 + (letter_list << 3));
                r3_1 = r1_3->half_2;
                u32 zf_5 = r3_1 == r4;
                if (!zf_5) {
                    r2 = r1_3->half_a;
                    zf_5 = r2 == r4;
                }
                if (zf_5) {
                    goto L_4f5324;
                }
                letter_list += 2u;
                guest::preempt();
            } while (s32(letter_list) < 0x2e);  // (from the original)
            goto L_4f5328;
        }
L_4f5324:;
        r5 = 1u;
L_4f5328:;
        u32 r0_3 = letter_paper_index(r4, r1_3.addr(), r2, r3_1);
        gptr<Local_004f524c_r1_4> r1_4 = gptr<Local_004f524c_r1_4>(guest::cpu()->r[1]);
        r2 = guest::cpu()->r[2];
        u32 r3_2 = guest::cpu()->r[3];
        u32 zf_6 = r0_3 == 0;
        if (!zf_6) {
            r0_3 = *gptr<u16>(r0_3 + 4u);
            zf_6 = r0_3 == 0;
        }
        if (zf_6) {
            r0_3 = r4;
        }
        if (r0_3 == r4) {
            letter_list = r4 - 0x3041u;  // (from the original)
            u32 zf_7 = letter_list == 0x52u;  // (from the original)
            u32 cf_3 = letter_list >= 0x52u;  // (from the original)
            if (letter_list <= 0x52u) {  // (from the original)
                letter_list = 0u;
            }
            if (!cf_3 || zf_7) {
                do {
                    r1_4 = gptr<Local_004f524c_r1_4>(r8 + (letter_list << 3));
                    r3_2 = r1_4->half_4;
                    u32 zf_8 = r3_2 == r4;
                    if (!zf_8) {
                        r2 = r1_4->half_c;
                        zf_8 = r2 == r4;
                    }
                    if (zf_8) {
                        goto L_4f53c0;
                    }
                    letter_list += 2u;
                    guest::preempt();
                } while (s32(letter_list) < 0x2e);  // (from the original)
                goto L_4f53c4;
            }
            letter_list = r4 - 0x30a1u;  // (from the original)
            u32 zf_9 = letter_list == 0x55u;  // (from the original)
            u32 cf_4 = letter_list >= 0x55u;  // (from the original)
            if (letter_list <= 0x55u) {  // (from the original)
                letter_list = 0u;
            }
            if (cf_4 && !zf_9) {
                goto L_4f53c4;
            }
            do {
                r1_4 = gptr<Local_004f524c_r1_4>(r9 + (letter_list << 3));
                r3_2 = r1_4->half_4;
                u32 zf_10 = r3_2 == r4;
                if (!zf_10) {
                    r2 = r1_4->half_c;
                    zf_10 = r2 == r4;
                }
                if (zf_10) {
                    goto L_4f53c0;
                }
                letter_list += 2u;
                guest::preempt();
            } while (s32(letter_list) < 0x2e);  // (from the original)
            goto L_4f53c4;
        }
L_4f53c0:;
        r6 = 1u;
L_4f53c4:;
        u32 r0_4 = letter_paper_index(r4, r1_4.addr(), r2, r3_2);
        u32 zf_11 = r0_4 == 0;
        if (!zf_11) {
            r0_4 = *gptr<u16>(r0_4 + 6u);
            zf_11 = r0_4 == 0;
        }
        if (zf_11) {
            r0_4 = r4;
        }
        if (r0_4 == r4) {
            letter_list = r4 - 0x3041u;  // (from the original)
            u32 zf_12 = letter_list == 0x52u;  // (from the original)
            u32 cf_5 = letter_list >= 0x52u;  // (from the original)
            if (letter_list <= 0x52u) {  // (from the original)
                letter_list = 0u;
            }
            if (!cf_5 || zf_12) {
                do {
                    gptr<Local_004f524c_r1_5> r1_5 = gptr<Local_004f524c_r1_5>(r8 + (letter_list << 3));
                    if (r1_5->half_6 == r4 || r1_5->half_e == r4) {
                        goto L_4f545c;
                    }
                    letter_list += 2u;
                    guest::preempt();
                } while (s32(letter_list) < 0x2e);  // (from the original)
                frame.release();
                LetterList__draw_entry(r10, r5, r6, r7);
                return;
            }
            letter_list = r4 - 0x30a1u;  // (from the original)
            u32 zf_13 = letter_list == 0x55u;  // (from the original)
            u32 cf_6 = letter_list >= 0x55u;  // (from the original)
            if (letter_list <= 0x55u) {  // (from the original)
                letter_list = 0u;
            }
            if (cf_6 && !zf_13) {
                frame.release();
                LetterList__draw_entry(r10, r5, r6, r7);
                return;
            }
            do {
                gptr<Local_004f524c_r1_6> r1_6 = gptr<Local_004f524c_r1_6>(r9 + (letter_list << 3));
                if (r1_6->half_6 == r4 || r1_6->half_e == r4) {
                    goto L_4f545c;
                }
                letter_list += 2u;
                guest::preempt();
            } while (s32(letter_list) < 0x2e);  // (from the original)
            frame.release();
            LetterList__draw_entry(r10, r5, r6, r7);
            return;
        }
L_4f545c:;
        r7 = 1u;
    }
    frame.release();
    LetterList__draw_entry(r10, r5, r6, r7);
    return;
}

}  // namespace d_004f524c
GUEST_EXPORT(0x004f524c, d_004f524c::LetterList__update);

// f_004f6674: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004f6674 {

struct __attribute__((packed)) Local_004f6674_r3_2 {
    u8 unknown_0[0x214];  // (not used here)
    u8 byte_214;
    u8 byte_215;
    u8 unknown_216[0x7e];  // (not used here)
    u8 byte_294;
    u8 byte_295;
};
GUEST_OFFSET(Local_004f6674_r3_2, byte_214, 0x214);
GUEST_OFFSET(Local_004f6674_r3_2, byte_215, 0x215);
GUEST_OFFSET(Local_004f6674_r3_2, byte_294, 0x294);
GUEST_OFFSET(Local_004f6674_r3_2, byte_295, 0x295);

inline constexpr u32 vtable_gui__KanaKeySet = 0x00902c84u;
inline constexpr u32 vtable_gui__KeySet = 0x00902fc8u;
inline constexpr guest::Function<0x002f825c, u32(u32, u32, u32, u32)> clear_aligned;

u32 gui__KeySet__KeySet_004f6674(gptr<gui__KanaKeySet> kana_key_set, u32 r1, u32 r2, u32 r3) {
    u32 r0 = kana_key_set.addr();
    u32 res_1 = 0;
    u32 r4 = r0;
    u32 r5 = 0u;
    kana_key_set->vtable = vtable_gui__KeySet;
    kana_key_set->word_104 = r5;
    kana_key_set->byte_108 = u8(r5);
    kana_key_set->word_10c = r1;
    clear_aligned(r4 + 4u, 0x100u, r2, r3);  // (from the original)
    u32 r0_2 = ~0u;
    kana_key_set->vtable = vtable_gui__KanaKeySet;
    kana_key_set->word_110 = r5;
    kana_key_set->word_318 = r0_2;
    kana_key_set->word_314 = r5;
    kana_key_set->word_31c = r0_2;
    kana_key_set->word_320 = r0_2;
    kana_key_set->word_324 = r0_2;
    kana_key_set->word_328 = r0_2;
    kana_key_set->word_32c = r5;
    clear_aligned(r4 + 0x114u, 0x100u, r4 + 0x328u, guest::cpu()->r[3]);  // (from the original)
    r0 = 0x3bu;  // (from the original)
    r1 = 0u;
    r2 = 1u;
    kana_key_set->word_314 = r0;
    do {
        gptr<Local_004f6674_r3_2> r3_2 = gptr<Local_004f6674_r3_2>(r4 + (r1 << 1));
        *gptr<u32>(r4 + (r1 << 2) + 0x114u) = r5;  // (from the original)
        r3_2->byte_214 = u8(r2);
        r3_2->byte_294 = u8(r2);
        r3_2->byte_215 = u8(r2);
        res_1 = r0 - 1u;
        r0 = res_1;
        r1 += 1u;
        r3_2->byte_295 = u8(r2);
        guest::preempt();
    } while (res_1 != 0);
    return r4;
}

}  // namespace d_004f6674
GUEST_EXPORT_FRAMED(0x004f6674, d_004f6674::gui__KeySet__KeySet_004f6674, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_004f76a8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Clears the list state and sets its positions to -100 (none).
namespace d_004f76a8 {

struct __attribute__((packed)) ListState {
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
    u8 byte_40;
};
GUEST_OFFSET(ListState, word_0, 0x0);
GUEST_OFFSET(ListState, word_4, 0x4);
GUEST_OFFSET(ListState, word_8, 0x8);
GUEST_OFFSET(ListState, word_c, 0xc);
GUEST_OFFSET(ListState, word_10, 0x10);
GUEST_OFFSET(ListState, word_14, 0x14);
GUEST_OFFSET(ListState, word_18, 0x18);
GUEST_OFFSET(ListState, word_1c, 0x1c);
GUEST_OFFSET(ListState, word_20, 0x20);
GUEST_OFFSET(ListState, word_24, 0x24);
GUEST_OFFSET(ListState, word_28, 0x28);
GUEST_OFFSET(ListState, word_2c, 0x2c);
GUEST_OFFSET(ListState, word_30, 0x30);
GUEST_OFFSET(ListState, word_34, 0x34);
GUEST_OFFSET(ListState, word_38, 0x38);
GUEST_OFFSET(ListState, word_3c, 0x3c);
GUEST_OFFSET(ListState, byte_40, 0x40);


void ListState__init(gptr<ListState> list_state) {
    list_state->word_0 = 0;
    list_state->word_4 = 0;
    list_state->word_8 = 0;
    list_state->word_c = 0;
    list_state->word_10 = 0;
    u32 r2_1 = ~0x63u;  // (from the original)
    list_state->word_14 = 0;
    list_state->word_18 = 0;
    list_state->word_1c = r2_1;
    list_state->word_20 = r2_1;
    list_state->word_24 = r2_1;
    list_state->word_34 = 0;
    list_state->word_28 = r2_1;
    list_state->word_38 = 0;
    list_state->word_3c = 0;
    list_state->word_2c = r2_1;
    list_state->word_30 = ~0u;
    list_state->byte_40 = 0;
    guest::cpu()->r[1] = 0u;
}

}  // namespace d_004f76a8
GUEST_EXPORT(0x004f76a8, d_004f76a8::ListState__init);

// f_004f778c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004f778c {

inline constexpr u32 vtable_gui__RadioButton = 0x00902d20u;
inline guest::global<u32, 0x00ad6638> global_00ad6638;
inline guest::global<u32, 0x00ad663c> global_00ad663c;
inline guest::global<u32, 0x00ad6640> global_00ad6640;
inline guest::global<u32, 0x00ad6644> global_00ad6644;
inline guest::global<u32, 0x00ad6648> global_00ad6648;
inline constexpr guest::Function<0x00150bc0, u32(u32, u32, u32)> strncpy;
inline constexpr guest::Function<0x002fbb30, u32(u32, u32, u32)> copy_aligned_bytes;
inline constexpr guest::Function<0x004f33dc, u32(u32, u32, u32, u32)> gui__Widget__Widget;

u32 gui__RadioButton__RadioButton(gptr<gui__RadioButton> radio_button, u32 r1, u32 r2) {
    gui__Widget__Widget(radio_button.addr(), r1, r2, guest::cpu()->r[3]);
    radio_button->vtable = vtable_gui__RadioButton;
    copy_aligned_bytes(radio_button.addr() + 0x30u, r1, 0x44u);  // (from the original)
    u32 r2_1 = radio_button->word_4c;
    radio_button->byte_74 = 0;
    if (r2_1 + 0x64u == 0) {  // (from the original)
        radio_button->word_4c = *global_00ad6638;
    }
    if (radio_button->word_50 + 0x64u == 0) {  // (from the original)
        radio_button->word_50 = *global_00ad663c;
    }
    if (radio_button->word_54 + 0x64u == 0) {  // (from the original)
        radio_button->word_54 = *global_00ad6640;
    }
    if (radio_button->word_58 + 0x64u == 0) {  // (from the original)
        radio_button->word_58 = *global_00ad6644;
    }
    if (radio_button->word_5c + 0x64u == 0) {  // (from the original)
        radio_button->word_5c = *global_00ad6648;
    }
    radio_button->word_18 = radio_button.addr() + 0x30u;  // (from the original)
    strncpy(radio_button.addr() + 0x1cu, radio_button->word_34, 0x10u);  // (from the original)
    return radio_button.addr();
}

}  // namespace d_004f778c
GUEST_EXPORT_FRAMED(0x004f778c, d_004f778c::gui__RadioButton__RadioButton, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_004f9650: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004f9650 {

inline constexpr u32 vtable_gui__QwertyKeySet = 0x00902d64u;
inline constexpr u32 vtable_gui__KeySet = 0x00902fc8u;
inline constexpr guest::Function<0x002f825c, u32(u32, u32, u32, u32)> clear_aligned;
inline constexpr guest::Function<0x007796a0, u32(u32, u32, u32)> fill_eight_bytes;

u32 gui__KeySet__KeySet_004f9650(gptr<gui__QwertyKeySet> qwerty_key_set, u32 r1, u32 r2) {
    u32 r0 = qwerty_key_set.addr();
    u32 r5 = r0;
    u32 r7 = 0u;
    qwerty_key_set->vtable = vtable_gui__KeySet;
    qwerty_key_set->word_104 = r7;
    qwerty_key_set->byte_108 = u8(r7);
    qwerty_key_set->word_10c = r1;
    clear_aligned(r5 + 4u, 0x100u, r2, guest::cpu()->r[3]);  // (from the original)
    u32 r4_1 = r5 + 0x614u;  // (from the original)
    qwerty_key_set->vtable = vtable_gui__QwertyKeySet;
    u32 r9 = ~0u;
    qwerty_key_set->word_110 = r7;
    qwerty_key_set->word_614 = r7;
    qwerty_key_set->word_618 = r9;
    qwerty_key_set->word_62c = r7;
    qwerty_key_set->word_61c = r9;
    qwerty_key_set->word_630 = r7;
    clear_aligned(r5 + 0x114u, 0x100u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    qwerty_key_set->word_614 = 0x35;  // (from the original)
    u32 r4 = 0u;
    u32 r8 = 1u;
    do {
        u32 r2_2 = r5 + (r4 << 2);
        u32 r6_1 = r5 + (r4 << 3);
        *gptr<u32>(r2_2 + 0x114u) = r7;  // (from the original)
        fill_eight_bytes(r6_1 + 0x214u, r8, r2_2);  // (from the original)
        fill_eight_bytes(r6_1 + 0x414u, r8, guest::cpu()->r[2]);  // (from the original)
        r4 += 1u;
        guest::preempt();
    } while (s32(*gptr<u32>(r5 + 0x614u)) > s32(r4));  // (from the original)
    *gptr<u32>(r5 + 0x620u) = r9;  // (from the original)
    *gptr<u32>(r5 + 0x624u) = r9;  // (from the original)
    *gptr<u32>(r5 + 0x628u) = r9;  // (from the original)
    return r5;
}

}  // namespace d_004f9650
GUEST_EXPORT_FRAMED(0x004f9650, d_004f9650::gui__KeySet__KeySet_004f9650, 0x47f0);  // pushes {r4, r5, r6, r7, r8, r9, r10, lr} first, as the original

// f_004f9f9c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Clears the grid list state, sets its positions to -100 (none) and its size to 10 by 3.
namespace d_004f9f9c {

struct __attribute__((packed)) GridListState {
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
    u32 word_40;
    u8 byte_44;
    u8 unknown_45[0x3];  // (not used here)
    u32 word_48;
    u32 word_4c;
    u8 byte_50;
    u8 unknown_51[0x1];  // (not used here)
    u16 half_52;
};
GUEST_OFFSET(GridListState, word_0, 0x0);
GUEST_OFFSET(GridListState, word_4, 0x4);
GUEST_OFFSET(GridListState, word_8, 0x8);
GUEST_OFFSET(GridListState, word_c, 0xc);
GUEST_OFFSET(GridListState, word_10, 0x10);
GUEST_OFFSET(GridListState, word_14, 0x14);
GUEST_OFFSET(GridListState, word_18, 0x18);
GUEST_OFFSET(GridListState, word_1c, 0x1c);
GUEST_OFFSET(GridListState, word_20, 0x20);
GUEST_OFFSET(GridListState, word_24, 0x24);
GUEST_OFFSET(GridListState, word_28, 0x28);
GUEST_OFFSET(GridListState, word_2c, 0x2c);
GUEST_OFFSET(GridListState, word_30, 0x30);
GUEST_OFFSET(GridListState, word_34, 0x34);
GUEST_OFFSET(GridListState, word_38, 0x38);
GUEST_OFFSET(GridListState, word_3c, 0x3c);
GUEST_OFFSET(GridListState, word_40, 0x40);
GUEST_OFFSET(GridListState, byte_44, 0x44);
GUEST_OFFSET(GridListState, word_48, 0x48);
GUEST_OFFSET(GridListState, word_4c, 0x4c);
GUEST_OFFSET(GridListState, byte_50, 0x50);
GUEST_OFFSET(GridListState, half_52, 0x52);


void GridListState__init(gptr<GridListState> grid_list_state) {
    grid_list_state->word_0 = 0;
    grid_list_state->word_4 = 0;
    grid_list_state->word_8 = 0;
    grid_list_state->word_c = 0;
    grid_list_state->word_10 = 0;
    u32 r2_1 = ~0x63u;  // (from the original)
    grid_list_state->word_14 = 0;
    grid_list_state->word_18 = 0;
    grid_list_state->word_1c = r2_1;
    u32 r3_1 = ~0u;
    grid_list_state->word_20 = r2_1;
    grid_list_state->word_24 = r2_1;
    grid_list_state->word_34 = 0;
    grid_list_state->word_28 = r2_1;
    grid_list_state->word_2c = r2_1;
    grid_list_state->word_30 = r3_1;
    grid_list_state->word_38 = 0;
    grid_list_state->word_3c = 0xa;  // (from the original)
    grid_list_state->word_40 = 3;
    grid_list_state->byte_44 = 1;
    grid_list_state->word_48 = r3_1;
    grid_list_state->word_4c = r3_1;
    grid_list_state->byte_50 = 0;
    grid_list_state->half_52 = 0;
}

}  // namespace d_004f9f9c
GUEST_EXPORT_FRAMED(0x004f9f9c, d_004f9f9c::GridListState__init, 0x10);  // pushes {r4} first, as the original

// f_004fa0fc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004fa0fc {

inline constexpr u32 vtable_gui__RepeatButton = 0x00902d94u;
inline guest::global<u32, 0x00ad664c> global_00ad664c;
inline guest::global<u32, 0x00ad6650> global_00ad6650;
inline guest::global<u32, 0x00ad6654> global_00ad6654;
inline guest::global<u32, 0x00ad6658> global_00ad6658;
inline guest::global<u32, 0x00ad665c> global_00ad665c;
inline constexpr guest::Function<0x00150bc0, u32(u32, u32, u32)> strncpy;
inline constexpr guest::Function<0x002fbb30, u32(u32, u32, u32)> copy_aligned_bytes;
inline constexpr guest::Function<0x004f33dc, u32(u32, u32, u32, u32)> gui__Widget__Widget;

u32 gui__RepeatButton__RepeatButton(gptr<gui__RepeatButton> repeat_button, u32 r1, u32 r2) {
    gui__Widget__Widget(repeat_button.addr(), r1, r2, guest::cpu()->r[3]);
    repeat_button->vtable = vtable_gui__RepeatButton;
    copy_aligned_bytes(repeat_button.addr() + 0x30u, r1, 0x54u);  // (from the original)
    u32 r0_2 = repeat_button->word_4c;
    repeat_button->word_84 = 0;
    repeat_button->byte_88 = 0;
    if (r0_2 + 0x64u == 0) {  // (from the original)
        repeat_button->word_4c = *global_00ad664c;
    }
    if (repeat_button->word_50 + 0x64u == 0) {  // (from the original)
        repeat_button->word_50 = *global_00ad6650;
    }
    if (repeat_button->word_54 + 0x64u == 0) {  // (from the original)
        repeat_button->word_54 = *global_00ad6654;
    }
    if (repeat_button->word_58 + 0x64u == 0) {  // (from the original)
        repeat_button->word_58 = *global_00ad6658;
    }
    if (repeat_button->word_5c + 0x64u == 0) {  // (from the original)
        repeat_button->word_5c = *global_00ad665c;
    }
    repeat_button->word_18 = repeat_button.addr() + 0x30u;  // (from the original)
    strncpy(repeat_button.addr() + 0x1cu, repeat_button->word_34, 0x10u);  // (from the original)
    return repeat_button.addr();
}

}  // namespace d_004fa0fc
GUEST_EXPORT_FRAMED(0x004fa0fc, d_004fa0fc::gui__RepeatButton__RepeatButton, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_004fa674: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004fa674 {

inline constexpr u32 vtable_gui__TextAreaMail = 0x00902dd8u;

void gui__TextAreaMail__TextAreaMail(gptr<gui__TextAreaMail> text_area_mail) {
    text_area_mail->word_4 = 0;
    text_area_mail->word_8 = 0;
    text_area_mail->word_18 = 0;
    text_area_mail->word_c = 0;
    text_area_mail->word_10 = 0;
    text_area_mail->byte_14 = 0;
    text_area_mail->byte_15 = 0;
    text_area_mail->word_1c = 0;
    text_area_mail->word_20 = 0;
    text_area_mail->word_24 = 0;
    text_area_mail->word_28 = 0;
    text_area_mail->vtable = vtable_gui__TextAreaMail;
}

}  // namespace d_004fa674
GUEST_EXPORT(0x004fa674, d_004fa674::gui__TextAreaMail__TextAreaMail);

// f_004fae8c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004fae8c {

inline constexpr u32 vtable_gui__TextAreaBoard = 0x00902e8cu;

void gui__TextAreaBoard__TextAreaBoard(gptr<gui__TextAreaBoard> text_area_board) {
    text_area_board->word_4 = 0;
    text_area_board->word_8 = 0;
    text_area_board->word_18 = 0;
    text_area_board->word_c = 0;
    text_area_board->word_10 = 0;
    text_area_board->byte_14 = 0;
    text_area_board->byte_15 = 0;
    text_area_board->word_1c = 0;
    text_area_board->word_20 = 0;
    text_area_board->word_24 = 0;
    text_area_board->word_28 = 0;
    text_area_board->vtable = vtable_gui__TextAreaBoard;
}

}  // namespace d_004fae8c
GUEST_EXPORT(0x004fae8c, d_004fae8c::gui__TextAreaBoard__TextAreaBoard);

// f_004fb304: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Maps the menu kind 3 to 2 and 5 to 4.
namespace d_004fb304 {


u32 normalize_menu_kind(u32 r0_unused, u32 r1) {
    u32 r0_1 = r1;
    if (r1 == 3u) {
        return 2u;
    }
    if (r0_1 == 5u) {
        r0_1 = 4u;
    }
    return r0_1;
}

}  // namespace d_004fb304
GUEST_EXPORT(0x004fb304, d_004fb304::normalize_menu_kind);

// f_004fd458: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004fd458 {

inline constexpr u32 vtable_gui__CellPhoneKeySet = 0x00902ef4u;
inline constexpr u32 vtable_gui__KeySet = 0x00902fc8u;
inline guest::global<u32, 0x00ad6540> keyboard_key_table_c;
inline constexpr guest::Function<0x0013fac4, u32(u32, u32, u32)> set_bytes;
inline constexpr guest::Function<0x002f825c, u32(u32, u32, u32, u32)> clear_aligned;
inline constexpr guest::Function<0x00779598, u32(u32)> store_constants_779598;

u32 gui__KeySet__KeySet_004fd458(gptr<gui__CellPhoneKeySet> cell_phone_key_set, u32 r1, u32 r2) {
    u32 r0 = cell_phone_key_set.addr();
    u32 r5 = r0;
    u32 r7 = 0u;
    cell_phone_key_set->vtable = vtable_gui__KeySet;
    cell_phone_key_set->word_104 = r7;
    cell_phone_key_set->byte_108 = u8(r7);
    cell_phone_key_set->word_10c = r1;
    clear_aligned(r5 + 4u, 0x100u, r2, guest::cpu()->r[3]);  // (from the original)
    u32 r4_1 = r5 + 0x754u;  // (from the original)
    cell_phone_key_set->vtable = vtable_gui__CellPhoneKeySet;
    u32 r8 = ~0u;
    cell_phone_key_set->word_110 = r7;
    cell_phone_key_set->word_754 = r7;
    cell_phone_key_set->word_758 = r8;
    cell_phone_key_set->word_76c = r7;
    cell_phone_key_set->word_770 = r7;
    cell_phone_key_set->word_774 = r7;
    cell_phone_key_set->word_778 = r7;
    cell_phone_key_set->word_77c = *keyboard_key_table_c;
    clear_aligned(r5 + 0x114u, 0x100u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    cell_phone_key_set->word_754 = 0x19;  // (from the original)
    u32 r4 = 0u;
    do {
        *gptr<u32>(r5 + (r4 << 2) + 0x114u) = r7;  // (from the original)
        u32 r6_1 = r4 * 7u + r5;
        set_bytes(r6_1 + 0x214u, 7u, 1u);  // (from the original)
        set_bytes(r6_1 + 0x3d4u, 7u, 1u);  // (from the original)
        store_constants_779598(r6_1 + 0x594u);  // (from the original)
        r4 += 1u;
        guest::preempt();
    } while (s32(*gptr<u32>(r5 + 0x754u)) > s32(r4));  // (from the original)
    *gptr<u32>(r5 + 0x75cu) = r8;  // (from the original)
    *gptr<u32>(r5 + 0x760u) = r8;  // (from the original)
    *gptr<u32>(r5 + 0x764u) = r8;  // (from the original)
    *gptr<u32>(r5 + 0x768u) = r8;  // (from the original)
    return r5;
}

}  // namespace d_004fd458
GUEST_EXPORT_FRAMED(0x004fd458, d_004fd458::gui__KeySet__KeySet_004fd458, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_004fdec0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004fdec0 {

struct __attribute__((packed)) Local_004fdec0_r7_1 {
    u8 unknown_0[0xc];  // (not used here)
    u32 word_c;
};
GUEST_OFFSET(Local_004fdec0_r7_1, word_c, 0xc);

inline constexpr u32 vtable_gui__Key = 0x00902fa8u;
inline constexpr guest::Function<0x00100835, u32(u32, u32, u32)> string16_length;
inline constexpr guest::Function<0x00101801, u32(u32, u32, u32)> wcsncpy;
inline constexpr guest::Function<0x0010193b, u32(u32, u32, u32)> wmemset;
inline constexpr guest::Function<0x00131280, u32(u32, u32, u32)> allocate_on_heap_entry;
inline constexpr guest::Function<0x00150bc0, u32(u32, u32, u32)> strncpy;
inline constexpr guest::Function<0x002f825c, u32(u32, u32)> clear_aligned;
inline constexpr guest::Function<0x002fbb30, u32(u32, u32, u32, u32)> copy_aligned_bytes;
inline constexpr guest::Function<0x00569d50, u32(u32, u32, u32)> layout_allocator_4;

u32 gui__Key__Key(gptr<gui__Key> key, u32 r1) {
    u32 r0 = key.addr();
    u32 r6_1 = 0;
    u32 r5 = r0;
    key->vtable = vtable_gui__Key;
    copy_aligned_bytes(r5 + 4u, r1, 0x88u, guest::cpu()->r[3]);  // (from the original)
    key->word_8c = 0;
    key->word_a4 = 0;
    u32 r0_3 = clear_aligned(r5 + 0x90u, 0x11u);  // (from the original)
    u32 r1_1 = key->word_8;
    if (r1_1 != 0) {
        r0_3 = strncpy(r5 + 0x90u, r1_1, 0x10u);  // (from the original)
        r1_1 = guest::cpu()->r[1];
    }
    u32 r0_5 = layout_allocator_4(r0_3, r1_1, guest::cpu()->r[2]);
    u32 block_3 = allocate_on_heap_entry(*gptr<u32>(r5 + 4u) << 2, *gptr<u32>(r0_5 + 4u), 4u);
    r1 = guest::cpu()->r[1];
    u32 r2 = guest::cpu()->r[2];
    *gptr<u32>(r5 + 0xa4u) = block_3;  // (from the original)
    u32 r4 = 0u;
    if (s32(*gptr<u32>(r5 + 4u)) > 0) {
        do {
            gptr<Local_004fdec0_r7_1> r7_1 = gptr<Local_004fdec0_r7_1>(r5 + (r4 << 2));
            u32 r0_8 = r7_1->word_c;
            if (r0_8 == 0) {
                r6_1 = 0u;
            } else {
                r0_8 = string16_length(r0_8, r1, r2);
                r1 = guest::cpu()->r[1];
                r2 = guest::cpu()->r[2];
                r6_1 = r0_8;
            }
            u32 r0_9 = layout_allocator_4(r0_8, r1, r2);
            u32 block_4 = allocate_on_heap_entry((r6_1 << 1) + 2u, *gptr<u32>(r0_9 + 4u), 4u);
            *gptr<u32>(*gptr<u32>(r5 + 0xa4u) + (r4 << 2)) = block_4;  // (from the original)
            wmemset(block_4, 0u, r6_1 + 1u);
            r2 = guest::cpu()->r[2];
            r1 = r7_1->word_c;
            if (r1 != 0) {
                wcsncpy(gptr<u32>(*gptr<u32>(r5 + 0xa4u))[r4], r1, r6_1);  // (from the original)
                r1 = guest::cpu()->r[1];
                r2 = guest::cpu()->r[2];
            }
            r4 += 1u;
            guest::preempt();
        } while (s32(*gptr<u32>(r5 + 4u)) > s32(r4));
    }
    return r5;
}

}  // namespace d_004fdec0
GUEST_EXPORT_FRAMED(0x004fdec0, d_004fdec0::gui__Key__Key, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_004fe28c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004fe28c {

struct __attribute__((packed)) Local_004fe28c_r1_4 {
    u8 unknown_0[0x34];  // (not used here)
    u16 half_34;
    u16 half_36;
};
GUEST_OFFSET(Local_004fe28c_r1_4, half_34, 0x34);
GUEST_OFFSET(Local_004fe28c_r1_4, half_36, 0x36);

inline constexpr u32 vtable_gui__NrmKey = 0x00903014u;
inline constexpr guest::Function<0x00131280, u32(u32, u32, u32)> allocate_on_heap_entry;
inline constexpr guest::Function<0x002fbb30, u32(u32, u32, u32)> copy_aligned_bytes;
inline constexpr guest::Function<0x004fdec0, u32(u32, u32, u32, u32)> gui__Key__Key;
inline constexpr guest::Function<0x00569d50, u32(u32)> layout_allocator_4;

u32 gui__NrmKey__NrmKey(u32 nrm_key, u32 r1, u32 r2, u32 r3) {
    u32 r0_1 = gui__Key__Key(nrm_key, r1, r2, r3);
    u32 r4 = r0_1;
    *gptr<u32>(r4) = vtable_gui__NrmKey;
    copy_aligned_bytes(r4 + 0xa8u, r1, 0xccu);  // (from the original)
    *gptr<u32>(r4 + 0x174u) = 0;  // (from the original)
    u32 r0_3 = layout_allocator_4(0u);
    u32 block_2 = allocate_on_heap_entry(*gptr<u32>(r4 + 0xa8u) << 1, *gptr<u32>(r0_3 + 4u), 4u);  // (from the original)
    r2 = guest::cpu()->r[2];
    *gptr<u32>(r4 + 0x174u) = block_2;  // (from the original)
    u32 r0_6 = *gptr<u32>(r4 + 0xa8u);  // (from the original)
    if (s32(r0_6) <= 0) {
        nrm_key = 0u;
    } else {
        nrm_key = r0_6 & 1u;
        if (nrm_key == 1u) {
            r2 = *gptr<u16>(r4 + 0x134u);  // (from the original)
            *gptr<u16>(block_2) = u16(r2);
        }
    }
    u32 r1_3 = *gptr<u32>(r4 + 0xa8u);  // (from the original)
    if (r1_3 != nrm_key && s32(r1_3) >= s32(nrm_key)) {
        r2 = 2u;
    }
    if (s32(r1_3) > s32(nrm_key)) {
        do {
            gptr<Local_004fe28c_r1_4> r1_4 = gptr<Local_004fe28c_r1_4>(r4 + (nrm_key << 1) + 0x100u);  // (from the original)
            u32 r12_1 = r2 + (nrm_key << 1);
            *gptr<u16>(*gptr<u32>(r4 + 0x174u) + (nrm_key << 1)) = r1_4->half_34;  // (from the original)
            nrm_key += 2u;
            *gptr<u16>(*gptr<u32>(r4 + 0x174u) + r12_1) = r1_4->half_36;  // (from the original)
            guest::preempt();
        } while (s32(*gptr<u32>(r4 + 0xa8u)) > s32(nrm_key));  // (from the original)
    }
    return r4;
}

}  // namespace d_004fe28c
GUEST_EXPORT_FRAMED(0x004fe28c, d_004fe28c::gui__NrmKey__NrmKey, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_004fe440: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Updates the selection from the input, when no error screen is up.
namespace d_004fe440 {

struct __attribute__((packed)) Local_004fe440_r4_1 {
    u8 unknown_0[0x154];  // (not used here)
    u32 word_154;
    u8 unknown_158[0xb0];  // (not used here)
    u8 byte_208;
};
GUEST_OFFSET(Local_004fe440_r4_1, word_154, 0x154);
GUEST_OFFSET(Local_004fe440_r4_1, byte_208, 0x208);

struct __attribute__((packed)) Local_004fe440_r4_2 {
    u8 unknown_0[0x154];  // (not used here)
    u32 word_154;
    u8 unknown_158[0xb0];  // (not used here)
    u8 byte_208;
};
GUEST_OFFSET(Local_004fe440_r4_2, word_154, 0x154);
GUEST_OFFSET(Local_004fe440_r4_2, byte_208, 0x208);

struct __attribute__((packed)) Local_004fe440_r4_3 {
    u8 unknown_0[0x154];  // (not used here)
    u32 word_154;
    u8 unknown_158[0xb0];  // (not used here)
    u8 byte_208;
};
GUEST_OFFSET(Local_004fe440_r4_3, word_154, 0x154);
GUEST_OFFSET(Local_004fe440_r4_3, byte_208, 0x208);

struct __attribute__((packed)) Local_004fe440_r4_4 {
    u8 unknown_0[0x154];  // (not used here)
    u32 word_154;
    u8 unknown_158[0xb0];  // (not used here)
    u8 byte_208;
};
GUEST_OFFSET(Local_004fe440_r4_4, word_154, 0x154);
GUEST_OFFSET(Local_004fe440_r4_4, byte_208, 0x208);

struct __attribute__((packed)) Local_004fe440_r4_5 {
    u8 unknown_0[0x154];  // (not used here)
    u32 word_154;
    u8 unknown_158[0xb0];  // (not used here)
    u8 byte_208;
};
GUEST_OFFSET(Local_004fe440_r4_5, word_154, 0x154);
GUEST_OFFSET(Local_004fe440_r4_5, byte_208, 0x208);

struct __attribute__((packed)) Local_004fe440_r4_6 {
    u8 unknown_0[0x154];  // (not used here)
    u32 word_154;
    u8 unknown_158[0xb0];  // (not used here)
    u8 byte_208;
};
GUEST_OFFSET(Local_004fe440_r4_6, word_154, 0x154);
GUEST_OFFSET(Local_004fe440_r4_6, byte_208, 0x208);

struct __attribute__((packed)) Local_004fe440_r4_7 {
    u8 unknown_0[0x154];  // (not used here)
    u32 word_154;
    u8 unknown_158[0xb0];  // (not used here)
    u8 byte_208;
};
GUEST_OFFSET(Local_004fe440_r4_7, word_154, 0x154);
GUEST_OFFSET(Local_004fe440_r4_7, byte_208, 0x208);

struct __attribute__((packed)) Local_004fe440_r4_8 {
    u8 unknown_0[0x154];  // (not used here)
    u32 word_154;
    u8 unknown_158[0xb0];  // (not used here)
    u8 byte_208;
};
GUEST_OFFSET(Local_004fe440_r4_8, word_154, 0x154);
GUEST_OFFSET(Local_004fe440_r4_8, byte_208, 0x208);

inline constexpr u32 menu_selection_address = 0x0094fd3cu;
inline guest::global<u32, 0x0094fd3c> menu_selection;
inline constexpr guest::Function<0x005ce6dc, u32(u32)> err_eula_is_idle_with_byte_fac;

u32 Selection__update(u32 selection) {
    gptr<Local_004fe440_r4_1> r4_1 = gptr<Local_004fe440_r4_1>(*menu_selection);
    u32 r0_1 = err_eula_is_idle_with_byte_fac(selection);
    if (r0_1 == 0) {
        r0_1 = r4_1->byte_208;
        if (r0_1 == 0) {
            r0_1 = r4_1->word_154;
            if ((r0_1 & 0x400u) != 0) {  // (from the original)
                return 1u;
            }
        }
    }
    gptr<Local_004fe440_r4_2> r4_2 = gptr<Local_004fe440_r4_2>(*menu_selection);
    u32 r0_2 = err_eula_is_idle_with_byte_fac(r0_1);
    if (r0_2 == 0) {
        r0_2 = r4_2->byte_208;
        if (r0_2 == 0) {
            r0_2 = r4_2->word_154;
            if ((r0_2 & 0x4000u) != 0) {  // (from the original)
                return 1u;
            }
        }
    }
    gptr<Local_004fe440_r4_3> r4_3 = gptr<Local_004fe440_r4_3>(*menu_selection);
    u32 r0_3 = err_eula_is_idle_with_byte_fac(r0_2);
    if (r0_3 == 0) {
        r0_3 = r4_3->byte_208;
        if (r0_3 == 0) {
            r0_3 = r4_3->word_154;
            if ((r0_3 & 0x800u) != 0) {  // (from the original)
                return 1u;
            }
        }
    }
    gptr<Local_004fe440_r4_4> r4_4 = gptr<Local_004fe440_r4_4>(*menu_selection);
    u32 r0_4 = err_eula_is_idle_with_byte_fac(r0_3);
    if (r0_4 == 0) {
        r0_4 = r4_4->byte_208;
        if (r0_4 == 0) {
            r0_4 = r4_4->word_154;
            if ((r0_4 & 0x10000u) != 0) {  // (from the original)
                return 1u;
            }
        }
    }
    gptr<Local_004fe440_r4_5> r4_5 = gptr<Local_004fe440_r4_5>(*menu_selection);
    u32 r0_5 = err_eula_is_idle_with_byte_fac(r0_4);
    if (r0_5 == 0) {
        r0_5 = r4_5->byte_208;
        if (r0_5 == 0) {
            r0_5 = r4_5->word_154;
            if ((r0_5 & 0x1000u) != 0) {  // (from the original)
                return 1u;
            }
        }
    }
    gptr<Local_004fe440_r4_6> r4_6 = gptr<Local_004fe440_r4_6>(*menu_selection);
    u32 r0_6 = err_eula_is_idle_with_byte_fac(r0_5);
    if (r0_6 == 0) {
        r0_6 = r4_6->byte_208;
        if (r0_6 == 0) {
            r0_6 = r4_6->word_154;
            if ((r0_6 & 0x20000u) != 0) {  // (from the original)
                return 1u;
            }
        }
    }
    gptr<Local_004fe440_r4_7> r4_7 = gptr<Local_004fe440_r4_7>(*menu_selection);
    u32 r0_7 = err_eula_is_idle_with_byte_fac(r0_6);
    if (r0_7 == 0) {
        r0_7 = r4_7->byte_208;
        if (r0_7 == 0) {
            r0_7 = r4_7->word_154;
            if ((r0_7 & 0x2000u) != 0) {  // (from the original)
                return 1u;
            }
        }
    }
    gptr<Local_004fe440_r4_8> r4_8 = gptr<Local_004fe440_r4_8>(*menu_selection);
    u32 r0_8 = err_eula_is_idle_with_byte_fac(r0_7);
    if (r0_8 != 0 || r4_8->byte_208 != 0 || (r4_8->word_154 & 0x40000u) == 0) {  // (from the original)
        return 0u;
    }
    return 1u;
}

}  // namespace d_004fe440
GUEST_EXPORT_FRAMED(0x004fe440, d_004fe440::Selection__update, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_004fe5b8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether the selection accepts any of the eight direction inputs.
namespace d_004fe5b8 {

inline constexpr u32 menu_selection_address = 0x0094fd3cu;
inline guest::global<u32, 0x0094fd3c> menu_selection;
inline constexpr guest::Function<0x006d40d4, u32(u32, u32)> selection_accepts;

u32 Selection__any_direction() {
    u32 r0_2 = selection_accepts(*menu_selection, 0x400u);  // (from the original)
    if (r0_2 != 0) {
        return 1u;
    }
    u32 r0_4 = selection_accepts(*menu_selection, 0x4000u);  // (from the original)
    if (r0_4 != 0) {
        return 1u;
    }
    u32 r0_6 = selection_accepts(*menu_selection, 0x800u);  // (from the original)
    if (r0_6 != 0) {
        return 1u;
    }
    u32 r0_8 = selection_accepts(*menu_selection, 0x10000u);  // (from the original)
    if (r0_8 != 0) {
        return 1u;
    }
    u32 r0_10 = selection_accepts(*menu_selection, 0x1000u);  // (from the original)
    if (r0_10 != 0) {
        return 1u;
    }
    u32 r0_12 = selection_accepts(*menu_selection, 0x20000u);  // (from the original)
    if (r0_12 != 0) {
        return 1u;
    }
    u32 r0_14 = selection_accepts(*menu_selection, 0x2000u);  // (from the original)
    if (r0_14 != 0) {
        return 1u;
    }
    u32 r0_16 = selection_accepts(*menu_selection, 0x40000u);  // (from the original)
    return r0_16 == 0 ? r0_16 : 1u;
}

}  // namespace d_004fe5b8
GUEST_EXPORT_FRAMED(0x004fe5b8, d_004fe5b8::Selection__any_direction, 0x4010);  // pushes {r4, lr} first, as the original

// f_004fe6c8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Sets the two menu callbacks.
namespace d_004fe6c8 {

inline guest::global<u32, 0x0095e10c> global_0095e10c;
inline guest::global<u32, 0x0095e180> global_0095e180;

void set_menu_callbacks(u32 r0, u32 r1) {
    *global_0095e10c = r0;
    *global_0095e180 = r1;
}

}  // namespace d_004fe6c8
GUEST_EXPORT(0x004fe6c8, d_004fe6c8::set_menu_callbacks);

// f_004fe968: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether the layout's main animation and its 5 parts are all stopped.
namespace d_004fe968 {

inline constexpr guest::Function<0x004fe9f4, u32(u32, u32, u32, u32)> LayoutAnims__part_state;
inline constexpr guest::Function<0x004fef54, u32(u32, u32, u32, u32)> LayoutAnims__part;

u32 LayoutAnims__all_stopped(u32 layout_anims, u32 r1, u32 r2_unused, u32 r3) {
    u32 r0_1 = LayoutAnims__part(layout_anims, r1, layout_anims, r3);
    u32 r2_1 = guest::cpu()->r[2];
    u32 r0_2 = LayoutAnims__part_state(r2_1, r1, r2_1, r0_1);
    u32 r3_1 = guest::cpu()->r[3];
    u32 r2 = r0_2;
    layout_anims = 1u;
    if (r3_1 != 0) {
        layout_anims = *gptr<u32>(r3_1 + 0x14u) != 1u;  // (from the original)
    }
    r1 = 0u;
    do {
        u32 r3_2 = gptr<u32>(r2)[r1];
        if (r3_2 != 0) {
            u32 r3_4 = *gptr<u32>(r3_2 + 0x14u) != 1u;  // (from the original)
            layout_anims &= r3_4;
        }
        r1 += 1u;
        guest::preempt();
    } while (s32(r1) < 5);
    guest::cpu()->r[1] = r1;
    return layout_anims;
}

}  // namespace d_004fe968
GUEST_EXPORT_FRAMED(0x004fe968, d_004fe968::LayoutAnims__all_stopped, 0x4010);  // pushes {r4, lr} first, as the original

// f_004fed2c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Initializes the animation's tracks.
namespace d_004fed2c {

struct __attribute__((packed)) LayoutAnim {
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
    u32 word_ac;
    u32 word_b0;
    u32 word_b4;
    u32 word_b8;
    u32 word_bc;
    u32 word_c0;
    u32 word_c4;
    u32 word_c8;
    u32 word_cc;
    u32 word_d0;
    u32 word_d4;
    u32 word_d8;
    u32 word_dc;
    u32 word_e0;
    u32 word_e4;
};
GUEST_OFFSET(LayoutAnim, word_0, 0x0);
GUEST_OFFSET(LayoutAnim, word_4, 0x4);
GUEST_OFFSET(LayoutAnim, word_8, 0x8);
GUEST_OFFSET(LayoutAnim, word_c, 0xc);
GUEST_OFFSET(LayoutAnim, word_10, 0x10);
GUEST_OFFSET(LayoutAnim, word_14, 0x14);
GUEST_OFFSET(LayoutAnim, word_18, 0x18);
GUEST_OFFSET(LayoutAnim, word_1c, 0x1c);
GUEST_OFFSET(LayoutAnim, word_20, 0x20);
GUEST_OFFSET(LayoutAnim, word_24, 0x24);
GUEST_OFFSET(LayoutAnim, word_28, 0x28);
GUEST_OFFSET(LayoutAnim, word_2c, 0x2c);
GUEST_OFFSET(LayoutAnim, word_30, 0x30);
GUEST_OFFSET(LayoutAnim, word_34, 0x34);
GUEST_OFFSET(LayoutAnim, word_38, 0x38);
GUEST_OFFSET(LayoutAnim, word_3c, 0x3c);
GUEST_OFFSET(LayoutAnim, word_40, 0x40);
GUEST_OFFSET(LayoutAnim, word_44, 0x44);
GUEST_OFFSET(LayoutAnim, word_48, 0x48);
GUEST_OFFSET(LayoutAnim, word_4c, 0x4c);
GUEST_OFFSET(LayoutAnim, word_50, 0x50);
GUEST_OFFSET(LayoutAnim, word_54, 0x54);
GUEST_OFFSET(LayoutAnim, word_58, 0x58);
GUEST_OFFSET(LayoutAnim, word_5c, 0x5c);
GUEST_OFFSET(LayoutAnim, word_60, 0x60);
GUEST_OFFSET(LayoutAnim, word_64, 0x64);
GUEST_OFFSET(LayoutAnim, word_68, 0x68);
GUEST_OFFSET(LayoutAnim, word_6c, 0x6c);
GUEST_OFFSET(LayoutAnim, word_70, 0x70);
GUEST_OFFSET(LayoutAnim, word_74, 0x74);
GUEST_OFFSET(LayoutAnim, word_78, 0x78);
GUEST_OFFSET(LayoutAnim, word_7c, 0x7c);
GUEST_OFFSET(LayoutAnim, word_80, 0x80);
GUEST_OFFSET(LayoutAnim, word_84, 0x84);
GUEST_OFFSET(LayoutAnim, word_88, 0x88);
GUEST_OFFSET(LayoutAnim, word_8c, 0x8c);
GUEST_OFFSET(LayoutAnim, word_90, 0x90);
GUEST_OFFSET(LayoutAnim, word_94, 0x94);
GUEST_OFFSET(LayoutAnim, word_98, 0x98);
GUEST_OFFSET(LayoutAnim, word_9c, 0x9c);
GUEST_OFFSET(LayoutAnim, word_a0, 0xa0);
GUEST_OFFSET(LayoutAnim, word_a4, 0xa4);
GUEST_OFFSET(LayoutAnim, word_a8, 0xa8);
GUEST_OFFSET(LayoutAnim, word_ac, 0xac);
GUEST_OFFSET(LayoutAnim, word_b0, 0xb0);
GUEST_OFFSET(LayoutAnim, word_b4, 0xb4);
GUEST_OFFSET(LayoutAnim, word_b8, 0xb8);
GUEST_OFFSET(LayoutAnim, word_bc, 0xbc);
GUEST_OFFSET(LayoutAnim, word_c0, 0xc0);
GUEST_OFFSET(LayoutAnim, word_c4, 0xc4);
GUEST_OFFSET(LayoutAnim, word_c8, 0xc8);
GUEST_OFFSET(LayoutAnim, word_cc, 0xcc);
GUEST_OFFSET(LayoutAnim, word_d0, 0xd0);
GUEST_OFFSET(LayoutAnim, word_d4, 0xd4);
GUEST_OFFSET(LayoutAnim, word_d8, 0xd8);
GUEST_OFFSET(LayoutAnim, word_dc, 0xdc);
GUEST_OFFSET(LayoutAnim, word_e0, 0xe0);
GUEST_OFFSET(LayoutAnim, word_e4, 0xe4);


void LayoutAnim__init_tracks(gptr<LayoutAnim> layout_anim) {
    layout_anim->word_0 = 0;
    layout_anim->word_4 = 0;
    layout_anim->word_8 = 0;
    layout_anim->word_c = 0;
    layout_anim->word_10 = 0;
    u32 r2_1 = ~0x63u;  // (from the original)
    layout_anim->word_14 = 0;
    layout_anim->word_18 = 0;
    layout_anim->word_1c = r2_1;
    layout_anim->word_20 = r2_1;
    layout_anim->word_24 = r2_1;
    layout_anim->word_34 = 0;
    layout_anim->word_28 = r2_1;
    layout_anim->word_d8 = 0;
    layout_anim->word_dc = 0;
    layout_anim->word_e0 = 0;
    layout_anim->word_e4 = 0;
    layout_anim->word_38 = 0;
    layout_anim->word_3c = 0;
    layout_anim->word_40 = 0;
    layout_anim->word_44 = 0;
    layout_anim->word_48 = 0;
    layout_anim->word_4c = 0;
    layout_anim->word_50 = 0;
    layout_anim->word_54 = 0;
    layout_anim->word_58 = 0;
    layout_anim->word_5c = 0;
    layout_anim->word_60 = 0;
    layout_anim->word_64 = 0;
    layout_anim->word_68 = 0;
    layout_anim->word_6c = 0;
    layout_anim->word_70 = 0;
    layout_anim->word_74 = 0;
    layout_anim->word_78 = 0;
    layout_anim->word_7c = 0;
    layout_anim->word_80 = 0;
    layout_anim->word_84 = 0;
    layout_anim->word_88 = 0;
    layout_anim->word_8c = 0;
    layout_anim->word_90 = 0;
    layout_anim->word_94 = 0;
    layout_anim->word_98 = 0;
    layout_anim->word_9c = 0;
    layout_anim->word_a0 = 0;
    layout_anim->word_a4 = 0;
    layout_anim->word_a8 = 0;
    layout_anim->word_ac = 0;
    layout_anim->word_b0 = 0;
    layout_anim->word_b4 = 0;
    layout_anim->word_b8 = 0;
    layout_anim->word_bc = 0;
    layout_anim->word_c0 = 0;
    layout_anim->word_c4 = 0;
    layout_anim->word_c8 = 0;
    layout_anim->word_cc = 0;
    layout_anim->word_d0 = 0;
    layout_anim->word_d4 = 0;
    layout_anim->word_2c = r2_1;
    layout_anim->word_30 = ~0u;
    guest::cpu()->r[1] = 0u;
}

}  // namespace d_004fed2c
GUEST_EXPORT(0x004fed2c, d_004fed2c::LayoutAnim__init_tracks);

// f_004ff388: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004ff388 {

inline constexpr u32 vtable_gui__ButtonEx = 0x0090306cu;
inline guest::global<u32, 0x00ad6618> global_00ad6618;
inline guest::global<u32, 0x00ad661c> global_00ad661c;
inline guest::global<u32, 0x00ad6620> global_00ad6620;
inline guest::global<u32, 0x00ad6624> global_00ad6624;
inline guest::global<u32, 0x00ad6628> global_00ad6628;
inline constexpr guest::Function<0x00150bc0, u32(u32, u32, u32)> strncpy;
inline constexpr guest::Function<0x002fbb30, u32(u32, u32, u32)> copy_aligned_bytes;
inline constexpr guest::Function<0x004f33dc, u32(u32, u32, u32, u32)> gui__Widget__Widget;

u32 gui__ButtonEx__ButtonEx(gptr<gui__ButtonEx> button_ex, u32 r1, u32 r2) {
    gui__Widget__Widget(button_ex.addr(), r1, r2, guest::cpu()->r[3]);
    button_ex->vtable = vtable_gui__ButtonEx;
    copy_aligned_bytes(button_ex.addr() + 0x30u, r1, 0xe8u);  // (from the original)
    u32 r2_1 = button_ex->word_4c;
    button_ex->byte_118 = 1;
    if (r2_1 + 0x64u == 0) {  // (from the original)
        button_ex->word_4c = *global_00ad6618;
    }
    if (button_ex->word_50 + 0x64u == 0) {  // (from the original)
        button_ex->word_50 = *global_00ad661c;
    }
    if (button_ex->word_54 + 0x64u == 0) {  // (from the original)
        button_ex->word_54 = *global_00ad6620;
    }
    if (button_ex->word_58 + 0x64u == 0) {  // (from the original)
        button_ex->word_58 = *global_00ad6624;
    }
    if (button_ex->word_5c + 0x64u == 0) {  // (from the original)
        button_ex->word_5c = *global_00ad6628;
    }
    button_ex->word_18 = button_ex.addr() + 0x30u;  // (from the original)
    strncpy(button_ex.addr() + 0x1cu, button_ex->word_34, 0x10u);  // (from the original)
    return button_ex.addr();
}

}  // namespace d_004ff388
GUEST_EXPORT_FRAMED(0x004ff388, d_004ff388::gui__ButtonEx__ButtonEx, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original
