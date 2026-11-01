// Functions decompiled by tools/decomp (docs/decomp.md), each proved equal to the recompiled original (prove-cpp). The
// names are generated (d_<address>::f_<address>, Object_<address>_<argument>, word_<offset>) and still to be chosen.
#include "guest/guest.hpp"
#include "player/slot_object.hpp"
#include "recovered/structs.hpp"

#include <bit>

using guest::gptr;

// f_00660670: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00660670 {

inline guest::global<u32, 0x006606d0> global_006606d0;  // (from the original)
inline guest::global<u32, 0x006606d4> global_006606d4;  // (from the original)
inline guest::global<u32, 0x006606d8> global_006606d8;  // (from the original)
inline guest::global<u32, 0x006606dc> global_006606dc;  // (from the original)
inline guest::global<u32, 0x00886878> global_00886878;  // (from the original)
inline constexpr guest::Function<0x006540d8, u32(u32, u32, u32)> call_006540d8;  // (from the original)

u32 f_00660670(float S0) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 fpsr = guest::cpu()->fpscr;
    float S2_1 = std::bit_cast<float>(*global_006606d4);
    float S3_1 = std::bit_cast<float>(*global_00886878);
    float S1_1 = S3_1 * std::bit_cast<float>(*global_006606d0);
    if (!((fpsr & 0xfffffffu | vfp_cmpf(S1_1, S0)) >> 0x1d & 1)) {  // (from the original)
        float S0_1 = S0 - S1_1;
        S1_1 = S3_1 * std::bit_cast<float>(*global_006606d8) - S1_1;
        S2_1 = S0_1 / S1_1;
    }
    float S0_2 = std::bit_cast<float>(vcvt_sz_f(S2_1 * std::bit_cast<float>(*global_006606dc)));
    *frame.at<u16>(0) = u16(std::bit_cast<u32>(S0_2));
    u32 r1_1 = *frame.at<u32>(0);
    guest::cpu()->s[0] = S0_2;
    guest::cpu()->s[1] = S1_1;
    frame.release();
    return call_006540d8(guest::cpu()->r[0], r1_1, 0xf0u);  // (from the original)
}

}  // namespace d_00660670
GUEST_EXPORT(0x00660670, d_00660670::f_00660670);

// f_00660768: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00660768 {

struct __attribute__((packed)) Object_00660768_0 {
    u8 unknown_0[0x171];  // (not used here)
    u8 byte_171;
};
GUEST_OFFSET(Object_00660768_0, byte_171, 0x171);  // (from the original)

inline constexpr guest::Function<0x002fb378, u32(u32, u32)> call_002fb378;  // (from the original)
inline constexpr guest::Function<0x002fd068, u32(u32, u32, u32, u32)> call_002fd068;  // (from the original)
inline constexpr guest::Function<0x00309bd4, u32(u32, u32)> call_00309bd4;  // (from the original)
inline constexpr guest::Function<0x006b80cc, u32(u32, u32)> call_006b80cc;  // (from the original)

void f_00660768(gptr<Object_00660768_0> arg0, u32 r1) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 r0_1 = u32(arg0->byte_171) >> 5u & 1u;
    if (r0_1 == 0) {
        return;
    }
    u32 r0_2 = call_002fd068(r0_1, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_3 = call_002fb378(r0_2, guest::cpu()->r[1]);
    u32 r0_4 = call_00309bd4(9u, r0_3);
    if (r0_4 == 0) {
        return;
    }
    frame.release();
    call_006b80cc(r0_2, 1u);
    return;
}

}  // namespace d_00660768
GUEST_EXPORT(0x00660768, d_00660768::f_00660768);

// f_00660808: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00660808 {

struct __attribute__((packed)) Local_00660808_r0_5 {
    u8 byte_0;
};
GUEST_OFFSET(Local_00660808_r0_5, byte_0, 0x0);  // (from the original)

struct __attribute__((packed)) Local_00660808_r0_7 {
    u8 byte_0;
};
GUEST_OFFSET(Local_00660808_r0_7, byte_0, 0x0);  // (from the original)

inline guest::global<u8, 0x00aae114> global_00aae114;  // (from the original)
inline guest::global<u8, 0x00aae735> global_00aae735;  // (from the original)
inline constexpr guest::Function<0x003171b4, u32(u32, u32, u32, u32)> call_003171b4;  // (from the original)
inline constexpr guest::Function<0x00599544, u32(u32, u32, u32, u32)> call_00599544;  // (from the original)
inline constexpr guest::Function<0x006a6dbc, u32(u32, u32, u32, u32)> call_006a6dbc;  // (from the original)

void f_00660808(u32 r0, u32 r1, u32 r2_unused, u32 r3) {
    guest::StackFrame frame(0x18);  // the original's stack frame
    call_003171b4(frame.at(0).addr(), frame.at(4).addr(), r0, r3);
    u32 r4_1 = *frame.at<u32>(0);
    u32 r5_1 = *frame.at<u32>(4);
    call_006a6dbc(frame.at(8).addr(), r4_1, r5_1, guest::cpu()->r[3]);
    call_00599544(frame.at(8).addr(), guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r1_3 = guest::cpu()->r[1];
    if (r1 != 0) {
        r1_3 = 1u;
        if (r4_1 < 0x70u && r5_1 < 0x70u) {  // (from the original)
            u32 r0_4 = r4_1 + ((r5_1 << 3) - r5_1 << 4);
            if (r0_4 < 0x3100u) {  // (from the original)
                gptr<Local_00660808_r0_5> r0_5 = gptr<Local_00660808_r0_5>(0xaadaf4u + (r0_4 >> 3));  // (from the original)
                r0_5->byte_0 = u8(u32(r0_5->byte_0) | lsl_r(r1_3, (r0_4 & 7u) & 0xff));  // (from the original)
                *global_00aae114 = u8(r1_3);
            }
        }
        if (r4_1 < 0x70u && r5_1 < 0x70u) {  // (from the original)
            u32 r0_6 = r4_1 + ((r5_1 << 3) - r5_1 << 4);
            if (r0_6 < 0x3100u) {  // (from the original)
                gptr<Local_00660808_r0_7> r0_7 = gptr<Local_00660808_r0_7>(0xaae115u + (r0_6 >> 3));  // (from the original)
                r0_7->byte_0 = u8(u32(r0_7->byte_0) | lsl_r(r1_3, (r0_6 & 7u) & 0xff));  // (from the original)
                *global_00aae735 = u8(r1_3);
            }
        }
    }
    guest::cpu()->r[1] = r1_3;
}

}  // namespace d_00660808
GUEST_EXPORT_FRAMED(0x00660808, d_00660808::f_00660808, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_006608d8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006608d8 {

struct __attribute__((packed)) Local_006608d8_r0_4 {
    u8 byte_0;
};
GUEST_OFFSET(Local_006608d8_r0_4, byte_0, 0x0);  // (from the original)

struct __attribute__((packed)) Local_006608d8_r6_1 {
    u8 byte_0;
};
GUEST_OFFSET(Local_006608d8_r6_1, byte_0, 0x0);  // (from the original)

inline guest::global<u8, 0x00aae114> global_00aae114;  // (from the original)
inline guest::global<u8, 0x00aae735> global_00aae735;  // (from the original)
inline constexpr guest::Function<0x00599544, u32(u32, u32, u32, u32)> call_00599544;  // (from the original)
inline constexpr guest::Function<0x006a6dbc, u32(u32, u32, u32, u32)> call_006a6dbc;  // (from the original)

void f_006608d8(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    call_006a6dbc(frame.at(0).addr(), r0, r1, r3);
    call_00599544(frame.at(0).addr(), guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r2 != 0) {
        u32 r0_3 = r0 + ((r1 << 3) - r1 << 4);
        u32 r2_2 = r0_3 >> 3;
        u32 r12_1 = r0_3 & 7u;
        if (r0 < 0x70u && r1 < 0x70u && r0_3 < 0x3100u) {  // (from the original)
            gptr<Local_006608d8_r6_1> r6_1 = gptr<Local_006608d8_r6_1>(r2_2 + 0xaadaf4u);  // (from the original)
            r6_1->byte_0 = u8(u32(r6_1->byte_0) | lsl_r(1u, r12_1 & 0xff));  // (from the original)
            *global_00aae114 = 1;
        }
        if (r0 < 0x70u && r1 < 0x70u && r0_3 < 0x3100u) {  // (from the original)
            gptr<Local_006608d8_r0_4> r0_4 = gptr<Local_006608d8_r0_4>(r2_2 + 0xaae115u);  // (from the original)
            r0_4->byte_0 = u8(u32(r0_4->byte_0) | lsl_r(1u, r12_1 & 0xff));  // (from the original)
            *global_00aae735 = 1;
        }
    }
}

}  // namespace d_006608d8
GUEST_EXPORT_FRAMED(0x006608d8, d_006608d8::f_006608d8, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_00660990: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00660990 {

struct __attribute__((packed)) Object_00660990_0 {
    u8 unknown_0[0x171];  // (not used here)
    u8 byte_171;
};
GUEST_OFFSET(Object_00660990_0, byte_171, 0x171);  // (from the original)

inline constexpr guest::Function<0x0058a5d8, u32(u32, u32)> call_0058a5d8;  // (from the original)
inline constexpr guest::Function<0x0058c19c, u32(u32)> call_0058c19c;  // (from the original)

void f_00660990(gptr<Object_00660990_0> arg0, u32 r1) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 r0_1 = u32(arg0->byte_171) >> 5u & 1u;
    if (r0_1 == 0) {
        return;
    }
    u32 r0_2 = call_0058c19c(r0_1);
    frame.release();
    call_0058a5d8(r0_2, r1);
    return;
}

}  // namespace d_00660990
GUEST_EXPORT(0x00660990, d_00660990::f_00660990);

// f_006609bc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006609bc {

struct __attribute__((packed)) Local_006609bc_r4_1 {
    u8 unknown_0[0x7];  // (not used here)
    u8 byte_7;
};
GUEST_OFFSET(Local_006609bc_r4_1, byte_7, 0x7);  // (from the original)

inline constexpr guest::Function<0x0068f114, u32(u32, u32, u32, u32)> call_0068f114;  // (from the original)

u32 f_006609bc(gptr<SlotObject> arg0) {
    gptr<Local_006609bc_r4_1> r4_1 = gptr<Local_006609bc_r4_1>(arg0.addr() + 0x171u);  // (from the original)
    u32 r0_1 = u32(arg0->flags_171) >> 5u & 1u;
    if (r0_1 == 0) {
        return r0_1;
    }
    call_0068f114(r0_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_2 = u32(r4_1->byte_7) | 0x80u;  // (from the original)
    r4_1->byte_7 = u8(r0_2);
    return r0_2;
}

}  // namespace d_006609bc
GUEST_EXPORT_FRAMED(0x006609bc, d_006609bc::f_006609bc, 0x4010);  // pushes {r4, lr} first, as the original

// f_006609ec: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006609ec {

struct __attribute__((packed)) Object_006609ec_0 {
    u8 unknown_0[0x171];  // (not used here)
    u8 byte_171;
};
GUEST_OFFSET(Object_006609ec_0, byte_171, 0x171);  // (from the original)

struct __attribute__((packed)) Local_006609ec_r4_1 {
    u8 unknown_0[0x7];  // (not used here)
    u8 byte_7;
};
GUEST_OFFSET(Local_006609ec_r4_1, byte_7, 0x7);  // (from the original)

inline constexpr guest::Function<0x0068f130, u32(u32)> call_0068f130;  // (from the original)

void f_006609ec(gptr<Object_006609ec_0> arg0) {
    gptr<Local_006609ec_r4_1> r4_1 = gptr<Local_006609ec_r4_1>(arg0.addr() + 0x171u);  // (from the original)
    if ((u32(arg0->byte_171) >> 5u & 1u) == 0) {
        return;
    }
    call_0068f130(arg0.addr());
    r4_1->byte_7 = u8(u32(r4_1->byte_7) | 0x80u);  // (from the original)
}

}  // namespace d_006609ec
GUEST_EXPORT_FRAMED(0x006609ec, d_006609ec::f_006609ec, 0x4010);  // pushes {r4, lr} first, as the original

// f_00660a1c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00660a1c {

struct __attribute__((packed)) Object_00660a1c_0 {
    u8 unknown_0[0x171];  // (not used here)
    u8 byte_171;
};
GUEST_OFFSET(Object_00660a1c_0, byte_171, 0x171);  // (from the original)

struct __attribute__((packed)) Local_00660a1c_r4_1 {
    u8 unknown_0[0x7];  // (not used here)
    u8 byte_7;
};
GUEST_OFFSET(Local_00660a1c_r4_1, byte_7, 0x7);  // (from the original)

inline constexpr guest::Function<0x0068f168, u32(u32)> call_0068f168;  // (from the original)

void f_00660a1c(gptr<Object_00660a1c_0> arg0) {
    gptr<Local_00660a1c_r4_1> r4_1 = gptr<Local_00660a1c_r4_1>(arg0.addr() + 0x171u);  // (from the original)
    if ((u32(arg0->byte_171) >> 5u & 1u) == 0) {
        return;
    }
    call_0068f168(arg0.addr());
    r4_1->byte_7 = u8(u32(r4_1->byte_7) | 0x80u);  // (from the original)
}

}  // namespace d_00660a1c
GUEST_EXPORT_FRAMED(0x00660a1c, d_00660a1c::f_00660a1c, 0x4010);  // pushes {r4, lr} first, as the original

// f_00660c10: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00660c10 {

struct __attribute__((packed)) Local_00660c10_ea_1 {
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
};
GUEST_OFFSET(Local_00660c10_ea_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_00660c10_ea_1, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_00660c10_ea_1, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Local_00660c10_ea_1, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Local_00660c10_ea_1, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Local_00660c10_ea_1, word_14, 0x14);  // (from the original)
GUEST_OFFSET(Local_00660c10_ea_1, word_18, 0x18);  // (from the original)
GUEST_OFFSET(Local_00660c10_ea_1, word_1c, 0x1c);  // (from the original)
GUEST_OFFSET(Local_00660c10_ea_1, word_20, 0x20);  // (from the original)
GUEST_OFFSET(Local_00660c10_ea_1, word_24, 0x24);  // (from the original)
GUEST_OFFSET(Local_00660c10_ea_1, word_28, 0x28);  // (from the original)
GUEST_OFFSET(Local_00660c10_ea_1, word_2c, 0x2c);  // (from the original)
GUEST_OFFSET(Local_00660c10_ea_1, word_30, 0x30);  // (from the original)
GUEST_OFFSET(Local_00660c10_ea_1, word_34, 0x34);  // (from the original)

struct __attribute__((packed)) Local_00660c10_ea_2 {
    u8 byte_0;
    u8 byte_1;
    u32 word_2;
    u8 unknown_6[0x8];  // (not used here)
    u8 byte_e;
};
GUEST_OFFSET(Local_00660c10_ea_2, byte_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_00660c10_ea_2, byte_1, 0x1);  // (from the original)
GUEST_OFFSET(Local_00660c10_ea_2, word_2, 0x2);  // (from the original)
GUEST_OFFSET(Local_00660c10_ea_2, byte_e, 0xe);  // (from the original)

struct __attribute__((packed)) Local_00660c10_ea_3 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u32 word_18;
    u32 word_1c;
    u8 unknown_20[0x4];  // (not used here)
    u32 word_24;
};
GUEST_OFFSET(Local_00660c10_ea_3, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_00660c10_ea_3, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_00660c10_ea_3, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Local_00660c10_ea_3, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Local_00660c10_ea_3, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Local_00660c10_ea_3, word_14, 0x14);  // (from the original)
GUEST_OFFSET(Local_00660c10_ea_3, word_18, 0x18);  // (from the original)
GUEST_OFFSET(Local_00660c10_ea_3, word_1c, 0x1c);  // (from the original)
GUEST_OFFSET(Local_00660c10_ea_3, word_24, 0x24);  // (from the original)

struct __attribute__((packed)) Local_00660c10_r1_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Local_00660c10_r1_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_00660c10_r1_1, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_00660c10_r1_1, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Local_00660c10_r1_1, word_c, 0xc);  // (from the original)

inline constexpr guest::Function<0x005d41b8, u32(u32, u32, u32, u32)> call_005d41b8;  // (from the original)
inline constexpr guest::Function<0x0064d0b8, u32(u32, u32, u32, u32)> call_0064d0b8;  // (from the original)
inline constexpr guest::Function<0x00656c20, u32(u32, u32, u32, u32)> call_00656c20;  // (from the original)

void f_00660c10(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x38);  // the original's stack frame
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r10 = guest::cpu()->r[10];
    u32 r11 = guest::cpu()->r[11];
    u32 r12 = guest::cpu()->r[12];
    u32 r14 = guest::cpu()->r[14];
    gptr<Local_00660c10_ea_1> ea_1 = gptr<Local_00660c10_ea_1>(frame.at(0).addr());
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
    ea_1->word_30 = r12;
    ea_1->word_34 = r14;
    gptr<Local_00660c10_r1_1> r1_1 = gptr<Local_00660c10_r1_1>(frame.at(0x38).addr());  // (from the original)
    u32 r4_1 = r1_1->word_0;
    u32 r5_1 = r1_1->word_4;
    u32 r6_1 = r1_1->word_8;
    u32 r7_1 = r1_1->word_c;
    u32 r0_2 = call_00656c20(*frame.at<u32>(0), r1_1.addr(), r2, r3);
    gptr<Local_00660c10_ea_2> ea_2 = gptr<Local_00660c10_ea_2>(r0_2 + 0xeu);  // (from the original)
    ea_2->byte_0 = u8(r1);
    ea_2->byte_1 = u8(r2);
    ea_2->word_2 = *gptr<u32>(r4_1);
    ea_2->byte_e = u8((((u32(ea_2->byte_e) & ~8u | r7_1 << 3) & ~1u | r3) & ~2u | r5_1 << 1) & ~4u | r6_1 << 2);
    call_005d41b8(ea_2.addr() + 6u, 0xae5658u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_4 = *frame.at<u32>(0);
    gptr<Local_00660c10_ea_3> ea_3 = gptr<Local_00660c10_ea_3>(frame.at(0x10).addr());  // (from the original)
    u32 r4_2 = ea_3->word_0;
    u32 r5_2 = ea_3->word_4;
    u32 r6_2 = ea_3->word_8;
    u32 r7_2 = ea_3->word_c;
    u32 r8_1 = ea_3->word_10;
    u32 r9_1 = ea_3->word_14;
    u32 r10_1 = ea_3->word_18;
    u32 r11_1 = ea_3->word_1c;
    r14 = ea_3->word_24;
    guest::cpu()->r[4] = r4_2;
    guest::cpu()->r[5] = r5_2;
    guest::cpu()->r[6] = r6_2;
    guest::cpu()->r[7] = r7_2;
    guest::cpu()->r[8] = r8_1;
    guest::cpu()->r[9] = r9_1;
    guest::cpu()->r[10] = r10_1;
    guest::cpu()->r[11] = r11_1;
    frame.release();
    call_0064d0b8(r0_4, 0x58u, r0_2, 0u);
    return;  // (from the original)
}

}  // namespace d_00660c10
GUEST_EXPORT(0x00660c10, d_00660c10::f_00660c10);

// f_00660d14: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00660d14 {

struct __attribute__((packed)) Local_00660d14_ea_1 {
    u32 word_0;
    u8 byte_4;
};
GUEST_OFFSET(Local_00660d14_ea_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_00660d14_ea_1, byte_4, 0x4);  // (from the original)

inline constexpr guest::Function<0x0064d0b8, u32(u32, u32, u32, u32)> call_0064d0b8;  // (from the original)
inline constexpr guest::Function<0x00656c20, u32(u32, u32, u32, u32)> call_00656c20;  // (from the original)

u32 f_00660d14(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 r0_1 = call_00656c20(r0, r1, r2, r3);
    u32 r1_1 = *gptr<u32>(r1);
    gptr<Local_00660d14_ea_1> ea_1 = gptr<Local_00660d14_ea_1>(r0_1 + 0xeu);  // (from the original)
    ea_1->word_0 = r1_1;
    ea_1->byte_4 = u8(r2);
    frame.release();
    return call_0064d0b8(r0, 0x38u, r0_1, 0u);  // (from the original)
}

}  // namespace d_00660d14
GUEST_EXPORT(0x00660d14, d_00660d14::f_00660d14);

// f_00660d78: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00660d78 {

struct __attribute__((packed)) Local_00660d78_ea_1 {
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
GUEST_OFFSET(Local_00660d78_ea_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_00660d78_ea_1, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_00660d78_ea_1, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Local_00660d78_ea_1, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Local_00660d78_ea_1, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Local_00660d78_ea_1, word_14, 0x14);  // (from the original)
GUEST_OFFSET(Local_00660d78_ea_1, word_18, 0x18);  // (from the original)
GUEST_OFFSET(Local_00660d78_ea_1, word_1c, 0x1c);  // (from the original)
GUEST_OFFSET(Local_00660d78_ea_1, word_20, 0x20);  // (from the original)
GUEST_OFFSET(Local_00660d78_ea_1, word_24, 0x24);  // (from the original)
GUEST_OFFSET(Local_00660d78_ea_1, word_28, 0x28);  // (from the original)
GUEST_OFFSET(Local_00660d78_ea_1, word_2c, 0x2c);  // (from the original)
GUEST_OFFSET(Local_00660d78_ea_1, word_30, 0x30);  // (from the original)

struct __attribute__((packed)) Local_00660d78_ea_2 {
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
GUEST_OFFSET(Local_00660d78_ea_2, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_00660d78_ea_2, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_00660d78_ea_2, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Local_00660d78_ea_2, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Local_00660d78_ea_2, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Local_00660d78_ea_2, word_14, 0x14);  // (from the original)
GUEST_OFFSET(Local_00660d78_ea_2, word_18, 0x18);  // (from the original)
GUEST_OFFSET(Local_00660d78_ea_2, word_1c, 0x1c);  // (from the original)
GUEST_OFFSET(Local_00660d78_ea_2, word_20, 0x20);  // (from the original)

struct __attribute__((packed)) Local_00660d78_r2_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Local_00660d78_r2_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_00660d78_r2_1, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_00660d78_r2_1, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Local_00660d78_r2_1, word_c, 0xc);  // (from the original)

struct __attribute__((packed)) Local_00660d78_r4_1 {
    u32 word_0;
    u8 byte_4;
    u8 unknown_5[0x2];  // (not used here)
    u8 byte_7;
    u8 byte_8;
};
GUEST_OFFSET(Local_00660d78_r4_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_00660d78_r4_1, byte_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_00660d78_r4_1, byte_7, 0x7);  // (from the original)
GUEST_OFFSET(Local_00660d78_r4_1, byte_8, 0x8);  // (from the original)

inline constexpr guest::Function<0x002fc934, u32(u32, u32, u32, u32)> call_002fc934;  // (from the original)
inline constexpr guest::Function<0x00596ab0, u32(u32, u32, u32, u32)> call_00596ab0;  // (from the original)
inline constexpr guest::Function<0x005d41b8, u32(u32, u32, u32, u32)> call_005d41b8;  // (from the original)
inline constexpr guest::Function<0x0064d0b8, u32(u32, u32, u32, u32)> call_0064d0b8;  // (from the original)
inline constexpr guest::Function<0x00656c20, u32(u32, u32, u32, u32)> call_00656c20;  // (from the original)

u32 f_00660d78(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x38);  // the original's stack frame
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r10 = guest::cpu()->r[10];
    u32 r11 = guest::cpu()->r[11];
    u32 r14 = guest::cpu()->r[14];
    gptr<Local_00660d78_ea_1> ea_1 = gptr<Local_00660d78_ea_1>(frame.at(4).addr());
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
    gptr<Local_00660d78_r2_1> r2_1 = gptr<Local_00660d78_r2_1>(frame.at(0x38).addr());  // (from the original)
    u32 r5_1 = r2_1->word_0;
    u32 r6_1 = r2_1->word_4;
    u32 r7_1 = r2_1->word_8;
    u32 r11_1 = r2_1->word_c;
    u32 r0_2 = call_00656c20(*frame.at<u32>(4), r1, r2_1.addr(), r3);
    gptr<Local_00660d78_r4_1> r4_1 = gptr<Local_00660d78_r4_1>(r0_2 + 0xeu);  // (from the original)
    call_002fc934(frame.at(0).addr(), *frame.at<u32>(8), guest::cpu()->r[2], guest::cpu()->r[3]);
    call_00596ab0(frame.at(0).addr(), guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r4_1->word_0 = *frame.at<u32>(0);
    r4_1->byte_4 = u8(r2);
    *gptr<u8>(r0_2 + 0x13u) = u8(r3);  // (from the original)
    *gptr<u8>(r0_2 + 0x14u) = u8(r5_1);  // (from the original)
    r4_1->byte_7 = u8(r6_1);
    r4_1->byte_8 = u8(r11_1);
    call_005d41b8(r4_1.addr() + 9u, r7_1, guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_7 = call_0064d0b8(*frame.at<u32>(4), 0x3cu, r0_2, 0u);  // (from the original)
    gptr<Local_00660d78_ea_2> ea_2 = gptr<Local_00660d78_ea_2>(frame.at(0x14).addr());  // (from the original)
    u32 r4_2 = ea_2->word_0;
    u32 r5_2 = ea_2->word_4;
    u32 r6_2 = ea_2->word_8;
    u32 r7_2 = ea_2->word_c;
    u32 r8_1 = ea_2->word_10;
    u32 r9_1 = ea_2->word_14;
    u32 r10_1 = ea_2->word_18;
    u32 r11_2 = ea_2->word_1c;
    guest::cpu()->r[4] = r4_2;
    guest::cpu()->r[5] = r5_2;
    guest::cpu()->r[6] = r6_2;
    guest::cpu()->r[7] = r7_2;
    guest::cpu()->r[8] = r8_1;
    guest::cpu()->r[9] = r9_1;
    guest::cpu()->r[10] = r10_1;
    guest::cpu()->r[11] = r11_2;
    return r0_7;
}

}  // namespace d_00660d78
GUEST_EXPORT(0x00660d78, d_00660d78::f_00660d78);

// f_00664a44: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00664a44 {

struct __attribute__((packed)) Local_00664a44_r0_5 {
    u8 unknown_0[0x80];  // (not used here)
    u16 half_80;
    u16 half_82;
};
GUEST_OFFSET(Local_00664a44_r0_5, half_80, 0x80);  // (from the original)
GUEST_OFFSET(Local_00664a44_r0_5, half_82, 0x82);  // (from the original)

struct __attribute__((packed)) Local_00664a44_r5_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_00664a44_r5_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_00664a44_r5_1, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_00664a44_r5_1, word_8, 0x8);  // (from the original)

inline constexpr guest::Function<0x00216420, u32(u32)> call_00216420;  // (from the original)
inline constexpr guest::Function<0x002fc8e8, u32(u32, u32)> call_002fc8e8;  // (from the original)
inline constexpr guest::Function<0x002fcb10, u32(u32, u32)> call_002fcb10;  // (from the original)
inline constexpr guest::Function<0x002fcb34, u32(u32, u32)> call_002fcb34;  // (from the original)
inline constexpr guest::Function<0x002fcb9c, u32(u32, u32)> call_002fcb9c;  // (from the original)
inline constexpr guest::Function<0x00768174, u32(u32, u32)> call_00768174;  // (from the original)

void f_00664a44(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r0_1 = call_002fcb10(r1, r1);
    u32 r1_1 = guest::cpu()->r[1];
    gptr<Local_00664a44_r5_1> r5_1 = gptr<Local_00664a44_r5_1>(r0 + 0x988u);  // (from the original)
    if (r0_1 == 0) {
        u32 r0_2 = call_00768174(r1, r1_1);
        r1_1 = guest::cpu()->r[1];
        if (r0_2 == 0) {
            r5_1->word_0 = *gptr<u32>(r0 + 0x14u);  // (from the original)
            r5_1->word_4 = *gptr<u32>(r0 + 0x18u);  // (from the original)
            r5_1->word_8 = *gptr<u32>(r0 + 0x1cu);  // (from the original)
            return;
        }
    }
    u32 r0_3 = call_002fcb9c(r1, r1_1);
    r1_1 = guest::cpu()->r[1];
    if (r0_3 == 0 && *gptr<u8>(r0 + 0x984u) == 0) {  // (from the original)
        u32 r0_4 = call_002fcb34(r1, r1_1);
        r1_1 = guest::cpu()->r[1];
        if (r0_4 != 0x3eu && r0_4 != 0x3fu) {  // (from the original)
            call_00216420(r1);
            gptr<Local_00664a44_r0_5> r0_5 = gptr<Local_00664a44_r0_5>(r0 + 0x900u);  // (from the original)
            *gptr<u8>(r0 + 0x984u) = 1;  // (from the original)
            r0_5->half_80 = u16(r2);
            r0_5->half_82 = u16(r3);
            call_002fc8e8(r0 + 0x994u, r1);  // (from the original)
            *gptr<u16>(0x5deu + r0) = 0;  // (from the original)
            r5_1->word_0 = *gptr<u32>(r0 + 0x14u);  // (from the original)
            r5_1->word_4 = *gptr<u32>(r0 + 0x18u);  // (from the original)
            r5_1->word_8 = *gptr<u32>(r0 + 0x1cu);  // (from the original)
            guest::cpu()->r[1] = 0u;
            return;
        }
    }
    r5_1->word_0 = *gptr<u32>(r0 + 0x14u);  // (from the original)
    r5_1->word_4 = *gptr<u32>(r0 + 0x18u);  // (from the original)
    r5_1->word_8 = *gptr<u32>(r0 + 0x1cu);  // (from the original)
    guest::cpu()->r[1] = r1_1;
}

}  // namespace d_00664a44
GUEST_EXPORT_FRAMED(0x00664a44, d_00664a44::f_00664a44, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_00664be4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00664be4 {

struct __attribute__((packed)) Object_00664be4_0 {
    u8 unknown_0[0x47c];  // (not used here)
    u32 word_47c;
    u32 word_480;
    u8 unknown_484[0x3ec];  // (not used here)
    u8 byte_870;
    u8 unknown_871[0x3];  // (not used here)
    u32 word_874;
    u32 word_878;
    u32 word_87c;
    u32 word_880;
};
GUEST_OFFSET(Object_00664be4_0, word_47c, 0x47c);  // (from the original)
GUEST_OFFSET(Object_00664be4_0, word_480, 0x480);  // (from the original)
GUEST_OFFSET(Object_00664be4_0, byte_870, 0x870);  // (from the original)
GUEST_OFFSET(Object_00664be4_0, word_874, 0x874);  // (from the original)
GUEST_OFFSET(Object_00664be4_0, word_878, 0x878);  // (from the original)
GUEST_OFFSET(Object_00664be4_0, word_87c, 0x87c);  // (from the original)
GUEST_OFFSET(Object_00664be4_0, word_880, 0x880);  // (from the original)

struct __attribute__((packed)) Object_00664be4_1 {
    u32 word_0;
    u8 unknown_4[0x4];  // (not used here)
    u32 word_8;
};
GUEST_OFFSET(Object_00664be4_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_00664be4_1, word_8, 0x8);  // (from the original)


u32 f_00664be4(gptr<Object_00664be4_0> arg0, gptr<Object_00664be4_1> arg1) {
    arg0->byte_870 = 4;
    arg0->word_874 = arg0->word_47c;
    arg0->word_878 = arg0->word_480;
    arg0->word_87c = arg1->word_0;
    u32 r0_1 = arg1->word_8;
    arg0->word_880 = r0_1;
    return r0_1;
}

}  // namespace d_00664be4
GUEST_EXPORT(0x00664be4, d_00664be4::f_00664be4);

// f_00664e50: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00664e50 {

inline guest::global<u32, 0x00886b60> global_00886b60;  // (from the original)
inline constexpr guest::Function<0x0058a72c, u32(u32, u32)> call_0058a72c;  // (from the original)
inline constexpr guest::Function<0x0058c19c, u32(u32)> call_0058c19c;  // (from the original)

void f_00664e50(gptr<SlotObject> arg0, u32 r1) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 r0_1 = u32(arg0->flags_171) >> 5u & 1u;
    if (r0_1 == 0) {
        return;
    }
    u32 r0_2 = call_0058c19c(r0_1);
    u32 r1_1 = *global_00886b60;
    frame.release();
    call_0058a72c(r0_2, r1_1);
    return;
}

}  // namespace d_00664e50
GUEST_EXPORT(0x00664e50, d_00664e50::f_00664e50);

// f_00664e80: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00664e80 {

struct __attribute__((packed)) Object_00664e80_0 {
    u8 unknown_0[0x171];  // (not used here)
    u8 byte_171;
};
GUEST_OFFSET(Object_00664e80_0, byte_171, 0x171);  // (from the original)

struct __attribute__((packed)) Local_00664e80_r4_1 {
    u8 unknown_0[0x7];  // (not used here)
    u8 byte_7;
};
GUEST_OFFSET(Local_00664e80_r4_1, byte_7, 0x7);  // (from the original)

inline constexpr guest::Function<0x0068f208, u32(u32)> call_0068f208;  // (from the original)

void f_00664e80(gptr<Object_00664e80_0> arg0) {
    gptr<Local_00664e80_r4_1> r4_1 = gptr<Local_00664e80_r4_1>(arg0.addr() + 0x171u);  // (from the original)
    if ((u32(arg0->byte_171) >> 5u & 1u) == 0) {
        return;
    }
    call_0068f208(arg0.addr());
    r4_1->byte_7 = u8(u32(r4_1->byte_7) | 0x80u);  // (from the original)
}

}  // namespace d_00664e80
GUEST_EXPORT_FRAMED(0x00664e80, d_00664e80::f_00664e80, 0x4010);  // pushes {r4, lr} first, as the original

// f_00665130: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00665130 {

inline constexpr guest::Function<0x0064d0b8, u32(u32, u32, u32, u32)> call_0064d0b8;  // (from the original)

void f_00665130() {
    call_0064d0b8(guest::cpu()->r[0], 0x19u, 0u, 0u);
    return;  // (from the original)
}

}  // namespace d_00665130
GUEST_EXPORT(0x00665130, d_00665130::f_00665130);

// f_006651b4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006651b4 {

inline guest::global<u32, 0x00665264> global_00665264;  // (from the original)
inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> call_002f74c8;  // (from the original)
inline constexpr guest::Function<0x002f74e0, u32(u32, u32, u32, u32)> call_002f74e0;  // (from the original)
inline constexpr guest::Function<0x005d41b8, u32(u32, u32, u32, u32)> call_005d41b8;  // (from the original)
inline constexpr guest::Function<0x0064d0b8, u32(u32, u32, u32, u32)> call_0064d0b8;  // (from the original)
inline constexpr guest::Function<0x00656c20, u32(u32, u32, u32, u32)> call_00656c20;  // (from the original)
inline constexpr guest::Function<0x0067c674, u32(u32, u32, u32, u32)> call_0067c674;  // (from the original)
inline constexpr guest::Function<0x00764be4, u32(u32, u32, u32, u32)> call_00764be4;  // (from the original)

u32 f_006651b4(gptr<AcPlayer_rec> arg0, u32 r1, u32 r2, u32 r3, float S0) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 r0_1 = arg0->byte_174;
    if ((r0_1 & 1u) == 0) {
        u32 r0_2 = call_002f74c8(r0_1, r1, r2, r3);
        u32 r2_1 = guest::cpu()->r[2];
        u32 r3_1 = guest::cpu()->r[3];
        u32 r0_3 = call_002f74e0(0x400u, r0_2, r2_1, r3_1);  // (from the original)
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (r0_3 == 0) {
            call_00764be4(frame.at(0).addr(), arg0.addr(), r2, r3);
            u32 r1_1 = guest::cpu()->r[1];
            u32 r2_2 = guest::cpu()->r[2];
            u32 r3_2 = guest::cpu()->r[3];
            *frame.at<u16>(0xc) = 0;  // (from the original)
            u32 r0_5 = call_00656c20(arg0.addr(), r1_1, r2_2, r3_2);
            u32 r2_3 = guest::cpu()->r[2];
            u32 r3_3 = guest::cpu()->r[3];
            call_005d41b8(r0_5 + 0xfu, frame.at(0).addr(), r2_3, r3_3);  // (from the original)
            *gptr<u8>(r0_5 + 0x13u) = u8(u32(s32(u32(*frame.at<u16>(0xc))) >> 8));  // (from the original)
            *gptr<u8>(r0_5 + 0xeu) = u8(r1);  // (from the original)
            u32 r0_7 = call_0064d0b8(arg0.addr(), 0x9du, r0_5, 0u);  // (from the original)
            return r0_7;
        }
    }
    float S0_7 = std::bit_cast<float>(*global_00665264);
    guest::cpu()->s[0] = S0_7;
    u32 r0_8 = call_0067c674(arg0.addr(), 0u, r2, r3);
    return r0_8;
}

}  // namespace d_006651b4
GUEST_EXPORT_FRAMED(0x006651b4, d_006651b4::f_006651b4, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_00665344: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00665344 {

struct __attribute__((packed)) Local_00665344_ea_1 {
    u8 byte_0;
    u8 byte_1;
    u8 byte_2;
};
GUEST_OFFSET(Local_00665344_ea_1, byte_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_00665344_ea_1, byte_1, 0x1);  // (from the original)
GUEST_OFFSET(Local_00665344_ea_1, byte_2, 0x2);  // (from the original)

inline constexpr guest::Function<0x0064d0b8, u32(u32, u32, u32, u32)> call_0064d0b8;  // (from the original)
inline constexpr guest::Function<0x00656c20, u32(u32, u32, u32, u32)> call_00656c20;  // (from the original)

u32 f_00665344(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x18);  // the original's stack frame
    u32 r0_1 = call_00656c20(r0, r1, r2, r3);
    gptr<Local_00665344_ea_1> ea_1 = gptr<Local_00665344_ea_1>(r0_1 + 0xeu);  // (from the original)
    ea_1->byte_0 = u8(r1);
    ea_1->byte_1 = u8(r2);
    ea_1->byte_2 = u8(r3);
    frame.release();
    return call_0064d0b8(r0, 0x5fu, r0_1, 0u);  // (from the original)
}

}  // namespace d_00665344
GUEST_EXPORT(0x00665344, d_00665344::f_00665344);

// f_00665380: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00665380 {

struct __attribute__((packed)) Object_00665380_0 {
    u8 unknown_0[0x1a9];  // (not used here)
    u8 byte_1a9;
};
GUEST_OFFSET(Object_00665380_0, byte_1a9, 0x1a9);  // (from the original)

struct __attribute__((packed)) Local_00665380_ea_1 {
    u8 byte_0;
    u8 byte_1;
    u8 byte_2;
};
GUEST_OFFSET(Local_00665380_ea_1, byte_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_00665380_ea_1, byte_1, 0x1);  // (from the original)
GUEST_OFFSET(Local_00665380_ea_1, byte_2, 0x2);  // (from the original)

inline constexpr guest::Function<0x0064d0b8, u32(u32, u32, u32, u32)> call_0064d0b8;  // (from the original)
inline constexpr guest::Function<0x00656c20, u32(u32, u32, u32, u32)> call_00656c20;  // (from the original)

u32 f_00665380(gptr<Object_00665380_0> arg0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x18);  // the original's stack frame
    if (arg0->byte_1a9 == 0x3bu) {  // (from the original)
    } else {
        u32 r0_1 = call_00656c20(arg0.addr(), r1, r2, r3);
        gptr<Local_00665380_ea_1> ea_1 = gptr<Local_00665380_ea_1>(r0_1 + 0xeu);  // (from the original)
        ea_1->byte_0 = u8(r2);
        ea_1->byte_1 = u8(r3);
        ea_1->byte_2 = u8(r1);
        frame.release();
        return call_0064d0b8(arg0.addr(), 0x3bu, r0_1, 0u);  // (from the original)
    }
    guest::cpu()->r[1] = r1;
    return 1u;
}

}  // namespace d_00665380
GUEST_EXPORT(0x00665380, d_00665380::f_00665380);

// f_006654ac: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006654ac {

struct __attribute__((packed)) Local_006654ac_r4_1 {
    u8 unknown_0[0x5];  // (not used here)
    u8 byte_5;
};
GUEST_OFFSET(Local_006654ac_r4_1, byte_5, 0x5);  // (from the original)

inline constexpr guest::Function<0x005d41b8, u32(u32, u32, u32, u32)> call_005d41b8;  // (from the original)
inline constexpr guest::Function<0x0064d0b8, u32(u32, u32, u32, u32)> call_0064d0b8;  // (from the original)
inline constexpr guest::Function<0x00656c20, u32(u32, u32, u32, u32)> call_00656c20;  // (from the original)

u32 f_006654ac(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x20);  // the original's stack frame
    u32 r0_1 = call_00656c20(r0, r1, r2, r3);
    u32 r2_1 = guest::cpu()->r[2];
    u32 r3_1 = guest::cpu()->r[3];
    gptr<Local_006654ac_r4_1> r4_1 = gptr<Local_006654ac_r4_1>(r0_1 + 0xeu);  // (from the original)
    *gptr<u8>(r0_1 + 0xeu) = u8(r1);  // (from the original)
    u32 r5_1 = r3 >> 8u & 0xffu;  // (from the original)
    if (r2 != 0) {
        call_005d41b8(r4_1.addr() + 1u, r2, r2_1, r3_1);
        r4_1->byte_5 = u8(r5_1);
    } else {
        call_005d41b8(r4_1.addr() + 1u, 0xae5658u, r2_1, r3_1);  // (from the original)
        r4_1->byte_5 = u8(r5_1);
    }
    frame.release();
    return call_0064d0b8(r0, 0x3au, r0_1, 0u);  // (from the original)
}

}  // namespace d_006654ac
GUEST_EXPORT(0x006654ac, d_006654ac::f_006654ac);

// f_00665560: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00665560 {

struct __attribute__((packed)) Object_00665560_0 {
    u8 unknown_0[0x173];  // (not used here)
    u8 byte_173;
};
GUEST_OFFSET(Object_00665560_0, byte_173, 0x173);  // (from the original)

struct __attribute__((packed)) Local_00665560_r0_3 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_00665560_r0_3, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_00665560_r0_3, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_00665560_r0_3, word_8, 0x8);  // (from the original)

struct __attribute__((packed)) Local_00665560_r5_1 {
    u32 word_0;
    u8 unknown_4[0x4];  // (not used here)
    u32 word_8;
};
GUEST_OFFSET(Local_00665560_r5_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_00665560_r5_1, word_8, 0x8);  // (from the original)

inline constexpr guest::Function<0x002073dc, u32(u32, u32, u32, u32)> call_002073dc;  // (from the original)
inline constexpr guest::Function<0x002e62b4, u32(u32, u32, u32, u32)> call_002e62b4;  // (from the original)
inline constexpr guest::Function<0x002e6368, u32(u32, u32, u32, u32)> call_002e6368;  // (from the original)
inline constexpr guest::Function<0x004eb6c4, u32(u32, u32, u32, u32)> call_004eb6c4;  // (from the original)
inline constexpr guest::Function<0x005ce12c, u32(u32, u32, u32, u32)> call_005ce12c;  // (from the original)
inline constexpr guest::Function<0x006c5ef8, u32(u32, u32, u32, u32)> call_006c5ef8;  // (from the original)

void f_00665560(gptr<Object_00665560_0> arg0, u32 r1_unused, u32 r2, u32 r3, float S0, float S1, float S2) {
    guest::StackFrame frame(0x20);  // the original's stack frame
    if ((u32(arg0->byte_173) >> 7) == 0) {
        gptr<Local_00665560_r5_1> r5_1 = gptr<Local_00665560_r5_1>(arg0.addr() + 0x14u);  // (from the original)
        u32 r0_1 = call_005ce12c(r5_1.addr(), 0u, r2, r3);
        u32 r2_1 = guest::cpu()->r[2];
        u32 r3_1 = guest::cpu()->r[3];
        S0 = guest::cpu()->s[0];
        S1 = guest::cpu()->s[1];
        float S2_1 = guest::cpu()->s[2];
        if (r0_1 != 0) {
            u32 r0_2 = *gptr<u32>(arg0.addr() + 0x9c8u);  // (from the original)
            u32 r6_1 = arg0.addr() + 0x9bcu;  // (from the original)
            if (r0_2 != 0) {
                u32 r1_1 = *gptr<u32>(r6_1 + 0x10u);  // (from the original)
                if (r1_1 == *gptr<u32>(r0_2 + 0xcu)) {  // (from the original)
                    call_002e6368(r6_1, r1_1, r2_1, r3_1);
                    r2_1 = guest::cpu()->r[2];
                    r3_1 = guest::cpu()->r[3];
                    S0 = guest::cpu()->s[0];
                    S1 = guest::cpu()->s[1];
                    S2_1 = guest::cpu()->s[2];
                }
            }
            guest::cpu()->s[0] = S0;
            guest::cpu()->s[1] = S1;
            guest::cpu()->s[2] = S2_1;
            call_006c5ef8(r5_1.addr(), 0u, r2_1, r3_1);
            float S0_1 = guest::cpu()->s[0];
            float S2_2 = std::bit_cast<float>(r5_1->word_8);
            float S0_2 = std::bit_cast<float>(r5_1->word_0);
            gptr<Local_00665560_r0_3> r0_3 = gptr<Local_00665560_r0_3>(frame.at(0x10).addr());  // (from the original)
            r0_3->word_0 = std::bit_cast<u32>(S0_2);
            r0_3->word_4 = std::bit_cast<u32>(S0_1);
            r0_3->word_8 = std::bit_cast<u32>(S2_2);
            *frame.at<u32>(8) = 0;
            *frame.at<u32>(4) = 1;
            *frame.at<u32>(0) = 0xae5664;  // (from the original)
            guest::cpu()->s[0] = S0_2;
            guest::cpu()->s[1] = S0_1;
            guest::cpu()->s[2] = S2_2;
            u32 r0_4 = call_002073dc(r6_1, 0x140u, frame.at(0x10).addr(), 0x975beeu);  // (from the original)
            u32 r3_2 = guest::cpu()->r[3];
            float S0_3 = guest::cpu()->s[0];
            float S1_1 = guest::cpu()->s[1];
            float S2_3 = guest::cpu()->s[2];
            if (r0_4 != 0) {
                call_002e62b4(r6_1, 0x683384u, ~0u, r3_2);  // (from the original)
                S0_3 = guest::cpu()->s[0];
                S1_1 = guest::cpu()->s[1];
                S2_3 = guest::cpu()->s[2];
            }
            *frame.at<u32>(8) = 0;
            *frame.at<u32>(4) = 1;
            *frame.at<u32>(0) = 0xae5664;  // (from the original)
            *frame.at<u32>(0xc) = 0;  // (from the original)
            guest::cpu()->s[0] = S0_3;
            guest::cpu()->s[1] = S1_1;
            guest::cpu()->s[2] = S2_3;
            call_004eb6c4(arg0.addr() + 0x9d4u, 9u, frame.at(0x10).addr(), 0x975beeu);  // (from the original)
            S0 = guest::cpu()->s[0];
            S1 = guest::cpu()->s[1];
        }
    }
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
}

}  // namespace d_00665560
GUEST_EXPORT_FRAMED(0x00665560, d_00665560::f_00665560, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_00668740: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00668740 {

struct __attribute__((packed)) Object_00668740_0 {
    u8 unknown_0[0x171];  // (not used here)
    u8 byte_171;
    u8 unknown_172[0xf6];  // (not used here)
    u32 word_268;
    u8 unknown_26c[0x354];  // (not used here)
    u16 half_5c0;
};
GUEST_OFFSET(Object_00668740_0, byte_171, 0x171);  // (from the original)
GUEST_OFFSET(Object_00668740_0, word_268, 0x268);  // (from the original)
GUEST_OFFSET(Object_00668740_0, half_5c0, 0x5c0);  // (from the original)

struct __attribute__((packed)) Local_00668740_r0_2 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_00668740_r0_2, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_00668740_r0_2, word_4, 0x4);  // (from the original)

struct __attribute__((packed)) Local_00668740_r0_3 {
    u16 half_0;
};
GUEST_OFFSET(Local_00668740_r0_3, half_0, 0x0);  // (from the original)

inline guest::global<u32, 0x00668820> global_00668820;  // (from the original)
inline constexpr guest::Function<0x00207740, u32(u32, u32, u32, u32)> call_00207740;  // (from the original)
inline constexpr guest::Function<0x002e5bec, u32(u32, u32, u32, u32)> call_002e5bec;  // (from the original)
inline constexpr guest::Function<0x0064f508, u32(u32, u32, u32, u32)> call_0064f508;  // (from the original)
inline constexpr guest::Function<0x006538e0, u32(u32, u32, u32, u32)> call_006538e0;  // (from the original)
inline constexpr guest::Function<0x0070ab44, u32(u32, u32, u32, u32)> call_0070ab44;  // (from the original)

u32 f_00668740(gptr<Object_00668740_0> arg0, u32 r1_unused, u32 r2, u32 r3, float S0) {
    guest::StackFrame frame(0x38);  // the original's stack frame
    if (arg0->half_5c0 == 0) {
        u32 r2_1 = arg0->word_268;
        call_0070ab44(arg0.addr() + 0x1b4u, frame.at(0).addr(), r2_1, 0u);  // (from the original)
        u32 r2_2 = guest::cpu()->r[2];
        u32 r3_1 = guest::cpu()->r[3];
        float S0_1 = guest::cpu()->s[0];
        gptr<Local_00668740_r0_2> r0_2 = gptr<Local_00668740_r0_2>(arg0.addr() + 0x1430u);  // (from the original)
        u32 r1_2 = r0_2->word_0;
        u32 r12_1 = arg0.addr() + 0x1424u;  // (from the original)
        if (r1_2 != 0 && r0_2->word_4 == *gptr<u32>(r1_2 + 0xcu)) {  // (from the original)
            call_002e5bec(r12_1, frame.at(0).addr(), r2_2, r3_1);
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            S0 = guest::cpu()->s[0];
        } else {
            guest::cpu()->s[0] = S0_1;
            call_00207740(r12_1, 0x12du, frame.at(0).addr(), 0u);  // (from the original)
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            S0 = guest::cpu()->s[0];
        }
    }
    gptr<Local_00668740_r0_3> r0_3 = gptr<Local_00668740_r0_3>(arg0.addr() + 0x5c0u);  // (from the original)
    u32 r1_4 = r0_3->half_0;
    if (r1_4 != 0) {
        r1_4 = r1_4 >= 1u ? r1_4 - 1u : 0u;
        r0_3->half_0 = u16(r1_4);
    }
    u32 r0_4 = u32(arg0->byte_171) >> 5u & 1u;
    if (r0_4 != 0) {
        guest::cpu()->r[1] = r1_4;
        guest::cpu()->s[0] = S0;
        return r0_4;
    }
    guest::cpu()->s[0] = S0;
    call_006538e0(arg0.addr(), 0u, r2, r3);
    u32 r3_2 = guest::cpu()->r[3];
    float S0_2 = std::bit_cast<float>(*global_00668820);
    guest::cpu()->s[0] = S0_2;
    frame.release();
    return call_0064f508(arg0.addr(), 0u, r2, r3_2);
}

}  // namespace d_00668740
GUEST_EXPORT(0x00668740, d_00668740::f_00668740);

// f_00668fc4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00668fc4 {

inline guest::global<u32, 0x00668fec> global_00668fec;  // (from the original)
inline guest::global<u32, 0x00886878> global_00886878;  // (from the original)
inline guest::global<u32, 0x008868ec> global_008868ec;  // (from the original)

u32 f_00668fc4() {
    float S1_1 = std::bit_cast<float>(*global_008868ec);
    float S0_1 = std::bit_cast<float>(*global_00886878) * std::bit_cast<float>(*global_00668fec) * S1_1;
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    return 0x8868ecu;  // (from the original)
}

}  // namespace d_00668fc4
GUEST_EXPORT(0x00668fc4, d_00668fc4::f_00668fc4);

// f_0066a074: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0066a074 {

struct __attribute__((packed)) Object_0066a074_0 {
    u8 unknown_0[0x984];  // (not used here)
    u8 byte_984;
};
GUEST_OFFSET(Object_0066a074_0, byte_984, 0x984);  // (from the original)

struct __attribute__((packed)) Local_0066a074_r0_1 {
    u8 unknown_0[0x80];  // (not used here)
    u16 half_80;
    u16 half_82;
};
GUEST_OFFSET(Local_0066a074_r0_1, half_80, 0x80);  // (from the original)
GUEST_OFFSET(Local_0066a074_r0_1, half_82, 0x82);  // (from the original)

inline guest::global<u32, 0x00ae5658> global_00ae5658;  // (from the original)
inline guest::global<u32, 0x00ae565c> global_00ae565c;  // (from the original)
inline guest::global<u32, 0x00ae5660> global_00ae5660;  // (from the original)
inline constexpr guest::Function<0x00216468, u32(u32)> call_00216468;  // (from the original)
inline constexpr guest::Function<0x002fc8e8, u32(u32, u32)> call_002fc8e8;  // (from the original)

void f_0066a074(gptr<Object_0066a074_0> arg0, u32 r1) {
    if (arg0->byte_984 != 0) {
        call_00216468(arg0.addr());
        gptr<Local_0066a074_r0_1> r0_1 = gptr<Local_0066a074_r0_1>(arg0.addr() + 0x900u);  // (from the original)
        u32 r1_1 = ~0u;
        *gptr<u8>(arg0.addr() + 0x984u) = 0;  // (from the original)
        r0_1->half_80 = u16(r1_1);
        r0_1->half_82 = u16(r1_1);
        call_002fc8e8(arg0.addr() + 0x994u, 0x95bfdcu);  // (from the original)
        *gptr<u16>(0x5deu + arg0.addr()) = 0xf;  // (from the original)
        *gptr<u8>(arg0.addr() + 0x984u) = 0;  // (from the original)
        *gptr<u32>(arg0.addr() + 0x988u) = *global_00ae5658;  // (from the original)
        r1 = *global_00ae565c;
        *gptr<u32>(arg0.addr() + 0x98cu) = r1;  // (from the original)
        *gptr<u32>(arg0.addr() + 0x990u) = *global_00ae5660;  // (from the original)
    }
    guest::cpu()->r[1] = r1;
}

}  // namespace d_0066a074
GUEST_EXPORT_FRAMED(0x0066a074, d_0066a074::f_0066a074, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0066a0f4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0066a0f4 {

struct __attribute__((packed)) Object_0066a0f4_0 {
    u8 unknown_0[0x171];  // (not used here)
    u8 byte_171;
    u8 unknown_172[0x3a];  // (not used here)
    u8 byte_1ac;
};
GUEST_OFFSET(Object_0066a0f4_0, byte_171, 0x171);  // (from the original)
GUEST_OFFSET(Object_0066a0f4_0, byte_1ac, 0x1ac);  // (from the original)

inline constexpr guest::Function<0x0023d99c, u32(u32, u32, u32)> call_0023d99c;  // (from the original)
inline constexpr guest::Function<0x0023e1e0, u32(u32, u32, u32)> call_0023e1e0;  // (from the original)
inline constexpr guest::Function<0x0023e254, u32(u32, u32, u32)> call_0023e254;  // (from the original)
inline constexpr guest::Function<0x0024b448, u32(u32, u32, u32, u32)> call_0024b448;  // (from the original)
inline constexpr guest::Function<0x002fe8a4, u32(u32, u32, u32)> call_002fe8a4;  // (from the original)
inline constexpr guest::Function<0x0064c5e0, u32(u32, u32, u32)> call_0064c5e0;  // (from the original)
inline constexpr guest::Function<0x006f0130, u32(u32, u32, u32, u32)> call_006f0130;  // (from the original)

void f_0066a0f4(gptr<Object_0066a0f4_0> arg0, u32 r1, u32 r2) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 r0_8 = 0;
    u32 r0_9 = 0;
    if ((u32(arg0->byte_171) >> 5u & 1u) == 0 || r1 != 0) {
        guest::cpu()->r[1] = r1;
        return;
    }
    u32 r0_1 = call_006f0130(0xdu, 1u, r2, guest::cpu()->r[3]);  // (from the original)
    u32 r0_2 = call_0064c5e0(r0_1, guest::cpu()->r[1], guest::cpu()->r[2]);
    u32 r1_2 = guest::cpu()->r[1];
    u32 r2_2 = guest::cpu()->r[2];
    if (r0_2 != 0) {
        return;
    }
    u32 r0_3 = arg0->byte_1ac;
    u32 r0_4 = call_002fe8a4(r0_3, r1_2, r2_2);
    u32 r1_3 = guest::cpu()->r[1];
    u32 r2_3 = guest::cpu()->r[2];
    if (r0_4 != 0) {
        u32 r0_5 = call_0023d99c(r0_4, r1_3, r2_3);
        r1_3 = guest::cpu()->r[1];
        r2_3 = guest::cpu()->r[2];
        if (r0_5 != 0) {
            r0_8 = r0_4 + 0x8000u;  // (from the original)
            r0_9 = r0_8 + 0xae0u;  // (from the original)
            frame.release();
            call_0024b448(r0_9, 0x20u, 1u, guest::cpu()->r[3]);
            return;  // (from the original)
        }
    }
    u32 r0_6 = call_0023e254(r0_4, r1_3, r2_3);
    if (r0_6 == 0) {
        u32 r0_7 = call_0023e1e0(r0_4, guest::cpu()->r[1], guest::cpu()->r[2]);
        if (r0_7 == 0) {
            return;
        }
    }
    r0_8 = r0_4 + 0x8000u;  // (from the original)
    r0_9 = r0_8 + 0xae0u;  // (from the original)
    frame.release();
    call_0024b448(r0_9, 0x20u, 1u, guest::cpu()->r[3]);
    return;  // (from the original)
}

}  // namespace d_0066a0f4
GUEST_EXPORT(0x0066a0f4, d_0066a0f4::f_0066a0f4);

// f_0066a1d0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0066a1d0 {

struct __attribute__((packed)) Object_0066a1d0_0 {
    u8 unknown_0[0x171];  // (not used here)
    u8 byte_171;
    u8 unknown_172[0x3a];  // (not used here)
    u8 byte_1ac;
    u8 unknown_1ad[0x2cf];  // (not used here)
    u32 word_47c;
    u32 word_480;
    u8 unknown_484[0x3ec];  // (not used here)
    u8 byte_870;
    u8 unknown_871[0x3];  // (not used here)
    u32 word_874;
    u32 word_878;
    u32 word_87c;
    u32 word_880;
};
GUEST_OFFSET(Object_0066a1d0_0, byte_171, 0x171);  // (from the original)
GUEST_OFFSET(Object_0066a1d0_0, byte_1ac, 0x1ac);  // (from the original)
GUEST_OFFSET(Object_0066a1d0_0, word_47c, 0x47c);  // (from the original)
GUEST_OFFSET(Object_0066a1d0_0, word_480, 0x480);  // (from the original)
GUEST_OFFSET(Object_0066a1d0_0, byte_870, 0x870);  // (from the original)
GUEST_OFFSET(Object_0066a1d0_0, word_874, 0x874);  // (from the original)
GUEST_OFFSET(Object_0066a1d0_0, word_878, 0x878);  // (from the original)
GUEST_OFFSET(Object_0066a1d0_0, word_87c, 0x87c);  // (from the original)
GUEST_OFFSET(Object_0066a1d0_0, word_880, 0x880);  // (from the original)

inline constexpr guest::Function<0x0024b448, u32(u32, u32, u32, u32)> call_0024b448;  // (from the original)
inline constexpr guest::Function<0x002fd068, u32(u32, u32, u32, u32)> call_002fd068;  // (from the original)
inline constexpr guest::Function<0x005c2dfc, u32(u32, u32, u32, u32)> call_005c2dfc;  // (from the original)
inline constexpr guest::Function<0x0064c5e0, u32(u32, u32, u32, u32)> call_0064c5e0;  // (from the original)
inline constexpr guest::Function<0x0065377c, u32(u32, u32, u32, u32)> call_0065377c;  // (from the original)
inline constexpr guest::Function<0x006a5f0c, u32(u32, u32, u32, u32)> call_006a5f0c;  // (from the original)
inline constexpr guest::Function<0x006b7058, u32(u32, u32, u32, u32)> call_006b7058;  // (from the original)
inline constexpr guest::Function<0x0076c564, u32(u32, u32, u32, u32)> call_0076c564;  // (from the original)

void f_0066a1d0(gptr<Object_0066a1d0_0> arg0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0xc);  // the original's stack frame
    arg0->byte_870 = 8;
    arg0->word_874 = arg0->word_47c;
    arg0->word_878 = arg0->word_480;
    call_006a5f0c(frame.at(0).addr(), r1, r2, r3);
    arg0->word_87c = *frame.at<u32>(0);
    u32 r1_1 = *frame.at<u32>(8);
    arg0->word_880 = r1_1;
    if ((u32(arg0->byte_171) >> 5u & 1u) == 0) {
        return;
    }
    u32 r0_2 = call_0076c564(r3, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0_2 == 0) {
        return;
    }
    u32 r0_3 = call_0064c5e0(r0_2, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0_3 != 0) {
        return;
    }
    u32 r0_4 = arg0->byte_1ac;
    u32 r0_5 = call_005c2dfc(r0_4, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r1_4 = guest::cpu()->r[1];
    u32 r2_4 = guest::cpu()->r[2];
    u32 r3_4 = guest::cpu()->r[3];
    if (r0_5 != 0) {
        u32 r0_6 = arg0->byte_1ac;
        r0_5 = call_0065377c(r0_6, r1_4, r2_4, r3_4);
        r1_4 = guest::cpu()->r[1];
        r2_4 = guest::cpu()->r[2];
        r3_4 = guest::cpu()->r[3];
        if (r0_5 != 0) {
            r0_5 = call_0024b448(r0_5, 3u, 1u, r3_4);
            r1_4 = guest::cpu()->r[1];
            r2_4 = guest::cpu()->r[2];
            r3_4 = guest::cpu()->r[3];
        }
    }
    u32 r0_7 = call_002fd068(r0_5, r1_4, r2_4, r3_4);
    call_006b7058(r0_7, 1u, guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0066a1d0
GUEST_EXPORT_FRAMED(0x0066a1d0, d_0066a1d0::f_0066a1d0, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_0066a2c8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0066a2c8 {

struct __attribute__((packed)) Local_0066a2c8_r0_3 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_0066a2c8_r0_3, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_0066a2c8_r0_3, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_0066a2c8_r0_3, word_8, 0x8);  // (from the original)

struct __attribute__((packed)) Local_0066a2c8_r4_1 {
    u32 word_0;
    u8 unknown_4[0x4];  // (not used here)
    u32 word_8;
};
GUEST_OFFSET(Local_0066a2c8_r4_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_0066a2c8_r4_1, word_8, 0x8);  // (from the original)

inline constexpr guest::Function<0x004ee4c0, u32(u32, u32)> call_004ee4c0;  // (from the original)
inline constexpr guest::Function<0x0052e294, u32(u32, u32, u32)> call_0052e294;  // (from the original)
inline constexpr guest::Function<0x006c5ef8, u32(u32, u32, u32)> call_006c5ef8;  // (from the original)
inline constexpr guest::Function<0x00745970, u32(u32, u32, u32, u32)> call_00745970;  // (from the original)

void f_0066a2c8(u32 r0, u32 r1, u32 r2, float S0, float S1, float S2) {
    guest::StackFrame frame(0x44);  // the original's stack frame
    u32 r0_1 = r0 + 0x9d4u;  // (from the original)
    u32 r0_2 = call_00745970(r0_1, r1, r2, guest::cpu()->r[3]);
    u32 r2_1 = guest::cpu()->r[2];
    if (r0_2 == 0) {
        return;
    }
    gptr<Local_0066a2c8_r4_1> r4_1 = gptr<Local_0066a2c8_r4_1>(r0 + 0x14u);  // (from the original)
    call_006c5ef8(r4_1.addr(), 0u, r2_1);
    u32 r1_2 = guest::cpu()->r[1];
    u32 r2_2 = guest::cpu()->r[2];
    float S0_2 = guest::cpu()->s[0];
    float S2_2 = std::bit_cast<float>(r4_1->word_8);
    float S0_3 = std::bit_cast<float>(r4_1->word_0);
    gptr<Local_0066a2c8_r0_3> r0_3 = gptr<Local_0066a2c8_r0_3>(frame.at(0x30).addr());  // (from the original)
    r0_3->word_0 = std::bit_cast<u32>(S0_3);
    r0_3->word_4 = std::bit_cast<u32>(S0_2);
    r0_3->word_8 = std::bit_cast<u32>(S2_2);
    guest::cpu()->s[0] = S0_3;
    guest::cpu()->s[1] = S0_2;
    guest::cpu()->s[2] = S2_2;
    u32 r0_4 = call_00745970(r0_1, r1_2, r2_2, guest::cpu()->r[3]);
    if (r0_4 == 0) {
        return;
    }
    *frame.at<u16>(0x3c) = 0;  // (from the original)
    u32 r2_3 = *frame.at<u32>(0x3c);  // (from the original)
    call_0052e294(frame.at(0).addr(), frame.at(0x30).addr(), r2_3);  // (from the original)
    call_004ee4c0(r0_4, frame.at(0).addr());
}

}  // namespace d_0066a2c8
GUEST_EXPORT_FRAMED(0x0066a2c8, d_0066a2c8::f_0066a2c8, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_0066a34c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0066a34c {

inline guest::global<u8, 0x009506b0> global_009506b0;  // (from the original)
inline guest::global<u32, 0x009506b4> global_009506b4;  // (from the original)
inline constexpr guest::Function<0x006dfde8, u32(u32)> call_006dfde8;  // (from the original)

u32 f_0066a34c(u32 r0_unused, u32 r1_unused, u32 r2_unused, u32 r3) {
    guest::StackFrame frame(0x4);  // the original's stack frame
    *frame.at<u32>(0) = r3;
    *frame.at<u16>(0) = 0x2000;  // (from the original)
    if (*global_009506b0 != 0xffu) {  // (from the original)
        return *frame.at<u16>(0);
    }
    u32 r0_2 = *global_009506b4;
    if (r0_2 == 0) {
        return *frame.at<u16>(0);
    }
    u32 r0_4 = call_006dfde8(r0_2);
    if (r0_4 != 0) {
        return *gptr<u16>(r0_4 + 0x2eu);  // (from the original)
    }
    return *frame.at<u16>(0);
}

}  // namespace d_0066a34c
GUEST_EXPORT_FRAMED(0x0066a34c, d_0066a34c::f_0066a34c, 0x4000);  // pushes {lr} first, as the original

// f_0066a554: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0066a554 {

struct __attribute__((packed)) Object_0066a554_0 {
    u8 unknown_0[0x171];  // (not used here)
    u8 byte_171;
    u8 unknown_172[0x2];  // (not used here)
    u8 byte_174;
};
GUEST_OFFSET(Object_0066a554_0, byte_171, 0x171);  // (from the original)
GUEST_OFFSET(Object_0066a554_0, byte_174, 0x174);  // (from the original)

struct __attribute__((packed)) Local_0066a554_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_0066a554_ea_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_0066a554_ea_1, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_0066a554_ea_1, word_8, 0x8);  // (from the original)

struct __attribute__((packed)) Local_0066a554_r0_5 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_0066a554_r0_5, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_0066a554_r0_5, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_0066a554_r0_5, word_8, 0x8);  // (from the original)

inline constexpr guest::Function<0x004e0f68, u32(u32, u32, u32, u32)> call_004e0f68;  // (from the original)
inline constexpr guest::Function<0x004e13d0, u32(u32, u32, u32, u32)> call_004e13d0;  // (from the original)
inline constexpr guest::Function<0x004e14ec, u32(u32, u32, u32, u32)> call_004e14ec;  // (from the original)
inline constexpr guest::Function<0x004e1768, u32(u32, u32, u32, u32)> call_004e1768;  // (from the original)
inline constexpr guest::Function<0x0065795c, u32(u32, u32, u32, u32)> call_0065795c;  // (from the original)
inline constexpr guest::Function<0x007654a8, u32(u32, u32, u32, u32)> call_007654a8;  // (from the original)

u32 f_0066a554(gptr<Object_0066a554_0> arg0, u32 r1, u32 r2, u32 r3, float S0, float S1, float S2) {
    guest::StackFrame frame(0x1c);  // the original's stack frame
    u32 r0 = arg0.addr();
    u32 r7 = 0;
    u32 res_5 = 0;
    u32 r0_8 = 0;
    u32 r2_5 = 0;
    u32 r1_1 = 0;
    u32 r0_9 = 0;
    gptr<Local_0066a554_ea_1> ea_1 = gptr<Local_0066a554_ea_1>(0u);
    u32 r4 = r0;
    u32 r6 = r1;
    u32 r5 = r0 + 0x171u;  // (from the original)
    if ((u32(arg0->byte_171) >> 5u & 1u) != 0) {
        u32 r0_1 = arg0->byte_174;
        r7 = 0u;
        if ((r0_1 & 1u) != 0) {
            u32 r0_2 = call_004e0f68(r0_1, r1, r2, r3);
            r1 = guest::cpu()->r[1];
            u32 r2_1 = guest::cpu()->r[2];
            u32 r3_1 = guest::cpu()->r[3];
            S0 = guest::cpu()->s[0];
            S1 = guest::cpu()->s[1];
            if (r0_2 != 0) {
                if ((u32(*gptr<u8>(r5)) >> 5u & 1u) != 0) {
                    u32 r0_3 = call_004e1768(0x9c8fd4u, 0u, r2_1, r3_1);  // (from the original)
                    r1 = guest::cpu()->r[1];
                    u32 r2_2 = guest::cpu()->r[2];
                    u32 r3_2 = guest::cpu()->r[3];
                    S0 = guest::cpu()->s[0];
                    S1 = guest::cpu()->s[1];
                    S2 = guest::cpu()->s[2];
                    if (r0_3 != 0) {
                        if (*gptr<u16>(0x5aeu + r4) == 0) {  // (from the original)
                            if ((u32(*gptr<u8>(r5)) >> 5u & 1u) == 0) {
                                goto L_66a6a0;
                            }
                            u32 r0_4 = call_004e1768(0x9c8fd4u, 0u, r2_2, r3_2);  // (from the original)
                            r2 = guest::cpu()->r[2];
                            r3 = guest::cpu()->r[3];
                            S0 = guest::cpu()->s[0];
                            S1 = guest::cpu()->s[1];
                            S2 = guest::cpu()->s[2];
                            if (r0_4 == 0) {
                                goto L_66a6a0;
                            }
                            gptr<Local_0066a554_r0_5> r0_5 = gptr<Local_0066a554_r0_5>(r0_4 + 0x20u);  // (from the original)
                            r1 = frame.at(4).addr();
                            S0 = std::bit_cast<float>(r0_5->word_0);
                            S1 = std::bit_cast<float>(r0_5->word_4);
                            S2 = std::bit_cast<float>(r0_5->word_8);
                            *gptr<u32>(r1) = std::bit_cast<u32>(S0);
                            *gptr<u32>(r1 + 4) = std::bit_cast<u32>(S1);
                            *gptr<u32>(r1 + 8) = std::bit_cast<u32>(S2);
                            goto L_66a644;
                        }
                        guest::cpu()->s[0] = S0;
                        guest::cpu()->s[1] = S1;
                        guest::cpu()->s[2] = S2;
                        u32 r0_6 = call_004e14ec(0x9c8fd4u, r1, r2_2, r3_2);  // (from the original)
                        r1 = guest::cpu()->r[1];
                        u32 r2_3 = guest::cpu()->r[2];
                        u32 r3_3 = guest::cpu()->r[3];
                        S0 = guest::cpu()->s[0];
                        S1 = guest::cpu()->s[1];
                        if (r0_6 != 0) {
                            if ((u32(*gptr<u8>(r5)) >> 5u & 1u) != 0) {
                                u32 r0_7 = call_004e13d0(0x9c8fd4u, r1, r2_3, r3_3);  // (from the original)
                                u32 r2_4 = guest::cpu()->r[2];
                                u32 r3_4 = guest::cpu()->r[3];
                                S0 = guest::cpu()->s[0];
                                S1 = guest::cpu()->s[1];
                                r1 = r0_7;
                                if (r0_7 != 0) {
                                    call_007654a8(r4, r1, r2_4, r3_4);
                                    r1 = guest::cpu()->r[1];
                                    S0 = guest::cpu()->s[0];
                                    S1 = guest::cpu()->s[1];
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    guest::cpu()->r[1] = r1;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return 0u;
L_66a644:;
    res_5 = u32(*gptr<u8>(r5)) >> 5u & 1u;
    if (res_5 == 0) {
        goto L_66a6b4;
    }
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    r0_8 = call_004e1768(0x9c8fd4u, 0u, r2, r3);  // (from the original)
    r1 = guest::cpu()->r[1];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    S2 = guest::cpu()->s[2];
    if (r0_8 == 0) {
        goto L_66a6b4;
    }
    r0 = *gptr<u16>(r0_8 + 0x38u);  // (from the original)
    *frame.at<u16>(0) = u16(r0);
    r7 = uxth(r0);
L_66a678:;
    if (r6 != 0) {
        r0 = 1u;
    }
    *frame.at<u32>(0x10) = r7;  // (from the original)
    if (r6 != 0) {
        guest::cpu()->r[1] = r1;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        return r0;
    }
    r2_5 = frame.at(0x10).addr();  // (from the original)
    r1_1 = frame.at(4).addr();
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    r0_9 = call_0065795c(r4, r1_1, r2_5, r3);
    return r0_9;
L_66a6a0:;
    r3 = frame.at(4).addr();
    ea_1 = gptr<Local_0066a554_ea_1>(r4 + 0x14u);  // (from the original)
    r1 = ea_1->word_4;
    r2 = ea_1->word_8;
    *gptr<u32>(r3) = ea_1->word_0;
    *gptr<u32>(r3 + 4) = r1;
    *gptr<u32>(r3 + 8) = r2;
    guest::preempt();
    goto L_66a644;
L_66a6b4:;
    r0 = 0u;
    *frame.at<u16>(0) = u16(r0);
    guest::preempt();
    goto L_66a678;
}

}  // namespace d_0066a554
GUEST_EXPORT_FRAMED(0x0066a554, d_0066a554::f_0066a554, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_0066aa7c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0066aa7c {

struct __attribute__((packed)) Object_0066aa7c_0 {
    u8 unknown_0[0x8c5];  // (not used here)
    u8 byte_8c5;
    u8 unknown_8c6[0x1];  // (not used here)
    u8 byte_8c7;
};
GUEST_OFFSET(Object_0066aa7c_0, byte_8c5, 0x8c5);  // (from the original)
GUEST_OFFSET(Object_0066aa7c_0, byte_8c7, 0x8c7);  // (from the original)

inline constexpr guest::Function<0x0064d0b8, u32(u32, u32, u32, u32)> call_0064d0b8;  // (from the original)

u32 f_0066aa7c(gptr<Object_0066aa7c_0> arg0) {
    if ((u32(arg0->byte_8c7) & 1u) != 0) {
        return call_0064d0b8(arg0.addr(), 0x10u, 0u, 0u);  // (from the original)
    }
    if ((u32(arg0->byte_8c5) >> 5u & 1u) == 0) {
        return call_0064d0b8(arg0.addr(), 0xfu, 0u, 0u);  // (from the original)
    }
    return call_0064d0b8(arg0.addr(), 0x12u, 0u, 0u);  // (from the original)
}

}  // namespace d_0066aa7c
GUEST_EXPORT(0x0066aa7c, d_0066aa7c::f_0066aa7c);

// f_0066aac0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0066aac0 {

struct __attribute__((packed)) Local_0066aac0_r4_1 {
    u8 byte_0;
    u8 unknown_1[0x6];  // (not used here)
    u8 byte_7;
};
GUEST_OFFSET(Local_0066aac0_r4_1, byte_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_0066aac0_r4_1, byte_7, 0x7);  // (from the original)

inline guest::global<u32, 0x0066ac1c> global_0066ac1c;  // (from the original)
inline guest::global<u32, 0x0094df04> global_0094df04;  // (from the original)
inline guest::global<u8, 0x00953f68> global_00953f68;  // (from the original)
inline guest::global<u32, 0x00aaf14c> global_00aaf14c;  // (from the original)
inline constexpr guest::Function<0x002ff6f8, u32(u32, u32, u32, u32)> call_002ff6f8;  // (from the original)
inline constexpr guest::Function<0x00305f2c, u32(u32, u32, u32, u32)> call_00305f2c;  // (from the original)
inline constexpr guest::Function<0x005c2c80, u32(u32, u32, u32, u32)> call_005c2c80;  // (from the original)
inline constexpr guest::Function<0x005d41b8, u32(u32, u32, u32, u32)> call_005d41b8;  // (from the original)
inline constexpr guest::Function<0x0064d0b8, u32(u32, u32, u32, u32)> call_0064d0b8;  // (from the original)
inline constexpr guest::Function<0x0064ee94, u32(u32, u32, u32, u32)> call_0064ee94;  // (from the original)
inline constexpr guest::Function<0x00656c20, u32(u32, u32, u32, u32)> call_00656c20;  // (from the original)
inline constexpr guest::Function<0x0068319c, u32(u32, u32, u32, u32)> call_0068319c;  // (from the original)
inline constexpr guest::Function<0x00700198, u32(u32, u32, u32, u32)> call_00700198;  // (from the original)
inline constexpr guest::Function<0x00759a54, u32(u32, u32, u32, u32)> call_00759a54;  // (from the original)

u32 f_0066aac0(u32 r0, u32 r1, u32 r2, u32 r3, float S0, float S1) {
    guest::StackFrame frame(0x48);  // the original's stack frame
    u32 r5_1 = *frame.at<u32>(0x48);  // (from the original)
    u32 r0_1 = call_00656c20(r0, r1, r2, r3);
    u32 r2_1 = guest::cpu()->r[2];
    u32 r3_1 = guest::cpu()->r[3];
    gptr<Local_0066aac0_r4_1> r4_1 = gptr<Local_0066aac0_r4_1>(r0_1 + 0xeu);  // (from the original)
    call_005d41b8(r0_1 + 0xfu, r1, r2_1, r3_1);  // (from the original)
    u32 r2_2 = guest::cpu()->r[2];
    u32 r3_2 = guest::cpu()->r[3];
    u32 r0_3 = s32(r2) >> 8;
    *gptr<u8>(r0_1 + 0x13u) = u8(r0_3);  // (from the original)
    r4_1->byte_0 = u8(r3);
    u32 r0_4 = r0_3 << 8;
    *gptr<u8>(r0_1 + 0x14u) = u8(r5_1);  // (from the original)
    *frame.at<u16>(0) = u16(r0_4);
    call_00759a54(frame.at(8).addr(), r4_1.addr() + 1u, r2_2, r3_2);
    float S0_3 = std::bit_cast<float>(*global_0094df04);
    guest::cpu()->s[0] = S0_3;
    call_0064ee94(frame.at(0x14).addr(), frame.at(8).addr(), uxth(r0_4), 1u);  // (from the original)
    u32 r2_3 = guest::cpu()->r[2];
    u32 r3_3 = guest::cpu()->r[3];
    u32 r0_7 = call_0068319c(r0, frame.at(0x14).addr(), r2_3, r3_3);  // (from the original)
    u32 r1_4 = guest::cpu()->r[1];
    u32 r2_4 = guest::cpu()->r[2];
    u32 r3_4 = guest::cpu()->r[3];
    r4_1->byte_7 = 0;
    u32 r0_8 = call_00305f2c(r0_7, r1_4, r2_4, r3_4);
    u32 r1_5 = guest::cpu()->r[1];
    u32 r2_5 = guest::cpu()->r[2];
    u32 r3_5 = guest::cpu()->r[3];
    float S0_6 = guest::cpu()->s[0];
    float S1_6 = guest::cpu()->s[1];
    if (r0_8 != 3u && *global_00aaf14c != 0) {
        u32 r0_9 = *global_00953f68;
        if (r0_9 == 7u) {
            u32 r5_3 = 0x19u;  // (from the original)
            u32 r0_10 = call_005c2c80(r0_9, r1_5, r2_5, r3_5);
            u32 r1_6 = guest::cpu()->r[1];
            u32 r2_6 = guest::cpu()->r[2];
            u32 r3_6 = guest::cpu()->r[3];
            float S0_7 = guest::cpu()->s[0];
            float S1_7 = guest::cpu()->s[1];
            if (r0_10 != 0) {
                u32 r0_11 = call_00700198(4u, r1_6, r2_6, r3_6);
                r2_6 = guest::cpu()->r[2];
                r3_6 = guest::cpu()->r[3];
                r1_6 = *gptr<u16>(r0_11 + 4u);
                S1_7 = std::bit_cast<float>(*global_0066ac1c);
                S0_7 = std::bit_cast<float>(vcvt_uz_f(float(std::bit_cast<u32>(std::bit_cast<float>(u32(*gptr<u16>(r0_11 + 2u)) + r1_6))) * S1_7));
                r5_3 = 0x4bu - std::bit_cast<u32>(S0_7);  // (from the original)
            }
            guest::cpu()->s[0] = S0_7;
            guest::cpu()->s[1] = S1_7;
            u32 r0_12 = call_002ff6f8(0x64u, r1_6, r2_6, r3_6);  // (from the original)
            S0_6 = guest::cpu()->s[0];
            S1_6 = guest::cpu()->s[1];
            if (r0_12 < r5_3) {
                r4_1->byte_7 = 1;
            }
        }
    }
    u32 r1_7 = *gptr<u8>(r0 + 0x172u);  // (from the original)
    *gptr<u8>(r0 + 0x172u) = u8(r4_1->byte_7 == 0 ? r1_7 & ~0x80u : r1_7 | 0x80u);  // (from the original)
    guest::cpu()->s[0] = S0_6;
    guest::cpu()->s[1] = S1_6;
    frame.release();
    return call_0064d0b8(r0, 0x7bu, r0_1, 0u);  // (from the original)
}

}  // namespace d_0066aac0
GUEST_EXPORT(0x0066aac0, d_0066aac0::f_0066aac0);

// f_0066ac20: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0066ac20 {

struct __attribute__((packed)) Local_0066ac20_r1_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0066ac20_r1_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_0066ac20_r1_1, word_4, 0x4);  // (from the original)

struct __attribute__((packed)) Local_0066ac20_r4_1 {
    u8 byte_0;
    u8 unknown_1[0x6];  // (not used here)
    u8 byte_7;
    u8 byte_8;
};
GUEST_OFFSET(Local_0066ac20_r4_1, byte_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_0066ac20_r4_1, byte_7, 0x7);  // (from the original)
GUEST_OFFSET(Local_0066ac20_r4_1, byte_8, 0x8);  // (from the original)

inline constexpr guest::Function<0x005d41fc, u32(u32, u32, u32, u32)> call_005d41fc;  // (from the original)
inline constexpr guest::Function<0x0064d0b8, u32(u32, u32, u32, u32)> call_0064d0b8;  // (from the original)
inline constexpr guest::Function<0x00656c20, u32(u32, u32, u32, u32)> call_00656c20;  // (from the original)

u32 f_0066ac20(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x28);  // the original's stack frame
    u32 r12 = guest::cpu()->r[12];
    *frame.at<u32>(0x20) = r12;  // (from the original)
    gptr<Local_0066ac20_r1_1> r1_1 = gptr<Local_0066ac20_r1_1>(frame.at(0x28).addr());  // (from the original)
    u32 r5_1 = r1_1->word_0;
    u32 r6_1 = r1_1->word_4;
    u32 r0_1 = call_00656c20(r0, r1_1.addr(), r2, r3);
    gptr<Local_0066ac20_r4_1> r4_1 = gptr<Local_0066ac20_r4_1>(r0_1 + 0xeu);  // (from the original)
    call_005d41fc(r0_1 + 0xfu, r1, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    *gptr<u8>(r0_1 + 0x13u) = u8(u32(s32(r2) >> 8));  // (from the original)
    r4_1->byte_0 = u8(r3);
    *gptr<u8>(r0_1 + 0x14u) = u8(r5_1);  // (from the original)
    r4_1->byte_8 = u8(r6_1);
    r4_1->byte_7 = u8(u32(*gptr<u8>(r0 + 0x172u)) >> 7);  // (from the original)
    frame.release();
    return call_0064d0b8(r0, 0x7eu, r0_1, 0u);  // (from the original)
}

}  // namespace d_0066ac20
GUEST_EXPORT(0x0066ac20, d_0066ac20::f_0066ac20);

// f_0066ac8c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0066ac8c {

struct __attribute__((packed)) Local_0066ac8c_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0066ac8c_ea_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_0066ac8c_ea_1, word_4, 0x4);  // (from the original)

struct __attribute__((packed)) Local_0066ac8c_r5_2 {
    u32 word_0;
    u8 byte_4;
};
GUEST_OFFSET(Local_0066ac8c_r5_2, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_0066ac8c_r5_2, byte_4, 0x4);  // (from the original)

inline constexpr guest::Function<0x0013ca2c, u32(u32, u32, u32, u32)> call_0013ca2c;  // (from the original)
inline constexpr guest::Function<0x002fc20c, u32(u32, u32, u32, u32)> call_002fc20c;  // (from the original)
inline constexpr guest::Function<0x00582c9c, u32(u32, u32, u32, u32)> call_00582c9c;  // (from the original)
inline constexpr guest::Function<0x0064d0b8, u32(u32, u32, u32, u32)> call_0064d0b8;  // (from the original)
inline constexpr guest::Function<0x006515ec, u32(u32, u32, u32, u32)> call_006515ec;  // (from the original)
inline constexpr guest::Function<0x00656c20, u32(u32, u32, u32, u32)> call_00656c20;  // (from the original)
inline constexpr guest::Function<0x0076ae1c, u32(u32, u32, u32, u32)> call_0076ae1c;  // (from the original)
inline constexpr guest::Function<0x0076c440, u32(u32, u32, u32, u32)> call_0076c440;  // (from the original)

u32 f_0066ac8c(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x30);  // the original's stack frame
    u32 r9 = r2;
    u32 r11 = r0;
    u32 r10 = r1;
    u32 r6_1 = r3;
    gptr<Local_0066ac8c_ea_1> ea_1 = gptr<Local_0066ac8c_ea_1>(frame.at(0x30).addr());  // (from the original)
    u32 r4_1 = ea_1->word_0;
    u32 r5_1 = ea_1->word_4;
    if (r2 > 3u) {
        r9 = 3u;
    }
    u32 r0_1 = call_00656c20(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    u32 r8 = r0_1 + 0xeu;  // (from the original)
    *frame.at<u32>(0) = r0_1;
    r1 = *gptr<u8>(r8 + 0x10u);  // (from the original)
    *gptr<u8>(r8 + 0x11u) = 1;  // (from the original)
    r2 = 0x18u & r9 << 3;  // (from the original)
    u32 r0_2 = (((r1 & ~0x18u | r2) & ~0x20u | r6_1 << 5) & 0xbfu | r4_1 << 6) & ~0x80u | r5_1 << 7;  // (from the original)
    u32 r4 = 0u;
    *gptr<u8>(r8 + 0x10u) = u8(r0_2);  // (from the original)
    if (r9 >= 0u && r9 != 0) {
        do {
            u32 r7_1 = r4 + (r4 << 2);
            gptr<Local_0066ac8c_r5_2> r5_2 = gptr<Local_0066ac8c_r5_2>(r7_1 + r10);
            u32 r6_2 = r5_2->byte_4;
            u32 r0_4 = call_002fc20c(frame.at(4).addr(), r1, r2, r3);
            u32 r2_1 = r7_1 + r8;
            *gptr<u32>(r0_4) = r5_2->word_0;
            call_0013ca2c(r2_1, r5_2.addr(), r2_1, guest::cpu()->r[3]);
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            if (r6_2 == 0) {
                u32 r5_3 = frame.at(4).addr();
                u32 r0_5 = call_0076c440(r5_3, r1, r2, r3);
                r1 = guest::cpu()->r[1];
                r2 = guest::cpu()->r[2];
                r3 = guest::cpu()->r[3];
                if (r0_5 != 0) {
                    u32 r0_6 = *gptr<u8>(r11 + 0x1acu);  // (from the original)
                    u32 r0_7 = call_006515ec(r0_6, r1, r2, r3);
                    r1 = guest::cpu()->r[1];
                    r2 = guest::cpu()->r[2];
                    r3 = guest::cpu()->r[3];
                    if (r0_7 != 0) {
                        u32 r0_8 = call_0076ae1c(r5_3, r1, r2, r3);
                        r1 = guest::cpu()->r[1];
                        r2 = guest::cpu()->r[2];
                        r3 = guest::cpu()->r[3];
                        if (r0_8 < 0x64u) {  // (from the original)
                            call_00582c9c(r0_7 + 0x5494u, uxth(r0_8), r2, r3);  // (from the original)
                            r1 = guest::cpu()->r[1];
                            r2 = guest::cpu()->r[2];
                            r3 = guest::cpu()->r[3];
                        }
                    }
                }
            }
            r4 += 1u;
            guest::preempt();
        } while (r4 < r9);
    }
    u32 r2_2 = *frame.at<u32>(0);
    frame.release();
    return call_0064d0b8(r11, 0x36u, r2_2, 0u);  // (from the original)
}

}  // namespace d_0066ac8c
GUEST_EXPORT(0x0066ac8c, d_0066ac8c::f_0066ac8c);

// f_0066b13c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0066b13c {

struct __attribute__((packed)) Object_0066b13c_0 {
    u8 unknown_0[0x1ac];  // (not used here)
    u8 byte_1ac;
};
GUEST_OFFSET(Object_0066b13c_0, byte_1ac, 0x1ac);  // (from the original)

struct __attribute__((packed)) Local_0066b13c_r0_4 {
    u8 unknown_0[0x10];  // (not used here)
    u8 byte_10;
    u8 byte_11;
};
GUEST_OFFSET(Local_0066b13c_r0_4, byte_10, 0x10);  // (from the original)
GUEST_OFFSET(Local_0066b13c_r0_4, byte_11, 0x11);  // (from the original)

inline constexpr guest::Function<0x002fe8a4, u32(u32, u32, u32, u32)> call_002fe8a4;  // (from the original)
inline constexpr guest::Function<0x0064d0b8, u32(u32, u32, u32, u32)> call_0064d0b8;  // (from the original)
inline constexpr guest::Function<0x00656c20, u32(u32, u32, u32, u32)> call_00656c20;  // (from the original)

u32 f_0066b13c(gptr<Object_0066b13c_0> arg0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x18);  // the original's stack frame
    u32 r4_1 = *frame.at<u32>(0x18);  // (from the original)
    u32 r0_1 = arg0->byte_1ac;
    u32 r0_2 = call_002fe8a4(r0_1, r1, r2, r3);
    u32 r1_1 = guest::cpu()->r[1];
    if (r0_2 != 0) {
        u32 r0_3 = call_00656c20(arg0.addr(), r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
        gptr<Local_0066b13c_r0_4> r0_4 = gptr<Local_0066b13c_r0_4>(r0_3 + 0xeu);  // (from the original)
        u32 r1_2 = r0_4->byte_10;
        r0_4->byte_11 = u8(r1);
        r0_4->byte_10 = u8(((r1_2 & ~0x38u | (r4_1 ^ 1u) << 5) & 0xbfu | r2 << 6) & ~0x80u | r3 << 7);  // (from the original)
        frame.release();
        return call_0064d0b8(arg0.addr(), 0x36u, r0_3, 0u);  // (from the original)
    }
    guest::cpu()->r[1] = r1_1;
    return r0_2;
}

}  // namespace d_0066b13c
GUEST_EXPORT(0x0066b13c, d_0066b13c::f_0066b13c);

// f_0066b1b4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0066b1b4 {

inline constexpr guest::Function<0x005d41b8, u32(u32, u32, u32, u32)> call_005d41b8;  // (from the original)
inline constexpr guest::Function<0x0064d0b8, u32(u32, u32, u32, u32)> call_0064d0b8;  // (from the original)
inline constexpr guest::Function<0x00656c20, u32(u32, u32, u32, u32)> call_00656c20;  // (from the original)

void f_0066b1b4(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x18);  // the original's stack frame
    u32 r0_1 = call_00656c20(r0, r1, r2, r3);
    u32 r4_1 = r0_1 + 0xeu;  // (from the original)
    call_005d41b8(r4_1, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    *gptr<u8>(r4_1 + 4u) = u8(u32(s32(r2) >> 8));
    frame.release();
    call_0064d0b8(r0, 0x1du, r0_1, 0u);
    return;  // (from the original)
}

}  // namespace d_0066b1b4
GUEST_EXPORT(0x0066b1b4, d_0066b1b4::f_0066b1b4);

// f_0066b1fc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0066b1fc {

inline constexpr guest::Function<0x005d41b8, u32(u32, u32, u32, u32)> call_005d41b8;  // (from the original)
inline constexpr guest::Function<0x0064d0b8, u32(u32, u32, u32, u32)> call_0064d0b8;  // (from the original)
inline constexpr guest::Function<0x00656c20, u32(u32, u32, u32, u32)> call_00656c20;  // (from the original)

void f_0066b1fc(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x18);  // the original's stack frame
    u32 r0_1 = call_00656c20(r0, r1, r2, r3);
    u32 r4_1 = r0_1 + 0xeu;  // (from the original)
    call_005d41b8(r4_1, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    *gptr<u8>(r4_1 + 4u) = u8(u32(s32(r2) >> 8));
    frame.release();
    call_0064d0b8(r0, 0x25u, r0_1, 0u);
    return;  // (from the original)
}

}  // namespace d_0066b1fc
GUEST_EXPORT(0x0066b1fc, d_0066b1fc::f_0066b1fc);

// f_0066b244: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0066b244 {

struct __attribute__((packed)) Local_0066b244_ea_1 {
    u8 byte_0;
    u8 byte_1;
    u8 byte_2;
};
GUEST_OFFSET(Local_0066b244_ea_1, byte_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_0066b244_ea_1, byte_1, 0x1);  // (from the original)
GUEST_OFFSET(Local_0066b244_ea_1, byte_2, 0x2);  // (from the original)

inline constexpr guest::Function<0x0064d0b8, u32(u32, u32, u32, u32)> call_0064d0b8;  // (from the original)
inline constexpr guest::Function<0x00656c20, u32(u32, u32, u32, u32)> call_00656c20;  // (from the original)

u32 f_0066b244(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 r0_1 = call_00656c20(r0, r1, r2, r3);
    gptr<Local_0066b244_ea_1> ea_1 = gptr<Local_0066b244_ea_1>(r0_1 + 0xeu);  // (from the original)
    ea_1->byte_0 = u8(r1);
    ea_1->byte_1 = u8(r2);
    ea_1->byte_2 = 0;
    frame.release();
    return call_0064d0b8(r0, 0x5eu, r0_1, 0u);  // (from the original)
}

}  // namespace d_0066b244
GUEST_EXPORT(0x0066b244, d_0066b244::f_0066b244);

// f_0066b280: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0066b280 {

struct __attribute__((packed)) Local_0066b280_ea_1 {
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
};
GUEST_OFFSET(Local_0066b280_ea_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_0066b280_ea_1, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_0066b280_ea_1, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Local_0066b280_ea_1, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Local_0066b280_ea_1, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Local_0066b280_ea_1, word_14, 0x14);  // (from the original)
GUEST_OFFSET(Local_0066b280_ea_1, word_18, 0x18);  // (from the original)
GUEST_OFFSET(Local_0066b280_ea_1, word_1c, 0x1c);  // (from the original)
GUEST_OFFSET(Local_0066b280_ea_1, word_20, 0x20);  // (from the original)
GUEST_OFFSET(Local_0066b280_ea_1, word_24, 0x24);  // (from the original)
GUEST_OFFSET(Local_0066b280_ea_1, word_28, 0x28);  // (from the original)
GUEST_OFFSET(Local_0066b280_ea_1, word_2c, 0x2c);  // (from the original)
GUEST_OFFSET(Local_0066b280_ea_1, word_30, 0x30);  // (from the original)
GUEST_OFFSET(Local_0066b280_ea_1, word_34, 0x34);  // (from the original)

struct __attribute__((packed)) Local_0066b280_ea_2 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u32 word_18;
    u32 word_1c;
    u8 unknown_20[0x4];  // (not used here)
    u32 word_24;
};
GUEST_OFFSET(Local_0066b280_ea_2, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_0066b280_ea_2, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_0066b280_ea_2, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Local_0066b280_ea_2, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Local_0066b280_ea_2, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Local_0066b280_ea_2, word_14, 0x14);  // (from the original)
GUEST_OFFSET(Local_0066b280_ea_2, word_18, 0x18);  // (from the original)
GUEST_OFFSET(Local_0066b280_ea_2, word_1c, 0x1c);  // (from the original)
GUEST_OFFSET(Local_0066b280_ea_2, word_24, 0x24);  // (from the original)

struct __attribute__((packed)) Local_0066b280_ea_3 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u32 word_18;
    u32 word_1c;
    u8 unknown_20[0x4];  // (not used here)
    u32 word_24;
};
GUEST_OFFSET(Local_0066b280_ea_3, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_0066b280_ea_3, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_0066b280_ea_3, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Local_0066b280_ea_3, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Local_0066b280_ea_3, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Local_0066b280_ea_3, word_14, 0x14);  // (from the original)
GUEST_OFFSET(Local_0066b280_ea_3, word_18, 0x18);  // (from the original)
GUEST_OFFSET(Local_0066b280_ea_3, word_1c, 0x1c);  // (from the original)
GUEST_OFFSET(Local_0066b280_ea_3, word_24, 0x24);  // (from the original)

struct __attribute__((packed)) Local_0066b280_ea_4 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u32 word_18;
    u32 word_1c;
    u8 unknown_20[0x4];  // (not used here)
    u32 word_24;
};
GUEST_OFFSET(Local_0066b280_ea_4, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_0066b280_ea_4, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_0066b280_ea_4, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Local_0066b280_ea_4, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Local_0066b280_ea_4, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Local_0066b280_ea_4, word_14, 0x14);  // (from the original)
GUEST_OFFSET(Local_0066b280_ea_4, word_18, 0x18);  // (from the original)
GUEST_OFFSET(Local_0066b280_ea_4, word_1c, 0x1c);  // (from the original)
GUEST_OFFSET(Local_0066b280_ea_4, word_24, 0x24);  // (from the original)

struct __attribute__((packed)) Local_0066b280_r1_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_0066b280_r1_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_0066b280_r1_1, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_0066b280_r1_1, word_8, 0x8);  // (from the original)

inline constexpr guest::Function<0x005d41b8, u32(u32, u32, u32, u32)> call_005d41b8;  // (from the original)
inline constexpr guest::Function<0x0064d0b8, u32(u32, u32, u32, u32)> call_0064d0b8;  // (from the original)
inline constexpr guest::Function<0x00656c20, u32(u32, u32, u32, u32)> call_00656c20;  // (from the original)

void f_0066b280(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x38);  // the original's stack frame
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r10 = guest::cpu()->r[10];
    u32 r11 = guest::cpu()->r[11];
    u32 r12 = guest::cpu()->r[12];
    u32 r14 = guest::cpu()->r[14];
    gptr<Local_0066b280_ea_1> ea_1 = gptr<Local_0066b280_ea_1>(frame.at(0).addr());
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
    ea_1->word_30 = r12;
    ea_1->word_34 = r14;
    gptr<Local_0066b280_r1_1> r1_1 = gptr<Local_0066b280_r1_1>(frame.at(0x38).addr());  // (from the original)
    u32 r0_1 = *frame.at<u32>(0);
    u32 r5_1 = r1_1->word_0;
    u32 r6_1 = r1_1->word_4;
    u32 r7_1 = r1_1->word_8;
    u32 r0_2 = call_00656c20(r0_1, r1_1.addr(), r2, r3);
    u32 r4_1 = r0_2 + 0xeu;  // (from the original)
    call_005d41b8(r4_1, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    call_005d41b8(r4_1 + 4u, r2, guest::cpu()->r[2], guest::cpu()->r[3]);
    *gptr<u8>(r4_1 + 8u) = u8(u32(s32(u32(*gptr<u16>(r3))) >> 8));
    *gptr<u8>(r0_2 + 0x17u) = u8(r5_1);  // (from the original)
    if (r6_1 != 0) {
        if (r7_1 != 0) {
            u32 r0_4 = *frame.at<u32>(0);
            gptr<Local_0066b280_ea_2> ea_2 = gptr<Local_0066b280_ea_2>(frame.at(0x10).addr());  // (from the original)
            u32 r4_2 = ea_2->word_0;
            u32 r5_2 = ea_2->word_4;
            u32 r6_2 = ea_2->word_8;
            u32 r7_2 = ea_2->word_c;
            u32 r8_1 = ea_2->word_10;
            u32 r9_1 = ea_2->word_14;
            u32 r10_1 = ea_2->word_18;
            u32 r11_1 = ea_2->word_1c;
            r14 = ea_2->word_24;
            guest::cpu()->r[4] = r4_2;
            guest::cpu()->r[5] = r5_2;
            guest::cpu()->r[6] = r6_2;
            guest::cpu()->r[7] = r7_2;
            guest::cpu()->r[8] = r8_1;
            guest::cpu()->r[9] = r9_1;
            guest::cpu()->r[10] = r10_1;
            guest::cpu()->r[11] = r11_1;
            frame.release();
            call_0064d0b8(r0_4, 0x2eu, r0_2, 0u);
            return;  // (from the original)
        }
        u32 r0_5 = *frame.at<u32>(0);
        gptr<Local_0066b280_ea_3> ea_3 = gptr<Local_0066b280_ea_3>(frame.at(0x10).addr());  // (from the original)
        u32 r4_3 = ea_3->word_0;
        u32 r5_3 = ea_3->word_4;
        u32 r6_3 = ea_3->word_8;
        u32 r7_3 = ea_3->word_c;
        u32 r8_2 = ea_3->word_10;
        u32 r9_2 = ea_3->word_14;
        u32 r10_2 = ea_3->word_18;
        u32 r11_2 = ea_3->word_1c;
        r14 = ea_3->word_24;
        guest::cpu()->r[4] = r4_3;
        guest::cpu()->r[5] = r5_3;
        guest::cpu()->r[6] = r6_3;
        guest::cpu()->r[7] = r7_3;
        guest::cpu()->r[8] = r8_2;
        guest::cpu()->r[9] = r9_2;
        guest::cpu()->r[10] = r10_2;
        guest::cpu()->r[11] = r11_2;
        frame.release();
        call_0064d0b8(r0_5, 0x2cu, r0_2, 0u);
        return;  // (from the original)
    }
    u32 r0_6 = *frame.at<u32>(0);
    gptr<Local_0066b280_ea_4> ea_4 = gptr<Local_0066b280_ea_4>(frame.at(0x10).addr());  // (from the original)
    u32 r4_4 = ea_4->word_0;
    u32 r5_4 = ea_4->word_4;
    u32 r6_4 = ea_4->word_8;
    u32 r7_4 = ea_4->word_c;
    u32 r8_3 = ea_4->word_10;
    u32 r9_3 = ea_4->word_14;
    u32 r10_3 = ea_4->word_18;
    u32 r11_3 = ea_4->word_1c;
    r14 = ea_4->word_24;
    guest::cpu()->r[4] = r4_4;
    guest::cpu()->r[5] = r5_4;
    guest::cpu()->r[6] = r6_4;
    guest::cpu()->r[7] = r7_4;
    guest::cpu()->r[8] = r8_3;
    guest::cpu()->r[9] = r9_3;
    guest::cpu()->r[10] = r10_3;
    guest::cpu()->r[11] = r11_3;
    frame.release();
    call_0064d0b8(r0_6, 0x2bu, r0_2, 0u);
    return;  // (from the original)
}

}  // namespace d_0066b280
GUEST_EXPORT(0x0066b280, d_0066b280::f_0066b280);

// f_0066fa84: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0066fa84 {

inline guest::global<u32, 0x0085f2d4> global_0085f2d4;  // (from the original)
inline guest::global<u32, 0x00886a80> global_00886a80;  // (from the original)
inline guest::global<u32, 0x0094df04> global_0094df04;  // (from the original)
inline constexpr guest::Function<0x0064ee94, u32(u32, u32, u32, u32)> call_0064ee94;  // (from the original)
inline constexpr guest::Function<0x006c6640, u32(u32, u32, u32, u32)> call_006c6640;  // (from the original)

u32 f_0066fa84(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x1c);  // the original's stack frame
    u32 r0_1 = *frame.at<u32>(0x28);  // (from the original)
    *frame.at<u32>(0) = r3;
    *frame.at<u16>(0) = u16((r0_1 == 0 ? 0xc000u : 0x4000u) + u32(*frame.at<u16>(0)));  // (from the original)
    float S1_1 = std::bit_cast<float>(*global_0085f2d4);
    float S0_1 = S1_1 - std::bit_cast<float>(*global_00886a80);
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    call_0064ee94(frame.at(0x10).addr(), r2, r3, 1u);  // (from the original)
    u32 r2_1 = *frame.at<u32>(0);
    float S0_2 = std::bit_cast<float>(*global_0094df04);
    guest::cpu()->s[0] = S0_2;
    call_0064ee94(frame.at(4).addr(), frame.at(0x10).addr(), r2_1, 1u);  // (from the original)
    u32 r2_2 = guest::cpu()->r[2];
    u32 r3_1 = guest::cpu()->r[3];
    call_006c6640(frame.at(4).addr(), 0u, r2_2, r3_1);
    float S0_4 = guest::cpu()->s[0];
    *frame.at<u32>(8) = std::bit_cast<u32>(S0_4);
    *gptr<u32>(r0) = *frame.at<u32>(4);
    *gptr<u32>(r0 + 4u) = *frame.at<u32>(8);
    *gptr<u32>(r0 + 8u) = *frame.at<u32>(0xc);  // (from the original)
    u32 r0_5 = *frame.at<u16>(0);
    *gptr<u16>(r1) = u16(r0_5);
    guest::cpu()->s[0] = S0_4;
    return r0_5;
}

}  // namespace d_0066fa84
GUEST_EXPORT_FRAMED(0x0066fa84, d_0066fa84::f_0066fa84, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_0066fb3c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0066fb3c {

struct __attribute__((packed)) Object_0066fb3c_1 {
    u8 unknown_0[0x8];  // (not used here)
    u32 word_8;
};
GUEST_OFFSET(Object_0066fb3c_1, word_8, 0x8);  // (from the original)


u32 f_0066fb3c(u32 r0, gptr<Object_0066fb3c_1> arg1) {
    if (r0 != 0x67u) {  // (from the original)
        guest::cpu()->r[1] = arg1.addr();
        return 0u;
    }
    if (s32(arg1->word_8) <= s32(0x43960000u)) {  // (from the original)
        guest::cpu()->r[1] = 0x43960000u;  // (from the original)
        return 1u;
    }
    guest::cpu()->r[1] = 0x43960000u;  // (from the original)
    return 0u;
}

}  // namespace d_0066fb3c
GUEST_EXPORT(0x0066fb3c, d_0066fb3c::f_0066fb3c);

// f_0066fb64: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0066fb64 {

struct __attribute__((packed)) Object_0066fb64_0 {
    u8 unknown_0[0x171];  // (not used here)
    u8 byte_171;
};
GUEST_OFFSET(Object_0066fb64_0, byte_171, 0x171);  // (from the original)

struct __attribute__((packed)) Local_0066fb64_r4_1 {
    u8 unknown_0[0x7];  // (not used here)
    u8 byte_7;
};
GUEST_OFFSET(Local_0066fb64_r4_1, byte_7, 0x7);  // (from the original)

inline constexpr guest::Function<0x0068eff0, u32(u32, u32, u32, u32)> call_0068eff0;  // (from the original)

void f_0066fb64(gptr<Object_0066fb64_0> arg0) {
    gptr<Local_0066fb64_r4_1> r4_1 = gptr<Local_0066fb64_r4_1>(arg0.addr() + 0x171u);  // (from the original)
    if ((u32(arg0->byte_171) >> 5u & 1u) == 0) {
        return;
    }
    call_0068eff0(arg0.addr(), guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r4_1->byte_7 = u8(u32(r4_1->byte_7) | 0x80u);  // (from the original)
}

}  // namespace d_0066fb64
GUEST_EXPORT_FRAMED(0x0066fb64, d_0066fb64::f_0066fb64, 0x4010);  // pushes {r4, lr} first, as the original

// f_0066fc98: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0066fc98 {

inline constexpr guest::Function<0x005d41b8, u32(u32, u32, u32, u32)> call_005d41b8;  // (from the original)
inline constexpr guest::Function<0x0064d0b8, u32(u32, u32, u32, u32)> call_0064d0b8;  // (from the original)
inline constexpr guest::Function<0x00656c20, u32(u32, u32, u32, u32)> call_00656c20;  // (from the original)

void f_0066fc98(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x18);  // the original's stack frame
    u32 r0_1 = call_00656c20(r0, r1, r2, r3);
    u32 r2_1 = r0_1 + 0xeu;  // (from the original)
    *gptr<u8>(r0_1 + 0x12u) = u8(u32(s32(u32(*gptr<u16>(r2))) >> 8));  // (from the original)
    call_005d41b8(r2_1, r1, r2_1, guest::cpu()->r[3]);
    frame.release();
    call_0064d0b8(r0, 0xe9u, r0_1, 0u);
    return;  // (from the original)
}

}  // namespace d_0066fc98
GUEST_EXPORT(0x0066fc98, d_0066fc98::f_0066fc98);

// f_0066fd10: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0066fd10 {

struct __attribute__((packed)) Local_0066fd10_ea_1 {
    u8 byte_0;
    u8 byte_1;
};
GUEST_OFFSET(Local_0066fd10_ea_1, byte_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_0066fd10_ea_1, byte_1, 0x1);  // (from the original)

inline constexpr guest::Function<0x0064d0b8, u32(u32, u32, u32, u32)> call_0064d0b8;  // (from the original)
inline constexpr guest::Function<0x00656c20, u32(u32, u32, u32, u32)> call_00656c20;  // (from the original)

u32 f_0066fd10(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 r0_1 = call_00656c20(r0, r1, r2, r3);
    gptr<Local_0066fd10_ea_1> ea_1 = gptr<Local_0066fd10_ea_1>(r0_1 + 0xeu);  // (from the original)
    ea_1->byte_0 = u8(r1);
    ea_1->byte_1 = u8(r2);
    frame.release();
    return call_0064d0b8(r0, 0x5cu, r0_1, 0u);  // (from the original)
}

}  // namespace d_0066fd10
GUEST_EXPORT(0x0066fd10, d_0066fd10::f_0066fd10);

// f_0066fd44: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0066fd44 {

inline constexpr guest::Function<0x005d41b8, u32(u32, u32, u32, u32)> call_005d41b8;  // (from the original)
inline constexpr guest::Function<0x0064d0b8, u32(u32, u32, u32, u32)> call_0064d0b8;  // (from the original)
inline constexpr guest::Function<0x00656c20, u32(u32, u32, u32, u32)> call_00656c20;  // (from the original)

void f_0066fd44(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x20);  // the original's stack frame
    u32 r0_1 = call_00656c20(r0, r1, r2, r3);
    u32 r4_1 = r0_1 + 0xeu;  // (from the original)
    call_005d41b8(r4_1, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    *gptr<u8>(r4_1 + 4u) = u8(u32(s32(r2) >> 8));
    *gptr<u8>(r0_1 + 0x13u) = u8(r3);  // (from the original)
    frame.release();
    call_0064d0b8(r0, 0xc1u, r0_1, 0u);
    return;  // (from the original)
}

}  // namespace d_0066fd44
GUEST_EXPORT(0x0066fd44, d_0066fd44::f_0066fd44);

// f_0066fd94: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0066fd94 {

inline constexpr guest::Function<0x0064d0b8, u32(u32, u32, u32, u32)> call_0064d0b8;  // (from the original)
inline constexpr guest::Function<0x00656c20, u32(u32, u32, u32, u32)> call_00656c20;  // (from the original)

u32 f_0066fd94(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 r0_1 = call_00656c20(r0, r1, r2, r3);
    *gptr<u8>(r0_1 + 0xeu) = u8(r1);  // (from the original)
    frame.release();
    return call_0064d0b8(r0, 0x8du, r0_1, 0u);  // (from the original)
}

}  // namespace d_0066fd94
GUEST_EXPORT(0x0066fd94, d_0066fd94::f_0066fd94);

// f_0066fdc0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0066fdc0 {

inline constexpr guest::Function<0x0064d0b8, u32(u32, u32, u32, u32)> call_0064d0b8;  // (from the original)

u32 f_0066fdc0() {
    return call_0064d0b8(guest::cpu()->r[0], 0x17u, 0u, 0u);  // (from the original)
}

}  // namespace d_0066fdc0
GUEST_EXPORT(0x0066fdc0, d_0066fdc0::f_0066fdc0);

// f_0066ffb4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0066ffb4 {

struct __attribute__((packed)) Local_0066ffb4_r5_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0066ffb4_r5_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_0066ffb4_r5_1, word_4, 0x4);  // (from the original)

inline constexpr guest::Function<0x004eb6c4, u32(u32, u32, u32, u32)> call_004eb6c4;  // (from the original)
inline constexpr guest::Function<0x0065e3a0, u32(u32, u32, u32, u32)> call_0065e3a0;  // (from the original)
inline constexpr guest::Function<0x006c588c, u32(u32, u32, u32, u32)> call_006c588c;  // (from the original)

void f_0066ffb4(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x30);  // the original's stack frame
    u32 r0_1 = call_006c588c(r1, 0u, r2, r3);
    u32 r12_1 = guest::cpu()->r[12];
    if (r0_1 != 0x16u) {  // (from the original)
        frame.release();
        call_0065e3a0(r0, r1, r2, r3);
        return;
    }
    u32 cf_1 = r3 >= 4u;
    if (r3 < 4u) {
        r0_1 = 0x94df14u;  // (from the original)
    }
    gptr<Local_0066ffb4_r5_1> r5_1 = gptr<Local_0066ffb4_r5_1>(frame.at(8).addr());
    if (r3 < 4u) {
        r12_1 = *gptr<u32>(r0_1 + (r3 << 2));
    }
    *frame.at<u16>(0x10) = 0;  // (from the original)
    *frame.at<u16>(0x14) = 0;  // (from the original)
    *frame.at<u32>(4) = 1;
    if (cf_1) {
        r12_1 = 0u;
    }
    *frame.at<u16>(0x12) = u16(r2);  // (from the original)
    *frame.at<u32>(0) = 0xae5664;  // (from the original)
    r5_1->word_0 = 0x842bcc;  // (from the original)
    r5_1->word_4 = r12_1;
    call_004eb6c4(r0 + 0x19cu, 0u, r1, frame.at(0x10).addr());  // (from the original)
}

}  // namespace d_0066ffb4
GUEST_EXPORT(0x0066ffb4, d_0066ffb4::f_0066ffb4);
