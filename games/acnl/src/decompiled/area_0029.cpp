// Functions decompiled by tools/decomp (docs/decomp.md), each proved equal to the recompiled original (prove-cpp). The
// names come from games/acnl/names (tools/decomp/names.py); the others are generated (d_<address>::f_<address>,
// Object_<address>_<argument>, word_<offset>) and still to be chosen.
#include "guest/guest.hpp"
#include "recovered/structs.hpp"

#include <bit>

using guest::gptr;

// f_002900d4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002900d4 {

inline constexpr u32 global_00950708_address = 0x00950708u;
inline guest::global<u8, 0x00950708> global_00950708;
inline guest::global<u8, 0x00950709> global_00950709;
inline guest::global<u8, 0x00950710> global_00950710;

u32 f_002900d4() {
    if (*global_00950710 != 0) {
        *global_00950710 = 0;
        guest::cpu()->r[1] = 0u;
        return global_00950708_address;
    }
    u32 r2_1 = *global_00950708;
    if (r2_1 == 3u || r2_1 == 1u) {
        *global_00950709 = 0;
        *global_00950708 = 0;
    }
    guest::cpu()->r[1] = 0u;
    return global_00950708_address;
}

}  // namespace d_002900d4
GUEST_EXPORT(0x002900d4, d_002900d4::f_002900d4);

// f_00290108: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00290108 {

inline guest::global<u8, 0x00950708> global_00950708;
inline guest::global<u8, 0x0095070d> global_0095070d;
inline guest::global<u32, 0x00950720> global_00950720;

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

inline guest::global<u8, 0x0095070d> global_0095070d;
inline guest::global<u8, 0x0095070e> global_0095070e;
inline constexpr guest::Function<0x001cddec, u32(u32, u32)> set_top_bits_8;
inline constexpr guest::Function<0x001cdf04, u32(u32, u32)> copy_16_bytes_unless_null;
inline constexpr guest::Function<0x00300904, u32(u32, u32, u32, u32)> main_object_value;
inline constexpr guest::Function<0x0030b6c4, u32(u32, u32, u32)> main_object_idle;
inline constexpr guest::Function<0x0058a17c, u32(u32)> bgm_set_selected;
inline constexpr guest::Function<0x0058c19c, u32(u32, u32, u32, u32)> return_constant_0x989bc0_;
inline constexpr guest::Function<0x0062512c, u32(u32, u32, u32)> apply_entry_template;
inline constexpr guest::Function<0x006268f8, u32(u32)> entry_template_address;

void f_00290584(u32 r0_unused, u32 r1, u32 r2) {
    guest::StackFrame frame(0x14);  // the original's stack frame
    u32 r0_1 = *global_0095070e;
    if (r0_1 == 0) {
        r0_1 = main_object_value(r0_1, r1, r2, guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        if (r0_1 != 0) {
            r0_1 = main_object_idle(r0_1, r1, r2);
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            if (r0_1 == 0) {
                return;
            }
        }
    }
    u32 r0_2 = return_constant_0x989bc0_(r0_1, r1, r2, guest::cpu()->r[3]);
    u32 r0_3 = bgm_set_selected(r0_2);
    u32 r0_4 = main_object_value(r0_3, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0_4 != 0) {
        u32 r0_5 = main_object_idle(r0_4, guest::cpu()->r[1], guest::cpu()->r[2]);
        if (r0_5 != 0) {
            u32 r0_6 = entry_template_address(0x90u);  // (from the original)
            copy_16_bytes_unless_null(frame.at(0).addr(), r0_6);
            set_top_bits_8(frame.at(0).addr(), 2u);
            apply_entry_template(0x90u, frame.at(0).addr(), 1u);  // (from the original)
        }
    }
    *global_0095070d = 1;
}

}  // namespace d_00290584
GUEST_EXPORT_FRAMED(0x00290584, d_00290584::f_00290584, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_002915b0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002915b0 {

inline guest::global<u8, 0x00950708> global_00950708;
inline guest::global<u8, 0x0095070d> global_0095070d;
inline guest::global<u32, 0x00950718> global_00950718;

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
    u8 unknown_690[0x41b];  // (not used here)
    u8 byte_aab;
    u8 unknown_aac[0x1];  // (not used here)
    u8 byte_aad;
};
GUEST_OFFSET(Object_00291990_0, word_680, 0x680);
GUEST_OFFSET(Object_00291990_0, word_684, 0x684);
GUEST_OFFSET(Object_00291990_0, word_688, 0x688);
GUEST_OFFSET(Object_00291990_0, word_68c, 0x68c);
GUEST_OFFSET(Object_00291990_0, byte_aab, 0xaab);
GUEST_OFFSET(Object_00291990_0, byte_aad, 0xaad);

inline guest::global<u8, 0x00950708> global_00950708;
inline constexpr guest::Function<0x00291a18, u32(u32, u32, u32, u32)> call_00291a18;

struct __attribute__((packed)) Frame_00291990 {
    u32 word_0;
};
GUEST_OFFSET(Frame_00291990, word_0, 0x0);
GUEST_SIZE(Frame_00291990, 0x4);

u32 f_00291990(gptr<Object_00291990_0> arg0, u32 r1_unused, u32 r2_unused, u32 r3) {
    guest::StackFrameOf<Frame_00291990> frame;  // the original's stack frame
    frame->word_0 = r3;
    frame->word_0 = arg0->word_68c;
    u32 r3_1 = arg0->word_688;
    u32 r1_1 = s8(arg0->byte_aad);
    call_00291a18(arg0.addr(), r1_1, 6u, r3_1);
    if (*global_00950708 == 3u && s8(arg0->byte_aab) > 0) {
        frame->word_0 = arg0->word_684;
        u32 r0_1 = call_00291a18(arg0.addr(), 0x3cu, 6u, arg0->word_680);  // (from the original)
        return r0_1;
    }
    frame->word_0 = arg0->word_684;
    u32 r1_3 = *gptr<s8>((arg0.addr() + 0xa00u) + 0xacu);  // (from the original)
    u32 r0_2 = call_00291a18(arg0.addr(), r1_3, 6u, arg0->word_680);
    return r0_2;
}

}  // namespace d_00291990
GUEST_EXPORT_FRAMED(0x00291990, d_00291990::f_00291990, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_0029223c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0029223c {

inline constexpr u32 global_00950708_address = 0x00950708u;
inline constexpr u32 global_00950714_address = 0x00950714u;
inline guest::global<u8, 0x00950713> global_00950713;
inline guest::global<u32, 0x00950714> global_00950714;

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

inline guest::global<u8, 0x00950708> global_00950708;
inline guest::global<u8, 0x0095070d> global_0095070d;
inline guest::global<u32, 0x0095071c> global_0095071c;

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

inline constexpr u32 global_00950708_address = 0x00950708u;
inline guest::global<u8, 0x00950708> global_00950708;
inline guest::global<u8, 0x00950709> global_00950709;
inline guest::global<u8, 0x0095070d> global_0095070d;

u32 f_00292d08() {
    *global_00950709 = 0;
    *global_00950708 = 0;
    *global_0095070d = 1;
    guest::cpu()->r[1] = 0u;
    return global_00950708_address;
}

}  // namespace d_00292d08
GUEST_EXPORT(0x00292d08, d_00292d08::f_00292d08);

// f_00292d28: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00292d28 {

inline guest::global<u8, 0x00950708> global_00950708;
inline guest::global<u8, 0x0095070d> global_0095070d;
inline guest::global<u32, 0x00950718> global_00950718;
inline constexpr guest::Function<0x002fb328, u32(u32)> get_save_data;

u32 f_00292d28(u32 r0) {
    u32 r0_1 = get_save_data(r0);
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

inline constexpr u32 global_00950708_address = 0x00950708u;
inline guest::global<u8, 0x00950712> global_00950712;
inline guest::global<u8, 0x00950713> global_00950713;

void f_00292dbc(u32 r0) {
    if (*global_00950712 == 0) {
        *global_00950712 = 1;
        *global_00950713 = u8(r0);
        guest::cpu()->r[1] = global_00950708_address;
        return;
    }
    if (r0 != *global_00950713) {
        *global_00950713 = u8(r0);
    }
    guest::cpu()->r[1] = global_00950708_address;
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
GUEST_OFFSET(Object_00292e30_0, byte_18e, 0x18e);
GUEST_OFFSET(Object_00292e30_0, byte_2da, 0x2da);
GUEST_OFFSET(Object_00292e30_0, word_6e8, 0x6e8);
GUEST_OFFSET(Object_00292e30_0, word_6ec, 0x6ec);

inline guest::global<u8, 0x00950708> global_00950708;

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

inline guest::global<u8, 0x00950708> global_00950708;
inline guest::global<u32, 0x00950724> global_00950724;

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

inline constexpr u32 global_00950708_address = 0x00950708u;
inline constexpr u32 global_00950718_address = 0x00950718u;
inline guest::global<u8, 0x00950708> global_00950708;
inline guest::global<u8, 0x00950709> global_00950709;
inline guest::global<u8, 0x0095070d> global_0095070d;
inline guest::global<u8, 0x0095070e> global_0095070e;
inline guest::global<u32, 0x00950718> global_00950718;
inline constexpr guest::Function<0x001cddec, u32(u32, u32)> set_top_bits_8;
inline constexpr guest::Function<0x001cdf04, u32(u32, u32)> copy_16_bytes_unless_null;
inline constexpr guest::Function<0x00300904, u32(u32, u32, u32, u32)> main_object_value;
inline constexpr guest::Function<0x0030b6c4, u32(u32, u32, u32)> main_object_idle;
inline constexpr guest::Function<0x0058d3b4, u32(u32)> call_0058d3b4;
inline constexpr guest::Function<0x0060be28, u32(u32, u32)> notify_request;
inline constexpr guest::Function<0x0062512c, u32(u32, u32, u32)> apply_entry_template;
inline constexpr guest::Function<0x006268f8, u32(u32)> entry_template_address;

u32 f_00293000(u32 r0_unused, u32 r1, u32 r2, float S0) {
    guest::StackFrame frame(0x14);  // the original's stack frame
    u32 r0_1 = *global_0095070e;
    if (r0_1 == 0) {
        r0_1 = main_object_value(r0_1, r1, r2, guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        S0 = guest::cpu()->s[0];
        if (r0_1 != 0) {
            r0_1 = main_object_idle(r0_1, r1, r2);
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            S0 = guest::cpu()->s[0];
            if (r0_1 == 0) {
                return r0_1;
            }
        }
    }
    guest::cpu()->s[0] = S0;
    u32 r0_2 = main_object_value(r0_1, r1, r2, guest::cpu()->r[3]);
    if (r0_2 != 0) {
        u32 r0_3 = main_object_idle(r0_2, guest::cpu()->r[1], guest::cpu()->r[2]);
        if (r0_3 != 0) {
            u32 r0_4 = entry_template_address(0x90u);  // (from the original)
            copy_16_bytes_unless_null(frame.at(0).addr(), r0_4);
            set_top_bits_8(frame.at(0).addr(), 2u);
            apply_entry_template(0x90u, frame.at(0).addr(), 1u);  // (from the original)
        }
    }
    u32 r1_4 = *global_00950708;
    if (r1_4 == 3u) {
        r1_4 = *global_00950718;
        if (s32(r1_4) > 0) {
            *global_00950709 = 0;
            notify_request(0x22u, r1_4);  // (from the original)
            float S0_5 = 0.0f;
            guest::cpu()->s[0] = S0_5;
            call_0058d3b4(0x10004a3u);  // (from the original)
            *global_0095070d = 1;
            return 1u;
        }
    }
    *global_00950709 = 0;
    guest::cpu()->r[1] = r1_4;
    return 0u;
}

}  // namespace d_00293000
GUEST_EXPORT_FRAMED(0x00293000, d_00293000::f_00293000, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_00293258: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00293258 {

inline constexpr guest::Function<0x001cdeac, u32(u32)> call_001cdeac;
inline constexpr guest::Function<0x001cdf04, u32(u32, u32)> copy_16_bytes_unless_null;
inline constexpr guest::Function<0x0062512c, u32(u32, u32, u32)> apply_entry_template;
inline constexpr guest::Function<0x006268f8, u32(u32, u32, u32, u32)> entry_template_address;

void f_00293258(u32 r0_unused, u32 r1, u32 r2) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 r0_1 = entry_template_address(0x90u, r1, r2, guest::cpu()->r[3]);  // (from the original)
    copy_16_bytes_unless_null(frame.at(0).addr(), r0_1);
    call_001cdeac(frame.at(0).addr());
    apply_entry_template(0x90u, frame.at(0).addr(), 1u);  // (from the original)
}

}  // namespace d_00293258
GUEST_EXPORT_FRAMED(0x00293258, d_00293258::f_00293258, 0x4010);  // pushes {r4, lr} first, as the original

// f_00293298: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00293298 {

struct __attribute__((packed)) Local_00293298_r0_6 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_00293298_r0_6, word_0, 0x0);
GUEST_OFFSET(Local_00293298_r0_6, word_4, 0x4);
GUEST_OFFSET(Local_00293298_r0_6, word_8, 0x8);

inline constexpr u32 global_00950718_address = 0x00950718u;
inline constexpr u32 global_00997fbc_address = 0x00997fbcu;
inline constexpr u32 global_00997fc4_address = 0x00997fc4u;
inline constexpr u32 global_00997fc8_address = 0x00997fc8u;
inline guest::global<u8, 0x00950708> global_00950708;
inline guest::global<u8, 0x00950709> global_00950709;
inline guest::global<u8, 0x0095070e> global_0095070e;
inline guest::global<u32, 0x00950718> global_00950718;
inline guest::global<u32, 0x0095071c> global_0095071c;
inline guest::global<u32, 0x00997fbc> global_00997fbc;
inline guest::global<u32, 0x00997fc0> global_00997fc0;
inline guest::global<u32, 0x00997fc4> global_00997fc4;
inline guest::global<u32, 0x00997fc8> global_00997fc8;
inline guest::global<u32, 0x00997fcc> global_00997fcc;
inline guest::global<u32, 0x00997fd0> global_00997fd0;
inline constexpr guest::Function<0x00114af1, u32(u32, u32, u32, u32)> call_00114af0;
inline constexpr guest::Function<0x002fb378, u32(u32, u32)> return_constant_0xad56b0_;
inline constexpr guest::Function<0x00300904, u32(u32, u32, u32, u32)> main_object_value;
inline constexpr guest::Function<0x0030b6c4, u32(u32, u32, u32, u32)> main_object_idle;
inline constexpr guest::Function<0x0056cc38, u32(u32, u32, u32, u32)> TimeStamp__add_hours;
inline constexpr guest::Function<0x0056cce4, u32(u32, u32)> TimeStamp__set_hour;
inline constexpr guest::Function<0x0056ce84, u32(u32, u32)> TimeStamp__set_minute;
inline constexpr guest::Function<0x0056cedc, u32(u32, u32)> TimeStamp__set_second;
inline constexpr guest::Function<0x0058d3b4, u32(u32, u32, u32, u32)> call_0058d3b4;
inline constexpr guest::Function<0x0060be28, u32(u32, u32, u32, u32)> notify_request;

u32 f_00293298(u32 r0_unused, u32 r1, u32 r2, u32 r3, float S0) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 r0_3 = 0;
    u32 r0_1 = *global_0095070e;
    if (r0_1 == 0) {
        u32 r0_2 = main_object_value(r0_1, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        S0 = guest::cpu()->s[0];
        if (r0_2 != 0) {
            r0_3 = main_object_idle(r0_2, r1, r2, r3);
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
            *global_00950718 = r0_5;
            *global_0095071c = 0;
            gptr<Local_00293298_r0_6> r0_6 = gptr<Local_00293298_r0_6>(return_constant_0xad56b0_(r0_5, global_00950718_address));
            u32 r1_1 = r0_6->word_4;
            u32 r2_2 = r0_6->word_0;
            u32 r0_7 = r0_6->word_8;
            *global_00997fc0 = r1_1;
            *global_00997fbc = r2_2;
            *global_00997fcc = r1_1;
            *global_00997fc4 = r0_7;
            *global_00997fc8 = r2_2;
            *global_00997fd0 = r0_7;
            TimeStamp__add_hours(global_00997fbc_address, 1u, r2_2, global_00997fc4_address);
            if (*global_00950718 != 0) {
                frame.release();
                return notify_request(0x21u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
            }
            TimeStamp__set_hour(global_00997fbc_address, 0u);
            TimeStamp__set_minute(global_00997fbc_address, 0u);
            TimeStamp__set_second(global_00997fbc_address, 0u);
            notify_request(0x23u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
            float S0_7 = 0.0f;
            guest::cpu()->s[0] = S0_7;
            frame.release();
            return call_0058d3b4(0x10004a3u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        }
        u32 r1_5 = *global_00997fc0;
        u32 r2_7 = *global_00997fc4;
        *global_00997fc8 = *global_00997fbc;
        *global_00997fcc = r1_5;
        *global_00997fd0 = r2_7;
        guest::cpu()->s[0] = S0;
        TimeStamp__add_hours(global_00997fc8_address, ~0u, r2_7, r3);
        r1 = guest::cpu()->r[1];
        S0 = guest::cpu()->s[0];
        r0_3 = global_00997fc8_address;
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
GUEST_OFFSET(Local_002933cc_r0_2, byte_0, 0x0);

inline guest::global<u8, 0x00950708> global_00950708;
inline guest::global<u8, 0x00950709> global_00950709;
inline guest::global<u8, 0x0095070d> global_0095070d;
inline constexpr guest::Function<0x001cdf04, u32(u32, u32)> copy_16_bytes_unless_null;
inline constexpr guest::Function<0x001cdf18, u32(u32)> call_001cdf18;
inline constexpr guest::Function<0x002fae84, u32(u32, u32, u32, u32)> get_data_base;
inline constexpr guest::Function<0x00300904, u32(u32, u32)> main_object_value;
inline constexpr guest::Function<0x0030b6c4, u32(u32)> main_object_idle;
inline constexpr guest::Function<0x0062512c, u32(u32, u32, u32)> apply_entry_template;
inline constexpr guest::Function<0x006268f8, u32(u32)> entry_template_address;

u32 f_002933cc(u32 r0, u32 r1, u32 r2) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 r0_1 = get_data_base(r0, r1, r2, guest::cpu()->r[3]);
    gptr<Local_002933cc_r0_2> r0_2 = gptr<Local_002933cc_r0_2>(r0_1 - 0xfff901ccu);  // (from the original)
    u32 r1_1 = r0_2->byte_0;
    if ((r1_1 & 8u) != 0) {
        r1_1 |= 0x40u;  // (from the original)
        r0_2->byte_0 = u8(r1_1);
    }
    u32 r0_3 = main_object_value(r0_2.addr(), r1_1);
    if (r0_3 != 0) {
        u32 r0_4 = main_object_idle(r0_3);
        if (r0_4 != 0) {
            *global_00950709 = 0;
            *global_00950708 = 0;
            *global_0095070d = 1;
            u32 r0_5 = entry_template_address(0x90u);  // (from the original)
            copy_16_bytes_unless_null(frame.at(0).addr(), r0_5);
            call_001cdf18(frame.at(0).addr());
            r0_4 = apply_entry_template(0x90u, frame.at(0).addr(), 1u);  // (from the original)
        }
        return r0_4;
    }
    *global_00950709 = 0;
    *global_00950708 = 0;
    *global_0095070d = 1;
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
GUEST_OFFSET(Object_002941f0_0, byte_aab, 0xaab);
GUEST_OFFSET(Object_002941f0_0, byte_aac, 0xaac);
GUEST_OFFSET(Object_002941f0_0, byte_aad, 0xaad);

inline constexpr u32 global_00950708_address = 0x00950708u;
inline guest::global<u8, 0x00950708> global_00950708;
inline guest::global<u8, 0x0095070f> global_0095070f;
inline constexpr guest::Function<0x0058d3b4, u32(u32, u32, u32, u32)> call_0058d3b4;

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
                float S0_1 = 0.0f;
                guest::cpu()->s[0] = S0_1;
                call_0058d3b4(0x10004a0u, 1u, global_00950708_address, r3_1);
                return;  // (from the original)
            }
        } else if (r0_1 <= 0xau) {  // (from the original)
            float S0_2 = 0.0f;
            guest::cpu()->s[0] = S0_2;
            call_0058d3b4(0x10004a1u, r1_1, global_00950708_address, r3_1);
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
    r1_2 = (r0_1 << 2) + 0x856bfcu;  // (from the original)
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
    float S0_3 = 0.0f;
    guest::cpu()->s[0] = S0_3;
    call_0058d3b4(r0_2, r1_2, global_00950708_address, r3_1);
}

}  // namespace d_002941f0
GUEST_EXPORT(0x002941f0, d_002941f0::f_002941f0);

// f_00294340: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00294340 {

inline constexpr u32 global_00950708_address = 0x00950708u;
inline guest::global<u8, 0x00950708> global_00950708;
inline guest::global<u8, 0x00950709> global_00950709;

u32 f_00294340() {
    u32 r1_1 = *global_00950708;
    if (r1_1 == 1u) {
        r1_1 = 0u;
        *global_00950709 = u8(r1_1);
    }
    guest::cpu()->r[1] = r1_1;
    return global_00950708_address;
}

}  // namespace d_00294340
GUEST_EXPORT(0x00294340, d_00294340::f_00294340);

// f_002947ac: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002947ac {

inline constexpr u32 vtable_sead__SafeStringBase_char_ = 0x009047f8u;
inline constexpr u32 global_00997fd4_address = 0x00997fd4u;
inline constexpr guest::Function<0x00569dc4, u32(u32, u32, u32, u32)> layout_allocator_8;
inline constexpr guest::Function<0x0056a974, u32(u32, u32, u32, u32)> load_split_start;

struct __attribute__((packed)) Frame_002947ac {
    u32 word_0;
    u32 word_4;
    u8 unknown_8[0x4];  // (not read or written by name)
};
GUEST_OFFSET(Frame_002947ac, word_0, 0x0);
GUEST_OFFSET(Frame_002947ac, word_4, 0x4);
GUEST_SIZE(Frame_002947ac, 0xc);

u32 sead__SafeStringBase_char___SafeStringBase_002947ac(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_002947ac> frame;  // the original's stack frame
    u32 r0_1 = layout_allocator_8(r0, r1, r2, r3);
    frame->word_4 = 0x2947e4;  // (from the original)
    frame->word_0 = vtable_sead__SafeStringBase_char_;
    u32 r0_2 = load_split_start(global_00997fd4_address, frame.at(0).addr(), *gptr<u32>(r0_1 + 4u), 0x80u);  // (from the original)
    return r0_2;
}

}  // namespace d_002947ac
GUEST_EXPORT_FRAMED(0x002947ac, d_002947ac::sead__SafeStringBase_char___SafeStringBase_002947ac, 0x4000);  // pushes {lr} first, as the original

// f_002958ac: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002958ac {

inline constexpr u32 vtable_BsTimeBelWindow = 0x008f076cu;
inline constexpr u32 vtable_BsTimeBelWindow_at_14 = 0x008f07b4u;
inline constexpr u32 vtable_BsTimeBelWindow__MoneyProc = 0x008fa930u;
inline constexpr guest::Function<0x002f76ad, u32(u32, u32, u32, u32)> destroy_array_elements;
inline constexpr guest::Function<0x00521ae0, u32(u32, u32)> do_nothing_00521ae0;
inline constexpr guest::Function<0x00567ef0, u32(u32)> ssys__ma__lyt__ArcResAccReader__virtual_0;
inline constexpr guest::Function<0x0056988c, u32(u32, u32, u32, u32)> destroy_animation;
inline constexpr guest::Function<0x005bf744, u32(u32)> Layout__virtual_0;

u32 BsTimeBelWindow__virtual_0_002958ac(gptr<BsTimeBelWindow> arg0, u32 r1_unused, u32 r2_unused, u32 r3) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    arg0->word_14 = vtable_BsTimeBelWindow_at_14;
    arg0->word_0 = vtable_BsTimeBelWindow;
    arg0->word_b64 = vtable_BsTimeBelWindow__MoneyProc;
    u32 r0_1 = arg0.addr() + 0xbe8u;  // (from the original)
    destroy_animation(r0_1, vtable_BsTimeBelWindow, vtable_BsTimeBelWindow__MoneyProc, r3);
    destroy_animation(r0_1 - 0x28u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    destroy_animation(r0_1 - 0x50u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    destroy_array_elements(r0_1 - 0x264u, 0x295544u, 0x48u, 4u);  // (from the original)
    destroy_array_elements(r0_1 - 0x4ecu, 0x295544u, 0x48u, 9u);  // (from the original)
    destroy_animation(r0_1 - 0x5acu, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    destroy_animation(r0_1 - 0x5d4u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    destroy_animation(r0_1 - 0x5fcu, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    destroy_animation(r0_1 - 0x624u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    destroy_animation(r0_1 - 0x64cu, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    destroy_animation(r0_1 - 0x674u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    destroy_animation(r0_1 - 0x69cu, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_14 = ssys__ma__lyt__ArcResAccReader__virtual_0(r0_1 - 0x8e4u);  // (from the original)
    u32 r0_16 = Layout__virtual_0(r0_14 - 0x14cu);  // (from the original)
    u32 r0_18 = Layout__virtual_0(r0_16 - 0x14cu);  // (from the original)
    frame.release();
    return do_nothing_00521ae0(r0_18 - 0x6cu, guest::cpu()->r[1]);  // (from the original)
}

}  // namespace d_002958ac
GUEST_EXPORT(0x002958ac, d_002958ac::BsTimeBelWindow__virtual_0_002958ac);

// f_0029598c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0029598c {

inline constexpr u32 global_00952c48_address = 0x00952c48u;
inline constexpr u32 global_009984cc_address = 0x009984ccu;
inline guest::global<u32, 0x00952c48> global_00952c48;
inline constexpr guest::Function<0x00125b38, u32(u32, u32, u32, u32)> call_00125b38;

u32 f_0029598c() {
    return call_00125b38(global_009984cc_address, 0x2959a8u, *global_00952c48, 0x80u);  // (from the original)
}

}  // namespace d_0029598c
GUEST_EXPORT(0x0029598c, d_0029598c::f_0029598c);

// f_00297724: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00297724 {

struct __attribute__((packed)) Local_00297724_r0_1 {
    u32 word_0;
    u8 unknown_4[0xa3c];  // (not used here)
    u32 word_a40;
};
GUEST_OFFSET(Local_00297724_r0_1, word_0, 0x0);
GUEST_OFFSET(Local_00297724_r0_1, word_a40, 0xa40);

struct __attribute__((packed)) Local_00297724_r0_5 {
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
GUEST_OFFSET(Local_00297724_r0_5, word_0, 0x0);
GUEST_OFFSET(Local_00297724_r0_5, word_24, 0x24);
GUEST_OFFSET(Local_00297724_r0_5, word_a40, 0xa40);
GUEST_OFFSET(Local_00297724_r0_5, word_a64, 0xa64);
GUEST_OFFSET(Local_00297724_r0_5, word_a68, 0xa68);
GUEST_OFFSET(Local_00297724_r0_5, word_a6c, 0xa6c);

inline constexpr u32 vtable_ChangeStockItem = 0x008f0828u;
inline constexpr u32 vtable_ChangeStockItem_at_a40 = 0x008f0874u;
inline constexpr u32 vtable_Cabinet = 0x008f7fd4u;
inline constexpr u32 vtable_Cabinet_at_a40 = 0x008f8020u;
inline constexpr u32 global_009533c4_address = 0x009533c4u;
inline constexpr guest::Function<0x002682ac, u32(u32, u32, u32, u32)> ChangeRentalBase__ChangeRentalBase_002682ac;
inline constexpr guest::Function<0x002cdcb0, u32(u32)> ItemDragIconGroup__ItemDragIconGroup;
inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> for_each_element;

u32 Cabinet__Cabinet_00297724(u32 r0, u32 r1, u32 r2, u32 r3) {
    gptr<Local_00297724_r0_1> r0_1 = gptr<Local_00297724_r0_1>(ChangeRentalBase__ChangeRentalBase_002682ac(r0, r1, r2, r3));
    r0_1->word_0 = vtable_Cabinet;
    r0_1->word_a40 = vtable_Cabinet_at_a40;
    u32 r0_3 = for_each_element(r0_1.addr() + 0x1888u, 0x2b9440u, 0x36cu, 0xau);  // (from the original)
    u32 r0_4 = r0_3 + 0x2238u;  // (from the original)
    ItemDragIconGroup__ItemDragIconGroup(r0_4);
    gptr<Local_00297724_r0_5> r0_5 = gptr<Local_00297724_r0_5>(r0_4 - 0x3ac0u);  // (from the original)
    *gptr<u8>(r0_5.addr() + 0x3ca0u) = 0;  // (from the original)
    *gptr<u32>(r0_5.addr() + 0x3ca4u) = 0;  // (from the original)
    r0_5->word_a64 = 0x2977c4;  // (from the original)
    r0_5->word_a6c = 0x2977cc;  // (from the original)
    r0_5->word_a68 = 0x9533c4;  // (from the original)
    r0_5->word_24 = 0x2977b8;  // (from the original)
    r0_5->word_a40 = vtable_ChangeStockItem_at_a40;
    r0_5->word_0 = vtable_ChangeStockItem;
    guest::cpu()->r[1] = 0x2977ccu;  // (from the original)
    return r0_5.addr();
}

}  // namespace d_00297724
GUEST_EXPORT_FRAMED(0x00297724, d_00297724::Cabinet__Cabinet_00297724, 0x4010);  // pushes {r4, lr} first, as the original

// f_00297b60: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00297b60 {

struct __attribute__((packed)) Object_00297b60_0 {
    u8 unknown_0[0x26c];  // (not used here)
    u32 word_26c;
    u8 unknown_270[0x4c0];  // (not used here)
    float float_730;
    float float_734;
    float float_738;
};
GUEST_OFFSET(Object_00297b60_0, word_26c, 0x26c);
GUEST_OFFSET(Object_00297b60_0, float_730, 0x730);
GUEST_OFFSET(Object_00297b60_0, float_734, 0x734);
GUEST_OFFSET(Object_00297b60_0, float_738, 0x738);

inline constexpr guest::Function<0x004b6d74, u32(u32, u32, u32, u32)> call_004b6d74;
inline constexpr guest::Function<0x004b6dc8, u32(u32, u32, u32, u32)> call_004b6dc8;
inline constexpr guest::Function<0x0056878c, u32(u32, u32)> LayoutObjectWithChild__forward_to_child;
inline constexpr guest::Function<0x00568c10, u32(u32)> Layout__virtual_3;
inline constexpr guest::Function<0x006aa944, u32(u32)> scaled_value_8c;

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
        Layout__virtual_3(arg0.addr() + 0x24cu);  // (from the original)
        scaled_value_8c(r1);
        float S0_3 = guest::cpu()->s[0];
        u32 r5_1 = arg0.addr() + 0x400u;  // (from the original)
        arg0->float_730 = S0_3;
        guest::cpu()->s[0] = S0_3;
        u32 r0_4 = LayoutObjectWithChild__forward_to_child(arg0.addr() + 0x24cu, 0x857cb4u);  // (from the original)
        scaled_value_8c(r0_4);
        float S0_5 = guest::cpu()->s[0];
        arg0->float_734 = S0_5;
        guest::cpu()->s[0] = S0_5;
        u32 r0_6 = LayoutObjectWithChild__forward_to_child(arg0.addr() + 0x24cu, 0x857ca8u);  // (from the original)
        scaled_value_8c(r0_6);
        r1_1 = guest::cpu()->r[1];
        float S0_7 = guest::cpu()->s[0];
        r0_1 = r0_6;
        arg0->float_738 = S0_7;
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
GUEST_OFFSET(Object_00297d54_0, word_74c, 0x74c);
GUEST_OFFSET(Object_00297d54_0, word_750, 0x750);
GUEST_OFFSET(Object_00297d54_0, word_788, 0x788);

struct __attribute__((packed)) Local_00297d54_r0_1 {
    u8 unknown_0[0xb7];  // (not used here)
    u8 byte_b7;
};
GUEST_OFFSET(Local_00297d54_r0_1, byte_b7, 0xb7);


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
    u8 unknown_0[0x704];  // (not used here)
    float float_704;
    u8 unknown_708[0xc];  // (not used here)
    float float_714;
    u8 unknown_718[0x4];  // (not used here)
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
GUEST_OFFSET(Object_00297f04_0, float_704, 0x704);
GUEST_OFFSET(Object_00297f04_0, float_714, 0x714);
GUEST_OFFSET(Object_00297f04_0, word_71c, 0x71c);
GUEST_OFFSET(Object_00297f04_0, word_720, 0x720);
GUEST_OFFSET(Object_00297f04_0, word_74c, 0x74c);
GUEST_OFFSET(Object_00297f04_0, word_750, 0x750);
GUEST_OFFSET(Object_00297f04_0, word_754, 0x754);
GUEST_OFFSET(Object_00297f04_0, word_768, 0x768);
GUEST_OFFSET(Object_00297f04_0, word_788, 0x788);

struct __attribute__((packed)) Local_00297f04_r0_4 {
    u8 unknown_0[0xb7];  // (not used here)
    u8 byte_b7;
};
GUEST_OFFSET(Local_00297f04_r0_4, byte_b7, 0xb7);

inline constexpr guest::Function<0x002982f0, u32(u32, u32, u32, u32)> call_002982f0;
inline constexpr guest::Function<0x002986f0, u32(u32, u32, u32, u32)> call_002986f0;

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
    float S1_1 = 0.5f;
    float S2_1 = std::bit_cast<float>(*gptr<u32>(arg0->word_768 + 0x4cu));  // (from the original)
    u32 r1_3 = 0u;
    float S0_1 = arg0->float_704 - S2_1 * S1_1;
    arg0->float_714 = S0_1;
    if (r2 != 0) {
        u32 r0_5 = arg0->word_720;
        r1_3 = arg0->word_71c;
        if ((r1_3 - r0_5) != 0 && s32(r1_3) >= s32(r0_5)) {
            r1_3 = r0_5;
        }
    }
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    guest::cpu()->s[2] = S2_1;
    frame.release();
    return call_002982f0(arg0.addr(), r1_3, guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_00297f04
GUEST_EXPORT(0x00297f04, d_00297f04::f_00297f04);

// f_00298834: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00298834 {

inline constexpr guest::Function<0x004bef3c, u32(u32, u32)> call_004bef3c;

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

struct __attribute__((packed)) Local_00298950_r7_1 {
    u8 unknown_0[0x334];  // (not used here)
    float float_334;
    float float_338;
};
GUEST_OFFSET(Local_00298950_r7_1, float_334, 0x334);
GUEST_OFFSET(Local_00298950_r7_1, float_338, 0x338);

inline constexpr guest::Function<0x002982f0, u32(u32, u32)> call_002982f0;
inline constexpr guest::Function<0x0058d3b4, u32(u32, u32, u32, u32)> call_0058d3b4;
inline constexpr guest::Function<0x0072355c, u32(u32, u32, u32, u32)> call_0072355c;

void f_00298950(gptr<CommonScrollBar> arg0, u32 r1, u32 r2, float S0) {
    guest::StackFrame frame(0x18);  // the original's stack frame
    u32 r0_4 = 0;
    u32 r1_2 = 0;
    u32 r0_6 = 0;
    u32 r1_4 = 0;
    if (arg0->byte_6fe != 1u && arg0->word_6ec == 0) {
        u32 r0_2 = call_0072355c(arg0.addr() + 0x608u, r1, r2, guest::cpu()->r[3]);  // (from the original)
        r1 = guest::cpu()->r[1];
        S0 = guest::cpu()->s[0];
        gptr<Local_00298950_r7_1> r7_1 = gptr<Local_00298950_r7_1>(arg0.addr() + 0x400u);  // (from the original)
        if (r0_2 != 0) {
            if (r0_2 != 1u) {
                return;
            }
            u32 r0_3 = arg0->word_71c;
            r1 = arg0->word_720;
            if (s32(r0_3) >= s32(r1)) {
                guest::cpu()->r[1] = r1;
                return;
            }
            call_002982f0(arg0.addr(), r0_3 + 1u);
            if (arg0->byte_6f4 == 0) {
                r0_4 = 0x10003abu;  // (from the original)
                r1_2 = 1u;
            } else {
                r0_4 = 0x10003aau;  // (from the original)
                r1_2 = 0u;
            }
            if (arg0->byte_702 != 0) {
                r0_4 = r1_2 == 0 ? 0x10003acu : 0x10003adu;  // (from the original)
            }
            float S0_1 = r7_1->float_338;
            guest::cpu()->s[0] = S0_1;
            frame.release();
            call_0058d3b4(r0_4, r1_2, guest::cpu()->r[2], guest::cpu()->r[3]);
            return;
        }
        u32 r0_5 = *gptr<u32>(arg0.addr() + 0x71cu);  // (from the original)
        if (s32(r0_5) > 0) {
            guest::cpu()->s[0] = S0;
            call_002982f0(arg0.addr(), r0_5 - 1u);
            if (*gptr<u8>((arg0.addr() + 0x600u) + 0xf4u) == 0) {  // (from the original)
                r0_6 = 0x10003a9u;  // (from the original)
                r1_4 = 1u;
            } else {
                r0_6 = 0x10003a8u;  // (from the original)
                r1_4 = 0u;
            }
            if (*gptr<u8>((arg0.addr() + 0x700u) + 2u) != 0) {  // (from the original)
                r0_6 = r1_4 == 0 ? 0x10003aeu : 0x10003afu;  // (from the original)
            }
            float S0_2 = r7_1->float_334;
            guest::cpu()->s[0] = S0_2;
            frame.release();
            call_0058d3b4(r0_6, r1_4, guest::cpu()->r[2], guest::cpu()->r[3]);
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

struct __attribute__((packed)) Object_00298a6c_0 {
    u8 unknown_0[0x6dc];  // (not used here)
    u32 word_6dc;
};
GUEST_OFFSET(Object_00298a6c_0, word_6dc, 0x6dc);

struct __attribute__((packed)) Local_00298a6c_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_00298a6c_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_00298a6c_ea_1, word_4, 0x4);

struct __attribute__((packed)) Local_00298a6c_ea_10 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_00298a6c_ea_10, word_0, 0x0);
GUEST_OFFSET(Local_00298a6c_ea_10, word_4, 0x4);

struct __attribute__((packed)) Local_00298a6c_ea_9 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_00298a6c_ea_9, word_0, 0x0);
GUEST_OFFSET(Local_00298a6c_ea_9, word_4, 0x4);

struct __attribute__((packed)) Local_00298a6c_r6_2 {
    u8 unknown_0[0x522];  // (not used here)
    u8 byte_522;
    u8 byte_523;
};
GUEST_OFFSET(Local_00298a6c_r6_2, byte_522, 0x522);
GUEST_OFFSET(Local_00298a6c_r6_2, byte_523, 0x523);

struct __attribute__((packed)) Local_00298a6c_r9_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
};
GUEST_OFFSET(Local_00298a6c_r9_1, word_0, 0x0);
GUEST_OFFSET(Local_00298a6c_r9_1, word_4, 0x4);
GUEST_OFFSET(Local_00298a6c_r9_1, word_8, 0x8);
GUEST_OFFSET(Local_00298a6c_r9_1, word_c, 0xc);
GUEST_OFFSET(Local_00298a6c_r9_1, word_10, 0x10);
GUEST_OFFSET(Local_00298a6c_r9_1, word_14, 0x14);

inline guest::global<u32, 0x00857bc4> global_00857bc4;
inline guest::global<u32, 0x00857bc8> global_00857bc8;
inline guest::global<u32, 0x00857bcc> global_00857bcc;
inline guest::global<u32, 0x00857bd0> global_00857bd0;
inline guest::global<u32, 0x00857bdc> global_00857bdc;
inline guest::global<u32, 0x00857be0> global_00857be0;
inline guest::global<u32, 0x00857be4> global_00857be4;
inline guest::global<u32, 0x00857be8> global_00857be8;
inline guest::global<u32, 0x00857bec> global_00857bec;
inline guest::global<u32, 0x00857bf0> global_00857bf0;
inline guest::global<u32, 0x00857bf4> global_00857bf4;
inline constexpr guest::Function<0x002b6a00, u32(u32, u32)> set_node_values;
inline constexpr guest::Function<0x002f6a30, u32(u32, u32)> call_002f6a30;
inline constexpr guest::Function<0x002f6e98, u32(u32, u32, u32, u32)> ButtonActionControl__setup;
inline constexpr guest::Function<0x002f7508, u32(u32, u32, u32)> call_002f7508;
inline constexpr guest::Function<0x004b4fc0, u32(u32, u32, u32)> call_004b4fc0;
inline constexpr guest::Function<0x0056878c, u32(u32, u32, u32, u32)> LayoutObjectWithChild__forward_to_child;

struct __attribute__((packed)) Frame_00298a6c {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u32 word_18;
    u8 unknown_1c[0x3c];  // (not read or written by name)
    u32 word_58;
    u8 unknown_5c[0x8];  // (not read or written by name)
};
GUEST_OFFSET(Frame_00298a6c, word_0, 0x0);
GUEST_OFFSET(Frame_00298a6c, word_4, 0x4);
GUEST_OFFSET(Frame_00298a6c, word_8, 0x8);
GUEST_OFFSET(Frame_00298a6c, word_c, 0xc);
GUEST_OFFSET(Frame_00298a6c, word_10, 0x10);
GUEST_OFFSET(Frame_00298a6c, word_14, 0x14);
GUEST_OFFSET(Frame_00298a6c, word_18, 0x18);
GUEST_OFFSET(Frame_00298a6c, word_58, 0x58);
GUEST_SIZE(Frame_00298a6c, 0x64);

void f_00298a6c(gptr<Object_00298a6c_0> arg0, float S0) {
    guest::StackFrameOf<Frame_00298a6c> frame;  // the original's stack frame
    u32 r0 = arg0.addr();
    u32 r5 = r0;
    gptr<Local_00298a6c_r9_1> r9_1 = gptr<Local_00298a6c_r9_1>(frame.at(0x40).addr());  // (from the original)
    u32 r2_1 = *global_00857bdc;
    u32 r3_1 = *global_00857be0;
    u32 r6_1 = *global_00857be4;
    u32 r7_1 = *global_00857be8;
    u32 r8_1 = *global_00857bec;
    u32 r12_1 = *global_00857bf0;
    r9_1->word_0 = r2_1;
    r9_1->word_4 = r3_1;
    r9_1->word_8 = r6_1;
    r9_1->word_c = r7_1;
    r9_1->word_10 = r8_1;
    r9_1->word_14 = r12_1;
    u32 r2_2 = *global_00857bf4;
    gptr<Local_00298a6c_ea_1> ea_1 = gptr<Local_00298a6c_ea_1>(frame.at(0x38).addr());  // (from the original)
    ea_1->word_0 = r0 + 4u;
    ea_1->word_4 = r5 + 0x24cu;  // (from the original)
    u32 r0_1 = r5 + 0x608u;  // (from the original)
    frame->word_58 = r2_2;
    u32 r8 = r0_1;
    ButtonActionControl__setup(r0_1, frame.at(0x38).addr(), 0u, r3_1);  // (from the original)
    u32 r2 = guest::cpu()->r[2];
    u32 r3 = guest::cpu()->r[3];
    u32 r9 = 0u;
    S0 = 0.0f;
    arg0->word_6dc = arg0->word_6dc | 0x40u;  // (from the original)
    frame->word_0 = r9;
    frame->word_4 = r9;
    frame->word_8 = r9;
    frame->word_c = r9;
    frame->word_10 = r9;
    frame->word_14 = r9;
    frame->word_18 = r9;
    frame->word_8 = std::bit_cast<u32>(S0);
    frame->word_c = std::bit_cast<u32>(S0);
    u32 r0_2 = *global_00857bc4;
    u32 r1_2 = *global_00857bc8;
    u32 r10 = frame.at(0x28).addr();  // (from the original)
    u32 r11 = frame.at(0x30).addr();  // (from the original)
    gptr<Local_00298a6c_ea_9> ea_9 = gptr<Local_00298a6c_ea_9>(frame.at(0x28).addr());  // (from the original)
    ea_9->word_0 = r0_2;
    ea_9->word_4 = r1_2;
    u32 r0_3 = *global_00857bcc;
    u32 r1_3 = *global_00857bd0;
    u32 r4 = r9;
    gptr<Local_00298a6c_ea_10> ea_10 = gptr<Local_00298a6c_ea_10>(frame.at(0x30).addr());  // (from the original)
    ea_10->word_0 = r0_3;
    ea_10->word_4 = r1_3;
    do {
        u32 r1_4 = gptr<u32>(r10)[r4];
        guest::cpu()->s[0] = S0;
        u32 r0_5 = LayoutObjectWithChild__forward_to_child(r5 + 0x24cu, r1_4, r2, r3);  // (from the original)
        frame->word_0 = r0_5;
        u32 r0_7 = call_004b4fc0(r5 + 0x24cu, gptr<u32>(r11)[r4], 1u);  // (from the original)
        frame->word_4 = r0_7;
        gptr<Local_00298a6c_r6_2> r6_2 = gptr<Local_00298a6c_r6_2>(r5 + r4 * 0xe0u);  // (from the original)
        frame->word_14 = r4;
        frame->word_10 = r9;
        set_node_values(r6_2.addr() + 0x448u, frame.at(0).addr());  // (from the original)
        r6_2->byte_522 = u8(r9);
        r6_2->byte_523 = u8(r9);
        call_002f7508(r8, r6_2.addr() + 0x448u, 1u);  // (from the original)
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        S0 = guest::cpu()->s[0];
        r4 += 1u;
        guest::preempt();
    } while (s32(r4) < 2);
    guest::cpu()->s[0] = S0;
    call_002f6a30(r8, 0u);
    *gptr<u32>(r5 + 0x6dcu) = *gptr<u32>(r5 + 0x6dcu) & ~8u;  // (from the original)
    *gptr<u16>(r5 + 0x6d8u) = 0x23;  // (from the original)
}

}  // namespace d_00298a6c
GUEST_EXPORT_FRAMED(0x00298a6c, d_00298a6c::f_00298a6c, 0x4ff0);  // pushes {r4, r5, r6, r7, r8, r9, r10, r11, lr} first, as the original

// f_00298bb0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00298bb0 {

struct __attribute__((packed)) Object_00298bb0_0 {
    u8 unknown_0[0x764];  // (not used here)
    u32 word_764;
};
GUEST_OFFSET(Object_00298bb0_0, word_764, 0x764);

struct __attribute__((packed)) Local_00298bb0_r0_2 {
    u8 unknown_0[0x4c0];  // (not used here)
    u32 word_4c0;
    u32 word_4c4;
};
GUEST_OFFSET(Local_00298bb0_r0_2, word_4c0, 0x4c0);
GUEST_OFFSET(Local_00298bb0_r0_2, word_4c4, 0x4c4);

inline constexpr guest::Function<0x00148710, u32(u32, u32, u32, u32)> call_00148710;
inline constexpr guest::Function<0x001f99e4, u32(u32, u32)> call_001f99e4;
inline constexpr guest::Function<0x006d1e64, u32(u32, u32)> get_state_30;

struct __attribute__((packed)) Frame_00298bb0 {
    u32 word_0;
    u32 word_4;
    float float_8;
};
GUEST_OFFSET(Frame_00298bb0, word_0, 0x0);
GUEST_OFFSET(Frame_00298bb0, word_4, 0x4);
GUEST_OFFSET(Frame_00298bb0, float_8, 0x8);
GUEST_SIZE(Frame_00298bb0, 0xc);

u32 f_00298bb0(gptr<Object_00298bb0_0> arg0) {
    guest::StackFrameOf<Frame_00298bb0> frame;  // the original's stack frame
    float S0_1 = 0.0f;
    u32 r2_1 = frame.at(0).addr();
    frame->word_0 = std::bit_cast<u32>(S0_1);
    frame->word_4 = std::bit_cast<u32>(S0_1);
    frame->float_8 = S0_1;
    u32 r1_1 = arg0->word_764 + 0x80u;  // (from the original)
    guest::cpu()->s[0] = S0_1;
    call_00148710(r2_1, r1_1, r2_1, guest::cpu()->r[3]);
    u32 r0_1 = get_state_30(r2_1, guest::cpu()->r[1]);
    gptr<Local_00298bb0_r0_2> r0_2 = gptr<Local_00298bb0_r0_2>(*gptr<u32>(r0_1 + 0x1f4u));  // (from the original)
    r0_2->word_4c0 = frame->word_0;
    u32 r1_3 = frame->word_4;
    r0_2->word_4c4 = r1_3;
    u32 r0_3 = get_state_30(r0_2.addr(), r1_3);
    u32 r0_5 = call_001f99e4(*gptr<u32>(r0_3 + 0x1f4u), frame.at(0).addr());  // (from the original)
    return r0_5;
}

}  // namespace d_00298bb0
GUEST_EXPORT_FRAMED(0x00298bb0, d_00298bb0::f_00298bb0, 0x4000);  // pushes {lr} first, as the original

// f_00298e94: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00298e94 {

struct __attribute__((packed)) Object_00298e94_0 {
    u8 unknown_0[0x702];  // (not used here)
    u8 byte_702;
    u8 unknown_703[0x31];  // (not used here)
    float float_734;
};
GUEST_OFFSET(Object_00298e94_0, byte_702, 0x702);
GUEST_OFFSET(Object_00298e94_0, float_734, 0x734);

inline constexpr guest::Function<0x0058d3b4, u32(u32, u32, u32, u32)> call_0058d3b4;

void f_00298e94(gptr<Object_00298e94_0> arg0, u32 r1) {
    u32 r3_1 = arg0->byte_702;
    u32 r2_1 = r1 == 0 ? 0x10003a8u : 0x10003a9u;  // (from the original)
    if (r3_1 == 0) {
        float S0_1 = arg0->float_734;
        guest::cpu()->s[0] = S0_1;
        call_0058d3b4(r2_1, r1, r2_1, r3_1);
        return;
    }
    u32 r2_2 = r1 == 0 ? 0x10003aeu : 0x10003afu;  // (from the original)
    float S0_2 = arg0->float_734;
    guest::cpu()->s[0] = S0_2;
    call_0058d3b4(r2_2, r1, r2_2, r3_1);
}

}  // namespace d_00298e94
GUEST_EXPORT(0x00298e94, d_00298e94::f_00298e94);

// f_00298ed8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00298ed8 {

inline constexpr guest::Function<0x004bef3c, u32(u32, u32)> call_004bef3c;

u32 f_00298ed8(gptr<CommonScrollBarWidth> arg0, u32 r1) {
    u32 r0_6 = 0;
    u32 r0_2 = call_004bef3c(arg0->word_77c, r1);
    if (r0_2 == 0) {
        u32 r0_4 = call_004bef3c(arg0->word_778, r1);
        if (r0_4 == 0) {
            r0_6 = call_004bef3c(arg0->word_780, r1);
            if (r0_6 != 0) {
                r0_6 = 1u;
            }
        } else {
            r0_6 = 1u;
        }
    } else {
        r0_6 = 1u;
    }
    return r0_6;
}

}  // namespace d_00298ed8
GUEST_EXPORT_FRAMED(0x00298ed8, d_00298ed8::f_00298ed8, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_00298f2c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00298f2c {

struct __attribute__((packed)) Local_00298f2c_r4_1 {
    u8 unknown_0[0x32c];  // (not used here)
    float float_32c;
    u8 unknown_330[0x10];  // (not used here)
    float float_340;
    u8 unknown_344[0x4];  // (not used here)
    float float_348;
};
GUEST_OFFSET(Local_00298f2c_r4_1, float_32c, 0x32c);
GUEST_OFFSET(Local_00298f2c_r4_1, float_340, 0x340);
GUEST_OFFSET(Local_00298f2c_r4_1, float_348, 0x348);

struct __attribute__((packed)) Local_00298f2c_r4_2 {
    float float_0;
    float float_4;
};
GUEST_OFFSET(Local_00298f2c_r4_2, float_0, 0x0);
GUEST_OFFSET(Local_00298f2c_r4_2, float_4, 0x4);

inline constexpr guest::Function<0x005833b0, u32(u32)> call_005833b0;
inline constexpr guest::Function<0x006aa944, u32(u32, u32, u32, u32)> scaled_value_8c;

void f_00298f2c(gptr<CommonScrollBar> arg0, u32 r1) {
    guest::StackFrame frame(0x18);  // the original's stack frame
    float S1_1 = 0;
    gptr<Local_00298f2c_r4_1> r4_1 = gptr<Local_00298f2c_r4_1>(arg0.addr() + 0x400u);  // (from the original)
    u32 r6_1 = arg0->word_71c;
    float S0_1 = (arg0->float_714 - std::bit_cast<float>(*gptr<u32>(arg0->word_764 + 0x2cu))) * arg0->float_70c;  // (from the original)
    float S3_1 = 0.0f;
    u32 r0_1 = vcvt_sz_f((S0_1 + 1.0f) / arg0->float_748);
    arg0->word_71c = r0_1;
    float S2_1 = arg0->float_748;
    float S4_1 = float(s32(r0_1));
    arg0->float_724 = S0_1 - S4_1 * S2_1;
    if (!(arg0->float_710 < S3_1)) {
        S1_1 = r4_1->float_340;
        if (S1_1 >= S0_1) {
            u32 r0_2 = arg0->word_764;
            guest::cpu()->s[0] = S0_1;
            guest::cpu()->s[1] = S1_1;
            guest::cpu()->s[2] = S2_1;
            guest::cpu()->s[3] = S3_1;
            guest::cpu()->s[4] = S4_1;
            scaled_value_8c(r0_2, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
            call_005833b0(0x10003a6u);  // (from the original)
            float S1_3 = r4_1->float_32c;
            S2_1 = r4_1->float_348;
            float S0_3 = std::bit_cast<float>(arg0->word_71c);
            gptr<Local_00298f2c_r4_2> r4_2 = gptr<Local_00298f2c_r4_2>(r4_1.addr() + 0x33cu);  // (from the original)
            S3_1 = float(s32(std::bit_cast<u32>(S0_3)));
            S4_1 = float(s32(std::bit_cast<u32>(S0_3)));
            S1_1 = -S1_3 + S3_1 * S2_1;
            S0_1 = S1_3 + S4_1 * S2_1;
            r4_2->float_0 = S0_1;
            r4_2->float_4 = S1_1;
        }
    } else {
        S1_1 = arg0->float_73c;
        if (S1_1 <= S0_1) {
            u32 r0_3 = arg0->word_764;
            guest::cpu()->s[0] = S0_1;
            guest::cpu()->s[1] = S1_1;
            guest::cpu()->s[2] = S2_1;
            guest::cpu()->s[3] = S3_1;
            guest::cpu()->s[4] = S4_1;
            scaled_value_8c(r0_3, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
            call_005833b0(0x10003a6u);  // (from the original)
            float S2_4 = arg0->float_72c;
            S1_1 = arg0->float_748;
            float S0_5 = std::bit_cast<float>(arg0->word_71c);
            S4_1 = float(s32(std::bit_cast<u32>(S0_5)));
            S0_1 = float(s32(std::bit_cast<u32>(S0_5)));
            S3_1 = S2_4 + S1_1 + S4_1 * S1_1;
            S2_1 = S2_4 + S0_1 * S1_1;
            arg0->float_73c = S3_1;
            arg0->float_740 = S2_1;
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
    float float_738;
};
GUEST_OFFSET(Object_00299094_0, byte_702, 0x702);
GUEST_OFFSET(Object_00299094_0, float_738, 0x738);

inline constexpr guest::Function<0x0058d3b4, u32(u32, u32, u32, u32)> call_0058d3b4;

void f_00299094(gptr<Object_00299094_0> arg0, u32 r1) {
    u32 r3_1 = arg0->byte_702;
    u32 r2_1 = r1 == 0 ? 0x10003aau : 0x10003abu;  // (from the original)
    if (r3_1 == 0) {
        float S0_1 = arg0->float_738;
        guest::cpu()->s[0] = S0_1;
        call_0058d3b4(r2_1, r1, r2_1, r3_1);
        return;
    }
    u32 r2_2 = r1 == 0 ? 0x10003acu : 0x10003adu;  // (from the original)
    float S0_2 = arg0->float_738;
    guest::cpu()->s[0] = S0_2;
    call_0058d3b4(r2_2, r1, r2_2, r3_1);
}

}  // namespace d_00299094
GUEST_EXPORT(0x00299094, d_00299094::f_00299094);

// f_002990d8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002990d8 {

struct __attribute__((packed)) Object_002990d8_0 {
    u8 unknown_0[0x764];  // (not used here)
    u32 word_764;
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
GUEST_OFFSET(Object_002990d8_0, word_764, 0x764);
GUEST_OFFSET(Object_002990d8_0, word_768, 0x768);
GUEST_OFFSET(Object_002990d8_0, word_76c, 0x76c);
GUEST_OFFSET(Object_002990d8_0, word_770, 0x770);
GUEST_OFFSET(Object_002990d8_0, word_774, 0x774);
GUEST_OFFSET(Object_002990d8_0, word_778, 0x778);
GUEST_OFFSET(Object_002990d8_0, word_77c, 0x77c);
GUEST_OFFSET(Object_002990d8_0, word_780, 0x780);
GUEST_OFFSET(Object_002990d8_0, word_784, 0x784);
GUEST_OFFSET(Object_002990d8_0, word_788, 0x788);
GUEST_OFFSET(Object_002990d8_0, word_78c, 0x78c);
GUEST_OFFSET(Object_002990d8_0, word_790, 0x790);
GUEST_OFFSET(Object_002990d8_0, word_794, 0x794);

inline constexpr guest::Function<0x004b4fc0, u32(u32, u32, u32)> call_004b4fc0;
inline constexpr guest::Function<0x0056878c, u32(u32, u32, u32, u32)> LayoutObjectWithChild__forward_to_child;

void f_002990d8(gptr<Object_002990d8_0> arg0, u32 r1_unused, u32 r2) {
    u32 r0_2 = LayoutObjectWithChild__forward_to_child(arg0.addr() + 0x24cu, 0x857c9cu, r2, guest::cpu()->r[3]);  // (from the original)
    arg0->word_764 = r0_2;
    u32 r0_4 = LayoutObjectWithChild__forward_to_child(arg0.addr() + 0x24cu, 0x857c90u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    arg0->word_768 = r0_4;
    u32 r0_6 = LayoutObjectWithChild__forward_to_child(arg0.addr() + 0x24cu, 0x857c80u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    arg0->word_76c = r0_6;
    u32 r0_8 = LayoutObjectWithChild__forward_to_child(arg0.addr() + 0x24cu, 0x857c70u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    arg0->word_770 = r0_8;
    u32 r0_10 = LayoutObjectWithChild__forward_to_child(arg0.addr() + 0x24cu, 0x857c60u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    arg0->word_774 = r0_10;
    u32 r0_12 = LayoutObjectWithChild__forward_to_child(arg0.addr() + 0x24cu, 0x857c54u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    arg0->word_778 = r0_12;
    u32 r0_14 = LayoutObjectWithChild__forward_to_child(arg0.addr() + 0x24cu, 0x857c48u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    arg0->word_77c = r0_14;
    u32 r0_16 = LayoutObjectWithChild__forward_to_child(arg0.addr() + 0x24cu, 0x857c3cu, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    arg0->word_780 = r0_16;
    u32 r0_18 = LayoutObjectWithChild__forward_to_child(arg0.addr() + 0x24cu, 0x857c30u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    arg0->word_784 = r0_18;
    u32 r0_20 = LayoutObjectWithChild__forward_to_child(arg0.addr() + 0x24cu, 0x857c28u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    arg0->word_788 = r0_20;
    u32 r0_22 = call_004b4fc0(arg0.addr() + 0x24cu, 0x857c1cu, 1u);  // (from the original)
    arg0->word_78c = r0_22;
    u32 r0_24 = call_004b4fc0(arg0.addr() + 0x24cu, 0x857c04u, 1u);  // (from the original)
    arg0->word_790 = r0_24;
    u32 r0_26 = call_004b4fc0(arg0.addr() + 0x24cu, 0x857bf8u, 1u);  // (from the original)
    arg0->word_794 = r0_26;
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
GUEST_OFFSET(Object_002991f4_0, byte_3dc, 0x3dc);
GUEST_OFFSET(Object_002991f4_0, word_6dc, 0x6dc);
GUEST_OFFSET(Object_002991f4_0, byte_744, 0x744);

struct __attribute__((packed)) Local_002991f4_r0_1 {
    u8 unknown_0[0xfa];  // (not used here)
    u8 byte_fa;
};
GUEST_OFFSET(Local_002991f4_r0_1, byte_fa, 0xfa);

inline constexpr guest::Function<0x001f9b08, u32(u32, u32)> call_001f9b08;
inline constexpr guest::Function<0x002992f8, u32(u32, u32, u32, u32)> call_002992f8;
inline constexpr guest::Function<0x002993ac, u32(u32, u32, u32, u32)> call_002993ac;
inline constexpr guest::Function<0x002f6b14, u32(u32)> call_002f6b14;
inline constexpr guest::Function<0x002f6e14, u32(u32)> ButtonActionControl__virtual_3;
inline constexpr guest::Function<0x00568c10, u32(u32)> Layout__virtual_3;
inline constexpr guest::Function<0x00569420, u32(u32, u32)> notify_object_00569420;
inline constexpr guest::Function<0x005697e0, u32(u32, u32)> Animation__set_value;
inline constexpr guest::Function<0x006d1e64, u32(u32, u32, u32, u32)> get_state_30;

void f_002991f4(gptr<Object_002991f4_0> arg0, float S0) {
    u32 r1_1 = arg0->byte_744;
    if (r1_1 != 1u) {
        gptr<Local_002991f4_r0_1> r0_1 = gptr<Local_002991f4_r0_1>(arg0.addr() + 0x600u);  // (from the original)
        if (r1_1 != 2u) {
            if (r1_1 == 3u) {
                u32 r0_2 = r0_1->byte_fa;
                if (r0_2 == 1u) {
                    u32 r0_3 = get_state_30(r0_2, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
                    call_001f9b08(*gptr<u32>(r0_3 + 0x1f4u), 0u);  // (from the original)
                    arg0->word_6dc = arg0->word_6dc & ~8u;
                    call_002992f8(arg0.addr(), guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
                    S0 = guest::cpu()->s[0];
                }
                guest::cpu()->s[0] = S0;
                call_002993ac(arg0.addr(), 0u, guest::cpu()->r[2], guest::cpu()->r[3]);
                u32 r0_5 = arg0.addr() + 0x608u;  // (from the original)
                ButtonActionControl__virtual_3(r0_5);
                call_002f6b14(r0_5);
                r1_1 = guest::cpu()->r[1];
                S0 = guest::cpu()->s[0];
                if (arg0->byte_3dc != 0) {
                    float S0_5 = 0.0f;
                    guest::cpu()->s[0] = S0_5;
                    Animation__set_value(arg0.addr() + 0x3c0u, r1_1);  // (from the original)
                    Layout__virtual_3(arg0.addr() + 0x24cu);  // (from the original)
                    notify_object_00569420(arg0.addr() + 0x24cu, arg0.addr() + 0x3c0u);  // (from the original)
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
        u32 r0_10 = get_state_30(r0_9, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
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

inline constexpr guest::Function<0x00568630, u32(u32, u32, u32, u32)> notify_objects_of_list;
inline constexpr guest::Function<0x00568984, u32(u32, u32, u32, u32)> notify_list_objects;
inline constexpr guest::Function<0x00568c10, u32(u32)> Layout__virtual_3;
inline constexpr guest::Function<0x005697e0, u32(u32)> Animation__set_value;
inline constexpr guest::Function<0x0058d3b4, u32(u32)> call_0058d3b4;
inline constexpr guest::Function<0x006aa944, u32(u32)> scaled_value_8c;

u32 f_002993ac(gptr<CommonScrollBar> arg0, u32 r1, float S0) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 r0_1 = s8(arg0->byte_6f9);
    if (r0_1 != r1) {
        arg0->byte_6f9 = u8(r1);
        u32 r2_1 = arg0->word_78c;
        notify_objects_of_list(arg0.addr() + 0x24cu, arg0.addr() + 0x398u, r2_1, 0u);  // (from the original)
        if (r1 != 0) {
            float S0_1 = 1.0f;
            guest::cpu()->s[0] = S0_1;
            Animation__set_value(arg0.addr() + 0x398u);  // (from the original)
            if (arg0->byte_744 == 3u) {
                scaled_value_8c(arg0->word_764);
                call_0058d3b4(0x10003a5u);  // (from the original)
                arg0->byte_6ff = 1;
            }
        } else {
            float S0_4 = 0.0f;
            guest::cpu()->s[0] = S0_4;
            Animation__set_value(arg0.addr() + 0x398u);  // (from the original)
        }
        Layout__virtual_3(arg0.addr() + 0x24cu);  // (from the original)
        u32 r2_5 = arg0->word_78c;
        frame.release();
        return notify_list_objects(arg0.addr() + 0x24cu, arg0.addr() + 0x398u, r2_5, 0u);  // (from the original)
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
GUEST_OFFSET(Object_002999ac_0, byte_444, 0x444);

inline constexpr guest::Function<0x004b4fc0, u32(u32, u32, u32, u32)> call_004b4fc0;
inline constexpr guest::Function<0x00568630, u32(u32, u32, u32, u32)> notify_objects_of_list;
inline constexpr guest::Function<0x00568984, u32(u32, u32, u32, u32)> notify_list_objects;
inline constexpr guest::Function<0x00568c10, u32(u32)> Layout__virtual_3;
inline constexpr guest::Function<0x005697e0, u32(u32)> Animation__set_value;

void f_002999ac(gptr<Object_002999ac_0> arg0, u32 r1, u32 r2_unused, u32 r3, float S0) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    arg0->byte_444 = u8(r1);
    u32 r5_1 = arg0.addr() + 0x444u;  // (from the original)
    u32 r0_2 = call_004b4fc0(arg0.addr() + 0x24cu, 0x857c10u, 1u, r3);  // (from the original)
    notify_objects_of_list(arg0.addr() + 0x24cu, arg0.addr() + 0x3e8u, r0_2, 0u);  // (from the original)
    u32 r0_5 = call_004b4fc0(arg0.addr() + 0x24cu, 0x857c04u, 1u, guest::cpu()->r[3]);  // (from the original)
    notify_objects_of_list(arg0.addr() + 0x24cu, arg0.addr() + 0x3e8u, r0_5, 0u);  // (from the original)
    u32 r0_8 = call_004b4fc0(arg0.addr() + 0x24cu, 0x857bf8u, 1u, guest::cpu()->r[3]);  // (from the original)
    notify_objects_of_list(arg0.addr() + 0x24cu, arg0.addr() + 0x3e8u, r0_8, 0u);  // (from the original)
    float S0_6 = float(u32(arg0->byte_444));
    guest::cpu()->s[0] = S0_6;
    Animation__set_value(arg0.addr() + 0x3e8u);  // (from the original)
    Layout__virtual_3(arg0.addr() + 0x24cu);  // (from the original)
    u32 r0_13 = call_004b4fc0(arg0.addr() + 0x24cu, 0x857c10u, 1u, guest::cpu()->r[3]);  // (from the original)
    notify_list_objects(arg0.addr() + 0x24cu, arg0.addr() + 0x3e8u, r0_13, 0u);  // (from the original)
    u32 r0_16 = call_004b4fc0(arg0.addr() + 0x24cu, 0x857c04u, 1u, guest::cpu()->r[3]);  // (from the original)
    notify_list_objects(arg0.addr() + 0x24cu, arg0.addr() + 0x3e8u, r0_16, 0u);  // (from the original)
    u32 r0_19 = call_004b4fc0(arg0.addr() + 0x24cu, 0x857bf8u, 1u, guest::cpu()->r[3]);  // (from the original)
    frame.release();
    notify_list_objects(r0_19, arg0.addr() + 0x3e8u, r0_19, 0u);
    return;  // (from the original)
}

}  // namespace d_002999ac
GUEST_EXPORT(0x002999ac, d_002999ac::f_002999ac);

// f_00299b30: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00299b30 {

struct __attribute__((packed)) Local_00299b30_r0_15 {
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
GUEST_OFFSET(Local_00299b30_r0_15, byte_6f8, 0x6f8);
GUEST_OFFSET(Local_00299b30_r0_15, byte_6f9, 0x6f9);
GUEST_OFFSET(Local_00299b30_r0_15, byte_6fa, 0x6fa);
GUEST_OFFSET(Local_00299b30_r0_15, byte_6fb, 0x6fb);
GUEST_OFFSET(Local_00299b30_r0_15, byte_6fc, 0x6fc);
GUEST_OFFSET(Local_00299b30_r0_15, byte_6fd, 0x6fd);
GUEST_OFFSET(Local_00299b30_r0_15, byte_6fe, 0x6fe);
GUEST_OFFSET(Local_00299b30_r0_15, byte_6ff, 0x6ff);
GUEST_OFFSET(Local_00299b30_r0_15, byte_700, 0x700);
GUEST_OFFSET(Local_00299b30_r0_15, byte_701, 0x701);
GUEST_OFFSET(Local_00299b30_r0_15, byte_702, 0x702);
GUEST_OFFSET(Local_00299b30_r0_15, byte_703, 0x703);
GUEST_OFFSET(Local_00299b30_r0_15, word_71c, 0x71c);
GUEST_OFFSET(Local_00299b30_r0_15, word_720, 0x720);
GUEST_OFFSET(Local_00299b30_r0_15, word_728, 0x728);
GUEST_OFFSET(Local_00299b30_r0_15, byte_744, 0x744);
GUEST_OFFSET(Local_00299b30_r0_15, word_74c, 0x74c);
GUEST_OFFSET(Local_00299b30_r0_15, word_750, 0x750);
GUEST_OFFSET(Local_00299b30_r0_15, word_754, 0x754);
GUEST_OFFSET(Local_00299b30_r0_15, word_758, 0x758);
GUEST_OFFSET(Local_00299b30_r0_15, word_75c, 0x75c);
GUEST_OFFSET(Local_00299b30_r0_15, word_768, 0x768);
GUEST_OFFSET(Local_00299b30_r0_15, word_76c, 0x76c);
GUEST_OFFSET(Local_00299b30_r0_15, word_770, 0x770);
GUEST_OFFSET(Local_00299b30_r0_15, word_774, 0x774);
GUEST_OFFSET(Local_00299b30_r0_15, word_778, 0x778);
GUEST_OFFSET(Local_00299b30_r0_15, word_77c, 0x77c);
GUEST_OFFSET(Local_00299b30_r0_15, word_780, 0x780);
GUEST_OFFSET(Local_00299b30_r0_15, word_784, 0x784);
GUEST_OFFSET(Local_00299b30_r0_15, word_788, 0x788);
GUEST_OFFSET(Local_00299b30_r0_15, word_78c, 0x78c);
GUEST_OFFSET(Local_00299b30_r0_15, word_790, 0x790);
GUEST_OFFSET(Local_00299b30_r0_15, word_794, 0x794);

struct __attribute__((packed)) Local_00299b30_r1_8 {
    u8 unknown_0[0x304];  // (not used here)
    float float_304;
    float float_308;
    float float_30c;
    float float_310;
    float float_314;
    float float_318;
    u8 unknown_31c[0x8];  // (not used here)
    float float_324;
    u8 unknown_328[0x4];  // (not used here)
    float float_32c;
    float float_330;
    float float_334;
    float float_338;
    float float_33c;
    float float_340;
    u8 unknown_344[0x4];  // (not used here)
    float float_348;
};
GUEST_OFFSET(Local_00299b30_r1_8, float_304, 0x304);
GUEST_OFFSET(Local_00299b30_r1_8, float_308, 0x308);
GUEST_OFFSET(Local_00299b30_r1_8, float_30c, 0x30c);
GUEST_OFFSET(Local_00299b30_r1_8, float_310, 0x310);
GUEST_OFFSET(Local_00299b30_r1_8, float_314, 0x314);
GUEST_OFFSET(Local_00299b30_r1_8, float_318, 0x318);
GUEST_OFFSET(Local_00299b30_r1_8, float_324, 0x324);
GUEST_OFFSET(Local_00299b30_r1_8, float_32c, 0x32c);
GUEST_OFFSET(Local_00299b30_r1_8, float_330, 0x330);
GUEST_OFFSET(Local_00299b30_r1_8, float_334, 0x334);
GUEST_OFFSET(Local_00299b30_r1_8, float_338, 0x338);
GUEST_OFFSET(Local_00299b30_r1_8, float_33c, 0x33c);
GUEST_OFFSET(Local_00299b30_r1_8, float_340, 0x340);
GUEST_OFFSET(Local_00299b30_r1_8, float_348, 0x348);

struct __attribute__((packed)) Local_00299b30_r1_9 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_00299b30_r1_9, word_0, 0x0);
GUEST_OFFSET(Local_00299b30_r1_9, word_4, 0x4);

inline constexpr u32 vtable_CommonScrollBar = 0x008f0888u;
inline constexpr guest::Function<0x001207d8, u32(u32, u32, u32, u32)> ssys__ma__lyt__ArcResAcc__ArcResAcc_001207d8;
inline constexpr guest::Function<0x00125aec, u32(u32)> construct_layout_animation;
inline constexpr guest::Function<0x00125e08, u32(u32)> construct_layout_list;
inline constexpr guest::Function<0x00125e3c, u32(u32)> Layout__Layout;
inline constexpr guest::Function<0x002f7604, u32(u32)> construct_button_action_control;
inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> for_each_element;
inline constexpr guest::Function<0x006e5860, u32(u32)> PhaseCounter__reset;

u32 CommonScrollBar__CommonScrollBar(gptr<CommonScrollBar> arg0, u32 r1, u32 r2, u32 r3, float S0) {
    arg0->word_0 = vtable_CommonScrollBar;
    u32 r0_2 = ssys__ma__lyt__ArcResAcc__ArcResAcc_001207d8(arg0.addr() + 4u, vtable_CommonScrollBar, r2, r3);
    u32 r0_4 = Layout__Layout(r0_2 + 0x248u);  // (from the original)
    u32 r0_5 = r0_4 + 0x14cu;  // (from the original)
    construct_layout_animation(r0_5);
    u32 r0_6 = r0_5 + 0x28u;  // (from the original)
    construct_layout_animation(r0_6);
    u32 r0_7 = r0_6 + 0x28u;  // (from the original)
    construct_layout_animation(r0_7);
    u32 r0_8 = r0_7 + 0x28u;  // (from the original)
    construct_layout_animation(r0_8);
    u32 r0_9 = r0_8 + 0x28u;  // (from the original)
    construct_layout_list(r0_9);
    u32 r0_10 = r0_9 - 0x438u;  // (from the original)
    *gptr<u8>(r0_10 + 0x444u) = 0;  // (from the original)
    u32 r0_12 = for_each_element(r0_10 + 0x448u, 0x2b6de0u, 0xe0u, 2u);  // (from the original)
    u32 r0_13 = r0_12 + 0x1c0u;  // (from the original)
    construct_button_action_control(r0_13);
    u32 r0_14 = r0_13 + 0xe4u;  // (from the original)
    PhaseCounter__reset(r0_14);
    gptr<Local_00299b30_r0_15> r0_15 = gptr<Local_00299b30_r0_15>(r0_14 - 0x6ecu);  // (from the original)
    r0_15->byte_6f8 = 0;
    r0_15->byte_6f9 = 0;
    r0_15->byte_6fa = 0;
    r0_15->byte_6fb = 0;
    r0_15->byte_6fc = 1;
    r0_15->byte_6fd = 0;
    r0_15->byte_6fe = 0;
    r0_15->byte_6ff = 0;
    r0_15->byte_700 = 0;
    r0_15->byte_701 = 1;
    float S0_9 = 0.0f;
    gptr<Local_00299b30_r1_8> r1_8 = gptr<Local_00299b30_r1_8>(r0_15.addr() + 0x400u);  // (from the original)
    r0_15->byte_702 = 0;
    r0_15->byte_703 = 0;
    r1_8->float_304 = S0_9;
    r1_8->float_308 = S0_9;
    r1_8->float_30c = S0_9;
    r1_8->float_310 = S0_9;
    r1_8->float_314 = S0_9;
    r1_8->float_318 = S0_9;
    r0_15->word_71c = 0;
    r0_15->word_720 = 0;
    r1_8->float_324 = S0_9;
    r0_15->word_728 = ~0u;
    r1_8->float_32c = S0_9;
    r1_8->float_330 = S0_9;
    r1_8->float_334 = S0_9;
    r1_8->float_338 = S0_9;
    r1_8->float_33c = S0_9;
    r1_8->float_340 = S0_9;
    r0_15->byte_744 = 0;
    r1_8->float_348 = S0_9;
    r0_15->word_74c = 0;
    r0_15->word_750 = 0;
    r0_15->word_754 = 0;
    gptr<Local_00299b30_r1_9> r1_9 = gptr<Local_00299b30_r1_9>(r0_15.addr() + 0x760u);  // (from the original)
    r0_15->word_758 = 0;
    r0_15->word_75c = 0;
    r1_9->word_0 = r1;
    r1_9->word_4 = 0;
    r0_15->word_768 = 0;
    r0_15->word_76c = 0;
    r0_15->word_770 = 0;
    r0_15->word_774 = 0;
    r0_15->word_778 = 0;
    r0_15->word_77c = 0;
    r0_15->word_780 = 0;
    r0_15->word_784 = 0;
    r0_15->word_788 = 0;
    r0_15->word_78c = 0;
    r0_15->word_790 = 0;
    r0_15->word_794 = 0;
    guest::cpu()->r[1] = r1_9.addr();
    guest::cpu()->s[0] = S0_9;
    return r0_15.addr();
}

}  // namespace d_00299b30
GUEST_EXPORT_FRAMED(0x00299b30, d_00299b30::CommonScrollBar__CommonScrollBar, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0029a5f8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0029a5f8 {

struct __attribute__((packed)) Object_0029a5f8_0 {
    u8 unknown_0[0xcc];  // (not used here)
    u32 word_cc;
    u16 half_d0;
    u8 unknown_d2[0x2];  // (not used here)
    u32 word_d4;
};
GUEST_OFFSET(Object_0029a5f8_0, word_cc, 0xcc);
GUEST_OFFSET(Object_0029a5f8_0, half_d0, 0xd0);
GUEST_OFFSET(Object_0029a5f8_0, word_d4, 0xd4);

struct __attribute__((packed)) Local_0029a5f8_r0_5 {
    u8 unknown_0[0x40];  // (not used here)
    u8 byte_40;
    u8 unknown_41[0x1b3];  // (not used here)
    u32 word_1f4;
};
GUEST_OFFSET(Local_0029a5f8_r0_5, byte_40, 0x40);
GUEST_OFFSET(Local_0029a5f8_r0_5, word_1f4, 0x1f4);

inline constexpr u32 global_0094fd3c_address = 0x0094fd3cu;
inline guest::global<u32, 0x0094fd3c> global_0094fd3c;
inline constexpr guest::Function<0x001fa354, u32(u32)> call_001fa354;
inline constexpr guest::Function<0x006d1e64, u32(u32, u32, u32, u32)> get_state_30;

void f_0029a5f8(gptr<Object_0029a5f8_0> arg0) {
    arg0->word_d4 = 0x20c;  // (from the original)
    arg0->half_d0 = 0xb;  // (from the original)
    arg0->word_cc = 7;
    u32 r0_1 = get_state_30(7u, 0xbu, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    *gptr<u8>(r0_1 + 0x40u) = 1;  // (from the original)
    u32 r0_2 = get_state_30(r0_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    call_001fa354(*gptr<u32>(r0_2 + 0x1f4u));  // (from the original)
    u32 r0_4 = arg0->word_cc;
    u32 r1_3 = *global_0094fd3c;
    *gptr<u8>(r1_3 + 0x1fcu) = u8(r0_4);  // (from the original)
    gptr<Local_0029a5f8_r0_5> r0_5 = gptr<Local_0029a5f8_r0_5>(get_state_30(r0_4, r1_3, guest::cpu()->r[2], guest::cpu()->r[3]));
    call_001fa354(r0_5->word_1f4);
    r0_5->byte_40 = 0;
}

}  // namespace d_0029a5f8
GUEST_EXPORT_FRAMED(0x0029a5f8, d_0029a5f8::f_0029a5f8, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0029b6f8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0029b6f8 {

inline constexpr guest::Function<0x002f71e4, u32(u32, u32, u32, u32)> ButtonActionControl__virtual_2;
inline constexpr guest::Function<0x00569544, u32(u32)> FrameControl__advance;
inline constexpr guest::Function<0x0074fdd0, u32(u32)> button_slot_check;

u32 DragIconControl__virtual_2(gptr<DragIconControl_rec> arg0) {
    u32 r0 = arg0.addr();
    u32 zf_2 = 0;
    u32 r4 = r0;
    ButtonActionControl__virtual_2(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_1 = arg0->word_e8;
    u32 zf_1 = r0_1 == 0;
    if (!zf_1) {
        zf_1 = r0_1 - 0xcu == 0;  // (from the original)
        r4 = r0_1 - 0xcu;  // (from the original)
    }
    if (!zf_1) {
        u32 r5 = 1u;
        do {
            if (*gptr<u32>(r4 + 0x1cu) != 0 && *gptr<u32>(r4 + 0x38u) != 0 && *gptr<u8>(r4 + 0x3cu) != 0) {  // (from the original)
                u32 r0_3 = button_slot_check(r4 + 0x20u);  // (from the original)
                if (r0_3 == 0) {
                    FrameControl__advance(r4 + 0x20u);  // (from the original)
                    *gptr<u8>(*gptr<u32>(r4 + 0x18u) + 0x122u) = u8(r5);  // (from the original)
                }
            }
            r0_1 = *gptr<u32>(r4 + 0x14u);  // (from the original)
            zf_2 = r0_1 == 0;
            if (!zf_2) {
                zf_2 = r0_1 - 0xcu == 0;  // (from the original)
                r4 = r0_1 - 0xcu;  // (from the original)
            }
            guest::preempt();
        } while (!zf_2);
    }
    return r0_1;
}

}  // namespace d_0029b6f8
GUEST_EXPORT_FRAMED(0x0029b6f8, d_0029b6f8::DragIconControl__virtual_2, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

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

inline constexpr guest::Function<0x00301444, u32(u32, u32)> clear;

void f_0029b868() {
    clear(guest::cpu()->r[0], 0x32u);
    return;  // (from the original)
}

}  // namespace d_0029b868
GUEST_EXPORT(0x0029b868, d_0029b868::f_0029b868);

// f_0029bde8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0029bde8 {

struct __attribute__((packed)) Object_0029bde8_0 {
    u8 byte_0;
    u8 byte_1;
};
GUEST_OFFSET(Object_0029bde8_0, byte_0, 0x0);
GUEST_OFFSET(Object_0029bde8_0, byte_1, 0x1);

struct __attribute__((packed)) Object_0029bde8_1 {
    u8 byte_0;
    u8 byte_1;
};
GUEST_OFFSET(Object_0029bde8_1, byte_0, 0x0);
GUEST_OFFSET(Object_0029bde8_1, byte_1, 0x1);

struct __attribute__((packed)) Local_0029bde8_r5_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_0029bde8_r5_1, word_0, 0x0);
GUEST_OFFSET(Local_0029bde8_r5_1, word_4, 0x4);
GUEST_OFFSET(Local_0029bde8_r5_1, word_8, 0x8);

inline constexpr guest::Function<0x0057bb70, u32(u32)> call_0057bb70;
inline constexpr guest::Function<0x0057bb84, u32(u32)> call_0057bb84;
inline constexpr guest::Function<0x006a6ec0, u32(u32, u32, u32, u32)> split_world_position;
inline constexpr guest::Function<0x006c7a9c, u32(u32, u32, u32, u32)> call_006c7a9c;

struct __attribute__((packed)) Frame_0029bde8 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u8 unknown_10[0x4];  // (not read or written by name)
    u32 word_14;
    u8 unknown_18[0x4];  // (not read or written by name)
};
GUEST_OFFSET(Frame_0029bde8, word_0, 0x0);
GUEST_OFFSET(Frame_0029bde8, word_4, 0x4);
GUEST_OFFSET(Frame_0029bde8, word_8, 0x8);
GUEST_OFFSET(Frame_0029bde8, word_c, 0xc);
GUEST_OFFSET(Frame_0029bde8, word_14, 0x14);
GUEST_SIZE(Frame_0029bde8, 0x1c);

void f_0029bde8(gptr<Object_0029bde8_0> arg0, gptr<Object_0029bde8_1> arg1) {
    guest::StackFrameOf<Frame_0029bde8> frame;  // the original's stack frame
    u32 r1_1 = arg1->byte_0;
    frame->word_4 = u32(arg1->byte_1);
    frame->word_0 = r1_1;
    split_world_position(frame.at(8).addr(), frame.at(0xc).addr(), frame.at(0x14).addr(), frame.at(0x10).addr());  // (from the original)
    gptr<Local_0029bde8_r5_1> r5_1 = gptr<Local_0029bde8_r5_1>(frame.at(8).addr());
    frame->word_0 = 1;
    u32 r0_3 = call_006c7a9c(r5_1->word_0, r5_1->word_4, frame->word_14, r5_1->word_8);
    arg0->byte_0 = u8(frame->word_8 << 1);
    u32 r0_4 = call_0057bb70(r0_3);
    if (r0_4 == 0) {
        arg0->byte_0 = u8(u32(arg0->byte_0) + 1u);
    }
    arg0->byte_1 = u8(frame->word_c << 1);
    u32 r0_5 = call_0057bb84(r0_3);
    if (r0_5 != 0) {
        return;
    }
    arg0->byte_1 = u8(u32(arg0->byte_1) + 1u);
}

}  // namespace d_0029bde8
GUEST_EXPORT_FRAMED(0x0029bde8, d_0029bde8::f_0029bde8, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_0029bfa4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0029bfa4 {

inline constexpr u32 global_009845b8_address = 0x009845b8u;
inline guest::global<u32, 0x0014f928> global_0014f928;
inline constexpr guest::Function<0x0014f914, u32(u32)> call_0014f914;
inline constexpr guest::Function<0x002a7190, u32(u32, u32)> call_002a7190;
inline constexpr guest::Function<0x002fb94c, u32(u32)> get_current_player;
inline constexpr guest::Function<0x002fc8e8, u32(u32, u32)> copy_item_002fc8e8;
inline constexpr guest::Function<0x002fc900, u32(u32, u32, u32, u32)> mode_above_1;
inline constexpr guest::Function<0x002fe8a8, u32(u32)> player_of_slot_index;

void f_0029bfa4(u32 r0, u32 r1) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 r0_2 = 0;
    u32 r5_1 = *gptr<u8>(r0 + 0x18u);  // (from the original)
    u32 r0_1 = mode_above_1(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0_1 != 0) {
        r0_2 = player_of_slot_index(0u);
    } else {
        r0_2 = get_current_player(r0_1);
    }
    u32 r0_4 = call_002a7190(r0_2 + 0x5544u, r5_1);  // (from the original)
    copy_item_002fc8e8(r0_4, r0);
    copy_item_002fc8e8(r0_4 + 4u, r0 + 4u);
    copy_item_002fc8e8(r0_4 + 8u, r0 + 8u);
    copy_item_002fc8e8(r0_4 + 0xcu, r0 + 0xcu);  // (from the original)
    copy_item_002fc8e8(r0_4 + 0x10u, r0 + 0x10u);  // (from the original)
    copy_item_002fc8e8(r0_4 + 0x14u, r0 + 0x14u);  // (from the original)
    u32 r4_1 = *gptr<u8>(r0 + 0x18u);  // (from the original)
    u32 r0_10 = gptr<u32>(global_009845b8_address)[r4_1];
    if (r0_10 != 0) {
        call_0014f914(r0_10);
        u32 r0_11 = gptr<u32>(global_009845b8_address)[r4_1];
        frame.release();
        guest::call_address<u32>(*global_0014f928, r0_11, 0x1000583u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        return;
    }
}

}  // namespace d_0029bfa4
GUEST_EXPORT(0x0029bfa4, d_0029bfa4::f_0029bfa4);

// f_0029c964: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0029c964 {

struct __attribute__((packed)) Object_0029c964_0 {
    u8 byte_0;
    u8 byte_1;
};
GUEST_OFFSET(Object_0029c964_0, byte_0, 0x0);
GUEST_OFFSET(Object_0029c964_0, byte_1, 0x1);


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
GUEST_OFFSET(Object_0029c974_0, byte_0, 0x0);
GUEST_OFFSET(Object_0029c974_0, byte_1, 0x1);
GUEST_OFFSET(Object_0029c974_0, word_4, 0x4);

struct __attribute__((packed)) Object_0029c974_1 {
    u32 word_0;
};
GUEST_OFFSET(Object_0029c974_1, word_0, 0x0);


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
GUEST_OFFSET(Local_0029cc7c_r1_1, byte_4, 0x4);
GUEST_OFFSET(Local_0029cc7c_r1_1, byte_5, 0x5);
GUEST_OFFSET(Local_0029cc7c_r1_1, byte_6, 0x6);

struct __attribute__((packed)) Local_0029cc7c_r3_1 {
    u8 byte_0;
};
GUEST_OFFSET(Local_0029cc7c_r3_1, byte_0, 0x0);


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

struct __attribute__((packed)) Local_0029cd5c_r0_2 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Local_0029cd5c_r0_2, word_0, 0x0);
GUEST_OFFSET(Local_0029cd5c_r0_2, word_4, 0x4);
GUEST_OFFSET(Local_0029cd5c_r0_2, word_8, 0x8);
GUEST_OFFSET(Local_0029cd5c_r0_2, word_c, 0xc);

struct __attribute__((packed)) Local_0029cd5c_r0_3 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Local_0029cd5c_r0_3, word_0, 0x0);
GUEST_OFFSET(Local_0029cd5c_r0_3, word_4, 0x4);
GUEST_OFFSET(Local_0029cd5c_r0_3, word_8, 0x8);
GUEST_OFFSET(Local_0029cd5c_r0_3, word_c, 0xc);

struct __attribute__((packed)) Local_0029cd5c_r0_4 {
    u8 unknown_0[0x5];  // (not used here)
    u8 byte_5;
    u8 byte_6;
};
GUEST_OFFSET(Local_0029cd5c_r0_4, byte_5, 0x5);
GUEST_OFFSET(Local_0029cd5c_r0_4, byte_6, 0x6);

struct __attribute__((packed)) Local_0029cd5c_r3_1 {
    u8 byte_0;
};
GUEST_OFFSET(Local_0029cd5c_r3_1, byte_0, 0x0);

inline constexpr guest::Function<0x006268f8, u32(u32, u32, u32, u32)> entry_template_address;

void f_0029cd5c(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r5 = r0 + 0x10u;  // (from the original)
    u32 r7 = r0;
    u32 r4 = 0u;
    u32 r6 = 0x3fu;  // (from the original)
    do {
        gptr<Local_0029cd5c_r0_2> r0_2 = gptr<Local_0029cd5c_r0_2>(entry_template_address(r4 + 9u & 0xffu, r1, r2, r3));  // (from the original)
        r3 = guest::cpu()->r[3];
        u32 r2_1 = r0_2->word_0;
        gptr<Local_0029cd5c_r0_3> r0_3 = gptr<Local_0029cd5c_r0_3>(r5 + (r4 << 4));
        r4 += 1u;
        r0_3->word_0 = r2_1;
        r0_3->word_4 = r0_2->word_4;
        r2 = r0_2->word_8;
        r0_3->word_8 = r2;
        r1 = r0_2->word_c;
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
GUEST_OFFSET(Local_0029ce80_r0_2, byte_5, 0x5);
GUEST_OFFSET(Local_0029ce80_r0_2, byte_6, 0x6);

struct __attribute__((packed)) Local_0029ce80_r3_1 {
    u8 byte_0;
};
GUEST_OFFSET(Local_0029ce80_r3_1, byte_0, 0x0);

inline constexpr guest::Function<0x0030b6c4, u32(u32, u32, u32, u32)> main_object_idle;
inline constexpr guest::Function<0x0062512c, u32(u32, u32, u32, u32)> apply_entry_template;

void f_0029ce80(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r8 = r0;
    u32 r0_1 = main_object_idle(r0, r1, r2, r3);
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
            apply_entry_template(r4 + 9u & 0xffu, r5 + (r4 << 4), 1u, r3);  // (from the original)
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

inline constexpr guest::Function<0x0062512c, u32(u32, u32, u32)> apply_entry_template;

u32 finish_entry_release(u32 r0, u32 r1) {
    return apply_entry_template(r1 + 9u & 0xffu, r0, guest::cpu()->r[2]);  // (from the original)
}

}  // namespace d_0029cf30
GUEST_EXPORT(0x0029cf30, d_0029cf30::finish_entry_release);

// f_0029cf7c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0029cf7c {

inline constexpr u32 vtable_NpcNetShareInfo__SingletonDisposer_ = 0x008fa968u;
inline constexpr u32 global_0095386c_address = 0x0095386cu;
inline guest::global<u32, 0x0095386c> global_0095386c;
inline guest::global<u32, 0x00953870> global_00953870;
inline constexpr guest::Function<0x00131280, u32(u32, u32, u32, u32)> allocate_from_heap_00131280;
inline constexpr guest::Function<0x001320cc, u32(u32, u32, u32)> sead__IDisposer__IDisposer_001320cc;
inline constexpr guest::Function<0x002f9aa8, u32(u32)> call_002f9aa8;

u32 NpcNetShareInfo__SingletonDisposer___SingletonDisposer_(u32 r0) {
    u32 r0_1 = *global_0095386c;
    if (r0_1 == 0) {
        u32 r0_2 = allocate_from_heap_00131280(0xc4u, r0, 4u, guest::cpu()->r[3]);  // (from the original)
        u32 r0_3 = r0_2 + 0xb4u;  // (from the original)
        if (r0_3 != 0) {
            r0_3 = sead__IDisposer__IDisposer_001320cc(r0_3, r0, 3u);
            *gptr<u32>(r0_3) = vtable_NpcNetShareInfo__SingletonDisposer_;
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
GUEST_EXPORT_FRAMED(0x0029cf7c, d_0029cf7c::NpcNetShareInfo__SingletonDisposer___SingletonDisposer_, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

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
GUEST_OFFSET(Local_0029d228_r0_8, byte_0, 0x0);

inline constexpr u32 global_00953874_address = 0x00953874u;
inline constexpr guest::Function<0x002068b8, u32(u32, u32, u32, u32)> call_002068b8;
inline constexpr guest::Function<0x00305f44, u32(u32, u32, u32, u32)> query_current_main_object;
inline constexpr guest::Function<0x0030b6c4, u32(u32, u32)> main_object_idle;
inline constexpr guest::Function<0x006249b0, u32(u32, u32, u32, u32)> send_message;
inline constexpr guest::Function<0x00624f00, u32(u32, u32, u32, u32)> station_is_waited_for;

struct __attribute__((packed)) Frame_0029d228 {
    u8 byte_0;
    u8 byte_1;
    u8 byte_2;
    u8 byte_3;
    u8 byte_4;
    u8 byte_5;
    u8 byte_6;
    u8 unknown_7[0x5];  // (not read or written by name)
};
GUEST_OFFSET(Frame_0029d228, byte_0, 0x0);
GUEST_OFFSET(Frame_0029d228, byte_1, 0x1);
GUEST_OFFSET(Frame_0029d228, byte_2, 0x2);
GUEST_OFFSET(Frame_0029d228, byte_3, 0x3);
GUEST_OFFSET(Frame_0029d228, byte_4, 0x4);
GUEST_OFFSET(Frame_0029d228, byte_5, 0x5);
GUEST_OFFSET(Frame_0029d228, byte_6, 0x6);
GUEST_SIZE(Frame_0029d228, 0xc);

u32 f_0029d228(u32 r0, u32 r1_unused, u32 r2_unused, u32 r3) {
    guest::StackFrameOf<Frame_0029d228> frame;  // the original's stack frame
    u32 r0_10 = 0;
    u32 r7 = 0u;
    u32 r2_1 = r0 & 0xf8u;  // (from the original)
    u32 r0_1 = 9u | r0 << 5;
    frame->byte_2 = u8(r7);
    frame->byte_3 = u8(r7);
    frame->byte_4 = u8(r7);
    u32 r1_1 = r7 | r2_1 >> 3;
    frame->byte_5 = u8(r7);
    frame->byte_0 = u8(r0_1);
    frame->byte_6 = u8(r7);
    frame->byte_1 = u8(r1_1);
    u32 r0_2 = query_current_main_object(r0_1, r1_1, r2_1, r3);
    u32 r1_2 = u32(frame->byte_1) & ~0xe0u;  // (from the original)
    u32 r0_3 = r1_2 | r0_2 << 5;
    frame->byte_1 = u8(r0_3);
    u32 r0_4 = main_object_idle(r0_3, r1_2);
    if (r0_4 != 0) {
        u32 r0_5 = global_00953874_address;
        u32 r1 = *gptr<u32>(r0_5);
        if (r1 != 0) {
            u32 r5 = r1 + 0x10u;  // (from the original)
            u32 r6 = frame.at(0).addr();
            u32 r2_3 = u32(frame->byte_0) >> 5;
            u32 r0_6 = r2_3 + (u32(frame->byte_1) << 3) & 0xffu;  // (from the original)
            if (r0_6 < 0x40u) {  // (from the original)
                r5 += r0_6;
            }
            u32 r0_7 = query_current_main_object(r0_6, r1, r2_3, guest::cpu()->r[3]);
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
                r0_5 = station_is_waited_for(r0_10, r1, r2, r3);
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
    u32 r0_11 = send_message(0x40u, 0u, frame.at(0).addr(), 7u);  // (from the original)
    return r0_11;
}

}  // namespace d_0029d228
GUEST_EXPORT_FRAMED(0x0029d228, d_0029d228::f_0029d228, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_0029d354: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0029d354 {

struct __attribute__((packed)) Local_0029d354_r0_3 {
    u8 byte_0;
};
GUEST_OFFSET(Local_0029d354_r0_3, byte_0, 0x0);

inline constexpr u32 global_00953864_address = 0x00953864u;
inline constexpr u32 global_00953874_address = 0x00953874u;
inline guest::global<u32, 0x00953864> global_00953864;
inline guest::global<u32, 0x00953874> global_00953874;
inline constexpr guest::Function<0x00206728, u32(u32, u32, u32)> apply_entry_reload;
inline constexpr guest::Function<0x00305f44, u32(u32, u32, u32, u32)> query_current_main_object;
inline constexpr guest::Function<0x006249b0, u32(u32, u32, u32, u32)> send_message;

struct __attribute__((packed)) Frame_0029d354 {
    u8 byte_0;
    u8 byte_1;
    u8 byte_2;
    u8 byte_3;
    u8 byte_4;
    u8 byte_5;
    u8 byte_6;
    u8 unknown_7[0x1];  // (not read or written by name)
};
GUEST_OFFSET(Frame_0029d354, byte_0, 0x0);
GUEST_OFFSET(Frame_0029d354, byte_1, 0x1);
GUEST_OFFSET(Frame_0029d354, byte_2, 0x2);
GUEST_OFFSET(Frame_0029d354, byte_3, 0x3);
GUEST_OFFSET(Frame_0029d354, byte_4, 0x4);
GUEST_OFFSET(Frame_0029d354, byte_5, 0x5);
GUEST_OFFSET(Frame_0029d354, byte_6, 0x6);
GUEST_SIZE(Frame_0029d354, 0x8);

u32 f_0029d354(u32 r0_unused, u32 r1, u32 r2_unused, u32 r3) {
    guest::StackFrameOf<Frame_0029d354> frame;  // the original's stack frame
    frame->byte_2 = 0;
    frame->byte_4 = 0;
    u32 r2_1 = r1 & 0xf8u;  // (from the original)
    frame->byte_3 = 0;
    frame->byte_5 = 0;
    u32 r1_1 = 7u | r1 << 5;
    frame->byte_6 = 0;
    u32 r0_1 = r2_1 >> 3;
    frame->byte_0 = u8(r1_1);
    frame->byte_1 = u8(r0_1);
    u32 r0_2 = query_current_main_object(r0_1, r1_1, r2_1, r3);
    u32 r1_2 = u32(frame->byte_1) & ~0xe0u;  // (from the original)
    frame->byte_1 = u8(r1_2 | r0_2 << 5);
    gptr<Local_0029d354_r0_3> r0_3 = gptr<Local_0029d354_r0_3>(*global_00953864);
    if (r0_3.addr() != 0) {
        r0_3 = gptr<Local_0029d354_r0_3>(r0_3.addr() + 0x400u);  // (from the original)
        if (r1 < 0x3fu) {  // (from the original)
            r0_3 = gptr<Local_0029d354_r0_3>(r0_3.addr() + r1);
        }
        r1_2 = u32(r0_3->byte_0) | 1u;
        r0_3->byte_0 = u8(r1_2);
    }
    u32 r0_4 = query_current_main_object(r0_3.addr(), r1_2, guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0_4 != 0) {
        u32 r0_5 = send_message(0x40u, 0u, frame.at(0).addr(), 7u);  // (from the original)
        return r0_5;
    }
    u32 r1_4 = *global_00953874;
    if (r1_4 == 0) {
        guest::cpu()->r[1] = r1_4;
        return global_00953874_address;
    }
    u32 r4_1 = r1_4 + 0x10u;  // (from the original)
    u32 r2_4 = u32(frame->byte_0) >> 5;
    u32 r0_6 = r2_4 + (u32(frame->byte_1) << 3) & 0xffu;  // (from the original)
    if (r0_6 < 0x40u) {  // (from the original)
        r4_1 += r0_6;
    }
    u32 r0_7 = query_current_main_object(r0_6, r1_4, r2_4, guest::cpu()->r[3]);
    u32 r0_8 = apply_entry_reload(r4_1, frame.at(0).addr(), r0_7);
    return r0_8;
}

}  // namespace d_0029d354
GUEST_EXPORT_FRAMED(0x0029d354, d_0029d354::f_0029d354, 0x4010);  // pushes {r4, lr} first, as the original

// f_0029e154: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0029e154 {

struct __attribute__((packed)) Local_0029e154_r0_1 {
    u32 word_0;
    u8 unknown_4[0x78];  // (not used here)
    u32 word_7c;
    u8 unknown_80[0x1e0];  // (not used here)
    u32 word_260;
    u8 unknown_264[0xc];  // (not used here)
    u32 word_270;
};
GUEST_OFFSET(Local_0029e154_r0_1, word_0, 0x0);
GUEST_OFFSET(Local_0029e154_r0_1, word_7c, 0x7c);
GUEST_OFFSET(Local_0029e154_r0_1, word_260, 0x260);
GUEST_OFFSET(Local_0029e154_r0_1, word_270, 0x270);

inline constexpr u32 vtable_NpcSpTalkRecept = 0x008f0c00u;
inline constexpr u32 vtable_NpcSpTalkRecept_at_7c = 0x008f0d74u;
inline constexpr guest::Function<0x0023a9dc, u32(u32, u32, u32, u32)> NpcTalkRecept__NpcTalkRecept;

u32 NpcSpTalkRecept__NpcSpTalkRecept(u32 r0, u32 r1, u32 r2, u32 r3) {
    gptr<Local_0029e154_r0_1> r0_1 = gptr<Local_0029e154_r0_1>(NpcTalkRecept__NpcTalkRecept(r0, r1, r2, r3));
    r0_1->word_7c = vtable_NpcSpTalkRecept_at_7c;
    r0_1->word_270 = 0;
    r0_1->word_0 = vtable_NpcSpTalkRecept;
    r0_1->word_260 = r2;
    guest::cpu()->r[1] = vtable_NpcSpTalkRecept_at_7c;
    return r0_1.addr();
}

}  // namespace d_0029e154
GUEST_EXPORT_FRAMED(0x0029e154, d_0029e154::NpcSpTalkRecept__NpcSpTalkRecept, 0x4010);  // pushes {r4, lr} first, as the original

// f_0029e9a8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0029e9a8 {

struct __attribute__((packed)) Object_0029e9a8_0 {
    u8 byte_0;
    u8 unknown_1[0x2];  // (not used here)
    u8 byte_3;
};
GUEST_OFFSET(Object_0029e9a8_0, byte_0, 0x0);
GUEST_OFFSET(Object_0029e9a8_0, byte_3, 0x3);


void f_0029e9a8(gptr<Object_0029e9a8_0> arg0) {
    arg0->byte_0 = u8(u32(arg0->byte_0) & ~0x3cu);  // (from the original)
    u32 r1_1 = u32(arg0->byte_3) & ~0x1cu | 0x10u;  // (from the original)
    arg0->byte_3 = u8(r1_1);
    guest::cpu()->r[1] = r1_1;
}

}  // namespace d_0029e9a8
GUEST_EXPORT(0x0029e9a8, d_0029e9a8::f_0029e9a8);
