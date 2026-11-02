// Functions decompiled by tools/decomp (docs/decomp.md), each proved equal to the recompiled original (prove-cpp). The
// names are generated (d_<address>::f_<address>, Object_<address>_<argument>, word_<offset>) and still to be chosen.
#include "guest/guest.hpp"
#include "recovered/structs.hpp"

#include <bit>

using guest::gptr;

// f_00280568: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00280568 {

struct __attribute__((packed)) Object_00280568_0 {
    u8 unknown_0[0xe0];  // (not used here)
    u32 word_e0;
    u8 unknown_e4[0xc];  // (not used here)
    u32 word_f0;
    u8 unknown_f4[0x158];  // (not used here)
    u32 word_24c;
};
GUEST_OFFSET(Object_00280568_0, word_e0, 0xe0);
GUEST_OFFSET(Object_00280568_0, word_f0, 0xf0);
GUEST_OFFSET(Object_00280568_0, word_24c, 0x24c);

struct __attribute__((packed)) Local_00280568_r1_2 {
    u8 unknown_0[0x90];  // (not used here)
    u16 half_90;
    u8 unknown_92[0xb];  // (not used here)
    u8 byte_9d;
    u8 unknown_9e[0x42];  // (not used here)
    u32 word_e0;
};
GUEST_OFFSET(Local_00280568_r1_2, half_90, 0x90);
GUEST_OFFSET(Local_00280568_r1_2, byte_9d, 0x9d);
GUEST_OFFSET(Local_00280568_r1_2, word_e0, 0xe0);

struct __attribute__((packed)) Local_00280568_r5_1 {
    u8 unknown_0[0x2584];  // (not used here)
    u32 word_2584;
    u32 word_2588;
    u32 word_258c;
};
GUEST_OFFSET(Local_00280568_r5_1, word_2584, 0x2584);
GUEST_OFFSET(Local_00280568_r5_1, word_2588, 0x2588);
GUEST_OFFSET(Local_00280568_r5_1, word_258c, 0x258c);

inline guest::global<u32, 0x00280750> global_00280750;
inline constexpr guest::Function<0x0014fa8c, u32(u32)> call_0014fa8c;
inline constexpr guest::Function<0x0014fa9c, u32(u32, u32, u32, u32)> call_0014fa9c;
inline constexpr guest::Function<0x001c0c54, u32(u32, u32)> call_001c0c54;
inline constexpr guest::Function<0x002075d4, u32(u32, u32, u32, u32)> call_002075d4;
inline constexpr guest::Function<0x0022fcb8, u32(u32, u32)> call_0022fcb8;
inline constexpr guest::Function<0x00281384, u32(u32, u32, u32, u32)> call_00281384;
inline constexpr guest::Function<0x0068ec64, u32(u32, u32, u32, u32)> call_0068ec64;
inline constexpr guest::Function<0x006ea834, u32(u32, u32, u32, u32)> call_006ea834;

struct __attribute__((packed)) Frame_00280568 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Frame_00280568, word_0, 0x0);
GUEST_OFFSET(Frame_00280568, word_4, 0x4);
GUEST_SIZE(Frame_00280568, 0x8);

u32 f_00280568(gptr<Object_00280568_0> arg0, u32 r1_unused, u32 r2, u32 r3, float S0, float S1) {
    guest::StackFrameOf<Frame_00280568> frame;  // the original's stack frame
    u32 r0_2 = 0;
    u32 r1_1 = arg0->word_24c;
    gptr<Local_00280568_r5_1> r5_1 = gptr<Local_00280568_r5_1>(arg0->word_f0);
    gptr<Local_00280568_r1_2> r1_2 = gptr<Local_00280568_r1_2>(r1_1 == 0 ? arg0->word_e0 : *gptr<u32>(r1_1 + 0xe0u));  // (from the original)
    u32 r0_1 = *gptr<u32>(r5_1.addr() + 0x2574u);  // (from the original)
    u32 r6_1 = 2u;
    if (r1_2.addr() != 0) {
        if (r1_2.addr() == 1u) {
            call_00281384(r5_1.addr(), r1_2.addr(), r2, r3);
            r1_2 = gptr<Local_00280568_r1_2>(guest::cpu()->r[1]);
            S0 = guest::cpu()->s[0];
            S1 = guest::cpu()->s[1];
            if (*gptr<u8>(r5_1.addr() + 0x2595u) == 0) {  // (from the original)
                guest::cpu()->r[1] = r1_2.addr();
                return r6_1;
            }
            r1_2 = gptr<Local_00280568_r1_2>(arg0->word_24c);
            r0_2 = (r1_2.addr() == 0 ? arg0->word_e0 : r1_2->word_e0) + 1u;
            if (r1_2.addr() != 0) {
                r1_2->word_e0 = r0_2;
                guest::cpu()->r[1] = r1_2.addr();
                return r6_1;
            }
            arg0->word_e0 = r0_2;
            guest::cpu()->r[1] = r1_2.addr();
            return r6_1;
        }
        if (r1_2.addr() == 2u) {
            r1_2 = gptr<Local_00280568_r1_2>(r5_1.addr() + 0x2500u);  // (from the original)
            u32 zf_1 = r1_2->half_90 == 0;
            if (zf_1) {
                r1_2 = gptr<Local_00280568_r1_2>(u32(r1_2->byte_9d));
                zf_1 = r1_2.addr() == 0;
            }
            if (!zf_1) {
                guest::cpu()->r[1] = r1_2.addr();
                guest::cpu()->s[0] = S0;
                guest::cpu()->s[1] = S1;
                return r6_1;
            }
            *gptr<u8>(r0_1 + 0x2884u) = 1;  // (from the original)
            guest::cpu()->s[0] = S0;
            guest::cpu()->s[1] = S1;
            call_0068ec64(r0_1 + 0x14u, 8u, 0u, 0u);  // (from the original)
            S0 = guest::cpu()->s[0];
            S1 = guest::cpu()->s[1];
            r1_2 = gptr<Local_00280568_r1_2>(arg0->word_24c);
            r0_2 = (r1_2.addr() == 0 ? arg0->word_e0 : r1_2->word_e0) + 1u;
            if (r1_2.addr() == 0) {
                arg0->word_e0 = r0_2;
                guest::cpu()->r[1] = r1_2.addr();
                return r6_1;
            }
            r1_2->word_e0 = r0_2;
            guest::cpu()->r[1] = r1_2.addr();
            return r6_1;
        }
        if (r1_2.addr() != 3u) {
            guest::cpu()->r[1] = r1_2.addr();
            guest::cpu()->s[0] = S0;
            guest::cpu()->s[1] = S1;
            return r6_1;
        }
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        u32 r0_4 = call_0014fa9c(r0_1, r1_2.addr(), r2, r3);
        r1_2 = gptr<Local_00280568_r1_2>(guest::cpu()->r[1]);
        S0 = guest::cpu()->s[0];
        S1 = guest::cpu()->s[1];
        if (r0_4 != 0) {
            r6_1 = 1u;
        }
        guest::cpu()->r[1] = r1_2.addr();
        return r6_1;
    }
    frame->word_0 = 0;
    float S1_1 = 6.0f;
    float S0_1 = 0.0f;
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    call_006ea834(r5_1.addr() + 0x78u, 0u, 0x209u, 2u);  // (from the original)
    frame->word_4 = 0;
    frame->word_0 = 1;
    call_002075d4(0x12cu, r5_1.addr() + 0x14u, 0x975beeu, 0xae5664u);  // (from the original)
    call_001c0c54(r5_1.addr() + 0x9b4u, 0x1000661u);  // (from the original)
    if (*gptr<u8>(r5_1.addr() + 0x2597u) != 0) {  // (from the original)
        u32 r0_7 = *gptr<u32>(*global_00280750);
        if (r0_7 != 0) {
            call_0014fa8c(r0_7);
        }
    }
    call_0022fcb8(r5_1.addr() + 0x1dd4u, 0x8426e0u);  // (from the original)
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    r5_1->word_2584 = 0;
    r5_1->word_2588 = 0x14;  // (from the original)
    r5_1->word_258c = 0;
    r1_2 = gptr<Local_00280568_r1_2>(arg0->word_24c);
    r0_2 = (r1_2.addr() == 0 ? arg0->word_e0 : r1_2->word_e0) + 1u;
    if (r1_2.addr() == 0) {
        arg0->word_e0 = r0_2;
        guest::cpu()->r[1] = r1_2.addr();
        return r6_1;
    }
    r1_2->word_e0 = r0_2;
    guest::cpu()->r[1] = r1_2.addr();
    return r6_1;
}

}  // namespace d_00280568
GUEST_EXPORT_FRAMED(0x00280568, d_00280568::f_00280568, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_00280ea0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00280ea0 {

struct __attribute__((packed)) Object_00280ea0_0 {
    u8 unknown_0[0x2597];  // (not used here)
    u8 byte_2597;
};
GUEST_OFFSET(Object_00280ea0_0, byte_2597, 0x2597);

inline constexpr guest::Function<0x00205d80, u32(u32, u32, u32, u32)> call_00205d80;
inline constexpr guest::Function<0x00231918, u32(u32, u32, u32, u32)> call_00231918;
inline constexpr guest::Function<0x006e9c2c, u32(u32, u32)> call_006e9c2c;

void f_00280ea0(gptr<Object_00280ea0_0> arg0, u32 r1, float S0, float S1, float S2) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    float S0_3 = 0;
    u32 r2_1 = s8(arg0->byte_2597);
    if (r2_1 != 1u || (u32(*gptr<u8>(arg0.addr() + 0xb06u)) & 1u) != 0) {  // (from the original)
        r1 = arg0.addr() + 0x2588u;  // (from the original)
        u32 r0_1 = *gptr<u32>(r1);
        if (s32(r0_1) < 0x14) {  // (from the original)
            S1 = 0.05f;
            *gptr<u32>(r1) = r0_1 + 1u;
            r1 = arg0.addr() + 0x800u;  // (from the original)
            S2 = float(s32(std::bit_cast<u32>(std::bit_cast<float>(r0_1 + 1u)))) * S1;
            S0 = std::bit_cast<float>(*gptr<u32>(r1 + 0x2e0u)) * S2;  // (from the original)
            *gptr<u32>(r1 + 0x2dcu) = std::bit_cast<u32>(S0);  // (from the original)
            if (r2_1 != 0) {
                float S0_1 = std::bit_cast<float>(r0_1 + 1u);
                float S0_2 = float(s32(std::bit_cast<u32>(S0_1))) * S1;
                guest::cpu()->s[0] = S0_2;
                guest::cpu()->s[1] = S1;
                guest::cpu()->s[2] = S2;
                call_00205d80(arg0.addr() + 0x1dd4u, r1, r2_1, guest::cpu()->r[3]);  // (from the original)
                r1 = guest::cpu()->r[1];
                r2_1 = guest::cpu()->r[2];
                S0 = guest::cpu()->s[0];
                S1 = guest::cpu()->s[1];
                S2 = guest::cpu()->s[2];
            }
        }
        if (*gptr<u8>(arg0.addr() + 0xa8u) == 0xdu && *gptr<u8>(arg0.addr() + 0x554u) != 0) {  // (from the original)
            *gptr<u8>(arg0.addr() + 0x2594u) = 1;  // (from the original)
            if (*gptr<u8>((arg0.addr() + 0x2500u) + 0x97u) != 0) {  // (from the original)
                S0_3 = 6.0f;
                guest::cpu()->s[0] = S0_3;
                guest::cpu()->s[1] = S1;
                frame.release();
                call_006e9c2c(arg0.addr() + 0x78u, 0u);
                return;  // (from the original)
            }
            u32 r0_4 = *gptr<u32>(arg0.addr() + 0x660u);  // (from the original)
            guest::cpu()->s[0] = S0;
            guest::cpu()->s[1] = S1;
            guest::cpu()->s[2] = S2;
            call_00231918(r0_4, 1u, r2_1, guest::cpu()->r[3]);
            S1 = guest::cpu()->s[1];
            S0_3 = 6.0f;
            guest::cpu()->s[0] = S0_3;
            frame.release();
            call_006e9c2c(arg0.addr() + 0x78u, 0u);
            return;  // (from the original)
        }
    }
    guest::cpu()->r[1] = r1;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
}

}  // namespace d_00280ea0
GUEST_EXPORT(0x00280ea0, d_00280ea0::f_00280ea0);

// f_002812b0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002812b0 {

inline guest::global<u8, 0x009506b0> global_009506b0;
inline guest::global<u32, 0x009506b4> global_009506b4;

void f_002812b0(gptr<AcNpcSpResetsan> arg0) {
    u32 r1_1 = *global_009506b0 == 0xffu ? *global_009506b4 : 0u;  // (from the original)
    if (arg0->byte_259b != 1u || r1_1 == 0) {
        guest::cpu()->r[1] = r1_1;
        return;
    }
    u32 r1_2 = r1_1 + 0x6acdu;  // (from the original)
    *gptr<u8>(r1_2) = 0;
    arg0->byte_259b = 0;
    guest::cpu()->r[1] = r1_2;
}

}  // namespace d_002812b0
GUEST_EXPORT(0x002812b0, d_002812b0::f_002812b0);

// f_0028130c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0028130c {

inline constexpr guest::Function<0x0052c2c0, u32(u32)> call_0052c2c0;

void f_0028130c(gptr<AcNpcSpResetsan> arg0) {
    if (arg0->byte_259c != 1u) {
        return;
    }
    call_0052c2c0(arg0.addr());
    arg0->byte_259c = 0;
}

}  // namespace d_0028130c
GUEST_EXPORT_FRAMED(0x0028130c, d_0028130c::f_0028130c, 0x4010);  // pushes {r4, lr} first, as the original

// f_0028176c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0028176c {

inline guest::global<u32, 0x0094fd88> global_0094fd88;

void f_0028176c(gptr<AcNpcSpResetsan> arg0) {
    u32 r1_1 = arg0->byte_2599;
    if (r1_1 == 0) {
        guest::cpu()->r[1] = r1_1;
        return;
    }
    *global_0094fd88 = 0;
    arg0->byte_2599 = 0;
    guest::cpu()->r[1] = 0u;
}

}  // namespace d_0028176c
GUEST_EXPORT(0x0028176c, d_0028176c::f_0028176c);

// f_002817a0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002817a0 {

inline guest::global<u32, 0x0094fd8c> global_0094fd8c;

void f_002817a0(gptr<AcNpcSpResetsan> arg0) {
    u32 r1_1 = arg0->byte_2598;
    if (r1_1 == 0) {
        guest::cpu()->r[1] = r1_1;
        return;
    }
    *global_0094fd8c = 0;
    arg0->byte_2598 = 0;
    guest::cpu()->r[1] = 0u;
}

}  // namespace d_002817a0
GUEST_EXPORT(0x002817a0, d_002817a0::f_002817a0);

// f_002817d4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002817d4 {

inline constexpr guest::Function<0x005c2718, u32(u32)> call_005c2718;

void f_002817d4(gptr<AcNpcSpResetsan> arg0) {
    if (arg0->byte_259a != 1u) {
        return;
    }
    call_005c2718(arg0.addr());
    arg0->byte_259a = 0;
}

}  // namespace d_002817d4
GUEST_EXPORT_FRAMED(0x002817d4, d_002817d4::f_002817d4, 0x4010);  // pushes {r4, lr} first, as the original

// f_00281cd8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00281cd8 {

inline constexpr guest::Function<0x002fcbb0, u32(u32, u32, u32, u32)> call_002fcbb0;
inline constexpr guest::Function<0x00306354, u32(u32, u32, u32, u32)> call_00306354;
inline constexpr guest::Function<0x00768138, u32(u32, u32, u32)> call_00768138;

struct __attribute__((packed)) Frame_00281cd8 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u8 unknown_c[0x8];  // (not read or written by name)
};
GUEST_OFFSET(Frame_00281cd8, word_0, 0x0);
GUEST_OFFSET(Frame_00281cd8, word_4, 0x4);
GUEST_OFFSET(Frame_00281cd8, word_8, 0x8);
GUEST_SIZE(Frame_00281cd8, 0x14);

u32 f_00281cd8(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_00281cd8> frame;  // the original's stack frame
    call_002fcbb0(frame.at(0xc).addr(), 0x226au, r2, r3);  // (from the original)
    call_002fcbb0(frame.at(0x10).addr(), 0x331eu, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    frame->word_0 = frame.at(0xc).addr();  // (from the original)
    frame->word_4 = 0x13;  // (from the original)
    frame->word_8 = 0;
    call_00306354(r0, 0x281d58u, 2u, r1 + 0x55a6u);  // (from the original)
    call_00768138(r0, frame.at(0x10).addr(), 0u);  // (from the original)
    return frame.at(0xc).addr();  // (from the original)
}

}  // namespace d_00281cd8
GUEST_EXPORT_FRAMED(0x00281cd8, d_00281cd8::f_00281cd8, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_00281d6c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00281d6c {

inline constexpr guest::Function<0x002fcbb0, u32(u32, u32, u32, u32)> call_002fcbb0;
inline constexpr guest::Function<0x00306354, u32(u32, u32, u32, u32)> call_00306354;
inline constexpr guest::Function<0x00768138, u32(u32, u32, u32)> call_00768138;

struct __attribute__((packed)) Frame_00281d6c {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u8 unknown_c[0x8];  // (not read or written by name)
};
GUEST_OFFSET(Frame_00281d6c, word_0, 0x0);
GUEST_OFFSET(Frame_00281d6c, word_4, 0x4);
GUEST_OFFSET(Frame_00281d6c, word_8, 0x8);
GUEST_SIZE(Frame_00281d6c, 0x14);

void f_00281d6c(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_00281d6c> frame;  // the original's stack frame
    call_002fcbb0(frame.at(0xc).addr(), 0x226au, r2, r3);  // (from the original)
    call_002fcbb0(frame.at(0x10).addr(), 0x2185u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    frame->word_0 = frame.at(0xc).addr();  // (from the original)
    frame->word_4 = 0x13;  // (from the original)
    frame->word_8 = 0;
    call_00306354(r0, 0x281decu, 1u, r1 + 0x55a6u);  // (from the original)
    call_00768138(r0, frame.at(0x10).addr(), 0u);  // (from the original)
}

}  // namespace d_00281d6c
GUEST_EXPORT_FRAMED(0x00281d6c, d_00281d6c::f_00281d6c, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_00281e00: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00281e00 {

struct __attribute__((packed)) Object_00281e00_0 {
    u8 unknown_0[0x55d4];  // (not used here)
    u8 byte_55d4;
    u8 byte_55d5;
    u8 unknown_55d6[0x12f];  // (not used here)
    u8 byte_5705;
    u8 unknown_5706[0x6];  // (not used here)
    u8 byte_570c;
    u8 unknown_570d[0x3871];  // (not used here)
    u8 byte_8f7e;
};
GUEST_OFFSET(Object_00281e00_0, byte_55d4, 0x55d4);
GUEST_OFFSET(Object_00281e00_0, byte_55d5, 0x55d5);
GUEST_OFFSET(Object_00281e00_0, byte_5705, 0x5705);
GUEST_OFFSET(Object_00281e00_0, byte_570c, 0x570c);
GUEST_OFFSET(Object_00281e00_0, byte_8f7e, 0x8f7e);

struct __attribute__((packed)) Local_00281e00_ea_1 {
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
GUEST_OFFSET(Local_00281e00_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_00281e00_ea_1, word_4, 0x4);
GUEST_OFFSET(Local_00281e00_ea_1, word_8, 0x8);
GUEST_OFFSET(Local_00281e00_ea_1, word_c, 0xc);
GUEST_OFFSET(Local_00281e00_ea_1, word_10, 0x10);
GUEST_OFFSET(Local_00281e00_ea_1, word_14, 0x14);
GUEST_OFFSET(Local_00281e00_ea_1, word_18, 0x18);
GUEST_OFFSET(Local_00281e00_ea_1, word_1c, 0x1c);
GUEST_OFFSET(Local_00281e00_ea_1, word_20, 0x20);

struct __attribute__((packed)) Local_00281e00_ea_10 {
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
GUEST_OFFSET(Local_00281e00_ea_10, word_0, 0x0);
GUEST_OFFSET(Local_00281e00_ea_10, word_4, 0x4);
GUEST_OFFSET(Local_00281e00_ea_10, word_8, 0x8);
GUEST_OFFSET(Local_00281e00_ea_10, word_c, 0xc);
GUEST_OFFSET(Local_00281e00_ea_10, word_10, 0x10);
GUEST_OFFSET(Local_00281e00_ea_10, word_14, 0x14);
GUEST_OFFSET(Local_00281e00_ea_10, word_18, 0x18);
GUEST_OFFSET(Local_00281e00_ea_10, word_1c, 0x1c);
GUEST_OFFSET(Local_00281e00_ea_10, word_20, 0x20);

struct __attribute__((packed)) Local_00281e00_ea_2 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_00281e00_ea_2, word_0, 0x0);
GUEST_OFFSET(Local_00281e00_ea_2, word_4, 0x4);

struct __attribute__((packed)) Local_00281e00_ea_3 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_00281e00_ea_3, word_0, 0x0);
GUEST_OFFSET(Local_00281e00_ea_3, word_4, 0x4);
GUEST_OFFSET(Local_00281e00_ea_3, word_8, 0x8);

struct __attribute__((packed)) Local_00281e00_ea_5 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_00281e00_ea_5, word_0, 0x0);
GUEST_OFFSET(Local_00281e00_ea_5, word_4, 0x4);
GUEST_OFFSET(Local_00281e00_ea_5, word_8, 0x8);

struct __attribute__((packed)) Local_00281e00_ea_6 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_00281e00_ea_6, word_0, 0x0);
GUEST_OFFSET(Local_00281e00_ea_6, word_4, 0x4);
GUEST_OFFSET(Local_00281e00_ea_6, word_8, 0x8);

struct __attribute__((packed)) Local_00281e00_ea_7 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_00281e00_ea_7, word_0, 0x0);
GUEST_OFFSET(Local_00281e00_ea_7, word_4, 0x4);
GUEST_OFFSET(Local_00281e00_ea_7, word_8, 0x8);

struct __attribute__((packed)) Local_00281e00_ea_8 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_00281e00_ea_8, word_0, 0x0);
GUEST_OFFSET(Local_00281e00_ea_8, word_4, 0x4);

struct __attribute__((packed)) Local_00281e00_ea_9 {
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
GUEST_OFFSET(Local_00281e00_ea_9, word_0, 0x0);
GUEST_OFFSET(Local_00281e00_ea_9, word_4, 0x4);
GUEST_OFFSET(Local_00281e00_ea_9, word_8, 0x8);
GUEST_OFFSET(Local_00281e00_ea_9, word_c, 0xc);
GUEST_OFFSET(Local_00281e00_ea_9, word_10, 0x10);
GUEST_OFFSET(Local_00281e00_ea_9, word_14, 0x14);
GUEST_OFFSET(Local_00281e00_ea_9, word_18, 0x18);
GUEST_OFFSET(Local_00281e00_ea_9, word_1c, 0x1c);
GUEST_OFFSET(Local_00281e00_ea_9, word_20, 0x20);

struct __attribute__((packed)) Local_00281e00_r0_9 {
    u8 byte_0;
};
GUEST_OFFSET(Local_00281e00_r0_9, byte_0, 0x0);

struct __attribute__((packed)) Local_00281e00_r4_2 {
    u8 byte_0;
};
GUEST_OFFSET(Local_00281e00_r4_2, byte_0, 0x0);

inline guest::global<u32, 0x0095386c> global_0095386c;
inline constexpr guest::Function<0x00300650, u32(u32, u32, u32, u32)> call_00300650;
inline constexpr guest::Function<0x00301564, u32(u32, u32, u32, u32)> call_00301564;
inline constexpr guest::Function<0x00301da8, u32(u32)> call_00301da8;
inline constexpr guest::Function<0x00312ab8, u32(u32, u32, u32, u32)> call_00312ab8;
inline constexpr guest::Function<0x0056ca68, u32(u32, u32, u32, u32)> call_0056ca68;

struct __attribute__((packed)) Frame_00281e00 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u8 unknown_c[0x8];  // (not read or written by name)
    u32 word_14;
    u8 unknown_18[0x48];  // (not read or written by name)
};
GUEST_OFFSET(Frame_00281e00, word_0, 0x0);
GUEST_OFFSET(Frame_00281e00, word_4, 0x4);
GUEST_OFFSET(Frame_00281e00, word_8, 0x8);
GUEST_OFFSET(Frame_00281e00, word_14, 0x14);
GUEST_SIZE(Frame_00281e00, 0x60);

void f_00281e00(gptr<Object_00281e00_0> arg0, u32 r1_unused, u32 r2_unused, u32 r3) {
    guest::StackFrameOf<Frame_00281e00> frame;  // the original's stack frame
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r10 = guest::cpu()->r[10];
    u32 r11 = guest::cpu()->r[11];
    u32 r14 = guest::cpu()->r[14];
    gptr<Local_00281e00_ea_1> ea_1 = gptr<Local_00281e00_ea_1>(frame.at(0x3c).addr());  // (from the original)
    ea_1->word_0 = r4;
    ea_1->word_4 = r5;
    ea_1->word_8 = r6;
    ea_1->word_c = r7;
    ea_1->word_10 = r8;
    ea_1->word_14 = r9;
    ea_1->word_18 = r10;
    ea_1->word_1c = r11;
    ea_1->word_20 = r14;
    u32 r2_1 = u32(arg0->byte_5705) << 0x1c;  // (from the original)
    if (!!(r2_1 >> 0x1f) && (u32(arg0->byte_570c) & 0x1fu) != 0 && !(u32(arg0->byte_8f7e) & 0x40u)) {  // (from the original)
        call_00300650(frame.at(0).addr(), arg0.addr() + 0x8f77u, r2_1, r3);  // (from the original)
        gptr<Local_00281e00_ea_2> ea_2 = gptr<Local_00281e00_ea_2>(frame.at(4).addr());
        u32 r8_1 = ea_2->word_0;
        u32 r11_1 = ea_2->word_4;
        u32 r7_1 = frame->word_0;
        u32 r6_1 = arg0->byte_55d4;
        u32 r5_1 = arg0->byte_55d5;
        u32 r4_1 = r7_1;
        if (s32(sxtb(r8_1)) > s32(r6_1)) {
            r4_1 += 1u;
            if (s32(0x803u) <= s32(r4_1)) {  // (from the original)
                r4_1 = 0x7dcu;  // (from the original)
            }
        }
        if (r6_1 == 2u && r5_1 == 0x1du) {  // (from the original)
            u32 r0_2 = call_00301da8(r4_1);
            if (r0_2 == 0) {
                r5_1 = 0x1cu;  // (from the original)
            }
        }
        frame->word_0 = 7;
        frame->word_4 = 0;
        frame->word_8 = 0;
        call_0056ca68(frame.at(0x30).addr(), r4_1, r6_1, r5_1);  // (from the original)
        gptr<Local_00281e00_ea_3> ea_3 = gptr<Local_00281e00_ea_3>(frame.at(0x30).addr());  // (from the original)
        u32 r0_4 = ea_3->word_0;
        u32 r1_3 = ea_3->word_4;
        u32 r2_3 = ea_3->word_8;
        frame->word_0 = 0;
        gptr<Local_00281e00_ea_5> ea_5 = gptr<Local_00281e00_ea_5>(frame.at(0x14).addr());  // (from the original)
        ea_5->word_0 = r0_4;
        ea_5->word_4 = r1_3;
        ea_5->word_8 = r2_3;
        call_00312ab8(frame.at(0x14).addr(), ~6u, 0u, 0u);  // (from the original)
        gptr<Local_00281e00_r4_2> r4_2 = gptr<Local_00281e00_r4_2>(*global_0095386c);
        gptr<Local_00281e00_ea_6> ea_6 = gptr<Local_00281e00_ea_6>(frame.at(0x30).addr());  // (from the original)
        u32 r0_6 = ea_6->word_0;
        u32 r1_5 = ea_6->word_4;
        u32 r2_4 = ea_6->word_8;
        gptr<Local_00281e00_ea_7> ea_7 = gptr<Local_00281e00_ea_7>(frame.at(8).addr());
        ea_7->word_0 = r0_6;
        ea_7->word_4 = r1_5;
        ea_7->word_8 = r2_4;
        gptr<Local_00281e00_ea_8> ea_8 = gptr<Local_00281e00_ea_8>(frame.at(0x18).addr());  // (from the original)
        u32 r1_6 = ea_8->word_4;
        frame->word_0 = ea_8->word_0;
        frame->word_4 = r1_6;
        u32 r0_7 = call_00301564(r7_1, r8_1, r11_1, frame->word_14);
        u32 zf_1 = r0_7 == 0;
        u32 r0_8 = u32(r4_2->byte_0) & ~0x40u;  // (from the original)
        if (!zf_1) {
            r0_8 |= 0x40u;  // (from the original)
        }
        r4_2->byte_0 = u8(r0_8);
        gptr<Local_00281e00_ea_9> ea_9 = gptr<Local_00281e00_ea_9>(frame.at(0x3c).addr());  // (from the original)
        u32 r4_3 = ea_9->word_0;
        u32 r5_2 = ea_9->word_4;
        u32 r6_2 = ea_9->word_8;
        u32 r7_2 = ea_9->word_c;
        u32 r8_2 = ea_9->word_10;
        u32 r9_1 = ea_9->word_14;
        u32 r10_1 = ea_9->word_18;
        u32 r11_2 = ea_9->word_1c;
        guest::cpu()->r[4] = r4_3;
        guest::cpu()->r[5] = r5_2;
        guest::cpu()->r[6] = r6_2;
        guest::cpu()->r[7] = r7_2;
        guest::cpu()->r[8] = r8_2;
        guest::cpu()->r[9] = r9_1;
        guest::cpu()->r[10] = r10_1;
        guest::cpu()->r[11] = r11_2;
        return;
    }
    gptr<Local_00281e00_r0_9> r0_9 = gptr<Local_00281e00_r0_9>(*global_0095386c);
    r0_9->byte_0 = u8(u32(r0_9->byte_0) & ~0x40u);  // (from the original)
    gptr<Local_00281e00_ea_10> ea_10 = gptr<Local_00281e00_ea_10>(frame.at(0x3c).addr());  // (from the original)
    u32 r4_4 = ea_10->word_0;
    u32 r5_3 = ea_10->word_4;
    u32 r6_3 = ea_10->word_8;
    u32 r7_3 = ea_10->word_c;
    u32 r8_3 = ea_10->word_10;
    u32 r9_2 = ea_10->word_14;
    u32 r10_2 = ea_10->word_18;
    u32 r11_3 = ea_10->word_1c;
    guest::cpu()->r[4] = r4_4;
    guest::cpu()->r[5] = r5_3;
    guest::cpu()->r[6] = r6_3;
    guest::cpu()->r[7] = r7_3;
    guest::cpu()->r[8] = r8_3;
    guest::cpu()->r[9] = r9_2;
    guest::cpu()->r[10] = r10_2;
    guest::cpu()->r[11] = r11_3;
}

}  // namespace d_00281e00
GUEST_EXPORT(0x00281e00, d_00281e00::f_00281e00);

// f_00282b44: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00282b44 {

inline guest::global<u8, 0x0094ddfb> global_0094ddfb;
inline guest::global<u8, 0x0094ddfc> global_0094ddfc;

void f_00282b44(u32 r0) {
    *global_0094ddfb = 4;
    *global_0094ddfc = u8(u32(*global_0094ddfc) & ~lsl_r(1u, r0 & 0xff));  // (from the original)
    guest::cpu()->r[1] = 0x94ddf8u;  // (from the original)
}

}  // namespace d_00282b44
GUEST_EXPORT(0x00282b44, d_00282b44::f_00282b44);

// f_00282b68: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00282b68 {

struct __attribute__((packed)) Object_00282b68_0 {
    u8 byte_0;
    u8 byte_1;
    u8 byte_2;
    u8 unknown_3[0x2];  // (not used here)
    u8 byte_5;
};
GUEST_OFFSET(Object_00282b68_0, byte_0, 0x0);
GUEST_OFFSET(Object_00282b68_0, byte_1, 0x1);
GUEST_OFFSET(Object_00282b68_0, byte_2, 0x2);
GUEST_OFFSET(Object_00282b68_0, byte_5, 0x5);


void f_00282b68(gptr<Object_00282b68_0> arg0) {
    arg0->byte_0 = 0;
    arg0->byte_1 = 0xff;  // (from the original)
    arg0->byte_2 = 4;
    arg0->byte_5 = 0;
}

}  // namespace d_00282b68
GUEST_EXPORT(0x00282b68, d_00282b68::f_00282b68);

// f_00282c44: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00282c44 {

inline guest::global<u8, 0x0094ddfc> global_0094ddfc;

void f_00282c44(u32 r0, u32 r1) {
    u32 zf_1 = r1 == 0;
    u32 r0_1 = lsl_r(1u, r0 & 0xff);  // (from the original)
    u32 r1_1 = *global_0094ddfc;
    if (zf_1) {
        *global_0094ddfc = u8(r1_1 & ~r0_1);
    } else {
        r1_1 |= r0_1;
        *global_0094ddfc = u8(r1_1);
    }
    guest::cpu()->r[1] = r1_1;
}

}  // namespace d_00282c44
GUEST_EXPORT(0x00282c44, d_00282c44::f_00282c44);

// f_00282c78: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00282c78 {

inline guest::global<u8, 0x0094ddf8> global_0094ddf8;
inline guest::global<u8, 0x0094ddf9> global_0094ddf9;
inline guest::global<u8, 0x0094ddfa> global_0094ddfa;
inline guest::global<u8, 0x0094ddfb> global_0094ddfb;
inline guest::global<u8, 0x0094ddfd> global_0094ddfd;

u32 f_00282c78() {
    *global_0094ddf8 = 0;
    *global_0094ddf9 = 0xff;  // (from the original)
    *global_0094ddfa = 4;
    *global_0094ddfd = 0;
    *global_0094ddfb = 4;
    return 0x94ddf8u;  // (from the original)
}

}  // namespace d_00282c78
GUEST_EXPORT(0x00282c78, d_00282c78::f_00282c78);

// f_00282ca4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00282ca4 {

inline guest::global<u8, 0x0094ddfc> global_0094ddfc;
inline constexpr guest::Function<0x00305f2c, u32(u32, u32, u32, u32)> call_00305f2c;
inline constexpr guest::Function<0x00305f44, u32(u32)> call_00305f44;
inline constexpr guest::Function<0x007d0e24, u32(u32, u32, u32, u32)> call_007d0e24;

struct __attribute__((packed)) Frame_00282ca4 {
    u8 unknown_0[0x1];  // (not read or written by name)
    u8 byte_1;
    u8 byte_2;
    u8 byte_3;
};
GUEST_OFFSET(Frame_00282ca4, byte_1, 0x1);
GUEST_OFFSET(Frame_00282ca4, byte_2, 0x2);
GUEST_OFFSET(Frame_00282ca4, byte_3, 0x3);
GUEST_SIZE(Frame_00282ca4, 0x4);

void f_00282ca4(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_00282ca4> frame;  // the original's stack frame
    *frame.at<u32>(0) = r3;
    u32 r0_1 = call_00305f2c(r0, r1, r2, r3);
    if (r0_1 != 2u) {
        return;
    }
    u32 r0_2 = call_00305f44(r0_1);
    *global_0094ddfc = u8(u32(*global_0094ddfc) | lsl_r(1u, r0_2 & 0xff));  // (from the original)
    frame->byte_1 = 0xff;  // (from the original)
    frame->byte_2 = 4;
    frame->byte_3 = 0;
    *frame.at<u8>(0) = 4;
    call_007d0e24(4u, frame.at(0).addr(), 0xffu, 0u);  // (from the original)
}

}  // namespace d_00282ca4
GUEST_EXPORT_FRAMED(0x00282ca4, d_00282ca4::f_00282ca4, 0x4000);  // pushes {lr} first, as the original

// f_00282d6c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00282d6c {

inline guest::global<u8, 0x0094ddf8> global_0094ddf8;
inline guest::global<u8, 0x0094ddf9> global_0094ddf9;
inline guest::global<u8, 0x0094ddfa> global_0094ddfa;
inline guest::global<u8, 0x0094ddfb> global_0094ddfb;
inline guest::global<u8, 0x0094ddfc> global_0094ddfc;
inline guest::global<u8, 0x0094ddfd> global_0094ddfd;

u32 f_00282d6c() {
    *global_0094ddf8 = 0;
    *global_0094ddf9 = 0xff;  // (from the original)
    *global_0094ddfa = 4;
    *global_0094ddfd = 0;
    *global_0094ddfc = 0;
    *global_0094ddfb = 4;
    guest::cpu()->r[1] = 0u;
    return 0x94ddf8u;  // (from the original)
}

}  // namespace d_00282d6c
GUEST_EXPORT(0x00282d6c, d_00282d6c::f_00282d6c);

// f_0028311c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0028311c {

struct __attribute__((packed)) Object_0028311c_0 {
    u8 unknown_0[0x68];  // (not used here)
    u32 word_68;
};
GUEST_OFFSET(Object_0028311c_0, word_68, 0x68);

inline constexpr guest::Function<0x0030f48c, u32(u32, u32, u32, u32)> call_0030f48c;

void f_0028311c(gptr<Object_0028311c_0> arg0, u32 r1) {
    call_0030f48c(arg0->word_68 + 0x104u, 0x84516cu, r1, guest::cpu()->r[3]);  // (from the original)
    return;  // (from the original)
}

}  // namespace d_0028311c
GUEST_EXPORT(0x0028311c, d_0028311c::f_0028311c);

// f_00283ee0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00283ee0 {

inline constexpr guest::Function<0x00241cf0, u32(u32)> call_00241cf0;
inline constexpr guest::Function<0x00243038, u32(u32, u32, u32, u32)> call_00243038;
inline constexpr guest::Function<0x00315788, u32(u32, u32, u32, u32)> call_00315788;

u32 f_00283ee0(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 r2_1 = r3 == 0 ? 0u : r3 == 1u ? 1u : r3 == 2u ? 0x1eu : r3 == 3u ? 0x1fu : 0x2au;  // (from the original)
    u32 r0_1 = call_00315788(r0, r1, r2_1, r3);
    u32 r0_2 = call_00241cf0(r0_1);
    if (r0_2 == 0) {
    } else {
        frame.release();
        return call_00243038(r0_1, r2, guest::cpu()->r[2], guest::cpu()->r[3]);
    }
    return 0xfcu;  // (from the original)
}

}  // namespace d_00283ee0
GUEST_EXPORT(0x00283ee0, d_00283ee0::f_00283ee0);

// f_00284b38: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00284b38 {

inline guest::global<u16, 0x00950806> global_00950806;
inline constexpr guest::Function<0x002fcbb0, u32(u32, u32, u32, u32)> call_002fcbb0;

void f_00284b38() {
    u32 r1_1 = *global_00950806;
    call_002fcbb0(guest::cpu()->r[0], r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_00284b38
GUEST_EXPORT(0x00284b38, d_00284b38::f_00284b38);

// f_00284b58: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00284b58 {

struct __attribute__((packed)) Local_00284b58_ea_1 {
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
};
GUEST_OFFSET(Local_00284b58_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_00284b58_ea_1, word_4, 0x4);
GUEST_OFFSET(Local_00284b58_ea_1, word_8, 0x8);
GUEST_OFFSET(Local_00284b58_ea_1, word_c, 0xc);
GUEST_OFFSET(Local_00284b58_ea_1, word_10, 0x10);
GUEST_OFFSET(Local_00284b58_ea_1, word_14, 0x14);
GUEST_OFFSET(Local_00284b58_ea_1, word_18, 0x18);
GUEST_OFFSET(Local_00284b58_ea_1, word_1c, 0x1c);
GUEST_OFFSET(Local_00284b58_ea_1, word_20, 0x20);
GUEST_OFFSET(Local_00284b58_ea_1, word_24, 0x24);
GUEST_OFFSET(Local_00284b58_ea_1, word_28, 0x28);
GUEST_OFFSET(Local_00284b58_ea_1, word_2c, 0x2c);
GUEST_OFFSET(Local_00284b58_ea_1, word_30, 0x30);

struct __attribute__((packed)) Local_00284b58_ea_2 {
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
GUEST_OFFSET(Local_00284b58_ea_2, word_0, 0x0);
GUEST_OFFSET(Local_00284b58_ea_2, word_4, 0x4);
GUEST_OFFSET(Local_00284b58_ea_2, word_8, 0x8);
GUEST_OFFSET(Local_00284b58_ea_2, word_c, 0xc);
GUEST_OFFSET(Local_00284b58_ea_2, word_10, 0x10);
GUEST_OFFSET(Local_00284b58_ea_2, word_14, 0x14);
GUEST_OFFSET(Local_00284b58_ea_2, word_18, 0x18);
GUEST_OFFSET(Local_00284b58_ea_2, word_1c, 0x1c);
GUEST_OFFSET(Local_00284b58_ea_2, word_20, 0x20);

struct __attribute__((packed)) Local_00284b58_r1_1 {
    float float_0;
};
GUEST_OFFSET(Local_00284b58_r1_1, float_0, 0x0);

inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> call_002f74c8;
inline constexpr guest::Function<0x002f74e0, u32(u32, u32)> call_002f74e0;
inline constexpr guest::Function<0x00315788, u32(u32, u32, u32, u32)> call_00315788;
inline constexpr guest::Function<0x0052f144, u32(u32)> call_0052f144;
inline constexpr guest::Function<0x0052f224, u32(u32, u32)> call_0052f224;
inline constexpr guest::Function<0x006a5e34, u32(u32, u32)> call_006a5e34;
inline constexpr guest::Function<0x006a5f0c, u32(u32, u32, u32)> call_006a5f0c;
inline constexpr guest::Function<0x007481ec, u32(u32, u32)> call_007481ec;
inline constexpr guest::Function<0x0074824c, u32(u32, u32)> call_0074824c;
inline constexpr guest::Function<0x00748284, u32(u32, u32)> call_00748284;

struct __attribute__((packed)) Frame_00284b58 {
    u8 unknown_0[0x8];  // (not read or written by name)
    u32 word_8;
    u32 word_c;
    float float_10;
    u8 unknown_14[0x4];  // (not read or written by name)
    float float_18;
    float float_1c;
    u8 unknown_20[0x4];  // (not read or written by name)
    float float_24;
    u8 unknown_28[0x30];  // (not read or written by name)
    u32 word_58;
    u8 unknown_5c[0x24];  // (not read or written by name)
};
GUEST_OFFSET(Frame_00284b58, word_8, 0x8);
GUEST_OFFSET(Frame_00284b58, word_c, 0xc);
GUEST_OFFSET(Frame_00284b58, float_10, 0x10);
GUEST_OFFSET(Frame_00284b58, float_18, 0x18);
GUEST_OFFSET(Frame_00284b58, float_1c, 0x1c);
GUEST_OFFSET(Frame_00284b58, float_24, 0x24);
GUEST_OFFSET(Frame_00284b58, word_58, 0x58);
GUEST_SIZE(Frame_00284b58, 0x80);

void f_00284b58(u32 r0, u32 r1, u32 r2, u32 r3, float S0, float S1) {
    guest::StackFrameOf<Frame_00284b58> frame;  // the original's stack frame
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r10 = guest::cpu()->r[10];
    u32 r11 = guest::cpu()->r[11];
    u32 r14 = guest::cpu()->r[14];
    u32 r0_13 = 0;
    gptr<Local_00284b58_ea_1> ea_1 = gptr<Local_00284b58_ea_1>(frame.at(0x4c).addr());  // (from the original)
    ea_1->word_0 = r0;
    ea_1->word_4 = r1;
    ea_1->word_8 = r2;
    ea_1->word_c = r3;
    ea_1->word_10 = r4;
    ea_1->word_14 = r5;
    ea_1->word_18 = r6;
    ea_1->word_1c = r7;
    ea_1->word_20 = r8;
    ea_1->word_24 = r9;
    ea_1->word_28 = r10;
    ea_1->word_2c = r11;
    ea_1->word_30 = r14;
    r9 = r0;
    r10 = r1;
    r11 = r2;
    u32 r0_1 = call_002f74c8(r0, r1, r2, r3);
    u32 r0_2 = call_002f74e0(8u, r0_1);
    gptr<Local_00284b58_r1_1> r1_1 = gptr<Local_00284b58_r1_1>(guest::cpu()->r[1]);
    float S0_2 = guest::cpu()->s[0];
    float S1_2 = guest::cpu()->s[1];
    if (r0_2 != 0) {
        u32 r0_3 = call_006a5e34(r0_2, r1_1.addr());
        r1_1 = gptr<Local_00284b58_r1_1>(guest::cpu()->r[1]);
        S0_2 = guest::cpu()->s[0];
        S1_2 = guest::cpu()->s[1];
        if (r0_3 != 0) {
            r4 = ~0u;
            r6 = 0u;
            r5 = r4;
            r7 = r6;
            call_0052f224(frame.at(0x28).addr(), r0_3 + 0x10u);  // (from the original)
            call_0074824c(frame.at(0x38).addr(), frame.at(0x28).addr());  // (from the original)
            call_00748284(frame.at(0).addr(), frame.at(0x28).addr());  // (from the original)
            u32 r0_8 = call_007481ec(frame.at(0).addr(), frame.at(0x38).addr());  // (from the original)
            r3 = guest::cpu()->r[3];
            S0 = guest::cpu()->s[0];
            S1 = guest::cpu()->s[1];
            if (r0_8 != 0) {
                do {
                    u32 r8_1 = frame->word_c;
                    u32 r0_9 = frame->word_8;
                    guest::cpu()->s[0] = S0;
                    guest::cpu()->s[1] = S1;
                    u32 r0_10 = call_00315788(r0_9, r8_1, 0u, r3);
                    if (r0_10 == 0xeu || r0_10 == 0x12u || r0_10 == 0x11u || r0_10 == 0x13u || r0_10 == 0x2cu || r0_10 == 0x2bu || r0_10 == 0x14u || r0_10 == 0x2fu || r0_10 == 0x30u || r0_10 == 0x2eu || r0_10 == 0xf6u || r0_10 == 0xf7u || r0_10 == 0x2du) {  // (from the original)
                        if (frame->word_8 < r4) {
                            r4 = frame->word_8;
                        }
                        if (frame->word_c < r5) {
                            r5 = frame->word_c;
                        }
                        if (frame->word_8 > r6) {
                            r6 = frame->word_8;
                        }
                        if (frame->word_c > r7) {
                            r7 = frame->word_c;
                        }
                    }
                    call_0052f144(frame.at(0).addr());
                    r0_13 = call_007481ec(frame.at(0).addr(), frame.at(0x38).addr());  // (from the original)
                    r3 = guest::cpu()->r[3];
                    S0 = guest::cpu()->s[0];
                    S1 = guest::cpu()->s[1];
                    guest::preempt();
                } while (r0_13 != 0);
            }
            call_006a5f0c(frame.at(0x10).addr(), r4, r5);  // (from the original)
            call_006a5f0c(frame.at(0x1c).addr(), r6, r7);  // (from the original)
            r1_1 = gptr<Local_00284b58_r1_1>(0x85f2d8u);  // (from the original)
            *gptr<u32>(r9) = std::bit_cast<u32>(frame->float_10 - 16.0f);
            *gptr<u32>(r10) = std::bit_cast<u32>(frame->float_18 - r1_1->float_0);
            *gptr<u32>(r11) = std::bit_cast<u32>(frame->float_1c + 16.0f);
            S1_2 = r1_1->float_0;
            S0_2 = frame->float_24 + S1_2;
            *gptr<u32>(frame->word_58) = std::bit_cast<u32>(S0_2);
        }
    }
    gptr<Local_00284b58_ea_2> ea_2 = gptr<Local_00284b58_ea_2>(frame.at(0x5c).addr());  // (from the original)
    u32 r4_1 = ea_2->word_0;
    u32 r5_1 = ea_2->word_4;
    u32 r6_1 = ea_2->word_8;
    u32 r7_1 = ea_2->word_c;
    u32 r8_2 = ea_2->word_10;
    u32 r9_1 = ea_2->word_14;
    u32 r10_1 = ea_2->word_18;
    u32 r11_1 = ea_2->word_1c;
    guest::cpu()->r[1] = r1_1.addr();
    guest::cpu()->r[4] = r4_1;
    guest::cpu()->r[5] = r5_1;
    guest::cpu()->r[6] = r6_1;
    guest::cpu()->r[7] = r7_1;
    guest::cpu()->r[8] = r8_2;
    guest::cpu()->r[9] = r9_1;
    guest::cpu()->r[10] = r10_1;
    guest::cpu()->r[11] = r11_1;
    guest::cpu()->s[0] = S0_2;
    guest::cpu()->s[1] = S1_2;
}

}  // namespace d_00284b58
GUEST_EXPORT(0x00284b58, d_00284b58::f_00284b58);

// f_00284ee4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00284ee4 {

struct __attribute__((packed)) Object_00284ee4_2 {
    u32 word_0;
};
GUEST_OFFSET(Object_00284ee4_2, word_0, 0x0);

struct __attribute__((packed)) Object_00284ee4_3 {
    u32 word_0;
};
GUEST_OFFSET(Object_00284ee4_3, word_0, 0x0);

inline constexpr guest::Function<0x00284b58, u32(u32, u32, u32, u32)> call_00284b58;
inline constexpr guest::Function<0x003171b4, u32(u32, u32, u32)> call_003171b4;

u32 f_00284ee4(u32 r0, u32 r1, gptr<Object_00284ee4_2> arg2, gptr<Object_00284ee4_3> arg3) {
    guest::StackFrame frame(0x1c);  // the original's stack frame
    call_00284b58(frame.at(0).addr(), frame.at(8).addr(), frame.at(0xc).addr(), frame.at(0x14).addr());  // (from the original)
    call_003171b4(r0, r1, frame.at(0).addr());
    call_003171b4(arg2.addr(), arg3.addr(), frame.at(0xc).addr());  // (from the original)
    arg2->word_0 = arg2->word_0 - 1u;
    u32 r0_2 = arg3->word_0 - 1u;
    arg3->word_0 = r0_2;
    return r0_2;
}

}  // namespace d_00284ee4
GUEST_EXPORT_FRAMED(0x00284ee4, d_00284ee4::f_00284ee4, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_00285184: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00285184 {

struct __attribute__((packed)) Local_00285184_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_00285184_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_00285184_ea_1, word_4, 0x4);

inline constexpr u32 vtable_sead__FixedSafeString_256_ = 0x009048b0u;
inline guest::global<u8, 0x008c9f1c> global_008c9f1c;
inline constexpr guest::Function<0x0018fc94, u32(u32)> call_0018fc94;
inline constexpr guest::Function<0x001bab40, u32(u32, u32)> call_001bab40;
inline constexpr guest::Function<0x002563d8, u32(u32, u32, u32, u32)> call_002563d8;
inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> call_002f74c8;
inline constexpr guest::Function<0x00544f18, u32(u32)> call_00544f18;
inline constexpr guest::Function<0x00544fec, u32(u32, u32)> call_00544fec;
inline constexpr guest::Function<0x0054a644, u32(u32, u32)> call_0054a644;
inline constexpr guest::Function<0x005b3f88, u32(u32)> call_005b3f88;
inline constexpr guest::Function<0x006cb9fc, u32(u32)> call_006cb9fc;

struct __attribute__((packed)) Frame_00285184 {
    u32 word_0;
    u32 word_4;
    u8 unknown_8[0x4];  // (not read or written by name)
    u8 byte_c;
    u8 unknown_d[0x133];  // (not read or written by name)
};
GUEST_OFFSET(Frame_00285184, word_0, 0x0);
GUEST_OFFSET(Frame_00285184, word_4, 0x4);
GUEST_OFFSET(Frame_00285184, byte_c, 0xc);
GUEST_SIZE(Frame_00285184, 0x140);

u32 f_00285184(u32 r0) {
    guest::StackFrameOf<Frame_00285184> frame;  // the original's stack frame
    gptr<Local_00285184_ea_1> ea_1 = gptr<Local_00285184_ea_1>(frame.at(4).addr());
    ea_1->word_0 = frame.at(0xc).addr();  // (from the original)
    ea_1->word_4 = 0x100;  // (from the original)
    u32 r3_1 = *global_008c9f1c;
    u32 r1_1 = frame->word_4 - 1u;
    *gptr<u8>(r1_1 + 0x100u) = u8(r3_1);  // (from the original)
    frame->byte_c = u8(u32(*global_008c9f1c));
    frame->word_0 = vtable_sead__FixedSafeString_256_;
    u32 r0_1 = call_002f74c8(0x9048b0u, r1_1, 0x100u, r3_1);  // (from the original)
    u32 r0_2 = call_005b3f88(r0_1);
    if (r0_2 != 6u) {
        u32 r0_3 = call_002f74c8(r0_2, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
        if (r0_3 == 0x25u) {  // (from the original)
            u32 r0_4 = call_006cb9fc(r0_3);
            if (r0_4 == 0) {
                u32 r0_5 = frame.at(0x110).addr();  // (from the original)
                call_0054a644(r0_5, frame.at(0).addr());
                call_00544fec(r0_5, 0x28543cu);  // (from the original)
                call_00544f18(r0_5);
                goto L_285358;
            }
        }
        u32 r0_6 = frame.at(0x110).addr();  // (from the original)
        call_0054a644(r0_6, frame.at(0).addr());
        call_00544fec(r0_6, 0x28542cu);  // (from the original)
        u32 r0_7 = call_0018fc94(0xa5u);  // (from the original)
        call_00544fec(r0_6, r0_7);
        call_00544f18(r0_6);
    } else {
        u32 r0_8 = call_002f74c8(r0_2, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
        u32 zf_1 = r0_8 == 0x4bu;  // (from the original)
        if (zf_1) {
            u32 zf_2 = *gptr<u32>(r0 + 8u) == 1u;
            u32 r1_10 = frame.at(0).addr();
            u32 r0_9 = frame.at(0x110).addr();  // (from the original)
            if (zf_2) {
                call_0054a644(r0_9, r1_10);
                call_00544fec(r0_9, 0x2853ecu);  // (from the original)
                call_00544f18(r0_9);
            } else {
                call_0054a644(r0_9, r1_10);
                call_00544fec(r0_9, 0x2853d0u);  // (from the original)
                call_00544f18(r0_9);
            }
        } else {
            u32 zf_3 = *gptr<u32>(r0 + 8u) == 1u;
            u32 r1_13 = frame.at(0).addr();
            u32 r0_10 = frame.at(0x110).addr();  // (from the original)
            if (zf_3) {
                call_0054a644(r0_10, r1_13);
                call_00544fec(r0_10, 0x28540cu);  // (from the original)
                call_00544f18(r0_10);
            } else {
                call_0054a644(r0_10, r1_13);
                call_00544fec(r0_10, 0x2853b8u);  // (from the original)
                call_00544f18(r0_10);
            }
        }
    }
L_285358:;
    call_001bab40(r0 + 0x184u, frame.at(0).addr());  // (from the original)
    frame.release();
    return call_002563d8(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_00285184
GUEST_EXPORT(0x00285184, d_00285184::f_00285184);

// f_00286558: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00286558 {


u32 f_00286558(u32 r0) {
    u32 r1 = 0;
    u32 r3 = 0;
    u32 r5 = 0u;
    u32 r2 = r5;
    do {
        r3 = 0u;
        r1 = r3;
        do {
            u32 r12_1 = r1 * 5u + r2;
            r1 += 1u;
            if (*gptr<u32>(*gptr<u32>(r0 + (r12_1 << 2) + 0x61cu) + 0x430u) == 0) {  // (from the original)
                r3 += 1u;
            }
            guest::preempt();
        } while (r1 < 5u);
        if (r3 == 4u) {
            r5 += 1u;
        }
        r2 += 1u;
        guest::preempt();
    } while (r2 < 5u);
    r2 = 0u;
    do {
        r3 = 0u;
        r1 = r3;
        u32 r12 = r2 * 5u;
        do {
            u32 r4_1 = r12 + r1;
            r1 += 1u;
            if (*gptr<u32>(*gptr<u32>(r0 + (r4_1 << 2) + 0x61cu) + 0x430u) == 0) {  // (from the original)
                r3 += 1u;
            }
            guest::preempt();
        } while (r1 < 5u);
        if (r3 == 4u) {
            r5 += 1u;
        }
        r2 += 1u;
        guest::preempt();
    } while (r2 < 5u);
    r2 = 0u;
    r1 = r2;
    do {
        u32 r3_1 = r1 * 3u;
        r1 += 1u;
        if (*gptr<u32>(*gptr<u32>(r0 + (r3_1 << 3) + 0x61cu) + 0x430u) == 0) {  // (from the original)
            r2 += 1u;
        }
        guest::preempt();
    } while (r1 < 5u);
    r3 = 0u;
    if (r2 == 4u) {
        r5 += 1u;
    }
    r1 = r3;
    do {
        u32 r2_1 = (r1 << 2) + 4u;
        r1 += 1u;
        if (*gptr<u32>(*gptr<u32>(r0 + (r2_1 << 2) + 0x61cu) + 0x430u) == 0) {  // (from the original)
            r3 += 1u;
        }
        guest::preempt();
    } while (r1 < 5u);
    if (r3 == 4u) {
        r5 += 1u;
    }
    return r5;
}

}  // namespace d_00286558
GUEST_EXPORT_FRAMED(0x00286558, d_00286558::f_00286558, 0x30);  // pushes {r4, r5} first, as the original

// f_00286668: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00286668 {

inline guest::global<u32, 0x00848188> global_00848188;
inline guest::global<u32, 0x0084818c> global_0084818c;
inline constexpr guest::Function<0x00817eec, u32(u32, u32, u32)> call_00817eec;

void f_00286668(u32 r0) {
    call_00817eec(r0 + 0x28u, *global_00848188, *global_0084818c);  // (from the original)
}

}  // namespace d_00286668
GUEST_EXPORT_FRAMED(0x00286668, d_00286668::f_00286668, 0x4010);  // pushes {r4, lr} first, as the original

// f_00287c4c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00287c4c {

inline constexpr u32 vtable_BingoMassBase = 0x008edc6cu;
inline constexpr u32 vtable_BsMenuBingoCard = 0x008f0390u;
inline constexpr u32 vtable_BsMenuBingoCard_at_28 = 0x008f03fcu;
inline constexpr u32 vtable_ButtonActionControlTouchOkAnmSwitch = 0x008f7224u;
inline constexpr guest::Function<0x002f76ad, u32(u32, u32, u32, u32)> call_002f76ac;
inline constexpr guest::Function<0x002f7710, u32(u32)> call_002f7710;
inline constexpr guest::Function<0x003432e4, u32(u32)> call_003432e4;
inline constexpr guest::Function<0x00567ef0, u32(u32)> call_00567ef0;
inline constexpr guest::Function<0x0056988c, u32(u32, u32)> call_0056988c;
inline constexpr guest::Function<0x005bf744, u32(u32)> call_005bf744;
inline constexpr guest::Function<0x005e3194, u32(u32, u32, u32, u32)> call_005e3194;
inline constexpr guest::Function<0x006aaa30, u32(u32, u32)> call_006aaa30;

u32 f_00287c4c(gptr<BsMenuBingoCard> arg0, u32 r1_unused, u32 r2_unused, u32 r3) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    arg0->word_0 = vtable_BsMenuBingoCard;
    arg0->word_28 = vtable_BsMenuBingoCard_at_28;
    arg0->word_7e20 = vtable_BingoMassBase;
    u32 r0_1 = arg0.addr() + 0x8258u;  // (from the original)
    call_005e3194(r0_1, 0x8edc6cu, 0x8f03fcu, r3);  // (from the original)
    arg0->word_811c = vtable_ButtonActionControlTouchOkAnmSwitch;
    call_0056988c(r0_1 - 0x30u, 0x8f7224u);  // (from the original)
    call_0056988c(r0_1 - 0x58u, guest::cpu()->r[1]);  // (from the original)
    call_002f7710(r0_1 - 0x13cu);  // (from the original)
    call_003432e4(r0_1 - 0x270u);  // (from the original)
    call_0056988c(r0_1 - 0x298u, guest::cpu()->r[1]);  // (from the original)
    call_0056988c(r0_1 - 0x2c0u, guest::cpu()->r[1]);  // (from the original)
    call_0056988c(r0_1 - 0x2e8u, guest::cpu()->r[1]);  // (from the original)
    u32 r0_10 = call_005bf744(r0_1 - 0x434u);  // (from the original)
    call_002f76ac(r0_10 - 0x77a4u, 0x283768u, 0x4fcu, 0x18u);  // (from the original)
    call_0056988c(r0_10 - 0x7830u, guest::cpu()->r[1]);  // (from the original)
    call_0056988c(r0_10 - 0x7858u, guest::cpu()->r[1]);  // (from the original)
    call_0056988c(r0_10 - 0x7880u, guest::cpu()->r[1]);  // (from the original)
    u32 r0_16 = call_005bf744(r0_10 - 0x79ccu);  // (from the original)
    call_0056988c(r0_16 - 0x28u, guest::cpu()->r[1]);  // (from the original)
    call_0056988c(r0_16 - 0x50u, guest::cpu()->r[1]);  // (from the original)
    call_0056988c(r0_16 - 0x78u, guest::cpu()->r[1]);  // (from the original)
    u32 r0_21 = call_005bf744(r0_16 - 0x1c4u);  // (from the original)
    u32 r0_23 = call_00567ef0(r0_21 - 0x248u);  // (from the original)
    frame.release();
    return call_006aaa30(r0_23 - 0x4cu, guest::cpu()->r[1]);  // (from the original)
}

}  // namespace d_00287c4c
GUEST_EXPORT(0x00287c4c, d_00287c4c::f_00287c4c);

// f_002882b4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002882b4 {

struct __attribute__((packed)) Object_002882b4_0 {
    u8 unknown_0[0x3a0];  // (not used here)
    u32 word_3a0;
};
GUEST_OFFSET(Object_002882b4_0, word_3a0, 0x3a0);

inline guest::global<u16, 0x008c9f1e> global_008c9f1e;

void f_002882b4(gptr<Object_002882b4_0> arg0) {
    *gptr<u16>(arg0->word_3a0) = u16(u32(*global_008c9f1e));
}

}  // namespace d_002882b4
GUEST_EXPORT(0x002882b4, d_002882b4::f_002882b4);

// f_00289b5c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00289b5c {

inline constexpr u32 vtable_ComButton2Lyt = 0x008ee228u;
inline constexpr u32 vtable_Control2Button = 0x008ef284u;
inline constexpr u32 vtable_Control2Button_at_e4 = 0x008ef2c8u;
inline constexpr u32 vtable_BsMenuMiiSelect = 0x008f0490u;
inline constexpr u32 vtable_BsMenuMiiSelect_at_28 = 0x008f04fcu;
inline constexpr u32 vtable_ComButtonLytBase = 0x008f18f4u;
inline constexpr u32 vtable_ItemSelectNameWindow = 0x008f47a0u;
inline constexpr guest::Function<0x002f76ad, u32(u32, u32, u32, u32)> call_002f76ac;
inline constexpr guest::Function<0x002f770c, u32(u32)> call_002f770c;
inline constexpr guest::Function<0x002f7710, u32(u32)> call_002f7710;
inline constexpr guest::Function<0x00567ef0, u32(u32, u32)> call_00567ef0;
inline constexpr guest::Function<0x0056988c, u32(u32)> call_0056988c;
inline constexpr guest::Function<0x005bf744, u32(u32)> call_005bf744;
inline constexpr guest::Function<0x005e3194, u32(u32, u32)> call_005e3194;
inline constexpr guest::Function<0x006aaa30, u32(u32, u32)> call_006aaa30;

u32 f_00289b5c(gptr<BsMenuMiiSelect> arg0) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    arg0->word_0 = vtable_BsMenuMiiSelect;
    arg0->word_28 = vtable_BsMenuMiiSelect_at_28;
    call_002f76ac(arg0.addr() + 0x48e8u, 0x4e0a44u, 0x24u, 0xau);  // (from the original)
    arg0->word_1e70 = vtable_ComButton2Lyt;
    u32 r4_1 = arg0.addr() + 0x2208u;  // (from the original)
    arg0->word_22ec = vtable_Control2Button_at_e4;
    arg0->word_2208 = vtable_Control2Button;
    call_002f76ac(r4_1 + 0x118u, 0x2e0b3cu, 0x518u, 2u);  // (from the original)
    call_002f770c(r4_1);
    arg0->word_1e70 = vtable_ComButtonLytBase;
    u32 r0_4 = call_00567ef0(r4_1 - 0x248u, 0x8f18f4u);  // (from the original)
    u32 r0_6 = call_005bf744(r0_4 - 0x14cu);  // (from the original)
    call_002f76ac(r0_6 - 0x8c4u, 0x2b6ef4u, 0xe0u, 0xau);  // (from the original)
    call_002f76ac(r0_6 - 0x1184u, 0x2b6ef4u, 0xe0u, 0xau);  // (from the original)
    u32 r0_9 = r0_6 - 0x1268u;  // (from the original)
    call_002f7710(r0_9);
    u32 r0_10 = r0_9 - 0xe4u;  // (from the original)
    call_002f7710(r0_10);
    *gptr<u32>(r0_10 - 0x4f0u) = vtable_ItemSelectNameWindow;  // (from the original)
    u32 r0_11 = r0_10 - 0xd4u;  // (from the original)
    call_005e3194(r0_11, 0x8f47a0u);  // (from the original)
    u32 r0_12 = r0_11 - 0x28u;  // (from the original)
    call_0056988c(r0_12);
    u32 r0_13 = r0_12 - 0x28u;  // (from the original)
    call_0056988c(r0_13);
    u32 r0_15 = call_005bf744(r0_13 - 0x15cu);  // (from the original)
    u32 r0_17 = call_00567ef0(r0_15 - 0x24cu, guest::cpu()->r[1]);  // (from the original)
    call_002f76ac(r0_17 - 0x1b4u, 0x56988cu, 0x28u, 0xau);  // (from the original)
    u32 r0_19 = r0_17 - 0x1dcu;  // (from the original)
    call_0056988c(r0_19);
    u32 r0_20 = r0_19 - 0x28u;  // (from the original)
    call_0056988c(r0_20);
    u32 r0_21 = r0_20 - 0x28u;  // (from the original)
    call_0056988c(r0_21);
    u32 r0_22 = r0_21 - 0x28u;  // (from the original)
    call_0056988c(r0_22);
    u32 r0_23 = r0_22 - 0x28u;  // (from the original)
    call_0056988c(r0_23);
    u32 r0_25 = call_005bf744(r0_23 - 0x14cu);  // (from the original)
    u32 r0_27 = call_00567ef0(r0_25 - 0x248u, guest::cpu()->r[1]);  // (from the original)
    frame.release();
    return call_006aaa30(r0_27 - 0x4cu, guest::cpu()->r[1]);  // (from the original)
}

}  // namespace d_00289b5c
GUEST_EXPORT(0x00289b5c, d_00289b5c::f_00289b5c);

// f_00289ce8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00289ce8 {

struct __attribute__((packed)) Object_00289ce8_0 {
    u8 unknown_0[0x628];  // (not used here)
    u32 word_628;
    u32 word_62c;
    u32 word_630;
};
GUEST_OFFSET(Object_00289ce8_0, word_628, 0x628);
GUEST_OFFSET(Object_00289ce8_0, word_62c, 0x62c);
GUEST_OFFSET(Object_00289ce8_0, word_630, 0x630);

inline constexpr guest::Function<0x00301da8, u32(u32, u32, u32, u32)> call_00301da8;
inline constexpr guest::Function<0x00312bd0, u32(u32, u32, u32, u32)> call_00312bd0;
inline constexpr guest::Function<0x00312c4c, u32(u32, u32, u32, u32)> call_00312c4c;
inline constexpr guest::Function<0x00312cb0, u32(u32)> call_00312cb0;
inline constexpr guest::Function<0x005e2e50, u32(u32, u32)> call_005e2e50;
inline constexpr guest::Function<0x005e2f94, u32(u32)> call_005e2f94;

struct __attribute__((packed)) Frame_00289ce8 {
    u32 word_0;
    u8 unknown_4[0x48];  // (not read or written by name)
};
GUEST_OFFSET(Frame_00289ce8, word_0, 0x0);
GUEST_SIZE(Frame_00289ce8, 0x4c);

void f_00289ce8(gptr<Object_00289ce8_0> arg0, u32 r1_unused, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_00289ce8> frame;  // the original's stack frame
    u32 r0_1 = arg0->word_62c;
    u32 r1_1 = 0x8532a7u;  // (from the original)
    u32 r5_1 = *gptr<s8>(r0_1 + r1_1);
    if (r0_1 == 2u) {
        u32 r0_3 = call_00301da8(arg0->word_628, r1_1, r2, r3);
        r1_1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (r0_3 != 0) {
            r5_1 += 1u;
        }
    }
    u32 r0_4 = arg0->word_630;
    if (s32(r0_4) < 1) {
        arg0->word_630 = r5_1;
    } else if (s32(r5_1) < s32(r0_4)) {
        arg0->word_630 = 1;
    }
    call_00312bd0(frame.at(4).addr(), r1_1, r2, r3);
    frame->word_0 = 4;
    call_00312c4c(frame.at(4).addr(), arg0->word_630, 2u, 6u);
    call_005e2e50(arg0.addr() + 0x7fcu, frame.at(4).addr());  // (from the original)
    call_005e2f94(arg0.addr() + 0x7fcu);  // (from the original)
    call_00312cb0(frame.at(4).addr());
}

}  // namespace d_00289ce8
GUEST_EXPORT_FRAMED(0x00289ce8, d_00289ce8::f_00289ce8, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_00289d90: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00289d90 {

inline constexpr u32 vtable_script__WordFix_15u_ = 0x00909af0u;
inline guest::global<u32, 0x0095decc> global_0095decc;
inline constexpr guest::Function<0x002f825c, u32(u32, u32)> call_002f825c;
inline constexpr guest::Function<0x003083bc, u32(u32, u32, u32, u32)> call_003083bc;
inline constexpr guest::Function<0x005e2e50, u32(u32, u32)> call_005e2e50;
inline constexpr guest::Function<0x005e2f94, u32(u32)> call_005e2f94;
inline constexpr guest::Function<0x005ea8f8, u32(u32, u32, u32, u32)> call_005ea8f8;
inline constexpr guest::Function<0x005ea964, u32(u32, u32, u32, u32)> call_005ea964;
inline constexpr guest::Function<0x005f4bfc, u32(u32)> call_005f4bfc;

struct __attribute__((packed)) Frame_00289d90 {
    u32 word_0;
    u8 unknown_4[0x4];  // (not read or written by name)
    u32 word_8;
    u8 unknown_c[0x34];  // (not read or written by name)
};
GUEST_OFFSET(Frame_00289d90, word_0, 0x0);
GUEST_OFFSET(Frame_00289d90, word_8, 0x8);
GUEST_SIZE(Frame_00289d90, 0x40);

u32 f_00289d90(u32 r0, u32 r1_unused, u32 r2_unused, u32 r3) {
    guest::StackFrameOf<Frame_00289d90> frame;  // the original's stack frame
    u32 res_1 = 0;
    u32 r3_4 = 0;
    u32 r5 = r0;
    u32 r0_1 = frame.at(8).addr();
    call_003083bc(r0_1, frame.at(0x20).addr(), 0xfu, r3);  // (from the original)
    u32 r6 = vtable_script__WordFix_15u_;
    *gptr<u32>(r0_1) = r6;
    u32 r0_2 = r0_1 + 0xcu;  // (from the original)
    call_005f4bfc(r0_2);
    u32 r4_1 = r0_2 - 0xcu;  // (from the original)
    call_002f825c(r0_2 + 0xcu, 0x1eu);  // (from the original)
    u32 r1 = 0x8906ecu;  // (from the original)
    r0 = r4_1 + 0x18u;  // (from the original)
    *gptr<u16>(r4_1 + 0x18u) = u16(u32(*gptr<u16>(r1)));  // (from the original)
    u32 r2 = 7u;
    do {
        u32 r3_3 = *gptr<u16>(r1);
        res_1 = r2 - 1u;
        r2 = res_1;
        *gptr<u16>(r0 + 2u) = u16(r3_3);
        r3_4 = *gptr<u16>(r1);
        u32 ea_2 = r0 + 4u;
        *gptr<u16>(ea_2) = u16(r3_4);
        r0 = ea_2;
        guest::preempt();
    } while (res_1 != 0);
    call_005ea8f8(*global_0095decc, 0u, r2, r3_4);
    u32 r1_3 = *gptr<u8>(r5 + 0x670u);  // (from the original)
    frame->word_0 = 0;
    if (r1_3 == 1u) {
        call_005ea964(*global_0095decc, frame.at(8).addr(), 0x8535f0u, 0x68u);  // (from the original)
    } else {
        call_005ea964(*global_0095decc, frame.at(8).addr(), 0x8535f0u, 0x69u);  // (from the original)
    }
    u32 r0_7 = r5 + 0x984u;  // (from the original)
    call_005e2e50(r0_7, frame.at(8).addr());
    call_005e2f94(r0_7);
    frame->word_8 = r6;
    return frame.at(8).addr();
}

}  // namespace d_00289d90
GUEST_EXPORT_FRAMED(0x00289d90, d_00289d90::f_00289d90, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0028a008: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0028a008 {

struct __attribute__((packed)) Object_0028a008_0 {
    u8 unknown_0[0x628];  // (not used here)
    u32 word_628;
    u32 word_62c;
    u32 word_630;
};
GUEST_OFFSET(Object_0028a008_0, word_628, 0x628);
GUEST_OFFSET(Object_0028a008_0, word_62c, 0x62c);
GUEST_OFFSET(Object_0028a008_0, word_630, 0x630);

inline constexpr guest::Function<0x00289ce8, u32(u32, u32)> call_00289ce8;
inline constexpr guest::Function<0x00301da8, u32(u32, u32)> call_00301da8;
inline constexpr guest::Function<0x00312bd0, u32(u32, u32, u32, u32)> call_00312bd0;
inline constexpr guest::Function<0x00312c4c, u32(u32, u32, u32, u32)> call_00312c4c;
inline constexpr guest::Function<0x00312cb0, u32(u32, u32)> call_00312cb0;
inline constexpr guest::Function<0x005e2e50, u32(u32, u32)> call_005e2e50;
inline constexpr guest::Function<0x005e2f94, u32(u32)> call_005e2f94;

struct __attribute__((packed)) Frame_0028a008 {
    u32 word_0;
    u8 unknown_4[0x48];  // (not read or written by name)
};
GUEST_OFFSET(Frame_0028a008, word_0, 0x0);
GUEST_SIZE(Frame_0028a008, 0x4c);

void f_0028a008(gptr<Object_0028a008_0> arg0, u32 r1_unused, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_0028a008> frame;  // the original's stack frame
    u32 r0_1 = arg0->word_628;
    if (s32(r0_1) < s32(0x7dcu)) {  // (from the original)
        arg0->word_628 = 0x802;  // (from the original)
    } else {
        r2 = 0x803u;  // (from the original)
        if (s32(r2) <= s32(r0_1)) {
            arg0->word_628 = 0x7dc;  // (from the original)
        }
    }
    call_00312bd0(frame.at(4).addr(), 0x7dcu, r2, r3);  // (from the original)
    frame->word_0 = 4;
    call_00312c4c(frame.at(4).addr(), arg0->word_628, 4u, 6u);
    call_005e2e50(arg0.addr() + 0x674u, frame.at(4).addr());  // (from the original)
    call_005e2f94(arg0.addr() + 0x674u);  // (from the original)
    u32 r1_4 = 0x8532a7u;  // (from the original)
    u32 r0_5 = arg0->word_62c;
    u32 r5_1 = *gptr<s8>(r0_5 + r1_4);
    if (r0_5 == 2u) {
        u32 r0_7 = call_00301da8(arg0->word_628, r1_4);
        r1_4 = guest::cpu()->r[1];
        if (r0_7 != 0) {
            r5_1 += 1u;
        }
    }
    if (s32(arg0->word_630) > s32(r5_1)) {
        arg0->word_630 = r5_1;
        call_00289ce8(arg0.addr(), r1_4);
        r1_4 = guest::cpu()->r[1];
    }
    call_00312cb0(frame.at(4).addr(), r1_4);
}

}  // namespace d_0028a008
GUEST_EXPORT_FRAMED(0x0028a008, d_0028a008::f_0028a008, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_0028a0d4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0028a0d4 {

struct __attribute__((packed)) Local_0028a0d4_r0_30 {
    u8 unknown_0[0x18];  // (not used here)
    u32 word_18;
    u32 word_1c;
    u32 word_20;
    u32 word_24;
    u32 word_28;
};
GUEST_OFFSET(Local_0028a0d4_r0_30, word_18, 0x18);
GUEST_OFFSET(Local_0028a0d4_r0_30, word_1c, 0x1c);
GUEST_OFFSET(Local_0028a0d4_r0_30, word_20, 0x20);
GUEST_OFFSET(Local_0028a0d4_r0_30, word_24, 0x24);
GUEST_OFFSET(Local_0028a0d4_r0_30, word_28, 0x28);

inline constexpr u32 vtable_script__WordFix_10u_ = 0x009098f8u;
inline guest::global<u32, 0x0095decc> global_0095decc;
inline constexpr guest::Function<0x003083bc, u32(u32, u32, u32)> call_003083bc;
inline constexpr guest::Function<0x00568a80, u32(u32, u32, u32, u32)> call_00568a80;
inline constexpr guest::Function<0x005e2c98, u32(u32, u32, u32)> call_005e2c98;
inline constexpr guest::Function<0x005e2e50, u32(u32, u32)> call_005e2e50;
inline constexpr guest::Function<0x005e2f94, u32(u32, u32)> call_005e2f94;
inline constexpr guest::Function<0x005ea8dc, u32(u32, u32)> call_005ea8dc;
inline constexpr guest::Function<0x005ea8f8, u32(u32, u32, u32, u32)> call_005ea8f8;
inline constexpr guest::Function<0x005ea964, u32(u32, u32, u32, u32)> call_005ea964;
inline constexpr guest::Function<0x005f4bfc, u32(u32)> call_005f4bfc;
inline constexpr guest::Function<0x005fdf68, u32(u32, u32, u32)> call_005fdf68;

struct __attribute__((packed)) Frame_0028a0d4 {
    u32 word_0;
    u32 word_4;
    u8 unknown_8[0x34];  // (not read or written by name)
};
GUEST_OFFSET(Frame_0028a0d4, word_0, 0x0);
GUEST_OFFSET(Frame_0028a0d4, word_4, 0x4);
GUEST_SIZE(Frame_0028a0d4, 0x3c);

void f_0028a0d4(u32 r0, u32 r1_unused, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_0028a0d4> frame;  // the original's stack frame
    u32 res_1 = 0;
    u32 r3_21 = 0;
    u32 r4 = r0;
    u32 r0_2 = call_00568a80(r0 + 0x294u, 0x28a47cu, r2, r3);  // (from the original)
    call_005e2c98(r4 + 0x674u, r0_2, 0u);  // (from the original)
    u32 r0_5 = call_00568a80(r4 + 0x294u, 0x28a484u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    call_005e2c98(r4 + 0x738u, r0_5, 0u);  // (from the original)
    u32 r0_8 = call_00568a80(r4 + 0x294u, 0x28a490u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    call_005e2c98(r4 + 0x7fcu, r0_8, 0u);  // (from the original)
    u32 r0_11 = call_00568a80(r4 + 0x294u, 0x28a498u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    call_005e2c98(r4 + 0x8c0u, r0_11, 0u);  // (from the original)
    u32 r0_14 = call_00568a80(r4 + 0x294u, 0x28a4a4u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    call_005e2c98(r4 + 0xbd0u, r0_14, 0u);  // (from the original)
    u32 r0_17 = call_00568a80(r4 + 0x294u, 0x28a4acu, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_18 = r4 + 0xc94u;  // (from the original)
    u32 r6 = r0_18;
    call_005e2c98(r0_18, r0_17, 0u);
    u32 r0_20 = call_00568a80(r4 + 0x294u, 0x28a4b8u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_21 = r4 + 0xd58u;  // (from the original)
    u32 r10 = r0_21;
    call_005e2c98(r0_21, r0_20, 0u);
    u32 r0_23 = call_00568a80(r4 + 0x294u, 0x28a4c0u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_24 = r4 + 0xfa4u;  // (from the original)
    u32 r11 = r0_24;
    call_005e2c98(r0_24, r0_23, 0u);
    u32 r0_26 = call_00568a80(r4 + 0x294u, 0x28a4ccu, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_27 = r4 + 0x1068u;  // (from the original)
    u32 r7 = r0_27;
    call_005e2c98(r0_27, r0_26, 0u);
    u32 r0_28 = frame.at(4).addr();
    call_003083bc(r0_28, frame.at(0x1c).addr(), 0xau);  // (from the original)
    u32 r5 = vtable_script__WordFix_10u_;
    *gptr<u32>(r0_28) = r5;
    u32 r0_29 = r0_28 + 0xcu;  // (from the original)
    call_005f4bfc(r0_29);
    gptr<Local_0028a0d4_r0_30> r0_30 = gptr<Local_0028a0d4_r0_30>(r0_29 - 0xcu);  // (from the original)
    u32 r9 = 0u;
    r0_30->word_18 = r9;
    r0_30->word_1c = r9;
    r0_30->word_20 = r9;
    r2 = 0x8906ecu;  // (from the original)
    r0_30->word_24 = r9;
    r0_30->word_28 = r9;
    u32 r1 = 5u;
    r0 = r0_30.addr() + 0x16u;  // (from the original)
    do {
        u32 r3_20 = *gptr<u16>(r2);
        res_1 = r1 - 1u;
        r1 = res_1;
        *gptr<u16>(r0 + 2u) = u16(r3_20);
        r3_21 = *gptr<u16>(r2);
        u32 ea_2 = r0 + 4u;
        *gptr<u16>(ea_2) = u16(r3_21);
        r0 = ea_2;
        guest::preempt();
    } while (res_1 != 0);
    call_005ea8f8(*global_0095decc, 0u, r2, r3_21);
    frame->word_0 = r9;
    call_005ea964(*global_0095decc, frame.at(4).addr(), 0x28a4e4u, 0x63u);  // (from the original)
    call_005ea8dc(*global_0095decc, 0u);
    call_005e2e50(r4 + 0xbd0u, frame.at(4).addr());  // (from the original)
    call_005e2f94(r4 + 0xbd0u, guest::cpu()->r[1]);  // (from the original)
    call_005ea8f8(*global_0095decc, 0u, guest::cpu()->r[2], guest::cpu()->r[3]);
    frame->word_0 = r9;
    call_005ea964(*global_0095decc, frame.at(4).addr(), 0x28a4e4u, 0x64u);  // (from the original)
    call_005ea8dc(*global_0095decc, 0u);
    call_005e2e50(r6, frame.at(4).addr());
    call_005e2f94(r6, guest::cpu()->r[1]);
    call_005ea8f8(*global_0095decc, 0u, guest::cpu()->r[2], guest::cpu()->r[3]);
    frame->word_0 = r9;
    call_005ea964(*global_0095decc, frame.at(4).addr(), 0x28a4e4u, 0x65u);  // (from the original)
    call_005ea8dc(*global_0095decc, 0u);
    call_005e2e50(r10, frame.at(4).addr());
    call_005e2f94(r10, guest::cpu()->r[1]);
    call_005ea8f8(*global_0095decc, 0u, guest::cpu()->r[2], guest::cpu()->r[3]);
    frame->word_0 = r9;
    call_005ea964(*global_0095decc, frame.at(4).addr(), 0x28a4e4u, 0xe3u);  // (from the original)
    call_005ea8dc(*global_0095decc, 0u);
    call_005e2e50(r11, frame.at(4).addr());
    call_005e2f94(r11, guest::cpu()->r[1]);
    call_005e2e50(r7, frame.at(4).addr());
    call_005e2f94(r7, guest::cpu()->r[1]);
    u32 r0_46 = call_00568a80(r4 + 0x3e0u, 0x28a4f0u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    call_005e2c98(r4 + 0x984u, r0_46, 0u);  // (from the original)
    u32 r0_49 = call_00568a80(r4 + 0x3e0u, 0x28a4fcu, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    call_005e2c98(r4 + 0xa48u, r0_49, 0u);  // (from the original)
    u32 r0_52 = call_00568a80(r4 + 0x3e0u, 0x28a508u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    call_005e2c98(r4 + 0xb0cu, r0_52, 0u);  // (from the original)
    u32 r0_55 = call_00568a80(r4 + 0x3e0u, 0x28a514u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_56 = r4 + 0xe1cu;  // (from the original)
    call_005e2c98(r0_56, r0_55, 0u);
    u32 r0_58 = call_00568a80(r4 + 0x3e0u, 0x28a520u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    call_005e2c98(r4 + 0xee0u, r0_58, 0u);  // (from the original)
    u32 r0_61 = call_00568a80(r4 + 0x3e0u, 0x28a4c0u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_62 = r4 + 0x112cu;  // (from the original)
    call_005e2c98(r0_62, r0_61, 0u);
    call_005ea8f8(*global_0095decc, 0u, guest::cpu()->r[2], guest::cpu()->r[3]);
    frame->word_0 = r9;
    call_005ea964(*global_0095decc, frame.at(4).addr(), 0x28a4e4u, 0x66u);  // (from the original)
    call_005ea8dc(*global_0095decc, 0u);
    call_005e2e50(r0_56, frame.at(4).addr());
    call_005e2f94(r0_56, guest::cpu()->r[1]);
    call_005ea8f8(*global_0095decc, 0u, guest::cpu()->r[2], guest::cpu()->r[3]);
    frame->word_0 = r9;
    call_005ea964(*global_0095decc, frame.at(4).addr(), 0x28a4e4u, 0x67u);  // (from the original)
    call_005ea8dc(*global_0095decc, 0u);
    call_005e2e50(r4 + 0xee0u, frame.at(4).addr());  // (from the original)
    call_005e2f94(r4 + 0xee0u, guest::cpu()->r[1]);  // (from the original)
    call_005fdf68(frame.at(0x30).addr(), 0x28a5fcu, 0xau);  // (from the original)
    u32 r1_23 = frame.at(0x30).addr();  // (from the original)
    call_005e2e50(r0_62, r1_23);
    call_005e2f94(r0_62, r1_23);
    frame->word_4 = r5;
}

}  // namespace d_0028a0d4
GUEST_EXPORT_FRAMED(0x0028a0d4, d_0028a0d4::f_0028a0d4, 0x4ff0);  // pushes {r4, r5, r6, r7, r8, r9, r10, r11, lr} first, as the original

// f_0028a600: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0028a600 {

struct __attribute__((packed)) Object_0028a600_0 {
    u8 unknown_0[0x628];  // (not used here)
    u32 word_628;
    u32 word_62c;
    u32 word_630;
};
GUEST_OFFSET(Object_0028a600_0, word_628, 0x628);
GUEST_OFFSET(Object_0028a600_0, word_62c, 0x62c);
GUEST_OFFSET(Object_0028a600_0, word_630, 0x630);

inline constexpr guest::Function<0x00289ce8, u32(u32, u32)> call_00289ce8;
inline constexpr guest::Function<0x00301da8, u32(u32, u32)> call_00301da8;
inline constexpr guest::Function<0x00312bd0, u32(u32, u32, u32, u32)> call_00312bd0;
inline constexpr guest::Function<0x00312c4c, u32(u32, u32, u32, u32)> call_00312c4c;
inline constexpr guest::Function<0x00312cb0, u32(u32, u32)> call_00312cb0;
inline constexpr guest::Function<0x005e2e50, u32(u32, u32)> call_005e2e50;
inline constexpr guest::Function<0x005e2f94, u32(u32)> call_005e2f94;

struct __attribute__((packed)) Frame_0028a600 {
    u32 word_0;
    u8 unknown_4[0x48];  // (not read or written by name)
};
GUEST_OFFSET(Frame_0028a600, word_0, 0x0);
GUEST_SIZE(Frame_0028a600, 0x4c);

void f_0028a600(gptr<Object_0028a600_0> arg0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_0028a600> frame;  // the original's stack frame
    u32 r0_1 = arg0->word_62c;
    if (s32(r0_1) < 1) {
        arg0->word_62c = 0xc;  // (from the original)
    } else {
        u32 res_1 = r0_1 - 0xcu;  // (from the original)
        u32 vf_1 = ((r0_1 ^ 0xcu) & (r0_1 ^ res_1)) >> 0x1f;  // (from the original)
        if (res_1 != 0 && s32(r0_1) >= 0xc) {  // (from the original)
            r0_1 = 1u;
        }
        if (!(res_1 == 0 || res_1 >> 0x1f != vf_1)) {  // (from the original)
            arg0->word_62c = r0_1;
        }
    }
    call_00312bd0(frame.at(4).addr(), r1, r2, r3);
    frame->word_0 = 4;
    call_00312c4c(frame.at(4).addr(), arg0->word_62c, 2u, 6u);
    call_005e2e50(arg0.addr() + 0x738u, frame.at(4).addr());  // (from the original)
    call_005e2f94(arg0.addr() + 0x738u);  // (from the original)
    u32 r1_4 = 0x8532a7u;  // (from the original)
    u32 r0_5 = arg0->word_62c;
    u32 r5_1 = *gptr<s8>(r0_5 + r1_4);
    if (r0_5 == 2u) {
        u32 r0_7 = call_00301da8(arg0->word_628, r1_4);
        r1_4 = guest::cpu()->r[1];
        if (r0_7 != 0) {
            r5_1 += 1u;
        }
    }
    if (s32(arg0->word_630) > s32(r5_1)) {
        arg0->word_630 = r5_1;
        call_00289ce8(arg0.addr(), r1_4);
        r1_4 = guest::cpu()->r[1];
    }
    call_00312cb0(frame.at(4).addr(), r1_4);
}

}  // namespace d_0028a600
GUEST_EXPORT_FRAMED(0x0028a600, d_0028a600::f_0028a600, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_0028ab90: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0028ab90 {

struct __attribute__((packed)) Object_0028ab90_0 {
    u8 unknown_0[0x61c];  // (not used here)
    u32 word_61c;
    u8 byte_620;
    u8 byte_621;
    u8 unknown_622[0x1a];  // (not used here)
    u32 word_63c;
};
GUEST_OFFSET(Object_0028ab90_0, word_61c, 0x61c);
GUEST_OFFSET(Object_0028ab90_0, byte_620, 0x620);
GUEST_OFFSET(Object_0028ab90_0, byte_621, 0x621);
GUEST_OFFSET(Object_0028ab90_0, word_63c, 0x63c);

struct __attribute__((packed)) Local_0028ab90_ea_2 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0028ab90_ea_2, word_0, 0x0);
GUEST_OFFSET(Local_0028ab90_ea_2, word_4, 0x4);

struct __attribute__((packed)) Local_0028ab90_r0_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_0028ab90_r0_1, word_0, 0x0);
GUEST_OFFSET(Local_0028ab90_r0_1, word_4, 0x4);
GUEST_OFFSET(Local_0028ab90_r0_1, word_8, 0x8);

struct __attribute__((packed)) Local_0028ab90_r4_1 {
    u8 unknown_0[0x23];  // (not used here)
    u8 byte_23;
    u8 byte_24;
};
GUEST_OFFSET(Local_0028ab90_r4_1, byte_23, 0x23);
GUEST_OFFSET(Local_0028ab90_r4_1, byte_24, 0x24);

inline constexpr guest::Function<0x002fb378, u32(u32, u32, u32, u32)> call_002fb378;
inline constexpr guest::Function<0x0030a488, u32(u32, u32, u32, u32)> call_0030a488;

struct __attribute__((packed)) Frame_0028ab90 {
    u32 word_0;
    u32 word_4;
    u8 byte_8;
    u8 byte_9;
    u8 unknown_a[0x1];  // (not read or written by name)
    u8 byte_b;
    u8 unknown_c[0x8];  // (not read or written by name)
};
GUEST_OFFSET(Frame_0028ab90, word_0, 0x0);
GUEST_OFFSET(Frame_0028ab90, word_4, 0x4);
GUEST_OFFSET(Frame_0028ab90, byte_8, 0x8);
GUEST_OFFSET(Frame_0028ab90, byte_9, 0x9);
GUEST_OFFSET(Frame_0028ab90, byte_b, 0xb);
GUEST_SIZE(Frame_0028ab90, 0x14);

u32 f_0028ab90(gptr<Object_0028ab90_0> arg0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_0028ab90> frame;  // the original's stack frame
    gptr<Local_0028ab90_r0_1> r0_1 = gptr<Local_0028ab90_r0_1>(call_002fb378(arg0.addr(), r1, r2, r3));
    u32 r1_1 = r0_1->word_0;
    u32 r2_1 = r0_1->word_4;
    gptr<Local_0028ab90_r4_1> r4_1 = gptr<Local_0028ab90_r4_1>(arg0.addr() + 0x600u);  // (from the original)
    *frame.at<u32>(0xc) = r0_1->word_8;  // (from the original)
    gptr<Local_0028ab90_ea_2> ea_2 = gptr<Local_0028ab90_ea_2>(frame.at(4).addr());
    ea_2->word_0 = r1_1;
    ea_2->word_4 = r2_1;
    u32 r0_2 = arg0->word_63c;
    if (r0_2 != 0x2fu) {  // (from the original)
        if (r0_2 != 0x30u) {  // (from the original)
            guest::cpu()->r[1] = r1_1;
            return 1u;
        }
        frame->word_0 = 0;
        call_0030a488(frame.at(4).addr(), 1u, 0u, 0u);
        u32 r0_4 = arg0->word_61c;
        r1_1 = frame->word_4;
        u32 zf_1 = r0_4 == r1_1;
        if (s32(r0_4) >= s32(r1_1)) {
            if (!zf_1) {
                guest::cpu()->r[1] = r1_1;
                return 1u;
            }
            u32 r0_5 = s8(arg0->byte_620);
            r1_1 = s8(frame->byte_8);
            u32 zf_2 = r0_5 == r1_1;
            if (s32(r0_5) >= s32(r1_1)) {
                if (!zf_2) {
                    guest::cpu()->r[1] = r1_1;
                    return 1u;
                }
                r1_1 = s8(frame->byte_9);
                if (s8(arg0->byte_621) >= s32(r1_1)) {
                    guest::cpu()->r[1] = r1_1;
                    return 1u;
                }
            }
        }
    } else {
        u32 r0_6 = s8(r4_1->byte_23);
        r1_1 = s8(frame->byte_b);
        u32 zf_3 = r0_6 == r1_1;
        if (s32(r0_6) >= s32(r1_1)) {
            if (!zf_3) {
                guest::cpu()->r[1] = r1_1;
                return 1u;
            }
            r1_1 = s8(*frame.at<u8>(0xc));  // (from the original)
            if (s8(r4_1->byte_24) >= s32(r1_1)) {
                guest::cpu()->r[1] = r1_1;
                return 1u;
            }
        }
    }
    guest::cpu()->r[1] = r1_1;
    return 0u;
}

}  // namespace d_0028ab90
GUEST_EXPORT_FRAMED(0x0028ab90, d_0028ab90::f_0028ab90, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_0028ac60: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0028ac60 {

struct __attribute__((packed)) Local_0028ac60_r0_4 {
    float float_0;
    float float_4;
    float float_8;
    float float_c;
    float float_10;
    float float_14;
    float float_18;
    float float_1c;
};
GUEST_OFFSET(Local_0028ac60_r0_4, float_0, 0x0);
GUEST_OFFSET(Local_0028ac60_r0_4, float_4, 0x4);
GUEST_OFFSET(Local_0028ac60_r0_4, float_8, 0x8);
GUEST_OFFSET(Local_0028ac60_r0_4, float_c, 0xc);
GUEST_OFFSET(Local_0028ac60_r0_4, float_10, 0x10);
GUEST_OFFSET(Local_0028ac60_r0_4, float_14, 0x14);
GUEST_OFFSET(Local_0028ac60_r0_4, float_18, 0x18);
GUEST_OFFSET(Local_0028ac60_r0_4, float_1c, 0x1c);

struct __attribute__((packed)) Local_0028ac60_r0_9 {
    float float_0;
    float float_4;
    float float_8;
    float float_c;
    float float_10;
    float float_14;
    float float_18;
    float float_1c;
};
GUEST_OFFSET(Local_0028ac60_r0_9, float_0, 0x0);
GUEST_OFFSET(Local_0028ac60_r0_9, float_4, 0x4);
GUEST_OFFSET(Local_0028ac60_r0_9, float_8, 0x8);
GUEST_OFFSET(Local_0028ac60_r0_9, float_c, 0xc);
GUEST_OFFSET(Local_0028ac60_r0_9, float_10, 0x10);
GUEST_OFFSET(Local_0028ac60_r0_9, float_14, 0x14);
GUEST_OFFSET(Local_0028ac60_r0_9, float_18, 0x18);
GUEST_OFFSET(Local_0028ac60_r0_9, float_1c, 0x1c);

inline guest::global<u32, 0x008533e4> global_008533e4;
inline guest::global<u32, 0x008533e8> global_008533e8;
inline guest::global<u32, 0x008533ec> global_008533ec;
inline guest::global<u32, 0x008533f0> global_008533f0;
inline guest::global<u32, 0x008533f4> global_008533f4;
inline guest::global<u32, 0x008533f8> global_008533f8;
inline guest::global<u32, 0x008533fc> global_008533fc;
inline guest::global<u32, 0x00853400> global_00853400;
inline guest::global<u32, 0x00853408> global_00853408;
inline guest::global<u32, 0x0085340c> global_0085340c;
inline guest::global<u32, 0x00853410> global_00853410;
inline guest::global<u32, 0x00853414> global_00853414;
inline guest::global<u32, 0x00853418> global_00853418;
inline guest::global<u32, 0x0085341c> global_0085341c;
inline guest::global<u32, 0x00853420> global_00853420;
inline guest::global<u32, 0x00853428> global_00853428;
inline guest::global<u32, 0x0085342c> global_0085342c;
inline guest::global<u32, 0x00853430> global_00853430;
inline guest::global<u32, 0x00853434> global_00853434;
inline guest::global<u32, 0x00853438> global_00853438;
inline guest::global<u32, 0x0085343c> global_0085343c;
inline guest::global<u32, 0x00853440> global_00853440;
inline constexpr guest::Function<0x0028aae4, u32(u32, u32, u32)> call_0028aae4;
inline constexpr guest::Function<0x0056878c, u32(u32, u32, u32, u32)> call_0056878c;
inline constexpr guest::Function<0x005d46dc, u32(u32, u32, u32, u32)> call_005d46dc;

struct __attribute__((packed)) Frame_0028ac60 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u32 word_18;
    u32 word_1c;
    u8 unknown_20[0x20];  // (not read or written by name)
};
GUEST_OFFSET(Frame_0028ac60, word_0, 0x0);
GUEST_OFFSET(Frame_0028ac60, word_4, 0x4);
GUEST_OFFSET(Frame_0028ac60, word_8, 0x8);
GUEST_OFFSET(Frame_0028ac60, word_c, 0xc);
GUEST_OFFSET(Frame_0028ac60, word_10, 0x10);
GUEST_OFFSET(Frame_0028ac60, word_14, 0x14);
GUEST_OFFSET(Frame_0028ac60, word_18, 0x18);
GUEST_OFFSET(Frame_0028ac60, word_1c, 0x1c);
GUEST_SIZE(Frame_0028ac60, 0x40);

void f_0028ac60(u32 r0, float S0, float S1, float S2, float S3, float S4, float S5, float S6, float S7) {
    guest::StackFrameOf<Frame_0028ac60> frame;  // the original's stack frame
    u32 r4 = 0;
    u32 r8 = 0;
    u32 r5 = r0;
    u32 r0_1 = *global_008533e4;
    u32 r1_1 = *global_008533e8;
    u32 r2_1 = *global_008533ec;
    u32 r3_1 = *global_008533f0;
    u32 r6_1 = *global_008533f4;
    u32 r7_1 = *global_008533f8;
    u32 r8_1 = *global_008533fc;
    u32 r12_1 = *global_00853400;
    frame->word_0 = r0_1;
    frame->word_4 = r1_1;
    frame->word_8 = r2_1;
    frame->word_c = r3_1;
    frame->word_10 = r6_1;
    frame->word_14 = r7_1;
    frame->word_18 = r8_1;
    frame->word_1c = r12_1;
    u32 r0_2 = call_005d46dc(r0_1, r1_1, r2_1, r3_1);
    u32 r2 = guest::cpu()->r[2];
    u32 r3 = guest::cpu()->r[3];
    u32 r7 = frame.at(0).addr();
    if (r0_2 != 1u) {
        u32 r0_3 = call_005d46dc(r0_2, guest::cpu()->r[1], r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        S0 = guest::cpu()->s[0];
        S1 = guest::cpu()->s[1];
        if (r0_3 - 2u <= 6u) {
            gptr<Local_0028ac60_r0_4> r0_4 = gptr<Local_0028ac60_r0_4>(frame.at(0x20).addr());  // (from the original)
            S0 = 1.332218e-38f;
            S1 = std::bit_cast<float>(*global_00853428);
            S2 = std::bit_cast<float>(*global_0085342c);
            S3 = std::bit_cast<float>(*global_00853430);
            S4 = std::bit_cast<float>(*global_00853434);
            S5 = std::bit_cast<float>(*global_00853438);
            S6 = std::bit_cast<float>(*global_0085343c);
            S7 = std::bit_cast<float>(*global_00853440);
            r4 = 0u;
            r8 = frame.at(0x20).addr();  // (from the original)
            r0_4->float_0 = S0;
            r0_4->float_4 = S1;
            r0_4->float_8 = S2;
            r0_4->float_c = S3;
            r0_4->float_10 = S4;
            r0_4->float_14 = S5;
            r0_4->float_18 = S6;
            r0_4->float_1c = S7;
            do {
                u32 r1_4 = *gptr<u32>(r8 + (r4 << 2));
                guest::cpu()->s[0] = S0;
                guest::cpu()->s[1] = S1;
                guest::cpu()->s[2] = S2;
                guest::cpu()->s[3] = S3;
                guest::cpu()->s[4] = S4;
                guest::cpu()->s[5] = S5;
                guest::cpu()->s[6] = S6;
                guest::cpu()->s[7] = S7;
                u32 r0_6 = call_0056878c(r5 + 0x294u, r1_4, r2, r3);  // (from the original)
                u32 r0_8 = call_0056878c(r5 + 0x294u, *gptr<u32>(r7 + (r4 << 2)), guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
                call_0028aae4(r5, r0_8, r0_6);
                r2 = guest::cpu()->r[2];
                r3 = guest::cpu()->r[3];
                S0 = guest::cpu()->s[0];
                S1 = guest::cpu()->s[1];
                S2 = guest::cpu()->s[2];
                S3 = guest::cpu()->s[3];
                S4 = guest::cpu()->s[4];
                S5 = guest::cpu()->s[5];
                S6 = guest::cpu()->s[6];
                S7 = guest::cpu()->s[7];
                r4 += 1u;
                guest::preempt();
            } while (r4 < 8u);
        }
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        return;
    }
    gptr<Local_0028ac60_r0_9> r0_9 = gptr<Local_0028ac60_r0_9>(frame.at(0x20).addr());  // (from the original)
    S0 = 1.3322123e-38f;
    S1 = std::bit_cast<float>(*global_00853408);
    S2 = std::bit_cast<float>(*global_0085340c);
    S3 = std::bit_cast<float>(*global_00853410);
    S4 = std::bit_cast<float>(*global_00853414);
    S5 = std::bit_cast<float>(*global_00853418);
    S6 = std::bit_cast<float>(*global_0085341c);
    S7 = std::bit_cast<float>(*global_00853420);
    r4 = 0u;
    r8 = frame.at(0x20).addr();  // (from the original)
    r0_9->float_0 = S0;
    r0_9->float_4 = S1;
    r0_9->float_8 = S2;
    r0_9->float_c = S3;
    r0_9->float_10 = S4;
    r0_9->float_14 = S5;
    r0_9->float_18 = S6;
    r0_9->float_1c = S7;
    do {
        u32 r1_6 = *gptr<u32>(r8 + (r4 << 2));
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        guest::cpu()->s[2] = S2;
        guest::cpu()->s[3] = S3;
        guest::cpu()->s[4] = S4;
        guest::cpu()->s[5] = S5;
        guest::cpu()->s[6] = S6;
        guest::cpu()->s[7] = S7;
        u32 r0_11 = call_0056878c(r5 + 0x294u, r1_6, r2, r3);  // (from the original)
        u32 r0_13 = call_0056878c(r5 + 0x294u, *gptr<u32>(r7 + (r4 << 2)), guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        call_0028aae4(r5, r0_13, r0_11);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        S0 = guest::cpu()->s[0];
        S1 = guest::cpu()->s[1];
        S2 = guest::cpu()->s[2];
        S3 = guest::cpu()->s[3];
        S4 = guest::cpu()->s[4];
        S5 = guest::cpu()->s[5];
        S6 = guest::cpu()->s[6];
        S7 = guest::cpu()->s[7];
        r4 += 1u;
        guest::preempt();
    } while (r4 < 8u);
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
}

}  // namespace d_0028ac60
GUEST_EXPORT_FRAMED(0x0028ac60, d_0028ac60::f_0028ac60, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_0028b220: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0028b220 {

struct __attribute__((packed)) Object_0028b220_0 {
    u8 unknown_0[0x24];  // (not used here)
    u8 byte_24;
    u8 unknown_25[0x5f7];  // (not used here)
    u32 word_61c;
    u32 word_620;
    u32 word_624;
    u8 unknown_628[0x14];  // (not used here)
    u32 word_63c;
};
GUEST_OFFSET(Object_0028b220_0, byte_24, 0x24);
GUEST_OFFSET(Object_0028b220_0, word_61c, 0x61c);
GUEST_OFFSET(Object_0028b220_0, word_620, 0x620);
GUEST_OFFSET(Object_0028b220_0, word_624, 0x624);
GUEST_OFFSET(Object_0028b220_0, word_63c, 0x63c);

struct __attribute__((packed)) Local_0028b220_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
};
GUEST_OFFSET(Local_0028b220_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_0028b220_ea_1, word_4, 0x4);
GUEST_OFFSET(Local_0028b220_ea_1, word_8, 0x8);
GUEST_OFFSET(Local_0028b220_ea_1, word_c, 0xc);
GUEST_OFFSET(Local_0028b220_ea_1, word_10, 0x10);
GUEST_OFFSET(Local_0028b220_ea_1, word_14, 0x14);

struct __attribute__((packed)) Local_0028b220_ea_2 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
};
GUEST_OFFSET(Local_0028b220_ea_2, word_4, 0x4);
GUEST_OFFSET(Local_0028b220_ea_2, word_8, 0x8);
GUEST_OFFSET(Local_0028b220_ea_2, word_c, 0xc);
GUEST_OFFSET(Local_0028b220_ea_2, word_10, 0x10);
GUEST_OFFSET(Local_0028b220_ea_2, word_14, 0x14);

struct __attribute__((packed)) Local_0028b220_ea_4 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
};
GUEST_OFFSET(Local_0028b220_ea_4, word_0, 0x0);
GUEST_OFFSET(Local_0028b220_ea_4, word_4, 0x4);
GUEST_OFFSET(Local_0028b220_ea_4, word_8, 0x8);
GUEST_OFFSET(Local_0028b220_ea_4, word_c, 0xc);
GUEST_OFFSET(Local_0028b220_ea_4, word_10, 0x10);

struct __attribute__((packed)) Local_0028b220_r0_3 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_0028b220_r0_3, word_0, 0x0);
GUEST_OFFSET(Local_0028b220_r0_3, word_4, 0x4);
GUEST_OFFSET(Local_0028b220_r0_3, word_8, 0x8);

inline guest::global<u32, 0x0094fd5c> global_0094fd5c;
inline constexpr guest::Function<0x0022bdf0, u32(u32, u32, u32, u32)> call_0022bdf0;
inline constexpr guest::Function<0x002687c8, u32(u32, u32, u32, u32)> call_002687c8;
inline constexpr guest::Function<0x002688cc, u32(u32, u32, u32, u32)> call_002688cc;
inline constexpr guest::Function<0x002cd2e0, u32(u32, u32, u32)> call_002cd2e0;
inline constexpr guest::Function<0x002fb378, u32(u32)> call_002fb378;
inline constexpr guest::Function<0x0030a488, u32(u32, u32, u32, u32)> call_0030a488;
inline constexpr guest::Function<0x006a32c4, u32(u32, u32, u32, u32)> call_006a32c4;

struct __attribute__((packed)) Frame_0028b220 {
    u32 word_0;
    u8 unknown_4[0x14];  // (not read or written by name)
};
GUEST_OFFSET(Frame_0028b220, word_0, 0x0);
GUEST_SIZE(Frame_0028b220, 0x18);

void f_0028b220(gptr<Object_0028b220_0> arg0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_0028b220> frame;  // the original's stack frame
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r14 = guest::cpu()->r[14];
    gptr<Local_0028b220_ea_1> ea_1 = gptr<Local_0028b220_ea_1>(frame.at(0).addr());
    ea_1->word_0 = r3;
    ea_1->word_4 = r4;
    ea_1->word_8 = r5;
    ea_1->word_c = r6;
    ea_1->word_10 = r7;
    ea_1->word_14 = r14;
    u32 r0_1 = arg0->word_63c;
    u32 r6_1 = arg0.addr() + 0x2090u;  // (from the original)
    u32 r5_1 = arg0.addr() + 0x2d78u;  // (from the original)
    if (r0_1 != 0x2eu) {  // (from the original)
        if (r0_1 == 0x2fu) {  // (from the original)
            call_002687c8(r5_1, 0u, 1u, r3);
            call_002688cc(r5_1, 0x4cu, *global_0094fd5c, 0x8535f0u);  // (from the original)
            call_002cd2e0(r5_1, 0x100038fu, 1u);  // (from the original)
            u32 r1_1 = arg0->byte_24;
            u32 r0_2 = call_006a32c4(r6_1, r1_1, 0x24u, 0x6eu);  // (from the original)
            gptr<Local_0028b220_r0_3> r0_3 = gptr<Local_0028b220_r0_3>(call_002fb378(r0_2));
            u32 r1_3 = r0_3->word_0;
            u32 r2_3 = r0_3->word_4;
            arg0->word_624 = r0_3->word_8;
            arg0->word_61c = r1_3;
            arg0->word_620 = r2_3;
            u32 r0_4 = *gptr<s8>(arg0.addr() + 0x624u);  // (from the original)
            frame->word_0 = 0;
            call_0030a488(arg0.addr() + 0x61cu, 0u, 0u, (s32(r0_4) < 0x1e ? 0x1eu - r0_4 : 0x3cu - r0_4) + 0x1eu);  // (from the original)
        }
        gptr<Local_0028b220_ea_2> ea_2 = gptr<Local_0028b220_ea_2>(frame.at(0).addr());
        u32 r4_1 = ea_2->word_4;
        u32 r5_2 = ea_2->word_8;
        u32 r6_2 = ea_2->word_c;
        u32 r7_1 = ea_2->word_10;
        guest::cpu()->r[4] = r4_1;
        guest::cpu()->r[5] = r5_2;
        guest::cpu()->r[6] = r6_2;
        guest::cpu()->r[7] = r7_1;
        return;
    }
    call_0022bdf0(arg0.addr() + 0x29e0u, r1, r2, r3);  // (from the original)
    *gptr<u16>(arg0.addr() + 0x2e48u) = 0xb;  // (from the original)
    call_002687c8(r5_1, 0u, 1u, guest::cpu()->r[3]);
    call_002688cc(r5_1, 0x4du, 0x4fu, 0x8535f0u);  // (from the original)
    u32 r1_4 = *gptr<u8>(arg0.addr() + 0x24u);  // (from the original)
    gptr<Local_0028b220_ea_4> ea_4 = gptr<Local_0028b220_ea_4>(frame.at(4).addr());
    u32 r4_2 = ea_4->word_0;
    u32 r5_3 = ea_4->word_4;
    u32 r6_3 = ea_4->word_8;
    u32 r7_2 = ea_4->word_c;
    r14 = ea_4->word_10;
    guest::cpu()->r[4] = r4_2;
    guest::cpu()->r[5] = r5_3;
    guest::cpu()->r[6] = r6_3;
    guest::cpu()->r[7] = r7_2;
    frame.release();
    call_006a32c4(r6_1, r1_4, 0x24u, 0x61u);
    return;
}

}  // namespace d_0028b220
GUEST_EXPORT(0x0028b220, d_0028b220::f_0028b220);

// f_0028c3e8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0028c3e8 {

struct __attribute__((packed)) Object_0028c3e8_0 {
    u8 unknown_0[0x1804];  // (not used here)
    u32 word_1804;
};
GUEST_OFFSET(Object_0028c3e8_0, word_1804, 0x1804);

struct __attribute__((packed)) Local_0028c3e8_r0_2 {
    float float_0;
    float float_4;
};
GUEST_OFFSET(Local_0028c3e8_r0_2, float_0, 0x0);
GUEST_OFFSET(Local_0028c3e8_r0_2, float_4, 0x4);

struct __attribute__((packed)) Local_0028c3e8_r0_3 {
    u8 unknown_0[0x1e38];  // (not used here)
    u32 word_1e38;
    u8 unknown_1e3c[0x2c];  // (not used here)
    u32 word_1e68;
};
GUEST_OFFSET(Local_0028c3e8_r0_3, word_1e38, 0x1e38);
GUEST_OFFSET(Local_0028c3e8_r0_3, word_1e68, 0x1e68);

struct __attribute__((packed)) Local_0028c3e8_r3_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0028c3e8_r3_1, word_0, 0x0);
GUEST_OFFSET(Local_0028c3e8_r3_1, word_4, 0x4);

struct __attribute__((packed)) Local_0028c3e8_r5_2 {
    u8 unknown_0[0xd0];  // (not used here)
    u32 word_d0;
    u8 unknown_d4[0x7];  // (not used here)
    u8 byte_db;
    u8 byte_dc;
};
GUEST_OFFSET(Local_0028c3e8_r5_2, word_d0, 0xd0);
GUEST_OFFSET(Local_0028c3e8_r5_2, byte_db, 0xdb);
GUEST_OFFSET(Local_0028c3e8_r5_2, byte_dc, 0xdc);

struct __attribute__((packed)) Local_0028c3e8_r9_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
};
GUEST_OFFSET(Local_0028c3e8_r9_1, word_0, 0x0);
GUEST_OFFSET(Local_0028c3e8_r9_1, word_4, 0x4);
GUEST_OFFSET(Local_0028c3e8_r9_1, word_8, 0x8);
GUEST_OFFSET(Local_0028c3e8_r9_1, word_c, 0xc);
GUEST_OFFSET(Local_0028c3e8_r9_1, word_10, 0x10);
GUEST_OFFSET(Local_0028c3e8_r9_1, word_14, 0x14);

inline guest::global<u32, 0x008534dc> global_008534dc;
inline guest::global<u32, 0x008534e0> global_008534e0;
inline guest::global<u32, 0x008534e4> global_008534e4;
inline guest::global<u32, 0x008534e8> global_008534e8;
inline guest::global<u32, 0x008534ec> global_008534ec;
inline guest::global<u32, 0x008534f0> global_008534f0;
inline guest::global<u32, 0x008534f4> global_008534f4;
inline constexpr guest::Function<0x002b6a00, u32(u32, u32, u32, u32)> call_002b6a00;
inline constexpr guest::Function<0x002f6a30, u32(u32, u32)> call_002f6a30;
inline constexpr guest::Function<0x002f6e98, u32(u32, u32, u32, u32)> call_002f6e98;
inline constexpr guest::Function<0x002f7508, u32(u32, u32, u32)> call_002f7508;

struct __attribute__((packed)) Frame_0028c3e8 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u32 word_18;
    u8 unknown_1c[0x20];  // (not read or written by name)
    u32 word_3c;
    u8 unknown_40[0x4];  // (not read or written by name)
};
GUEST_OFFSET(Frame_0028c3e8, word_0, 0x0);
GUEST_OFFSET(Frame_0028c3e8, word_4, 0x4);
GUEST_OFFSET(Frame_0028c3e8, word_8, 0x8);
GUEST_OFFSET(Frame_0028c3e8, word_c, 0xc);
GUEST_OFFSET(Frame_0028c3e8, word_10, 0x10);
GUEST_OFFSET(Frame_0028c3e8, word_14, 0x14);
GUEST_OFFSET(Frame_0028c3e8, word_18, 0x18);
GUEST_OFFSET(Frame_0028c3e8, word_3c, 0x3c);
GUEST_SIZE(Frame_0028c3e8, 0x44);

void f_0028c3e8(gptr<Object_0028c3e8_0> arg0, float S0, float S1) {
    guest::StackFrameOf<Frame_0028c3e8> frame;  // the original's stack frame
    u32 r0 = arg0.addr();
    gptr<Local_0028c3e8_r9_1> r9_1 = gptr<Local_0028c3e8_r9_1>(frame.at(0x24).addr());  // (from the original)
    u32 r6 = r0;
    u32 r4_1 = *global_008534e0;
    u32 r5_1 = *global_008534e4;
    u32 r7_1 = *global_008534e8;
    u32 r8_1 = *global_008534ec;
    u32 r12_1 = *global_008534f0;
    r9_1->word_0 = *global_008534dc;
    r9_1->word_4 = r4_1;
    r9_1->word_8 = r5_1;
    r9_1->word_c = r7_1;
    r9_1->word_10 = r8_1;
    r9_1->word_14 = r12_1;
    gptr<Local_0028c3e8_r3_1> r3_1 = gptr<Local_0028c3e8_r3_1>(frame.at(0x1c).addr());  // (from the original)
    frame->word_3c = *global_008534f4;
    r3_1->word_0 = r0 + 0x4cu;  // (from the original)
    r3_1->word_4 = r6 + 0x294u;  // (from the original)
    u32 r0_1 = r6 + 0x1730u;  // (from the original)
    u32 r8 = r0_1;
    call_002f6e98(r0_1, frame.at(0x1c).addr(), 0u, r3_1.addr());  // (from the original)
    u32 r2 = guest::cpu()->r[2];
    u32 r3 = guest::cpu()->r[3];
    u32 r9 = 0u;
    S0 = 0.0f;
    arg0->word_1804 = arg0->word_1804 | 0x40u;  // (from the original)
    frame->word_0 = r9;
    frame->word_4 = r9;
    S1 = -60.0f;
    gptr<Local_0028c3e8_r0_2> r0_2 = gptr<Local_0028c3e8_r0_2>(frame.at(8).addr());
    frame->word_8 = r9;
    frame->word_c = r9;
    frame->word_10 = r9;
    frame->word_14 = r9;
    frame->word_18 = r9;
    u32 r11 = 0x1000399u;  // (from the original)
    u32 r10 = 1u;
    r0_2->float_0 = S0;
    r0_2->float_4 = S1;
    u32 r4 = r9;
    do {
        gptr<Local_0028c3e8_r0_3> r0_3 = gptr<Local_0028c3e8_r0_3>(r6 + (r4 << 2));
        frame->word_0 = r0_3->word_1e68;
        u32 r0_4 = r0_3->word_1e38;
        frame->word_14 = r4;
        frame->word_4 = r0_4;
        frame->word_10 = r9;
        u32 r7_2 = r6 + ((r4 << 3) - r4 << 5);
        gptr<Local_0028c3e8_r5_2> r5_2 = gptr<Local_0028c3e8_r5_2>(r7_2 + 0x11f0u);  // (from the original)
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        call_002b6a00(r5_2.addr(), frame.at(0).addr(), r2, r3);
        *gptr<u8>(r7_2 + 0x12cau) = u8(r9);  // (from the original)
        r5_2->word_d0 = r11;
        r5_2->byte_db = u8(r10);
        r5_2->byte_dc = u8(r10);
        call_002f7508(r8, r5_2.addr(), 1u);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        S0 = guest::cpu()->s[0];
        S1 = guest::cpu()->s[1];
        r4 += 1u;
        guest::preempt();
    } while (r4 < 6u);
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    call_002f6a30(r8, 0u);
    *gptr<u16>(r6 + 0x1800u) = 0x23;  // (from the original)
    *gptr<u32>(r8 + 0xd4u) = *gptr<u32>(r8 + 0xd4u) & ~8u;  // (from the original)
}

}  // namespace d_0028c3e8
GUEST_EXPORT_FRAMED(0x0028c3e8, d_0028c3e8::f_0028c3e8, 0x4ff0);  // pushes {r4, r5, r6, r7, r8, r9, r10, r11, lr} first, as the original

// f_0028c538: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0028c538 {

struct __attribute__((packed)) Object_0028c538_0 {
    u8 unknown_0[0x1e28];  // (not used here)
    u32 word_1e28;
};
GUEST_OFFSET(Object_0028c538_0, word_1e28, 0x1e28);

struct __attribute__((packed)) Local_0028c538_r0_2 {
    float float_0;
    float float_4;
};
GUEST_OFFSET(Local_0028c538_r0_2, float_0, 0x0);
GUEST_OFFSET(Local_0028c538_r0_2, float_4, 0x4);

struct __attribute__((packed)) Local_0028c538_r0_3 {
    u8 unknown_0[0x1e50];  // (not used here)
    u32 word_1e50;
    u8 unknown_1e54[0x2c];  // (not used here)
    u32 word_1e80;
};
GUEST_OFFSET(Local_0028c538_r0_3, word_1e50, 0x1e50);
GUEST_OFFSET(Local_0028c538_r0_3, word_1e80, 0x1e80);

struct __attribute__((packed)) Local_0028c538_r3_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0028c538_r3_1, word_0, 0x0);
GUEST_OFFSET(Local_0028c538_r3_1, word_4, 0x4);

struct __attribute__((packed)) Local_0028c538_r5_2 {
    u8 unknown_0[0xd0];  // (not used here)
    u32 word_d0;
    u8 unknown_d4[0x7];  // (not used here)
    u8 byte_db;
    u8 byte_dc;
};
GUEST_OFFSET(Local_0028c538_r5_2, word_d0, 0xd0);
GUEST_OFFSET(Local_0028c538_r5_2, byte_db, 0xdb);
GUEST_OFFSET(Local_0028c538_r5_2, byte_dc, 0xdc);

struct __attribute__((packed)) Local_0028c538_r9_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
};
GUEST_OFFSET(Local_0028c538_r9_1, word_0, 0x0);
GUEST_OFFSET(Local_0028c538_r9_1, word_4, 0x4);
GUEST_OFFSET(Local_0028c538_r9_1, word_8, 0x8);
GUEST_OFFSET(Local_0028c538_r9_1, word_c, 0xc);
GUEST_OFFSET(Local_0028c538_r9_1, word_10, 0x10);
GUEST_OFFSET(Local_0028c538_r9_1, word_14, 0x14);

inline guest::global<u32, 0x00853500> global_00853500;
inline guest::global<u32, 0x00853504> global_00853504;
inline guest::global<u32, 0x00853508> global_00853508;
inline guest::global<u32, 0x0085350c> global_0085350c;
inline guest::global<u32, 0x00853510> global_00853510;
inline guest::global<u32, 0x00853514> global_00853514;
inline guest::global<u32, 0x00853518> global_00853518;
inline constexpr guest::Function<0x002b6a00, u32(u32, u32, u32, u32)> call_002b6a00;
inline constexpr guest::Function<0x002f6a30, u32(u32, u32)> call_002f6a30;
inline constexpr guest::Function<0x002f6e98, u32(u32, u32, u32, u32)> call_002f6e98;
inline constexpr guest::Function<0x002f7508, u32(u32, u32, u32)> call_002f7508;

struct __attribute__((packed)) Frame_0028c538 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u32 word_18;
    u8 unknown_1c[0x20];  // (not read or written by name)
    u32 word_3c;
    u8 unknown_40[0x4];  // (not read or written by name)
};
GUEST_OFFSET(Frame_0028c538, word_0, 0x0);
GUEST_OFFSET(Frame_0028c538, word_4, 0x4);
GUEST_OFFSET(Frame_0028c538, word_8, 0x8);
GUEST_OFFSET(Frame_0028c538, word_c, 0xc);
GUEST_OFFSET(Frame_0028c538, word_10, 0x10);
GUEST_OFFSET(Frame_0028c538, word_14, 0x14);
GUEST_OFFSET(Frame_0028c538, word_18, 0x18);
GUEST_OFFSET(Frame_0028c538, word_3c, 0x3c);
GUEST_SIZE(Frame_0028c538, 0x44);

void f_0028c538(gptr<Object_0028c538_0> arg0, float S0, float S1) {
    guest::StackFrameOf<Frame_0028c538> frame;  // the original's stack frame
    u32 r0 = arg0.addr();
    gptr<Local_0028c538_r9_1> r9_1 = gptr<Local_0028c538_r9_1>(frame.at(0x24).addr());  // (from the original)
    u32 r6 = r0;
    u32 r4_1 = *global_00853504;
    u32 r5_1 = *global_00853508;
    u32 r7_1 = *global_0085350c;
    u32 r8_1 = *global_00853510;
    u32 r12_1 = *global_00853514;
    r9_1->word_0 = *global_00853500;
    r9_1->word_4 = r4_1;
    r9_1->word_8 = r5_1;
    r9_1->word_c = r7_1;
    r9_1->word_10 = r8_1;
    r9_1->word_14 = r12_1;
    gptr<Local_0028c538_r3_1> r3_1 = gptr<Local_0028c538_r3_1>(frame.at(0x1c).addr());  // (from the original)
    frame->word_3c = *global_00853518;
    r3_1->word_0 = r0 + 0x4cu;  // (from the original)
    r3_1->word_4 = r6 + 0x3e0u;  // (from the original)
    u32 r0_1 = r6 + 0x1d54u;  // (from the original)
    u32 r8 = r0_1;
    call_002f6e98(r0_1, frame.at(0x1c).addr(), 0u, r3_1.addr());  // (from the original)
    u32 r2 = guest::cpu()->r[2];
    u32 r3 = guest::cpu()->r[3];
    u32 r9 = 0u;
    S0 = 0.0f;
    arg0->word_1e28 = arg0->word_1e28 | 0x40u;  // (from the original)
    frame->word_0 = r9;
    frame->word_4 = r9;
    S1 = -60.0f;
    gptr<Local_0028c538_r0_2> r0_2 = gptr<Local_0028c538_r0_2>(frame.at(8).addr());
    frame->word_8 = r9;
    frame->word_c = r9;
    frame->word_10 = r9;
    frame->word_14 = r9;
    frame->word_18 = r9;
    u32 r11 = 0x1000399u;  // (from the original)
    u32 r10 = 1u;
    r0_2->float_0 = S0;
    r0_2->float_4 = S1;
    u32 r4 = r9;
    do {
        gptr<Local_0028c538_r0_3> r0_3 = gptr<Local_0028c538_r0_3>(r6 + (r4 << 2));
        frame->word_0 = r0_3->word_1e80;
        u32 r0_4 = r0_3->word_1e50;
        frame->word_14 = r4;
        frame->word_4 = r0_4;
        frame->word_10 = r9;
        u32 r7_2 = r6 + ((r4 << 3) - r4 << 5);
        gptr<Local_0028c538_r5_2> r5_2 = gptr<Local_0028c538_r5_2>(r7_2 + 0x1814u);  // (from the original)
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        call_002b6a00(r5_2.addr(), frame.at(0).addr(), r2, r3);
        *gptr<u8>(r7_2 + 0x18eeu) = u8(r9);  // (from the original)
        r5_2->word_d0 = r11;
        r5_2->byte_db = u8(r10);
        r5_2->byte_dc = u8(r10);
        call_002f7508(r8, r5_2.addr(), 1u);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        S0 = guest::cpu()->s[0];
        S1 = guest::cpu()->s[1];
        r4 += 1u;
        guest::preempt();
    } while (r4 < 6u);
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    call_002f6a30(r8, 0u);
    *gptr<u16>(r6 + 0x1e24u) = 0x23;  // (from the original)
    *gptr<u32>(r8 + 0xd4u) = *gptr<u32>(r8 + 0xd4u) & ~8u;  // (from the original)
    guest::cpu()->r[1] = 0x1e24u;  // (from the original)
}

}  // namespace d_0028c538
GUEST_EXPORT_FRAMED(0x0028c538, d_0028c538::f_0028c538, 0x4ff0);  // pushes {r4, r5, r6, r7, r8, r9, r10, r11, lr} first, as the original

// f_0028d12c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0028d12c {

inline constexpr u32 vtable_ComButton2Lyt = 0x008ee228u;
inline constexpr u32 vtable_SetDateTimeBg = 0x008ee758u;
inline constexpr u32 vtable_Control2Button = 0x008ef284u;
inline constexpr u32 vtable_Control2Button_at_e4 = 0x008ef2c8u;
inline constexpr u32 vtable_BsMenuSetupTime = 0x008f0510u;
inline constexpr u32 vtable_BsMenuSetupTime_at_28 = 0x008f057cu;
inline constexpr u32 vtable_ComButtonLytBase = 0x008f18f4u;
inline constexpr u32 vtable_ComTitle = 0x008f8b4cu;
inline constexpr guest::Function<0x002f76ad, u32(u32, u32, u32, u32)> call_002f76ac;
inline constexpr guest::Function<0x002f770c, u32(u32)> call_002f770c;
inline constexpr guest::Function<0x002f7710, u32(u32)> call_002f7710;
inline constexpr guest::Function<0x00567ef0, u32(u32, u32)> call_00567ef0;
inline constexpr guest::Function<0x0056988c, u32(u32, u32)> call_0056988c;
inline constexpr guest::Function<0x005bf744, u32(u32)> call_005bf744;
inline constexpr guest::Function<0x005d703c, u32(u32)> call_005d703c;
inline constexpr guest::Function<0x005e3194, u32(u32)> call_005e3194;
inline constexpr guest::Function<0x006aaa30, u32(u32, u32)> call_006aaa30;

u32 f_0028d12c(gptr<BsMenuSetupTime> arg0) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    arg0->word_28 = vtable_BsMenuSetupTime_at_28;
    arg0->word_0 = vtable_BsMenuSetupTime;
    u32 r4_1 = arg0.addr() + 0x2d78u;  // (from the original)
    arg0->word_29e0 = vtable_ComButton2Lyt;
    arg0->word_2d78 = vtable_Control2Button;
    arg0->word_2e5c = vtable_Control2Button_at_e4;
    call_002f76ac(arg0.addr() + 0x2e90u, 0x2e0b3cu, 0x518u, 2u);  // (from the original)
    call_002f770c(r4_1);
    arg0->word_29e0 = vtable_ComButtonLytBase;
    u32 r0_3 = call_00567ef0(r4_1 - 0x248u, 0x8f18f4u);  // (from the original)
    u32 r0_5 = call_005bf744(r0_3 - 0x14cu);  // (from the original)
    *gptr<u32>(r0_5 - 0x954u) = vtable_ComTitle;  // (from the original)
    u32 r0_6 = r0_5 - 0x44u;  // (from the original)
    call_0056988c(r0_6, 0x8f8b4cu);  // (from the original)
    u32 r0_7 = r0_6 - 0x28u;  // (from the original)
    call_0056988c(r0_7, guest::cpu()->r[1]);
    u32 r0_8 = r0_7 - 0x28u;  // (from the original)
    call_0056988c(r0_8, guest::cpu()->r[1]);
    u32 r0_9 = r0_8 - 0x28u;  // (from the original)
    call_0056988c(r0_9, guest::cpu()->r[1]);
    u32 r0_11 = call_00567ef0(r0_9 - 0x248u, guest::cpu()->r[1]);  // (from the original)
    u32 r0_13 = call_005bf744(r0_11 - 0x14cu);  // (from the original)
    u32 r0_14 = r0_13 - 0xd0u;  // (from the original)
    call_005e3194(r0_14);
    u32 r0_15 = r0_14 - 0xc4u;  // (from the original)
    call_005e3194(r0_15);
    u32 r0_16 = r0_15 - 0xc4u;  // (from the original)
    call_005e3194(r0_16);
    u32 r0_17 = r0_16 - 0xc4u;  // (from the original)
    call_005e3194(r0_17);
    u32 r0_18 = r0_17 - 0xc4u;  // (from the original)
    call_005e3194(r0_18);
    u32 r0_19 = r0_18 - 0x100u;  // (from the original)
    call_005d703c(r0_19);
    *gptr<u32>(r0_19 - 0x210u) = vtable_SetDateTimeBg;  // (from the original)
    u32 r0_20 = r0_19 - 0x50u;  // (from the original)
    call_0056988c(r0_20, 0x8ee758u);  // (from the original)
    u32 r0_21 = r0_20 - 0x28u;  // (from the original)
    call_0056988c(r0_21, guest::cpu()->r[1]);
    u32 r0_22 = r0_21 - 0x28u;  // (from the original)
    call_0056988c(r0_22, guest::cpu()->r[1]);
    u32 r0_24 = call_005bf744(r0_22 - 0x14cu);  // (from the original)
    u32 r0_25 = r0_24 - 0x174u;  // (from the original)
    call_002f7710(r0_25);
    call_002f76ac(r0_25 - 0x540u, 0x2b6ef8u, 0xe0u, 6u);  // (from the original)
    u32 r0_27 = r0_25 - 0x624u;  // (from the original)
    call_002f7710(r0_27);
    call_002f76ac(r0_27 - 0x540u, 0x2b6ef8u, 0xe0u, 6u);  // (from the original)
    u32 r0_29 = r0_27 - 0x604u;  // (from the original)
    call_005e3194(r0_29);
    u32 r0_30 = r0_29 - 0xc4u;  // (from the original)
    call_005e3194(r0_30);
    u32 r0_31 = r0_30 - 0xc4u;  // (from the original)
    call_005e3194(r0_31);
    u32 r0_32 = r0_31 - 0xc4u;  // (from the original)
    call_005e3194(r0_32);
    u32 r0_33 = r0_32 - 0xc4u;  // (from the original)
    call_005e3194(r0_33);
    u32 r0_34 = r0_33 - 0xc4u;  // (from the original)
    call_005e3194(r0_34);
    u32 r0_35 = r0_34 - 0xc4u;  // (from the original)
    call_005e3194(r0_35);
    u32 r0_36 = r0_35 - 0xc4u;  // (from the original)
    call_005e3194(r0_36);
    u32 r0_37 = r0_36 - 0xc4u;  // (from the original)
    call_005e3194(r0_37);
    u32 r0_38 = r0_37 - 0xc4u;  // (from the original)
    call_005e3194(r0_38);
    u32 r0_39 = r0_38 - 0xc4u;  // (from the original)
    call_005e3194(r0_39);
    u32 r0_40 = r0_39 - 0xc4u;  // (from the original)
    call_005e3194(r0_40);
    u32 r0_41 = r0_40 - 0xc4u;  // (from the original)
    call_005e3194(r0_41);
    u32 r0_42 = r0_41 - 0xc4u;  // (from the original)
    call_005e3194(r0_42);
    u32 r0_43 = r0_42 - 0xc4u;  // (from the original)
    call_005e3194(r0_43);
    u32 r0_44 = r0_43 - 0x80u;  // (from the original)
    call_0056988c(r0_44, guest::cpu()->r[1]);
    u32 r0_45 = r0_44 - 0x28u;  // (from the original)
    call_0056988c(r0_45, guest::cpu()->r[1]);
    u32 r0_46 = r0_45 - 0x28u;  // (from the original)
    call_0056988c(r0_46, guest::cpu()->r[1]);
    u32 r0_47 = r0_46 - 0x28u;  // (from the original)
    call_0056988c(r0_47, guest::cpu()->r[1]);
    u32 r0_48 = r0_47 - 0x28u;  // (from the original)
    call_0056988c(r0_48, guest::cpu()->r[1]);
    u32 r0_49 = r0_48 - 0x28u;  // (from the original)
    call_0056988c(r0_49, guest::cpu()->r[1]);
    u32 r0_51 = call_005bf744(r0_49 - 0x14cu);  // (from the original)
    u32 r0_53 = call_005bf744(r0_51 - 0x14cu);  // (from the original)
    u32 r0_55 = call_00567ef0(r0_53 - 0x248u, guest::cpu()->r[1]);  // (from the original)
    frame.release();
    return call_006aaa30(r0_55 - 0x4cu, guest::cpu()->r[1]);  // (from the original)
}

}  // namespace d_0028d12c
GUEST_EXPORT(0x0028d12c, d_0028d12c::f_0028d12c);

// f_0028d378: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0028d378 {

struct __attribute__((packed)) Local_0028d378_r0_2 {
    u8 unknown_0[0x38];  // (not used here)
    u16 half_38;
};
GUEST_OFFSET(Local_0028d378_r0_2, half_38, 0x38);

inline guest::global<u32, 0x0014fac0> global_0014fac0;
inline guest::global<u32, 0x0095c71c> global_0095c71c;
inline constexpr guest::Function<0x001b7ce8, u32(u32, u32, u32, u32)> call_001b7ce8;
inline constexpr guest::Function<0x00305f44, u32(u32, u32, u32, u32)> call_00305f44;

void f_0028d378(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 r0_1 = *gptr<u8>(r0 + 0x13cu);  // (from the original)
    if (r0_1 == 0 || r0_1 == 2u) {
        gptr<Local_0028d378_r0_2> r0_2 = gptr<Local_0028d378_r0_2>(r0 + 0x100u);  // (from the original)
        r0_2->half_38 = u16(u32(r0_2->half_38) + 1u);
    }
    u32 r0_3 = *gptr<u32>(r0 + 0x128u);  // (from the original)
    u32 r1_1 = *gptr<u32>(r0 + 0x134u);  // (from the original)
    if (r0_3 < r1_1) {
        u32 r0_4 = call_00305f44(r0_3, r1_1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (r0_4 == r1) {
            u32 r0_5 = *global_0095c71c;
            if (r0_5 != 0) {
                call_001b7ce8(r0_5, r1, 1u, 0x95bfdcu);  // (from the original)
                r2 = guest::cpu()->r[2];
                r3 = guest::cpu()->r[3];
            }
        }
    }
    u32 r0_6 = *gptr<u32>(r0 + 0x124u);  // (from the original)
    frame.release();
    guest::call_address<u32>(*global_0014fac0, r0_6, r1, r2, r3);
    return;
}

}  // namespace d_0028d378
GUEST_EXPORT(0x0028d378, d_0028d378::f_0028d378);

// f_0028d568: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0028d568 {

inline guest::global<u32, 0x0014fae0> global_0014fae0;

u32 f_0028d568(u32 r0) {
    u32 r0_1 = *gptr<u32>(r0 + 0x124u);  // (from the original)
    return guest::call_address<u32>(*global_0014fae0, r0_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0028d568
GUEST_EXPORT(0x0028d568, d_0028d568::f_0028d568);

// f_0028f500: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0028f500 {

struct __attribute__((packed)) Local_0028f500_r1_1 {
    u8 byte_0;
    u8 byte_1;
    u8 byte_2;
    u8 unknown_3[0x1];  // (not used here)
    u8 byte_4;
    u8 byte_5;
    u8 unknown_6[0x3];  // (not used here)
    u8 byte_9;
    u8 byte_a;
    u8 byte_b;
    u8 unknown_c[0x1];  // (not used here)
    u8 byte_d;
    u8 byte_e;
    u8 unknown_f[0x4];  // (not used here)
    u8 byte_13;
};
GUEST_OFFSET(Local_0028f500_r1_1, byte_0, 0x0);
GUEST_OFFSET(Local_0028f500_r1_1, byte_1, 0x1);
GUEST_OFFSET(Local_0028f500_r1_1, byte_2, 0x2);
GUEST_OFFSET(Local_0028f500_r1_1, byte_4, 0x4);
GUEST_OFFSET(Local_0028f500_r1_1, byte_5, 0x5);
GUEST_OFFSET(Local_0028f500_r1_1, byte_9, 0x9);
GUEST_OFFSET(Local_0028f500_r1_1, byte_a, 0xa);
GUEST_OFFSET(Local_0028f500_r1_1, byte_b, 0xb);
GUEST_OFFSET(Local_0028f500_r1_1, byte_d, 0xd);
GUEST_OFFSET(Local_0028f500_r1_1, byte_e, 0xe);
GUEST_OFFSET(Local_0028f500_r1_1, byte_13, 0x13);

struct __attribute__((packed)) Local_0028f500_r2_1 {
    u8 byte_0;
    u8 byte_1;
    u8 byte_2;
    u8 byte_3;
    u8 byte_4;
    u8 byte_5;
    u8 byte_6;
};
GUEST_OFFSET(Local_0028f500_r2_1, byte_0, 0x0);
GUEST_OFFSET(Local_0028f500_r2_1, byte_1, 0x1);
GUEST_OFFSET(Local_0028f500_r2_1, byte_2, 0x2);
GUEST_OFFSET(Local_0028f500_r2_1, byte_3, 0x3);
GUEST_OFFSET(Local_0028f500_r2_1, byte_4, 0x4);
GUEST_OFFSET(Local_0028f500_r2_1, byte_5, 0x5);
GUEST_OFFSET(Local_0028f500_r2_1, byte_6, 0x6);

inline guest::global<u32, 0x00854184> global_00854184;
inline guest::global<u8, 0x00997ae1> global_00997ae1;
inline guest::global<u8, 0x00997ae3> global_00997ae3;
inline guest::global<u8, 0x00997ae5> global_00997ae5;

void f_0028f500(gptr<BsShadowViewMgr> arg0) {
    u32 r0 = arg0.addr();
    gptr<Local_0028f500_r1_1> r1_1 = gptr<Local_0028f500_r1_1>(0u);
    u32 r1_3 = 0;
    u32 r4 = 0u;
    if (arg0->word_c8 == 0) {
        r1_1 = gptr<Local_0028f500_r1_1>(r0 + 0x14u);  // (from the original)
        gptr<Local_0028f500_r2_1> r2_1 = gptr<Local_0028f500_r2_1>(r0 + 0x2cu);  // (from the original)
        if (*global_00854184 == 3u) {
            r1_1->byte_0 = 1;
            r1_1->byte_1 = 0;
            r1_1->byte_4 = 3;
            r1_1->byte_2 = 2;
            r1_1->byte_5 = 0xe;  // (from the original)
            r2_1->byte_0 = 8;
            r2_1->byte_1 = 0;
            r2_1->byte_4 = 0xe;  // (from the original)
            r2_1->byte_2 = 0;
            r2_1->byte_5 = 0xf;  // (from the original)
            r2_1->byte_3 = 1;
            r2_1->byte_6 = 0xf;  // (from the original)
            goto L_28f5e0;
        }
        arg0->byte_14 = 0;
        arg0->byte_15 = 0;
        arg0->byte_18 = 0xe;  // (from the original)
        arg0->byte_2c = 0;
        arg0->byte_2d = 0;
        arg0->byte_30 = 0xf;  // (from the original)
        goto L_28f5e0;
    }
    arg0->byte_14 = 1;
    arg0->byte_15 = 0;
    arg0->byte_18 = 3;
    arg0->byte_16 = 2;
    arg0->byte_19 = 0xe;  // (from the original)
    arg0->byte_2c = 0;
    arg0->byte_2d = 1;
    arg0->byte_30 = 0xf;  // (from the original)
    arg0->byte_1d = 0;
    arg0->byte_1e = 0;
    arg0->byte_21 = 3;
    *global_00997ae1 = 0;
    *global_00997ae3 = 4;
    *global_00997ae5 = 0;
    arg0->byte_28 = 0x26;  // (from the original)
    arg0->byte_29 = 0x80;  // (from the original)
    arg0->byte_26 = u8(r4);
    arg0->byte_27 = u8(r4);
    guest::cpu()->r[1] = 0x80u;  // (from the original)
    return;
L_28f5e0:;
    r1_1->byte_9 = 1;
    r1_1->byte_a = 0;
    r1_1->byte_d = 0xe;  // (from the original)
    r1_1->byte_b = 4;
    r1_1->byte_e = 3;
    r1_1->byte_13 = u8(r4);
    u32 r1_2 = *global_00854184;
    if (r1_2 == 0) {
        *global_00997ae1 = 0;
        *global_00997ae3 = 6;
        r1_3 = 7u;
    } else if (r1_2 == 1u) {
        *global_00997ae1 = 0;
        *global_00997ae3 = 6;
        r1_3 = 1u;
    } else if (r1_2 == 2u) {
        *global_00997ae1 = 2;
        *global_00997ae3 = 6;
        r1_3 = 1u;
    } else {
        if (r1_2 != 3u) {
            arg0->byte_28 = 0x26;  // (from the original)
            arg0->byte_29 = 0x80;  // (from the original)
            arg0->byte_26 = u8(r4);
            arg0->byte_27 = u8(r4);
            guest::cpu()->r[1] = 0x80u;  // (from the original)
            return;
        }
        *global_00997ae1 = 0;
        *global_00997ae3 = 4;
        r1_3 = 0u;
    }
    *global_00997ae5 = u8(r1_3);
    arg0->byte_28 = 0x26;  // (from the original)
    arg0->byte_29 = 0x80;  // (from the original)
    arg0->byte_26 = u8(r4);
    arg0->byte_27 = u8(r4);
    guest::cpu()->r[1] = 0x80u;  // (from the original)
}

}  // namespace d_0028f500
GUEST_EXPORT_FRAMED(0x0028f500, d_0028f500::f_0028f500, 0x70);  // pushes {r4, r5, r6} first, as the original

// f_0028f6f8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0028f6f8 {

inline constexpr guest::Function<0x002f74c8, u32(u32, u32)> call_002f74c8;
inline constexpr guest::Function<0x002f74e0, u32(u32, u32)> call_002f74e0;

u32 f_0028f6f8(u32 r0, u32 r1) {
    u32 r0_1 = call_002f74c8(r0, r1);
    if (r0_1 == 0x9du) {  // (from the original)
        return 2u;
    }
    u32 r0_2 = call_002f74c8(r0_1, guest::cpu()->r[1]);
    if (r0_2 == 0x9eu) {  // (from the original)
        return 2u;
    }
    u32 r0_3 = call_002f74c8(r0_2, guest::cpu()->r[1]);
    u32 r0_4 = call_002f74e0(4u, r0_3);
    if (r0_4 != 0) {
        u32 r0_5 = call_002f74c8(r0_4, guest::cpu()->r[1]);
        u32 r0_6 = call_002f74e0(0x200u, r0_5);  // (from the original)
        return r0_6 == 0 ? 3u : 2u;
    }
    u32 r0_7 = call_002f74c8(r0_4, guest::cpu()->r[1]);
    if (r0_7 >= 0x4du) {  // (from the original)
        r0_7 = call_002f74c8(r0_7, guest::cpu()->r[1]);
        if (r0_7 <= 0x4fu) {  // (from the original)
            return 1u;
        }
    }
    u32 r0_8 = call_002f74c8(r0_7, guest::cpu()->r[1]);
    if (r0_8 >= 0x3cu) {  // (from the original)
        r0_8 = call_002f74c8(r0_8, guest::cpu()->r[1]);
        if (r0_8 <= 0x3eu) {  // (from the original)
            return 0u;
        }
    }
    u32 r0_9 = call_002f74c8(r0_8, guest::cpu()->r[1]);
    if (r0_9 == 0x49u) {  // (from the original)
        return 0u;
    }
    u32 r0_10 = call_002f74c8(r0_9, guest::cpu()->r[1]);
    if (r0_10 == 0x55u) {  // (from the original)
        return 0u;
    }
    u32 r0_11 = call_002f74c8(r0_10, guest::cpu()->r[1]);
    u32 r0_12 = call_002f74e0(0x400000u, r0_11);  // (from the original)
    if (r0_12 != 0) {
        return 0u;
    }
    u32 r0_13 = call_002f74c8(r0_12, guest::cpu()->r[1]);
    u32 r0_14 = call_002f74e0(0x800000u, r0_13);  // (from the original)
    return r0_14 == 0 ? 4u : 0u;
}

}  // namespace d_0028f6f8
GUEST_EXPORT_FRAMED(0x0028f6f8, d_0028f6f8::f_0028f6f8, 0x4010);  // pushes {r4, lr} first, as the original

// f_0028f8bc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0028f8bc {

struct __attribute__((packed)) Object_0028f8bc_0 {
    u8 unknown_0[0x4];  // (not used here)
    float float_4;
    float float_8;
};
GUEST_OFFSET(Object_0028f8bc_0, float_4, 0x4);
GUEST_OFFSET(Object_0028f8bc_0, float_8, 0x8);

struct __attribute__((packed)) Object_0028f8bc_1 {
    u8 unknown_0[0x4];  // (not used here)
    float float_4;
    float float_8;
};
GUEST_OFFSET(Object_0028f8bc_1, float_4, 0x4);
GUEST_OFFSET(Object_0028f8bc_1, float_8, 0x8);

inline guest::global<u32, 0x00995640> global_00995640;
inline guest::global<u8, 0x00995644> global_00995644;

u32 f_0028f8bc(gptr<Object_0028f8bc_0> arg0, gptr<Object_0028f8bc_1> arg1) {
    u32 fpsr = guest::cpu()->fpscr;
    float S4_1 = arg1->float_8;
    float S1_1 = arg0->float_4 - arg1->float_4;
    float S0_1 = arg0->float_8 - S4_1;
    float S3_1 = 0.006666667f;
    float S2_1 = 1.0f;
    float S0_2 = sqrtf(S1_1 * S1_1 + S0_1 * S0_1) * 0.6f - 100.0f;
    float S1_2 = 0.0f;
    float S0_3 = S0_2 * S3_1;
    u32 fpsr_1 = fpsr & 0xfffffffu | vfp_cmpf(S0_3, S1_2);  // (from the original)
    if (fpsr_1 >> 0x1d & 1) {  // (from the original)
        u32 fpsr_2 = fpsr_1 & 0xfffffffu | vfp_cmpf(S0_3, S2_1);  // (from the original)
        if (!(fpsr_2 >> 0x1e & 1) && fpsr_2 >> 0x1f == (fpsr_2 >> 0x1c & 1)) {  // (from the original)
            S0_3 = S2_1;
        }
    } else {
        S0_3 = S1_2;
    }
    u32 r2_1 = *gptr<u32>((u32(*global_00995644) << 2) + 0x97534cu);  // (from the original)
    u32 r1_1 = *global_00995640;
    guest::cpu()->s[0] = S0_3;
    guest::cpu()->s[1] = S1_2;
    guest::cpu()->s[2] = S2_1;
    guest::cpu()->s[3] = S3_1;
    guest::cpu()->s[4] = S4_1;
    return guest::call_address<u32>(r2_1, 0x995644u, r1_1, r2_1, guest::cpu()->r[3]);  // (from the original)
}

}  // namespace d_0028f8bc
GUEST_EXPORT(0x0028f8bc, d_0028f8bc::f_0028f8bc);

// f_0028ff00: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0028ff00 {

inline guest::global<u8, 0x00950708> global_00950708;
inline guest::global<u8, 0x00950709> global_00950709;
inline guest::global<u8, 0x0095070d> global_0095070d;
inline constexpr guest::Function<0x001cdf04, u32(u32, u32)> call_001cdf04;
inline constexpr guest::Function<0x001cdf18, u32(u32)> call_001cdf18;
inline constexpr guest::Function<0x00300904, u32(u32, u32, u32, u32)> call_00300904;
inline constexpr guest::Function<0x0030b6c4, u32(u32)> call_0030b6c4;
inline constexpr guest::Function<0x0062512c, u32(u32, u32, u32)> call_0062512c;
inline constexpr guest::Function<0x006268f8, u32(u32)> call_006268f8;

u32 f_0028ff00(u32 r0, u32 r1, u32 r2) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 r0_1 = call_00300904(r0, r1, r2, guest::cpu()->r[3]);
    if (r0_1 != 0) {
        u32 r0_2 = call_0030b6c4(r0_1);
        if (r0_2 != 0) {
            *global_00950709 = 0;
            *global_00950708 = 0;
            *global_0095070d = 1;
            u32 r0_3 = call_006268f8(0x90u);  // (from the original)
            call_001cdf04(frame.at(0).addr(), r0_3);
            call_001cdf18(frame.at(0).addr());
            r0_2 = call_0062512c(0x90u, frame.at(0).addr(), 1u);  // (from the original)
        }
        return r0_2;
    }
    *global_00950709 = 0;
    *global_00950708 = 0;
    *global_0095070d = 1;
    return r0_1;
}

}  // namespace d_0028ff00
GUEST_EXPORT_FRAMED(0x0028ff00, d_0028ff00::f_0028ff00, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original
