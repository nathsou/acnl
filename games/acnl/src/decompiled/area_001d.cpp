// Functions decompiled by tools/decomp (docs/decomp.md), each proved equal to the recompiled original (prove-cpp). The
// names come from games/acnl/names (tools/decomp/names.py); the others are generated (d_<address>::f_<address>,
// Object_<address>_<argument>, word_<offset>) and still to be chosen.
#include "guest/guest.hpp"
#include "recovered/structs.hpp"

#include <bit>

using guest::gptr;

// f_001d051c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001d051c {

struct __attribute__((packed)) Object_001d051c_0 {
    u8 unknown_0[0x1bc];  // (not used here)
    u8 byte_1bc;
};
GUEST_OFFSET(Object_001d051c_0, byte_1bc, 0x1bc);

inline constexpr guest::Function<0x001aae00, u32(u32, u32, u32, u32)> call_001aae00;

u32 f_001d051c(gptr<Object_001d051c_0> arg0, u32 r1) {
    if (arg0->byte_1bc != 0) {
        call_001aae00(arg0.addr(), 2u, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
    }
    arg0->byte_1bc = 0;
    guest::cpu()->r[1] = r1;
    return 0u;
}

}  // namespace d_001d051c
GUEST_EXPORT_FRAMED(0x001d051c, d_001d051c::f_001d051c, 0x4010);  // pushes {r4, lr} first, as the original

// f_001d2694: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001d2694 {

inline constexpr guest::Function<0x001ce548, u32(u32, u32, u32, u32)> call_001ce548;

struct __attribute__((packed)) Frame_001d2694 {
    u32 word_0;
};
GUEST_OFFSET(Frame_001d2694, word_0, 0x0);
GUEST_SIZE(Frame_001d2694, 0x4);

u32 f_001d2694(u32 r0_unused, u32 r1_unused, u32 r2_unused, u32 r3, float S0, float S1, float S2) {
    guest::StackFrameOf<Frame_001d2694> frame;  // the original's stack frame
    frame->word_0 = r3;
    frame->word_0 = 0;
    float S1_1 = 1.0f;
    float S0_1 = 0.0f;
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    guest::cpu()->s[2] = S0;
    guest::cpu()->s[3] = S1;
    guest::cpu()->s[4] = S2;
    call_001ce548(guest::cpu()->r[0], 0xaeu, 1u, 1u);  // (from the original)
    return guest::cpu()->r[0];
}

}  // namespace d_001d2694
GUEST_EXPORT_FRAMED(0x001d2694, d_001d2694::f_001d2694, 0x4000);  // pushes {lr} first, as the original

// f_001d2e8c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001d2e8c {

struct __attribute__((packed)) Object_001d2e8c_0 {
    u8 unknown_0[0x224];  // (not used here)
    u8 byte_224;
    u8 unknown_225[0x3];  // (not used here)
    u32 word_228;
};
GUEST_OFFSET(Object_001d2e8c_0, byte_224, 0x224);
GUEST_OFFSET(Object_001d2e8c_0, word_228, 0x228);


void f_001d2e8c(gptr<Object_001d2e8c_0> arg0, u32 r1, u32 r2) {
    arg0->byte_224 = u8(r1);
    arg0->word_228 = r2;
}

}  // namespace d_001d2e8c
GUEST_EXPORT(0x001d2e8c, d_001d2e8c::f_001d2e8c);

// f_001d333c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001d333c {

struct __attribute__((packed)) Local_001d333c_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_001d333c_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_001d333c_ea_1, word_4, 0x4);

struct __attribute__((packed)) Local_001d333c_r0_1 {
    u32 word_0;
    u8 unknown_4[0x1b8];  // (not used here)
    u8 byte_1bc;
    u8 byte_1bd;
    u8 byte_1be;
    u8 unknown_1bf[0x1];  // (not used here)
    u32 word_1c0;
    u32 word_1c4;
    u8 byte_1c8;
};
GUEST_OFFSET(Local_001d333c_r0_1, word_0, 0x0);
GUEST_OFFSET(Local_001d333c_r0_1, byte_1bc, 0x1bc);
GUEST_OFFSET(Local_001d333c_r0_1, byte_1bd, 0x1bd);
GUEST_OFFSET(Local_001d333c_r0_1, byte_1be, 0x1be);
GUEST_OFFSET(Local_001d333c_r0_1, word_1c0, 0x1c0);
GUEST_OFFSET(Local_001d333c_r0_1, word_1c4, 0x1c4);
GUEST_OFFSET(Local_001d333c_r0_1, byte_1c8, 0x1c8);

struct __attribute__((packed)) Local_001d333c_r0_2 {
    u32 word_0;
    u8 unknown_4[0x8];  // (not used here)
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
};
GUEST_OFFSET(Local_001d333c_r0_2, word_0, 0x0);
GUEST_OFFSET(Local_001d333c_r0_2, word_c, 0xc);
GUEST_OFFSET(Local_001d333c_r0_2, word_10, 0x10);
GUEST_OFFSET(Local_001d333c_r0_2, word_14, 0x14);
GUEST_OFFSET(Local_001d333c_r0_2, word_18, 0x18);
GUEST_OFFSET(Local_001d333c_r0_2, word_1c, 0x1c);
GUEST_OFFSET(Local_001d333c_r0_2, word_20, 0x20);
GUEST_OFFSET(Local_001d333c_r0_2, word_24, 0x24);
GUEST_OFFSET(Local_001d333c_r0_2, word_28, 0x28);
GUEST_OFFSET(Local_001d333c_r0_2, word_2c, 0x2c);
GUEST_OFFSET(Local_001d333c_r0_2, word_30, 0x30);
GUEST_OFFSET(Local_001d333c_r0_2, word_34, 0x34);
GUEST_OFFSET(Local_001d333c_r0_2, word_38, 0x38);
GUEST_OFFSET(Local_001d333c_r0_2, word_3c, 0x3c);
GUEST_OFFSET(Local_001d333c_r0_2, word_40, 0x40);
GUEST_OFFSET(Local_001d333c_r0_2, word_44, 0x44);
GUEST_OFFSET(Local_001d333c_r0_2, word_48, 0x48);
GUEST_OFFSET(Local_001d333c_r0_2, word_4c, 0x4c);
GUEST_OFFSET(Local_001d333c_r0_2, word_50, 0x50);
GUEST_OFFSET(Local_001d333c_r0_2, word_54, 0x54);
GUEST_OFFSET(Local_001d333c_r0_2, word_58, 0x58);
GUEST_OFFSET(Local_001d333c_r0_2, word_5c, 0x5c);
GUEST_OFFSET(Local_001d333c_r0_2, word_60, 0x60);
GUEST_OFFSET(Local_001d333c_r0_2, word_64, 0x64);
GUEST_OFFSET(Local_001d333c_r0_2, word_68, 0x68);
GUEST_OFFSET(Local_001d333c_r0_2, word_6c, 0x6c);
GUEST_OFFSET(Local_001d333c_r0_2, word_70, 0x70);
GUEST_OFFSET(Local_001d333c_r0_2, word_74, 0x74);

struct __attribute__((packed)) Local_001d333c_r0_5 {
    u8 unknown_0[0x1c8];  // (not used here)
    u8 byte_1c8;
    u8 unknown_1c9[0x3];  // (not used here)
    u32 word_1cc;
    u8 unknown_1d0[0x68];  // (not used here)
    float float_238;
    float float_23c;
    float float_240;
    float float_244;
    float float_248;
    float float_24c;
    float float_250;
    float float_254;
    float float_258;
    u32 word_25c;
    u32 word_260;
    u32 word_264;
    u32 word_268;
    u32 word_26c;
};
GUEST_OFFSET(Local_001d333c_r0_5, byte_1c8, 0x1c8);
GUEST_OFFSET(Local_001d333c_r0_5, word_1cc, 0x1cc);
GUEST_OFFSET(Local_001d333c_r0_5, float_238, 0x238);
GUEST_OFFSET(Local_001d333c_r0_5, float_23c, 0x23c);
GUEST_OFFSET(Local_001d333c_r0_5, float_240, 0x240);
GUEST_OFFSET(Local_001d333c_r0_5, float_244, 0x244);
GUEST_OFFSET(Local_001d333c_r0_5, float_248, 0x248);
GUEST_OFFSET(Local_001d333c_r0_5, float_24c, 0x24c);
GUEST_OFFSET(Local_001d333c_r0_5, float_250, 0x250);
GUEST_OFFSET(Local_001d333c_r0_5, float_254, 0x254);
GUEST_OFFSET(Local_001d333c_r0_5, float_258, 0x258);
GUEST_OFFSET(Local_001d333c_r0_5, word_25c, 0x25c);
GUEST_OFFSET(Local_001d333c_r0_5, word_260, 0x260);
GUEST_OFFSET(Local_001d333c_r0_5, word_264, 0x264);
GUEST_OFFSET(Local_001d333c_r0_5, word_268, 0x268);
GUEST_OFFSET(Local_001d333c_r0_5, word_26c, 0x26c);

inline constexpr u32 vtable_PlayerModel = 0x008ebc68u;
inline constexpr guest::Function<0x001ac854, u32(u32, u32, u32, u32)> HumanModel__HumanModel;
inline constexpr guest::Function<0x0027b428, u32(u32, u32)> ItemRowWithFlag__construct;
inline constexpr guest::Function<0x0032a470, u32(u32)> construct_default_typed_entry_0032a470;

u32 PlayerModel__PlayerModel(u32 r0, u32 r1_unused, u32 r2, float S0) {
    gptr<Local_001d333c_r0_1> r0_1 = gptr<Local_001d333c_r0_1>(HumanModel__HumanModel(r0, 0u, r2, guest::cpu()->r[3]));
    r0_1->word_0 = vtable_PlayerModel;
    gptr<Local_001d333c_r0_2> r0_2 = gptr<Local_001d333c_r0_2>(r0_1.addr() + 0x144u);  // (from the original)
    u32 r1_1 = ~0u;
    r0_2->word_0 = 0;
    gptr<Local_001d333c_ea_1> ea_1 = gptr<Local_001d333c_ea_1>(r0_2.addr() + 4u);
    ea_1->word_0 = r1_1;
    ea_1->word_4 = 0;
    r0_2->word_c = r1_1;
    r0_2->word_10 = 0;
    r0_2->word_14 = r1_1;
    r0_2->word_18 = 0;
    r0_2->word_1c = r1_1;
    r0_2->word_20 = 0;
    r0_2->word_24 = r1_1;
    r0_2->word_28 = 0;
    r0_2->word_2c = r1_1;
    r0_2->word_30 = 0;
    r0_2->word_34 = r1_1;
    r0_2->word_38 = 0;
    r0_2->word_3c = r1_1;
    r0_2->word_40 = 0;
    r0_2->word_44 = r1_1;
    r0_2->word_48 = 0;
    r0_2->word_4c = r1_1;
    r0_2->word_50 = 0;
    r0_2->word_54 = r1_1;
    r0_2->word_58 = 0;
    r0_2->word_5c = r1_1;
    r0_2->word_60 = 0;
    r0_2->word_64 = r1_1;
    r0_2->word_68 = 0;
    r0_2->word_6c = r1_1;
    r0_2->word_70 = 0;
    r0_2->word_74 = r1_1;
    r0_1->byte_1bc = 0;
    r0_1->byte_1bd = 0;
    r0_1->byte_1be = 0;
    r0_1->word_1c0 = 0;
    r0_1->word_1c4 = 0;
    u32 r0_3 = r0_1.addr() + 0x200u;  // (from the original)
    r0_1->byte_1c8 = 0;
    ItemRowWithFlag__construct(r0_3, r1_1);
    u32 r0_4 = r0_3 + 0x24u;  // (from the original)
    construct_default_typed_entry_0032a470(r0_4);
    float S0_1 = 1.0f;
    gptr<Local_001d333c_r0_5> r0_5 = gptr<Local_001d333c_r0_5>(r0_4 - 0x224u);  // (from the original)
    r0_5->float_238 = S0_1;
    r0_5->float_23c = S0_1;
    r0_5->float_240 = S0_1;
    float S0_2 = 0.0f;
    r0_5->float_244 = S0_2;
    r0_5->float_248 = S0_2;
    r0_5->float_24c = S0_2;
    r0_5->float_250 = S0_2;
    r0_5->float_254 = S0_2;
    r0_5->float_258 = S0_2;
    r0_5->word_25c = 0;
    r0_5->word_260 = 0;
    r0_5->word_264 = 0;
    r0_5->word_268 = 0;
    r0_5->word_26c = 0;
    r0_5->byte_1c8 = 0;
    r0_5->word_1cc = 0;
    guest::cpu()->s[0] = S0_2;
    return r0_5.addr();
}

}  // namespace d_001d333c
GUEST_EXPORT_FRAMED(0x001d333c, d_001d333c::PlayerModel__PlayerModel, 0x4010);  // pushes {r4, lr} first, as the original

// f_001d3468: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001d3468 {

inline constexpr u32 vtable_HumanModel = 0x008eb174u;
inline constexpr u32 vtable_PlayerModel = 0x008ebc68u;
inline constexpr guest::Function<0x001abcd4, u32(u32, u32, u32, u32)> call_001abcd4;
inline constexpr guest::Function<0x004edd84, u32(u32)> set_base_vtable_004edd84;
inline constexpr guest::Function<0x004ef50c, u32(u32)> g3d__GroupSkeletalAnim__virtual_0;

u32 PlayerModel__virtual_7(gptr<HumanModel> arg0) {
    arg0->word_0 = vtable_PlayerModel;
    u32 r0_1 = arg0.addr() + 0x144u;  // (from the original)
    u32 r2_1 = ~0u;
    arg0->word_1b4 = 0;
    arg0->word_1b8 = r2_1;
    arg0->word_1ac = 0;
    arg0->word_1b0 = r2_1;
    arg0->word_1a4 = 0;
    arg0->word_1a8 = r2_1;
    arg0->word_19c = 0;
    arg0->word_1a0 = r2_1;
    arg0->word_194 = 0;
    arg0->word_198 = r2_1;
    arg0->word_18c = 0;
    arg0->word_190 = r2_1;
    arg0->word_184 = 0;
    arg0->word_188 = r2_1;
    arg0->word_17c = 0;
    arg0->word_180 = r2_1;
    arg0->word_174 = 0;
    arg0->word_178 = r2_1;
    arg0->word_16c = 0;
    arg0->word_170 = r2_1;
    arg0->word_164 = 0;
    arg0->word_168 = r2_1;
    arg0->word_15c = 0;
    arg0->word_160 = r2_1;
    arg0->word_154 = 0;
    arg0->word_158 = r2_1;
    arg0->word_14c = 0;
    arg0->word_150 = r2_1;
    arg0->word_144 = 0;
    arg0->word_148 = r2_1;
    arg0->word_0 = vtable_HumanModel;
    call_001abcd4(r0_1 - 0x144u, vtable_HumanModel, r2_1, r0_1 + 8u);  // (from the original)
    g3d__GroupSkeletalAnim__virtual_0(r0_1 - 0x78u);  // (from the original)
    set_base_vtable_004edd84(r0_1 - 0xccu);  // (from the original)
    return r0_1 - 0x144u;  // (from the original)
}

}  // namespace d_001d3468
GUEST_EXPORT_FRAMED(0x001d3468, d_001d3468::PlayerModel__virtual_7, 0x4010);  // pushes {r4, lr} first, as the original

// f_001d5348: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001d5348 {

struct __attribute__((packed)) Object_001d5348_0 {
    u8 unknown_0[0x34];  // (not used here)
    u32 word_34;
    u8 byte_38;
    u8 unknown_39[0x3];  // (not used here)
    u32 word_3c;
};
GUEST_OFFSET(Object_001d5348_0, word_34, 0x34);
GUEST_OFFSET(Object_001d5348_0, byte_38, 0x38);
GUEST_OFFSET(Object_001d5348_0, word_3c, 0x3c);

inline guest::global<u32, 0x0094d080> global_0094d080;
inline constexpr guest::Function<0x00136e58, u32(u32, u32, u32, u32)> call_00136e58;
inline constexpr guest::Function<0x001d7f24, u32(u32, u32, u32)> call_001d7f24;
inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> read_global_byte_2;

u32 f_001d5348(gptr<Object_001d5348_0> arg0, u32 r1, u32 r2) {
    u32 r0_1 = arg0->word_34;
    if (r0_1 != 0) {
        call_00136e58(r0_1, r1, r2, guest::cpu()->r[3]);
        arg0->byte_38 = 5;
        return 5u;
    }
    arg0->byte_38 = 0;
    u32 r0_2 = arg0->word_3c;
    u32 r1_2 = r0_2 + 0xfeffff5fu;  // (from the original)
    if (r1_2 == 0) {
        u32 r0_3 = read_global_byte_2(r0_2, r1_2, r2, guest::cpu()->r[3]);
        r1_2 = guest::cpu()->r[1];
        if (r0_3 == 0x27u) {  // (from the original)
            call_001d7f24(*global_0094d080 + 0xb00u, 0x100079eu, 0u);  // (from the original)
            r1_2 = guest::cpu()->r[1];
        }
    }
    u32 r0_5 = ~0u;
    arg0->word_3c = r0_5;
    guest::cpu()->r[1] = r1_2;
    return r0_5;
}

}  // namespace d_001d5348
GUEST_EXPORT_FRAMED(0x001d5348, d_001d5348::f_001d5348, 0x4010);  // pushes {r4, lr} first, as the original

// f_001d560c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001d560c {

struct __attribute__((packed)) Object_001d560c_0 {
    u8 unknown_0[0xd0];  // (not used here)
    u32 word_d0;
    u32 word_d4;
    u8 byte_d8;
    u8 unknown_d9[0x3];  // (not used here)
    u32 word_dc;
    u8 byte_e0;
};
GUEST_OFFSET(Object_001d560c_0, word_d0, 0xd0);
GUEST_OFFSET(Object_001d560c_0, word_d4, 0xd4);
GUEST_OFFSET(Object_001d560c_0, byte_d8, 0xd8);
GUEST_OFFSET(Object_001d560c_0, word_dc, 0xdc);
GUEST_OFFSET(Object_001d560c_0, byte_e0, 0xe0);

inline constexpr u32 global_0094cd20_address = 0x0094cd20u;
inline guest::global<u32, 0x0094cd20> global_0094cd20;
inline constexpr guest::Function<0x00136e58, u32(u32, u32, u32, u32)> call_00136e58;
inline constexpr guest::Function<0x0013d4f0, u32(u32, u32, u32)> call_0013d4f0;
inline constexpr guest::Function<0x0071d2d4, u32(u32, u32, u32, u32)> call_0071d2d4;

u32 f_001d560c(gptr<Object_001d560c_0> arg0, u32 r1_unused, u32 r2) {
    u32 r0_1 = arg0->word_d0;
    if (r0_1 != 0) {
        call_00136e58(r0_1, 0u, r2, guest::cpu()->r[3]);
        r2 = guest::cpu()->r[2];
    }
    u32 r0_2 = arg0->word_d4;
    if (r0_2 != 0) {
        call_00136e58(r0_2, 0u, r2, guest::cpu()->r[3]);
    }
    arg0->byte_e0 = 4;
    u32 r5_1 = *global_0094cd20;
    u32 r0_3 = call_0071d2d4(r5_1, 0x100026bu, ~0u, guest::cpu()->r[3]);  // (from the original)
    if (r0_3 == 0) {
        u32 r0_4 = call_0071d2d4(r5_1, 0x100026cu, ~0u, guest::cpu()->r[3]);  // (from the original)
        if (r0_4 == 0) {
            arg0->byte_d8 = 4;
            arg0->word_dc = 0;
            return 0u;
        }
    }
    call_0013d4f0(*global_0094cd20, 0u, 1u);
    arg0->byte_d8 = 4;
    arg0->word_dc = 0;
    return 0u;
}

}  // namespace d_001d560c
GUEST_EXPORT_FRAMED(0x001d560c, d_001d560c::f_001d560c, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_001d56a0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001d56a0 {

struct __attribute__((packed)) Local_001d56a0_ea_3 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_001d56a0_ea_3, word_0, 0x0);
GUEST_OFFSET(Local_001d56a0_ea_3, word_4, 0x4);

struct __attribute__((packed)) Local_001d56a0_ea_8 {
    u8 byte_0;
    u8 unknown_1[0x3];  // (not used here)
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_001d56a0_ea_8, byte_0, 0x0);
GUEST_OFFSET(Local_001d56a0_ea_8, word_4, 0x4);
GUEST_OFFSET(Local_001d56a0_ea_8, word_8, 0x8);

struct __attribute__((packed)) Local_001d56a0_r1_1 {
    u8 unknown_0[0x98];  // (not used here)
    u32 word_98;
    u8 byte_9c;
    u8 unknown_9d[0x7];  // (not used here)
    u32 word_a4;
};
GUEST_OFFSET(Local_001d56a0_r1_1, word_98, 0x98);
GUEST_OFFSET(Local_001d56a0_r1_1, byte_9c, 0x9c);
GUEST_OFFSET(Local_001d56a0_r1_1, word_a4, 0xa4);

inline constexpr u32 global_0094d080_address = 0x0094d080u;
inline guest::global<u32, 0x0094d080> global_0094d080;
inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> for_each_element;
inline constexpr guest::Function<0x006b1d88, u32(u32, u32, u32)> call_006b1d88;
inline constexpr guest::Function<0x006b1da4, u32(u32, u32, u32, u32)> call_006b1da4;
inline constexpr guest::Function<0x00766e64, u32(u32, u32)> call_00766e64;

struct __attribute__((packed)) Frame_001d56a0 {
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
    u8 unknown_4c[0x60];  // (not read or written by name)
};
GUEST_OFFSET(Frame_001d56a0, word_0, 0x0);
GUEST_OFFSET(Frame_001d56a0, byte_4, 0x4);
GUEST_OFFSET(Frame_001d56a0, word_8, 0x8);
GUEST_OFFSET(Frame_001d56a0, word_18, 0x18);
GUEST_OFFSET(Frame_001d56a0, word_24, 0x24);
GUEST_OFFSET(Frame_001d56a0, word_28, 0x28);
GUEST_OFFSET(Frame_001d56a0, word_2c, 0x2c);
GUEST_OFFSET(Frame_001d56a0, word_30, 0x30);
GUEST_OFFSET(Frame_001d56a0, word_34, 0x34);
GUEST_OFFSET(Frame_001d56a0, word_38, 0x38);
GUEST_OFFSET(Frame_001d56a0, word_3c, 0x3c);
GUEST_OFFSET(Frame_001d56a0, word_40, 0x40);
GUEST_OFFSET(Frame_001d56a0, word_44, 0x44);
GUEST_OFFSET(Frame_001d56a0, half_48, 0x48);
GUEST_OFFSET(Frame_001d56a0, half_4a, 0x4a);
GUEST_SIZE(Frame_001d56a0, 0xac);

void f_001d56a0(u32 r0, u32 r1, float S0) {
    guest::StackFrameOf<Frame_001d56a0> frame;  // the original's stack frame
    u32 r7_1 = ~0u;
    frame->word_0 = 0;
    frame->word_18 = 0;
    gptr<Local_001d56a0_ea_3> ea_3 = gptr<Local_001d56a0_ea_3>(frame.at(0x1c).addr());  // (from the original)
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
    u32 r0_2 = for_each_element(frame.at(0x4c).addr(), 0x4bfb50u, 0xdu, 4u);  // (from the original)
    u32 r0_3 = r0_2 - 4u;
    float S0_1 = 1.0f;
    *gptr<u32>(r0_3 + 0x38u) = std::bit_cast<u32>(S0_1);  // (from the original)
    *gptr<u8>(r0_3 + 0x3cu) = 0x7f;  // (from the original)
    *gptr<u8>(r0_3 + 0x3fu) = 0;  // (from the original)
    *gptr<u32>(r0_3 + 0x40u) = r7_1;  // (from the original)
    gptr<Local_001d56a0_r1_1> r1_1 = gptr<Local_001d56a0_r1_1>(r0_3 - 0x48u);  // (from the original)
    *gptr<u16>(r0_3 + 0x3du) = 0;  // (from the original)
    gptr<Local_001d56a0_ea_8> ea_8 = gptr<Local_001d56a0_ea_8>(r0_3 + 0x44u);  // (from the original)
    ea_8->byte_0 = 0;
    ea_8->word_4 = 0;
    ea_8->word_8 = 0;
    r1_1->word_98 = 0;
    r1_1->byte_9c = 0;
    r1_1->word_a4 = 0;
    if (r1 != 0) {
        u32 r0_4 = *global_0094d080;
        guest::cpu()->s[0] = S0_1;
        u32 r0_5 = call_00766e64(r0_4, 0x100009bu);  // (from the original)
        S0_1 = guest::cpu()->s[0];
        if (r0_5 != 0) {
            frame->word_0 = 1;
            frame->byte_4 = 2;
            frame->word_8 = r0_5;
            u32 r0_6 = *global_0094d080;
            call_006b1da4(r0_6, r0 + 0xd0u, 0x100009bu, frame.at(0).addr());  // (from the original)
            return;
        }
    }
    u32 r0_7 = *global_0094d080;
    guest::cpu()->s[0] = S0_1;
    call_006b1d88(r0_7, r0 + 0xd0u, 0x100009bu);  // (from the original)
}

}  // namespace d_001d56a0
GUEST_EXPORT_FRAMED(0x001d56a0, d_001d56a0::f_001d56a0, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_001d71c8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001d71c8 {

struct __attribute__((packed)) Object_001d71c8_0 {
    u8 unknown_0[0x40];  // (not used here)
    u32 word_40;
    u8 unknown_44[0x4];  // (not used here)
    u8 byte_48;
};
GUEST_OFFSET(Object_001d71c8_0, word_40, 0x40);
GUEST_OFFSET(Object_001d71c8_0, byte_48, 0x48);

inline constexpr guest::Function<0x00136e58, u32(u32, u32, u32, u32)> call_00136e58;

u32 f_001d71c8(gptr<Object_001d71c8_0> arg0) {
    u32 r0_1 = arg0->word_40;
    if (r0_1 != 0) {
        call_00136e58(r0_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
        arg0->byte_48 = 5;
        return 5u;
    }
    u32 r0_2 = arg0->byte_48;
    if (r0_2 != 0) {
        arg0->byte_48 = 2;
        return 2u;
    }
    return r0_2;
}

}  // namespace d_001d71c8
GUEST_EXPORT_FRAMED(0x001d71c8, d_001d71c8::f_001d71c8, 0x4010);  // pushes {r4, lr} first, as the original

// f_001d7b90: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001d7b90 {

struct __attribute__((packed)) Object_001d7b90_0 {
    u8 unknown_0[0x98];  // (not used here)
    u32 word_98;
};
GUEST_OFFSET(Object_001d7b90_0, word_98, 0x98);


void f_001d7b90(gptr<Object_001d7b90_0> arg0, u32 r1) {
    if (arg0->word_98 == r1) {
        r1 = 0u;
        arg0->word_98 = r1;
    }
    guest::cpu()->r[1] = r1;
}

}  // namespace d_001d7b90
GUEST_EXPORT(0x001d7b90, d_001d7b90::f_001d7b90);

// f_001d7ba4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001d7ba4 {

inline constexpr guest::Function<0x001d560c, u32(u32, u32, u32, u32)> call_001d560c;

void f_001d7ba4() {
    call_001d560c(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_001d7ba4
GUEST_EXPORT(0x001d7ba4, d_001d7ba4::f_001d7ba4);

// f_001d7ee0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001d7ee0 {

inline constexpr u32 global_0094d080_address = 0x0094d080u;
inline guest::global<u32, 0x0094d080> global_0094d080;
inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> read_global_byte_2;
inline constexpr guest::Function<0x006b1d88, u32(u32, u32, u32)> call_006b1d88;

void f_001d7ee0(u32 r0, u32 r1, u32 r2) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 r0_1 = read_global_byte_2(r0, r1, r2, guest::cpu()->r[3]);
    if (r0_1 != 0x66u) {  // (from the original)
        return;
    }
    u32 r0_2 = *global_0094d080;
    frame.release();
    call_006b1d88(r0_2, r0 + 0x28u, 0x100078du);
    return;  // (from the original)
}

}  // namespace d_001d7ee0
GUEST_EXPORT(0x001d7ee0, d_001d7ee0::f_001d7ee0);

// f_001d7f24: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001d7f24 {

inline constexpr u32 global_0094d080_address = 0x0094d080u;
inline guest::global<u32, 0x0094d080> global_0094d080;
inline constexpr guest::Function<0x00136e58, u32(u32, u32, u32, u32)> call_00136e58;
inline constexpr guest::Function<0x006b1d88, u32(u32, u32, u32)> call_006b1d88;

u32 f_001d7f24(u32 r0, u32 r1, u32 r2) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 r4_1 = r0 + (r2 << 2);
    u32 r0_1 = *gptr<u32>(r4_1 + 0x2cu);  // (from the original)
    if (r0_1 != 0) {
        call_00136e58(r0_1, 0u, r2, guest::cpu()->r[3]);
    }
    u32 r0_2 = *global_0094d080;
    frame.release();
    return call_006b1d88(r0_2, r4_1 + 0x2cu, r1);  // (from the original)
}

}  // namespace d_001d7f24
GUEST_EXPORT(0x001d7f24, d_001d7f24::f_001d7f24);

// f_001d8760: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001d8760 {

inline constexpr u32 global_0094d080_address = 0x0094d080u;
inline guest::global<u32, 0x0094d080> global_0094d080;
inline constexpr guest::Function<0x00136cc8, u32(u32)> detach_from_parent;
inline constexpr guest::Function<0x00136e58, u32(u32, u32)> call_00136e58;
inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> read_global_byte_2;
inline constexpr guest::Function<0x002f74e0, u32(u32, u32)> table_entry_has_all_bits;
inline constexpr guest::Function<0x005b4120, u32(u32)> kind_state_byte_3;
inline constexpr guest::Function<0x006b1d88, u32(u32, u32, u32, u32)> call_006b1d88;

struct __attribute__((packed)) Frame_001d8760 {
    u32 word_0;
    u8 unknown_4[0x14];  // (not read or written by name)
};
GUEST_OFFSET(Frame_001d8760, word_0, 0x0);
GUEST_SIZE(Frame_001d8760, 0x18);

void f_001d8760(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_001d8760> frame;  // the original's stack frame
    frame->word_0 = r3;
    u32 r0_1 = read_global_byte_2(r0, r1, r2, r3);
    u32 r0_2 = kind_state_byte_3(r0_1);
    if (r0_1 != 0x65u) {  // (from the original)
        if (r0_1 == 0x67u) {  // (from the original)
            u32 r0_3 = table_entry_has_all_bits(0x80000u, r0_2);  // (from the original)
            if (r0_3 == 0) {
                u32 r0_4 = table_entry_has_all_bits(0x200000u, r0_2);  // (from the original)
                if (r0_4 == 0) {
                    goto L_1d8800;
                }
            }
            frame->word_0 = 0;
            call_006b1d88(*global_0094d080, frame.at(0).addr(), 0x10004afu, guest::cpu()->r[3]);  // (from the original)
            detach_from_parent(frame.at(0).addr());
        }
    } else {
        u32 r0_7 = *gptr<u32>(r0 + 0x28u);  // (from the original)
        if (r0_7 != 0) {
            call_00136e58(r0_7, 0x14u);  // (from the original)
        }
    }
L_1d8800:;
    if (r0_2 == 0x65u) {  // (from the original)
        u32 r0_8 = *global_0094d080;
        frame.release();
        call_006b1d88(r0_8, r0 + 0x28u, 0x100078du, guest::cpu()->r[3]);
        return;
    }
}

}  // namespace d_001d8760
GUEST_EXPORT(0x001d8760, d_001d8760::f_001d8760);

// f_001d9578: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001d9578 {

struct __attribute__((packed)) Object_001d9578_0 {
    u8 unknown_0[0x14];  // (not used here)
    u8 byte_14;
    u8 unknown_15[0x3];  // (not used here)
    u32 word_18;
    u8 unknown_1c[0x4];  // (not used here)
    u32 word_20;
    u8 unknown_24[0x1];  // (not used here)
    u8 byte_25;
};
GUEST_OFFSET(Object_001d9578_0, byte_14, 0x14);
GUEST_OFFSET(Object_001d9578_0, word_18, 0x18);
GUEST_OFFSET(Object_001d9578_0, word_20, 0x20);
GUEST_OFFSET(Object_001d9578_0, byte_25, 0x25);

inline constexpr guest::Function<0x001404f0, u32(u32, u32, u32, u32)> call_001404f0;
inline constexpr guest::Function<0x0035427c, u32(u32, u32, u32, u32)> call_0035427c;

struct __attribute__((packed)) Frame_001d9578 {
    u32 word_0;
};
GUEST_OFFSET(Frame_001d9578, word_0, 0x0);
GUEST_SIZE(Frame_001d9578, 0x4);

u32 f_001d9578(gptr<Object_001d9578_0> arg0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_001d9578> frame;  // the original's stack frame
    frame->word_0 = r3;
    u32 r5_1 = r1;
    u32 r6_1 = 0u;
    u32 r0_1 = arg0->byte_14;
    if (r0_1 != 2u && r0_1 != 0) {
        u32 r0_2 = call_001404f0(1u, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        if (s32(r0_2) >= 0) {
            arg0->word_20 = 0x983000;  // (from the original)
            frame->word_0 = 1;
            u32 r3_1 = arg0->word_18;
            u32 r1_1 = *gptr<u8>(r5_1 + 0x83b468u);  // (from the original)
            u32 r0_3 = call_0035427c(3u, r1_1, 0u, r3_1);
            r1 = guest::cpu()->r[1];
            if (s32(r0_3) >= 0) {
                u32 r1_2 = *gptr<u8>(r5_1 + 0x83b468u);  // (from the original)
                arg0->byte_14 = 2;
                arg0->byte_25 = u8(r1_2);
                r1 = arg0.addr() + 0x16u;  // (from the original)
                if (r5_1 < 2u) {
                    r1 += r5_1;
                }
                r6_1 = 1u;
                *gptr<u8>(r1) = u8(r6_1);
            }
        }
    }
    guest::cpu()->r[1] = r1;
    return r6_1;
}

}  // namespace d_001d9578
GUEST_EXPORT_FRAMED(0x001d9578, d_001d9578::f_001d9578, 0x43f0);  // pushes {r4, r5, r6, r7, r8, r9, lr} first, as the original

// f_001d9a08: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001d9a08 {

struct __attribute__((packed)) Object_001d9a08_0 {
    u8 unknown_0[0x17];  // (not used here)
    u8 byte_17;
    u8 unknown_18[0x624];  // (not used here)
    u8 byte_63c;
};
GUEST_OFFSET(Object_001d9a08_0, byte_17, 0x17);
GUEST_OFFSET(Object_001d9a08_0, byte_63c, 0x63c);

inline constexpr guest::Function<0x0013fd78, u32(u32, u32, u32, u32)> call_0013fd78;
inline constexpr guest::Function<0x00140530, u32(u32, u32, u32, u32)> call_00140530;
inline constexpr guest::Function<0x0032c654, u32(u32, u32, u32, u32)> call_0032c654;

void f_001d9a08(gptr<Object_001d9a08_0> arg0, u32 r1, u32 r2) {
    u32 r0 = arg0.addr();
    u32 r1_2 = 0;
    u32 r1_4 = 0;
    u32 r4 = r0;
    if (arg0->byte_63c != 0) {
        call_0032c654(r4 + 0x63cu, r1, r2, guest::cpu()->r[3]);  // (from the original)
    }
    u32 r5 = 0u;
    r2 = r5;
    r0 = r5;
    arg0->byte_17 = u8(r5);
    do {
        u32 r1_1 = r4 + 0x16u;  // (from the original)
        if (r0 < 2u) {
            r1_1 += r0;
        }
        r0 += 1u;
        r1_2 = *gptr<u8>(r1_1);
        if (r1_2 != 0) {
            r2 = 1u;
        }
        guest::preempt();
    } while (s32(r0) < 2);
    u32 r6 = 1u;
    if (r2 == 0) {
        u32 r0_2 = *gptr<u8>(r4 + 0x14u);  // (from the original)
        if (r0_2 == 2u) {
            u32 r0_3 = call_00140530(r0_2, r1_2, r2, guest::cpu()->r[3]);
            r1_2 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            if (s32(r0_3) >= 0) {
                *gptr<u32>(r4 + 0x2cu) = r5;  // (from the original)
                *gptr<u8>(r4 + 0x14u) = u8(r6);  // (from the original)
            }
        }
    }
    if (*gptr<u8>(r4 + 0x34u) >= 2u) {  // (from the original)
        call_0013fd78(r4 + 0x34u, r1_2, r2, guest::cpu()->r[3]);  // (from the original)
    }
    r2 = 0u;
    r0 = r2;
    *gptr<u8>(r4 + 0x16u) = u8(r5);  // (from the original)
    do {
        u32 r1_3 = r4 + 0x16u;  // (from the original)
        if (r0 < 2u) {
            r1_3 += r0;
        }
        r0 += 1u;
        r1_4 = *gptr<u8>(r1_3);
        if (r1_4 != 0) {
            r2 = 1u;
        }
        guest::preempt();
    } while (s32(r0) < 2);
    if (r2 == 0) {
        u32 r0_5 = *gptr<u8>(r4 + 0x14u);  // (from the original)
        if (r0_5 == 2u) {
            u32 r0_6 = call_00140530(r0_5, r1_4, r2, guest::cpu()->r[3]);
            if (s32(r0_6) >= 0) {
                *gptr<u32>(r4 + 0x2cu) = r5;  // (from the original)
                *gptr<u8>(r4 + 0x14u) = u8(r6);  // (from the original)
            }
        }
    }
}

}  // namespace d_001d9a08
GUEST_EXPORT_FRAMED(0x001d9a08, d_001d9a08::f_001d9a08, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_001d9c9c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001d9c9c {

inline constexpr guest::Function<0x0020a4cc, u32(u32, u32, u32)> SoundObjBase__virtual_2;
inline constexpr guest::Function<0x002a5fa8, u32(u32, u32, u32, u32)> call_002a5fa8;

u32 SoundObjNpc__virtual_2(gptr<SoundObjNpc> arg0, u32 r1, u32 r2) {
    u32 r0_1 = arg0->byte_34;
    if (r0_1 == 0) {
        call_002a5fa8(arg0.addr() + 0x74u, arg0.addr(), r2, guest::cpu()->r[3]);  // (from the original)
        r0_1 = SoundObjBase__virtual_2(arg0.addr(), r1, r2);
        r1 = guest::cpu()->r[1];
        arg0->word_90 = arg0.addr();
    }
    guest::cpu()->r[1] = r1;
    return r0_1;
}

}  // namespace d_001d9c9c
GUEST_EXPORT_FRAMED(0x001d9c9c, d_001d9c9c::SoundObjNpc__virtual_2, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_001d9cdc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001d9cdc {

struct __attribute__((packed)) Object_001d9cdc_0 {
    u8 unknown_0[0x80];  // (not used here)
    u32 word_80;
};
GUEST_OFFSET(Object_001d9cdc_0, word_80, 0x80);


void f_001d9cdc(gptr<Object_001d9cdc_0> arg0, u32 r1) {
    if (r1 <= 2u) {
        arg0->word_80 = r1;
    }
}

}  // namespace d_001d9cdc
GUEST_EXPORT(0x001d9cdc, d_001d9cdc::f_001d9cdc);

// f_001d9fb0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001d9fb0 {

inline constexpr guest::Function<0x00136cc8, u32(u32)> detach_from_parent;
inline constexpr guest::Function<0x0020aedc, u32(u32, u32)> stop_base;
inline constexpr guest::Function<0x002a6594, u32(u32, u32, u32, u32)> call_002a6594;

u32 SoundObjNpc__virtual_3(gptr<SoundObjNpc> arg0) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 r0 = arg0.addr();
    u32 cf_1 = 0;
    u32 r4_1 = r0;
    r0 = arg0->byte_34;
    if (r0 != 0) {
        call_002a6594(r4_1 + 0x74u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        u32 r6 = r4_1;
        u32 r5 = r4_1 + 0x44u;  // (from the original)
        arg0->word_90 = 0;
        u32 r4 = 0u;
        r0 = r5;
        do {
            r0 += (r4 << 2);
            do {
                detach_from_parent(r0);
                r4 += 1u;
                cf_1 = r4 >= 2u;
                if (s32(r4) >= 2) {
                    frame.release();
                    return stop_base(r6, guest::cpu()->r[1]);
                }
                r0 = r5;
                guest::preempt();
            } while (cf_1);
            guest::preempt();
        } while (1);
    }
    return r0;
}

}  // namespace d_001d9fb0
GUEST_EXPORT(0x001d9fb0, d_001d9fb0::SoundObjNpc__virtual_3);

// f_001da01c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001da01c {

struct __attribute__((packed)) Local_001da01c_r0_7 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
    u8 unknown_8[0xc8];  // (not used here)
    u8 byte_d0;
    u8 unknown_d1[0x3];  // (not used here)
    float float_d4;
    float float_d8;
    float float_dc;
    u16 half_e0;
};
GUEST_OFFSET(Local_001da01c_r0_7, word_4, 0x4);
GUEST_OFFSET(Local_001da01c_r0_7, byte_d0, 0xd0);
GUEST_OFFSET(Local_001da01c_r0_7, float_d4, 0xd4);
GUEST_OFFSET(Local_001da01c_r0_7, float_d8, 0xd8);
GUEST_OFFSET(Local_001da01c_r0_7, float_dc, 0xdc);
GUEST_OFFSET(Local_001da01c_r0_7, half_e0, 0xe0);

inline constexpr u32 vtable_SoundObjNpc = 0x008ebd9cu;
inline constexpr u32 vtable_SoundObj_2_ = 0x008f8dc8u;
inline constexpr guest::Function<0x0020af18, u32(u32, u32, u32, u32)> SoundObjBase__SoundObjBase;
inline constexpr guest::Function<0x002a65d0, u32(u32)> call_002a65d0;
inline constexpr guest::Function<0x002e8444, u32(u32)> call_002e8444;
inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> for_each_element;

u32 SoundObj_2___SoundObj_001da01c(gptr<SoundObj_2_> arg0, u32 r1, u32 r2, u32 r3, float S0) {
    SoundObjBase__SoundObjBase(arg0.addr(), r1, r2, r3);
    arg0->word_0 = vtable_SoundObj_2_;
    u32 r0_2 = for_each_element(arg0.addr() + 0x44u, 0x131800u, 4u, 2u);  // (from the original)
    u32 r0_4 = for_each_element(r0_2 + 8u, 0x1287a8u, 0x14u, 2u);  // (from the original)
    *gptr<u32>(r0_4 - 0x4cu) = vtable_SoundObjNpc;  // (from the original)
    u32 r0_5 = r0_4 + 0x28u;  // (from the original)
    call_002a65d0(r0_5);
    u32 r0_6 = r0_5 + 0x18u;  // (from the original)
    call_002e8444(r0_6);
    gptr<Local_001da01c_r0_7> r0_7 = gptr<Local_001da01c_r0_7>(r0_6 - 0x8cu);  // (from the original)
    float S0_3 = 2000.0f;
    r0_7->byte_d0 = 0;
    r0_7->float_d4 = S0_3;
    r0_7->float_d8 = S0_3;
    r0_7->float_dc = S0_3;
    r0_7->half_e0 = u16(~0u);
    r0_7->word_4 = 1;
    return r0_7.addr();
}

}  // namespace d_001da01c
GUEST_EXPORT_FRAMED(0x001da01c, d_001da01c::SoundObj_2___SoundObj_001da01c, 0x4010);  // pushes {r4, lr} first, as the original

// f_001db5b4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001db5b4 {

struct __attribute__((packed)) Local_001db5b4_ea_8 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_001db5b4_ea_8, word_0, 0x0);
GUEST_OFFSET(Local_001db5b4_ea_8, word_4, 0x4);

struct __attribute__((packed)) Local_001db5b4_r0_3 {
    u8 unknown_0[0xa0];  // (not used here)
    float float_a0;
    float float_a4;
    float float_a8;
    u8 unknown_ac[0x10];  // (not used here)
    float float_bc;
    float float_c0;
    float float_c4;
    u8 unknown_c8[0x8];  // (not used here)
    float float_d0;
    float float_d4;
    float float_d8;
    u32 word_dc;
    u8 byte_e0;
};
GUEST_OFFSET(Local_001db5b4_r0_3, float_a0, 0xa0);
GUEST_OFFSET(Local_001db5b4_r0_3, float_a4, 0xa4);
GUEST_OFFSET(Local_001db5b4_r0_3, float_a8, 0xa8);
GUEST_OFFSET(Local_001db5b4_r0_3, float_bc, 0xbc);
GUEST_OFFSET(Local_001db5b4_r0_3, float_c0, 0xc0);
GUEST_OFFSET(Local_001db5b4_r0_3, float_c4, 0xc4);
GUEST_OFFSET(Local_001db5b4_r0_3, float_d0, 0xd0);
GUEST_OFFSET(Local_001db5b4_r0_3, float_d4, 0xd4);
GUEST_OFFSET(Local_001db5b4_r0_3, float_d8, 0xd8);
GUEST_OFFSET(Local_001db5b4_r0_3, word_dc, 0xdc);
GUEST_OFFSET(Local_001db5b4_r0_3, byte_e0, 0xe0);

inline constexpr u32 vtable_SoundFader_rec = 0x008eb474u;
inline constexpr u32 vtable_SoundTvBase = 0x008ebddcu;
inline constexpr guest::Function<0x002d1db0, u32(u32, u32, u32, u32)> SoundObj_2___SoundObj_002d1db0;

u32 SoundTvBase__SoundTvBase(gptr<SoundTvBase> arg0, u32 r1_unused, u32 r2, u32 r3, float S0) {
    arg0->word_0 = vtable_SoundTvBase;
    u32 r0_2 = SoundObj_2___SoundObj_002d1db0(arg0.addr() + 4u, vtable_SoundTvBase, r2, r3);
    gptr<Local_001db5b4_r0_3> r0_3 = gptr<Local_001db5b4_r0_3>(r0_2 - 4u);
    float S0_1 = 0.0f;
    r0_3->float_a0 = S0_1;
    r0_3->float_a4 = S0_1;
    r0_3->float_a8 = S0_1;
    u32 r2_1 = ~0u;
    *gptr<u16>(r0_3.addr() + 0xacu) = 0;  // (from the original)
    *gptr<u32>(r0_3.addr() + 0xb0u) = r2_1;  // (from the original)
    *gptr<u8>(r0_3.addr() + 0xb4u) = 0;  // (from the original)
    *gptr<u8>(r0_3.addr() + 0xb5u) = 0;  // (from the original)
    *gptr<u8>(r0_3.addr() + 0xb6u) = 6;  // (from the original)
    *gptr<u8>(r0_3.addr() + 0xb7u) = 0;  // (from the original)
    *gptr<u32>(r0_3.addr() + 0xb8u) = vtable_SoundFader_rec;  // (from the original)
    r0_3->float_bc = S0_1;
    r0_3->float_c0 = S0_1;
    r0_3->float_c4 = S0_1;
    gptr<Local_001db5b4_ea_8> ea_8 = gptr<Local_001db5b4_ea_8>(r0_3.addr() + 0xc8u);  // (from the original)
    ea_8->word_0 = r2_1;
    ea_8->word_4 = vtable_SoundFader_rec;
    r0_3->float_d0 = S0_1;
    r0_3->float_d4 = S0_1;
    r0_3->float_d8 = S0_1;
    r0_3->word_dc = r2_1;
    r0_3->byte_e0 = 1;
    guest::cpu()->s[0] = S0_1;
    return r0_3.addr();
}

}  // namespace d_001db5b4
GUEST_EXPORT_FRAMED(0x001db5b4, d_001db5b4::SoundTvBase__SoundTvBase, 0x4010);  // pushes {r4, lr} first, as the original

// f_001db650: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001db650 {

inline constexpr u32 vtable_SoundTvBase = 0x008ebddcu;
inline constexpr u32 vtable_SoundObj_2_ = 0x008f8dc8u;
inline constexpr u32 global_0094cd20_address = 0x0094cd20u;
inline guest::global<u32, 0x0094cd20> global_0094cd20;
inline constexpr guest::Function<0x00136cc8, u32(u32, u32, u32, u32)> detach_from_parent;
inline constexpr guest::Function<0x00136e58, u32(u32, u32, u32, u32)> call_00136e58;
inline constexpr guest::Function<0x0013d4f0, u32(u32, u32, u32, u32)> call_0013d4f0;
inline constexpr guest::Function<0x0020aedc, u32(u32, u32, u32, u32)> stop_base;
inline constexpr guest::Function<0x002f76ad, u32(u32, u32, u32, u32)> destroy_array_elements;
inline constexpr guest::Function<0x0071d314, u32(u32, u32, u32, u32)> call_0071d314;

u32 SoundTvBase__virtual_0(gptr<SoundTvBase> arg0, u32 r1, u32 r2, u32 r3, float S0) {
    u32 r0 = arg0.addr();
    u32 r4 = 0;
    u32 r5 = 0;
    u32 cf_2 = 0;
    u32 r7 = r0;
    arg0->word_0 = vtable_SoundTvBase;
    if (arg0->byte_b4 != 0) {
        if (arg0->byte_b5 != 0) {
            S0 = 0.0f;
            u32 r6 = 0u;
            arg0->float_18 = S0;
            r1 = arg0->byte_38;
            if (r1 != 0) {
                r5 = (r7 + 4u) + 0x44u;  // (from the original)
                r4 = 0u;
L_1db6a8:;
                r0 = r5 + (r4 << 2);
L_1db6ac:;
                if (*gptr<u32>(r0) != 0) {
                    u32 r0_2 = r5;
                    if (r4 < 2u) {
                        r0_2 = r5 + (r4 << 2);
                    }
                    r1 = r6;
                    u32 r0_3 = *gptr<u32>(r0_2);
                    if (r0_3 != 0) {
                        guest::cpu()->s[0] = S0;
                        call_00136e58(r0_3, r1, r2, r3);
                        r1 = guest::cpu()->r[1];
                        r2 = guest::cpu()->r[2];
                        r3 = guest::cpu()->r[3];
                        S0 = guest::cpu()->s[0];
                    }
                }
                r4 += 1u;
                if (s32(r4) < 2) {
                    r0 = r5;
                    if (r4 >= 2u) {
                        guest::preempt();
                        goto L_1db6ac;
                    }
                    guest::preempt();
                    goto L_1db6a8;
                }
            }
            r6 = r7 + 4u;
            r5 = r7 + 0x48u;  // (from the original)
            r4 = 0u;
            do {
                guest::cpu()->s[0] = S0;
                detach_from_parent(r4 >= 2u ? r5 : r5 + (r4 << 2), r1, r2, r3);
                r1 = guest::cpu()->r[1];
                r2 = guest::cpu()->r[2];
                r3 = guest::cpu()->r[3];
                S0 = guest::cpu()->s[0];
                r4 += 1u;
                guest::preempt();
            } while (s32(r4) < 2);
            guest::cpu()->s[0] = S0;
            stop_base(r6, r1, r2, r3);
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            S0 = guest::cpu()->s[0];
            u32 r0_5 = *global_0094cd20;
            if (r0_5 != 0) {
                u32 r1_1 = *gptr<u8>(r7 + 0xb6u);  // (from the original)
                u32 r0_6 = call_0071d314(r0_5, r1_1, r2, r3);
                r2 = guest::cpu()->r[2];
                r3 = guest::cpu()->r[3];
                S0 = guest::cpu()->s[0];
                if (r0_6 != 0) {
                    u32 r2_1 = *gptr<u8>(r7 + 0xb6u);  // (from the original)
                    u32 r0_7 = *global_0094cd20;
                    call_0013d4f0(r0_7, 0u, r2_1, r3);
                    r2 = guest::cpu()->r[2];
                    r3 = guest::cpu()->r[3];
                    S0 = guest::cpu()->s[0];
                }
            }
            *gptr<u8>(r7 + 0xb6u) = 6;  // (from the original)
        }
        r1 = 0u;
        *gptr<u8>(r7 + 0xb4u) = u8(r1);  // (from the original)
    }
    r4 = 0u;
    u32 ea_1 = r7 + 4u;
    *gptr<u32>(ea_1) = vtable_SoundObj_2_;
    r7 = ea_1;
    r5 = r7 + 0x44u;  // (from the original)
    do {
        u32 r0_8 = r5;
        if (r4 < 2u) {
            r0_8 = r5 + (r4 << 2);
        }
        guest::cpu()->s[0] = S0;
        detach_from_parent(r0_8, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        S0 = guest::cpu()->s[0];
        r4 += 1u;
        guest::preempt();
    } while (s32(r4) < 2);
    guest::cpu()->s[0] = S0;
    stop_base(r7, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    r5 = r7 + 0x44u;  // (from the original)
    r4 = 0u;
    r0 = r5;
    do {
        r0 += (r4 << 2);
        do {
            guest::cpu()->s[0] = S0;
            detach_from_parent(r0, r1, r2, r3);
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            S0 = guest::cpu()->s[0];
            r4 += 1u;
            cf_2 = r4 >= 2u;
            if (s32(r4) >= 2) {
                destroy_array_elements(r5, 0x137d74u, 4u, 2u);  // (from the original)
                return r5 - 0x48u;  // (from the original)
            }
            r0 = r5;
            guest::preempt();
        } while (cf_2);
        guest::preempt();
    } while (1);
}

}  // namespace d_001db650
GUEST_EXPORT_FRAMED(0x001db650, d_001db650::SoundTvBase__virtual_0, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_001dc6e8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001dc6e8 {

inline constexpr guest::Function<0x0052f0c0, u32(u32, u32, u32, u32)> copy_construct_word_pair;
inline constexpr guest::Function<0x0052f144, u32(u32, u32, u32)> WrappingCursor__advance;
inline constexpr guest::Function<0x00540b14, u32(u32, u32, u32)> call_00540b14;
inline constexpr guest::Function<0x00540bd0, u32(u32, u32, u32, u32)> call_00540bd0;
inline constexpr guest::Function<0x0062d4e0, u32(u32)> call_0062d4e0;
inline constexpr guest::Function<0x0062d970, u32(u32, u32, u32, u32)> call_0062d970;
inline constexpr guest::Function<0x007481ec, u32(u32, u32)> key_records_differ;
inline constexpr guest::Function<0x0074824c, u32(u32, u32)> make_end_grid_rect_iterator;
inline constexpr guest::Function<0x00748284, u32(u32, u32)> construct_grid_rect_iterator;
inline constexpr guest::Function<0x00810aa0, u32(u32, u32, u32, u32)> call_00810aa0;

struct __attribute__((packed)) Frame_001dc6e8 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u8 unknown_10[0x12c];  // (not read or written by name)
};
GUEST_OFFSET(Frame_001dc6e8, word_0, 0x0);
GUEST_OFFSET(Frame_001dc6e8, word_4, 0x4);
GUEST_OFFSET(Frame_001dc6e8, word_8, 0x8);
GUEST_OFFSET(Frame_001dc6e8, word_c, 0xc);
GUEST_SIZE(Frame_001dc6e8, 0x13c);

u32 f_001dc6e8(u32 r0_unused, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_001dc6e8> frame;  // the original's stack frame
    u32 r0_12 = 0;
    u32 r10 = r1;
    u32 r9 = r2;
    u32 r11 = r3;
    u32 r0_2 = call_00810aa0(frame.at(0).addr(), r1, r2, r3);
    u32 r0_3 = call_0062d4e0(r0_2);
    make_end_grid_rect_iterator(frame.at(0x108).addr(), r0_3);  // (from the original)
    construct_grid_rect_iterator(frame.at(0x118).addr(), r0_3);  // (from the original)
    u32 r0_7 = key_records_differ(frame.at(0x118).addr(), frame.at(0x108).addr());  // (from the original)
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0_7 != 0) {
        do {
            copy_construct_word_pair(frame.at(0x130).addr(), frame.at(0x120).addr(), r2, r3);  // (from the original)
            u32 r2_5 = frame->word_4;
            u32 r1_4 = frame.at(0x130).addr();  // (from the original)
            if (s32(frame->word_0) < s32(r2_5)) {
                u32 r0_9 = frame->word_c;
                if (r0_9 != 0) {
                    u32 r2_6 = *gptr<u32>(r0_9);
                    frame->word_c = r2_6;
                    r0_9 = copy_construct_word_pair(r0_9, r1_4, r2_6, guest::cpu()->r[3]);
                }
                r1_4 = frame->word_0;
                r2_5 = frame->word_4;
                if (s32(r1_4) < s32(r2_5)) {
                    r1_4 = frame->word_8;
                    r2_5 = frame->word_0;
                    *gptr<u32>(r1_4 + (r2_5 << 2)) = r0_9;
                    frame->word_0 = frame->word_0 + 1u;
                }
            }
            WrappingCursor__advance(frame.at(0x118).addr(), r1_4, r2_5);  // (from the original)
            r0_12 = key_records_differ(frame.at(0x118).addr(), frame.at(0x108).addr());  // (from the original)
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            guest::preempt();
        } while (r0_12 != 0);
    }
    u32 r8 = 0u;
    call_00540bd0(frame.at(0).addr(), r9, r2, r3);
    u32 r0 = frame->word_0;
    if (s32(r0) > 0) {
        do {
            u32 zf_1 = r0 == 0;
            u32 cf_1 = r0 >= 0u;
            if (r0 >= 0u && r0 != 0) {
                r0 = frame->word_8;
            }
            if (cf_1 && !zf_1) {
                r0 = *gptr<u32>(r0);
            }
            if (!cf_1 || zf_1) {
                r0 = 0u;
            }
            u32 r0_14 = call_0062d970(r0, r10, r9, r11);
            if (r0_14 != 0) {
                r8 = 1u;
                break;
            }
            if (s32(frame->word_0) >= 1) {
                u32 r4_1 = *gptr<u32>(frame->word_8);
                *gptr<u32>(r4_1) = frame->word_c;
                frame->word_c = r4_1;
            }
            call_00540b14(frame.at(0).addr(), 0u, 1u);
            r0 = frame->word_0;
            guest::preempt();
        } while (s32(r0) > 0);
    }
    return r8;
}

}  // namespace d_001dc6e8
GUEST_EXPORT_FRAMED(0x001dc6e8, d_001dc6e8::f_001dc6e8, 0x4ff0);  // pushes {r4, r5, r6, r7, r8, r9, r10, r11, lr} first, as the original

// f_001de39c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001de39c {

inline constexpr u32 vtable_sead__SafeStringBase_char_ = 0x009047f8u;
inline constexpr u32 real_estate_heap_address = 0x00952c54u;
inline constexpr u32 global_00ac3750_address = 0x00ac3750u;
inline guest::global<u32, 0x00952c54> real_estate_heap;
inline constexpr guest::Function<0x0056a974, u32(u32, u32, u32, u32)> load_split_start;

struct __attribute__((packed)) Frame_001de39c {
    u32 word_0;
    u32 word_4;
    u8 unknown_8[0x4];  // (not read or written by name)
};
GUEST_OFFSET(Frame_001de39c, word_0, 0x0);
GUEST_OFFSET(Frame_001de39c, word_4, 0x4);
GUEST_SIZE(Frame_001de39c, 0xc);

u32 sead__SafeStringBase_char___SafeStringBase_001de39c(u32 r0_unused, u32 r1) {
    guest::StackFrameOf<Frame_001de39c> frame;  // the original's stack frame
    u32 r2_1 = *real_estate_heap;
    if (r2_1 == 0) {
        return 1u;
    }
    frame->word_4 = 0x1de3e4;  // (from the original)
    frame->word_0 = vtable_sead__SafeStringBase_char_;
    u32 r0_1 = load_split_start(global_00ac3750_address, frame.at(0).addr(), r2_1, 0u);
    return r0_1;
}

}  // namespace d_001de39c
GUEST_EXPORT_FRAMED(0x001de39c, d_001de39c::sead__SafeStringBase_char___SafeStringBase_001de39c, 0x4000);  // pushes {lr} first, as the original

// f_001de400: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001de400 {

inline constexpr u32 global_00ac3750_address = 0x00ac3750u;
inline constexpr guest::Function<0x002f8574, u32(u32, u32, u32, u32)> copy_bytes_at_any_alignment;

u32 f_001de400(u32 r0, u32 r1, u32 r2) {
    u32 res_2 = 0;
    u32 r6 = r0;
    u32 r5 = global_00ac3750_address;
    if (*gptr<u32>(r5 + 0xd0u) != 0) {  // (from the original)
        u32 r3 = *gptr<u32>(r5 + 0xd0u);  // (from the original)
        r0 = 0u;
        u32 r4 = *gptr<u8>(r3 + r2 + 2u);
        u32 ea_3 = *gptr<u32>(r5 + 0xd0u);  // (from the original)
        u32 r7 = r4 << 2;
        u32 r8 = u32(*gptr<u16>(ea_3)) + 2u;
        if (r2 != 0) {
            r3 += 1u;
            if ((r2 & 1u) != 0) {
                u32 ea_4 = r3 + 1u;
                r3 = ea_4;
                r0 = *gptr<u8>(ea_4);
            }
            u32 res_1 = r2 >> 1;
            r2 = res_1;
            u32 r12 = 0u;
            if (res_1 != 0) {
                do {
                    u32 r9_1 = *gptr<u8>(r3 + 1u);
                    u32 ea_6 = r3 + 2u;
                    r3 = ea_6;
                    u32 r10_1 = *gptr<u8>(ea_6);
                    res_2 = r2 - 1u;
                    r2 = res_2;
                    r0 += r9_1;
                    r12 += r10_1;
                    guest::preempt();
                } while (res_2 != 0);
            }
            r0 += r12;
        }
        if (r1 >= r4 << 2) {
            copy_bytes_at_any_alignment(r6, *gptr<u32>(r5 + 0xd0u) + (r8 + (r0 << 2)), r7, r3);  // (from the original)
            return r4;
        }
    }
    guest::cpu()->r[1] = r1;
    return 0u;
}

}  // namespace d_001de400
GUEST_EXPORT_FRAMED(0x001de400, d_001de400::f_001de400, 0x47f0);  // pushes {r4, r5, r6, r7, r8, r9, r10, lr} first, as the original

// f_001de4a8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001de4a8 {

struct __attribute__((packed)) Object_001de4a8_0 {
    u16 half_0;
};
GUEST_OFFSET(Object_001de4a8_0, half_0, 0x0);


void f_001de4a8(gptr<Object_001de4a8_0> arg0, u32 r1, u32 r2) {
    u32 r1_1 = u32(arg0->half_0) & ~lsl_r(r2 + 1u, r1 << 1 & 0xff);  // (from the original)
    arg0->half_0 = u16(r1_1);
    guest::cpu()->r[1] = r1_1;
}

}  // namespace d_001de4a8
GUEST_EXPORT(0x001de4a8, d_001de4a8::f_001de4a8);

// f_001de4c0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001de4c0 {

struct __attribute__((packed)) Object_001de4c0_0 {
    u16 half_0;
};
GUEST_OFFSET(Object_001de4c0_0, half_0, 0x0);


u32 f_001de4c0(gptr<Object_001de4c0_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r3 = arg0->half_0;
    r0 = 0u;
    u32 r1 = r0;
    u32 r12 = 2u;
    u32 r4 = r0;
    u32 r5 = 1u;
    do {
        u32 r2_1 = lsr_r(r3, r1 << 1 & 0xff) & 3u;  // (from the original)
        r1 += 1u;
        r0 += (r2_1 == 3u ? r12 : r2_1 == 0 ? r4 : r5);
        guest::preempt();
    } while (s32(r1) < 6);
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_001de4c0
GUEST_EXPORT_FRAMED(0x001de4c0, d_001de4c0::f_001de4c0, 0x30);  // pushes {r4, r5} first, as the original

// f_001de7d0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001de7d0 {

struct __attribute__((packed)) Object_001de7d0_0 {
    u16 half_0;
};
GUEST_OFFSET(Object_001de7d0_0, half_0, 0x0);


u32 f_001de7d0(gptr<Object_001de7d0_0> arg0, u32 r1) {
    u32 r1_1 = r1 << 1;
    u32 r0_1 = lsr_r(u32(arg0->half_0), r1_1 & 0xff) & 3u;  // (from the original)
    if (r0_1 == 3u) {
        guest::cpu()->r[1] = r1_1;
        return 2u;
    }
    if (r0_1 != 0) {
        r0_1 = 1u;
    }
    guest::cpu()->r[1] = r1_1;
    return r0_1;
}

}  // namespace d_001de7d0
GUEST_EXPORT(0x001de7d0, d_001de7d0::f_001de7d0);

// f_001de7f8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001de7f8 {

struct __attribute__((packed)) Object_001de7f8_0 {
    u16 half_0;
};
GUEST_OFFSET(Object_001de7f8_0, half_0, 0x0);


u32 f_001de7f8(gptr<Object_001de7f8_0> arg0, u32 r1, u32 r2) {
    u32 r0_1 = lsr_r(u32(arg0->half_0), r1 << 1 & 0xff);  // (from the original)
    u32 r1_1 = r2 + 1u;
    u32 r0_2 = r0_1 & 3u & r1_1;
    if (r0_2 != 0) {
        r0_2 = 1u;
    }
    guest::cpu()->r[1] = r1_1;
    return r0_2;
}

}  // namespace d_001de7f8
GUEST_EXPORT(0x001de7f8, d_001de7f8::f_001de7f8);

// f_001de848: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001de848 {

struct __attribute__((packed)) Local_001de848_r0_4 {
    u16 half_0;
    u8 byte_2;
};
GUEST_OFFSET(Local_001de848_r0_4, half_0, 0x0);
GUEST_OFFSET(Local_001de848_r0_4, byte_2, 0x2);

inline constexpr guest::Function<0x0024da38, u32(u32)> member_address_0x1224_;
inline constexpr guest::Function<0x002fae84, u32(u32)> get_data_base;
inline constexpr guest::Function<0x00317ee0, u32(u32, u32)> record_4648_address;

u32 f_001de848(u32 r0) {
    u32 r0_1 = get_data_base(r0);
    u32 r0_3 = record_4648_address(r0_1 + 0x5d880u, 0u);  // (from the original)
    gptr<Local_001de848_r0_4> r0_4 = gptr<Local_001de848_r0_4>(member_address_0x1224_(r0_3));
    r0_4->half_0 = 0;
    r0_4->byte_2 = 0x1e;  // (from the original)
    guest::cpu()->r[1] = 0x1eu;  // (from the original)
    return r0_4.addr();
}

}  // namespace d_001de848
GUEST_EXPORT_FRAMED(0x001de848, d_001de848::f_001de848, 0x4010);  // pushes {r4, lr} first, as the original

// f_001de880: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001de880 {

inline constexpr u32 global_0094ee34_address = 0x0094ee34u;
inline constexpr guest::Function<0x001de664, u32(u32, u32, u32, u32)> call_001de664;
inline constexpr guest::Function<0x002fb96c, u32(u32)> player_for_slot;
inline constexpr guest::Function<0x002ff8b0, u32(u32, u32, u32, u32)> slot_value;

void f_001de880(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x18);  // the original's stack frame
    if (*gptr<u8>(r1 + global_0094ee34_address) == 0) {
        u32 r0_1 = slot_value(4u, r1, r2, r3);
        if (r0_1 != 8u) {
            *gptr<u8>(r1 + global_0094ee34_address) = 1;
            u32 r0_3 = player_for_slot(r1 & 0xffu);  // (from the original)
            if (r0_3 != 0) {
                if (s32(u32(*gptr<u8>(r0_3 + 0x5701u)) << 0x1e) < 0) {  // (from the original)
                    frame.release();
                    call_001de664(r0, r2, r3, guest::cpu()->r[3]);
                    return;
                }
            }
        }
    }
}

}  // namespace d_001de880
GUEST_EXPORT(0x001de880, d_001de880::f_001de880);

// f_001de99c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001de99c {

struct __attribute__((packed)) Object_001de99c_0 {
    u8 unknown_0[0x218];  // (not used here)
    u8 byte_218;
    u8 byte_219;
};
GUEST_OFFSET(Object_001de99c_0, byte_218, 0x218);
GUEST_OFFSET(Object_001de99c_0, byte_219, 0x219);

struct __attribute__((packed)) Object_001de99c_1 {
    u32 word_0;
    u8 unknown_4[0x32];  // (not used here)
    u16 half_36;
    u8 unknown_38[0x12];  // (not used here)
    u8 byte_4a;
};
GUEST_OFFSET(Object_001de99c_1, word_0, 0x0);
GUEST_OFFSET(Object_001de99c_1, half_36, 0x36);
GUEST_OFFSET(Object_001de99c_1, byte_4a, 0x4a);

struct __attribute__((packed)) Local_001de99c_r0_3 {
    u16 half_0;
    u8 unknown_2[0x12];  // (not used here)
    u8 byte_14;
};
GUEST_OFFSET(Local_001de99c_r0_3, half_0, 0x0);
GUEST_OFFSET(Local_001de99c_r0_3, byte_14, 0x14);

inline constexpr guest::Function<0x00100d2d, u32(u32, u32, u32, u32)> memory_compare_100d2c;
inline constexpr guest::Function<0x0020d848, u32(u32, u32, u32, u32)> store_half_and_bytes;
inline constexpr guest::Function<0x002fb328, u32(u32, u32, u32, u32)> get_save_data;
inline constexpr guest::Function<0x002fbb30, u32(u32, u32, u32)> copy_aligned_bytes;
inline constexpr guest::Function<0x00728af8, u32(u32)> call_00728af8;
inline constexpr guest::Function<0x00728c48, u32(u32)> call_00728c48;
inline constexpr guest::Function<0x00728ca0, u32(u32)> call_00728ca0;

void f_001de99c(gptr<Object_001de99c_0> arg0, gptr<Object_001de99c_1> arg1, u32 r2, u32 r3) {
    u32 r1 = arg1.addr();
    u32 r5_1 = r1;
    u32 r0_1 = arg1->word_0;
    if (r0_1 == 3u) {
        u32 r0_2 = get_save_data(r0_1, r1, r2, r3);
        gptr<Local_001de99c_r0_3> r0_3 = gptr<Local_001de99c_r0_3>(r0_2 + 0x621b8u);  // (from the original)
        r1 = r0_3->half_0;
        if (arg1->half_36 == r1) {
            r1 = arg1->byte_4a;
            if (r1 == r0_3->byte_14) {
                u32 r0_5 = memory_compare_100d2c(r5_1 + 0x38u, r0_3.addr() + 2u, 0x12u, r5_1 + 0x36u);  // (from the original)
                r1 = guest::cpu()->r[1];
                if (r0_5 == 0) {
                    u32 r0_6 = arg0->byte_218;
                    copy_aligned_bytes(arg0.addr() + (r0_6 * 5u + (r0_6 << 3) << 3), r5_1, 0x64u);  // (from the original)
                    u32 r0_8 = call_00728af8(r2);
                    u32 r0_9 = call_00728ca0(r2);
                    u32 r0_10 = call_00728c48(r2);
                    u32 r0_11 = arg0->byte_218;
                    store_half_and_bytes(arg0.addr() + (r0_11 * 5u + (r0_11 << 3) << 3) + 0x64u, uxth(r0_10), r0_9 & 0xffu, r0_8 & 0xffu);  // (from the original)
                    u32 r0_13 = arg0->byte_218;
                    r1 = u32(arg0->byte_219) & ~lsl_r(1u, r0_13 & 0xff);  // (from the original)
                    u32 r0_14 = r0_13 + 1u & 0xffu;  // (from the original)
                    arg0->byte_219 = u8(r1);
                    arg0->byte_218 = u8(r0_14);
                    if (r0_14 >= 4u) {
                        arg0->byte_218 = 0;
                    }
                }
            }
        }
    }
    guest::cpu()->r[1] = r1;
}

}  // namespace d_001de99c
GUEST_EXPORT_FRAMED(0x001de99c, d_001de99c::f_001de99c, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_001dec8c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001dec8c {

struct __attribute__((packed)) Object_001dec8c_0 {
    u8 unknown_0[0x208];  // (not used here)
    u32 word_208;
    u32 word_20c;
    u8 byte_210;
    u8 byte_211;
    u8 byte_212;
    u8 byte_213;
};
GUEST_OFFSET(Object_001dec8c_0, word_208, 0x208);
GUEST_OFFSET(Object_001dec8c_0, word_20c, 0x20c);
GUEST_OFFSET(Object_001dec8c_0, byte_210, 0x210);
GUEST_OFFSET(Object_001dec8c_0, byte_211, 0x211);
GUEST_OFFSET(Object_001dec8c_0, byte_212, 0x212);
GUEST_OFFSET(Object_001dec8c_0, byte_213, 0x213);


void f_001dec8c(gptr<Object_001dec8c_0> arg0) {
    arg0->word_208 = 0;
    arg0->word_20c = 0;
    arg0->byte_210 = 0;
    arg0->byte_211 = 0;
    arg0->byte_212 = 0;
    arg0->byte_213 = 0;
}

}  // namespace d_001dec8c
GUEST_EXPORT(0x001dec8c, d_001dec8c::f_001dec8c);

// f_001decb0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001decb0 {

struct __attribute__((packed)) Object_001decb0_0 {
    u8 unknown_0[0x1a0];  // (not used here)
    u32 word_1a0;
    u8 unknown_1a4[0x2e];  // (not used here)
    u16 half_1d2;
    u8 byte_1d4;
    u8 byte_1d5;
};
GUEST_OFFSET(Object_001decb0_0, word_1a0, 0x1a0);
GUEST_OFFSET(Object_001decb0_0, half_1d2, 0x1d2);
GUEST_OFFSET(Object_001decb0_0, byte_1d4, 0x1d4);
GUEST_OFFSET(Object_001decb0_0, byte_1d5, 0x1d5);

inline constexpr guest::Function<0x003052f0, u32(u32, u32, u32, u32)> clear_identity_with_flags;
inline constexpr guest::Function<0x0030589c, u32(u32)> PlayerRef__clear;

u32 f_001decb0(gptr<Object_001decb0_0> arg0, u32 r1, u32 r2, u32 r3) {
    u32 r0 = arg0.addr();
    u32 r5 = r0;
    u32 r4 = r0 + 0x1a0u;  // (from the original)
    u32 r6 = 0u;
    arg0->word_1a0 = r6;
    clear_identity_with_flags((r0 + 0x1a0u) + 4u, r1, r2, r3);  // (from the original)
    arg0->half_1d2 = u16(r6);
    arg0->byte_1d4 = u8(r6);
    arg0->byte_1d5 = u8(r6);
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
    u32 r0_3 = ~0u;
    *gptr<u32>(r4 + 0x60u) = r0_3;  // (from the original)
    *gptr<u32>(r5 + 0x204u) = r6;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0_3;
}

}  // namespace d_001decb0
GUEST_EXPORT_FRAMED(0x001decb0, d_001decb0::f_001decb0, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_001ded24: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001ded24 {

struct __attribute__((packed)) Local_001ded24_ea_2 {
    u16 half_0;
    u8 byte_2;
    u8 byte_3;
};
GUEST_OFFSET(Local_001ded24_ea_2, half_0, 0x0);
GUEST_OFFSET(Local_001ded24_ea_2, byte_2, 0x2);
GUEST_OFFSET(Local_001ded24_ea_2, byte_3, 0x3);

inline constexpr guest::Function<0x003052f0, u32(u32, u32, u32, u32)> clear_identity_with_flags;
inline constexpr guest::Function<0x0030589c, u32(u32)> PlayerRef__clear;

void f_001ded24(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r5 = 0u;
    u32 r6 = r0;
    u32 r8 = r5;
    u32 r7 = 0xffffu;  // (from the original)
    u32 r9 = ~0u;
    do {
        u32 r4 = r6 + (r5 + (r5 << 2) + (r5 << 3) << 3);
        *gptr<u32>(r4) = r8;
        clear_identity_with_flags(r4 + 4u, r1, r2, r3);
        *gptr<u16>(r4 + 0x32u) = u16(r8);  // (from the original)
        *gptr<u8>(r4 + 0x34u) = u8(r8);  // (from the original)
        *gptr<u8>(r4 + 0x35u) = u8(r8);  // (from the original)
        PlayerRef__clear(r4 + 0x36u);  // (from the original)
        r1 = 0u;
        r0 = r1;
        do {
            r3 = r4 + (r1 << 1);
            u32 r1_2 = r1 + 1u;
            r0 += 2u;
            r2 = r4 + (r1_2 << 1);
            *gptr<u16>(r3 + 0x4cu) = u16(r7);  // (from the original)
            r1 = r1_2 + 1u;
            *gptr<u16>(r2 + 0x4cu) = u16(r7);  // (from the original)
            guest::preempt();
        } while (s32(r0) < 0xa);  // (from the original)
        *gptr<u32>(r4 + 0x60u) = r9;  // (from the original)
        gptr<Local_001ded24_ea_2> ea_2 = gptr<Local_001ded24_ea_2>(r4 + 0x64u);  // (from the original)
        ea_2->half_0 = u16(r8);
        r5 += 1u;
        ea_2->byte_2 = u8(r8);
        ea_2->byte_3 = u8(r8);
        guest::preempt();
    } while (r5 < 4u);
    *gptr<u8>(r6 + 0x218u) = u8(r8);  // (from the original)
    *gptr<u8>(r6 + 0x219u) = u8(r8);  // (from the original)
    guest::cpu()->r[1] = r1;
}

}  // namespace d_001ded24
GUEST_EXPORT_FRAMED(0x001ded24, d_001ded24::f_001ded24, 0x47f0);  // pushes {r4, r5, r6, r7, r8, r9, r10, lr} first, as the original

// f_001dedc0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001dedc0 {

struct __attribute__((packed)) Local_001dedc0_ea_2 {
    u16 half_0;
    u8 byte_2;
    u8 byte_3;
};
GUEST_OFFSET(Local_001dedc0_ea_2, half_0, 0x0);
GUEST_OFFSET(Local_001dedc0_ea_2, byte_2, 0x2);
GUEST_OFFSET(Local_001dedc0_ea_2, byte_3, 0x3);

inline constexpr guest::Function<0x003052f0, u32(u32, u32, u32, u32)> clear_identity_with_flags;
inline constexpr guest::Function<0x0030589c, u32(u32)> PlayerRef__clear;

void f_001dedc0(u32 r0, u32 r1_unused, u32 r2, u32 r3) {
    u32 r1 = 0;
    u32 r5 = 0u;
    u32 r7 = r0;
    u32 r10 = ~0u;
    u32 r9 = r5;
    u32 r8 = r10 >> 0x10;  // (from the original)
    do {
        u32 r1_1 = r5 * 5u + (r5 << 3);
        u32 r4 = r7 + (r1_1 << 3);
        *gptr<u32>(r4) = r9;
        clear_identity_with_flags(r4 + 4u, r1_1, r2, r3);
        *gptr<u16>(r4 + 0x32u) = u16(r9);  // (from the original)
        *gptr<u8>(r4 + 0x34u) = u8(r9);  // (from the original)
        *gptr<u8>(r4 + 0x35u) = u8(r9);  // (from the original)
        PlayerRef__clear(r4 + 0x36u);  // (from the original)
        r1 = 0u;
        r0 = r1;
        do {
            r2 = r4 + (r1 << 1);
            u32 r1_3 = r1 + 1u;
            r0 += 2u;
            r3 = r4 + (r1_3 << 1);
            *gptr<u16>(r2 + 0x4cu) = u16(r8);  // (from the original)
            r1 = r1_3 + 1u;
            *gptr<u16>(r3 + 0x4cu) = u16(r8);  // (from the original)
            guest::preempt();
        } while (s32(r0) < 0xa);  // (from the original)
        *gptr<u32>(r4 + 0x60u) = r10;  // (from the original)
        gptr<Local_001dedc0_ea_2> ea_2 = gptr<Local_001dedc0_ea_2>(r4 + 0x64u);  // (from the original)
        ea_2->half_0 = u16(r9);
        r5 += 1u;
        ea_2->byte_2 = u8(r9);
        ea_2->byte_3 = u8(r9);
        guest::preempt();
    } while (r5 < 4u);
    *gptr<u8>(r7 + 0x218u) = u8(r9);  // (from the original)
    *gptr<u8>(r7 + 0x219u) = u8(r9);  // (from the original)
    u32 r6 = r7 + 0x1a0u;  // (from the original)
    *gptr<u32>(r7 + 0x1a0u) = r9;  // (from the original)
    clear_identity_with_flags(r7 + 0x1a4u, r1, r2, r3);  // (from the original)
    *gptr<u16>(r6 + 0x32u) = u16(r9);  // (from the original)
    *gptr<u8>(r6 + 0x34u) = u8(r9);  // (from the original)
    *gptr<u8>(r6 + 0x35u) = u8(r9);  // (from the original)
    PlayerRef__clear(r6 + 0x36u);  // (from the original)
    r1 = 0u;
    r0 = r1;
    do {
        u32 r1_5 = r1 + 1u;
        r0 += 2u;
        *gptr<u16>((r6 + (r1 << 1)) + 0x4cu) = u16(r8);  // (from the original)
        r1 = r1_5 + 1u;
        *gptr<u16>((r6 + (r1_5 << 1)) + 0x4cu) = u16(r8);  // (from the original)
        guest::preempt();
    } while (s32(r0) < 0xa);  // (from the original)
    *gptr<u32>(r6 + 0x60u) = r10;  // (from the original)
    *gptr<u32>(r7 + 0x208u) = 0;  // (from the original)
    *gptr<u32>(r7 + 0x204u) = r9;  // (from the original)
    *gptr<u32>(r7 + 0x20cu) = 0;  // (from the original)
    *gptr<u8>(r7 + 0x210u) = u8(r9);  // (from the original)
    *gptr<u8>(r7 + 0x211u) = u8(r9);  // (from the original)
    *gptr<u8>(r7 + 0x212u) = u8(r9);  // (from the original)
    *gptr<u8>(r7 + 0x213u) = u8(r9);  // (from the original)
    guest::cpu()->r[1] = 0u;
}

}  // namespace d_001dedc0
GUEST_EXPORT_FRAMED(0x001dedc0, d_001dedc0::f_001dedc0, 0x47f0);  // pushes {r4, r5, r6, r7, r8, r9, r10, lr} first, as the original

// f_001deecc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001deecc {

struct __attribute__((packed)) Local_001deecc_ea_1 {
    u16 half_0;
    u8 byte_2;
    u8 byte_3;
};
GUEST_OFFSET(Local_001deecc_ea_1, half_0, 0x0);
GUEST_OFFSET(Local_001deecc_ea_1, byte_2, 0x2);
GUEST_OFFSET(Local_001deecc_ea_1, byte_3, 0x3);

inline constexpr guest::Function<0x001dedc0, u32(u32, u32, u32, u32)> call_001dedc0;
inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> for_each_element;
inline constexpr guest::Function<0x003052f0, u32(u32)> clear_identity_with_flags;
inline constexpr guest::Function<0x0030589c, u32(u32)> PlayerRef__clear;

u32 f_001deecc(u32 r0) {
    u32 r3_3 = 0;
    u32 r0_1 = for_each_element(r0, 0x1de90cu, 0x68u, 4u);  // (from the original)
    u32 r0_2 = r0_1 + 0x1a4u;  // (from the original)
    u32 r4 = r0_2 - 4u;
    gptr<Local_001deecc_ea_1> ea_1 = gptr<Local_001deecc_ea_1>(r0_2 + 0x2eu);  // (from the original)
    ea_1->half_0 = 0;
    ea_1->byte_2 = 0;
    ea_1->byte_3 = 0;
    *gptr<u32>(r4) = 0;
    clear_identity_with_flags(r4 + 4u);
    *gptr<u16>(r4 + 0x32u) = 0;  // (from the original)
    *gptr<u8>(r4 + 0x34u) = 0;  // (from the original)
    *gptr<u8>(r4 + 0x35u) = 0;  // (from the original)
    PlayerRef__clear(r4 + 0x36u);  // (from the original)
    u32 r2 = 0xffffu;  // (from the original)
    u32 r1 = 0u;
    r0 = r1;
    do {
        r3_3 = r4 + (r1 << 1);
        u32 r1_3 = r1 + 1u;
        r0 += 2u;
        *gptr<u16>(r3_3 + 0x4cu) = u16(r2);  // (from the original)
        r1 = r1_3 + 1u;
        *gptr<u16>((r4 + (r1_3 << 1)) + 0x4cu) = u16(r2);  // (from the original)
        guest::preempt();
    } while (s32(r0) < 0xa);  // (from the original)
    u32 r1_4 = ~0u;
    *gptr<u32>(r4 + 0x60u) = r1_4;  // (from the original)
    u32 r4_1 = r4 - 0x1a0u;  // (from the original)
    call_001dedc0(r4_1, r1_4, r2, r3_3);
    return r4_1;
}

}  // namespace d_001deecc
GUEST_EXPORT_FRAMED(0x001deecc, d_001deecc::f_001deecc, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_001def90: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001def90 {

struct __attribute__((packed)) Object_001def90_0 {
    u8 unknown_0[0x4];  // (not used here)
    u16 half_4;
    u16 half_6;
    u16 half_8;
    u16 half_a;
    u16 half_c;
    u16 half_e;
    u16 half_10;
    u16 half_12;
    u8 unknown_14[0x2];  // (not used here)
    u8 byte_16;
    u8 byte_17;
    u8 byte_18;
    u8 byte_19;
    u8 unknown_1a[0x1];  // (not used here)
    u8 byte_1b;
    u8 unknown_1c[0x1];  // (not used here)
    u8 byte_1d;
    u8 byte_1e;
    u8 byte_1f;
    u8 unknown_20[0x1];  // (not used here)
    u8 byte_21;
    u8 byte_22;
    u8 byte_23;
    u8 byte_24;
    u8 byte_25;
    u8 byte_26;
};
GUEST_OFFSET(Object_001def90_0, half_4, 0x4);
GUEST_OFFSET(Object_001def90_0, half_6, 0x6);
GUEST_OFFSET(Object_001def90_0, half_8, 0x8);
GUEST_OFFSET(Object_001def90_0, half_a, 0xa);
GUEST_OFFSET(Object_001def90_0, half_c, 0xc);
GUEST_OFFSET(Object_001def90_0, half_e, 0xe);
GUEST_OFFSET(Object_001def90_0, half_10, 0x10);
GUEST_OFFSET(Object_001def90_0, half_12, 0x12);
GUEST_OFFSET(Object_001def90_0, byte_16, 0x16);
GUEST_OFFSET(Object_001def90_0, byte_17, 0x17);
GUEST_OFFSET(Object_001def90_0, byte_18, 0x18);
GUEST_OFFSET(Object_001def90_0, byte_19, 0x19);
GUEST_OFFSET(Object_001def90_0, byte_1b, 0x1b);
GUEST_OFFSET(Object_001def90_0, byte_1d, 0x1d);
GUEST_OFFSET(Object_001def90_0, byte_1e, 0x1e);
GUEST_OFFSET(Object_001def90_0, byte_1f, 0x1f);
GUEST_OFFSET(Object_001def90_0, byte_21, 0x21);
GUEST_OFFSET(Object_001def90_0, byte_22, 0x22);
GUEST_OFFSET(Object_001def90_0, byte_23, 0x23);
GUEST_OFFSET(Object_001def90_0, byte_24, 0x24);
GUEST_OFFSET(Object_001def90_0, byte_25, 0x25);
GUEST_OFFSET(Object_001def90_0, byte_26, 0x26);


void f_001def90(gptr<Object_001def90_0> arg0) {
    arg0->byte_16 = 1;
    arg0->byte_17 = 0;
    arg0->byte_18 = 0;
    arg0->byte_19 = 0;
    arg0->byte_1b = 0;
    arg0->byte_1d = 5;
    arg0->byte_1e = 5;
    arg0->byte_1f = 0;
    arg0->half_4 = 0x7ffe;  // (from the original)
    arg0->half_6 = 0x7ffe;  // (from the original)
    arg0->half_8 = 0x7ffe;  // (from the original)
    arg0->half_a = 0x7ffe;  // (from the original)
    arg0->half_c = 0x7ffe;  // (from the original)
    arg0->half_12 = 0x7ffe;  // (from the original)
    arg0->half_e = 0x7ffe;  // (from the original)
    arg0->half_10 = 0x7ffe;  // (from the original)
    arg0->byte_21 = 0;
    arg0->byte_22 = 0;
    arg0->byte_23 = 0;
    arg0->byte_24 = 0;
    arg0->byte_25 = 0;
    arg0->byte_26 = 0;
    guest::cpu()->r[1] = 0u;
}

}  // namespace d_001def90
GUEST_EXPORT(0x001def90, d_001def90::f_001def90);

// f_001df020: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001df020 {

struct __attribute__((packed)) Object_001df020_0 {
    u32 word_0;
    u16 half_4;
    u16 half_6;
    u16 half_8;
    u16 half_a;
    u16 half_c;
    u16 half_e;
    u16 half_10;
    u16 half_12;
    u8 byte_14;
    u8 byte_15;
    u8 byte_16;
    u8 byte_17;
    u8 byte_18;
    u8 byte_19;
    u8 unknown_1a[0x1];  // (not used here)
    u8 byte_1b;
    u8 unknown_1c[0x1];  // (not used here)
    u8 byte_1d;
    u8 byte_1e;
    u8 byte_1f;
    u8 unknown_20[0x1];  // (not used here)
    u8 byte_21;
    u8 byte_22;
    u8 byte_23;
    u8 byte_24;
    u8 byte_25;
    u8 byte_26;
    u8 byte_27;
    u8 byte_28;
    u8 byte_29;
    u8 byte_2a;
};
GUEST_OFFSET(Object_001df020_0, word_0, 0x0);
GUEST_OFFSET(Object_001df020_0, half_4, 0x4);
GUEST_OFFSET(Object_001df020_0, half_6, 0x6);
GUEST_OFFSET(Object_001df020_0, half_8, 0x8);
GUEST_OFFSET(Object_001df020_0, half_a, 0xa);
GUEST_OFFSET(Object_001df020_0, half_c, 0xc);
GUEST_OFFSET(Object_001df020_0, half_e, 0xe);
GUEST_OFFSET(Object_001df020_0, half_10, 0x10);
GUEST_OFFSET(Object_001df020_0, half_12, 0x12);
GUEST_OFFSET(Object_001df020_0, byte_14, 0x14);
GUEST_OFFSET(Object_001df020_0, byte_15, 0x15);
GUEST_OFFSET(Object_001df020_0, byte_16, 0x16);
GUEST_OFFSET(Object_001df020_0, byte_17, 0x17);
GUEST_OFFSET(Object_001df020_0, byte_18, 0x18);
GUEST_OFFSET(Object_001df020_0, byte_19, 0x19);
GUEST_OFFSET(Object_001df020_0, byte_1b, 0x1b);
GUEST_OFFSET(Object_001df020_0, byte_1d, 0x1d);
GUEST_OFFSET(Object_001df020_0, byte_1e, 0x1e);
GUEST_OFFSET(Object_001df020_0, byte_1f, 0x1f);
GUEST_OFFSET(Object_001df020_0, byte_21, 0x21);
GUEST_OFFSET(Object_001df020_0, byte_22, 0x22);
GUEST_OFFSET(Object_001df020_0, byte_23, 0x23);
GUEST_OFFSET(Object_001df020_0, byte_24, 0x24);
GUEST_OFFSET(Object_001df020_0, byte_25, 0x25);
GUEST_OFFSET(Object_001df020_0, byte_26, 0x26);
GUEST_OFFSET(Object_001df020_0, byte_27, 0x27);
GUEST_OFFSET(Object_001df020_0, byte_28, 0x28);
GUEST_OFFSET(Object_001df020_0, byte_29, 0x29);
GUEST_OFFSET(Object_001df020_0, byte_2a, 0x2a);


void f_001df020(gptr<Object_001df020_0> arg0) {
    arg0->byte_14 = 8;
    arg0->word_0 = 0;
    arg0->byte_15 = 0;
    arg0->byte_16 = 1;
    arg0->byte_17 = 0;
    arg0->byte_18 = 0;
    arg0->byte_19 = 0;
    arg0->byte_1b = 0;
    arg0->byte_1f = 0;
    arg0->byte_21 = 0;
    arg0->byte_22 = 0;
    arg0->byte_23 = 0;
    arg0->byte_24 = 0;
    arg0->byte_25 = 0;
    arg0->byte_26 = 0;
    arg0->byte_1d = 5;
    arg0->byte_1e = 5;
    arg0->half_4 = 0x7ffe;  // (from the original)
    arg0->half_6 = 0x7ffe;  // (from the original)
    arg0->half_8 = 0x7ffe;  // (from the original)
    arg0->half_a = 0x7ffe;  // (from the original)
    arg0->half_c = 0x7ffe;  // (from the original)
    arg0->half_12 = 0x7ffe;  // (from the original)
    arg0->half_e = 0x7ffe;  // (from the original)
    arg0->half_10 = 0x7ffe;  // (from the original)
    arg0->byte_27 = 0;
    arg0->byte_28 = 0;
    arg0->byte_29 = 0;
    arg0->byte_2a = 0;
}

}  // namespace d_001df020
GUEST_EXPORT(0x001df020, d_001df020::f_001df020);

// f_001df0b0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001df0b0 {

struct __attribute__((packed)) Object_001df0b0_0 {
    u32 word_0;
    u16 half_4;
    u16 half_6;
    u16 half_8;
    u16 half_a;
    u16 half_c;
    u16 half_e;
    u16 half_10;
    u16 half_12;
    u8 byte_14;
    u8 byte_15;
    u8 byte_16;
    u8 byte_17;
    u8 byte_18;
    u8 byte_19;
    u8 unknown_1a[0x1];  // (not used here)
    u8 byte_1b;
    u8 unknown_1c[0x1];  // (not used here)
    u8 byte_1d;
    u8 byte_1e;
    u8 byte_1f;
    u8 unknown_20[0x1];  // (not used here)
    u8 byte_21;
    u8 byte_22;
    u8 byte_23;
    u8 byte_24;
    u8 byte_25;
    u8 byte_26;
    u8 byte_27;
    u8 byte_28;
    u8 byte_29;
    u8 byte_2a;
};
GUEST_OFFSET(Object_001df0b0_0, word_0, 0x0);
GUEST_OFFSET(Object_001df0b0_0, half_4, 0x4);
GUEST_OFFSET(Object_001df0b0_0, half_6, 0x6);
GUEST_OFFSET(Object_001df0b0_0, half_8, 0x8);
GUEST_OFFSET(Object_001df0b0_0, half_a, 0xa);
GUEST_OFFSET(Object_001df0b0_0, half_c, 0xc);
GUEST_OFFSET(Object_001df0b0_0, half_e, 0xe);
GUEST_OFFSET(Object_001df0b0_0, half_10, 0x10);
GUEST_OFFSET(Object_001df0b0_0, half_12, 0x12);
GUEST_OFFSET(Object_001df0b0_0, byte_14, 0x14);
GUEST_OFFSET(Object_001df0b0_0, byte_15, 0x15);
GUEST_OFFSET(Object_001df0b0_0, byte_16, 0x16);
GUEST_OFFSET(Object_001df0b0_0, byte_17, 0x17);
GUEST_OFFSET(Object_001df0b0_0, byte_18, 0x18);
GUEST_OFFSET(Object_001df0b0_0, byte_19, 0x19);
GUEST_OFFSET(Object_001df0b0_0, byte_1b, 0x1b);
GUEST_OFFSET(Object_001df0b0_0, byte_1d, 0x1d);
GUEST_OFFSET(Object_001df0b0_0, byte_1e, 0x1e);
GUEST_OFFSET(Object_001df0b0_0, byte_1f, 0x1f);
GUEST_OFFSET(Object_001df0b0_0, byte_21, 0x21);
GUEST_OFFSET(Object_001df0b0_0, byte_22, 0x22);
GUEST_OFFSET(Object_001df0b0_0, byte_23, 0x23);
GUEST_OFFSET(Object_001df0b0_0, byte_24, 0x24);
GUEST_OFFSET(Object_001df0b0_0, byte_25, 0x25);
GUEST_OFFSET(Object_001df0b0_0, byte_26, 0x26);
GUEST_OFFSET(Object_001df0b0_0, byte_27, 0x27);
GUEST_OFFSET(Object_001df0b0_0, byte_28, 0x28);
GUEST_OFFSET(Object_001df0b0_0, byte_29, 0x29);
GUEST_OFFSET(Object_001df0b0_0, byte_2a, 0x2a);


void f_001df0b0(gptr<Object_001df0b0_0> arg0) {
    arg0->byte_14 = 8;
    arg0->word_0 = 0;
    arg0->byte_15 = 0;
    arg0->byte_16 = 1;
    arg0->byte_17 = 0;
    arg0->byte_18 = 0;
    arg0->byte_19 = 0;
    arg0->byte_1b = 0;
    arg0->byte_1f = 0;
    arg0->byte_21 = 0;
    arg0->byte_22 = 0;
    arg0->byte_23 = 0;
    arg0->byte_24 = 0;
    arg0->byte_25 = 0;
    arg0->byte_26 = 0;
    arg0->byte_1d = 5;
    arg0->byte_1e = 5;
    arg0->half_4 = 0x7ffe;  // (from the original)
    arg0->half_6 = 0x7ffe;  // (from the original)
    arg0->half_8 = 0x7ffe;  // (from the original)
    arg0->half_a = 0x7ffe;  // (from the original)
    arg0->half_c = 0x7ffe;  // (from the original)
    arg0->half_12 = 0x7ffe;  // (from the original)
    arg0->half_e = 0x7ffe;  // (from the original)
    arg0->half_10 = 0x7ffe;  // (from the original)
    arg0->byte_27 = 0;
    arg0->byte_28 = 0;
    arg0->byte_29 = 0;
    arg0->byte_2a = 0;
    guest::cpu()->r[1] = 0u;
}

}  // namespace d_001df0b0
GUEST_EXPORT(0x001df0b0, d_001df0b0::f_001df0b0);

// f_001df14c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001df14c {

struct __attribute__((packed)) Object_001df14c_0 {
    u32 word_0;
    u8 unknown_4[0x10];  // (not used here)
    u8 byte_14;
    u8 byte_15;
    u8 unknown_16[0x11];  // (not used here)
    u8 byte_27;
    u8 unknown_28[0x1];  // (not used here)
    u8 byte_29;
};
GUEST_OFFSET(Object_001df14c_0, word_0, 0x0);
GUEST_OFFSET(Object_001df14c_0, byte_14, 0x14);
GUEST_OFFSET(Object_001df14c_0, byte_15, 0x15);
GUEST_OFFSET(Object_001df14c_0, byte_27, 0x27);
GUEST_OFFSET(Object_001df14c_0, byte_29, 0x29);


void f_001df14c(gptr<Object_001df14c_0> arg0, u32 r1) {
    u32 r2 = 0;
    u32 r4 = 0;
    u32 r2_3 = 0;
    u32 r3_1 = arg0->byte_14;
    u32 r2_1 = arg0->byte_15;
    arg0->word_0 = r1;
    u32 r2_2 = r2_1 | 1u;
    arg0->byte_15 = u8(r2_2);
    if (r3_1 >= 8u) {
        r2_3 = r2_2 & ~2u;
        r4 = 0x88e6b4u;  // (from the original)
    } else {
        r2_3 = r2_2 | 2u;
        r4 = 0x88e6d8u;  // (from the original)
    }
    arg0->byte_15 = u8(r2_3);
    u32 r12 = 0u;
    if (r3_1 >= 8u) {
        r2 = 8u;
    } else {
        r2 = 5u;
L_1df18c:;
        if (gptr<u32>(r4)[r2] <= r1) {
            r12 = r2 & 0xffu;  // (from the original)
        } else {
            r2 -= 1u;
            if (r2 != 0) {
                guest::preempt();
                goto L_1df18c;
            }
        }
        if (arg0->byte_29 < r12) {
            arg0->byte_29 = u8(r12);
        }
        return;
    }
L_1df1bc:;
    if (gptr<u32>(r4)[r2] <= r1) {
        r12 = r2 & 0xffu;  // (from the original)
    } else {
        r2 -= 1u;
        if (r2 != 0) {
            guest::preempt();
            goto L_1df1bc;
        }
    }
    if (arg0->byte_27 < r12) {
        arg0->byte_27 = u8(r12);
    }
}

}  // namespace d_001df14c
GUEST_EXPORT_FRAMED(0x001df14c, d_001df14c::f_001df14c, 0x10);  // pushes {r4} first, as the original

// f_001df1f4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001df1f4 {

struct __attribute__((packed)) Object_001df1f4_0 {
    u32 word_0;
    u16 half_4;
    u16 half_6;
    u16 half_8;
    u16 half_a;
    u16 half_c;
    u16 half_e;
    u16 half_10;
    u16 half_12;
    u8 byte_14;
    u8 byte_15;
    u8 byte_16;
    u8 byte_17;
    u8 byte_18;
    u8 byte_19;
    u8 unknown_1a[0x1];  // (not used here)
    u8 byte_1b;
    u8 unknown_1c[0x1];  // (not used here)
    u8 byte_1d;
    u8 byte_1e;
    u8 byte_1f;
    u8 unknown_20[0x1];  // (not used here)
    u8 byte_21;
    u8 byte_22;
    u8 byte_23;
    u8 byte_24;
    u8 byte_25;
    u8 byte_26;
};
GUEST_OFFSET(Object_001df1f4_0, word_0, 0x0);
GUEST_OFFSET(Object_001df1f4_0, half_4, 0x4);
GUEST_OFFSET(Object_001df1f4_0, half_6, 0x6);
GUEST_OFFSET(Object_001df1f4_0, half_8, 0x8);
GUEST_OFFSET(Object_001df1f4_0, half_a, 0xa);
GUEST_OFFSET(Object_001df1f4_0, half_c, 0xc);
GUEST_OFFSET(Object_001df1f4_0, half_e, 0xe);
GUEST_OFFSET(Object_001df1f4_0, half_10, 0x10);
GUEST_OFFSET(Object_001df1f4_0, half_12, 0x12);
GUEST_OFFSET(Object_001df1f4_0, byte_14, 0x14);
GUEST_OFFSET(Object_001df1f4_0, byte_15, 0x15);
GUEST_OFFSET(Object_001df1f4_0, byte_16, 0x16);
GUEST_OFFSET(Object_001df1f4_0, byte_17, 0x17);
GUEST_OFFSET(Object_001df1f4_0, byte_18, 0x18);
GUEST_OFFSET(Object_001df1f4_0, byte_19, 0x19);
GUEST_OFFSET(Object_001df1f4_0, byte_1b, 0x1b);
GUEST_OFFSET(Object_001df1f4_0, byte_1d, 0x1d);
GUEST_OFFSET(Object_001df1f4_0, byte_1e, 0x1e);
GUEST_OFFSET(Object_001df1f4_0, byte_1f, 0x1f);
GUEST_OFFSET(Object_001df1f4_0, byte_21, 0x21);
GUEST_OFFSET(Object_001df1f4_0, byte_22, 0x22);
GUEST_OFFSET(Object_001df1f4_0, byte_23, 0x23);
GUEST_OFFSET(Object_001df1f4_0, byte_24, 0x24);
GUEST_OFFSET(Object_001df1f4_0, byte_25, 0x25);
GUEST_OFFSET(Object_001df1f4_0, byte_26, 0x26);


void f_001df1f4(gptr<Object_001df1f4_0> arg0) {
    arg0->byte_14 = 8;
    arg0->word_0 = 0;
    arg0->byte_15 = 0;
    arg0->byte_16 = 1;
    arg0->byte_17 = 0;
    arg0->byte_18 = 0;
    arg0->byte_19 = 0;
    arg0->byte_1b = 0;
    arg0->byte_1f = 0;
    arg0->byte_21 = 0;
    arg0->byte_22 = 0;
    arg0->byte_23 = 0;
    arg0->byte_24 = 0;
    arg0->byte_25 = 0;
    arg0->byte_26 = 0;
    arg0->byte_1d = 5;
    arg0->byte_1e = 5;
    arg0->half_4 = 0x7ffe;  // (from the original)
    arg0->half_6 = 0x7ffe;  // (from the original)
    arg0->half_8 = 0x7ffe;  // (from the original)
    arg0->half_a = 0x7ffe;  // (from the original)
    arg0->half_c = 0x7ffe;  // (from the original)
    arg0->half_12 = 0x7ffe;  // (from the original)
    arg0->half_e = 0x7ffe;  // (from the original)
    arg0->half_10 = 0x7ffe;  // (from the original)
    guest::cpu()->r[1] = 0u;
}

}  // namespace d_001df1f4
GUEST_EXPORT(0x001df1f4, d_001df1f4::f_001df1f4);

// f_001df274: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001df274 {


u32 f_001df274(u32 r0, u32 r1) {
    u32 r1_1 = s16(r1) * s16(0x371u);  // (from the original)
    guest::cpu()->r[1] = r1_1;
    return r0 + (r1_1 << 3) + 0x2058u;  // (from the original)
}

}  // namespace d_001df274
GUEST_EXPORT(0x001df274, d_001df274::f_001df274);

// f_001df324: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001df324 {

inline constexpr u32 global_00982040_address = 0x00982040u;
inline guest::global<u8, 0x0098203c> global_0098203c;
inline guest::global<u32, 0x00982040> global_00982040;
inline guest::global<u8, 0x00982055> global_00982055;

u32 f_001df324() {
    u32 r1_1 = s8(*global_00982055);
    u32 r0_1 = u32(s8(*global_0098203c)) & ~r1_1;
    if (r0_1 != 0) {
        r0_1 = *global_00982040;
    }
    guest::cpu()->r[1] = r1_1;
    return r0_1;
}

}  // namespace d_001df324
GUEST_EXPORT(0x001df324, d_001df324::f_001df324);

// f_001df350: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001df350 {


u32 f_001df350(u32 r0, u32 r1) {
    return r0 + r1 * 0xfu * 0x60u + 0x8e78u;  // (from the original)
}

}  // namespace d_001df350
GUEST_EXPORT(0x001df350, d_001df350::f_001df350);

// f_001df368: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001df368 {

inline constexpr u32 global_00982068_address = 0x00982068u;
inline guest::global<u8, 0x00982064> global_00982064;
inline guest::global<u32, 0x00982068> global_00982068;
inline guest::global<u8, 0x0098207d> global_0098207d;

u32 f_001df368() {
    u32 r1_1 = s8(*global_0098207d);
    u32 r0_1 = u32(s8(*global_00982064)) & ~r1_1;
    if (r0_1 != 0) {
        r0_1 = *global_00982068;
    }
    guest::cpu()->r[1] = r1_1;
    return r0_1;
}

}  // namespace d_001df368
GUEST_EXPORT(0x001df368, d_001df368::f_001df368);

// f_001df394: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001df394 {

inline constexpr u32 global_00982018_address = 0x00982018u;
inline guest::global<u8, 0x00982014> global_00982014;
inline guest::global<u32, 0x00982018> global_00982018;

u32 f_001df394() {
    u32 r0_1 = *global_00982014;
    if (r0_1 != 0) {
        r0_1 = *global_00982018;
    }
    return r0_1;
}

}  // namespace d_001df394
GUEST_EXPORT(0x001df394, d_001df394::f_001df394);

// f_001df3b4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001df3b4 {

inline constexpr u32 global_00982040_address = 0x00982040u;
inline guest::global<u8, 0x0098203c> global_0098203c;
inline guest::global<u32, 0x00982040> global_00982040;

u32 f_001df3b4() {
    u32 r0_1 = *global_0098203c;
    if (r0_1 != 0) {
        r0_1 = *global_00982040;
    }
    return r0_1;
}

}  // namespace d_001df3b4
GUEST_EXPORT(0x001df3b4, d_001df3b4::f_001df3b4);

// f_001df4c4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001df4c4 {

inline constexpr u32 empty_item_address = 0x0095bfdcu;
inline constexpr guest::Function<0x002fc20c, u32(u32)> construct_empty_item;
inline constexpr guest::Function<0x002fc8e8, u32(u32, u32)> copy_item_002fc8e8;

u32 f_001df4c4(u32 r0) {
    construct_empty_item(r0);
    construct_empty_item(r0 + 4u);
    construct_empty_item(r0 + 8u);
    construct_empty_item(r0 + 0xcu);  // (from the original)
    construct_empty_item(r0 + 0x10u);  // (from the original)
    construct_empty_item(r0 + 0x14u);  // (from the original)
    copy_item_002fc8e8(r0, empty_item_address);
    copy_item_002fc8e8(r0 + 4u, empty_item_address);
    copy_item_002fc8e8(r0 + 8u, empty_item_address);
    copy_item_002fc8e8(r0 + 0xcu, empty_item_address);  // (from the original)
    copy_item_002fc8e8(r0 + 0x10u, empty_item_address);  // (from the original)
    copy_item_002fc8e8(r0 + 0x14u, empty_item_address);  // (from the original)
    return r0;
}

}  // namespace d_001df4c4
GUEST_EXPORT_FRAMED(0x001df4c4, d_001df4c4::f_001df4c4, 0x4010);  // pushes {r4, lr} first, as the original

// f_001df564: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001df564 {

struct __attribute__((packed)) Object_001df564_0 {
    u8 byte_0;
};
GUEST_OFFSET(Object_001df564_0, byte_0, 0x0);


void f_001df564(gptr<Object_001df564_0> arg0, u32 r1) {
    u32 r3_1 = arg0->byte_0;
    u32 r2_1 = (r3_1 & 7u) + r1;
    if (r2_1 <= 7u) {
        u32 r1_1 = r3_1 & ~7u | r2_1 & 7u;
        arg0->byte_0 = u8(r1_1);
        guest::cpu()->r[1] = r1_1;
        return;
    }
    if (r1 != 0 && s32(r1) >= 0) {
        r2_1 = 7u;
    }
    if (s32(r1) <= 0) {
        r2_1 = 0u;
    }
    u32 r1_2 = r3_1 & ~7u | r2_1 & 7u;
    arg0->byte_0 = u8(r1_2);
    guest::cpu()->r[1] = r1_2;
}

}  // namespace d_001df564
GUEST_EXPORT(0x001df564, d_001df564::f_001df564);

// f_001df598: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001df598 {

struct __attribute__((packed)) Object_001df598_0 {
    u8 unknown_0[0x3];  // (not used here)
    u8 byte_3;
    u8 byte_4;
};
GUEST_OFFSET(Object_001df598_0, byte_3, 0x3);
GUEST_OFFSET(Object_001df598_0, byte_4, 0x4);


void f_001df598(gptr<Object_001df598_0> arg0, u32 r1) {
    u32 r3_1 = arg0->byte_3;
    u32 r2_1 = (r3_1 >> 1) + ((u32(arg0->byte_4) & 1u) << 7) + r1;
    if (r2_1 <= 0xffu) {  // (from the original)
        u32 r1_1 = u32(arg0->byte_4) & ~1u | (r2_1 & 0x80u) >> 7;  // (from the original)
        arg0->byte_3 = u8(r3_1 & ~0xfeu | r2_1 << 1);  // (from the original)
        arg0->byte_4 = u8(r1_1);
        guest::cpu()->r[1] = r1_1;
        return;
    }
    if (r1 != 0 && s32(r1) >= 0) {
        r2_1 = 0xffu;  // (from the original)
    }
    if (s32(r1) <= 0) {
        r2_1 = 0u;
    }
    u32 r1_2 = u32(arg0->byte_4) & ~1u | (r2_1 & 0x80u) >> 7;  // (from the original)
    arg0->byte_3 = u8(r3_1 & ~0xfeu | r2_1 << 1);  // (from the original)
    arg0->byte_4 = u8(r1_2);
    guest::cpu()->r[1] = r1_2;
}

}  // namespace d_001df598
GUEST_EXPORT(0x001df598, d_001df598::f_001df598);

// f_001df5e8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001df5e8 {

struct __attribute__((packed)) Object_001df5e8_0 {
    u8 unknown_0[0x4];  // (not used here)
    u8 byte_4;
};
GUEST_OFFSET(Object_001df5e8_0, byte_4, 0x4);


void f_001df5e8(gptr<Object_001df5e8_0> arg0, u32 r1) {
    u32 r3_1 = arg0->byte_4;
    u32 r2_1 = r1 + (r3_1 >> 1u & 7u);
    if (r2_1 <= 7u) {
        u32 r1_1 = r3_1 & ~0xeu | (r2_1 & 7u) << 1;  // (from the original)
        arg0->byte_4 = u8(r1_1);
        guest::cpu()->r[1] = r1_1;
        return;
    }
    if (r1 != 0 && s32(r1) >= 0) {
        r2_1 = 7u;
    }
    if (s32(r1) <= 0) {
        r2_1 = 0u;
    }
    u32 r1_2 = r3_1 & ~0xeu | (r2_1 & 7u) << 1;  // (from the original)
    arg0->byte_4 = u8(r1_2);
    guest::cpu()->r[1] = r1_2;
}

}  // namespace d_001df5e8
GUEST_EXPORT(0x001df5e8, d_001df5e8::f_001df5e8);

// f_001df61c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001df61c {

struct __attribute__((packed)) Object_001df61c_0 {
    u8 byte_0;
};
GUEST_OFFSET(Object_001df61c_0, byte_0, 0x0);


void f_001df61c(gptr<Object_001df61c_0> arg0, u32 r1) {
    u32 r3_1 = arg0->byte_0;
    u32 r2_1 = r1 + (r3_1 >> 3u & 7u);
    if (r2_1 <= 7u) {
        arg0->byte_0 = u8(r3_1 & ~0x38u | (r2_1 & 7u) << 3);  // (from the original)
        return;
    }
    if (r1 != 0 && s32(r1) >= 0) {
        r2_1 = 7u;
    }
    if (s32(r1) <= 0) {
        r2_1 = 0u;
    }
    arg0->byte_0 = u8(r3_1 & ~0x38u | (r2_1 & 7u) << 3);  // (from the original)
}

}  // namespace d_001df61c
GUEST_EXPORT(0x001df61c, d_001df61c::f_001df61c);

// f_001df668: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001df668 {

struct __attribute__((packed)) Object_001df668_0 {
    u8 unknown_0[0x4];  // (not used here)
    u8 byte_4;
};
GUEST_OFFSET(Object_001df668_0, byte_4, 0x4);


void f_001df668(gptr<Object_001df668_0> arg0, u32 r1) {
    u32 r3_1 = arg0->byte_4;
    u32 r2_1 = r1 + (r3_1 >> 4u & 7u);
    if (r2_1 <= 7u) {
        u32 r1_1 = r3_1 & ~0x70u | (r2_1 & 7u) << 4;  // (from the original)
        arg0->byte_4 = u8(r1_1);
        guest::cpu()->r[1] = r1_1;
        return;
    }
    if (r1 != 0 && s32(r1) >= 0) {
        r2_1 = 7u;
    }
    if (s32(r1) <= 0) {
        r2_1 = 0u;
    }
    u32 r1_2 = r3_1 & ~0x70u | (r2_1 & 7u) << 4;  // (from the original)
    arg0->byte_4 = u8(r1_2);
    guest::cpu()->r[1] = r1_2;
}

}  // namespace d_001df668
GUEST_EXPORT(0x001df668, d_001df668::f_001df668);
