// Functions decompiled by tools/decomp (docs/decomp.md), each proved equal to the recompiled original (prove-cpp). The
// names are generated (d_<address>::f_<address>, Object_<address>_<argument>, word_<offset>) and still to be chosen.
#include "guest/guest.hpp"
#include "core/state_a22020.hpp"
#include "recovered/structs.hpp"

#include <bit>

using guest::gptr;

// f_005000d0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005000d0 {

inline constexpr u32 vtable_gui__TextArea = 0x009030fcu;

void f_005000d0(gptr<gui__TextArea> arg0) {
    arg0->word_4 = 0;
    arg0->word_0 = vtable_gui__TextArea;
    arg0->word_8 = 0;
    arg0->word_18 = 0;
    arg0->word_c = 0;
    arg0->word_10 = 0;
    arg0->byte_14 = 0;
    arg0->byte_15 = 0;
}

}  // namespace d_005000d0
GUEST_EXPORT(0x005000d0, d_005000d0::f_005000d0);

// f_0050060c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0050060c {

inline constexpr u32 vtable_gui__ButtonEx2 = 0x00903118u;
inline constexpr guest::Function<0x002fbb30, u32(u32, u32, u32)> call_002fbb30;
inline constexpr guest::Function<0x004ff388, u32(u32, u32, u32, u32)> call_004ff388;

u32 f_0050060c(gptr<gui__ButtonEx2> arg0, u32 r1, u32 r2, u32 r3) {
    call_004ff388(arg0.addr(), r1, r2, r3);
    arg0->word_0 = vtable_gui__ButtonEx2;
    call_002fbb30(arg0.addr() + 0x11cu, r1, 0xe8u);  // (from the original)
    arg0->byte_204 = 1;
    arg0->byte_205 = 0;
    arg0->word_18 = arg0.addr() + 0x11cu;  // (from the original)
    return arg0.addr();
}

}  // namespace d_0050060c
GUEST_EXPORT_FRAMED(0x0050060c, d_0050060c::f_0050060c, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_005008b4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005008b4 {

struct __attribute__((packed)) Object_005008b4_0 {
    u8 unknown_0[0x10];  // (not used here)
    u32 word_10;
    u8 unknown_14[0x2d8];  // (not used here)
    u8 byte_2ec;
};
GUEST_OFFSET(Object_005008b4_0, word_10, 0x10);
GUEST_OFFSET(Object_005008b4_0, byte_2ec, 0x2ec);

inline constexpr guest::Function<0x002fbb30, u32(u32, u32, u32)> call_002fbb30;
inline constexpr guest::Function<0x004feb7c, u32(u32, u32, u32)> call_004feb7c;
inline constexpr guest::Function<0x004ff300, u32(u32, u32, u32, u32)> call_004ff300;

void f_005008b4(gptr<Object_005008b4_0> arg0, u32 r1, u32 r2) {
    call_004ff300(arg0.addr(), 0u, r2, guest::cpu()->r[3]);
    call_004ff300(arg0.addr(), 1u, guest::cpu()->r[2], guest::cpu()->r[3]);
    call_004ff300(arg0.addr(), 2u, guest::cpu()->r[2], guest::cpu()->r[3]);
    call_004ff300(arg0.addr(), 3u, guest::cpu()->r[2], guest::cpu()->r[3]);
    call_004ff300(arg0.addr(), 4u, guest::cpu()->r[2], guest::cpu()->r[3]);
    arg0->byte_2ec = u8(r1);
    if (r1 != 0) {
        call_002fbb30(arg0.addr() + 0x30u, arg0.addr() + 0x11cu, 0xe8u);  // (from the original)
    } else {
        call_002fbb30(arg0.addr() + 0x30u, arg0.addr() + 0x204u, 0xe8u);  // (from the original)
    }
    call_004feb7c(arg0.addr(), 0u, 1u);
    arg0->word_10 = 0;
}

}  // namespace d_005008b4
GUEST_EXPORT_FRAMED(0x005008b4, d_005008b4::f_005008b4, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_005012e0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005012e0 {

struct __attribute__((packed)) Local_005012e0_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_005012e0_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_005012e0_ea_1, word_4, 0x4);

struct __attribute__((packed)) Local_005012e0_ea_11 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_005012e0_ea_11, word_0, 0x0);
GUEST_OFFSET(Local_005012e0_ea_11, word_4, 0x4);
GUEST_OFFSET(Local_005012e0_ea_11, word_8, 0x8);

struct __attribute__((packed)) Local_005012e0_r4_1 {
    u8 unknown_0[0x320];  // (not used here)
    float float_320;
    float float_324;
    u8 unknown_328[0x20];  // (not used here)
    float float_348;
};
GUEST_OFFSET(Local_005012e0_r4_1, float_320, 0x320);
GUEST_OFFSET(Local_005012e0_r4_1, float_324, 0x324);
GUEST_OFFSET(Local_005012e0_r4_1, float_348, 0x348);

inline constexpr u32 vtable_lyt__TextAreaEx = 0x009031a0u;
inline constexpr guest::Function<0x0050bcb4, u32(u32, u32, u32, u32)> call_0050bcb4;

u32 f_005012e0(u32 r0, u32 r1, u32 r2, u32 r3, float S0, float S1) {
    u32 r0_1 = call_0050bcb4(r0, r1, r2, r3);
    *gptr<u32>(r0_1) = vtable_lyt__TextAreaEx;
    gptr<Local_005012e0_ea_1> ea_1 = gptr<Local_005012e0_ea_1>(r0_1 + 0x710u);  // (from the original)
    ea_1->word_0 = 0;
    ea_1->word_4 = ~0u;
    gptr<Local_005012e0_r4_1> r4_1 = gptr<Local_005012e0_r4_1>(r0_1 + 0x400u);  // (from the original)
    float S0_1 = 0.0f;
    *gptr<u32>(r0_1 + 0x718u) = 0;  // (from the original)
    *gptr<u32>(r0_1 + 0x71cu) = 0;  // (from the original)
    r4_1->float_320 = S0_1;
    r4_1->float_324 = S0_1;
    *gptr<u32>(r0_1 + 0x728u) = 0;  // (from the original)
    *gptr<u32>(r0_1 + 0x72cu) = 0;  // (from the original)
    *gptr<u32>(r0_1 + 0x730u) = 0;  // (from the original)
    *gptr<u32>(r0_1 + 0x734u) = 0;  // (from the original)
    *gptr<u8>(r0_1 + 0x738u) = 0;  // (from the original)
    *gptr<u8>(r0_1 + 0x739u) = 0;  // (from the original)
    *gptr<u8>(r0_1 + 0x73au) = 0;  // (from the original)
    float S1_1 = 16.0f;
    gptr<Local_005012e0_ea_11> ea_11 = gptr<Local_005012e0_ea_11>(r0_1 + 0x73cu);  // (from the original)
    ea_11->word_0 = 0x12;  // (from the original)
    ea_11->word_4 = 6;
    ea_11->word_8 = 4;
    r4_1->float_348 = S1_1;
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    return r0_1;
}

}  // namespace d_005012e0
GUEST_EXPORT_FRAMED(0x005012e0, d_005012e0::f_005012e0, 0x4010);  // pushes {r4, lr} first, as the original

// f_005013dc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005013dc {

struct __attribute__((packed)) Object_005013dc_2 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Object_005013dc_2, word_0, 0x0);
GUEST_OFFSET(Object_005013dc_2, word_4, 0x4);

struct __attribute__((packed)) Local_005013dc_r0_2 {
    u8 unknown_0[0x24];  // (not used here)
    u32 word_24;
    u32 word_28;
};
GUEST_OFFSET(Local_005013dc_r0_2, word_24, 0x24);
GUEST_OFFSET(Local_005013dc_r0_2, word_28, 0x28);

struct __attribute__((packed)) Local_005013dc_r0_3 {
    float float_0;
    float float_4;
};
GUEST_OFFSET(Local_005013dc_r0_3, float_0, 0x0);
GUEST_OFFSET(Local_005013dc_r0_3, float_4, 0x4);

inline guest::global<u32, 0x0095e1a8> global_0095e1a8;
inline guest::global<u32, 0x0095e1ac> global_0095e1ac;

u32 f_005013dc(u32 r0_unused, u32 r1_unused, gptr<Object_005013dc_2> arg2, u32 r3, float S0, float S1) {
    u32 r5_1 = 0u;
    u32 r0_1 = *gptr<u32>(guest::cpu()->r[13] + 8u);
    u32 r4_1 = arg2->word_4;
    u32 r12_1 = r5_1;
    if (r3 == 0) {
        r5_1 = 1u;
        r12_1 = r5_1;
    } else if (r3 == 1u) {
        r5_1 = 1u;
    } else if (r3 == 2u) {
        r12_1 = 1u;
    }
    u32 zf_1 = r0_1 == 0;
    gptr<Local_005013dc_r0_2> r0_2 = gptr<Local_005013dc_r0_2>(arg2->word_0);
    if (!zf_1) {
        float S0_1 = std::bit_cast<float>(r0_2->word_24);
        float S1_1 = std::bit_cast<float>(r0_2->word_28);
        float S3_1 = 0.01f;
        *global_0095e1a8 = std::bit_cast<u32>(S0_1);
        *global_0095e1ac = std::bit_cast<u32>(S1_1);
        gptr<Local_005013dc_r0_3> r0_3 = gptr<Local_005013dc_r0_3>(r0_2.addr() + 0x24u);  // (from the original)
        u32 r1_1 = *gptr<u16>(r4_1);
        arg2->word_4 = r4_1 + 2u;
        float S2_1 = std::bit_cast<float>(r1_1);
        float S4_1 = float(std::bit_cast<u32>(S2_1)) * S3_1;
        float S2_2 = float(std::bit_cast<u32>(S2_1)) * S3_1;
        float S3_2 = S0_1 * S4_1;
        float S2_3 = S1_1 * S2_2;
        if (r5_1 != 0) {
            S0_1 = S3_2;
        }
        if (r12_1 != 0) {
            S1_1 = S2_3;
        }
        r0_3->float_0 = S0_1;
        r0_3->float_4 = S1_1;
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->s[0] = S0_1;
        guest::cpu()->s[1] = S1_1;
        return r0_3.addr();
    }
    u32 r1_2 = *global_0095e1a8;
    u32 r2_1 = *global_0095e1ac;
    r0_2->word_24 = r1_2;
    r0_2->word_28 = r2_1;
    guest::cpu()->r[1] = r1_2;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return r0_2.addr();
}

}  // namespace d_005013dc
GUEST_EXPORT_FRAMED(0x005013dc, d_005013dc::f_005013dc, 0x30);  // pushes {r4, r5} first, as the original

// f_00501580: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00501580 {

struct __attribute__((packed)) Object_00501580_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Object_00501580_1, word_0, 0x0);
GUEST_OFFSET(Object_00501580_1, word_4, 0x4);

struct __attribute__((packed)) Local_00501580_r0_1 {
    u8 unknown_0[0x24];  // (not used here)
    float float_24;
    float float_28;
};
GUEST_OFFSET(Local_00501580_r0_1, float_24, 0x24);
GUEST_OFFSET(Local_00501580_r0_1, float_28, 0x28);

struct __attribute__((packed)) Local_00501580_r0_2 {
    float float_0;
    float float_4;
};
GUEST_OFFSET(Local_00501580_r0_2, float_0, 0x0);
GUEST_OFFSET(Local_00501580_r0_2, float_4, 0x4);

struct __attribute__((packed)) Local_00501580_r0_3 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_00501580_r0_3, word_0, 0x0);
GUEST_OFFSET(Local_00501580_r0_3, word_4, 0x4);

inline guest::global<u32, 0x0095e1a0> global_0095e1a0;
inline guest::global<u32, 0x0095e1a4> global_0095e1a4;

u32 f_00501580(u32 r0_unused, gptr<Object_00501580_1> arg1, u32 r2, u32 r3, float S0, float S1) {
    gptr<Local_00501580_r0_1> r0_1 = gptr<Local_00501580_r0_1>(arg1->word_0);
    u32 r4_1 = arg1->word_4;
    if (*gptr<u32>(guest::cpu()->r[13] + 8u) != 0) {
        u32 zf_1 = r2 == 0;
        float S0_1 = r0_1->float_24;
        float S1_1 = r0_1->float_28;
        float S3_1 = 0.01f;
        *global_0095e1a0 = std::bit_cast<u32>(S0_1);
        *global_0095e1a4 = std::bit_cast<u32>(S1_1);
        gptr<Local_00501580_r0_2> r0_2 = gptr<Local_00501580_r0_2>(r0_1.addr() + 0x24u);  // (from the original)
        u32 r2_1 = *gptr<u16>(r4_1);
        arg1->word_4 = r4_1 + 2u;
        float S2_1 = std::bit_cast<float>(r2_1);
        float S4_1 = float(std::bit_cast<u32>(S2_1)) * S3_1;
        float S2_2 = float(std::bit_cast<u32>(S2_1)) * S3_1;
        float S3_2 = S0_1 * S4_1;
        float S2_3 = S1_1 * S2_2;
        if (!zf_1) {
            S0_1 = S3_2;
        }
        if (r3 != 0) {
            S1_1 = S2_3;
        }
        r0_2->float_0 = S0_1;
        r0_2->float_4 = S1_1;
        guest::cpu()->r[1] = arg1.addr();
        guest::cpu()->s[0] = S0_1;
        guest::cpu()->s[1] = S1_1;
        return r0_2.addr();
    }
    u32 r1_1 = *global_0095e1a0;
    u32 r2_2 = *global_0095e1a4;
    gptr<Local_00501580_r0_3> r0_3 = gptr<Local_00501580_r0_3>(r0_1.addr() + 0x24u);  // (from the original)
    r0_3->word_0 = r1_1;
    r0_3->word_4 = r2_2;
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return r0_3.addr();
}

}  // namespace d_00501580
GUEST_EXPORT_FRAMED(0x00501580, d_00501580::f_00501580, 0x30);  // pushes {r4, r5} first, as the original

// f_00501cc8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00501cc8 {

struct __attribute__((packed)) Local_00501cc8_r1_10 {
    u8 unknown_0[0xe48];  // (not used here)
    u32 word_e48;
};
GUEST_OFFSET(Local_00501cc8_r1_10, word_e48, 0xe48);

struct __attribute__((packed)) Local_00501cc8_r1_11 {
    float float_0;
    float float_4;
};
GUEST_OFFSET(Local_00501cc8_r1_11, float_0, 0x0);
GUEST_OFFSET(Local_00501cc8_r1_11, float_4, 0x4);

struct __attribute__((packed)) Local_00501cc8_r2_1 {
    u8 unknown_0[0xe48];  // (not used here)
    u32 word_e48;
};
GUEST_OFFSET(Local_00501cc8_r2_1, word_e48, 0xe48);

struct __attribute__((packed)) Local_00501cc8_r2_2 {
    float float_0;
    float float_4;
};
GUEST_OFFSET(Local_00501cc8_r2_2, float_0, 0x0);
GUEST_OFFSET(Local_00501cc8_r2_2, float_4, 0x4);

inline constexpr guest::Function<0x005e2e50, u32(u32, u32)> call_005e2e50;
inline constexpr guest::Function<0x005e2f94, u32(u32)> call_005e2f94;
inline constexpr guest::Function<0x006aa6b0, u32(u32, u32, u32, u32)> call_006aa6b0;
inline constexpr guest::Function<0x00766b00, u32(u32, u32)> call_00766b00;

struct __attribute__((packed)) Frame_00501cc8 {
    u32 word_0;
};
GUEST_OFFSET(Frame_00501cc8, word_0, 0x0);
GUEST_SIZE(Frame_00501cc8, 0x4);

void f_00501cc8(u32 r0, u32 r1, u32 r2_unused, u32 r3, float S0_unused, float S1_unused, float S2) {
    guest::StackFrameOf<Frame_00501cc8> frame;  // the original's stack frame
    float S0_1 = 0;
    float S1_1 = 0;
    float S0_26 = 0;
    float S1_26 = 0;
    gptr<Local_00501cc8_r1_11> r1_11 = gptr<Local_00501cc8_r1_11>(0u);
    frame->word_0 = r3;
    u32 r4 = r0;
    r0 = 1u;
    u32 r5 = r4 + 0x800u;  // (from the original)
    do {
        gptr<Local_00501cc8_r2_1> r2_1 = gptr<Local_00501cc8_r2_1>(r4 + (r0 << 2));
        S0_1 = std::bit_cast<float>(*gptr<u32>(r5 + 0x26cu));  // (from the original)
        r0 += 1u;
        S1_1 = std::bit_cast<float>(*gptr<u32>(r2_1->word_e48 + 0x4cu));  // (from the original)
        gptr<Local_00501cc8_r2_2> r2_2 = gptr<Local_00501cc8_r2_2>(r2_1->word_e48 + 0x48u);  // (from the original)
        r2_2->float_0 = S0_1;
        r2_2->float_4 = S1_1;
        guest::preempt();
    } while (s32(r0) < 7);
    u32 r0_1 = r4 + 0xa78u;  // (from the original)
    frame->word_0 = r1;
    u32 r1_1 = *gptr<u32>(r4 + 0xa74u);  // (from the original)
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    guest::cpu()->s[2] = S2;
    call_006aa6b0(r0_1, r1_1, r4 + 0xe48u, 1u);  // (from the original)
    u32 r0_2 = call_00766b00(r0_1, 0u);
    u32 r0_3 = r4 + 0xe68u;  // (from the original)
    call_005e2e50(r0_3, r0_2);
    call_005e2f94(r0_3);
    u32 r0_4 = call_00766b00(r0_1, 1u);
    u32 r0_5 = r4 + 0xf2cu;  // (from the original)
    call_005e2e50(r0_5, r0_4);
    call_005e2f94(r0_5);
    u32 r0_6 = call_00766b00(r0_1, 2u);
    call_005e2e50(r4 + 0xff0u, r0_6);  // (from the original)
    call_005e2f94(r4 + 0xff0u);  // (from the original)
    u32 r0_9 = call_00766b00(r0_1, 3u);
    u32 r0_10 = r4 + 0x10b4u;  // (from the original)
    call_005e2e50(r0_10, r0_9);
    call_005e2f94(r0_10);
    u32 r0_11 = call_00766b00(r0_1, 4u);
    u32 r0_12 = r4 + 0x1178u;  // (from the original)
    call_005e2e50(r0_12, r0_11);
    call_005e2f94(r0_12);
    u32 r0_13 = call_00766b00(r0_1, 5u);
    u32 r0_14 = r4 + 0x123cu;  // (from the original)
    call_005e2e50(r0_14, r0_13);
    call_005e2f94(r0_14);
    u32 r0_15 = call_00766b00(r0_1, 6u);
    call_005e2e50(r4 + 0x1300u, r0_15);  // (from the original)
    call_005e2f94(r4 + 0x1300u);  // (from the original)
    u32 r0_18 = call_00766b00(r0_1, 7u);
    u32 r0_19 = r4 + 0x13c4u;  // (from the original)
    call_005e2e50(r0_19, r0_18);
    call_005e2f94(r0_19);
    S2 = 16.0f;
    r0 = 1u;
    do {
        gptr<Local_00501cc8_r1_10> r1_10 = gptr<Local_00501cc8_r1_10>(r4 + (r0 << 2));
        r0 += 1u;
        S0_26 = std::bit_cast<float>(*gptr<u32>(r5 + 0x26cu)) + S2;  // (from the original)
        S1_26 = std::bit_cast<float>(*gptr<u32>(r1_10->word_e48 + 0x4cu));  // (from the original)
        r1_11 = gptr<Local_00501cc8_r1_11>(r1_10->word_e48 + 0x48u);  // (from the original)
        r1_11->float_0 = S0_26;
        r1_11->float_4 = S1_26;
        guest::preempt();
    } while (s32(r0) < 7);
    guest::cpu()->r[1] = r1_11.addr();
    guest::cpu()->s[0] = S0_26;
    guest::cpu()->s[1] = S1_26;
}

}  // namespace d_00501cc8
GUEST_EXPORT_FRAMED(0x00501cc8, d_00501cc8::f_00501cc8, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_00501f84: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00501f84 {

struct __attribute__((packed)) Local_00501f84_r0_1 {
    u8 unknown_0[0xb7];  // (not used here)
    u8 byte_b7;
};
GUEST_OFFSET(Local_00501f84_r0_1, byte_b7, 0xb7);

struct __attribute__((packed)) Local_00501f84_r12_1 {
    u8 unknown_0[0xb7];  // (not used here)
    u8 byte_b7;
};
GUEST_OFFSET(Local_00501f84_r12_1, byte_b7, 0xb7);

struct __attribute__((packed)) Local_00501f84_r1_1 {
    u8 unknown_0[0xb7];  // (not used here)
    u8 byte_b7;
};
GUEST_OFFSET(Local_00501f84_r1_1, byte_b7, 0xb7);

struct __attribute__((packed)) Local_00501f84_r1_2 {
    u8 unknown_0[0xb7];  // (not used here)
    u8 byte_b7;
};
GUEST_OFFSET(Local_00501f84_r1_2, byte_b7, 0xb7);

struct __attribute__((packed)) Local_00501f84_r1_3 {
    u8 unknown_0[0xb7];  // (not used here)
    u8 byte_b7;
};
GUEST_OFFSET(Local_00501f84_r1_3, byte_b7, 0xb7);

struct __attribute__((packed)) Local_00501f84_r1_4 {
    u8 unknown_0[0xb7];  // (not used here)
    u8 byte_b7;
};
GUEST_OFFSET(Local_00501f84_r1_4, byte_b7, 0xb7);

struct __attribute__((packed)) Local_00501f84_r1_5 {
    u8 unknown_0[0xb7];  // (not used here)
    u8 byte_b7;
};
GUEST_OFFSET(Local_00501f84_r1_5, byte_b7, 0xb7);

struct __attribute__((packed)) Local_00501f84_r1_6 {
    u8 unknown_0[0xb7];  // (not used here)
    u8 byte_b7;
};
GUEST_OFFSET(Local_00501f84_r1_6, byte_b7, 0xb7);


u32 f_00501f84(gptr<lyt__TextAreaMail> arg0, u32 r1, u32 r2, u32 r3) {
    gptr<Local_00501f84_r12_1> r12_1 = gptr<Local_00501f84_r12_1>(arg0->word_e48);
    r12_1->byte_b7 = u8(r1 | u32(r12_1->byte_b7) & 0xfeu);  // (from the original)
    gptr<Local_00501f84_r1_1> r1_1 = gptr<Local_00501f84_r1_1>(arg0->word_e4c);
    r1_1->byte_b7 = u8(u32(r1_1->byte_b7) & 0xfeu | r2);  // (from the original)
    gptr<Local_00501f84_r1_2> r1_2 = gptr<Local_00501f84_r1_2>(arg0->word_e50);
    r1_2->byte_b7 = u8(u32(r1_2->byte_b7) & 0xfeu | r2);  // (from the original)
    gptr<Local_00501f84_r1_3> r1_3 = gptr<Local_00501f84_r1_3>(arg0->word_e54);
    r1_3->byte_b7 = u8(u32(r1_3->byte_b7) & 0xfeu | r2);  // (from the original)
    gptr<Local_00501f84_r1_4> r1_4 = gptr<Local_00501f84_r1_4>(arg0->word_e58);
    r1_4->byte_b7 = u8(u32(r1_4->byte_b7) & 0xfeu | r2);  // (from the original)
    gptr<Local_00501f84_r1_5> r1_5 = gptr<Local_00501f84_r1_5>(arg0->word_e5c);
    r1_5->byte_b7 = u8(u32(r1_5->byte_b7) & 0xfeu | r2);  // (from the original)
    gptr<Local_00501f84_r1_6> r1_6 = gptr<Local_00501f84_r1_6>(arg0->word_e60);
    r1_6->byte_b7 = u8(r2 | u32(r1_6->byte_b7) & 0xfeu);  // (from the original)
    gptr<Local_00501f84_r0_1> r0_1 = gptr<Local_00501f84_r0_1>(arg0->word_e64);
    u32 r1_7 = u32(r0_1->byte_b7) & 0xfeu | r3;  // (from the original)
    r0_1->byte_b7 = u8(r1_7);
    guest::cpu()->r[1] = r1_7;
    return r0_1.addr();
}

}  // namespace d_00501f84
GUEST_EXPORT_FRAMED(0x00501f84, d_00501f84::f_00501f84, 0x10);  // pushes {r4} first, as the original

// f_00502030: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00502030 {

struct __attribute__((packed)) Object_00502030_0 {
    u8 unknown_0[0xa5c];  // (not used here)
    u32 word_a5c;
    u8 unknown_a60[0x14];  // (not used here)
    u32 word_a74;
};
GUEST_OFFSET(Object_00502030_0, word_a5c, 0xa5c);
GUEST_OFFSET(Object_00502030_0, word_a74, 0xa74);

inline constexpr guest::Function<0x005244d4, u32(u32)> call_005244d4;
inline constexpr guest::Function<0x005cc4a4, u32(u32)> call_005cc4a4;
inline constexpr guest::Function<0x005cc4d4, u32(u32)> call_005cc4d4;

u32 f_00502030(gptr<Object_00502030_0> arg0) {
    u32 r5_1 = 0u;
    u32 r0_2 = call_005244d4(arg0.addr() + 0xa50u);  // (from the original)
    if (r0_2 != 0) {
        u32 r0_3 = arg0->word_a5c;
        u32 r0_4 = arg0->word_a74;
        if (r0_3 - 3u >> 0x1f == (((r0_3 ^ 3u) & (r0_3 ^ r0_3 - 3u)) >> 0x1f)) {  // (from the original)
            call_005cc4a4(r0_4);
        } else {
            call_005cc4d4(r0_4);
        }
        r5_1 = 1u;
    }
    return r5_1;
}

}  // namespace d_00502030
GUEST_EXPORT_FRAMED(0x00502030, d_00502030::f_00502030, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_005022e0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005022e0 {

struct __attribute__((packed)) Object_005022e0_0 {
    u8 unknown_0[0x71c];  // (not used here)
    u32 word_71c;
    float float_720;
    u8 unknown_724[0x14c];  // (not used here)
    u32 word_870;
};
GUEST_OFFSET(Object_005022e0_0, word_71c, 0x71c);
GUEST_OFFSET(Object_005022e0_0, float_720, 0x720);
GUEST_OFFSET(Object_005022e0_0, word_870, 0x870);

struct __attribute__((packed)) Local_005022e0_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_005022e0_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_005022e0_ea_1, word_4, 0x4);

inline guest::global<u32, 0x005023c4> global_005023c4;
inline constexpr guest::Function<0x004b71c8, u32(u32, u32)> call_004b71c8;
inline constexpr guest::Function<0x00501f84, u32(u32, u32, u32, u32)> call_00501f84;

struct __attribute__((packed)) Frame_005022e0 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u8 unknown_c[0x4];  // (not read or written by name)
};
GUEST_OFFSET(Frame_005022e0, word_0, 0x0);
GUEST_OFFSET(Frame_005022e0, word_4, 0x4);
GUEST_OFFSET(Frame_005022e0, word_8, 0x8);
GUEST_SIZE(Frame_005022e0, 0x10);

void f_005022e0(gptr<Object_005022e0_0> arg0) {
    guest::StackFrameOf<Frame_005022e0> frame;  // the original's stack frame
    u32 r0_1 = arg0->word_71c;
    float S0_1 = 0.0f;
    gptr<Local_005022e0_ea_1> ea_1 = gptr<Local_005022e0_ea_1>(r0_1 + 0x28u);  // (from the original)
    u32 r1_1 = ea_1->word_0;
    u32 r2_1 = ea_1->word_4;
    frame->word_8 = *gptr<u32>(r0_1 + 0x30u);  // (from the original)
    float S1_1 = 3.0f;
    frame->word_0 = r1_1;
    frame->word_4 = r2_1;
    frame->word_0 = std::bit_cast<u32>(S0_1);
    float S0_2 = arg0->float_720;
    frame->word_4 = std::bit_cast<u32>(S0_2);
    u32 r0_2 = arg0->word_870;
    if (r0_2 != 0) {
        if (r0_2 == 1u) {
            guest::cpu()->s[0] = S0_2;
            guest::cpu()->s[1] = S1_1;
            call_00501f84(arg0.addr(), 1u, 0u, 1u);
            S0_2 = guest::cpu()->s[0];
            S1_1 = guest::cpu()->s[1];
        } else if (r0_2 == 2u) {
            float S0_3 = S0_2 - S1_1;
            frame->word_0 = *global_005023c4;
            frame->word_4 = std::bit_cast<u32>(S0_3);
            guest::cpu()->s[0] = S0_3;
            guest::cpu()->s[1] = S1_1;
            call_00501f84(arg0.addr(), 1u, 1u, 0u);
            S0_2 = guest::cpu()->s[0];
            S1_1 = guest::cpu()->s[1];
        }
    } else {
        float S0_4 = S0_2 + S1_1;
        frame->word_4 = std::bit_cast<u32>(S0_4);
        guest::cpu()->s[0] = S0_4;
        guest::cpu()->s[1] = S1_1;
        call_00501f84(arg0.addr(), 0u, 1u, 1u);
        S0_2 = guest::cpu()->s[0];
        S1_1 = guest::cpu()->s[1];
    }
    u32 r0_3 = arg0->word_71c;
    guest::cpu()->s[0] = S0_2;
    guest::cpu()->s[1] = S1_1;
    call_004b71c8(r0_3, frame.at(0).addr());
}

}  // namespace d_005022e0
GUEST_EXPORT_FRAMED(0x005022e0, d_005022e0::f_005022e0, 0x4010);  // pushes {r4, lr} first, as the original

// f_005023c8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005023c8 {

struct __attribute__((packed)) Local_005023c8_r0_11 {
    u8 unknown_0[0xb7];  // (not used here)
    u8 byte_b7;
};
GUEST_OFFSET(Local_005023c8_r0_11, byte_b7, 0xb7);

struct __attribute__((packed)) Local_005023c8_r0_12 {
    u8 unknown_0[0xb7];  // (not used here)
    u8 byte_b7;
};
GUEST_OFFSET(Local_005023c8_r0_12, byte_b7, 0xb7);

struct __attribute__((packed)) Local_005023c8_r0_2 {
    u8 unknown_0[0xb7];  // (not used here)
    u8 byte_b7;
};
GUEST_OFFSET(Local_005023c8_r0_2, byte_b7, 0xb7);

struct __attribute__((packed)) Local_005023c8_r4_1 {
    u32 word_0;
};
GUEST_OFFSET(Local_005023c8_r4_1, word_0, 0x0);

inline constexpr guest::Function<0x00501cc8, u32(u32, u32)> call_00501cc8;
inline constexpr guest::Function<0x005024fc, u32(u32, u32, u32, u32)> call_005024fc;
inline constexpr guest::Function<0x00568a80, u32(u32, u32, u32)> call_00568a80;
inline constexpr guest::Function<0x005e2c98, u32(u32, u32, u32)> call_005e2c98;

void f_005023c8(u32 r0, u32 r1, u32 r2) {
    u32 r5 = r0;
    call_005024fc(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    u32 r6 = 0x95e1c0u;  // (from the original)
    u32 r4 = 0u;
    do {
        gptr<Local_005023c8_r0_2> r0_2 = gptr<Local_005023c8_r0_2>(call_00568a80(r5 + 0x28u, gptr<u32>(r6)[r4], r2));  // (from the original)
        r2 = r5 + (r4 << 2);
        *gptr<u32>(r2 + 0xe48u) = r0_2.addr();  // (from the original)
        r4 += 1u;
        r0_2->byte_b7 = u8(u32(r0_2->byte_b7) & 0xfeu);  // (from the original)
        guest::preempt();
    } while (s32(r4) < 8);
    u32 r1_2 = *gptr<u32>(r5 + 0xe48u);  // (from the original)
    gptr<Local_005023c8_r4_1> r4_1 = gptr<Local_005023c8_r4_1>(r5 + 0xe48u);  // (from the original)
    call_005e2c98(r5 + 0xe68u, r1_2, 0u);  // (from the original)
    call_005e2c98(r5 + 0xf2cu, *gptr<u32>(r5 + 0xe4cu), 0u);  // (from the original)
    call_005e2c98(r5 + 0xff0u, *gptr<u32>(r5 + 0xe50u), 0u);  // (from the original)
    call_005e2c98(r5 + 0x10b4u, *gptr<u32>(r5 + 0xe54u), 0u);  // (from the original)
    call_005e2c98(r5 + 0x1178u, *gptr<u32>(r5 + 0xe58u), 0u);  // (from the original)
    call_005e2c98(r5 + 0x123cu, *gptr<u32>(r5 + 0xe5cu), 0u);  // (from the original)
    call_005e2c98(r5 + 0x1300u, *gptr<u32>(r5 + 0xe60u), 0u);  // (from the original)
    call_005e2c98(r5 + 0x13c4u, *gptr<u32>(r5 + 0xe64u), 0u);  // (from the original)
    *gptr<u32>(r5 + 0xa6cu) = *gptr<u32>(r4_1->word_0 + 0x48u);  // (from the original)
    call_00501cc8(r5, 1u);
    gptr<Local_005023c8_r0_11> r0_11 = gptr<Local_005023c8_r0_11>(r4_1->word_0);
    r0_11->byte_b7 = u8(u32(r0_11->byte_b7) & 0xfeu | 1u);  // (from the original)
    gptr<Local_005023c8_r0_12> r0_12 = gptr<Local_005023c8_r0_12>(*gptr<u32>(r5 + 0xe64u));  // (from the original)
    r0_12->byte_b7 = u8(u32(r0_12->byte_b7) & 0xfeu | 1u);  // (from the original)
}

}  // namespace d_005023c8
GUEST_EXPORT_FRAMED(0x005023c8, d_005023c8::f_005023c8, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_00504a34: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00504a34 {

struct __attribute__((packed)) Local_00504a34_r0_13 {
    u8 unknown_0[0xb7];  // (not used here)
    u8 byte_b7;
};
GUEST_OFFSET(Local_00504a34_r0_13, byte_b7, 0xb7);

struct __attribute__((packed)) Local_00504a34_r0_14 {
    u8 unknown_0[0xb7];  // (not used here)
    u8 byte_b7;
};
GUEST_OFFSET(Local_00504a34_r0_14, byte_b7, 0xb7);

struct __attribute__((packed)) Local_00504a34_r0_15 {
    u8 unknown_0[0xb7];  // (not used here)
    u8 byte_b7;
};
GUEST_OFFSET(Local_00504a34_r0_15, byte_b7, 0xb7);

struct __attribute__((packed)) Local_00504a34_r0_16 {
    u8 unknown_0[0xb7];  // (not used here)
    u8 byte_b7;
};
GUEST_OFFSET(Local_00504a34_r0_16, byte_b7, 0xb7);

struct __attribute__((packed)) Local_00504a34_r0_2 {
    u8 unknown_0[0xb7];  // (not used here)
    u8 byte_b7;
};
GUEST_OFFSET(Local_00504a34_r0_2, byte_b7, 0xb7);

inline guest::global<u32, 0x0094f6c4> global_0094f6c4;
inline constexpr guest::Function<0x00504c54, u32(u32, u32)> call_00504c54;
inline constexpr guest::Function<0x00567f34, u32(u32, u32)> call_00567f34;
inline constexpr guest::Function<0x00568a80, u32(u32, u32, u32, u32)> call_00568a80;
inline constexpr guest::Function<0x005e2c98, u32(u32, u32, u32)> call_005e2c98;

void f_00504a34(u32 r0, u32 r1_unused, u32 r2) {
    guest::StackFrame frame(0x18);  // the original's stack frame
    u32 r5 = r0;
    u32 r4 = 0u;
    u32 r6 = 0x95e1e0u;  // (from the original)
    do {
        u32 r0_1 = r5 + 0x28u;  // (from the original)
        u32 r1_1 = gptr<u32>(r6)[r4];
        gptr<Local_00504a34_r0_2> r0_2 = gptr<Local_00504a34_r0_2>(call_00568a80(r0_1, r1_1, r2, guest::cpu()->r[3]));
        r2 = r5 + (r4 << 2);
        *gptr<u32>(r2 + 0xc10u) = r0_2.addr();  // (from the original)
        r4 += 1u;
        r0_2->byte_b7 = u8(u32(r0_2->byte_b7) & 0xfeu);  // (from the original)
        guest::preempt();
    } while (s32(r4) < 0xa);  // (from the original)
    u32 r1_2 = *gptr<u32>(r5 + 0xc10u);  // (from the original)
    *gptr<u32>(r5 + 0x74cu) = *gptr<u32>(r1_2 + 0x48u);  // (from the original)
    call_005e2c98(r5 + 0xc38u, r1_2, 0u);  // (from the original)
    call_005e2c98(r5 + 0xcfcu, *gptr<u32>(r5 + 0xc14u), 0u);  // (from the original)
    call_005e2c98(r5 + 0xdc0u, *gptr<u32>(r5 + 0xc18u), 0u);  // (from the original)
    call_005e2c98(r5 + 0xe84u, *gptr<u32>(r5 + 0xc1cu), 0u);  // (from the original)
    call_005e2c98(r5 + 0xf48u, *gptr<u32>(r5 + 0xc20u), 0u);  // (from the original)
    call_005e2c98(r5 + 0x100cu, *gptr<u32>(r5 + 0xc24u), 0u);  // (from the original)
    call_005e2c98(r5 + 0x10d0u, *gptr<u32>(r5 + 0xc28u), 0u);  // (from the original)
    call_005e2c98(r5 + 0x1194u, *gptr<u32>(r5 + 0xc2cu), 0u);  // (from the original)
    call_005e2c98(r5 + 0x1258u, *gptr<u32>(r5 + 0xc30u), 0u);  // (from the original)
    call_005e2c98(r5 + 0x131cu, *gptr<u32>(r5 + 0xc34u), 0u);  // (from the original)
    *gptr<u32>(r5 + 0x750u) = *global_0094f6c4 + 0x434u;  // (from the original)
    call_00504c54(r5, 1u);
    gptr<Local_00504a34_r0_13> r0_13 = gptr<Local_00504a34_r0_13>(*gptr<u32>(r5 + 0xc28u));  // (from the original)
    r0_13->byte_b7 = u8(u32(r0_13->byte_b7) & 0xfeu | 1u);  // (from the original)
    gptr<Local_00504a34_r0_14> r0_14 = gptr<Local_00504a34_r0_14>(*gptr<u32>(r5 + 0xc2cu));  // (from the original)
    r0_14->byte_b7 = u8(u32(r0_14->byte_b7) & 0xfeu | 1u);  // (from the original)
    gptr<Local_00504a34_r0_15> r0_15 = gptr<Local_00504a34_r0_15>(*gptr<u32>(r5 + 0xc30u));  // (from the original)
    r0_15->byte_b7 = u8(u32(r0_15->byte_b7) & 0xfeu | 1u);  // (from the original)
    gptr<Local_00504a34_r0_16> r0_16 = gptr<Local_00504a34_r0_16>(*gptr<u32>(r5 + 0xc34u));  // (from the original)
    r0_16->byte_b7 = u8(u32(r0_16->byte_b7) & 0xfeu | 1u);  // (from the original)
    frame.release();
    call_00567f34((r5 + 0x400u) + 0x2f8u, 1u);  // (from the original)
    return;
}

}  // namespace d_00504a34
GUEST_EXPORT(0x00504a34, d_00504a34::f_00504a34);

// f_00504c54: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00504c54 {

struct __attribute__((packed)) Local_00504c54_r1_15 {
    u8 unknown_0[0xc10];  // (not used here)
    u32 word_c10;
};
GUEST_OFFSET(Local_00504c54_r1_15, word_c10, 0xc10);

struct __attribute__((packed)) Local_00504c54_r1_16 {
    float float_0;
    float float_4;
};
GUEST_OFFSET(Local_00504c54_r1_16, float_0, 0x0);
GUEST_OFFSET(Local_00504c54_r1_16, float_4, 0x4);

struct __attribute__((packed)) Local_00504c54_r1_2 {
    u8 unknown_0[0xc10];  // (not used here)
    u32 word_c10;
};
GUEST_OFFSET(Local_00504c54_r1_2, word_c10, 0xc10);

struct __attribute__((packed)) Local_00504c54_r1_3 {
    float float_0;
    float float_4;
};
GUEST_OFFSET(Local_00504c54_r1_3, float_0, 0x0);
GUEST_OFFSET(Local_00504c54_r1_3, float_4, 0x4);

inline constexpr guest::Function<0x00118b71, u32(u32)> call_00118b70;
inline constexpr guest::Function<0x001ae738, u32(u32, u32, u32, u32)> call_001ae738;
inline constexpr guest::Function<0x002fae84, u32(u32, u32, u32, u32)> call_002fae84;
inline constexpr guest::Function<0x005e2e50, u32(u32, u32)> call_005e2e50;
inline constexpr guest::Function<0x005e2f94, u32(u32)> call_005e2f94;
inline constexpr guest::Function<0x0070b1a4, u32(u32, u32)> call_0070b1a4;

struct __attribute__((packed)) Frame_00504c54 {
    u32 word_0;
    u32 word_4;
    u8 unknown_8[0x4];  // (not read or written by name)
};
GUEST_OFFSET(Frame_00504c54, word_0, 0x0);
GUEST_OFFSET(Frame_00504c54, word_4, 0x4);
GUEST_SIZE(Frame_00504c54, 0xc);

void f_00504c54(u32 r0, u32 r1, u32 r2, u32 r3, float S0, float S1, float S2) {
    guest::StackFrameOf<Frame_00504c54> frame;  // the original's stack frame
    float S0_2 = 0;
    float S1_2 = 0;
    float S0_33 = 0;
    float S1_33 = 0;
    u32 r4 = r0;
    u32 r6 = r1;
    u32 r0_1 = call_002fae84(r0, r1, r2, r3);
    u32 r0_3 = call_00118b70(r0_1 + 0x6e238u);  // (from the original)
    S2 = guest::cpu()->s[2];
    r2 = r0_3;
    if (s32(r0_3) >= 0xf) {  // (from the original)
        r2 = 0xeu;  // (from the original)
    }
    r0 = 0u;
    u32 r5 = r4 + 0x400u;  // (from the original)
    do {
        gptr<Local_00504c54_r1_2> r1_2 = gptr<Local_00504c54_r1_2>(r4 + (r0 << 2));
        S0_2 = std::bit_cast<float>(*gptr<u32>(r5 + 0x34cu));  // (from the original)
        r0 += 1u;
        S1_2 = std::bit_cast<float>(*gptr<u32>(r1_2->word_c10 + 0x4cu));  // (from the original)
        gptr<Local_00504c54_r1_3> r1_3 = gptr<Local_00504c54_r1_3>(r1_2->word_c10 + 0x48u);  // (from the original)
        r1_3->float_0 = S0_2;
        r1_3->float_4 = S1_2;
        guest::preempt();
    } while (s32(r0) < 6);
    frame->word_0 = r2 + 1u;
    frame->word_4 = r6;
    u32 r0_4 = r4 + 0x754u;  // (from the original)
    u32 r1_4 = *gptr<u32>(r4 + 0x750u);  // (from the original)
    guest::cpu()->s[0] = S0_2;
    guest::cpu()->s[1] = S1_2;
    guest::cpu()->s[2] = S2;
    call_001ae738(r0_4, r1_4, r4 + 0xc10u, r2 + 1u);  // (from the original)
    u32 r0_5 = call_0070b1a4(r0_4, 0u);
    u32 r0_6 = r4 + 0xc38u;  // (from the original)
    call_005e2e50(r0_6, r0_5);
    call_005e2f94(r0_6);
    u32 r0_7 = call_0070b1a4(r0_4, 1u);
    u32 r0_8 = r4 + 0xcfcu;  // (from the original)
    call_005e2e50(r0_8, r0_7);
    call_005e2f94(r0_8);
    u32 r0_9 = call_0070b1a4(r0_4, 2u);
    call_005e2e50(r4 + 0xdc0u, r0_9);  // (from the original)
    call_005e2f94(r4 + 0xdc0u);  // (from the original)
    u32 r0_12 = call_0070b1a4(r0_4, 3u);
    u32 r0_13 = r4 + 0xe84u;  // (from the original)
    call_005e2e50(r0_13, r0_12);
    call_005e2f94(r0_13);
    u32 r0_14 = call_0070b1a4(r0_4, 4u);
    u32 r0_15 = r4 + 0xf48u;  // (from the original)
    call_005e2e50(r0_15, r0_14);
    call_005e2f94(r0_15);
    u32 r0_16 = call_0070b1a4(r0_4, 5u);
    u32 r0_17 = r4 + 0x100cu;  // (from the original)
    call_005e2e50(r0_17, r0_16);
    call_005e2f94(r0_17);
    u32 r0_18 = call_0070b1a4(r0_4, 6u);
    u32 r0_19 = r4 + 0x10d0u;  // (from the original)
    call_005e2e50(r0_19, r0_18);
    call_005e2f94(r0_19);
    u32 r0_20 = call_0070b1a4(r0_4, 7u);
    u32 r0_21 = r4 + 0x1194u;  // (from the original)
    call_005e2e50(r0_21, r0_20);
    call_005e2f94(r0_21);
    u32 r0_22 = call_0070b1a4(r0_4, 8u);
    u32 r0_23 = r4 + 0x1258u;  // (from the original)
    call_005e2e50(r0_23, r0_22);
    call_005e2f94(r0_23);
    u32 r0_24 = call_0070b1a4(r0_4, 9u);
    u32 r0_25 = r4 + 0x131cu;  // (from the original)
    call_005e2e50(r0_25, r0_24);
    call_005e2f94(r0_25);
    S2 = 30.0f;
    r0 = 0u;
    do {
        gptr<Local_00504c54_r1_15> r1_15 = gptr<Local_00504c54_r1_15>(r4 + (r0 << 2));
        r0 += 1u;
        S0_33 = std::bit_cast<float>(*gptr<u32>(r5 + 0x34cu)) + S2;  // (from the original)
        S1_33 = std::bit_cast<float>(*gptr<u32>(r1_15->word_c10 + 0x4cu));  // (from the original)
        gptr<Local_00504c54_r1_16> r1_16 = gptr<Local_00504c54_r1_16>(r1_15->word_c10 + 0x48u);  // (from the original)
        r1_16->float_0 = S0_33;
        r1_16->float_4 = S1_33;
        guest::preempt();
    } while (s32(r0) < 6);
    guest::cpu()->s[0] = S0_33;
    guest::cpu()->s[1] = S1_33;
}

}  // namespace d_00504c54
GUEST_EXPORT_FRAMED(0x00504c54, d_00504c54::f_00504c54, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_005075a0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005075a0 {

inline constexpr u32 vtable_lyt__TextAreaOneLine = 0x00903304u;
inline constexpr guest::Function<0x0050bcb4, u32(u32, u32, u32, u32)> call_0050bcb4;

u32 f_005075a0(u32 r0, u32 r1) {
    u32 r0_1 = call_0050bcb4(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    *gptr<u32>(r0_1) = vtable_lyt__TextAreaOneLine;
    return r0_1;
}

}  // namespace d_005075a0
GUEST_EXPORT_FRAMED(0x005075a0, d_005075a0::f_005075a0, 0x4010);  // pushes {r4, lr} first, as the original

// f_005075cc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005075cc {

inline constexpr guest::Function<0x0050bdc8, u32(u32, u32, u32, u32)> call_0050bdc8;

u32 f_005075cc() {
    return call_0050bdc8(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_005075cc
GUEST_EXPORT(0x005075cc, d_005075cc::f_005075cc);

// f_00508fc8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00508fc8 {

struct __attribute__((packed)) Object_00508fc8_0 {
    u8 unknown_0[0x4c];  // (not used here)
    u32 word_4c;
};
GUEST_OFFSET(Object_00508fc8_0, word_4c, 0x4c);

struct __attribute__((packed)) Local_00508fc8_r1_1 {
    u8 unknown_0[0xb7];  // (not used here)
    u8 byte_b7;
};
GUEST_OFFSET(Local_00508fc8_r1_1, byte_b7, 0xb7);

inline constexpr guest::Function<0x004b4fc8, u32(u32, u32, u32, u32)> call_004b4fc8;

void f_00508fc8(gptr<Object_00508fc8_0> arg0, u32 r1, u32 r2, u32 r3) {
    u32 r0 = arg0.addr();
    u32 r5 = r0;
    u32 r0_1 = arg0->word_4c;
    u32 r4 = r2;
    u32 r0_2 = call_004b4fc8(r0_1, r1, r2, r3);
    r2 = r0_2 + 0xcu;  // (from the original)
    r0 = *gptr<u32>(r0_2 + 0x10u);  // (from the original)
    if (r0 != r2 + 4u) {
        do {
            gptr<Local_00508fc8_r1_1> r1_1 = gptr<Local_00508fc8_r1_1>(*gptr<u32>(r0 + 8u));
            u32 r3_1 = r1_1->byte_b7;
            u32 r12_1 = r3_1 & 1u;
            if (r12_1 != 0) {
                r12_1 = 1u;
            }
            if (r12_1 != r4) {
                r1_1->byte_b7 = u8(r3_1 & 0xfeu | r4);  // (from the original)
            }
            r0 = *gptr<u32>(r0);
            guest::preempt();
        } while (r0 != r2 + 4u);
    }
    *gptr<u32>(r5 + 0x184u) = 2;  // (from the original)
}

}  // namespace d_00508fc8
GUEST_EXPORT_FRAMED(0x00508fc8, d_00508fc8::f_00508fc8, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_005091fc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005091fc {

struct __attribute__((packed)) Object_005091fc_0 {
    u8 unknown_0[0x20];  // (not used here)
    u32 word_20;
    u32 word_24;
    u8 unknown_28[0x24];  // (not used here)
    u32 word_4c;
};
GUEST_OFFSET(Object_005091fc_0, word_20, 0x20);
GUEST_OFFSET(Object_005091fc_0, word_24, 0x24);
GUEST_OFFSET(Object_005091fc_0, word_4c, 0x4c);

inline constexpr guest::Function<0x0013e7d8, u32(u32, u32, u32)> call_0013e7d8;
inline constexpr guest::Function<0x002fd108, u32(u32, u32, u32)> call_002fd108;
inline constexpr guest::Function<0x004b4a84, u32(u32, u32)> call_004b4a84;
inline constexpr guest::Function<0x004b4b2c, u32(u32)> call_004b4b2c;
inline constexpr guest::Function<0x004b4fc8, u32(u32, u32)> call_004b4fc8;
inline constexpr guest::Function<0x0050c800, u32(u32, u32, u32, u32)> call_0050c800;
inline constexpr guest::Function<0x00567f20, u32(u32, u32, u32, u32)> call_00567f20;
inline constexpr guest::Function<0x00568b38, u32(u32, u32, u32)> call_00568b38;
inline constexpr guest::Function<0x0073be3c, u32(u32)> call_0073be3c;

u32 f_005091fc(gptr<Object_005091fc_0> arg0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x14);  // the original's stack frame
    u32 r6_1 = r2;
    u32 r5_1 = 0u;
    u32 r0_2 = call_00567f20(arg0->word_20, r5_1, r1, r3);
    if (r0_2 != 0) {
        if (r6_1 == 0) {
            call_004b4b2c(frame.at(0).addr());
            call_004b4a84(frame.at(0).addr(), r0_2);
            u32 r0_6 = call_0073be3c(frame.at(0).addr());
            r6_1 = r0_6;
        }
        u32 r0_8 = call_004b4fc8(arg0->word_4c, r6_1);
        if (r0_8 != 0) {
            u32 r0_10 = call_00568b38(arg0.addr() + 0x28u, r0_2, *gptr<u32>(arg0->word_20 + 4u));  // (from the original)
            u32 r0_11 = call_002fd108(0x3cu, arg0->word_24, 4u);  // (from the original)
            r5_1 = call_0050c800(r0_11, r0_10, r0_8, 0u);
            call_0013e7d8(arg0.addr() + 0x14u, arg0.addr() + 0x18u, r0_11 + 0x20u);  // (from the original)
        }
    }
    return r5_1;
}

}  // namespace d_005091fc
GUEST_EXPORT_FRAMED(0x005091fc, d_005091fc::f_005091fc, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_005095dc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005095dc {

struct __attribute__((packed)) Object_005095dc_0 {
    u8 unknown_0[0x20];  // (not used here)
    u32 word_20;
    u32 word_24;
    u8 unknown_28[0x14c];  // (not used here)
    u32 word_174;
    u8 unknown_178[0x8];  // (not used here)
    u32 word_180;
};
GUEST_OFFSET(Object_005095dc_0, word_20, 0x20);
GUEST_OFFSET(Object_005095dc_0, word_24, 0x24);
GUEST_OFFSET(Object_005095dc_0, word_174, 0x174);
GUEST_OFFSET(Object_005095dc_0, word_180, 0x180);

struct __attribute__((packed)) Local_005095dc_r0_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_005095dc_r0_1, word_0, 0x0);
GUEST_OFFSET(Local_005095dc_r0_1, word_4, 0x4);
GUEST_OFFSET(Local_005095dc_r0_1, word_8, 0x8);

inline guest::global<u8, 0x0095e0cd> global_0095e0cd;
inline guest::global<u32, 0x00ad6604> global_00ad6604;
inline constexpr guest::Function<0x0013e7d8, u32(u32, u32, u32, u32)> call_0013e7d8;
inline constexpr guest::Function<0x002fd108, u32(u32, u32, u32, u32)> call_002fd108;
inline constexpr guest::Function<0x005092c4, u32(u32, u32, u32)> call_005092c4;
inline constexpr guest::Function<0x00568c10, u32(u32, u32, u32, u32)> call_00568c10;
inline constexpr guest::Function<0x00569184, u32(u32, u32, u32, u32)> call_00569184;

u32 f_005095dc(gptr<Object_005095dc_0> arg0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x18);  // the original's stack frame
    u32 r0 = arg0.addr();
    u32 r2_1 = 0;
    u32 r4 = r0;
    gptr<Local_005095dc_r0_1> r0_1 = gptr<Local_005095dc_r0_1>(call_002fd108(0xcu, arg0->word_24, 4u, r3));  // (from the original)
    r0_1->word_0 = 0;
    u32 r1_2 = r0_1.addr() + 4u;
    r0_1->word_4 = r1_2;
    r0_1->word_8 = r1_2;
    arg0->word_20 = r1;
    arg0->word_174 = r0_1.addr();
    call_00569184(r4 + 0x28u, r2, r1, r3);  // (from the original)
    r3 = guest::cpu()->r[3];
    r1 = *global_00ad6604;
    if (!(r1 == 0xad6604u)) {  // (from the original)
        r2 = arg0->word_180;
        do {
            if (s32(r2) > s32(*gptr<u32>(r1 + 0x17cu))) {  // (from the original)
                r2_1 = r4 + 4u;
                goto L_509678;
            }
            r1 = *gptr<u32>(r1);
            guest::preempt();
        } while (r1 != 0xad6604u);  // (from the original)
    }
    r2_1 = r4 + 4u;
    r1 = 0xad6604u;  // (from the original)
L_509678:;
    call_0013e7d8(0xad6600u, r1, r2_1, r3);  // (from the original)
    if (*global_0095e0cd != 0) {
        call_005092c4(r4, *gptr<u32>(r4 + 0x48u), 0xad660cu);  // (from the original)
    }
    frame.release();
    return call_00568c10(r4 + 0x28u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
}

}  // namespace d_005095dc
GUEST_EXPORT(0x005095dc, d_005095dc::f_005095dc);

// f_00509c54: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00509c54 {

struct __attribute__((packed)) Local_00509c54_ea_6 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_00509c54_ea_6, word_0, 0x0);
GUEST_OFFSET(Local_00509c54_ea_6, word_4, 0x4);
GUEST_OFFSET(Local_00509c54_ea_6, word_8, 0x8);

struct __attribute__((packed)) Local_00509c54_r4_1 {
    u8 unknown_0[0x24];  // (not used here)
    u32 word_24;
    u8 unknown_28[0x160];  // (not used here)
    u8 byte_188;
    u8 byte_189;
    u8 byte_18a;
    u32 word_18b;
    u32 word_18f;
    u32 word_193;
    u32 word_197;
    u8 byte_19b;
    u32 word_19c;
    float float_1a0;
    u32 word_1a4;
    u32 word_1a8;
    u32 word_1ac;
};
GUEST_OFFSET(Local_00509c54_r4_1, word_24, 0x24);
GUEST_OFFSET(Local_00509c54_r4_1, byte_188, 0x188);
GUEST_OFFSET(Local_00509c54_r4_1, byte_189, 0x189);
GUEST_OFFSET(Local_00509c54_r4_1, byte_18a, 0x18a);
GUEST_OFFSET(Local_00509c54_r4_1, word_18b, 0x18b);
GUEST_OFFSET(Local_00509c54_r4_1, word_18f, 0x18f);
GUEST_OFFSET(Local_00509c54_r4_1, word_193, 0x193);
GUEST_OFFSET(Local_00509c54_r4_1, word_197, 0x197);
GUEST_OFFSET(Local_00509c54_r4_1, byte_19b, 0x19b);
GUEST_OFFSET(Local_00509c54_r4_1, word_19c, 0x19c);
GUEST_OFFSET(Local_00509c54_r4_1, float_1a0, 0x1a0);
GUEST_OFFSET(Local_00509c54_r4_1, word_1a4, 0x1a4);
GUEST_OFFSET(Local_00509c54_r4_1, word_1a8, 0x1a8);
GUEST_OFFSET(Local_00509c54_r4_1, word_1ac, 0x1ac);

inline constexpr u32 vtable_lyt__Object = 0x0090349cu;
inline constexpr guest::Function<0x0012c984, u32(u32, u32, u32, u32)> call_0012c984;
inline constexpr guest::Function<0x00569d50, u32(u32)> call_00569d50;

u32 f_00509c54(gptr<lyt__Object> arg0, u32 r1, u32 r2, u32 r3, float S0) {
    u32 r2_1 = arg0.addr() + 0x18u;  // (from the original)
    arg0->word_0 = vtable_lyt__Object;
    arg0->word_4 = 0;
    arg0->word_8 = 0;
    arg0->word_c = 0;
    arg0->word_10 = 0;
    arg0->word_18 = r2_1;
    arg0->word_14 = 0;
    arg0->word_1c = r2_1;
    arg0->word_20 = 0;
    arg0->word_24 = r3;
    u32 r0_2 = call_0012c984((((arg0.addr() + 0x1cu) + 4u) + 4u) + 4u, 0x90349cu, r2_1, r3);  // (from the original)
    gptr<Local_00509c54_r4_1> r4_1 = gptr<Local_00509c54_r4_1>(r0_2 - 0x28u);  // (from the original)
    *gptr<u32>(r4_1.addr() + 0x174u) = 0;  // (from the original)
    *gptr<u32>(r4_1.addr() + 0x178u) = 0;  // (from the original)
    gptr<Local_00509c54_ea_6> ea_6 = gptr<Local_00509c54_ea_6>(r4_1.addr() + 0x17cu);  // (from the original)
    ea_6->word_0 = r1;
    ea_6->word_4 = r2;
    ea_6->word_8 = 0;
    r4_1->byte_188 = 1;
    r4_1->byte_189 = 0;
    float S0_1 = 0.0f;
    r4_1->byte_18a = 0;
    r4_1->word_19c = 0;
    r4_1->float_1a0 = S0_1;
    r4_1->word_1a8 = r4_1.addr() + 0x1a8u;  // (from the original)
    r4_1->word_1a4 = 0;
    r4_1->word_1ac = r4_1.addr() + 0x1a8u;  // (from the original)
    u32 r0_3 = r4_1->word_24;
    if (r0_3 == 0) {
        guest::cpu()->s[0] = S0_1;
        u32 r0_4 = call_00569d50(r0_3);
        S0_1 = guest::cpu()->s[0];
        r4_1->word_24 = *gptr<u32>(r0_4 + 4u);
    }
    r4_1->word_18b = 0;
    r4_1->word_18f = 0;
    r4_1->word_193 = 0;
    r4_1->word_197 = 0;
    r4_1->byte_19b = 0;
    guest::cpu()->s[0] = S0_1;
    return r4_1.addr();
}

}  // namespace d_00509c54
GUEST_EXPORT_FRAMED(0x00509c54, d_00509c54::f_00509c54, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_0050a710: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0050a710 {

struct __attribute__((packed)) Local_0050a710_r0_1 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
    u8 unknown_8[0xc];  // (not used here)
    u32 word_14;
};
GUEST_OFFSET(Local_0050a710_r0_1, word_4, 0x4);
GUEST_OFFSET(Local_0050a710_r0_1, word_14, 0x14);

inline guest::global<u32, 0x0095e0fc> global_0095e0fc;
inline constexpr guest::Function<0x0050a5ac, u32(u32, u32, u32)> call_0050a5ac;
inline constexpr guest::Function<0x00522074, u32(u32, u32, u32, u32)> call_00522074;

u32 f_0050a710(u32 r0) {
    gptr<Local_0050a710_r0_1> r0_1 = gptr<Local_0050a710_r0_1>(*global_0095e0fc);
    u32 r1_1 = r0_1->word_14;
    if (r0_1.addr() != 0) {
        r0_1 = gptr<Local_0050a710_r0_1>(r0_1->word_4);
    }
    u32 r0_2 = call_00522074(r0_1.addr(), r1_1, 0u, guest::cpu()->r[3]);
    u32 r4_1 = r0_2;
    u32 r0_3 = call_0050a5ac(r0, r1_1, 0u);
    if (r0_3 != 0) {
        r4_1 -= 1u;
    }
    return r4_1;
}

}  // namespace d_0050a710
GUEST_EXPORT_FRAMED(0x0050a710, d_0050a710::f_0050a710, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0050bcb4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0050bcb4 {

struct __attribute__((packed)) Local_0050bcb4_r0_1 {
    u32 word_0;
    u8 unknown_4[0x1ac];  // (not used here)
    u32 word_1b0;
    u32 word_1b4;
    u32 word_1b8;
    u32 word_1bc;
    u32 word_1c0;
    u32 word_1c4;
    float float_1c8;
    u8 unknown_1cc[0x40];  // (not used here)
    u32 word_20c;
    u32 word_210;
    u8 unknown_214[0x404];  // (not used here)
    u32 word_618;
    u32 word_61c;
    u32 word_620;
    u8 byte_624;
    u8 byte_625;
};
GUEST_OFFSET(Local_0050bcb4_r0_1, word_0, 0x0);
GUEST_OFFSET(Local_0050bcb4_r0_1, word_1b0, 0x1b0);
GUEST_OFFSET(Local_0050bcb4_r0_1, word_1b4, 0x1b4);
GUEST_OFFSET(Local_0050bcb4_r0_1, word_1b8, 0x1b8);
GUEST_OFFSET(Local_0050bcb4_r0_1, word_1bc, 0x1bc);
GUEST_OFFSET(Local_0050bcb4_r0_1, word_1c0, 0x1c0);
GUEST_OFFSET(Local_0050bcb4_r0_1, word_1c4, 0x1c4);
GUEST_OFFSET(Local_0050bcb4_r0_1, float_1c8, 0x1c8);
GUEST_OFFSET(Local_0050bcb4_r0_1, word_20c, 0x20c);
GUEST_OFFSET(Local_0050bcb4_r0_1, word_210, 0x210);
GUEST_OFFSET(Local_0050bcb4_r0_1, word_618, 0x618);
GUEST_OFFSET(Local_0050bcb4_r0_1, word_61c, 0x61c);
GUEST_OFFSET(Local_0050bcb4_r0_1, word_620, 0x620);
GUEST_OFFSET(Local_0050bcb4_r0_1, byte_624, 0x624);
GUEST_OFFSET(Local_0050bcb4_r0_1, byte_625, 0x625);

struct __attribute__((packed)) Local_0050bcb4_r0_3 {
    u8 unknown_0[0x64];  // (not used here)
    u32 word_64;
    u8 unknown_68[0x40];  // (not used here)
    u32 word_a8;
    u8 unknown_ac[0x20];  // (not used here)
    u32 word_cc;
};
GUEST_OFFSET(Local_0050bcb4_r0_3, word_64, 0x64);
GUEST_OFFSET(Local_0050bcb4_r0_3, word_a8, 0xa8);
GUEST_OFFSET(Local_0050bcb4_r0_3, word_cc, 0xcc);

struct __attribute__((packed)) Local_0050bcb4_r4_1 {
    u8 unknown_0[0x1f0];  // (not used here)
    u32 word_1f0;
    u32 word_1f4;
    u32 word_1f8;
    u32 word_1fc;
    u32 word_200;
    u32 word_204;
    u32 word_208;
    u8 unknown_20c[0x4c8];  // (not used here)
    u32 word_6d4;
    u32 word_6d8;
    u32 word_6dc;
    u32 word_6e0;
    u32 word_6e4;
    u32 word_6e8;
    u32 word_6ec;
    u32 word_6f0;
};
GUEST_OFFSET(Local_0050bcb4_r4_1, word_1f0, 0x1f0);
GUEST_OFFSET(Local_0050bcb4_r4_1, word_1f4, 0x1f4);
GUEST_OFFSET(Local_0050bcb4_r4_1, word_1f8, 0x1f8);
GUEST_OFFSET(Local_0050bcb4_r4_1, word_1fc, 0x1fc);
GUEST_OFFSET(Local_0050bcb4_r4_1, word_200, 0x200);
GUEST_OFFSET(Local_0050bcb4_r4_1, word_204, 0x204);
GUEST_OFFSET(Local_0050bcb4_r4_1, word_208, 0x208);
GUEST_OFFSET(Local_0050bcb4_r4_1, word_6d4, 0x6d4);
GUEST_OFFSET(Local_0050bcb4_r4_1, word_6d8, 0x6d8);
GUEST_OFFSET(Local_0050bcb4_r4_1, word_6dc, 0x6dc);
GUEST_OFFSET(Local_0050bcb4_r4_1, word_6e0, 0x6e0);
GUEST_OFFSET(Local_0050bcb4_r4_1, word_6e4, 0x6e4);
GUEST_OFFSET(Local_0050bcb4_r4_1, word_6e8, 0x6e8);
GUEST_OFFSET(Local_0050bcb4_r4_1, word_6ec, 0x6ec);
GUEST_OFFSET(Local_0050bcb4_r4_1, word_6f0, 0x6f0);

inline constexpr u32 vtable_lyt__TextAreaTagProcessor = 0x009033c4u;
inline constexpr u32 vtable_lyt__TextArea = 0x009034ccu;
inline constexpr guest::Function<0x002f825c, u32(u32, u32)> call_002f825c;
inline constexpr guest::Function<0x00509c54, u32(u32, u32, u32, u32)> call_00509c54;
inline constexpr guest::Function<0x007e8be8, u32(u32)> call_007e8be8;

u32 f_0050bcb4(u32 r0, u32 r1, float S0) {
    gptr<Local_0050bcb4_r0_1> r0_1 = gptr<Local_0050bcb4_r0_1>(call_00509c54(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]));
    float S0_1 = 0.0f;
    r0_1->word_0 = vtable_lyt__TextArea;
    r0_1->word_1b0 = 0;
    r0_1->word_1b4 = 0;
    r0_1->word_1b8 = 0;
    r0_1->word_1bc = 0;
    r0_1->word_1c0 = 0;
    r0_1->word_1c4 = 0;
    r0_1->float_1c8 = S0_1;
    r0_1->word_20c = 0;
    r0_1->word_210 = 0;
    r0_1->word_618 = 0;
    r0_1->word_620 = r1;
    r0_1->word_61c = 0;
    r0_1->byte_624 = 0;
    r0_1->byte_625 = 0;
    guest::cpu()->s[0] = S0_1;
    gptr<Local_0050bcb4_r0_3> r0_3 = gptr<Local_0050bcb4_r0_3>(call_007e8be8(r0_1.addr() + 0x628u));  // (from the original)
    gptr<Local_0050bcb4_r4_1> r4_1 = gptr<Local_0050bcb4_r4_1>(r0_3.addr() - 0x628u);  // (from the original)
    r0_3->word_64 = vtable_lyt__TextAreaTagProcessor;
    r0_3->word_a8 = ~0u;
    r0_3->word_cc = 0;
    *gptr<u32>(r0_3.addr() - 0x45cu) = 0;  // (from the original)
    *gptr<u32>(r0_3.addr() - 0x458u) = 0;  // (from the original)
    *gptr<u32>(r0_3.addr() - 0x454u) = 0;  // (from the original)
    *gptr<u32>(r0_3.addr() - 0x450u) = 0;  // (from the original)
    *gptr<u32>(r0_3.addr() - 0x44cu) = 0;  // (from the original)
    *gptr<u32>(r0_3.addr() - 0x448u) = 0;  // (from the original)
    *gptr<u32>(r0_3.addr() - 0x444u) = 0;  // (from the original)
    *gptr<u32>(r0_3.addr() - 0x440u) = 0;  // (from the original)
    *gptr<u32>(r0_3.addr() - 0x43cu) = 0;  // (from the original)
    r4_1->word_1f0 = 0;
    r4_1->word_1f4 = 0;
    r4_1->word_1f8 = 0;
    r4_1->word_1fc = 0;
    r4_1->word_200 = 0;
    r4_1->word_204 = 0;
    r4_1->word_208 = 0;
    call_002f825c(r4_1.addr() + 0x214u, 0x402u);  // (from the original)
    r4_1->word_6d4 = 0;
    r4_1->word_6d8 = 0;
    r4_1->word_6dc = 0;
    r4_1->word_6e0 = 0;
    r4_1->word_6e4 = 0;
    r4_1->word_6e8 = 0;
    r4_1->word_6ec = 0;
    r4_1->word_6f0 = 0;
    return r4_1.addr();
}

}  // namespace d_0050bcb4
GUEST_EXPORT_FRAMED(0x0050bcb4, d_0050bcb4::f_0050bcb4, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0050c800: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0050c800 {

inline constexpr u32 vtable_lyt__AnmObject = 0x0090357cu;
inline constexpr guest::Function<0x0050c424, u32(u32, u32, u32, u32)> call_0050c424;

u32 f_0050c800(gptr<lyt__AnmObject> arg0, u32 r1, u32 r2, u32 r3) {
    float S0_1 = 1.0f;
    float S1_1 = 0.0f;
    arg0->word_4 = std::bit_cast<u32>(S0_1);
    arg0->word_8 = std::bit_cast<u32>(S1_1);
    arg0->word_c = std::bit_cast<u32>(S1_1);
    arg0->float_10 = S0_1;
    arg0->word_14 = 0;
    arg0->word_18 = 0;
    arg0->byte_1c = 0;
    arg0->byte_1d = 0;
    arg0->byte_1e = 0;
    arg0->word_20 = 0;
    arg0->word_0 = vtable_lyt__AnmObject;
    arg0->word_24 = 0;
    arg0->word_30 = 0;
    arg0->word_34 = 0;
    arg0->word_28 = r1;
    arg0->word_2c = r2;
    arg0->byte_38 = u8(r3);
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    call_0050c424(arg0.addr(), r1, r2, r3);
    return arg0.addr();
}

}  // namespace d_0050c800
GUEST_EXPORT_FRAMED(0x0050c800, d_0050c800::f_0050c800, 0x4010);  // pushes {r4, lr} first, as the original

// f_0050c9a4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0050c9a4 {

struct __attribute__((packed)) Object_0050c9a4_0 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u32 word_18;
    u32 word_1c;
    u32 word_20;
    u8 unknown_24[0x2];  // (not used here)
    u16 half_26;
    u32 word_28;
    u32 word_2c;
    u32 word_30;
};
GUEST_OFFSET(Object_0050c9a4_0, word_0, 0x0);
GUEST_OFFSET(Object_0050c9a4_0, word_4, 0x4);
GUEST_OFFSET(Object_0050c9a4_0, word_8, 0x8);
GUEST_OFFSET(Object_0050c9a4_0, word_c, 0xc);
GUEST_OFFSET(Object_0050c9a4_0, word_10, 0x10);
GUEST_OFFSET(Object_0050c9a4_0, word_14, 0x14);
GUEST_OFFSET(Object_0050c9a4_0, word_18, 0x18);
GUEST_OFFSET(Object_0050c9a4_0, word_1c, 0x1c);
GUEST_OFFSET(Object_0050c9a4_0, word_20, 0x20);
GUEST_OFFSET(Object_0050c9a4_0, half_26, 0x26);
GUEST_OFFSET(Object_0050c9a4_0, word_28, 0x28);
GUEST_OFFSET(Object_0050c9a4_0, word_2c, 0x2c);
GUEST_OFFSET(Object_0050c9a4_0, word_30, 0x30);


void f_0050c9a4(gptr<Object_0050c9a4_0> arg0) {
    arg0->word_0 = 0;
    arg0->word_4 = 0;
    arg0->word_8 = 0;
    arg0->word_c = 0;
    arg0->word_10 = 0;
    arg0->word_14 = 0;
    arg0->word_18 = 0;
    arg0->word_1c = 0;
    arg0->word_20 = 0;
    arg0->half_26 = u16(~0u);
    arg0->word_28 = 0;
    arg0->word_2c = 0;
    arg0->word_30 = 0;
    guest::cpu()->r[1] = 0u;
}

}  // namespace d_0050c9a4
GUEST_EXPORT(0x0050c9a4, d_0050c9a4::f_0050c9a4);

// f_0050ca3c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0050ca3c {

struct __attribute__((packed)) Object_0050ca3c_0 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u32 word_18;
    u32 word_1c;
    u32 word_20;
    u8 unknown_24[0x2];  // (not used here)
    u16 half_26;
    u32 word_28;
    u32 word_2c;
    u32 word_30;
};
GUEST_OFFSET(Object_0050ca3c_0, word_0, 0x0);
GUEST_OFFSET(Object_0050ca3c_0, word_4, 0x4);
GUEST_OFFSET(Object_0050ca3c_0, word_8, 0x8);
GUEST_OFFSET(Object_0050ca3c_0, word_c, 0xc);
GUEST_OFFSET(Object_0050ca3c_0, word_10, 0x10);
GUEST_OFFSET(Object_0050ca3c_0, word_14, 0x14);
GUEST_OFFSET(Object_0050ca3c_0, word_18, 0x18);
GUEST_OFFSET(Object_0050ca3c_0, word_1c, 0x1c);
GUEST_OFFSET(Object_0050ca3c_0, word_20, 0x20);
GUEST_OFFSET(Object_0050ca3c_0, half_26, 0x26);
GUEST_OFFSET(Object_0050ca3c_0, word_28, 0x28);
GUEST_OFFSET(Object_0050ca3c_0, word_2c, 0x2c);
GUEST_OFFSET(Object_0050ca3c_0, word_30, 0x30);


void f_0050ca3c(gptr<Object_0050ca3c_0> arg0) {
    arg0->half_26 = u16(~0u);
    arg0->word_28 = 0;
    arg0->word_2c = 0;
    arg0->word_30 = 0;
    arg0->word_0 = 0;
    arg0->word_4 = 0;
    arg0->word_8 = 0;
    arg0->word_c = 0;
    arg0->word_10 = 0;
    arg0->word_14 = 0;
    arg0->word_18 = 0;
    arg0->word_1c = 0;
    arg0->word_20 = 0;
    guest::cpu()->r[1] = 0u;
}

}  // namespace d_0050ca3c
GUEST_EXPORT(0x0050ca3c, d_0050ca3c::f_0050ca3c);

// f_0050cae0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0050cae0 {

inline constexpr u32 vtable_net__SearchDataResult = 0x009035dcu;
inline constexpr guest::Function<0x00301444, u32(u32, u32)> call_00301444;

u32 f_0050cae0(gptr<net__SearchDataResult> arg0) {
    arg0->word_10 = 0;
    arg0->word_0 = vtable_net__SearchDataResult;
    arg0->half_14 = u16(~0u);
    arg0->word_8 = 0;
    arg0->word_c = 0;
    call_00301444(arg0.addr() + 0x16u, 0x24u);  // (from the original)
    return arg0.addr();
}

}  // namespace d_0050cae0
GUEST_EXPORT_FRAMED(0x0050cae0, d_0050cae0::f_0050cae0, 0x4010);  // pushes {r4, lr} first, as the original

// f_0050cb9c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0050cb9c {

struct __attribute__((packed)) Object_0050cb9c_0 {
    u8 unknown_0[0x190];  // (not used here)
    u32 word_190;
};
GUEST_OFFSET(Object_0050cb9c_0, word_190, 0x190);


void f_0050cb9c(gptr<Object_0050cb9c_0> arg0, u32 r1) {
    u32 r2_1 = arg0->word_190;
    if (r2_1 >= 0x64u) {  // (from the original)
        return;
    }
    *gptr<u32>(arg0.addr() + (r2_1 << 2)) = r1;
    arg0->word_190 = arg0->word_190 + 1u;
}

}  // namespace d_0050cb9c
GUEST_EXPORT(0x0050cb9c, d_0050cb9c::f_0050cb9c);

// f_0050cc2c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0050cc2c {

struct __attribute__((packed)) Object_0050cc2c_0 {
    u8 unknown_0[0x190];  // (not used here)
    u32 word_190;
    u32 word_194;
};
GUEST_OFFSET(Object_0050cc2c_0, word_190, 0x190);
GUEST_OFFSET(Object_0050cc2c_0, word_194, 0x194);


void f_0050cc2c(gptr<Object_0050cc2c_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r1 = 0u;
    arg0->word_190 = r1;
    u32 r3 = r1;
    u32 r2 = r1;
    arg0->word_194 = r1;
    do {
        *gptr<u32>(r0 + (r3 << 2)) = r1;
        u32 r3_1 = r3 + 1u;
        r2 += 2u;
        *gptr<u32>(r0 + (r3_1 << 2)) = r1;
        r3 = r3_1 + 1u;
        guest::preempt();
    } while (r2 < 0x64u);  // (from the original)
}

}  // namespace d_0050cc2c
GUEST_EXPORT(0x0050cc2c, d_0050cc2c::f_0050cc2c);

// f_0050cc60: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0050cc60 {

inline guest::global<u32, 0x0095366c> global_0095366c;

u32 f_0050cc60() {
    u32 r0_1 = *global_0095366c;
    if (r0_1 - 5u != 0 && s32(r0_1) >= 5) {
        r0_1 = 5u;
    }
    return r0_1;
}

}  // namespace d_0050cc60
GUEST_EXPORT(0x0050cc60, d_0050cc60::f_0050cc60);

// f_0050cc78: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0050cc78 {

inline guest::global<u32, 0x00953670> global_00953670;

u32 f_0050cc78() {
    u32 r0_1 = *global_00953670;
    if (r0_1 == 2u || r0_1 == 1u) {
        return r0_1;
    } else {
    }
    return 0u;
}

}  // namespace d_0050cc78
GUEST_EXPORT(0x0050cc78, d_0050cc78::f_0050cc78);

// f_0050cd1c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0050cd1c {

struct __attribute__((packed)) Local_0050cd1c_r4_1 {
    u8 unknown_0[0x10];  // (not used here)
    u8 byte_10;
    u8 byte_11;
};
GUEST_OFFSET(Local_0050cd1c_r4_1, byte_10, 0x10);
GUEST_OFFSET(Local_0050cd1c_r4_1, byte_11, 0x11);

inline guest::global<u32, 0x009535e0> global_009535e0;
inline constexpr guest::Function<0x00135748, u32(u32, u32, u32, u32)> call_00135748;
inline constexpr guest::Function<0x001357ec, u32(u32, u32)> call_001357ec;
inline constexpr guest::Function<0x003452f0, u32(u32)> call_003452f0;
inline constexpr guest::Function<0x00345820, u32(u32)> call_00345820;

u32 f_0050cd1c(u32 r0_unused, u32 r1) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    gptr<Local_0050cd1c_r4_1> r4_1 = gptr<Local_0050cd1c_r4_1>(*global_009535e0);
    call_00135748(r4_1.addr(), r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 res_1 = u32(r4_1->byte_10) - 1u & 0xffu;  // (from the original)
    r4_1->byte_10 = u8(res_1);
    if (res_1 != 0) {
        frame.release();
        return call_001357ec(r4_1.addr(), guest::cpu()->r[1]);
    }
    u32 r0_1 = call_003452f0(res_1);
    call_00345820(r0_1);
    r4_1->byte_11 = 0;
    frame.release();
    return call_001357ec(r4_1.addr(), 0u);
}

}  // namespace d_0050cd1c
GUEST_EXPORT(0x0050cd1c, d_0050cd1c::f_0050cd1c);

// f_0050cd64: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0050cd64 {

struct __attribute__((packed)) Local_0050cd64_r4_1 {
    u8 unknown_0[0xc];  // (not used here)
    u32 word_c;
    u8 byte_10;
    u8 byte_11;
};
GUEST_OFFSET(Local_0050cd64_r4_1, word_c, 0xc);
GUEST_OFFSET(Local_0050cd64_r4_1, byte_10, 0x10);
GUEST_OFFSET(Local_0050cd64_r4_1, byte_11, 0x11);

inline guest::global<u32, 0x009535e0> global_009535e0;
inline constexpr guest::Function<0x00127cf8, u32(u32, u32)> call_00127cf8;
inline constexpr guest::Function<0x0012f154, u32(u32, u32)> call_0012f154;
inline constexpr guest::Function<0x0012f204, u32(u32, u32)> call_0012f204;
inline constexpr guest::Function<0x001391d8, u32(u32, u32, u32, u32)> call_001391d8;

struct __attribute__((packed)) Frame_0050cd64 {
    u32 word_0;
};
GUEST_OFFSET(Frame_0050cd64, word_0, 0x0);
GUEST_SIZE(Frame_0050cd64, 0x4);

void f_0050cd64(u32 r0_unused, u32 r1, u32 r2_unused, u32 r3) {
    guest::StackFrameOf<Frame_0050cd64> frame;  // the original's stack frame
    gptr<Local_0050cd64_r4_1> r4_1 = gptr<Local_0050cd64_r4_1>(0u);
    frame->word_0 = r3;
    if (*global_009535e0 == 0) {
        u32 r0_1 = call_001391d8(0x14u, r1, guest::cpu()->r[2], r3);  // (from the original)
        r1 = guest::cpu()->r[1];
        if (r0_1 == 0) {
            r4_1 = gptr<Local_0050cd64_r4_1>(0u);
        } else {
            r4_1 = gptr<Local_0050cd64_r4_1>(r0_1);
            *gptr<u32>(r0_1) = 0;
            call_0012f154(r0_1, r1);
            r4_1->word_c = 0;
            frame->word_0 = 0;
            u32 r0_3 = call_00127cf8(frame.at(0).addr(), 0u);
            if ((r0_3 >> 0x1f) == 0) {  // (from the original)
                r0_3 = 0u;
                *gptr<u32>(r4_1.addr() + 0xcu) = frame->word_0;  // (from the original)
            }
            r1 = r0_3 >> 0x1f;  // (from the original)
            if (r1 != 0) {
                call_0012f204(r0_3, r1);
                r1 = guest::cpu()->r[1];
            }
            r4_1->byte_10 = 0;
            r4_1->byte_11 = 0;
        }
        *global_009535e0 = r4_1.addr();
    }
    guest::cpu()->r[1] = r1;
}

}  // namespace d_0050cd64
GUEST_EXPORT_FRAMED(0x0050cd64, d_0050cd64::f_0050cd64, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_0050ce40: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0050ce40 {

struct __attribute__((packed)) Object_0050ce40_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_0050ce40_0, word_0, 0x0);

inline constexpr guest::Function<0x00344eb8, u32(u32, u32, u32, u32)> call_00344eb8;
inline constexpr guest::Function<0x00345030, u32(u32)> call_00345030;
inline constexpr guest::Function<0x0034512c, u32(u32)> call_0034512c;
inline constexpr guest::Function<0x00345180, u32(u32)> call_00345180;
inline constexpr guest::Function<0x00345278, u32(u32)> call_00345278;
inline constexpr guest::Function<0x003452f0, u32(u32)> call_003452f0;
inline constexpr guest::Function<0x003457e8, u32(u32)> call_003457e8;
inline constexpr guest::Function<0x00345820, u32(u32)> call_00345820;

struct __attribute__((packed)) Frame_0050ce40 {
    u8 unknown_0[0x200];  // (not read or written by name)
    u32 word_200;
    u8 unknown_204[0x8];  // (not read or written by name)
};
GUEST_OFFSET(Frame_0050ce40, word_200, 0x200);
GUEST_SIZE(Frame_0050ce40, 0x20c);

u32 f_0050ce40(gptr<Object_0050ce40_0> arg0, u32 r1) {
    guest::StackFrameOf<Frame_0050ce40> frame;  // the original's stack frame
    u32 r0_1 = call_00344eb8(arg0.addr(), r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    if ((r0_1 & 0x80000000u) >> 0x1f) {  // (from the original)
        if (arg0.addr() != 0) {
            arg0->word_0 = 0;
        }
        return 0u;
    }
    if (r1 != 0) {
        call_00345278(r1);
    }
    call_0034512c(frame.at(0).addr());
    u32 r0_4 = call_003457e8(frame.at(0).addr());
    if (s32(r0_4) >= 0) {
        return 1u;
    }
    call_00345030(frame.at(0x200).addr());  // (from the original)
    call_00345180(frame.at(0x204).addr());  // (from the original)
    if (arg0.addr() != 0) {
        arg0->word_0 = frame->word_200;
    }
    u32 r0_7 = 0xc8809ffau;  // (from the original)
    u32 zf_1 = r0_4 == r0_7;
    if (!zf_1) {
        r0_7 = 0xc9209ffbu;  // (from the original)
        zf_1 = r0_4 == r0_7;
    }
    if (!zf_1) {
        r0_7 = 0xe0a09ffcu;  // (from the original)
        zf_1 = r0_4 == r0_7;
    }
    if (!zf_1) {
        r0_7 = 0xc9209f84u;  // (from the original)
        if (r0_4 == r0_7) {
            if (arg0.addr() != 0) {
                r0_7 = 0x76bfu;  // (from the original)
                arg0->word_0 = r0_7;
            }
        } else {
            r0_7 = 0xc9209ccdu;  // (from the original)
            u32 zf_2 = r0_4 == r0_7;
            if (!zf_2) {
                r0_7 = 0xc8a09f85u;  // (from the original)
                zf_2 = r0_4 == r0_7;
            }
            if (!zf_2) {
                r0_7 = 0xc9209d2cu;  // (from the original)
                u32 zf_3 = r0_4 == r0_7;
                if (!zf_3) {
                    r0_7 -= 0xc5u;  // (from the original)
                    zf_3 = r0_4 == r0_7;
                }
                if (!zf_3) {
                    r0_7 = 0xc9209c66u;  // (from the original)
                    u32 zf_4 = r0_4 == r0_7;
                    if (!zf_4) {
                        r0_7 += 0x30u;  // (from the original)
                        zf_4 = r0_4 == r0_7;
                    }
                    if (!zf_4) {
                        r0_7 = 0xc9209c97u;  // (from the original)
                        u32 zf_5 = r0_4 == r0_7;
                        if (!zf_5) {
                            r0_7 += 1u;
                            zf_5 = r0_4 == r0_7;
                        }
                        if (!zf_5) {
                            r0_7 = 0xc9209cc9u;  // (from the original)
                            u32 zf_6 = r0_4 == r0_7;
                            if (!zf_6) {
                                r0_7 += 1u;
                                zf_6 = r0_4 == r0_7;
                            }
                            if (!zf_6) {
                                r0_7 = 0xf9609ff3u;  // (from the original)
                            }
                        }
                    }
                }
            }
        }
    }
    u32 r0_8 = call_003452f0(r0_7);
    call_00345820(r0_8);
    return 0u;
}

}  // namespace d_0050ce40
GUEST_EXPORT_FRAMED(0x0050ce40, d_0050ce40::f_0050ce40, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_0050d09c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0050d09c {

struct __attribute__((packed)) Local_0050d09c_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0050d09c_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_0050d09c_ea_1, word_4, 0x4);

inline constexpr guest::Function<0x00518468, u32(u32, u32, u32, u32)> call_00518468;

struct __attribute__((packed)) Frame_0050d09c {
    u32 word_0;
    u32 word_4;
    u8 unknown_8[0x4];  // (not read or written by name)
};
GUEST_OFFSET(Frame_0050d09c, word_0, 0x0);
GUEST_OFFSET(Frame_0050d09c, word_4, 0x4);
GUEST_SIZE(Frame_0050d09c, 0xc);

u32 f_0050d09c(gptr<UnknownStateA22020> arg0) {
    guest::StackFrameOf<Frame_0050d09c> frame;  // the original's stack frame
    u32 r0_1 = arg0->sub.addr();
    gptr<Local_0050d09c_ea_1> ea_1 = gptr<Local_0050d09c_ea_1>(frame.at(0x10).addr());  // (from the original)
    u32 r1_1 = ea_1->word_0;
    u32 r12_1 = ea_1->word_4;
    if (r0_1 != 0) {
        frame->word_0 = r1_1;
        frame->word_4 = r12_1;
        r0_1 = call_00518468(r0_1, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1_1 = guest::cpu()->r[1];
    }
    guest::cpu()->r[1] = r1_1;
    return r0_1;
}

}  // namespace d_0050d09c
GUEST_EXPORT_FRAMED(0x0050d09c, d_0050d09c::f_0050d09c, 0x4000);  // pushes {lr} first, as the original

// f_0050d10c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0050d10c {

inline constexpr guest::Function<0x0051868c, u32(u32, u32, u32, u32)> call_0051868c;

struct __attribute__((packed)) Frame_0050d10c {
    u32 word_0;
};
GUEST_OFFSET(Frame_0050d10c, word_0, 0x0);
GUEST_SIZE(Frame_0050d10c, 0x4);

u32 f_0050d10c(gptr<UnknownStateA22020> arg0, u32 r1_unused, u32 r2_unused, u32 r3) {
    guest::StackFrameOf<Frame_0050d10c> frame;  // the original's stack frame
    frame->word_0 = r3;
    u32 r0_1 = arg0->sub.addr();
    u32 r12_1 = *frame.at<u32>(8);
    if (r0_1 != 0) {
        frame->word_0 = r12_1;
        r0_1 = call_0051868c(r0_1, guest::cpu()->r[1], guest::cpu()->r[2], r3);
    }
    return r0_1;
}

}  // namespace d_0050d10c
GUEST_EXPORT_FRAMED(0x0050d10c, d_0050d10c::f_0050d10c, 0x4000);  // pushes {lr} first, as the original

// f_0050d128: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0050d128 {

struct __attribute__((packed)) Local_0050d128_r12_1 {
    float float_0;
    float float_4;
};
GUEST_OFFSET(Local_0050d128_r12_1, float_0, 0x0);
GUEST_OFFSET(Local_0050d128_r12_1, float_4, 0x4);

inline constexpr guest::Function<0x00518750, u32(u32, u32, u32, u32)> call_00518750;

struct __attribute__((packed)) Frame_0050d128 {
    float float_0;
    float float_4;
    u8 unknown_8[0x4];  // (not read or written by name)
};
GUEST_OFFSET(Frame_0050d128, float_0, 0x0);
GUEST_OFFSET(Frame_0050d128, float_4, 0x4);
GUEST_SIZE(Frame_0050d128, 0xc);

u32 f_0050d128(gptr<UnknownStateA22020> arg0) {
    guest::StackFrameOf<Frame_0050d128> frame;  // the original's stack frame
    gptr<Local_0050d128_r12_1> r12_1 = gptr<Local_0050d128_r12_1>(frame.at(0x10).addr());  // (from the original)
    u32 r0_1 = arg0->sub.addr();
    float S0_1 = r12_1->float_0;
    float S1_1 = r12_1->float_4;
    if (r0_1 != 0) {
        frame->float_0 = S0_1;
        frame->float_4 = S1_1;
        guest::cpu()->s[0] = S0_1;
        guest::cpu()->s[1] = S1_1;
        r0_1 = call_00518750(r0_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
        S0_1 = guest::cpu()->s[0];
        S1_1 = guest::cpu()->s[1];
    }
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    return r0_1;
}

}  // namespace d_0050d128
GUEST_EXPORT_FRAMED(0x0050d128, d_0050d128::f_0050d128, 0x4000);  // pushes {lr} first, as the original

// f_0050d150: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0050d150 {

struct __attribute__((packed)) Local_0050d150_r1_1 {
    float float_0;
    float float_4;
    float float_8;
};
GUEST_OFFSET(Local_0050d150_r1_1, float_0, 0x0);
GUEST_OFFSET(Local_0050d150_r1_1, float_4, 0x4);
GUEST_OFFSET(Local_0050d150_r1_1, float_8, 0x8);

inline constexpr guest::Function<0x00518848, u32(u32, u32, u32, u32)> call_00518848;

struct __attribute__((packed)) Frame_0050d150 {
    float float_0;
    float float_4;
    float float_8;
};
GUEST_OFFSET(Frame_0050d150, float_0, 0x0);
GUEST_OFFSET(Frame_0050d150, float_4, 0x4);
GUEST_OFFSET(Frame_0050d150, float_8, 0x8);
GUEST_SIZE(Frame_0050d150, 0xc);

u32 f_0050d150(gptr<UnknownStateA22020> arg0) {
    guest::StackFrameOf<Frame_0050d150> frame;  // the original's stack frame
    gptr<Local_0050d150_r1_1> r1_1 = gptr<Local_0050d150_r1_1>(frame.at(0x10).addr());  // (from the original)
    u32 r0_1 = arg0->sub.addr();
    float S0_1 = r1_1->float_0;
    float S1_1 = r1_1->float_4;
    float S2_1 = r1_1->float_8;
    if (r0_1 != 0) {
        frame->float_0 = S0_1;
        frame->float_4 = S1_1;
        frame->float_8 = S2_1;
        guest::cpu()->s[0] = S0_1;
        guest::cpu()->s[1] = S1_1;
        guest::cpu()->s[2] = S2_1;
        r0_1 = call_00518848(r0_1, r1_1.addr(), guest::cpu()->r[2], guest::cpu()->r[3]);
        r1_1 = gptr<Local_0050d150_r1_1>(guest::cpu()->r[1]);
        S0_1 = guest::cpu()->s[0];
        S1_1 = guest::cpu()->s[1];
    }
    guest::cpu()->r[1] = r1_1.addr();
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    return r0_1;
}

}  // namespace d_0050d150
GUEST_EXPORT_FRAMED(0x0050d150, d_0050d150::f_0050d150, 0x4000);  // pushes {lr} first, as the original

// f_0050d18c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0050d18c {

struct __attribute__((packed)) Local_0050d18c_r12_1 {
    float float_0;
    float float_4;
};
GUEST_OFFSET(Local_0050d18c_r12_1, float_0, 0x0);
GUEST_OFFSET(Local_0050d18c_r12_1, float_4, 0x4);

inline constexpr guest::Function<0x005189e4, u32(u32, u32, u32, u32)> call_005189e4;

struct __attribute__((packed)) Frame_0050d18c {
    float float_0;
    float float_4;
    u8 unknown_8[0x4];  // (not read or written by name)
};
GUEST_OFFSET(Frame_0050d18c, float_0, 0x0);
GUEST_OFFSET(Frame_0050d18c, float_4, 0x4);
GUEST_SIZE(Frame_0050d18c, 0xc);

u32 f_0050d18c(gptr<UnknownStateA22020> arg0) {
    guest::StackFrameOf<Frame_0050d18c> frame;  // the original's stack frame
    gptr<Local_0050d18c_r12_1> r12_1 = gptr<Local_0050d18c_r12_1>(frame.at(0x10).addr());  // (from the original)
    u32 r0_1 = arg0->sub.addr();
    float S0_1 = r12_1->float_0;
    float S1_1 = r12_1->float_4;
    if (r0_1 != 0) {
        frame->float_0 = S0_1;
        frame->float_4 = S1_1;
        guest::cpu()->s[0] = S0_1;
        guest::cpu()->s[1] = S1_1;
        r0_1 = call_005189e4(r0_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
        S0_1 = guest::cpu()->s[0];
        S1_1 = guest::cpu()->s[1];
    }
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    return r0_1;
}

}  // namespace d_0050d18c
GUEST_EXPORT_FRAMED(0x0050d18c, d_0050d18c::f_0050d18c, 0x4000);  // pushes {lr} first, as the original

// f_0050d1f4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0050d1f4 {

inline constexpr guest::Function<0x00518c3c, u32(u32, u32, u32, u32)> call_00518c3c;

struct __attribute__((packed)) Frame_0050d1f4 {
    u32 word_0;
};
GUEST_OFFSET(Frame_0050d1f4, word_0, 0x0);
GUEST_SIZE(Frame_0050d1f4, 0x4);

u32 f_0050d1f4(gptr<UnknownStateA22020> arg0, u32 r1_unused, u32 r2_unused, u32 r3) {
    guest::StackFrameOf<Frame_0050d1f4> frame;  // the original's stack frame
    frame->word_0 = r3;
    u32 r0_1 = arg0->sub.addr();
    u32 r12_1 = *frame.at<u32>(8);
    if (r0_1 != 0) {
        frame->word_0 = r12_1;
        r0_1 = call_00518c3c(r0_1, guest::cpu()->r[1], guest::cpu()->r[2], r3);
    }
    return r0_1;
}

}  // namespace d_0050d1f4
GUEST_EXPORT_FRAMED(0x0050d1f4, d_0050d1f4::f_0050d1f4, 0x4000);  // pushes {lr} first, as the original

// f_0050d210: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0050d210 {

struct __attribute__((packed)) Local_0050d210_r1_1 {
    float float_0;
    float float_4;
    float float_8;
    float float_c;
};
GUEST_OFFSET(Local_0050d210_r1_1, float_0, 0x0);
GUEST_OFFSET(Local_0050d210_r1_1, float_4, 0x4);
GUEST_OFFSET(Local_0050d210_r1_1, float_8, 0x8);
GUEST_OFFSET(Local_0050d210_r1_1, float_c, 0xc);

inline constexpr guest::Function<0x00518ca8, u32(u32, u32, u32, u32)> call_00518ca8;

struct __attribute__((packed)) Frame_0050d210 {
    float float_0;
    float float_4;
    float float_8;
    float float_c;
    u8 unknown_10[0x4];  // (not read or written by name)
};
GUEST_OFFSET(Frame_0050d210, float_0, 0x0);
GUEST_OFFSET(Frame_0050d210, float_4, 0x4);
GUEST_OFFSET(Frame_0050d210, float_8, 0x8);
GUEST_OFFSET(Frame_0050d210, float_c, 0xc);
GUEST_SIZE(Frame_0050d210, 0x14);

u32 f_0050d210(gptr<UnknownStateA22020> arg0) {
    guest::StackFrameOf<Frame_0050d210> frame;  // the original's stack frame
    gptr<Local_0050d210_r1_1> r1_1 = gptr<Local_0050d210_r1_1>(frame.at(0x18).addr());  // (from the original)
    u32 r0_1 = arg0->sub.addr();
    float S0_1 = r1_1->float_0;
    float S1_1 = r1_1->float_4;
    float S2_1 = r1_1->float_8;
    float S3_1 = r1_1->float_c;
    if (r0_1 != 0) {
        frame->float_0 = S0_1;
        frame->float_4 = S1_1;
        frame->float_8 = S2_1;
        frame->float_c = S3_1;
        guest::cpu()->s[0] = S0_1;
        guest::cpu()->s[1] = S1_1;
        r0_1 = call_00518ca8(r0_1, r1_1.addr(), guest::cpu()->r[2], guest::cpu()->r[3]);
        r1_1 = gptr<Local_0050d210_r1_1>(guest::cpu()->r[1]);
        S0_1 = guest::cpu()->s[0];
        S1_1 = guest::cpu()->s[1];
    }
    guest::cpu()->r[1] = r1_1.addr();
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    return r0_1;
}

}  // namespace d_0050d210
GUEST_EXPORT_FRAMED(0x0050d210, d_0050d210::f_0050d210, 0x4000);  // pushes {lr} first, as the original

// f_0050d274: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0050d274 {

struct __attribute__((packed)) Local_0050d274_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0050d274_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_0050d274_ea_1, word_4, 0x4);

inline constexpr guest::Function<0x00518edc, u32(u32, u32, u32, u32)> call_00518edc;

struct __attribute__((packed)) Frame_0050d274 {
    u32 word_0;
    u32 word_4;
    u8 unknown_8[0x4];  // (not read or written by name)
};
GUEST_OFFSET(Frame_0050d274, word_0, 0x0);
GUEST_OFFSET(Frame_0050d274, word_4, 0x4);
GUEST_SIZE(Frame_0050d274, 0xc);

u32 f_0050d274(gptr<UnknownStateA22020> arg0) {
    guest::StackFrameOf<Frame_0050d274> frame;  // the original's stack frame
    u32 r0_1 = arg0->sub.addr();
    gptr<Local_0050d274_ea_1> ea_1 = gptr<Local_0050d274_ea_1>(frame.at(0x10).addr());  // (from the original)
    u32 r1_1 = ea_1->word_0;
    u32 r12_1 = ea_1->word_4;
    if (r0_1 != 0) {
        frame->word_0 = r1_1;
        frame->word_4 = r12_1;
        r0_1 = call_00518edc(r0_1, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1_1 = guest::cpu()->r[1];
    }
    guest::cpu()->r[1] = r1_1;
    return r0_1;
}

}  // namespace d_0050d274
GUEST_EXPORT_FRAMED(0x0050d274, d_0050d274::f_0050d274, 0x4000);  // pushes {lr} first, as the original

// f_0050d478: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0050d478 {

struct __attribute__((packed)) Object_0050d478_0 {
    u8 unknown_0[0xb8];  // (not used here)
    u32 word_b8;
};
GUEST_OFFSET(Object_0050d478_0, word_b8, 0xb8);

inline constexpr guest::Function<0x0013138c, u32(u32, u32, u32, u32)> call_0013138c;
inline constexpr guest::Function<0x002ffb64, u32(u32)> call_002ffb64;
inline constexpr guest::Function<0x005197dc, u32(u32)> call_005197dc;
inline constexpr guest::Function<0x00747438, u32(u32, u32)> call_00747438;

void f_0050d478(gptr<Object_0050d478_0> arg0, u32 r1) {
    u32 r0_1 = arg0->word_b8;
    if (r0_1 == 0) {
        return;
    }
    call_0013138c(r0_1, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_3 = call_00747438(arg0->word_b8, 0u);
    if (r0_3 != 0) {
        return;
    }
    u32 r0_4 = arg0->word_b8;
    if (r0_4 == 0) {
        arg0->word_b8 = 0;
        return;
    }
    call_005197dc(r0_4);
    call_002ffb64(r0_4);
    arg0->word_b8 = 0;
}

}  // namespace d_0050d478
GUEST_EXPORT_FRAMED(0x0050d478, d_0050d478::f_0050d478, 0x4010);  // pushes {r4, lr} first, as the original

// f_0050d8f0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0050d8f0 {

inline guest::global<u32, 0x009535e4> global_009535e4;
inline constexpr guest::Function<0x0013e358, u32(u32)> call_0013e358;
inline constexpr guest::Function<0x0034d018, u32(u32, u32, u32, u32)> call_0034d018;
inline constexpr guest::Function<0x007284d8, u32(u32, u32, u32, u32)> call_007284d8;

u32 f_0050d8f0() {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 r4_1 = *global_009535e4;
    u32 r0_1 = call_007284d8(r4_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0_1 != 0) {
        r0_1 = call_0013e358(r4_1);
    }
    frame.release();
    return call_0034d018(r0_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0050d8f0
GUEST_EXPORT(0x0050d8f0, d_0050d8f0::f_0050d8f0);

// f_0050d91c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0050d91c {

inline constexpr u32 vtable_sead__SafeStringBase_char_ = 0x009047f8u;
inline guest::global<u32, 0x00952c9c> global_00952c9c;
inline guest::global<u32, 0x009535e4> global_009535e4;
inline guest::global<u32, 0x009535e8> global_009535e8;
inline constexpr guest::Function<0x002f6e78, u32(u32, u32, u32, u32)> call_002f6e78;
inline constexpr guest::Function<0x002f825c, u32(u32, u32)> call_002f825c;
inline constexpr guest::Function<0x002fd108, u32(u32, u32, u32)> call_002fd108;
inline constexpr guest::Function<0x0034cd5c, u32(u32)> call_0034cd5c;
inline constexpr guest::Function<0x0034d018, u32(u32)> call_0034d018;
inline constexpr guest::Function<0x0034ed20, u32(u32)> call_0034ed20;

struct __attribute__((packed)) Frame_0050d91c {
    u32 word_0;
    u8 unknown_4[0x4];  // (not read or written by name)
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Frame_0050d91c, word_0, 0x0);
GUEST_OFFSET(Frame_0050d91c, word_8, 0x8);
GUEST_OFFSET(Frame_0050d91c, word_c, 0xc);
GUEST_SIZE(Frame_0050d91c, 0x10);

void f_0050d91c(u32 r0_unused, u32 r1) {
    guest::StackFrameOf<Frame_0050d91c> frame;  // the original's stack frame
    if (*global_009535e4 == 0) {
        u32 r4_1 = *global_00952c9c;
        frame->word_c = 0x50d9b4;  // (from the original)
        frame->word_8 = vtable_sead__SafeStringBase_char_;
        frame->word_0 = 0;
        u32 r0_1 = call_002f6e78(0x28000u, frame.at(8).addr(), r4_1, 1u);  // (from the original)
        *global_009535e8 = r0_1;
        call_0034cd5c(0x9535ecu);  // (from the original)
        u32 r0_2 = call_002fd108(0x8bcu, r4_1, 4u);  // (from the original)
        call_002f825c(r0_2, 0x8bcu);  // (from the original)
        *global_009535e4 = call_0034ed20(r0_2);
        call_0034d018(r0_2);
        r1 = guest::cpu()->r[1];
    }
    guest::cpu()->r[1] = r1;
}

}  // namespace d_0050d91c
GUEST_EXPORT_FRAMED(0x0050d91c, d_0050d91c::f_0050d91c, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0050d9c4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0050d9c4 {

struct __attribute__((packed)) Object_0050d9c4_0 {
    u8 unknown_0[0x210];  // (not used here)
    u32 word_210;
    u8 unknown_214[0x1ac];  // (not used here)
    u32 word_3c0;
};
GUEST_OFFSET(Object_0050d9c4_0, word_210, 0x210);
GUEST_OFFSET(Object_0050d9c4_0, word_3c0, 0x3c0);

struct __attribute__((packed)) Object_0050d9c4_3 {
    u8 unknown_0[0x35];  // (not used here)
    u8 byte_35;
};
GUEST_OFFSET(Object_0050d9c4_3, byte_35, 0x35);

inline constexpr guest::Function<0x0034d134, u32(u32, u32, u32, u32)> call_0034d134;
inline constexpr guest::Function<0x00350454, u32(u32, u32, u32)> call_00350454;
inline constexpr guest::Function<0x003504e8, u32(u32, u32)> call_003504e8;
inline constexpr guest::Function<0x00728014, u32(u32, u32, u32, u32)> call_00728014;
inline constexpr guest::Function<0x0072813c, u32(u32, u32, u32, u32)> call_0072813c;
inline constexpr guest::Function<0x007286a0, u32(u32, u32, u32, u32)> call_007286a0;
inline constexpr guest::Function<0x0072871c, u32(u32, u32, u32)> call_0072871c;
inline constexpr guest::Function<0x0072879c, u32(u32, u32, u32)> call_0072879c;
inline constexpr guest::Function<0x007287cc, u32(u32, u32, u32)> call_007287cc;

struct __attribute__((packed)) Frame_0050d9c4 {
    u32 word_0;
    u32 word_4;
    u8 unknown_8[0x24];  // (not read or written by name)
};
GUEST_OFFSET(Frame_0050d9c4, word_0, 0x0);
GUEST_OFFSET(Frame_0050d9c4, word_4, 0x4);
GUEST_SIZE(Frame_0050d9c4, 0x2c);

u32 f_0050d9c4(gptr<Object_0050d9c4_0> arg0, u32 r1, u32 r2, gptr<Object_0050d9c4_3> arg3) {
    guest::StackFrameOf<Frame_0050d9c4> frame;  // the original's stack frame
    u32 r0 = arg0.addr();
    u32 r3 = arg3.addr();
    u32 r0_4 = 0;
    u32 r2_3 = 0;
    u32 r0_5 = 0;
    u32 r2_6 = 0;
    u32 r1_5 = 0;
    u32 r3_6 = 0;
    u32 r2_7 = 0;
    u32 r0_8 = 0;
    u32 res_1 = 0;
    u32 r1_6 = 0;
    u32 r6_1 = *frame.at<u32>(0x4c);  // (from the original)
    u32 r9_1 = *frame.at<u32>(0x48);  // (from the original)
    if (r2 < (r1 == 0 ? arg0->word_210 : arg0->word_3c0)) {
        u32 r0_1 = call_0072813c(r0, r1, r2, r3);
        if (r6_1 >= r0_1) {
            call_003504e8(frame.at(8).addr(), guest::cpu()->r[1]);
            call_00728014(r0, frame.at(8).addr(), r1, r2);
            frame->word_4 = frame.at(8).addr();
            frame->word_0 = r1;
            u32 r0_3 = call_0034d134(r0, r3, r9_1, r6_1);
            u32 r1_3 = r0_3 & 0x80000000u;  // (from the original)
            if (r1_3 >> 0x1f) {  // (from the original)
                goto L_50dae4;
            }
            r0_4 = frame.at(0x10).addr();  // (from the original)
            call_003504e8(r0_4, r1_3);
            r2_3 = frame.at(0x10).addr();  // (from the original)
            r0_5 = frame.at(0x18).addr();  // (from the original)
            call_00350454(r0_5, r3, r2_3);
            if (arg3->byte_35 == 0) {
                call_003504e8(frame.at(0x18).addr(), guest::cpu()->r[1]);  // (from the original)
                call_007287cc(frame.at(0x20).addr(), r3, frame.at(0x18).addr());  // (from the original)
            }
            r2_6 = frame.at(0x18).addr();  // (from the original)
            r1_5 = frame.at(4).addr();
            call_0072871c(r3, r1_5, r2_6);
            r3_6 = frame.at(0x18).addr();  // (from the original)
            r2_7 = frame.at(4).addr();
            r0_8 = call_007286a0(r3, 2u, r2_7, r3_6);
            res_1 = r0_8 & 0x80000000u;  // (from the original)
            if (!(res_1 >> 0x1f) && frame->word_4 > 0x10u) {  // (from the original)
                frame->word_4 = 0x10;  // (from the original)
            }
            r1_6 = frame.at(0x18).addr();  // (from the original)
            call_0072879c(r3, r1_6, 0x10u);  // (from the original)
            return 0u;
L_50dae4:;
            if (r0_3 == 0xc8a10bf0u) {  // (from the original)
                return 1u;
            }
        }
    }
    return 8u;
}

}  // namespace d_0050d9c4
GUEST_EXPORT_FRAMED(0x0050d9c4, d_0050d9c4::f_0050d9c4, 0x43f0);  // pushes {r4, r5, r6, r7, r8, r9, lr} first, as the original

// f_0050db18: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0050db18 {

struct __attribute__((packed)) Object_0050db18_1 {
    u32 word_0;
    u16 half_4;
    u8 byte_6;
    u8 byte_7;
    u8 byte_8;
    u8 byte_9;
};
GUEST_OFFSET(Object_0050db18_1, word_0, 0x0);
GUEST_OFFSET(Object_0050db18_1, half_4, 0x4);
GUEST_OFFSET(Object_0050db18_1, byte_6, 0x6);
GUEST_OFFSET(Object_0050db18_1, byte_7, 0x7);
GUEST_OFFSET(Object_0050db18_1, byte_8, 0x8);
GUEST_OFFSET(Object_0050db18_1, byte_9, 0x9);

struct __attribute__((packed)) Local_0050db18_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Local_0050db18_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_0050db18_ea_1, word_4, 0x4);
GUEST_OFFSET(Local_0050db18_ea_1, word_8, 0x8);
GUEST_OFFSET(Local_0050db18_ea_1, word_c, 0xc);

inline constexpr guest::Function<0x0034cf7c, u32(u32, u32)> call_0034cf7c;
inline constexpr guest::Function<0x0034d184, u32(u32, u32, u32, u32)> call_0034d184;
inline constexpr guest::Function<0x0034fef8, u32(u32, u32, u32, u32)> call_0034fef8;
inline constexpr guest::Function<0x0034ff6c, u32(u32, u32, u32, u32)> call_0034ff6c;
inline constexpr guest::Function<0x003501c8, u32(u32, u32, u32)> call_003501c8;
inline constexpr guest::Function<0x00350408, u32(u32, u32, u32, u32)> call_00350408;
inline constexpr guest::Function<0x00350454, u32(u32, u32, u32)> call_00350454;
inline constexpr guest::Function<0x003504e8, u32(u32, u32)> call_003504e8;
inline constexpr guest::Function<0x007286a0, u32(u32, u32, u32, u32)> call_007286a0;
inline constexpr guest::Function<0x0072871c, u32(u32, u32, u32)> call_0072871c;
inline constexpr guest::Function<0x0072879c, u32(u32, u32, u32)> call_0072879c;
inline constexpr guest::Function<0x007287cc, u32(u32, u32, u32)> call_007287cc;

struct __attribute__((packed)) Frame_0050db18 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u8 unknown_c[0x39];  // (not read or written by name)
    u8 byte_45;
    u8 unknown_46[0x38];  // (not read or written by name)
    u16 half_7e;
    u8 unknown_80[0x114];  // (not read or written by name)
};
GUEST_OFFSET(Frame_0050db18, word_0, 0x0);
GUEST_OFFSET(Frame_0050db18, word_4, 0x4);
GUEST_OFFSET(Frame_0050db18, word_8, 0x8);
GUEST_OFFSET(Frame_0050db18, byte_45, 0x45);
GUEST_OFFSET(Frame_0050db18, half_7e, 0x7e);
GUEST_SIZE(Frame_0050db18, 0x194);

u32 f_0050db18(u32 r0, gptr<Object_0050db18_1> arg1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_0050db18> frame;  // the original's stack frame
    gptr<Local_0050db18_ea_1> ea_1 = gptr<Local_0050db18_ea_1>(frame.at(0x1b8).addr());  // (from the original)
    u32 r5_1 = ea_1->word_0;
    u32 r6_1 = ea_1->word_4;
    u32 r7_1 = ea_1->word_8;
    u32 r8_1 = ea_1->word_c;
    call_00350408(frame.at(0x10).addr(), arg1.addr(), r2, r3);  // (from the original)
    u32 r0_2 = call_0034cf7c(0x198du, 0u);  // (from the original)
    u32 r3_2 = arg1->byte_8;
    u32 r2_2 = arg1->byte_7;
    frame->word_0 = u32(arg1->byte_6);
    frame->word_4 = r2_2;
    frame->word_8 = r3_2;
    u32 r3_3 = arg1->byte_9;
    u32 r0_4 = call_0034fef8(frame.at(0x10).addr(), r0_2, arg1->word_0, r3_3);  // (from the original)
    u32 r1_1 = guest::cpu()->r[1];
    if (!((r0_4 & 0x80000000u) >> 0x1f)) {  // (from the original)
        if (r2 != 0 && r3 != 0) {
            u32 r0_6 = call_003501c8(frame.at(0x10).addr(), r2, r3);  // (from the original)
            r1_1 = guest::cpu()->r[1];
            if ((r0_6 & 0x80000000u) >> 0x1f) {  // (from the original)
                return 0xcu;  // (from the original)
            }
        } else if (arg1->byte_6 != 1u) {
            guest::cpu()->r[1] = r1_1;
            return 0xcu;  // (from the original)
        }
        if (r5_1 != 0 && r6_1 != 0) {
            u32 r0_8 = call_0034ff6c(frame.at(0x10).addr(), 2u, r6_1, r5_1);  // (from the original)
            r1_1 = guest::cpu()->r[1];
            if (!((r0_8 & 0x80000000u) >> 0x1f)) {  // (from the original)
                if (r7_1 != 0 && r8_1 != 0) {
                    u32 r0_10 = call_0034ff6c(frame.at(0x10).addr(), 4u, r8_1, r7_1);  // (from the original)
                    r1_1 = guest::cpu()->r[1];
                    if ((r0_10 & 0x80000000u) >> 0x1f) {  // (from the original)
                        return 0xcu;  // (from the original)
                    }
                }
                u32 r1_2 = arg1->half_4;
                frame->half_7e = u16(r1_2);
                u32 r4_1 = frame.at(0x10).addr();  // (from the original)
                call_003504e8(frame.at(8).addr(), r1_2);
                call_00350454(frame.at(0x180).addr(), r4_1, frame.at(8).addr());  // (from the original)
                if (frame->byte_45 == 0) {
                    call_003504e8(frame.at(0x180).addr(), guest::cpu()->r[1]);  // (from the original)
                    call_007287cc(frame.at(0x188).addr(), r4_1, frame.at(0x180).addr());  // (from the original)
                }
                call_0072871c(r4_1, frame.at(4).addr(), frame.at(0x180).addr());  // (from the original)
                u32 r0_15 = call_007286a0(r4_1, 2u, frame.at(4).addr(), frame.at(0x180).addr());  // (from the original)
                if (!((r0_15 & 0x80000000u) >> 0x1f) && frame->word_4 > 0x10u) {  // (from the original)
                    frame->word_4 = 0x10;  // (from the original)
                }
                call_0072879c(r4_1, frame.at(0x180).addr(), 0x10u);  // (from the original)
                call_003504e8(frame.at(0x178).addr(), guest::cpu()->r[1]);  // (from the original)
                u32 r0_17 = call_0034d184(r0, frame.at(0x10).addr(), 1u, frame.at(0x178).addr());  // (from the original)
                r1_1 = r0_17 & 0x80000000u;  // (from the original)
                if (s32(r1_1) >= 0) {
                    guest::cpu()->r[1] = r1_1;
                    return 0u;
                }
                r1_1 = 0xe0a1086cu;  // (from the original)
                if (r0_17 == r1_1) {
                    guest::cpu()->r[1] = r1_1;
                    return 9u;
                }
                r1_1 = 0xe0a1086du;  // (from the original)
                if (r0_17 == r1_1) {
                    guest::cpu()->r[1] = r1_1;
                    return 0xau;  // (from the original)
                }
                r1_1 = 0xc8810beau;  // (from the original)
                if (r0_17 != r1_1) {
                    r1_1 = 0xc8e10865u;  // (from the original)
                    u32 zf_1 = r0_17 == r1_1;
                    if (!zf_1) {
                        r1_1 += 1u;
                        zf_1 = r0_17 == r1_1;
                    }
                    if (zf_1) {
                        guest::cpu()->r[1] = r1_1;
                        return 0xbu;  // (from the original)
                    }
                    r1_1 = 0xc8a10bf0u;  // (from the original)
                    if (r0_17 == r1_1) {
                        guest::cpu()->r[1] = r1_1;
                        return 1u;
                    }
                    r1_1 = 0xc8e10869u;  // (from the original)
                    u32 zf_2 = r0_17 == r1_1;
                    if (!zf_2) {
                        r1_1 = 0xc8810befu;  // (from the original)
                        zf_2 = r0_17 == r1_1;
                    }
                    if (!zf_2) {
                        r1_1 = 0xe0e10beeu;  // (from the original)
                    }
                }
            }
        }
    }
    guest::cpu()->r[1] = r1_1;
    return 0xcu;  // (from the original)
}

}  // namespace d_0050db18
GUEST_EXPORT_FRAMED(0x0050db18, d_0050db18::f_0050db18, 0x4ff0);  // pushes {r4, r5, r6, r7, r8, r9, r10, r11, lr} first, as the original

// f_0050dd68: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0050dd68 {

inline constexpr guest::Function<0x0034d774, u32(u32, u32, u32)> call_0034d774;
inline constexpr guest::Function<0x003504e8, u32(u32, u32, u32, u32)> call_003504e8;
inline constexpr guest::Function<0x00728014, u32(u32, u32, u32, u32)> call_00728014;

u32 f_0050dd68(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    call_003504e8(frame.at(0).addr(), r1, r2, r3);
    call_00728014(r0, frame.at(0).addr(), r1, r2);
    u32 r0_2 = call_0034d774(r0, r1, frame.at(0).addr());
    return s32(r0_2) >= 0;
}

}  // namespace d_0050dd68
GUEST_EXPORT_FRAMED(0x0050dd68, d_0050dd68::f_0050dd68, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0050ddc0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0050ddc0 {

inline constexpr guest::Function<0x0034e5e4, u32(u32, u32, u32, u32)> call_0034e5e4;

u32 f_0050ddc0(u32 r0) {
    u32 r0_1 = call_0034e5e4(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    return s32(r0_1) >= 0;
}

}  // namespace d_0050ddc0
GUEST_EXPORT_FRAMED(0x0050ddc0, d_0050ddc0::f_0050ddc0, 0x4010);  // pushes {r4, lr} first, as the original

// f_0050dddc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0050dddc {

struct __attribute__((packed)) Local_0050dddc_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_0050dddc_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_0050dddc_ea_1, word_4, 0x4);
GUEST_OFFSET(Local_0050dddc_ea_1, word_8, 0x8);

struct __attribute__((packed)) Local_0050dddc_ea_2 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Local_0050dddc_ea_2, word_0, 0x0);
GUEST_OFFSET(Local_0050dddc_ea_2, word_4, 0x4);
GUEST_OFFSET(Local_0050dddc_ea_2, word_8, 0x8);
GUEST_OFFSET(Local_0050dddc_ea_2, word_c, 0xc);

struct __attribute__((packed)) Local_0050dddc_ea_3 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Local_0050dddc_ea_3, word_0, 0x0);
GUEST_OFFSET(Local_0050dddc_ea_3, word_4, 0x4);
GUEST_OFFSET(Local_0050dddc_ea_3, word_8, 0x8);
GUEST_OFFSET(Local_0050dddc_ea_3, word_c, 0xc);

struct __attribute__((packed)) Local_0050dddc_ea_4 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Local_0050dddc_ea_4, word_0, 0x0);
GUEST_OFFSET(Local_0050dddc_ea_4, word_4, 0x4);
GUEST_OFFSET(Local_0050dddc_ea_4, word_8, 0x8);
GUEST_OFFSET(Local_0050dddc_ea_4, word_c, 0xc);

inline constexpr guest::Function<0x0034cdcc, u32(u32, u32, u32, u32)> call_0034cdcc;
inline constexpr guest::Function<0x0034cf7c, u32(u32, u32, u32, u32)> call_0034cf7c;
inline constexpr guest::Function<0x0034df48, u32(u32, u32, u32, u32)> call_0034df48;

struct __attribute__((packed)) Frame_0050dddc {
    u32 word_0;
    u8 unknown_4[0x20];  // (not read or written by name)
};
GUEST_OFFSET(Frame_0050dddc, word_0, 0x0);
GUEST_SIZE(Frame_0050dddc, 0x24);

u32 f_0050dddc(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_0050dddc> frame;  // the original's stack frame
    u32 r0_3 = 0;
    u32 r5_1 = r2;
    u32 r6_1 = r3;
    if (*frame.at<u32>(0x38) != 0) {  // (from the original)
        call_0034cdcc(0u, 0u, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
    }
    u32 r0_1 = call_0034cf7c(r5_1, 0u, r2, r3);
    gptr<Local_0050dddc_ea_1> ea_1 = gptr<Local_0050dddc_ea_1>(r1 + 0x18u);  // (from the original)
    u32 r1_1 = ea_1->word_0;
    u32 r2_1 = ea_1->word_4;
    u32 r3_1 = ea_1->word_8;
    gptr<Local_0050dddc_ea_2> ea_2 = gptr<Local_0050dddc_ea_2>(frame.at(0x14).addr());  // (from the original)
    ea_2->word_0 = r1_1;
    ea_2->word_4 = r2_1;
    ea_2->word_8 = r3_1;
    ea_2->word_c = 0x19000;  // (from the original)
    gptr<Local_0050dddc_ea_3> ea_3 = gptr<Local_0050dddc_ea_3>(r1 + 8u);
    u32 r1_2 = ea_3->word_0;
    u32 r2_2 = ea_3->word_4;
    u32 r3_2 = ea_3->word_8;
    u32 r12_1 = ea_3->word_c;
    gptr<Local_0050dddc_ea_4> ea_4 = gptr<Local_0050dddc_ea_4>(frame.at(4).addr());
    ea_4->word_0 = r1_2;
    ea_4->word_4 = r2_2;
    ea_4->word_8 = r3_2;
    ea_4->word_c = r12_1;
    frame->word_0 = *gptr<u32>(r1 + 4u);
    u32 r0_2 = call_0034df48(r0, r0_1, r6_1, *gptr<u32>(r1));
    u32 r1_3 = r0_2 & 0x80000000u;  // (from the original)
    if (s32(r1_3) >= 0) {
        r0_3 = 0u;
    } else {
        r1_3 = 0xc8e10868u;  // (from the original)
        if (r0_2 == r1_3) {
            r0_3 = 5u;
        } else {
            r1_3 = 0xc8e10867u;  // (from the original)
            if (r0_2 == r1_3) {
                r0_3 = 6u;
            } else {
                r1_3 = 0xc8a10bf0u;  // (from the original)
                if (r0_2 == r1_3) {
                    r0_3 = 1u;
                } else {
                    r1_3 = 0xe0e10bfdu;  // (from the original)
                    u32 zf_1 = r0_2 == r1_3;
                    if (!zf_1) {
                        r1_3 = 0xc8e10be9u;  // (from the original)
                        zf_1 = r0_2 == r1_3;
                    }
                    if (!zf_1) {
                        r1_3 = 0xc8e1086au;  // (from the original)
                    }
                    r0_3 = 7u;
                }
            }
        }
    }
    guest::cpu()->r[1] = r1_3;
    return r0_3;
}

}  // namespace d_0050dddc
GUEST_EXPORT_FRAMED(0x0050dddc, d_0050dddc::f_0050dddc, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_0050ded0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0050ded0 {

inline constexpr guest::Function<0x0034e3f4, u32(u32, u32, u32, u32)> call_0034e3f4;

void f_0050ded0(u32 r0) {
    call_0034e3f4(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0050ded0
GUEST_EXPORT_FRAMED(0x0050ded0, d_0050ded0::f_0050ded0, 0x4010);  // pushes {r4, lr} first, as the original

// f_0050deec: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0050deec {

struct __attribute__((packed)) Object_0050deec_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_0050deec_0, word_0, 0x0);

inline constexpr guest::Function<0x003d0c60, u32(u32, u32, u32, u32)> call_003d0c60;
inline constexpr guest::Function<0x003d0d6c, u32(u32)> call_003d0d6c;
inline constexpr guest::Function<0x00832f1c, u32(u32, u32)> call_00832f1c;

u32 f_0050deec(gptr<Object_0050deec_0> arg0, u32 r1) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 r4_1 = arg0->word_0;
    u32 r0_1 = frame.at(0).addr();
    call_003d0c60(r0_1, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    call_00832f1c(r4_1, r0_1);
    u32 r0_2 = frame.at(0).addr();
    call_003d0d6c(r0_2);
    return r0_2;
}

}  // namespace d_0050deec
GUEST_EXPORT_FRAMED(0x0050deec, d_0050deec::f_0050deec, 0x4010);  // pushes {r4, lr} first, as the original

// f_0050df24: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0050df24 {

struct __attribute__((packed)) Object_0050df24_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_0050df24_0, word_0, 0x0);

inline constexpr guest::Function<0x003d0c60, u32(u32, u32, u32, u32)> call_003d0c60;
inline constexpr guest::Function<0x003d0cbc, u32(u32, u32)> call_003d0cbc;
inline constexpr guest::Function<0x003d0d6c, u32(u32)> call_003d0d6c;
inline constexpr guest::Function<0x003d0eec, u32(u32, u32)> call_003d0eec;
inline constexpr guest::Function<0x00832f1c, u32(u32, u32)> call_00832f1c;

void f_0050df24(gptr<Object_0050df24_0> arg0, u32 r1, u32 r2) {
    guest::StackFrame frame(0x14);  // the original's stack frame
    u32 r5_1 = arg0->word_0;
    call_003d0c60(frame.at(0).addr(), r1, r2, guest::cpu()->r[3]);
    u32 r0_2 = frame.at(8).addr();
    call_003d0cbc(r0_2, r2);
    call_003d0eec(frame.at(0).addr(), r0_2);
    call_003d0d6c(frame.at(8).addr());
    call_00832f1c(r5_1, frame.at(0).addr());
    call_003d0d6c(frame.at(0).addr());
}

}  // namespace d_0050df24
GUEST_EXPORT_FRAMED(0x0050df24, d_0050df24::f_0050df24, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_0050df80: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0050df80 {

inline constexpr guest::Function<0x003d0cbc, u32(u32, u32, u32, u32)> call_003d0cbc;
inline constexpr guest::Function<0x003d0d6c, u32(u32)> call_003d0d6c;
inline constexpr guest::Function<0x00832f1c, u32(u32, u32)> call_00832f1c;

void f_0050df80(u32 r0, u32 r1) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 r0_1 = frame.at(0).addr();
    call_003d0cbc(r0_1, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    call_00832f1c(r0, r0_1);
    call_003d0d6c(frame.at(0).addr());
}

}  // namespace d_0050df80
GUEST_EXPORT_FRAMED(0x0050df80, d_0050df80::f_0050df80, 0x4010);  // pushes {r4, lr} first, as the original

// f_0050e1d0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0050e1d0 {

struct __attribute__((packed)) Object_0050e1d0_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_0050e1d0_0, word_0, 0x0);

inline constexpr u32 vtable_sead__SafeStringBase_char_ = 0x009047f8u;
inline guest::global<u32, 0x00953674> global_00953674;
inline constexpr guest::Function<0x002f6e78, u32(u32, u32, u32, u32)> call_002f6e78;
inline constexpr guest::Function<0x002f825c, u32(u32, u32)> call_002f825c;

struct __attribute__((packed)) Frame_0050e1d0 {
    u32 word_0;
    u8 unknown_4[0x4];  // (not read or written by name)
    u32 word_8;
    u32 word_c;
    u8 unknown_10[0x4];  // (not read or written by name)
};
GUEST_OFFSET(Frame_0050e1d0, word_0, 0x0);
GUEST_OFFSET(Frame_0050e1d0, word_8, 0x8);
GUEST_OFFSET(Frame_0050e1d0, word_c, 0xc);
GUEST_SIZE(Frame_0050e1d0, 0x14);

u32 f_0050e1d0(gptr<Object_0050e1d0_0> arg0, u32 r1) {
    guest::StackFrameOf<Frame_0050e1d0> frame;  // the original's stack frame
    if (*global_00953674 != 0) {
        return 1u;
    }
    frame->word_c = 0x50e23c;  // (from the original)
    frame->word_0 = 1;
    frame->word_8 = vtable_sead__SafeStringBase_char_;
    u32 r0_1 = call_002f6e78(0xd6000u, frame.at(8).addr(), arg0->word_0, 1u);  // (from the original)
    *global_00953674 = r0_1;
    call_002f825c(arg0.addr() + 0x6cu, 0x22u);  // (from the original)
    return 1u;
}

}  // namespace d_0050e1d0
GUEST_EXPORT_FRAMED(0x0050e1d0, d_0050e1d0::f_0050e1d0, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_0050e778: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0050e778 {

struct __attribute__((packed)) Object_0050e778_0 {
    u32 word_0;
    u8 unknown_4[0x4];  // (not used here)
    u32 word_8;
};
GUEST_OFFSET(Object_0050e778_0, word_0, 0x0);
GUEST_OFFSET(Object_0050e778_0, word_8, 0x8);

struct __attribute__((packed)) Local_0050e778_r3_9 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_0050e778_r3_9, word_0, 0x0);
GUEST_OFFSET(Local_0050e778_r3_9, word_4, 0x4);
GUEST_OFFSET(Local_0050e778_r3_9, word_8, 0x8);

inline guest::global<u32, 0x00974a64> global_00974a64;
inline constexpr guest::Function<0x00131280, u32(u32, u32, u32, u32)> call_00131280;
inline constexpr guest::Function<0x004167b0, u32(u32)> call_004167b0;
inline constexpr guest::Function<0x00417dbc, u32(u32, u32)> call_00417dbc;
inline constexpr guest::Function<0x00429ac4, u32(u32)> call_00429ac4;
inline constexpr guest::Function<0x00429b10, u32(u32, u32)> call_00429b10;
inline constexpr guest::Function<0x00449ee4, u32(u32, u32)> call_00449ee4;
inline constexpr guest::Function<0x0044a814, u32(u32)> call_0044a814;
inline constexpr guest::Function<0x0044bca4, u32(u32, u32)> call_0044bca4;
inline constexpr guest::Function<0x0044beb8, u32(u32)> call_0044beb8;
inline constexpr guest::Function<0x0044cc08, u32(u32)> call_0044cc08;
inline constexpr guest::Function<0x0044cc60, u32(u32)> call_0044cc60;
inline constexpr guest::Function<0x0045fd24, u32(u32)> call_0045fd24;
inline constexpr guest::Function<0x0050ee4c, u32(u32)> call_0050ee4c;
inline constexpr guest::Function<0x0050f004, u32(u32, u32)> call_0050f004;
inline constexpr guest::Function<0x005117a8, u32(u32)> call_005117a8;
inline constexpr guest::Function<0x005124b8, u32(u32, u32, u32, u32)> call_005124b8;
inline constexpr guest::Function<0x00513160, u32(u32, u32)> call_00513160;

struct __attribute__((packed)) Frame_0050e778 {
    u8 unknown_0[0x10];  // (not read or written by name)
    u8 byte_10;
    u8 unknown_11[0x3];  // (not read or written by name)
    u32 word_14;
    u8 byte_18;
    u8 unknown_19[0x3];  // (not read or written by name)
    u32 word_1c;
    u8 unknown_20[0xc];  // (not read or written by name)
    u32 word_2c;
    u8 byte_30;
    u8 unknown_31[0x3];  // (not read or written by name)
    u32 word_34;
    u32 word_38;
    u8 unknown_3c[0x14];  // (not read or written by name)
};
GUEST_OFFSET(Frame_0050e778, byte_10, 0x10);
GUEST_OFFSET(Frame_0050e778, word_14, 0x14);
GUEST_OFFSET(Frame_0050e778, byte_18, 0x18);
GUEST_OFFSET(Frame_0050e778, word_1c, 0x1c);
GUEST_OFFSET(Frame_0050e778, word_2c, 0x2c);
GUEST_OFFSET(Frame_0050e778, byte_30, 0x30);
GUEST_OFFSET(Frame_0050e778, word_34, 0x34);
GUEST_OFFSET(Frame_0050e778, word_38, 0x38);
GUEST_SIZE(Frame_0050e778, 0x50);

u32 f_0050e778(gptr<Object_0050e778_0> arg0, u32 r1_unused, u32 r2_unused, u32 r3) {
    guest::StackFrameOf<Frame_0050e778> frame;  // the original's stack frame
    u32 r0 = arg0.addr();
    u32 r0_1 = call_00131280(0x40u, arg0->word_0, 4u, r3);  // (from the original)
    arg0->word_8 = r0_1;
    if (r0_1 != 0) {
        u32 r0_2 = call_0050ee4c(r0);
        if (r0_2 != 0) {
            u32 r0_3 = call_005117a8(r0);
            if (r0_3 != 0) {
                call_004167b0(frame.at(8).addr());
                call_0045fd24(frame.at(0x38).addr());  // (from the original)
                u32 r6_1 = frame.at(8).addr();
                frame->word_38 = r6_1;
                u32 r0_6 = call_00513160(r0, frame.at(0x38).addr());  // (from the original)
                u32 r1_5 = guest::cpu()->r[1];
                if (r0_6 != 0) {
                    u32 r0_7 = r0_6 & ~0xffu & ~0xff0000u & ~0xff00u;  // (from the original)
                    u32 r1_6 = 0x10u << 8 & 0xff00u;  // (from the original)
                    u32 r0_8 = call_00429b10(r0_7, r1_6);
                    u32 r0_9 = r0_8 & 0x80000000u;  // (from the original)
                    if (!(r0_9 >> 0x1f)) {  // (from the original)
                        call_00429ac4(r0_9);
                        u32 r0_10 = call_00449ee4(r6_1, r0_7 | r1_6);
                        u32 r0_11 = r0_10 & 0x80000000u;  // (from the original)
                        if (s32(r0_11) >= 0) {
                            call_0044cc08(r0_11);
                            call_0044bca4(*global_00974a64, 0x513e94u);  // (from the original)
                            gptr<Local_0050e778_r3_9> r3_9 = gptr<Local_0050e778_r3_9>(frame.at(0x20).addr());  // (from the original)
                            frame->word_1c = 0x2710;  // (from the original)
                            u32 r2_9 = ~0u;
                            frame->byte_10 = 1;
                            frame->word_14 = 0;
                            frame->byte_18 = 0;
                            r3_9->word_0 = 0x3e8;  // (from the original)
                            r3_9->word_4 = r2_9;
                            r3_9->word_8 = 0;
                            u32 r1_9 = frame.at(0x10).addr();  // (from the original)
                            frame->word_2c = 0x3e8;  // (from the original)
                            frame->byte_30 = 0;
                            frame->word_34 = 0;
                            u32 r0_13 = call_005124b8(r0, r1_9, r2_9, r3_9.addr());
                            if ((r0_13 & 0x80000000u) >> 0x1f) {  // (from the original)
                                r1_5 = 0xd8a14868u;  // (from the original)
                                u32 zf_1 = r0_13 == r1_5;
                                if (!zf_1) {
                                    r1_5 -= 0x43u;  // (from the original)
                                    zf_1 = r0_13 == r1_5;
                                }
                                if (zf_1) {
                                    call_0050f004(r0, r1_5);
                                    call_00417dbc(r0, r1_5);
                                    return 0x80000000u;  // (from the original)
                                }
                                goto L_50e8e0;
                            }
                            call_00417dbc(r0_13, r1_9);
                            return 0u;
                        }
                        call_0044cc08(r0_11);
                    }
                    u32 r0_14 = *global_00974a64;
                    if (r0_14 != 0) {
                        call_0044beb8(r0_14);
                        r0_14 = call_0044a814(r0_14);
                    }
                    call_0044cc60(r0_14);
                    r1_5 = guest::cpu()->r[1];
                }
L_50e8e0:;
                call_00417dbc(frame.at(8).addr(), r1_5);
            }
        }
    }
    call_0050f004(r0, guest::cpu()->r[1]);
    return 0x80000006u;  // (from the original)
}

}  // namespace d_0050e778
GUEST_EXPORT_FRAMED(0x0050e778, d_0050e778::f_0050e778, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_0050ed5c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0050ed5c {

struct __attribute__((packed)) Object_0050ed5c_0 {
    u32 word_0;
    u8 unknown_4[0x20];  // (not used here)
    u32 word_24;
};
GUEST_OFFSET(Object_0050ed5c_0, word_0, 0x0);
GUEST_OFFSET(Object_0050ed5c_0, word_24, 0x24);

struct __attribute__((packed)) Local_0050ed5c_ea_3 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0050ed5c_ea_3, word_0, 0x0);
GUEST_OFFSET(Local_0050ed5c_ea_3, word_4, 0x4);

inline guest::global<u8, 0x0096b8fe> global_0096b8fe;
inline guest::global<u32, 0x0096b92c> global_0096b92c;
inline guest::global<u32, 0x0096b930> global_0096b930;
inline constexpr guest::Function<0x002fd108, u32(u32, u32, u32, u32)> call_002fd108;
inline constexpr guest::Function<0x0037706c, u32(u32, u32, u32, u32)> call_0037706c;
inline constexpr guest::Function<0x003823b0, u32(u32, u32)> call_003823b0;
inline constexpr guest::Function<0x00540c1c, u32(u32, u32, u32, u32)> call_00540c1c;

u32 f_0050ed5c(gptr<Object_0050ed5c_0> arg0, u32 r1_unused, u32 r2, u32 r3) {
    u32 r0 = arg0.addr();
    u32 res_1 = 0;
    u32 r5 = r0;
    u32 r6 = 0u;
    if (arg0->word_24 == 0) {
        u32 r0_1 = call_002fd108(0xce54u, arg0->word_0, 4u, r3);  // (from the original)
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        *gptr<u32>(r0_1) = r6;
        *gptr<u32>(r0_1 + 4u) = r6;
        u32 r4 = r0_1;
        *gptr<u32>(r0_1 + 8u) = r6;
        gptr<Local_0050ed5c_ea_3> ea_3 = gptr<Local_0050ed5c_ea_3>(r0_1 + 0xcu);  // (from the original)
        ea_3->word_0 = r6;
        u32 r1 = 0x64u;  // (from the original)
        ea_3->word_4 = r6;
        r0 = r4 + 0x14u;  // (from the original)
        if (r0 != 0) {
            r3 = 0x83u;  // (from the original)
            r2 = 0u;
            u32 r12 = 0x63u;  // (from the original)
            *gptr<u32>(r4 + 0xcu) = r0;  // (from the original)
            do {
                res_1 = r12 - 1u;
                r12 = res_1;
                *gptr<u32>(r0 + (r2 << 2)) = r0 + ((r3 + r2) << 2);
                r2 += r3;
                guest::preempt();
            } while (res_1 != 0);
            u32 r3_1 = r3 * (r1 - 1u);
            *gptr<u32>(r0 + (r3_1 << 2)) = r6;
            *gptr<u32>(r4 + 0x10u) = r0;  // (from the original)
            call_00540c1c(r4, r1, r1 * 0x20cu + r0, r3_1);  // (from the original)
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
        }
        *gptr<u32>(r5 + 0x24u) = r4;  // (from the original)
    }
    *gptr<u8>(r5 + 0x28u) = u8(r6);  // (from the original)
    *global_0096b92c = 0x4ddc14;  // (from the original)
    *global_0096b930 = 0x4ddbf8;  // (from the original)
    call_0037706c(0x4ddbf8u, 0x96b930u, r2, r3);  // (from the original)
    *global_0096b8fe = 3;
    call_003823b0(0u, 0x96b8feu);  // (from the original)
    return 1u;
}

}  // namespace d_0050ed5c
GUEST_EXPORT_FRAMED(0x0050ed5c, d_0050ed5c::f_0050ed5c, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_0050f004: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0050f004 {

struct __attribute__((packed)) Object_0050f004_0 {
    u8 unknown_0[0x8];  // (not used here)
    u32 word_8;
    u8 unknown_c[0x38];  // (not used here)
    u32 word_44;
    u8 unknown_48[0x20];  // (not used here)
    u8 byte_68;
    u8 byte_69;
};
GUEST_OFFSET(Object_0050f004_0, word_8, 0x8);
GUEST_OFFSET(Object_0050f004_0, word_44, 0x44);
GUEST_OFFSET(Object_0050f004_0, byte_68, 0x68);
GUEST_OFFSET(Object_0050f004_0, byte_69, 0x69);

inline guest::global<u32, 0x00974a58> global_00974a58;
inline guest::global<u32, 0x00974a64> global_00974a64;
inline constexpr guest::Function<0x002f88b8, u32(u32)> call_002f88b8;
inline constexpr guest::Function<0x00414120, u32(u32)> call_00414120;
inline constexpr guest::Function<0x00415208, u32(u32, u32, u32)> call_00415208;
inline constexpr guest::Function<0x00415d24, u32(u32, u32, u32)> call_00415d24;
inline constexpr guest::Function<0x00416044, u32(u32)> call_00416044;
inline constexpr guest::Function<0x00425840, u32(u32)> call_00425840;
inline constexpr guest::Function<0x0044a814, u32(u32)> call_0044a814;
inline constexpr guest::Function<0x0044beb8, u32(u32, u32, u32, u32)> call_0044beb8;
inline constexpr guest::Function<0x0044c1ec, u32(u32, u32, u32, u32)> call_0044c1ec;
inline constexpr guest::Function<0x0044cc60, u32(u32, u32, u32, u32)> call_0044cc60;
inline constexpr guest::Function<0x0044d894, u32(u32)> call_0044d894;
inline constexpr guest::Function<0x004502b4, u32(u32, u32, u32)> call_004502b4;
inline constexpr guest::Function<0x00450314, u32(u32, u32)> call_00450314;
inline constexpr guest::Function<0x00452958, u32(u32)> call_00452958;
inline constexpr guest::Function<0x0045f368, u32(u32)> call_0045f368;
inline constexpr guest::Function<0x0045f918, u32(u32)> call_0045f918;
inline constexpr guest::Function<0x0050ecf4, u32(u32)> call_0050ecf4;

void f_0050f004(gptr<Object_0050f004_0> arg0, u32 r1, u32 r2) {
    u32 r0_1 = *global_00974a64;
    if (r0_1 != 0) {
        call_0044c1ec(r0_1, r1, r2, guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
    }
    arg0->byte_69 = 0;
    arg0->byte_68 = 0;
    u32 r0_2 = *global_00974a64;
    if (r0_2 != 0) {
        call_0044beb8(r0_2, r1, r2, guest::cpu()->r[3]);
        r0_2 = call_0044a814(r0_2);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
    }
    call_0044cc60(r0_2, r1, r2, guest::cpu()->r[3]);
    u32 r0_3 = 0x974a74u;  // (from the original)
    u32 r5_1 = *gptr<u32>(r0_3);
    if (r5_1 != 0) {
        u32 r0_5 = call_004502b4(r5_1 + 0x10u, arg0->word_44, 0x3000u);  // (from the original)
        if (r0_5 != 0) {
            call_00452958(r0_5);
            r0_5 = call_00450314(r5_1 + 0x10u, arg0->word_44);  // (from the original)
        }
        arg0->word_44 = 0;
        r0_3 = call_0045f918(r0_5);
    }
    u32 r0_7 = call_0044d894(r0_3);
    if (r0_7 != 0) {
        r0_7 = call_0045f368(r0_7);
    }
    call_00414120(r0_7);
    u32 r1_7 = 0x3ff00000u;  // (from the original)
    u32 r0_8 = *global_00974a58;
    u32 r2_6 = r0_8 - 0x100000u;  // (from the original)
    if (r2_6 < r1_7) {
        r0_8 = call_00415d24(r0_8, r1_7, r2_6);
        r1_7 = guest::cpu()->r[1];
        r2_6 = guest::cpu()->r[2];
    }
    u32 r0_9 = call_00415208(r0_8, r1_7, r2_6);
    u32 r0_10 = call_00416044(r0_9);
    if (r0_10 != 0) {
        call_00425840(r0_10);
    }
    call_0050ecf4(arg0.addr());
    u32 r0_11 = arg0->word_8;
    if (r0_11 != 0) {
        call_002f88b8(r0_11);
        arg0->word_8 = 0;
    }
}

}  // namespace d_0050f004
GUEST_EXPORT_FRAMED(0x0050f004, d_0050f004::f_0050f004, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0050f118: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0050f118 {

struct __attribute__((packed)) Object_0050f118_0 {
    u8 unknown_0[0x14];  // (not used here)
    u32 word_14;
    u8 unknown_18[0x4];  // (not used here)
    u32 word_1c;
    u8 unknown_20[0x4];  // (not used here)
    u32 word_24;
    u8 byte_28;
    u8 unknown_29[0xf];  // (not used here)
    u32 word_38;
    u8 unknown_3c[0x4];  // (not used here)
    u8 byte_40;
    u8 byte_41;
};
GUEST_OFFSET(Object_0050f118_0, word_14, 0x14);
GUEST_OFFSET(Object_0050f118_0, word_1c, 0x1c);
GUEST_OFFSET(Object_0050f118_0, word_24, 0x24);
GUEST_OFFSET(Object_0050f118_0, byte_28, 0x28);
GUEST_OFFSET(Object_0050f118_0, word_38, 0x38);
GUEST_OFFSET(Object_0050f118_0, byte_40, 0x40);
GUEST_OFFSET(Object_0050f118_0, byte_41, 0x41);

inline guest::global<u32, 0x0096b92c> global_0096b92c;
inline guest::global<u32, 0x0096b930> global_0096b930;
inline constexpr guest::Function<0x002ffb64, u32(u32)> call_002ffb64;
inline constexpr guest::Function<0x00377160, u32(u32, u32)> call_00377160;
inline constexpr guest::Function<0x00489ec8, u32(u32, u32)> call_00489ec8;
inline constexpr guest::Function<0x0050cd1c, u32(u32)> call_0050cd1c;
inline constexpr guest::Function<0x0050ed5c, u32(u32, u32, u32, u32)> call_0050ed5c;
inline constexpr guest::Function<0x00510358, u32(u32, u32)> call_00510358;
inline constexpr guest::Function<0x005158b8, u32(u32, u32, u32, u32)> call_005158b8;

u32 f_0050f118(gptr<Object_0050f118_0> arg0, u32 r1, u32 r2) {
    u32 r0 = arg0.addr();
    u32 r0_1 = 0;
    u32 r0_3 = 0;
    if (arg0->word_14 == 0) {
        if (arg0->byte_40 == 0) {
            r0_1 = call_0050ed5c(r0, r1, r2, guest::cpu()->r[3]);
            r1 = guest::cpu()->r[1];
            if (r0_1 == 0) {
                return r0_1;
            }
            u32 r0_2 = call_00510358(r0, r1);
            if (r0_2 == 0) {
                *global_0096b92c = 0;
                *global_0096b930 = 0;
                call_00377160(r0_2, guest::cpu()->r[1]);
                arg0->byte_28 = 0;
                r0_3 = arg0->word_24;
                if (r0_3 == 0) {
                    arg0->word_1c = 0;
                    return 0u;
                }
                goto L_50f1a4;
            }
        }
        u32 r0_4 = call_005158b8(r0, 0x86201u, 0x87be14u, guest::cpu()->r[3]);  // (from the original)
        r1 = guest::cpu()->r[1];
        if (r0_4 == 0) {
            u32 r0_5 = arg0->word_14;
            u32 zf_1 = r0_5 == 0;
            if (zf_1) {
                r0_5 = arg0->word_38;
                zf_1 = r0_5 == 0;
            }
            if (zf_1) {
                u32 r0_6 = call_00489ec8(r0_5, r1);
                r0_5 = call_0050cd1c(r0_6);
                r1 = guest::cpu()->r[1];
                arg0->byte_40 = 0;
                arg0->byte_41 = 0;
            }
            *global_0096b92c = 0;
            *global_0096b930 = 0;
            call_00377160(r0_5, r1);
            arg0->byte_28 = 0;
            r0_3 = arg0->word_24;
            if (r0_3 != 0) {
                goto L_50f1a4;
            }
            arg0->word_1c = 0;
            return 0u;
        }
    }
    guest::cpu()->r[1] = r1;
    return 1u;
L_50f1a4:;
    call_002ffb64(r0_3);
    arg0->word_24 = 0;
    arg0->word_1c = 0;
    return 0u;
}

}  // namespace d_0050f118
GUEST_EXPORT_FRAMED(0x0050f118, d_0050f118::f_0050f118, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original
