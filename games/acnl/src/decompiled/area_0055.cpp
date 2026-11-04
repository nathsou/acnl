// Functions decompiled by tools/decomp (docs/decomp.md), each proved equal to the recompiled original (prove-cpp). The
// names come from games/acnl/names (tools/decomp/names.py); the others are generated (d_<address>::f_<address>,
// Object_<address>_<argument>, word_<offset>) and still to be chosen. Hexadecimal constants are the original's
// (addresses, offsets, sizes and ids as the game has them).
#include "guest/guest.hpp"
#include "recovered/structs.hpp"

#include <bit>

using guest::gptr;

// f_005500a0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Takes the next free emitter of the ring, links it into its group's list and resets it; null (with a warning) when
// all are in use.
namespace d_005500a0 {

struct __attribute__((packed)) EffectSystem {
    u8 unknown_0[0x428];  // (not used here)
    u32 word_428;
    u8 unknown_42c[0x428];  // (not used here)
    u32 word_854;
};
GUEST_OFFSET(EffectSystem, word_428, 0x428);
GUEST_OFFSET(EffectSystem, word_854, 0x854);

struct __attribute__((packed)) Local_005500a0_r0_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u8 unknown_c[0x40];  // (not used here)
    u32 word_4c;
    u32 word_50;
    u32 word_54;
};
GUEST_OFFSET(Local_005500a0_r0_1, word_0, 0x0);
GUEST_OFFSET(Local_005500a0_r0_1, word_4, 0x4);
GUEST_OFFSET(Local_005500a0_r0_1, word_8, 0x8);
GUEST_OFFSET(Local_005500a0_r0_1, word_4c, 0x4c);
GUEST_OFFSET(Local_005500a0_r0_1, word_50, 0x50);
GUEST_OFFSET(Local_005500a0_r0_1, word_54, 0x54);

struct __attribute__((packed)) Local_005500a0_r4_4 {
    u8 unknown_0[0x23c];  // (not used here)
    float float_23c;
    float float_240;
};
GUEST_OFFSET(Local_005500a0_r4_4, float_23c, 0x23c);
GUEST_OFFSET(Local_005500a0_r4_4, float_240, 0x240);

inline guest::global<u32, 0x00af78f0> effect_default_scale_x;
inline guest::global<u32, 0x00af78f4> effect_default_scale_y;
inline guest::global<u32, 0x00af78f8> effect_default_scale_z;
inline constexpr guest::Function<0x0055030c, u32(u32, u32, u32, u32)> EffectSystem__warn;

u32 EffectSystem__alloc_emitter(gptr<EffectSystem> effect_system, u32 r1, u32 r2, float S0) {
    u32 r0 = effect_system.addr();
    u32 r3_2 = 0;
    u32 r4_5 = 0;
    u32 r5 = r0 + 0x83cu;
    u32 r6 = 0x2614u;
    u32 r3 = effect_system->word_428;
    u32 r12 = effect_system->word_854;
    u32 i = 0u;
    do {
        u32 r4_1 = *gptr<u32>(r0 + 0x83cu) + 1u & r12;
        *gptr<u32>(r5) = r4_1;
        if (*gptr<u32>(r3 + (r6 + ((r4_1 * 0x4d1u) << 3))) == 0) {
            i = r0 + (*gptr<u32>(r1 + 8u) << 2);
            u32 r4_3 = i;
            gptr<Local_005500a0_r0_1> r0_1 = gptr<Local_005500a0_r0_1>(r3 + ((*gptr<u32>(r0 + 0x83cu) * 0x4d1u) << 3));
            u32 ea_3 = i + 0x42cu;
            i = ea_3;
            u32 r3_1 = *gptr<u32>(ea_3);
            if (r3_1 == 0) {
                *gptr<u32>(r4_3 + 0x42cu) = r0_1.addr();
                r3_2 = r0_1.addr() + 0x2680u;
                *gptr<u32>(r0_1.addr() + 0x2684u) = 0;
            } else {
                *gptr<u32>(r3_1 + 0x2680u) = r0_1.addr();
                r3_2 = r0_1.addr() + 0x2680u;
                *gptr<u32>(r0_1.addr() + 0x2684u) = *gptr<u32>(i);
                *gptr<u32>(i) = r0_1.addr();
            }
            *gptr<u32>(r3_2) = 0;
            r0_1->word_8 = 0;
            r0_1->word_0 = r2;
            r0_1->word_4 = 0;
            *gptr<u32>(r0_1.addr() + 0x260cu) = 0;
            i = 0x2618u;
            *gptr<u32>(r0_1.addr() + 0x2614u) = *gptr<u32>(r1 + 0xa8u);
            float S0_1 = 0.0f;
            gptr<Local_005500a0_r4_4> r4_4 = gptr<Local_005500a0_r4_4>(r0_1.addr() + 0x2400u);
            *gptr<u32>(r0_1.addr() + 0x2610u) = *gptr<u32>(r1 + 8u);
            *gptr<u32>(i + r0_1.addr()) = 0;
            r4_4->float_240 = S0_1;
            r4_4->float_23c = S0_1;
            r0_1->word_4c = *effect_default_scale_x;
            r0_1->word_50 = *effect_default_scale_y;
            r0_1->word_54 = *effect_default_scale_z;
            guest::cpu()->s[0] = S0_1;
            return r0_1.addr();
        }
        r4_5 = *gptr<u32>(r0 + 0x848u);
        i += 1u;
        guest::preempt();
    } while (s32(r4_5) > s32(i));
    guest::cpu()->s[0] = S0;
    EffectSystem__warn(r0, 0x5501ccu, r2, r3);
    return 0u;
}

}  // namespace d_005500a0
GUEST_EXPORT_FRAMED(0x005500a0, d_005500a0::EffectSystem__alloc_emitter, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_00550204: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Creates the emitter set with the transform's position and no rotation.
namespace d_00550204 {

struct __attribute__((packed)) EffectSystem {
    u8 unknown_0[0x87c];  // (not used here)
    u32 word_87c;
};
GUEST_OFFSET(EffectSystem, word_87c, 0x87c);

inline constexpr guest::Function<0x0014f004, u32(u32, u32, u32, u32)> Matrix34__from_33;
inline constexpr guest::Function<0x00555f90, u32(u32, u32, u32)> EffectRenderer__write_matrix_commands;

struct __attribute__((packed)) EffectSystemCreateEmitterAtFrame {
    u8 unknown_0[0xc];  // (not read or written by name)
    float float_c;
    u8 unknown_10[0xc];  // (not read or written by name)
    float float_1c;
    u8 unknown_20[0xc];  // (not read or written by name)
    float float_2c;
    u8 unknown_30[0x4];  // (not read or written by name)
};
GUEST_OFFSET(EffectSystemCreateEmitterAtFrame, float_c, 0xc);
GUEST_OFFSET(EffectSystemCreateEmitterAtFrame, float_1c, 0x1c);
GUEST_OFFSET(EffectSystemCreateEmitterAtFrame, float_2c, 0x2c);
GUEST_SIZE(EffectSystemCreateEmitterAtFrame, 0x34);

u32 EffectSystem__create_emitter_at(gptr<EffectSystem> effect_system, u32 r1, u32 r2, float S0) {
    guest::StackFrameOf<EffectSystemCreateEmitterAtFrame> frame;  // the original's stack frame
    Matrix34__from_33(frame.at(0).addr(), r2, r2, guest::cpu()->r[3]);
    float S0_1 = 0.0f;
    frame->float_2c = S0_1;
    frame->float_1c = S0_1;
    frame->float_c = S0_1;
    u32 r0_2 = effect_system->word_87c;
    guest::cpu()->s[0] = S0_1;
    return EffectRenderer__write_matrix_commands(r0_2, r1, frame.at(0).addr());
}

}  // namespace d_00550204
GUEST_EXPORT_FRAMED(0x00550204, d_00550204::EffectSystem__create_emitter_at, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_00550438: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Takes the next free particle of the ring and counts it; null (with a warning) when all are in use.
namespace d_00550438 {

struct __attribute__((packed)) EffectSystem {
    u8 unknown_0[0x424];  // (not used here)
    u32 word_424;
    u8 unknown_428[0x428];  // (not used here)
    u32 word_850;
};
GUEST_OFFSET(EffectSystem, word_424, 0x424);
GUEST_OFFSET(EffectSystem, word_850, 0x850);

inline constexpr guest::Function<0x0055030c, u32(u32, u32, u32, u32)> EffectSystem__warn;

u32 EffectSystem__alloc_particle(gptr<EffectSystem> effect_system) {
    u32 r0 = effect_system.addr();
    u32 r4_2 = 0;
    u32 r1 = effect_system->word_424;
    u32 r3 = effect_system->word_850;
    u32 i = 0u;
    u32 r5 = 0x114u;
    u32 r12 = r0 + 0x834u;
    do {
        u32 r4_1 = *gptr<u32>(r0 + 0x834u) + 1u & r3;
        *gptr<u32>(r12) = r4_1;
        if (*gptr<u32>(r1 + (r5 + ((r4_1 * 9u) + (r4_1 << 6) << 2))) == 0) {
            *gptr<u32>(r0 + 0x870u) = *gptr<u32>(r0 + 0x870u) + 1u;
            u32 r0_1 = *gptr<u32>(r0 + 0x834u);
            guest::cpu()->r[1] = r1;
            return r1 + (r0_1 * 9u + (r0_1 << 6) << 2);
        }
        r4_2 = *gptr<u32>(r0 + 0x844u);
        i += 1u;
        guest::preempt();
    } while (s32(r4_2) > s32(i));
    EffectSystem__warn(r0, 0x5504bcu, i, r3);
    return 0u;
}

}  // namespace d_00550438
GUEST_EXPORT_FRAMED(0x00550438, d_00550438::EffectSystem__alloc_particle, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_005504e8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Clears the renderer's buffer use and the system's counts, and resets the render state.
namespace d_005504e8 {

struct __attribute__((packed)) EffectSystem {
    u8 unknown_0[0x858];  // (not used here)
    u32 word_858;
    u32 word_85c;
    u32 word_860;
    u32 word_864;
    u8 unknown_868[0x8];  // (not used here)
    u32 word_870;
    u32 word_874;
    u32 word_878;
    u32 word_87c;
};
GUEST_OFFSET(EffectSystem, word_858, 0x858);
GUEST_OFFSET(EffectSystem, word_85c, 0x85c);
GUEST_OFFSET(EffectSystem, word_860, 0x860);
GUEST_OFFSET(EffectSystem, word_864, 0x864);
GUEST_OFFSET(EffectSystem, word_870, 0x870);
GUEST_OFFSET(EffectSystem, word_874, 0x874);
GUEST_OFFSET(EffectSystem, word_878, 0x878);
GUEST_OFFSET(EffectSystem, word_87c, 0x87c);

inline guest::global<u32, 0x0097e6ec> effect_render_state_a;
inline guest::global<u8, 0x0097e6f0> effect_render_state_b;
inline guest::global<u8, 0x0097e6f1> effect_render_state_c;
inline guest::global<u8, 0x0097e6f2> effect_render_state_d;
inline constexpr guest::Function<0x00556094, u32(u32, u32, u32, u32)> EffectRenderer__copy_setup_commands;

u32 EffectSystem__reset_counts(gptr<EffectSystem> effect_system, u32 r1) {
    u32 r2 = 0;
    *gptr<u32>(effect_system->word_87c + 0x60768u) = 0;
    u32 r0_2 = EffectRenderer__copy_setup_commands(effect_system->word_87c, r1, r2, 0x60768u);
    effect_system->word_858 = 0;
    effect_system->word_85c = 0;
    effect_system->word_860 = 0;
    effect_system->word_864 = 0;
    effect_system->word_870 = 0;
    effect_system->word_874 = 0;
    effect_system->word_878 = 0;
    *effect_render_state_b = 0x1c;
    *effect_render_state_c = 4;
    *effect_render_state_d = 0;
    *effect_render_state_a = 0;
    return r0_2;
}

}  // namespace d_005504e8
GUEST_EXPORT_FRAMED(0x005504e8, d_005504e8::EffectSystem__reset_counts, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_00551d94: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Particle command: rotates the vector about the axis (x, y or z) by the angle; the next command.
namespace d_00551d94 {

struct __attribute__((packed)) ParticleRotateCommandArg2 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(ParticleRotateCommandArg2, word_0, 0x0);
GUEST_OFFSET(ParticleRotateCommandArg2, word_4, 0x4);

struct __attribute__((packed)) Local_00551d94_r4_1 {
    float float_0;
    float float_4;
    float float_8;
};
GUEST_OFFSET(Local_00551d94_r4_1, float_0, 0x0);
GUEST_OFFSET(Local_00551d94_r4_1, float_4, 0x4);
GUEST_OFFSET(Local_00551d94_r4_1, float_8, 0x8);

inline constexpr guest::Function<0x0014f55c, u32(u32, u32, u32)> sin_cos_of_angle;

struct __attribute__((packed)) ParticleRotateCommandFrame {
    float float_0;
    float float_4;
    u8 unknown_8[0x4];  // (not read or written by name)
};
GUEST_OFFSET(ParticleRotateCommandFrame, float_0, 0x0);
GUEST_OFFSET(ParticleRotateCommandFrame, float_4, 0x4);
GUEST_SIZE(ParticleRotateCommandFrame, 0xc);

u32 particle_rotate_command(u32 r0_unused, u32 r1, gptr<ParticleRotateCommandArg2> arg2, float S0, float S1) {
    guest::StackFrameOf<ParticleRotateCommandFrame> frame;  // the original's stack frame
    gptr<Local_00551d94_r4_1> r4_1 = gptr<Local_00551d94_r4_1>(r1);
    u32 r2_1 = arg2->word_0;
    sin_cos_of_angle(frame.at(0).addr(), frame.at(4).addr(), r2_1);
    float S0_1 = guest::cpu()->s[0];
    float S1_1 = guest::cpu()->s[1];
    u32 r0_2 = arg2->word_4;
    if (r0_2 != 0) {
        if (r0_2 == 1u) {
            float S1_2 = frame->float_4;
            float S4_1 = r4_1->float_8;
            float S3_1 = r4_1->float_0;
            float S2_1 = frame->float_0;
            S0_1 = S4_1 * S1_2 + S3_1 * S2_1;
            S1_1 = S3_1 * S1_2 - S4_1 * S2_1;
            r4_1->float_8 = S0_1;
            r4_1->float_0 = S1_1;
            guest::cpu()->s[0] = S0_1;
            guest::cpu()->s[1] = S1_1;
            return arg2.addr() + 8u;
        }
        if (r0_2 != 2u) {
            guest::cpu()->s[0] = S0_1;
            guest::cpu()->s[1] = S1_1;
            return arg2.addr() + 8u;
        }
        float S1_3 = frame->float_4;
        float S2_2 = frame->float_0;
        float S3_2 = r4_1->float_0;
        float S4_2 = r4_1->float_4;
        S0_1 = S3_2 * S1_3 + S4_2 * S2_2;
        S1_1 = S4_2 * S1_3 - S3_2 * S2_2;
    } else {
        float S1_4 = frame->float_4;
        float S4_3 = r4_1->float_4;
        float S2_3 = r4_1->float_8;
        float S3_3 = frame->float_0;
        r4_1 = gptr<Local_00551d94_r4_1>(r4_1.addr() + 4u);
        S0_1 = S4_3 * S1_4 + S2_3 * S3_3;
        S1_1 = S2_3 * S1_4 - S4_3 * S3_3;
    }
    r4_1->float_0 = S0_1;
    r4_1->float_4 = S1_1;
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    return arg2.addr() + 8u;
}

}  // namespace d_00551d94
GUEST_EXPORT_FRAMED(0x00551d94, d_00551d94::particle_rotate_command, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_00551e58: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Scales the particle's alpha (and/or scale) by the emitter's flicker table at its age.
namespace d_00551e58 {

struct __attribute__((packed)) Particle {
    u8 unknown_0[0xa8];  // (not used here)
    u32 word_a8;
};
GUEST_OFFSET(Particle, word_a8, 0xa8);

struct __attribute__((packed)) ParticleApplyFlickerArg1 {
    u8 unknown_0[0xf0];  // (not used here)
    u32 word_f0;
    u8 unknown_f4[0x4];  // (not used here)
    u32 word_f8;
    u8 unknown_fc[0x4];  // (not used here)
    float float_100;
    float float_104;
};
GUEST_OFFSET(ParticleApplyFlickerArg1, word_f0, 0xf0);
GUEST_OFFSET(ParticleApplyFlickerArg1, word_f8, 0xf8);
GUEST_OFFSET(ParticleApplyFlickerArg1, float_100, 0x100);
GUEST_OFFSET(ParticleApplyFlickerArg1, float_104, 0x104);

struct __attribute__((packed)) Local_00551e58_r0_2 {
    float float_0;
    float float_4;
    u32 word_8;
};
GUEST_OFFSET(Local_00551e58_r0_2, float_0, 0x0);
GUEST_OFFSET(Local_00551e58_r0_2, float_4, 0x4);
GUEST_OFFSET(Local_00551e58_r0_2, word_8, 0x8);

inline guest::global<u32, 0x0097e744> global_0097e744;

void Particle__apply_flicker(gptr<Particle> particle, gptr<ParticleApplyFlickerArg1> arg1) {
    u32 r0_1 = particle->word_a8;
    gptr<Local_00551e58_r0_2> r0_2 = gptr<Local_00551e58_r0_2>(r0_1 + u32(*gptr<u16>(r0_1 + 0x200u)));
    u32 r2_1 = *gptr<u16>((r0_1 + 0x100u) + 0xf8u);
    float S1_1 = std::bit_cast<float>(gptr<u32>(*global_0097e744)[arg1->word_f8 * r0_2->word_8 + vcvt_sz_f(float(s32(arg1->word_f0)) * r0_2->float_4) & 0x7fu]);
    float S0_1 = 1.0f - S1_1 * r0_2->float_0;
    if ((r2_1 & 2u) != 0) {
        arg1->float_100 = S0_1;
    }
    if ((r2_1 & 4u) != 0) {
        arg1->float_104 = S0_1;
    }
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
}

}  // namespace d_00551e58
GUEST_EXPORT_FRAMED(0x00551e58, d_00551e58::Particle__apply_flicker, 0x10);  // pushes {r4} first, as the original

// f_00552190: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Particle command: moves the particle's velocity toward the target on the flagged axes by the rate; the next command.
namespace d_00552190 {

struct __attribute__((packed)) ParticleApproachCommandArg1 {
    float float_0;
    float float_4;
    float float_8;
    u8 unknown_c[0xc];  // (not used here)
    float float_18;
    float float_1c;
    float float_20;
};
GUEST_OFFSET(ParticleApproachCommandArg1, float_0, 0x0);
GUEST_OFFSET(ParticleApproachCommandArg1, float_4, 0x4);
GUEST_OFFSET(ParticleApproachCommandArg1, float_8, 0x8);
GUEST_OFFSET(ParticleApproachCommandArg1, float_18, 0x18);
GUEST_OFFSET(ParticleApproachCommandArg1, float_1c, 0x1c);
GUEST_OFFSET(ParticleApproachCommandArg1, float_20, 0x20);

struct __attribute__((packed)) ParticleApproachCommandArg2 {
    float float_0;
    float float_4;
    float float_8;
    float float_c;
    u32 word_10;
};
GUEST_OFFSET(ParticleApproachCommandArg2, float_0, 0x0);
GUEST_OFFSET(ParticleApproachCommandArg2, float_4, 0x4);
GUEST_OFFSET(ParticleApproachCommandArg2, float_8, 0x8);
GUEST_OFFSET(ParticleApproachCommandArg2, float_c, 0xc);
GUEST_OFFSET(ParticleApproachCommandArg2, word_10, 0x10);


u32 particle_approach_command(u32 r0_unused, gptr<ParticleApproachCommandArg1> arg1, gptr<ParticleApproachCommandArg2> arg2, float S0, float S1) {
    u32 r0_1 = arg2->word_10;
    if ((r0_1 & 1u) != 0) {
        float S0_1 = arg1->float_18;
        S1 = arg2->float_0;
        S0 = S0_1 + (arg2->float_4 - arg1->float_0 - S0_1) * S1;
        arg1->float_18 = S0;
    }
    if ((r0_1 & 2u) != 0) {
        float S0_2 = arg1->float_1c;
        S1 = arg2->float_0;
        S0 = S0_2 + (arg2->float_8 - arg1->float_4 - S0_2) * S1;
        arg1->float_1c = S0;
    }
    if ((r0_1 & 4u) == 0) {
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        return arg2.addr() + 0x14u;
    }
    float S0_3 = arg1->float_20;
    float S1_1 = arg2->float_0;
    float S0_4 = S0_3 + (arg2->float_c - arg1->float_8 - S0_3) * S1_1;
    arg1->float_20 = S0_4;
    guest::cpu()->s[0] = S0_4;
    guest::cpu()->s[1] = S1_1;
    return arg2.addr() + 0x14u;
}

}  // namespace d_00552190
GUEST_EXPORT(0x00552190, d_00552190::particle_approach_command);

// f_0055224c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Particle command: at each interval, adds a random offset scaled per axis to the velocity; the next command.
namespace d_0055224c {

struct __attribute__((packed)) ParticleJitterCommandArg0 {
    u8 unknown_0[0x78];  // (not used here)
    u16 half_78;
};
GUEST_OFFSET(ParticleJitterCommandArg0, half_78, 0x78);

struct __attribute__((packed)) ParticleJitterCommandArg1 {
    u8 unknown_0[0x18];  // (not used here)
    float float_18;
    float float_1c;
    float float_20;
    u8 unknown_24[0xcc];  // (not used here)
    u32 word_f0;
};
GUEST_OFFSET(ParticleJitterCommandArg1, float_18, 0x18);
GUEST_OFFSET(ParticleJitterCommandArg1, float_1c, 0x1c);
GUEST_OFFSET(ParticleJitterCommandArg1, float_20, 0x20);
GUEST_OFFSET(ParticleJitterCommandArg1, word_f0, 0xf0);

struct __attribute__((packed)) ParticleJitterCommandArg2 {
    u32 word_0;
    float float_4;
    float float_8;
    float float_c;
};
GUEST_OFFSET(ParticleJitterCommandArg2, word_0, 0x0);
GUEST_OFFSET(ParticleJitterCommandArg2, float_4, 0x4);
GUEST_OFFSET(ParticleJitterCommandArg2, float_8, 0x8);
GUEST_OFFSET(ParticleJitterCommandArg2, float_c, 0xc);

struct __attribute__((packed)) Local_0055224c_r0_3 {
    float float_0;
    float float_4;
    float float_8;
};
GUEST_OFFSET(Local_0055224c_r0_3, float_0, 0x0);
GUEST_OFFSET(Local_0055224c_r0_3, float_4, 0x4);
GUEST_OFFSET(Local_0055224c_r0_3, float_8, 0x8);

inline constexpr u32 particle_jitter_address = 0x0097e83cu;
inline guest::global<u32, 0x0097e83c> particle_jitter;
inline constexpr guest::Function<0x002f9e1c, u32(u32, u32, u32, u32)> divide_with_remainder;

u32 particle_jitter_command(gptr<ParticleJitterCommandArg0> arg0, gptr<ParticleJitterCommandArg1> arg1, gptr<ParticleJitterCommandArg2> arg2, u32 r3, float S0, float S1, float S2, float S3, float S4, float S5, float S6, float S7, float S8) {
    u32 r1_1 = arg2->word_0;
    u32 r0_1 = arg1->word_f0;
    divide_with_remainder(r0_1, r1_1, arg2.addr(), r3);
    float S0_1 = guest::cpu()->s[0];
    float S1_1 = guest::cpu()->s[1];
    if (guest::cpu()->r[1] == 0) {
        u32 r2_1 = *particle_jitter;
        u32 r0_2 = arg0->half_78;
        arg0->half_78 = u16(r0_2 + 1u);
        gptr<Local_0055224c_r0_3> r0_3 = gptr<Local_0055224c_r0_3>(r2_1 + (r0_2 & ~0xfe00u) * 0xcu);
        S0_1 = arg1->float_18 + r0_3->float_0 * arg2->float_4;
        float S2_1 = arg1->float_1c + r0_3->float_4 * arg2->float_8;
        S1_1 = arg1->float_20 + r0_3->float_8 * arg2->float_c;
        arg1->float_18 = S0_1;
        arg1->float_1c = S2_1;
        arg1->float_20 = S1_1;
    }
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    return arg2.addr() + 0x10u;
}

}  // namespace d_0055224c
GUEST_EXPORT_FRAMED(0x0055224c, d_0055224c::particle_jitter_command, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_005547e0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The emitter's own matrix, or its set's when it follows the set.
namespace d_005547e0 {

struct __attribute__((packed)) Emitter {
    u8 unknown_0[0xa8];  // (not used here)
    u32 word_a8;
};
GUEST_OFFSET(Emitter, word_a8, 0xa8);


u32 Emitter__matrix(gptr<Emitter> emitter, u32 r1) {
    return *gptr<u8>(emitter->word_a8 + 0x2du) == 0 ? r1 + 0x6cu : emitter.addr() + 0x48u;
}

}  // namespace d_005547e0
GUEST_EXPORT(0x005547e0, d_005547e0::Emitter__matrix);

// f_00554a64: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Constructs the particle preview: its model manager, texture data and emitters.
namespace d_00554a64 {

struct __attribute__((packed)) Local_00554a64_r6_2 {
    u8 unknown_0[0xc];  // (not used here)
    u32 word_c;
};
GUEST_OFFSET(Local_00554a64_r6_2, word_c, 0xc);

inline constexpr u32 vtable_sead__FixedSafeString_256_ = 0x009048b0u;
inline constexpr u32 vtable_sead__FixedSafeStringBase_char__256_ = 0x009050f8u;
inline constexpr u32 vtable_sead__BufferedSafeStringBase_char_ = 0x0090558cu;
inline constexpr u32 vtable_sead__ptcl__PtclPreview = 0x009059a0u;
inline guest::global<u32, 0x008a3bbc> float_one;
inline guest::global<u32, 0x008a3bc0> float_zero;
inline guest::global<u8, 0x008c9f1c> empty_string;
inline constexpr guest::Function<0x002fd108, u32(u32, u32, u32, u32)> allocate_on_heap;
inline constexpr guest::Function<0x005547f8, u32(u32, u32)> Emitter__reset;
inline constexpr guest::Function<0x00554fbc, u32(u32, u32, u32, u32)> sead__ptcl__TextureData__TextureData;
inline constexpr guest::Function<0x00555208, u32(u32, u32, u32, u32)> sead__ptcl__PtclModelMgr__PtclModelMgr;
inline constexpr guest::Function<0x0074dcac, u32(u32, u32, u32, u32)> owner_has_88_or_8c;

struct __attribute__((packed)) SeadPtclPtclPreviewPtclPreviewFrame {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(SeadPtclPtclPreviewPtclPreviewFrame, word_0, 0x0);
GUEST_OFFSET(SeadPtclPtclPreviewPtclPreviewFrame, word_4, 0x4);
GUEST_SIZE(SeadPtclPtclPreviewPtclPreviewFrame, 0x8);

u32 sead__ptcl__PtclPreview__PtclPreview(gptr<sead__ptcl__PtclPreview> ptcl_preview, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<SeadPtclPtclPreviewPtclPreviewFrame> frame;  // the original's stack frame
    u32 r0 = ptcl_preview.addr();
    u32 r7 = r2;
    u32 r6_1 = r3;
    ptcl_preview->vtable = vtable_sead__ptcl__PtclPreview;
    u32 r0_1 = r0 + 0x38u;
    ptcl_preview->word_3c = r0_1 + 0xcu;
    ptcl_preview->word_40 = 0x100;
    ptcl_preview->vtable_38 = vtable_sead__BufferedSafeStringBase_char_;
    *gptr<u8>(ptcl_preview->word_3c + 0xffu) = *empty_string;
    ptcl_preview->vtable_38 = vtable_sead__FixedSafeStringBase_char__256_;
    u32 r3_1 = *empty_string;
    *gptr<u8>(ptcl_preview->word_3c) = u8(r3_1);
    ptcl_preview->vtable_38 = vtable_sead__FixedSafeString_256_;
    u32 r2_1 = *float_zero;
    u32 ea_1 = r0_1 + 0x10cu;
    ptcl_preview->word_144 = r2_1;
    u32 r2_2 = *float_zero;
    ptcl_preview->word_148 = r2_2;
    ptcl_preview->word_14c = *float_zero;
    ptcl_preview->word_150 = *float_one;
    u32 texture_data = ea_1 + 0x10u;
    sead__ptcl__TextureData__TextureData(texture_data, ea_1, r2_2, r3_1);
    r3 = guest::cpu()->r[3];
    u32 r8 = 0u;
    ptcl_preview->word_18c = r7;
    ptcl_preview->word_20 = r8;
    ptcl_preview->word_4 = r1;
    ptcl_preview->word_8 = r6_1;
    u32 r4 = texture_data - 0x154u;
    u32 r6 = 0x29e8u;
    u32 i = r8;
    do {
        u32 block = allocate_on_heap(r6, *gptr<u32>(r4 + 4u), 4u, r3);
        u32 r1_2 = *gptr<u32>(r4 + 8u);
        frame->word_0 = r4;
        frame->word_4 = r1_2;
        u32 r0_4 = sead__ptcl__PtclModelMgr__PtclModelMgr(block, *gptr<u32>(r4 + 4u), r7, i);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r1 = r4 + (i << 2);
        i += 1u;
        *gptr<u32>(r1 + 0xcu) = r0_4;
        guest::preempt();
    } while (s32(i) < 5);
    i = 0u;
    *gptr<u32>(r4 + 0x20u) = r8;
    do {
        gptr<Local_00554a64_r6_2> r6_2 = gptr<Local_00554a64_r6_2>(r4 + (i << 2));
        u32 r0_6 = owner_has_88_or_8c(r6_2->word_c, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (r0_6 != 0) {
            u32 r0_7 = *gptr<u32>(r4 + 0x20u);
            r2 = r6_2->word_c;
            r3 = r0_7 + 1u;
            r1 = r4 + (r0_7 << 2);
            *gptr<u32>(r4 + 0x20u) = r3;
            *gptr<u32>(r1 + 0x24u) = r2;
        }
        i += 1u;
        guest::preempt();
    } while (s32(i) < 5);
    Emitter__reset(r4, 1u);
    *gptr<u32>(r4 + 0x220u) = 0xb4;
    *gptr<u8>(r4 + 0x224u) = u8(r8);
    return r4;
}

}  // namespace d_00554a64
GUEST_EXPORT_FRAMED(0x00554a64, d_00554a64::sead__ptcl__PtclPreview__PtclPreview, 0x41f0);  // pushes {r4, i, r6, r7, r8, lr} first, as the original

// f_00554de0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Constructs a particle project for a resource (arg 1) with its two ids (args 2 and 3) and a scale: three
// empty names and 64 empty emitter slots.
namespace d_00554de0 {

inline constexpr u32 vtable_sead__FixedSafeString_128__rec = 0x00904860u;
inline constexpr u32 vtable_sead__FixedSafeString_256_ = 0x009048b0u;
inline constexpr u32 vtable_sead__FixedSafeString_64__rec = 0x00904950u;
inline constexpr u32 vtable_sead__FixedSafeStringBase_char__128_ = 0x009050bcu;
inline constexpr u32 vtable_sead__FixedSafeStringBase_char__256_ = 0x009050f8u;
inline constexpr u32 vtable_sead__FixedSafeStringBase_char__64_ = 0x00905170u;
inline constexpr u32 vtable_sead__BufferedSafeStringBase_char_ = 0x0090558cu;
inline constexpr u32 vtable_sead__ptcl__PtclProject = 0x009059b4u;
inline guest::global<u8, 0x008c9f1c> empty_string;

u32 sead__ptcl__PtclProject__PtclProject(gptr<sead__ptcl__PtclProject> ptcl_project, u32 r1, u32 r2, u32 r3) {
    u32 r0 = ptcl_project.addr();
    float S0 = std::bit_cast<float>(*gptr<u32>(guest::cpu()->r[13] + 0x10u));
    ptcl_project->vtable = vtable_sead__ptcl__PtclProject;
    u32 r0_1 = r0 + 0x110u;
    ptcl_project->vtable_110 = vtable_sead__BufferedSafeStringBase_char_;
    ptcl_project->word_114 = r0_1 + 0xcu;
    ptcl_project->word_118 = 0x100;
    *gptr<u8>(ptcl_project->word_114 + 0xffu) = *empty_string;
    ptcl_project->vtable_110 = vtable_sead__FixedSafeStringBase_char__256_;
    u32 r6_1 = *empty_string;
    *gptr<u8>(ptcl_project->word_114) = u8(r6_1);
    ptcl_project->vtable_110 = vtable_sead__FixedSafeString_256_;
    ptcl_project->word_224 = 0x40;
    ptcl_project->vtable_21c = vtable_sead__BufferedSafeStringBase_char_;
    ptcl_project->word_220 = r0_1 + 0x118u;
    *gptr<u8>(ptcl_project->word_220 + 0x3fu) = *empty_string;
    ptcl_project->vtable_21c = vtable_sead__FixedSafeStringBase_char__64_;
    u32 r6_2 = *empty_string;
    *gptr<u8>(ptcl_project->word_220) = u8(r6_2);
    ptcl_project->vtable_21c = vtable_sead__FixedSafeString_64__rec;
    ptcl_project->word_270 = 0x80;
    ptcl_project->vtable_268 = vtable_sead__BufferedSafeStringBase_char_;
    ptcl_project->word_26c = r0_1 + 0x164u;
    *gptr<u8>(r0_1 + 0x163u + 0x80u) = *empty_string;
    ptcl_project->vtable_268 = vtable_sead__FixedSafeStringBase_char__128_;
    *gptr<u8>(ptcl_project->word_26c) = *empty_string;
    ptcl_project->vtable_268 = vtable_sead__FixedSafeString_128__rec;
    ptcl_project->word_4 = r1;
    r0 = r0_1 - 0x110u;
    ptcl_project->word_108 = r2;
    ptcl_project->word_10c = r3;
    r2 = 0u;
    ptcl_project->float_2f4 = S0;
    r1 = r2;
    r3 = r2;
    do {
        u32 r2_1 = r2 + 1u;
        r1 += 2u;
        *gptr<u32>((r0 + (r2 << 2)) + 8u) = r3;
        r2 = r2_1 + 1u;
        *gptr<u32>((r0 + (r2_1 << 2)) + 8u) = r3;
        guest::preempt();
    } while (s32(r1) < 0x40);
    guest::cpu()->r[1] = r1;
    guest::cpu()->s[0] = S0;
    return r0;
}

}  // namespace d_00554de0
GUEST_EXPORT_FRAMED(0x00554de0, d_00554de0::sead__ptcl__PtclProject__PtclProject, 0xf0);  // pushes {r4, r5, r6, r7} first, as the original

// f_00554fbc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Constructs a particle texture's data: a texture with no image.
namespace d_00554fbc {

inline constexpr u32 vtable_sead__ptcl__TextureData = 0x009059c4u;
inline constexpr guest::Function<0x00540c3c, u32(u32)> sead__TextureCtrGR__TextureCtrGR;

u32 sead__ptcl__TextureData__TextureData(gptr<sead__ptcl__TextureData> texture_data) {
    texture_data->vtable = vtable_sead__ptcl__TextureData;
    u32 r0_1 = texture_data.addr() + 0x24u;
    sead__TextureCtrGR__TextureCtrGR(r0_1);
    texture_data->word_14 = 0;
    texture_data->byte_20 = 0;
    return r0_1 - 0x24u;
}

}  // namespace d_00554fbc
GUEST_EXPORT_FRAMED(0x00554fbc, d_00554fbc::sead__ptcl__TextureData__TextureData, 0x4010);  // pushes {r4, lr} first, as the original

// f_00555024: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Destroys a particle texture's data: frees its image, then the texture.
namespace d_00555024 {

inline constexpr u32 vtable_sead__ptcl__TextureData = 0x009059c4u;
inline constexpr guest::Function<0x002ffb64, u32(u32, u32, u32, u32)> free_memory;
inline constexpr guest::Function<0x0053f6bc, u32(u32)> sead__TextureCtrGR__destructor;

u32 sead__ptcl__TextureData__destructor(gptr<sead__ptcl__TextureData> texture_data) {
    texture_data->vtable = vtable_sead__ptcl__TextureData;
    u32 r0_1 = texture_data->word_14;
    if (r0_1 != 0) {
        free_memory(r0_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    }
    texture_data->word_14 = 0;
    texture_data->byte_20 = 0;
    sead__TextureCtrGR__destructor(0u);
    return texture_data.addr();
}

}  // namespace d_00555024
GUEST_EXPORT_FRAMED(0x00555024, d_00555024::sead__ptcl__TextureData__destructor, 0x4010);  // pushes {r4, lr} first, as the original

// f_00555094: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00555094 {

struct __attribute__((packed)) sead__SafeStringBase_char_ {
    u8 unknown_0[0x2970];  // (not used here)
    u32 word_2970;
    u32 word_2974;
    u32 word_2978;
    u32 word_297c;
    u32 word_2980;
    u32 word_2984;
    u32 word_2988;
    u32 word_298c;
    u32 word_2990;
    u32 word_2994;
    u32 word_2998;
    u32 word_299c;
    u8 unknown_29a0[0x20];  // (not used here)
    u32 word_29c0;
    u32 word_29c4;
    u32 word_29c8;
    u32 word_29cc;
    u32 word_29d0;
    u32 word_29d4;
    u32 word_29d8;
    u32 word_29dc;
    u32 word_29e0;
};
GUEST_OFFSET(sead__SafeStringBase_char_, word_2970, 0x2970);
GUEST_OFFSET(sead__SafeStringBase_char_, word_2974, 0x2974);
GUEST_OFFSET(sead__SafeStringBase_char_, word_2978, 0x2978);
GUEST_OFFSET(sead__SafeStringBase_char_, word_297c, 0x297c);
GUEST_OFFSET(sead__SafeStringBase_char_, word_2980, 0x2980);
GUEST_OFFSET(sead__SafeStringBase_char_, word_2984, 0x2984);
GUEST_OFFSET(sead__SafeStringBase_char_, word_2988, 0x2988);
GUEST_OFFSET(sead__SafeStringBase_char_, word_298c, 0x298c);
GUEST_OFFSET(sead__SafeStringBase_char_, word_2990, 0x2990);
GUEST_OFFSET(sead__SafeStringBase_char_, word_2994, 0x2994);
GUEST_OFFSET(sead__SafeStringBase_char_, word_2998, 0x2998);
GUEST_OFFSET(sead__SafeStringBase_char_, word_299c, 0x299c);
GUEST_OFFSET(sead__SafeStringBase_char_, word_29c0, 0x29c0);
GUEST_OFFSET(sead__SafeStringBase_char_, word_29c4, 0x29c4);
GUEST_OFFSET(sead__SafeStringBase_char_, word_29c8, 0x29c8);
GUEST_OFFSET(sead__SafeStringBase_char_, word_29cc, 0x29cc);
GUEST_OFFSET(sead__SafeStringBase_char_, word_29d0, 0x29d0);
GUEST_OFFSET(sead__SafeStringBase_char_, word_29d4, 0x29d4);
GUEST_OFFSET(sead__SafeStringBase_char_, word_29d8, 0x29d8);
GUEST_OFFSET(sead__SafeStringBase_char_, word_29dc, 0x29dc);
GUEST_OFFSET(sead__SafeStringBase_char_, word_29e0, 0x29e0);

inline constexpr u32 vtable_sead__SafeStringBase_char__rec = 0x009047f8u;
inline guest::global<u32, 0x00af78e4> effect_default_rotation_x;
inline guest::global<u32, 0x00af78e8> effect_default_rotation_y;
inline guest::global<u32, 0x00af78ec> effect_default_rotation_z;
inline guest::global<u32, 0x00af78f0> effect_default_scale_x;
inline guest::global<u32, 0x00af78f4> effect_default_scale_y;
inline guest::global<u32, 0x00af78f8> effect_default_scale_z;
inline guest::global<u32, 0x00af7968> global_00af7968;
inline guest::global<u32, 0x00af796c> global_00af796c;
inline guest::global<u32, 0x00af7970> global_00af7970;
inline constexpr guest::Function<0x0013cd00, u32(u32, u32, u32, u32)> SafeString__copy;

struct __attribute__((packed)) SeadSafeStringBaseCharSafeStringBase00555094Frame {
    u32 object_0_vtable;
    u32 word_4;
};
GUEST_OFFSET(SeadSafeStringBaseCharSafeStringBase00555094Frame, object_0_vtable, 0x0);
GUEST_OFFSET(SeadSafeStringBaseCharSafeStringBase00555094Frame, word_4, 0x4);
GUEST_SIZE(SeadSafeStringBaseCharSafeStringBase00555094Frame, 0x8);

void sead__SafeStringBase_char___SafeStringBase_00555094(gptr<sead__SafeStringBase_char_> safe_string_base_char, float S0) {
    guest::StackFrameOf<SeadSafeStringBaseCharSafeStringBase00555094Frame> frame;  // the original's stack frame
    u32 r0 = safe_string_base_char.addr();
    u32 r3_2 = 0;
    u32 r4 = r0;
    r0 = ~0u;
    u32 r6 = 0u;
    *gptr<u32>(r4 + 0x29b8u) = r0;
    *gptr<u32>(0x29b8u - (r0 << 2) + r4) = r6;
    *gptr<u8>((0x29b8u & ~(r0 >> 0x1c)) + r4) = 1;
    u32 r5 = r4 + 0x2800u;
    safe_string_base_char->word_29c0 = *effect_default_scale_x;
    safe_string_base_char->word_29c4 = *effect_default_scale_y;
    safe_string_base_char->word_29c8 = *effect_default_scale_z;
    safe_string_base_char->word_29cc = *global_00af7968;
    safe_string_base_char->word_29d0 = *global_00af796c;
    safe_string_base_char->word_29d4 = *global_00af7970;
    safe_string_base_char->word_29d8 = *effect_default_rotation_x;
    safe_string_base_char->word_29dc = *effect_default_rotation_y;
    safe_string_base_char->word_29e0 = *effect_default_rotation_z;
    safe_string_base_char->word_2970 = r6;
    safe_string_base_char->word_2974 = r6;
    safe_string_base_char->word_2978 = r6;
    safe_string_base_char->word_297c = r6;
    safe_string_base_char->word_2980 = r6;
    safe_string_base_char->word_2984 = r6;
    safe_string_base_char->word_2988 = r6;
    safe_string_base_char->word_298c = r6;
    safe_string_base_char->word_2990 = r6;
    safe_string_base_char->word_2994 = r6;
    u32 r1 = 0u;
    safe_string_base_char->word_2998 = r6;
    u32 r2 = r1;
    safe_string_base_char->word_299c = r6;
    do {
        u32 r1_1 = r1 + 1u;
        r3_2 = (r4 + (r1 << 3)) + 0x2974u;
        r2 += 2u;
        *gptr<u32>(r3_2) = r0;
        r1 = r1_1 + 1u;
        *gptr<u32>(r4 + (r1_1 << 3) + 0x2974u) = r0;
        guest::preempt();
    } while (s32(r2) < 6);
    frame->word_4 = 0x8c1c28;
    frame->object_0_vtable = vtable_sead__SafeStringBase_char__rec;
    guest::cpu()->s[0] = S0;
    SafeString__copy(r4 + 0x14cu, frame.at(0).addr(), ~0u, r3_2);
    float S0_1 = 1.0f;
    *gptr<u32>(r4 + 0x29e4u) = r6;
    *gptr<u32>(r5 + 0x1b4u) = std::bit_cast<u32>(S0_1);
    guest::cpu()->s[0] = S0_1;
}

}  // namespace d_00555094
GUEST_EXPORT_FRAMED(0x00555094, d_00555094::sead__SafeStringBase_char___SafeStringBase_00555094, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_005551f4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Resets the emitter's fade.
namespace d_005551f4 {

struct __attribute__((packed)) Emitter {
    u8 unknown_0[0x29a8];  // (not used here)
    float float_29a8;
};
GUEST_OFFSET(Emitter, float_29a8, 0x29a8);


u32 Emitter__reset_fade(gptr<Emitter> emitter) {
    float S0_1 = 0.0f;
    emitter->float_29a8 = S0_1;
    guest::cpu()->s[0] = S0_1;
    return emitter.addr() + 0x2800u;
}

}  // namespace d_005551f4
GUEST_EXPORT(0x005551f4, d_005551f4::Emitter__reset_fade);

// f_005556d4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Destroys the particle model manager: its models and their tables.
namespace d_005556d4 {

inline constexpr u32 vtable_sead__ptcl__PtclModelMgr = 0x009059d4u;
inline constexpr guest::Function<0x002f76ad, u32(u32, u32, u32, u32)> destroy_array_elements;
inline constexpr guest::Function<0x002ffb64, u32(u32)> free_memory;
inline constexpr guest::Function<0x0055c5ec, u32(u32, u32, u32, u32)> PtclModelMgr__destroy;

u32 sead__ptcl__PtclModelMgr__deleting_destructor(gptr<sead__ptcl__PtclModelMgr> ptcl_model_mgr, u32 r1_unused, u32 r2, u32 r3) {
    u32 r0_1 = ptcl_model_mgr->word_c;
    ptcl_model_mgr->vtable = vtable_sead__ptcl__PtclModelMgr;
    if (r0_1 != 0) {
        PtclModelMgr__destroy(r0_1, vtable_sead__ptcl__PtclModelMgr, r2, r3);
        free_memory(r0_1);
    }
    destroy_array_elements(ptcl_model_mgr.addr() + 0x2034u, 0x5450f0u, 0x10cu, 2u);
    destroy_array_elements(ptcl_model_mgr.addr() + 0x1e1cu, 0x5450f0u, 0x10cu, 2u);
    destroy_array_elements(ptcl_model_mgr.addr() + 0x1c04u, 0x5450f0u, 0x10cu, 2u);
    destroy_array_elements(ptcl_model_mgr.addr() + 0x19ecu, 0x5450f0u, 0x10cu, 2u);
    destroy_array_elements(ptcl_model_mgr.addr() + 0x17d4u, 0x5450f0u, 0x10cu, 2u);
    destroy_array_elements(ptcl_model_mgr.addr() + 0x13a4u, 0x5450f0u, 0x10cu, 4u);
    destroy_array_elements(ptcl_model_mgr.addr() + 0xf74u, 0x5450f0u, 0x10cu, 2u);
    destroy_array_elements(ptcl_model_mgr.addr() + 0xd5cu, 0x5450f0u, 0x10cu, 2u);
    destroy_array_elements(ptcl_model_mgr.addr() + 0xb44u, 0x5450f0u, 0x10cu, 2u);
    destroy_array_elements(ptcl_model_mgr.addr() + 0x92cu, 0x5450f0u, 0x10cu, 2u);
    destroy_array_elements(ptcl_model_mgr.addr() + 0x714u, 0x5450f0u, 0x10cu, 2u);
    destroy_array_elements(ptcl_model_mgr.addr() + 0x2e4u, 0x5450f0u, 0x10cu, 4u);
    return ptcl_model_mgr.addr();
}

}  // namespace d_005556d4
GUEST_EXPORT_FRAMED(0x005556d4, d_005556d4::sead__ptcl__PtclModelMgr__deleting_destructor, 0x4010);  // pushes {r4, lr} first, as the original

// f_00555824: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Writes the renderer's GPU state commands (blend, depth and the color constants) into the buffer; its end.
namespace d_00555824 {

struct __attribute__((packed)) EffectRenderer {
    u8 unknown_0[0x4cb36];  // (not used here)
    u8 byte_4cb36;
    u8 unknown_4cb37[0x7];  // (not used here)
    u8 byte_4cb3e;
};
GUEST_OFFSET(EffectRenderer, byte_4cb36, 0x4cb36);
GUEST_OFFSET(EffectRenderer, byte_4cb3e, 0x4cb3e);

struct __attribute__((packed)) EffectRendererWriteStateCommandsArg1 {
    u8 unknown_0[0x148];  // (not used here)
    u32 word_148;
    u32 word_14c;
    u8 unknown_150[0x48];  // (not used here)
    u32 word_198;
    u32 word_19c;
    u8 unknown_1a0[0x38];  // (not used here)
    u32 word_1d8;
    u32 word_1dc;
    u32 word_1e0;
    u32 word_1e4;
    u32 word_1e8;
    u32 word_1ec;
    u32 word_1f0;
    u32 word_1f4;
    u32 word_1f8;
    u32 word_1fc;
    u32 word_200;
    u32 word_204;
    u32 word_208;
    u32 word_20c;
    u32 word_210;
    u32 word_214;
    u32 word_218;
    u32 word_21c;
    u32 word_220;
};
GUEST_OFFSET(EffectRendererWriteStateCommandsArg1, word_148, 0x148);
GUEST_OFFSET(EffectRendererWriteStateCommandsArg1, word_14c, 0x14c);
GUEST_OFFSET(EffectRendererWriteStateCommandsArg1, word_198, 0x198);
GUEST_OFFSET(EffectRendererWriteStateCommandsArg1, word_19c, 0x19c);
GUEST_OFFSET(EffectRendererWriteStateCommandsArg1, word_1d8, 0x1d8);
GUEST_OFFSET(EffectRendererWriteStateCommandsArg1, word_1dc, 0x1dc);
GUEST_OFFSET(EffectRendererWriteStateCommandsArg1, word_1e0, 0x1e0);
GUEST_OFFSET(EffectRendererWriteStateCommandsArg1, word_1e4, 0x1e4);
GUEST_OFFSET(EffectRendererWriteStateCommandsArg1, word_1e8, 0x1e8);
GUEST_OFFSET(EffectRendererWriteStateCommandsArg1, word_1ec, 0x1ec);
GUEST_OFFSET(EffectRendererWriteStateCommandsArg1, word_1f0, 0x1f0);
GUEST_OFFSET(EffectRendererWriteStateCommandsArg1, word_1f4, 0x1f4);
GUEST_OFFSET(EffectRendererWriteStateCommandsArg1, word_1f8, 0x1f8);
GUEST_OFFSET(EffectRendererWriteStateCommandsArg1, word_1fc, 0x1fc);
GUEST_OFFSET(EffectRendererWriteStateCommandsArg1, word_200, 0x200);
GUEST_OFFSET(EffectRendererWriteStateCommandsArg1, word_204, 0x204);
GUEST_OFFSET(EffectRendererWriteStateCommandsArg1, word_208, 0x208);
GUEST_OFFSET(EffectRendererWriteStateCommandsArg1, word_20c, 0x20c);
GUEST_OFFSET(EffectRendererWriteStateCommandsArg1, word_210, 0x210);
GUEST_OFFSET(EffectRendererWriteStateCommandsArg1, word_214, 0x214);
GUEST_OFFSET(EffectRendererWriteStateCommandsArg1, word_218, 0x218);
GUEST_OFFSET(EffectRendererWriteStateCommandsArg1, word_21c, 0x21c);
GUEST_OFFSET(EffectRendererWriteStateCommandsArg1, word_220, 0x220);

struct __attribute__((packed)) Local_00555824_r4_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u8 unknown_c[0x4];  // (not used here)
    u32 word_10;
    u32 word_14;
    u32 word_18;
    u8 unknown_1c[0x4];  // (not used here)
    u32 word_20;
    u32 word_24;
    u32 word_28;
};
GUEST_OFFSET(Local_00555824_r4_1, word_0, 0x0);
GUEST_OFFSET(Local_00555824_r4_1, word_4, 0x4);
GUEST_OFFSET(Local_00555824_r4_1, word_8, 0x8);
GUEST_OFFSET(Local_00555824_r4_1, word_10, 0x10);
GUEST_OFFSET(Local_00555824_r4_1, word_14, 0x14);
GUEST_OFFSET(Local_00555824_r4_1, word_18, 0x18);
GUEST_OFFSET(Local_00555824_r4_1, word_20, 0x20);
GUEST_OFFSET(Local_00555824_r4_1, word_24, 0x24);
GUEST_OFFSET(Local_00555824_r4_1, word_28, 0x28);

inline constexpr guest::Function<0x00134544, u32(u32, u32, u32, u32)> copy_bytes_small_sizes_first;
inline constexpr guest::Function<0x001488f4, u32(u32, u32, u32)> write_matrix34_commands;
inline constexpr guest::Function<0x00148930, u32(u32, u32, u32)> write_matrix44_commands;

u32 EffectRenderer__write_state_commands(gptr<EffectRenderer> effect_renderer, gptr<EffectRendererWriteStateCommandsArg1> arg1, u32 r2, u32 r3) {
    gptr<Local_00555824_r4_1> r4_1 = gptr<Local_00555824_r4_1>(*gptr<u32>(guest::cpu()->r[13] + 0x20u));
    copy_bytes_small_sizes_first(arg1.addr(), 0x8baddcu, 0x148u, r3);
    arg1->word_148 = u32(effect_renderer->byte_4cb36) | 0x80000000u;
    arg1->word_14c = 0xf02c0;
    write_matrix44_commands(arg1.addr() + 0x150u, r2, 0xff02c1u);
    arg1->word_198 = u32(effect_renderer->byte_4cb3e) | 0x80000000u;
    arg1->word_19c = 0xf02c0;
    write_matrix34_commands(arg1.addr() + 0x1a0u, r3, 0xbf02c1u);
    arg1->word_1e0 = 0;
    arg1->word_1e4 = 0xff02c1;
    arg1->word_1d8 = 0x80000000;
    arg1->word_1dc = 0xf02c0;
    arg1->word_1e8 = r4_1->word_8;
    arg1->word_1ec = r4_1->word_4;
    u32 r1_1 = r4_1->word_0;
    arg1->word_1f4 = 0;
    arg1->word_1f0 = r1_1;
    arg1->word_1f8 = r4_1->word_18;
    arg1->word_1fc = r4_1->word_14;
    u32 r1_2 = r4_1->word_10;
    arg1->word_204 = 0;
    arg1->word_200 = r1_2;
    arg1->word_208 = r4_1->word_28;
    arg1->word_20c = r4_1->word_24;
    u32 r1_3 = r4_1->word_20;
    arg1->word_214 = 0;
    arg1->word_210 = r1_3;
    arg1->word_218 = r4_1->word_28;
    arg1->word_21c = r4_1->word_18;
    arg1->word_220 = r4_1->word_8;
    return arg1.addr() + 0x228u;
}

}  // namespace d_00555824
GUEST_EXPORT_FRAMED(0x00555824, d_00555824::EffectRenderer__write_state_commands, 0x47f0);  // pushes {r4, r5, r6, r7, r8, r9, r10, lr} first, as the original

// f_00555f90: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Writes the renderer's base state and the 3x4 matrix as GPU commands; their end.
namespace d_00555f90 {

struct __attribute__((packed)) EffectRendererWriteMatrixCommandsArg1 {
    u8 unknown_0[0x148];  // (not used here)
    u32 word_148;
    u32 word_14c;
    u32 word_150;
    u32 word_154;
    u32 word_158;
    u32 word_15c;
    u32 word_160;
    u32 word_164;
    u32 word_168;
    u32 word_16c;
    u32 word_170;
    u32 word_174;
    u32 word_178;
    u32 word_17c;
    u32 word_180;
    u32 word_184;
    u32 word_188;
    u32 word_18c;
    u32 word_190;
};
GUEST_OFFSET(EffectRendererWriteMatrixCommandsArg1, word_148, 0x148);
GUEST_OFFSET(EffectRendererWriteMatrixCommandsArg1, word_14c, 0x14c);
GUEST_OFFSET(EffectRendererWriteMatrixCommandsArg1, word_150, 0x150);
GUEST_OFFSET(EffectRendererWriteMatrixCommandsArg1, word_154, 0x154);
GUEST_OFFSET(EffectRendererWriteMatrixCommandsArg1, word_158, 0x158);
GUEST_OFFSET(EffectRendererWriteMatrixCommandsArg1, word_15c, 0x15c);
GUEST_OFFSET(EffectRendererWriteMatrixCommandsArg1, word_160, 0x160);
GUEST_OFFSET(EffectRendererWriteMatrixCommandsArg1, word_164, 0x164);
GUEST_OFFSET(EffectRendererWriteMatrixCommandsArg1, word_168, 0x168);
GUEST_OFFSET(EffectRendererWriteMatrixCommandsArg1, word_16c, 0x16c);
GUEST_OFFSET(EffectRendererWriteMatrixCommandsArg1, word_170, 0x170);
GUEST_OFFSET(EffectRendererWriteMatrixCommandsArg1, word_174, 0x174);
GUEST_OFFSET(EffectRendererWriteMatrixCommandsArg1, word_178, 0x178);
GUEST_OFFSET(EffectRendererWriteMatrixCommandsArg1, word_17c, 0x17c);
GUEST_OFFSET(EffectRendererWriteMatrixCommandsArg1, word_180, 0x180);
GUEST_OFFSET(EffectRendererWriteMatrixCommandsArg1, word_184, 0x184);
GUEST_OFFSET(EffectRendererWriteMatrixCommandsArg1, word_188, 0x188);
GUEST_OFFSET(EffectRendererWriteMatrixCommandsArg1, word_18c, 0x18c);
GUEST_OFFSET(EffectRendererWriteMatrixCommandsArg1, word_190, 0x190);

struct __attribute__((packed)) EffectRendererWriteMatrixCommandsArg2 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u8 unknown_c[0x4];  // (not used here)
    u32 word_10;
    u32 word_14;
    u32 word_18;
    u8 unknown_1c[0x4];  // (not used here)
    u32 word_20;
    u32 word_24;
    u32 word_28;
};
GUEST_OFFSET(EffectRendererWriteMatrixCommandsArg2, word_0, 0x0);
GUEST_OFFSET(EffectRendererWriteMatrixCommandsArg2, word_4, 0x4);
GUEST_OFFSET(EffectRendererWriteMatrixCommandsArg2, word_8, 0x8);
GUEST_OFFSET(EffectRendererWriteMatrixCommandsArg2, word_10, 0x10);
GUEST_OFFSET(EffectRendererWriteMatrixCommandsArg2, word_14, 0x14);
GUEST_OFFSET(EffectRendererWriteMatrixCommandsArg2, word_18, 0x18);
GUEST_OFFSET(EffectRendererWriteMatrixCommandsArg2, word_20, 0x20);
GUEST_OFFSET(EffectRendererWriteMatrixCommandsArg2, word_24, 0x24);
GUEST_OFFSET(EffectRendererWriteMatrixCommandsArg2, word_28, 0x28);

inline constexpr guest::Function<0x00134544, u32(u32, u32, u32, u32)> copy_bytes_small_sizes_first;

u32 EffectRenderer__write_matrix_commands(u32 r0_unused, gptr<EffectRendererWriteMatrixCommandsArg1> arg1, gptr<EffectRendererWriteMatrixCommandsArg2> arg2, u32 r3) {
    copy_bytes_small_sizes_first(arg1.addr(), 0x8baddcu, 0x148u, r3);
    arg1->word_154 = 0xff02c1;
    arg1->word_150 = 0;
    arg1->word_14c = 0xf02c0;
    arg1->word_148 = 0x80000000;
    arg1->word_158 = arg2->word_8;
    arg1->word_15c = arg2->word_4;
    arg1->word_160 = arg2->word_0;
    arg1->word_164 = 0;
    arg1->word_168 = arg2->word_18;
    arg1->word_16c = arg2->word_14;
    u32 r3_1 = arg2->word_10;
    arg1->word_174 = 0;
    arg1->word_170 = r3_1;
    arg1->word_178 = arg2->word_28;
    arg1->word_17c = arg2->word_24;
    u32 r3_2 = arg2->word_20;
    arg1->word_184 = 0;
    arg1->word_180 = r3_2;
    arg1->word_188 = arg2->word_28;
    arg1->word_18c = arg2->word_18;
    arg1->word_190 = arg2->word_8;
    return arg1.addr() + 0x198u;
}

}  // namespace d_00555f90
GUEST_EXPORT_FRAMED(0x00555f90, d_00555f90::EffectRenderer__write_matrix_commands, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_00556050: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Begins the renderer's frame.
namespace d_00556050 {

struct __attribute__((packed)) EffectSystem {
    u8 unknown_0[0x87c];  // (not used here)
    u32 word_87c;
};
GUEST_OFFSET(EffectSystem, word_87c, 0x87c);

inline constexpr guest::Function<0x00556058, u32(u32, u32, u32, u32)> EffectRenderer__begin;

u32 EffectSystem__renderer_begin(gptr<EffectSystem> effect_system) {
    return EffectRenderer__begin(effect_system->word_87c, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_00556050
GUEST_EXPORT(0x00556050, d_00556050::EffectSystem__renderer_begin);

// f_00556094: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Copies the renderer's setup commands into the buffer once per frame and resets the render state; their end.
namespace d_00556094 {

struct __attribute__((packed)) EffectRenderer {
    u8 unknown_0[0x60560];  // (not used here)
    u32 word_60560;
    u8 unknown_60564[0x204];  // (not used here)
    u32 word_60768;
};
GUEST_OFFSET(EffectRenderer, word_60560, 0x60560);
GUEST_OFFSET(EffectRenderer, word_60768, 0x60768);

inline guest::global<u32, 0x0097e6ec> effect_render_state_a;
inline guest::global<u8, 0x0097e6f0> effect_render_state_b;
inline guest::global<u8, 0x0097e6f1> effect_render_state_c;
inline guest::global<u8, 0x0097e6f2> effect_render_state_d;
inline constexpr guest::Function<0x00134544, u32(u32, u32, u32, u32)> copy_bytes_small_sizes_first;

u32 EffectRenderer__copy_setup_commands(gptr<EffectRenderer> effect_renderer, u32 r1, u32 r2_unused, u32 r3) {
    u32 r0_1 = 0;
    if (effect_renderer->word_60768 == 1u) {
        r0_1 = r1;
    } else {
        u32 r4_1 = effect_renderer.addr() + 0x60560u;
        effect_renderer->word_60768 = 1;
        copy_bytes_small_sizes_first(r1, effect_renderer.addr() + 0x5fc00u, effect_renderer->word_60560 << 2, r3);
        u32 r0_2 = effect_renderer->word_60560;
        *effect_render_state_b = 0x1c;
        r0_1 = r1 + (r0_2 << 2);
        *effect_render_state_c = 4;
        *effect_render_state_d = 0;
        *effect_render_state_a = 0;
    }
    return r0_1;
}

}  // namespace d_00556094
GUEST_EXPORT_FRAMED(0x00556094, d_00556094::EffectRenderer__copy_setup_commands, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_00556128: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Writes the commands enabling the 12 lights and their colors; their end.
namespace d_00556128 {

struct __attribute__((packed)) EffectRenderer {
    u8 unknown_0[0x87c];  // (not used here)
    u32 word_87c;
};
GUEST_OFFSET(EffectRenderer, word_87c, 0x87c);

struct __attribute__((packed)) Local_00556128_r1_3 {
    u32 word_0;
};
GUEST_OFFSET(Local_00556128_r1_3, word_0, 0x0);


u32 EffectRenderer__write_light_commands(gptr<EffectRenderer> effect_renderer, u32 r1) {
    u32 i = effect_renderer.addr();
    gptr<Local_00556128_r1_3> r1_3 = gptr<Local_00556128_r1_3>(0u);
    u32 r4 = 0x803f0232u;
    i = 0u;
    u32 r2 = effect_renderer->word_87c + 0x39aacu;
    u32 r12 = i;
    do {
        u32 r3_1 = i * 3u;
        if (*gptr<u32>(r2 + i * 0x70u + 0x160u) != 0) {
            *gptr<u32>(r1) = r12;
            u32 r1_1 = r1 + 4u;
            *gptr<u32>(r1_1) = r3_1 + 0x203u | 0x80000000u | 0x2f0000u;
            u32 r1_2 = r1_1 + 4u;
            *gptr<u32>(r1_2) = r12;
            r1_3 = gptr<Local_00556128_r1_3>(r1_2 + 4u);
            r1_3->word_0 = r12;
        } else {
            *gptr<u32>(r1) = r12;
            r1_3 = gptr<Local_00556128_r1_3>(r1 + 4u);
            r1_3->word_0 = r3_1 + 0x205u | 0xf0000u;
        }
        r1 = r1_3.addr() + 4u;
        if (*gptr<u8>(r2 + i * 0x14u + 0x6a0u) != 0) {
            *gptr<u32>(r1) = i;
            *gptr<u32>(r1 + 4) = r4;
            *gptr<u32>(r1 + 8) = r12;
            u32 r1_4 = r1 + 0xc;
            *gptr<u32>(r1_4) = r12;
            u32 r1_5 = r1_4 + 4u;
            *gptr<u32>(r1_5) = r12;
            u32 r1_6 = r1_5 + 4u;
            *gptr<u32>(r1_6) = r12;
            r1 = r1_6 + 4u;
        }
        i += 1u;
        guest::preempt();
    } while (s32(i) < 0xc);
    *gptr<u32>(r1) = 1;
    u32 r0_1 = r1 + 4u;
    *gptr<u32>(r0_1) = 0xf0231;
    guest::cpu()->r[1] = 0xf0231u;
    return r0_1 + 4u;
}

}  // namespace d_00556128
GUEST_EXPORT_FRAMED(0x00556128, d_00556128::EffectRenderer__write_light_commands, 0x10);  // pushes {r4} first, as the original

// f_00556d80: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Allocates and relocates the effect resource's data and its textures.
namespace d_00556d80 {

struct __attribute__((packed)) EffectResourceRelocateArg2 {
    u16 half_0;
    u16 half_2;
    u16 half_4;
    u8 byte_6;
    u8 byte_7;
    u8 byte_8;
};
GUEST_OFFSET(EffectResourceRelocateArg2, half_0, 0x0);
GUEST_OFFSET(EffectResourceRelocateArg2, half_2, 0x2);
GUEST_OFFSET(EffectResourceRelocateArg2, half_4, 0x4);
GUEST_OFFSET(EffectResourceRelocateArg2, byte_6, 0x6);
GUEST_OFFSET(EffectResourceRelocateArg2, byte_7, 0x7);
GUEST_OFFSET(EffectResourceRelocateArg2, byte_8, 0x8);

inline constexpr guest::Function<0x001435b4, u32(u32)> translate_address;
inline constexpr guest::Function<0x002fd108, u32(u32, u32, u32, u32)> allocate_on_heap;
inline constexpr guest::Function<0x0034ac5c, u32(u32, u32)> GpuCommandBuffer__init;

u32 EffectResource__relocate(u32 effect_resource, u32 r1, gptr<EffectResourceRelocateArg2> arg2, u32 r3, float S0) {
    guest::StackFrame frame(0x4);  // the original's stack frame
    u32 r12 = guest::cpu()->r[12];
    u32 r3_2 = 0;
    u32 r12_1 = 0;
    *frame.at<u32>(0x20) = r12;
    u32 block = allocate_on_heap(0xb4u, effect_resource, 4u, r3);
    u32 r1_1 = arg2->half_4;
    u32 r6_1 = arg2->byte_6;
    u32 r8_1 = arg2->half_0;
    u32 r9_1 = arg2->half_2;
    u32 r7_1 = arg2->byte_7;
    u32 r10_1 = arg2->byte_8;
    u32 r5_1 = r1_1 & 0xffu;
    GpuCommandBuffer__init(block, r1_1);
    *gptr<u8>(block + 0x1cu) = 0;
    u32 r0_2 = translate_address(r1);
    u32 r1_3 = guest::cpu()->r[1];
    float S0_3 = guest::cpu()->s[0];
    *gptr<u32>(block) = r0_2;
    *gptr<u16>(block + 4u) = u16(r8_1);
    u32 res_1 = r7_1 & 0xfu;
    *gptr<u16>(block + 6u) = u16(r9_1);
    if (res_1 == 0) {
        r0_2 = 3u;
    }
    *gptr<u8>(block + 8u) = u8(r5_1);
    if (res_1 != 0) {
        if (res_1 == 1u) {
            r0_2 = 2u;
        } else if (res_1 == 2u) {
            r0_2 = 0u;
        }
    }
    u32 r2_2 = r7_1 >> 4;
    if (r2_2 == 0) {
        r1_3 = 3u;
    } else if (r2_2 == 1u) {
        r1_3 = 2u;
    } else if (r2_2 == 2u) {
        r1_3 = 0u;
    }
    if (r10_1 == 0) {
        r3_2 = 2u;
        r12_1 = 1u;
    } else {
        r3_2 = 0u;
        r12_1 = 0u;
    }
    u32 r1_4 = r3_2 | r12_1 << 2 | (r5_1 == 0xcu ? 2u : 0u) << 4 | r1_3 << 8;
    *gptr<u32>(block + 0xa8u) = r1_4 | r0_2 << 0xc;
    *gptr<u32>(block + 0xacu) = ror32(*gptr<u32>(block + 4u), 0x10);
    if (s32(r6_1) <= 0) {
        *gptr<u32>(block + 0xb0u) = 0;
    } else {
        u32 r0_3 = r6_1 - 1u & 0xffu;
        *gptr<u8>(block + 0x14u) = 0;
        S0_3 = 0.0f;
        *gptr<u8>(block + 0x15u) = u8(r0_3);
        *gptr<u32>(block + 0x10u) = std::bit_cast<u32>(S0_3);
        *gptr<u32>(block + 0xb0u) = r0_3 << 0x10;
    }
    guest::cpu()->r[1] = r1_4;
    guest::cpu()->s[0] = S0_3;
    return block;
}

}  // namespace d_00556d80
GUEST_EXPORT_FRAMED(0x00556d80, d_00556d80::EffectResource__relocate, 0x4ff0);  // pushes {r4, r5, r6, r7, r8, r9, r10, r11, lr} first, as the original

// f_00556ea0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Replaces the emitter's data and, when asked, notifies the system for the two screens.
namespace d_00556ea0 {

struct __attribute__((packed)) EffectResource {
    u8 unknown_0[0x18];  // (not used here)
    u32 word_18;
};
GUEST_OFFSET(EffectResource, word_18, 0x18);

struct __attribute__((packed)) EffectResourceSetEmitterDataArg1 {
    u8 unknown_0[0x8];  // (not used here)
    u32 word_8;
};
GUEST_OFFSET(EffectResourceSetEmitterDataArg1, word_8, 0x8);

struct __attribute__((packed)) Local_00556ea0_ea_4 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_00556ea0_ea_4, word_0, 0x0);
GUEST_OFFSET(Local_00556ea0_ea_4, word_4, 0x4);

struct __attribute__((packed)) Local_00556ea0_r6_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_00556ea0_r6_1, word_0, 0x0);
GUEST_OFFSET(Local_00556ea0_r6_1, word_4, 0x4);

inline constexpr guest::Function<0x0054f804, u32(u32, u32, u32, u32)> EffectSystem__notify_emitter;

struct __attribute__((packed)) EffectResourceSetEmitterDataFrame {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u8 unknown_c[0x1c];  // (not read or written by name)
};
GUEST_OFFSET(EffectResourceSetEmitterDataFrame, word_0, 0x0);
GUEST_OFFSET(EffectResourceSetEmitterDataFrame, word_4, 0x4);
GUEST_OFFSET(EffectResourceSetEmitterDataFrame, word_8, 0x8);
GUEST_SIZE(EffectResourceSetEmitterDataFrame, 0x28);

void EffectResource__set_emitter_data(gptr<EffectResource> effect_resource, gptr<EffectResourceSetEmitterDataArg1> arg1, u32 r2, u32 r3) {
    guest::StackFrameOf<EffectResourceSetEmitterDataFrame> frame;  // the original's stack frame
    u32 r0 = effect_resource.addr();
    u32 r1 = arg1.addr();
    u32 r6 = r0;
    u32 r5 = r1;
    u32 r8 = r2;
    u32 r7 = r3;
    r1 = effect_resource->word_18 + arg1->word_8 * 0x28u;
    u32 r4 = *gptr<u32>(r1 + 8u);
    if (s32(r4) > 0) {
        r0 = r4 & 1u;
        r2 = 0u;
        r3 = frame.at(8).addr();
        u32 r12 = 4u;
        if (r0 == 1u) {
            r2 = 1u;
            frame->word_8 = *gptr<u32>(*gptr<u32>(r1 + 4u) + 4u);
        }
        if (s32(r0) < s32(r4)) {
            do {
                r0 += 2u;
                *gptr<u32>(r3 + (r2 << 2)) = *gptr<u32>(*gptr<u32>(r1 + 4u) + (r12 + (r2 << 3)));
                u32 r2_1 = r2 + 1u;
                *gptr<u32>(r3 + (r2_1 << 2)) = *gptr<u32>(*gptr<u32>(r1 + 4u) + (r12 + (r2_1 << 3)));
                r2 = r2_1 + 1u;
                guest::preempt();
            } while (s32(r0) < s32(r4));
        }
    }
    *gptr<u32>(r1 + 4u) = *gptr<u32>(r5 + 0x14u);
    *gptr<u32>(r1 + 8u) = *gptr<u32>(r5 + 0x10u);
    *gptr<u32>(r1 + 0x20u) = *gptr<u32>(r5 + 0xcu);
    *gptr<u32>(r1 + 0xcu) = *gptr<u32>(r5 + 0x18u);
    *gptr<u32>(r5) = 0;
    if (r8 != 0) {
        u32 r1_1 = *gptr<u32>(r5 + 8u);
        frame->word_4 = 0;
        frame->word_0 = r1_1;
        gptr<Local_00556ea0_ea_4> ea_4 = gptr<Local_00556ea0_ea_4>(r6 + 4u);
        EffectSystem__notify_emitter(ea_4->word_0, frame.at(8).addr(), r4, ea_4->word_4);
    }
    if (r7 != 0) {
        gptr<Local_00556ea0_r6_1> r6_1 = gptr<Local_00556ea0_r6_1>(r6 + 4u);
        frame->word_0 = *gptr<u32>(r5 + 8u);
        frame->word_4 = 1;
        EffectSystem__notify_emitter(r6_1->word_0, frame.at(8).addr(), r4, r6_1->word_4);
    }
}

}  // namespace d_00556ea0
GUEST_EXPORT_FRAMED(0x00556ea0, d_00556ea0::EffectResource__set_emitter_data, 0x47f0);  // pushes {r4, r5, r6, r7, r8, r9, r10, lr} first, as the original

// f_005573e0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Constructs a particle load check: 64 entries, a timeout of 30000 and a wait of 180.
namespace d_005573e0 {

inline constexpr u32 vtable_sead__ptcl__PtclLoadCheck = 0x009059fcu;
inline constexpr guest::Function<0x002f825c, u32(u32, u32, u32, u32)> clear_aligned;

u32 sead__ptcl__PtclLoadCheck__PtclLoadCheck(gptr<sead__ptcl__PtclLoadCheck> ptcl_load_check, u32 r1, u32 r2, u32 r3) {
    u32 i = ptcl_load_check.addr();
    u32 r4 = i;
    u32 r0_1 = *gptr<u32>(guest::cpu()->r[13] + 0x18u);
    ptcl_load_check->byte_c = 0;
    ptcl_load_check->word_18 = r3;
    ptcl_load_check->vtable = vtable_sead__ptcl__PtclLoadCheck;
    ptcl_load_check->word_10 = 0xb4;
    ptcl_load_check->word_4 = r1;
    ptcl_load_check->word_8 = r2;
    u32 r7_1 = r4 + 0x1cu;
    ptcl_load_check->word_1c = r0_1;
    ptcl_load_check->word_20 = 0x7530;
    clear_aligned(r4 + 0x24u, 0x500u, r2, r3);
    i = 0u;
    r2 = 1u;
    do {
        u32 r1_1 = i * 5u;
        i += 1u;
        *gptr<u32>(r4 + (r1_1 << 2) + 0x2cu) = r2;
        guest::preempt();
    } while (s32(i) < 0x40);
    return r4;
}

}  // namespace d_005573e0
GUEST_EXPORT_FRAMED(0x005573e0, d_005573e0::sead__ptcl__PtclLoadCheck__PtclLoadCheck, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_0055746c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Sets the particle's texture offset from its animation frame (by age or by life).
namespace d_0055746c {

struct __attribute__((packed)) Particle {
    u8 unknown_0[0x1d6];  // (not used here)
    u8 byte_1d6;
    u8 unknown_1d7[0x19];  // (not used here)
    u16 half_1f0;
    u16 half_1f2;
};
GUEST_OFFSET(Particle, byte_1d6, 0x1d6);
GUEST_OFFSET(Particle, half_1f0, 0x1f0);
GUEST_OFFSET(Particle, half_1f2, 0x1f2);

struct __attribute__((packed)) ParticleSetTextureFrameArg1 {
    u8 unknown_0[0xf0];  // (not used here)
    u32 word_f0;
    u32 word_f4;
};
GUEST_OFFSET(ParticleSetTextureFrameArg1, word_f0, 0xf0);
GUEST_OFFSET(ParticleSetTextureFrameArg1, word_f4, 0xf4);

struct __attribute__((packed)) Local_0055746c_r4_1 {
    float float_0;
    float float_4;
};
GUEST_OFFSET(Local_0055746c_r4_1, float_0, 0x0);
GUEST_OFFSET(Local_0055746c_r4_1, float_4, 0x4);

struct __attribute__((packed)) Local_0055746c_r5_1 {
    float float_0;
    float float_4;
};
GUEST_OFFSET(Local_0055746c_r5_1, float_0, 0x0);
GUEST_OFFSET(Local_0055746c_r5_1, float_4, 0x4);

inline constexpr guest::Function<0x002f9e1c, u32(u32, u32, u32, u32)> divide_with_remainder;

void Particle__set_texture_frame(gptr<Particle> particle, gptr<ParticleSetTextureFrameArg1> arg1, float S0, float S1, float S2, float S3) {
    u32 r0_3 = 0;
    u32 r1_1 = s16(particle->half_1f0);
    u32 r6_1 = s16(particle->half_1f2);
    u32 r0_1 = arg1->word_f0;
    if (r1_1 == 0) {
        u32 r1_2 = arg1->word_f4;
        r0_3 = divide_with_remainder(r0_1 * r6_1, r1_2, guest::cpu()->r[2], guest::cpu()->r[3]);
    } else {
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        guest::cpu()->s[2] = S2;
        guest::cpu()->s[3] = S3;
        r0_3 = divide_with_remainder(r0_1, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
    }
    divide_with_remainder(r0_3, r6_1, guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r1_4 = particle->byte_1d6;
    u32 r0_5 = *gptr<u8>((guest::cpu()->r[1] + particle.addr()) + 0x1e0u);
    u32 r0_6 = divide_with_remainder(r0_5, r1_4, guest::cpu()->r[2], guest::cpu()->r[3]);
    gptr<Local_0055746c_r4_1> r4_1 = gptr<Local_0055746c_r4_1>(particle.addr() + 0x1d8u);
    gptr<Local_0055746c_r5_1> r5_1 = gptr<Local_0055746c_r5_1>(arg1.addr() + 0xd0u);
    float S1_3 = r4_1->float_4 * float(s32(r0_6));
    float S0_3 = r4_1->float_0 * float(s32(guest::cpu()->r[1]));
    r5_1->float_0 = S0_3;
    r5_1->float_4 = S1_3;
    guest::cpu()->s[0] = S0_3;
    guest::cpu()->s[1] = S1_3;
}

}  // namespace d_0055746c
GUEST_EXPORT_FRAMED(0x0055746c, d_0055746c::Particle__set_texture_frame, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_005574f0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Initializes the camera's field of view, distances and position.
namespace d_005574f0 {

struct __attribute__((packed)) Camera3d {
    u8 unknown_0[0x5c];  // (not used here)
    float float_5c;
    float float_60;
    float float_64;
    u32 word_68;
    u32 word_6c;
    u32 word_70;
    u32 word_74;
    u32 word_78;
    float float_7c;
    u32 word_80;
    float float_84;
    float float_88;
    float float_8c;
    u8 unknown_90[0x20];  // (not used here)
    u8 byte_b0;
};
GUEST_OFFSET(Camera3d, float_5c, 0x5c);
GUEST_OFFSET(Camera3d, float_60, 0x60);
GUEST_OFFSET(Camera3d, float_64, 0x64);
GUEST_OFFSET(Camera3d, word_68, 0x68);
GUEST_OFFSET(Camera3d, word_6c, 0x6c);
GUEST_OFFSET(Camera3d, word_70, 0x70);
GUEST_OFFSET(Camera3d, word_74, 0x74);
GUEST_OFFSET(Camera3d, word_78, 0x78);
GUEST_OFFSET(Camera3d, float_7c, 0x7c);
GUEST_OFFSET(Camera3d, word_80, 0x80);
GUEST_OFFSET(Camera3d, float_84, 0x84);
GUEST_OFFSET(Camera3d, float_88, 0x88);
GUEST_OFFSET(Camera3d, float_8c, 0x8c);
GUEST_OFFSET(Camera3d, byte_b0, 0xb0);

inline guest::global<u32, 0x00af78f0> effect_default_scale_x;
inline guest::global<u32, 0x00af78f4> effect_default_scale_y;
inline guest::global<u32, 0x00af78f8> effect_default_scale_z;

void Camera3d__init(gptr<Camera3d> camera3d) {
    float S1_1 = 22.0f;
    camera3d->word_74 = 0;
    camera3d->float_7c = S1_1;
    float S0_1 = 10.0f;
    camera3d->float_5c = S1_1;
    float S2_1 = 0.0f;
    camera3d->float_60 = S0_1;
    camera3d->float_64 = S2_1;
    float S1_2 = 90.0f;
    camera3d->word_78 = 0xf1c71b80;
    camera3d->word_80 = 0;
    camera3d->float_84 = S1_2;
    float S1_3 = 1.0f;
    camera3d->word_68 = *effect_default_scale_x;
    camera3d->word_6c = *effect_default_scale_y;
    camera3d->word_70 = *effect_default_scale_z;
    camera3d->byte_b0 = 0;
    camera3d->float_88 = S0_1;
    camera3d->float_8c = S1_3;
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_3;
}

}  // namespace d_005574f0
GUEST_EXPORT(0x005574f0, d_005574f0::Camera3d__init);

// f_0055b6e0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Counts the set's live emitters and draws the set with them.
namespace d_0055b6e0 {

inline constexpr guest::Function<0x00556a90, u32(u32, u32, u32, u32)> EmitterSet__draw_emitters;

struct __attribute__((packed)) EmitterSetDrawFrame {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u8 unknown_c[0x4];  // (not read or written by name)
};
GUEST_OFFSET(EmitterSetDrawFrame, word_0, 0x0);
GUEST_OFFSET(EmitterSetDrawFrame, word_4, 0x4);
GUEST_OFFSET(EmitterSetDrawFrame, word_8, 0x8);
GUEST_SIZE(EmitterSetDrawFrame, 0x10);

void EmitterSet__draw(u32 emitter_set, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<EmitterSetDrawFrame> frame;  // the original's stack frame
    u32 r12 = emitter_set;
    u32 r6 = r1;
    u32 r4 = 0u;
    u32 r7 = r2;
    u32 r8 = r3;
    emitter_set = r4;
    r1 = 0x20u;
    do {
        u32 r2_1 = *gptr<u32>(r12 + (emitter_set << 2) + 0x1f0u);
        emitter_set += 1u;
        if (r2_1 != 0) {
            r4 += 1u;
        }
        r1 -= 1u;
        guest::preempt();
    } while (r1 != 0);
    u32 r0_1 = *gptr<u32>(r12 + 0x3c0u);
    frame->word_4 = r12 + 0x114u;
    frame->word_8 = r0_1;
    frame->word_0 = r4;
    EmitterSet__draw_emitters(r7, r8, r12 + r6 * 0x1cu + 0x270u, r12 + 0x2acu);
}

}  // namespace d_0055b6e0
GUEST_EXPORT_FRAMED(0x0055b6e0, d_0055b6e0::EmitterSet__draw, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_0055ba48: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The next value of the effect random generator, in [0, 1].
namespace d_0055ba48 {

inline guest::global<u32, 0x00981cfc> effect_random_state;

u32 random_unit_float() {
    u32 fpsr = guest::cpu()->fpscr;
    u32 r0_2 = 0;
    float S1_1 = 3.7252903e-9f;
    float S2 = 0.0f;
    u32 r1 = *effect_random_state * 0xfd43fdu + 0xc39ec3u;
    *effect_random_state = r1;
    float S0 = float(s32(r1 & ~0xf0000000u)) * S1_1;
    float S1 = 1.0f;
    fpsr = fpsr & 0xfffffffu | vfp_cmpf(S0, S2);
    if (!(fpsr >> 0x1d & 1)) {
        do {
            S0 = S0 + S1;
            fpsr = fpsr & 0xfffffffu | vfp_cmpf(S0, S2);
            guest::preempt();
        } while (!(fpsr >> 0x1d & 1));
    }
    u32 r0_1 = std::bit_cast<u32>(S0);
    if (s32(r0_1) <= 0x3f800000) {
        guest::cpu()->r[1] = r1;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        return r0_1;
    }
    do {
        S0 = S0 - S1;
        r0_2 = std::bit_cast<u32>(S0);
        guest::preempt();
    } while (s32(r0_2) > 0x3f800000);
    guest::cpu()->r[1] = r1;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return r0_2;
}

}  // namespace d_0055ba48
GUEST_EXPORT(0x0055ba48, d_0055ba48::random_unit_float);

// f_0055badc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Loads the particle shader and finds its uniforms by name.
namespace d_0055badc {

struct __attribute__((packed)) ParticleShader {
    u8 unknown_0[0x29c];  // (not used here)
    u8 byte_29c;
};
GUEST_OFFSET(ParticleShader, byte_29c, 0x29c);

inline constexpr guest::Function<0x00349878, u32(u32, u32, u32, u32)> Shader__load;
inline constexpr guest::Function<0x00726d2c, u32(u32, u32, u32, u32)> Shader__find_uniform;

void ParticleShader__bind_uniforms(gptr<ParticleShader> particle_shader, u32 r1, u32 r2) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    Shader__load(particle_shader.addr() + 4u, r1, r2, guest::cpu()->r[3]);
    particle_shader->byte_29c = 3;
    Shader__find_uniform(particle_shader.addr() + 4u, particle_shader.addr() + 0x1295cu, 0x8c1b84u, guest::cpu()->r[3]);
    Shader__find_uniform(particle_shader.addr() + 4u, particle_shader.addr() + 0x12964u, 0x8c1b7cu, guest::cpu()->r[3]);
    Shader__find_uniform(particle_shader.addr() + 4u, particle_shader.addr() + 0x1296cu, 0x8c1b74u, guest::cpu()->r[3]);
    Shader__find_uniform(particle_shader.addr() + 4u, particle_shader.addr() + 0x12974u, 0x8c1b6cu, guest::cpu()->r[3]);
    Shader__find_uniform(particle_shader.addr() + 4u, particle_shader.addr() + 0x1297cu, 0x8c1b60u, guest::cpu()->r[3]);
    Shader__find_uniform(particle_shader.addr() + 4u, particle_shader.addr() + 0x12984u, 0x8c1b54u, guest::cpu()->r[3]);
    Shader__find_uniform(particle_shader.addr() + 4u, particle_shader.addr() + 0x1298cu, 0x8c1b48u, guest::cpu()->r[3]);
    Shader__find_uniform(particle_shader.addr() + 4u, particle_shader.addr() + 0x12994u, 0x8c1b3cu, guest::cpu()->r[3]);
    Shader__find_uniform(particle_shader.addr() + 4u, particle_shader.addr() + 0x1299cu, 0x8c1b34u, guest::cpu()->r[3]);
    Shader__find_uniform(particle_shader.addr() + 4u, particle_shader.addr() + 0x129a4u, 0x8c1b2cu, guest::cpu()->r[3]);
    Shader__find_uniform(particle_shader.addr() + 4u, particle_shader.addr() + 0x129acu, 0x8c1b20u, guest::cpu()->r[3]);
    Shader__find_uniform(particle_shader.addr() + 4u, particle_shader.addr() + 0x129b4u, 0x8c1b18u, guest::cpu()->r[3]);
    Shader__find_uniform(particle_shader.addr() + 4u, particle_shader.addr() + 0x129bcu, 0x8c1b10u, guest::cpu()->r[3]);
    Shader__find_uniform(particle_shader.addr() + 4u, particle_shader.addr() + 0x129c4u, 0x8c1b08u, guest::cpu()->r[3]);
    Shader__find_uniform(particle_shader.addr() + 4u, particle_shader.addr() + 0x129ccu, 0x8c1afcu, guest::cpu()->r[3]);
    Shader__find_uniform(particle_shader.addr() + 4u, particle_shader.addr() + 0x129d4u, 0x8c1ae8u, guest::cpu()->r[3]);
    frame.release();
    Shader__find_uniform(particle_shader.addr() + 4u, particle_shader.addr() + 0x129dcu, 0x8c1ac8u, guest::cpu()->r[3]);
    return;
}

}  // namespace d_0055badc
GUEST_EXPORT(0x0055badc, d_0055badc::ParticleShader__bind_uniforms);

// f_0055bc90: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Sets up the three vertex buffers (position and two UV sets) of each of the 3 frames, and the index buffer.
namespace d_0055bc90 {

inline constexpr guest::Function<0x001435b4, u32(u32, u32, u32, u32)> translate_address;
inline constexpr guest::Function<0x0034a784, u32(u32, u32, u32, u32)> VertexBuffer__bind_attribute;
inline constexpr guest::Function<0x0055b898, u32(u32, u32, u32, u32)> ParticleShader__fill_index_buffer;
inline constexpr guest::Function<0x00726d2c, u32(u32, u32, u32, u32)> Shader__find_uniform;

struct __attribute__((packed)) ParticleShaderSetupVertexBuffersFrame {
    u8 byte_0;
    u8 byte_1;
    u8 byte_2;
    u8 byte_3;
    u32 word_4;
    u8 byte_8;
    u8 byte_9;
    u8 byte_a;
    u8 byte_b;
    u32 word_c;
    u8 byte_10;
    u8 byte_11;
    u8 byte_12;
    u8 byte_13;
    u32 word_14;
    u8 unknown_18[0x14];  // (not read or written by name)
};
GUEST_OFFSET(ParticleShaderSetupVertexBuffersFrame, byte_0, 0x0);
GUEST_OFFSET(ParticleShaderSetupVertexBuffersFrame, byte_1, 0x1);
GUEST_OFFSET(ParticleShaderSetupVertexBuffersFrame, byte_2, 0x2);
GUEST_OFFSET(ParticleShaderSetupVertexBuffersFrame, byte_3, 0x3);
GUEST_OFFSET(ParticleShaderSetupVertexBuffersFrame, word_4, 0x4);
GUEST_OFFSET(ParticleShaderSetupVertexBuffersFrame, byte_8, 0x8);
GUEST_OFFSET(ParticleShaderSetupVertexBuffersFrame, byte_9, 0x9);
GUEST_OFFSET(ParticleShaderSetupVertexBuffersFrame, byte_a, 0xa);
GUEST_OFFSET(ParticleShaderSetupVertexBuffersFrame, byte_b, 0xb);
GUEST_OFFSET(ParticleShaderSetupVertexBuffersFrame, word_c, 0xc);
GUEST_OFFSET(ParticleShaderSetupVertexBuffersFrame, byte_10, 0x10);
GUEST_OFFSET(ParticleShaderSetupVertexBuffersFrame, byte_11, 0x11);
GUEST_OFFSET(ParticleShaderSetupVertexBuffersFrame, byte_12, 0x12);
GUEST_OFFSET(ParticleShaderSetupVertexBuffersFrame, byte_13, 0x13);
GUEST_OFFSET(ParticleShaderSetupVertexBuffersFrame, word_14, 0x14);
GUEST_SIZE(ParticleShaderSetupVertexBuffersFrame, 0x2c);

void ParticleShader__setup_vertex_buffers(u32 particle_shader) {
    guest::StackFrameOf<ParticleShaderSetupVertexBuffersFrame> frame;  // the original's stack frame
    u32 r0_10 = 0;
    u32 r1_9 = 0;
    frame->word_14 = 0;
    frame->byte_10 = 0;
    frame->byte_0 = 0;
    frame->byte_8 = 0;
    u32 r4 = particle_shader;
    frame->byte_11 = 1;
    frame->byte_1 = 1;
    frame->byte_9 = 1;
    frame->byte_12 = 0xff;
    frame->byte_2 = 0xff;
    frame->byte_a = 0xff;
    frame->byte_13 = 0xff;
    frame->byte_3 = 0xff;
    frame->word_4 = 0;
    frame->byte_b = 0xff;
    frame->word_c = 0;
    ParticleShader__fill_index_buffer(r4 + 0x129e4u, 0xffu, 0u, 1u);
    u32 r3 = guest::cpu()->r[3];
    u32 i = 0u;
    do {
        Shader__find_uniform(r4 + 4u, frame.at(0x10).addr(), 0x8c1abcu, r3);
        u32 r6_1 = r4 + (i << 0xe);
        u32 r0_4 = translate_address(r6_1 + 0x129e4u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
        u32 r7_1 = r4 + ((i << 7) - i * 7u << 4) + 0x371e4u;
        VertexBuffer__bind_attribute(r7_1, frame.at(0x10).addr(), r0_4, 0xfu);
        Shader__find_uniform(r4 + 4u, frame.at(0).addr(), 0x8c1ab8u, guest::cpu()->r[3]);
        u32 r0_7 = translate_address(r6_1 + 0x1e9e4u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
        VertexBuffer__bind_attribute(r7_1, frame.at(0).addr(), r0_7, 0xfu);
        Shader__find_uniform(r4 + 4u, frame.at(8).addr(), 0x8c1ab4u, guest::cpu()->r[3]);
        r0_10 = translate_address(r6_1 + 0x2a9e4u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
        r1_9 = frame.at(8).addr();
        VertexBuffer__bind_attribute(r7_1, r1_9, r0_10, 0xfu);
        r3 = guest::cpu()->r[3];
        i += 1u;
        guest::preempt();
    } while (i < 3u);
    *gptr<u32>(r4 + 0x38894u) = translate_address(r4 + 0x369e4u, r1_9, r0_10, r3);
    *gptr<u32>(r4 + 0x38898u) = 0x400;
}

}  // namespace d_0055bc90
GUEST_EXPORT_FRAMED(0x0055bc90, d_0055bc90::ParticleShader__setup_vertex_buffers, 0x40f0);  // pushes {r4, i, r6, r7, lr} first, as the original

// f_0055c0c8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Loads the shader, sets up its buffers and builds its setup and light command lists.
namespace d_0055c0c8 {

struct __attribute__((packed)) ParticleShader {
    u32 word_0;
    u8 unknown_4[0x398a0];  // (not used here)
    u32 word_398a4;
    u32 word_398a8;
    u32 word_398ac;
    u32 word_398b0;
    u8 unknown_398b4[0x4];  // (not used here)
    u32 word_398b8;
};
GUEST_OFFSET(ParticleShader, word_0, 0x0);
GUEST_OFFSET(ParticleShader, word_398a4, 0x398a4);
GUEST_OFFSET(ParticleShader, word_398a8, 0x398a8);
GUEST_OFFSET(ParticleShader, word_398ac, 0x398ac);
GUEST_OFFSET(ParticleShader, word_398b0, 0x398b0);
GUEST_OFFSET(ParticleShader, word_398b8, 0x398b8);

struct __attribute__((packed)) Local_0055c0c8_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0055c0c8_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_0055c0c8_ea_1, word_4, 0x4);

inline constexpr guest::Function<0x002f825c, u32(u32, u32)> clear_aligned;
inline constexpr guest::Function<0x0055badc, u32(u32, u32, u32, u32)> ParticleShader__bind_uniforms;
inline constexpr guest::Function<0x0055bc90, u32(u32)> ParticleShader__setup_vertex_buffers;
inline constexpr guest::Function<0x00726a54, u32(u32, u32)> Shader__write_program_commands;

void ParticleShader__init(gptr<ParticleShader> particle_shader, u32 r1, u32 r2, u32 r3) {
    u32 r0 = particle_shader.addr();
    u32 res_1 = 0;
    u32 r4 = r0;
    u32 r3_1 = *gptr<u32>(guest::cpu()->r[13] + 0x10u);
    particle_shader->word_0 = r1;
    ParticleShader__bind_uniforms(r4, r2, r3, r3_1);
    ParticleShader__setup_vertex_buffers(r4);
    u32 r1_3 = Shader__write_program_commands(r4 + 4u, r4 + 0x388a0u) - r4;
    *gptr<u32>(r4 + 0x398a0u) = r1_3 - 0x388a0u;
    u32 r6 = 0u;
    particle_shader->word_398a4 = r6;
    particle_shader->word_398a8 = 0xf0201;
    particle_shader->word_398ac = r6;
    particle_shader->word_398b0 = 0xf0201u ^ u32(s32(0x398a0u) >> 0x10);
    u32 r5_1 = r4 + 0x398b4u;
    clear_aligned(r5_1, 0x98u);
    r3 = 0x803f0232u;
    u32 r12 = r5_1 + 0x98u;
    particle_shader->word_398b8 = 0x823f0203;
    r0 = r12;
    r1 = 0u;
    r2 = 0xcu;
    do {
        res_1 = r2 - 1u;
        r2 = res_1;
        gptr<Local_0055c0c8_ea_1> ea_1 = gptr<Local_0055c0c8_ea_1>(r0 + 4u);
        ea_1->word_0 = r3;
        ea_1->word_4 = r6;
        *gptr<u32>(r0 + 0xcu) = r6;
        *gptr<u32>(r0 + 0x10u) = r6;
        *gptr<u32>(r0) = r1;
        u32 r0_4 = r0 + 0x14u;
        r1 += 1u;
        *gptr<u32>(r0_4) = r6;
        r0 = r0_4 + 4u;
        guest::preempt();
    } while (res_1 != 0);
    *gptr<u32>(r4 + 0x39aa4u) = r12 + 0x120u - r4 - 0x398a4u;
}

}  // namespace d_0055c0c8
GUEST_EXPORT_FRAMED(0x0055c0c8, d_0055c0c8::ParticleShader__init, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0055c1b8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Once per state change: writes the commands binding the shader and its lights; their end.
namespace d_0055c1b8 {

struct __attribute__((packed)) ParticleShader {
    u32 word_0;
    u8 unknown_4[0x129d2];  // (not used here)
    u8 byte_129d6;
    u8 unknown_129d7[0x26ec9];  // (not used here)
    u32 word_398a0;
    u8 unknown_398a4[0x200];  // (not used here)
    u32 word_39aa4;
};
GUEST_OFFSET(ParticleShader, word_0, 0x0);
GUEST_OFFSET(ParticleShader, byte_129d6, 0x129d6);
GUEST_OFFSET(ParticleShader, word_398a0, 0x398a0);
GUEST_OFFSET(ParticleShader, word_39aa4, 0x39aa4);

struct __attribute__((packed)) ParticleShaderWriteBindCommandsArg1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
};
GUEST_OFFSET(ParticleShaderWriteBindCommandsArg1, word_0, 0x0);
GUEST_OFFSET(ParticleShaderWriteBindCommandsArg1, word_4, 0x4);
GUEST_OFFSET(ParticleShaderWriteBindCommandsArg1, word_8, 0x8);
GUEST_OFFSET(ParticleShaderWriteBindCommandsArg1, word_c, 0xc);
GUEST_OFFSET(ParticleShaderWriteBindCommandsArg1, word_10, 0x10);
GUEST_OFFSET(ParticleShaderWriteBindCommandsArg1, word_14, 0x14);

struct __attribute__((packed)) Local_0055c1b8_r1_1 {
    u32 word_0;
};
GUEST_OFFSET(Local_0055c1b8_r1_1, word_0, 0x0);

inline guest::global<u32, 0x00af51cc> global_00af51cc;
inline guest::global<u32, 0x00af51d0> global_00af51d0;
inline guest::global<u32, 0x00af51d4> global_00af51d4;
inline guest::global<u32, 0x00af51d8> global_00af51d8;
inline constexpr guest::Function<0x002fbb30, u32(u32, u32, u32, u32)> copy_aligned_bytes;

u32 ParticleShader__write_bind_commands(gptr<ParticleShader> particle_shader, gptr<ParticleShaderWriteBindCommandsArg1> arg1) {
    u32 r0_1 = arg1.addr();
    gptr<Local_0055c1b8_r1_1> r1_1 = gptr<Local_0055c1b8_r1_1>(particle_shader->word_0 + 0x60768u);
    if (r1_1->word_0 != 2u) {
        r1_1->word_0 = 2;
        u32 r6_1 = particle_shader.addr() + 0x398a0u;
        arg1->word_0 = u32(particle_shader->byte_129d6) | 0x80000000u;
        arg1->word_4 = 0x804f0290;
        arg1->word_8 = *global_00af51d8;
        arg1->word_c = *global_00af51d4;
        arg1->word_10 = *global_00af51d0;
        arg1->word_14 = *global_00af51cc;
        copy_aligned_bytes(r0_1 + 0x18u, particle_shader.addr() + 0x388a0u, particle_shader->word_398a0, 0x804f0290u);
        u32 r6_2 = particle_shader.addr() + 0x39aa4u;
        u32 r5_1 = r0_1 + 0x18u + (particle_shader->word_398a0 & ~3u);
        copy_aligned_bytes(r5_1, particle_shader.addr() + 0x398a4u, particle_shader->word_39aa4, guest::cpu()->r[3]);
        r0_1 = (particle_shader->word_39aa4 & ~3u) + r5_1;
    }
    return r0_1;
}

}  // namespace d_0055c1b8
GUEST_EXPORT_FRAMED(0x0055c1b8, d_0055c1b8::ParticleShader__write_bind_commands, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0055c27c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Copies the shader's light commands into the buffer; their end.
namespace d_0055c27c {

struct __attribute__((packed)) ParticleShader {
    u8 unknown_0[0x39aa4];  // (not used here)
    u32 word_39aa4;
};
GUEST_OFFSET(ParticleShader, word_39aa4, 0x39aa4);

inline constexpr guest::Function<0x002fbb30, u32(u32, u32, u32, u32)> copy_aligned_bytes;

u32 ParticleShader__write_light_commands(gptr<ParticleShader> particle_shader, u32 r1) {
    u32 r4_1 = particle_shader.addr() + 0x39aa4u;
    copy_aligned_bytes(r1, particle_shader.addr() + 0x398a4u, particle_shader->word_39aa4, guest::cpu()->r[3]);
    return (particle_shader->word_39aa4 & ~3u) + r1;
}

}  // namespace d_0055c27c
GUEST_EXPORT_FRAMED(0x0055c27c, d_0055c27c::ParticleShader__write_light_commands, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0055c2b0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Writes the shader's uniforms as GPU commands.
namespace d_0055c2b0 {

struct __attribute__((packed)) ParticleShader {
    u8 unknown_0[0x1295c];  // (not used here)
    u8 byte_1295c;
    u8 byte_1295d;
    u8 byte_1295e;
    u8 byte_1295f;
    u32 word_12960;
    u8 byte_12964;
    u8 byte_12965;
    u8 byte_12966;
    u8 byte_12967;
    u32 word_12968;
    u8 byte_1296c;
    u8 byte_1296d;
    u8 byte_1296e;
    u8 byte_1296f;
    u32 word_12970;
    u8 byte_12974;
    u8 byte_12975;
    u8 byte_12976;
    u8 byte_12977;
    u32 word_12978;
    u8 byte_1297c;
    u8 byte_1297d;
    u8 byte_1297e;
    u8 byte_1297f;
    u32 word_12980;
    u8 byte_12984;
    u8 byte_12985;
    u8 byte_12986;
    u8 byte_12987;
    u32 word_12988;
    u8 byte_1298c;
    u8 byte_1298d;
    u8 byte_1298e;
    u8 byte_1298f;
    u32 word_12990;
    u8 byte_12994;
    u8 byte_12995;
    u8 byte_12996;
    u8 byte_12997;
    u32 word_12998;
    u8 byte_1299c;
    u8 byte_1299d;
    u8 byte_1299e;
    u8 byte_1299f;
    u32 word_129a0;
    u8 byte_129a4;
    u8 byte_129a5;
    u8 byte_129a6;
    u8 byte_129a7;
    u32 word_129a8;
    u8 byte_129ac;
    u8 byte_129ad;
    u8 byte_129ae;
    u8 byte_129af;
    u32 word_129b0;
    u8 byte_129b4;
    u8 byte_129b5;
    u8 byte_129b6;
    u8 byte_129b7;
    u32 word_129b8;
    u8 byte_129bc;
    u8 byte_129bd;
    u8 byte_129be;
    u8 byte_129bf;
    u32 word_129c0;
    u8 byte_129c4;
    u8 byte_129c5;
    u8 byte_129c6;
    u8 byte_129c7;
    u32 word_129c8;
    u8 byte_129cc;
    u8 byte_129cd;
    u8 byte_129ce;
    u8 byte_129cf;
    u32 word_129d0;
    u8 byte_129d4;
    u8 byte_129d5;
    u8 byte_129d6;
    u8 byte_129d7;
    u32 word_129d8;
    u8 byte_129dc;
    u8 byte_129dd;
    u8 byte_129de;
    u8 byte_129df;
    u32 word_129e0;
};
GUEST_OFFSET(ParticleShader, byte_1295c, 0x1295c);
GUEST_OFFSET(ParticleShader, byte_1295d, 0x1295d);
GUEST_OFFSET(ParticleShader, byte_1295e, 0x1295e);
GUEST_OFFSET(ParticleShader, byte_1295f, 0x1295f);
GUEST_OFFSET(ParticleShader, word_12960, 0x12960);
GUEST_OFFSET(ParticleShader, byte_12964, 0x12964);
GUEST_OFFSET(ParticleShader, byte_12965, 0x12965);
GUEST_OFFSET(ParticleShader, byte_12966, 0x12966);
GUEST_OFFSET(ParticleShader, byte_12967, 0x12967);
GUEST_OFFSET(ParticleShader, word_12968, 0x12968);
GUEST_OFFSET(ParticleShader, byte_1296c, 0x1296c);
GUEST_OFFSET(ParticleShader, byte_1296d, 0x1296d);
GUEST_OFFSET(ParticleShader, byte_1296e, 0x1296e);
GUEST_OFFSET(ParticleShader, byte_1296f, 0x1296f);
GUEST_OFFSET(ParticleShader, word_12970, 0x12970);
GUEST_OFFSET(ParticleShader, byte_12974, 0x12974);
GUEST_OFFSET(ParticleShader, byte_12975, 0x12975);
GUEST_OFFSET(ParticleShader, byte_12976, 0x12976);
GUEST_OFFSET(ParticleShader, byte_12977, 0x12977);
GUEST_OFFSET(ParticleShader, word_12978, 0x12978);
GUEST_OFFSET(ParticleShader, byte_1297c, 0x1297c);
GUEST_OFFSET(ParticleShader, byte_1297d, 0x1297d);
GUEST_OFFSET(ParticleShader, byte_1297e, 0x1297e);
GUEST_OFFSET(ParticleShader, byte_1297f, 0x1297f);
GUEST_OFFSET(ParticleShader, word_12980, 0x12980);
GUEST_OFFSET(ParticleShader, byte_12984, 0x12984);
GUEST_OFFSET(ParticleShader, byte_12985, 0x12985);
GUEST_OFFSET(ParticleShader, byte_12986, 0x12986);
GUEST_OFFSET(ParticleShader, byte_12987, 0x12987);
GUEST_OFFSET(ParticleShader, word_12988, 0x12988);
GUEST_OFFSET(ParticleShader, byte_1298c, 0x1298c);
GUEST_OFFSET(ParticleShader, byte_1298d, 0x1298d);
GUEST_OFFSET(ParticleShader, byte_1298e, 0x1298e);
GUEST_OFFSET(ParticleShader, byte_1298f, 0x1298f);
GUEST_OFFSET(ParticleShader, word_12990, 0x12990);
GUEST_OFFSET(ParticleShader, byte_12994, 0x12994);
GUEST_OFFSET(ParticleShader, byte_12995, 0x12995);
GUEST_OFFSET(ParticleShader, byte_12996, 0x12996);
GUEST_OFFSET(ParticleShader, byte_12997, 0x12997);
GUEST_OFFSET(ParticleShader, word_12998, 0x12998);
GUEST_OFFSET(ParticleShader, byte_1299c, 0x1299c);
GUEST_OFFSET(ParticleShader, byte_1299d, 0x1299d);
GUEST_OFFSET(ParticleShader, byte_1299e, 0x1299e);
GUEST_OFFSET(ParticleShader, byte_1299f, 0x1299f);
GUEST_OFFSET(ParticleShader, word_129a0, 0x129a0);
GUEST_OFFSET(ParticleShader, byte_129a4, 0x129a4);
GUEST_OFFSET(ParticleShader, byte_129a5, 0x129a5);
GUEST_OFFSET(ParticleShader, byte_129a6, 0x129a6);
GUEST_OFFSET(ParticleShader, byte_129a7, 0x129a7);
GUEST_OFFSET(ParticleShader, word_129a8, 0x129a8);
GUEST_OFFSET(ParticleShader, byte_129ac, 0x129ac);
GUEST_OFFSET(ParticleShader, byte_129ad, 0x129ad);
GUEST_OFFSET(ParticleShader, byte_129ae, 0x129ae);
GUEST_OFFSET(ParticleShader, byte_129af, 0x129af);
GUEST_OFFSET(ParticleShader, word_129b0, 0x129b0);
GUEST_OFFSET(ParticleShader, byte_129b4, 0x129b4);
GUEST_OFFSET(ParticleShader, byte_129b5, 0x129b5);
GUEST_OFFSET(ParticleShader, byte_129b6, 0x129b6);
GUEST_OFFSET(ParticleShader, byte_129b7, 0x129b7);
GUEST_OFFSET(ParticleShader, word_129b8, 0x129b8);
GUEST_OFFSET(ParticleShader, byte_129bc, 0x129bc);
GUEST_OFFSET(ParticleShader, byte_129bd, 0x129bd);
GUEST_OFFSET(ParticleShader, byte_129be, 0x129be);
GUEST_OFFSET(ParticleShader, byte_129bf, 0x129bf);
GUEST_OFFSET(ParticleShader, word_129c0, 0x129c0);
GUEST_OFFSET(ParticleShader, byte_129c4, 0x129c4);
GUEST_OFFSET(ParticleShader, byte_129c5, 0x129c5);
GUEST_OFFSET(ParticleShader, byte_129c6, 0x129c6);
GUEST_OFFSET(ParticleShader, byte_129c7, 0x129c7);
GUEST_OFFSET(ParticleShader, word_129c8, 0x129c8);
GUEST_OFFSET(ParticleShader, byte_129cc, 0x129cc);
GUEST_OFFSET(ParticleShader, byte_129cd, 0x129cd);
GUEST_OFFSET(ParticleShader, byte_129ce, 0x129ce);
GUEST_OFFSET(ParticleShader, byte_129cf, 0x129cf);
GUEST_OFFSET(ParticleShader, word_129d0, 0x129d0);
GUEST_OFFSET(ParticleShader, byte_129d4, 0x129d4);
GUEST_OFFSET(ParticleShader, byte_129d5, 0x129d5);
GUEST_OFFSET(ParticleShader, byte_129d6, 0x129d6);
GUEST_OFFSET(ParticleShader, byte_129d7, 0x129d7);
GUEST_OFFSET(ParticleShader, word_129d8, 0x129d8);
GUEST_OFFSET(ParticleShader, byte_129dc, 0x129dc);
GUEST_OFFSET(ParticleShader, byte_129dd, 0x129dd);
GUEST_OFFSET(ParticleShader, byte_129de, 0x129de);
GUEST_OFFSET(ParticleShader, byte_129df, 0x129df);
GUEST_OFFSET(ParticleShader, word_129e0, 0x129e0);

struct __attribute__((packed)) Local_0055c2b0_r1_1 {
    u32 word_0;
    u32 word_4;
    u8 byte_8;
};
GUEST_OFFSET(Local_0055c2b0_r1_1, word_0, 0x0);
GUEST_OFFSET(Local_0055c2b0_r1_1, word_4, 0x4);
GUEST_OFFSET(Local_0055c2b0_r1_1, byte_8, 0x8);

inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> for_each_element;
inline constexpr guest::Function<0x0034a5e4, u32(u32, u32, u32, u32)> GpuState__init;

u32 ParticleShader__write_uniform_commands(gptr<ParticleShader> particle_shader, u32 r1, u32 r2, u32 r3) {
    u32 r0_1 = particle_shader.addr() + 4u;
    GpuState__init(r0_1, r1, r2, r3);
    particle_shader->byte_1295c = 0;
    particle_shader->byte_1295d = 2;
    particle_shader->byte_1295e = 0xff;
    particle_shader->byte_1295f = 0xff;
    particle_shader->word_12960 = 0;
    particle_shader->byte_12964 = 0;
    particle_shader->byte_12965 = 2;
    particle_shader->byte_12966 = 0xff;
    particle_shader->byte_12967 = 0xff;
    particle_shader->word_12968 = 0;
    particle_shader->byte_1296c = 0;
    particle_shader->byte_1296d = 2;
    particle_shader->byte_1296e = 0xff;
    particle_shader->byte_1296f = 0xff;
    particle_shader->word_12970 = 0;
    particle_shader->byte_12974 = 0;
    particle_shader->byte_12975 = 2;
    particle_shader->byte_12976 = 0xff;
    particle_shader->byte_12977 = 0xff;
    particle_shader->word_12978 = 0;
    particle_shader->byte_1297c = 0;
    particle_shader->byte_1297d = 2;
    particle_shader->byte_1297e = 0xff;
    particle_shader->byte_1297f = 0xff;
    particle_shader->word_12980 = 0;
    particle_shader->byte_12984 = 0;
    particle_shader->byte_12985 = 2;
    particle_shader->byte_12986 = 0xff;
    particle_shader->byte_12987 = 0xff;
    particle_shader->word_12988 = 0;
    particle_shader->byte_1298c = 0;
    particle_shader->byte_1298d = 2;
    particle_shader->byte_1298e = 0xff;
    particle_shader->byte_1298f = 0xff;
    particle_shader->word_12990 = 0;
    particle_shader->byte_12994 = 0;
    particle_shader->byte_12995 = 2;
    particle_shader->byte_12996 = 0xff;
    particle_shader->byte_12997 = 0xff;
    particle_shader->word_12998 = 0;
    particle_shader->byte_1299c = 0;
    particle_shader->byte_1299d = 2;
    particle_shader->byte_1299e = 0xff;
    particle_shader->byte_1299f = 0xff;
    particle_shader->word_129a0 = 0;
    particle_shader->byte_129a4 = 0;
    particle_shader->byte_129a5 = 2;
    particle_shader->byte_129a6 = 0xff;
    particle_shader->byte_129a7 = 0xff;
    particle_shader->word_129a8 = 0;
    particle_shader->byte_129ac = 0;
    particle_shader->byte_129ad = 2;
    particle_shader->byte_129ae = 0xff;
    particle_shader->byte_129af = 0xff;
    particle_shader->word_129b0 = 0;
    particle_shader->byte_129b4 = 0;
    particle_shader->byte_129b5 = 2;
    particle_shader->byte_129b6 = 0xff;
    particle_shader->byte_129b7 = 0xff;
    particle_shader->word_129b8 = 0;
    particle_shader->byte_129bc = 0;
    particle_shader->byte_129bd = 2;
    particle_shader->byte_129be = 0xff;
    particle_shader->byte_129bf = 0xff;
    particle_shader->word_129c0 = 0;
    particle_shader->byte_129c4 = 0;
    particle_shader->byte_129c5 = 2;
    particle_shader->byte_129c6 = 0xff;
    particle_shader->byte_129c7 = 0xff;
    particle_shader->word_129c8 = 0;
    particle_shader->byte_129cc = 0;
    particle_shader->byte_129cd = 2;
    particle_shader->byte_129ce = 0xff;
    particle_shader->byte_129cf = 0xff;
    particle_shader->word_129d0 = 0;
    particle_shader->byte_129d4 = 1;
    particle_shader->byte_129d5 = 2;
    particle_shader->byte_129d6 = 0xff;
    particle_shader->byte_129d7 = 0xff;
    particle_shader->word_129d8 = 0;
    particle_shader->byte_129dc = 1;
    particle_shader->byte_129dd = 4;
    particle_shader->byte_129de = 0xff;
    particle_shader->byte_129df = 0xff;
    particle_shader->word_129e0 = 0;
    u32 r0_3 = for_each_element(r0_1 + 0x371e0u, 0x34ab24u, 0x790u, 3u);
    gptr<Local_0055c2b0_r1_1> r1_1 = gptr<Local_0055c2b0_r1_1>(r0_3 + 0x16b0u);
    r1_1->word_0 = 0;
    r1_1->word_4 = 0;
    r1_1->byte_8 = 0;
    return r0_3 + 0xfffc8e1cu;
}

}  // namespace d_0055c2b0
GUEST_EXPORT_FRAMED(0x0055c2b0, d_0055c2b0::ParticleShader__write_uniform_commands, 0x4010);  // pushes {r4, lr} first, as the original

// f_0055c4ec: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Constructs a graphics resource factory: a disposer with its name and allocator.
namespace d_0055c4ec {

struct __attribute__((packed)) sead__ResourceFactory {
    u32 word_0;
    u8 unknown_4[0x10];  // (not used here)
    u32 vtable_14;
    u8 unknown_18[0xc];  // (not used here)
    u32 word_24;
    u32 word_28;
    u32 word_2c;
    u32 word_30;
    u32 vtable_34;
    u32 word_38;
    u32 word_3c;
    u8 unknown_40[0x20];  // (not used here)
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
    u8 unknown_90[0xc];  // (not used here)
    u8 byte_9c;
    u8 unknown_9d[0x1b3];  // (not used here)
    u32 word_250;
    u32 word_254;
    u32 word_258;
};
GUEST_OFFSET(sead__ResourceFactory, word_0, 0x0);
GUEST_OFFSET(sead__ResourceFactory, vtable_14, 0x14);
GUEST_OFFSET(sead__ResourceFactory, word_24, 0x24);
GUEST_OFFSET(sead__ResourceFactory, word_28, 0x28);
GUEST_OFFSET(sead__ResourceFactory, word_2c, 0x2c);
GUEST_OFFSET(sead__ResourceFactory, word_30, 0x30);
GUEST_OFFSET(sead__ResourceFactory, vtable_34, 0x34);
GUEST_OFFSET(sead__ResourceFactory, word_38, 0x38);
GUEST_OFFSET(sead__ResourceFactory, word_3c, 0x3c);
GUEST_OFFSET(sead__ResourceFactory, word_60, 0x60);
GUEST_OFFSET(sead__ResourceFactory, word_64, 0x64);
GUEST_OFFSET(sead__ResourceFactory, word_68, 0x68);
GUEST_OFFSET(sead__ResourceFactory, word_6c, 0x6c);
GUEST_OFFSET(sead__ResourceFactory, word_70, 0x70);
GUEST_OFFSET(sead__ResourceFactory, word_74, 0x74);
GUEST_OFFSET(sead__ResourceFactory, word_78, 0x78);
GUEST_OFFSET(sead__ResourceFactory, word_7c, 0x7c);
GUEST_OFFSET(sead__ResourceFactory, word_80, 0x80);
GUEST_OFFSET(sead__ResourceFactory, word_84, 0x84);
GUEST_OFFSET(sead__ResourceFactory, word_88, 0x88);
GUEST_OFFSET(sead__ResourceFactory, word_8c, 0x8c);
GUEST_OFFSET(sead__ResourceFactory, byte_9c, 0x9c);
GUEST_OFFSET(sead__ResourceFactory, word_250, 0x250);
GUEST_OFFSET(sead__ResourceFactory, word_254, 0x254);
GUEST_OFFSET(sead__ResourceFactory, word_258, 0x258);

inline constexpr u32 vtable_sead__FixedSafeString_32_ = 0x009048ecu;
inline constexpr u32 vtable_sead__ResourceFactory_rec = 0x00904a10u;
inline constexpr u32 vtable_sead__FixedSafeStringBase_char__32_ = 0x00905120u;
inline constexpr u32 vtable_sead__DirectResourceFactory_sead__GraphicsFileResNw4c_ = 0x00905488u;
inline constexpr u32 vtable_sead__BufferedSafeStringBase_char_ = 0x0090558cu;
inline guest::global<u8, 0x008c9f1c> empty_string;
inline constexpr guest::Function<0x00132174, u32(u32, u32)> IDisposer__construct;
inline constexpr guest::Function<0x00540c9c, u32(u32, u32, u32, u32)> sead__AllocatorNw4c__AllocatorNw4c;

u32 sead__ResourceFactory__ResourceFactory_0055c4ec(gptr<sead__ResourceFactory> resource_factory, u32 r1, u32 r2, u32 r3) {
    u32 r0_1 = resource_factory.addr() + 4u;
    sead__AllocatorNw4c__AllocatorNw4c(r0_1, 0u, r2, r3);
    sead__AllocatorNw4c__AllocatorNw4c(r0_1 + 8u, 0u, guest::cpu()->r[2], guest::cpu()->r[3]);
    resource_factory->word_24 = 0;
    resource_factory->word_28 = 0;
    resource_factory->word_2c = r0_1 + 0x10u;
    resource_factory->word_30 = 0;
    IDisposer__construct(r0_1 + 0x10u, 0u);
    resource_factory->vtable_14 = vtable_sead__ResourceFactory_rec;
    resource_factory->word_38 = r0_1 + 0x3cu;
    resource_factory->vtable_34 = vtable_sead__BufferedSafeStringBase_char_;
    resource_factory->word_3c = 0x20;
    *gptr<u8>(resource_factory->word_38 + 0x1fu) = *empty_string;
    resource_factory->vtable_34 = vtable_sead__FixedSafeStringBase_char__32_;
    *gptr<u8>(resource_factory->word_38) = *empty_string;
    resource_factory->vtable_34 = vtable_sead__FixedSafeString_32_;
    resource_factory->vtable_14 = vtable_sead__DirectResourceFactory_sead__GraphicsFileResNw4c_;
    resource_factory->word_0 = r1;
    resource_factory->word_60 = r2;
    resource_factory->word_64 = 0;
    resource_factory->word_80 = 0;
    resource_factory->word_68 = 0;
    resource_factory->word_6c = 0;
    resource_factory->word_70 = 0;
    resource_factory->word_74 = 0;
    resource_factory->word_78 = 0;
    resource_factory->word_7c = 0;
    resource_factory->word_84 = 0;
    resource_factory->word_88 = 0;
    resource_factory->word_8c = 0;
    resource_factory->byte_9c = 1;
    resource_factory->word_254 = 0;
    resource_factory->word_258 = 0;
    resource_factory->word_250 = 0;
    return r0_1 - 4u;
}

}  // namespace d_0055c4ec
GUEST_EXPORT_FRAMED(0x0055c4ec, d_0055c4ec::sead__ResourceFactory__ResourceFactory_0055c4ec, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_0055c5ec: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Destroys the particle model manager's resource factory.
namespace d_0055c5ec {

inline constexpr guest::Function<0x00545aa8, u32(u32, u32, u32, u32)> sead__ResourceFactory__destructor;

u32 PtclModelMgr__destroy(u32 ptcl_model_mgr) {
    u32 r0_1 = ptcl_model_mgr + 0x14u;
    sead__ResourceFactory__destructor(r0_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    return r0_1 - 0x14u;
}

}  // namespace d_0055c5ec
GUEST_EXPORT_FRAMED(0x0055c5ec, d_0055c5ec::PtclModelMgr__destroy, 0x4010);  // pushes {r4, lr} first, as the original

// f_0055c670: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Constructs a mutex: a disposer with a kernel mutex.
namespace d_0055c670 {

inline constexpr u32 vtable_sead__Mutex = 0x00905a2cu;
inline constexpr guest::Function<0x0012f204, u32(u32)> check_result;
inline constexpr guest::Function<0x00132174, u32(u32, u32, u32, u32)> IDisposer__construct;
inline constexpr guest::Function<0x0014f5dc, u32(u32, u32)> svc_create_mutex;

struct __attribute__((packed)) SeadMutexMutexFrame {
    u32 word_0;
};
GUEST_OFFSET(SeadMutexMutexFrame, word_0, 0x0);
GUEST_SIZE(SeadMutexMutexFrame, 0x4);

u32 sead__Mutex__Mutex(gptr<sead__Mutex> mutex, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<SeadMutexMutexFrame> frame;  // the original's stack frame
    frame->word_0 = r3;
    IDisposer__construct(mutex.addr(), r1, r2, r3);
    mutex->vtable = vtable_sead__Mutex;
    mutex->word_10 = 0;
    frame->word_0 = 0;
    u32 r0_2 = svc_create_mutex(frame.at(0).addr(), 0u);
    if ((r0_2 >> 0x1f) == 0) {
        r0_2 = 0u;
        mutex->word_10 = frame->word_0;
    }
    if ((r0_2 >> 0x1f) != 0) {
        check_result(r0_2);
    }
    return mutex.addr();
}

}  // namespace d_0055c670
GUEST_EXPORT_FRAMED(0x0055c670, d_0055c670::sead__Mutex__Mutex, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_0055c73c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Decodes the base64 text into bytes.
namespace d_0055c73c {


void base64_decode_2(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r12 = 0u;
    u32 r4 = r12;
    u32 r6 = *gptr<u32>(guest::cpu()->r[13] + 0x1cu);
    if (s32(r3) > 0) {
        do {
            if (*gptr<s8>(r2) < 0x20) {
                r4 += 1u;
                r2 += 1u;
                if (s32(r4) >= s32(r3)) {
                    break;
                }
                if (*gptr<s8>(r2) < 0x20) {
                    r4 += 1u;
                    r2 += 1u;
                    if (s32(r4) >= s32(r3)) {
                        break;
                    }
                }
            }
            if (s32(r3) >= s32(r4 + 4u)) {
                u32 v_1 = *gptr<s8>(r2);
                u32 r2_1 = r2 + 1u;
                u32 r7_1 = v_1 - 0x41u;
                if (r7_1 > 0x19u) {
                    r7_1 = v_1 - 0x61u <= 0x19u ? v_1 - 0x47u : v_1 - 0x30u <= 9u ? v_1 + 4u : (v_1 == 0x2bu || v_1 == 0x2du) ? 0x3eu : (v_1 == 0x2fu || v_1 == 0x5fu) ? 0x3fu : 0x40u;
                }
                u32 v_2 = *gptr<s8>(r2_1);
                u32 r2_2 = r2_1 + 1u;
                u32 r7_2 = v_2 - 0x41u;
                if (r7_2 > 0x19u) {
                    r7_2 = v_2 - 0x61u <= 0x19u ? v_2 - 0x47u : v_2 - 0x30u <= 9u ? v_2 + 4u : (v_2 == 0x2bu || v_2 == 0x2du) ? 0x3eu : (v_2 == 0x2fu || v_2 == 0x5fu) ? 0x3fu : 0x40u;
                }
                u32 v_3 = *gptr<s8>(r2_2);
                u32 r2_3 = r2_2 + 1u;
                u32 r9_1 = r7_2 & 0x3fu;
                u32 r7_3 = v_3 - 0x41u;
                if (r7_3 > 0x19u) {
                    r7_3 = v_3 - 0x61u <= 0x19u ? v_3 - 0x47u : v_3 - 0x30u <= 9u ? v_3 + 4u : (v_3 == 0x2bu || v_3 == 0x2du) ? 0x3eu : (v_3 == 0x2fu || v_3 == 0x5fu) ? 0x3fu : 0x40u;
                }
                u32 v_4 = *gptr<s8>(r2_3);
                r2 = r2_3 + 1u;
                u32 r7_4 = r7_3 & 0x7fu;
                u32 r5_1 = v_4 - 0x41u <= 0x19u ? v_4 - 0x41u : v_4 - 0x61u <= 0x19u ? v_4 - 0x47u : v_4 - 0x30u <= 9u ? v_4 + 4u : (v_4 == 0x2bu || v_4 == 0x2du) ? 0x3eu : (v_4 == 0x2fu || v_4 == 0x5fu) ? 0x3fu : 0x40u;
                u32 r5_2 = r5_1 & 0x7fu;
                if (s32(r1) > s32(r12)) {
                    *gptr<u8>(r0 + r12) = u8((r7_1 & 0x3fu) << 2 | r9_1 >> 4);
                    r12 += 1u;
                    if (r7_4 >= 0x40u) {
                        goto L_55c94c;
                    }
                    if (s32(r1) > s32(r12)) {
                        *gptr<u8>(r0 + r12) = u8(r9_1 << 4 | r7_4 >> 2);
                        r12 += 1u;
                        if (r5_2 >= 0x40u) {
                            goto L_55c94c;
                        }
                        if (s32(r1) > s32(r12)) {
                            *gptr<u8>(r0 + r12) = u8(r5_2 | r7_4 << 6);
                            r12 += 1u;
                            goto L_55c94c;
                        }
                    }
                }
            }
            return;
L_55c94c:;
            r4 += 4u;
            guest::preempt();
        } while (s32(r4) < s32(r3));
    }
    if (r6 != 0) {
        *gptr<u32>(r6) = r12;
    }
}

}  // namespace d_0055c73c
GUEST_EXPORT_FRAMED(0x0055c73c, d_0055c73c::base64_decode_2, 0x7f0);  // pushes {r4, r5, r6, r7, r8, r9, r10} first, as the original

// f_0055c96c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Encodes the bytes as base64 (the standard or the URL alphabet), with padding.
namespace d_0055c96c {

struct __attribute__((packed)) Local_0055c96c_r12 {
    u8 byte_0;
    u8 byte_1;
    u8 byte_2;
};
GUEST_OFFSET(Local_0055c96c_r12, byte_0, 0x0);
GUEST_OFFSET(Local_0055c96c_r12, byte_1, 0x1);
GUEST_OFFSET(Local_0055c96c_r12, byte_2, 0x2);


void base64_encode_2(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 res_1 = 0;
    r3 = r3 == 0 ? 0x8c54ccu : 0x8c5488u;
    u32 r12_1 = u64(s64(s32(0x55555556u)) * s32(r2)) >> 0x20;
    u32 r12_2 = r12_1 - u32(s32(r12_1) >> 0x1f);
    u32 r7 = r12_2 + (r12_2 << 1);
    u32 r6_1 = r7 + 2u;
    if (s32(r6_1) > 2) {
        u32 r5_1 = u64(s64(s32(0x55555556u)) * s32(r6_1)) >> 0x20;
        gptr<Local_0055c96c_r12> r12 = gptr<Local_0055c96c_r12>(r1);
        u32 r4 = r0;
        u32 r5 = r5_1 - u32(s32(r5_1) >> 0x1f);
        u32 r6 = r5;
        do {
            res_1 = r5 - 1u;
            r5 = res_1;
            *gptr<u8>(r4) = *gptr<u8>(r3 + (u32(r12->byte_0) >> 2));
            *gptr<u8>(r4 + 1u) = *gptr<u8>(r3 + (u32(r12->byte_0) << 0x1e >> 0x1a | (u32(r12->byte_1) & 0xf0u) >> 4));
            *gptr<u8>(r4 + 2u) = *gptr<u8>(r3 + (u32(r12->byte_1) << 0x1c >> 0x1a | (u32(r12->byte_2) & 0xc0u) >> 6));
            u32 r8_1 = r12->byte_2;
            r12 = gptr<Local_0055c96c_r12>(r12.addr() + 3u);
            *gptr<u8>(r4 + 3u) = *gptr<u8>(r3 + (r8_1 & 0x3fu));
            r4 += 4u;
            guest::preempt();
        } while (res_1 != 0);
        r0 += (r6 << 2);
        r1 += (r6 + (r6 << 1));
    }
    u32 r12_3 = r2 - r7;
    if (r12_3 != 1u) {
        if (r12_3 != 2u) {
            return;
        }
        *gptr<u8>(r0) = *gptr<u8>(r3 + (u32(*gptr<u8>(r1)) >> 2));
        *gptr<u8>(r0 + 1u) = *gptr<u8>(r3 + (u32(*gptr<u8>(r1)) << 0x1e >> 0x1a | (u32(*gptr<u8>(r1 + 1u)) & 0xf0u) >> 4));
        *gptr<u8>(r0 + 2u) = *gptr<u8>(r3 + ((u32(*gptr<u8>(r1 + 1u)) & 0xfu) << 2));
    } else {
        *gptr<u8>(r0) = *gptr<u8>(r3 + (u32(*gptr<u8>(r1)) >> 2));
        *gptr<u8>(r0 + 1u) = *gptr<u8>(r3 + ((u32(*gptr<u8>(r1)) & 3u) << 4));
        *gptr<u8>(r0 + 2u) = 0x3d;
    }
    *gptr<u8>(r0 + 3u) = 0x3d;
}

}  // namespace d_0055c96c
GUEST_EXPORT_FRAMED(0x0055c96c, d_0055c96c::base64_encode_2, 0x3f0);  // pushes {r4, r5, r6, r7, r8, r9} first, as the original

// f_0055cabc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Seeds the four state words from one value (each the previous one mixed with 1812433253, as Mersenne Twister seeding
// does).
namespace d_0055cabc {

struct __attribute__((packed)) RandomState {
    u32 x;
    u32 y;
    u32 z;
    u32 w;
};
GUEST_OFFSET(RandomState, x, 0x0);
GUEST_OFFSET(RandomState, y, 0x4);
GUEST_OFFSET(RandomState, z, 0x8);
GUEST_OFFSET(RandomState, w, 0xc);


u32 Random__seed(gptr<RandomState> random, u32 seed) {
    u32 r1_1 = (seed ^ seed >> 0x1e) * 0x6c078965u + 1u;
    u32 r2_1 = (r1_1 ^ r1_1 >> 0x1e) * 0x6c078965u + 2u;
    random->x = r1_1;
    random->y = r2_1;
    u32 r3_1 = (r2_1 ^ r2_1 >> 0x1e) * 0x6c078965u + 3u;
    random->z = r3_1;
    u32 r1_2 = (r3_1 ^ r3_1 >> 0x1e) * 0x6c078965u + 4u;
    random->w = r1_2;
    guest::cpu()->r[1] = r1_2;
    return random.addr() + 8u;
}

}  // namespace d_0055cabc
GUEST_EXPORT(0x0055cabc, d_0055cabc::Random__seed);

// f_0055cd54: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// A process thread's run step: opens its archive file on the thread (checking the result).
namespace d_0055cd54 {

struct __attribute__((packed)) Local_0055cd54_r0_1 {
    float float_0;
    float float_4;
};
GUEST_OFFSET(Local_0055cd54_r0_1, float_0, 0x0);
GUEST_OFFSET(Local_0055cd54_r0_1, float_4, 0x4);

inline constexpr guest::Function<0x00128e80, u32(u32, u32, u32, u32)> FsArchive__open_file;
inline constexpr guest::Function<0x0012f204, u32(u32, u32)> check_result;
inline constexpr guest::Function<0x00139504, u32(u32, u32)> svc_get_thread_id;

struct __attribute__((packed)) ProcThreadVirtual6Frame {
    u32 word_0;
    u8 unknown_4[0x8];  // (not read or written by name)
    u32 word_c;
    u8 unknown_10[0x4];  // (not read or written by name)
    u32 word_14;
    u8 unknown_18[0x8];  // (not read or written by name)
    u32 word_20;
    u32 word_24;
    u32 word_28;
    u32 word_2c;
    u8 unknown_30[0x4];  // (not read or written by name)
};
GUEST_OFFSET(ProcThreadVirtual6Frame, word_0, 0x0);
GUEST_OFFSET(ProcThreadVirtual6Frame, word_c, 0xc);
GUEST_OFFSET(ProcThreadVirtual6Frame, word_14, 0x14);
GUEST_OFFSET(ProcThreadVirtual6Frame, word_20, 0x20);
GUEST_OFFSET(ProcThreadVirtual6Frame, word_24, 0x24);
GUEST_OFFSET(ProcThreadVirtual6Frame, word_28, 0x28);
GUEST_OFFSET(ProcThreadVirtual6Frame, word_2c, 0x2c);
GUEST_SIZE(ProcThreadVirtual6Frame, 0x34);

u32 ProcThread__virtual_6(gptr<sead__Thread> thread, u32 r1, float S0, float S1) {
    guest::StackFrameOf<ProcThreadVirtual6Frame> frame;  // the original's stack frame
    if (thread->word_7c == 0) {
        u32 r12_1 = thread->word_80;
        frame->word_14 = thread.addr();
        float S0_1 = std::bit_cast<float>(thread->physical_address);
        float S1_1 = std::bit_cast<float>(thread->word_8c);
        frame->word_20 = 4;
        frame->word_24 = 0x1394e4;
        frame->word_28 = 0x139500;
        frame->word_2c = 0x1394f4;
        frame->word_0 = thread->word_54 + thread->word_84;
        gptr<Local_0055cd54_r0_1> r0_1 = gptr<Local_0055cd54_r0_1>(frame.at(4).addr());
        r0_1->float_0 = S0_1;
        r0_1->float_4 = S1_1;
        frame->word_c = 0;
        guest::cpu()->s[0] = S0_1;
        guest::cpu()->s[1] = S1_1;
        u32 r0_2 = FsArchive__open_file(r12_1, frame.at(0x20).addr(), 0x55cc40u, frame.at(0x14).addr());
        r1 = guest::cpu()->r[1];
        S0 = guest::cpu()->s[0];
        S1 = guest::cpu()->s[1];
        if ((r0_2 & 0x7e00000u) != 0x600000u) {
            u32 b_1 = r0_2 >> 0x1f;
            r1 = b_1;
            if (b_1 != 0) {
                check_result(r0_2, r1);
                r1 = guest::cpu()->r[1];
                S0 = guest::cpu()->s[0];
                S1 = guest::cpu()->s[1];
            }
        }
        if (s32(r0_2) >= 0) {
            u32 r1_2 = *gptr<u32>(thread->word_80);
            guest::cpu()->s[0] = S0;
            guest::cpu()->s[1] = S1;
            u32 r0_4 = svc_get_thread_id(frame.at(0).addr(), r1_2);
            if ((r0_4 >> 0x1f) != 0) {
                check_result(r0_4, r1_2);
            }
            u32 r1_3 = thread->word_7c;
            thread->word_78 = frame->word_0;
            if (r1_3 == 0) {
                thread->word_7c = 1;
            }
            guest::cpu()->r[1] = r1_3;
            return 1u;
        }
    }
    guest::cpu()->r[1] = r1;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return 0u;
}

}  // namespace d_0055cd54
GUEST_EXPORT_FRAMED(0x0055cd54, d_0055cd54::ProcThread__virtual_6, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_0055d510: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Clamps the four channels to [0, 1].
namespace d_0055d510 {

struct __attribute__((packed)) Color4f {
    float float_0;
    float float_4;
    float float_8;
    float float_c;
};
GUEST_OFFSET(Color4f, float_0, 0x0);
GUEST_OFFSET(Color4f, float_4, 0x4);
GUEST_OFFSET(Color4f, float_8, 0x8);
GUEST_OFFSET(Color4f, float_c, 0xc);


void Color4f__clamp(gptr<Color4f> color4f) {
    u32 fpsr = guest::cpu()->fpscr;
    float S0_1 = 0.0f;
    float S2_1 = color4f->float_0;
    float S1_1 = 1.0f;
    u32 fpsr_1 = fpsr & 0xfffffffu | vfp_cmpf(S2_1, S0_1);
    if (!(S2_1 < S0_1)) {
        fpsr_1 = fpsr_1 & 0xfffffffu | vfp_cmpf(S2_1, S1_1);
        if (S2_1 > S1_1) {
            S2_1 = S1_1;
        }
    } else {
        S2_1 = S0_1;
    }
    color4f->float_0 = S2_1;
    float S2_2 = color4f->float_4;
    u32 fpsr_2 = fpsr_1 & 0xfffffffu | vfp_cmpf(S2_2, S0_1);
    if (!(S2_2 < S0_1)) {
        fpsr_2 = fpsr_2 & 0xfffffffu | vfp_cmpf(S2_2, S1_1);
        if (S2_2 > S1_1) {
            S2_2 = S1_1;
        }
    } else {
        S2_2 = S0_1;
    }
    color4f->float_4 = S2_2;
    float S2_3 = color4f->float_8;
    u32 fpsr_3 = fpsr_2 & 0xfffffffu | vfp_cmpf(S2_3, S0_1);
    if (!(S2_3 < S0_1)) {
        fpsr_3 = fpsr_3 & 0xfffffffu | vfp_cmpf(S2_3, S1_1);
        if (S2_3 > S1_1) {
            S2_3 = S1_1;
        }
    } else {
        S2_3 = S0_1;
    }
    color4f->float_8 = S2_3;
    float S2_4 = color4f->float_c;
    if (S2_4 < S0_1) {
        color4f->float_c = S0_1;
        guest::cpu()->s[0] = S0_1;
        guest::cpu()->s[1] = S1_1;
        return;
    }
    if (S2_4 > S1_1) {
        S2_4 = S1_1;
    }
    color4f->float_c = S2_4;
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
}

}  // namespace d_0055d510
GUEST_EXPORT(0x0055d510, d_0055d510::Color4f__clamp);

// f_0055d5c0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Interpolates between the two vectors by the clamped factor.
namespace d_0055d5c0 {

struct __attribute__((packed)) Vec2 {
    float float_0;
    float float_4;
};
GUEST_OFFSET(Vec2, float_0, 0x0);
GUEST_OFFSET(Vec2, float_4, 0x4);

struct __attribute__((packed)) Vec2LerpArg1 {
    float float_0;
    float float_4;
};
GUEST_OFFSET(Vec2LerpArg1, float_0, 0x0);
GUEST_OFFSET(Vec2LerpArg1, float_4, 0x4);


void Vec2__lerp(gptr<Vec2> vec2, gptr<Vec2LerpArg1> arg1, float S0) {
    float S4_1 = S0;
    float S1_1 = 0.0f;
    float S0_1 = 1.0f;
    if (!(S4_1 < S1_1)) {
        if (S4_1 > S0_1) {
            S4_1 = S0_1;
        }
    } else {
        S4_1 = S1_1;
    }
    float S0_2 = vec2->float_0;
    float S0_3 = S0_2 + (arg1->float_0 - S0_2) * S4_1;
    float S1_2 = vec2->float_4;
    float S1_3 = S1_2 + (arg1->float_4 - S1_2) * S4_1;
    guest::cpu()->s[0] = S0_3;
    guest::cpu()->s[1] = S1_3;
}

}  // namespace d_0055d5c0
GUEST_EXPORT(0x0055d5c0, d_0055d5c0::Vec2__lerp);

// f_0055d634: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Interpolates between the two colors by the clamped factor.
namespace d_0055d634 {

struct __attribute__((packed)) Color4f {
    float float_0;
    float float_4;
    float float_8;
    float float_c;
};
GUEST_OFFSET(Color4f, float_0, 0x0);
GUEST_OFFSET(Color4f, float_4, 0x4);
GUEST_OFFSET(Color4f, float_8, 0x8);
GUEST_OFFSET(Color4f, float_c, 0xc);

struct __attribute__((packed)) Color4fLerpArg1 {
    float float_0;
    float float_4;
    float float_8;
    float float_c;
};
GUEST_OFFSET(Color4fLerpArg1, float_0, 0x0);
GUEST_OFFSET(Color4fLerpArg1, float_4, 0x4);
GUEST_OFFSET(Color4fLerpArg1, float_8, 0x8);
GUEST_OFFSET(Color4fLerpArg1, float_c, 0xc);

struct __attribute__((packed)) Color4fLerpArg2 {
    float float_0;
    float float_4;
    float float_8;
    float float_c;
};
GUEST_OFFSET(Color4fLerpArg2, float_0, 0x0);
GUEST_OFFSET(Color4fLerpArg2, float_4, 0x4);
GUEST_OFFSET(Color4fLerpArg2, float_8, 0x8);
GUEST_OFFSET(Color4fLerpArg2, float_c, 0xc);


void Color4f__lerp(gptr<Color4f> color4f, gptr<Color4fLerpArg1> arg1, gptr<Color4fLerpArg2> arg2, float S0) {
    float S2_1 = 0.0f;
    float S1_1 = 1.0f;
    if (!(S0 < S2_1)) {
        if (S0 > S1_1) {
            S0 = S1_1;
        }
    } else {
        S0 = S2_1;
    }
    float S1_2 = arg1->float_c;
    color4f->float_c = S1_2 + (arg2->float_c - S1_2) * S0;
    float S1_3 = arg1->float_0;
    color4f->float_0 = S1_3 + (arg2->float_0 - S1_3) * S0;
    float S1_4 = arg1->float_4;
    color4f->float_4 = S1_4 + (arg2->float_4 - S1_4) * S0;
    float S1_5 = arg1->float_8;
    float S1_6 = S1_5 + (arg2->float_8 - S1_5) * S0;
    color4f->float_8 = S1_6;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1_6;
}

}  // namespace d_0055d634
GUEST_EXPORT(0x0055d634, d_0055d634::Color4f__lerp);

// f_0055debc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Allocates the aligned block from the end of a free block, splitting off what remains; the used block.
namespace d_0055debc {

struct __attribute__((packed)) ExpHeap {
    u8 unknown_0[0x74];  // (not used here)
    u8 byte_74;
    u8 unknown_75[0xb];  // (not used here)
    u32 word_80;
    u32 word_84;
};
GUEST_OFFSET(ExpHeap, byte_74, 0x74);
GUEST_OFFSET(ExpHeap, word_80, 0x80);
GUEST_OFFSET(ExpHeap, word_84, 0x84);

struct __attribute__((packed)) Local_0055debc_r0_1 {
    u8 unknown_0[0xa];  // (not used here)
    u16 res;
    u32 word_c;
};
GUEST_OFFSET(Local_0055debc_r0_1, res, 0xa);
GUEST_OFFSET(Local_0055debc_r0_1, word_c, 0xc);

struct __attribute__((packed)) Local_0055debc_r4_1 {
    u32 word_0;
    u32 word_4;
    u16 half_8;
    u16 half_a;
    u32 word_c;
};
GUEST_OFFSET(Local_0055debc_r4_1, word_0, 0x0);
GUEST_OFFSET(Local_0055debc_r4_1, word_4, 0x4);
GUEST_OFFSET(Local_0055debc_r4_1, half_8, 0x8);
GUEST_OFFSET(Local_0055debc_r4_1, half_a, 0xa);
GUEST_OFFSET(Local_0055debc_r4_1, word_c, 0xc);

inline constexpr guest::Function<0x0013bb00, u32(u32)> unlink_node_0013bb00;
inline constexpr guest::Function<0x0055dfa4, u32(u32, u32)> sead__ExpHeap__add_used_block;
inline constexpr guest::Function<0x0074e45c, u32(u32, u32, u32, u32)> sead__ExpHeap__allocate_from_block;

u32 sead__ExpHeap__alloc_aligned_from_tail(gptr<ExpHeap> exp_heap, u32 r1, u32 r2) {
    u32 r3_1 = exp_heap->byte_74;
    gptr<Local_0055debc_r0_1> r0_1 = gptr<Local_0055debc_r0_1>(sead__ExpHeap__allocate_from_block(exp_heap.addr(), r1, r2, r3_1));
    if (r0_1.addr() != 0) {
        u32 r3_2 = r0_1->word_c;
        u32 r0_2 = u32(r0_1->res) + 0x10u;
        u32 r1_2 = r0_1.addr() + r0_2 + (r3_2 - r1);
        u32 r2_1 = r1 + (r1_2 - (r1_2 & ~(r2 - 1u)));
        u32 r1_3 = r3_2 - r2_1;
        if (r1_3 <= 0x10u) {
            u32 res_1 = r1_3 & 0xffffu;
            r0_1->res = u16(res_1);
            if (res_1 != 0) {
                *gptr<u32>(res_1 + 0x10u + r0_1.addr() - 4u) = r0_1.addr() + 1u;
            }
            r0_1->word_c = r2_1;
            unlink_node_0013bb00(exp_heap->word_84 + r0_1.addr());
            exp_heap->word_80 = exp_heap->word_80 - 1u;
            sead__ExpHeap__add_used_block(exp_heap.addr(), r0_1.addr());
            return r0_1.addr();
        }
        r0_1->word_c = r1_3 - 0x10u;
        gptr<Local_0055debc_r4_1> r4_1 = gptr<Local_0055debc_r4_1>(r0_2 + r0_1.addr() + (r1_3 - 0x10u));
        if (r4_1.addr() != 0) {
            r4_1->word_0 = 0;
            r4_1->word_4 = 0;
            r4_1->half_8 = 0;
            r4_1->half_a = 0;
            r4_1->word_c = 0;
        }
        r4_1->word_c = r2_1;
        sead__ExpHeap__add_used_block(exp_heap.addr(), r4_1.addr());
        r0_1 = gptr<Local_0055debc_r0_1>(r4_1.addr());
    }
    return r0_1.addr();
}

}  // namespace d_0055debc
GUEST_EXPORT_FRAMED(0x0055debc, d_0055debc::sead__ExpHeap__alloc_aligned_from_tail, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_0055dfa4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Adds the block to the used list (in address order when the heap keeps it sorted).
namespace d_0055dfa4 {

struct __attribute__((packed)) IntrusiveList {
    u8 unknown_0[0x8];  // (not used here)
    u32 word_8;
};
GUEST_OFFSET(IntrusiveList, word_8, 0x8);

inline constexpr guest::Function<0x00138560, u32(u32, u32)> insert_node_after_00138560;
inline constexpr guest::Function<0x00560688, u32(u32, u32)> IntrusiveList__push_front;

u32 sead__ExpHeap__add_used_block(gptr<sead__ExpHeap> exp_heap, u32 r1) {
    gptr<IntrusiveList> intrusive_list = gptr<IntrusiveList>(exp_heap.addr() + 0x88u);
    u32 r1_1 = r1 + exp_heap->word_94;
    if (exp_heap->byte_50 != 1u) {
        IntrusiveList__push_front(intrusive_list.addr(), r1_1);
        u32 r0_1 = exp_heap->word_90 + 1u;
        exp_heap->word_90 = r0_1;
        return r0_1;
    }
    insert_node_after_00138560(intrusive_list.addr(), r1_1);
    u32 r0_2 = intrusive_list->word_8 + 1u;
    intrusive_list->word_8 = r0_2;
    return r0_2;
}

}  // namespace d_0055dfa4
GUEST_EXPORT_FRAMED(0x0055dfa4, d_0055dfa4::sead__ExpHeap__add_used_block, 0x4010);  // pushes {r4, lr} first, as the original

// f_0055e9d0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether the task and its whole chain of children are loaded (state 4), under the lock.
namespace d_0055e9d0 {

struct __attribute__((packed)) ResourceTaskIsTreeLoadedArg1 {
    u8 unknown_0[0x30];  // (not used here)
    u32 word_30;
    u8 unknown_34[0x2c];  // (not used here)
    u8 byte_60;
};
GUEST_OFFSET(ResourceTaskIsTreeLoadedArg1, word_30, 0x30);
GUEST_OFFSET(ResourceTaskIsTreeLoadedArg1, byte_60, 0x60);

inline constexpr guest::Function<0x00135740, u32(u32, u32, u32, u32)> lock_member_lock;
inline constexpr guest::Function<0x00137e84, u32(u32, u32)> unlock_member_lock;
inline constexpr guest::Function<0x0055e9d0, u32(u32, u32)> call_ResourceTask__is_tree_loaded;

u32 ResourceTask__is_tree_loaded(u32 resource_task, gptr<ResourceTaskIsTreeLoadedArg1> arg1) {
    u32 r1 = arg1.addr();
    u32 r0_3 = 0;
    u32 r6 = resource_task;
    u32 r5 = resource_task + 4u;
    u32 r4 = r1;
    lock_member_lock(r5, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    u32 r0_1 = arg1->word_30;
    if ((r0_1 & 2u) != 0 && (r0_1 & 4u) != 0 && arg1->byte_60 == 4u) {
        do {
            u32 r0_2 = *gptr<u32>(r4 + 0x14u);
            if (r0_2 == 0) {
                unlock_member_lock(r5, r1);
                return 1u;
            }
            r0_3 = call_ResourceTask__is_tree_loaded(r6, *gptr<u32>(r0_2 + 0x10u));
            r1 = guest::cpu()->r[1];
            guest::preempt();
        } while (r0_3 != 0);
    }
    unlock_member_lock(r5, r1);
    return 0u;
}

}  // namespace d_0055e9d0
GUEST_EXPORT_FRAMED(0x0055e9d0, d_0055e9d0::ResourceTask__is_tree_loaded, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0055ed48: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Starts loading the resource with its argument on the thread's heap, and chains it after its parent; the task.
namespace d_0055ed48 {

struct __attribute__((packed)) ResourceMgrStartLoadArg1 {
    u32 word_0;
    u32 word_4;
    u8 unknown_8[0x54];  // (not used here)
    u32 word_5c;
    u32 word_60;
    u8 unknown_64[0x14];  // (not used here)
    u8 byte_78;
};
GUEST_OFFSET(ResourceMgrStartLoadArg1, word_0, 0x0);
GUEST_OFFSET(ResourceMgrStartLoadArg1, word_4, 0x4);
GUEST_OFFSET(ResourceMgrStartLoadArg1, word_5c, 0x5c);
GUEST_OFFSET(ResourceMgrStartLoadArg1, word_60, 0x60);
GUEST_OFFSET(ResourceMgrStartLoadArg1, byte_78, 0x78);

struct __attribute__((packed)) ResourceMgrStartLoadArg2 {
    u8 unknown_0[0x14];  // (not used here)
    u32 word_14;
};
GUEST_OFFSET(ResourceMgrStartLoadArg2, word_14, 0x14);

struct __attribute__((packed)) Local_0055ed48_ea_1 {
    u32 word_0;
    u32 resource_mgr;
    u32 word_8;
};
GUEST_OFFSET(Local_0055ed48_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_0055ed48_ea_1, resource_mgr, 0x4);
GUEST_OFFSET(Local_0055ed48_ea_1, word_8, 0x8);

struct __attribute__((packed)) Local_0055ed48_ea_2 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0055ed48_ea_2, word_0, 0x0);
GUEST_OFFSET(Local_0055ed48_ea_2, word_4, 0x4);

struct __attribute__((packed)) Local_0055ed48_ea_3 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0055ed48_ea_3, word_0, 0x0);
GUEST_OFFSET(Local_0055ed48_ea_3, word_4, 0x4);

inline constexpr u32 heap_mgr_instance_address = 0x00975338u;
inline guest::global<u32, 0x00975338> heap_mgr_instance;
inline constexpr guest::Function<0x0012c40c, u32(u32, u32)> swap_current_thread_context;
inline constexpr guest::Function<0x00135740, u32(u32, u32, u32, u32)> lock_member_lock;
inline constexpr guest::Function<0x00137e84, u32(u32)> unlock_member_lock;
inline constexpr guest::Function<0x00560b0c, u32(u32, u32)> TreeNode__append_child;
inline constexpr guest::Function<0x00749bb4, u32(u32, u32)> ResourceArgs__heap;

struct __attribute__((packed)) ResourceMgrStartLoadFrame {
    u32 word_0;
    u32 word_4;
    u8 unknown_8[0x8];  // (not read or written by name)
    u32 word_10;
};
GUEST_OFFSET(ResourceMgrStartLoadFrame, word_0, 0x0);
GUEST_OFFSET(ResourceMgrStartLoadFrame, word_4, 0x4);
GUEST_OFFSET(ResourceMgrStartLoadFrame, word_10, 0x10);
GUEST_SIZE(ResourceMgrStartLoadFrame, 0x14);

u32 ResourceMgr__start_load(u32 resource_mgr, gptr<ResourceMgrStartLoadArg1> arg1, gptr<ResourceMgrStartLoadArg2> arg2) {
    guest::StackFrameOf<ResourceMgrStartLoadFrame> frame;  // the original's stack frame
    u32 r8_1 = 0;
    u32 r6_1 = resource_mgr + 4u;
    lock_member_lock(r6_1, arg1.addr(), arg2.addr(), guest::cpu()->r[3]);
    u32 r1_1 = arg1->word_4;
    frame->word_0 = arg1->word_0;
    frame->word_4 = r1_1;
    u32 r9_1 = arg1->byte_78;
    u32 r1_2 = gptr<u32>(arg2.addr())[arg2->word_14];
    if (r1_2 == 0) {
        r8_1 = 1u;
    } else {
        r8_1 = swap_current_thread_context(*heap_mgr_instance, r1_2);
    }
    gptr<Local_0055ed48_ea_1> ea_1 = gptr<Local_0055ed48_ea_1>(frame.at(8).addr());
    ea_1->word_0 = arg2.addr();
    ea_1->resource_mgr = resource_mgr;
    ea_1->word_8 = 0;
    frame->word_10 = arg1->word_60;
    u32 r0_4 = ResourceArgs__heap(frame.at(0).addr(), frame.at(8).addr());
    if (r8_1 != 1u) {
        swap_current_thread_context(*heap_mgr_instance, r8_1);
    }
    gptr<Local_0055ed48_ea_2> ea_2 = gptr<Local_0055ed48_ea_2>(frame.at(0).addr());
    u32 r0_6 = ea_2->word_0;
    u32 r1_4 = ea_2->word_4;
    gptr<Local_0055ed48_ea_3> ea_3 = gptr<Local_0055ed48_ea_3>(r0_4 + 0x64u);
    ea_3->word_0 = r0_6;
    ea_3->word_4 = r1_4;
    *gptr<u8>(r0_4 + 0x61u) = u8(r9_1);
    u32 r0_7 = arg1->word_5c;
    if (r0_7 != 0) {
        TreeNode__append_child(r0_7 + 0x10u, r0_4 == 0 ? 0u : r0_4 + 0x10u);
    }
    unlock_member_lock(r6_1);
    return r0_4;
}

}  // namespace d_0055ed48
GUEST_EXPORT_FRAMED(0x0055ed48, d_0055ed48::ResourceMgr__start_load, 0x4ff0);  // pushes {r4, r5, r6, r7, r8, r9, r10, r11, lr} first, as the original

// f_0055f1ac: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// When the task's lock is free: finishes the task and unlocks it.
namespace d_0055f1ac {

struct __attribute__((packed)) ResourceTask {
    u8 unknown_0[0x20];  // (not used here)
    u32 word_20;
};
GUEST_OFFSET(ResourceTask, word_20, 0x20);

inline constexpr guest::Function<0x00137e84, u32(u32, u32)> unlock_member_lock;
inline constexpr guest::Function<0x0034ba38, u32(u32, u32, u32, u32)> OwnedLock__try_lock;
inline constexpr guest::Function<0x0055f0e4, u32(u32, u32)> ResourceTask__finish;

void ResourceTask__try_finish(gptr<ResourceTask> resource_task, u32 r1) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    if (OwnedLock__try_lock(*gptr<u32>(resource_task->word_20 + 0x20u) + 4u, r1, guest::cpu()->r[2], guest::cpu()->r[3]) != 0) {
        ResourceTask__finish(resource_task.addr(), r1);
        u32 r0_3 = *gptr<u32>(resource_task->word_20 + 0x20u) + 4u;
        frame.release();
        unlock_member_lock(r0_3, guest::cpu()->r[1]);
        return;
    }
}

}  // namespace d_0055f1ac
GUEST_EXPORT(0x0055f1ac, d_0055f1ac::ResourceTask__try_finish);

// f_0055fcf4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Constructs the task manager: its heap, lock, task entries and method nodes.
namespace d_0055fcf4 {

struct __attribute__((packed)) sead__TaskMgr {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
};
GUEST_OFFSET(sead__TaskMgr, word_0, 0x0);
GUEST_OFFSET(sead__TaskMgr, word_4, 0x4);
GUEST_OFFSET(sead__TaskMgr, word_8, 0x8);
GUEST_OFFSET(sead__TaskMgr, word_c, 0xc);
GUEST_OFFSET(sead__TaskMgr, word_10, 0x10);
GUEST_OFFSET(sead__TaskMgr, word_14, 0x14);

struct __attribute__((packed)) Local_0055fcf4_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0055fcf4_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_0055fcf4_ea_1, word_4, 0x4);

struct __attribute__((packed)) Local_0055fcf4_ea_10 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0055fcf4_ea_10, word_0, 0x0);
GUEST_OFFSET(Local_0055fcf4_ea_10, word_4, 0x4);

struct __attribute__((packed)) Local_0055fcf4_ea_12 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0055fcf4_ea_12, word_0, 0x0);
GUEST_OFFSET(Local_0055fcf4_ea_12, word_4, 0x4);

struct __attribute__((packed)) Local_0055fcf4_ea_14 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0055fcf4_ea_14, word_0, 0x0);
GUEST_OFFSET(Local_0055fcf4_ea_14, word_4, 0x4);

struct __attribute__((packed)) Local_0055fcf4_ea_2 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0055fcf4_ea_2, word_0, 0x0);
GUEST_OFFSET(Local_0055fcf4_ea_2, word_4, 0x4);

struct __attribute__((packed)) Local_0055fcf4_ea_21 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0055fcf4_ea_21, word_0, 0x0);
GUEST_OFFSET(Local_0055fcf4_ea_21, word_4, 0x4);

struct __attribute__((packed)) Local_0055fcf4_ea_22 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u32 word_18;
    u32 word_1c;
};
GUEST_OFFSET(Local_0055fcf4_ea_22, word_0, 0x0);
GUEST_OFFSET(Local_0055fcf4_ea_22, word_4, 0x4);
GUEST_OFFSET(Local_0055fcf4_ea_22, word_8, 0x8);
GUEST_OFFSET(Local_0055fcf4_ea_22, word_c, 0xc);
GUEST_OFFSET(Local_0055fcf4_ea_22, word_10, 0x10);
GUEST_OFFSET(Local_0055fcf4_ea_22, word_14, 0x14);
GUEST_OFFSET(Local_0055fcf4_ea_22, word_18, 0x18);
GUEST_OFFSET(Local_0055fcf4_ea_22, word_1c, 0x1c);

struct __attribute__((packed)) Local_0055fcf4_ea_3 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u32 word_18;
    u32 word_1c;
};
GUEST_OFFSET(Local_0055fcf4_ea_3, word_0, 0x0);
GUEST_OFFSET(Local_0055fcf4_ea_3, word_4, 0x4);
GUEST_OFFSET(Local_0055fcf4_ea_3, word_8, 0x8);
GUEST_OFFSET(Local_0055fcf4_ea_3, word_c, 0xc);
GUEST_OFFSET(Local_0055fcf4_ea_3, word_10, 0x10);
GUEST_OFFSET(Local_0055fcf4_ea_3, word_14, 0x14);
GUEST_OFFSET(Local_0055fcf4_ea_3, word_18, 0x18);
GUEST_OFFSET(Local_0055fcf4_ea_3, word_1c, 0x1c);

struct __attribute__((packed)) Local_0055fcf4_ea_4 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0055fcf4_ea_4, word_0, 0x0);
GUEST_OFFSET(Local_0055fcf4_ea_4, word_4, 0x4);

struct __attribute__((packed)) Local_0055fcf4_ea_6 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0055fcf4_ea_6, word_0, 0x0);
GUEST_OFFSET(Local_0055fcf4_ea_6, word_4, 0x4);

struct __attribute__((packed)) Local_0055fcf4_ea_8 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0055fcf4_ea_8, word_0, 0x0);
GUEST_OFFSET(Local_0055fcf4_ea_8, word_4, 0x4);

struct __attribute__((packed)) Local_0055fcf4_r0_7 {
    u8 unknown_0[0x10];  // (not used here)
    u32 word_10;
    u32 word_14;
    u32 word_18;
};
GUEST_OFFSET(Local_0055fcf4_r0_7, word_10, 0x10);
GUEST_OFFSET(Local_0055fcf4_r0_7, word_14, 0x14);
GUEST_OFFSET(Local_0055fcf4_r0_7, word_18, 0x18);

struct __attribute__((packed)) IDisposer {
    u32 vtable;
    u8 unknown_4[0x38];  // (not used here)
    u32 word_3c;
    u8 unknown_40[0x4];  // (not used here)
    u32 word_44;
    u32 word_48;
    u32 word_4c;
};
GUEST_OFFSET(IDisposer, vtable, 0x0);
GUEST_OFFSET(IDisposer, word_3c, 0x3c);
GUEST_OFFSET(IDisposer, word_44, 0x44);
GUEST_OFFSET(IDisposer, word_48, 0x48);
GUEST_OFFSET(IDisposer, word_4c, 0x4c);

struct __attribute__((packed)) Local_0055fcf4_r2_2 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0055fcf4_r2_2, word_0, 0x0);
GUEST_OFFSET(Local_0055fcf4_r2_2, word_4, 0x4);

struct __attribute__((packed)) Local_0055fcf4_r6_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
};
GUEST_OFFSET(Local_0055fcf4_r6_1, word_0, 0x0);
GUEST_OFFSET(Local_0055fcf4_r6_1, word_4, 0x4);
GUEST_OFFSET(Local_0055fcf4_r6_1, word_8, 0x8);
GUEST_OFFSET(Local_0055fcf4_r6_1, word_c, 0xc);
GUEST_OFFSET(Local_0055fcf4_r6_1, word_10, 0x10);
GUEST_OFFSET(Local_0055fcf4_r6_1, word_14, 0x14);

inline constexpr u32 vtable_sead__MethodTreeNode = 0x009047b0u;
inline constexpr u32 vtable_sead__SafeStringBase_char__rec = 0x009047f8u;
inline constexpr u32 vtable_sead__TaskMgr_rec = 0x00905b70u;
inline constexpr u32 vtable_sead__Delegate_sead__MethodTreeNode_ = 0x00905bf0u;
inline constexpr u32 root_heaps_count_address = 0x00ae53b8u;
inline guest::global<u32, 0x008bb364> global_008bb364;
inline guest::global<u32, 0x008bb368> global_008bb368;
inline constexpr guest::Function<0x0012bfec, u32(u32, u32)> CriticalSection__construct;
inline constexpr guest::Function<0x0012c528, u32(u32, u32, u32, u32)> store_constants_12c528;
inline constexpr guest::Function<0x00132174, u32(u32, u32)> IDisposer__construct;
inline constexpr guest::Function<0x00135740, u32(u32, u32)> lock_member_lock;
inline constexpr guest::Function<0x00137e84, u32(u32)> unlock_member_lock;
inline constexpr guest::Function<0x002f6e78, u32(u32, u32, u32, u32)> create_heap;
inline constexpr guest::Function<0x002fbb30, u32(u32, u32, u32)> copy_aligned_bytes;
inline constexpr guest::Function<0x002fd108, u32(u32, u32, u32, u32)> allocate_on_heap;
inline constexpr guest::Function<0x005418f8, u32(u32, u32)> ResourceMgr__unload;
inline constexpr guest::Function<0x0055f4dc, u32(u32, u32, u32)> sead__DelegateEvent_sead__TaskBase____TaskBase___0055f4dc;
inline constexpr guest::Function<0x0055f900, u32(u32, u32, u32, u32)> int__0055f900;
inline constexpr guest::Function<0x00560930, u32(u32, u32, u32)> TaskEntry__construct;

u32 sead__TaskMgr__TaskMgr(gptr<sead__TaskMgr> task_mgr, u32 r1_unused, u32 r2_unused, u32 r3) {
    u32 r0 = task_mgr.addr();
    u32 i = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r10 = guest::cpu()->r[10];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    gptr<Local_0055fcf4_ea_1> ea_1 = gptr<Local_0055fcf4_ea_1>(r13 - 8);
    ea_1->word_0 = i;
    ea_1->word_4 = r14;
    r13 -= 8;
    u32 r1_1 = task_mgr->word_10;
    guest::cpu()->r[13] = r13;
    u32 block = allocate_on_heap(0x180u, r1_1, 4u, r3);
    gptr<Local_0055fcf4_ea_2> ea_2 = gptr<Local_0055fcf4_ea_2>(r13);
    r13 += 8;
    u32 r4_1 = ea_2->word_0;
    r14 = ea_2->word_4;
    gptr<Local_0055fcf4_ea_3> ea_3 = gptr<Local_0055fcf4_ea_3>(r13 - 0x20);
    ea_3->word_0 = r4_1;
    ea_3->word_4 = r5;
    ea_3->word_8 = r6;
    ea_3->word_c = r7;
    ea_3->word_10 = r8;
    ea_3->word_14 = r9;
    ea_3->word_18 = r10;
    ea_3->word_1c = r14;
    r13 -= 0x30u;
    r8 = r0;
    *gptr<u32>(block) = vtable_sead__TaskMgr_rec;
    u32 critical_section = block + 4u;
    guest::cpu()->r[13] = r13;
    CriticalSection__construct(critical_section, vtable_sead__TaskMgr_rec);
    u32 r0_3 = critical_section - 4u;
    r9 = 0u;
    gptr<Local_0055fcf4_ea_4> ea_4 = gptr<Local_0055fcf4_ea_4>(r0_3 + 0x20u);
    ea_4->word_0 = task_mgr->word_14;
    ea_4->word_4 = r9;
    u32 r1_2 = r0_3 + 0x2cu;
    *gptr<u32>(r0_3 + 0x28u) = r9;
    gptr<Local_0055fcf4_ea_6> ea_6 = gptr<Local_0055fcf4_ea_6>(r0_3 + 0x30u);
    ea_6->word_0 = r1_2;
    ea_6->word_4 = r9;
    *gptr<u32>(r0_3 + 0x2cu) = r1_2;
    u32 r1_3 = r0_3 + 0x38u;
    gptr<Local_0055fcf4_ea_8> ea_8 = gptr<Local_0055fcf4_ea_8>(r0_3 + 0x3cu);
    ea_8->word_0 = r1_3;
    ea_8->word_4 = r9;
    *gptr<u32>(r0_3 + 0x38u) = r1_3;
    u32 r1_4 = r0_3 + 0x44u;
    gptr<Local_0055fcf4_ea_10> ea_10 = gptr<Local_0055fcf4_ea_10>(r0_3 + 0x48u);
    ea_10->word_0 = r1_4;
    ea_10->word_4 = r9;
    *gptr<u32>(r0_3 + 0x44u) = r1_4;
    u32 r1_5 = r0_3 + 0x50u;
    gptr<Local_0055fcf4_ea_12> ea_12 = gptr<Local_0055fcf4_ea_12>(r0_3 + 0x54u);
    ea_12->word_0 = r1_5;
    ea_12->word_4 = r9;
    *gptr<u32>(r0_3 + 0x50u) = r1_5;
    u32 r1_6 = r0_3 + 0x5cu;
    gptr<Local_0055fcf4_ea_14> ea_14 = gptr<Local_0055fcf4_ea_14>(r0_3 + 0x60u);
    ea_14->word_0 = r1_6;
    ea_14->word_4 = r9;
    gptr<Local_0055fcf4_r2_2> r2_2 = gptr<Local_0055fcf4_r2_2>(r0_3 + 0x6cu);
    *gptr<u32>(r0_3 + 0x5cu) = r1_6;
    u32 r1_7 = r0_3 + 0x68u;
    r2_2->word_0 = r1_7;
    r2_2->word_4 = r9;
    *gptr<u32>(r0_3 + 0x68u) = r1_7;
    *gptr<u32>(r0_3 + 0x88u) = r9;
    *gptr<u32>(r0_3 + 0x84u) = r9;
    u32 r1_8 = task_mgr->word_0;
    u32 ea_19 = r0_3 + 0x90u;
    *gptr<u32>(ea_19) = r1_8;
    guest::cpu()->r[13] = r13;
    u32 r0_5 = TaskEntry__construct(ea_19 + 8u, r1_8, r2_2.addr());
    u32 r1_9 = task_mgr->word_0;
    u32 r2_3 = task_mgr->word_4;
    u32 r3_3 = task_mgr->word_8;
    u32 r4_2 = task_mgr->word_c;
    u32 r5_1 = task_mgr->word_10;
    u32 r12_1 = task_mgr->word_14;
    u32 r0_6 = r0_5 - 0x98u;
    gptr<Local_0055fcf4_r6_1> r6_1 = gptr<Local_0055fcf4_r6_1>(r0_6 + 0x118u);
    r6_1->word_0 = r1_9;
    r6_1->word_4 = r2_3;
    r6_1->word_8 = r3_3;
    r6_1->word_c = r4_2;
    r6_1->word_10 = r5_1;
    r6_1->word_14 = r12_1;
    gptr<Local_0055fcf4_r0_7> r0_7 = gptr<Local_0055fcf4_r0_7>(r0_6 + 0x140u);
    guest::cpu()->r[13] = r13;
    store_constants_12c528(r0_7.addr(), r1_9, r2_3, r3_3);
    r7 = vtable_sead__SafeStringBase_char__rec;
    r0_7->word_18 = 0x55ff30;
    r0_7->word_10 = r0_6 + 0x130u;
    r0_7->word_14 = r7;
    gptr<IDisposer> i_disposer = gptr<IDisposer>(r0_7.addr() - 0x10u);
    guest::cpu()->r[13] = r13;
    IDisposer__construct(i_disposer.addr(), 0x55ff30u);
    u32 r2_5 = guest::cpu()->r[2];
    u32 r3_5 = guest::cpu()->r[3];
    i_disposer->vtable = vtable_sead__MethodTreeNode;
    i_disposer->word_3c = r9;
    i_disposer->word_44 = r9;
    i_disposer->word_48 = r9;
    u32 r1_10 = i_disposer.addr() + 0x2cu;
    i_disposer->word_4c = r9;
    if (i_disposer.addr() + 0x2cu != 0) {
        *gptr<u32>(r1_10 + 4u) = r9;
        u32 r2_6 = *global_008bb364;
        r3_5 = *global_008bb368;
        gptr<Local_0055fcf4_ea_21> ea_21 = gptr<Local_0055fcf4_ea_21>(r1_10 + 8u);
        ea_21->word_0 = r2_6;
        ea_21->word_4 = r3_5;
        r2_5 = vtable_sead__Delegate_sead__MethodTreeNode_;
        *gptr<u32>(r1_10) = r2_5;
    }
    r10 = root_heaps_count_address;
    *gptr<u32>(i_disposer.addr() - 0x9cu) = r9;
    r5 = i_disposer.addr() - 0x130u;
    i = 0u;
    r6 = *gptr<u32>(r10);
    if (s32(r6) > 0) {
        do {
            u32 r2_7 = *gptr<u32>(r10) > i ? gptr<u32>(*gptr<u32>(r10 + 8u))[i] : 0u;
            *gptr<u32>(r13 + 0xcu) = 0x55ff48;
            *gptr<u32>(r13 + 8u) = r7;
            *gptr<u32>(r13) = r9;
            guest::cpu()->r[13] = r13;
            u32 r0_9 = create_heap(0u, r13 + 8u, r2_7, 1u);
            r2_5 = guest::cpu()->r[2];
            r3_5 = guest::cpu()->r[3];
            r1_10 = r0_9;
            u32 r0_10 = r5 + (i << 2);
            i += 1u;
            *gptr<u32>(r0_10 + 0x74u) = r1_10;
            guest::preempt();
        } while (s32(i) < s32(r6));
    }
    guest::cpu()->r[13] = r13;
    int__0055f900(r5, r1_10, r2_5, r3_5);
    u32 r1_12 = *gptr<u32>(r8 + 0xcu);
    guest::cpu()->r[13] = r13;
    copy_aligned_bytes(r5 + 0x98u, r1_12, 0x80u);
    *gptr<u32>(r5 + 0x94u) = r9;
    *gptr<u8>(r5 + 0x110u) = 1;
    u32 r1_13 = r5 + 0x94u;
    u32 r4_4 = r5 + 4u;
    *gptr<u32>(r5 + 0x104u) = r1_13;
    u32 r6_2 = r5 + 0x98u;
    *gptr<u32>(r5 + 0xfcu) = r9;
    guest::cpu()->r[13] = r13;
    lock_member_lock(r4_4, r1_13);
    u32 r0_12 = *gptr<u32>(r6_2 + 0x64u);
    if (r0_12 != 0) {
        guest::cpu()->r[13] = r13;
        ResourceMgr__unload(r0_12, r6_2);
        guest::cpu()->r[13] = r13;
        unlock_member_lock(r4_4);
    } else {
        guest::cpu()->r[13] = r13;
        sead__DelegateEvent_sead__TaskBase____TaskBase___0055f4dc(r5, r6_2, 0u);
        guest::cpu()->r[13] = r13;
        unlock_member_lock(r4_4);
    }
    r13 += 0x10u;
    gptr<Local_0055fcf4_ea_22> ea_22 = gptr<Local_0055fcf4_ea_22>(r13);
    r13 += 0x20;
    u32 r4_5 = ea_22->word_0;
    u32 r5_2 = ea_22->word_4;
    u32 r6_3 = ea_22->word_8;
    u32 r7_1 = ea_22->word_c;
    u32 r8_1 = ea_22->word_10;
    u32 r9_1 = ea_22->word_14;
    u32 r10_1 = ea_22->word_18;
    guest::cpu()->r[4] = r4_5;
    guest::cpu()->r[5] = r5_2;
    guest::cpu()->r[6] = r6_3;
    guest::cpu()->r[7] = r7_1;
    guest::cpu()->r[8] = r8_1;
    guest::cpu()->r[9] = r9_1;
    guest::cpu()->r[10] = r10_1;
    guest::cpu()->r[13] = r13;
    return r5;
}

}  // namespace d_0055fcf4
GUEST_EXPORT(0x0055fcf4, d_0055fcf4::sead__TaskMgr__TaskMgr);
