// Functions decompiled by tools/decomp (docs/decomp.md), each proved equal to the recompiled original (prove-cpp). The
// names come from games/acnl/names (tools/decomp/names.py); the others are generated (d_<address>::f_<address>,
// Object_<address>_<argument>, word_<offset>) and still to be chosen.
#include "guest/guest.hpp"
#include "graphics/hemisphere_light.hpp"
#include "recovered/structs.hpp"
#include "save/villager.hpp"
#include "search/search_cand_core.hpp"

#include <bit>

using guest::gptr;

// f_003002f0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_003002f0 {

struct __attribute__((packed)) Object_003002f0_0 {
    u16 half_0;
    u8 byte_2;
    u8 byte_3;
};
GUEST_OFFSET(Object_003002f0_0, half_0, 0x0);
GUEST_OFFSET(Object_003002f0_0, byte_2, 0x2);
GUEST_OFFSET(Object_003002f0_0, byte_3, 0x3);


u32 f_003002f0(gptr<Object_003002f0_0> arg0) {
    if (arg0->half_0 == 0 || arg0->byte_2 == 0) {
        return 0u;
    }
    return arg0->byte_3 != 0;
}

}  // namespace d_003002f0
GUEST_EXPORT(0x003002f0, d_003002f0::f_003002f0);

// f_00300458: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00300458 {

struct __attribute__((packed)) Local_00300458_ea_2 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_00300458_ea_2, word_0, 0x0);
GUEST_OFFSET(Local_00300458_ea_2, word_4, 0x4);

struct __attribute__((packed)) Local_00300458_r0_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_00300458_r0_1, word_0, 0x0);
GUEST_OFFSET(Local_00300458_r0_1, word_4, 0x4);
GUEST_OFFSET(Local_00300458_r0_1, word_8, 0x8);

inline constexpr guest::Function<0x002fb378, u32(u32, u32, u32, u32)> return_constant_0xad56b0_;
inline constexpr guest::Function<0x00312ab8, u32(u32, u32, u32, u32)> call_00312ab8;

struct __attribute__((packed)) Frame_00300458 {
    u32 word_0;
    u32 word_4;
    u8 byte_8;
    u8 byte_9;
    u8 unknown_a[0x2];  // (not read or written by name)
    u32 word_c;
    u8 unknown_10[0x4];  // (not read or written by name)
};
GUEST_OFFSET(Frame_00300458, word_0, 0x0);
GUEST_OFFSET(Frame_00300458, word_4, 0x4);
GUEST_OFFSET(Frame_00300458, byte_8, 0x8);
GUEST_OFFSET(Frame_00300458, byte_9, 0x9);
GUEST_OFFSET(Frame_00300458, word_c, 0xc);
GUEST_SIZE(Frame_00300458, 0x14);

u32 f_00300458(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_00300458> frame;  // the original's stack frame
    gptr<Local_00300458_r0_1> r0_1 = gptr<Local_00300458_r0_1>(return_constant_0xad56b0_(r0, r1, r2, r3));
    u32 r1_1 = r0_1->word_0;
    u32 r2_1 = r0_1->word_4;
    frame->word_c = r0_1->word_8;
    gptr<Local_00300458_ea_2> ea_2 = gptr<Local_00300458_ea_2>(frame.at(4).addr());
    ea_2->word_0 = r1_1;
    ea_2->word_4 = r2_1;
    if (r1 != 0) {
        frame->word_0 = 0;
        call_00312ab8(frame.at(4).addr(), 0u, ~5u, 0u);
    }
    u32 r0_3 = frame->word_4;
    u32 r2_3 = frame->byte_8;
    u32 r1_2 = frame->byte_9;
    *gptr<u16>(r0) = u16(r0_3);
    *gptr<u8>(r0 + 2u) = u8(r2_3);
    *gptr<u8>(r0 + 3u) = u8(r1_2);
    guest::cpu()->r[1] = r1_2;
    return r0_3;
}

}  // namespace d_00300458
GUEST_EXPORT_FRAMED(0x00300458, d_00300458::f_00300458, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_00300814: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00300814 {


void f_00300814() {
}

}  // namespace d_00300814
GUEST_EXPORT_FRAMED(0x00300815, d_00300814::f_00300814, 0x4010);  // pushes {r4, lr} first, as the original

// f_00300888: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00300888 {

inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> read_global_byte_2;
inline constexpr guest::Function<0x0056549c, u32(u32)> call_0056549c;

u32 f_00300888(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r6 = r0;
    u32 r7 = r1;
    u32 r4 = r2;
    u32 r5 = r3;
    u32 r0_1 = read_global_byte_2(r0, r1, r2, r3);
    u32 r0_2 = call_0056549c(r0_1);
    r1 = 0u;
    u32 r12 = r0_2;
    r3 = r1;
    do {
        r0 = 0u;
        r2 = r12 + (r3 << 4);
        do {
            if (*gptr<u8>(r2 + r0) == r4) {
                if (r5 != r1) {
                    r1 += 1u;
                } else {
                    *gptr<u32>(r6) = r0;
                    *gptr<u32>(r7) = r3;
                    guest::cpu()->r[1] = r1;
                    return 1u;
                }
            }
            r0 += 1u;
            guest::preempt();
        } while (s32(r0) < 0x10);  // (from the original)
        r3 += 1u;
        guest::preempt();
    } while (s32(r3) < 0x10);  // (from the original)
    guest::cpu()->r[1] = r1;
    return 0u;
}

}  // namespace d_00300888
GUEST_EXPORT_FRAMED(0x00300888, d_00300888::f_00300888, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_003009ec: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_003009ec {

struct __attribute__((packed)) Object_003009ec_0 {
    u32 word_0;
    u8 unknown_4[0x14];  // (not used here)
    u16 half_18;
};
GUEST_OFFSET(Object_003009ec_0, word_0, 0x0);
GUEST_OFFSET(Object_003009ec_0, half_18, 0x18);

inline constexpr u32 vtable_script__WordFix_9u_ = 0x0090a3e8u;
inline constexpr guest::Function<0x002f825c, u32(u32, u32)> clear_aligned;
inline constexpr guest::Function<0x003083bc, u32(u32, u32, u32, u32)> script__construct_word_ptr;
inline constexpr guest::Function<0x0056d2ec, u32(u32, u32, u32, u32)> call_0056d2ec;
inline constexpr guest::Function<0x005f4bfc, u32(u32, u32)> construct_script_word;

void script__WordFix_9u___WordFix_003009ec(gptr<Object_003009ec_0> arg0, u32 r1, u32 r2_unused, u32 r3) {
    u32 r0 = arg0.addr();
    u32 res_1 = 0;
    u32 r3_4 = 0;
    u32 r5 = r1;
    script__construct_word_ptr(r0, r0 + 0x18u, 9u, r3);  // (from the original)
    arg0->word_0 = vtable_script__WordFix_9u_;
    construct_script_word(r0 + 0xcu, 0x90a3e8u);  // (from the original)
    u32 r4 = r0 + 0u;
    clear_aligned(r0 + 0x18u, 0x12u);  // (from the original)
    r1 = 0x8906ecu;  // (from the original)
    r0 = r4 + 0x18u;  // (from the original)
    arg0->half_18 = *gptr<u16>(r1);
    u32 r2 = 4u;
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
    call_0056d2ec(r4, r5, r2, r3_4);
}

}  // namespace d_003009ec
GUEST_EXPORT_FRAMED(0x003009ec, d_003009ec::script__WordFix_9u___WordFix_003009ec, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_003013c0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_003013c0 {

struct __attribute__((packed)) Object_003013c0_0 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u16 half_10;
    u32 word_12;
    u32 word_16;
    u32 word_1a;
    u32 word_1e;
    u16 half_22;
};
GUEST_OFFSET(Object_003013c0_0, word_0, 0x0);
GUEST_OFFSET(Object_003013c0_0, word_4, 0x4);
GUEST_OFFSET(Object_003013c0_0, word_8, 0x8);
GUEST_OFFSET(Object_003013c0_0, word_c, 0xc);
GUEST_OFFSET(Object_003013c0_0, half_10, 0x10);
GUEST_OFFSET(Object_003013c0_0, word_12, 0x12);
GUEST_OFFSET(Object_003013c0_0, word_16, 0x16);
GUEST_OFFSET(Object_003013c0_0, word_1a, 0x1a);
GUEST_OFFSET(Object_003013c0_0, word_1e, 0x1e);
GUEST_OFFSET(Object_003013c0_0, half_22, 0x22);

inline constexpr guest::Function<0x00301444, u32(u32, u32)> clear;
inline constexpr guest::Function<0x00301e94, u32(u32)> store_constants_301e94;

u32 BbsNotice__clear(gptr<Object_003013c0_0> arg0) {
    arg0->word_0 = 0;
    arg0->word_4 = 0;
    arg0->word_8 = 0;
    arg0->word_c = 0;
    arg0->half_10 = 0;
    arg0->word_12 = 0;
    arg0->word_16 = 0;
    arg0->word_1a = 0;
    arg0->word_1e = 0;
    arg0->half_22 = 0;
    clear(arg0.addr() + 0x24u, 0x182u);  // (from the original)
    store_constants_301e94(arg0.addr() + 0x1a6u);  // (from the original)
    *gptr<u16>(arg0.addr() + 0x1aau) = 0;  // (from the original)
    guest::cpu()->r[1] = 0x1aau;  // (from the original)
    return arg0.addr();
}

}  // namespace d_003013c0
GUEST_EXPORT_FRAMED(0x003013c1, d_003013c0::BbsNotice__clear, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_00301400: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00301400 {

struct __attribute__((packed)) Object_00301400_0 {
    u16 half_0;
    u16 half_2;
};
GUEST_OFFSET(Object_00301400_0, half_0, 0x0);
GUEST_OFFSET(Object_00301400_0, half_2, 0x2);


u32 f_00301400(gptr<Object_00301400_0> arg0, u32 r1, u32 r2, u32 r3) {
    u32 r12_1 = arg0->half_0;
    u32 zf_1 = r12_1 == r1;
    if (r12_1 >= r1 && !zf_1) {
        guest::cpu()->r[1] = r1;
        return 1u;
    }
    if (!zf_1) {
        guest::cpu()->r[1] = r1;
        return ~0u;
    }
    u32 r1_1 = r3 | r2 << 8;
    u32 r0_2 = rev16(u32(arg0->half_2));
    u32 zf_2 = r0_2 == r1_1;
    if (zf_2) {
        guest::cpu()->r[1] = r1_1;
        return 0u;
    }
    if (!(r0_2 >= r1_1) || zf_2) {
        guest::cpu()->r[1] = r1_1;
        return ~0u;
    }
    guest::cpu()->r[1] = r1_1;
    return 1u;
}

}  // namespace d_00301400
GUEST_EXPORT(0x00301400, d_00301400::f_00301400);

// f_003016d4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_003016d4 {

struct __attribute__((packed)) Local_003016d4_r0_1 {
    u8 byte_0;
};
GUEST_OFFSET(Local_003016d4_r0_1, byte_0, 0x0);


void f_003016d4(u32 r0, u32 r1, u32 r2) {
    u32 r1_2 = 0;
    u32 r2_1 = 1u << (r1 & 7u);
    gptr<Local_003016d4_r0_1> r0_1 = gptr<Local_003016d4_r0_1>(r0 + u32(s32(r1 + (u32(s32(r1) >> 0x1f) >> 0x1d)) >> 3));  // (from the original)
    if (r2 != 0) {
        if (r1 < 0x1cu) {  // (from the original)
            r0_1->byte_0 = u8(u32(r0_1->byte_0) | r2_1);
            return;
        }
        return;
    }
    if (r1 >= 0x1cu) {  // (from the original)
        return;
    } else {
        r1_2 = u32(r0_1->byte_0) & ~r2_1;
    }
    r0_1->byte_0 = u8(r1_2);
}

}  // namespace d_003016d4
GUEST_EXPORT_FRAMED(0x003016d4, d_003016d4::f_003016d4, 0x10);  // pushes {r4} first, as the original

// f_00301f04: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00301f04 {

inline constexpr guest::Function<0x005cda3c, u32(u32, u32)> member_address_0xf0_;

u32 f_00301f04() {
    return member_address_0xf0_(guest::cpu()->r[0], guest::cpu()->r[1]);
}

}  // namespace d_00301f04
GUEST_EXPORT(0x00301f04, d_00301f04::f_00301f04);

// f_00301f08: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00301f08 {

struct __attribute__((packed)) Local_00301f08_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u32 word_18;
};
GUEST_OFFSET(Local_00301f08_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_00301f08_ea_1, word_4, 0x4);
GUEST_OFFSET(Local_00301f08_ea_1, word_8, 0x8);
GUEST_OFFSET(Local_00301f08_ea_1, word_c, 0xc);
GUEST_OFFSET(Local_00301f08_ea_1, word_10, 0x10);
GUEST_OFFSET(Local_00301f08_ea_1, word_14, 0x14);
GUEST_OFFSET(Local_00301f08_ea_1, word_18, 0x18);

inline guest::global<u32, 0x0095c210> global_0095c210;
inline constexpr guest::Function<0x002f8574, u32(u32, u32, u32, u32)> copy_bytes_at_any_alignment;

u32 f_00301f08(u32 r0, u32 r1) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    u32 r0_1 = 0;
    gptr<Local_00301f08_ea_1> ea_1 = gptr<Local_00301f08_ea_1>(r13 - 0x1c);  // (from the original)
    ea_1->word_0 = r0;
    ea_1->word_4 = r1;
    ea_1->word_8 = r4;
    ea_1->word_c = r5;
    ea_1->word_10 = r6;
    ea_1->word_14 = r7;
    ea_1->word_18 = r14;
    r4 = r0;
    r0 = 0u;
    r13 = ea_1.addr() - 4u;
L_301f10:;
    if ((u32(*gptr<u16>(0x1acu * r0 + r4 + 0x1aau)) & 1u) != 0) {  // (from the original)
        r0 += 1u;
        if (s32(r0) < 0xf) {  // (from the original)
            guest::preempt();
            goto L_301f10;
        }
    }
    r6 = 0x1acu;  // (from the original)
    if (s32(r0) < 0xf) {  // (from the original)
        r0_1 = r0 * r6 + r4;
    } else {
        r7 = 1u;
        r0 = r4;
        do {
            u32 r5_1 = 0x1acu * r7 + r4;  // (from the original)
            guest::cpu()->r[13] = r13;
            copy_bytes_at_any_alignment(r0, r5_1, r6, guest::cpu()->r[3]);
            r7 += 1u;
            r0 = r5_1;
            guest::preempt();
        } while (s32(r7) < 0xf);  // (from the original)
        r0_1 = r4 + 0x1768u;  // (from the original)
    }
    u32 r1_1 = *gptr<u32>(r13 + 8u);
    guest::cpu()->r[13] = r13;
    copy_bytes_at_any_alignment(r0_1, r1_1, r6, guest::cpu()->r[3]);
    u32 r1_2 = *global_0095c210;
    if (s32(r1_2) >= 0) {
        r1_2 += 1u;
        *global_0095c210 = r1_2;
    }
    r13 += 0xcu;  // (from the original)
    u32 r4_1 = *gptr<u32>(r13);
    u32 r5_2 = *gptr<u32>(r13 + 4);
    u32 r6_1 = *gptr<u32>(r13 + 8);
    u32 r7_1 = *gptr<u32>(r13 + 0xc);  // (from the original)
    u32 tpc_1 = *gptr<u32>(r13 + 0x10);  // (from the original)
    r13 += 0x14;  // (from the original)
    guest::cpu()->r[1] = r1_2;
    guest::cpu()->r[4] = r4_1;
    guest::cpu()->r[5] = r5_2;
    guest::cpu()->r[6] = r6_1;
    guest::cpu()->r[7] = r7_1;
    guest::cpu()->r[13] = r13;
    return 0x95c210u;  // (from the original)
}

}  // namespace d_00301f08
GUEST_EXPORT(0x00301f09, d_00301f08::f_00301f08);

// f_00301f80: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00301f80 {

inline constexpr guest::Function<0x005c0e0c, u32(u32, u32, u32, u32)> call_005c0e0c;

u32 f_00301f80() {
    return call_005c0e0c(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_00301f80
GUEST_EXPORT(0x00301f80, d_00301f80::f_00301f80);

// f_00301f84: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00301f84 {

struct __attribute__((packed)) Object_00301f84_0 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Object_00301f84_0, word_4, 0x4);
GUEST_OFFSET(Object_00301f84_0, word_8, 0x8);
GUEST_OFFSET(Object_00301f84_0, word_c, 0xc);


void f_00301f84(gptr<Object_00301f84_0> arg0, u32 r1, u32 r2, u32 r3) {
    arg0->word_4 = r1;
    arg0->word_8 = r2;
    arg0->word_c = r3;
}

}  // namespace d_00301f84
GUEST_EXPORT(0x00301f84, d_00301f84::f_00301f84);

// f_00301f98: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00301f98 {

struct __attribute__((packed)) Object_00301f98_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Object_00301f98_1, word_0, 0x0);
GUEST_OFFSET(Object_00301f98_1, word_4, 0x4);
GUEST_OFFSET(Object_00301f98_1, word_8, 0x8);

struct __attribute__((packed)) Local_00301f98_ea_2 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_00301f98_ea_2, word_0, 0x0);
GUEST_OFFSET(Local_00301f98_ea_2, word_4, 0x4);
GUEST_OFFSET(Local_00301f98_ea_2, word_8, 0x8);

struct __attribute__((packed)) Local_00301f98_ea_4 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_00301f98_ea_4, word_0, 0x0);
GUEST_OFFSET(Local_00301f98_ea_4, word_4, 0x4);
GUEST_OFFSET(Local_00301f98_ea_4, word_8, 0x8);

struct __attribute__((packed)) Local_00301f98_ea_5 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_00301f98_ea_5, word_0, 0x0);
GUEST_OFFSET(Local_00301f98_ea_5, word_4, 0x4);
GUEST_OFFSET(Local_00301f98_ea_5, word_8, 0x8);

struct __attribute__((packed)) Local_00301f98_r3_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_00301f98_r3_1, word_0, 0x0);
GUEST_OFFSET(Local_00301f98_r3_1, word_4, 0x4);

inline constexpr guest::Function<0x003014b4, u32(u32, u32, u32, u32)> TimeStamp__add_days;
inline constexpr guest::Function<0x00308efc, u32(u32, u32, u32, u32)> TimeStamp__move_to_day_start;
inline constexpr guest::Function<0x0058dc80, u32(u32, u32, u32, u32)> check_words12;

struct __attribute__((packed)) Frame_00301f98 {
    u32 word_0;
    u8 unknown_4[0x6];  // (not read or written by name)
    u8 byte_a;
    u8 unknown_b[0x1];  // (not read or written by name)
    u32 word_c;
    u8 unknown_10[0x4];  // (not read or written by name)
};
GUEST_OFFSET(Frame_00301f98, word_0, 0x0);
GUEST_OFFSET(Frame_00301f98, byte_a, 0xa);
GUEST_OFFSET(Frame_00301f98, word_c, 0xc);
GUEST_SIZE(Frame_00301f98, 0x14);

void f_00301f98(u32 r0, gptr<Object_00301f98_1> arg1) {
    guest::StackFrameOf<Frame_00301f98> frame;  // the original's stack frame
    u32 r4 = r0;
    u32 r0_1 = arg1->word_0;
    u32 r2_1 = arg1->word_4;
    u32 r1_1 = arg1->word_8;
    gptr<Local_00301f98_r3_1> r3_1 = gptr<Local_00301f98_r3_1>(frame.at(4).addr());
    frame->word_c = r1_1;
    r3_1->word_0 = r0_1;
    r3_1->word_4 = r2_1;
    TimeStamp__move_to_day_start(frame.at(4).addr(), r1_1, r2_1, r3_1.addr());
    u32 r5 = 1u;
    frame->word_0 = r5;
    gptr<Local_00301f98_ea_2> ea_2 = gptr<Local_00301f98_ea_2>(frame.at(4).addr());
    u32 r0_3 = check_words12(0u, ea_2->word_0, ea_2->word_4, ea_2->word_8);
    u32 r2 = guest::cpu()->r[2];
    u32 r3 = guest::cpu()->r[3];
    if (r0_3 != 0) {
        TimeStamp__add_days(frame.at(4).addr(), 7u, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
    }
    if (frame->byte_a != 6u) {
        do {
            TimeStamp__add_days(frame.at(4).addr(), 1u, r2, r3);
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            guest::preempt();
        } while (frame->byte_a != 6u);
    }
    do {
        frame->word_0 = r5;
        gptr<Local_00301f98_ea_4> ea_4 = gptr<Local_00301f98_ea_4>(frame.at(4).addr());
        u32 r0_6 = check_words12(0u, ea_4->word_0, ea_4->word_4, ea_4->word_8);
        if (r0_6 != 0) {
            gptr<Local_00301f98_ea_5> ea_5 = gptr<Local_00301f98_ea_5>(frame.at(4).addr());
            u32 r1_4 = ea_5->word_4;
            u32 r2_5 = ea_5->word_8;
            *gptr<u32>(r4) = ea_5->word_0;
            *gptr<u32>(r4 + 4) = r1_4;
            *gptr<u32>(r4 + 8) = r2_5;
            return;
        }
        TimeStamp__add_days(frame.at(4).addr(), 7u, guest::cpu()->r[2], guest::cpu()->r[3]);
        guest::preempt();
    } while (1);
}

}  // namespace d_00301f98
GUEST_EXPORT_FRAMED(0x00301f98, d_00301f98::f_00301f98, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_00302064: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00302064 {

struct __attribute__((packed)) Object_00302064_0 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Object_00302064_0, word_4, 0x4);
GUEST_OFFSET(Object_00302064_0, word_8, 0x8);
GUEST_OFFSET(Object_00302064_0, word_c, 0xc);

inline guest::global<u32, 0x0088ec18> global_0088ec18;
inline guest::global<u32, 0x0088ec1c> global_0088ec1c;

void f_00302064(gptr<Object_00302064_0> arg0) {
    arg0->word_4 = 0;
    u32 r1_1 = *global_0088ec18;
    u32 r2_1 = *global_0088ec1c;
    arg0->word_8 = r1_1;
    arg0->word_c = r2_1;
    guest::cpu()->r[1] = r1_1;
}

}  // namespace d_00302064
GUEST_EXPORT(0x00302064, d_00302064::f_00302064);

// f_003022a4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_003022a4 {

struct __attribute__((packed)) Object_003022a4_0 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Object_003022a4_0, word_4, 0x4);
GUEST_OFFSET(Object_003022a4_0, word_8, 0x8);
GUEST_OFFSET(Object_003022a4_0, word_c, 0xc);


void f_003022a4(gptr<Object_003022a4_0> arg0, u32 r1, u32 r2, u32 r3) {
    arg0->word_4 = r1;
    arg0->word_8 = r2;
    arg0->word_c = r3;
}

}  // namespace d_003022a4
GUEST_EXPORT(0x003022a4, d_003022a4::f_003022a4);

// f_003022b8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_003022b8 {

struct __attribute__((packed)) Object_003022b8_0 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Object_003022b8_0, word_4, 0x4);
GUEST_OFFSET(Object_003022b8_0, word_8, 0x8);
GUEST_OFFSET(Object_003022b8_0, word_c, 0xc);

inline guest::global<u32, 0x0088ec20> global_0088ec20;
inline guest::global<u32, 0x0088ec24> global_0088ec24;

u32 f_003022b8(gptr<Object_003022b8_0> arg0) {
    arg0->word_4 = 0;
    u32 r1_1 = *global_0088ec20;
    u32 r2_1 = *global_0088ec24;
    arg0->word_8 = r1_1;
    arg0->word_c = r2_1;
    guest::cpu()->r[1] = r1_1;
    return arg0.addr() + 8u;
}

}  // namespace d_003022b8
GUEST_EXPORT(0x003022b8, d_003022b8::f_003022b8);

// f_003022e4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_003022e4 {

inline constexpr guest::Function<0x0056c45c, u32(u32, u32, u32, u32)> cached_day_start;

void f_003022e4() {
    cached_day_start(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_003022e4
GUEST_EXPORT(0x003022e4, d_003022e4::f_003022e4);

// f_0030268c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0030268c {

inline constexpr guest::Function<0x0058f100, u32(u32, u32, u32, u32)> call_0058f100;

void f_0030268c() {
    call_0058f100(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0030268c
GUEST_EXPORT(0x0030268c, d_0030268c::f_0030268c);

// f_00302694: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00302694 {

inline constexpr guest::Function<0x005828cc, u32(u32, u32)> call_005828cc;

u32 f_00302694() {
    return call_005828cc(guest::cpu()->r[0], guest::cpu()->r[1]);
}

}  // namespace d_00302694
GUEST_EXPORT(0x00302694, d_00302694::f_00302694);

// f_0030269c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0030269c {

inline constexpr guest::Function<0x006f9494, u32(u32, u32)> call_006f9494;

u32 f_0030269c() {
    return call_006f9494(guest::cpu()->r[0], guest::cpu()->r[1]);
}

}  // namespace d_0030269c
GUEST_EXPORT(0x0030269c, d_0030269c::f_0030269c);

// f_003026a0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_003026a0 {

inline constexpr guest::Function<0x00594358, u32(u32, u32)> call_00594358;

void f_003026a0() {
    call_00594358(guest::cpu()->r[0], guest::cpu()->r[1]);
}

}  // namespace d_003026a0
GUEST_EXPORT(0x003026a0, d_003026a0::f_003026a0);

// f_003026ac: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_003026ac {

inline constexpr guest::Function<0x00594378, u32(u32, u32)> call_00594378;

u32 f_003026ac() {
    return call_00594378(guest::cpu()->r[0], guest::cpu()->r[1]);
}

}  // namespace d_003026ac
GUEST_EXPORT(0x003026ac, d_003026ac::f_003026ac);

// f_003026b8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_003026b8 {

inline constexpr guest::Function<0x0076a36c, u32(u32, u32)> Item__is_in_id_set_d;

u32 f_003026b8() {
    return Item__is_in_id_set_d(guest::cpu()->r[0], guest::cpu()->r[1]);
}

}  // namespace d_003026b8
GUEST_EXPORT(0x003026b8, d_003026b8::f_003026b8);

// f_003026bc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_003026bc {

inline constexpr guest::Function<0x00768400, u32(u32, u32)> call_00768400;

u32 f_003026bc() {
    return call_00768400(guest::cpu()->r[0], guest::cpu()->r[1]);
}

}  // namespace d_003026bc
GUEST_EXPORT(0x003026bc, d_003026bc::f_003026bc);

// f_003026e8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_003026e8 {

struct __attribute__((packed)) Object_003026e8_0 {
    u16 half_0;
};
GUEST_OFFSET(Object_003026e8_0, half_0, 0x0);


u32 f_003026e8(gptr<Object_003026e8_0> arg0) {
    return u32(arg0->half_0) & 0xffu;  // (from the original)
}

}  // namespace d_003026e8
GUEST_EXPORT(0x003026e8, d_003026e8::f_003026e8);

// f_003026f4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_003026f4 {

inline constexpr guest::Function<0x006bbbbc, u32(u32, u32)> clear_item_flags_bit_14;

void f_003026f4() {
    clear_item_flags_bit_14(guest::cpu()->r[0], guest::cpu()->r[1]);
}

}  // namespace d_003026f4
GUEST_EXPORT(0x003026f4, d_003026f4::f_003026f4);

// f_003026f8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_003026f8 {

inline constexpr u32 vtable_NoticeLoadAdapt = 0x008f0b04u;
inline constexpr u32 vtable_script__WordFix_9u_ = 0x0090a3e8u;
inline constexpr guest::Function<0x002f825c, u32(u32, u32)> clear_aligned;
inline constexpr guest::Function<0x003083bc, u32(u32, u32, u32)> script__construct_word_ptr;
inline constexpr guest::Function<0x005dd490, u32(u32, u32, u32, u32)> construct_mail_recept;
inline constexpr guest::Function<0x005f4bfc, u32(u32, u32)> construct_script_word;
inline constexpr guest::Function<0x005fcf9c, u32(u32, u32)> construct_empty_word_ptr;

u32 NoticeLoadAdapt__NoticeLoadAdapt(gptr<NoticeLoadAdapt> arg0, u32 r1, u32 r2, u32 r3) {
    u32 r0 = arg0.addr();
    u32 res_1 = 0;
    construct_mail_recept(r0, r1, r2, r3);
    arg0->word_0 = vtable_NoticeLoadAdapt;
    construct_empty_word_ptr(r0 + 0xb0u, 0x8f0b04u);  // (from the original)
    script__construct_word_ptr(r0 + 0xbcu, r0 + 0xd4u, 9u);  // (from the original)
    arg0->word_bc = vtable_script__WordFix_9u_;
    construct_script_word(r0 + 0xc8u, 0x90a3e8u);  // (from the original)
    u32 r4 = r0 + 0xbcu;  // (from the original)
    clear_aligned(r0 + 0xd4u, 0x12u);  // (from the original)
    r1 = 0x8906ecu;  // (from the original)
    r0 = r4 + 0x18u;  // (from the original)
    arg0->half_d4 = *gptr<u16>(r1);
    r2 = 4u;
    do {
        u32 r3_5 = *gptr<u16>(r1);
        res_1 = r2 - 1u;
        r2 = res_1;
        *gptr<u16>(r0 + 2u) = u16(r3_5);
        u32 r3_6 = *gptr<u16>(r1);
        u32 ea_2 = r0 + 4u;
        *gptr<u16>(ea_2) = u16(r3_6);
        r0 = ea_2;
        guest::preempt();
    } while (res_1 != 0);
    guest::cpu()->r[1] = r1;
    return r4 - 0xbcu;  // (from the original)
}

}  // namespace d_003026f8
GUEST_EXPORT_FRAMED(0x003026f8, d_003026f8::NoticeLoadAdapt__NoticeLoadAdapt, 0x4010);  // pushes {r4, lr} first, as the original

// f_003028b4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_003028b4 {

inline constexpr u32 vtable_NoticeLoadAdapt = 0x008f0b04u;
inline constexpr u32 vtable_script__WordFix_9u_ = 0x0090a3e8u;
inline constexpr guest::Function<0x005dd50c, u32(u32, u32)> store_word_0x00908d30_;

u32 NoticeLoadAdapt__virtual_0(gptr<NoticeLoadAdapt> arg0) {
    arg0->word_0 = vtable_NoticeLoadAdapt;
    arg0->word_bc = vtable_script__WordFix_9u_;
    return store_word_0x00908d30_(arg0.addr(), 0x90a3e8u);  // (from the original)
}

}  // namespace d_003028b4
GUEST_EXPORT(0x003028b4, d_003028b4::NoticeLoadAdapt__virtual_0);

// f_00302fe8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00302fe8 {

inline constexpr guest::Function<0x0076b1e0, u32(u32, u32, u32, u32)> call_0076b1e0;

u32 f_00302fe8() {
    return call_0076b1e0(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_00302fe8
GUEST_EXPORT(0x00302fe8, d_00302fe8::f_00302fe8);

// f_00303014: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00303014 {

inline constexpr guest::Function<0x00768c40, u32(u32, u32)> call_00768c40;

u32 f_00303014() {
    return call_00768c40(guest::cpu()->r[0], guest::cpu()->r[1]);
}

}  // namespace d_00303014
GUEST_EXPORT(0x00303014, d_00303014::f_00303014);

// f_0030310c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0030310c {

inline constexpr guest::Function<0x00768628, u32(u32, u32)> Item__is_in_id_set_a;

u32 f_0030310c() {
    return Item__is_in_id_set_a(guest::cpu()->r[0], guest::cpu()->r[1]);
}

}  // namespace d_0030310c
GUEST_EXPORT(0x0030310c, d_0030310c::f_0030310c);

// f_00303134: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00303134 {

inline constexpr guest::Function<0x00770364, u32(u32, u32, u32)> cell_at_00770364;

u32 f_00303134() {
    return cell_at_00770364(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2]);
}

}  // namespace d_00303134
GUEST_EXPORT(0x00303134, d_00303134::f_00303134);

// f_00303274: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00303274 {

struct __attribute__((packed)) Local_00303274_ea_1 {
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
GUEST_OFFSET(Local_00303274_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_00303274_ea_1, word_4, 0x4);
GUEST_OFFSET(Local_00303274_ea_1, word_8, 0x8);
GUEST_OFFSET(Local_00303274_ea_1, word_c, 0xc);
GUEST_OFFSET(Local_00303274_ea_1, word_10, 0x10);
GUEST_OFFSET(Local_00303274_ea_1, word_14, 0x14);
GUEST_OFFSET(Local_00303274_ea_1, word_18, 0x18);
GUEST_OFFSET(Local_00303274_ea_1, word_1c, 0x1c);
GUEST_OFFSET(Local_00303274_ea_1, word_20, 0x20);

struct __attribute__((packed)) Local_00303274_ea_3 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_00303274_ea_3, word_0, 0x0);
GUEST_OFFSET(Local_00303274_ea_3, word_4, 0x4);

struct __attribute__((packed)) Local_00303274_ea_4 {
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
GUEST_OFFSET(Local_00303274_ea_4, word_0, 0x0);
GUEST_OFFSET(Local_00303274_ea_4, word_4, 0x4);
GUEST_OFFSET(Local_00303274_ea_4, word_8, 0x8);
GUEST_OFFSET(Local_00303274_ea_4, word_c, 0xc);
GUEST_OFFSET(Local_00303274_ea_4, word_10, 0x10);
GUEST_OFFSET(Local_00303274_ea_4, word_14, 0x14);
GUEST_OFFSET(Local_00303274_ea_4, word_18, 0x18);
GUEST_OFFSET(Local_00303274_ea_4, word_1c, 0x1c);
GUEST_OFFSET(Local_00303274_ea_4, word_20, 0x20);

struct __attribute__((packed)) Local_00303274_r0_20 {
    u8 unknown_0[0x40];  // (not used here)
    u8 byte_40;
};
GUEST_OFFSET(Local_00303274_r0_20, byte_40, 0x40);

struct __attribute__((packed)) Local_00303274_r0_3 {
    u8 unknown_0[0x40];  // (not used here)
    u8 byte_40;
};
GUEST_OFFSET(Local_00303274_r0_3, byte_40, 0x40);

struct __attribute__((packed)) Local_00303274_r10_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_00303274_r10_1, word_0, 0x0);
GUEST_OFFSET(Local_00303274_r10_1, word_4, 0x4);
GUEST_OFFSET(Local_00303274_r10_1, word_8, 0x8);

inline constexpr guest::Function<0x002f77e8, u32(u32, u32)> same_pointer;
inline constexpr guest::Function<0x002fae84, u32(u32, u32, u32, u32)> get_data_base;
inline constexpr guest::Function<0x002fb328, u32(u32, u32, u32, u32)> get_save_data;
inline constexpr guest::Function<0x002fb338, u32(u32)> is_not_sentinel;
inline constexpr guest::Function<0x002fb430, u32(u32, u32, u32, u32)> make_adjusted_words;
inline constexpr guest::Function<0x002fb7e8, u32(u32, u32, u32, u32)> player_at;
inline constexpr guest::Function<0x002fb96c, u32(u32)> player_for_slot;
inline constexpr guest::Function<0x002fbd54, u32(u32, u32, u32, u32)> PersonalId__is_set;
inline constexpr guest::Function<0x002fcbb0, u32(u32, u32)> construct_item;
inline constexpr guest::Function<0x002ff368, u32(u32, u32, u32, u32)> call_002ff368;
inline constexpr guest::Function<0x002ff4d4, u32(u32, u32, u32, u32)> call_002ff4d4;
inline constexpr guest::Function<0x00306354, u32(u32, u32, u32, u32)> call_00306354;
inline constexpr guest::Function<0x00309fbc, u32(u32, u32)> player_index_in;
inline constexpr guest::Function<0x00314278, u32(u32, u32, u32, u32)> call_00314278;
inline constexpr guest::Function<0x0056c3ec, u32(u32, u32, u32, u32)> current_day_start;
inline constexpr guest::Function<0x006bbd54, u32(u32, u32, u32)> call_006bbd54;
inline constexpr guest::Function<0x0071a0b0, u32(u32, u32)> find_player_matching_entry;
inline constexpr guest::Function<0x00768138, u32(u32, u32, u32)> set_held_item;

struct __attribute__((packed)) Frame_00303274 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u8 unknown_c[0x284];  // (not read or written by name)
    u32 word_290;
    u32 word_294;
    u32 word_298;
    u8 unknown_29c[0x24];  // (not read or written by name)
};
GUEST_OFFSET(Frame_00303274, word_0, 0x0);
GUEST_OFFSET(Frame_00303274, word_4, 0x4);
GUEST_OFFSET(Frame_00303274, word_8, 0x8);
GUEST_OFFSET(Frame_00303274, word_290, 0x290);
GUEST_OFFSET(Frame_00303274, word_294, 0x294);
GUEST_OFFSET(Frame_00303274, word_298, 0x298);
GUEST_SIZE(Frame_00303274, 0x2c0);

u32 f_00303274(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_00303274> frame;  // the original's stack frame
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r10 = guest::cpu()->r[10];
    u32 r11 = guest::cpu()->r[11];
    u32 r14 = guest::cpu()->r[14];
    gptr<Local_00303274_ea_1> ea_1 = gptr<Local_00303274_ea_1>(frame.at(0x29c).addr());  // (from the original)
    ea_1->word_0 = r4;
    ea_1->word_4 = r5;
    ea_1->word_8 = r6;
    ea_1->word_c = r7;
    ea_1->word_10 = r8;
    ea_1->word_14 = r9;
    ea_1->word_18 = r10;
    ea_1->word_1c = r11;
    ea_1->word_20 = r14;
    r5 = r0;
    r7 = r1;
    current_day_start(frame.at(0).addr(), r1, r2, r3);
    u32 r6_1 = frame->word_8;
    u32 r4_1 = frame->word_0;
    u32 r8_1 = frame->word_4;
    gptr<Local_00303274_r0_3> r0_3 = gptr<Local_00303274_r0_3>(is_not_sentinel(r5 + 0xeu));  // (from the original)
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r9 = 1u;
    if (r0_3.addr() != 0) {
        make_adjusted_words(frame.at(8).addr(), r5 + 0xeu, r2, r3);  // (from the original)
        gptr<Local_00303274_r10_1> r10_1 = gptr<Local_00303274_r10_1>(frame.at(8).addr());
        frame->word_4 = r6_1;
        frame->word_0 = r8_1;
        r0_3 = gptr<Local_00303274_r0_3>(call_00314278(r10_1->word_0, r10_1->word_4, r10_1->word_8, r4_1));
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (r0_3.addr() == 0) {
            r4 = 0u;
            do {
                u32 r6_2 = r5 + (r4 * 7u + (r4 << 4) << 1);
                r0_3 = gptr<Local_00303274_r0_3>(PersonalId__is_set(r6_2 + 0x1eu, r1, r2, r3));  // (from the original)
                r1 = guest::cpu()->r[1];
                r2 = guest::cpu()->r[2];
                r3 = guest::cpu()->r[3];
                if (r0_3.addr() != 0) {
                    u32 r0_7 = get_save_data(r0_3.addr(), r1, r2, r3);
                    u32 r6_3 = r0_7 + 0xa0u;  // (from the original)
                    u32 r0_8 = find_player_matching_entry(r6_3, r6_2 + 0x1eu);  // (from the original)
                    u32 r0_9 = player_index_in(r6_3, r0_8);
                    r0_3 = gptr<Local_00303274_r0_3>(player_for_slot(r0_9));
                    r2 = guest::cpu()->r[2];
                    r3 = guest::cpu()->r[3];
                    r1 = u32(*gptr<u8>(r5)) << 0x1e;  // (from the original)
                    if (s32(r1) >= 0 && r0_3.addr() != 0) {
                        r0_3 = gptr<Local_00303274_r0_3>(r0_3.addr() + 0x8a3cu);  // (from the original)
                        r1 = u32(r0_3->byte_40) | lsl_r(r9, r4 & 0xff);  // (from the original)
                        r0_3->byte_40 = u8(r1);
                    }
                }
                r4 += 1u;
                guest::preempt();
            } while (s32(r4) < 3);
        }
    }
    if (s32(r7) > 0) {
        u32 r0_10 = get_data_base(r0_3.addr(), r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r10 = 0x7ffeu;  // (from the original)
        r8 = 0u;
        r11 = r8;
        frame->word_290 = r0_10 + 0x20u;  // (from the original)
        do {
            r0_3 = gptr<Local_00303274_r0_3>(player_at(frame->word_290, r8 & 0xffu, r2, r3));  // (from the original)
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            if (r0_3.addr() != 0) {
                r1 = r0_3.addr() + 0x55a6u;  // (from the original)
                r4 = 0u;
                r6 = r0_3.addr() + 0x8a7cu;  // (from the original)
                frame->word_298 = r0_3.addr() + 0x8a3cu;  // (from the original)
                frame->word_294 = r1;
                do {
                    r0_3 = gptr<Local_00303274_r0_3>(u32(*gptr<u8>(r6)));
                    u32 r5_1 = lsl_r(r9, r4 & 0xff);  // (from the original)
                    if ((r0_3.addr() & r5_1) != 0) {
                        call_002ff368(frame.at(0x10).addr(), r1, r2, r3);  // (from the original)
                        call_006bbd54(frame.at(0xc).addr(), 0x29u, 0x10u);  // (from the original)
                        u32 r7_1 = r10;
                        if (r4 == 0) {
                            r7_1 = 0x2cd9u;  // (from the original)
                        } else if (r4 == 1u) {
                            r7_1 = 0x2cdau;  // (from the original)
                        } else if (r4 == 2u) {
                            r7_1 = 0x2cdbu;  // (from the original)
                        }
                        frame->word_0 = frame.at(0xc).addr();  // (from the original)
                        gptr<Local_00303274_ea_3> ea_3 = gptr<Local_00303274_ea_3>(frame.at(4).addr());
                        ea_3->word_0 = 0x10;  // (from the original)
                        ea_3->word_4 = r11;
                        u32 r0_15 = call_00306354(frame.at(0x10).addr(), 0x88e6a4u, r4 + 1u, frame->word_294);  // (from the original)
                        u32 r1_7 = guest::cpu()->r[1];
                        if (r0_15 != 0) {
                            u32 r0_16 = frame.at(0).addr();
                            construct_item(r0_16, r7_1);
                            set_held_item(frame.at(0x10).addr(), r0_16, 0u);  // (from the original)
                            u32 r0_19 = call_002ff4d4(frame.at(0x10).addr(), 1u, 1u, 0u);  // (from the original)
                            r1_7 = guest::cpu()->r[1];
                            if (r0_19 != 0) {
                                gptr<Local_00303274_r0_20> r0_20 = gptr<Local_00303274_r0_20>(frame->word_298);
                                r1_7 = u32(r0_20->byte_40) & ~r5_1;
                                r0_20->byte_40 = u8(r1_7);
                            }
                        }
                        u32 r0_21 = frame.at(0x10).addr();  // (from the original)
                        same_pointer(r0_21, r1_7);
                        r1 = guest::cpu()->r[1];
                        r2 = guest::cpu()->r[2];
                        r3 = guest::cpu()->r[3];
                        r0_3 = gptr<Local_00303274_r0_3>(r0_21);
                    }
                    r4 += 1u;
                    guest::preempt();
                } while (r4 < 3u);
            }
            r8 += 1u;
            guest::preempt();
        } while (r8 < 4u);
    }
    gptr<Local_00303274_ea_4> ea_4 = gptr<Local_00303274_ea_4>(frame.at(0x29c).addr());  // (from the original)
    u32 r4_2 = ea_4->word_0;
    u32 r5_2 = ea_4->word_4;
    u32 r6_4 = ea_4->word_8;
    u32 r7_2 = ea_4->word_c;
    u32 r8_2 = ea_4->word_10;
    u32 r9_1 = ea_4->word_14;
    u32 r10_2 = ea_4->word_18;
    u32 r11_1 = ea_4->word_1c;
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[4] = r4_2;
    guest::cpu()->r[5] = r5_2;
    guest::cpu()->r[6] = r6_4;
    guest::cpu()->r[7] = r7_2;
    guest::cpu()->r[8] = r8_2;
    guest::cpu()->r[9] = r9_1;
    guest::cpu()->r[10] = r10_2;
    guest::cpu()->r[11] = r11_1;
    return r0_3.addr();
}

}  // namespace d_00303274
GUEST_EXPORT(0x00303274, d_00303274::f_00303274);

// f_003034d4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_003034d4 {

inline constexpr guest::Function<0x0076af88, u32(u32, u32)> item_number_in_set_76af88;

u32 f_003034d4() {
    return item_number_in_set_76af88(guest::cpu()->r[0], guest::cpu()->r[1]);
}

}  // namespace d_003034d4
GUEST_EXPORT(0x003034d4, d_003034d4::f_003034d4);

// f_00303530: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00303530 {

inline constexpr guest::Function<0x0062f460, u32(u32, u32, u32, u32)> weather_type_cycled;

u32 f_00303530() {
    return weather_type_cycled(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_00303530
GUEST_EXPORT(0x00303530, d_00303530::f_00303530);

// f_003035a4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_003035a4 {

inline constexpr guest::Function<0x001b6278, u32(u32, u32, u32, u32)> call_001b6278;

u32 unknown_3035a4(u32 r0_unused, u32 r1) {
    if (s32(r1) >= 0x16 || r1 == 0 || r1 == 1u || r1 == 8u || r1 == 6u || r1 == 5u) {  // (from the original)
        return guest::cpu()->r[0];
    }
    return call_001b6278(guest::cpu()->r[0], r1, ~0u, 0u);
}

}  // namespace d_003035a4
GUEST_EXPORT(0x003035a4, d_003035a4::unknown_3035a4);

// f_003035dc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_003035dc {

inline constexpr guest::Function<0x002fae84, u32(u32, u32, u32, u32)> get_data_base;
inline constexpr guest::Function<0x00303534, u32(u32, u32)> EncryptedInt__set;
inline constexpr guest::Function<0x003035a4, u32(u32, u32)> unknown_3035a4;
inline constexpr guest::Function<0x006f3a0c, u32(u32, u32, u32)> assign_bit2_of_byte03_6f3a0c;

void f_003035dc(u32 r0, u32 r1, u32 r2) {
    if (r1 != 0) {
        if (r1 == 1u) {
            *gptr<u32>(r0) = 3;
            *gptr<u32>(r0 + 4u) = 7;
        } else if (r1 == 2u) {
            *gptr<u32>(r0) = 0;
            *gptr<u32>(r0 + 4u) = 7;
            u32 r0_1 = get_data_base(7u, 0u, r2, guest::cpu()->r[3]);
            u32 r0_2 = r0_1 + 0x6214fu;  // (from the original)
            assign_bit2_of_byte03_6f3a0c(r0_2, 1u, 0x6214fu);  // (from the original)
            u32 r0_3 = get_data_base(r0_2, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
            unknown_3035a4(r0_3 + 0x7170cu, 0xeu);  // (from the original)
        }
    } else {
        *gptr<u32>(r0) = 0xa;  // (from the original)
        *gptr<u32>(r0 + 4u) = 7;
        EncryptedInt__set(r0 + 8u, 0u);
    }
    *gptr<u8>(r0 + 0x10u) = u8(r1);  // (from the original)
}

}  // namespace d_003035dc
GUEST_EXPORT_FRAMED(0x003035dd, d_003035dc::f_003035dc, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_003036dc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_003036dc {

inline constexpr guest::Function<0x003081b4, u32(u32, u32)> copy_8_bytes;
inline constexpr guest::Function<0x0056be20, u32(u32, u32, u32, u32)> TimeStamp__nanoseconds_since_origin;
inline constexpr guest::Function<0x007593ec, u32(u32, u32, u32, u32)> call_007593ec;
inline constexpr guest::Function<0x00759664, u32(u32)> GameTime__nanoseconds_or_earliest;
inline constexpr guest::Function<0x007795ac, u32(u32, u32)> store_constants_7795ac;

struct __attribute__((packed)) Frame_003036dc {
    u32 word_0;
    u32 word_4;
    u8 unknown_8[0xc];  // (not read or written by name)
};
GUEST_OFFSET(Frame_003036dc, word_0, 0x0);
GUEST_OFFSET(Frame_003036dc, word_4, 0x4);
GUEST_SIZE(Frame_003036dc, 0x14);

u32 compare_stamp(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_003036dc> frame;  // the original's stack frame
    u32 r4_1 = frame.at(8).addr();
    u32 r0_1 = TimeStamp__nanoseconds_since_origin(r1, r1, r2, r3);
    u32 r1_1 = guest::cpu()->r[1];
    frame->word_0 = r0_1;
    frame->word_4 = r1_1;
    store_constants_7795ac(r4_1, r1_1);
    copy_8_bytes(r4_1, frame.at(0).addr());
    u32 r0_3 = GameTime__nanoseconds_or_earliest(frame.at(8).addr());
    u32 r1_4 = guest::cpu()->r[1];
    frame->word_0 = r2;
    frame->word_4 = r3;
    u32 r0_4 = call_007593ec(r0, r1_4, r0_3, r1_4);
    return r0_4;
}

}  // namespace d_003036dc
GUEST_EXPORT_FRAMED(0x003036dc, d_003036dc::compare_stamp, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_003037e4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_003037e4 {

inline constexpr guest::Function<0x00712e34, u32(u32, u32, u32, u32)> current_player_meets_unlock_conditions;

u32 f_003037e4() {
    return current_player_meets_unlock_conditions(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_003037e4
GUEST_EXPORT(0x003037e4, d_003037e4::f_003037e4);

// f_00303a50: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00303a50 {

inline constexpr guest::Function<0x005f1224, u32(u32, u32, u32)> call_target_with_two_0x50_;

void f_00303a50() {
    call_target_with_two_0x50_(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2]);
}

}  // namespace d_00303a50
GUEST_EXPORT(0x00303a50, d_00303a50::f_00303a50);

// f_00303a58: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00303a58 {

inline constexpr guest::Function<0x005f1294, u32(u32, u32, u32)> call_target_with_two_0x8c_;

void f_00303a58() {
    call_target_with_two_0x8c_(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2]);
}

}  // namespace d_00303a58
GUEST_EXPORT(0x00303a58, d_00303a58::f_00303a58);

// f_00303b10: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00303b10 {

inline constexpr guest::Function<0x002fc934, u32(u32, u32)> copy_item_002fc934;

u32 f_00303b10() {
    return copy_item_002fc934(guest::cpu()->r[0], 0x95bfdcu);  // (from the original)
}

}  // namespace d_00303b10
GUEST_EXPORT(0x00303b10, d_00303b10::f_00303b10);

// f_00303b1c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00303b1c {

struct __attribute__((packed)) Local_00303b1c_r0_16 {
    u8 unknown_0[0x20];  // (not used here)
    u8 byte_20;
};
GUEST_OFFSET(Local_00303b1c_r0_16, byte_20, 0x20);

inline constexpr guest::Function<0x002f77e8, u32(u32, u32)> same_pointer;
inline constexpr guest::Function<0x002fb328, u32(u32, u32, u32, u32)> get_save_data;
inline constexpr guest::Function<0x002fb96c, u32(u32, u32, u32, u32)> player_for_slot;
inline constexpr guest::Function<0x002ff368, u32(u32)> call_002ff368;
inline constexpr guest::Function<0x002ff4d4, u32(u32, u32, u32, u32)> call_002ff4d4;
inline constexpr guest::Function<0x00302204, u32(u32)> first_player_index_with_flag;
inline constexpr guest::Function<0x00306354, u32(u32, u32, u32, u32)> call_00306354;
inline constexpr guest::Function<0x006bbd54, u32(u32, u32, u32)> call_006bbd54;

struct __attribute__((packed)) Frame_00303b1c {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u8 unknown_c[0x288];  // (not read or written by name)
};
GUEST_OFFSET(Frame_00303b1c, word_0, 0x0);
GUEST_OFFSET(Frame_00303b1c, word_4, 0x4);
GUEST_OFFSET(Frame_00303b1c, word_8, 0x8);
GUEST_SIZE(Frame_00303b1c, 0x294);

u32 f_00303b1c(u32 r0_unused, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_00303b1c> frame;  // the original's stack frame
    u32 r0_2 = 0;
    u32 r1_3 = 0;
    gptr<Local_00303b1c_r0_16> r0_16 = gptr<Local_00303b1c_r0_16>(0u);
    u32 r4 = 0u;
    u32 r10 = 7u;
    u32 r8 = r4;
    u32 r9 = frame.at(0xc).addr();  // (from the original)
    u32 r11 = 8u;
    do {
        r0_2 = player_for_slot(r4 & 0xffu, r1, r2, r3);  // (from the original)
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        u32 r5_1 = r0_2;
        if (r0_2 != 0) {
            r0_2 = u32(*gptr<u8>(r5_1 + 0x5720u)) << 0x1d;  // (from the original)
            if (s32(r0_2) >= 0) {
                r0_2 = u32(*gptr<u8>(r5_1 + 0x5701u)) << 0x1e;  // (from the original)
                if (s32(r0_2) < 0) {
                    u32 r0_3 = get_save_data(r0_2, r1, r2, r3);
                    u32 r0_5 = first_player_index_with_flag(r0_3 + 0xa0u);  // (from the original)
                    call_002ff368(frame.at(0x10).addr());  // (from the original)
                    call_006bbd54(frame.at(0xc).addr(), 0x29u, 4u);  // (from the original)
                    frame->word_8 = r8;
                    if (r0_5 == (r4 & 0xffu)) {  // (from the original)
                        frame->word_0 = r9;
                        frame->word_4 = r10;
                        u32 r0_9 = call_00306354(frame.at(0x10).addr(), 0x303c74u, 1u, r5_1 + 0x55a6u);  // (from the original)
                        r1_3 = guest::cpu()->r[1];
                        if (r0_9 == 0) {
                            goto L_303c44;
                        }
                        u32 r0_11 = call_002ff4d4(frame.at(0x10).addr(), 0u, 1u, 0u);  // (from the original)
                        r1_3 = guest::cpu()->r[1];
                        if (r0_11 == 0) {
                            goto L_303c44;
                        }
                    } else {
                        frame->word_0 = r9;
                        frame->word_4 = r11;
                        u32 r0_13 = call_00306354(frame.at(0x10).addr(), 0x303c74u, 2u, r5_1 + 0x55a6u);  // (from the original)
                        r1_3 = guest::cpu()->r[1];
                        if (r0_13 == 0) {
                            goto L_303c44;
                        }
                        u32 r0_15 = call_002ff4d4(frame.at(0x10).addr(), 0u, 1u, 0u);  // (from the original)
                        r1_3 = guest::cpu()->r[1];
                        if (r0_15 == 0) {
                            goto L_303c44;
                        }
                    }
                    r0_16 = gptr<Local_00303b1c_r0_16>(r5_1 + 0x5700u);  // (from the original)
                    r1_3 = u32(r0_16->byte_20) | 4u;
                    r0_16->byte_20 = u8(r1_3);
L_303c44:;
                    r0_2 = same_pointer(frame.at(0x10).addr(), r1_3);  // (from the original)
                    r1 = guest::cpu()->r[1];
                    r2 = guest::cpu()->r[2];
                    r3 = guest::cpu()->r[3];
                }
            }
        }
        r4 += 1u;
        guest::preempt();
    } while (s32(r4) < 4);
    guest::cpu()->r[1] = r1;
    return r0_2;
}

}  // namespace d_00303b1c
GUEST_EXPORT_FRAMED(0x00303b1c, d_00303b1c::f_00303b1c, 0x4ff0);  // pushes {r4, r5, r6, r7, r8, r9, r10, r11, lr} first, as the original

// f_00303f50: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00303f50 {

struct __attribute__((packed)) Object_00303f50_1 {
    u16 half_0;
};
GUEST_OFFSET(Object_00303f50_1, half_0, 0x0);


void f_00303f50(gptr<AcNpcSp_rec> arg0, gptr<Object_00303f50_1> arg1) {
    u32 r1_1 = arg1->half_0;
    arg0->half_1d9c = u16(r1_1);
    arg0->byte_1d9e = 1;
    guest::cpu()->r[1] = r1_1;
}

}  // namespace d_00303f50
GUEST_EXPORT(0x00303f50, d_00303f50::f_00303f50);

// f_00304008: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00304008 {

inline constexpr guest::Function<0x0058dc80, u32(u32, u32, u32, u32)> check_words12;

u32 f_00304008() {
    return check_words12(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_00304008
GUEST_EXPORT(0x00304008, d_00304008::f_00304008);

// f_003040cc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_003040cc {

inline constexpr guest::Function<0x001cd690, u32(u32, u32)> call_001cd690;
inline constexpr guest::Function<0x001cd810, u32(u32, u32)> call_001cd810;
inline constexpr guest::Function<0x00268c8c, u32(u32, u32)> call_00268c8c;
inline constexpr guest::Function<0x00521a10, u32(u32, u32, u32, u32)> return_constant_0x2__00521a10;

u32 AcNpc__virtual_31(u32 r0, u32 r1) {
    u32 r0_1 = return_constant_0x2__00521a10(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0_1 != 2u) {
        return r0_1;
    }
    call_00268c8c(r0 + 0x78u, r0);  // (from the original)
    u32 r0_3 = r0 + (0x5du << 4);  // (from the original)
    call_001cd810(r0_3, r0);
    call_001cd690(r0_3, 0u);
    return 2u;
}

}  // namespace d_003040cc
GUEST_EXPORT_FRAMED(0x003040cd, d_003040cc::AcNpc__virtual_31, 0x4010);  // pushes {r4, lr} first, as the original

// f_003041ac: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_003041ac {

inline constexpr guest::Function<0x0062fd7c, u32(u32, u32, u32, u32)> today_has_no_event_pattern;

u32 f_003041ac() {
    return today_has_no_event_pattern(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_003041ac
GUEST_EXPORT(0x003041ac, d_003041ac::f_003041ac);

// f_00304280: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00304280 {

struct __attribute__((packed)) Local_00304280_r0_9 {
    u8 unknown_0[0x30];  // (not used here)
    u8 byte_30;
};
GUEST_OFFSET(Local_00304280_r0_9, byte_30, 0x30);

inline constexpr guest::Function<0x002f77e8, u32(u32, u32)> same_pointer;
inline constexpr guest::Function<0x002fb328, u32(u32, u32, u32, u32)> get_save_data;
inline constexpr guest::Function<0x002fb96c, u32(u32, u32, u32, u32)> player_for_slot;
inline constexpr guest::Function<0x002fcbb0, u32(u32, u32)> construct_item;
inline constexpr guest::Function<0x002ff368, u32(u32)> call_002ff368;
inline constexpr guest::Function<0x002ff4d4, u32(u32, u32, u32, u32)> call_002ff4d4;
inline constexpr guest::Function<0x00306354, u32(u32, u32, u32, u32)> call_00306354;

struct __attribute__((packed)) Frame_00304280 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u8 unknown_c[0x284];  // (not read or written by name)
};
GUEST_OFFSET(Frame_00304280, word_0, 0x0);
GUEST_OFFSET(Frame_00304280, word_4, 0x4);
GUEST_OFFSET(Frame_00304280, word_8, 0x8);
GUEST_SIZE(Frame_00304280, 0x290);

u32 f_00304280(u32 r0_unused, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_00304280> frame;  // the original's stack frame
    u32 r0_2 = 0;
    u32 r4 = 0u;
    u32 r6 = r4;
    u32 r7 = frame.at(0xc).addr();  // (from the original)
    u32 r8 = 0x21u;  // (from the original)
    do {
        r0_2 = player_for_slot(r4 & 0xffu, r1, r2, r3);  // (from the original)
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        u32 r5_1 = r0_2;
        if (r0_2 != 0) {
            r0_2 = *gptr<u8>(r5_1 + 0x5730u);  // (from the original)
            r1 = r0_2 << 0x1a;  // (from the original)
            if (s32(r1) < 0) {
                r0_2 <<= 0x19;  // (from the original)
                if (s32(r0_2) >= 0) {
                    get_save_data(r0_2, r1, r2, r3);
                    call_002ff368(frame.at(0x10).addr());  // (from the original)
                    construct_item(frame.at(0xc).addr(), 0x2280u);  // (from the original)
                    frame->word_8 = r6;
                    frame->word_0 = r7;
                    frame->word_4 = r8;
                    u32 r0_6 = call_00306354(frame.at(0x10).addr(), 0x304368u, 1u, r5_1 + 0x55a6u);  // (from the original)
                    u32 r1_2 = guest::cpu()->r[1];
                    if (r0_6 != 0) {
                        u32 r0_8 = call_002ff4d4(frame.at(0x10).addr(), 3u, 1u, 0u);  // (from the original)
                        r1_2 = guest::cpu()->r[1];
                        if (r0_8 != 0) {
                            gptr<Local_00304280_r0_9> r0_9 = gptr<Local_00304280_r0_9>(r5_1 + 0x5700u);  // (from the original)
                            r1_2 = u32(r0_9->byte_30) | 0x40u;  // (from the original)
                            r0_9->byte_30 = u8(r1_2);
                        }
                    }
                    r0_2 = same_pointer(frame.at(0x10).addr(), r1_2);  // (from the original)
                    r1 = guest::cpu()->r[1];
                    r2 = guest::cpu()->r[2];
                    r3 = guest::cpu()->r[3];
                }
            }
        }
        r4 += 1u;
        guest::preempt();
    } while (s32(r4) < 4);
    guest::cpu()->r[1] = r1;
    return r0_2;
}

}  // namespace d_00304280
GUEST_EXPORT_FRAMED(0x00304280, d_00304280::f_00304280, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_0030437c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0030437c {

inline constexpr guest::Function<0x0070b334, u32(u32, u32)> call_0070b334;

u32 f_0030437c() {
    return call_0070b334(guest::cpu()->r[0], guest::cpu()->r[1]);
}

}  // namespace d_0030437c
GUEST_EXPORT(0x0030437c, d_0030437c::f_0030437c);

// f_00304438: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00304438 {

inline constexpr guest::Function<0x0071a23c, u32(u32, u32, u32, u32)> first_player_with_flag_5700_bit_4;

u32 f_00304438() {
    return first_player_with_flag_5700_bit_4(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_00304438
GUEST_EXPORT(0x00304438, d_00304438::f_00304438);

// f_0030443c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0030443c {

inline constexpr guest::Function<0x0077033c, u32(u32, u32)> OptionalWord64__is_present_and_nonzero;

u32 f_0030443c() {
    return OptionalWord64__is_present_and_nonzero(guest::cpu()->r[0], guest::cpu()->r[1]);
}

}  // namespace d_0030443c
GUEST_EXPORT(0x0030443c, d_0030443c::f_0030443c);

// f_00304440: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00304440 {

inline constexpr guest::Function<0x00770300, u32(u32, u32)> call_00770300;

u32 f_00304440() {
    return call_00770300(guest::cpu()->r[0], guest::cpu()->r[1]);
}

}  // namespace d_00304440
GUEST_EXPORT(0x00304440, d_00304440::f_00304440);

// f_00304444: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00304444 {

inline constexpr guest::Function<0x005f12c4, u32(u32, u32, u32, u32)> call_target_with_none_0xa4_;

void f_00304444() {
    call_target_with_none_0xa4_(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_00304444
GUEST_EXPORT(0x00304444, d_00304444::f_00304444);

// f_0030444c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0030444c {

inline constexpr guest::Function<0x004e26a0, u32(u32, u32)> call_004e26a0;
inline constexpr guest::Function<0x00779630, u32(u32, u32, u32, u32)> call_00779630;
inline constexpr guest::Function<0x00779664, u32(u32, u32)> call_00779664;

u32 f_0030444c(u32 r0, u32 r1) {
    u64 t_2 = 0;
    u32 r0_8 = 0;
    u32 r4 = r0;
    call_00779630(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = 0xffffffe8u;  // (from the original)
    u32 r5 = 0u;
    if (!u32((0ull + ~0u + u32(0u >= 0x18u)) >> 0x20)) {  // (from the original)
        do {
            call_004e26a0(r4 + (r5 << 4) + 8u, r1);
            call_00779664(r4 + (r5 << 5) + 0x2e8u, guest::cpu()->r[1]);  // (from the original)
            r5 += 1u;
            r1 = r5 - 0x18u;  // (from the original)
            t_2 = 0ull + ~0u + u32(r5 >= 0x18u);  // (from the original)
            guest::preempt();
        } while (!u32(t_2 >> 0x20));  // (from the original)
    }
    r5 = 0u;
    do {
        call_004e26a0(r4 + (r5 << 4) + 0x1c8u, r1);  // (from the original)
        call_00779664(r4 + (r5 << 5) + 0x668u, guest::cpu()->r[1]);  // (from the original)
        r1 = guest::cpu()->r[1];
        r5 += 1u;
        guest::preempt();
    } while (r5 < 0xau);  // (from the original)
    r5 = 0u;
    do {
        call_00779664(r4 + (r5 << 5) + 0x7a8u, r1);  // (from the original)
        r1 = guest::cpu()->r[1];
        r5 += 1u;
        guest::preempt();
    } while (r5 < 2u);
    r5 = 0u;
    do {
        call_004e26a0(r4 + (r5 << 4) + 0x188u, r1);  // (from the original)
        call_00779664(r4 + (r5 << 5) + 0x5e8u, guest::cpu()->r[1]);  // (from the original)
        r1 = guest::cpu()->r[1];
        r5 += 1u;
        guest::preempt();
    } while (r5 < 4u);
    r5 = 0u;
    do {
        r0_8 = r4 + (r5 << 4) + 0x268u;  // (from the original)
        call_004e26a0(r0_8, r1);
        r1 = guest::cpu()->r[1];
        r5 += 1u;
        guest::preempt();
    } while (r5 < 6u);
    guest::cpu()->r[1] = r1;
    return r0_8;
}

}  // namespace d_0030444c
GUEST_EXPORT_FRAMED(0x0030444c, d_0030444c::f_0030444c, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_00304530: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00304530 {

inline guest::global<u32, 0x0094ed3c> global_0094ed3c;
inline constexpr guest::Function<0x0012ca7c, u32(u32)> construct_load_split;
inline constexpr guest::Function<0x002fe7dd, u32(u32, u32)> claim_flag;

u32 f_00304530(u32 r0_unused, u32 r1) {
    if ((*global_0094ed3c & 1u) != 0) {
        return 0x98a134u;  // (from the original)
    }
    u32 r0_1 = claim_flag(0x94ed3cu, r1);  // (from the original)
    if (r0_1 == 0) {
        return 0x98a134u;  // (from the original)
    }
    construct_load_split(0x98a134u);  // (from the original)
    construct_load_split(0x98a220u);  // (from the original)
    guest::cpu()->r[1] = 0x1c20b8u;  // (from the original)
    return 0x98a134u;  // (from the original)
}

}  // namespace d_00304530
GUEST_EXPORT_FRAMED(0x00304530, d_00304530::f_00304530, 0x4010);  // pushes {r4, lr} first, as the original

// f_00304594: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00304594 {

inline constexpr guest::Function<0x0056c6f0, u32(u32, u32)> call_0056c6f0;

u32 f_00304594() {
    return call_0056c6f0(guest::cpu()->r[0], guest::cpu()->r[1]);
}

}  // namespace d_00304594
GUEST_EXPORT(0x00304594, d_00304594::f_00304594);

// f_003045a8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_003045a8 {

inline guest::global<u32, 0x009753d0> global_009753d0;
inline constexpr guest::Function<0x00138c78, u32(u32)> ThreadLocal__get;

u32 call_3045a8() {
    u32 r0_2 = ThreadLocal__get(*global_009753d0 + 0x40u);  // (from the original)
    return *gptr<u32>(r0_2 + 0x68u);  // (from the original)
}

}  // namespace d_003045a8
GUEST_EXPORT_FRAMED(0x003045a8, d_003045a8::call_3045a8, 0x4010);  // pushes {r4, lr} first, as the original

// f_003045c8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_003045c8 {

inline guest::global<u32, 0x0095386c> global_0095386c;
inline constexpr guest::Function<0x007d1164, u32(u32, u32, u32, u32)> call_007d1164;

void f_003045c8(u32 r0_unused, u32 r1_unused, u32 r2_unused, u32 r3) {
    guest::StackFrame frame(0x4);  // the original's stack frame
    *frame.at<u32>(0) = r3;
    *gptr<u8>(*global_0095386c + 0xaau) = 1;  // (from the original)
    *frame.at<u8>(0) = 0;
    call_007d1164(4u, frame.at(0).addr(), guest::cpu()->r[2], r3);
}

}  // namespace d_003045c8
GUEST_EXPORT_FRAMED(0x003045c8, d_003045c8::f_003045c8, 0x4000);  // pushes {lr} first, as the original

// f_003045f8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_003045f8 {

inline guest::global<u32, 0x0095386c> global_0095386c;
inline constexpr guest::Function<0x007d1164, u32(u32, u32, u32, u32)> call_007d1164;

void f_003045f8(u32 r0_unused, u32 r1_unused, u32 r2_unused, u32 r3) {
    guest::StackFrame frame(0x4);  // the original's stack frame
    *frame.at<u32>(0) = r3;
    *gptr<u8>(*global_0095386c + 0xaau) = 0;  // (from the original)
    *frame.at<u8>(0) = 1;
    call_007d1164(4u, frame.at(0).addr(), guest::cpu()->r[2], r3);
}

}  // namespace d_003045f8
GUEST_EXPORT_FRAMED(0x003045f8, d_003045f8::f_003045f8, 0x4000);  // pushes {lr} first, as the original

// f_00304628: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00304628 {

struct __attribute__((packed)) Object_00304628_0 {
    u8 byte_0;
};
GUEST_OFFSET(Object_00304628_0, byte_0, 0x0);

inline guest::global<u32, 0x0095386c> global_0095386c;

u32 f_00304628(gptr<Object_00304628_0> arg0) {
    u32 r0_1 = arg0->byte_0;
    u32 r1_1 = *global_0095386c;
    *gptr<u8>(r1_1 + 0x9bu) = u8(r0_1);  // (from the original)
    guest::cpu()->r[1] = r1_1;
    return r0_1;
}

}  // namespace d_00304628
GUEST_EXPORT(0x00304628, d_00304628::f_00304628);

// f_00304824: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00304824 {

inline constexpr guest::Function<0x00710a34, u32(u32, u32, u32, u32)> copy_table18_item;

void f_00304824() {
    copy_table18_item(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_00304824
GUEST_EXPORT(0x00304824, d_00304824::f_00304824);

// f_0030482c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0030482c {

inline constexpr guest::Function<0x0070f010, u32(u32, u32)> slots_slot_5_if_class_6;

u32 f_0030482c() {
    return slots_slot_5_if_class_6(guest::cpu()->r[0], guest::cpu()->r[1]);
}

}  // namespace d_0030482c
GUEST_EXPORT(0x0030482c, d_0030482c::f_0030482c);

// f_00304830: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00304830 {

inline constexpr guest::Function<0x0070f034, u32(u32, u32)> slots_slot_4_if_class_5;

u32 f_00304830() {
    return slots_slot_4_if_class_5(guest::cpu()->r[0], guest::cpu()->r[1]);
}

}  // namespace d_00304830
GUEST_EXPORT(0x00304830, d_00304830::f_00304830);

// f_00304868: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00304868 {

struct __attribute__((packed)) Object_00304868_0 {
    u8 unknown_0[0x8];  // (not used here)
    u32 word_8;
    u8 unknown_c[0x8];  // (not used here)
    u32 word_14;
    u8 unknown_18[0x6c];  // (not used here)
    u32 word_84;
    u8 unknown_88[0x8];  // (not used here)
    float float_90;
    float float_94;
    float float_98;
    float float_9c;
    float float_a0;
    float float_a4;
    float float_a8;
    float float_ac;
    u32 word_b0;
    u32 word_b4;
    u32 word_b8;
    u32 word_bc;
    u32 word_c0;
    u32 word_c4;
};
GUEST_OFFSET(Object_00304868_0, word_8, 0x8);
GUEST_OFFSET(Object_00304868_0, word_14, 0x14);
GUEST_OFFSET(Object_00304868_0, word_84, 0x84);
GUEST_OFFSET(Object_00304868_0, float_90, 0x90);
GUEST_OFFSET(Object_00304868_0, float_94, 0x94);
GUEST_OFFSET(Object_00304868_0, float_98, 0x98);
GUEST_OFFSET(Object_00304868_0, float_9c, 0x9c);
GUEST_OFFSET(Object_00304868_0, float_a0, 0xa0);
GUEST_OFFSET(Object_00304868_0, float_a4, 0xa4);
GUEST_OFFSET(Object_00304868_0, float_a8, 0xa8);
GUEST_OFFSET(Object_00304868_0, float_ac, 0xac);
GUEST_OFFSET(Object_00304868_0, word_b0, 0xb0);
GUEST_OFFSET(Object_00304868_0, word_b4, 0xb4);
GUEST_OFFSET(Object_00304868_0, word_b8, 0xb8);
GUEST_OFFSET(Object_00304868_0, word_bc, 0xbc);
GUEST_OFFSET(Object_00304868_0, word_c0, 0xc0);
GUEST_OFFSET(Object_00304868_0, word_c4, 0xc4);

struct __attribute__((packed)) Local_00304868_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_00304868_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_00304868_ea_1, word_4, 0x4);

inline constexpr u32 vtable_sead__FixedSafeString_256_ = 0x009048b0u;
inline guest::global<u32, 0x008474bc> global_008474bc;
inline guest::global<u32, 0x008474c0> global_008474c0;
inline guest::global<u32, 0x008474c4> global_008474c4;
inline guest::global<u32, 0x008474c8> global_008474c8;
inline guest::global<u32, 0x008474cc> global_008474cc;
inline guest::global<u32, 0x008474d0> global_008474d0;
inline guest::global<u32, 0x008474d4> global_008474d4;
inline guest::global<u32, 0x008474d8> global_008474d8;
inline guest::global<u32, 0x008474dc> global_008474dc;
inline guest::global<u32, 0x008474e0> global_008474e0;
inline guest::global<u32, 0x008474e4> global_008474e4;
inline guest::global<u32, 0x008474e8> global_008474e8;
inline guest::global<u32, 0x008474ec> global_008474ec;
inline guest::global<u8, 0x008c9f1c> global_008c9f1c;
inline constexpr guest::Function<0x0018fc94, u32(u32)> call_0018fc94;
inline constexpr guest::Function<0x001babbc, u32(u32, u32)> call_001babbc;
inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> read_global_byte_2;
inline constexpr guest::Function<0x00325498, u32(u32)> BsLightHemiSphereBase__virtual_3;
inline constexpr guest::Function<0x00544f18, u32(u32)> print_finish;
inline constexpr guest::Function<0x00544fec, u32(u32, u32)> print_append;
inline constexpr guest::Function<0x0054a644, u32(u32, u32)> construct_print_output;
inline constexpr guest::Function<0x005b3f88, u32(u32)> call_005b3f88;
inline constexpr guest::Function<0x006cb9fc, u32(u32)> is_snow_free_period;

struct __attribute__((packed)) Frame_00304868 {
    u32 word_0;
    u32 word_4;
    u8 unknown_8[0x4];  // (not read or written by name)
    u8 byte_c;
    u8 unknown_d[0x123];  // (not read or written by name)
};
GUEST_OFFSET(Frame_00304868, word_0, 0x0);
GUEST_OFFSET(Frame_00304868, word_4, 0x4);
GUEST_OFFSET(Frame_00304868, byte_c, 0xc);
GUEST_SIZE(Frame_00304868, 0x130);

u32 BsLightHemiSphereFix__virtual_3(gptr<Object_00304868_0> arg0) {
    guest::StackFrameOf<Frame_00304868> frame;  // the original's stack frame
    u32 r0 = arg0.addr();
    u32 r6_1 = r0 + 0xb0u;  // (from the original)
    float S0_1 = 0.0f;
    float S1_1 = std::bit_cast<float>(*global_008474bc);
    float S2_1 = std::bit_cast<float>(*global_008474c0);
    float S3_1 = std::bit_cast<float>(*global_008474c4);
    float S4_1 = std::bit_cast<float>(*global_008474c8);
    float S5_1 = std::bit_cast<float>(*global_008474cc);
    float S6_1 = std::bit_cast<float>(*global_008474d0);
    float S7_1 = std::bit_cast<float>(*global_008474d4);
    arg0->float_90 = S0_1;
    arg0->float_94 = S1_1;
    arg0->float_98 = S2_1;
    arg0->float_9c = S3_1;
    arg0->float_a0 = S4_1;
    arg0->float_a4 = S5_1;
    arg0->float_a8 = S6_1;
    arg0->float_ac = S7_1;
    u32 r5_1 = *global_008474e8;
    u32 r1_1 = *global_008474d8;
    u32 r2_1 = *global_008474dc;
    u32 r3_1 = *global_008474e0;
    u32 r12_1 = *global_008474e4;
    arg0->word_c4 = *global_008474ec;
    arg0->word_c0 = r5_1;
    arg0->word_b0 = r1_1;
    arg0->word_b4 = r2_1;
    arg0->word_b8 = r3_1;
    arg0->word_bc = r12_1;
    gptr<Local_00304868_ea_1> ea_1 = gptr<Local_00304868_ea_1>(frame.at(4).addr());
    ea_1->word_0 = frame.at(0xc).addr();  // (from the original)
    ea_1->word_4 = 0x100;  // (from the original)
    u32 r3_2 = *global_008c9f1c;
    u32 r1_2 = frame->word_4 - 1u;
    *gptr<u8>(r1_2 + 0x100u) = u8(r3_2);  // (from the original)
    frame->byte_c = *global_008c9f1c;
    frame->word_0 = vtable_sead__FixedSafeString_256_;
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    guest::cpu()->s[2] = S2_1;
    guest::cpu()->s[3] = S3_1;
    guest::cpu()->s[4] = S4_1;
    guest::cpu()->s[5] = S5_1;
    guest::cpu()->s[6] = S6_1;
    guest::cpu()->s[7] = S7_1;
    u32 r0_1 = read_global_byte_2(0x9048b0u, r1_2, 0x100u, r3_2);  // (from the original)
    u32 r0_2 = call_005b3f88(r0_1);
    if (r0_2 != 6u) {
        u32 r0_3 = read_global_byte_2(r0_2, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
        if (r0_3 == 0x25u) {  // (from the original)
            u32 r0_4 = is_snow_free_period(r0_3);
            if (r0_4 == 0) {
                u32 r0_5 = frame.at(0x110).addr();  // (from the original)
                construct_print_output(r0_5, frame.at(0).addr());
                print_append(r0_5, 0x304ba8u);  // (from the original)
                print_finish(r0_5);
                goto L_304a70;
            }
        }
        u32 r0_6 = frame.at(0x110).addr();  // (from the original)
        construct_print_output(r0_6, frame.at(0).addr());
        print_append(r0_6, 0x304b98u);  // (from the original)
        u32 r0_7 = call_0018fc94(0xa5u);  // (from the original)
        print_append(r0_6, r0_7);
        print_finish(r0_6);
    } else {
        u32 r0_8 = read_global_byte_2(r0_2, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
        if (r0_8 == 0x4bu) {  // (from the original)
            u32 zf_2 = arg0->word_8 == 1u;
            u32 r1_11 = frame.at(0).addr();
            u32 r0_9 = frame.at(0x110).addr();  // (from the original)
            if (zf_2) {
                construct_print_output(r0_9, r1_11);
                print_append(r0_9, 0x304b58u);  // (from the original)
                print_finish(r0_9);
            } else {
                construct_print_output(r0_9, r1_11);
                print_append(r0_9, 0x304b3cu);  // (from the original)
                print_finish(r0_9);
            }
        } else {
            u32 zf_3 = arg0->word_8 == 1u;
            u32 r1_14 = frame.at(0).addr();
            u32 r0_10 = frame.at(0x110).addr();  // (from the original)
            if (zf_3) {
                construct_print_output(r0_10, r1_14);
                print_append(r0_10, 0x304b78u);  // (from the original)
                print_finish(r0_10);
            } else {
                construct_print_output(r0_10, r1_14);
                print_append(r0_10, 0x304b24u);  // (from the original)
                print_finish(r0_10);
            }
        }
    }
L_304a70:;
    call_001babbc(r0 + 0x90u, frame.at(0).addr());  // (from the original)
    u32 r0_12 = BsLightHemiSphereBase__virtual_3(r0);
    if (r0_12 == 2u) {
        u32 r0_13 = read_global_byte_2(r0_12, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
        u32 r0_14 = call_005b3f88(r0_13);
        if (r0_14 == 6u) {
            u32 r0_15 = arg0->word_8;
            if (r0_15 != 1u) {
                r0_15 = 0xau;  // (from the original)
            }
            arg0->word_84 = r0_15;
        } else {
            arg0->word_84 = 0xb;  // (from the original)
        }
        r0_12 = 2u;
        arg0->word_14 = 0;
    }
    return r0_12;
}

}  // namespace d_00304868
GUEST_EXPORT_FRAMED(0x00304868, d_00304868::BsLightHemiSphereFix__virtual_3, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_00304bd4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00304bd4 {

inline constexpr guest::Function<0x007701b8, u32(u32, u32)> ItemBitSet__contains;

u32 f_00304bd4() {
    return ItemBitSet__contains(guest::cpu()->r[0], guest::cpu()->r[1]);
}

}  // namespace d_00304bd4
GUEST_EXPORT(0x00304bd4, d_00304bd4::f_00304bd4);

// f_00304be8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00304be8 {

inline constexpr guest::Function<0x007110c4, u32(u32, u32, u32, u32)> call_007110c4;

u32 f_00304be8() {
    return call_007110c4(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_00304be8
GUEST_EXPORT(0x00304be8, d_00304be8::f_00304be8);

// f_00304bf4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00304bf4 {

struct __attribute__((packed)) Local_00304bf4_r0_1 {
    u8 byte_0;
};
GUEST_OFFSET(Local_00304bf4_r0_1, byte_0, 0x0);


void f_00304bf4(u32 r0, u32 r1) {
    if (r1 >= 5u) {
        guest::cpu()->r[1] = r1;
        return;
    }
    gptr<Local_00304bf4_r0_1> r0_1 = gptr<Local_00304bf4_r0_1>(r0 + (r1 >> 3));
    u32 r1_1 = u32(r0_1->byte_0) | 1u << (r1 & 7u);
    r0_1->byte_0 = u8(r1_1);
    guest::cpu()->r[1] = r1_1;
}

}  // namespace d_00304bf4
GUEST_EXPORT(0x00304bf4, d_00304bf4::f_00304bf4);

// f_00304c68: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00304c68 {

inline constexpr guest::Function<0x005b4d7c, u32(u32, u32, u32, u32)> call_005b4d7c;

struct __attribute__((packed)) Frame_00304c68 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Frame_00304c68, word_0, 0x0);
GUEST_OFFSET(Frame_00304c68, word_4, 0x4);
GUEST_SIZE(Frame_00304c68, 0x8);

u32 f_00304c68(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_00304c68> frame;  // the original's stack frame
    u32 r1_1 = *frame.at<u32>(0x10);  // (from the original)
    frame->word_0 = r3;
    frame->word_4 = r1_1;
    u32 r0_1 = call_005b4d7c(0xac1948u, r0, r1, r2);  // (from the original)
    return r0_1;
}

}  // namespace d_00304c68
GUEST_EXPORT_FRAMED(0x00304c68, d_00304c68::f_00304c68, 0x4010);  // pushes {r4, lr} first, as the original

// f_00304ca4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00304ca4 {

struct __attribute__((packed)) Object_00304ca4_0 {
    u32 word_0;
    u8 unknown_4[0x4];  // (not used here)
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
    u8 byte_30;
    u8 unknown_31[0x3];  // (not used here)
    u32 word_34;
};
GUEST_OFFSET(Object_00304ca4_0, word_0, 0x0);
GUEST_OFFSET(Object_00304ca4_0, word_8, 0x8);
GUEST_OFFSET(Object_00304ca4_0, word_c, 0xc);
GUEST_OFFSET(Object_00304ca4_0, word_10, 0x10);
GUEST_OFFSET(Object_00304ca4_0, word_14, 0x14);
GUEST_OFFSET(Object_00304ca4_0, word_18, 0x18);
GUEST_OFFSET(Object_00304ca4_0, word_1c, 0x1c);
GUEST_OFFSET(Object_00304ca4_0, word_20, 0x20);
GUEST_OFFSET(Object_00304ca4_0, word_24, 0x24);
GUEST_OFFSET(Object_00304ca4_0, word_28, 0x28);
GUEST_OFFSET(Object_00304ca4_0, word_2c, 0x2c);
GUEST_OFFSET(Object_00304ca4_0, byte_30, 0x30);
GUEST_OFFSET(Object_00304ca4_0, word_34, 0x34);


void f_00304ca4(gptr<Object_00304ca4_0> arg0, u32 r1_unused, u32 r2, u32 r3) {
    arg0->word_0 = 0;
    arg0->word_10 = 0;
    arg0->word_14 = 0;
    arg0->word_18 = 0;
    arg0->word_1c = 0;
    arg0->word_20 = 0;
    arg0->word_24 = 0;
    arg0->word_28 = 0;
    arg0->word_2c = 0;
    arg0->word_8 = r2;
    arg0->word_c = r3;
    arg0->byte_30 = 0;
    arg0->word_34 = ~0u;
    guest::cpu()->r[1] = 0u;
}

}  // namespace d_00304ca4
GUEST_EXPORT(0x00304ca4, d_00304ca4::f_00304ca4);

// f_00304ce4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00304ce4 {

struct __attribute__((packed)) Object_00304ce4_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_00304ce4_0, word_0, 0x0);

struct __attribute__((packed)) Local_00304ce4_r0_3 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
};
GUEST_OFFSET(Local_00304ce4_r0_3, word_4, 0x4);

inline guest::global<u32, 0x00ad5638> global_00ad5638;
inline constexpr guest::Function<0x004dbc3c, u32(u32, u32, u32, u32)> call_004dbc3c;

u32 f_00304ce4(gptr<Object_00304ce4_0> arg0, u32 r1, u32 r2) {
    u32 r0_1 = arg0->word_0;
    if (r0_1 == 0) {
        return arg0.addr();
    }
    u32 r0_2 = call_004dbc3c(r0_1, r1, r2, guest::cpu()->r[3]);
    if (r0_2 != 0) {
        return arg0.addr();
    }
    gptr<Local_00304ce4_r0_3> r0_3 = gptr<Local_00304ce4_r0_3>(arg0->word_0);
    u32 r1_2 = r0_3->word_4;
    if (r1_2 != 0) {
        *gptr<u32>(r1_2) = 0;
    }
    *global_00ad5638 = r0_3.addr();
    r0_3->word_4 = 0xad5638;  // (from the original)
    guest::cpu()->r[1] = 0xad5638u;  // (from the original)
    return arg0.addr();
}

}  // namespace d_00304ce4
GUEST_EXPORT_FRAMED(0x00304ce4, d_00304ce4::f_00304ce4, 0x4010);  // pushes {r4, lr} first, as the original

// f_00304ed0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00304ed0 {

inline constexpr guest::Function<0x0071e6a8, u32(u32, u32)> call_0071e6a8;

u32 f_00304ed0() {
    return call_0071e6a8(guest::cpu()->r[0], guest::cpu()->r[1]);
}

}  // namespace d_00304ed0
GUEST_EXPORT(0x00304ed0, d_00304ed0::f_00304ed0);

// f_00304ed4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00304ed4 {

inline constexpr guest::Function<0x006a5f0c, u32(u32, u32, u32)> cell_corner;

void f_00304ed4() {
    cell_corner(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2]);
}

}  // namespace d_00304ed4
GUEST_EXPORT(0x00304ed4, d_00304ed4::f_00304ed4);

// f_00304ef0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00304ef0 {

inline constexpr guest::Function<0x002ff8b0, u32(u32, u32, u32, u32)> slot_value;
inline constexpr guest::Function<0x00304f30, u32(u32, u32, u32, u32)> call_00304f30;

u32 f_00304ef0(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 r0_1 = slot_value(4u, r1, r2, r3);
    frame.release();
    return call_00304f30(r0, 0u, r0_1, r1);
}

}  // namespace d_00304ef0
GUEST_EXPORT(0x00304ef0, d_00304ef0::f_00304ef0);

// f_0030504c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0030504c {

inline constexpr guest::Function<0x00582464, u32(u32, u32, u32, u32)> call_00582464;

u32 f_0030504c() {
    return call_00582464(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0030504c
GUEST_EXPORT(0x0030504c, d_0030504c::f_0030504c);

// f_0030507c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0030507c {

inline constexpr u32 vtable_script__WordFix_38u_ = 0x00909fc0u;
inline constexpr guest::Function<0x002f825c, u32(u32, u32)> clear_aligned;
inline constexpr guest::Function<0x003083bc, u32(u32, u32, u32, u32)> script__construct_word_ptr;
inline constexpr guest::Function<0x005f4bfc, u32(u32, u32)> construct_script_word;

u32 script__WordFix_38u___WordFix_0030507c(gptr<script__WordFix_38u_> arg0, u32 r1_unused, u32 r2_unused, u32 r3) {
    u32 r0 = arg0.addr();
    u32 res_1 = 0;
    script__construct_word_ptr(r0, r0 + 0x18u, 0x26u, r3);  // (from the original)
    arg0->word_0 = vtable_script__WordFix_38u_;
    construct_script_word(r0 + 0xcu, 0x909fc0u);  // (from the original)
    u32 r4 = r0 + 0u;
    clear_aligned(r0 + 0x18u, 0x4cu);  // (from the original)
    u32 r2 = 0x8906ecu;  // (from the original)
    r0 = r4 + 0x16u;  // (from the original)
    u32 r1 = 0x13u;  // (from the original)
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
    return r4;
}

}  // namespace d_0030507c
GUEST_EXPORT_FRAMED(0x0030507c, d_0030507c::script__WordFix_38u___WordFix_0030507c, 0x4010);  // pushes {r4, lr} first, as the original

// f_0030514c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0030514c {

inline constexpr guest::Function<0x0052db0c, u32(u32, u32)> call_0052db0c;

u32 f_0030514c() {
    return call_0052db0c(guest::cpu()->r[0], guest::cpu()->r[1]);
}

}  // namespace d_0030514c
GUEST_EXPORT(0x0030514c, d_0030514c::f_0030514c);

// f_00305174: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00305174 {

inline constexpr guest::Function<0x0032553c, u32(u32, u32, u32, u32)> BsLightHemiSphereBase__virtual_9;

u32 BsLightHemiSphereFix__virtual_9(u32 r0) {
    BsLightHemiSphereBase__virtual_9(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    return 2u;
}

}  // namespace d_00305174
GUEST_EXPORT_FRAMED(0x00305174, d_00305174::BsLightHemiSphereFix__virtual_9, 0x4010);  // pushes {r4, lr} first, as the original

// f_003051dc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_003051dc {

inline constexpr guest::Function<0x0056d0fc, u32(u32, u32)> current_season;

u32 f_003051dc() {
    return current_season(guest::cpu()->r[0], guest::cpu()->r[1]);
}

}  // namespace d_003051dc
GUEST_EXPORT(0x003051dc, d_003051dc::f_003051dc);

// f_0030527c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0030527c {

inline constexpr guest::Function<0x0070bd30, u32(u32, u32)> byte_69_below_9;

u32 f_0030527c() {
    return byte_69_below_9(guest::cpu()->r[0], guest::cpu()->r[1]);
}

}  // namespace d_0030527c
GUEST_EXPORT(0x0030527c, d_0030527c::f_0030527c);

// f_00305280: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00305280 {

struct __attribute__((packed)) Object_00305280_0 {
    u8 byte_0;
    u8 byte_1;
};
GUEST_OFFSET(Object_00305280_0, byte_0, 0x0);
GUEST_OFFSET(Object_00305280_0, byte_1, 0x1);

struct __attribute__((packed)) Local_00305280_r0_2 {
    u8 unknown_0[0x3];  // (not used here)
    u8 byte_3;
};
GUEST_OFFSET(Local_00305280_r0_2, byte_3, 0x3);

inline constexpr guest::Function<0x002fae84, u32(u32, u32, u32, u32)> get_data_base;
inline constexpr guest::Function<0x003035a4, u32(u32, u32)> unknown_3035a4;

void f_00305280(gptr<Object_00305280_0> arg0, u32 r1, u32 r2) {
    if (r1 == 0) {
        arg0->byte_1 = 0;
    } else if (r1 == 1u) {
        arg0->byte_1 = 5;
    } else if (r1 == 2u) {
        arg0->byte_1 = 0;
        u32 r0_1 = get_data_base(0u, r1, r2, guest::cpu()->r[3]);
        gptr<Local_00305280_r0_2> r0_2 = gptr<Local_00305280_r0_2>(r0_1 + 0x6214fu);  // (from the original)
        u32 r1_1 = u32(r0_2->byte_3) | 8u;
        r0_2->byte_3 = u8(r1_1);
        u32 r0_3 = get_data_base(r0_2.addr(), r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
        unknown_3035a4(r0_3 + 0x7170cu, 7u);  // (from the original)
    }
    arg0->byte_0 = u8(r1);
}

}  // namespace d_00305280
GUEST_EXPORT_FRAMED(0x00305280, d_00305280::f_00305280, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_00305330: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00305330 {

struct __attribute__((packed)) Object_00305330_0 {
    u8 unknown_0[0x608];  // (not used here)
    u8 byte_608;
    u8 unknown_609[0x3];  // (not used here)
    float float_60c;
    float float_610;
    float float_614;
    float float_618;
};
GUEST_OFFSET(Object_00305330_0, byte_608, 0x608);
GUEST_OFFSET(Object_00305330_0, float_60c, 0x60c);
GUEST_OFFSET(Object_00305330_0, float_610, 0x610);
GUEST_OFFSET(Object_00305330_0, float_614, 0x614);
GUEST_OFFSET(Object_00305330_0, float_618, 0x618);

struct __attribute__((packed)) Local_00305330_r0_3 {
    u8 unknown_0[0xc];  // (not used here)
    float float_c;
    u8 unknown_10[0xc];  // (not used here)
    float float_1c;
};
GUEST_OFFSET(Local_00305330_r0_3, float_c, 0xc);
GUEST_OFFSET(Local_00305330_r0_3, float_1c, 0x1c);

struct __attribute__((packed)) Local_00305330_r1_1 {
    float float_0;
    float float_4;
};
GUEST_OFFSET(Local_00305330_r1_1, float_0, 0x0);
GUEST_OFFSET(Local_00305330_r1_1, float_4, 0x4);

inline constexpr guest::Function<0x0056878c, u32(u32, u32)> LayoutObjectWithChild__forward_to_child;

u32 f_00305330(gptr<Object_00305330_0> arg0, float S0, float S1, float S2, float S3, float S4, float S5, float S6) {
    u32 r0_2 = LayoutObjectWithChild__forward_to_child(arg0.addr() + 0x294u, 0x30539cu);  // (from the original)
    gptr<Local_00305330_r1_1> r1_1 = gptr<Local_00305330_r1_1>(r0_2 + 0x48u);  // (from the original)
    gptr<Local_00305330_r0_3> r0_3 = gptr<Local_00305330_r0_3>(r0_2 + 0x80u);  // (from the original)
    float S2_1 = r1_1->float_0;
    float S3_1 = r1_1->float_4;
    float S4_1 = 0.5f;
    float S6_1 = 160.0f;
    float S1_1 = r0_3->float_c + S2_1 * S4_1;
    float S0_1 = r0_3->float_1c - S3_1 * S4_1;
    float S5_1 = 120.0f;
    arg0->byte_608 = 1;
    float S1_2 = S6_1 - S1_1;
    float S0_2 = S0_1 + S5_1;
    arg0->float_60c = S1_2;
    arg0->float_610 = S0_2;
    arg0->float_614 = S2_1;
    arg0->float_618 = S3_1;
    guest::cpu()->r[1] = 1u;
    guest::cpu()->s[0] = S0_2;
    guest::cpu()->s[1] = S1_2;
    return arg0.addr() + 0x614u;  // (from the original)
}

}  // namespace d_00305330
GUEST_EXPORT_FRAMED(0x00305330, d_00305330::f_00305330, 0x4010);  // pushes {r4, lr} first, as the original

// f_003053b8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_003053b8 {

inline constexpr guest::Function<0x005ca3b0, u32(u32, u32)> signed_byte_88d8e0;

u32 f_003053b8() {
    return signed_byte_88d8e0(guest::cpu()->r[0], guest::cpu()->r[1]);
}

}  // namespace d_003053b8
GUEST_EXPORT(0x003053b8, d_003053b8::f_003053b8);

// f_003053bc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_003053bc {

inline constexpr guest::Function<0x0075c0ec, u32(u32, u32, u32, u32)> script__WordRes__WordRes_0075c0ec;

void f_003053bc() {
    script__WordRes__WordRes_0075c0ec(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_003053bc
GUEST_EXPORT(0x003053bc, d_003053bc::f_003053bc);

// f_003053c8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_003053c8 {

inline constexpr guest::Function<0x005f12e4, u32(u32, u32, u32)> call_virtual_28_5f12e4;

void f_003053c8() {
    call_virtual_28_5f12e4(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2]);
}

}  // namespace d_003053c8
GUEST_EXPORT(0x003053c8, d_003053c8::f_003053c8);

// f_003053cc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_003053cc {

inline constexpr guest::Function<0x005e9830, u32(u32, u32)> store_word_0x0090aa8c_;

void f_003053cc() {
    store_word_0x0090aa8c_(guest::cpu()->r[0], guest::cpu()->r[1]);
}

}  // namespace d_003053cc
GUEST_EXPORT(0x003053cc, d_003053cc::f_003053cc);

// f_00305564: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00305564 {

inline constexpr guest::Function<0x007203e8, u32(u32, u32)> read_field_u8_0x1e_;

u32 f_00305564() {
    return read_field_u8_0x1e_(guest::cpu()->r[0], guest::cpu()->r[1]);
}

}  // namespace d_00305564
GUEST_EXPORT(0x00305564, d_00305564::f_00305564);

// f_00305568: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00305568 {

inline constexpr guest::Function<0x005c710c, u32(u32, u32)> block_of_main_player;

u32 f_00305568() {
    return block_of_main_player(guest::cpu()->r[0], guest::cpu()->r[1]);
}

}  // namespace d_00305568
GUEST_EXPORT(0x00305568, d_00305568::f_00305568);

// f_0030556c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0030556c {

inline constexpr guest::Function<0x0058e228, u32(u32, u32, u32, u32)> call_0058e228;

u32 f_0030556c() {
    return call_0058e228(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0030556c
GUEST_EXPORT(0x0030556c, d_0030556c::f_0030556c);

// f_0030560c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0030560c {


u32 f_0030560c(u32 r0) {
    u32 r1_1 = u32(s32(u32(u64(s64(s32(0x66666667u)) * s32(r0)) >> 0x20)) >> 2) - u32(s32(r0) >> 0x1f);  // (from the original)
    guest::cpu()->r[1] = r1_1;
    return ~9u * r1_1 + r0;
}

}  // namespace d_0030560c
GUEST_EXPORT(0x0030560c, d_0030560c::f_0030560c);

// f_00305894: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00305894 {

inline constexpr guest::Function<0x005cc2f4, u32(u32, u32, u32, u32)> namespace___SimpleFuncDelegate__SimpleFuncDelegate_005cc2f4;

void f_00305894() {
    namespace___SimpleFuncDelegate__SimpleFuncDelegate_005cc2f4(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_00305894
GUEST_EXPORT(0x00305894, d_00305894::f_00305894);

// f_00305898: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00305898 {

inline constexpr guest::Function<0x00768138, u32(u32, u32, u32)> set_held_item;

void f_00305898() {
    set_held_item(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2]);
}

}  // namespace d_00305898
GUEST_EXPORT(0x00305898, d_00305898::f_00305898);

// f_00305940: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00305940 {

inline constexpr guest::Function<0x006b84c8, u32(u32, u32, u32)> ClampedCounters__set_count;

void f_00305940() {
    ClampedCounters__set_count(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2]);
}

}  // namespace d_00305940
GUEST_EXPORT(0x00305940, d_00305940::f_00305940);

// f_003059ec: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_003059ec {

inline constexpr guest::Function<0x0076ce68, u32(u32, u32, u32, u32)> call_0076ce68;

u32 f_003059ec() {
    return call_0076ce68(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_003059ec
GUEST_EXPORT(0x003059ec, d_003059ec::f_003059ec);

// f_003059f0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_003059f0 {

inline constexpr guest::Function<0x0076c8b8, u32(u32, u32, u32, u32)> call_0076c8b8;

u32 f_003059f0() {
    return call_0076c8b8(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_003059f0
GUEST_EXPORT(0x003059f0, d_003059f0::f_003059f0);

// f_003059f4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_003059f4 {

inline constexpr guest::Function<0x0076cd0c, u32(u32, u32, u32, u32)> call_0076cd0c;

u32 f_003059f4() {
    return call_0076cd0c(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_003059f4
GUEST_EXPORT(0x003059f4, d_003059f4::f_003059f4);

// f_003059f8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_003059f8 {

struct __attribute__((packed)) Object_003059f8_0 {
    u8 unknown_0[0x67];  // (not used here)
    u8 byte_67;
    u8 byte_68;
    u8 unknown_69[0x803];  // (not used here)
    u8 byte_86c;
};
GUEST_OFFSET(Object_003059f8_0, byte_67, 0x67);
GUEST_OFFSET(Object_003059f8_0, byte_68, 0x68);
GUEST_OFFSET(Object_003059f8_0, byte_86c, 0x86c);

inline constexpr guest::Function<0x002f825c, u32(u32, u32)> clear_aligned;
inline constexpr guest::Function<0x003052f0, u32(u32)> clear_identity_with_flags;

void f_003059f8(gptr<Object_003059f8_0> arg0) {
    clear_aligned(arg0.addr(), 0x2au);  // (from the original)
    clear_identity_with_flags(arg0.addr() + 0x2au);  // (from the original)
    clear_aligned(arg0.addr() + 0x58u, 0xfu);  // (from the original)
    arg0->byte_67 = 0;
    arg0->byte_68 = 0;
    clear_aligned(arg0.addr() + 0x6cu, 0x800u);  // (from the original)
    arg0->byte_86c = 0;
}

}  // namespace d_003059f8
GUEST_EXPORT_FRAMED(0x003059f8, d_003059f8::f_003059f8, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_00305a3c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00305a3c {

inline constexpr guest::Function<0x0076d134, u32(u32, u32, u32, u32)> call_0076d134;

u32 f_00305a3c() {
    return call_0076d134(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_00305a3c
GUEST_EXPORT(0x00305a3c, d_00305a3c::f_00305a3c);

// f_00305a54: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00305a54 {

inline constexpr guest::Function<0x0076d3a4, u32(u32, u32, u32, u32)> call_0076d3a4;

u32 f_00305a54() {
    return call_0076d3a4(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_00305a54
GUEST_EXPORT(0x00305a54, d_00305a54::f_00305a54);

// f_00305ad0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00305ad0 {

inline constexpr guest::Function<0x0076c74c, u32(u32, u32, u32, u32)> call_0076c74c;

u32 f_00305ad0() {
    return call_0076c74c(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_00305ad0
GUEST_EXPORT(0x00305ad0, d_00305ad0::f_00305ad0);

// f_00305b7c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00305b7c {

inline constexpr guest::Function<0x006bbd54, u32(u32, u32, u32, u32)> call_006bbd54;
inline constexpr guest::Function<0x0076d668, u32(u32, u32)> call_0076d668;

struct __attribute__((packed)) Frame_00305b7c {
    u32 word_0;
};
GUEST_OFFSET(Frame_00305b7c, word_0, 0x0);
GUEST_SIZE(Frame_00305b7c, 0x4);

u32 f_00305b7c(u32 r0, u32 r1_unused, u32 r2_unused, u32 r3) {
    guest::StackFrameOf<Frame_00305b7c> frame;  // the original's stack frame
    frame->word_0 = r3;
    u32 r5 = 0u;
    u32 r6 = r0;
    u32 r4 = r5;
    do {
        call_006bbd54(frame.at(0).addr(), 0x24u, r4, r3);  // (from the original)
        u32 r0_2 = call_0076d668(r6, frame.at(0).addr());
        r3 = guest::cpu()->r[3];
        if (r0_2 != 0) {
            r5 += 1u;
        }
        r4 += 1u;
        guest::preempt();
    } while (r4 < 0x48u);  // (from the original)
    return r5;
}

}  // namespace d_00305b7c
GUEST_EXPORT_FRAMED(0x00305b7c, d_00305b7c::f_00305b7c, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_00305bcc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00305bcc {

inline constexpr guest::Function<0x006bbd54, u32(u32, u32, u32, u32)> call_006bbd54;
inline constexpr guest::Function<0x0076d668, u32(u32, u32)> call_0076d668;

struct __attribute__((packed)) Frame_00305bcc {
    u32 word_0;
};
GUEST_OFFSET(Frame_00305bcc, word_0, 0x0);
GUEST_SIZE(Frame_00305bcc, 0x4);

u32 f_00305bcc(u32 r0, u32 r1_unused, u32 r2_unused, u32 r3) {
    guest::StackFrameOf<Frame_00305bcc> frame;  // the original's stack frame
    frame->word_0 = r3;
    u32 r5 = 0u;
    u32 r6 = r0;
    u32 r4 = r5;
    do {
        call_006bbd54(frame.at(0).addr(), 0x27u, r4, r3);  // (from the original)
        u32 r0_2 = call_0076d668(r6, frame.at(0).addr());
        r3 = guest::cpu()->r[3];
        if (r0_2 != 0) {
            r5 += 1u;
        }
        r4 += 1u;
        guest::preempt();
    } while (r4 < 0x48u);  // (from the original)
    r4 = 0u;
    do {
        call_006bbd54(frame.at(0).addr(), 0x28u, r4, r3);  // (from the original)
        u32 r0_4 = call_0076d668(r6, frame.at(0).addr());
        r3 = guest::cpu()->r[3];
        if (r0_4 != 0) {
            r5 += 1u;
        }
        r4 += 1u;
        guest::preempt();
    } while (r4 < 0x1eu);  // (from the original)
    return r5;
}

}  // namespace d_00305bcc
GUEST_EXPORT_FRAMED(0x00305bcc, d_00305bcc::f_00305bcc, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_00305c60: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00305c60 {

inline constexpr guest::Function<0x006e08b4, u32(u32, u32, u32, u32)> call_006e08b4;

void f_00305c60() {
    call_006e08b4(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_00305c60
GUEST_EXPORT(0x00305c60, d_00305c60::f_00305c60);

// f_00305c64: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00305c64 {

inline constexpr guest::Function<0x006bbd54, u32(u32, u32, u32, u32)> call_006bbd54;
inline constexpr guest::Function<0x0076d668, u32(u32, u32)> call_0076d668;

struct __attribute__((packed)) Frame_00305c64 {
    u32 word_0;
};
GUEST_OFFSET(Frame_00305c64, word_0, 0x0);
GUEST_SIZE(Frame_00305c64, 0x4);

u32 f_00305c64(u32 r0, u32 r1_unused, u32 r2_unused, u32 r3) {
    guest::StackFrameOf<Frame_00305c64> frame;  // the original's stack frame
    frame->word_0 = r3;
    u32 r5 = 0u;
    u32 r6 = r0;
    u32 r4 = r5;
    do {
        call_006bbd54(frame.at(0).addr(), 0x2cu, r4, r3);  // (from the original)
        u32 r0_2 = call_0076d668(r6, frame.at(0).addr());
        r3 = guest::cpu()->r[3];
        if (r0_2 != 0) {
            r5 += 1u;
        }
        r4 += 1u;
        guest::preempt();
    } while (r4 < 0x43u);  // (from the original)
    return r5;
}

}  // namespace d_00305c64
GUEST_EXPORT_FRAMED(0x00305c64, d_00305c64::f_00305c64, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_00305da0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00305da0 {

inline constexpr guest::Function<0x007111b4, u32(u32, u32, u32, u32)> call_007111b4;

u32 f_00305da0() {
    return call_007111b4(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_00305da0
GUEST_EXPORT(0x00305da0, d_00305da0::f_00305da0);

// f_00305e88: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00305e88 {

inline guest::global<u32, 0x00950170> global_00950170;

void f_00305e88(u32 r0) {
    if (*global_00950170 == r0) {
        *global_00950170 = 0;
    }
    guest::cpu()->r[1] = 0x950170u;  // (from the original)
}

}  // namespace d_00305e88
GUEST_EXPORT(0x00305e88, d_00305e88::f_00305e88);

// f_00305ff4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00305ff4 {

inline constexpr guest::Function<0x005c2ce0, u32(u32, u32, u32, u32)> call_005c2ce0;

u32 f_00305ff4() {
    return call_005c2ce0(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_00305ff4
GUEST_EXPORT(0x00305ff4, d_00305ff4::f_00305ff4);

// f_00305ff8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00305ff8 {

inline constexpr guest::Function<0x00579024, u32(u32, u32, u32, u32)> call_00579024;

u32 f_00305ff8() {
    return call_00579024(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_00305ff8
GUEST_EXPORT(0x00305ff8, d_00305ff8::f_00305ff8);

// f_00306088: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00306088 {

inline constexpr guest::Function<0x00720348, u32(u32, u32)> call_00720348;

u32 f_00306088() {
    return call_00720348(guest::cpu()->r[0], guest::cpu()->r[1]);
}

}  // namespace d_00306088
GUEST_EXPORT(0x00306088, d_00306088::f_00306088);

// f_00306130: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00306130 {

inline constexpr guest::Function<0x0072543c, u32(u32, u32)> call_0072543c;

u32 f_00306130() {
    return call_0072543c(guest::cpu()->r[0], guest::cpu()->r[1]);
}

}  // namespace d_00306130
GUEST_EXPORT(0x00306130, d_00306130::f_00306130);

// f_00306138: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00306138 {

inline constexpr guest::Function<0x007ce068, u32(u32, u32, u32, u32)> call_007ce068;

u32 f_00306138() {
    return call_007ce068(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_00306138
GUEST_EXPORT(0x00306138, d_00306138::f_00306138);

// f_003061b4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_003061b4 {

inline constexpr guest::Function<0x0074830c, u32(u32, u32)> call_0074830c;

u32 f_003061b4() {
    return call_0074830c(guest::cpu()->r[0], guest::cpu()->r[1]);
}

}  // namespace d_003061b4
GUEST_EXPORT(0x003061b4, d_003061b4::f_003061b4);

// f_003061b8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_003061b8 {

inline constexpr guest::Function<0x007482b8, u32(u32, u32)> call_007482b8;

u32 f_003061b8() {
    return call_007482b8(guest::cpu()->r[0], guest::cpu()->r[1]);
}

}  // namespace d_003061b8
GUEST_EXPORT(0x003061b8, d_003061b8::f_003061b8);

// f_003061bc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_003061bc {

inline constexpr guest::Function<0x0075dbbc, u32(u32, u32)> read_field_u8_0x0_;

u32 f_003061bc() {
    return read_field_u8_0x0_(guest::cpu()->r[0], guest::cpu()->r[1]);
}

}  // namespace d_003061bc
GUEST_EXPORT(0x003061bc, d_003061bc::f_003061bc);

// f_00306350: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00306350 {

inline constexpr guest::Function<0x00718ef0, u32(u32, u32)> bit_is_set;

u32 f_00306350() {
    return bit_is_set(guest::cpu()->r[0], guest::cpu()->r[1]);
}

}  // namespace d_00306350
GUEST_EXPORT(0x00306350, d_00306350::f_00306350);

// f_00306408: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00306408 {

inline constexpr guest::Function<0x005f1214, u32(u32, u32, u32)> call_target_with_two_0x5c_;

void f_00306408() {
    call_target_with_two_0x5c_(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2]);
}

}  // namespace d_00306408
GUEST_EXPORT(0x00306408, d_00306408::f_00306408);

// f_00306928: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00306928 {

inline constexpr guest::Function<0x007523a8, u32(u32, u32)> call_007523a8;

u32 f_00306928() {
    return call_007523a8(guest::cpu()->r[0], guest::cpu()->r[1]);
}

}  // namespace d_00306928
GUEST_EXPORT(0x00306928, d_00306928::f_00306928);

// f_0030692c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0030692c {

inline constexpr guest::Function<0x00578bc8, u32(u32, u32)> call_00578bc8;

void f_0030692c() {
    call_00578bc8(guest::cpu()->r[0], guest::cpu()->r[1]);
}

}  // namespace d_0030692c
GUEST_EXPORT(0x0030692c, d_0030692c::f_0030692c);

// f_00306944: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00306944 {

inline constexpr guest::Function<0x006c4200, u32(u32, u32, u32, u32)> call_006c4200;

void f_00306944() {
    call_006c4200(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_00306944
GUEST_EXPORT(0x00306944, d_00306944::f_00306944);

// f_00306948: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00306948 {

inline constexpr guest::Function<0x005b492c, u32(u32, u32)> set_byte_957326_5b492c;

u32 f_00306948() {
    return set_byte_957326_5b492c(guest::cpu()->r[0], guest::cpu()->r[1]);
}

}  // namespace d_00306948
GUEST_EXPORT(0x00306948, d_00306948::f_00306948);

// f_0030694c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0030694c {

inline constexpr guest::Function<0x0052be5c, u32(u32, u32, u32, u32)> call_0052be5c;

u32 f_0030694c() {
    return call_0052be5c(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0030694c
GUEST_EXPORT(0x0030694c, d_0030694c::f_0030694c);

// f_0030696c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0030696c {

inline constexpr guest::Function<0x0060b0b8, u32(u32, u32)> copy_reference_clock;

u32 f_0030696c() {
    return copy_reference_clock(guest::cpu()->r[0], guest::cpu()->r[1]);
}

}  // namespace d_0030696c
GUEST_EXPORT(0x0030696c, d_0030696c::f_0030696c);

// f_00306c70: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00306c70 {

inline constexpr guest::Function<0x005bb744, u32(u32, u32)> call_005bb744;

void f_00306c70() {
    call_005bb744(guest::cpu()->r[0], guest::cpu()->r[1]);
}

}  // namespace d_00306c70
GUEST_EXPORT(0x00306c70, d_00306c70::f_00306c70);

// f_00306c78: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00306c78 {

inline constexpr guest::Function<0x0051ca20, u32(u32, u32, u32, u32)> call_0051ca20;

u32 f_00306c78() {
    return call_0051ca20(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_00306c78
GUEST_EXPORT(0x00306c78, d_00306c78::f_00306c78);

// f_00306cf0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00306cf0 {

inline guest::global<u32, 0x00953864> global_00953864;

void f_00306cf0(gptr<AcNpc_rec> arg0, u32 r1) {
    arg0->byte_95e = u8(r1);
    u32 r2_1 = *global_00953864;
    if (r1 >= 0x3fu || r2_1 == 0) {  // (from the original)
        arg0->word_aa0 = 0;
        guest::cpu()->r[1] = 0u;
        return;
    }
    u32 r1_1 = r2_1 + 0x10u + (r1 << 4);  // (from the original)
    arg0->word_aa0 = r1_1;
    guest::cpu()->r[1] = r1_1;
}

}  // namespace d_00306cf0
GUEST_EXPORT(0x00306cf0, d_00306cf0::f_00306cf0);

// f_00306e2c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00306e2c {

inline constexpr u32 vtable_FdBkSearchCand = 0x008ef344u;
inline constexpr guest::Function<0x00307040, u32(u32, u32, u32)> construct_search_cand_core;

void FdBkSearchCand__FdBkSearchCand_00306e2c(gptr<SearchCandGrid> arg0, u32 r1, u32 r2) {
    construct_search_cand_core(arg0.addr(), r1 * r2, arg0.addr() + 0x1cu);  // (from the original)
    arg0->core.vtable = vtable_FdBkSearchCand;
    arg0->width_14 = s32(u32(r1));
    arg0->height_18 = s32(u32(r2));
    guest::cpu()->r[1] = 0x8ef344u;  // (from the original)
}

}  // namespace d_00306e2c
GUEST_EXPORT_FRAMED(0x00306e2c, d_00306e2c::FdBkSearchCand__FdBkSearchCand_00306e2c, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_00306f5c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00306f5c {

inline constexpr guest::Function<0x0062f950, u32(u32, u32, u32, u32)> weather_class_of_today;

u32 f_00306f5c() {
    return weather_class_of_today(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_00306f5c
GUEST_EXPORT(0x00306f5c, d_00306f5c::f_00306f5c);

// f_00307100: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00307100 {

inline constexpr guest::Function<0x0051d07c, u32(u32, u32)> is_new_year_countdown_time;

u32 f_00307100() {
    return is_new_year_countdown_time(guest::cpu()->r[0], guest::cpu()->r[1]);
}

}  // namespace d_00307100
GUEST_EXPORT(0x00307100, d_00307100::f_00307100);

// f_00307220: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00307220 {

inline constexpr guest::Function<0x002fb328, u32(u32, u32)> get_save_data;
inline constexpr guest::Function<0x00527528, u32(u32, u32, u32, u32)> find_cell_of_id;
inline constexpr guest::Function<0x006a5f0c, u32(u32, u32, u32)> cell_corner;
inline constexpr guest::Function<0x006c5fa0, u32(u32, u32)> tile_height_at_position;
inline constexpr guest::Function<0x006c7540, u32(u32, u32)> height_at;

struct __attribute__((packed)) Frame_00307220 {
    u32 word_0;
    u32 word_4;
    u8 unknown_8[0x4];  // (not read or written by name)
};
GUEST_OFFSET(Frame_00307220, word_0, 0x0);
GUEST_OFFSET(Frame_00307220, word_4, 0x4);
GUEST_SIZE(Frame_00307220, 0xc);

u32 f_00307220(gptr<Float3> arg0, u32 r1, float S0, float S1, float S2) {
    guest::StackFrameOf<Frame_00307220> frame;  // the original's stack frame
    u32 r0 = arg0.addr();
    u32 r0_3 = 0;
    u32 r1_3 = 0;
    u32 r1_4 = 0;
    float S1_3 = 0;
    float S0_4 = 0;
    float S0_6 = 0;
    frame->word_0 = 0;
    frame->word_4 = 0;
    u32 r0_2 = find_cell_of_id(frame.at(0).addr(), frame.at(4).addr(), r1, guest::cpu()->r[3]);
    if (r0_2 != 0) {
        cell_corner(r0, frame->word_0, frame->word_4);
        height_at(r0, 0u);
        float S0_3 = guest::cpu()->s[0];
        arg0->v[1] = S0_3;
        if (r1 == 0x7fu) {  // (from the original)
            r0_3 = 1u;
        } else {
            r0_3 = 0u;
            if (r1 == 0x80u) {  // (from the original)
                r1_3 = 1u;
                goto L_307290;
            }
        }
        r1_3 = 0u;
L_307290:;
        u32 res_1 = r1_3 | r0_3;
        r1_4 = res_1;
        if (res_1 == 0) {
            S1_3 = 16.0f;
            S0_4 = arg0->v[2] + S1_3;
            arg0->v[2] = S0_4;
            if (r1 == 0x85u) {  // (from the original)
                guest::cpu()->s[0] = S0_4;
                guest::cpu()->s[1] = S1_3;
                u32 r0_4 = get_save_data(0x85f2d8u, r1_4);  // (from the original)
                r1_4 = guest::cpu()->r[1];
                S0_4 = guest::cpu()->s[0];
                S1_3 = guest::cpu()->s[1];
                if (*gptr<u8>(r0_4 + 0x62264u) == 0) {  // (from the original)
                    S1_3 = 32.0f;
                    S0_4 = arg0->v[0] - S1_3 * 2.0f;
                    arg0->v[0] = S0_4;
                }
            }
        } else {
            r1_4 = 0x85f2d4u;  // (from the original)
            arg0->v[0] = arg0->v[0] + std::bit_cast<float>(*gptr<u32>(r1_4));
            S1_3 = 16.0f;
            S0_4 = arg0->v[2] + S1_3;
            arg0->v[2] = S0_4;
        }
    } else {
        cell_corner(r0, 0x3au, 0x10u);  // (from the original)
        if (r1 == 0x69u) {  // (from the original)
            tile_height_at_position(r0, 0u);
            S0_6 = guest::cpu()->s[0];
        } else {
            height_at(r0, 0u);
            S0_6 = guest::cpu()->s[0];
        }
        arg0->v[1] = S0_6;
        guest::cpu()->s[0] = S0_6;
        return 0u;
    }
    guest::cpu()->r[1] = r1_4;
    guest::cpu()->s[0] = S0_4;
    guest::cpu()->s[1] = S1_3;
    return 1u;
}

}  // namespace d_00307220
GUEST_EXPORT_FRAMED(0x00307220, d_00307220::f_00307220, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_00307370: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00307370 {

inline constexpr guest::Function<0x007576e4, u32(u32, u32)> current_player_matches;

u32 f_00307370() {
    return current_player_matches(guest::cpu()->r[0], guest::cpu()->r[1]);
}

}  // namespace d_00307370
GUEST_EXPORT(0x00307370, d_00307370::f_00307370);

// f_00307560: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00307560 {

inline constexpr guest::Function<0x00756a7c, u32(u32, u32)> call_00756a7c;

u32 f_00307560() {
    return call_00756a7c(guest::cpu()->r[0], guest::cpu()->r[1]);
}

}  // namespace d_00307560
GUEST_EXPORT(0x00307560, d_00307560::f_00307560);

// f_003075c8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_003075c8 {

inline constexpr guest::Function<0x006f1f14, u32(u32, u32, u32, u32)> call_006f1f14;

void f_003075c8() {
    call_006f1f14(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_003075c8
GUEST_EXPORT(0x003075c8, d_003075c8::f_003075c8);

// f_003075cc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_003075cc {

inline constexpr guest::Function<0x00131294, u32(u32, u32, u32, u32)> Heap__allocate;

u32 f_003075cc(u32 r0) {
    return Heap__allocate(0u, r0, 4u, 1u);
}

}  // namespace d_003075cc
GUEST_EXPORT(0x003075cc, d_003075cc::f_003075cc);

// f_00307688: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00307688 {

struct __attribute__((packed)) Object_00307688_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_00307688_0, word_0, 0x0);

struct __attribute__((packed)) Object_00307688_1 {
    u32 word_0;
};
GUEST_OFFSET(Object_00307688_1, word_0, 0x0);

struct __attribute__((packed)) Local_00307688_r1_1 {
    u32 word_0;
    u8 unknown_4[0x4];  // (not used here)
    u32 word_8;
};
GUEST_OFFSET(Local_00307688_r1_1, word_0, 0x0);
GUEST_OFFSET(Local_00307688_r1_1, word_8, 0x8);

inline constexpr guest::Function<0x0031c31d, u32(u32, u32, u32, u32)> call_0031c31c;
inline constexpr guest::Function<0x0031c39d, u32(u32, u32, u32)> call_0031c39c;
inline constexpr guest::Function<0x0031c75d, u32(u32, u32)> call_0031c75c;

u32 f_00307688(gptr<Object_00307688_0> arg0, gptr<Object_00307688_1> arg1) {
    u32 r0_1 = arg1->word_0;
    gptr<Local_00307688_r1_1> r1_1 = gptr<Local_00307688_r1_1>(r0_1 - 0xcu);  // (from the original)
    if ((r1_1->word_0 + 1u) != 0) {
        arg0->word_0 = r0_1;
        call_0031c75c(r0_1 - 0xcu, r1_1.addr());  // (from the original)
    } else {
        u32 r6_1 = r1_1->word_8;
        u32 r0_3 = call_0031c31c(arg0.addr(), r6_1, r6_1, guest::cpu()->r[3]);
        arg0->word_0 = r0_3 + 0xcu;  // (from the original)
        call_0031c39c(r0_3 + 0xcu, arg1->word_0, r6_1);  // (from the original)
    }
    return arg0.addr();
}

}  // namespace d_00307688
GUEST_EXPORT_FRAMED(0x00307689, d_00307688::f_00307688, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_003076c4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_003076c4 {

inline constexpr guest::Function<0x0058def8, u32(u32, u32, u32, u32)> call_0058def8;

u32 f_003076c4() {
    return call_0058def8(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_003076c4
GUEST_EXPORT(0x003076c4, d_003076c4::f_003076c4);

// f_003076c8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_003076c8 {

inline constexpr guest::Function<0x0031c3a9, u32(u32, u32, u32, u32)> call_0031c3a8;

u32 f_003076c8(u32 r0) {
    call_0031c3a8(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    return r0;
}

}  // namespace d_003076c8
GUEST_EXPORT_FRAMED(0x003076c9, d_003076c8::f_003076c8, 0x4010);  // pushes {r4, lr} first, as the original

// f_0030774c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0030774c {

struct __attribute__((packed)) Object_0030774c_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_0030774c_0, word_0, 0x0);

inline constexpr guest::Function<0x00307889, u32(u32, u32, u32, u32)> call_00307888;

u32 f_0030774c(gptr<Object_0030774c_0> arg0) {
    call_00307888(arg0->word_0, 0x3076c9u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    return arg0.addr();
}

}  // namespace d_0030774c
GUEST_EXPORT_FRAMED(0x0030774d, d_0030774c::f_0030774c, 0x4010);  // pushes {r4, lr} first, as the original

// f_003077b8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_003077b8 {

inline constexpr guest::Function<0x00756380, u32(u32, u32, u32, u32)> call_00756380;

u32 f_003077b8() {
    return call_00756380(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_003077b8
GUEST_EXPORT(0x003077b8, d_003077b8::f_003077b8);

// f_00307838: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00307838 {

inline constexpr guest::Function<0x0011c121, u32(u32, u32, u32, u32)> call_0011c120;

struct __attribute__((packed)) Frame_00307838 {
    u32 word_0;
};
GUEST_OFFSET(Frame_00307838, word_0, 0x0);
GUEST_SIZE(Frame_00307838, 0x4);

u32 f_00307838(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_00307838> frame;  // the original's stack frame
    frame->word_0 = r3;
    frame->word_0 = r3;
    u32 r0_1 = call_0011c120(r1, r0, 8u, r2);
    return r0_1;
}

}  // namespace d_00307838
GUEST_EXPORT_FRAMED(0x00307839, d_00307838::f_00307838, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_0030784c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0030784c {

struct __attribute__((packed)) Object_0030784c_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_0030784c_0, word_0, 0x0);

struct __attribute__((packed)) Object_0030784c_1 {
    u32 word_0;
};
GUEST_OFFSET(Object_0030784c_1, word_0, 0x0);

struct __attribute__((packed)) Local_0030784c_r0_2 {
    u32 word_0;
    u8 unknown_4[0x4];  // (not used here)
    u32 word_8;
};
GUEST_OFFSET(Local_0030784c_r0_2, word_0, 0x0);
GUEST_OFFSET(Local_0030784c_r0_2, word_8, 0x8);

inline constexpr guest::Function<0x0031c3a9, u32(u32, u32, u32)> call_0031c3a8;
inline constexpr guest::Function<0x0031c75d, u32(u32, u32, u32, u32)> call_0031c75c;
inline constexpr guest::Function<0x0031c771, u32(u32, u32, u32, u32)> call_0031c770;

struct __attribute__((packed)) Frame_0030784c {
    u32 word_0;
};
GUEST_OFFSET(Frame_0030784c, word_0, 0x0);
GUEST_SIZE(Frame_0030784c, 0x4);

void f_0030784c(gptr<Object_0030784c_0> arg0, gptr<Object_0030784c_1> arg1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_0030784c> frame;  // the original's stack frame
    frame->word_0 = r3;
    u32 r0_1 = arg1->word_0;
    gptr<Local_0030784c_r0_2> r0_2 = gptr<Local_0030784c_r0_2>(r0_1 - 0xcu);  // (from the original)
    u32 r1_1 = r0_2->word_0 + 1u;
    if (r1_1 != 0) {
        call_0031c75c(r0_2.addr(), r1_1, r2, r0_1);
        call_0031c3a8(arg0.addr(), guest::cpu()->r[1], r2);
        arg0->word_0 = arg1->word_0;
        return;
    }
    if (arg0.addr() == arg1.addr()) {
        guest::cpu()->r[1] = r1_1;
        return;
    }
    u32 r2_1 = *gptr<u32>(arg0->word_0 - 4u);
    frame->word_0 = r0_2->word_8;
    call_0031c770(arg0.addr(), 0u, r2_1, r0_1);
}

}  // namespace d_0030784c
GUEST_EXPORT_FRAMED(0x0030784d, d_0030784c::f_0030784c, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_00307888: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00307888 {

inline constexpr guest::Function<0x0011c0fb, u32(u32, u32, u32, u32)> call_0011c0fa;
inline constexpr guest::Function<0x002f88b8, u32()> release_owned_object;

u32 f_00307888() {
    call_0011c0fa(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    release_owned_object();
    return guest::cpu()->r[0];
}

}  // namespace d_00307888
GUEST_EXPORT_FRAMED(0x00307889, d_00307888::f_00307888, 0x4010);  // pushes {r4, lr} first, as the original

// f_00307974: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00307974 {

inline constexpr guest::Function<0x0069a764, u32(u32, u32, u32)> call_0069a764;

u32 f_00307974() {
    return call_0069a764(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2]);
}

}  // namespace d_00307974
GUEST_EXPORT(0x00307974, d_00307974::f_00307974);

// f_00307978: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00307978 {

inline constexpr guest::Function<0x002fad17, u32(u32, u32, u32, u32)> call_002fad16;

u32 f_00307978(u32 r0, u32 r1) {
    u32 r0_1 = call_002fad16(0xaf75ecu, r0, r1, guest::cpu()->r[3]);  // (from the original)
    return r0_1;
}

}  // namespace d_00307978
GUEST_EXPORT_FRAMED(0x00307979, d_00307978::f_00307978, 0x4010);  // pushes {r4, lr} first, as the original

// f_00307a00: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00307a00 {

struct __attribute__((packed)) Local_00307a00_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Local_00307a00_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_00307a00_ea_1, word_4, 0x4);
GUEST_OFFSET(Local_00307a00_ea_1, word_8, 0x8);
GUEST_OFFSET(Local_00307a00_ea_1, word_c, 0xc);

struct __attribute__((packed)) Local_00307a00_ea_2 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_00307a00_ea_2, word_0, 0x0);
GUEST_OFFSET(Local_00307a00_ea_2, word_4, 0x4);

inline constexpr guest::Function<0x002f7cdd, u32(u32, u32, u32)> vfprintf;

u32 f_00307a00(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    gptr<Local_00307a00_ea_1> ea_1 = gptr<Local_00307a00_ea_1>(r13 - 0x10);  // (from the original)
    ea_1->word_0 = r0;
    ea_1->word_4 = r1;
    ea_1->word_8 = r2;
    ea_1->word_c = r3;
    gptr<Local_00307a00_ea_2> ea_2 = gptr<Local_00307a00_ea_2>(ea_1.addr() - 8);
    ea_2->word_0 = r4;
    ea_2->word_4 = r14;
    r13 = ea_2.addr();
    u32 r0_1 = *gptr<u32>(r13 + 0xcu);  // (from the original)
    guest::cpu()->r[13] = r13;
    u32 r0_2 = vfprintf(r0_1, r0, r13 + 0x10u);  // (from the original)
    u32 r4_1 = *gptr<u32>(r13);
    r13 += 4;
    u32 r3_1 = *gptr<u32>(r13);
    r13 += 0x14u;  // (from the original)
    guest::cpu()->r[4] = r4_1;
    guest::cpu()->r[13] = r13;
    return r0_2;
}

}  // namespace d_00307a00
GUEST_EXPORT(0x00307a01, d_00307a00::f_00307a00);

// f_00307ac0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00307ac0 {

inline constexpr guest::Function<0x0076620c, u32(u32, u32)> save_state_6e2a6_is_1;

u32 f_00307ac0() {
    return save_state_6e2a6_is_1(guest::cpu()->r[0], guest::cpu()->r[1]);
}

}  // namespace d_00307ac0
GUEST_EXPORT(0x00307ac0, d_00307ac0::f_00307ac0);

// f_00307c40: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00307c40 {

inline constexpr guest::Function<0x0070b460, u32(u32, u32)> save_excess_6e2a8;

u32 f_00307c40() {
    return save_excess_6e2a8(guest::cpu()->r[0], guest::cpu()->r[1]);
}

}  // namespace d_00307c40
GUEST_EXPORT(0x00307c40, d_00307c40::f_00307c40);

// f_00307c44: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00307c44 {

inline constexpr guest::Function<0x006a51ec, u32(u32, u32)> call_006a51ec;

void f_00307c44() {
    call_006a51ec(guest::cpu()->r[0], guest::cpu()->r[1]);
}

}  // namespace d_00307c44
GUEST_EXPORT(0x00307c44, d_00307c44::f_00307c44);

// f_00307c48: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00307c48 {

inline constexpr guest::Function<0x0051dacc, u32(u32, u32, u32, u32)> call_0051dacc;

void f_00307c48() {
    call_0051dacc(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_00307c48
GUEST_EXPORT(0x00307c48, d_00307c48::f_00307c48);

// f_00307c4c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00307c4c {

inline constexpr guest::Function<0x0051d710, u32(u32, u32, u32, u32)> call_0051d710;

void f_00307c4c() {
    call_0051d710(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_00307c4c
GUEST_EXPORT(0x00307c4c, d_00307c4c::f_00307c4c);

// f_00307c54: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00307c54 {

inline constexpr guest::Function<0x0057b988, u32(u32, u32)> Actor__virtual_4;
inline constexpr guest::Function<0x005bf748, u32(u32, u32)> call_005bf748;

u32 AcInsectFishPlate__virtual_4(u32 r0, u32 r1) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    if (r1 == 2u) {
        call_005bf748(0x9ab57cu, r0 + 0x48u);  // (from the original)
    }
    frame.release();
    return Actor__virtual_4(r0, r1);
}

}  // namespace d_00307c54
GUEST_EXPORT(0x00307c54, d_00307c54::AcInsectFishPlate__virtual_4);

// f_00307fdc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00307fdc {

struct __attribute__((packed)) Object_00307fdc_0 {
    u8 unknown_0[0xc];  // (not used here)
    u32 word_c;
    u32 word_10;
};
GUEST_OFFSET(Object_00307fdc_0, word_c, 0xc);
GUEST_OFFSET(Object_00307fdc_0, word_10, 0x10);

struct __attribute__((packed)) Local_00307fdc_r2_1 {
    u8 unknown_0[0xc];  // (not used here)
    u32 word_c;
    u8 unknown_10[0xe8];  // (not used here)
    u32 word_f8;
};
GUEST_OFFSET(Local_00307fdc_r2_1, word_c, 0xc);
GUEST_OFFSET(Local_00307fdc_r2_1, word_f8, 0xf8);


u32 f_00307fdc(gptr<Object_00307fdc_0> arg0, u32 r1) {
    u32 r0 = arg0.addr();
    gptr<Local_00307fdc_r2_1> r2_1 = gptr<Local_00307fdc_r2_1>(arg0->word_c);
    if (r2_1.addr() != 0) {
        r0 = arg0->word_10;
        if (r0 != r2_1->word_c) {
            r2_1 = gptr<Local_00307fdc_r2_1>(0u);
        }
    } else {
        r2_1 = gptr<Local_00307fdc_r2_1>(0u);
    }
    if (r2_1.addr() != 0) {
        r2_1->word_f8 = r1;
    }
    return r0;
}

}  // namespace d_00307fdc
GUEST_EXPORT(0x00307fdc, d_00307fdc::f_00307fdc);

// f_00308008: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00308008 {

inline constexpr guest::Function<0x0051ddb8, u32(u32, u32, u32, u32)> Countdown__extend;

void f_00308008() {
    Countdown__extend(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_00308008
GUEST_EXPORT(0x00308008, d_00308008::f_00308008);

// f_0030800c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0030800c {


u32 f_0030800c(u32 r0, u32 r1) {
    if (r1 >= 0x28u) {  // (from the original)
        guest::cpu()->r[1] = r1;
        return 0u;
    }
    u32 r0_1 = *gptr<u8>(r0 + (r1 >> 3));
    u32 r1_1 = r1 & 7u;
    guest::cpu()->r[1] = r1_1;
    return lsr_r(r0_1, r1_1 & 0xff) & 1u;  // (from the original)
}

}  // namespace d_0030800c
GUEST_EXPORT(0x0030800c, d_0030800c::f_0030800c);

// f_0030802c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0030802c {

struct __attribute__((packed)) Object_0030802c_0 {
    u8 unknown_0[0x4];  // (not used here)
    u8 byte_4;
    u8 byte_5;
    u8 byte_6;
};
GUEST_OFFSET(Object_0030802c_0, byte_4, 0x4);
GUEST_OFFSET(Object_0030802c_0, byte_5, 0x5);
GUEST_OFFSET(Object_0030802c_0, byte_6, 0x6);

inline guest::global<u32, 0x00953874> global_00953874;
inline constexpr guest::Function<0x0020649c, u32(u32, u32, u32)> apply_entry_release;
inline constexpr guest::Function<0x0029cf30, u32(u32, u32, u32, u32)> finish_entry_release;
inline constexpr guest::Function<0x002f74c8, u32(u32)> read_global_byte_2;
inline constexpr guest::Function<0x00300904, u32(u32, u32, u32, u32)> main_object_value;
inline constexpr guest::Function<0x00305f44, u32(u32)> query_current_main_object;
inline constexpr guest::Function<0x0061a7a0, u32(u32)> call_0061a7a0;
inline constexpr guest::Function<0x006249b0, u32(u32, u32, u32, u32)> send_message;

struct __attribute__((packed)) Frame_0030802c {
    u8 byte_0;
    u8 byte_1;
    u8 byte_2;
    u8 byte_3;
    u8 byte_4;
    u8 byte_5;
    u8 byte_6;
    u8 unknown_7[0x19];  // (not read or written by name)
};
GUEST_OFFSET(Frame_0030802c, byte_0, 0x0);
GUEST_OFFSET(Frame_0030802c, byte_1, 0x1);
GUEST_OFFSET(Frame_0030802c, byte_2, 0x2);
GUEST_OFFSET(Frame_0030802c, byte_3, 0x3);
GUEST_OFFSET(Frame_0030802c, byte_4, 0x4);
GUEST_OFFSET(Frame_0030802c, byte_5, 0x5);
GUEST_OFFSET(Frame_0030802c, byte_6, 0x6);
GUEST_SIZE(Frame_0030802c, 0x20);

u32 f_0030802c(gptr<Object_0030802c_0> arg0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_0030802c> frame;  // the original's stack frame
    u32 r0 = arg0.addr();
    u32 r0_1 = arg0->byte_5;
    if (2u != r0_1 >> 6) {
        u32 r5_1 = arg0->byte_4;
        u32 r0_2 = main_object_value(r0_1, r1, r2, r3);
        if (r0_2 != 0) {
            u32 r0_3 = call_0061a7a0(r0_2);
            if (r0_3 == 0) {
                goto L_3080ac;
            }
            u32 r0_4 = read_global_byte_2(r0_3);
            if (r0_4 != r5_1) {
                goto L_3080ac;
            }
        }
        arg0->byte_5 = u8(u32(arg0->byte_5) & ~7u | 4u);
        arg0->byte_6 = u8(u32(arg0->byte_6) + 1u);
        frame.release();
        return finish_entry_release(r0, r1, 1u, guest::cpu()->r[3]);
L_3080ac:;
        arg0->byte_5 = u8(u32(arg0->byte_5) & ~0xc0u | 0x40u);  // (from the original)
        arg0->byte_6 = u8(u32(arg0->byte_6) + 1u);
        finish_entry_release(r0, r1, 1u, guest::cpu()->r[3]);
        frame->byte_2 = 0;
        frame->byte_3 = 0;
        frame->byte_4 = 0;
        u32 r1_3 = (r1 & 0xf8u) >> 3;  // (from the original)
        frame->byte_5 = 0;
        frame->byte_0 = u8(2u | r1 << 5);
        frame->byte_6 = 0;
        frame->byte_1 = u8(r1_3);
        frame->byte_1 = u8(r1_3 | u32(arg0->byte_5) << 5);
        u32 r0_5 = send_message(0x40u, 4u, frame.at(0).addr(), 7u);  // (from the original)
        r0_1 = query_current_main_object(r0_5);
        r1 = guest::cpu()->r[1];
        if (r0_1 == 0) {
            r0_1 = *global_00953874;
            if (r0_1 != 0) {
                u32 r0_6 = r0_1 + 0x10u;  // (from the original)
                u32 r1_5 = (u32(frame->byte_0) >> 5) + (u32(frame->byte_1) << 3) & 0xffu;  // (from the original)
                if (r1_5 < 0x40u) {  // (from the original)
                    r0_6 += r1_5;
                }
                r0_1 = apply_entry_release(r0_6, frame.at(0).addr(), 0u);
                r1 = guest::cpu()->r[1];
            }
        }
    }
    guest::cpu()->r[1] = r1;
    return r0_1;
}

}  // namespace d_0030802c
GUEST_EXPORT(0x0030802c, d_0030802c::f_0030802c);

// f_00308198: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00308198 {

struct __attribute__((packed)) Object_00308198_0 {
    u8 unknown_0[0x5];  // (not used here)
    u8 byte_5;
};
GUEST_OFFSET(Object_00308198_0, byte_5, 0x5);


void f_00308198(gptr<Object_00308198_0> arg0, u32 r1) {
    arg0->byte_5 = u8(u32(arg0->byte_5) & ~0x38u | (r1 & 7u) << 3);  // (from the original)
}

}  // namespace d_00308198
GUEST_EXPORT(0x00308198, d_00308198::f_00308198);

// f_00308380: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00308380 {

struct __attribute__((packed)) Object_00308380_0 {
    u8 unknown_0[0x2c];  // (not used here)
    u16 half_2c;
    u8 byte_2e;
};
GUEST_OFFSET(Object_00308380_0, half_2c, 0x2c);
GUEST_OFFSET(Object_00308380_0, byte_2e, 0x2e);

struct __attribute__((packed)) Object_00308380_1 {
    u16 half_0;
};
GUEST_OFFSET(Object_00308380_1, half_0, 0x0);

struct __attribute__((packed)) Object_00308380_2 {
    u8 byte_0;
};
GUEST_OFFSET(Object_00308380_2, byte_0, 0x0);

inline constexpr guest::Function<0x0030f52c, u32(u32, u32)> call_0030f52c;

u32 f_00308380(gptr<Object_00308380_0> arg0, gptr<Object_00308380_1> arg1, gptr<Object_00308380_2> arg2, u32 r3) {
    call_0030f52c(arg0.addr(), r3);
    call_0030f52c(arg0.addr() + 0x16u, r3);  // (from the original)
    arg0->half_2c = arg1->half_0;
    u32 r0_2 = arg2->byte_0;
    arg0->byte_2e = u8(r0_2);
    return r0_2;
}

}  // namespace d_00308380
GUEST_EXPORT_FRAMED(0x00308380, d_00308380::f_00308380, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_003084f8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_003084f8 {

struct __attribute__((packed)) Local_003084f8_r0_7 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Local_003084f8_r0_7, word_0, 0x0);
GUEST_OFFSET(Local_003084f8_r0_7, word_4, 0x4);
GUEST_OFFSET(Local_003084f8_r0_7, word_8, 0x8);
GUEST_OFFSET(Local_003084f8_r0_7, word_c, 0xc);

struct __attribute__((packed)) Local_003084f8_r4_1 {
    u8 unknown_0[0xe];  // (not used here)
    u16 half_e;
    u8 byte_10;
};
GUEST_OFFSET(Local_003084f8_r4_1, half_e, 0xe);
GUEST_OFFSET(Local_003084f8_r4_1, byte_10, 0x10);

inline guest::global<u32, 0x0088ec5c> global_0088ec5c;
inline constexpr guest::Function<0x001df69c, u32(u32, u32, u32)> call_001df69c;
inline constexpr guest::Function<0x002fc8e8, u32(u32, u32, u32)> copy_item_002fc8e8;
inline constexpr guest::Function<0x00300800, u32(u32)> store_constants_300800_00300800;
inline constexpr guest::Function<0x00303cdc, u32(u32)> clear_inner;
inline constexpr guest::Function<0x003052f0, u32(u32, u32, u32, u32)> clear_identity_with_flags;
inline constexpr guest::Function<0x0030589c, u32(u32)> PlayerRef__clear;
inline constexpr guest::Function<0x003084c8, u32(u32)> do_nothing_003084c8;
inline constexpr guest::Function<0x005b7680, u32(u32, u32)> construct_word_ptr_sv_17_005b7680;
inline constexpr guest::Function<0x005ea640, u32(u32)> call_virtual_7_5ea640;

void init_sub_object(u32 r0, u32 r1, u32 r2) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 r4 = r0;
    clear_identity_with_flags(r0, r1, r2, guest::cpu()->r[3]);
    construct_word_ptr_sv_17_005b7680(frame.at(0).addr(), r4 + 0x2eu);  // (from the original)
    call_virtual_7_5ea640(frame.at(0).addr());
    do_nothing_003084c8(frame.at(0).addr());
    r2 = guest::cpu()->r[2];
    u32 r6 = r4 + 0x62u;  // (from the original)
    u32 r5 = 0u;
    do {
        copy_item_002fc8e8((r5 << 2) + r6, 0x95bfdcu, r2);  // (from the original)
        r2 = guest::cpu()->r[2];
        r5 += 1u;
        guest::preempt();
    } while (r5 < 8u);
    r6 = r4 + 0x82u;  // (from the original)
    r5 = 0u;
    do {
        copy_item_002fc8e8((r5 << 2) + r6, 0x95bfdcu, r2);  // (from the original)
        r2 = guest::cpu()->r[2];
        r5 += 1u;
        guest::preempt();
    } while (r5 < 8u);
    copy_item_002fc8e8(r4 + 0xa2u, 0x95bfdcu, r2);  // (from the original)
    gptr<Local_003084f8_r0_7> r0_7 = gptr<Local_003084f8_r0_7>(r4 + 0xa6u);  // (from the original)
    r0_7->word_0 = *global_0088ec5c;
    r0_7->word_4 = *global_0088ec5c;
    u32 r2_4 = *global_0088ec5c;
    r0_7->word_8 = r2_4;
    r0_7->word_c = *global_0088ec5c;
    call_001df69c(r0_7.addr() + 0x10u, 0x88ec5cu, r2_4);  // (from the original)
    PlayerRef__clear(r4 + 0xc0u);  // (from the original)
    clear_inner(r4 + 0xd6u);  // (from the original)
    store_constants_300800_00300800(r4 + 0xdeu);  // (from the original)
    store_constants_300800_00300800(r4 + 0xe2u);  // (from the original)
    store_constants_300800_00300800(r4 + 0xe6u);  // (from the original)
    store_constants_300800_00300800(r4 + 0xeau);  // (from the original)
    gptr<Local_003084f8_r4_1> r4_1 = gptr<Local_003084f8_r4_1>(r4 + 0xe0u);  // (from the original)
    u32 r1_4 = ~0u;
    r4_1->half_e = u16(r1_4);
    r4_1->byte_10 = 0x31;  // (from the original)
    guest::cpu()->r[1] = r1_4;
}

}  // namespace d_003084f8
GUEST_EXPORT_FRAMED(0x003084f9, d_003084f8::init_sub_object, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_003085b4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_003085b4 {

inline constexpr guest::Function<0x00716760, u32(u32, u32)> do_nothing_00716760;

u32 f_003085b4() {
    return do_nothing_00716760(guest::cpu()->r[0], guest::cpu()->r[1]);
}

}  // namespace d_003085b4
GUEST_EXPORT(0x003085b4, d_003085b4::f_003085b4);

// f_003085b8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_003085b8 {

inline constexpr guest::Function<0x007254c8, u32(u32, u32)> read_field_u8_0x4_;

u32 f_003085b8() {
    return read_field_u8_0x4_(guest::cpu()->r[0], guest::cpu()->r[1]);
}

}  // namespace d_003085b8
GUEST_EXPORT(0x003085b8, d_003085b8::f_003085b8);

// f_00308728: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00308728 {

struct __attribute__((packed)) Local_00308728_ea_1 {
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
GUEST_OFFSET(Local_00308728_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_00308728_ea_1, word_4, 0x4);
GUEST_OFFSET(Local_00308728_ea_1, word_8, 0x8);
GUEST_OFFSET(Local_00308728_ea_1, word_c, 0xc);
GUEST_OFFSET(Local_00308728_ea_1, word_10, 0x10);
GUEST_OFFSET(Local_00308728_ea_1, word_14, 0x14);
GUEST_OFFSET(Local_00308728_ea_1, word_18, 0x18);
GUEST_OFFSET(Local_00308728_ea_1, word_1c, 0x1c);
GUEST_OFFSET(Local_00308728_ea_1, word_20, 0x20);

inline constexpr guest::Function<0x002fbd54, u32(u32, u32, u32, u32)> PersonalId__is_set;
inline constexpr guest::Function<0x003009cc, u32(u32)> word_fix_9_virtual_0;
inline constexpr guest::Function<0x0030846c, u32(u32, u32)> call_virtual_5;
inline constexpr guest::Function<0x003084c8, u32(u32)> do_nothing_003084c8;
inline constexpr guest::Function<0x003084f9, u32(u32)> init_sub_object;
inline constexpr guest::Function<0x0030878d, u32(u32, u32, u32, u32)> call_0030878c;
inline constexpr guest::Function<0x003088bc, u32(u32, u32)> script__WordFix_9u___WordFix_003088bc;
inline constexpr guest::Function<0x0030893c, u32(u32)> member_address_0x50_;
inline constexpr guest::Function<0x00308944, u32(u32, u32)> construct_word_ptr_sv_9_00308944;

u32 f_00308728(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    gptr<Local_00308728_ea_1> ea_1 = gptr<Local_00308728_ea_1>(r13 - 0x24);  // (from the original)
    ea_1->word_0 = r0;
    ea_1->word_4 = r1;
    ea_1->word_8 = r2;
    ea_1->word_c = r3;
    ea_1->word_10 = r4;
    ea_1->word_14 = r5;
    ea_1->word_18 = r6;
    ea_1->word_1c = r7;
    ea_1->word_20 = r14;
    r13 = ea_1.addr() - 0x44u;  // (from the original)
    u32 r7_1 = *gptr<u32>(r13 + 0x68u);  // (from the original)
    u32 r4_1 = r1 + 0x55a6u;  // (from the original)
    guest::cpu()->r[13] = r13;
    u32 r0_1 = PersonalId__is_set(r4_1, r1, r2, r3);
    if (r0_1 != 0) {
        u32 r0_2 = *gptr<u32>(r13 + 0x44u);  // (from the original)
        guest::cpu()->r[13] = r13;
        init_sub_object(r0_2);
        u32 r3_2 = *gptr<u32>(r13 + 0x4cu);  // (from the original)
        u32 r0_3 = *gptr<u32>(r13 + 0x44u);  // (from the original)
        *gptr<u32>(r13 + 4u) = r7_1;
        *gptr<u32>(r13) = r3;
        guest::cpu()->r[13] = r13;
        call_0030878c(r0_3, r1, r3_2, r3_2);
        guest::cpu()->r[13] = r13;
        script__WordFix_9u___WordFix_003088bc(r13 + 8u, r4_1);
        u32 r0_5 = *gptr<u32>(r13 + 0x44u);  // (from the original)
        guest::cpu()->r[13] = r13;
        u32 r0_6 = member_address_0x50_(r0_5);
        guest::cpu()->r[13] = r13;
        construct_word_ptr_sv_9_00308944(r13 + 0x34u, r0_6);  // (from the original)
        u32 r0_8 = r13 + 0x34u;  // (from the original)
        guest::cpu()->r[13] = r13;
        call_virtual_5(r0_8, r13 + 8u);
        guest::cpu()->r[13] = r13;
        do_nothing_003084c8(r0_8);
        guest::cpu()->r[13] = r13;
        word_fix_9_virtual_0(r13 + 8u);
        r0_1 = 1u;
    }
    r13 += 0x54u;  // (from the original)
    u32 r4_2 = *gptr<u32>(r13);
    u32 r5_1 = *gptr<u32>(r13 + 4);
    u32 r6_1 = *gptr<u32>(r13 + 8);
    u32 r7_2 = *gptr<u32>(r13 + 0xc);  // (from the original)
    u32 tpc_1 = *gptr<u32>(r13 + 0x10);  // (from the original)
    r13 += 0x14;  // (from the original)
    guest::cpu()->r[4] = r4_2;
    guest::cpu()->r[5] = r5_1;
    guest::cpu()->r[6] = r6_1;
    guest::cpu()->r[7] = r7_2;
    guest::cpu()->r[13] = r13;
    return r0_1;
}

}  // namespace d_00308728
GUEST_EXPORT(0x00308729, d_00308728::f_00308728);

// f_003088bc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_003088bc {

struct __attribute__((packed)) Object_003088bc_0 {
    u32 word_0;
    u8 unknown_4[0x14];  // (not used here)
    u16 half_18;
};
GUEST_OFFSET(Object_003088bc_0, word_0, 0x0);
GUEST_OFFSET(Object_003088bc_0, half_18, 0x18);

inline constexpr u32 vtable_script__WordFix_9u_ = 0x0090a3e8u;
inline constexpr guest::Function<0x002f825c, u32(u32, u32)> clear_aligned;
inline constexpr guest::Function<0x003083bc, u32(u32, u32, u32, u32)> script__construct_word_ptr;
inline constexpr guest::Function<0x0056d488, u32(u32, u32, u32, u32)> call_0056d488;
inline constexpr guest::Function<0x005f4bfc, u32(u32, u32)> construct_script_word;

void script__WordFix_9u___WordFix_003088bc(gptr<Object_003088bc_0> arg0, u32 r1, u32 r2_unused, u32 r3) {
    u32 r0 = arg0.addr();
    u32 res_1 = 0;
    u32 r3_4 = 0;
    u32 r5 = r1;
    script__construct_word_ptr(r0, r0 + 0x18u, 9u, r3);  // (from the original)
    arg0->word_0 = vtable_script__WordFix_9u_;
    construct_script_word(r0 + 0xcu, 0x90a3e8u);  // (from the original)
    u32 r4 = r0 + 0u;
    clear_aligned(r0 + 0x18u, 0x12u);  // (from the original)
    r1 = 0x8906ecu;  // (from the original)
    r0 = r4 + 0x18u;  // (from the original)
    arg0->half_18 = *gptr<u16>(r1);
    u32 r2 = 4u;
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
    call_0056d488(r4, r5 + 2u, u32(*gptr<u8>(r5 + 0x14u)) & 1u, r3_4);  // (from the original)
}

}  // namespace d_003088bc
GUEST_EXPORT_FRAMED(0x003088bc, d_003088bc::script__WordFix_9u___WordFix_003088bc, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_003089cc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_003089cc {

inline constexpr guest::Function<0x005baa00, u32(u32, u32, u32, u32)> call_005baa00;

void f_003089cc() {
    call_005baa00(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_003089cc
GUEST_EXPORT(0x003089cc, d_003089cc::f_003089cc);

// f_003089d4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_003089d4 {

struct __attribute__((packed)) Local_003089d4_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u32 word_18;
    u32 word_1c;
};
GUEST_OFFSET(Local_003089d4_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_003089d4_ea_1, word_4, 0x4);
GUEST_OFFSET(Local_003089d4_ea_1, word_8, 0x8);
GUEST_OFFSET(Local_003089d4_ea_1, word_c, 0xc);
GUEST_OFFSET(Local_003089d4_ea_1, word_10, 0x10);
GUEST_OFFSET(Local_003089d4_ea_1, word_14, 0x14);
GUEST_OFFSET(Local_003089d4_ea_1, word_18, 0x18);
GUEST_OFFSET(Local_003089d4_ea_1, word_1c, 0x1c);

inline constexpr guest::Function<0x002fb328, u32(u32, u32)> get_save_data;
inline constexpr guest::Function<0x00301e20, u32(u32, u32, u32, u32)> is_villager_record;
inline constexpr guest::Function<0x00301e6c, u32(u32, u32, u32, u32)> entry_34_at;
inline constexpr guest::Function<0x0030bc44, u32(u32)> call_0030bc44;
inline constexpr guest::Function<0x0030bc91, u32(u32, u32, u32, u32)> call_0030bc90;
inline constexpr guest::Function<0x0030bd9d, u32(u32, u32, u32, u32)> call_0030bd9c;

struct __attribute__((packed)) Frame_003089d4 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u32 word_18;
    u32 word_1c;
};
GUEST_OFFSET(Frame_003089d4, word_0, 0x0);
GUEST_OFFSET(Frame_003089d4, word_4, 0x4);
GUEST_OFFSET(Frame_003089d4, word_8, 0x8);
GUEST_OFFSET(Frame_003089d4, word_c, 0xc);
GUEST_OFFSET(Frame_003089d4, word_10, 0x10);
GUEST_OFFSET(Frame_003089d4, word_14, 0x14);
GUEST_OFFSET(Frame_003089d4, word_18, 0x18);
GUEST_OFFSET(Frame_003089d4, word_1c, 0x1c);
GUEST_SIZE(Frame_003089d4, 0x20);

u32 f_003089d4(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_003089d4> frame;  // the original's stack frame
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r14 = guest::cpu()->r[14];
    u32 r4_2 = 0;
    u32 r5_3 = 0;
    u32 r6_2 = 0;
    u32 r7_2 = 0;
    u32 tpc_2 = 0;
    gptr<Local_003089d4_ea_1> ea_1 = gptr<Local_003089d4_ea_1>(frame.at(0).addr());
    ea_1->word_0 = r0;
    ea_1->word_4 = r1;
    ea_1->word_8 = r2;
    ea_1->word_c = r4;
    ea_1->word_10 = r5;
    ea_1->word_14 = r6;
    ea_1->word_18 = r7;
    ea_1->word_1c = r14;
    r7 = 0xau;  // (from the original)
    r5 = frame->word_0;
    r6 = 1u;
    r4 = 0u;
L_3089de:;
    u32 r0_1 = is_villager_record(r5, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0_1 != 0 && (r6 == 0 || *gptr<u8>(r5 + (0x25u << 8) + 8u) != 6u)) {  // (from the original)
        r4 += 1u;
        r5 += 0x2518u;  // (from the original)
        if (r4 < r7) {
            guest::preempt();
            goto L_3089de;
        }
        r4_2 = frame->word_c;
        r5_3 = frame->word_10;
        r6_2 = frame->word_14;
        r7_2 = frame->word_18;
        tpc_2 = frame->word_1c;
        guest::cpu()->r[4] = r4_2;
        guest::cpu()->r[5] = r5_3;
        guest::cpu()->r[6] = r6_2;
        guest::cpu()->r[7] = r7_2;
        return ~0u;
    }
    if (r4 < 0xau) {  // (from the original)
        u32 r1_1 = *gptr<u16>(frame->word_4);
        entry_34_at(0xa83aecu, r1_1, r2, r3);  // (from the original)
        u32 r0_2 = *gptr<u16>(frame->word_4);
        u32 r0_3 = call_0030bc44(r0_2);
        if (r0_3 != 0) {
            u32 r1_3 = frame->word_0;
            u32 r0_4 = 0x2518u * r4;  // (from the original)
            u32 r5_1 = r0_4 + r1_3;
            u32 r0_5 = get_save_data(r0_4, r1_3);
            u32 r2_3 = frame->word_8;
            u32 r1_4 = *gptr<u16>(frame->word_4);
            call_0030bd9c(r5_1, r1_4, r2_3, r0_5 + 0x621b8u);  // (from the original)
            call_0030bc90(frame->word_0, r5_1, r4, frame->word_8);
            u32 r4_1 = frame->word_c;
            u32 r5_2 = frame->word_10;
            u32 r6_1 = frame->word_14;
            u32 r7_1 = frame->word_18;
            u32 tpc_1 = frame->word_1c;
            guest::cpu()->r[4] = r4_1;
            guest::cpu()->r[5] = r5_2;
            guest::cpu()->r[6] = r6_1;
            guest::cpu()->r[7] = r7_1;
            return r4;
        }
    }
    r4_2 = frame->word_c;
    r5_3 = frame->word_10;
    r6_2 = frame->word_14;
    r7_2 = frame->word_18;
    tpc_2 = frame->word_1c;
    guest::cpu()->r[4] = r4_2;
    guest::cpu()->r[5] = r5_3;
    guest::cpu()->r[6] = r6_2;
    guest::cpu()->r[7] = r7_2;
    return ~0u;
}

}  // namespace d_003089d4
GUEST_EXPORT(0x003089d5, d_003089d4::f_003089d4);

// f_00308a64: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00308a64 {

inline constexpr guest::Function<0x0058eb78, u32(u32, u32)> registry_head_below_limit;

u32 f_00308a64() {
    return registry_head_below_limit(guest::cpu()->r[0], guest::cpu()->r[1]);
}

}  // namespace d_00308a64
GUEST_EXPORT(0x00308a64, d_00308a64::f_00308a64);

// f_00308d00: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00308d00 {

inline constexpr guest::Function<0x006c6590, u32(u32, u32, u32)> terrain_blocks_at;

u32 f_00308d00() {
    return terrain_blocks_at(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2]);
}

}  // namespace d_00308d00
GUEST_EXPORT(0x00308d00, d_00308d00::f_00308d00);

// f_00308d48: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00308d48 {

inline constexpr guest::Function<0x0056cc38, u32(u32, u32)> TimeStamp__add_hours;

void f_00308d48() {
    TimeStamp__add_hours(guest::cpu()->r[0], guest::cpu()->r[1]);
}

}  // namespace d_00308d48
GUEST_EXPORT(0x00308d48, d_00308d48::f_00308d48);

// f_00308d4c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00308d4c {

struct __attribute__((packed)) Local_00308d4c_r5_1 {
    u8 unknown_0[0x8];  // (not used here)
    u8 byte_8;
    u8 unknown_9[0x5];  // (not used here)
    u8 byte_e;
    u8 byte_f;
    u32 word_10;
    u8 byte_14;
    u8 byte_15;
    u8 byte_16;
    u8 byte_17;
};
GUEST_OFFSET(Local_00308d4c_r5_1, byte_8, 0x8);
GUEST_OFFSET(Local_00308d4c_r5_1, byte_e, 0xe);
GUEST_OFFSET(Local_00308d4c_r5_1, byte_f, 0xf);
GUEST_OFFSET(Local_00308d4c_r5_1, word_10, 0x10);
GUEST_OFFSET(Local_00308d4c_r5_1, byte_14, 0x14);
GUEST_OFFSET(Local_00308d4c_r5_1, byte_15, 0x15);
GUEST_OFFSET(Local_00308d4c_r5_1, byte_16, 0x16);
GUEST_OFFSET(Local_00308d4c_r5_1, byte_17, 0x17);

inline constexpr guest::Function<0x002fc8e8, u32(u32, u32, u32, u32)> copy_item_002fc8e8;
inline constexpr guest::Function<0x002ff408, u32(u32, u32, u32, u32)> call_002ff408;
inline constexpr guest::Function<0x00300800, u32(u32)> store_constants_300800_00300800;
inline constexpr guest::Function<0x00303cdc, u32(u32)> clear_inner;
inline constexpr guest::Function<0x0030589c, u32(u32)> PlayerRef__clear;
inline constexpr guest::Function<0x003059f8, u32(u32)> call_003059f8;
inline constexpr guest::Function<0x003084d0, u32(u32, u32, u32, u32)> clear_identity_with_value;
inline constexpr guest::Function<0x003084f9, u32(u32, u32, u32, u32)> init_sub_object;
inline constexpr guest::Function<0x006bc04c, u32(u32)> call_006bc04c;

struct __attribute__((packed)) Frame_00308d4c {
    u32 word_0;
};
GUEST_OFFSET(Frame_00308d4c, word_0, 0x0);
GUEST_SIZE(Frame_00308d4c, 0x4);

u32 f_00308d4c(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_00308d4c> frame;  // the original's stack frame
    frame->word_0 = r3;
    u32 r4 = r0;
    clear_identity_with_value(r0, r1, r2, r3);
    call_003059f8(r4 + 0x30u);  // (from the original)
    PlayerRef__clear(r4 + (0x45u << 5));  // (from the original)
    call_006bc04c(r4 + 0x8b6u);  // (from the original)
    clear_inner(r4 + 0x8beu);  // (from the original)
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    u32 r6 = r4 + 0x8c6u;  // (from the original)
    u32 r5 = 0u;
    do {
        copy_item_002fc8e8(r6, 0x95bfdcu, r2, r3);  // (from the original)
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r5 += 1u;
        r6 += 4u;
        guest::preempt();
    } while (s32(r5) < 4);
    r6 = r4 + 0x8d6u;  // (from the original)
    r5 = 0u;
    do {
        copy_item_002fc8e8(r6, 0x95bfdcu, r2, r3);  // (from the original)
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r5 += 1u;
        r6 += 4u;
        guest::preempt();
    } while (s32(r5) < 4);
    copy_item_002fc8e8(r4 + 0x8e6u, 0x95bfdcu, r2, r3);  // (from the original)
    copy_item_002fc8e8(r4 + 0x8eau, 0x95bfdcu, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r6 = 0x8eeu;  // (from the original)
    r5 = 0u;
    do {
        init_sub_object(0xf2u * r5 + r4 + r6, r1, r2, r3);  // (from the original)
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r5 += 1u;
        guest::preempt();
    } while (r5 < 0x10u);  // (from the original)
    u32 r7 = 0x1810u;  // (from the original)
    r5 = 0u;
    do {
        call_002ff408((5u << 7) * r5 + r4 + r7, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r5 += 1u;
        guest::preempt();
    } while (s32(r5) < 4);
    u32 r0_9 = r4 + 0x2210u;  // (from the original)
    call_002ff408(r0_9, r1, r2, r3);
    r6 = 0x7dbu;  // (from the original)
    *gptr<u16>(r4 + (0x49u << 7) + 0x10u) = u16(r6);  // (from the original)
    call_002ff408(r0_9, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r5 = 0u;
    r7 = 0x49u << 7;  // (from the original)
    do {
        call_002ff408((5u << 7) * r5 + r4 + 0x1810u, 0x1810u, r2, r3);  // (from the original)
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        u32 r0_11 = r5 << 0x18;  // (from the original)
        r5 += 1u;
        *gptr<u16>((r0_11 >> 0x17) + r4 + r7 + 0x12u) = u16(r6);  // (from the original)
        guest::preempt();
    } while (s32(r5) < 4);
    gptr<Local_00308d4c_r5_1> r5_1 = gptr<Local_00308d4c_r5_1>(r4 + (0x25u << 8));  // (from the original)
    r5_1->byte_8 = 7;
    store_constants_300800_00300800(r4 + 0x250au);  // (from the original)
    r5_1->byte_e = 2;
    r5_1->byte_f = 0x18;  // (from the original)
    r5_1->byte_14 = u8(0xffffffffu);  // (from the original)
    r5_1->byte_15 = u8(0xffffffffu);  // (from the original)
    r5_1->byte_16 = u8(0xffffffffu);  // (from the original)
    r5_1->byte_17 = 0;
    r5_1->word_10 = 0;
    guest::cpu()->r[1] = 0u;
    return 0xffffffffu;  // (from the original)
}

}  // namespace d_00308d4c
GUEST_EXPORT_FRAMED(0x00308d4d, d_00308d4c::f_00308d4c, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_00308e80: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00308e80 {

inline guest::global<u32, 0x009524dc> global_009524dc;
inline constexpr guest::Function<0x00305f2c, u32(u32, u32, u32, u32)> read_global_object_byte;

u32 f_00308e80(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r0_1 = read_global_object_byte(r0, r1, r2, r3);
    if (r0_1 == 3u) {
        return 0x26u;  // (from the original)
    }
    u32 r0_2 = read_global_object_byte(r0_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0_2 == 3u) {
        return 0x26u;  // (from the original)
    }
    r2 = 0u;
    r0 = 0x26u;  // (from the original)
    r1 = *global_009524dc;
    if (r1 == 0) {
        guest::cpu()->r[1] = r1;
        return r0;
    }
    do {
        if ((u32(*gptr<u8>(r1 + 0x1au)) & 3u) == r2) {  // (from the original)
            u32 r0_3 = *gptr<u8>(r1 + 0x1bu);  // (from the original)
            if (r0_3 == 1u || r0_3 == 3u) {
                guest::cpu()->r[1] = r1;
                return 0x26u;  // (from the original)
            }
            if (r0_3 != 6u && r0_3 != 0xeu) {  // (from the original)
                guest::cpu()->r[1] = r1;
                return r0_3;
            }
            guest::cpu()->r[1] = r1;
            return 0x26u;  // (from the original)
        }
        r1 = *gptr<u32>(r1 + 4u);
        guest::preempt();
    } while (r1 != 0);
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_00308e80
GUEST_EXPORT_FRAMED(0x00308e80, d_00308e80::f_00308e80, 0x4010);  // pushes {r4, lr} first, as the original

// f_003090fc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_003090fc {

inline constexpr guest::Function<0x002fe450, u32(u32, u32, u32)> table_a82b90_entry;
inline constexpr guest::Function<0x00309904, u32(u32, u32, u32)> set_bit_below_29;
inline constexpr guest::Function<0x0030befc, u32(u32, u32, u32, u32)> global_word_7e0;
inline constexpr guest::Function<0x0030c0cd, u32(u32, u32, u32)> call_0030c0cc;
inline constexpr guest::Function<0x0030c1b5, u32(u32, u32, u32)> call_0030c1b4;

struct __attribute__((packed)) Frame_003090fc {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Frame_003090fc, word_0, 0x0);
GUEST_OFFSET(Frame_003090fc, word_4, 0x4);
GUEST_OFFSET(Frame_003090fc, word_8, 0x8);
GUEST_SIZE(Frame_003090fc, 0xc);

void f_003090fc(u32 r0, u32 r1, u32 r2) {
    guest::StackFrameOf<Frame_003090fc> frame;  // the original's stack frame
    u32 r7 = r0;
    u32 r0_1 = global_word_7e0(0u, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    if (s32(r0_1) >= 0) {
        u32 r5 = 0u;
        do {
            u32 r0_2 = table_a82b90_entry(r5, r1, r2);
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            u32 r6 = r0_2;
            if (r0_2 != 0) {
                set_bit_below_29(r0_2, 8u, 0u);
                u32 r4 = 0u;
                do {
                    set_bit_below_29(r6, uxtb(r4 + 9u), 0u);
                    r1 = guest::cpu()->r[1];
                    r2 = guest::cpu()->r[2];
                    r4 += 1u;
                    guest::preempt();
                } while (r4 < 2u);
            }
            r5 += 1u;
            guest::preempt();
        } while (s32(r5) < 0xa);  // (from the original)
        u32 r4_1 = ~0u;
        frame->word_0 = 0xa;  // (from the original)
        frame->word_8 = 0xa;  // (from the original)
        frame->word_4 = 0x3ff;  // (from the original)
        call_0030c0cc(r7, frame.at(0).addr(), r4_1);
        call_0030c1b4(r7, frame.at(0).addr(), r4_1);
        r1 = guest::cpu()->r[1];
    }
    guest::cpu()->r[1] = r1;
}

}  // namespace d_003090fc
GUEST_EXPORT_FRAMED(0x003090fd, d_003090fc::f_003090fc, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_00309168: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00309168 {

struct __attribute__((packed)) Local_00309168_r0_1 {
    u8 unknown_0[0x6];  // (not used here)
    u8 byte_6;
    u8 unknown_7[0x9];  // (not used here)
    u32 word_10;
};
GUEST_OFFSET(Local_00309168_r0_1, byte_6, 0x6);
GUEST_OFFSET(Local_00309168_r0_1, word_10, 0x10);

inline constexpr guest::Function<0x002fbd54, u32(u32, u32, u32, u32)> PersonalId__is_set;
inline constexpr guest::Function<0x002fe470, u32(u32, u32, u32, u32)> is_record_valid;

struct __attribute__((packed)) Frame_00309168 {
    u32 word_0;
};
GUEST_OFFSET(Frame_00309168, word_0, 0x0);
GUEST_SIZE(Frame_00309168, 0x4);

u32 f_00309168(u32 r0, u32 r1, u32 r2_unused, u32 r3) {
    guest::StackFrameOf<Frame_00309168> frame;  // the original's stack frame
    gptr<Local_00309168_r0_1> r0_1 = gptr<Local_00309168_r0_1>(0u);
    u32 r4_1 = 0;
    frame->word_0 = r0;
    u32 r6 = 0u;
    u32 r7 = 0xdfu;  // (from the original)
    do {
        r0_1 = gptr<Local_00309168_r0_1>(frame->word_0);
        if (r6 >= 0xau) {  // (from the original)
            r4_1 = 0u;
        } else {
            r1 = r6 * 0x2518u;  // (from the original)
            r4_1 = r1 + r0_1.addr();
            if (r4_1 == 0) {
                goto L_3091ca;
            }
            r0_1 = gptr<Local_00309168_r0_1>(is_record_valid(r4_1, r1, 0x2518u, r3));  // (from the original)
            r1 = guest::cpu()->r[1];
            r3 = guest::cpu()->r[3];
            if (r0_1.addr() == 0) {
                goto L_3091ca;
            }
        }
        if (r4_1 != 0) {
            r0_1 = gptr<Local_00309168_r0_1>(r4_1 + (0x25u << 8));  // (from the original)
            r1 = r0_1->word_10;
            u32 r2_1 = r1 << 0x15;  // (from the original)
            r3 = r2_1 >> 0x1e;  // (from the original)
            if (r3 != 0 && r2_1 >> 0x1e != 2u) {  // (from the original)
                u32 r2 = 3u << 9;
                r1 &= ~r2;
                r0_1->word_10 = r1;
                u32 r4 = r4_1 + 0x8eeu;  // (from the original)
                u32 r5 = 0u;
                do {
                    r0_1 = gptr<Local_00309168_r0_1>(PersonalId__is_set(r4, r1, r2, r3));
                    r1 = guest::cpu()->r[1];
                    r2 = guest::cpu()->r[2];
                    r3 = guest::cpu()->r[3];
                    if (r0_1.addr() != 0) {
                        r0_1 = gptr<Local_00309168_r0_1>(r4 + 0xb6u);  // (from the original)
                        r1 = u32(r0_1->byte_6) & r7;
                        r0_1->byte_6 = u8(r1);
                    }
                    r5 += 1u;
                    r4 += 0xf2u;  // (from the original)
                    guest::preempt();
                } while (r5 < 0x10u);  // (from the original)
            }
        }
L_3091ca:;
        r6 += 1u;
        guest::preempt();
    } while (s32(r6) < 0xa);  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0_1.addr();
}

}  // namespace d_00309168
GUEST_EXPORT_FRAMED(0x00309169, d_00309168::f_00309168, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_00309380: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00309380 {

inline constexpr guest::Function<0x00810f00, u32(u32, u32)> construct_buffered_string_20;

void f_00309380() {
    construct_buffered_string_20(guest::cpu()->r[0], guest::cpu()->r[1]);
}

}  // namespace d_00309380
GUEST_EXPORT(0x00309380, d_00309380::f_00309380);

// f_003094f0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_003094f0 {

inline constexpr guest::Function<0x002fb328, u32(u32, u32, u32, u32)> get_save_data;
inline constexpr guest::Function<0x003026e8, u32(u32)> call_003026e8;
inline constexpr guest::Function<0x00527528, u32(u32, u32, u32)> find_cell_of_id;
inline constexpr guest::Function<0x006cc958, u32(u32)> kind_is_50_to_53;
inline constexpr guest::Function<0x006cc97c, u32(u32)> kind_is_54_to_57;
inline constexpr guest::Function<0x0070b3a4, u32(u32)> field_equals_2_u8_0x4_70b3a4;

struct __attribute__((packed)) Frame_003094f0 {
    u32 word_0;
    u32 word_4;
    u8 unknown_8[0x4];  // (not read or written by name)
};
GUEST_OFFSET(Frame_003094f0, word_0, 0x0);
GUEST_OFFSET(Frame_003094f0, word_4, 0x4);
GUEST_SIZE(Frame_003094f0, 0xc);

u32 f_003094f0(u32 r0, u32 r1, u32 r2) {
    guest::StackFrameOf<Frame_003094f0> frame;  // the original's stack frame
    frame->word_0 = 0;
    frame->word_4 = 0;
    u32 r0_1 = get_save_data(0u, r1, r2, guest::cpu()->r[3]);
    u32 r0_2 = *gptr<u8>(r0_1 + 0x6e2a6u);  // (from the original)
    if (r0_2 != 0) {
        u32 r0_3 = get_save_data(r0_2, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
        u32 r0_5 = field_equals_2_u8_0x4_70b3a4(r0_3 + 0x6e2a4u);  // (from the original)
        if (r0_5 == 0) {
            u32 r0_6 = get_save_data(r0_5, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
            u32 r0_8 = call_003026e8(r0_6 + 0x6e2b0u);  // (from the original)
            if (r0_8 == r0) {
                u32 r4_1 = 0u;
                u32 r0_9 = kind_is_50_to_53(r0);
                if (r0_9 != 0) {
                    r4_1 = 1u;
                }
                u32 r0_10 = kind_is_54_to_57(r0);
                if (r0_10 != 0) {
                    r4_1 = 1u;
                }
                if (r0 != 0x84u && r4_1 == 0) {  // (from the original)
                    return 0u;
                }
            }
        }
    }
    u32 r0_12 = find_cell_of_id(frame.at(0).addr(), frame.at(4).addr(), r0);
    return r0_12;
}

}  // namespace d_003094f0
GUEST_EXPORT_FRAMED(0x003094f0, d_003094f0::f_003094f0, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_003095a4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_003095a4 {

inline constexpr guest::Function<0x00711858, u32(u32, u32, u32, u32)> call_00711858;

u32 f_003095a4() {
    return call_00711858(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_003095a4
GUEST_EXPORT(0x003095a4, d_003095a4::f_003095a4);

// f_003095a8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_003095a8 {

inline constexpr guest::Function<0x0071109c, u32(u32, u32, u32, u32)> call_0071109c;

u32 f_003095a8() {
    return call_0071109c(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_003095a8
GUEST_EXPORT(0x003095a8, d_003095a8::f_003095a8);

// f_003095ac: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_003095ac {

inline constexpr guest::Function<0x007132e4, u32(u32, u32, u32, u32)> call_007132e4;

u32 f_003095ac() {
    return call_007132e4(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_003095ac
GUEST_EXPORT(0x003095ac, d_003095ac::f_003095ac);

// f_003095b4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_003095b4 {

inline constexpr guest::Function<0x002fb94c, u32(u32, u32, u32, u32)> get_current_player;

u32 f_003095b4(u32 r0, u32 r1) {
    guest::StackFrame frame(0x4);  // the original's stack frame
    u32 r12 = guest::cpu()->r[12];
    u32 r0_1 = 0;
    *frame.at<u32>(0x20) = r12;  // (from the original)
    u32 r4 = 0u;
    u32 r6 = r1;
    u32 r9 = r0;
    u32 r11 = 4u;
    u32 r10 = r4;
    do {
        u32 r5_1 = *gptr<u8>(r6 + 7u);
        u32 r7_1 = *gptr<s8>(r6 + 8u);
        u32 r8_1 = r4 & 0xffu;  // (from the original)
        r0 = get_current_player(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        if (r0 != 0) {
            r0 += 0x5700u;  // (from the original)
            if (r5_1 != 6u) {
                if (r5_1 == 8u) {
                    goto L_30967c;
                }
                if (r5_1 == 9u) {
                    if (s32(r7_1) > 0x1e) {  // (from the original)
                        goto L_309838;
                    }
                    goto L_30967c;
                }
                if (r5_1 == 0xcu) {  // (from the original)
                    goto L_3096c8;
                }
                if (r5_1 == 0xdu) {  // (from the original)
                    if (s32(r7_1) > 0x1e) {  // (from the original)
                        goto L_309838;
                    }
                    goto L_3096c8;
                }
                if (r5_1 == 0xeu) {  // (from the original)
                    if (s32(r7_1) < 0x1e) {  // (from the original)
                        goto L_309838;
                    }
                    goto L_309744;
                }
                if (r5_1 == 0xfu) {  // (from the original)
                    goto L_309744;
                }
                if (r5_1 == 0x11u) {  // (from the original)
                    if (s32(r7_1) < 0x1e) {  // (from the original)
                        goto L_309838;
                    }
                    goto L_30978c;
                }
                if (r5_1 == 0x12u) {  // (from the original)
                    goto L_30978c;
                }
                if (r5_1 == 0x15u) {  // (from the original)
                    if (s32(r7_1) > 0x37) {  // (from the original)
                        goto L_309838;
                    }
                    if (r8_1 == 1u) {
                        r1 = 9u;
                        goto L_3096f0;
                    }
                    if (r8_1 != 0xdu) {  // (from the original)
                        r0 = r10;
                        goto L_309708;
                    }
                    r0 = u32(*gptr<u8>(r0 + 0x13u)) << 0x1d;  // (from the original)
                    if (s32(r0) < 0) {
                        r1 = 0xau;  // (from the original)
                    } else {
                        r0 = r10;
                        goto L_309708;
                    }
                    goto L_3096f0;
                }
                if (r5_1 == 0) {
                    goto L_3097e4;
                }
                if (r5_1 == 1u) {
                    if (s32(r7_1) > 0x1e) {  // (from the original)
                        goto L_309838;
                    }
                    goto L_3097e4;
                }
                goto L_309838;
            }
            if (s32(r7_1) > 0x37) {  // (from the original)
                goto L_309838;
            }
            if (r8_1 == 0) {
                r1 = 0u;
                goto L_3096f0;
            }
            if (r8_1 == 0xbu) {  // (from the original)
                r1 = 1u;
                goto L_3096f0;
            }
            r0 = r10;
            goto L_309708;
L_30967c:;
            if (r8_1 != 6u) {
                if (r8_1 != 8u) {
                    r0 = r10;
                    goto L_309708;
                }
            } else {
                r0 = u32(*gptr<u8>(r0 + 0x12u)) << 0x19;  // (from the original)
                if (s32(r0) < 0) {
                    r1 = 2u;
                    goto L_3096f0;
                }
                r0 = r10;
                goto L_309708;
            }
            r0 = u32(*gptr<u8>(r0 + 0x15u)) << 0x1e;  // (from the original)
            if (s32(r0) < 0) {
                r1 = 3u;
            } else {
                r0 = r10;
                goto L_309708;
            }
            goto L_3096f0;
L_3096c8:;
            if (r8_1 != 3u) {
                if (r8_1 != 4u) {
                    r0 = r10;
                    goto L_309708;
                }
                r1 = u32(*gptr<u8>(r0 + 6u)) << 0x1b;  // (from the original)
                if (r11 >= r1 >> 0x1c) {  // (from the original)
                    r0 = r10;
                    goto L_309708;
                }
                r0 = *gptr<u8>(r0 + 0x16u);  // (from the original)
                if ((r0 & 1u) == 0) {
                    r0 = r10;
                    goto L_309708;
                } else {
                    r1 = 5u;
                }
            } else {
                r0 = u32(*gptr<u8>(r0 + 6u)) >> 1u & 0xfu;  // (from the original)
                if (r0 == 0) {
                    r0 = r10;
                    goto L_309708;
                } else {
                    r1 = 4u;
                }
            }
L_3096f0:;
            if (r1 >= 0xfu) {  // (from the original)
                goto L_309838;
            }
L_3096f8:;
            r0_1 = *gptr<u8>(r9 + (r1 >> 3));
            r1 &= 7u;
            r0 = lsr_r(r0_1, r1 & 0xff) & 1u;  // (from the original)
L_309708:;
            if (r0 == 0) {
                goto L_309838;
            }
            guest::cpu()->r[1] = r1;
            return 1u;
L_309744:;
            if (r8_1 != 5u) {
                if (r8_1 != 0xcu) {  // (from the original)
                    r0 = r10;
                    guest::preempt();
                    goto L_309708;
                }
            } else {
                r0 = u32(*gptr<u8>(r0 + 5u)) << 0x1e;  // (from the original)
                if (s32(r0) < 0) {
                    r1 = 6u;
                    guest::preempt();
                    goto L_3096f0;
                }
                r0 = r10;
                guest::preempt();
                goto L_309708;
            }
            r0 = *gptr<u8>(r0 + 7u);
            if ((r0 & 1u) != 0) {
                r1 = 7u;
                guest::preempt();
                goto L_3096f0;
            }
            r0 = r10;
            guest::preempt();
            goto L_309708;
L_30978c:;
            if (r8_1 != 7u) {
                r0 = r10;
                guest::preempt();
                goto L_309708;
            }
            r0 = *gptr<u8>(r0 + 0xcu);  // (from the original)
            if ((r0 & 0x1fu) != 0) {  // (from the original)
                r1 = 8u;
                guest::preempt();
                goto L_3096f0;
            }
            r0 = r10;
            guest::preempt();
            goto L_309708;
L_3097e4:;
            if (r8_1 == 2u) {
                r1 = 0xdu;  // (from the original)
                guest::preempt();
                goto L_3096f0;
            }
            if (r8_1 != 9u) {
                if (r8_1 == 0xau && (u32(*gptr<u8>(r0 + 0x15u)) & 0x20u) != 0u) {  // (from the original)
                    r1 = 0xcu;  // (from the original)
                    guest::preempt();
                    goto L_3096f8;
                }
            } else {
                r0 = u32(*gptr<u8>(r0 + 0xbu)) << 0x1d;  // (from the original)
                if (s32(r0) < 0) {
                    r1 = 0xbu;  // (from the original)
                    guest::preempt();
                    goto L_3096f0;
                }
            }
            r0 = r10;
            guest::preempt();
            goto L_309708;
        }
L_309838:;
        r4 += 1u;
        guest::preempt();
    } while (s32(r4) < 0xe);  // (from the original)
    guest::cpu()->r[1] = r1;
    return 0u;
}

}  // namespace d_003095b4
GUEST_EXPORT_FRAMED(0x003095b4, d_003095b4::f_003095b4, 0x4ff0);  // pushes {r4, r5, r6, r7, r8, r9, r10, r11, lr} first, as the original

// f_0030984c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0030984c {

inline constexpr guest::Function<0x0071c620, u32(u32, u32, u32, u32)> call_0071c620;

u32 f_0030984c() {
    return call_0071c620(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0030984c
GUEST_EXPORT(0x0030984c, d_0030984c::f_0030984c);

// f_00309850: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00309850 {

inline constexpr guest::Function<0x0071c2f8, u32(u32, u32, u32, u32)> call_0071c2f8;

u32 f_00309850() {
    return call_0071c2f8(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_00309850
GUEST_EXPORT(0x00309850, d_00309850::f_00309850);

// f_00309854: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00309854 {

inline constexpr guest::Function<0x0069f26c, u32(u32, u32, u32, u32)> call_0069f26c;

u32 f_00309854() {
    return call_0069f26c(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_00309854
GUEST_EXPORT(0x00309854, d_00309854::f_00309854);

// f_00309858: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00309858 {

inline constexpr guest::Function<0x0055cb58, u32(u32, u32)> Xorshift128__next_0055cb58;

u32 f_00309858() {
    return Xorshift128__next_0055cb58(guest::cpu()->r[0], guest::cpu()->r[1]);
}

}  // namespace d_00309858
GUEST_EXPORT(0x00309858, d_00309858::f_00309858);

// f_00309860: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00309860 {

inline constexpr guest::Function<0x006c4e6c, u32(u32, u32, u32, u32)> store_number_in_free_place;

void f_00309860() {
    store_number_in_free_place(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_00309860
GUEST_EXPORT(0x00309860, d_00309860::f_00309860);

// f_00309954: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00309954 {

inline constexpr guest::Function<0x0071a0b0, u32(u32, u32, u32, u32)> find_player_matching_entry;

u32 f_00309954() {
    return find_player_matching_entry(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_00309954
GUEST_EXPORT(0x00309954, d_00309954::f_00309954);

// f_0030996c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0030996c {

inline constexpr guest::Function<0x00758dd4, u32(u32, u32)> masked_byte_758dd4;

u32 f_0030996c() {
    return masked_byte_758dd4(guest::cpu()->r[0], guest::cpu()->r[1]);
}

}  // namespace d_0030996c
GUEST_EXPORT(0x0030996c, d_0030996c::f_0030996c);

// f_00309970: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00309970 {

inline constexpr guest::Function<0x002fb328, u32(u32)> get_save_data;
inline constexpr guest::Function<0x003091e0, u32(u32, u32, u32, u32)> return_constant_0xaaef18_;
inline constexpr guest::Function<0x003091ec, u32(u32)> read_field_u32_0x234_;
inline constexpr guest::Function<0x00309eb9, u32(u32, u32)> SaveVillager__find_player_record_00309eb8;
inline constexpr guest::Function<0x00309fbc, u32(u32, u32)> player_index_in;
inline constexpr guest::Function<0x0030f321, u32(u32, u32, u32, u32)> call_0030f320;
inline constexpr guest::Function<0x00405464, u32(u32, u32)> call_00405464;

u32 villager_check_309970(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r0_1 = return_constant_0xaaef18_(r0, r1, r2, r3);
    u32 r0_2 = read_field_u32_0x234_(r0_1);
    if (r0_2 != 0) {
        u32 r0_3 = SaveVillager__find_player_record_00309eb8(r0, r0_2 + 0x55a6u);  // (from the original)
        if (r0_3 != 0) {
            u32 r0_4 = u32(*gptr<u8>(r0_3 + 0xbbu)) >> 1 << 0x1f;  // (from the original)
            if (r0_4 != 0) {
                u32 r0_5 = get_save_data(r0_4);
                u32 r0_7 = player_index_in(r0_5 + 0xa0u, r0_2);  // (from the original)
                u32 r0_8 = call_00405464(r0, r0_7);
                u32 r0_9 = call_0030f320(r0, 7u, 0u, 0u);
                if (r0_8 == r0_9) {
                    return 1u;
                }
            }
        }
    }
    return 0u;
}

}  // namespace d_00309970
GUEST_EXPORT_FRAMED(0x00309971, d_00309970::villager_check_309970, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_003099d0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_003099d0 {

inline guest::global<u32, 0x00a83370> global_00a83370;
inline guest::global<u32, 0x00a83374> global_00a83374;

u32 f_003099d0(u32 r0) {
    u32 r1 = 0u;
    do {
        u32 r2_1 = r1 + 9u & 0xffu;  // (from the original)
        if (r2_1 < 0x1du && (u32(*gptr<u8>(r0 + (r2_1 >> 3))) >> (r2_1 & 7u) & 1u) != 0) {  // (from the original)
            if (r1 == 0) {
                u32 r0_1 = *global_00a83370;
                guest::cpu()->r[1] = r1;
                return r0_1;
            }
            if (r1 == 1u) {
            } else {
                guest::cpu()->r[1] = r1;
                return ~0u;
            }
            u32 r0_3 = *global_00a83374;
            guest::cpu()->r[1] = r1;
            return r0_3;
        }
        r1 += 1u;
        guest::preempt();
    } while (r1 < 2u);
    guest::cpu()->r[1] = r1;
    return ~0u;
}

}  // namespace d_003099d0
GUEST_EXPORT(0x003099d0, d_003099d0::f_003099d0);

// f_00309a3c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00309a3c {

inline constexpr guest::Function<0x006baa64, u32(u32, u32)> demote_kind_2_item;

void f_00309a3c() {
    demote_kind_2_item(guest::cpu()->r[0], guest::cpu()->r[1]);
}

}  // namespace d_00309a3c
GUEST_EXPORT(0x00309a3c, d_00309a3c::f_00309a3c);

// f_00309a40: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00309a40 {

inline constexpr guest::Function<0x00768044, u32(u32, u32)> Item__is_in_category_list_a;

u32 f_00309a40() {
    return Item__is_in_category_list_a(guest::cpu()->r[0], guest::cpu()->r[1]);
}

}  // namespace d_00309a40
GUEST_EXPORT(0x00309a40, d_00309a40::f_00309a40);

// f_00309a44: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00309a44 {

struct __attribute__((packed)) Object_00309a44_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Object_00309a44_1, word_0, 0x0);
GUEST_OFFSET(Object_00309a44_1, word_4, 0x4);
GUEST_OFFSET(Object_00309a44_1, word_8, 0x8);

struct __attribute__((packed)) Local_00309a44_r0_2 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_00309a44_r0_2, word_0, 0x0);
GUEST_OFFSET(Local_00309a44_r0_2, word_4, 0x4);
GUEST_OFFSET(Local_00309a44_r0_2, word_8, 0x8);

struct __attribute__((packed)) Local_00309a44_r0_6 {
    u8 unknown_0[0x3];  // (not used here)
    u8 byte_3;
    u8 unknown_4[0x19];  // (not used here)
    u8 byte_1d;
};
GUEST_OFFSET(Local_00309a44_r0_6, byte_3, 0x3);
GUEST_OFFSET(Local_00309a44_r0_6, byte_1d, 0x1d);

struct __attribute__((packed)) Local_00309a44_r3_3 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_00309a44_r3_3, word_0, 0x0);
GUEST_OFFSET(Local_00309a44_r3_3, word_4, 0x4);
GUEST_OFFSET(Local_00309a44_r3_3, word_8, 0x8);

struct __attribute__((packed)) Local_00309a44_r3_4 {
    u8 unknown_0[0x4];  // (not used here)
    u8 byte_4;
    u8 byte_5;
};
GUEST_OFFSET(Local_00309a44_r3_4, byte_4, 0x4);
GUEST_OFFSET(Local_00309a44_r3_4, byte_5, 0x5);

inline constexpr guest::Function<0x002fb378, u32(u32)> return_constant_0xad56b0_;
inline constexpr guest::Function<0x00301e20, u32(u32, u32, u32, u32)> is_villager_record;
inline constexpr guest::Function<0x00301e64, u32(u32)> read_field_u16_0x2c_;
inline constexpr guest::Function<0x00301e6c, u32(u32, u32)> entry_34_at;
inline constexpr guest::Function<0x00308efc, u32(u32, u32, u32, u32)> TimeStamp__move_to_day_start;

struct __attribute__((packed)) Frame_00309a44 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Frame_00309a44, word_0, 0x0);
GUEST_OFFSET(Frame_00309a44, word_4, 0x4);
GUEST_OFFSET(Frame_00309a44, word_8, 0x8);
GUEST_SIZE(Frame_00309a44, 0xc);

u32 f_00309a44(u32 r0, gptr<Object_00309a44_1> arg1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_00309a44> frame;  // the original's stack frame
    u32 r3_2 = 0;
    u32 r2_2 = 0;
    u32 r1_2 = 0;
    u32 r0_1 = is_villager_record(r0, arg1.addr(), r2, r3);
    if (r0_1 == 0) {
        return r0_1;
    }
    if (arg1.addr() == 0) {
        gptr<Local_00309a44_r0_2> r0_2 = gptr<Local_00309a44_r0_2>(return_constant_0xad56b0_(r0_1));
        r3_2 = guest::cpu()->r[3];
        r2_2 = r0_2->word_4;
        r1_2 = r0_2->word_0;
        u32 r0_3 = r0_2->word_8;
        frame->word_4 = r2_2;
        frame->word_0 = r1_2;
        frame->word_8 = r0_3;
    } else {
        r1_2 = arg1->word_4;
        r2_2 = arg1->word_8;
        u32 r4_1 = arg1.addr() + 0xc;  // (from the original)
        gptr<Local_00309a44_r3_3> r3_3 = gptr<Local_00309a44_r3_3>(frame.at(0).addr());
        r3_3->word_0 = arg1->word_0;
        r3_3->word_4 = r1_2;
        r3_3->word_8 = r2_2;
        r3_2 = r3_3.addr() + 0xc;  // (from the original)
    }
    TimeStamp__move_to_day_start(frame.at(0).addr(), r1_2, r2_2, r3_2);
    u32 r0_5 = read_field_u16_0x2c_(r0);
    gptr<Local_00309a44_r0_6> r0_6 = gptr<Local_00309a44_r0_6>(entry_34_at(0xa83aecu, r0_5));  // (from the original)
    u32 r1_3 = r0_6.addr() != 0 ? u32(r0_6->byte_1d) >> 4 : 1u;
    gptr<Local_00309a44_r3_4> r3_4 = gptr<Local_00309a44_r3_4>(frame.at(0).addr());
    if (r1_3 == u32(s8(r3_4->byte_4))) {
        r1_3 = r0_6.addr() != 0 ? u32(s8(r0_6->byte_3)) : 1u;
        if (r1_3 == u32(s8(r3_4->byte_5))) {
            guest::cpu()->r[1] = r1_3;
            return 1u;
        }
    }
    guest::cpu()->r[1] = r1_3;
    return 0u;
}

}  // namespace d_00309a44
GUEST_EXPORT_FRAMED(0x00309a45, d_00309a44::f_00309a44, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_00309ac8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00309ac8 {

struct __attribute__((packed)) Object_00309ac8_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Object_00309ac8_1, word_0, 0x0);
GUEST_OFFSET(Object_00309ac8_1, word_4, 0x4);
GUEST_OFFSET(Object_00309ac8_1, word_8, 0x8);

struct __attribute__((packed)) Local_00309ac8_r0_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_00309ac8_r0_1, word_0, 0x0);
GUEST_OFFSET(Local_00309ac8_r0_1, word_4, 0x4);
GUEST_OFFSET(Local_00309ac8_r0_1, word_8, 0x8);

inline constexpr guest::Function<0x002fb328, u32(u32, u32, u32)> get_save_data;
inline constexpr guest::Function<0x002fb378, u32(u32, u32, u32, u32)> return_constant_0xad56b0_;
inline constexpr guest::Function<0x002fe4c0, u32(u32, u32, u32, u32)> indexed_object_index;
inline constexpr guest::Function<0x00305f2c, u32(u32)> read_global_object_byte;
inline constexpr guest::Function<0x00309bd4, u32(u32, u32)> call_00309bd4;
inline constexpr guest::Function<0x003188f0, u32(u32, u32)> first_registered_id_of_class_0;

struct __attribute__((packed)) Frame_00309ac8 {
    u32 word_0;
    u32 word_4;
    u8 unknown_8[0xc];  // (not read or written by name)
};
GUEST_OFFSET(Frame_00309ac8, word_0, 0x0);
GUEST_OFFSET(Frame_00309ac8, word_4, 0x4);
GUEST_SIZE(Frame_00309ac8, 0x14);

u32 villager_check_309ac8(u32 r0, gptr<Object_00309ac8_1> arg1, u32 r2) {
    guest::StackFrameOf<Frame_00309ac8> frame;  // the original's stack frame
    u32 r1 = arg1.addr();
    u32 r7_1 = 0;
    u32 r5_1 = 0;
    u32 r4_1 = 0;
    u32 r0_6 = 0;
    if (r1 == 0) {
        gptr<Local_00309ac8_r0_1> r0_1 = gptr<Local_00309ac8_r0_1>(return_constant_0xad56b0_(r0, r1, r2, guest::cpu()->r[3]));
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r7_1 = r0_1->word_4;
        r5_1 = r0_1->word_8;
        r4_1 = r0_1->word_0;
    } else {
        r7_1 = arg1->word_4;
        r5_1 = arg1->word_8;
        r4_1 = arg1->word_0;
    }
    u32 r0_2 = indexed_object_index(r0, r1, r2, guest::cpu()->r[3]);
    frame->word_0 = r0_2;
    u32 r0_3 = read_global_object_byte(r0_2);
    u32 r1_2 = guest::cpu()->r[1];
    if (r0_3 != 3u && frame->word_0 < 8u) {
        *frame.at<u32>(8) = r7_1;
        *frame.at<u32>(0xc) = r5_1;  // (from the original)
        frame->word_4 = r4_1;
        u32 r4_2 = rev16(u32(*frame.at<u16>(0xb)));  // (from the original)
        u32 r1_3 = frame->word_0 << 3;
        u32 r2_2 = r1_3 + 0x88ee28u;  // (from the original)
        u32 r5_2 = *gptr<u32>(r1_3 + 0x88ee28u);  // (from the original)
        u32 r6_1 = *gptr<u32>(r2_2 + 4u);
        u32 r0_4 = get_save_data(0x88ee28u, r1_3, r2_2);  // (from the original)
        u32 r0_5 = u32(*gptr<u8>(r0_4 + 0x621cfu)) >> 1 << 0x1f;  // (from the original)
        if (r0_5 != 0) {
            r1_2 = 0x88ee68u;  // (from the original)
            r0_6 = frame->word_0 << 2;
            r6_1 = *gptr<u32>(r1_2 + r0_6);
        } else {
            u32 r0_7 = get_save_data(r0_5, 0x6214fu, guest::cpu()->r[2]);  // (from the original)
            r1_2 = 0x6214fu;  // (from the original)
            r0_6 = u32(*gptr<u8>(r0_7 + 0x80u + r1_2)) >> 2 << 0x1f;  // (from the original)
            if (r0_6 != 0) {
                r1_2 = 0x88ee88u;  // (from the original)
                r0_6 = frame->word_0 << 2;
                r5_2 = *gptr<u32>(r1_2 + r0_6);
            }
        }
        if (r5_2 > r6_1) {
            if (r4_2 >= r5_2 || r4_2 < r6_1) {
                goto L_309b60;
            }
            guest::cpu()->r[1] = r1_2;
            return 0u;
        }
        if (r4_2 < r5_2 || r4_2 >= r6_1) {
            guest::cpu()->r[1] = r1_2;
            return 0u;
        }
L_309b60:;
        u32 r0_8 = first_registered_id_of_class_0(r0_6, r1_2);
        r1_2 = guest::cpu()->r[1];
        if (r0_8 != 2u) {
            if (r0_8 == 7u) {
                return 0u;
            }
            if (r0_8 == 8u) {
                goto L_309b88;
            }
            if (r0_8 != 0xfu) {  // (from the original)
                return 1u;
            }
        } else {
            if (s32(r7_1) >> 0x18 >= 0x12) {  // (from the original)
                return 0u;
            }
            return 1u;
        }
        if (u32(s32(r7_1) >> 0x18) - 2u >= 0x10u) {  // (from the original)
            return 0u;
        }
        return 1u;
L_309b88:;
        u32 r0_9 = return_constant_0xad56b0_(r0_8, r1_2, guest::cpu()->r[2], guest::cpu()->r[3]);
        u32 r0_10 = call_00309bd4(8u, r0_9);
        r1_2 = guest::cpu()->r[1];
        if (r0_10 == 0) {
            return 1u;
        }
    }
    guest::cpu()->r[1] = r1_2;
    return 0u;
}

}  // namespace d_00309ac8
GUEST_EXPORT_FRAMED(0x00309ac9, d_00309ac8::villager_check_309ac8, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_00309bb8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00309bb8 {

inline constexpr guest::Function<0x005e9150, u32(u32, u32)> store_word_constant_pack_0xc;

void f_00309bb8() {
    store_word_constant_pack_0xc(guest::cpu()->r[0], guest::cpu()->r[1]);
}

}  // namespace d_00309bb8
GUEST_EXPORT(0x00309bb8, d_00309bb8::f_00309bb8);

// f_00309bbc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00309bbc {

inline constexpr guest::Function<0x005e90cc, u32(u32, u32, u32, u32)> call_005e90cc;

void f_00309bbc() {
    call_005e90cc(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_00309bbc
GUEST_EXPORT(0x00309bbc, d_00309bbc::f_00309bbc);

// f_0030a1a4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0030a1a4 {

inline constexpr guest::Function<0x00713370, u32(u32, u32, u32)> copy_table13_item;

void f_0030a1a4() {
    copy_table13_item(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2]);
}

}  // namespace d_0030a1a4
GUEST_EXPORT(0x0030a1a4, d_0030a1a4::f_0030a1a4);

// f_0030a1a8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0030a1a8 {

inline constexpr guest::Function<0x0076ae94, u32(u32, u32)> Item__is_category_48_with_wear_index_in_group_a;

u32 f_0030a1a8() {
    return Item__is_category_48_with_wear_index_in_group_a(guest::cpu()->r[0], guest::cpu()->r[1]);
}

}  // namespace d_0030a1a8
GUEST_EXPORT(0x0030a1a8, d_0030a1a8::f_0030a1a8);

// f_0030a1ac: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0030a1ac {

inline constexpr guest::Function<0x0070f51c, u32(u32, u32)> record_2160_address_of_8_0070f51c;

u32 f_0030a1ac() {
    return record_2160_address_of_8_0070f51c(guest::cpu()->r[0], guest::cpu()->r[1]);
}

}  // namespace d_0030a1ac
GUEST_EXPORT(0x0030a1ac, d_0030a1ac::f_0030a1ac);

// f_0030a1b0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0030a1b0 {

inline constexpr guest::Function<0x005d46dc, u32(u32, u32, u32, u32)> value_for_mode;

u32 f_0030a1b0() {
    return value_for_mode(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0030a1b0
GUEST_EXPORT(0x0030a1b0, d_0030a1b0::f_0030a1b0);

// f_0030a340: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0030a340 {

inline constexpr guest::Function<0x00768268, u32(u32, u32)> Item__data_unknown_15;

u32 f_0030a340() {
    return Item__data_unknown_15(guest::cpu()->r[0], guest::cpu()->r[1]);
}

}  // namespace d_0030a340
GUEST_EXPORT(0x0030a340, d_0030a340::f_0030a340);

// f_0030a344: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0030a344 {

inline constexpr guest::Function<0x0076880c, u32(u32, u32, u32, u32)> call_0076880c;

u32 f_0030a344() {
    return call_0076880c(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0030a344
GUEST_EXPORT(0x0030a344, d_0030a344::f_0030a344);

// f_0030a348: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0030a348 {

inline constexpr guest::Function<0x007689a4, u32(u32, u32, u32, u32)> item_class_kind;

u32 f_0030a348() {
    return item_class_kind(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0030a348
GUEST_EXPORT(0x0030a348, d_0030a348::f_0030a348);

// f_0030a390: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0030a390 {

struct __attribute__((packed)) Object_0030a390_0 {
    u8 unknown_0[0x1739b];  // (not used here)
    u8 byte_1739b;
    u8 unknown_1739c[0x2];  // (not used here)
    u8 byte_1739e;
    u8 byte_1739f;
};
GUEST_OFFSET(Object_0030a390_0, byte_1739b, 0x1739b);
GUEST_OFFSET(Object_0030a390_0, byte_1739e, 0x1739e);
GUEST_OFFSET(Object_0030a390_0, byte_1739f, 0x1739f);

struct __attribute__((packed)) Local_0030a390_r1_7 {
    u8 unknown_0[0x6];  // (not used here)
    u8 byte_6;
};
GUEST_OFFSET(Local_0030a390_r1_7, byte_6, 0x6);

struct __attribute__((packed)) Local_0030a390_r5_1 {
    u8 unknown_0[0xa];  // (not used here)
    u8 byte_a;
    u8 byte_b;
};
GUEST_OFFSET(Local_0030a390_r5_1, byte_a, 0xa);
GUEST_OFFSET(Local_0030a390_r5_1, byte_b, 0xb);

inline constexpr guest::Function<0x002fae84, u32(u32, u32)> get_data_base;
inline constexpr guest::Function<0x002fb310, u32(u32)> slot_records_of;
inline constexpr guest::Function<0x002fe470, u32(u32, u32, u32, u32)> is_record_valid;
inline constexpr guest::Function<0x00309865, u32(u32, u32, u32, u32)> villager_slot_index;
inline constexpr guest::Function<0x0030a2b4, u32(u32, u32)> reset_record_book_at;
inline constexpr guest::Function<0x00405840, u32(u32, u32)> call_00405840;
inline constexpr guest::Function<0x00405844, u32(u32, u32)> call_00405844;
inline constexpr guest::Function<0x005bc53c, u32(u32)> call_005bc53c;
inline constexpr guest::Function<0x005bcaf0, u32(u32, u32)> call_005bcaf0;

struct __attribute__((packed)) Frame_0030a390 {
    u32 word_0;
};
GUEST_OFFSET(Frame_0030a390, word_0, 0x0);
GUEST_SIZE(Frame_0030a390, 0x4);

u32 f_0030a390(gptr<Object_0030a390_0> arg0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_0030a390> frame;  // the original's stack frame
    u32 r0 = arg0.addr();
    u32 r4 = 0;
    gptr<Local_0030a390_r5_1> r5_1 = gptr<Local_0030a390_r5_1>(0u);
    u32 r1_2 = 0;
    u32 r4_1 = 0;
    u32 r1_3 = 0;
    u32 r0_6 = 0;
    frame->word_0 = r3;
    u32 r0_1 = villager_slot_index(r0, 1u, r2, r3);
    if (r0_1 < 0xau) {  // (from the original)
        u32 r0_2 = r0_1 * 0x2518u + r0;  // (from the original)
        if (r0_2 != 0) {
            u32 r0_3 = is_record_valid(r0_2, 0x2518u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
            if (r0_3 != 0) {
                r5_1 = gptr<Local_0030a390_r5_1>(r0 + 0x17394u);  // (from the original)
                if ((u32(arg0->byte_1739e) & 0xfu) == 1u) {  // (from the original)
                    call_005bc53c(r0 + 0x172f4u);  // (from the original)
                    reset_record_book_at(r0 + 0x172f4u, r1);  // (from the original)
                    return 0u;
                }
                r1_2 = arg0->byte_1739f;
                r4_1 = r1_2;
                if (arg0->byte_1739b == 0) {
                    u32 r0_4 = call_00405840(r0 + 0x172f4u, r1_2);  // (from the original)
                    r1_2 = guest::cpu()->r[1];
                    if (r0_4 != 0) {
                        u32 r0_5 = call_00405844(r0_4, r1_2);
                        r1_2 = guest::cpu()->r[1];
                        if (r0_5 != 0) {
                            r4_1 -= 1u;
                        }
                    }
                    goto L_30a3fa;
                }
                r4_1 = r1_2 - 1u;
                goto L_30a3fa;
            }
        }
    }
    return 0u;
L_30a3fa:;
    if (s32(r4_1) < 0) {
        r1_3 = 1u;
        r0_6 = 3u;
        r5_1->byte_a = u8(r1_3);
        r5_1->byte_b = u8(r0_6);
    } else {
        r5_1->byte_b = u8(r4_1);
        call_005bcaf0(r0 + 0x172f4u, r1_2);  // (from the original)
        r1_3 = guest::cpu()->r[1];
        r0_6 = r0 + 0x172f4u;  // (from the original)
    }
    u32 r0_7 = get_data_base(r0_6, r1_3);
    u32 r0_8 = slot_records_of(r0_7);
    r3 = guest::cpu()->r[3];
    u32 r7 = 0x8eeu;  // (from the original)
    u32 r5 = 0u;
    u32 r6 = 0xefu;  // (from the original)
    frame->word_0 = r0_8 + 4u;
    do {
        u32 r0_9 = frame->word_0;
        if (r5 >= 0xau) {  // (from the original)
            r4 = 0u;
        } else {
            u32 r1_5 = r5 * 0x2518u;  // (from the original)
            r4 = r1_5 + r0_9;
            if (r4 == 0) {
                goto L_30a468;
            }
            u32 r0_10 = is_record_valid(r4, r1_5, 0x2518u, r3);  // (from the original)
            r3 = guest::cpu()->r[3];
            if (r0_10 == 0) {
                goto L_30a468;
            }
        }
        if (r4 != 0) {
            r0 = 0u;
            r1 = r0;
L_30a450:;
            u32 r1_6 = r1 * 0xf2u + r4 + r7;  // (from the original)
            if (r1_6 != 0) {
                gptr<Local_0030a390_r1_7> r1_7 = gptr<Local_0030a390_r1_7>(r1_6 + 0xb6u);  // (from the original)
                r1_7->byte_6 = u8(u32(r1_7->byte_6) & r6);
            }
L_30a462:;
            r0 += 1u;
            if (r0 < 0x10u) {  // (from the original)
                r1 = r0;
                if (r0 >= 0x10u) {  // (from the original)
                    guest::preempt();
                    goto L_30a462;
                }
                guest::preempt();
                goto L_30a450;
            }
        }
L_30a468:;
        r5 += 1u;
        guest::preempt();
    } while (s32(r5) < 0xa);  // (from the original)
    return 1u;
}

}  // namespace d_0030a390
GUEST_EXPORT_FRAMED(0x0030a391, d_0030a390::f_0030a390, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_0030a484: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0030a484 {

inline constexpr guest::Function<0x00612d0c, u32(u32, u32)> call_00612d0c;

u32 f_0030a484() {
    return call_00612d0c(guest::cpu()->r[0], guest::cpu()->r[1]);
}

}  // namespace d_0030a484
GUEST_EXPORT(0x0030a484, d_0030a484::f_0030a484);

// f_0030a62c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0030a62c {

inline constexpr guest::Function<0x005d4788, u32(u32, u32)> speed_for_index;

u32 f_0030a62c() {
    return speed_for_index(guest::cpu()->r[0], guest::cpu()->r[1]);
}

}  // namespace d_0030a62c
GUEST_EXPORT(0x0030a62c, d_0030a62c::f_0030a62c);

// f_0030a708: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0030a708 {

inline constexpr guest::Function<0x005caf28, u32(u32, u32, u32, u32)> Date__set;

void f_0030a708() {
    Date__set(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0030a708
GUEST_EXPORT(0x0030a708, d_0030a708::f_0030a708);

// f_0030a70c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0030a70c {

inline constexpr guest::Function<0x002fb328, u32(u32, u32)> get_save_data;
inline constexpr guest::Function<0x002fe419, u32(u32, u32, u32, u32)> pick_random_set_bit;
inline constexpr guest::Function<0x002fe450, u32(u32)> table_a82b90_entry;
inline constexpr guest::Function<0x002fe470, u32(u32, u32, u32)> is_record_valid;
inline constexpr guest::Function<0x002fe4c0, u32(u32, u32)> indexed_object_index;
inline constexpr guest::Function<0x002fe4d0, u32(u32, u32)> set_value_a83388;
inline constexpr guest::Function<0x00405aa4, u32(u32, u32)> call_00405aa4;
inline constexpr guest::Function<0x0051d1f8, u32(u32, u32)> read_u32_0x00a83388_;
inline constexpr guest::Function<0x0051d7cc, u32(u32)> pick_random_for_index;

struct __attribute__((packed)) Frame_0030a70c {
    u32 word_0;
};
GUEST_OFFSET(Frame_0030a70c, word_0, 0x0);
GUEST_SIZE(Frame_0030a70c, 0x4);

u32 f_0030a70c(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_0030a70c> frame;  // the original's stack frame
    u32 r5_1 = 0;
    u32 r0_6 = 0;
    u32 r1_3 = 0;
    u32 r0_7 = 0;
    u32 r5_2 = 0;
    u32 r0_9 = 0;
    frame->word_0 = r3;
    u32 r0_1 = pick_random_set_bit(r0, r1, r2, r3);
    u32 r0_2 = table_a82b90_entry(r0_1);
    u32 r1_2 = guest::cpu()->r[1];
    frame->word_0 = r0_2;
    if (r0_2 != 0) {
        if (r1 != 0x14u) {  // (from the original)
            if (r1 == 5u) {
                u32 r0_3 = get_save_data(r0_2, r1_2);
                r1_2 = guest::cpu()->r[1];
                if (r0_1 >= 0xau) {  // (from the original)
                    r5_1 = 0u;
                    goto L_30a780;
                }
                r1_2 = r0_1 * 0x2518u;  // (from the original)
                r5_1 = r1_2 + (r0_3 + 0x292a4u);  // (from the original)
                if (r5_1 == 0) {
                    guest::cpu()->r[1] = r1_2;
                    return ~0u;
                }
                u32 r0_5 = is_record_valid(r5_1, r1_2, 0x2518u);  // (from the original)
                r1_2 = guest::cpu()->r[1];
                if (r0_5 == 0) {
                    return ~0u;
                }
                goto L_30a780;
            }
            goto L_30a788;
        }
        r0_6 = get_save_data(r0_2, r1_2);
        r1_3 = guest::cpu()->r[1];
        r0_7 = r0_6 + 0x292a4u;  // (from the original)
        if (r0_1 < 0xau) {  // (from the original)
            r1_3 = r0_1 * 0x2518u;  // (from the original)
            r5_2 = r1_3 + r0_7;
            if (r5_2 != 0) {
                u32 r0_8 = is_record_valid(r5_2, r1_3, guest::cpu()->r[2]);
                r1_3 = guest::cpu()->r[1];
                if (r0_8 != 0) {
                    goto L_30a752;
                }
            }
        }
        r5_2 = 0u;
L_30a752:;
        r0_9 = indexed_object_index(r5_2, r1_3);
        pick_random_for_index(r0_9);
        r1_2 = guest::cpu()->r[1];
        goto L_30a788;
L_30a780:;
        if (r5_1 == 0) {
            guest::cpu()->r[1] = r1_2;
            return ~0u;
        }
        call_00405aa4(r5_1, r1_2);
        r1_2 = guest::cpu()->r[1];
L_30a788:;
        u32 r0_10 = frame->word_0 + 0x20u;  // (from the original)
        *gptr<u8>(r0_10 + 4u) = u8(r1);
        if (!(r1 != 0xfu && r1 != 0x11u)) {  // (from the original)
            u32 r0_11 = read_u32_0x00a83388_(r0_10, r1_2);
            r1_2 = guest::cpu()->r[1];
            if (r0_11 == r0_1) {
                set_value_a83388(~0u, r1_2);
                r1_2 = guest::cpu()->r[1];
            }
        }
        if (*gptr<u32>(r0) > r0_1) {
            r1_2 = *gptr<u32>(r0 + 4u);
            u32 r0_13 = lsl_r(1u, r0_1 & 0xff);  // (from the original)
            if ((r1_2 & r0_13) != 0) {
                r1_2 &= ~r0_13;
                u32 r0_14 = *gptr<u32>(r0 + 8u);
                *gptr<u32>(r0 + 4u) = r1_2;
                *gptr<u32>(r0 + 8u) = r0_14 - 1u;
            }
        }
        guest::cpu()->r[1] = r1_2;
        return r0_1;
    }
    guest::cpu()->r[1] = r1_2;
    return ~0u;
}

}  // namespace d_0030a70c
GUEST_EXPORT_FRAMED(0x0030a70d, d_0030a70c::f_0030a70c, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_0030a7dc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0030a7dc {

inline constexpr guest::Function<0x00606704, u32(u32, u32, u32, u32)> BsScene__virtual_8;

u32 f_0030a7dc() {
    return BsScene__virtual_8(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0030a7dc
GUEST_EXPORT(0x0030a7dc, d_0030a7dc::f_0030a7dc);

// f_0030a8f8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0030a8f8 {

inline constexpr guest::Function<0x002f67ac, u32(u32)> release_active_child;
inline constexpr guest::Function<0x002f6e14, u32(u32)> ButtonActionControl__virtual_3;
inline constexpr guest::Function<0x002f71e4, u32(u32)> ButtonActionControl__virtual_2;
inline constexpr guest::Function<0x00568c10, u32(u32, u32, u32, u32)> Layout__virtual_3;
inline constexpr guest::Function<0x007237e0, u32(u32, u32, u32, u32)> sub_is_ready;

void f_0030a8f8(u32 r0) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 r0_7 = 0;
    u32 r0_8 = 0;
    u32 r4 = r0;
    u32 r5 = r0 + 0xbccu;  // (from the original)
    u32 r0_1 = sub_is_ready(r5, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r6 = 0x2f635cu;  // (from the original)
    if (r0_1 == 0) {
        goto L_30aa08;
    }
L_30a91c:;
    ButtonActionControl__virtual_2(r5);
    r0_2 = sub_is_ready(r5, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0_2 == 0) {
        guest::preempt();
        goto L_30a91c;
    }
L_30a93c:;
    release_active_child(r5);
    ButtonActionControl__virtual_3(r5);
    r5 = r4 + 0x19d4u;  // (from the original)
    r0_3 = sub_is_ready(r5, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0_3 == 0) {
        goto L_30aa20;
    }
L_30a96c:;
    ButtonActionControl__virtual_2(r5);
    r0_4 = sub_is_ready(r5, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0_4 == 0) {
        guest::preempt();
        goto L_30a96c;
    }
L_30a98c:;
    release_active_child(r5);
    ButtonActionControl__virtual_3(r5);
    r5 = r4 + 0x12d0u;  // (from the original)
    r0_5 = sub_is_ready(r5, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0_5 == 0) {
        goto L_30aa38;
    }
L_30a9bc:;
    ButtonActionControl__virtual_2(r5);
    r0_6 = sub_is_ready(r5, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0_6 == 0) {
        guest::preempt();
        goto L_30a9bc;
    }
L_30a9dc:;
    release_active_child(r5);
    ButtonActionControl__virtual_3(r5);
    r0_7 = r4 + 0x294u;  // (from the original)
    Layout__virtual_3(r0_7, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0_8 = r4 + 0x4d0u;  // (from the original)
    frame.release();
    Layout__virtual_3(r0_8, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    return;
L_30aa08:;
    if (*gptr<u32>(r5 + 0xb8u) != r6 || *gptr<u32>(r5 + 0xbcu) != 0) {  // (from the original)
        guest::preempt();
        goto L_30a93c;
    }
    guest::preempt();
    goto L_30a91c;
L_30aa20:;
    if (*gptr<u32>(r5 + 0xb8u) != r6 || *gptr<u32>(r5 + 0xbcu) != 0) {  // (from the original)
        guest::preempt();
        goto L_30a98c;
    }
    guest::preempt();
    goto L_30a96c;
L_30aa38:;
    if (*gptr<u32>(r5 + 0xb8u) != r6 || *gptr<u32>(r5 + 0xbcu) != 0) {  // (from the original)
        guest::preempt();
        goto L_30a9dc;
    }
    guest::preempt();
    goto L_30a9bc;
}

}  // namespace d_0030a8f8
GUEST_EXPORT(0x0030a8f8, d_0030a8f8::f_0030a8f8);

// f_0030aa54: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0030aa54 {

inline constexpr guest::Function<0x006a6eb0, u32(u32, u32)> read_u32_0x009526f8_;

u32 f_0030aa54() {
    return read_u32_0x009526f8_(guest::cpu()->r[0], guest::cpu()->r[1]);
}

}  // namespace d_0030aa54
GUEST_EXPORT(0x0030aa54, d_0030aa54::f_0030aa54);

// f_0030ac4c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0030ac4c {

inline constexpr guest::Function<0x00594e34, u32(u32, u32)> store_constants_594e34;

void f_0030ac4c() {
    store_constants_594e34(guest::cpu()->r[0], guest::cpu()->r[1]);
}

}  // namespace d_0030ac4c
GUEST_EXPORT(0x0030ac4c, d_0030ac4c::f_0030ac4c);

// f_0030af7c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0030af7c {

struct __attribute__((packed)) Object_0030af7c_0 {
    u8 unknown_0[0xae5];  // (not used here)
    u8 byte_ae5;
    u8 unknown_ae6[0x1c82];  // (not used here)
    u32 word_2768;
};
GUEST_OFFSET(Object_0030af7c_0, byte_ae5, 0xae5);
GUEST_OFFSET(Object_0030af7c_0, word_2768, 0x2768);

inline constexpr guest::Function<0x00568630, u32(u32, u32, u32, u32)> notify_objects_of_list;
inline constexpr guest::Function<0x00568984, u32(u32, u32, u32, u32)> notify_list_objects;
inline constexpr guest::Function<0x00568c10, u32(u32)> Layout__virtual_3;
inline constexpr guest::Function<0x005697e0, u32(u32)> Animation__set_value;

void f_0030af7c(gptr<Object_0030af7c_0> arg0, u32 r1, float S0) {
    guest::StackFrame frame(0x18);  // the original's stack frame
    u32 r0_2 = 0;
    if (u32(s8(arg0->byte_ae5)) == r1) {
        u32 r2_1 = arg0->word_2768;
        notify_objects_of_list(arg0.addr() + 0x294u, arg0.addr() + 0x458u, r2_1, 0u);  // (from the original)
        if (r1 != 0) {
            float S0_1 = 0.0f;
            guest::cpu()->s[0] = S0_1;
            Animation__set_value(arg0.addr() + 0x458u);  // (from the original)
            r0_2 = 0u;
        } else {
            float S0_3 = 1.0f;
            guest::cpu()->s[0] = S0_3;
            Animation__set_value(arg0.addr() + 0x458u);  // (from the original)
            r0_2 = 1u;
        }
        arg0->byte_ae5 = u8(r0_2);
        Layout__virtual_3(arg0.addr() + 0x294u);  // (from the original)
        u32 r2_4 = *gptr<u32>(arg0.addr() + 0x2768u);  // (from the original)
        frame.release();
        notify_list_objects(arg0.addr() + 0x294u, arg0.addr() + 0x458u, r2_4, 0u);
        return;  // (from the original)
    }
    guest::cpu()->s[0] = S0;
}

}  // namespace d_0030af7c
GUEST_EXPORT(0x0030af7c, d_0030af7c::f_0030af7c);

// f_0030b018: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0030b018 {

struct __attribute__((packed)) Object_0030b018_0 {
    u8 unknown_0[0x2750];  // (not used here)
    u32 word_2750;
    u32 word_2754;
    u8 unknown_2758[0xe5c];  // (not used here)
    u8 byte_35b4;
};
GUEST_OFFSET(Object_0030b018_0, word_2750, 0x2750);
GUEST_OFFSET(Object_0030b018_0, word_2754, 0x2754);
GUEST_OFFSET(Object_0030b018_0, byte_35b4, 0x35b4);

struct __attribute__((packed)) Local_0030b018_r0_1 {
    u8 unknown_0[0xb7];  // (not used here)
    u8 byte_b7;
};
GUEST_OFFSET(Local_0030b018_r0_1, byte_b7, 0xb7);

struct __attribute__((packed)) Local_0030b018_r0_2 {
    u8 unknown_0[0xb7];  // (not used here)
    u8 byte_b7;
};
GUEST_OFFSET(Local_0030b018_r0_2, byte_b7, 0xb7);

inline guest::global<u32, 0x0095362c> global_0095362c;
inline constexpr guest::Function<0x00305784, u32(u32, u32)> call_00305784;
inline constexpr guest::Function<0x0030a8f8, u32(u32, u32, u32, u32)> call_0030a8f8;
inline constexpr guest::Function<0x0030af7c, u32(u32, u32)> call_0030af7c;
inline constexpr guest::Function<0x0030b4a8, u32(u32, u32)> call_0030b4a8;
inline constexpr guest::Function<0x0030baa8, u32(u32, u32)> call_0030baa8;
inline constexpr guest::Function<0x00311228, u32(u32, u32, u32, u32)> call_00311228;
inline constexpr guest::Function<0x00568c10, u32(u32, u32)> Layout__virtual_3;
inline constexpr guest::Function<0x00569508, u32(u32)> apply_value;
inline constexpr guest::Function<0x005697e0, u32(u32)> Animation__set_value;
inline constexpr guest::Function<0x0075e650, u32(u32, u32)> call_0075e650;
inline constexpr guest::Function<0x0075f780, u32(u32)> call_0075f780;

u32 f_0030b018(gptr<Object_0030b018_0> arg0, float S0) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 r0 = arg0.addr();
    u32 r5 = r0;
    arg0->byte_35b4 = 0;
    call_0030a8f8(r5, 0u, guest::cpu()->r[2], guest::cpu()->r[3]);
    call_00305784(r5, 0u);
    gptr<Local_0030b018_r0_1> r0_1 = gptr<Local_0030b018_r0_1>(arg0->word_2754);
    r0_1->byte_b7 = u8(u32(r0_1->byte_b7) & 0xfeu);  // (from the original)
    gptr<Local_0030b018_r0_2> r0_2 = gptr<Local_0030b018_r0_2>(arg0->word_2750);
    u32 r1_1 = u32(r0_2->byte_b7) & 0xfeu | 1u;  // (from the original)
    r0_2->byte_b7 = u8(r1_1);
    Layout__virtual_3(r5 + 0x4d0u, r1_1);  // (from the original)
    u32 r0_5 = call_0075f780(*global_0095362c + 0x28ecu);  // (from the original)
    if (r0_5 == 0) {
        call_0030af7c(r5, 1u);
        S0 = guest::cpu()->s[0];
    } else {
        call_0030af7c(r5, 0u);
        S0 = guest::cpu()->s[0];
    }
    u32 r0_6 = *global_0095362c;
    u32 r4 = 0u;
    u32 r6 = r0_6 + 0x3594u;  // (from the original)
L_30b0b0:;
    guest::cpu()->s[0] = S0;
    u32 r0_7 = call_0075e650(r6, r4);
    S0 = guest::cpu()->s[0];
    if (r0_7 != 0) {
        call_0030b4a8(r5, 0u);
    } else {
        r4 += 1u;
        if (r4 < 0x20u) {  // (from the original)
            guest::preempt();
            goto L_30b0b0;
        }
        guest::cpu()->s[0] = S0;
        call_0030b4a8(r5, 1u);
    }
    call_0030baa8(r5, 1u);
    float S0_6 = 0.0f;
    guest::cpu()->s[0] = S0_6;
    Animation__set_value(r5 + 0x480u);  // (from the original)
    apply_value(r5 + 0x4a8u);  // (from the original)
    frame.release();
    return call_00311228(r5, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0030b018
GUEST_EXPORT(0x0030b018, d_0030b018::f_0030b018);

// f_0030b150: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0030b150 {

inline constexpr guest::Function<0x007685c4, u32(u32, u32)> Item__has_flag_bit_10_in_type_10;

u32 f_0030b150() {
    return Item__has_flag_bit_10_in_type_10(guest::cpu()->r[0], guest::cpu()->r[1]);
}

}  // namespace d_0030b150
GUEST_EXPORT(0x0030b150, d_0030b150::f_0030b150);

// f_0030b154: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0030b154 {

inline constexpr guest::Function<0x006b9904, u32(u32, u32)> call_006b9904;

void f_0030b154() {
    call_006b9904(guest::cpu()->r[0], guest::cpu()->r[1]);
}

}  // namespace d_0030b154
GUEST_EXPORT(0x0030b154, d_0030b154::f_0030b154);

// f_0030b15c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0030b15c {

inline constexpr u32 vtable_script__WordFix_15u_ = 0x00909af0u;
inline guest::global<u32, 0x0095decc> global_0095decc;
inline constexpr guest::Function<0x002f825c, u32(u32, u32)> clear_aligned;
inline constexpr guest::Function<0x003083bc, u32(u32, u32, u32, u32)> script__construct_word_ptr;
inline constexpr guest::Function<0x005e2e50, u32(u32, u32)> call_005e2e50;
inline constexpr guest::Function<0x005e2f94, u32(u32)> call_005e2f94;
inline constexpr guest::Function<0x005ea8dc, u32(u32, u32)> LinkOwner__unlink;
inline constexpr guest::Function<0x005ea8f8, u32(u32, u32, u32, u32)> call_005ea8f8;
inline constexpr guest::Function<0x005ea964, u32(u32, u32, u32, u32)> call_005ea964;
inline constexpr guest::Function<0x005f4bfc, u32(u32)> construct_script_word;

struct __attribute__((packed)) Frame_0030b15c {
    u32 word_0;
    u8 unknown_4[0x4];  // (not read or written by name)
    u32 word_8;
    u8 unknown_c[0x34];  // (not read or written by name)
};
GUEST_OFFSET(Frame_0030b15c, word_0, 0x0);
GUEST_OFFSET(Frame_0030b15c, word_8, 0x8);
GUEST_SIZE(Frame_0030b15c, 0x40);

void script__WordFix_15u___WordFix_0030b15c(u32 r0, u32 r1_unused, u32 r2_unused, u32 r3) {
    guest::StackFrameOf<Frame_0030b15c> frame;  // the original's stack frame
    u32 res_1 = 0;
    u32 r3_4 = 0;
    u32 r6 = r0;
    u32 r0_1 = frame.at(8).addr();
    script__construct_word_ptr(r0_1, frame.at(0x20).addr(), 0xfu, r3);  // (from the original)
    u32 r5 = vtable_script__WordFix_15u_;
    *gptr<u32>(r0_1) = r5;
    u32 r0_2 = r0_1 + 0xcu;  // (from the original)
    construct_script_word(r0_2);
    u32 r4_1 = r0_2 - 0xcu;  // (from the original)
    clear_aligned(r0_2 + 0xcu, 0x1eu);  // (from the original)
    u32 r1 = 0x8906ecu;  // (from the original)
    r0 = r4_1 + 0x18u;  // (from the original)
    *gptr<u16>(r4_1 + 0x18u) = *gptr<u16>(r1);  // (from the original)
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
    frame->word_0 = 0;
    call_005ea964(*global_0095decc, frame.at(8).addr(), 0x847ac4u, 0x17au);  // (from the original)
    LinkOwner__unlink(*global_0095decc, 0u);
    u32 r0_7 = r6 + 0x27d0u;  // (from the original)
    call_005e2e50(r0_7, frame.at(8).addr());
    call_005e2f94(r0_7);
    frame->word_8 = r5;
}

}  // namespace d_0030b15c
GUEST_EXPORT_FRAMED(0x0030b15c, d_0030b15c::script__WordFix_15u___WordFix_0030b15c, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0030b250: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0030b250 {

struct __attribute__((packed)) Object_0030b250_0 {
    u8 unknown_0[0x4e];  // (not used here)
    u8 byte_4e;
    u8 byte_4f;
    u8 byte_50;
};
GUEST_OFFSET(Object_0030b250_0, byte_4e, 0x4e);
GUEST_OFFSET(Object_0030b250_0, byte_4f, 0x4f);
GUEST_OFFSET(Object_0030b250_0, byte_50, 0x50);

inline constexpr guest::Function<0x0027a48c, u32(u32, u32, u32, u32)> SavedRecordHeader__clear;
inline constexpr guest::Function<0x002fc8e8, u32(u32, u32)> copy_item_002fc8e8;
inline constexpr guest::Function<0x00303cdc, u32(u32)> clear_inner;
inline constexpr guest::Function<0x003084d0, u32(u32)> clear_identity_with_value;

u32 update_with_value_4e(gptr<Object_0030b250_0> arg0, u32 r1, u32 r2) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 r0 = arg0.addr();
    u32 r4 = r0;
    SavedRecordHeader__clear(r0, r1, r2, guest::cpu()->r[3]);
    clear_identity_with_value(r4 + 0x16u);  // (from the original)
    arg0->byte_4e = 0x21;  // (from the original)
    clear_inner(r4 + 0x46u);  // (from the original)
    arg0->byte_4f = 0xff;  // (from the original)
    arg0->byte_50 = 9;
    r0 = 0u;
    r2 = ~0u;
    do {
        u32 r1_3 = r0 & 0xffu;  // (from the original)
        u32 cf_1 = r1_3 >= 3u;
        if (r1_3 < 3u) {
            r1_3 += r4;
        }
        r0 += 1u;
        if (!cf_1) {
            *gptr<u8>(r1_3 + 0x56u) = u8(r2);  // (from the original)
        }
        guest::preempt();
    } while (s32(r0) < 3);
    *gptr<u8>(r4 + 0x5au) = 0;  // (from the original)
    *gptr<u8>(r4 + 0x59u) = 0;  // (from the original)
    *gptr<u8>(r4 + 0x5bu) = 0;  // (from the original)
    frame.release();
    return copy_item_002fc8e8(r4 + 0x52u, 0x95bfdcu);  // (from the original)
}

}  // namespace d_0030b250
GUEST_EXPORT(0x0030b250, d_0030b250::update_with_value_4e);

// f_0030b36c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0030b36c {

struct __attribute__((packed)) Object_0030b36c_0 {
    u8 unknown_0[0x1e];  // (not used here)
    u8 byte_1e;
    u8 byte_1f;
};
GUEST_OFFSET(Object_0030b36c_0, byte_1e, 0x1e);
GUEST_OFFSET(Object_0030b36c_0, byte_1f, 0x1f);

inline constexpr guest::Function<0x002fb378, u32(u32, u32, u32, u32)> return_constant_0xad56b0_;
inline constexpr guest::Function<0x0030b924, u32(u32, u32, u32, u32)> apply_record_mode;
inline constexpr guest::Function<0x00757620, u32(u32, u32, u32)> scheduled_time_has_passed;

void f_0030b36c(gptr<Object_0030b36c_0> arg0, u32 r1, u32 r2) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 r0 = arg0.addr();
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r4 = r0;
    r0 = arg0->byte_1e;
    if (r0 >= 0x21u) {  // (from the original)
        return;
    }
    if (r0 == 0xeu || r0 == 0xfu) {  // (from the original)
        goto L_30b3e0;
    }
    if (r0 != 0x10u && r0 != 0x11u) {  // (from the original)
        return;
    }
    r1 = arg0->byte_1f;
    if (r1 >= 3u) {
        guest::cpu()->r[1] = r1;
        return;
    }
L_30b3a4:;
    if (r0 != 0x10u) {  // (from the original)
        guest::cpu()->r[1] = r1;
        return;
    }
L_30b3ac:;
    r0_1 = return_constant_0xad56b0_(r0, r1, r2, guest::cpu()->r[3]);
    r0_2 = scheduled_time_has_passed(r4, r0_1, 0u);
    if (r0_2 == 0) {
        *gptr<u8>(r4 + 0x24u) = u8(u32(*gptr<u8>(r4 + 0x24u)) | 4u);  // (from the original)
        return;
    }
    frame.release();
    apply_record_mode(r4, 0u, guest::cpu()->r[2], guest::cpu()->r[3]);
    return;
L_30b3e0:;
    r1 = *gptr<u8>(r4 + 0x1fu);  // (from the original)
    if (r1 >= 2u) {
        guest::cpu()->r[1] = r1;
        return;
    }
    if (r0 == 0xeu) {  // (from the original)
        guest::preempt();
        goto L_30b3ac;
    }
    guest::preempt();
    goto L_30b3a4;
}

}  // namespace d_0030b36c
GUEST_EXPORT(0x0030b36c, d_0030b36c::f_0030b36c);

// f_0030b410: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0030b410 {

inline constexpr guest::Function<0x006b9934, u32(u32, u32)> call_006b9934;

u32 f_0030b410() {
    return call_006b9934(guest::cpu()->r[0], guest::cpu()->r[1]);
}

}  // namespace d_0030b410
GUEST_EXPORT(0x0030b410, d_0030b410::f_0030b410);

// f_0030b414: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0030b414 {

inline constexpr guest::Function<0x0051e7d4, u32(u32, u32, u32, u32)> call_0051e7d4;

void f_0030b414(u32 r0) {
    call_0051e7d4(0xa82b90u, r0, guest::cpu()->r[2], guest::cpu()->r[3]);
    return;  // (from the original)
}

}  // namespace d_0030b414
GUEST_EXPORT(0x0030b414, d_0030b414::f_0030b414);

// f_0030b4a8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0030b4a8 {

struct __attribute__((packed)) Object_0030b4a8_0 {
    u8 unknown_0[0xbc5];  // (not used here)
    u8 byte_bc5;
    u8 unknown_bc6[0x1ba6];  // (not used here)
    u32 word_276c;
};
GUEST_OFFSET(Object_0030b4a8_0, byte_bc5, 0xbc5);
GUEST_OFFSET(Object_0030b4a8_0, word_276c, 0x276c);

inline constexpr guest::Function<0x00568630, u32(u32, u32, u32, u32)> notify_objects_of_list;
inline constexpr guest::Function<0x00568984, u32(u32, u32, u32, u32)> notify_list_objects;
inline constexpr guest::Function<0x00568c10, u32(u32)> Layout__virtual_3;
inline constexpr guest::Function<0x005697e0, u32(u32)> Animation__set_value;

u32 f_0030b4a8(gptr<Object_0030b4a8_0> arg0, u32 r1, float S0) {
    guest::StackFrame frame(0x18);  // the original's stack frame
    u32 r0_3 = 0;
    u32 r0_1 = s8(arg0->byte_bc5);
    if (r0_1 == r1) {
        u32 r2_1 = arg0->word_276c;
        notify_objects_of_list(arg0.addr() + 0x294u, arg0.addr() + 0x458u, r2_1, 0u);  // (from the original)
        if (r1 != 0) {
            float S0_1 = 0.0f;
            guest::cpu()->s[0] = S0_1;
            Animation__set_value(arg0.addr() + 0x458u);  // (from the original)
            r0_3 = 0u;
        } else {
            float S0_3 = 1.0f;
            guest::cpu()->s[0] = S0_3;
            Animation__set_value(arg0.addr() + 0x458u);  // (from the original)
            r0_3 = 1u;
        }
        arg0->byte_bc5 = u8(r0_3);
        Layout__virtual_3(arg0.addr() + 0x294u);  // (from the original)
        u32 r2_4 = *gptr<u32>(arg0.addr() + 0x276cu);  // (from the original)
        frame.release();
        return notify_list_objects(arg0.addr() + 0x294u, arg0.addr() + 0x458u, r2_4, 0u);  // (from the original)
    }
    guest::cpu()->r[1] = r1;
    guest::cpu()->s[0] = S0;
    return r0_1;
}

}  // namespace d_0030b4a8
GUEST_EXPORT(0x0030b4a8, d_0030b4a8::f_0030b4a8);

// f_0030b544: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0030b544 {

struct __attribute__((packed)) Object_0030b544_0 {
    u8 unknown_0[0x1e];  // (not used here)
    u8 byte_1e;
    u8 byte_1f;
    u8 unknown_20[0x4];  // (not used here)
    u8 byte_24;
};
GUEST_OFFSET(Object_0030b544_0, byte_1e, 0x1e);
GUEST_OFFSET(Object_0030b544_0, byte_1f, 0x1f);
GUEST_OFFSET(Object_0030b544_0, byte_24, 0x24);


void f_0030b544(gptr<Object_0030b544_0> arg0) {
    u32 r1_1 = arg0->byte_1e;
    if (r1_1 >= 0x21u) {  // (from the original)
        guest::cpu()->r[1] = r1_1;
        return;
    }
    if (r1_1 == 0xeu || r1_1 == 0xfu) {  // (from the original)
        if (arg0->byte_1f >= 2u) {
            guest::cpu()->r[1] = r1_1;
            return;
        }
        if (r1_1 == 0xeu) {  // (from the original)
            u32 r1_2 = u32(arg0->byte_24) & ~4u;
            arg0->byte_24 = u8(r1_2);
            guest::cpu()->r[1] = r1_2;
            return;
        }
    } else if (r1_1 != 0x10u && r1_1 != 0x11u || arg0->byte_1f >= 3u) {  // (from the original)
        guest::cpu()->r[1] = r1_1;
        return;
    }
    if (r1_1 != 0x10u) {  // (from the original)
        guest::cpu()->r[1] = r1_1;
        return;
    }
    u32 r1_3 = u32(arg0->byte_24) & ~4u;
    arg0->byte_24 = u8(r1_3);
    guest::cpu()->r[1] = r1_3;
}

}  // namespace d_0030b544
GUEST_EXPORT(0x0030b544, d_0030b544::f_0030b544);

// f_0030b9d4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0030b9d4 {

struct __attribute__((packed)) Object_0030b9d4_0 {
    u8 unknown_0[0x1743b];  // (not used here)
    u8 byte_1743b;
};
GUEST_OFFSET(Object_0030b9d4_0, byte_1743b, 0x1743b);

inline constexpr guest::Function<0x00301e20, u32(u32, u32, u32, u32)> is_villager_record;
inline constexpr guest::Function<0x00308971, u32(u32, u32, u32)> index_of_same_villager;
inline constexpr guest::Function<0x00309ef0, u32(u32, u32, u32)> SavedRecordInner__has_value;
inline constexpr guest::Function<0x00318d8c, u32(u32, u32, u32)> call_00318d8c;

struct __attribute__((packed)) Frame_0030b9d4 {
    u32 word_0;
    u32 word_4;
    u8 unknown_8[0x4];  // (not read or written by name)
};
GUEST_OFFSET(Frame_0030b9d4, word_0, 0x0);
GUEST_OFFSET(Frame_0030b9d4, word_4, 0x4);
GUEST_SIZE(Frame_0030b9d4, 0xc);

u32 villagers_check_30b9d4(gptr<Object_0030b9d4_0> arg0, u32 r1, u32 r2) {
    guest::StackFrameOf<Frame_0030b9d4> frame;  // the original's stack frame
    u32 r0 = arg0.addr();
    u32 r0_5 = 0;
    u32 r5_1 = r1;
    u32 r0_1 = is_villager_record(r1, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0_1 != 0 && arg0->byte_1743b < 4u) {
        u32 r0_2 = index_of_same_villager(r5_1, r0, 0xau);  // (from the original)
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        u32 r6 = r0_2;
        if (r0_2 < 0xau) {  // (from the original)
            u32 r5 = 0u;
            u32 r4 = r0 + 0x173ecu;  // (from the original)
            frame->word_4 = r4 + 0x46u;  // (from the original)
            do {
                u32 r7_1 = uxtb(r5);
                if (r7_1 < 3u) {
                    u32 r0_3 = frame->word_4;
                    frame->word_0 = r0_3;
                    u32 r0_4 = SavedRecordInner__has_value(r0_3, r1, r2);
                    r1 = guest::cpu()->r[1];
                    r2 = guest::cpu()->r[2];
                    if (r0_4 != 0 && *gptr<u8>(frame->word_0 + 8u) == 0x12u) {  // (from the original)
                        r0_5 = call_00318d8c(r4, r7_1, r2);
                        r1 = guest::cpu()->r[1];
                        r2 = guest::cpu()->r[2];
                        goto L_30ba2a;
                    }
                }
                r0_5 = ~0u;
L_30ba2a:;
                if (r6 == r0_5) {
                    guest::cpu()->r[1] = r1;
                    return uxtb(r5);
                }
                r5 += 1u;
                guest::preempt();
            } while (s32(r5) < 3);
        }
    }
    guest::cpu()->r[1] = r1;
    return 3u;
}

}  // namespace d_0030b9d4
GUEST_EXPORT_FRAMED(0x0030b9d5, d_0030b9d4::villagers_check_30b9d4, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_0030baa8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0030baa8 {

struct __attribute__((packed)) Object_0030baa8_0 {
    u8 unknown_0[0x925];  // (not used here)
    u8 byte_925;
    u8 unknown_926[0xdf];  // (not used here)
    u8 byte_a05;
};
GUEST_OFFSET(Object_0030baa8_0, byte_925, 0x925);
GUEST_OFFSET(Object_0030baa8_0, byte_a05, 0xa05);

inline constexpr guest::Function<0x002b6d20, u32(u32, u32, u32, u32)> start_or_stop_button_node;

u32 f_0030baa8(gptr<Object_0030baa8_0> arg0, u32 r1) {
    u32 r0_1 = arg0.addr() + 0x84cu;  // (from the original)
    if (r1 != 0) {
        start_or_stop_button_node(r0_1, 1u, guest::cpu()->r[2], guest::cpu()->r[3]);
        arg0->byte_925 = 0;
        u32 r0_2 = start_or_stop_button_node(arg0.addr() + 0x92cu, 0u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        arg0->byte_a05 = 1;
        return r0_2;
    }
    start_or_stop_button_node(r0_1, 0u, guest::cpu()->r[2], guest::cpu()->r[3]);
    arg0->byte_925 = 1;
    u32 r0_3 = start_or_stop_button_node(arg0.addr() + 0x92cu, 1u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    arg0->byte_a05 = 0;
    return r0_3;
}

}  // namespace d_0030baa8
GUEST_EXPORT_FRAMED(0x0030baa8, d_0030baa8::f_0030baa8, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_0030bb48: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0030bb48 {

inline constexpr guest::Function<0x006b9d30, u32(u32, u32)> call_006b9d30;

u32 f_0030bb48() {
    return call_006b9d30(guest::cpu()->r[0], guest::cpu()->r[1]);
}

}  // namespace d_0030bb48
GUEST_EXPORT(0x0030bb48, d_0030bb48::f_0030bb48);

// f_0030bb4c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0030bb4c {

inline constexpr u32 vtable_script__WordFix_15u_ = 0x00909af0u;
inline guest::global<u32, 0x0095decc> global_0095decc;
inline constexpr guest::Function<0x002f825c, u32(u32, u32)> clear_aligned;
inline constexpr guest::Function<0x003083bc, u32(u32, u32, u32, u32)> script__construct_word_ptr;
inline constexpr guest::Function<0x005e2e50, u32(u32, u32)> call_005e2e50;
inline constexpr guest::Function<0x005e2f94, u32(u32)> call_005e2f94;
inline constexpr guest::Function<0x005ea8dc, u32(u32, u32)> LinkOwner__unlink;
inline constexpr guest::Function<0x005ea8f8, u32(u32, u32, u32, u32)> call_005ea8f8;
inline constexpr guest::Function<0x005ea964, u32(u32, u32, u32, u32)> call_005ea964;
inline constexpr guest::Function<0x005f4bfc, u32(u32)> construct_script_word;

struct __attribute__((packed)) Frame_0030bb4c {
    u32 word_0;
    u8 unknown_4[0x4];  // (not read or written by name)
    u32 word_8;
    u8 unknown_c[0x34];  // (not read or written by name)
};
GUEST_OFFSET(Frame_0030bb4c, word_0, 0x0);
GUEST_OFFSET(Frame_0030bb4c, word_8, 0x8);
GUEST_SIZE(Frame_0030bb4c, 0x40);

void script__WordFix_15u___WordFix_0030bb4c(u32 r0, u32 r1_unused, u32 r2_unused, u32 r3) {
    guest::StackFrameOf<Frame_0030bb4c> frame;  // the original's stack frame
    u32 res_1 = 0;
    u32 r3_4 = 0;
    u32 r6 = r0;
    u32 r0_1 = frame.at(8).addr();
    script__construct_word_ptr(r0_1, frame.at(0x20).addr(), 0xfu, r3);  // (from the original)
    u32 r5 = vtable_script__WordFix_15u_;
    *gptr<u32>(r0_1) = r5;
    u32 r0_2 = r0_1 + 0xcu;  // (from the original)
    construct_script_word(r0_2);
    u32 r4_1 = r0_2 - 0xcu;  // (from the original)
    clear_aligned(r0_2 + 0xcu, 0x1eu);  // (from the original)
    u32 r1 = 0x8906ecu;  // (from the original)
    r0 = r4_1 + 0x18u;  // (from the original)
    *gptr<u16>(r4_1 + 0x18u) = *gptr<u16>(r1);  // (from the original)
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
    frame->word_0 = 0;
    call_005ea964(*global_0095decc, frame.at(8).addr(), 0x847ac4u, 0x179u);  // (from the original)
    LinkOwner__unlink(*global_0095decc, 0u);
    u32 r0_7 = r6 + 0x2894u;  // (from the original)
    call_005e2e50(r0_7, frame.at(8).addr());
    call_005e2f94(r0_7);
    frame->word_8 = r5;
}

}  // namespace d_0030bb4c
GUEST_EXPORT_FRAMED(0x0030bb4c, d_0030bb4c::script__WordFix_15u___WordFix_0030bb4c, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0030bc40: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0030bc40 {

inline constexpr guest::Function<0x007683cc, u32(u32, u32)> item_number_in_6c_70;

u32 f_0030bc40() {
    return item_number_in_6c_70(guest::cpu()->r[0], guest::cpu()->r[1]);
}

}  // namespace d_0030bc40
GUEST_EXPORT(0x0030bc40, d_0030bc40::f_0030bc40);

// f_0030bc44: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0030bc44 {

inline guest::global<u32, 0x00a83af0> global_00a83af0;

u32 f_0030bc44(u32 r0) {
    u32 r1_1 = *global_00a83af0;
    u32 zf_1 = r1_1 == 0;
    u32 cf_1 = r1_1 >= 0u;
    if (!zf_1) {
        zf_1 = 0x18fu == r0;  // (from the original)
        cf_1 = 0x18fu >= r0;  // (from the original)
    }
    if (!cf_1 || zf_1) {
        guest::cpu()->r[1] = r1_1;
        return 0u;
    }
    u32 r0_1 = r1_1 + r0 * 0x22u;  // (from the original)
    if (r0_1 == 0) {
        guest::cpu()->r[1] = r1_1;
        return 0u;
    }
    u32 res_1 = u32(*gptr<u8>(r0_1 + 0x1cu)) & 0xfu;  // (from the original)
    u32 zf_2 = res_1 == 0;
    if (!zf_2) {
        zf_2 = res_1 == 1u;
    }
    if (!zf_2) {
        zf_2 = res_1 == 2u;
    }
    if (zf_2) {
        guest::cpu()->r[1] = r1_1;
        return 1u;
    }
    guest::cpu()->r[1] = r1_1;
    return 0u;
}

}  // namespace d_0030bc44
GUEST_EXPORT(0x0030bc44, d_0030bc44::f_0030bc44);

// f_0030bc90: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0030bc90 {

struct __attribute__((packed)) Object_0030bc90_1 {
    u8 unknown_0[0x2c];  // (not used here)
    u16 half_2c;
};
GUEST_OFFSET(Object_0030bc90_1, half_2c, 0x2c);

struct __attribute__((packed)) Local_0030bc90_ea_1 {
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
GUEST_OFFSET(Local_0030bc90_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_0030bc90_ea_1, word_4, 0x4);
GUEST_OFFSET(Local_0030bc90_ea_1, word_8, 0x8);
GUEST_OFFSET(Local_0030bc90_ea_1, word_c, 0xc);
GUEST_OFFSET(Local_0030bc90_ea_1, word_10, 0x10);
GUEST_OFFSET(Local_0030bc90_ea_1, word_14, 0x14);
GUEST_OFFSET(Local_0030bc90_ea_1, word_18, 0x18);
GUEST_OFFSET(Local_0030bc90_ea_1, word_1c, 0x1c);
GUEST_OFFSET(Local_0030bc90_ea_1, word_20, 0x20);

struct __attribute__((packed)) Local_0030bc90_r0_8 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_0030bc90_r0_8, word_0, 0x0);
GUEST_OFFSET(Local_0030bc90_r0_8, word_4, 0x4);
GUEST_OFFSET(Local_0030bc90_r0_8, word_8, 0x8);

struct __attribute__((packed)) Local_0030bc90_r4_2 {
    u8 unknown_0[0x8];  // (not used here)
    u8 byte_8;
    u8 unknown_9[0x5];  // (not used here)
    u8 byte_e;
    u8 byte_f;
    u32 word_10;
};
GUEST_OFFSET(Local_0030bc90_r4_2, byte_8, 0x8);
GUEST_OFFSET(Local_0030bc90_r4_2, byte_e, 0xe);
GUEST_OFFSET(Local_0030bc90_r4_2, byte_f, 0xf);
GUEST_OFFSET(Local_0030bc90_r4_2, word_10, 0x10);

inline constexpr guest::Function<0x002f777c, u32(u32)> do_nothing_002f777c;
inline constexpr guest::Function<0x002fb328, u32(u32)> get_save_data;
inline constexpr guest::Function<0x002fb378, u32(u32)> return_constant_0xad56b0_;
inline constexpr guest::Function<0x002fc8e8, u32(u32, u32)> copy_item_002fc8e8;
inline constexpr guest::Function<0x003014b4, u32(u32, u32, u32)> TimeStamp__add_days;
inline constexpr guest::Function<0x00304f30, u32(u32, u32, u32, u32)> call_00304f30;
inline constexpr guest::Function<0x0030c3e5, u32(u32, u32)> call_0030c3e4;
inline constexpr guest::Function<0x0030f52c, u32(u32, u32)> call_0030f52c;
inline constexpr guest::Function<0x0030f56c, u32(u32, u32)> narrow_date;
inline constexpr guest::Function<0x0030f588, u32(u32, u32)> copy_villager_item_249a;
inline constexpr guest::Function<0x0030f594, u32(u32)> is_special_item;
inline constexpr guest::Function<0x00406448, u32(u32)> call_00406448;
inline constexpr guest::Function<0x0040644c, u32(u32)> call_0040644c;
inline constexpr guest::Function<0x005b7418, u32(u32, u32)> call_005b7418;
inline constexpr guest::Function<0x005b8188, u32(u32)> call_005b8188;
inline constexpr guest::Function<0x005b81b8, u32(u32, u32, u32, u32)> call_005b81b8;
inline constexpr guest::Function<0x005b81fc, u32(u32)> call_005b81fc;

void f_0030bc90(u32 r0, gptr<Object_0030bc90_1> arg1, u32 r2, u32 r3) {
    u32 r1 = arg1.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    u32 r1_2 = 0;
    gptr<Local_0030bc90_ea_1> ea_1 = gptr<Local_0030bc90_ea_1>(r13 - 0x24);  // (from the original)
    ea_1->word_0 = r0;
    ea_1->word_4 = r1;
    ea_1->word_8 = r2;
    ea_1->word_c = r3;
    ea_1->word_10 = r4;
    ea_1->word_14 = r5;
    ea_1->word_18 = r6;
    ea_1->word_1c = r7;
    ea_1->word_20 = r14;
    r13 = ea_1.addr() - 0x14u;  // (from the original)
    u32 r4_1 = arg1->half_2c;
    u32 r0_1 = *gptr<u32>(r13 + 0x14u) + 0x1972eu;  // (from the original)
    if (r0_1 != 0) {
        r2 = 0x18fu;  // (from the original)
        if (r4_1 < r2) {
            u32 r1_1 = r4_1 >> 3;
            r2 = r4_1 & 7u;
            if (r1_1 < 0x32u) {  // (from the original)
                r1_2 = lsr_r(u32(*gptr<u8>(r0_1 + r1_1)), r2 & 0xff) & 1u;  // (from the original)
                goto L_30bcc0;
            }
        }
    }
    r1_2 = 0u;
L_30bcc0:;
    guest::cpu()->r[13] = r13;
    call_005b81b8(r1, r1_2 ^ 1u, r2, r3);
    u32 r0_2 = *gptr<u32>(r13 + 0x14u);  // (from the original)
    guest::cpu()->r[13] = r13;
    call_0030c3e4(r0_2, r4_1);
    gptr<Local_0030bc90_r4_2> r4_2 = gptr<Local_0030bc90_r4_2>(r1 + (0x25u << 8));  // (from the original)
    r4_2->byte_8 = u8(r3);
    r4_2->byte_e = 1;
    r4_2->word_10 = (r4_2->word_10 & ~1u) | 2u;
    guest::cpu()->r[13] = r13;
    call_005b8188(r1);
    r4_2->byte_f = 2;
    guest::cpu()->r[13] = r13;
    u32 r0_5 = call_0030f52c(r1 + (0x45u << 5), r1);  // (from the original)
    guest::cpu()->r[13] = r13;
    u32 r0_6 = get_save_data(r0_5);
    guest::cpu()->r[13] = r13;
    u32 r0_7 = call_0030f52c(r1, r0_6 + 0x621b8u);  // (from the original)
    guest::cpu()->r[13] = r13;
    gptr<Local_0030bc90_r0_8> r0_8 = gptr<Local_0030bc90_r0_8>(return_constant_0xad56b0_(r0_7));
    u32 r1_8 = r0_8->word_0;
    u32 r2_7 = r0_8->word_4;
    u32 r0_9 = r0_8->word_8;
    *gptr<u32>(r13) = r1_8;
    *gptr<u32>(r13 + 8u) = r0_9;
    *gptr<u32>(r13 + 4u) = r2_7;
    guest::cpu()->r[13] = r13;
    TimeStamp__add_days(r13, 1u, r2_7);
    guest::cpu()->r[13] = r13;
    narrow_date(r1 + 0x250au, r13);  // (from the original)
    guest::cpu()->r[13] = r13;
    copy_villager_item_249a(r13 + 0xcu, r1);  // (from the original)
    guest::cpu()->r[13] = r13;
    u32 r0_14 = is_special_item(r13 + 0xcu);  // (from the original)
    if (r0_14 != 0) {
        guest::cpu()->r[13] = r13;
        u32 r0_16 = call_00406448(r13 + 0xcu);  // (from the original)
        guest::cpu()->r[13] = r13;
        u32 r0_18 = call_0040644c(r13 + 0xcu);  // (from the original)
        u32 r2_13 = *gptr<u32>(r13 + 0x1cu);  // (from the original)
        guest::cpu()->r[13] = r13;
        call_00304f30(r13 + 0xcu, r0_18, r2_13, r0_16);  // (from the original)
        guest::cpu()->r[13] = r13;
        copy_item_002fc8e8(r1 + 0x249au, r13 + 0xcu);  // (from the original)
    }
    u32 r1_14 = *gptr<u32>(r13 + 0x1cu);  // (from the original)
    u32 r0_21 = *gptr<u32>(r13 + 0x14u);  // (from the original)
    guest::cpu()->r[13] = r13;
    call_005b7418(r0_21, r1_14);
    if (r3 == 2u) {
        r0_21 = r1;
        guest::cpu()->r[13] = r13;
        call_005b81fc(r0_21);
    }
    guest::cpu()->r[13] = r13;
    do_nothing_002f777c(r0_21);
    r13 += 0x24u;  // (from the original)
    u32 r4_3 = *gptr<u32>(r13);
    u32 r5_1 = *gptr<u32>(r13 + 4);
    u32 r6_1 = *gptr<u32>(r13 + 8);
    u32 r7_1 = *gptr<u32>(r13 + 0xc);  // (from the original)
    u32 tpc_1 = *gptr<u32>(r13 + 0x10);  // (from the original)
    r13 += 0x14;  // (from the original)
    guest::cpu()->r[4] = r4_3;
    guest::cpu()->r[5] = r5_1;
    guest::cpu()->r[6] = r6_1;
    guest::cpu()->r[7] = r7_1;
    guest::cpu()->r[13] = r13;
}

}  // namespace d_0030bc90
GUEST_EXPORT(0x0030bc91, d_0030bc90::f_0030bc90);

// f_0030bd94: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0030bd94 {

inline constexpr guest::Function<0x0057b498, u32(u32, u32, u32, u32)> AcNpc__AcNpc;

u32 f_0030bd94() {
    return AcNpc__AcNpc(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0030bd94
GUEST_EXPORT(0x0030bd94, d_0030bd94::f_0030bd94);

// f_0030bd9c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0030bd9c {

struct __attribute__((packed)) Local_0030bd9c_ea_1 {
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
GUEST_OFFSET(Local_0030bd9c_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_0030bd9c_ea_1, word_4, 0x4);
GUEST_OFFSET(Local_0030bd9c_ea_1, word_8, 0x8);
GUEST_OFFSET(Local_0030bd9c_ea_1, word_c, 0xc);
GUEST_OFFSET(Local_0030bd9c_ea_1, word_10, 0x10);
GUEST_OFFSET(Local_0030bd9c_ea_1, word_14, 0x14);
GUEST_OFFSET(Local_0030bd9c_ea_1, word_18, 0x18);
GUEST_OFFSET(Local_0030bd9c_ea_1, word_1c, 0x1c);
GUEST_OFFSET(Local_0030bd9c_ea_1, word_20, 0x20);

inline constexpr guest::Function<0x002f8574, u32(u32, u32, u32)> copy_bytes_at_any_alignment;
inline constexpr guest::Function<0x002f9bdc, u32(u32)> reset_category_40_flags_of_all;
inline constexpr guest::Function<0x002fb328, u32(u32, u32, u32, u32)> get_save_data;
inline constexpr guest::Function<0x002fb378, u32(u32)> return_constant_0xad56b0_;
inline constexpr guest::Function<0x002fbd54, u32(u32, u32, u32, u32)> PersonalId__is_set;
inline constexpr guest::Function<0x00301df4, u32(u32, u32, u32, u32)> player_in_array;
inline constexpr guest::Function<0x00301e6c, u32(u32, u32)> entry_34_at;
inline constexpr guest::Function<0x00308380, u32(u32, u32, u32, u32)> call_00308380;
inline constexpr guest::Function<0x00308d4d, u32(u32, u32, u32, u32)> call_00308d4c;
inline constexpr guest::Function<0x0030f52c, u32(u32, u32)> call_0030f52c;
inline constexpr guest::Function<0x0030f56c, u32(u32, u32)> narrow_date;
inline constexpr guest::Function<0x00311744, u32(u32, u32)> call_00311744;
inline constexpr guest::Function<0x003122bd, u32(u32, u32, u32, u32)> call_003122bc;

void f_0030bd9c(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    gptr<Local_0030bd9c_ea_1> ea_1 = gptr<Local_0030bd9c_ea_1>(r13 - 0x24);  // (from the original)
    ea_1->word_0 = r0;
    ea_1->word_4 = r1;
    ea_1->word_8 = r2;
    ea_1->word_c = r3;
    ea_1->word_10 = r4;
    ea_1->word_14 = r5;
    ea_1->word_18 = r6;
    ea_1->word_1c = r7;
    ea_1->word_20 = r14;
    r13 = ea_1.addr() - 0xcu;  // (from the original)
    u32 r4_1 = r2;
    r7 = r0;
    guest::cpu()->r[13] = r13;
    call_00308d4c(r0, r1, r2, r3);
    u32 r1_1 = *gptr<u16>(r13 + 0x10u);  // (from the original)
    guest::cpu()->r[13] = r13;
    u32 r0_1 = call_00311744(0xa8349cu, r1_1);  // (from the original)
    u32 r1_2 = *gptr<u16>(r13 + 0x10u);  // (from the original)
    guest::cpu()->r[13] = r13;
    u32 r0_2 = entry_34_at(0xa83aecu, r1_2);  // (from the original)
    if (r0_1 != 0 && r0_2 != 0) {
        *gptr<u8>(r13) = u8(u32(*gptr<u8>(r0_2 + 0x1cu)) >> 4);  // (from the original)
        guest::cpu()->r[13] = r13;
        u32 r0_3 = call_00308380(r7, r13 + 0x10u, r13, r3);  // (from the original)
        if (r4_1 != 2u) {
            guest::cpu()->r[13] = r13;
            u32 r0_4 = get_save_data(r0_3, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
            guest::cpu()->r[13] = r13;
            call_0030f52c(r7 + (0x45u << 5), r0_4 + 0x621b8u);  // (from the original)
        }
        u32 r0_6 = r7 + 0x249au;  // (from the original)
        guest::cpu()->r[13] = r13;
        copy_bytes_at_any_alignment(r0_6, r0_1, 0x58u);  // (from the original)
        guest::cpu()->r[13] = r13;
        reset_category_40_flags_of_all(r0_6);
        u32 r0_7 = 0x25u << 8;  // (from the original)
        r6 = r7 + r0_7;
        *gptr<u8>(r6 + 8u) = u8(r4_1);
        guest::cpu()->r[13] = r13;
        u32 r0_8 = return_constant_0xad56b0_(r0_7);
        guest::cpu()->r[13] = r13;
        narrow_date(r7 + 0x250au, r0_8);  // (from the original)
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        u32 r1_8 = 0x78u;  // (from the original)
        u32 r0_10 = *gptr<u32>(r6 + 0x10u) & ~r1_8;  // (from the original)
        *gptr<u32>(r6 + 0x10u) = r0_10;  // (from the original)
        if (r4_1 == 0) {
            guest::cpu()->r[13] = r13;
            u32 r0_11 = get_save_data(r0_10, r1_8, r2, r3);
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            r5 = 0u;
            *gptr<u32>(r13 + 4u) = r0_11 + 0xa0u;  // (from the original)
            do {
                u32 r4_2 = uxtb(r5);
                u32 r0_12 = *gptr<u32>(r13 + 4u);
                guest::cpu()->r[13] = r13;
                u32 r0_13 = player_in_array(r0_12, r4_2, r2, r3);
                r1_8 = guest::cpu()->r[1];
                r2 = guest::cpu()->r[2];
                r3 = guest::cpu()->r[3];
                if (r0_13 != 0) {
                    guest::cpu()->r[13] = r13;
                    u32 r0_15 = PersonalId__is_set(r0_13 + 0x55a6u, 0x55a6u, r2, r3);  // (from the original)
                    r1_8 = guest::cpu()->r[1];
                    r2 = guest::cpu()->r[2];
                    r3 = guest::cpu()->r[3];
                    if (r0_15 != 0 && r4_2 < 4u) {
                        r1_8 = lsl_r(1u, r4_2 & 0xff) << 0x1c >> 0x19;  // (from the original)
                        *gptr<u32>(r6 + 0x10u) = *gptr<u32>(r6 + 0x10u) | r1_8;  // (from the original)
                    }
                }
                r5 += 1u;
                guest::preempt();
            } while (s32(r5) < 4);
        }
        guest::cpu()->r[13] = r13;
        call_003122bc(r7, r1_8, r2, r3);
    }
    r13 += 0x1cu;  // (from the original)
    u32 r4_3 = *gptr<u32>(r13);
    u32 r5_1 = *gptr<u32>(r13 + 4);
    u32 r6_1 = *gptr<u32>(r13 + 8);
    u32 r7_1 = *gptr<u32>(r13 + 0xc);  // (from the original)
    u32 tpc_1 = *gptr<u32>(r13 + 0x10);  // (from the original)
    r13 += 0x14;  // (from the original)
    guest::cpu()->r[4] = r4_3;
    guest::cpu()->r[5] = r5_1;
    guest::cpu()->r[6] = r6_1;
    guest::cpu()->r[7] = r7_1;
    guest::cpu()->r[13] = r13;
}

}  // namespace d_0030bd9c
GUEST_EXPORT(0x0030bd9d, d_0030bd9c::f_0030bd9c);

// f_0030be90: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0030be90 {

inline constexpr guest::Function<0x006ab5b8, u32(u32, u32, u32, u32)> call_006ab5b8;

u32 f_0030be90() {
    return call_006ab5b8(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0030be90
GUEST_EXPORT(0x0030be90, d_0030be90::f_0030be90);

// f_0030be94: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0030be94 {

inline constexpr guest::Function<0x006515ec, u32(u32, u32)> call_006515ec;

u32 f_0030be94() {
    return call_006515ec(guest::cpu()->r[0], guest::cpu()->r[1]);
}

}  // namespace d_0030be94
GUEST_EXPORT(0x0030be94, d_0030be94::f_0030be94);

// f_0030bec8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0030bec8 {

inline constexpr guest::Function<0x0068a3fc, u32(u32, u32)> call_0068a3fc;

void f_0030bec8() {
    call_0068a3fc(guest::cpu()->r[0], guest::cpu()->r[1]);
}

}  // namespace d_0030bec8
GUEST_EXPORT(0x0030bec8, d_0030bec8::f_0030bec8);

// f_0030c09c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0030c09c {

inline constexpr guest::Function<0x00651600, u32(u32, u32)> call_00651600;

void f_0030c09c() {
    call_00651600(guest::cpu()->r[0], guest::cpu()->r[1]);
}

}  // namespace d_0030c09c
GUEST_EXPORT(0x0030c09c, d_0030c09c::f_0030c09c);

// f_0030c0a4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0030c0a4 {

inline constexpr guest::Function<0x005c167c, u32(u32, u32)> call_005c167c;

void f_0030c0a4() {
    call_005c167c(guest::cpu()->r[0], guest::cpu()->r[1]);
}

}  // namespace d_0030c0a4
GUEST_EXPORT(0x0030c0a4, d_0030c0a4::f_0030c0a4);

// f_0030c0a8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0030c0a8 {

inline constexpr guest::Function<0x006733b0, u32(u32, u32, u32, u32)> call_006733b0;

void f_0030c0a8() {
    call_006733b0(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0030c0a8
GUEST_EXPORT(0x0030c0a8, d_0030c0a8::f_0030c0a8);

// f_0030c0ac: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0030c0ac {

inline constexpr guest::Function<0x0075d0f0, u32(u32, u32)> StateObject360__check_pointer_when_state_0;

u32 f_0030c0ac() {
    return StateObject360__check_pointer_when_state_0(guest::cpu()->r[0], guest::cpu()->r[1]);
}

}  // namespace d_0030c0ac
GUEST_EXPORT(0x0030c0ac, d_0030c0ac::f_0030c0ac);

// f_0030c0b0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0030c0b0 {

inline constexpr guest::Function<0x006021d0, u32(u32, u32, u32, u32)> call_006021d0;

void f_0030c0b0() {
    call_006021d0(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0030c0b0
GUEST_EXPORT(0x0030c0b0, d_0030c0b0::f_0030c0b0);

// f_0030c0c0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0030c0c0 {

inline constexpr guest::Function<0x00602144, u32(u32, u32)> call_00602144;

void f_0030c0c0() {
    call_00602144(guest::cpu()->r[0], guest::cpu()->r[1]);
}

}  // namespace d_0030c0c0
GUEST_EXPORT(0x0030c0c0, d_0030c0c0::f_0030c0c0);

// f_0030c0c4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0030c0c4 {

inline constexpr guest::Function<0x00602938, u32(u32, u32, u32, u32)> call_00602938;

u32 f_0030c0c4() {
    return call_00602938(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0030c0c4
GUEST_EXPORT(0x0030c0c4, d_0030c0c4::f_0030c0c4);

// f_0030c0cc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0030c0cc {

struct __attribute__((packed)) Local_0030c0cc_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u32 word_18;
    u32 word_1c;
};
GUEST_OFFSET(Local_0030c0cc_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_0030c0cc_ea_1, word_4, 0x4);
GUEST_OFFSET(Local_0030c0cc_ea_1, word_8, 0x8);
GUEST_OFFSET(Local_0030c0cc_ea_1, word_c, 0xc);
GUEST_OFFSET(Local_0030c0cc_ea_1, word_10, 0x10);
GUEST_OFFSET(Local_0030c0cc_ea_1, word_14, 0x14);
GUEST_OFFSET(Local_0030c0cc_ea_1, word_18, 0x18);
GUEST_OFFSET(Local_0030c0cc_ea_1, word_1c, 0x1c);

inline constexpr guest::Function<0x002fe450, u32(u32, u32, u32)> table_a82b90_entry;
inline constexpr guest::Function<0x002fe470, u32(u32, u32, u32)> is_record_valid;
inline constexpr guest::Function<0x00309865, u32(u32, u32, u32, u32)> villager_slot_index;
inline constexpr guest::Function<0x00309904, u32(u32, u32, u32)> set_bit_below_29;
inline constexpr guest::Function<0x00309ccc, u32(u32, u32, u32)> index_in_pair_a83370;
inline constexpr guest::Function<0x0030e5cc, u32(u32, u32, u32)> test_29;

void f_0030c0cc(u32 r0, u32 r1, u32 r2) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    u32 r4_1 = 0;
    u32 r0_7 = 0;
    u32 r1_1 = 0;
    u32 r0_8 = 0;
    u32 r0_9 = 0;
    u32 r0_10 = 0;
    u32 r0_11 = 0;
    gptr<Local_0030c0cc_ea_1> ea_1 = gptr<Local_0030c0cc_ea_1>(r13 - 0x20);  // (from the original)
    ea_1->word_0 = r0;
    ea_1->word_4 = r1;
    ea_1->word_8 = r2;
    ea_1->word_c = r4;
    ea_1->word_10 = r5;
    ea_1->word_14 = r6;
    ea_1->word_18 = r7;
    ea_1->word_1c = r14;
    r13 = ea_1.addr() - 8u;
    r6 = r1;
    u32 r0_1 = *gptr<u32>(r13 + 8u);
    r7 = r2;
    guest::cpu()->r[13] = r13;
    u32 r0_2 = villager_slot_index(r0_1, 0u, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r5 = 0u;
    *gptr<u32>(r13 + 4u) = r0_2;
    do {
        u32 r0_3 = *gptr<u32>(r13 + 8u);
        if (r5 >= 0xau) {  // (from the original)
            r4_1 = 0u;
        } else {
            r2 = 0x2518u;  // (from the original)
            r1 = r5 * r2;
            r4_1 = r1 + r0_3;
            if (r4_1 == 0) {
                goto L_30c11c;
            }
            guest::cpu()->r[13] = r13;
            u32 r0_4 = is_record_valid(r4_1, r1, r2);
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            if (r0_4 == 0) {
                goto L_30c11c;
            }
        }
        if (r4_1 != 0 && r5 != *gptr<u32>(r13 + 4u)) {
            guest::cpu()->r[13] = r13;
            u32 r0_5 = index_in_pair_a83370(r5, r1, r2);
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            if (s32(r0_5) < 0) {
                if ((*gptr<u32>(r4_1 + (0x25u << 8) + 0x10u) & 1u) == 0) {  // (from the original)
                    guest::cpu()->r[13] = r13;
                    u32 r0_6 = table_a82b90_entry(r5, r1, r2);
                    r1 = guest::cpu()->r[1];
                    r2 = guest::cpu()->r[2];
                    *gptr<u32>(r13) = r0_6;
                    if (r0_6 == 0) {
                        goto L_30c188;
                    }
                    if (s32(r7) < 0) {
                        goto L_30c17e;
                    }
                    r4 = 0u;
                    goto L_30c146;
                }
            }
        }
L_30c11c:;
        if (*gptr<u32>(r6) <= r5) {
            goto L_30c188;
        }
        r0_7 = *gptr<u32>(r6 + 4u);
        r1 = lsl_r(1u, r5 & 0xff);  // (from the original)
        r2 = r0_7;
        if ((r2 & r1) != 0) {
            r0_10 = r0_7 & ~r1;
            r1 = *gptr<u32>(r6 + 8u) - 1u;
            *gptr<u32>(r6 + 8u) = r1;
            *gptr<u32>(r6 + 4u) = r0_10;
            goto L_30c188;
        }
        goto L_30c188;
L_30c146:;
        if (r4 == r7) {
            goto L_30c178;
        }
        r1_1 = uxtb(r4 + 9u);
        r0_8 = *gptr<u32>(r13);
        guest::cpu()->r[13] = r13;
        r0_9 = test_29(r0_8, r1_1, r2);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        if (r0_9 == 0) {
            goto L_30c178;
        }
        if (*gptr<u32>(r6) <= r5) {
            goto L_30c188;
        }
        r0_7 = *gptr<u32>(r6 + 4u);
        r1 = lsl_r(1u, r5 & 0xff);  // (from the original)
        r2 = r0_7;
        if ((r2 & r1) == 0) {
            goto L_30c188;
        }
        r0_10 = r0_7 & ~r1;
        r1 = *gptr<u32>(r6 + 8u) - 1u;
        *gptr<u32>(r6 + 8u) = r1;
        *gptr<u32>(r6 + 4u) = r0_10;
        goto L_30c188;
L_30c178:;
        r4 += 1u;
        if (r4 < 2u) {
            guest::preempt();
            goto L_30c146;
        }
L_30c17e:;
        r0_11 = *gptr<u32>(r13);
        guest::cpu()->r[13] = r13;
        set_bit_below_29(r0_11, 8u, 1u);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
L_30c188:;
        r5 += 1u;
        guest::preempt();
    } while (s32(r5) < 0xa);  // (from the original)
    r13 += 0x14u;  // (from the original)
    u32 r4_2 = *gptr<u32>(r13);
    u32 r5_1 = *gptr<u32>(r13 + 4);
    u32 r6_1 = *gptr<u32>(r13 + 8);
    u32 r7_1 = *gptr<u32>(r13 + 0xc);  // (from the original)
    u32 tpc_1 = *gptr<u32>(r13 + 0x10);  // (from the original)
    r13 += 0x14;  // (from the original)
    guest::cpu()->r[4] = r4_2;
    guest::cpu()->r[5] = r5_1;
    guest::cpu()->r[6] = r6_1;
    guest::cpu()->r[7] = r7_1;
    guest::cpu()->r[13] = r13;
}

}  // namespace d_0030c0cc
GUEST_EXPORT(0x0030c0cd, d_0030c0cc::f_0030c0cc);

// f_0030c198: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0030c198 {

inline constexpr guest::Function<0x005cdde8, u32(u32, u32, u32, u32)> call_005cdde8;

void f_0030c198() {
    call_005cdde8(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0030c198
GUEST_EXPORT(0x0030c198, d_0030c198::f_0030c198);

// f_0030c19c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0030c19c {

inline constexpr guest::Function<0x007595bc, u32(u32, u32)> compare_time_stamp_to_stored;

u32 f_0030c19c() {
    return compare_time_stamp_to_stored(guest::cpu()->r[0], guest::cpu()->r[1]);
}

}  // namespace d_0030c19c
GUEST_EXPORT(0x0030c19c, d_0030c19c::f_0030c19c);

// f_0030c1a4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0030c1a4 {

inline constexpr guest::Function<0x005e1974, u32(u32, u32)> sead__SafeStringBase_char___SafeStringBase_005e1974;

u32 f_0030c1a4() {
    return sead__SafeStringBase_char___SafeStringBase_005e1974(guest::cpu()->r[0], guest::cpu()->r[1]);
}

}  // namespace d_0030c1a4
GUEST_EXPORT(0x0030c1a4, d_0030c1a4::f_0030c1a4);

// f_0030c1ac: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0030c1ac {

inline constexpr guest::Function<0x0062f03c, u32(u32, u32, u32, u32)> call_0062f03c;

u32 f_0030c1ac() {
    return call_0062f03c(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0030c1ac
GUEST_EXPORT(0x0030c1ac, d_0030c1ac::f_0030c1ac);

// f_0030c39c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0030c39c {

inline constexpr guest::Function<0x005b59c4, u32(u32, u32, u32, u32)> call_005b59c4;

u32 f_0030c39c() {
    return call_005b59c4(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0030c39c
GUEST_EXPORT(0x0030c39c, d_0030c39c::f_0030c39c);

// f_0030c3a8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0030c3a8 {

inline constexpr guest::Function<0x006f9638, u32(u32, u32, u32, u32)> list_position_of_mode;

u32 f_0030c3a8() {
    return list_position_of_mode(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0030c3a8
GUEST_EXPORT(0x0030c3a8, d_0030c3a8::f_0030c3a8);

// f_0030c3ac: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0030c3ac {

inline constexpr guest::Function<0x005c33cc, u32(u32, u32, u32, u32)> call_005c33cc;

u32 f_0030c3ac() {
    return call_005c33cc(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0030c3ac
GUEST_EXPORT(0x0030c3ac, d_0030c3ac::f_0030c3ac);

// f_0030c3b0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0030c3b0 {

inline constexpr guest::Function<0x00752914, u32(u32, u32)> read_field_u16_0x0__00752914;

u32 f_0030c3b0() {
    return read_field_u16_0x0__00752914(guest::cpu()->r[0], guest::cpu()->r[1]);
}

}  // namespace d_0030c3b0
GUEST_EXPORT(0x0030c3b0, d_0030c3b0::f_0030c3b0);

// f_0030c3b4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0030c3b4 {

inline constexpr guest::Function<0x00605628, u32(u32, u32)> call_00605628;

u32 f_0030c3b4() {
    return call_00605628(guest::cpu()->r[0], guest::cpu()->r[1]);
}

}  // namespace d_0030c3b4
GUEST_EXPORT(0x0030c3b4, d_0030c3b4::f_0030c3b4);

// f_0030c3bc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0030c3bc {

inline constexpr guest::Function<0x005dd69c, u32(u32, u32, u32, u32)> construct_talk_recept;

u32 f_0030c3bc() {
    return construct_talk_recept(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0030c3bc
GUEST_EXPORT(0x0030c3bc, d_0030c3bc::f_0030c3bc);

// f_0030c3c4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0030c3c4 {

inline constexpr guest::Function<0x00765fa8, u32(u32, u32, u32)> list_vector_or_zero;

void f_0030c3c4() {
    list_vector_or_zero(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2]);
}

}  // namespace d_0030c3c4
GUEST_EXPORT(0x0030c3c4, d_0030c3c4::f_0030c3c4);

// f_0030c3cc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0030c3cc {

inline constexpr guest::Function<0x0060e77c, u32(u32, u32, u32, u32)> sead__SafeStringBase_char___SafeStringBase_0060e77c;

u32 f_0030c3cc() {
    return sead__SafeStringBase_char___SafeStringBase_0060e77c(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0030c3cc
GUEST_EXPORT(0x0030c3cc, d_0030c3cc::f_0030c3cc);

// f_0030c3e4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0030c3e4 {

struct __attribute__((packed)) Local_0030c3e4_r1_2 {
    u8 unknown_0[0xe];  // (not used here)
    u8 byte_e;
};
GUEST_OFFSET(Local_0030c3e4_r1_2, byte_e, 0xe);

struct __attribute__((packed)) Local_0030c3e4_r4_1 {
    u8 unknown_0[0x1c];  // (not used here)
    u8 byte_1c;
};
GUEST_OFFSET(Local_0030c3e4_r4_1, byte_1c, 0x1c);


u32 f_0030c3e4(u32 r0, u32 r1) {
    if (r1 >= 0x18fu) {  // (from the original)
        guest::cpu()->r[1] = r1;
        return r0;
    }
    u32 r2_1 = r1 >> 3;
    u32 r1_1 = r1 & 7u;
    if (r2_1 >= 0x32u) {  // (from the original)
        guest::cpu()->r[1] = r1_1;
        return r0;
    }
    u32 r2_2 = r0 + r2_1;
    gptr<Local_0030c3e4_r4_1> r4_1 = gptr<Local_0030c3e4_r4_1>(r2_2 + 0x196e0u);  // (from the original)
    u32 r0_1 = lsl_r(1u, r1_1 & 0xff);  // (from the original)
    gptr<Local_0030c3e4_r1_2> r1_2 = gptr<Local_0030c3e4_r1_2>(r2_2 + 0x19720u);  // (from the original)
    r4_1->byte_1c = u8(u32(r4_1->byte_1c) | r0_1);
    r1_2->byte_e = u8(u32(r1_2->byte_e) | r0_1);
    guest::cpu()->r[1] = r1_2.addr();
    return r0_1;
}

}  // namespace d_0030c3e4
GUEST_EXPORT_FRAMED(0x0030c3e5, d_0030c3e4::f_0030c3e4, 0x30);  // pushes {r4, r5} first, as the original

// f_0030c4bc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0030c4bc {

inline constexpr guest::Function<0x007ce640, u32(u32, u32, u32, u32)> call_007ce640;

void f_0030c4bc() {
    call_007ce640(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0030c4bc
GUEST_EXPORT(0x0030c4bc, d_0030c4bc::f_0030c4bc);

// f_0030c4c0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0030c4c0 {

inline constexpr guest::Function<0x007ce7f0, u32(u32, u32, u32, u32)> call_007ce7f0;

void f_0030c4c0() {
    call_007ce7f0(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0030c4c0
GUEST_EXPORT(0x0030c4c0, d_0030c4c0::f_0030c4c0);

// f_0030c4c4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0030c4c4 {

inline constexpr guest::Function<0x007d1e64, u32(u32, u32, u32, u32)> call_007d1e64;

void f_0030c4c4() {
    call_007d1e64(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0030c4c4
GUEST_EXPORT(0x0030c4c4, d_0030c4c4::f_0030c4c4);

// f_0030c4cc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0030c4cc {

inline constexpr guest::Function<0x006a6dbc, u32(u32, u32, u32)> cell_corner_with_height;

void f_0030c4cc() {
    cell_corner_with_height(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2]);
}

}  // namespace d_0030c4cc
GUEST_EXPORT(0x0030c4cc, d_0030c4cc::f_0030c4cc);

// f_0030c4d0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0030c4d0 {

struct __attribute__((packed)) Object_0030c4d0_0 {
    u8 unknown_0[0x4f];  // (not used here)
    u8 byte_4f;
    u8 unknown_50[0x9];  // (not used here)
    u8 byte_59;
};
GUEST_OFFSET(Object_0030c4d0_0, byte_4f, 0x4f);
GUEST_OFFSET(Object_0030c4d0_0, byte_59, 0x59);

inline constexpr guest::Function<0x0030b250, u32(u32, u32, u32, u32)> update_with_value_4e;

void f_0030c4d0(gptr<Object_0030c4d0_0> arg0, u32 r1) {
    update_with_value_4e(arg0.addr(), r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    arg0->byte_59 = 0xfe;  // (from the original)
    arg0->byte_4f = 5;
    guest::cpu()->r[1] = 0xfeu;  // (from the original)
}

}  // namespace d_0030c4d0
GUEST_EXPORT_FRAMED(0x0030c4d0, d_0030c4d0::f_0030c4d0, 0x4010);  // pushes {r4, lr} first, as the original

// f_0030c4f0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0030c4f0 {

inline constexpr guest::Function<0x00695584, u32(u32, u32, u32, u32)> call_00695584;

void f_0030c4f0() {
    call_00695584(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0030c4f0
GUEST_EXPORT(0x0030c4f0, d_0030c4f0::f_0030c4f0);

// f_0030c4f4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0030c4f4 {

struct __attribute__((packed)) Local_0030c4f4_r4_1 {
    u8 unknown_0[0x8];  // (not used here)
    u8 byte_8;
    u8 byte_9;
    u8 byte_a;
    u8 unknown_b[0x31];  // (not used here)
    u8 byte_3c;
    u8 byte_3d;
    u8 byte_3e;
};
GUEST_OFFSET(Local_0030c4f4_r4_1, byte_8, 0x8);
GUEST_OFFSET(Local_0030c4f4_r4_1, byte_9, 0x9);
GUEST_OFFSET(Local_0030c4f4_r4_1, byte_a, 0xa);
GUEST_OFFSET(Local_0030c4f4_r4_1, byte_3c, 0x3c);
GUEST_OFFSET(Local_0030c4f4_r4_1, byte_3d, 0x3d);
GUEST_OFFSET(Local_0030c4f4_r4_1, byte_3e, 0x3e);

inline constexpr guest::Function<0x00303cdc, u32(u32, u32, u32, u32)> clear_inner;
inline constexpr guest::Function<0x003084d0, u32(u32)> clear_identity_with_value;

struct __attribute__((packed)) Frame_0030c4f4 {
    u32 word_0;
};
GUEST_OFFSET(Frame_0030c4f4, word_0, 0x0);
GUEST_SIZE(Frame_0030c4f4, 0x4);

void f_0030c4f4(u32 r0, u32 r1_unused, u32 r2_unused, u32 r3) {
    guest::StackFrameOf<Frame_0030c4f4> frame;  // the original's stack frame
    frame->word_0 = r0;
    u32 r7 = 0u;
    u32 r9 = 0x21u;  // (from the original)
    u32 r10 = 0xffu;  // (from the original)
    u32 r11 = 9u;
    u32 r8 = ~0u;
    do {
        u32 r5 = 0u;
        u32 r6 = frame->word_0 + (r7 << 7);
        do {
            gptr<Local_0030c4f4_r4_1> r4_1 = gptr<Local_0030c4f4_r4_1>(r6 + (r5 << 6));
            r4_1->byte_8 = u8(r9);
            clear_inner(r4_1.addr(), guest::cpu()->r[1], guest::cpu()->r[2], r3);
            r4_1->byte_9 = u8(r10);
            r4_1->byte_a = u8(r11);
            clear_identity_with_value(r4_1.addr() + 0xcu);  // (from the original)
            r3 = guest::cpu()->r[3];
            r4_1->byte_3d = u8(r8);
            r5 += 1u;
            r4_1->byte_3c = u8(r8);
            r4_1->byte_3e = 0xe;  // (from the original)
            guest::preempt();
        } while (s32(r5) < 2);
        r7 += 1u;
        guest::preempt();
    } while (s32(r7) < 4);
    *gptr<u8>(frame->word_0 + 0x200u) = u8(r8);  // (from the original)
}

}  // namespace d_0030c4f4
GUEST_EXPORT_FRAMED(0x0030c4f4, d_0030c4f4::f_0030c4f4, 0x4ff0);  // pushes {r4, r5, r6, r7, r8, r9, r10, r11, lr} first, as the original

// f_0030c578: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0030c578 {

struct __attribute__((packed)) Object_0030c578_0 {
    u8 unknown_0[0x8];  // (not used here)
    u8 byte_8;
    u8 byte_9;
    u8 unknown_a[0x1];  // (not used here)
    u8 byte_b;
};
GUEST_OFFSET(Object_0030c578_0, byte_8, 0x8);
GUEST_OFFSET(Object_0030c578_0, byte_9, 0x9);
GUEST_OFFSET(Object_0030c578_0, byte_b, 0xb);


void f_0030c578(gptr<Object_0030c578_0> arg0) {
    arg0->byte_8 = 0x21;  // (from the original)
    arg0->byte_9 = 1;
    arg0->byte_b = 0xff;  // (from the original)
    guest::cpu()->r[1] = 0xffu;  // (from the original)
}

}  // namespace d_0030c578
GUEST_EXPORT(0x0030c578, d_0030c578::f_0030c578);

// f_0030c598: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0030c598 {

struct __attribute__((packed)) Local_0030c598_r5_1 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
    u16 half_8;
    u8 byte_a;
    u8 byte_b;
};
GUEST_OFFSET(Local_0030c598_r5_1, word_4, 0x4);
GUEST_OFFSET(Local_0030c598_r5_1, half_8, 0x8);
GUEST_OFFSET(Local_0030c598_r5_1, byte_a, 0xa);
GUEST_OFFSET(Local_0030c598_r5_1, byte_b, 0xb);


void f_0030c598(u32 r0) {
    u32 r1 = 0u;
    u32 r3 = r1;
    do {
        u32 r4_1 = r1;
        r1 += 1u;
        u32 r4_2 = r4_1 * 0xcu;  // (from the original)
        gptr<Local_0030c598_r5_1> r5_1 = gptr<Local_0030c598_r5_1>(r4_2 + r0);
        *gptr<u32>(r0 + r4_2) = r3;
        r5_1->word_4 = r3;
        r5_1->half_8 = u16(r3);
        r5_1->byte_a = u8(r3);
        r5_1->byte_b = u8(r3);
        guest::preempt();
    } while (s32(r1) < 0x10);  // (from the original)
    guest::cpu()->r[1] = r1;
}

}  // namespace d_0030c598
GUEST_EXPORT_FRAMED(0x0030c599, d_0030c598::f_0030c598, 0x30);  // pushes {r4, r5} first, as the original

// f_0030c824: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0030c824 {

inline constexpr guest::Function<0x001193d1, u32(u32, u32)> index_of_villager_with_id;
inline constexpr guest::Function<0x002fae84, u32(u32, u32, u32, u32)> get_data_base;
inline constexpr guest::Function<0x002fb310, u32(u32)> slot_records_of;

u32 f_0030c824(gptr<SaveVillager> arg0, u32 r1) {
    u32 r0_5 = 0;
    u32 r0_1 = get_data_base(arg0.addr(), r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_2 = slot_records_of(r0_1);
    u32 r1_2 = arg0->id;
    u32 r0_4 = index_of_villager_with_id(r0_2 + 4u, r1_2);
    u32 r1_3 = guest::cpu()->r[1];
    if (r0_4 >= 0xau) {  // (from the original)
        r0_5 = 0u;
    } else {
        r1_3 = 0xa82c58u;  // (from the original)
        r0_5 = r1_3 + r0_4 * 0x50u;  // (from the original)
    }
    guest::cpu()->r[1] = r1_3;
    return r0_5;
}

}  // namespace d_0030c824
GUEST_EXPORT_FRAMED(0x0030c824, d_0030c824::f_0030c824, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0030c9e0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0030c9e0 {

inline constexpr guest::Function<0x00815500, u32(u32, u32, u32, u32)> sead__SafeStringBase_char___SafeStringBase_00815500;

void f_0030c9e0() {
    sead__SafeStringBase_char___SafeStringBase_00815500(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0030c9e0
GUEST_EXPORT(0x0030c9e0, d_0030c9e0::f_0030c9e0);

// f_0030c9e4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0030c9e4 {

inline constexpr guest::Function<0x0081533c, u32(u32, u32, u32, u32)> sead__SafeStringBase_char___SafeStringBase_0081533c;

void f_0030c9e4() {
    sead__SafeStringBase_char___SafeStringBase_0081533c(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0030c9e4
GUEST_EXPORT(0x0030c9e4, d_0030c9e4::f_0030c9e4);

// f_0030c9e8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0030c9e8 {

inline constexpr guest::Function<0x005b1a08, u32(u32, u32)> construct_value_with_flag;

u32 f_0030c9e8() {
    return construct_value_with_flag(guest::cpu()->r[0], guest::cpu()->r[1]);
}

}  // namespace d_0030c9e8
GUEST_EXPORT(0x0030c9e8, d_0030c9e8::f_0030c9e8);

// f_0030c9f0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0030c9f0 {

inline constexpr guest::Function<0x0075db98, u32(u32, u32, u32)> tile_address_0075db98;

u32 f_0030c9f0() {
    return tile_address_0075db98(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2]);
}

}  // namespace d_0030c9f0
GUEST_EXPORT(0x0030c9f0, d_0030c9f0::f_0030c9f0);

// f_0030c9f4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0030c9f4 {

inline constexpr guest::Function<0x0075dad0, u32(u32, u32)> read_field_u16_0x0__0075dad0;

u32 f_0030c9f4() {
    return read_field_u16_0x0__0075dad0(guest::cpu()->r[0], guest::cpu()->r[1]);
}

}  // namespace d_0030c9f4
GUEST_EXPORT(0x0030c9f4, d_0030c9f4::f_0030c9f4);

// f_0030c9f8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0030c9f8 {

inline constexpr guest::Function<0x006055e0, u32(u32, u32)> call_006055e0;

u32 f_0030c9f8() {
    return call_006055e0(guest::cpu()->r[0], guest::cpu()->r[1]);
}

}  // namespace d_0030c9f8
GUEST_EXPORT(0x0030c9f8, d_0030c9f8::f_0030c9f8);

// f_0030ca00: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0030ca00 {

inline constexpr guest::Function<0x00613758, u32(u32, u32)> member_address_0x6480_;

u32 f_0030ca00() {
    return member_address_0x6480_(guest::cpu()->r[0], guest::cpu()->r[1]);
}

}  // namespace d_0030ca00
GUEST_EXPORT(0x0030ca00, d_0030ca00::f_0030ca00);

// f_0030ca04: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0030ca04 {

inline constexpr guest::Function<0x006138ac, u32(u32, u32)> do_nothing_006138ac;

u32 f_0030ca04() {
    return do_nothing_006138ac(guest::cpu()->r[0], guest::cpu()->r[1]);
}

}  // namespace d_0030ca04
GUEST_EXPORT(0x0030ca04, d_0030ca04::f_0030ca04);

// f_0030ca08: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0030ca08 {

inline constexpr guest::Function<0x006a2c58, u32(u32, u32, u32, u32)> call_006a2c58;

u32 f_0030ca08() {
    return call_006a2c58(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0030ca08
GUEST_EXPORT(0x0030ca08, d_0030ca08::f_0030ca08);

// f_0030ca0c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0030ca0c {

inline constexpr guest::Function<0x0075db6c, u32(u32, u32, u32)> call_0075db6c;

u32 f_0030ca0c() {
    return call_0075db6c(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2]);
}

}  // namespace d_0030ca0c
GUEST_EXPORT(0x0030ca0c, d_0030ca0c::f_0030ca0c);

// f_0030ca10: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0030ca10 {

inline constexpr guest::Function<0x006a2c48, u32(u32, u32)> call_006a2c48;

void f_0030ca10() {
    call_006a2c48(guest::cpu()->r[0], guest::cpu()->r[1]);
}

}  // namespace d_0030ca10
GUEST_EXPORT(0x0030ca10, d_0030ca10::f_0030ca10);

// f_0030ca14: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0030ca14 {

inline constexpr guest::Function<0x0070f678, u32(u32, u32, u32)> call_0070f678;

u32 f_0030ca14() {
    return call_0070f678(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2]);
}

}  // namespace d_0030ca14
GUEST_EXPORT(0x0030ca14, d_0030ca14::f_0030ca14);

// f_0030ca18: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0030ca18 {

inline constexpr guest::Function<0x006a6e90, u32(u32, u32, u32, u32)> position_of_block;

void f_0030ca18() {
    position_of_block(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0030ca18
GUEST_EXPORT(0x0030ca18, d_0030ca18::f_0030ca18);

// f_0030ca1c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0030ca1c {

inline constexpr guest::Function<0x005cdfd0, u32(u32, u32)> call_005cdfd0;

u32 f_0030ca1c() {
    return call_005cdfd0(guest::cpu()->r[0], guest::cpu()->r[1]);
}

}  // namespace d_0030ca1c
GUEST_EXPORT(0x0030ca1c, d_0030ca1c::f_0030ca1c);

// f_0030ca20: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0030ca20 {

inline constexpr guest::Function<0x006a2c2c, u32(u32, u32, u32, u32)> call_006a2c2c;

void f_0030ca20() {
    call_006a2c2c(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0030ca20
GUEST_EXPORT(0x0030ca20, d_0030ca20::f_0030ca20);

// f_0030ca24: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0030ca24 {

inline constexpr guest::Function<0x006136a8, u32(u32, u32, u32)> call_006136a8;

u32 f_0030ca24() {
    return call_006136a8(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2]);
}

}  // namespace d_0030ca24
GUEST_EXPORT(0x0030ca24, d_0030ca24::f_0030ca24);

// f_0030ca30: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0030ca30 {

inline constexpr guest::Function<0x002fae84, u32(u32, u32, u32, u32)> get_data_base;
inline constexpr guest::Function<0x002fb310, u32(u32)> slot_records_of;
inline constexpr guest::Function<0x0030ca59, u32(u32, u32, u32, u32)> call_0030ca58;

u32 f_0030ca30(u32 r0, u32 r1, u32 r2) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 r0_1 = get_data_base(r0, r1, r2, guest::cpu()->r[3]);
    u32 r0_2 = slot_records_of(r0_1);
    frame.release();
    return call_0030ca58(r0_2 + 4u, 0u, 0u, guest::cpu()->r[3]);
}

}  // namespace d_0030ca30
GUEST_EXPORT(0x0030ca30, d_0030ca30::f_0030ca30);

// f_0030cc0c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0030cc0c {

inline constexpr guest::Function<0x006f9e94, u32(u32, u32, u32, u32)> call_006f9e94;

void f_0030cc0c() {
    call_006f9e94(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0030cc0c
GUEST_EXPORT(0x0030cc0c, d_0030cc0c::f_0030cc0c);

// f_0030cc10: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0030cc10 {

inline constexpr guest::Function<0x006fa728, u32(u32, u32)> call_006fa728;

u32 f_0030cc10() {
    return call_006fa728(guest::cpu()->r[0], guest::cpu()->r[1]);
}

}  // namespace d_0030cc10
GUEST_EXPORT(0x0030cc10, d_0030cc10::f_0030cc10);

// f_0030cc14: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0030cc14 {

inline constexpr guest::Function<0x006fb0cc, u32(u32, u32)> call_006fb0cc;

u32 f_0030cc14() {
    return call_006fb0cc(guest::cpu()->r[0], guest::cpu()->r[1]);
}

}  // namespace d_0030cc14
GUEST_EXPORT(0x0030cc14, d_0030cc14::f_0030cc14);

// f_0030cc18: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0030cc18 {

inline constexpr guest::Function<0x006fae98, u32(u32, u32, u32, u32)> call_006fae98;

u32 f_0030cc18() {
    return call_006fae98(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0030cc18
GUEST_EXPORT(0x0030cc18, d_0030cc18::f_0030cc18);

// f_0030cc20: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0030cc20 {

inline constexpr guest::Function<0x0075291c, u32(u32, u32, u32)> GridMap__large_cell_at;

u32 f_0030cc20() {
    return GridMap__large_cell_at(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2]);
}

}  // namespace d_0030cc20
GUEST_EXPORT(0x0030cc20, d_0030cc20::f_0030cc20);

// f_0030cc24: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0030cc24 {

inline constexpr guest::Function<0x006a92f4, u32(u32, u32, u32, u32)> load_block_a00;

void f_0030cc24() {
    load_block_a00(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0030cc24
GUEST_EXPORT(0x0030cc24, d_0030cc24::f_0030cc24);

// f_0030cc34: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0030cc34 {

inline constexpr guest::Function<0x005c257c, u32(u32, u32, u32, u32)> call_005c257c;

u32 f_0030cc34() {
    return call_005c257c(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0030cc34
GUEST_EXPORT(0x0030cc34, d_0030cc34::f_0030cc34);

// f_0030cc3c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0030cc3c {

inline constexpr guest::Function<0x005cd9c4, u32(u32, u32)> set_bit_44b0;

void f_0030cc3c() {
    set_bit_44b0(guest::cpu()->r[0], guest::cpu()->r[1]);
}

}  // namespace d_0030cc3c
GUEST_EXPORT(0x0030cc3c, d_0030cc3c::f_0030cc3c);

// f_0030ce40: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0030ce40 {

inline constexpr guest::Function<0x00715ffc, u32(u32, u32)> call_00715ffc;

u32 f_0030ce40() {
    return call_00715ffc(guest::cpu()->r[0], guest::cpu()->r[1]);
}

}  // namespace d_0030ce40
GUEST_EXPORT(0x0030ce40, d_0030ce40::f_0030ce40);

// f_0030ce48: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0030ce48 {

inline constexpr guest::Function<0x006b6624, u32(u32, u32, u32)> ClampedCounters__add_to_part;

void f_0030ce48() {
    ClampedCounters__add_to_part(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2]);
}

}  // namespace d_0030ce48
GUEST_EXPORT(0x0030ce48, d_0030ce48::f_0030ce48);

// f_0030ce54: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0030ce54 {

inline constexpr guest::Function<0x007596ac, u32(u32, u32, u32, u32)> call_007596ac;

u32 f_0030ce54() {
    return call_007596ac(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0030ce54
GUEST_EXPORT(0x0030ce54, d_0030ce54::f_0030ce54);

// f_0030ce58: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0030ce58 {

inline constexpr guest::Function<0x005cde34, u32(u32, u32)> GameTime__set_now;

void f_0030ce58() {
    GameTime__set_now(guest::cpu()->r[0], guest::cpu()->r[1]);
}

}  // namespace d_0030ce58
GUEST_EXPORT(0x0030ce58, d_0030ce58::f_0030ce58);

// f_0030ce5c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0030ce5c {

inline constexpr guest::Function<0x0063061c, u32(u32, u32, u32, u32)> seeded_event_hour;

u32 f_0030ce5c() {
    return seeded_event_hour(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0030ce5c
GUEST_EXPORT(0x0030ce5c, d_0030ce5c::f_0030ce5c);

// f_0030ce70: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0030ce70 {

inline constexpr guest::Function<0x007241b0, u32(u32, u32, u32, u32)> Pockets__find_empty_slot;

u32 f_0030ce70() {
    return Pockets__find_empty_slot(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0030ce70
GUEST_EXPORT(0x0030ce70, d_0030ce70::f_0030ce70);

// f_0030d1b8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0030d1b8 {

inline constexpr guest::Function<0x0051f58c, u32(u32, u32)> call_0051f58c;

u32 f_0030d1b8() {
    return call_0051f58c(guest::cpu()->r[0], guest::cpu()->r[1]);
}

}  // namespace d_0030d1b8
GUEST_EXPORT(0x0030d1b8, d_0030d1b8::f_0030d1b8);

// f_0030d9ec: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0030d9ec {

inline constexpr guest::Function<0x0058efe8, u32(u32, u32, u32, u32)> day_has_special_event;

u32 f_0030d9ec() {
    return day_has_special_event(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0030d9ec
GUEST_EXPORT(0x0030d9ec, d_0030d9ec::f_0030d9ec);

// f_0030d9f0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0030d9f0 {

inline constexpr guest::Function<0x007567d8, u32(u32, u32, u32, u32)> call_007567d8;

u32 f_0030d9f0() {
    return call_007567d8(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0030d9f0
GUEST_EXPORT(0x0030d9f0, d_0030d9f0::f_0030d9f0);

// f_0030d9f4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0030d9f4 {

inline constexpr guest::Function<0x007561ac, u32(u32, u32, u32, u32)> call_007561ac;

u32 f_0030d9f4() {
    return call_007561ac(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0030d9f4
GUEST_EXPORT(0x0030d9f4, d_0030d9f4::f_0030d9f4);

// f_0030d9f8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0030d9f8 {

inline constexpr guest::Function<0x00756120, u32(u32, u32, u32, u32)> call_00756120;

u32 f_0030d9f8() {
    return call_00756120(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0030d9f8
GUEST_EXPORT(0x0030d9f8, d_0030d9f8::f_0030d9f8);

// f_0030da04: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0030da04 {

inline constexpr guest::Function<0x002f777c, u32(u32)> do_nothing_002f777c;
inline constexpr guest::Function<0x002fb378, u32(u32)> return_constant_0xad56b0_;
inline constexpr guest::Function<0x002fc8e8, u32(u32, u32, u32, u32)> copy_item_002fc8e8;
inline constexpr guest::Function<0x002fc934, u32(u32, u32)> copy_item_002fc934;
inline constexpr guest::Function<0x002fcaf4, u32(u32)> Item__is_empty;
inline constexpr guest::Function<0x002fcb34, u32(u32)> Item__category;
inline constexpr guest::Function<0x002ff4d4, u32(u32, u32, u32, u32)> call_002ff4d4;
inline constexpr guest::Function<0x00309f85, u32(u32, u32)> SaveVillager__find_player_record_00309f84;
inline constexpr guest::Function<0x0030f56c, u32(u32, u32)> narrow_date;
inline constexpr guest::Function<0x00311c48, u32(u32)> member_address_0x274_;

struct __attribute__((packed)) Frame_0030da04 {
    u32 word_0;
};
GUEST_OFFSET(Frame_0030da04, word_0, 0x0);
GUEST_SIZE(Frame_0030da04, 0x4);

u32 f_0030da04(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_0030da04> frame;  // the original's stack frame
    frame->word_0 = r3;
    u32 r0_1 = call_002ff4d4(r1, r3, *frame.at<u32>(0x18), *frame.at<u32>(0x1c));  // (from the original)
    if (r0_1 != 0) {
        u32 r0_2 = SaveVillager__find_player_record_00309f84(r0, r2);
        if (r0_2 != 0) {
            u32 r0_3 = return_constant_0xad56b0_(r0_2);
            narrow_date(r0_2 + 0xe6u, r0_3);  // (from the original)
            u32 r0_5 = member_address_0x274_(r1);
            copy_item_002fc934(frame.at(0).addr(), r0_5);
            u32 r0_8 = Item__is_empty(frame.at(0).addr());
            if (r0_8 == 0) {
                u32 r7 = frame.at(0).addr();
                u32 r6 = r0_2 + 0x62u;  // (from the original)
                r0_8 = Item__category(r7);
                r2 = guest::cpu()->r[2];
                r3 = guest::cpu()->r[3];
                u32 zf_1 = r0_8 - 0x2cu == 0;  // (from the original)
                if (!zf_1) {
                    if (zf_1 || s32(r0_8) < 0x2c) {  // (from the original)
                        u32 zf_2 = r0_8 - 0xcu == 0;  // (from the original)
                        if (!zf_2) {
                            if (zf_2 || s32(r0_8) < 0xc) {  // (from the original)
                                if (r0_8 != 3u && r0_8 != 4u && r0_8 != 5u && r0_8 != 6u) {
                                    goto L_30dace;
                                }
                            } else if (r0_8 != 0xdu && r0_8 != 0x19u && r0_8 != 0x24u && r0_8 != 0x27u) {  // (from the original)
                                goto L_30dace;
                            }
                        }
                    } else {
                        u32 zf_3 = r0_8 - 0x40u == 0;  // (from the original)
                        if (!zf_3) {
                            if (zf_3 || s32(r0_8) < 0x40) {  // (from the original)
                                if (r0_8 != 0x2eu && r0_8 != 0x36u && r0_8 != 0x37u && r0_8 != 0x38u) {  // (from the original)
                                    goto L_30dace;
                                }
                            } else if (r0_8 != 0x54u && r0_8 != 0x55u && r0_8 != 0x58u && r0_8 != 0x59u) {  // (from the original)
                                goto L_30dace;
                            }
                        }
                    }
                }
                u32 r4 = r6 + 0x1cu;  // (from the original)
                u32 r5 = 0u;
                do {
                    copy_item_002fc8e8(r4, r4 - 4u, r2, r3);
                    r2 = guest::cpu()->r[2];
                    r3 = guest::cpu()->r[3];
                    r5 += 1u;
                    r4 -= 4u;
                    guest::preempt();
                } while (r5 < 7u);
                r0_8 = r6;
                copy_item_002fc8e8(r0_8, r7, r2, r3);
            }
L_30dace:;
            do_nothing_002f777c(r0_8);
        }
        r0_1 = 1u;
    }
    return r0_1;
}

}  // namespace d_0030da04
GUEST_EXPORT_FRAMED(0x0030da05, d_0030da04::f_0030da04, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_0030dbe8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0030dbe8 {

struct __attribute__((packed)) Local_0030dbe8_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u32 word_18;
    u32 word_1c;
};
GUEST_OFFSET(Local_0030dbe8_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_0030dbe8_ea_1, word_4, 0x4);
GUEST_OFFSET(Local_0030dbe8_ea_1, word_8, 0x8);
GUEST_OFFSET(Local_0030dbe8_ea_1, word_c, 0xc);
GUEST_OFFSET(Local_0030dbe8_ea_1, word_10, 0x10);
GUEST_OFFSET(Local_0030dbe8_ea_1, word_14, 0x14);
GUEST_OFFSET(Local_0030dbe8_ea_1, word_18, 0x18);
GUEST_OFFSET(Local_0030dbe8_ea_1, word_1c, 0x1c);

struct __attribute__((packed)) Local_0030dbe8_r5_3 {
    u8 unknown_0[0x6];  // (not used here)
    u8 byte_6;
};
GUEST_OFFSET(Local_0030dbe8_r5_3, byte_6, 0x6);

inline constexpr guest::Function<0x001138ed, u32(u32, u32, u32, u32)> call_001138ec;
inline constexpr guest::Function<0x002fbd54, u32(u32, u32, u32, u32)> PersonalId__is_set;
inline constexpr guest::Function<0x00301e20, u32(u32, u32, u32, u32)> is_villager_record;
inline constexpr guest::Function<0x0030bc91, u32(u32, u32, u32, u32)> call_0030bc90;

struct __attribute__((packed)) Frame_0030dbe8 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u32 word_18;
    u32 word_1c;
};
GUEST_OFFSET(Frame_0030dbe8, word_0, 0x0);
GUEST_OFFSET(Frame_0030dbe8, word_4, 0x4);
GUEST_OFFSET(Frame_0030dbe8, word_8, 0x8);
GUEST_OFFSET(Frame_0030dbe8, word_c, 0xc);
GUEST_OFFSET(Frame_0030dbe8, word_10, 0x10);
GUEST_OFFSET(Frame_0030dbe8, word_14, 0x14);
GUEST_OFFSET(Frame_0030dbe8, word_18, 0x18);
GUEST_OFFSET(Frame_0030dbe8, word_1c, 0x1c);
GUEST_SIZE(Frame_0030dbe8, 0x20);

u32 f_0030dbe8(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_0030dbe8> frame;  // the original's stack frame
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
    gptr<Local_0030dbe8_ea_1> ea_1 = gptr<Local_0030dbe8_ea_1>(frame.at(0).addr());
    ea_1->word_0 = r0;
    ea_1->word_4 = r1;
    ea_1->word_8 = r2;
    ea_1->word_c = r4;
    ea_1->word_10 = r5;
    ea_1->word_14 = r6;
    ea_1->word_18 = r7;
    ea_1->word_1c = r14;
    r5 = 1u;
    r7 = 0xau;  // (from the original)
    r4 = frame->word_0;
    r6 = 0u;
    do {
        u32 r0_1 = is_villager_record(r4, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (r0_1 == 0 || r5 != 0 && *gptr<u8>(r4 + (0x25u << 8) + 8u) == 6u) {  // (from the original)
            goto L_30dc1e;
        }
        r6 += 1u;
        r4 += 0x2518u;  // (from the original)
        guest::preempt();
    } while (r6 < r7);
    r4_1 = frame->word_c;
    r5_1 = frame->word_10;
    r6_1 = frame->word_14;
    r7_1 = frame->word_18;
    tpc_1 = frame->word_1c;
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[4] = r4_1;
    guest::cpu()->r[5] = r5_1;
    guest::cpu()->r[6] = r6_1;
    guest::cpu()->r[7] = r7_1;
    return ~0u;
L_30dc1e:;
    if (r6 < 0xau) {  // (from the original)
        r7 = 0x2518u * r6 + frame->word_0;  // (from the original)
        call_001138ec(r7, frame->word_4, r2, r3);
        call_0030bc90(frame->word_0, r7, r6, frame->word_8 != 0 ? 4u : 3u);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r4 = 0u;
        do {
            if (r4 < 0x10u) {  // (from the original)
                r1 = 0x8eeu;  // (from the original)
                u32 r5_2 = r4 * 0xf2u + r7 + r1;  // (from the original)
                if (r5_2 != 0) {
                    u32 r0_4 = PersonalId__is_set(r5_2, r1, r2, r3);
                    r1 = guest::cpu()->r[1];
                    r2 = guest::cpu()->r[2];
                    r3 = guest::cpu()->r[3];
                    if (r0_4 != 0) {
                        gptr<Local_0030dbe8_r5_3> r5_3 = gptr<Local_0030dbe8_r5_3>(r5_2 + 0xb6u);  // (from the original)
                        r5_3->byte_6 = u8(u32(r5_3->byte_6) & 0x7fu);  // (from the original)
                    }
                }
            }
            r4 += 1u;
            guest::preempt();
        } while (r4 < 0x10u);  // (from the original)
        u32 r4_2 = frame->word_c;
        u32 r5_4 = frame->word_10;
        u32 r6_2 = frame->word_14;
        u32 r7_2 = frame->word_18;
        u32 tpc_2 = frame->word_1c;
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[4] = r4_2;
        guest::cpu()->r[5] = r5_4;
        guest::cpu()->r[6] = r6_2;
        guest::cpu()->r[7] = r7_2;
        return r6;
    }
    r4_1 = frame->word_c;
    r5_1 = frame->word_10;
    r6_1 = frame->word_14;
    r7_1 = frame->word_18;
    tpc_1 = frame->word_1c;
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[4] = r4_1;
    guest::cpu()->r[5] = r5_1;
    guest::cpu()->r[6] = r6_1;
    guest::cpu()->r[7] = r7_1;
    return ~0u;
}

}  // namespace d_0030dbe8
GUEST_EXPORT(0x0030dbe9, d_0030dbe8::f_0030dbe8);

// f_0030dcdc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0030dcdc {

struct __attribute__((packed)) Local_0030dcdc_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u32 word_18;
};
GUEST_OFFSET(Local_0030dcdc_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_0030dcdc_ea_1, word_4, 0x4);
GUEST_OFFSET(Local_0030dcdc_ea_1, word_8, 0x8);
GUEST_OFFSET(Local_0030dcdc_ea_1, word_c, 0xc);
GUEST_OFFSET(Local_0030dcdc_ea_1, word_10, 0x10);
GUEST_OFFSET(Local_0030dcdc_ea_1, word_14, 0x14);
GUEST_OFFSET(Local_0030dcdc_ea_1, word_18, 0x18);

struct __attribute__((packed)) Local_0030dcdc_r2_5 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_0030dcdc_r2_5, word_0, 0x0);
GUEST_OFFSET(Local_0030dcdc_r2_5, word_4, 0x4);
GUEST_OFFSET(Local_0030dcdc_r2_5, word_8, 0x8);

inline constexpr guest::Function<0x002f777c, u32(u32)> do_nothing_002f777c;
inline constexpr guest::Function<0x002f77e8, u32(u32)> same_pointer;
inline constexpr guest::Function<0x002fb328, u32(u32, u32)> get_save_data;
inline constexpr guest::Function<0x002ff368, u32(u32)> call_002ff368;
inline constexpr guest::Function<0x002ff4d4, u32(u32, u32, u32, u32)> call_002ff4d4;
inline constexpr guest::Function<0x00301e6c, u32(u32, u32, u32, u32)> entry_34_at;
inline constexpr guest::Function<0x00308380, u32(u32, u32, u32, u32)> call_00308380;
inline constexpr guest::Function<0x00308d05, u32(u32, u32)> find_villager_by_id_00308d04;
inline constexpr guest::Function<0x00308d4d, u32(u32)> call_00308d4c;
inline constexpr guest::Function<0x0030dad8, u32(u32, u32, u32, u32)> call_0030dad8;
inline constexpr guest::Function<0x0030ddc0, u32(u32, u32)> call_0030ddc0;
inline constexpr guest::Function<0x0030dfa0, u32(u32, u32, u32, u32)> call_0030dfa0;

u32 f_0030dcdc(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    gptr<Local_0030dcdc_ea_1> ea_1 = gptr<Local_0030dcdc_ea_1>(r13 - 0x1c);  // (from the original)
    ea_1->word_0 = r0;
    ea_1->word_4 = r1;
    ea_1->word_8 = r2;
    ea_1->word_c = r4;
    ea_1->word_10 = r5;
    ea_1->word_14 = r6;
    ea_1->word_18 = r14;
    r13 = ea_1.addr() - 0x2c4u;  // (from the original)
    u32 r1_1 = *gptr<u16>(r13 + 0x2ccu);  // (from the original)
    guest::cpu()->r[13] = r13;
    u32 r0_1 = entry_34_at(0xa83aecu, r1_1, r2, r3);  // (from the original)
    if (r0_1 != 0) {
        guest::cpu()->r[13] = r13;
        call_002ff368(r13 + 0x10u);  // (from the original)
        u32 r1_3 = u32(*gptr<u8>(r0_1 + 0x1cu)) >> 4;  // (from the original)
        u32 r0_3 = r13;
        *gptr<u8>(r0_3 + 0xcu) = u8(r1_3);  // (from the original)
        guest::cpu()->r[13] = r13;
        u32 r0_4 = get_save_data(r0_3, r1_3);
        guest::cpu()->r[13] = r13;
        call_00308380(r13 + 0x290u, r13 + 0x2ccu, r13 + 0xcu, r0_4 + 0x621b8u);  // (from the original)
        u32 r1_5 = *gptr<u8>(r13 + 0xcu);  // (from the original)
        guest::cpu()->r[13] = r13;
        call_0030ddc0(r13 + 0x2c0u, r1_5);  // (from the original)
        gptr<Local_0030dcdc_r2_5> r2_5 = gptr<Local_0030dcdc_r2_5>(r13);
        r2_5->word_0 = r1 + 0x55a6u;  // (from the original)
        r2_5->word_4 = r13 + 0x2c0u;  // (from the original)
        r2_5->word_8 = 0;
        u32 r2_6 = u32(*gptr<u8>(r13 + 0xcu)) + 1u;  // (from the original)
        guest::cpu()->r[13] = r13;
        call_0030dfa0(r13 + 0x10u, 0x30dd90u, r2_6, r13 + 0x290u);  // (from the original)
        guest::cpu()->r[13] = r13;
        do_nothing_002f777c(r13 + 0x2c0u);  // (from the original)
        guest::cpu()->r[13] = r13;
        u32 r0_10 = call_002ff4d4(r13 + 0x10u, 3u, 0u, 0u);  // (from the original)
        if (r0_10 == 0) {
            *gptr<u32>(r13) = 0;
            u32 r2_9 = *gptr<u16>(r13 + 0x2ccu);  // (from the original)
            guest::cpu()->r[13] = r13;
            call_0030dad8(r1 + 0x8ebeu, 0xau, r2_9, 0u);  // (from the original)
        }
        guest::cpu()->r[13] = r13;
        same_pointer(r13 + 0x10u);  // (from the original)
    }
    u32 r1_8 = *gptr<u16>(r13 + 0x2ccu);  // (from the original)
    guest::cpu()->r[13] = r13;
    u32 r0_13 = find_villager_by_id_00308d04(r0, r1_8);
    if (r0_13 != 0) {
        guest::cpu()->r[13] = r13;
        r0_13 = call_00308d4c(r0_13);
    }
    r13 += 0x2d0u;  // (from the original)
    u32 r4_1 = *gptr<u32>(r13);
    u32 r5_1 = *gptr<u32>(r13 + 4);
    u32 r6_1 = *gptr<u32>(r13 + 8);
    u32 tpc_1 = *gptr<u32>(r13 + 0xc);  // (from the original)
    r13 += 0x10;  // (from the original)
    guest::cpu()->r[4] = r4_1;
    guest::cpu()->r[5] = r5_1;
    guest::cpu()->r[6] = r6_1;
    guest::cpu()->r[13] = r13;
    return r0_13;
}

}  // namespace d_0030dcdc
GUEST_EXPORT(0x0030dcdd, d_0030dcdc::f_0030dcdc);

// f_0030dda8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0030dda8 {

inline constexpr guest::Function<0x006f0900, u32(u32, u32, u32, u32)> add_category_5_items_with_byte_19_low;

void f_0030dda8() {
    add_category_5_items_with_byte_19_low(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0030dda8
GUEST_EXPORT(0x0030dda8, d_0030dda8::f_0030dda8);

// f_0030ddac: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0030ddac {

inline constexpr guest::Function<0x006f2504, u32(u32, u32, u32, u32)> keep_items_by_flag_1c_bit3;

void f_0030ddac() {
    keep_items_by_flag_1c_bit3(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0030ddac
GUEST_EXPORT(0x0030ddac, d_0030ddac::f_0030ddac);

// f_0030e068: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0030e068 {

struct __attribute__((packed)) Local_0030e068_r0_3 {
    u8 unknown_0[0x18];  // (not used here)
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
};
GUEST_OFFSET(Local_0030e068_r0_3, word_18, 0x18);
GUEST_OFFSET(Local_0030e068_r0_3, word_1c, 0x1c);
GUEST_OFFSET(Local_0030e068_r0_3, word_20, 0x20);
GUEST_OFFSET(Local_0030e068_r0_3, word_24, 0x24);
GUEST_OFFSET(Local_0030e068_r0_3, word_28, 0x28);
GUEST_OFFSET(Local_0030e068_r0_3, word_2c, 0x2c);
GUEST_OFFSET(Local_0030e068_r0_3, word_30, 0x30);
GUEST_OFFSET(Local_0030e068_r0_3, word_34, 0x34);
GUEST_OFFSET(Local_0030e068_r0_3, word_38, 0x38);
GUEST_OFFSET(Local_0030e068_r0_3, word_3c, 0x3c);
GUEST_OFFSET(Local_0030e068_r0_3, word_40, 0x40);
GUEST_OFFSET(Local_0030e068_r0_3, word_44, 0x44);
GUEST_OFFSET(Local_0030e068_r0_3, word_48, 0x48);
GUEST_OFFSET(Local_0030e068_r0_3, word_4c, 0x4c);
GUEST_OFFSET(Local_0030e068_r0_3, word_50, 0x50);

inline constexpr u32 vtable_script__WordFix_30u_ = 0x00909ea8u;
inline guest::global<u32, 0x0095decc> global_0095decc;
inline constexpr guest::Function<0x003083bc, u32(u32, u32, u32, u32)> script__construct_word_ptr;
inline constexpr guest::Function<0x005e2e50, u32(u32, u32)> call_005e2e50;
inline constexpr guest::Function<0x005e2f94, u32(u32)> call_005e2f94;
inline constexpr guest::Function<0x005ea8dc, u32(u32, u32)> LinkOwner__unlink;
inline constexpr guest::Function<0x005ea8f8, u32(u32, u32, u32, u32)> call_005ea8f8;
inline constexpr guest::Function<0x005ea964, u32(u32, u32, u32, u32)> call_005ea964;
inline constexpr guest::Function<0x005f4bfc, u32(u32)> construct_script_word;

struct __attribute__((packed)) Frame_0030e068 {
    u32 word_0;
    u32 word_4;
    u8 unknown_8[0x54];  // (not read or written by name)
};
GUEST_OFFSET(Frame_0030e068, word_0, 0x0);
GUEST_OFFSET(Frame_0030e068, word_4, 0x4);
GUEST_SIZE(Frame_0030e068, 0x5c);

void script__WordFix_30u___WordFix_0030e068(u32 r0, u32 r1_unused, u32 r2_unused, u32 r3) {
    guest::StackFrameOf<Frame_0030e068> frame;  // the original's stack frame
    u32 res_1 = 0;
    u32 r3_3 = 0;
    u32 r5 = r0;
    u32 r0_1 = frame.at(4).addr();
    script__construct_word_ptr(r0_1, frame.at(0x1c).addr(), 0x1eu, r3);  // (from the original)
    u32 r4 = vtable_script__WordFix_30u_;
    *gptr<u32>(r0_1) = r4;
    u32 r0_2 = r0_1 + 0xcu;  // (from the original)
    construct_script_word(r0_2);
    gptr<Local_0030e068_r0_3> r0_3 = gptr<Local_0030e068_r0_3>(r0_2 - 0xcu);  // (from the original)
    u32 r6 = 0u;
    r0_3->word_18 = r6;
    r0_3->word_1c = r6;
    r0_3->word_20 = r6;
    r0_3->word_24 = r6;
    r0_3->word_28 = r6;
    r0_3->word_2c = r6;
    r0_3->word_30 = r6;
    r0_3->word_34 = r6;
    r0_3->word_38 = r6;
    r0_3->word_3c = r6;
    r0_3->word_40 = r6;
    r0_3->word_44 = r6;
    r0_3->word_48 = r6;
    u32 r2 = 0x8906ecu;  // (from the original)
    r0_3->word_4c = r6;
    r0_3->word_50 = r6;
    u32 r1 = 0xfu;  // (from the original)
    r0 = r0_3.addr() + 0x16u;  // (from the original)
    do {
        u32 r3_2 = *gptr<u16>(r2);
        res_1 = r1 - 1u;
        r1 = res_1;
        *gptr<u16>(r0 + 2u) = u16(r3_2);
        r3_3 = *gptr<u16>(r2);
        u32 ea_2 = r0 + 4u;
        *gptr<u16>(ea_2) = u16(r3_3);
        r0 = ea_2;
        guest::preempt();
    } while (res_1 != 0);
    call_005ea8f8(*global_0095decc, 0u, r2, r3_3);
    frame->word_0 = r6;
    call_005ea964(*global_0095decc, frame.at(4).addr(), 0x847ac4u, 0x17bu);  // (from the original)
    LinkOwner__unlink(*global_0095decc, 0u);
    u32 r0_7 = r5 + 0x2958u;  // (from the original)
    call_005e2e50(r0_7, frame.at(4).addr());
    call_005e2f94(r0_7);
    frame->word_4 = r4;
}

}  // namespace d_0030e068
GUEST_EXPORT_FRAMED(0x0030e068, d_0030e068::script__WordFix_30u___WordFix_0030e068, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_0030e184: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0030e184 {

struct __attribute__((packed)) Object_0030e184_1 {
    u8 unknown_0[0x1e];  // (not used here)
    u8 byte_1e;
    u8 byte_1f;
};
GUEST_OFFSET(Object_0030e184_1, byte_1e, 0x1e);
GUEST_OFFSET(Object_0030e184_1, byte_1f, 0x1f);

struct __attribute__((packed)) Local_0030e184_r4_1 {
    u8 unknown_0[0x9];  // (not used here)
    u8 byte_9;
};
GUEST_OFFSET(Local_0030e184_r4_1, byte_9, 0x9);

inline constexpr guest::Function<0x002fae84, u32(u32)> get_data_base;
inline constexpr guest::Function<0x002ff8f0, u32(u32, u32)> any_player_matches;
inline constexpr guest::Function<0x00309ef0, u32(u32, u32, u32, u32)> SavedRecordInner__has_value;
inline constexpr guest::Function<0x0030b8bc, u32(u32)> reset_record_0030b8bc;
inline constexpr guest::Function<0x0030b90c, u32(u32, u32)> record_has_flag_bit;
inline constexpr guest::Function<0x0030b924, u32(u32, u32)> apply_record_mode;

void f_0030e184(u32 r0_unused, gptr<Object_0030e184_1> arg1) {
    u32 r1 = arg1.addr();
    gptr<Local_0030e184_r4_1> r4_1 = gptr<Local_0030e184_r4_1>(r1 + 0x16u);  // (from the original)
    u32 r0_1 = SavedRecordInner__has_value(r4_1.addr(), r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0_1 != 0) {
        u32 r0_2 = get_data_base(r0_1);
        u32 r0_4 = any_player_matches(r0_2 + 0x20u, r1);  // (from the original)
        if (r0_4 != 0) {
            u32 r0_5 = arg1->byte_1e;
            if (r0_5 == 0xeu) {  // (from the original)
                if (r4_1->byte_9 != 0) {
                    return;
                }
                u32 r0_6 = record_has_flag_bit(r1, 0u);
                if (r0_6 != 0) {
                    goto L_30e204;
                }
                u32 r0_7 = record_has_flag_bit(r1, 1u);
                if (r0_7 != 0) {
                    goto L_30e204;
                }
                return;
            }
            if (r0_5 == 0xfu) {  // (from the original)
                if (r4_1->byte_9 == 1u) {
                    return;
                }
            } else {
                if (r0_5 == 0x10u) {  // (from the original)
                    if (r4_1->byte_9 != 0) {
                        return;
                    }
                    u32 r0_8 = record_has_flag_bit(r1, 0u);
                    if (r0_8 == 0) {
                        u32 r0_9 = record_has_flag_bit(r1, 1u);
                        if (r0_9 == 0) {
                            return;
                        }
                    }
                    goto L_30e204;
                }
                if (r0_5 != 0x11u || arg1->byte_1f == 1u) {  // (from the original)
                    return;
                }
            }
        }
        reset_record_0030b8bc(r1);
    }
    return;
L_30e204:;
    apply_record_mode(r1, 2u);
}

}  // namespace d_0030e184
GUEST_EXPORT_FRAMED(0x0030e185, d_0030e184::f_0030e184, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0030e220: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0030e220 {

inline constexpr guest::Function<0x005d8698, u32(u32, u32)> do_nothing_005d8698;

void f_0030e220() {
    do_nothing_005d8698(guest::cpu()->r[0], guest::cpu()->r[1]);
}

}  // namespace d_0030e220
GUEST_EXPORT(0x0030e220, d_0030e220::f_0030e220);

// f_0030e454: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0030e454 {

struct __attribute__((packed)) Object_0030e454_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Object_0030e454_1, word_0, 0x0);
GUEST_OFFSET(Object_0030e454_1, word_4, 0x4);
GUEST_OFFSET(Object_0030e454_1, word_8, 0x8);

struct __attribute__((packed)) Local_0030e454_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u32 word_18;
    u32 word_1c;
};
GUEST_OFFSET(Local_0030e454_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_0030e454_ea_1, word_4, 0x4);
GUEST_OFFSET(Local_0030e454_ea_1, word_8, 0x8);
GUEST_OFFSET(Local_0030e454_ea_1, word_c, 0xc);
GUEST_OFFSET(Local_0030e454_ea_1, word_10, 0x10);
GUEST_OFFSET(Local_0030e454_ea_1, word_14, 0x14);
GUEST_OFFSET(Local_0030e454_ea_1, word_18, 0x18);
GUEST_OFFSET(Local_0030e454_ea_1, word_1c, 0x1c);

inline constexpr guest::Function<0x002fe419, u32(u32, u32, u32, u32)> pick_random_set_bit;

struct __attribute__((packed)) Frame_0030e454 {
    u8 unknown_0[0x8];  // (not read or written by name)
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u32 word_18;
    u32 word_1c;
};
GUEST_OFFSET(Frame_0030e454, word_8, 0x8);
GUEST_OFFSET(Frame_0030e454, word_c, 0xc);
GUEST_OFFSET(Frame_0030e454, word_10, 0x10);
GUEST_OFFSET(Frame_0030e454, word_14, 0x14);
GUEST_OFFSET(Frame_0030e454, word_18, 0x18);
GUEST_OFFSET(Frame_0030e454, word_1c, 0x1c);
GUEST_SIZE(Frame_0030e454, 0x20);

void f_0030e454(u32 r0, gptr<Object_0030e454_1> arg1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_0030e454> frame;  // the original's stack frame
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r14 = guest::cpu()->r[14];
    gptr<Local_0030e454_ea_1> ea_1 = gptr<Local_0030e454_ea_1>(frame.at(0).addr());
    ea_1->word_0 = r0;
    ea_1->word_4 = arg1.addr();
    ea_1->word_8 = r2;
    ea_1->word_c = r4;
    ea_1->word_10 = r5;
    ea_1->word_14 = r6;
    ea_1->word_18 = r7;
    ea_1->word_1c = r14;
    u32 r0_1 = pick_random_set_bit(arg1.addr(), arg1.addr(), r2, r3);
    u32 r1_1 = guest::cpu()->r[1];
    u32 r2_1 = guest::cpu()->r[2];
    if (r0_1 < 0xau) {  // (from the original)
        if (arg1->word_0 > r0_1) {
            r1_1 = arg1->word_4;
            u32 r0_2 = lsl_r(1u, r0_1 & 0xff);  // (from the original)
            r2_1 = r1_1;
            if ((r2_1 & r0_2) != 0) {
                r1_1 &= ~r0_2;
                u32 r0_3 = arg1->word_8;
                arg1->word_4 = r1_1;
                arg1->word_8 = r0_3 - 1u;
            }
        }
        u32 r0_4 = pick_random_set_bit(arg1.addr(), r1_1, r2_1, guest::cpu()->r[3]);
        r1_1 = guest::cpu()->r[1];
        if (r0_4 < 0xau) {  // (from the original)
            if (arg1->word_0 > r0_4) {
                u32 r1_2 = arg1->word_4;
                u32 r6_1 = lsl_r(1u, r0_4 & 0xff);  // (from the original)
                if ((r1_2 & r6_1) != 0) {
                    arg1->word_8 = arg1->word_8 - 1u;
                    arg1->word_4 = r1_2 & ~r6_1;
                }
            }
            if (frame->word_8 == 0) {
                u32 r1_3 = 0x2518u * r0_4 + r0 + 0x2500u;  // (from the original)
                *gptr<u8>((0x2518u * r0_1 + r0 + 0x2500u) + 0x15u) = u8(r0_4);  // (from the original)
                *gptr<u8>(r1_3 + 0x15u) = u8(r0_1);  // (from the original)
                u32 r4_1 = frame->word_c;
                u32 r5_1 = frame->word_10;
                u32 r6_2 = frame->word_14;
                u32 r7_1 = frame->word_18;
                u32 tpc_1 = frame->word_1c;
                guest::cpu()->r[1] = r1_3;
                guest::cpu()->r[4] = r4_1;
                guest::cpu()->r[5] = r5_1;
                guest::cpu()->r[6] = r6_2;
                guest::cpu()->r[7] = r7_1;
                return;
            }
            r1_1 = 0x2518u * r0_4 + r0 + 0x2500u;  // (from the original)
            *gptr<u8>((0x2518u * r0_1 + r0 + 0x2500u) + 0x16u) = u8(r0_4);  // (from the original)
            *gptr<u8>(r1_1 + 0x16u) = u8(r0_1);  // (from the original)
        }
    }
    u32 r4_2 = frame->word_c;
    u32 r5_2 = frame->word_10;
    u32 r6_3 = frame->word_14;
    u32 r7_2 = frame->word_18;
    u32 tpc_2 = frame->word_1c;
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->r[4] = r4_2;
    guest::cpu()->r[5] = r5_2;
    guest::cpu()->r[6] = r6_3;
    guest::cpu()->r[7] = r7_2;
}

}  // namespace d_0030e454
GUEST_EXPORT(0x0030e455, d_0030e454::f_0030e454);

// f_0030eaf0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0030eaf0 {

struct __attribute__((packed)) Local_0030eaf0_r0_8 {
    u8 unknown_0[0x5];  // (not used here)
    u8 byte_5;
    u8 byte_6;
};
GUEST_OFFSET(Local_0030eaf0_r0_8, byte_5, 0x5);
GUEST_OFFSET(Local_0030eaf0_r0_8, byte_6, 0x6);

inline constexpr guest::Function<0x00118c9d, u32(u32, u32)> index_of_villager_in_town;
inline constexpr guest::Function<0x002fb328, u32(u32, u32, u32)> get_save_data;
inline constexpr guest::Function<0x00301e20, u32(u32, u32, u32, u32)> is_villager_record;
inline constexpr guest::Function<0x00309ef0, u32(u32, u32, u32)> SavedRecordInner__has_value;

u32 f_0030eaf0(u32 r0, u32 r1, u32 r2) {
    u32 r4 = 0;
    u32 r9 = 0;
    u32 r5_1 = 0;
    u32 r0_3 = 0;
    u32 r8_1 = 0;
    u32 r0_4 = 0;
    u32 zf_1 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 r0_7 = 0;
    gptr<Local_0030eaf0_r0_8> r0_8 = gptr<Local_0030eaf0_r0_8>(0u);
    u32 r6 = r0;
    u32 r7 = r1;
    u32 r0_1 = is_villager_record(r1, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    if (r0_1 == 0) {
        return r0_1;
    } else {
        r4 = 0u;
        r9 = r4;
    }
L_30eb14:;
    u32 r0_2 = r4 & 0xffu;  // (from the original)
    if (r0_2 >= 4u) {
        r5_1 = r9;
    } else {
        r1 = r0_2 * 0x149u;  // (from the original)
        r5_1 = r6 + (r1 << 7);
    }
    if (r5_1 == 0) {
        goto L_30ebac;
    }
    r0_3 = is_villager_record(r7, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    if (r0_3 == 0) {
        goto L_30ebac;
    }
    r8_1 = r5_1 + 0x8dfau;  // (from the original)
    r0_4 = SavedRecordInner__has_value(r8_1, r1, r2);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    zf_1 = r0_4 == 0;
    if (!zf_1) {
        r0_4 = *gptr<u8>(r8_1 + 9u);
        zf_1 = r0_4 == 3u;
    }
    if (zf_1) {
        goto L_30ebac;
    }
    r0_5 = get_save_data(r0_4, r1, r2);
    r0_6 = r0_5 + 0x292a4u;  // (from the original)
    r0_7 = index_of_villager_in_town(r0_6, r7);
    r1 = r0_7;
    r0_8 = gptr<Local_0030eaf0_r0_8>(r5_1 + 0x8e00u);  // (from the original)
    r2 = s8(r0_8->byte_5);
    if (r2 != r1 && u32(s8(r0_8->byte_6)) != r1 || r8_1 == 0) {
        goto L_30ebac;
    }
    return r5_1;
L_30ebac:;
    r4 += 1u;
    if (s32(r4) >= 4) {
        return 0u;
    }
    guest::preempt();
    goto L_30eb14;
}

}  // namespace d_0030eaf0
GUEST_EXPORT_FRAMED(0x0030eaf0, d_0030eaf0::f_0030eaf0, 0x47f0);  // pushes {r4, r5, r6, r7, r8, r9, r10, lr} first, as the original

// f_0030ebec: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0030ebec {

struct __attribute__((packed)) Local_0030ebec_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u32 word_18;
    u32 word_1c;
};
GUEST_OFFSET(Local_0030ebec_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_0030ebec_ea_1, word_4, 0x4);
GUEST_OFFSET(Local_0030ebec_ea_1, word_8, 0x8);
GUEST_OFFSET(Local_0030ebec_ea_1, word_c, 0xc);
GUEST_OFFSET(Local_0030ebec_ea_1, word_10, 0x10);
GUEST_OFFSET(Local_0030ebec_ea_1, word_14, 0x14);
GUEST_OFFSET(Local_0030ebec_ea_1, word_18, 0x18);
GUEST_OFFSET(Local_0030ebec_ea_1, word_1c, 0x1c);

struct __attribute__((packed)) Local_0030ebec_r4_4 {
    u8 unknown_0[0xb];  // (not used here)
    u8 byte_b;
    u8 byte_c;
};
GUEST_OFFSET(Local_0030ebec_r4_4, byte_b, 0xb);
GUEST_OFFSET(Local_0030ebec_r4_4, byte_c, 0xc);

inline constexpr guest::Function<0x002fae84, u32(u32, u32, u32, u32)> get_data_base;
inline constexpr guest::Function<0x002fb7e8, u32(u32, u32, u32)> player_at;
inline constexpr guest::Function<0x002fbd54, u32(u32, u32, u32)> PersonalId__is_set;
inline constexpr guest::Function<0x0030988c, u32(u32, u32, u32)> saved_record_state_is_not_3;
inline constexpr guest::Function<0x0030a7e0, u32(u32, u32, u32)> reset_saved_record;
inline constexpr guest::Function<0x0030e4e8, u32(u32, u32, u32)> saved_record_state_is_none;
inline constexpr guest::Function<0x0030e514, u32(u32, u32, u32)> saved_record_state_is_below_2;
inline constexpr guest::Function<0x0030e540, u32(u32, u32, u32)> saved_record_state_is_below_3;
inline constexpr guest::Function<0x0030e56c, u32(u32, u32, u32)> entry_matches_identity;
inline constexpr guest::Function<0x00407b00, u32(u32, u32, u32)> call_00407b00;
inline constexpr guest::Function<0x005bce04, u32(u32, u32, u32)> finish_event;
inline constexpr guest::Function<0x005bd05c, u32(u32, u32, u32)> construct_record_with_half_a;
inline constexpr guest::Function<0x005bd2a0, u32(u32, u32, u32)> construct_record_with_half_b;
inline constexpr guest::Function<0x005bd864, u32(u32, u32, u32)> construct_record_with_items;

void f_0030ebec(u32 r0, u32 r1, u32 r2) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    gptr<Local_0030ebec_r4_4> r4_4 = gptr<Local_0030ebec_r4_4>(0u);
    u32 r0_10 = 0;
    if (r1 >= 0xau) {  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return;
    }
    gptr<Local_0030ebec_ea_1> ea_1 = gptr<Local_0030ebec_ea_1>(r13 - 0x20);  // (from the original)
    ea_1->word_0 = r0;
    ea_1->word_4 = r1;
    ea_1->word_8 = r2;
    ea_1->word_c = r4;
    ea_1->word_10 = r5;
    ea_1->word_14 = r6;
    ea_1->word_18 = r7;
    ea_1->word_1c = r14;
    r13 = ea_1.addr() - 0x10u;  // (from the original)
    r6 = r1;
    guest::cpu()->r[13] = r13;
    u32 r0_1 = get_data_base(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    *gptr<u32>(r13 + 8u) = r0_1 + 0x20u;  // (from the original)
    r7 = 0x55a6u;  // (from the original)
    r5 = 0u;
    *gptr<u32>(r13 + 4u) = r6 * 0x2518u + r0;  // (from the original)
    do {
        u32 r0_2 = *gptr<u32>(r13 + 8u);
        guest::cpu()->r[13] = r13;
        u32 r0_3 = player_at(r0_2, uxtb(r5), r2);
        r2 = guest::cpu()->r[2];
        if (r0_3 != 0) {
            guest::cpu()->r[13] = r13;
            u32 r0_5 = PersonalId__is_set(r0_3 + r7, guest::cpu()->r[1], r2);
            r2 = guest::cpu()->r[2];
            if (r0_5 != 0) {
                u32 r0_6 = *gptr<u32>(r13 + 0x18u);  // (from the original)
                u32 zf_1 = r0_6 - 3u == 0;
                if (!zf_1) {
                    if (zf_1 || (r0_6 - 3u >> 0x1f) != (((r0_6 ^ 3u) & (r0_6 ^ r0_6 - 3u)) >> 0x1f)) {  // (from the original)
                        if (r0_6 == 0) {
                            u32 r4_1 = r0_3 + 0x8d4cu;  // (from the original)
                            guest::cpu()->r[13] = r13;
                            u32 r0_7 = saved_record_state_is_none(r4_1, guest::cpu()->r[1], r2);
                            r2 = guest::cpu()->r[2];
                            if (r0_7 == 0 || u32(*gptr<s8>(r4_1 + 0xfu)) != r6) {  // (from the original)
                                goto L_30ece4;
                            }
                            guest::cpu()->r[13] = r13;
                            construct_record_with_half_a(r4_1, guest::cpu()->r[1], r2);
                            r2 = guest::cpu()->r[2];
                            goto L_30ece4;
                        }
                        if (r0_6 != 1u) {
                            goto L_30ece4;
                        }
                    } else {
                        if (r0_6 == 4u) {
                            u32 r4_2 = r0_3 + 0x8d6cu;  // (from the original)
                            guest::cpu()->r[13] = r13;
                            u32 r0_8 = call_00407b00(r4_2, 0u, r2);
                            r2 = guest::cpu()->r[2];
                            if (r0_8 == 0 || u32(*gptr<s8>(r4_2 + 0x14u)) != r6) {  // (from the original)
                                goto L_30ece4;
                            }
                            guest::cpu()->r[13] = r13;
                            construct_record_with_items(r4_2, guest::cpu()->r[1], r2);
                            r2 = guest::cpu()->r[2];
                            goto L_30ece4;
                        }
                        if (r0_6 != 0xbu) {  // (from the original)
                            goto L_30ece4;
                        }
                        goto L_30ecc2;
                    }
                    u32 r4_3 = r0_3 + 0x8d5cu;  // (from the original)
                    guest::cpu()->r[13] = r13;
                    u32 r0_9 = saved_record_state_is_below_2(r4_3, guest::cpu()->r[1], r2);
                    r2 = guest::cpu()->r[2];
                    if (r0_9 == 0 || u32(*gptr<s8>(r4_3 + 0xfu)) != r6) {  // (from the original)
                        goto L_30ece4;
                    }
                    guest::cpu()->r[13] = r13;
                    construct_record_with_half_b(r4_3, guest::cpu()->r[1], r2);
                    r2 = guest::cpu()->r[2];
                    goto L_30ece4;
                }
                r4_4 = gptr<Local_0030ebec_r4_4>(r0_3 + 0x8dfau);  // (from the original)
                guest::cpu()->r[13] = r13;
                r0_10 = saved_record_state_is_not_3(r4_4.addr(), guest::cpu()->r[1], r2);
                r2 = guest::cpu()->r[2];
                if (r0_10 == 0 || u32(s8(r4_4->byte_b)) != r6 && u32(s8(r4_4->byte_c)) != r6) {
                    goto L_30ece4;
                }
                guest::cpu()->r[13] = r13;
                reset_saved_record(r4_4.addr(), guest::cpu()->r[1], r2);
                r2 = guest::cpu()->r[2];
                goto L_30ece4;
L_30ecc2:;
                *gptr<u32>(r13) = r0_3 + 0x8e08u;  // (from the original)
                guest::cpu()->r[13] = r13;
                u32 r0_12 = saved_record_state_is_below_3(r0_3 + 0x8e08u, guest::cpu()->r[1], r2);  // (from the original)
                r2 = guest::cpu()->r[2];
                if (r0_12 != 0) {
                    u32 r1_3 = *gptr<u32>(r13 + 4u);
                    u32 r0_13 = *gptr<u32>(r13);
                    guest::cpu()->r[13] = r13;
                    u32 r0_14 = entry_matches_identity(r0_13, r1_3, r2);
                    r2 = guest::cpu()->r[2];
                    if (r0_14 != 0) {
                        u32 r0_15 = *gptr<u32>(r13);
                        guest::cpu()->r[13] = r13;
                        finish_event(r0_15, r0_3, r2);
                        r2 = guest::cpu()->r[2];
                    }
                }
            }
        }
L_30ece4:;
        r5 += 1u;
        guest::preempt();
    } while (s32(r5) < 4);
    r13 += 0x1cu;  // (from the original)
    u32 r4_5 = *gptr<u32>(r13);
    u32 r5_1 = *gptr<u32>(r13 + 4);
    u32 r6_1 = *gptr<u32>(r13 + 8);
    u32 r7_1 = *gptr<u32>(r13 + 0xc);  // (from the original)
    u32 tpc_1 = *gptr<u32>(r13 + 0x10);  // (from the original)
    r13 += 0x14;  // (from the original)
    guest::cpu()->r[4] = r4_5;
    guest::cpu()->r[5] = r5_1;
    guest::cpu()->r[6] = r6_1;
    guest::cpu()->r[7] = r7_1;
    guest::cpu()->r[13] = r13;
}

}  // namespace d_0030ebec
GUEST_EXPORT(0x0030ebed, d_0030ebec::f_0030ebec);

// f_0030ef70: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0030ef70 {

struct __attribute__((packed)) Local_0030ef70_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u32 word_18;
    u32 word_1c;
};
GUEST_OFFSET(Local_0030ef70_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_0030ef70_ea_1, word_4, 0x4);
GUEST_OFFSET(Local_0030ef70_ea_1, word_8, 0x8);
GUEST_OFFSET(Local_0030ef70_ea_1, word_c, 0xc);
GUEST_OFFSET(Local_0030ef70_ea_1, word_10, 0x10);
GUEST_OFFSET(Local_0030ef70_ea_1, word_14, 0x14);
GUEST_OFFSET(Local_0030ef70_ea_1, word_18, 0x18);
GUEST_OFFSET(Local_0030ef70_ea_1, word_1c, 0x1c);

inline constexpr guest::Function<0x002fbb30, u32(u32, u32, u32)> copy_aligned_bytes;
inline constexpr guest::Function<0x00301e20, u32(u32, u32, u32, u32)> is_villager_record;
inline constexpr guest::Function<0x00301e64, u32(u32, u32, u32, u32)> read_field_u16_0x2c_;
inline constexpr guest::Function<0x00301e6c, u32(u32, u32)> entry_34_at;
inline constexpr guest::Function<0x0030bc44, u32(u32)> call_0030bc44;
inline constexpr guest::Function<0x0030bc91, u32(u32, u32, u32, u32)> call_0030bc90;

struct __attribute__((packed)) Frame_0030ef70 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u32 word_18;
    u32 word_1c;
};
GUEST_OFFSET(Frame_0030ef70, word_0, 0x0);
GUEST_OFFSET(Frame_0030ef70, word_4, 0x4);
GUEST_OFFSET(Frame_0030ef70, word_8, 0x8);
GUEST_OFFSET(Frame_0030ef70, word_c, 0xc);
GUEST_OFFSET(Frame_0030ef70, word_10, 0x10);
GUEST_OFFSET(Frame_0030ef70, word_14, 0x14);
GUEST_OFFSET(Frame_0030ef70, word_18, 0x18);
GUEST_OFFSET(Frame_0030ef70, word_1c, 0x1c);
GUEST_SIZE(Frame_0030ef70, 0x20);

u32 f_0030ef70(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_0030ef70> frame;  // the original's stack frame
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r14 = guest::cpu()->r[14];
    u32 r4_2 = 0;
    u32 r5_3 = 0;
    u32 r6_2 = 0;
    u32 r7_2 = 0;
    u32 tpc_2 = 0;
    gptr<Local_0030ef70_ea_1> ea_1 = gptr<Local_0030ef70_ea_1>(frame.at(0).addr());
    ea_1->word_0 = r0;
    ea_1->word_4 = r1;
    ea_1->word_8 = r2;
    ea_1->word_c = r4;
    ea_1->word_10 = r5;
    ea_1->word_14 = r6;
    ea_1->word_18 = r7;
    ea_1->word_1c = r14;
    r7 = 0xau;  // (from the original)
    r5 = frame->word_0;
    r6 = 1u;
    r4 = 0u;
L_30ef7a:;
    u32 r0_1 = is_villager_record(r5, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0_1 != 0 && (r6 == 0 || *gptr<u8>(r5 + (0x25u << 8) + 8u) != 6u)) {  // (from the original)
        r4 += 1u;
        r5 += 0x2518u;  // (from the original)
        if (r4 < r7) {
            guest::preempt();
            goto L_30ef7a;
        }
        r4_2 = frame->word_c;
        r5_3 = frame->word_10;
        r6_2 = frame->word_14;
        r7_2 = frame->word_18;
        tpc_2 = frame->word_1c;
        guest::cpu()->r[4] = r4_2;
        guest::cpu()->r[5] = r5_3;
        guest::cpu()->r[6] = r6_2;
        guest::cpu()->r[7] = r7_2;
        return ~0u;
    }
    if (r4 < 0xau) {  // (from the original)
        u32 r0_3 = read_field_u16_0x2c_(frame->word_4, r1, r2, r3);
        entry_34_at(0xa83aecu, r0_3);  // (from the original)
        u32 r0_4 = *gptr<u16>(frame->word_4 + 0x2cu);  // (from the original)
        u32 r0_5 = call_0030bc44(r0_4);
        r1 = guest::cpu()->r[1];
        if (r0_5 != 0) {
            u32 r5_1 = 0x2518u * r4 + frame->word_0;  // (from the original)
            copy_aligned_bytes(r5_1, frame->word_4, 0x2518u);  // (from the original)
            call_0030bc90(frame->word_0, r5_1, r4, frame->word_8);
            u32 r4_1 = frame->word_c;
            u32 r5_2 = frame->word_10;
            u32 r6_1 = frame->word_14;
            u32 r7_1 = frame->word_18;
            u32 tpc_1 = frame->word_1c;
            guest::cpu()->r[4] = r4_1;
            guest::cpu()->r[5] = r5_2;
            guest::cpu()->r[6] = r6_1;
            guest::cpu()->r[7] = r7_1;
            return r4;
        }
    }
    r4_2 = frame->word_c;
    r5_3 = frame->word_10;
    r6_2 = frame->word_14;
    r7_2 = frame->word_18;
    tpc_2 = frame->word_1c;
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[4] = r4_2;
    guest::cpu()->r[5] = r5_3;
    guest::cpu()->r[6] = r6_2;
    guest::cpu()->r[7] = r7_2;
    return ~0u;
}

}  // namespace d_0030ef70
GUEST_EXPORT(0x0030ef71, d_0030ef70::f_0030ef70);

// f_0030eff4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0030eff4 {

struct __attribute__((packed)) Object_0030eff4_0 {
    u8 unknown_0[0x2750];  // (not used here)
    u32 word_2750;
    u32 word_2754;
};
GUEST_OFFSET(Object_0030eff4_0, word_2750, 0x2750);
GUEST_OFFSET(Object_0030eff4_0, word_2754, 0x2754);

struct __attribute__((packed)) Local_0030eff4_r0_1 {
    u8 unknown_0[0xb7];  // (not used here)
    u8 byte_b7;
};
GUEST_OFFSET(Local_0030eff4_r0_1, byte_b7, 0xb7);

struct __attribute__((packed)) Local_0030eff4_r0_10 {
    u8 unknown_0[0xb7];  // (not used here)
    u8 byte_b7;
};
GUEST_OFFSET(Local_0030eff4_r0_10, byte_b7, 0xb7);

struct __attribute__((packed)) Local_0030eff4_r0_2 {
    u8 unknown_0[0xb7];  // (not used here)
    u8 byte_b7;
};
GUEST_OFFSET(Local_0030eff4_r0_2, byte_b7, 0xb7);

struct __attribute__((packed)) Local_0030eff4_r5_1 {
    u32 word_0;
};
GUEST_OFFSET(Local_0030eff4_r5_1, word_0, 0x0);

inline constexpr u32 vtable_script__WordFix_60u_ = 0x0090a1f0u;
inline guest::global<u32, 0x0095362c> global_0095362c;
inline guest::global<u32, 0x0095decc> global_0095decc;
inline constexpr guest::Function<0x002b6d20, u32(u32, u32)> start_or_stop_button_node;
inline constexpr guest::Function<0x002f825c, u32(u32, u32)> clear_aligned;
inline constexpr guest::Function<0x00305784, u32(u32, u32, u32, u32)> call_00305784;
inline constexpr guest::Function<0x003083bc, u32(u32, u32, u32)> script__construct_word_ptr;
inline constexpr guest::Function<0x0030af7c, u32(u32, u32)> call_0030af7c;
inline constexpr guest::Function<0x0030b4a8, u32(u32, u32)> call_0030b4a8;
inline constexpr guest::Function<0x00568630, u32(u32, u32, u32, u32)> notify_objects_of_list;
inline constexpr guest::Function<0x00568984, u32(u32, u32, u32, u32)> notify_list_objects;
inline constexpr guest::Function<0x00568c10, u32(u32, u32)> Layout__virtual_3;
inline constexpr guest::Function<0x005697e0, u32(u32)> Animation__set_value;
inline constexpr guest::Function<0x005e2e50, u32(u32, u32)> call_005e2e50;
inline constexpr guest::Function<0x005e2f94, u32(u32)> call_005e2f94;
inline constexpr guest::Function<0x005ea8dc, u32(u32, u32)> LinkOwner__unlink;
inline constexpr guest::Function<0x005ea8f8, u32(u32, u32, u32, u32)> call_005ea8f8;
inline constexpr guest::Function<0x005ea964, u32(u32, u32, u32, u32)> call_005ea964;
inline constexpr guest::Function<0x005f4bfc, u32(u32)> construct_script_word;
inline constexpr guest::Function<0x0075f780, u32(u32)> call_0075f780;

struct __attribute__((packed)) Frame_0030eff4 {
    u32 word_0;
    u8 unknown_4[0x4];  // (not read or written by name)
    u32 word_8;
    u8 unknown_c[0x90];  // (not read or written by name)
};
GUEST_OFFSET(Frame_0030eff4, word_0, 0x0);
GUEST_OFFSET(Frame_0030eff4, word_8, 0x8);
GUEST_SIZE(Frame_0030eff4, 0x9c);

void script__WordFix_60u___WordFix_0030eff4(gptr<Object_0030eff4_0> arg0, u32 r1_unused, u32 r2, u32 r3, float S0) {
    guest::StackFrameOf<Frame_0030eff4> frame;  // the original's stack frame
    u32 r0 = arg0.addr();
    u32 res_1 = 0;
    u32 r3_12 = 0;
    u32 r4 = r0;
    call_00305784(r0, 1u, r2, r3);
    u32 r7 = 0u;
    gptr<Local_0030eff4_r0_1> r0_1 = gptr<Local_0030eff4_r0_1>(arg0->word_2754);
    r0_1->byte_b7 = u8(u32(r0_1->byte_b7) & 0xfeu | 1u);  // (from the original)
    gptr<Local_0030eff4_r0_2> r0_2 = gptr<Local_0030eff4_r0_2>(arg0->word_2750);
    u32 r1_1 = u32(r0_2->byte_b7) & 0xfeu;  // (from the original)
    r0_2->byte_b7 = u8(r1_1);
    Layout__virtual_3(r4 + 0x4d0u, r1_1);  // (from the original)
    u32 r0_5 = call_0075f780(*global_0095362c + 0x28ecu);  // (from the original)
    if (r0_5 == 0) {
        call_0030af7c(r4, 1u);
    } else {
        call_0030af7c(r4, 0u);
    }
    call_0030b4a8(r4, 1u);
    if (*gptr<u8>(r4 + 0x925u) == 1u) {  // (from the original)
        gptr<Local_0030eff4_r5_1> r5_1 = gptr<Local_0030eff4_r5_1>(r4 + 0x2760u);  // (from the original)
        u32 r1_3 = r4 + 0x458u;  // (from the original)
        notify_objects_of_list(r4 + 0x294u, r1_3, r5_1->word_0, 0u);  // (from the original)
        float S0_6 = 0.0f;
        guest::cpu()->s[0] = S0_6;
        Animation__set_value(r1_3);
        *gptr<u8>(r4 + 0x925u) = u8(r7);  // (from the original)
        Layout__virtual_3(r4 + 0x294u, guest::cpu()->r[1]);  // (from the original)
        notify_list_objects(r4 + 0x294u, r1_3, r5_1->word_0, 0u);  // (from the original)
    }
    start_or_stop_button_node(r4 + 0x92cu, 1u);  // (from the original)
    *gptr<u8>(r4 + 0xa05u) = u8(r7);  // (from the original)
    gptr<Local_0030eff4_r0_10> r0_10 = gptr<Local_0030eff4_r0_10>(*gptr<u32>(r4 + 0x2240u));  // (from the original)
    r0_10->byte_b7 = u8(u32(r0_10->byte_b7) & 0xfeu);  // (from the original)
    u32 r0_11 = frame.at(8).addr();
    script__construct_word_ptr(r0_11, frame.at(0x20).addr(), 0x3cu);  // (from the original)
    u32 r6 = vtable_script__WordFix_60u_;
    *gptr<u32>(r0_11) = r6;
    u32 r0_12 = r0_11 + 0xcu;  // (from the original)
    construct_script_word(r0_12);
    clear_aligned(r0_12 + 0xcu, 0x78u);  // (from the original)
    S0 = guest::cpu()->s[0];
    r2 = 0x8906ecu;  // (from the original)
    r0 = (r0_12 - 0xcu) + 0x16u;  // (from the original)
    u32 r1 = 0x1eu;  // (from the original)
    do {
        res_1 = r1 - 1u;
        r1 = res_1;
        u32 r3_11 = *gptr<u16>(r2);
        *gptr<u16>(r0 + 2u) = u16(r3_11);
        r3_12 = *gptr<u16>(r2);
        u32 ea_2 = r0 + 4u;
        *gptr<u16>(ea_2) = u16(r3_12);
        r0 = ea_2;
        guest::preempt();
    } while (res_1 != 0);
    u32 r0_14 = *global_0095decc;
    guest::cpu()->s[0] = S0;
    call_005ea8f8(r0_14, 0u, r2, r3_12);
    frame->word_0 = r7;
    call_005ea964(*global_0095decc, frame.at(8).addr(), 0x30f1f8u, 0x17du);  // (from the original)
    LinkOwner__unlink(*global_0095decc, 0u);
    u32 r0_17 = r4 + 0x34f0u;  // (from the original)
    call_005e2e50(r0_17, frame.at(8).addr());
    call_005e2f94(r0_17);
    frame->word_8 = r6;
}

}  // namespace d_0030eff4
GUEST_EXPORT_FRAMED(0x0030eff4, d_0030eff4::script__WordFix_60u___WordFix_0030eff4, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_0030f48c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0030f48c {

struct __attribute__((packed)) Object_0030f48c_0 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Object_0030f48c_0, word_4, 0x4);
GUEST_OFFSET(Object_0030f48c_0, word_8, 0x8);

struct __attribute__((packed)) Local_0030f48c_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Local_0030f48c_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_0030f48c_ea_1, word_4, 0x4);
GUEST_OFFSET(Local_0030f48c_ea_1, word_8, 0x8);
GUEST_OFFSET(Local_0030f48c_ea_1, word_c, 0xc);

struct __attribute__((packed)) Local_0030f48c_ea_2 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Local_0030f48c_ea_2, word_0, 0x0);
GUEST_OFFSET(Local_0030f48c_ea_2, word_4, 0x4);
GUEST_OFFSET(Local_0030f48c_ea_2, word_8, 0x8);
GUEST_OFFSET(Local_0030f48c_ea_2, word_c, 0xc);

struct __attribute__((packed)) Local_0030f48c_ea_3 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_0030f48c_ea_3, word_0, 0x0);
GUEST_OFFSET(Local_0030f48c_ea_3, word_4, 0x4);
GUEST_OFFSET(Local_0030f48c_ea_3, word_8, 0x8);

inline constexpr guest::Function<0x00100e5d, u32(u32, u32, u32, u32)> vsnprintf;

struct __attribute__((packed)) Frame_0030f48c {
    u8 unknown_0[0xc];  // (not read or written by name)
    u32 word_c;
    u8 unknown_10[0x4];  // (not read or written by name)
    u32 word_14;
    u8 unknown_18[0x8];  // (not read or written by name)
};
GUEST_OFFSET(Frame_0030f48c, word_c, 0xc);
GUEST_OFFSET(Frame_0030f48c, word_14, 0x14);
GUEST_SIZE(Frame_0030f48c, 0x20);

u32 format_string(gptr<Object_0030f48c_0> arg0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_0030f48c> frame;  // the original's stack frame
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r14 = guest::cpu()->r[14];
    gptr<Local_0030f48c_ea_1> ea_1 = gptr<Local_0030f48c_ea_1>(frame.at(0x10).addr());  // (from the original)
    ea_1->word_0 = arg0.addr();
    ea_1->word_4 = r1;
    ea_1->word_8 = r2;
    ea_1->word_c = r3;
    gptr<Local_0030f48c_ea_2> ea_2 = gptr<Local_0030f48c_ea_2>(frame.at(0).addr());
    ea_2->word_0 = r4;
    ea_2->word_4 = r5;
    ea_2->word_8 = r6;
    ea_2->word_c = r14;
    u32 r5_1 = arg0->word_4;
    u32 r2_1 = frame->word_14;
    u32 r4_1 = arg0->word_8;
    u32 r0_1 = vsnprintf(r5_1, r4_1, r2_1, frame.at(0x18).addr());  // (from the original)
    if (s32(r0_1) >= 0) {
        if (!(s32(r0_1) < s32(r4_1))) {
            r0_1 = r4_1 - 1u;
            *gptr<u8>(r5_1 + r4_1 - 1u) = 0;
        }
    } else {
        r0_1 = r4_1 - 1u;
        *gptr<u8>(r5_1 + r4_1 - 1u) = 0;
    }
    gptr<Local_0030f48c_ea_3> ea_3 = gptr<Local_0030f48c_ea_3>(frame.at(0).addr());
    u32 r4_2 = ea_3->word_0;
    u32 r5_2 = ea_3->word_4;
    u32 r6_1 = ea_3->word_8;
    u32 v_1 = frame->word_c;
    guest::cpu()->r[1] = 0u;
    guest::cpu()->r[4] = r4_2;
    guest::cpu()->r[5] = r5_2;
    guest::cpu()->r[6] = r6_1;
    return r0_1;
}

}  // namespace d_0030f48c
GUEST_EXPORT(0x0030f48c, d_0030f48c::format_string);

// f_0030fc18: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0030fc18 {

struct __attribute__((packed)) Object_0030fc18_0 {
    u8 unknown_0[0x55d4];  // (not used here)
    u8 byte_55d4;
    u8 byte_55d5;
    u8 unknown_55d6[0x12f];  // (not used here)
    u8 byte_5705;
};
GUEST_OFFSET(Object_0030fc18_0, byte_55d4, 0x55d4);
GUEST_OFFSET(Object_0030fc18_0, byte_55d5, 0x55d5);
GUEST_OFFSET(Object_0030fc18_0, byte_5705, 0x5705);

struct __attribute__((packed)) Object_0030fc18_1 {
    u32 word_0;
    u8 byte_4;
    u8 byte_5;
};
GUEST_OFFSET(Object_0030fc18_1, word_0, 0x0);
GUEST_OFFSET(Object_0030fc18_1, byte_4, 0x4);
GUEST_OFFSET(Object_0030fc18_1, byte_5, 0x5);

struct __attribute__((packed)) Local_0030fc18_r5_1 {
    u8 byte_0;
    u8 byte_1;
};
GUEST_OFFSET(Local_0030fc18_r5_1, byte_0, 0x0);
GUEST_OFFSET(Local_0030fc18_r5_1, byte_1, 0x1);

inline constexpr guest::Function<0x00301da8, u32(u32, u32, u32, u32)> call_00301da8;

u32 player_check_30fc18(gptr<Object_0030fc18_0> arg0, gptr<Object_0030fc18_1> arg1, u32 r2) {
    u32 r0 = arg0.addr();
    u32 r1 = arg1.addr();
    r1 = u32(arg0->byte_5705) << 0x1c;  // (from the original)
    if (s32(r1) < 0) {
        gptr<Local_0030fc18_r5_1> r5_1 = gptr<Local_0030fc18_r5_1>(r0 + 0x55d4u);  // (from the original)
        if (arg0->byte_55d5 == 0x1du && arg0->byte_55d4 == 2u) {  // (from the original)
            u32 r0_2 = call_00301da8(arg1->word_0, r1, r2, guest::cpu()->r[3]);
            r1 = guest::cpu()->r[1];
            if (r0_2 == 0) {
                goto L_30fc80;
            }
        }
        r1 = arg1->byte_5;
        if (r5_1->byte_0 != arg1->byte_4 || r5_1->byte_1 != r1) {
            guest::cpu()->r[1] = r1;
            return 0u;
        }
        guest::cpu()->r[1] = r1;
        return 1u;
L_30fc80:;
        if (arg1->byte_5 == 0x1cu && arg1->byte_4 == 2u) {  // (from the original)
            guest::cpu()->r[1] = r1;
            return 1u;
        }
    }
    guest::cpu()->r[1] = r1;
    return 0u;
}

}  // namespace d_0030fc18
GUEST_EXPORT_FRAMED(0x0030fc18, d_0030fc18::player_check_30fc18, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0030feb4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0030feb4 {

inline constexpr guest::Function<0x005bdb34, u32(u32, u32, u32, u32)> limit_index_88f364;

void f_0030feb4(u32 r0, u32 r1) {
    u32 r0_4 = 0;
    u32 r6 = r0;
    u32 r4 = 0u;
    u32 r5 = 0xa82b90u;  // (from the original)
    u32 r7 = 0x21u;  // (from the original)
    do {
        if (r4 < 0xau) {  // (from the original)
            r1 = r4 * 5u;
        }
        u32 r0_1 = r5 + 0xc8u;  // (from the original)
        if (r4 < 0xau) {  // (from the original)
            r0_1 += (r1 << 4);
        }
        u32 r0_2 = *gptr<u8>(r0_1 + 0x24u);  // (from the original)
        if (r6 == 0) {
            if (r0_2 == 0x12u) {  // (from the original)
                goto L_30ff10;
            }
            u32 r0_3 = limit_index_88f364(r0_2, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
            r1 = guest::cpu()->r[1];
            if (r0_3 == 0xbu) {  // (from the original)
                goto L_30ff10;
            }
        }
        if (r4 < 0xau) {  // (from the original)
            r1 = r4 * 5u;
        }
        r0_4 = r5 + 0xc8u;  // (from the original)
        if (r4 < 0xau) {  // (from the original)
            r0_4 += (r1 << 4);
        }
        *gptr<u8>(r0_4 + 0x24u) = u8(r7);  // (from the original)
L_30ff10:;
        r4 += 1u;
        guest::preempt();
    } while (s32(r4) < 0xa);  // (from the original)
}

}  // namespace d_0030feb4
GUEST_EXPORT_FRAMED(0x0030feb4, d_0030feb4::f_0030feb4, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original
