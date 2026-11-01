// Functions decompiled by tools/decomp (docs/decomp.md), each proved equal to the recompiled original (prove-cpp). The
// names are generated (d_<address>::f_<address>, Object_<address>_<argument>, word_<offset>) and still to be chosen.
#include "guest/guest.hpp"
#include "recovered/structs.hpp"

#include <bit>

using guest::gptr;

// f_002900d4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002900d4 {

inline guest::global<u8, 0x00950708> global_00950708;  // (from the original)
inline guest::global<u8, 0x00950709> global_00950709;  // (from the original)
inline guest::global<u8, 0x00950710> global_00950710;  // (from the original)

u32 f_002900d4() {
    if (*global_00950710 != 0) {
        *global_00950710 = 0;
        guest::cpu()->r[1] = 0u;
        return 0x950708u;  // (from the original)
    }
    u32 r2_1 = *global_00950708;
    if (r2_1 == 3u || r2_1 == 1u) {
        *global_00950709 = 0;
        *global_00950708 = 0;
    }
    guest::cpu()->r[1] = 0u;
    return 0x950708u;  // (from the original)
}

}  // namespace d_002900d4
GUEST_EXPORT(0x002900d4, d_002900d4::f_002900d4);

// f_00290108: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00290108 {

inline guest::global<u8, 0x00950708> global_00950708;  // (from the original)
inline guest::global<u8, 0x0095070d> global_0095070d;  // (from the original)
inline guest::global<u32, 0x00950720> global_00950720;  // (from the original)

void f_00290108() {
    if (*global_00950708 != 2u || *global_0095070d != 0) {
        return;
    }
    u32 r1_1 = *global_00950720 + 1u;
    *global_00950720 = r1_1;
    if (s32(r1_1) >= 0x3e8) {  // (from the original)
        r1_1 = 0x3e7u;  // (from the original)
    }
    *global_00950720 = r1_1;
}

}  // namespace d_00290108
GUEST_EXPORT(0x00290108, d_00290108::f_00290108);

// f_00290584: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00290584 {

inline guest::global<u8, 0x0095070d> global_0095070d;  // (from the original)
inline guest::global<u8, 0x0095070e> global_0095070e;  // (from the original)
inline constexpr guest::Function<0x001cddec, u32(u32, u32, u32)> call_001cddec;  // (from the original)
inline constexpr guest::Function<0x001cdf04, u32(u32, u32, u32)> call_001cdf04;  // (from the original)
inline constexpr guest::Function<0x00300904, u32(u32, u32, u32, u32)> call_00300904;  // (from the original)
inline constexpr guest::Function<0x0030b6c4, u32(u32, u32, u32)> call_0030b6c4;  // (from the original)
inline constexpr guest::Function<0x0058a17c, u32(u32, u32, u32)> call_0058a17c;  // (from the original)
inline constexpr guest::Function<0x0058c19c, u32(u32, u32, u32, u32)> call_0058c19c;  // (from the original)
inline constexpr guest::Function<0x0062512c, u32(u32, u32, u32)> call_0062512c;  // (from the original)
inline constexpr guest::Function<0x006268f8, u32(u32, u32, u32)> call_006268f8;  // (from the original)

void f_00290584(u32 r0_unused, u32 r1, u32 r2) {
    guest::StackFrame frame(0x14);  // the original's stack frame
    u32 r0_1 = *global_0095070e;
    if (r0_1 == 0) {
        r0_1 = call_00300904(r0_1, r1, r2, guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        if (r0_1 != 0) {
            r0_1 = call_0030b6c4(r0_1, r1, r2);
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            if (r0_1 == 0) {
                return;
            }
        }
    }
    u32 r0_2 = call_0058c19c(r0_1, r1, r2, guest::cpu()->r[3]);
    u32 r0_3 = call_0058a17c(r0_2, guest::cpu()->r[1], guest::cpu()->r[2]);
    u32 r0_4 = call_00300904(r0_3, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r1_3 = guest::cpu()->r[1];
    if (r0_4 != 0) {
        u32 r0_5 = call_0030b6c4(r0_4, r1_3, guest::cpu()->r[2]);
        r1_3 = guest::cpu()->r[1];
        if (r0_5 != 0) {
            u32 r0_6 = call_006268f8(0x90u, r1_3, guest::cpu()->r[2]);  // (from the original)
            call_001cdf04(frame.at(0).addr(), r0_6, guest::cpu()->r[2]);
            call_001cddec(frame.at(0).addr(), 2u, guest::cpu()->r[2]);
            call_0062512c(0x90u, frame.at(0).addr(), 1u);  // (from the original)
            r1_3 = guest::cpu()->r[1];
        }
    }
    *global_0095070d = 1;
    guest::cpu()->r[1] = r1_3;
}

}  // namespace d_00290584
GUEST_EXPORT_FRAMED(0x00290584, d_00290584::f_00290584, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_002915b0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002915b0 {

inline guest::global<u8, 0x00950708> global_00950708;  // (from the original)
inline guest::global<u8, 0x0095070d> global_0095070d;  // (from the original)
inline guest::global<u32, 0x00950718> global_00950718;  // (from the original)

void f_002915b0() {
    if (*global_00950708 != 2u || *global_0095070d != 0) {
        return;
    }
    u32 r1_1 = *global_00950718 + 1u;
    *global_00950718 = r1_1;
    if (s32(r1_1) >= 0x3e8) {  // (from the original)
        r1_1 = 0x3e7u;  // (from the original)
    }
    *global_00950718 = r1_1;
}

}  // namespace d_002915b0
GUEST_EXPORT(0x002915b0, d_002915b0::f_002915b0);

// f_00291990: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00291990 {

struct __attribute__((packed)) Object_00291990_0 {
    u8 unknown_0[0x680];  // (not used here)
    u32 word_680;
    u32 word_684;
    u32 word_688;
    u32 word_68c;
    u8 unknown_690[0x41d];  // (not used here)
    u8 byte_aad;
};
GUEST_OFFSET(Object_00291990_0, word_680, 0x680);  // (from the original)
GUEST_OFFSET(Object_00291990_0, word_684, 0x684);  // (from the original)
GUEST_OFFSET(Object_00291990_0, word_688, 0x688);  // (from the original)
GUEST_OFFSET(Object_00291990_0, word_68c, 0x68c);  // (from the original)
GUEST_OFFSET(Object_00291990_0, byte_aad, 0xaad);  // (from the original)

struct __attribute__((packed)) Local_00291990_r5_1 {
    u8 unknown_0[0xab];  // (not used here)
    u8 byte_ab;
    u8 byte_ac;
};
GUEST_OFFSET(Local_00291990_r5_1, byte_ab, 0xab);  // (from the original)
GUEST_OFFSET(Local_00291990_r5_1, byte_ac, 0xac);  // (from the original)

inline guest::global<u8, 0x00950708> global_00950708;  // (from the original)
inline constexpr guest::Function<0x00291a18, u32(u32, u32, u32, u32)> call_00291a18;  // (from the original)

u32 f_00291990(gptr<Object_00291990_0> arg0, u32 r1_unused, u32 r2_unused, u32 r3) {
    guest::StackFrame frame(0x4);  // the original's stack frame
    *frame.at<u32>(0) = r3;
    gptr<Local_00291990_r5_1> r5_1 = gptr<Local_00291990_r5_1>(arg0.addr() + 0xa00u);  // (from the original)
    *frame.at<u32>(0) = arg0->word_68c;
    u32 r3_1 = arg0->word_688;
    u32 r1_1 = s8(arg0->byte_aad);
    call_00291a18(arg0.addr(), r1_1, 6u, r3_1);
    if (*global_00950708 == 3u && s8(r5_1->byte_ab) > 0) {
        *frame.at<u32>(0) = arg0->word_684;
        u32 r0_1 = call_00291a18(arg0.addr(), 0x3cu, 6u, arg0->word_680);  // (from the original)
        return r0_1;
    }
    *frame.at<u32>(0) = arg0->word_684;
    u32 r1_3 = s8(r5_1->byte_ac);
    u32 r0_2 = call_00291a18(arg0.addr(), r1_3, 6u, arg0->word_680);
    return r0_2;
}

}  // namespace d_00291990
GUEST_EXPORT_FRAMED(0x00291990, d_00291990::f_00291990, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_0029223c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0029223c {

inline guest::global<u8, 0x00950713> global_00950713;  // (from the original)
inline guest::global<u32, 0x00950714> global_00950714;  // (from the original)

u32 f_0029223c() {
    u32 r0_1 = *global_00950714;
    if (r0_1 == 0) {
        return 5u;
    }
    if (*gptr<u8>(r0_1 + 0xb90u) != 0) {  // (from the original)
        return *global_00950713;
    }
    return 5u;
}

}  // namespace d_0029223c
GUEST_EXPORT(0x0029223c, d_0029223c::f_0029223c);

// f_00292ccc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00292ccc {

inline guest::global<u8, 0x00950708> global_00950708;  // (from the original)
inline guest::global<u8, 0x0095070d> global_0095070d;  // (from the original)
inline guest::global<u32, 0x0095071c> global_0095071c;  // (from the original)

void f_00292ccc() {
    if (*global_00950708 != 2u || *global_0095070d != 0) {
        return;
    }
    u32 r1_1 = *global_0095071c + 1u;
    *global_0095071c = r1_1;
    if (s32(r1_1) >= 0x3e8) {  // (from the original)
        r1_1 = 0x3e7u;  // (from the original)
    }
    *global_0095071c = r1_1;
}

}  // namespace d_00292ccc
GUEST_EXPORT(0x00292ccc, d_00292ccc::f_00292ccc);

// f_00292d08: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00292d08 {

inline guest::global<u8, 0x00950708> global_00950708;  // (from the original)
inline guest::global<u8, 0x00950709> global_00950709;  // (from the original)
inline guest::global<u8, 0x0095070d> global_0095070d;  // (from the original)

u32 f_00292d08() {
    *global_00950709 = 0;
    *global_00950708 = 0;
    *global_0095070d = 1;
    guest::cpu()->r[1] = 0u;
    return 0x950708u;  // (from the original)
}

}  // namespace d_00292d08
GUEST_EXPORT(0x00292d08, d_00292d08::f_00292d08);

// f_00292d28: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00292d28 {

inline guest::global<u8, 0x00950708> global_00950708;  // (from the original)
inline guest::global<u8, 0x0095070d> global_0095070d;  // (from the original)
inline guest::global<u32, 0x00950718> global_00950718;  // (from the original)
inline constexpr guest::Function<0x002fb328, u32(u32)> call_002fb328;  // (from the original)

u32 f_00292d28(u32 r0) {
    u32 r0_1 = call_002fb328(r0);
    u32 r1_1 = r0_1 + 0x6feb4u;  // (from the original)
    if (*global_00950708 != 3u || s32(*global_00950718) <= 0 || *global_0095070d != 0) {
        guest::cpu()->r[1] = r1_1;
        return 0u;
    }
    u32 r0_2 = *gptr<u8>(r1_1);
    if ((r0_2 & 8u) == 0) {
        guest::cpu()->r[1] = r1_1;
        return 0u;
    }
    if ((r0_2 & 0x40u) == 0) {  // (from the original)
        guest::cpu()->r[1] = r1_1;
        return 1u;
    }
    guest::cpu()->r[1] = r1_1;
    return 0u;
}

}  // namespace d_00292d28
GUEST_EXPORT_FRAMED(0x00292d28, d_00292d28::f_00292d28, 0x4010);  // pushes {r4, lr} first, as the original

// f_00292dbc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00292dbc {

inline guest::global<u8, 0x00950712> global_00950712;  // (from the original)
inline guest::global<u8, 0x00950713> global_00950713;  // (from the original)

void f_00292dbc(u32 r0) {
    if (*global_00950712 == 0) {
        *global_00950712 = 1;
        *global_00950713 = u8(r0);
        guest::cpu()->r[1] = 0x950708u;  // (from the original)
        return;
    }
    if (r0 != *global_00950713) {
        *global_00950713 = u8(r0);
    }
    guest::cpu()->r[1] = 0x950708u;  // (from the original)
}

}  // namespace d_00292dbc
GUEST_EXPORT(0x00292dbc, d_00292dbc::f_00292dbc);

// f_00292e30: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00292e30 {

struct __attribute__((packed)) Object_00292e30_0 {
    u8 unknown_0[0x18e];  // (not used here)
    u8 byte_18e;
    u8 unknown_18f[0x14b];  // (not used here)
    u8 byte_2da;
    u8 unknown_2db[0x40d];  // (not used here)
    u32 word_6e8;
    u32 word_6ec;
};
GUEST_OFFSET(Object_00292e30_0, byte_18e, 0x18e);  // (from the original)
GUEST_OFFSET(Object_00292e30_0, byte_2da, 0x2da);  // (from the original)
GUEST_OFFSET(Object_00292e30_0, word_6e8, 0x6e8);  // (from the original)
GUEST_OFFSET(Object_00292e30_0, word_6ec, 0x6ec);  // (from the original)

inline guest::global<u8, 0x00950708> global_00950708;  // (from the original)

void f_00292e30(gptr<Object_00292e30_0> arg0, u32 r1) {
    *gptr<u8>(arg0->word_6e8 + 0xb4u) = u8(r1 == 0 ? 0u : 0xffu);  // (from the original)
    *gptr<u8>(arg0->word_6ec + 0xb4u) = u8(r1 == 0 ? 0u : 0xffu);  // (from the original)
    if (*global_00950708 == 0) {
        arg0->byte_18e = 1;
    } else {
        arg0->byte_2da = 1;
    }
    guest::cpu()->r[1] = 1u;
}

}  // namespace d_00292e30
GUEST_EXPORT(0x00292e30, d_00292e30::f_00292e30);

// f_00292fe4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00292fe4 {

inline guest::global<u8, 0x00950708> global_00950708;  // (from the original)
inline guest::global<u32, 0x00950724> global_00950724;  // (from the original)

u32 f_00292fe4() {
    u32 r1_1 = *global_00950708;
    u32 r0_1 = r1_1 == 4u ? *global_00950724 : ~0u;
    guest::cpu()->r[1] = r1_1;
    return r0_1;
}

}  // namespace d_00292fe4
GUEST_EXPORT(0x00292fe4, d_00292fe4::f_00292fe4);

// f_00293000: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00293000 {

inline guest::global<u32, 0x002930dc> global_002930dc;  // (from the original)
inline guest::global<u8, 0x00950708> global_00950708;  // (from the original)
inline guest::global<u8, 0x00950709> global_00950709;  // (from the original)
inline guest::global<u8, 0x0095070d> global_0095070d;  // (from the original)
inline guest::global<u8, 0x0095070e> global_0095070e;  // (from the original)
inline guest::global<u32, 0x00950718> global_00950718;  // (from the original)
inline constexpr guest::Function<0x001cddec, u32(u32, u32, u32)> call_001cddec;  // (from the original)
inline constexpr guest::Function<0x001cdf04, u32(u32, u32, u32)> call_001cdf04;  // (from the original)
inline constexpr guest::Function<0x00300904, u32(u32, u32, u32, u32)> call_00300904;  // (from the original)
inline constexpr guest::Function<0x0030b6c4, u32(u32, u32, u32)> call_0030b6c4;  // (from the original)
inline constexpr guest::Function<0x0058d3b4, u32(u32, u32, u32)> call_0058d3b4;  // (from the original)
inline constexpr guest::Function<0x0060be28, u32(u32, u32, u32)> call_0060be28;  // (from the original)
inline constexpr guest::Function<0x0062512c, u32(u32, u32, u32)> call_0062512c;  // (from the original)
inline constexpr guest::Function<0x006268f8, u32(u32, u32, u32)> call_006268f8;  // (from the original)

u32 f_00293000(u32 r0_unused, u32 r1, u32 r2, float S0) {
    guest::StackFrame frame(0x14);  // the original's stack frame
    u32 r0_1 = *global_0095070e;
    if (r0_1 == 0) {
        r0_1 = call_00300904(r0_1, r1, r2, guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        S0 = guest::cpu()->s[0];
        if (r0_1 != 0) {
            r0_1 = call_0030b6c4(r0_1, r1, r2);
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            S0 = guest::cpu()->s[0];
            if (r0_1 == 0) {
                return r0_1;
            }
        }
    }
    guest::cpu()->s[0] = S0;
    u32 r0_2 = call_00300904(r0_1, r1, r2, guest::cpu()->r[3]);
    u32 r1_1 = guest::cpu()->r[1];
    u32 r2_1 = guest::cpu()->r[2];
    float S0_1 = guest::cpu()->s[0];
    if (r0_2 != 0) {
        u32 r0_3 = call_0030b6c4(r0_2, r1_1, r2_1);
        u32 r1_2 = guest::cpu()->r[1];
        r2_1 = guest::cpu()->r[2];
        S0_1 = guest::cpu()->s[0];
        if (r0_3 != 0) {
            u32 r0_4 = call_006268f8(0x90u, r1_2, r2_1);  // (from the original)
            u32 r2_2 = guest::cpu()->r[2];
            call_001cdf04(frame.at(0).addr(), r0_4, r2_2);
            u32 r2_3 = guest::cpu()->r[2];
            call_001cddec(frame.at(0).addr(), 2u, r2_3);
            call_0062512c(0x90u, frame.at(0).addr(), 1u);  // (from the original)
            r2_1 = guest::cpu()->r[2];
            S0_1 = guest::cpu()->s[0];
        }
    }
    u32 r1_4 = *global_00950708;
    if (r1_4 == 3u) {
        r1_4 = *global_00950718;
        if (s32(r1_4) > 0) {
            *global_00950709 = 0;
            guest::cpu()->s[0] = S0_1;
            call_0060be28(0x22u, r1_4, r2_1);  // (from the original)
            u32 r1_5 = guest::cpu()->r[1];
            float S0_5 = std::bit_cast<float>(*global_002930dc);
            guest::cpu()->s[0] = S0_5;
            call_0058d3b4(0x10004a3u, r1_5, r2_1);  // (from the original)
            *global_0095070d = 1;
            return 1u;
        }
    }
    *global_00950709 = 0;
    guest::cpu()->r[1] = r1_4;
    guest::cpu()->s[0] = S0_1;
    return 0u;
}

}  // namespace d_00293000
GUEST_EXPORT_FRAMED(0x00293000, d_00293000::f_00293000, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_00293258: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00293258 {

inline constexpr guest::Function<0x001cdeac, u32(u32, u32, u32)> call_001cdeac;  // (from the original)
inline constexpr guest::Function<0x001cdf04, u32(u32, u32, u32)> call_001cdf04;  // (from the original)
inline constexpr guest::Function<0x0062512c, u32(u32, u32, u32)> call_0062512c;  // (from the original)
inline constexpr guest::Function<0x006268f8, u32(u32, u32, u32, u32)> call_006268f8;  // (from the original)

void f_00293258(u32 r0_unused, u32 r1, u32 r2) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 r0_1 = call_006268f8(0x90u, r1, r2, guest::cpu()->r[3]);  // (from the original)
    call_001cdf04(frame.at(0).addr(), r0_1, guest::cpu()->r[2]);
    call_001cdeac(frame.at(0).addr(), guest::cpu()->r[1], guest::cpu()->r[2]);
    call_0062512c(0x90u, frame.at(0).addr(), 1u);  // (from the original)
}

}  // namespace d_00293258
GUEST_EXPORT_FRAMED(0x00293258, d_00293258::f_00293258, 0x4010);  // pushes {r4, lr} first, as the original

// f_00293298: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00293298 {

struct __attribute__((packed)) Local_00293298_r0_8 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_00293298_r0_8, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_00293298_r0_8, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_00293298_r0_8, word_8, 0x8);  // (from the original)

struct __attribute__((packed)) Local_00293298_r1_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_00293298_r1_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_00293298_r1_1, word_4, 0x4);  // (from the original)

struct __attribute__((packed)) Local_00293298_r3_2 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_00293298_r3_2, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_00293298_r3_2, word_4, 0x4);  // (from the original)

struct __attribute__((packed)) Local_00293298_r6_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_00293298_r6_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_00293298_r6_1, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_00293298_r6_1, word_8, 0x8);  // (from the original)

inline guest::global<u32, 0x002933c4> global_002933c4;  // (from the original)
inline guest::global<u8, 0x00950708> global_00950708;  // (from the original)
inline guest::global<u8, 0x00950709> global_00950709;  // (from the original)
inline guest::global<u8, 0x0095070e> global_0095070e;  // (from the original)
inline guest::global<u32, 0x00950718> global_00950718;  // (from the original)
inline guest::global<u32, 0x0095071c> global_0095071c;  // (from the original)
inline guest::global<u32, 0x00997fbc> global_00997fbc;  // (from the original)
inline guest::global<u32, 0x00997fc0> global_00997fc0;  // (from the original)
inline guest::global<u32, 0x00997fcc> global_00997fcc;  // (from the original)
inline guest::global<u32, 0x00997fd0> global_00997fd0;  // (from the original)
inline constexpr guest::Function<0x00114af1, u32(u32, u32, u32, u32)> call_00114af0;  // (from the original)
inline constexpr guest::Function<0x002fb378, u32(u32, u32, u32, u32)> call_002fb378;  // (from the original)
inline constexpr guest::Function<0x00300904, u32(u32, u32, u32, u32)> call_00300904;  // (from the original)
inline constexpr guest::Function<0x0030b6c4, u32(u32, u32, u32, u32)> call_0030b6c4;  // (from the original)
inline constexpr guest::Function<0x0056cc38, u32(u32, u32, u32, u32)> call_0056cc38;  // (from the original)
inline constexpr guest::Function<0x0056cce4, u32(u32, u32, u32, u32)> call_0056cce4;  // (from the original)
inline constexpr guest::Function<0x0056ce84, u32(u32, u32, u32, u32)> call_0056ce84;  // (from the original)
inline constexpr guest::Function<0x0056cedc, u32(u32, u32, u32, u32)> call_0056cedc;  // (from the original)
inline constexpr guest::Function<0x0058d3b4, u32(u32, u32, u32, u32)> call_0058d3b4;  // (from the original)
inline constexpr guest::Function<0x0060be28, u32(u32, u32, u32, u32)> call_0060be28;  // (from the original)

u32 f_00293298(u32 r0_unused, u32 r1, u32 r2, u32 r3, float S0) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 r0_3 = 0;
    u32 r0_1 = *global_0095070e;
    if (r0_1 == 0) {
        u32 r0_2 = call_00300904(r0_1, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        S0 = guest::cpu()->s[0];
        if (r0_2 != 0) {
            r0_3 = call_0030b6c4(r0_2, r1, r2, r3);
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            S0 = guest::cpu()->s[0];
            if (r0_3 == 0) {
                return r0_3;
            }
        }
    }
    r0_3 = *global_00950708;
    if (r0_3 == 0 || r0_3 == 2u) {
        *global_00950709 = 3;
        u32 r0_4 = *global_0095070e;
        if (r0_4 == 0) {
            guest::cpu()->s[0] = S0;
            u32 r0_5 = call_00114af0(r0_4, r1, r2, r3);
            u32 r2_1 = guest::cpu()->r[2];
            u32 r3_1 = guest::cpu()->r[3];
            gptr<Local_00293298_r1_1> r1_1 = gptr<Local_00293298_r1_1>(0x950718u);  // (from the original)
            r1_1->word_0 = r0_5;
            r1_1->word_4 = 0;
            u32 r0_6 = call_002fb378(r0_5, r1_1.addr(), r2_1, r3_1);
            u32 r1_2 = *gptr<u32>(r0_6 + 4u);
            u32 r2_2 = *gptr<u32>(r0_6);
            u32 r0_7 = *gptr<u32>(r0_6 + 8u);
            *global_00997fc0 = r1_2;
            *global_00997fbc = r2_2;
            gptr<Local_00293298_r3_2> r3_2 = gptr<Local_00293298_r3_2>(0x997fc4u);  // (from the original)
            *global_00997fcc = r1_2;
            r3_2->word_0 = r0_7;
            r3_2->word_4 = r2_2;
            *global_00997fd0 = r0_7;
            call_0056cc38(0x997fbcu, 1u, r2_2, r3_2.addr());  // (from the original)
            u32 r1_3 = guest::cpu()->r[1];
            u32 r2_3 = guest::cpu()->r[2];
            u32 r3_3 = guest::cpu()->r[3];
            float S0_3 = guest::cpu()->s[0];
            if (*global_00950718 != 0) {
                frame.release();
                return call_0060be28(0x21u, r1_3, r2_3, r3_3);  // (from the original)
            }
            guest::cpu()->s[0] = S0_3;
            call_0056cce4(0x997fbcu, 0u, r2_3, r3_3);  // (from the original)
            u32 r2_4 = guest::cpu()->r[2];
            u32 r3_4 = guest::cpu()->r[3];
            call_0056ce84(0x997fbcu, 0u, r2_4, r3_4);  // (from the original)
            u32 r2_5 = guest::cpu()->r[2];
            u32 r3_5 = guest::cpu()->r[3];
            call_0056cedc(0x997fbcu, 0u, r2_5, r3_5);  // (from the original)
            u32 r1_4 = guest::cpu()->r[1];
            u32 r2_6 = guest::cpu()->r[2];
            u32 r3_6 = guest::cpu()->r[3];
            call_0060be28(0x23u, r1_4, r2_6, r3_6);  // (from the original)
            u32 r1_5 = guest::cpu()->r[1];
            u32 r3_7 = guest::cpu()->r[3];
            float S0_7 = std::bit_cast<float>(*global_002933c4);
            guest::cpu()->s[0] = S0_7;
            frame.release();
            return call_0058d3b4(0x10004a3u, r1_5, r2_6, r3_7);  // (from the original)
        }
        gptr<Local_00293298_r0_8> r0_8 = gptr<Local_00293298_r0_8>(0x997fbcu);  // (from the original)
        gptr<Local_00293298_r6_1> r6_1 = gptr<Local_00293298_r6_1>(0x997fc8u);  // (from the original)
        u32 r1_6 = r0_8->word_4;
        u32 r2_7 = r0_8->word_8;
        r6_1->word_0 = r0_8->word_0;
        r6_1->word_4 = r1_6;
        r6_1->word_8 = r2_7;
        guest::cpu()->s[0] = S0;
        r0_3 = call_0056cc38(0x997fc8u, ~0u, r2_7, r3);  // (from the original)
        r1 = guest::cpu()->r[1];
        S0 = guest::cpu()->s[0];
        *global_00950718 = 0;
        *global_0095071c = 0;
    }
    guest::cpu()->r[1] = r1;
    guest::cpu()->s[0] = S0;
    return r0_3;
}

}  // namespace d_00293298
GUEST_EXPORT(0x00293298, d_00293298::f_00293298);

// f_002933cc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002933cc {

struct __attribute__((packed)) Local_002933cc_r0_2 {
    u8 byte_0;
};
GUEST_OFFSET(Local_002933cc_r0_2, byte_0, 0x0);  // (from the original)

inline guest::global<u8, 0x00950708> global_00950708;  // (from the original)
inline guest::global<u8, 0x00950709> global_00950709;  // (from the original)
inline guest::global<u8, 0x0095070d> global_0095070d;  // (from the original)
inline constexpr guest::Function<0x001cdf04, u32(u32, u32, u32)> call_001cdf04;  // (from the original)
inline constexpr guest::Function<0x001cdf18, u32(u32, u32, u32)> call_001cdf18;  // (from the original)
inline constexpr guest::Function<0x002fae84, u32(u32, u32, u32, u32)> call_002fae84;  // (from the original)
inline constexpr guest::Function<0x00300904, u32(u32, u32, u32)> call_00300904;  // (from the original)
inline constexpr guest::Function<0x0030b6c4, u32(u32, u32, u32)> call_0030b6c4;  // (from the original)
inline constexpr guest::Function<0x0062512c, u32(u32, u32, u32)> call_0062512c;  // (from the original)
inline constexpr guest::Function<0x006268f8, u32(u32, u32, u32)> call_006268f8;  // (from the original)

u32 f_002933cc(u32 r0, u32 r1, u32 r2) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 r0_1 = call_002fae84(r0, r1, r2, guest::cpu()->r[3]);
    gptr<Local_002933cc_r0_2> r0_2 = gptr<Local_002933cc_r0_2>(r0_1 - 0xfff901ccu);  // (from the original)
    u32 r1_1 = r0_2->byte_0;
    if ((r1_1 & 8u) != 0) {
        r1_1 |= 0x40u;  // (from the original)
        r0_2->byte_0 = u8(r1_1);
    }
    u32 r0_3 = call_00300904(r0_2.addr(), r1_1, guest::cpu()->r[2]);
    u32 r1_2 = guest::cpu()->r[1];
    if (r0_3 != 0) {
        u32 r0_4 = call_0030b6c4(r0_3, r1_2, guest::cpu()->r[2]);
        u32 r1_3 = guest::cpu()->r[1];
        if (r0_4 != 0) {
            *global_00950709 = 0;
            *global_00950708 = 0;
            *global_0095070d = 1;
            u32 r0_5 = call_006268f8(0x90u, r1_3, guest::cpu()->r[2]);  // (from the original)
            call_001cdf04(frame.at(0).addr(), r0_5, guest::cpu()->r[2]);
            call_001cdf18(frame.at(0).addr(), guest::cpu()->r[1], guest::cpu()->r[2]);
            r0_4 = call_0062512c(0x90u, frame.at(0).addr(), 1u);  // (from the original)
            r1_3 = guest::cpu()->r[1];
        }
        guest::cpu()->r[1] = r1_3;
        return r0_4;
    }
    *global_00950709 = 0;
    *global_00950708 = 0;
    *global_0095070d = 1;
    guest::cpu()->r[1] = r1_2;
    return r0_3;
}

}  // namespace d_002933cc
GUEST_EXPORT_FRAMED(0x002933cc, d_002933cc::f_002933cc, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_002941f0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002941f0 {

struct __attribute__((packed)) Object_002941f0_0 {
    u8 unknown_0[0xaab];  // (not used here)
    u8 byte_aab;
    u8 byte_aac;
    u8 byte_aad;
};
GUEST_OFFSET(Object_002941f0_0, byte_aab, 0xaab);  // (from the original)
GUEST_OFFSET(Object_002941f0_0, byte_aac, 0xaac);  // (from the original)
GUEST_OFFSET(Object_002941f0_0, byte_aad, 0xaad);  // (from the original)

inline guest::global<u32, 0x0029433c> global_0029433c;  // (from the original)
inline guest::global<u8, 0x00950708> global_00950708;  // (from the original)
inline guest::global<u8, 0x0095070f> global_0095070f;  // (from the original)
inline constexpr guest::Function<0x0058d3b4, u32(u32, u32, u32, u32)> call_0058d3b4;  // (from the original)

void f_002941f0(gptr<Object_002941f0_0> arg0, float S0) {
    u32 r1_2 = 0;
    u32 r0_2 = 0;
    u32 r1_3 = 0;
    u32 zf_1 = 0;
    u32 r0_1 = s8(arg0->byte_aad);
    u32 r1_1 = arg0->byte_aab == 0 ? u32(s8(arg0->byte_aac)) : 0x3cu;  // (from the original)
    u32 r3_1 = *global_00950708;
    if (r3_1 != 3u) {
        if (r1_1 != 0 || r0_1 != 0) {
            goto L_294230;
        }
        guest::cpu()->r[1] = r1_1;
        return;
    }
    if (r1_1 == 0x3cu) {  // (from the original)
        guest::cpu()->r[1] = r1_1;
        return;
    }
L_294230:;
    if (r3_1 != 3u) {
        if (r1_1 != 0) {
            if (r1_1 == 1u && r0_1 == 0) {
                if (r3_1 == 4u) {
                    guest::cpu()->r[1] = r1_1;
                    guest::cpu()->s[0] = S0;
                    return;
                }
                *global_0095070f = 1;
                float S0_1 = std::bit_cast<float>(*global_0029433c);
                guest::cpu()->s[0] = S0_1;
                call_0058d3b4(0x10004a0u, 1u, 0x950708u, r3_1);
                return;  // (from the original)
            }
        } else if (r0_1 <= 0xau) {  // (from the original)
            float S0_2 = std::bit_cast<float>(*global_0029433c);
            guest::cpu()->s[0] = S0_2;
            call_0058d3b4(0x10004a1u, r1_1, 0x950708u, r3_1);
            return;  // (from the original)
        }
        if (r3_1 != 4u) {
            if (r3_1 == 3u) {
                goto L_2942b8;
            }
            goto L_2942e0;
        }
        if (r1_1 != 0 || r0_1 < 0x18u || r0_1 > 0x1du) {  // (from the original)
            goto L_2942e0;
        }
        r1_2 = 0x856bccu;  // (from the original)
        r0_2 = *gptr<u32>(r1_2 + (r0_1 << 2) - 0x60u);  // (from the original)
        goto L_294314;
    }
L_2942b8:;
    if (r1_1 == 0 && r0_1 != 0 && r0_1 <= 6u) {
        r1_2 = 0x856be4u;  // (from the original)
        r0_2 = *gptr<u32>(r1_2 + (r0_1 << 2) - 4u);
        goto L_294314;
    }
L_2942e0:;
    r1_3 = *global_0095070f;
    if (r1_3 == 0 || r0_1 < 0x36u || r0_1 > 0x3bu) {  // (from the original)
        guest::cpu()->r[1] = r1_3;
        guest::cpu()->s[0] = S0;
        return;
    }
    zf_1 = r0_1 == 0x36u;  // (from the original)
    r1_2 = 0x856bfcu + (r0_1 << 2);  // (from the original)
    r0_2 = *gptr<u32>(r1_2 - 0xd8u);  // (from the original)
    if (zf_1) {
        r1_2 = 0u;
        *global_0095070f = u8(r1_2);
    }
L_294314:;
    if (r0_2 == 0) {
        guest::cpu()->r[1] = r1_2;
        guest::cpu()->s[0] = S0;
        return;
    }
    float S0_3 = std::bit_cast<float>(*global_0029433c);
    guest::cpu()->s[0] = S0_3;
    call_0058d3b4(r0_2, r1_2, 0x950708u, r3_1);
    return;  // (from the original)
}

}  // namespace d_002941f0
GUEST_EXPORT(0x002941f0, d_002941f0::f_002941f0);

// f_00294340: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00294340 {

inline guest::global<u8, 0x00950708> global_00950708;  // (from the original)
inline guest::global<u8, 0x00950709> global_00950709;  // (from the original)

u32 f_00294340() {
    u32 r1_1 = *global_00950708;
    if (r1_1 == 1u) {
        r1_1 = 0u;
        *global_00950709 = u8(r1_1);
    }
    guest::cpu()->r[1] = r1_1;
    return 0x950708u;  // (from the original)
}

}  // namespace d_00294340
GUEST_EXPORT(0x00294340, d_00294340::f_00294340);

// f_002947ac: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002947ac {

inline constexpr guest::Function<0x00569dc4, u32(u32, u32, u32, u32)> call_00569dc4;  // (from the original)
inline constexpr guest::Function<0x0056a974, u32(u32, u32, u32, u32)> call_0056a974;  // (from the original)

u32 f_002947ac(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0xc);  // the original's stack frame
    u32 r0_1 = call_00569dc4(r0, r1, r2, r3);
    *frame.at<u32>(4) = 0x2947e4;  // (from the original)
    *frame.at<u32>(0) = 0x9047f8;  // (from the original)
    u32 r0_2 = call_0056a974(0x997fd4u, frame.at(0).addr(), *gptr<u32>(r0_1 + 4u), 0x80u);  // (from the original)
    return r0_2;
}

}  // namespace d_002947ac
GUEST_EXPORT_FRAMED(0x002947ac, d_002947ac::f_002947ac, 0x4000);  // pushes {lr} first, as the original

// f_002958ac: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002958ac {

inline constexpr guest::Function<0x002f76ad, u32(u32, u32, u32, u32)> call_002f76ac;  // (from the original)
inline constexpr guest::Function<0x00521ae0, u32(u32, u32)> call_00521ae0;  // (from the original)
inline constexpr guest::Function<0x00567ef0, u32(u32, u32, u32, u32)> call_00567ef0;  // (from the original)
inline constexpr guest::Function<0x0056988c, u32(u32, u32, u32, u32)> call_0056988c;  // (from the original)
inline constexpr guest::Function<0x005bf744, u32(u32, u32, u32, u32)> call_005bf744;  // (from the original)

u32 f_002958ac(gptr<BsTimeBelWindow> arg0, u32 r1_unused, u32 r2_unused, u32 r3) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    arg0->word_14 = 0x8f07b4;  // (from the original)
    arg0->word_0 = 0x8f076c;  // (from the original)
    arg0->word_b64 = 0x8fa930;  // (from the original)
    u32 r0_2 = call_0056988c(arg0.addr() + 0xbe8u, 0x8f076cu, 0x8fa930u, r3);  // (from the original)
    u32 r0_4 = call_0056988c(r0_2 - 0x28u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_6 = call_0056988c(r0_4 - 0x28u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r4_1 = r0_6 - 0xb98u;  // (from the original)
    call_002f76ac(r0_6 - 0x214u, 0x295544u, 0x48u, 4u);  // (from the original)
    call_002f76ac(r4_1 + 0x6fcu, 0x295544u, 0x48u, 9u);  // (from the original)
    u32 r0_10 = call_0056988c(r4_1 + 0x63cu, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_12 = call_0056988c(r0_10 - 0x28u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_14 = call_0056988c(r0_12 - 0x28u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_16 = call_0056988c(r0_14 - 0x28u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_18 = call_0056988c(r0_16 - 0x28u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_20 = call_0056988c(r0_18 - 0x28u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_22 = call_0056988c(r0_20 - 0x28u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_24 = call_00567ef0(r0_22 - 0x248u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_26 = call_005bf744(r0_24 - 0x14cu, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_28 = call_005bf744(r0_26 - 0x14cu, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    frame.release();
    return call_00521ae0(r0_28 - 0x6cu, guest::cpu()->r[1]);  // (from the original)
}

}  // namespace d_002958ac
GUEST_EXPORT(0x002958ac, d_002958ac::f_002958ac);

// f_0029598c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0029598c {

inline guest::global<u32, 0x00952c48> global_00952c48;  // (from the original)
inline constexpr guest::Function<0x00125b38, u32(u32, u32, u32, u32)> call_00125b38;  // (from the original)

u32 f_0029598c() {
    return call_00125b38(0x9984ccu, 0x2959a8u, *global_00952c48, 0x80u);  // (from the original)
}

}  // namespace d_0029598c
GUEST_EXPORT(0x0029598c, d_0029598c::f_0029598c);

// f_00297724: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00297724 {

struct __attribute__((packed)) Local_00297724_r0_6 {
    u32 word_0;
    u8 unknown_4[0x20];  // (not used here)
    u32 word_24;
    u8 unknown_28[0xa18];  // (not used here)
    u32 word_a40;
    u8 unknown_a44[0x20];  // (not used here)
    u32 word_a64;
    u32 word_a68;
    u32 word_a6c;
};
GUEST_OFFSET(Local_00297724_r0_6, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_00297724_r0_6, word_24, 0x24);  // (from the original)
GUEST_OFFSET(Local_00297724_r0_6, word_a40, 0xa40);  // (from the original)
GUEST_OFFSET(Local_00297724_r0_6, word_a64, 0xa64);  // (from the original)
GUEST_OFFSET(Local_00297724_r0_6, word_a68, 0xa68);  // (from the original)
GUEST_OFFSET(Local_00297724_r0_6, word_a6c, 0xa6c);  // (from the original)

inline constexpr guest::Function<0x002682ac, u32(u32, u32, u32, u32)> call_002682ac;  // (from the original)
inline constexpr guest::Function<0x002cdcb0, u32(u32)> call_002cdcb0;  // (from the original)
inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> call_00301d0c;  // (from the original)

u32 f_00297724(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r0_1 = call_002682ac(r0, r1, r2, r3);
    *gptr<u32>(r0_1) = 0x8f7fd4;  // (from the original)
    *gptr<u32>(r0_1 + 0xa40u) = 0x8f8020;  // (from the original)
    u32 r0_3 = call_00301d0c(r0_1 + 0x1888u, 0x2b9440u, 0x36cu, 0xau);  // (from the original)
    u32 r0_5 = call_002cdcb0(r0_3 + 0x2238u);  // (from the original)
    gptr<Local_00297724_r0_6> r0_6 = gptr<Local_00297724_r0_6>(r0_5 - 0x3ac0u);  // (from the original)
    *gptr<u8>(0x3ca0u + r0_6.addr()) = 0;  // (from the original)
    *gptr<u32>(0x3ca4u + r0_6.addr()) = 0;  // (from the original)
    r0_6->word_a64 = 0x2977c4;  // (from the original)
    r0_6->word_a6c = 0x2977cc;  // (from the original)
    r0_6->word_a68 = 0x9533c4;  // (from the original)
    r0_6->word_24 = 0x2977b8;  // (from the original)
    r0_6->word_a40 = 0x8f0874;  // (from the original)
    r0_6->word_0 = 0x8f0828;  // (from the original)
    guest::cpu()->r[1] = 0x2977ccu;  // (from the original)
    return r0_6.addr();
}

}  // namespace d_00297724
GUEST_EXPORT_FRAMED(0x00297724, d_00297724::f_00297724, 0x4010);  // pushes {r4, lr} first, as the original

// f_00297b60: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00297b60 {

struct __attribute__((packed)) Object_00297b60_0 {
    u8 unknown_0[0x26c];  // (not used here)
    u32 word_26c;
};
GUEST_OFFSET(Object_00297b60_0, word_26c, 0x26c);  // (from the original)

struct __attribute__((packed)) Local_00297b60_r5_1 {
    u8 unknown_0[0x330];  // (not used here)
    u32 word_330;
    u32 word_334;
    u32 word_338;
};
GUEST_OFFSET(Local_00297b60_r5_1, word_330, 0x330);  // (from the original)
GUEST_OFFSET(Local_00297b60_r5_1, word_334, 0x334);  // (from the original)
GUEST_OFFSET(Local_00297b60_r5_1, word_338, 0x338);  // (from the original)

inline constexpr guest::Function<0x004b6d74, u32(u32, u32, u32, u32)> call_004b6d74;  // (from the original)
inline constexpr guest::Function<0x004b6dc8, u32(u32, u32, u32, u32)> call_004b6dc8;  // (from the original)
inline constexpr guest::Function<0x0056878c, u32(u32, u32)> call_0056878c;  // (from the original)
inline constexpr guest::Function<0x00568c10, u32(u32, u32)> call_00568c10;  // (from the original)
inline constexpr guest::Function<0x006aa944, u32(u32, u32)> call_006aa944;  // (from the original)

u32 f_00297b60(gptr<Object_00297b60_0> arg0, u32 r1, float S0) {
    u32 r1_1 = arg0->word_26c;
    u32 r0_1 = *gptr<u32>(r1_1 + 0xcu);  // (from the original)
    if (r0_1 != 0) {
        r0_1 = call_004b6dc8(r0_1, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1_1 = guest::cpu()->r[1];
        S0 = guest::cpu()->s[0];
    }
    if (r1 != 0) {
        u32 r1_2 = arg0->word_26c;
        guest::cpu()->s[0] = S0;
        call_004b6d74(r1, r1_2, guest::cpu()->r[2], guest::cpu()->r[3]);
        u32 r1_3 = guest::cpu()->r[1];
        call_00568c10(arg0.addr() + 0x24cu, r1_3);  // (from the original)
        u32 r1_4 = guest::cpu()->r[1];
        call_006aa944(r1, r1_4);
        float S0_3 = guest::cpu()->s[0];
        gptr<Local_00297b60_r5_1> r5_1 = gptr<Local_00297b60_r5_1>(arg0.addr() + 0x400u);  // (from the original)
        r5_1->word_330 = std::bit_cast<u32>(S0_3);
        guest::cpu()->s[0] = S0_3;
        u32 r0_4 = call_0056878c(arg0.addr() + 0x24cu, 0x857cb4u);  // (from the original)
        u32 r1_5 = guest::cpu()->r[1];
        call_006aa944(r0_4, r1_5);
        float S0_5 = guest::cpu()->s[0];
        r5_1->word_334 = std::bit_cast<u32>(S0_5);
        guest::cpu()->s[0] = S0_5;
        u32 r0_6 = call_0056878c(arg0.addr() + 0x24cu, 0x857ca8u);  // (from the original)
        u32 r1_6 = guest::cpu()->r[1];
        r0_1 = call_006aa944(r0_6, r1_6);
        r1_1 = guest::cpu()->r[1];
        float S0_7 = guest::cpu()->s[0];
        r5_1->word_338 = std::bit_cast<u32>(S0_7);
    }
    guest::cpu()->r[1] = r1_1;
    return r0_1;
}

}  // namespace d_00297b60
GUEST_EXPORT_FRAMED(0x00297b60, d_00297b60::f_00297b60, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_00297d54: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00297d54 {

struct __attribute__((packed)) Object_00297d54_0 {
    u8 unknown_0[0x74c];  // (not used here)
    u32 word_74c;
    u32 word_750;
    u8 unknown_754[0x34];  // (not used here)
    u32 word_788;
};
GUEST_OFFSET(Object_00297d54_0, word_74c, 0x74c);  // (from the original)
GUEST_OFFSET(Object_00297d54_0, word_750, 0x750);  // (from the original)
GUEST_OFFSET(Object_00297d54_0, word_788, 0x788);  // (from the original)

struct __attribute__((packed)) Local_00297d54_r0_1 {
    u8 unknown_0[0xb7];  // (not used here)
    u8 byte_b7;
};
GUEST_OFFSET(Local_00297d54_r0_1, byte_b7, 0xb7);  // (from the original)


void f_00297d54(gptr<Object_00297d54_0> arg0) {
    u32 r1_1 = arg0->word_750;
    gptr<Local_00297d54_r0_1> r0_1 = gptr<Local_00297d54_r0_1>(arg0->word_788);
    u32 r2_1 = arg0->word_74c - 1u;
    u32 zf_1 = r1_1 == r2_1;
    u32 cf_1 = r1_1 >= r2_1;
    if (r1_1 > r2_1) {
        r1_1 = 1u;
    }
    if (!cf_1 || zf_1) {
        r1_1 = 0u;
    }
    u32 r1_2 = r1_1 | u32(r0_1->byte_b7) & 0xfeu;  // (from the original)
    r0_1->byte_b7 = u8(r1_2);
    guest::cpu()->r[1] = r1_2;
}

}  // namespace d_00297d54
GUEST_EXPORT(0x00297d54, d_00297d54::f_00297d54);

// f_00297f04: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00297f04 {

struct __attribute__((packed)) Object_00297f04_0 {
    u8 unknown_0[0x71c];  // (not used here)
    u32 word_71c;
    u32 word_720;
    u8 unknown_724[0x28];  // (not used here)
    u32 word_74c;
    u32 word_750;
    u32 word_754;
    u8 unknown_758[0x10];  // (not used here)
    u32 word_768;
    u8 unknown_76c[0x1c];  // (not used here)
    u32 word_788;
};
GUEST_OFFSET(Object_00297f04_0, word_71c, 0x71c);  // (from the original)
GUEST_OFFSET(Object_00297f04_0, word_720, 0x720);  // (from the original)
GUEST_OFFSET(Object_00297f04_0, word_74c, 0x74c);  // (from the original)
GUEST_OFFSET(Object_00297f04_0, word_750, 0x750);  // (from the original)
GUEST_OFFSET(Object_00297f04_0, word_754, 0x754);  // (from the original)
GUEST_OFFSET(Object_00297f04_0, word_768, 0x768);  // (from the original)
GUEST_OFFSET(Object_00297f04_0, word_788, 0x788);  // (from the original)

struct __attribute__((packed)) Local_00297f04_r0_4 {
    u8 unknown_0[0xb7];  // (not used here)
    u8 byte_b7;
};
GUEST_OFFSET(Local_00297f04_r0_4, byte_b7, 0xb7);  // (from the original)

struct __attribute__((packed)) Local_00297f04_r0_5 {
    u8 unknown_0[0x304];  // (not used here)
    u32 word_304;
    u8 unknown_308[0xc];  // (not used here)
    u32 word_314;
};
GUEST_OFFSET(Local_00297f04_r0_5, word_304, 0x304);  // (from the original)
GUEST_OFFSET(Local_00297f04_r0_5, word_314, 0x314);  // (from the original)

inline guest::global<u32, 0x00297fbc> global_00297fbc;  // (from the original)
inline constexpr guest::Function<0x002982f0, u32(u32, u32, u32, u32)> call_002982f0;  // (from the original)
inline constexpr guest::Function<0x002986f0, u32(u32, u32, u32, u32)> call_002986f0;  // (from the original)

u32 f_00297f04(gptr<Object_00297f04_0> arg0, u32 r1, u32 r2, float S0, float S1, float S2) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 r0_1 = arg0->word_754;
    if (r0_1 <= r1) {
        r0_1 = r1;
    }
    arg0->word_754 = r0_1;
    arg0->word_750 = r1;
    u32 r0_2 = r1 - arg0->word_74c + 1u;
    arg0->word_720 = r0_2;
    if (s32(r0_2) <= 0) {
        r0_2 = 0u;
    }
    arg0->word_720 = r0_2;
    u32 r0_3 = arg0->word_750;
    u32 r1_1 = arg0->word_74c - 1u;
    u32 zf_1 = r0_3 == r1_1;
    u32 cf_1 = r0_3 >= r1_1;
    gptr<Local_00297f04_r0_4> r0_4 = gptr<Local_00297f04_r0_4>(arg0->word_788);
    if (cf_1 && !zf_1) {
        r1_1 = 1u;
    }
    if (!cf_1 || zf_1) {
        r1_1 = 0u;
    }
    u32 r2_1 = u32(r0_4->byte_b7) & 0xfeu;  // (from the original)
    u32 r1_2 = r1_1 | r2_1;
    r0_4->byte_b7 = u8(r1_2);
    call_002986f0(arg0.addr(), r1_2, r2_1, guest::cpu()->r[3]);
    u32 r2_2 = guest::cpu()->r[2];
    gptr<Local_00297f04_r0_5> r0_5 = gptr<Local_00297f04_r0_5>(arg0.addr() + 0x400u);  // (from the original)
    float S1_1 = std::bit_cast<float>(*global_00297fbc);
    float S2_1 = std::bit_cast<float>(*gptr<u32>(arg0->word_768 + 0x4cu));  // (from the original)
    u32 r1_3 = 0u;
    float S0_1 = std::bit_cast<float>(r0_5->word_304) - S2_1 * S1_1;
    r0_5->word_314 = std::bit_cast<u32>(S0_1);
    if (r2 != 0) {
        u32 r0_6 = arg0->word_720;
        r1_3 = arg0->word_71c;
        if ((r1_3 - r0_6) != 0 && s32(r1_3) >= s32(r0_6)) {
            r1_3 = r0_6;
        }
    }
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    guest::cpu()->s[2] = S2_1;
    frame.release();
    return call_002982f0(arg0.addr(), r1_3, r2_2, guest::cpu()->r[3]);
}

}  // namespace d_00297f04
GUEST_EXPORT(0x00297f04, d_00297f04::f_00297f04);

// f_00298834: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00298834 {

inline constexpr guest::Function<0x004bef3c, u32(u32, u32)> call_004bef3c;  // (from the original)

u32 f_00298834(gptr<CommonScrollBarWidth> arg0) {
    u32 r0_2 = call_004bef3c(arg0->word_784, guest::cpu()->r[1]);
    if (r0_2 != 0) {
        r0_2 = 1u;
    }
    return r0_2;
}

}  // namespace d_00298834
GUEST_EXPORT_FRAMED(0x00298834, d_00298834::f_00298834, 0x4010);  // pushes {r4, lr} first, as the original

// f_00298950: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00298950 {

struct __attribute__((packed)) Local_00298950_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_00298950_ea_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_00298950_ea_1, word_4, 0x4);  // (from the original)

struct __attribute__((packed)) Local_00298950_r5_1 {
    u8 unknown_0[0xf4];  // (not used here)
    u8 byte_f4;
};
GUEST_OFFSET(Local_00298950_r5_1, byte_f4, 0xf4);  // (from the original)

struct __attribute__((packed)) Local_00298950_r6_1 {
    u8 unknown_0[0x2];  // (not used here)
    u8 byte_2;
};
GUEST_OFFSET(Local_00298950_r6_1, byte_2, 0x2);  // (from the original)

struct __attribute__((packed)) Local_00298950_r7_1 {
    u8 unknown_0[0x334];  // (not used here)
    u32 word_334;
    u32 word_338;
};
GUEST_OFFSET(Local_00298950_r7_1, word_334, 0x334);  // (from the original)
GUEST_OFFSET(Local_00298950_r7_1, word_338, 0x338);  // (from the original)

inline constexpr guest::Function<0x002982f0, u32(u32, u32, u32)> call_002982f0;  // (from the original)
inline constexpr guest::Function<0x0058d3b4, u32(u32, u32, u32, u32)> call_0058d3b4;  // (from the original)
inline constexpr guest::Function<0x0072355c, u32(u32, u32, u32, u32)> call_0072355c;  // (from the original)

void f_00298950(gptr<CommonScrollBar> arg0, u32 r1, u32 r2, float S0) {
    guest::StackFrame frame(0x18);  // the original's stack frame
    u32 r0_4 = 0;
    u32 r1_2 = 0;
    u32 r0_6 = 0;
    u32 r1_4 = 0;
    gptr<Local_00298950_r5_1> r5_1 = gptr<Local_00298950_r5_1>(arg0.addr() + 0x600u);  // (from the original)
    if (arg0->byte_6fe != 1u && arg0->word_6ec == 0) {
        u32 r0_2 = call_0072355c(arg0.addr() + 0x608u, r1, r2, guest::cpu()->r[3]);  // (from the original)
        r1 = guest::cpu()->r[1];
        u32 r2_1 = guest::cpu()->r[2];
        S0 = guest::cpu()->s[0];
        gptr<Local_00298950_r6_1> r6_1 = gptr<Local_00298950_r6_1>(arg0.addr() + 0x700u);  // (from the original)
        gptr<Local_00298950_r7_1> r7_1 = gptr<Local_00298950_r7_1>(arg0.addr() + 0x400u);  // (from the original)
        if (r0_2 != 0) {
            if (r0_2 != 1u) {
                return;
            }
            gptr<Local_00298950_ea_1> ea_1 = gptr<Local_00298950_ea_1>(arg0.addr() + 0x71cu);  // (from the original)
            u32 r0_3 = ea_1->word_0;
            r1 = ea_1->word_4;
            if (s32(r0_3) >= s32(r1)) {
                guest::cpu()->r[1] = r1;
                return;
            }
            call_002982f0(arg0.addr(), r0_3 + 1u, r2_1);
            if (r5_1->byte_f4 == 0) {
                r0_4 = 0x10003abu;  // (from the original)
                r1_2 = 1u;
            } else {
                r0_4 = 0x10003aau;  // (from the original)
                r1_2 = 0u;
            }
            if (r6_1->byte_2 != 0) {
                r0_4 = r1_2 == 0 ? 0x10003acu : 0x10003adu;  // (from the original)
            }
            float S0_1 = std::bit_cast<float>(r7_1->word_338);
            guest::cpu()->s[0] = S0_1;
            frame.release();
            call_0058d3b4(r0_4, r1_2, r2_1, guest::cpu()->r[3]);
            return;
        }
        u32 r0_5 = *gptr<u32>(arg0.addr() + 0x71cu);  // (from the original)
        if (s32(r0_5) > 0) {
            guest::cpu()->s[0] = S0;
            call_002982f0(arg0.addr(), r0_5 - 1u, r2_1);
            if (r5_1->byte_f4 == 0) {
                r0_6 = 0x10003a9u;  // (from the original)
                r1_4 = 1u;
            } else {
                r0_6 = 0x10003a8u;  // (from the original)
                r1_4 = 0u;
            }
            if (r6_1->byte_2 != 0) {
                r0_6 = r1_4 == 0 ? 0x10003aeu : 0x10003afu;  // (from the original)
            }
            float S0_2 = std::bit_cast<float>(r7_1->word_334);
            guest::cpu()->s[0] = S0_2;
            frame.release();
            call_0058d3b4(r0_6, r1_4, r2_1, guest::cpu()->r[3]);
            return;
        }
    }
    guest::cpu()->r[1] = r1;
    guest::cpu()->s[0] = S0;
}

}  // namespace d_00298950
GUEST_EXPORT(0x00298950, d_00298950::f_00298950);

// f_00298a6c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00298a6c {

struct __attribute__((packed)) Local_00298a6c_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
};
GUEST_OFFSET(Local_00298a6c_ea_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_00298a6c_ea_1, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_00298a6c_ea_1, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Local_00298a6c_ea_1, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Local_00298a6c_ea_1, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Local_00298a6c_ea_1, word_14, 0x14);  // (from the original)

struct __attribute__((packed)) Local_00298a6c_ea_13 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_00298a6c_ea_13, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_00298a6c_ea_13, word_4, 0x4);  // (from the original)

struct __attribute__((packed)) Local_00298a6c_ea_14 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_00298a6c_ea_14, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_00298a6c_ea_14, word_4, 0x4);  // (from the original)

struct __attribute__((packed)) Local_00298a6c_ea_15 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_00298a6c_ea_15, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_00298a6c_ea_15, word_4, 0x4);  // (from the original)

struct __attribute__((packed)) Local_00298a6c_ea_3 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_00298a6c_ea_3, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_00298a6c_ea_3, word_4, 0x4);  // (from the original)

struct __attribute__((packed)) Local_00298a6c_r6_2 {
    u8 unknown_0[0x522];  // (not used here)
    u8 byte_522;
    u8 byte_523;
};
GUEST_OFFSET(Local_00298a6c_r6_2, byte_522, 0x522);  // (from the original)
GUEST_OFFSET(Local_00298a6c_r6_2, byte_523, 0x523);  // (from the original)

struct __attribute__((packed)) Local_00298a6c_r9_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
};
GUEST_OFFSET(Local_00298a6c_r9_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_00298a6c_r9_1, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_00298a6c_r9_1, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Local_00298a6c_r9_1, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Local_00298a6c_r9_1, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Local_00298a6c_r9_1, word_14, 0x14);  // (from the original)

inline guest::global<u32, 0x00298ba8> global_00298ba8;  // (from the original)
inline guest::global<u32, 0x00857bc4> global_00857bc4;  // (from the original)
inline guest::global<u32, 0x00857bc8> global_00857bc8;  // (from the original)
inline constexpr guest::Function<0x002b6a00, u32(u32, u32, u32, u32)> call_002b6a00;  // (from the original)
inline constexpr guest::Function<0x002f6a30, u32(u32, u32)> call_002f6a30;  // (from the original)
inline constexpr guest::Function<0x002f6e98, u32(u32, u32, u32, u32)> call_002f6e98;  // (from the original)
inline constexpr guest::Function<0x002f7508, u32(u32, u32, u32, u32)> call_002f7508;  // (from the original)
inline constexpr guest::Function<0x004b4fc0, u32(u32, u32, u32, u32)> call_004b4fc0;  // (from the original)
inline constexpr guest::Function<0x0056878c, u32(u32, u32, u32, u32)> call_0056878c;  // (from the original)

void f_00298a6c(u32 r0, float S0) {
    guest::StackFrame frame(0x64);  // the original's stack frame
    u32 r5 = r0;
    gptr<Local_00298a6c_r9_1> r9_1 = gptr<Local_00298a6c_r9_1>(frame.at(0x40).addr());  // (from the original)
    gptr<Local_00298a6c_ea_1> ea_1 = gptr<Local_00298a6c_ea_1>(0x857bdcu);  // (from the original)
    u32 r2_1 = ea_1->word_0;
    u32 r3_1 = ea_1->word_4;
    u32 r6_1 = ea_1->word_8;
    u32 r7_1 = ea_1->word_c;
    u32 r8_1 = ea_1->word_10;
    u32 r12_1 = ea_1->word_14;
    r9_1->word_0 = r2_1;
    r9_1->word_4 = r3_1;
    r9_1->word_8 = r6_1;
    r9_1->word_c = r7_1;
    r9_1->word_10 = r8_1;
    r9_1->word_14 = r12_1;
    u32 r2_2 = *gptr<u32>(0x857bf4u);  // (from the original)
    gptr<Local_00298a6c_ea_3> ea_3 = gptr<Local_00298a6c_ea_3>(frame.at(0x38).addr());  // (from the original)
    ea_3->word_0 = r0 + 4u;
    ea_3->word_4 = r5 + 0x24cu;  // (from the original)
    u32 r0_1 = r5 + 0x608u;  // (from the original)
    *frame.at<u32>(0x58) = r2_2;  // (from the original)
    u32 r8 = r0_1;
    call_002f6e98(r0_1, frame.at(0x38).addr(), 0u, r3_1);  // (from the original)
    u32 r2 = guest::cpu()->r[2];
    u32 r3 = guest::cpu()->r[3];
    u32 r9 = 0u;
    S0 = std::bit_cast<float>(*global_00298ba8);
    *gptr<u32>(r5 + 0x6dcu) = *gptr<u32>(r5 + 0x6dcu) | 0x40u;  // (from the original)
    *frame.at<u32>(0) = r9;
    *frame.at<u32>(4) = r9;
    *frame.at<u32>(8) = r9;
    *frame.at<u32>(0xc) = r9;  // (from the original)
    *frame.at<u32>(0x10) = r9;  // (from the original)
    *frame.at<u32>(0x14) = r9;  // (from the original)
    *frame.at<u32>(0x18) = r9;  // (from the original)
    *frame.at<u32>(8) = std::bit_cast<u32>(S0);
    *frame.at<u32>(0xc) = std::bit_cast<u32>(S0);  // (from the original)
    u32 r0_3 = *global_00857bc4;
    u32 r1_2 = *global_00857bc8;
    u32 r10 = frame.at(0x28).addr();  // (from the original)
    u32 r11 = frame.at(0x30).addr();  // (from the original)
    gptr<Local_00298a6c_ea_13> ea_13 = gptr<Local_00298a6c_ea_13>(frame.at(0x28).addr());  // (from the original)
    ea_13->word_0 = r0_3;
    ea_13->word_4 = r1_2;
    gptr<Local_00298a6c_ea_14> ea_14 = gptr<Local_00298a6c_ea_14>(0x857bccu);  // (from the original)
    u32 r0_4 = ea_14->word_0;
    u32 r1_3 = ea_14->word_4;
    u32 r4 = r9;
    gptr<Local_00298a6c_ea_15> ea_15 = gptr<Local_00298a6c_ea_15>(frame.at(0x30).addr());  // (from the original)
    ea_15->word_0 = r0_4;
    ea_15->word_4 = r1_3;
    do {
        u32 r1_4 = *gptr<u32>(r10 + (r4 << 2));
        guest::cpu()->s[0] = S0;
        u32 r0_6 = call_0056878c(r5 + 0x24cu, r1_4, r2, r3);  // (from the original)
        u32 r3_2 = guest::cpu()->r[3];
        *frame.at<u32>(0) = r0_6;
        u32 r1_5 = *gptr<u32>(r11 + (r4 << 2));
        u32 r0_8 = call_004b4fc0(r5 + 0x24cu, r1_5, 1u, r3_2);  // (from the original)
        u32 r2_3 = guest::cpu()->r[2];
        u32 r3_3 = guest::cpu()->r[3];
        *frame.at<u32>(4) = r0_8;
        gptr<Local_00298a6c_r6_2> r6_2 = gptr<Local_00298a6c_r6_2>(r5 + ((r4 << 3) - r4 << 5));
        u32 r7_2 = r6_2.addr() + 0x448u;  // (from the original)
        *frame.at<u32>(0x14) = r4;  // (from the original)
        *frame.at<u32>(0x10) = r9;  // (from the original)
        call_002b6a00(r7_2, frame.at(0).addr(), r2_3, r3_3);
        u32 r3_4 = guest::cpu()->r[3];
        r6_2->byte_522 = u8(r9);
        r6_2->byte_523 = u8(r9);
        call_002f7508(r8, r7_2, 1u, r3_4);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        S0 = guest::cpu()->s[0];
        r4 += 1u;
        guest::preempt();
    } while (s32(r4) < 2);
    guest::cpu()->s[0] = S0;
    call_002f6a30(r8, 0u);
    *gptr<u32>(r5 + 0x6dcu) = *gptr<u32>(r5 + 0x6dcu) & ~8u;  // (from the original)
    *gptr<u16>(0x6d8u + r5) = 0x23;  // (from the original)
}

}  // namespace d_00298a6c
GUEST_EXPORT_FRAMED(0x00298a6c, d_00298a6c::f_00298a6c, 0x4ff0);  // pushes {r4, r5, r6, r7, r8, r9, r10, r11, lr} first, as the original

// f_00298bb0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00298bb0 {

struct __attribute__((packed)) Object_00298bb0_0 {
    u8 unknown_0[0x764];  // (not used here)
    u32 word_764;
};
GUEST_OFFSET(Object_00298bb0_0, word_764, 0x764);  // (from the original)

struct __attribute__((packed)) Local_00298bb0_r0_3 {
    u8 unknown_0[0x4c0];  // (not used here)
    u32 word_4c0;
    u32 word_4c4;
};
GUEST_OFFSET(Local_00298bb0_r0_3, word_4c0, 0x4c0);  // (from the original)
GUEST_OFFSET(Local_00298bb0_r0_3, word_4c4, 0x4c4);  // (from the original)

inline guest::global<u32, 0x00298c0c> global_00298c0c;  // (from the original)
inline constexpr guest::Function<0x00148710, u32(u32, u32, u32, u32)> call_00148710;  // (from the original)
inline constexpr guest::Function<0x001f99e4, u32(u32, u32)> call_001f99e4;  // (from the original)
inline constexpr guest::Function<0x006d1e64, u32(u32, u32, u32)> call_006d1e64;  // (from the original)

u32 f_00298bb0(gptr<Object_00298bb0_0> arg0) {
    guest::StackFrame frame(0xc);  // the original's stack frame
    float S0_1 = std::bit_cast<float>(*global_00298c0c);
    u32 r2_1 = frame.at(0).addr();
    *frame.at<u32>(0) = std::bit_cast<u32>(S0_1);
    *frame.at<u32>(4) = std::bit_cast<u32>(S0_1);
    *frame.at<u32>(8) = std::bit_cast<u32>(S0_1);
    u32 r1_1 = arg0->word_764 + 0x80u;  // (from the original)
    guest::cpu()->s[0] = S0_1;
    u32 r0_1 = call_00148710(r2_1, r1_1, r2_1, guest::cpu()->r[3]);
    u32 r1_2 = guest::cpu()->r[1];
    u32 r2_2 = guest::cpu()->r[2];
    u32 r0_2 = call_006d1e64(r0_1, r1_2, r2_2);
    u32 r2_3 = guest::cpu()->r[2];
    gptr<Local_00298bb0_r0_3> r0_3 = gptr<Local_00298bb0_r0_3>(*gptr<u32>(r0_2 + 0x1f4u));  // (from the original)
    r0_3->word_4c0 = *frame.at<u32>(0);
    u32 r1_3 = *frame.at<u32>(4);
    r0_3->word_4c4 = r1_3;
    u32 r0_4 = call_006d1e64(r0_3.addr(), r1_3, r2_3);
    u32 r0_5 = *gptr<u32>(r0_4 + 0x1f4u);  // (from the original)
    u32 r0_6 = call_001f99e4(r0_5, frame.at(0).addr());
    return r0_6;
}

}  // namespace d_00298bb0
GUEST_EXPORT_FRAMED(0x00298bb0, d_00298bb0::f_00298bb0, 0x4000);  // pushes {lr} first, as the original

// f_00298e94: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00298e94 {

struct __attribute__((packed)) Object_00298e94_0 {
    u8 unknown_0[0x702];  // (not used here)
    u8 byte_702;
    u8 unknown_703[0x31];  // (not used here)
    u32 word_734;
};
GUEST_OFFSET(Object_00298e94_0, byte_702, 0x702);  // (from the original)
GUEST_OFFSET(Object_00298e94_0, word_734, 0x734);  // (from the original)

inline constexpr guest::Function<0x0058d3b4, u32(u32, u32, u32, u32)> call_0058d3b4;  // (from the original)

void f_00298e94(gptr<Object_00298e94_0> arg0, u32 r1) {
    u32 r3_1 = arg0->byte_702;
    u32 r2_1 = r1 == 0 ? 0x10003a8u : 0x10003a9u;  // (from the original)
    if (r3_1 == 0) {
        float S0_1 = std::bit_cast<float>(arg0->word_734);
        guest::cpu()->s[0] = S0_1;
        call_0058d3b4(r2_1, r1, r2_1, r3_1);
        return;
    }
    u32 r2_2 = r1 == 0 ? 0x10003aeu : 0x10003afu;  // (from the original)
    float S0_2 = std::bit_cast<float>(arg0->word_734);
    guest::cpu()->s[0] = S0_2;
    call_0058d3b4(r2_2, r1, r2_2, r3_1);
}

}  // namespace d_00298e94
GUEST_EXPORT(0x00298e94, d_00298e94::f_00298e94);

// f_00298ed8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00298ed8 {

inline constexpr guest::Function<0x004bef3c, u32(u32, u32)> call_004bef3c;  // (from the original)

u32 f_00298ed8(gptr<CommonScrollBarWidth> arg0, u32 r1) {
    u32 r0_6 = 0;
    u32 r0_2 = call_004bef3c(arg0->word_77c, r1);
    if (r0_2 == 0) {
        u32 r0_4 = call_004bef3c(arg0->word_778, r1);
        if (r0_4 == 0) {
            r0_6 = call_004bef3c(arg0->word_780, r1);
            if (r0_6 == 0) {
                return r0_6;
            }
        }
    }
    return 1u;
}

}  // namespace d_00298ed8
GUEST_EXPORT_FRAMED(0x00298ed8, d_00298ed8::f_00298ed8, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_00298f2c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00298f2c {

struct __attribute__((packed)) Object_00298f2c_0 {
    u8 unknown_0[0x70c];  // (not used here)
    u32 word_70c;
    u32 word_710;
    u32 word_714;
    u8 unknown_718[0x4];  // (not used here)
    u32 word_71c;
    u8 unknown_720[0x4];  // (not used here)
    u32 word_724;
    u8 unknown_728[0x14];  // (not used here)
    u32 word_73c;
    u8 unknown_740[0x8];  // (not used here)
    u32 word_748;
    u8 unknown_74c[0xc];  // (not used here)
    u32 word_758;
    u8 unknown_75c[0x4];  // (not used here)
    u32 word_760;
    u32 word_764;
};
GUEST_OFFSET(Object_00298f2c_0, word_70c, 0x70c);  // (from the original)
GUEST_OFFSET(Object_00298f2c_0, word_710, 0x710);  // (from the original)
GUEST_OFFSET(Object_00298f2c_0, word_714, 0x714);  // (from the original)
GUEST_OFFSET(Object_00298f2c_0, word_71c, 0x71c);  // (from the original)
GUEST_OFFSET(Object_00298f2c_0, word_724, 0x724);  // (from the original)
GUEST_OFFSET(Object_00298f2c_0, word_73c, 0x73c);  // (from the original)
GUEST_OFFSET(Object_00298f2c_0, word_748, 0x748);  // (from the original)
GUEST_OFFSET(Object_00298f2c_0, word_758, 0x758);  // (from the original)
GUEST_OFFSET(Object_00298f2c_0, word_760, 0x760);  // (from the original)
GUEST_OFFSET(Object_00298f2c_0, word_764, 0x764);  // (from the original)

struct __attribute__((packed)) Local_00298f2c_r4_1 {
    u8 unknown_0[0x32c];  // (not used here)
    u32 word_32c;
    u8 unknown_330[0xc];  // (not used here)
    u32 word_33c;
    u32 word_340;
    u8 unknown_344[0x4];  // (not used here)
    u32 word_348;
};
GUEST_OFFSET(Local_00298f2c_r4_1, word_32c, 0x32c);  // (from the original)
GUEST_OFFSET(Local_00298f2c_r4_1, word_33c, 0x33c);  // (from the original)
GUEST_OFFSET(Local_00298f2c_r4_1, word_340, 0x340);  // (from the original)
GUEST_OFFSET(Local_00298f2c_r4_1, word_348, 0x348);  // (from the original)

struct __attribute__((packed)) Local_00298f2c_r4_2 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_00298f2c_r4_2, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_00298f2c_r4_2, word_4, 0x4);  // (from the original)

inline guest::global<u32, 0x00299064> global_00299064;  // (from the original)
inline guest::global<u32, 0x00299068> global_00299068;  // (from the original)
inline constexpr guest::Function<0x005833b0, u32(u32, u32)> call_005833b0;  // (from the original)
inline constexpr guest::Function<0x006aa944, u32(u32, u32, u32, u32)> call_006aa944;  // (from the original)

void f_00298f2c(gptr<Object_00298f2c_0> arg0, u32 r1) {
    guest::StackFrame frame(0x18);  // the original's stack frame
    u32 fpsr = guest::cpu()->fpscr;
    float S1_1 = 0;
    gptr<Local_00298f2c_r4_1> r4_1 = gptr<Local_00298f2c_r4_1>(arg0.addr() + 0x400u);  // (from the original)
    u32 r6_1 = arg0->word_71c;
    float S0_1 = (std::bit_cast<float>(arg0->word_714) - std::bit_cast<float>(*gptr<u32>(arg0->word_764 + 0x2cu))) * std::bit_cast<float>(arg0->word_70c);  // (from the original)
    float S3_1 = std::bit_cast<float>(*global_00299068);
    u32 r0_1 = std::bit_cast<u32>(std::bit_cast<float>(vcvt_sz_f((S0_1 + std::bit_cast<float>(*global_00299064)) / std::bit_cast<float>(arg0->word_748))));
    arg0->word_71c = r0_1;
    float S2_1 = std::bit_cast<float>(arg0->word_748);
    float S4_1 = float(s32(std::bit_cast<u32>(std::bit_cast<float>(r0_1))));
    arg0->word_724 = std::bit_cast<u32>(S0_1 - S4_1 * S2_1);
    u32 fpsr_1 = fpsr & 0xfffffffu | vfp_cmpf(std::bit_cast<float>(arg0->word_710), S3_1);  // (from the original)
    if (fpsr_1 >> 0x1d & 1) {  // (from the original)
        S1_1 = std::bit_cast<float>(r4_1->word_340);
        u32 fpsr_2 = fpsr_1 & 0xfffffffu | vfp_cmpf(S1_1, S0_1);  // (from the original)
        if (fpsr_2 >> 0x1f == (fpsr_2 >> 0x1c & 1)) {  // (from the original)
            u32 r0_2 = arg0->word_764;
            guest::cpu()->s[0] = S0_1;
            guest::cpu()->s[1] = S1_1;
            guest::cpu()->s[2] = S2_1;
            guest::cpu()->s[3] = S3_1;
            guest::cpu()->s[4] = S4_1;
            call_006aa944(r0_2, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
            u32 r1_1 = guest::cpu()->r[1];
            call_005833b0(0x10003a6u, r1_1);  // (from the original)
            float S1_3 = std::bit_cast<float>(r4_1->word_32c);
            S2_1 = std::bit_cast<float>(r4_1->word_348);
            float S0_3 = std::bit_cast<float>(arg0->word_71c);
            gptr<Local_00298f2c_r4_2> r4_2 = gptr<Local_00298f2c_r4_2>(r4_1.addr() + 0x33cu);  // (from the original)
            S3_1 = float(s32(std::bit_cast<u32>(S0_3)));
            S4_1 = float(s32(std::bit_cast<u32>(S0_3)));
            S1_1 = -S1_3 + S3_1 * S2_1;
            S0_1 = S1_3 + S4_1 * S2_1;
            r4_2->word_0 = std::bit_cast<u32>(S0_1);
            r4_2->word_4 = std::bit_cast<u32>(S1_1);
        }
    } else {
        S1_1 = std::bit_cast<float>(arg0->word_73c);
        u32 fpsr_3 = fpsr_1 & 0xfffffffu | vfp_cmpf(S1_1, S0_1);  // (from the original)
        if (!(fpsr_3 >> 0x1d & 1) || !!(fpsr_3 >> 0x1e & 1)) {  // (from the original)
            u32 r0_3 = arg0->word_764;
            guest::cpu()->s[0] = S0_1;
            guest::cpu()->s[1] = S1_1;
            guest::cpu()->s[2] = S2_1;
            guest::cpu()->s[3] = S3_1;
            guest::cpu()->s[4] = S4_1;
            call_006aa944(r0_3, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
            u32 r1_2 = guest::cpu()->r[1];
            call_005833b0(0x10003a6u, r1_2);  // (from the original)
            float S2_4 = std::bit_cast<float>(r4_1->word_32c);
            S1_1 = std::bit_cast<float>(r4_1->word_348);
            float S0_5 = std::bit_cast<float>(arg0->word_71c);
            S4_1 = float(s32(std::bit_cast<u32>(S0_5)));
            S0_1 = float(s32(std::bit_cast<u32>(S0_5)));
            S3_1 = S2_4 + S1_1 + S4_1 * S1_1;
            S2_1 = S2_4 + S0_1 * S1_1;
            r4_1->word_33c = std::bit_cast<u32>(S3_1);
            r4_1->word_340 = std::bit_cast<u32>(S2_1);
        }
    }
    u32 r1_3 = arg0->word_758;
    if (r1_3 != 0 && arg0->word_71c != r6_1) {
        u32 r0_4 = arg0->word_760;
        guest::cpu()->s[0] = S0_1;
        guest::cpu()->s[1] = S1_1;
        guest::cpu()->s[2] = S2_1;
        guest::cpu()->s[3] = S3_1;
        guest::cpu()->s[4] = S4_1;
        frame.release();
        guest::call_address<u32>(r1_3, r0_4, r1_3, guest::cpu()->r[2], guest::cpu()->r[3]);
        return;
    }
    guest::cpu()->r[1] = r1_3;
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
}

}  // namespace d_00298f2c
GUEST_EXPORT(0x00298f2c, d_00298f2c::f_00298f2c);

// f_00299094: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00299094 {

struct __attribute__((packed)) Object_00299094_0 {
    u8 unknown_0[0x702];  // (not used here)
    u8 byte_702;
    u8 unknown_703[0x35];  // (not used here)
    u32 word_738;
};
GUEST_OFFSET(Object_00299094_0, byte_702, 0x702);  // (from the original)
GUEST_OFFSET(Object_00299094_0, word_738, 0x738);  // (from the original)

inline constexpr guest::Function<0x0058d3b4, u32(u32, u32, u32, u32)> call_0058d3b4;  // (from the original)

void f_00299094(gptr<Object_00299094_0> arg0, u32 r1) {
    u32 r3_1 = arg0->byte_702;
    u32 r2_1 = r1 == 0 ? 0x10003aau : 0x10003abu;  // (from the original)
    if (r3_1 == 0) {
        float S0_1 = std::bit_cast<float>(arg0->word_738);
        guest::cpu()->s[0] = S0_1;
        call_0058d3b4(r2_1, r1, r2_1, r3_1);
        return;
    }
    u32 r2_2 = r1 == 0 ? 0x10003acu : 0x10003adu;  // (from the original)
    float S0_2 = std::bit_cast<float>(arg0->word_738);
    guest::cpu()->s[0] = S0_2;
    call_0058d3b4(r2_2, r1, r2_2, r3_1);
}

}  // namespace d_00299094
GUEST_EXPORT(0x00299094, d_00299094::f_00299094);

// f_002990d8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002990d8 {

inline constexpr guest::Function<0x004b4fc0, u32(u32, u32, u32)> call_004b4fc0;  // (from the original)
inline constexpr guest::Function<0x0056878c, u32(u32, u32, u32, u32)> call_0056878c;  // (from the original)

void f_002990d8(u32 r0, u32 r1_unused, u32 r2) {
    u32 r0_2 = call_0056878c(r0 + 0x24cu, 0x857c9cu, r2, guest::cpu()->r[3]);  // (from the original)
    *gptr<u32>(r0 + 0x764u) = r0_2;  // (from the original)
    u32 r0_4 = call_0056878c(r0 + 0x24cu, 0x857c90u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    *gptr<u32>(r0 + 0x768u) = r0_4;  // (from the original)
    u32 r0_6 = call_0056878c(r0 + 0x24cu, 0x857c80u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    *gptr<u32>(r0 + 0x76cu) = r0_6;  // (from the original)
    u32 r0_8 = call_0056878c(r0 + 0x24cu, 0x857c70u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    *gptr<u32>(r0 + 0x770u) = r0_8;  // (from the original)
    u32 r0_10 = call_0056878c(r0 + 0x24cu, 0x857c60u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    *gptr<u32>(r0 + 0x774u) = r0_10;  // (from the original)
    u32 r0_12 = call_0056878c(r0 + 0x24cu, 0x857c54u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    *gptr<u32>(r0 + 0x778u) = r0_12;  // (from the original)
    u32 r0_14 = call_0056878c(r0 + 0x24cu, 0x857c48u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    *gptr<u32>(r0 + 0x77cu) = r0_14;  // (from the original)
    u32 r0_16 = call_0056878c(r0 + 0x24cu, 0x857c3cu, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    *gptr<u32>(r0 + 0x780u) = r0_16;  // (from the original)
    u32 r0_18 = call_0056878c(r0 + 0x24cu, 0x857c30u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    *gptr<u32>(r0 + 0x784u) = r0_18;  // (from the original)
    u32 r0_20 = call_0056878c(r0 + 0x24cu, 0x857c28u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    *gptr<u32>(r0 + 0x788u) = r0_20;  // (from the original)
    u32 r0_22 = call_004b4fc0(r0 + 0x24cu, 0x857c1cu, 1u);  // (from the original)
    *gptr<u32>(r0 + 0x78cu) = r0_22;  // (from the original)
    u32 r0_24 = call_004b4fc0(r0 + 0x24cu, 0x857c04u, 1u);  // (from the original)
    *gptr<u32>(r0 + 0x790u) = r0_24;  // (from the original)
    u32 r0_26 = call_004b4fc0(r0 + 0x24cu, 0x857bf8u, 1u);  // (from the original)
    *gptr<u32>(r0 + 0x794u) = r0_26;  // (from the original)
}

}  // namespace d_002990d8
GUEST_EXPORT_FRAMED(0x002990d8, d_002990d8::f_002990d8, 0x4010);  // pushes {r4, lr} first, as the original

// f_002991f4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002991f4 {

struct __attribute__((packed)) Object_002991f4_0 {
    u8 unknown_0[0x3dc];  // (not used here)
    u8 byte_3dc;
    u8 unknown_3dd[0x2ff];  // (not used here)
    u32 word_6dc;
    u8 unknown_6e0[0x64];  // (not used here)
    u8 byte_744;
};
GUEST_OFFSET(Object_002991f4_0, byte_3dc, 0x3dc);  // (from the original)
GUEST_OFFSET(Object_002991f4_0, word_6dc, 0x6dc);  // (from the original)
GUEST_OFFSET(Object_002991f4_0, byte_744, 0x744);  // (from the original)

struct __attribute__((packed)) Local_002991f4_r0_1 {
    u8 unknown_0[0xfa];  // (not used here)
    u8 byte_fa;
};
GUEST_OFFSET(Local_002991f4_r0_1, byte_fa, 0xfa);  // (from the original)

inline guest::global<u32, 0x002992f4> global_002992f4;  // (from the original)
inline constexpr guest::Function<0x001f9b08, u32(u32, u32)> call_001f9b08;  // (from the original)
inline constexpr guest::Function<0x002992f8, u32(u32, u32, u32, u32)> call_002992f8;  // (from the original)
inline constexpr guest::Function<0x002993ac, u32(u32, u32, u32, u32)> call_002993ac;  // (from the original)
inline constexpr guest::Function<0x002f6b14, u32(u32, u32)> call_002f6b14;  // (from the original)
inline constexpr guest::Function<0x002f6e14, u32(u32, u32)> call_002f6e14;  // (from the original)
inline constexpr guest::Function<0x00568c10, u32(u32, u32)> call_00568c10;  // (from the original)
inline constexpr guest::Function<0x00569420, u32(u32, u32)> call_00569420;  // (from the original)
inline constexpr guest::Function<0x005697e0, u32(u32, u32)> call_005697e0;  // (from the original)
inline constexpr guest::Function<0x006d1e64, u32(u32, u32, u32, u32)> call_006d1e64;  // (from the original)

void f_002991f4(gptr<Object_002991f4_0> arg0, float S0) {
    u32 r1_1 = arg0->byte_744;
    if (r1_1 != 1u) {
        gptr<Local_002991f4_r0_1> r0_1 = gptr<Local_002991f4_r0_1>(arg0.addr() + 0x600u);  // (from the original)
        if (r1_1 != 2u) {
            if (r1_1 == 3u) {
                u32 r0_2 = r0_1->byte_fa;
                if (r0_2 == 1u) {
                    u32 r0_3 = call_006d1e64(r0_2, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
                    u32 r0_4 = *gptr<u32>(r0_3 + 0x1f4u);  // (from the original)
                    call_001f9b08(r0_4, 0u);
                    u32 r1_2 = guest::cpu()->r[1];
                    arg0->word_6dc = arg0->word_6dc & ~8u;
                    call_002992f8(arg0.addr(), r1_2, guest::cpu()->r[2], guest::cpu()->r[3]);
                    S0 = guest::cpu()->s[0];
                }
                guest::cpu()->s[0] = S0;
                call_002993ac(arg0.addr(), 0u, guest::cpu()->r[2], guest::cpu()->r[3]);
                u32 r1_3 = guest::cpu()->r[1];
                u32 r0_5 = arg0.addr() + 0x608u;  // (from the original)
                call_002f6e14(r0_5, r1_3);
                u32 r1_4 = guest::cpu()->r[1];
                call_002f6b14(r0_5, r1_4);
                r1_1 = guest::cpu()->r[1];
                S0 = guest::cpu()->s[0];
                if (arg0->byte_3dc != 0) {
                    float S0_5 = std::bit_cast<float>(*global_002992f4);
                    guest::cpu()->s[0] = S0_5;
                    call_005697e0(arg0.addr() + 0x3c0u, r1_1);  // (from the original)
                    u32 r1_5 = guest::cpu()->r[1];
                    call_00568c10(arg0.addr() + 0x24cu, r1_5);  // (from the original)
                    call_00569420(arg0.addr() + 0x24cu, arg0.addr() + 0x3c0u);  // (from the original)
                    r1_1 = guest::cpu()->r[1];
                    S0 = guest::cpu()->s[0];
                }
            }
        } else if (r0_1->byte_fa == 1u) {
            guest::cpu()->s[0] = S0;
            call_002992f8(arg0.addr(), r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
            r1_1 = guest::cpu()->r[1];
            S0 = guest::cpu()->s[0];
        }
    } else {
        u32 r0_9 = arg0->word_6dc & ~8u;
        arg0->word_6dc = r0_9;
        guest::cpu()->s[0] = S0;
        u32 r0_10 = call_006d1e64(r0_9, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1_1 = guest::cpu()->r[1];
        S0 = guest::cpu()->s[0];
        *gptr<u8>(*gptr<u32>(r0_10 + 0x1f4u) + 0x4d7u) = 0;  // (from the original)
    }
    arg0->byte_744 = 0;
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->s[0] = S0;
}

}  // namespace d_002991f4
GUEST_EXPORT_FRAMED(0x002991f4, d_002991f4::f_002991f4, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_002993ac: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002993ac {

struct __attribute__((packed)) Object_002993ac_0 {
    u8 unknown_0[0x6f9];  // (not used here)
    u8 byte_6f9;
    u8 unknown_6fa[0x5];  // (not used here)
    u8 byte_6ff;
    u8 unknown_700[0x44];  // (not used here)
    u8 byte_744;
    u8 unknown_745[0x1f];  // (not used here)
    u32 word_764;
    u8 unknown_768[0x24];  // (not used here)
    u32 word_78c;
};
GUEST_OFFSET(Object_002993ac_0, byte_6f9, 0x6f9);  // (from the original)
GUEST_OFFSET(Object_002993ac_0, byte_6ff, 0x6ff);  // (from the original)
GUEST_OFFSET(Object_002993ac_0, byte_744, 0x744);  // (from the original)
GUEST_OFFSET(Object_002993ac_0, word_764, 0x764);  // (from the original)
GUEST_OFFSET(Object_002993ac_0, word_78c, 0x78c);  // (from the original)

inline guest::global<u32, 0x0029944c> global_0029944c;  // (from the original)
inline guest::global<u32, 0x00299454> global_00299454;  // (from the original)
inline constexpr guest::Function<0x00568630, u32(u32, u32, u32, u32)> call_00568630;  // (from the original)
inline constexpr guest::Function<0x00568984, u32(u32, u32, u32, u32)> call_00568984;  // (from the original)
inline constexpr guest::Function<0x00568c10, u32(u32, u32, u32, u32)> call_00568c10;  // (from the original)
inline constexpr guest::Function<0x005697e0, u32(u32, u32, u32, u32)> call_005697e0;  // (from the original)
inline constexpr guest::Function<0x0058d3b4, u32(u32, u32, u32, u32)> call_0058d3b4;  // (from the original)
inline constexpr guest::Function<0x006aa944, u32(u32, u32, u32, u32)> call_006aa944;  // (from the original)

u32 f_002993ac(gptr<Object_002993ac_0> arg0, u32 r1, float S0) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 r1_3 = 0;
    u32 r2_3 = 0;
    u32 r3_2 = 0;
    float S0_2 = 0;
    u32 r0_1 = s8(arg0->byte_6f9);
    if (r0_1 != r1) {
        arg0->byte_6f9 = u8(r1);
        u32 r2_1 = arg0->word_78c;
        call_00568630(arg0.addr() + 0x24cu, arg0.addr() + 0x398u, r2_1, 0u);  // (from the original)
        u32 r1_2 = guest::cpu()->r[1];
        u32 r2_2 = guest::cpu()->r[2];
        u32 r3_1 = guest::cpu()->r[3];
        if (r1 != 0) {
            float S0_1 = std::bit_cast<float>(*global_0029944c);
            guest::cpu()->s[0] = S0_1;
            call_005697e0(arg0.addr() + 0x398u, r1_2, r2_2, r3_1);  // (from the original)
            r1_3 = guest::cpu()->r[1];
            r2_3 = guest::cpu()->r[2];
            r3_2 = guest::cpu()->r[3];
            S0_2 = guest::cpu()->s[0];
            if (arg0->byte_744 == 3u) {
                u32 r0_4 = arg0->word_764;
                call_006aa944(r0_4, r1_3, r2_3, r3_2);
                u32 r1_4 = guest::cpu()->r[1];
                u32 r2_4 = guest::cpu()->r[2];
                u32 r3_3 = guest::cpu()->r[3];
                call_0058d3b4(0x10003a5u, r1_4, r2_4, r3_3);  // (from the original)
                r1_3 = guest::cpu()->r[1];
                r2_3 = guest::cpu()->r[2];
                r3_2 = guest::cpu()->r[3];
                S0_2 = guest::cpu()->s[0];
                arg0->byte_6ff = 1;
            }
        } else {
            float S0_4 = std::bit_cast<float>(*global_00299454);
            guest::cpu()->s[0] = S0_4;
            call_005697e0(arg0.addr() + 0x398u, r1_2, r2_2, r3_1);  // (from the original)
            r1_3 = guest::cpu()->r[1];
            r2_3 = guest::cpu()->r[2];
            r3_2 = guest::cpu()->r[3];
            S0_2 = guest::cpu()->s[0];
        }
        guest::cpu()->s[0] = S0_2;
        call_00568c10(arg0.addr() + 0x24cu, r1_3, r2_3, r3_2);  // (from the original)
        u32 r2_5 = arg0->word_78c;
        frame.release();
        return call_00568984(arg0.addr() + 0x24cu, arg0.addr() + 0x398u, r2_5, 0u);  // (from the original)
    }
    guest::cpu()->r[1] = r1;
    guest::cpu()->s[0] = S0;
    return r0_1;
}

}  // namespace d_002993ac
GUEST_EXPORT(0x002993ac, d_002993ac::f_002993ac);

// f_002999ac: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002999ac {

struct __attribute__((packed)) Object_002999ac_0 {
    u8 unknown_0[0x444];  // (not used here)
    u8 byte_444;
};
GUEST_OFFSET(Object_002999ac_0, byte_444, 0x444);  // (from the original)

inline constexpr guest::Function<0x004b4fc0, u32(u32, u32, u32, u32)> call_004b4fc0;  // (from the original)
inline constexpr guest::Function<0x00568630, u32(u32, u32, u32, u32)> call_00568630;  // (from the original)
inline constexpr guest::Function<0x00568984, u32(u32, u32, u32, u32)> call_00568984;  // (from the original)
inline constexpr guest::Function<0x00568c10, u32(u32, u32, u32, u32)> call_00568c10;  // (from the original)
inline constexpr guest::Function<0x005697e0, u32(u32, u32, u32, u32)> call_005697e0;  // (from the original)

void f_002999ac(gptr<Object_002999ac_0> arg0, u32 r1, u32 r2_unused, u32 r3, float S0) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    arg0->byte_444 = u8(r1);
    u32 r0_2 = call_004b4fc0(arg0.addr() + 0x24cu, 0x857c10u, 1u, r3);  // (from the original)
    call_00568630(arg0.addr() + 0x24cu, arg0.addr() + 0x3e8u, r0_2, 0u);  // (from the original)
    u32 r3_1 = guest::cpu()->r[3];
    u32 r0_5 = call_004b4fc0(arg0.addr() + 0x24cu, 0x857c04u, 1u, r3_1);  // (from the original)
    call_00568630(arg0.addr() + 0x24cu, arg0.addr() + 0x3e8u, r0_5, 0u);  // (from the original)
    u32 r3_2 = guest::cpu()->r[3];
    u32 r0_8 = call_004b4fc0(arg0.addr() + 0x24cu, 0x857bf8u, 1u, r3_2);  // (from the original)
    call_00568630(arg0.addr() + 0x24cu, arg0.addr() + 0x3e8u, r0_8, 0u);  // (from the original)
    u32 r1_4 = guest::cpu()->r[1];
    u32 r2_1 = guest::cpu()->r[2];
    u32 r3_3 = guest::cpu()->r[3];
    float S0_6 = float(std::bit_cast<u32>(std::bit_cast<float>(u32(*gptr<u8>(arg0.addr() + 0x444u)))));  // (from the original)
    guest::cpu()->s[0] = S0_6;
    call_005697e0(arg0.addr() + 0x3e8u, r1_4, r2_1, r3_3);  // (from the original)
    u32 r1_5 = guest::cpu()->r[1];
    u32 r2_2 = guest::cpu()->r[2];
    u32 r3_4 = guest::cpu()->r[3];
    call_00568c10(arg0.addr() + 0x24cu, r1_5, r2_2, r3_4);  // (from the original)
    u32 r3_5 = guest::cpu()->r[3];
    u32 r0_13 = call_004b4fc0(arg0.addr() + 0x24cu, 0x857c10u, 1u, r3_5);  // (from the original)
    call_00568984(arg0.addr() + 0x24cu, arg0.addr() + 0x3e8u, r0_13, 0u);  // (from the original)
    u32 r3_6 = guest::cpu()->r[3];
    u32 r0_16 = call_004b4fc0(arg0.addr() + 0x24cu, 0x857c04u, 1u, r3_6);  // (from the original)
    call_00568984(arg0.addr() + 0x24cu, arg0.addr() + 0x3e8u, r0_16, 0u);  // (from the original)
    u32 r3_7 = guest::cpu()->r[3];
    u32 r0_19 = call_004b4fc0(arg0.addr() + 0x24cu, 0x857bf8u, 1u, r3_7);  // (from the original)
    frame.release();
    call_00568984(r0_19, arg0.addr() + 0x3e8u, r0_19, 0u);  // (from the original)
    return;
}

}  // namespace d_002999ac
GUEST_EXPORT(0x002999ac, d_002999ac::f_002999ac);

// f_00299b30: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00299b30 {

struct __attribute__((packed)) Local_00299b30_r0_22 {
    u8 unknown_0[0x6f8];  // (not used here)
    u8 byte_6f8;
    u8 byte_6f9;
    u8 byte_6fa;
    u8 byte_6fb;
    u8 byte_6fc;
    u8 byte_6fd;
    u8 byte_6fe;
    u8 byte_6ff;
    u8 byte_700;
    u8 byte_701;
    u8 byte_702;
    u8 byte_703;
    u8 unknown_704[0x18];  // (not used here)
    u32 word_71c;
    u32 word_720;
    u8 unknown_724[0x4];  // (not used here)
    u32 word_728;
    u8 unknown_72c[0x18];  // (not used here)
    u8 byte_744;
    u8 unknown_745[0x7];  // (not used here)
    u32 word_74c;
    u32 word_750;
    u32 word_754;
    u32 word_758;
    u32 word_75c;
    u8 unknown_760[0x8];  // (not used here)
    u32 word_768;
    u32 word_76c;
    u32 word_770;
    u32 word_774;
    u32 word_778;
    u32 word_77c;
    u32 word_780;
    u32 word_784;
    u32 word_788;
    u32 word_78c;
    u32 word_790;
    u32 word_794;
};
GUEST_OFFSET(Local_00299b30_r0_22, byte_6f8, 0x6f8);  // (from the original)
GUEST_OFFSET(Local_00299b30_r0_22, byte_6f9, 0x6f9);  // (from the original)
GUEST_OFFSET(Local_00299b30_r0_22, byte_6fa, 0x6fa);  // (from the original)
GUEST_OFFSET(Local_00299b30_r0_22, byte_6fb, 0x6fb);  // (from the original)
GUEST_OFFSET(Local_00299b30_r0_22, byte_6fc, 0x6fc);  // (from the original)
GUEST_OFFSET(Local_00299b30_r0_22, byte_6fd, 0x6fd);  // (from the original)
GUEST_OFFSET(Local_00299b30_r0_22, byte_6fe, 0x6fe);  // (from the original)
GUEST_OFFSET(Local_00299b30_r0_22, byte_6ff, 0x6ff);  // (from the original)
GUEST_OFFSET(Local_00299b30_r0_22, byte_700, 0x700);  // (from the original)
GUEST_OFFSET(Local_00299b30_r0_22, byte_701, 0x701);  // (from the original)
GUEST_OFFSET(Local_00299b30_r0_22, byte_702, 0x702);  // (from the original)
GUEST_OFFSET(Local_00299b30_r0_22, byte_703, 0x703);  // (from the original)
GUEST_OFFSET(Local_00299b30_r0_22, word_71c, 0x71c);  // (from the original)
GUEST_OFFSET(Local_00299b30_r0_22, word_720, 0x720);  // (from the original)
GUEST_OFFSET(Local_00299b30_r0_22, word_728, 0x728);  // (from the original)
GUEST_OFFSET(Local_00299b30_r0_22, byte_744, 0x744);  // (from the original)
GUEST_OFFSET(Local_00299b30_r0_22, word_74c, 0x74c);  // (from the original)
GUEST_OFFSET(Local_00299b30_r0_22, word_750, 0x750);  // (from the original)
GUEST_OFFSET(Local_00299b30_r0_22, word_754, 0x754);  // (from the original)
GUEST_OFFSET(Local_00299b30_r0_22, word_758, 0x758);  // (from the original)
GUEST_OFFSET(Local_00299b30_r0_22, word_75c, 0x75c);  // (from the original)
GUEST_OFFSET(Local_00299b30_r0_22, word_768, 0x768);  // (from the original)
GUEST_OFFSET(Local_00299b30_r0_22, word_76c, 0x76c);  // (from the original)
GUEST_OFFSET(Local_00299b30_r0_22, word_770, 0x770);  // (from the original)
GUEST_OFFSET(Local_00299b30_r0_22, word_774, 0x774);  // (from the original)
GUEST_OFFSET(Local_00299b30_r0_22, word_778, 0x778);  // (from the original)
GUEST_OFFSET(Local_00299b30_r0_22, word_77c, 0x77c);  // (from the original)
GUEST_OFFSET(Local_00299b30_r0_22, word_780, 0x780);  // (from the original)
GUEST_OFFSET(Local_00299b30_r0_22, word_784, 0x784);  // (from the original)
GUEST_OFFSET(Local_00299b30_r0_22, word_788, 0x788);  // (from the original)
GUEST_OFFSET(Local_00299b30_r0_22, word_78c, 0x78c);  // (from the original)
GUEST_OFFSET(Local_00299b30_r0_22, word_790, 0x790);  // (from the original)
GUEST_OFFSET(Local_00299b30_r0_22, word_794, 0x794);  // (from the original)

struct __attribute__((packed)) Local_00299b30_r1_8 {
    u8 unknown_0[0x304];  // (not used here)
    u32 word_304;
    u32 word_308;
    u32 word_30c;
    u32 word_310;
    u32 word_314;
    u32 word_318;
    u8 unknown_31c[0x8];  // (not used here)
    u32 word_324;
    u8 unknown_328[0x4];  // (not used here)
    u32 word_32c;
    u32 word_330;
    u32 word_334;
    u32 word_338;
    u32 word_33c;
    u32 word_340;
    u8 unknown_344[0x4];  // (not used here)
    u32 word_348;
};
GUEST_OFFSET(Local_00299b30_r1_8, word_304, 0x304);  // (from the original)
GUEST_OFFSET(Local_00299b30_r1_8, word_308, 0x308);  // (from the original)
GUEST_OFFSET(Local_00299b30_r1_8, word_30c, 0x30c);  // (from the original)
GUEST_OFFSET(Local_00299b30_r1_8, word_310, 0x310);  // (from the original)
GUEST_OFFSET(Local_00299b30_r1_8, word_314, 0x314);  // (from the original)
GUEST_OFFSET(Local_00299b30_r1_8, word_318, 0x318);  // (from the original)
GUEST_OFFSET(Local_00299b30_r1_8, word_324, 0x324);  // (from the original)
GUEST_OFFSET(Local_00299b30_r1_8, word_32c, 0x32c);  // (from the original)
GUEST_OFFSET(Local_00299b30_r1_8, word_330, 0x330);  // (from the original)
GUEST_OFFSET(Local_00299b30_r1_8, word_334, 0x334);  // (from the original)
GUEST_OFFSET(Local_00299b30_r1_8, word_338, 0x338);  // (from the original)
GUEST_OFFSET(Local_00299b30_r1_8, word_33c, 0x33c);  // (from the original)
GUEST_OFFSET(Local_00299b30_r1_8, word_340, 0x340);  // (from the original)
GUEST_OFFSET(Local_00299b30_r1_8, word_348, 0x348);  // (from the original)

struct __attribute__((packed)) Local_00299b30_r1_9 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_00299b30_r1_9, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_00299b30_r1_9, word_4, 0x4);  // (from the original)

inline guest::global<u32, 0x00299c94> global_00299c94;  // (from the original)
inline constexpr guest::Function<0x001207d8, u32(u32, u32, u32, u32)> call_001207d8;  // (from the original)
inline constexpr guest::Function<0x00125aec, u32(u32, u32, u32, u32)> call_00125aec;  // (from the original)
inline constexpr guest::Function<0x00125e08, u32(u32, u32, u32, u32)> call_00125e08;  // (from the original)
inline constexpr guest::Function<0x00125e3c, u32(u32, u32, u32, u32)> call_00125e3c;  // (from the original)
inline constexpr guest::Function<0x002f7604, u32(u32, u32, u32, u32)> call_002f7604;  // (from the original)
inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> call_00301d0c;  // (from the original)
inline constexpr guest::Function<0x006e5860, u32(u32)> call_006e5860;  // (from the original)

u32 f_00299b30(gptr<CommonScrollBar> arg0, u32 r1, u32 r2, u32 r3, float S0) {
    arg0->word_0 = 0x8f0888;  // (from the original)
    u32 r0_2 = call_001207d8(arg0.addr() + 4u, 0x8f0888u, r2, r3);  // (from the original)
    u32 r1_1 = guest::cpu()->r[1];
    u32 r2_1 = guest::cpu()->r[2];
    u32 r3_1 = guest::cpu()->r[3];
    u32 r0_4 = call_00125e3c(r0_2 + 0x248u, r1_1, r2_1, r3_1);  // (from the original)
    u32 r1_2 = guest::cpu()->r[1];
    u32 r2_2 = guest::cpu()->r[2];
    u32 r3_2 = guest::cpu()->r[3];
    u32 r0_6 = call_00125aec(r0_4 + 0x14cu, r1_2, r2_2, r3_2);  // (from the original)
    u32 r1_3 = guest::cpu()->r[1];
    u32 r2_3 = guest::cpu()->r[2];
    u32 r3_3 = guest::cpu()->r[3];
    u32 r0_8 = call_00125aec(r0_6 + 0x28u, r1_3, r2_3, r3_3);  // (from the original)
    u32 r1_4 = guest::cpu()->r[1];
    u32 r2_4 = guest::cpu()->r[2];
    u32 r3_4 = guest::cpu()->r[3];
    u32 r0_10 = call_00125aec(r0_8 + 0x28u, r1_4, r2_4, r3_4);  // (from the original)
    u32 r1_5 = guest::cpu()->r[1];
    u32 r2_5 = guest::cpu()->r[2];
    u32 r3_5 = guest::cpu()->r[3];
    u32 r0_12 = call_00125aec(r0_10 + 0x28u, r1_5, r2_5, r3_5);  // (from the original)
    u32 r1_6 = guest::cpu()->r[1];
    u32 r2_6 = guest::cpu()->r[2];
    u32 r3_6 = guest::cpu()->r[3];
    u32 r0_14 = call_00125e08(r0_12 + 0x28u, r1_6, r2_6, r3_6);  // (from the original)
    u32 r0_15 = r0_14 - 0x438u;  // (from the original)
    *gptr<u8>(r0_15 + 0x444u) = 0;  // (from the original)
    u32 r0_17 = call_00301d0c(r0_15 + 0x448u, 0x2b6de0u, 0xe0u, 2u);  // (from the original)
    u32 r1_7 = guest::cpu()->r[1];
    u32 r2_7 = guest::cpu()->r[2];
    u32 r3_7 = guest::cpu()->r[3];
    u32 r0_19 = call_002f7604(r0_17 + 0x1c0u, r1_7, r2_7, r3_7);  // (from the original)
    u32 r0_21 = call_006e5860(r0_19 + 0xe4u);  // (from the original)
    gptr<Local_00299b30_r0_22> r0_22 = gptr<Local_00299b30_r0_22>(r0_21 - 0x6ecu);  // (from the original)
    r0_22->byte_6f8 = 0;
    r0_22->byte_6f9 = 0;
    r0_22->byte_6fa = 0;
    r0_22->byte_6fb = 0;
    r0_22->byte_6fc = 1;
    r0_22->byte_6fd = 0;
    r0_22->byte_6fe = 0;
    r0_22->byte_6ff = 0;
    r0_22->byte_700 = 0;
    r0_22->byte_701 = 1;
    float S0_9 = std::bit_cast<float>(*global_00299c94);
    gptr<Local_00299b30_r1_8> r1_8 = gptr<Local_00299b30_r1_8>(r0_22.addr() + 0x400u);  // (from the original)
    r0_22->byte_702 = 0;
    r0_22->byte_703 = 0;
    r1_8->word_304 = std::bit_cast<u32>(S0_9);
    r1_8->word_308 = std::bit_cast<u32>(S0_9);
    r1_8->word_30c = std::bit_cast<u32>(S0_9);
    r1_8->word_310 = std::bit_cast<u32>(S0_9);
    r1_8->word_314 = std::bit_cast<u32>(S0_9);
    r1_8->word_318 = std::bit_cast<u32>(S0_9);
    r0_22->word_71c = 0;
    r0_22->word_720 = 0;
    r1_8->word_324 = std::bit_cast<u32>(S0_9);
    r0_22->word_728 = ~0u;
    r1_8->word_32c = std::bit_cast<u32>(S0_9);
    r1_8->word_330 = std::bit_cast<u32>(S0_9);
    r1_8->word_334 = std::bit_cast<u32>(S0_9);
    r1_8->word_338 = std::bit_cast<u32>(S0_9);
    r1_8->word_33c = std::bit_cast<u32>(S0_9);
    r1_8->word_340 = std::bit_cast<u32>(S0_9);
    r0_22->byte_744 = 0;
    r1_8->word_348 = std::bit_cast<u32>(S0_9);
    r0_22->word_74c = 0;
    r0_22->word_750 = 0;
    r0_22->word_754 = 0;
    gptr<Local_00299b30_r1_9> r1_9 = gptr<Local_00299b30_r1_9>(r0_22.addr() + 0x760u);  // (from the original)
    r0_22->word_758 = 0;
    r0_22->word_75c = 0;
    r1_9->word_0 = r1;
    r1_9->word_4 = 0;
    r0_22->word_768 = 0;
    r0_22->word_76c = 0;
    r0_22->word_770 = 0;
    r0_22->word_774 = 0;
    r0_22->word_778 = 0;
    r0_22->word_77c = 0;
    r0_22->word_780 = 0;
    r0_22->word_784 = 0;
    r0_22->word_788 = 0;
    r0_22->word_78c = 0;
    r0_22->word_790 = 0;
    r0_22->word_794 = 0;
    guest::cpu()->r[1] = r1_9.addr();
    guest::cpu()->s[0] = S0_9;
    return r0_22.addr();
}

}  // namespace d_00299b30
GUEST_EXPORT_FRAMED(0x00299b30, d_00299b30::f_00299b30, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0029a5f8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0029a5f8 {

struct __attribute__((packed)) Object_0029a5f8_0 {
    u8 unknown_0[0xcc];  // (not used here)
    u32 word_cc;
    u16 half_d0;
    u8 unknown_d2[0x2];  // (not used here)
    u32 word_d4;
};
GUEST_OFFSET(Object_0029a5f8_0, word_cc, 0xcc);  // (from the original)
GUEST_OFFSET(Object_0029a5f8_0, half_d0, 0xd0);  // (from the original)
GUEST_OFFSET(Object_0029a5f8_0, word_d4, 0xd4);  // (from the original)

inline guest::global<u32, 0x0094fd3c> global_0094fd3c;  // (from the original)
inline constexpr guest::Function<0x001fa354, u32(u32, u32)> call_001fa354;  // (from the original)
inline constexpr guest::Function<0x006d1e64, u32(u32, u32, u32, u32)> call_006d1e64;  // (from the original)

void f_0029a5f8(gptr<Object_0029a5f8_0> arg0) {
    arg0->word_d4 = 0x20c;  // (from the original)
    arg0->half_d0 = 0xb;  // (from the original)
    arg0->word_cc = 7;
    u32 r0_1 = call_006d1e64(7u, 0xbu, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    *gptr<u8>(r0_1 + 0x40u) = 1;  // (from the original)
    u32 r0_2 = call_006d1e64(r0_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    call_001fa354(*gptr<u32>(r0_2 + 0x1f4u), guest::cpu()->r[1]);  // (from the original)
    u32 r0_4 = arg0->word_cc;
    u32 r1_3 = *global_0094fd3c;
    *gptr<u8>(r1_3 + 0x1fcu) = u8(r0_4);  // (from the original)
    u32 r0_5 = call_006d1e64(r0_4, r1_3, guest::cpu()->r[2], guest::cpu()->r[3]);
    call_001fa354(*gptr<u32>(r0_5 + 0x1f4u), guest::cpu()->r[1]);  // (from the original)
    *gptr<u8>(r0_5 + 0x40u) = 0;  // (from the original)
}

}  // namespace d_0029a5f8
GUEST_EXPORT_FRAMED(0x0029a5f8, d_0029a5f8::f_0029a5f8, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0029b6f8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0029b6f8 {

inline constexpr guest::Function<0x002f71e4, u32(u32, u32, u32, u32)> call_002f71e4;  // (from the original)
inline constexpr guest::Function<0x00569544, u32(u32)> call_00569544;  // (from the original)
inline constexpr guest::Function<0x0074fdd0, u32(u32)> call_0074fdd0;  // (from the original)

u32 f_0029b6f8(u32 r0) {
    u32 zf_2 = 0;
    u32 r4 = r0;
    call_002f71e4(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_1 = *gptr<u32>(r4 + 0xe8u);  // (from the original)
    u32 zf_1 = r0_1 == 0;
    if (!zf_1) {
        u32 res_1 = r0_1 - 0xcu;  // (from the original)
        zf_1 = res_1 == 0;
        r4 = res_1;
    }
    if (zf_1) {
    } else {
        u32 r5 = 1u;
        do {
            if (*gptr<u32>(r4 + 0x1cu) != 0 && *gptr<u32>(r4 + 0x38u) != 0 && *gptr<u8>(r4 + 0x3cu) != 0) {  // (from the original)
                u32 r0_3 = call_0074fdd0(r4 + 0x20u);  // (from the original)
                if (r0_3 == 0) {
                    call_00569544(r4 + 0x20u);  // (from the original)
                    *gptr<u8>(*gptr<u32>(r4 + 0x18u) + 0x122u) = u8(r5);  // (from the original)
                }
            }
            r0_1 = *gptr<u32>(r4 + 0x14u);  // (from the original)
            zf_2 = r0_1 == 0;
            if (!zf_2) {
                u32 res_2 = r0_1 - 0xcu;  // (from the original)
                zf_2 = res_2 == 0;
                r4 = res_2;
            }
            guest::preempt();
        } while (!zf_2);
    }
    return r0_1;
}

}  // namespace d_0029b6f8
GUEST_EXPORT_FRAMED(0x0029b6f8, d_0029b6f8::f_0029b6f8, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0029b840: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0029b840 {


void f_0029b840(u32 r0, u32 r1) {
    if (r1 >= 0x18fu) {  // (from the original)
        return;
    }
    *gptr<u8>(r0 + (r1 >> 3)) = u8(u32(*gptr<u8>(r0 + (r1 >> 3))) | 1u << (r1 & 7u));
}

}  // namespace d_0029b840
GUEST_EXPORT(0x0029b840, d_0029b840::f_0029b840);

// f_0029b868: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0029b868 {

inline constexpr guest::Function<0x00301444, u32(u32, u32)> call_00301444;  // (from the original)

void f_0029b868() {
    call_00301444(guest::cpu()->r[0], 0x32u);
    return;  // (from the original)
}

}  // namespace d_0029b868
GUEST_EXPORT(0x0029b868, d_0029b868::f_0029b868);

// f_0029bde8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0029bde8 {

struct __attribute__((packed)) Object_0029bde8_1 {
    u8 byte_0;
    u8 byte_1;
};
GUEST_OFFSET(Object_0029bde8_1, byte_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_0029bde8_1, byte_1, 0x1);  // (from the original)

struct __attribute__((packed)) Local_0029bde8_r5_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_0029bde8_r5_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_0029bde8_r5_1, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_0029bde8_r5_1, word_8, 0x8);  // (from the original)

inline constexpr guest::Function<0x0057bb70, u32(u32)> call_0057bb70;  // (from the original)
inline constexpr guest::Function<0x0057bb84, u32(u32)> call_0057bb84;  // (from the original)
inline constexpr guest::Function<0x006a6ec0, u32(u32, u32, u32, u32)> call_006a6ec0;  // (from the original)
inline constexpr guest::Function<0x006c7a9c, u32(u32, u32, u32, u32)> call_006c7a9c;  // (from the original)

void f_0029bde8(u32 r0, gptr<Object_0029bde8_1> arg1) {
    guest::StackFrame frame(0x1c);  // the original's stack frame
    u32 r1_1 = arg1->byte_0;
    *frame.at<u32>(4) = u32(arg1->byte_1);
    *frame.at<u32>(0) = r1_1;
    call_006a6ec0(frame.at(8).addr(), frame.at(0xc).addr(), frame.at(0x14).addr(), frame.at(0x10).addr());  // (from the original)
    gptr<Local_0029bde8_r5_1> r5_1 = gptr<Local_0029bde8_r5_1>(frame.at(8).addr());
    *frame.at<u32>(0) = 1;
    u32 r0_3 = call_006c7a9c(r5_1->word_0, r5_1->word_4, *frame.at<u32>(0x14), r5_1->word_8);  // (from the original)
    *gptr<u8>(r0) = u8(*frame.at<u32>(8) << 1);
    u32 r0_4 = call_0057bb70(r0_3);
    if (r0_4 == 0) {
        *gptr<u8>(r0) = u8(u32(*gptr<u8>(r0)) + 1u);
    }
    *gptr<u8>(r0 + 1u) = u8(*frame.at<u32>(0xc) << 1);  // (from the original)
    u32 r0_5 = call_0057bb84(r0_3);
    if (r0_5 != 0) {
        return;
    }
    *gptr<u8>(r0 + 1u) = u8(u32(*gptr<u8>(r0 + 1u)) + 1u);
}

}  // namespace d_0029bde8
GUEST_EXPORT_FRAMED(0x0029bde8, d_0029bde8::f_0029bde8, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_0029bfa4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0029bfa4 {

inline guest::global<u32, 0x0014f928> global_0014f928;  // (from the original)
inline constexpr guest::Function<0x0014f914, u32(u32, u32)> call_0014f914;  // (from the original)
inline constexpr guest::Function<0x002a7190, u32(u32, u32)> call_002a7190;  // (from the original)
inline constexpr guest::Function<0x002fb94c, u32(u32, u32)> call_002fb94c;  // (from the original)
inline constexpr guest::Function<0x002fc8e8, u32(u32, u32)> call_002fc8e8;  // (from the original)
inline constexpr guest::Function<0x002fc900, u32(u32, u32, u32, u32)> call_002fc900;  // (from the original)
inline constexpr guest::Function<0x002fe8a8, u32(u32, u32)> call_002fe8a8;  // (from the original)

void f_0029bfa4(u32 r0, u32 r1) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 r0_2 = 0;
    u32 r5_1 = *gptr<u8>(r0 + 0x18u);  // (from the original)
    u32 r0_1 = call_002fc900(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r1_1 = guest::cpu()->r[1];
    if (r0_1 != 0) {
        r0_2 = call_002fe8a8(0u, r1_1);
    } else {
        r0_2 = call_002fb94c(r0_1, r1_1);
    }
    u32 r0_4 = call_002a7190(r0_2 + 0x5544u, r5_1);  // (from the original)
    call_002fc8e8(r0_4, r0);
    call_002fc8e8(r0_4 + 4u, r0 + 4u);
    call_002fc8e8(r0_4 + 8u, r0 + 8u);
    call_002fc8e8(r0_4 + 0xcu, r0 + 0xcu);  // (from the original)
    call_002fc8e8(r0_4 + 0x10u, r0 + 0x10u);  // (from the original)
    call_002fc8e8(r0_4 + 0x14u, r0 + 0x14u);  // (from the original)
    u32 r1_7 = guest::cpu()->r[1];
    u32 r4_1 = *gptr<u8>(r0 + 0x18u);  // (from the original)
    u32 r0_10 = *gptr<u32>(0x9845b8u + (r4_1 << 2));  // (from the original)
    if (r0_10 != 0) {
        call_0014f914(r0_10, r1_7);
        u32 r0_11 = *gptr<u32>(0x9845b8u + (r4_1 << 2));  // (from the original)
        frame.release();
        guest::call_address<u32>(*global_0014f928, r0_11, 0x1000583u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        return;
    }
    guest::cpu()->r[1] = r1_7;
}

}  // namespace d_0029bfa4
GUEST_EXPORT(0x0029bfa4, d_0029bfa4::f_0029bfa4);

// f_0029c964: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0029c964 {

struct __attribute__((packed)) Object_0029c964_0 {
    u8 byte_0;
    u8 byte_1;
};
GUEST_OFFSET(Object_0029c964_0, byte_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_0029c964_0, byte_1, 0x1);  // (from the original)


void f_0029c964(gptr<Object_0029c964_0> arg0, u32 r1) {
    arg0->byte_0 = u8(r1);
    arg0->byte_1 = 0;
}

}  // namespace d_0029c964
GUEST_EXPORT(0x0029c964, d_0029c964::f_0029c964);

// f_0029c974: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0029c974 {

struct __attribute__((packed)) Object_0029c974_0 {
    u8 byte_0;
    u8 byte_1;
    u8 unknown_2[0x2];  // (not used here)
    u32 word_4;
};
GUEST_OFFSET(Object_0029c974_0, byte_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_0029c974_0, byte_1, 0x1);  // (from the original)
GUEST_OFFSET(Object_0029c974_0, word_4, 0x4);  // (from the original)

struct __attribute__((packed)) Object_0029c974_1 {
    u32 word_0;
};
GUEST_OFFSET(Object_0029c974_1, word_0, 0x0);  // (from the original)


void f_0029c974(gptr<Object_0029c974_0> arg0, gptr<Object_0029c974_1> arg1) {
    arg0->byte_0 = 2;
    arg0->byte_1 = 0;
    arg0->word_4 = arg1->word_0;
}

}  // namespace d_0029c974
GUEST_EXPORT(0x0029c974, d_0029c974::f_0029c974);

// f_0029cc7c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0029cc7c {

struct __attribute__((packed)) Local_0029cc7c_r1_1 {
    u8 unknown_0[0x4];  // (not used here)
    u8 byte_4;
    u8 byte_5;
    u8 byte_6;
};
GUEST_OFFSET(Local_0029cc7c_r1_1, byte_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_0029cc7c_r1_1, byte_5, 0x5);  // (from the original)
GUEST_OFFSET(Local_0029cc7c_r1_1, byte_6, 0x6);  // (from the original)

struct __attribute__((packed)) Local_0029cc7c_r3_1 {
    u8 byte_0;
};
GUEST_OFFSET(Local_0029cc7c_r3_1, byte_0, 0x0);  // (from the original)


u32 f_0029cc7c(u32 r0) {
    u32 r2 = 0u;
    u32 r3 = r0 + 0x10u;  // (from the original)
    u32 r12 = 0xau;  // (from the original)
    u32 r5 = 0xa5u;  // (from the original)
    u32 r4 = r2;
    do {
        gptr<Local_0029cc7c_r1_1> r1_1 = gptr<Local_0029cc7c_r1_1>(r3 + (r2 << 4));
        r2 += 1u;
        r1_1->byte_5 = u8(u32(r1_1->byte_5) & ~0xffu | 0x24u);  // (from the original)
        r1_1->byte_6 = u8(r4);
        r1_1->byte_4 = u8(r5);
        guest::preempt();
    } while (r2 != r12);
    u32 r1 = 0u;
    r0 += 0x400u;  // (from the original)
    r2 = 0xau;  // (from the original)
    do {
        gptr<Local_0029cc7c_r3_1> r3_1 = gptr<Local_0029cc7c_r3_1>(r0 + r1);
        r1 += 1u;
        r3_1->byte_0 = u8(u32(r3_1->byte_0) & ~1u);
        guest::preempt();
    } while (r1 != r2);
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0029cc7c
GUEST_EXPORT_FRAMED(0x0029cc7c, d_0029cc7c::f_0029cc7c, 0x70);  // pushes {r4, r5, r6} first, as the original

// f_0029cd5c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0029cd5c {

struct __attribute__((packed)) Local_0029cd5c_r0_3 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Local_0029cd5c_r0_3, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_0029cd5c_r0_3, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_0029cd5c_r0_3, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Local_0029cd5c_r0_3, word_c, 0xc);  // (from the original)

struct __attribute__((packed)) Local_0029cd5c_r0_4 {
    u8 unknown_0[0x5];  // (not used here)
    u8 byte_5;
    u8 byte_6;
};
GUEST_OFFSET(Local_0029cd5c_r0_4, byte_5, 0x5);  // (from the original)
GUEST_OFFSET(Local_0029cd5c_r0_4, byte_6, 0x6);  // (from the original)

struct __attribute__((packed)) Local_0029cd5c_r3_1 {
    u8 byte_0;
};
GUEST_OFFSET(Local_0029cd5c_r3_1, byte_0, 0x0);  // (from the original)

inline constexpr guest::Function<0x006268f8, u32(u32, u32, u32, u32)> call_006268f8;  // (from the original)

void f_0029cd5c(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r5 = r0 + 0x10u;  // (from the original)
    u32 r7 = r0;
    u32 r4 = 0u;
    u32 r6 = 0x3fu;  // (from the original)
    do {
        u32 r0_2 = call_006268f8(r4 + 9u & 0xffu, r1, r2, r3);  // (from the original)
        r3 = guest::cpu()->r[3];
        u32 r2_1 = *gptr<u32>(r0_2);
        gptr<Local_0029cd5c_r0_3> r0_3 = gptr<Local_0029cd5c_r0_3>(r5 + (r4 << 4));
        r4 += 1u;
        r0_3->word_0 = r2_1;
        r0_3->word_4 = *gptr<u32>(r0_2 + 4u);
        r2 = *gptr<u32>(r0_2 + 8u);
        r0_3->word_8 = r2;
        r1 = *gptr<u32>(r0_2 + 0xcu);  // (from the original)
        r0_3->word_c = r1;
        guest::preempt();
    } while (r4 != r6);
    r1 = 0u;
    r2 = r7 + 0x10u;  // (from the original)
    r3 = 0x3fu;  // (from the original)
    u32 r12 = r1;
    do {
        gptr<Local_0029cd5c_r0_4> r0_4 = gptr<Local_0029cd5c_r0_4>(r2 + (r1 << 4));
        r1 += 1u;
        r0_4->byte_5 = u8(u32(r0_4->byte_5) & ~0xffu | 0x24u);  // (from the original)
        r0_4->byte_6 = u8(r12);
        guest::preempt();
    } while (r1 != r3);
    r1 = r7 + 0x400u;  // (from the original)
    r0 = 0u;
    r2 = 0x3fu;  // (from the original)
    do {
        gptr<Local_0029cd5c_r3_1> r3_1 = gptr<Local_0029cd5c_r3_1>(r1 + r0);
        r0 += 1u;
        r3_1->byte_0 = u8(u32(r3_1->byte_0) & ~1u);
        guest::preempt();
    } while (r0 != r2);
}

}  // namespace d_0029cd5c
GUEST_EXPORT_FRAMED(0x0029cd5c, d_0029cd5c::f_0029cd5c, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_0029ce80: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0029ce80 {

struct __attribute__((packed)) Local_0029ce80_r0_2 {
    u8 unknown_0[0x5];  // (not used here)
    u8 byte_5;
    u8 byte_6;
};
GUEST_OFFSET(Local_0029ce80_r0_2, byte_5, 0x5);  // (from the original)
GUEST_OFFSET(Local_0029ce80_r0_2, byte_6, 0x6);  // (from the original)

struct __attribute__((packed)) Local_0029ce80_r3_1 {
    u8 byte_0;
};
GUEST_OFFSET(Local_0029ce80_r3_1, byte_0, 0x0);  // (from the original)

inline constexpr guest::Function<0x0030b6c4, u32(u32, u32, u32, u32)> call_0030b6c4;  // (from the original)
inline constexpr guest::Function<0x0062512c, u32(u32, u32, u32, u32)> call_0062512c;  // (from the original)

void f_0029ce80(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r8 = r0;
    u32 r0_1 = call_0030b6c4(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    u32 r4 = 0u;
    u32 r7 = r0_1;
    u32 r5 = r8 + 0x10u;  // (from the original)
    u32 r6 = 0x3fu;  // (from the original)
    u32 r9 = r4;
    do {
        gptr<Local_0029ce80_r0_2> r0_2 = gptr<Local_0029ce80_r0_2>(r5 + (r4 << 4));
        r0_2->byte_5 = u8(u32(r0_2->byte_5) & ~0xffu | 0x24u);  // (from the original)
        r0_2->byte_6 = u8(r9);
        if (r7 != 0) {
            call_0062512c(r4 + 9u & 0xffu, r5 + (r4 << 4), 1u, r3);  // (from the original)
            r3 = guest::cpu()->r[3];
        }
        r4 += 1u;
        guest::preempt();
    } while (r4 != r6);
    r1 = r8 + 0x400u;  // (from the original)
    r0 = 0u;
    r2 = 0x3fu;  // (from the original)
    do {
        gptr<Local_0029ce80_r3_1> r3_1 = gptr<Local_0029ce80_r3_1>(r1 + r0);
        r0 += 1u;
        r3_1->byte_0 = u8(u32(r3_1->byte_0) & ~1u);
        guest::preempt();
    } while (r0 != r2);
    guest::cpu()->r[1] = r1;
}

}  // namespace d_0029ce80
GUEST_EXPORT_FRAMED(0x0029ce80, d_0029ce80::f_0029ce80, 0x47f0);  // pushes {r4, r5, r6, r7, r8, r9, r10, lr} first, as the original

// f_0029cf30: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0029cf30 {

inline constexpr guest::Function<0x0062512c, u32(u32, u32, u32)> call_0062512c;  // (from the original)

u32 f_0029cf30(u32 r0, u32 r1) {
    return call_0062512c(r1 + 9u & 0xffu, r0, guest::cpu()->r[2]);  // (from the original)
}

}  // namespace d_0029cf30
GUEST_EXPORT(0x0029cf30, d_0029cf30::f_0029cf30);

// f_0029cf7c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0029cf7c {

inline guest::global<u32, 0x0095386c> global_0095386c;  // (from the original)
inline guest::global<u32, 0x00953870> global_00953870;  // (from the original)
inline constexpr guest::Function<0x00131280, u32(u32, u32, u32, u32)> call_00131280;  // (from the original)
inline constexpr guest::Function<0x001320cc, u32(u32, u32, u32)> call_001320cc;  // (from the original)
inline constexpr guest::Function<0x002f9aa8, u32(u32)> call_002f9aa8;  // (from the original)

u32 f_0029cf7c(u32 r0) {
    u32 r0_1 = *global_0095386c;
    if (r0_1 == 0) {
        u32 r0_2 = call_00131280(0xc4u, r0, 4u, guest::cpu()->r[3]);  // (from the original)
        u32 r0_3 = r0_2 + 0xb4u;  // (from the original)
        if (r0_3 != 0) {
            r0_3 = call_001320cc(r0_3, r0, 3u);
            *gptr<u32>(r0_3) = 0x8fa968;  // (from the original)
        }
        *global_00953870 = r0_3;
        if (r0_2 == 0) {
            r0_1 = 0u;
        } else {
            r0_1 = call_002f9aa8(r0_2);
        }
        *global_0095386c = r0_1;
    }
    return r0_1;
}

}  // namespace d_0029cf7c
GUEST_EXPORT_FRAMED(0x0029cf7c, d_0029cf7c::f_0029cf7c, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0029d150: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0029d150 {


u32 f_0029d150(u32 r0) {
    u32 r1 = r0 + 0x10u;  // (from the original)
    r0 = 0u;
    u32 r2 = 0x40u;  // (from the original)
    u32 r12 = r0;
    do {
        *gptr<u8>(r1 + r0) = u8(r12);
        r0 += 1u;
        guest::preempt();
    } while (r0 != r2);
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0029d150
GUEST_EXPORT(0x0029d150, d_0029d150::f_0029d150);

// f_0029d228: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0029d228 {

struct __attribute__((packed)) Local_0029d228_r0_8 {
    u8 byte_0;
};
GUEST_OFFSET(Local_0029d228_r0_8, byte_0, 0x0);  // (from the original)

inline constexpr guest::Function<0x002068b8, u32(u32, u32, u32, u32)> call_002068b8;  // (from the original)
inline constexpr guest::Function<0x00305f44, u32(u32, u32, u32, u32)> call_00305f44;  // (from the original)
inline constexpr guest::Function<0x0030b6c4, u32(u32, u32, u32, u32)> call_0030b6c4;  // (from the original)
inline constexpr guest::Function<0x006249b0, u32(u32, u32, u32, u32)> call_006249b0;  // (from the original)
inline constexpr guest::Function<0x00624f00, u32(u32, u32, u32, u32)> call_00624f00;  // (from the original)

u32 f_0029d228(u32 r0, u32 r1_unused, u32 r2_unused, u32 r3) {
    guest::StackFrame frame(0xc);  // the original's stack frame
    u32 r0_10 = 0;
    u32 r7 = 0u;
    u32 r2_1 = r0 & 0xf8u;  // (from the original)
    u32 r0_1 = 9u | r0 << 5;
    *frame.at<u8>(2) = u8(r7);
    *frame.at<u8>(3) = u8(r7);
    *frame.at<u8>(4) = u8(r7);
    u32 r1_1 = r7 | r2_1 >> 3;
    *frame.at<u8>(5) = u8(r7);
    *frame.at<u8>(0) = u8(r0_1);
    *frame.at<u8>(6) = u8(r7);
    *frame.at<u8>(1) = u8(r1_1);
    u32 r0_2 = call_00305f44(r0_1, r1_1, r2_1, r3);
    u32 r1_2 = u32(*frame.at<u8>(1)) & ~0xe0u;  // (from the original)
    u32 r0_3 = r1_2 | r0_2 << 5;
    *frame.at<u8>(1) = u8(r0_3);
    u32 r0_4 = call_0030b6c4(r0_3, r1_2, guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0_4 != 0) {
        u32 r0_5 = 0x953874u;  // (from the original)
        u32 r1 = *gptr<u32>(r0_5);
        if (r1 != 0) {
            u32 r5 = r1 + 0x10u;  // (from the original)
            u32 r6 = frame.at(0).addr();
            u32 r2_3 = u32(*frame.at<u8>(0)) >> 5;
            u32 r0_6 = r2_3 + (u32(*frame.at<u8>(1)) << 3) & 0xffu;  // (from the original)
            if (r0_6 < 0x40u) {  // (from the original)
                r5 += r0_6;
            }
            u32 r0_7 = call_00305f44(r0_6, r1, r2_3, guest::cpu()->r[3]);
            r1 = guest::cpu()->r[1];
            u32 r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            if (r0_7 < 4u) {
                r3 = r0_7 & 7u;
                gptr<Local_0029d228_r0_8> r0_8 = gptr<Local_0029d228_r0_8>(r5 + (r0_7 >> 3));
                r2 = 1u;
                r1 = u32(r0_8->byte_0) | lsl_r(r2, r3 & 0xff);  // (from the original)
                r0_8->byte_0 = u8(r1);
            }
            u32 r4 = 0u;
            do {
                u32 r0_9 = r4 & 0xffu;  // (from the original)
                if (r0_9 < 4u) {
                    r1 = *gptr<u8>(r5 + (r0_9 >> 3));
                    if ((r1 >> (r0_9 & 7u) & 1u) != 0) {
                        goto L_29d310;
                    }
                }
                r0_10 = r4 & 0xffu;  // (from the original)
                r0_5 = call_00624f00(r0_10, r1, r2, r3);
                r1 = guest::cpu()->r[1];
                r2 = guest::cpu()->r[2];
                r3 = guest::cpu()->r[3];
                if (r0_5 != 0) {
                    return r0_5;
                }
L_29d310:;
                r4 += 1u;
                guest::preempt();
            } while (r4 < 4u);
            *gptr<u8>(r5) = u8(r7);
            r0_5 = call_002068b8(r5, r6, r2, r3);
            r1 = guest::cpu()->r[1];
        }
        guest::cpu()->r[1] = r1;
        return r0_5;
    }
    u32 r0_11 = call_006249b0(0x40u, 0u, frame.at(0).addr(), 7u);  // (from the original)
    return r0_11;
}

}  // namespace d_0029d228
GUEST_EXPORT_FRAMED(0x0029d228, d_0029d228::f_0029d228, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_0029d354: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0029d354 {

struct __attribute__((packed)) Local_0029d354_r0_3 {
    u8 byte_0;
};
GUEST_OFFSET(Local_0029d354_r0_3, byte_0, 0x0);  // (from the original)

inline guest::global<u32, 0x00953864> global_00953864;  // (from the original)
inline guest::global<u32, 0x00953874> global_00953874;  // (from the original)
inline constexpr guest::Function<0x00206728, u32(u32, u32, u32, u32)> call_00206728;  // (from the original)
inline constexpr guest::Function<0x00305f44, u32(u32, u32, u32, u32)> call_00305f44;  // (from the original)
inline constexpr guest::Function<0x006249b0, u32(u32, u32, u32, u32)> call_006249b0;  // (from the original)

u32 f_0029d354(u32 r0_unused, u32 r1, u32 r2_unused, u32 r3) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    *frame.at<u8>(2) = 0;
    *frame.at<u8>(4) = 0;
    u32 r2_1 = r1 & 0xf8u;  // (from the original)
    *frame.at<u8>(3) = 0;
    *frame.at<u8>(5) = 0;
    u32 r1_1 = 7u | r1 << 5;
    *frame.at<u8>(6) = 0;
    u32 r0_1 = 0u | r2_1 >> 3;
    *frame.at<u8>(0) = u8(r1_1);
    *frame.at<u8>(1) = u8(r0_1);
    u32 r0_2 = call_00305f44(r0_1, r1_1, r2_1, r3);
    u32 r1_2 = u32(*frame.at<u8>(1)) & ~0xe0u;  // (from the original)
    *frame.at<u8>(1) = u8(r1_2 | r0_2 << 5);
    gptr<Local_0029d354_r0_3> r0_3 = gptr<Local_0029d354_r0_3>(*global_00953864);
    if (r0_3.addr() != 0) {
        r0_3 = gptr<Local_0029d354_r0_3>(r0_3.addr() + 0x400u);  // (from the original)
        if (r1 < 0x3fu) {  // (from the original)
            r0_3 = gptr<Local_0029d354_r0_3>(r0_3.addr() + r1);
        }
        r1_2 = u32(r0_3->byte_0) | 1u;
        r0_3->byte_0 = u8(r1_2);
    }
    u32 r0_4 = call_00305f44(r0_3.addr(), r1_2, guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r3_2 = guest::cpu()->r[3];
    if (r0_4 != 0) {
        u32 r0_5 = call_006249b0(0x40u, 0u, frame.at(0).addr(), 7u);  // (from the original)
        return r0_5;
    }
    u32 r1_4 = *global_00953874;
    if (r1_4 == 0) {
        guest::cpu()->r[1] = r1_4;
        return 0x953874u;  // (from the original)
    }
    u32 r4_1 = r1_4 + 0x10u;  // (from the original)
    u32 r2_4 = u32(*frame.at<u8>(0)) >> 5;
    u32 r0_6 = r2_4 + (u32(*frame.at<u8>(1)) << 3) & 0xffu;  // (from the original)
    if (r0_6 < 0x40u) {  // (from the original)
        r4_1 += r0_6;
    }
    u32 r0_7 = call_00305f44(r0_6, r1_4, r2_4, r3_2);
    u32 r0_8 = call_00206728(r4_1, frame.at(0).addr(), r0_7, guest::cpu()->r[3]);
    return r0_8;
}

}  // namespace d_0029d354
GUEST_EXPORT_FRAMED(0x0029d354, d_0029d354::f_0029d354, 0x4010);  // pushes {r4, lr} first, as the original

// f_0029e154: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0029e154 {

inline constexpr guest::Function<0x0023a9dc, u32(u32, u32, u32, u32)> call_0023a9dc;  // (from the original)

u32 f_0029e154(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r0_1 = call_0023a9dc(r0, r1, r2, r3);
    u32 r1_1 = 0x8f0d74u;  // (from the original)
    *gptr<u32>(r0_1 + 0x7cu) = r1_1;  // (from the original)
    *gptr<u32>(r0_1 + 0x270u) = 0;  // (from the original)
    *gptr<u32>(r0_1) = 0x8f0c00;  // (from the original)
    *gptr<u32>(r0_1 + 0x260u) = r2;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    return r0_1;
}

}  // namespace d_0029e154
GUEST_EXPORT_FRAMED(0x0029e154, d_0029e154::f_0029e154, 0x4010);  // pushes {r4, lr} first, as the original

// f_0029e9a8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0029e9a8 {

struct __attribute__((packed)) Object_0029e9a8_0 {
    u8 byte_0;
    u8 unknown_1[0x2];  // (not used here)
    u8 byte_3;
};
GUEST_OFFSET(Object_0029e9a8_0, byte_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_0029e9a8_0, byte_3, 0x3);  // (from the original)


void f_0029e9a8(gptr<Object_0029e9a8_0> arg0) {
    arg0->byte_0 = u8(u32(arg0->byte_0) & ~0x3cu);  // (from the original)
    u32 r1_1 = u32(arg0->byte_3) & ~0x1cu | 0x10u;  // (from the original)
    arg0->byte_3 = u8(r1_1);
    guest::cpu()->r[1] = r1_1;
}

}  // namespace d_0029e9a8
GUEST_EXPORT(0x0029e9a8, d_0029e9a8::f_0029e9a8);
