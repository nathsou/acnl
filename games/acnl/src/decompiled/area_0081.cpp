// Functions decompiled by tools/decomp (docs/decomp.md), each proved equal to the recompiled original (prove-cpp). The
// names come from games/acnl/names (tools/decomp/names.py); the others are generated (d_<address>::f_<address>,
// Object_<address>_<argument>, word_<offset>) and still to be chosen.
#include "guest/guest.hpp"
#include "recovered/structs.hpp"

#include <bit>

using guest::gptr;

// f_00810aa0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00810aa0 {

struct __attribute__((packed)) Object_00810aa0_0 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
};
GUEST_OFFSET(Object_00810aa0_0, word_0, 0x0);
GUEST_OFFSET(Object_00810aa0_0, word_4, 0x4);
GUEST_OFFSET(Object_00810aa0_0, word_8, 0x8);
GUEST_OFFSET(Object_00810aa0_0, word_c, 0xc);
GUEST_OFFSET(Object_00810aa0_0, word_10, 0x10);

inline constexpr guest::Function<0x00540c1c, u32(u32, u32, u32)> init_array_header;

u32 f_00810aa0(gptr<Object_00810aa0_0> arg0) {
    u32 r0 = arg0.addr();
    u32 res_2 = 0;
    u32 r4 = r0;
    u32 r8 = 0u;
    arg0->word_0 = r8;
    arg0->word_4 = r8;
    arg0->word_8 = r8;
    arg0->word_c = r8;
    u32 res_1 = r4 + 0x14u;  // (from the original)
    u32 r2 = res_1;
    arg0->word_10 = r8;
    r0 = r4;
    u32 r1 = 0x14u;  // (from the original)
    if (res_1 != 0) {
        u32 r12 = 2u;
        u32 r3 = 0u;
        u32 r5 = 0x13u;  // (from the original)
        arg0->word_c = r2;
        do {
            res_2 = r5 - 1u;
            r5 = res_2;
            *gptr<u32>(r2 + (r3 << 2)) = r2 + (r12 + r3 << 2);
            r3 += r12;
            guest::preempt();
        } while (res_2 != 0);
        *gptr<u32>(r2 + (r12 * (r1 - 1u) << 2)) = r8;
        *gptr<u32>(r0 + 0x10u) = r2;  // (from the original)
        init_array_header(r0, r1, r2 + (r1 << 3));
        r1 = guest::cpu()->r[1];
    }
    guest::cpu()->r[1] = r1;
    return r4;
}

}  // namespace d_00810aa0
GUEST_EXPORT_FRAMED(0x00810aa0, d_00810aa0::f_00810aa0, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_00810b1c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00810b1c {

struct __attribute__((packed)) Object_00810b1c_0 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
};
GUEST_OFFSET(Object_00810b1c_0, word_0, 0x0);
GUEST_OFFSET(Object_00810b1c_0, word_4, 0x4);
GUEST_OFFSET(Object_00810b1c_0, word_8, 0x8);
GUEST_OFFSET(Object_00810b1c_0, word_c, 0xc);
GUEST_OFFSET(Object_00810b1c_0, word_10, 0x10);

inline constexpr guest::Function<0x00540c1c, u32(u32, u32, u32)> init_array_header;

u32 f_00810b1c(gptr<Object_00810b1c_0> arg0) {
    u32 r0 = arg0.addr();
    u32 res_2 = 0;
    u32 r4 = r0;
    u32 r8 = 0u;
    arg0->word_0 = r8;
    arg0->word_4 = r8;
    arg0->word_8 = r8;
    arg0->word_c = r8;
    u32 res_1 = r4 + 0x14u;  // (from the original)
    u32 r2 = res_1;
    arg0->word_10 = r8;
    r0 = r4;
    u32 r1 = 0x100u;  // (from the original)
    if (res_1 != 0) {
        u32 r12 = 2u;
        u32 r3 = 0u;
        u32 r5 = 0xffu;  // (from the original)
        arg0->word_c = r2;
        do {
            res_2 = r5 - 1u;
            r5 = res_2;
            *gptr<u32>(r2 + (r3 << 2)) = r2 + (r12 + r3 << 2);
            r3 += r12;
            guest::preempt();
        } while (res_2 != 0);
        *gptr<u32>(r2 + (r12 * (r1 - 1u) << 2)) = r8;
        *gptr<u32>(r0 + 0x10u) = r2;  // (from the original)
        init_array_header(r0, r1, r2 + (r1 << 3));
        r1 = guest::cpu()->r[1];
    }
    guest::cpu()->r[1] = r1;
    return r4;
}

}  // namespace d_00810b1c
GUEST_EXPORT_FRAMED(0x00810b1c, d_00810b1c::f_00810b1c, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_00810b98: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00810b98 {

struct __attribute__((packed)) Object_00810b98_0 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
};
GUEST_OFFSET(Object_00810b98_0, word_0, 0x0);
GUEST_OFFSET(Object_00810b98_0, word_4, 0x4);
GUEST_OFFSET(Object_00810b98_0, word_8, 0x8);
GUEST_OFFSET(Object_00810b98_0, word_c, 0xc);
GUEST_OFFSET(Object_00810b98_0, word_10, 0x10);

inline constexpr guest::Function<0x00540c1c, u32(u32, u32, u32)> init_array_header;

void f_00810b98(gptr<Object_00810b98_0> arg0) {
    u32 r0 = arg0.addr();
    u32 res_2 = 0;
    u32 r8 = 0u;
    arg0->word_0 = r8;
    arg0->word_4 = r8;
    arg0->word_8 = r8;
    arg0->word_c = r8;
    u32 res_1 = r0 + 0x14u;  // (from the original)
    u32 r2 = res_1;
    arg0->word_10 = r8;
    r0 = r0;
    u32 r1 = 0x32u;  // (from the original)
    if (res_1 != 0) {
        u32 r12 = 2u;
        u32 r3 = 0u;
        u32 r5 = 0x31u;  // (from the original)
        arg0->word_c = r2;
        do {
            res_2 = r5 - 1u;
            r5 = res_2;
            *gptr<u32>(r2 + (r3 << 2)) = r2 + (r12 + r3 << 2);
            r3 += r12;
            guest::preempt();
        } while (res_2 != 0);
        *gptr<u32>(r2 + (r12 * (r1 - 1u) << 2)) = r8;
        *gptr<u32>(r0 + 0x10u) = r2;  // (from the original)
        init_array_header(r0, r1, r2 + (r1 << 3));
        r1 = guest::cpu()->r[1];
    }
    guest::cpu()->r[1] = r1;
}

}  // namespace d_00810b98
GUEST_EXPORT_FRAMED(0x00810b98, d_00810b98::f_00810b98, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_00810c14: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00810c14 {

struct __attribute__((packed)) Object_00810c14_0 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
};
GUEST_OFFSET(Object_00810c14_0, word_0, 0x0);
GUEST_OFFSET(Object_00810c14_0, word_4, 0x4);
GUEST_OFFSET(Object_00810c14_0, word_8, 0x8);
GUEST_OFFSET(Object_00810c14_0, word_c, 0xc);
GUEST_OFFSET(Object_00810c14_0, word_10, 0x10);

inline constexpr guest::Function<0x00540c1c, u32(u32, u32, u32)> init_array_header;

u32 f_00810c14(gptr<Object_00810c14_0> arg0) {
    u32 r0 = arg0.addr();
    u32 res_2 = 0;
    u32 r4 = r0;
    u32 r8 = 0u;
    arg0->word_0 = r8;
    arg0->word_4 = r8;
    arg0->word_8 = r8;
    arg0->word_c = r8;
    u32 res_1 = r4 + 0x14u;  // (from the original)
    u32 r6 = res_1;
    arg0->word_10 = r8;
    r0 = r4;
    u32 r1 = 0xau;  // (from the original)
    if (res_1 != 0) {
        u32 r2 = r6;
        u32 r12 = 0x1eu;  // (from the original)
        u32 r3 = 0u;
        u32 r5 = 9u;
        arg0->word_c = r6;
        do {
            res_2 = r5 - 1u;
            r5 = res_2;
            *gptr<u32>(r2 + (r3 << 2)) = r2 + (r12 + r3 << 2);
            r3 += r12;
            guest::preempt();
        } while (res_2 != 0);
        *gptr<u32>(r2 + (r12 * (r1 - 1u) << 2)) = r8;
        *gptr<u32>(r0 + 0x10u) = r6;  // (from the original)
        init_array_header(r0, r1, r1 * 0x78u + r6);  // (from the original)
        r1 = guest::cpu()->r[1];
    }
    guest::cpu()->r[1] = r1;
    return r4;
}

}  // namespace d_00810c14
GUEST_EXPORT_FRAMED(0x00810c14, d_00810c14::f_00810c14, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_00810ccc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00810ccc {

inline constexpr u32 vtable_sead__FixedSafeString_17_ = 0x00904888u;
inline constexpr u32 vtable_sead__FixedSafeStringBase_char__17_ = 0x009050d0u;
inline constexpr u32 vtable_sead__BufferedSafeStringBase_char_ = 0x0090558cu;
inline guest::global<u8, 0x008c9f1c> empty_string;

void sead__BufferedSafeStringBase_char___BufferedSafeStringBase_00810ccc(gptr<sead__FixedSafeString_17_> fixed_safe_string) {
    fixed_safe_string->word_4 = fixed_safe_string.addr() + 0xcu;  // (from the original)
    fixed_safe_string->word_0 = vtable_sead__BufferedSafeStringBase_char_;
    fixed_safe_string->word_8 = 0x11;  // (from the original)
    *gptr<u8>(fixed_safe_string->word_4 + 0x10u) = *empty_string;  // (from the original)
    fixed_safe_string->word_0 = vtable_sead__FixedSafeStringBase_char__17_;
    *gptr<u8>(fixed_safe_string->word_4) = *empty_string;
    fixed_safe_string->word_0 = vtable_sead__FixedSafeString_17_;
    guest::cpu()->r[1] = vtable_sead__FixedSafeString_17_;
}

}  // namespace d_00810ccc
GUEST_EXPORT(0x00810ccc, d_00810ccc::sead__BufferedSafeStringBase_char___BufferedSafeStringBase_00810ccc);

// f_00811a38: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00811a38 {

struct __attribute__((packed)) Local_00811a38_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Local_00811a38_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_00811a38_ea_1, word_4, 0x4);
GUEST_OFFSET(Local_00811a38_ea_1, word_8, 0x8);
GUEST_OFFSET(Local_00811a38_ea_1, word_c, 0xc);

struct __attribute__((packed)) Local_00811a38_ea_2 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_00811a38_ea_2, word_0, 0x0);
GUEST_OFFSET(Local_00811a38_ea_2, word_4, 0x4);

inline constexpr u32 vtable_sead__FixedSafeStringBase_char__128_ = 0x009050bcu;
inline constexpr u32 vtable_sead__FormatFixedSafeString_128_ = 0x009054b0u;
inline constexpr u32 vtable_sead__BufferedSafeStringBase_char_ = 0x0090558cu;
inline guest::global<u8, 0x008c9f1c> empty_string;
inline constexpr guest::Function<0x0054af38, u32(u32, u32, u32)> call_0054af38;

struct __attribute__((packed)) Frame_00811a38 {
    u32 word_0;
    u32 word_4;
    u8 unknown_8[0x4];  // (not read or written by name)
    u32 word_c;
    u8 unknown_10[0x8];  // (not read or written by name)
};
GUEST_OFFSET(Frame_00811a38, word_0, 0x0);
GUEST_OFFSET(Frame_00811a38, word_4, 0x4);
GUEST_OFFSET(Frame_00811a38, word_c, 0xc);
GUEST_SIZE(Frame_00811a38, 0x18);

u32 sead__BufferedSafeStringBase_char___BufferedSafeStringBase_00811a38(gptr<sead__FormatFixedSafeString_128_> format_fixed_safe_string, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_00811a38> frame;  // the original's stack frame
    u32 r4 = guest::cpu()->r[4];
    u32 r14 = guest::cpu()->r[14];
    gptr<Local_00811a38_ea_1> ea_1 = gptr<Local_00811a38_ea_1>(frame.at(8).addr());
    ea_1->word_0 = format_fixed_safe_string.addr();
    ea_1->word_4 = r1;
    ea_1->word_8 = r2;
    ea_1->word_c = r3;
    gptr<Local_00811a38_ea_2> ea_2 = gptr<Local_00811a38_ea_2>(frame.at(0).addr());
    ea_2->word_0 = r4;
    ea_2->word_4 = r14;
    format_fixed_safe_string->word_4 = format_fixed_safe_string.addr() + 0xcu;  // (from the original)
    format_fixed_safe_string->word_0 = vtable_sead__BufferedSafeStringBase_char_;
    format_fixed_safe_string->word_8 = 0x80;  // (from the original)
    *gptr<u8>(format_fixed_safe_string->word_4 + 0x7fu) = *empty_string;  // (from the original)
    format_fixed_safe_string->word_0 = vtable_sead__FixedSafeStringBase_char__128_;
    u32 r1_1 = *empty_string;
    *gptr<u8>(format_fixed_safe_string->word_4) = u8(r1_1);
    format_fixed_safe_string->word_0 = vtable_sead__FormatFixedSafeString_128_;
    call_0054af38(format_fixed_safe_string.addr(), frame->word_c, frame.at(0x10).addr());  // (from the original)
    u32 v_1 = frame->word_0;
    u32 v_2 = frame->word_4;
    guest::cpu()->r[4] = v_1;
    return format_fixed_safe_string.addr();
}

}  // namespace d_00811a38
GUEST_EXPORT(0x00811a38, d_00811a38::sead__BufferedSafeStringBase_char___BufferedSafeStringBase_00811a38);

// f_00811ab8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00811ab8 {

struct __attribute__((packed)) Local_00811ab8_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Local_00811ab8_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_00811ab8_ea_1, word_4, 0x4);
GUEST_OFFSET(Local_00811ab8_ea_1, word_8, 0x8);
GUEST_OFFSET(Local_00811ab8_ea_1, word_c, 0xc);

struct __attribute__((packed)) Local_00811ab8_ea_2 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_00811ab8_ea_2, word_0, 0x0);
GUEST_OFFSET(Local_00811ab8_ea_2, word_4, 0x4);

inline constexpr u32 vtable_sead__FixedSafeStringBase_char__32_ = 0x00905120u;
inline constexpr u32 vtable_sead__FormatFixedSafeString_32_ = 0x009054c4u;
inline constexpr u32 vtable_sead__BufferedSafeStringBase_char_ = 0x0090558cu;
inline guest::global<u8, 0x008c9f1c> empty_string;
inline constexpr guest::Function<0x0054af38, u32(u32, u32, u32)> call_0054af38;

struct __attribute__((packed)) Frame_00811ab8 {
    u32 word_0;
    u32 word_4;
    u8 unknown_8[0x4];  // (not read or written by name)
    u32 word_c;
    u8 unknown_10[0x8];  // (not read or written by name)
};
GUEST_OFFSET(Frame_00811ab8, word_0, 0x0);
GUEST_OFFSET(Frame_00811ab8, word_4, 0x4);
GUEST_OFFSET(Frame_00811ab8, word_c, 0xc);
GUEST_SIZE(Frame_00811ab8, 0x18);

void sead__BufferedSafeStringBase_char___BufferedSafeStringBase_00811ab8(gptr<sead__FormatFixedSafeString_32_> format_fixed_safe_string, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_00811ab8> frame;  // the original's stack frame
    u32 r4 = guest::cpu()->r[4];
    u32 r14 = guest::cpu()->r[14];
    gptr<Local_00811ab8_ea_1> ea_1 = gptr<Local_00811ab8_ea_1>(frame.at(8).addr());
    ea_1->word_0 = format_fixed_safe_string.addr();
    ea_1->word_4 = r1;
    ea_1->word_8 = r2;
    ea_1->word_c = r3;
    gptr<Local_00811ab8_ea_2> ea_2 = gptr<Local_00811ab8_ea_2>(frame.at(0).addr());
    ea_2->word_0 = r4;
    ea_2->word_4 = r14;
    format_fixed_safe_string->word_4 = format_fixed_safe_string.addr() + 0xcu;  // (from the original)
    format_fixed_safe_string->word_0 = vtable_sead__BufferedSafeStringBase_char_;
    format_fixed_safe_string->word_8 = 0x20;  // (from the original)
    *gptr<u8>(format_fixed_safe_string->word_4 + 0x1fu) = *empty_string;  // (from the original)
    format_fixed_safe_string->word_0 = vtable_sead__FixedSafeStringBase_char__32_;
    u32 r1_1 = *empty_string;
    *gptr<u8>(format_fixed_safe_string->word_4) = u8(r1_1);
    format_fixed_safe_string->word_0 = vtable_sead__FormatFixedSafeString_32_;
    call_0054af38(format_fixed_safe_string.addr(), frame->word_c, frame.at(0x10).addr());  // (from the original)
    u32 v_1 = frame->word_0;
    u32 v_2 = frame->word_4;
    guest::cpu()->r[4] = v_1;
}

}  // namespace d_00811ab8
GUEST_EXPORT(0x00811ab8, d_00811ab8::sead__BufferedSafeStringBase_char___BufferedSafeStringBase_00811ab8);

// f_00811b38: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00811b38 {

struct __attribute__((packed)) Local_00811b38_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Local_00811b38_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_00811b38_ea_1, word_4, 0x4);
GUEST_OFFSET(Local_00811b38_ea_1, word_8, 0x8);
GUEST_OFFSET(Local_00811b38_ea_1, word_c, 0xc);

struct __attribute__((packed)) Local_00811b38_ea_2 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_00811b38_ea_2, word_0, 0x0);
GUEST_OFFSET(Local_00811b38_ea_2, word_4, 0x4);

inline constexpr u32 vtable_sead__FixedSafeStringBase_char__64_ = 0x00905170u;
inline constexpr u32 vtable_sead__FormatFixedSafeString_64_ = 0x009054d8u;
inline constexpr u32 vtable_sead__BufferedSafeStringBase_char_ = 0x0090558cu;
inline guest::global<u8, 0x008c9f1c> empty_string;
inline constexpr guest::Function<0x0054af38, u32(u32, u32, u32)> call_0054af38;

struct __attribute__((packed)) Frame_00811b38 {
    u32 word_0;
    u32 word_4;
    u8 unknown_8[0x4];  // (not read or written by name)
    u32 word_c;
    u8 unknown_10[0x8];  // (not read or written by name)
};
GUEST_OFFSET(Frame_00811b38, word_0, 0x0);
GUEST_OFFSET(Frame_00811b38, word_4, 0x4);
GUEST_OFFSET(Frame_00811b38, word_c, 0xc);
GUEST_SIZE(Frame_00811b38, 0x18);

void sead__BufferedSafeStringBase_char___BufferedSafeStringBase_00811b38(gptr<sead__FormatFixedSafeString_64_> format_fixed_safe_string, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_00811b38> frame;  // the original's stack frame
    u32 r4 = guest::cpu()->r[4];
    u32 r14 = guest::cpu()->r[14];
    gptr<Local_00811b38_ea_1> ea_1 = gptr<Local_00811b38_ea_1>(frame.at(8).addr());
    ea_1->word_0 = format_fixed_safe_string.addr();
    ea_1->word_4 = r1;
    ea_1->word_8 = r2;
    ea_1->word_c = r3;
    gptr<Local_00811b38_ea_2> ea_2 = gptr<Local_00811b38_ea_2>(frame.at(0).addr());
    ea_2->word_0 = r4;
    ea_2->word_4 = r14;
    format_fixed_safe_string->word_4 = format_fixed_safe_string.addr() + 0xcu;  // (from the original)
    format_fixed_safe_string->word_0 = vtable_sead__BufferedSafeStringBase_char_;
    format_fixed_safe_string->word_8 = 0x40;  // (from the original)
    *gptr<u8>(format_fixed_safe_string->word_4 + 0x3fu) = *empty_string;  // (from the original)
    format_fixed_safe_string->word_0 = vtable_sead__FixedSafeStringBase_char__64_;
    u32 r1_1 = *empty_string;
    *gptr<u8>(format_fixed_safe_string->word_4) = u8(r1_1);
    format_fixed_safe_string->word_0 = vtable_sead__FormatFixedSafeString_64_;
    call_0054af38(format_fixed_safe_string.addr(), frame->word_c, frame.at(0x10).addr());  // (from the original)
    u32 v_1 = frame->word_0;
    u32 v_2 = frame->word_4;
    guest::cpu()->r[4] = v_1;
}

}  // namespace d_00811b38
GUEST_EXPORT(0x00811b38, d_00811b38::sead__BufferedSafeStringBase_char___BufferedSafeStringBase_00811b38);

// f_00811bb8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00811bb8 {

struct __attribute__((packed)) Local_00811bb8_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Local_00811bb8_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_00811bb8_ea_1, word_4, 0x4);
GUEST_OFFSET(Local_00811bb8_ea_1, word_8, 0x8);
GUEST_OFFSET(Local_00811bb8_ea_1, word_c, 0xc);

struct __attribute__((packed)) Local_00811bb8_ea_2 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_00811bb8_ea_2, word_0, 0x0);
GUEST_OFFSET(Local_00811bb8_ea_2, word_4, 0x4);

inline constexpr u32 vtable_sead__FixedSafeStringBase_char__6_ = 0x00905184u;
inline constexpr u32 vtable_sead__FormatFixedSafeString_6_ = 0x009054ecu;
inline constexpr u32 vtable_sead__BufferedSafeStringBase_char_ = 0x0090558cu;
inline guest::global<u8, 0x008c9f1c> empty_string;
inline constexpr guest::Function<0x0054af38, u32(u32, u32, u32)> call_0054af38;

struct __attribute__((packed)) Frame_00811bb8 {
    u32 word_0;
    u32 word_4;
    u8 unknown_8[0x4];  // (not read or written by name)
    u32 word_c;
    u8 unknown_10[0x8];  // (not read or written by name)
};
GUEST_OFFSET(Frame_00811bb8, word_0, 0x0);
GUEST_OFFSET(Frame_00811bb8, word_4, 0x4);
GUEST_OFFSET(Frame_00811bb8, word_c, 0xc);
GUEST_SIZE(Frame_00811bb8, 0x18);

void sead__BufferedSafeStringBase_char___BufferedSafeStringBase_00811bb8(gptr<sead__FormatFixedSafeString_6_> format_fixed_safe_string, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_00811bb8> frame;  // the original's stack frame
    u32 r4 = guest::cpu()->r[4];
    u32 r14 = guest::cpu()->r[14];
    gptr<Local_00811bb8_ea_1> ea_1 = gptr<Local_00811bb8_ea_1>(frame.at(8).addr());
    ea_1->word_0 = format_fixed_safe_string.addr();
    ea_1->word_4 = r1;
    ea_1->word_8 = r2;
    ea_1->word_c = r3;
    gptr<Local_00811bb8_ea_2> ea_2 = gptr<Local_00811bb8_ea_2>(frame.at(0).addr());
    ea_2->word_0 = r4;
    ea_2->word_4 = r14;
    format_fixed_safe_string->word_4 = format_fixed_safe_string.addr() + 0xcu;  // (from the original)
    format_fixed_safe_string->word_0 = vtable_sead__BufferedSafeStringBase_char_;
    format_fixed_safe_string->word_8 = 6;
    *gptr<u8>(format_fixed_safe_string->word_4 + 5u) = *empty_string;
    format_fixed_safe_string->word_0 = vtable_sead__FixedSafeStringBase_char__6_;
    u32 r1_1 = *empty_string;
    *gptr<u8>(format_fixed_safe_string->word_4) = u8(r1_1);
    format_fixed_safe_string->word_0 = vtable_sead__FormatFixedSafeString_6_;
    call_0054af38(format_fixed_safe_string.addr(), frame->word_c, frame.at(0x10).addr());  // (from the original)
    u32 v_1 = frame->word_0;
    u32 v_2 = frame->word_4;
    guest::cpu()->r[4] = v_1;
}

}  // namespace d_00811bb8
GUEST_EXPORT(0x00811bb8, d_00811bb8::sead__BufferedSafeStringBase_char___BufferedSafeStringBase_00811bb8);

// f_00812698: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00812698 {

struct __attribute__((packed)) Object_00812698_0 {
    u8 unknown_0[0x3];  // (not used here)
    u8 byte_3;
};
GUEST_OFFSET(Object_00812698_0, byte_3, 0x3);

struct __attribute__((packed)) Object_00812698_1 {
    float float_0;
    float float_4;
};
GUEST_OFFSET(Object_00812698_1, float_0, 0x0);
GUEST_OFFSET(Object_00812698_1, float_4, 0x4);

struct __attribute__((packed)) Local_00812698_r0_2 {
    float float_0;
    float float_4;
};
GUEST_OFFSET(Local_00812698_r0_2, float_0, 0x0);
GUEST_OFFSET(Local_00812698_r0_2, float_4, 0x4);

struct __attribute__((packed)) Local_00812698_r0_3 {
    float float_0;
    float float_4;
    float float_8;
    float float_c;
};
GUEST_OFFSET(Local_00812698_r0_3, float_0, 0x0);
GUEST_OFFSET(Local_00812698_r0_3, float_4, 0x4);
GUEST_OFFSET(Local_00812698_r0_3, float_8, 0x8);
GUEST_OFFSET(Local_00812698_r0_3, float_c, 0xc);

struct __attribute__((packed)) Local_00812698_r0_4 {
    float float_0;
    float float_4;
};
GUEST_OFFSET(Local_00812698_r0_4, float_0, 0x0);
GUEST_OFFSET(Local_00812698_r0_4, float_4, 0x4);


u32 f_00812698(gptr<Object_00812698_0> arg0, gptr<Object_00812698_1> arg1, float S0) {
    u32 r0 = arg0.addr();
    u32 r1 = arg1.addr();
    u32 fpsr = guest::cpu()->fpscr;
    float S1_3 = 0;
    float S1_1 = arg1->float_0;
    u32 r2 = u32(s16(u32(arg0->byte_3)) * s16(0xabu)) >> 9;  // (from the original)
    u32 r0_1 = (r2 - 1u) * 3u;
    if (S1_1 >= S0) {
        float S0_1 = arg1->float_4;
        guest::cpu()->s[0] = S0_1;
        guest::cpu()->s[1] = S1_1;
        return r0_1;
    }
    gptr<Local_00812698_r0_2> r0_2 = gptr<Local_00812698_r0_2>(r1 + (r0_1 << 2));
    float S1_2 = r0_2->float_0;
    fpsr = (fpsr & 0xfffffffu | vfp_cmpf(S1_1, S0)) & 0xfffffffu | vfp_cmpf(S1_2, S0);  // (from the original)
    if (!(fpsr >> 0x1d & 1) || fpsr >> 0x1e & 1) {  // (from the original)
        float S0_2 = r0_2->float_4;
        guest::cpu()->s[0] = S0_2;
        guest::cpu()->s[1] = S1_2;
        return r0_2.addr();
    }
    r0 = 0u;
    if (s32(r2) <= 0) {
        float S0_3 = 0.0f;
        guest::cpu()->s[0] = S0_3;
        guest::cpu()->s[1] = S1_2;
        return r0;
    }
    do {
        u32 r3_1 = r0 * 3u;
        S1_3 = std::bit_cast<float>(*gptr<u32>(r1 + (r3_1 << 2) + 0xcu));  // (from the original)
        fpsr = fpsr & 0xfffffffu | vfp_cmpf(S1_3, S0);  // (from the original)
        if (!(fpsr >> 0x1e & 1) && fpsr >> 0x1f == (fpsr >> 0x1c & 1)) {  // (from the original)
            gptr<Local_00812698_r0_3> r0_3 = gptr<Local_00812698_r0_3>(r1 + (r3_1 << 2));
            float S1_4 = r0_3->float_0;
            float S4_1 = r0_3->float_c - S1_4;
            float S9_1 = r0_3->float_4;
            float S5_1 = r0_3->float_8;
            gptr<Local_00812698_r0_4> r0_4 = gptr<Local_00812698_r0_4>(r0_3.addr() + 0x10u);  // (from the original)
            float S0_4 = (S0 - S1_4) / S4_1;
            float S4_2 = S0_4 * 2.0f;
            float S3_1 = S0_4 * 3.0f;
            float S1_5 = S0_4 * S0_4 * S0_4;
            float S1_6 = S1_5 - S0_4 * S0_4;
            float S0_5 = S9_1 * (S4_2 * S0_4 * S0_4 - S3_1 * S0_4 + 1.0f) + r0_4->float_0 * (S0_4 * -2.0f * S0_4 * S0_4 + S3_1 * S0_4) + S5_1 * (S1_5 - S4_2 * S0_4 + S0_4) + r0_4->float_4 * S1_6;
            guest::cpu()->s[0] = S0_5;
            guest::cpu()->s[1] = S1_6;
            return r0_4.addr();
        }
        r0 += 1u;
        guest::preempt();
    } while (s32(r2) > s32(r0));
    float S0_6 = 0.0f;
    guest::cpu()->s[0] = S0_6;
    guest::cpu()->s[1] = S1_3;
    return r0;
}

}  // namespace d_00812698
GUEST_EXPORT(0x00812698, d_00812698::f_00812698);

// f_00812ae8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00812ae8 {

struct __attribute__((packed)) Object_00812ae8_0 {
    u8 unknown_0[0x3];  // (not used here)
    u8 byte_3;
};
GUEST_OFFSET(Object_00812ae8_0, byte_3, 0x3);

struct __attribute__((packed)) Object_00812ae8_1 {
    float float_0;
    float float_4;
};
GUEST_OFFSET(Object_00812ae8_1, float_0, 0x0);
GUEST_OFFSET(Object_00812ae8_1, float_4, 0x4);

struct __attribute__((packed)) Local_00812ae8_r0_2 {
    float float_0;
    float float_4;
};
GUEST_OFFSET(Local_00812ae8_r0_2, float_0, 0x0);
GUEST_OFFSET(Local_00812ae8_r0_2, float_4, 0x4);

struct __attribute__((packed)) Local_00812ae8_r0_3 {
    float float_0;
    float float_4;
    float float_8;
    float float_c;
    float float_10;
    float float_14;
};
GUEST_OFFSET(Local_00812ae8_r0_3, float_0, 0x0);
GUEST_OFFSET(Local_00812ae8_r0_3, float_4, 0x4);
GUEST_OFFSET(Local_00812ae8_r0_3, float_8, 0x8);
GUEST_OFFSET(Local_00812ae8_r0_3, float_c, 0xc);
GUEST_OFFSET(Local_00812ae8_r0_3, float_10, 0x10);
GUEST_OFFSET(Local_00812ae8_r0_3, float_14, 0x14);


u32 f_00812ae8(gptr<Object_00812ae8_0> arg0, gptr<Object_00812ae8_1> arg1, float S0) {
    u32 r0 = arg0.addr();
    u32 r1 = arg1.addr();
    u32 fpsr = guest::cpu()->fpscr;
    float S1_3 = 0;
    float S1_1 = arg1->float_0;
    u32 r2 = u32(s16(u32(arg0->byte_3)) * s16(0xabu)) >> 9;  // (from the original)
    u32 r0_1 = (r2 - 1u) * 3u;
    if (S1_1 >= S0) {
        float S0_1 = arg1->float_4;
        guest::cpu()->s[0] = S0_1;
        guest::cpu()->s[1] = S1_1;
        return r0_1;
    }
    gptr<Local_00812ae8_r0_2> r0_2 = gptr<Local_00812ae8_r0_2>(r1 + (r0_1 << 2));
    float S1_2 = r0_2->float_0;
    fpsr = (fpsr & 0xfffffffu | vfp_cmpf(S1_1, S0)) & 0xfffffffu | vfp_cmpf(S1_2, S0);  // (from the original)
    if (!(fpsr >> 0x1d & 1) || fpsr >> 0x1e & 1) {  // (from the original)
        float S0_2 = r0_2->float_4;
        guest::cpu()->s[0] = S0_2;
        guest::cpu()->s[1] = S1_2;
        return r0_2.addr();
    }
    r0 = 0u;
    if (s32(r2) <= 0) {
        float S0_3 = 0.0f;
        guest::cpu()->s[0] = S0_3;
        guest::cpu()->s[1] = S1_2;
        return r0;
    }
    do {
        u32 r3_1 = r0 * 3u;
        S1_3 = std::bit_cast<float>(*gptr<u32>(r1 + (r3_1 << 2) + 0xcu));  // (from the original)
        fpsr = fpsr & 0xfffffffu | vfp_cmpf(S1_3, S0);  // (from the original)
        if (!(fpsr >> 0x1e & 1) && fpsr >> 0x1f == (fpsr >> 0x1c & 1)) {  // (from the original)
            gptr<Local_00812ae8_r0_3> r0_3 = gptr<Local_00812ae8_r0_3>(r1 + (r3_1 << 2));
            float S2_1 = r0_3->float_0;
            float S1_4 = r0_3->float_c - S2_1;
            float S0_4 = (S0 - S2_1) / S1_4;
            float S5_1 = S0_4 * 2.0f;
            float S4_1 = S0_4 * 3.0f;
            float S3_1 = S0_4 * S0_4 * S0_4;
            float S12_1 = S3_1 - S5_1 * S0_4;
            float S3_2 = (S3_1 - S0_4 * S0_4) * S1_4;
            float S1_5 = (S12_1 + S0_4) * S1_4;
            float S0_5 = r0_3->float_4 * (S5_1 * S0_4 * S0_4 - S4_1 * S0_4 + 1.0f) + r0_3->float_10 * (S0_4 * -2.0f * S0_4 * S0_4 + S4_1 * S0_4) + r0_3->float_8 * S1_5 + r0_3->float_14 * S3_2;
            guest::cpu()->s[0] = S0_5;
            guest::cpu()->s[1] = S1_5;
            return r0_3.addr();
        }
        r0 += 1u;
        guest::preempt();
    } while (s32(r2) > s32(r0));
    float S0_6 = 0.0f;
    guest::cpu()->s[0] = S0_6;
    guest::cpu()->s[1] = S1_3;
    return r0;
}

}  // namespace d_00812ae8
GUEST_EXPORT(0x00812ae8, d_00812ae8::f_00812ae8);

// f_00813340: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00813340 {

struct __attribute__((packed)) Object_00813340_0 {
    float float_0;
    float float_4;
    float float_8;
    float float_c;
    float float_10;
    float float_14;
    float float_18;
    float float_1c;
    float float_20;
    float float_24;
    float float_28;
    float float_2c;
};
GUEST_OFFSET(Object_00813340_0, float_0, 0x0);
GUEST_OFFSET(Object_00813340_0, float_4, 0x4);
GUEST_OFFSET(Object_00813340_0, float_8, 0x8);
GUEST_OFFSET(Object_00813340_0, float_c, 0xc);
GUEST_OFFSET(Object_00813340_0, float_10, 0x10);
GUEST_OFFSET(Object_00813340_0, float_14, 0x14);
GUEST_OFFSET(Object_00813340_0, float_18, 0x18);
GUEST_OFFSET(Object_00813340_0, float_1c, 0x1c);
GUEST_OFFSET(Object_00813340_0, float_20, 0x20);
GUEST_OFFSET(Object_00813340_0, float_24, 0x24);
GUEST_OFFSET(Object_00813340_0, float_28, 0x28);
GUEST_OFFSET(Object_00813340_0, float_2c, 0x2c);


void f_00813340(gptr<Object_00813340_0> arg0, float S0, float S1, float S2) {
    arg0->float_c = S0;
    float S4_1 = 1.0f;
    arg0->float_1c = S1;
    float S3_1 = 0.0f;
    arg0->float_2c = S2;
    arg0->float_0 = S4_1;
    arg0->float_4 = S3_1;
    arg0->float_8 = S3_1;
    arg0->float_10 = S3_1;
    arg0->float_14 = S4_1;
    arg0->float_18 = S3_1;
    arg0->float_20 = S3_1;
    arg0->float_24 = S3_1;
    arg0->float_28 = S4_1;
}

}  // namespace d_00813340
GUEST_EXPORT(0x00813340, d_00813340::f_00813340);

// f_00813384: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00813384 {

struct __attribute__((packed)) Object_00813384_0 {
    u32 word_0;
    float float_4;
    float float_8;
    u32 word_c;
    float float_10;
    u32 word_14;
    float float_18;
    u32 word_1c;
    float float_20;
    float float_24;
    u32 word_28;
    u32 word_2c;
};
GUEST_OFFSET(Object_00813384_0, word_0, 0x0);
GUEST_OFFSET(Object_00813384_0, float_4, 0x4);
GUEST_OFFSET(Object_00813384_0, float_8, 0x8);
GUEST_OFFSET(Object_00813384_0, word_c, 0xc);
GUEST_OFFSET(Object_00813384_0, float_10, 0x10);
GUEST_OFFSET(Object_00813384_0, word_14, 0x14);
GUEST_OFFSET(Object_00813384_0, float_18, 0x18);
GUEST_OFFSET(Object_00813384_0, word_1c, 0x1c);
GUEST_OFFSET(Object_00813384_0, float_20, 0x20);
GUEST_OFFSET(Object_00813384_0, float_24, 0x24);
GUEST_OFFSET(Object_00813384_0, word_28, 0x28);
GUEST_OFFSET(Object_00813384_0, word_2c, 0x2c);

struct __attribute__((packed)) Object_00813384_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Object_00813384_1, word_0, 0x0);
GUEST_OFFSET(Object_00813384_1, word_4, 0x4);
GUEST_OFFSET(Object_00813384_1, word_8, 0x8);

struct __attribute__((packed)) Object_00813384_2 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Object_00813384_2, word_0, 0x0);
GUEST_OFFSET(Object_00813384_2, word_4, 0x4);
GUEST_OFFSET(Object_00813384_2, word_8, 0x8);


void f_00813384(gptr<Object_00813384_0> arg0, gptr<Object_00813384_1> arg1, gptr<Object_00813384_2> arg2) {
    float S0_1 = 0.0f;
    arg0->word_0 = arg1->word_0;
    arg0->float_10 = S0_1;
    arg0->float_20 = S0_1;
    arg0->float_4 = S0_1;
    arg0->word_14 = arg1->word_4;
    arg0->float_24 = S0_1;
    arg0->float_8 = S0_1;
    arg0->float_18 = S0_1;
    arg0->word_28 = arg1->word_8;
    arg0->word_c = arg2->word_0;
    arg0->word_1c = arg2->word_4;
    arg0->word_2c = arg2->word_8;
    guest::cpu()->s[0] = S0_1;
}

}  // namespace d_00813384
GUEST_EXPORT(0x00813384, d_00813384::f_00813384);

// f_008133d8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_008133d8 {

struct __attribute__((packed)) Object_008133d8_0 {
    float float_0;
    float float_4;
    float float_8;
    float float_c;
};
GUEST_OFFSET(Object_008133d8_0, float_0, 0x0);
GUEST_OFFSET(Object_008133d8_0, float_4, 0x4);
GUEST_OFFSET(Object_008133d8_0, float_8, 0x8);
GUEST_OFFSET(Object_008133d8_0, float_c, 0xc);


void f_008133d8(gptr<Object_008133d8_0> arg0, float S0, float S1, float S2, float S3) {
    u32 fpsr = guest::cpu()->fpscr;
    if (!(S0 < S2)) {
        arg0->float_0 = S2;
        arg0->float_8 = S0;
    } else {
        arg0->float_0 = S0;
        arg0->float_8 = S2;
    }
    if (((fpsr & 0xfffffffu | vfp_cmpf(S0, S2)) & 0xfffffffu | vfp_cmpf(S1, S3)) >> 0x1d & 1) {  // (from the original)
        arg0->float_4 = S3;
        arg0->float_c = S1;
    } else {
        arg0->float_4 = S1;
        arg0->float_c = S3;
    }
}

}  // namespace d_008133d8
GUEST_EXPORT(0x008133d8, d_008133d8::f_008133d8);

// f_0081360c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0081360c {

struct __attribute__((packed)) Local_0081360c_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0081360c_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_0081360c_ea_1, word_4, 0x4);


u32 f_0081360c(u32 r0_unused, u32 r1_unused, u32 r2) {
    u32 r13 = guest::cpu()->r[13];
    gptr<Local_0081360c_ea_1> ea_1 = gptr<Local_0081360c_ea_1>(r13);
    r13 += 8;
    u32 r4_1 = ea_1->word_0;
    u32 r5_1 = ea_1->word_4;
    guest::cpu()->r[13] = r13;
    guest::cpu()->r[4] = r4_1;
    guest::cpu()->r[5] = r5_1;
    return guest::call_address<u32>(r2, guest::cpu()->r[0], guest::cpu()->r[1], r2, guest::cpu()->r[3]);
}

}  // namespace d_0081360c
GUEST_EXPORT(0x0081360c, d_0081360c::f_0081360c);

// f_00813d2c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00813d2c {

struct __attribute__((packed)) Local_00813d2c_r0_1 {
    u8 byte_0;
};
GUEST_OFFSET(Local_00813d2c_r0_1, byte_0, 0x0);


u32 f_00813d2c(u32 r0, u32 r1, u32 r2) {
    u32 r1_2 = 0;
    u32 r2_1 = 1u << (r1 & 7u);
    gptr<Local_00813d2c_r0_1> r0_1 = gptr<Local_00813d2c_r0_1>(r0 + (r1 >> 3));
    if (r2 != 0) {
        if (r1 < 0x60u) {  // (from the original)
            u32 r1_1 = u32(r0_1->byte_0) | r2_1;
            r0_1->byte_0 = u8(r1_1);
            guest::cpu()->r[1] = r1_1;
            return r0_1.addr();
        }
        guest::cpu()->r[1] = r1;
        return r0_1.addr();
    }
    if (r1 >= 0x60u) {  // (from the original)
        guest::cpu()->r[1] = r1;
        return r0_1.addr();
    } else {
        r1_2 = u32(r0_1->byte_0) & ~r2_1;
    }
    r0_1->byte_0 = u8(r1_2);
    guest::cpu()->r[1] = r1_2;
    return r0_1.addr();
}

}  // namespace d_00813d2c
GUEST_EXPORT_FRAMED(0x00813d2c, d_00813d2c::f_00813d2c, 0x10);  // pushes {r4} first, as the original

// f_008156fc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_008156fc {

struct __attribute__((packed)) sead__SafeStringBase_char_ {
    u8 unknown_0[0x244];  // (not used here)
    u32 word_244;
};
GUEST_OFFSET(sead__SafeStringBase_char_, word_244, 0x244);

inline constexpr u32 vtable_sead__SafeStringBase_char_ = 0x009047f8u;
inline constexpr guest::Function<0x00132478, u32(u32, u32, u32, u32)> clear_list;
inline constexpr guest::Function<0x0013f134, u32(u32, u32, u32, u32)> queue_append;
inline constexpr guest::Function<0x002f73b8, u32(u32)> unload_split_part;
inline constexpr guest::Function<0x002f747c, u32(u32, u32, u32, u32)> ObjectOwner__release_object;
inline constexpr guest::Function<0x0031758c, u32(u32, u32, u32, u32)> HeapHolder__recreate;
inline constexpr guest::Function<0x005b19f8, u32(u32, u32, u32, u32)> WordAndFlag__clear;

struct __attribute__((packed)) Frame_008156fc {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u8 unknown_10[0x4];  // (not read or written by name)
};
GUEST_OFFSET(Frame_008156fc, word_0, 0x0);
GUEST_OFFSET(Frame_008156fc, word_4, 0x4);
GUEST_OFFSET(Frame_008156fc, word_8, 0x8);
GUEST_OFFSET(Frame_008156fc, word_c, 0xc);
GUEST_SIZE(Frame_008156fc, 0x14);

u32 sead__SafeStringBase_char___SafeStringBase_008156fc(gptr<sead__SafeStringBase_char_> safe_string_base_char, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_008156fc> frame;  // the original's stack frame
    u32 r0 = safe_string_base_char.addr();
    u32 r0_9 = 0;
    u32 r5 = r0;
    u32 r4 = safe_string_base_char->word_244;
    u32 r6 = r1;
    u32 r7 = r2;
    if (r4 != 0) {
        do {
            WordAndFlag__clear(r4 + 0xcu, r1, r2, r3);  // (from the original)
            unload_split_part(r4 + 0x14u);  // (from the original)
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            r4 = *gptr<u32>(r4 + 8u);
            guest::preempt();
        } while (r4 != 0);
    }
    r4 = *gptr<u32>(r5 + 0x25cu);  // (from the original)
    if (r4 != 0) {
        do {
            WordAndFlag__clear(r4 + 0xcu, r1, r2, r3);  // (from the original)
            unload_split_part(r4 + 0x14u);  // (from the original)
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            r4 = *gptr<u32>(r4 + 8u);
            guest::preempt();
        } while (r4 != 0);
    }
    clear_list(r5 + 0x240u, r1, r2, r3);  // (from the original)
    clear_list(r5 + 0x24cu, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    clear_list(r5 + 0x258u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r4 = 0u;
    do {
        queue_append(r5 + 0x24cu, r5 + (r4 * 7u + (r4 << 6) << 2) + 8u, r2, r3);  // (from the original)
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r4 += 1u;
        guest::preempt();
    } while (r4 < 2u);
    ObjectOwner__release_object(r5, guest::cpu()->r[1], r2, r3);
    if (r6 == 0) {
        r0_9 = 0u;
    } else {
        frame->word_c = 0x8157fc;  // (from the original)
        frame->word_8 = vtable_sead__SafeStringBase_char_;
        frame->word_0 = 1;
        frame->word_4 = 0;
        r0_9 = HeapHolder__recreate(r5, r7, r6, frame.at(8).addr());
    }
    return r0_9;
}

}  // namespace d_008156fc
GUEST_EXPORT_FRAMED(0x008156fc, d_008156fc::sead__SafeStringBase_char___SafeStringBase_008156fc, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_0081c694: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0081c694 {

struct __attribute__((packed)) script__WordFix_11u_ {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u8 byte_c;
    u8 unknown_d[0x3];  // (not used here)
    u32 word_10;
    u32 word_14;
    u16 half_18;
};
GUEST_OFFSET(script__WordFix_11u_, word_0, 0x0);
GUEST_OFFSET(script__WordFix_11u_, word_4, 0x4);
GUEST_OFFSET(script__WordFix_11u_, word_8, 0x8);
GUEST_OFFSET(script__WordFix_11u_, byte_c, 0xc);
GUEST_OFFSET(script__WordFix_11u_, word_10, 0x10);
GUEST_OFFSET(script__WordFix_11u_, word_14, 0x14);
GUEST_OFFSET(script__WordFix_11u_, half_18, 0x18);

inline constexpr u32 vtable_script__WordFix_11u_ = 0x00909968u;
inline constexpr guest::Function<0x002f825c, u32(u32, u32, u32, u32)> clear_aligned;

u32 script__WordFix_11u___WordFix_0081c694(gptr<script__WordFix_11u_> word_fix_11u) {
    u32 r0 = word_fix_11u.addr();
    u32 res_1 = 0;
    u32 r4 = r0;
    word_fix_11u->word_4 = r0 + 0x18u;  // (from the original)
    word_fix_11u->word_8 = 0xb;  // (from the original)
    u32 r1_1 = ~0u;
    word_fix_11u->word_0 = vtable_script__WordFix_11u_;
    word_fix_11u->byte_c = 4;
    word_fix_11u->word_10 = r1_1;
    word_fix_11u->word_14 = r1_1;
    u32 r5 = 0u;
    clear_aligned(r4 + 0x18u, 0x16u, 4u, guest::cpu()->r[3]);  // (from the original)
    r0 = r4 + 0x18u;  // (from the original)
    u32 r1 = 5u;
    word_fix_11u->half_18 = u16(r5);
    do {
        *gptr<u16>(r0 + 2u) = u16(r5);
        res_1 = r1 - 1u;
        r1 = res_1;
        u32 ea_2 = r0 + 4u;
        *gptr<u16>(ea_2) = u16(r5);
        r0 = ea_2;
        guest::preempt();
    } while (res_1 != 0);
    guest::cpu()->r[1] = r1;
    return r4;
}

}  // namespace d_0081c694
GUEST_EXPORT_FRAMED(0x0081c694, d_0081c694::script__WordFix_11u___WordFix_0081c694, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0081c8b8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0081c8b8 {

struct __attribute__((packed)) script__WordFix_12u_ {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u8 byte_c;
    u8 unknown_d[0x3];  // (not used here)
    u32 word_10;
    u32 word_14;
    u32 word_18;
    u32 word_1c;
    u32 word_20;
    u32 word_24;
    u32 word_28;
    u32 word_2c;
};
GUEST_OFFSET(script__WordFix_12u_, word_0, 0x0);
GUEST_OFFSET(script__WordFix_12u_, word_4, 0x4);
GUEST_OFFSET(script__WordFix_12u_, word_8, 0x8);
GUEST_OFFSET(script__WordFix_12u_, byte_c, 0xc);
GUEST_OFFSET(script__WordFix_12u_, word_10, 0x10);
GUEST_OFFSET(script__WordFix_12u_, word_14, 0x14);
GUEST_OFFSET(script__WordFix_12u_, word_18, 0x18);
GUEST_OFFSET(script__WordFix_12u_, word_1c, 0x1c);
GUEST_OFFSET(script__WordFix_12u_, word_20, 0x20);
GUEST_OFFSET(script__WordFix_12u_, word_24, 0x24);
GUEST_OFFSET(script__WordFix_12u_, word_28, 0x28);
GUEST_OFFSET(script__WordFix_12u_, word_2c, 0x2c);

inline constexpr u32 vtable_script__WordFix_12u_ = 0x00909a10u;

void script__WordFix_12u___WordFix(gptr<script__WordFix_12u_> word_fix_12u) {
    u32 r0 = word_fix_12u.addr();
    u32 res_1 = 0;
    word_fix_12u->word_4 = r0 + 0x18u;  // (from the original)
    word_fix_12u->word_8 = 0xc;  // (from the original)
    u32 r2_1 = ~0u;
    word_fix_12u->word_0 = vtable_script__WordFix_12u_;
    word_fix_12u->byte_c = 4;
    u32 r1 = 0u;
    word_fix_12u->word_10 = r2_1;
    word_fix_12u->word_18 = r1;
    word_fix_12u->word_14 = r2_1;
    word_fix_12u->word_1c = r1;
    word_fix_12u->word_20 = r1;
    word_fix_12u->word_24 = r1;
    word_fix_12u->word_28 = r1;
    u32 r3 = r0 + 0x16u;  // (from the original)
    u32 r2 = 6u;
    word_fix_12u->word_2c = r1;
    do {
        *gptr<u16>(r3 + 2u) = u16(r1);
        res_1 = r2 - 1u;
        r2 = res_1;
        u32 ea_2 = r3 + 4u;
        *gptr<u16>(ea_2) = u16(r1);
        r3 = ea_2;
        guest::preempt();
    } while (res_1 != 0);
    guest::cpu()->r[1] = r1;
}

}  // namespace d_0081c8b8
GUEST_EXPORT(0x0081c8b8, d_0081c8b8::script__WordFix_12u___WordFix);

// f_0081c9bc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0081c9bc {

struct __attribute__((packed)) script__WordFix_13u_ {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u8 byte_c;
    u8 unknown_d[0x3];  // (not used here)
    u32 word_10;
    u32 word_14;
    u16 half_18;
};
GUEST_OFFSET(script__WordFix_13u_, word_0, 0x0);
GUEST_OFFSET(script__WordFix_13u_, word_4, 0x4);
GUEST_OFFSET(script__WordFix_13u_, word_8, 0x8);
GUEST_OFFSET(script__WordFix_13u_, byte_c, 0xc);
GUEST_OFFSET(script__WordFix_13u_, word_10, 0x10);
GUEST_OFFSET(script__WordFix_13u_, word_14, 0x14);
GUEST_OFFSET(script__WordFix_13u_, half_18, 0x18);

inline constexpr u32 vtable_script__WordFix_13u_ = 0x00909a48u;
inline constexpr guest::Function<0x002f825c, u32(u32, u32, u32, u32)> clear_aligned;

u32 script__WordFix_13u___WordFix(gptr<script__WordFix_13u_> word_fix_13u) {
    u32 r0 = word_fix_13u.addr();
    u32 res_1 = 0;
    u32 r4 = r0;
    word_fix_13u->word_4 = r0 + 0x18u;  // (from the original)
    word_fix_13u->word_8 = 0xd;  // (from the original)
    u32 r1_1 = ~0u;
    word_fix_13u->word_0 = vtable_script__WordFix_13u_;
    word_fix_13u->byte_c = 4;
    word_fix_13u->word_10 = r1_1;
    word_fix_13u->word_14 = r1_1;
    u32 r5 = 0u;
    clear_aligned(r4 + 0x18u, 0x1au, 4u, guest::cpu()->r[3]);  // (from the original)
    r0 = r4 + 0x18u;  // (from the original)
    u32 r1 = 6u;
    word_fix_13u->half_18 = u16(r5);
    do {
        *gptr<u16>(r0 + 2u) = u16(r5);
        res_1 = r1 - 1u;
        r1 = res_1;
        u32 ea_2 = r0 + 4u;
        *gptr<u16>(ea_2) = u16(r5);
        r0 = ea_2;
        guest::preempt();
    } while (res_1 != 0);
    guest::cpu()->r[1] = r1;
    return r4;
}

}  // namespace d_0081c9bc
GUEST_EXPORT_FRAMED(0x0081c9bc, d_0081c9bc::script__WordFix_13u___WordFix, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0081d12c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0081d12c {

inline constexpr u32 vtable_script__WordFix_20u_ = 0x00909ce8u;
inline constexpr guest::Function<0x003083bc, u32(u32, u32, u32, u32)> script__construct_word_ptr;
inline constexpr guest::Function<0x005f4bfc, u32(u32, u32)> construct_script_word;

void script__WordFix_20u___WordFix_0081d12c(gptr<script__WordFix_20u_> word_fix_20u, u32 r1_unused, u32 r2_unused, u32 r3) {
    u32 r0 = word_fix_20u.addr();
    u32 res_1 = 0;
    script__construct_word_ptr(r0, r0 + 0x18u, 0x14u, r3);  // (from the original)
    word_fix_20u->word_0 = vtable_script__WordFix_20u_;
    construct_script_word(r0 + 0xcu, vtable_script__WordFix_20u_);  // (from the original)
    word_fix_20u->word_18 = 0;
    word_fix_20u->word_1c = 0;
    word_fix_20u->word_20 = 0;
    word_fix_20u->word_24 = 0;
    word_fix_20u->word_28 = 0;
    word_fix_20u->word_2c = 0;
    word_fix_20u->word_30 = 0;
    word_fix_20u->word_34 = 0;
    r3 = 0x8906ecu;  // (from the original)
    word_fix_20u->word_38 = 0;
    word_fix_20u->word_3c = 0;
    u32 r1 = r0 + 0x16u;  // (from the original)
    u32 r2 = 0xau;  // (from the original)
    do {
        u32 r12_1 = *gptr<u16>(r3);
        res_1 = r2 - 1u;
        r2 = res_1;
        *gptr<u16>(r1 + 2u) = u16(r12_1);
        u32 r12_2 = *gptr<u16>(r3);
        u32 ea_2 = r1 + 4u;
        *gptr<u16>(ea_2) = u16(r12_2);
        r1 = ea_2;
        guest::preempt();
    } while (res_1 != 0);
}

}  // namespace d_0081d12c
GUEST_EXPORT_FRAMED(0x0081d12c, d_0081d12c::script__WordFix_20u___WordFix_0081d12c, 0x4010);  // pushes {r4, lr} first, as the original

// f_0081d248: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0081d248 {

struct __attribute__((packed)) script__WordFix_21u_ {
    u32 word_0;
    u8 unknown_4[0x14];  // (not used here)
    u16 half_18;
};
GUEST_OFFSET(script__WordFix_21u_, word_0, 0x0);
GUEST_OFFSET(script__WordFix_21u_, half_18, 0x18);

inline constexpr u32 vtable_script__WordFix_21u_ = 0x00909d20u;
inline constexpr guest::Function<0x002f825c, u32(u32, u32)> clear_aligned;
inline constexpr guest::Function<0x003083bc, u32(u32, u32, u32, u32)> script__construct_word_ptr;
inline constexpr guest::Function<0x005f4bfc, u32(u32, u32)> construct_script_word;

u32 script__WordFix_21u___WordFix_0081d248(gptr<script__WordFix_21u_> word_fix_21u, u32 r1_unused, u32 r2_unused, u32 r3) {
    u32 r0 = word_fix_21u.addr();
    u32 res_1 = 0;
    script__construct_word_ptr(r0, r0 + 0x18u, 0x15u, r3);  // (from the original)
    word_fix_21u->word_0 = vtable_script__WordFix_21u_;
    construct_script_word(r0 + 0xcu, vtable_script__WordFix_21u_);  // (from the original)
    u32 r4 = r0 + 0u;
    clear_aligned(r0 + 0x18u, 0x2au);  // (from the original)
    u32 r1 = 0x8906ecu;  // (from the original)
    r0 = r4 + 0x18u;  // (from the original)
    word_fix_21u->half_18 = *gptr<u16>(r1);
    u32 r2 = 0xau;  // (from the original)
    do {
        u32 r3_3 = *gptr<u16>(r1);
        res_1 = r2 - 1u;
        r2 = res_1;
        *gptr<u16>(r0 + 2u) = u16(r3_3);
        u32 r3_4 = *gptr<u16>(r1);
        u32 ea_2 = r0 + 4u;
        *gptr<u16>(ea_2) = u16(r3_4);
        r0 = ea_2;
        guest::preempt();
    } while (res_1 != 0);
    return r4;
}

}  // namespace d_0081d248
GUEST_EXPORT_FRAMED(0x0081d248, d_0081d248::script__WordFix_21u___WordFix_0081d248, 0x4010);  // pushes {r4, lr} first, as the original

// f_0081d8c0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0081d8c0 {

struct __attribute__((packed)) script__WordFix_33u_ {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u8 byte_c;
    u8 unknown_d[0x3];  // (not used here)
    u32 word_10;
    u32 word_14;
    u16 half_18;
};
GUEST_OFFSET(script__WordFix_33u_, word_0, 0x0);
GUEST_OFFSET(script__WordFix_33u_, word_4, 0x4);
GUEST_OFFSET(script__WordFix_33u_, word_8, 0x8);
GUEST_OFFSET(script__WordFix_33u_, byte_c, 0xc);
GUEST_OFFSET(script__WordFix_33u_, word_10, 0x10);
GUEST_OFFSET(script__WordFix_33u_, word_14, 0x14);
GUEST_OFFSET(script__WordFix_33u_, half_18, 0x18);

inline constexpr u32 vtable_script__WordFix_33u_ = 0x00909f18u;
inline constexpr guest::Function<0x002f825c, u32(u32, u32, u32, u32)> clear_aligned;

u32 script__WordFix_33u___WordFix_0081d8c0(gptr<script__WordFix_33u_> word_fix_33u) {
    u32 r0 = word_fix_33u.addr();
    u32 res_1 = 0;
    u32 r4 = r0;
    word_fix_33u->word_4 = r0 + 0x18u;  // (from the original)
    word_fix_33u->word_8 = 0x21;  // (from the original)
    u32 r1_1 = ~0u;
    word_fix_33u->word_0 = vtable_script__WordFix_33u_;
    word_fix_33u->byte_c = 4;
    word_fix_33u->word_10 = r1_1;
    word_fix_33u->word_14 = r1_1;
    u32 r5 = 0u;
    clear_aligned(r4 + 0x18u, 0x42u, 4u, guest::cpu()->r[3]);  // (from the original)
    r0 = r4 + 0x18u;  // (from the original)
    u32 r1 = 0x10u;  // (from the original)
    word_fix_33u->half_18 = u16(r5);
    do {
        *gptr<u16>(r0 + 2u) = u16(r5);
        res_1 = r1 - 1u;
        r1 = res_1;
        u32 ea_2 = r0 + 4u;
        *gptr<u16>(ea_2) = u16(r5);
        r0 = ea_2;
        guest::preempt();
    } while (res_1 != 0);
    guest::cpu()->r[1] = r1;
    return r4;
}

}  // namespace d_0081d8c0
GUEST_EXPORT_FRAMED(0x0081d8c0, d_0081d8c0::script__WordFix_33u___WordFix_0081d8c0, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0081de64: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0081de64 {

struct __attribute__((packed)) script__WordFix_45u_ {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u8 byte_c;
    u8 unknown_d[0x3];  // (not used here)
    u32 word_10;
    u32 word_14;
    u16 half_18;
};
GUEST_OFFSET(script__WordFix_45u_, word_0, 0x0);
GUEST_OFFSET(script__WordFix_45u_, word_4, 0x4);
GUEST_OFFSET(script__WordFix_45u_, word_8, 0x8);
GUEST_OFFSET(script__WordFix_45u_, byte_c, 0xc);
GUEST_OFFSET(script__WordFix_45u_, word_10, 0x10);
GUEST_OFFSET(script__WordFix_45u_, word_14, 0x14);
GUEST_OFFSET(script__WordFix_45u_, half_18, 0x18);

inline constexpr u32 vtable_script__WordFix_45u_ = 0x0090a0d8u;
inline constexpr guest::Function<0x002f825c, u32(u32, u32, u32, u32)> clear_aligned;

u32 script__WordFix_45u___WordFix(gptr<script__WordFix_45u_> word_fix_45u) {
    u32 r0 = word_fix_45u.addr();
    u32 res_1 = 0;
    u32 r4 = r0;
    word_fix_45u->word_4 = r0 + 0x18u;  // (from the original)
    word_fix_45u->word_8 = 0x2d;  // (from the original)
    u32 r1_1 = ~0u;
    word_fix_45u->word_0 = vtable_script__WordFix_45u_;
    word_fix_45u->byte_c = 4;
    word_fix_45u->word_10 = r1_1;
    word_fix_45u->word_14 = r1_1;
    u32 r5 = 0u;
    clear_aligned(r4 + 0x18u, 0x5au, 4u, guest::cpu()->r[3]);  // (from the original)
    r0 = r4 + 0x18u;  // (from the original)
    u32 r1 = 0x16u;  // (from the original)
    word_fix_45u->half_18 = u16(r5);
    do {
        *gptr<u16>(r0 + 2u) = u16(r5);
        res_1 = r1 - 1u;
        r1 = res_1;
        u32 ea_2 = r0 + 4u;
        *gptr<u16>(ea_2) = u16(r5);
        r0 = ea_2;
        guest::preempt();
    } while (res_1 != 0);
    guest::cpu()->r[1] = r1;
    return r4;
}

}  // namespace d_0081de64
GUEST_EXPORT_FRAMED(0x0081de64, d_0081de64::script__WordFix_45u___WordFix, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0081e020: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0081e020 {

inline constexpr u32 vtable_script__WordFix_50u_ = 0x0090a148u;
inline constexpr guest::Function<0x002f825c, u32(u32, u32)> clear_aligned;
inline constexpr guest::Function<0x003083bc, u32(u32, u32, u32, u32)> script__construct_word_ptr;
inline constexpr guest::Function<0x005f4bfc, u32(u32, u32)> construct_script_word;

void script__WordFix_50u___WordFix_0081e020(gptr<script__WordFix_50u_> word_fix_50u, u32 r1_unused, u32 r2_unused, u32 r3) {
    u32 r0 = word_fix_50u.addr();
    u32 res_1 = 0;
    script__construct_word_ptr(r0, r0 + 0x18u, 0x32u, r3);  // (from the original)
    word_fix_50u->word_0 = vtable_script__WordFix_50u_;
    construct_script_word(r0 + 0xcu, vtable_script__WordFix_50u_);  // (from the original)
    clear_aligned(r0 + 0x18u, 0x64u);  // (from the original)
    u32 r2 = 0x8906ecu;  // (from the original)
    r0 += 0x16u;  // (from the original)
    u32 r1 = 0x19u;  // (from the original)
    do {
        res_1 = r1 - 1u;
        r1 = res_1;
        u32 r3_3 = *gptr<u16>(r2);
        *gptr<u16>(r0 + 2u) = u16(r3_3);
        u32 r3_4 = *gptr<u16>(r2);
        u32 ea_2 = r0 + 4u;
        *gptr<u16>(ea_2) = u16(r3_4);
        r0 = ea_2;
        guest::preempt();
    } while (res_1 != 0);
}

}  // namespace d_0081e020
GUEST_EXPORT_FRAMED(0x0081e020, d_0081e020::script__WordFix_50u___WordFix_0081e020, 0x4010);  // pushes {r4, lr} first, as the original

// f_0081e25c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0081e25c {

inline constexpr u32 vtable_script__WordFix_60u_ = 0x0090a1f0u;
inline constexpr guest::Function<0x002f825c, u32(u32, u32)> clear_aligned;
inline constexpr guest::Function<0x003083bc, u32(u32, u32, u32, u32)> script__construct_word_ptr;
inline constexpr guest::Function<0x005f4bfc, u32(u32, u32)> construct_script_word;

void script__WordFix_60u___WordFix_0081e25c(gptr<script__WordFix_60u_> word_fix_60u, u32 r1_unused, u32 r2_unused, u32 r3) {
    u32 r0 = word_fix_60u.addr();
    u32 res_1 = 0;
    script__construct_word_ptr(r0, r0 + 0x18u, 0x3cu, r3);  // (from the original)
    word_fix_60u->word_0 = vtable_script__WordFix_60u_;
    construct_script_word(r0 + 0xcu, vtable_script__WordFix_60u_);  // (from the original)
    clear_aligned(r0 + 0x18u, 0x78u);  // (from the original)
    u32 r2 = 0x8906ecu;  // (from the original)
    r0 += 0x16u;  // (from the original)
    u32 r1 = 0x1eu;  // (from the original)
    do {
        res_1 = r1 - 1u;
        r1 = res_1;
        u32 r3_3 = *gptr<u16>(r2);
        *gptr<u16>(r0 + 2u) = u16(r3_3);
        u32 r3_4 = *gptr<u16>(r2);
        u32 ea_2 = r0 + 4u;
        *gptr<u16>(ea_2) = u16(r3_4);
        r0 = ea_2;
        guest::preempt();
    } while (res_1 != 0);
    guest::cpu()->r[1] = r1;
}

}  // namespace d_0081e25c
GUEST_EXPORT_FRAMED(0x0081e25c, d_0081e25c::script__WordFix_60u___WordFix_0081e25c, 0x4010);  // pushes {r4, lr} first, as the original

// f_0081e35c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0081e35c {

inline constexpr u32 vtable_script__WordFix_64u_ = 0x0090a228u;
inline constexpr guest::Function<0x002f825c, u32(u32, u32)> clear_aligned;
inline constexpr guest::Function<0x003083bc, u32(u32, u32, u32, u32)> script__construct_word_ptr;
inline constexpr guest::Function<0x005f4bfc, u32(u32, u32)> construct_script_word;

void script__WordFix_64u___WordFix_0081e35c(gptr<script__WordFix_64u_> word_fix_64u, u32 r1_unused, u32 r2_unused, u32 r3) {
    u32 r0 = word_fix_64u.addr();
    u32 res_1 = 0;
    script__construct_word_ptr(r0, r0 + 0x18u, 0x40u, r3);  // (from the original)
    word_fix_64u->word_0 = vtable_script__WordFix_64u_;
    construct_script_word(r0 + 0xcu, vtable_script__WordFix_64u_);  // (from the original)
    clear_aligned(r0 + 0x18u, 0x80u);  // (from the original)
    u32 r2 = 0x8906ecu;  // (from the original)
    r0 += 0x16u;  // (from the original)
    u32 r1 = 0x20u;  // (from the original)
    do {
        res_1 = r1 - 1u;
        r1 = res_1;
        u32 r3_3 = *gptr<u16>(r2);
        *gptr<u16>(r0 + 2u) = u16(r3_3);
        u32 r3_4 = *gptr<u16>(r2);
        u32 ea_2 = r0 + 4u;
        *gptr<u16>(ea_2) = u16(r3_4);
        r0 = ea_2;
        guest::preempt();
    } while (res_1 != 0);
    guest::cpu()->r[1] = r1;
}

}  // namespace d_0081e35c
GUEST_EXPORT_FRAMED(0x0081e35c, d_0081e35c::script__WordFix_64u___WordFix_0081e35c, 0x4010);  // pushes {r4, lr} first, as the original
