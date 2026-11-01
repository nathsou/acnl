// Functions decompiled by tools/decomp (docs/decomp.md), each proved equal to the recompiled original (prove-cpp). The
// names are generated (d_<address>::f_<address>, Object_<address>_<argument>, word_<offset>) and still to be chosen.
#include "guest/guest.hpp"
#include "core/date.hpp"
#include "core/grid_map.hpp"
#include "graphics/hemisphere_light.hpp"
#include "recovered/structs.hpp"
#include "save/saved_record.hpp"

#include <bit>

using guest::gptr;

// f_007508b0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_007508b0 {

struct __attribute__((packed)) Local_007508b0_r5_1 {
    u8 unknown_0[0xc];  // (not used here)
    u16 half_c;
    u16 half_e;
};
GUEST_OFFSET(Local_007508b0_r5_1, half_c, 0xc);  // (from the original)
GUEST_OFFSET(Local_007508b0_r5_1, half_e, 0xe);  // (from the original)

inline guest::global<u32, 0x0094d6b8> global_0094d6b8;  // (from the original)
inline constexpr guest::Function<0x002fc20c, u32(u32)> call_002fc20c;  // (from the original)
inline constexpr guest::Function<0x002fe7dd, u32(u32)> call_002fe7dc;  // (from the original)
inline constexpr guest::Function<0x003117dc, u32(u32, u32, u32)> call_003117dc;  // (from the original)
inline constexpr guest::Function<0x004e958c, u32(u32, u32)> call_004e958c;  // (from the original)
inline constexpr guest::Function<0x004ea048, u32(u32)> call_004ea048;  // (from the original)
inline constexpr guest::Function<0x00691598, u32(u32)> call_00691598;  // (from the original)

u32 f_007508b0(u32 r0) {
    guest::StackFrame frame(0xc);  // the original's stack frame
    u32 r0_4 = 0;
    u32 r0_1 = *global_0094d6b8;
    if ((r0_1 & 1u) == 0) {
        r0_1 = call_002fe7dc(0x94d6b8u);  // (from the original)
        if (r0_1 != 0) {
            call_002fc20c(0x94d6bcu);  // (from the original)
            r0_1 = 0x94d6b8u;  // (from the original)
        }
    }
    u32 r0_2 = call_004ea048(r0_1);
    gptr<Local_007508b0_r5_1> r5_1 = gptr<Local_007508b0_r5_1>(r0 + 0x600u);  // (from the original)
    u32 r1_1 = s16(r5_1->half_c);
    u32 r0_3 = call_004e958c(r0_2, r1_1);
    if (r0_3 == 0) {
        r0_4 = *gptr<u16>(r0 + 0x2eu);  // (from the original)
        *frame.at<u16>(0) = u16(r0_4);
    } else {
        u32 r0_5 = u32(*gptr<u16>(r0_3 + 0x2eu)) + u32(r5_1->half_e);  // (from the original)
        *frame.at<u16>(0) = u16(r0_5);
        r0_4 = uxth(r0_5);
    }
    *frame.at<u32>(4) = r0_4;
    u32 r0_7 = call_00691598(frame.at(4).addr());
    call_003117dc(0x94d6bcu, r0 + 0x5e4u, r0_7);  // (from the original)
    return 0x94d6bcu;  // (from the original)
}

}  // namespace d_007508b0
GUEST_EXPORT_FRAMED(0x007508b0, d_007508b0::f_007508b0, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_00750994: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00750994 {

struct __attribute__((packed)) Object_00750994_0 {
    u8 unknown_0[0x5f4];  // (not used here)
    u32 word_5f4;
};
GUEST_OFFSET(Object_00750994_0, word_5f4, 0x5f4);  // (from the original)


u32 f_00750994(gptr<Object_00750994_0> arg0) {
    u32 r0_1 = arg0->word_5f4;
    if (r0_1 == 0) {
        return 0xffu;  // (from the original)
    }
    u32 r0_2 = *gptr<s8>(r0_1);
    if (r0_2 >= 0xffu) {  // (from the original)
        r0_2 = 0u;
    }
    return r0_2 & 0xffu;  // (from the original)
}

}  // namespace d_00750994
GUEST_EXPORT(0x00750994, d_00750994::f_00750994);

// f_00750d40: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00750d40 {

struct __attribute__((packed)) Object_00750d40_0 {
    u8 unknown_0[0x554];  // (not used here)
    u32 word_554;
    u8 unknown_558[0xc];  // (not used here)
    u32 word_564;
    u8 unknown_568[0xc];  // (not used here)
    u32 word_574;
};
GUEST_OFFSET(Object_00750d40_0, word_554, 0x554);  // (from the original)
GUEST_OFFSET(Object_00750d40_0, word_564, 0x564);  // (from the original)
GUEST_OFFSET(Object_00750d40_0, word_574, 0x574);  // (from the original)

struct __attribute__((packed)) Object_00750d40_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Object_00750d40_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_00750d40_1, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_00750d40_1, word_8, 0x8);  // (from the original)


void f_00750d40(gptr<Object_00750d40_0> arg0, gptr<Object_00750d40_1> arg1) {
    if (arg1.addr() == 0) {
        return;
    }
    arg1->word_0 = arg0->word_554;
    arg1->word_4 = arg0->word_564;
    arg1->word_8 = arg0->word_574;
}

}  // namespace d_00750d40
GUEST_EXPORT(0x00750d40, d_00750d40::f_00750d40);

// f_00750da8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00750da8 {

inline constexpr guest::Function<0x0014f3cc, u32(u32, u32, u32)> call_0014f3cc;  // (from the original)

void f_00750da8(u32 r0, u32 r1) {
    call_0014f3cc(r1, r0 + 0x548u, guest::cpu()->r[2]);  // (from the original)
}

}  // namespace d_00750da8
GUEST_EXPORT(0x00750da8, d_00750da8::f_00750da8);

// f_00750e1c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00750e1c {

struct __attribute__((packed)) Local_00750e1c_r6_1 {
    u8 unknown_0[0xc];  // (not used here)
    u16 half_c;
    u16 half_e;
};
GUEST_OFFSET(Local_00750e1c_r6_1, half_c, 0xc);  // (from the original)
GUEST_OFFSET(Local_00750e1c_r6_1, half_e, 0xe);  // (from the original)

inline constexpr guest::Function<0x004e958c, u32(u32, u32)> call_004e958c;  // (from the original)
inline constexpr guest::Function<0x004ea048, u32(u32)> call_004ea048;  // (from the original)
inline constexpr guest::Function<0x0056a224, u32(u32, u32)> call_0056a224;  // (from the original)
inline constexpr guest::Function<0x00691598, u32(u32)> call_00691598;  // (from the original)
inline constexpr guest::Function<0x00751578, u32(u32, u32, u32, u32)> call_00751578;  // (from the original)

u32 f_00750e1c(u32 r0, u32 r1, float S0) {
    guest::StackFrame frame(0x18);  // the original's stack frame
    u32 r0_4 = 0;
    u32 r0_1 = call_00751578(r0, frame.at(4).addr(), guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_2 = call_004ea048(r0_1);
    gptr<Local_00750e1c_r6_1> r6_1 = gptr<Local_00750e1c_r6_1>(r0 + 0x600u);  // (from the original)
    u32 r1_2 = s16(r6_1->half_c);
    u32 r0_3 = call_004e958c(r0_2, r1_2);
    if (r0_3 == 0) {
        r0_4 = *gptr<u16>(r0 + 0x2eu);  // (from the original)
        *frame.at<u16>(0) = u16(r0_4);
    } else {
        u32 r0_5 = u32(*gptr<u16>(r0_3 + 0x2eu)) + u32(r6_1->half_e);  // (from the original)
        *frame.at<u16>(0) = u16(r0_5);
        r0_4 = uxth(r0_5);
    }
    *frame.at<u32>(0x10) = r0_4;  // (from the original)
    u32 r0_7 = call_00691598(frame.at(0x10).addr());  // (from the original)
    *frame.at<u16>(0) = u16(r0_7 << 0xe);  // (from the original)
    u32 r1_3 = *frame.at<u32>(0);
    u32 r0_9 = call_0056a224(frame.at(4).addr(), r1_3);
    *gptr<u32>(r1) = std::bit_cast<u32>(fabsf(std::bit_cast<float>(*frame.at<u32>(4))));
    *gptr<u32>(r1 + 4u) = std::bit_cast<u32>(fabsf(std::bit_cast<float>(*frame.at<u32>(8))));
    float S0_5 = fabsf(std::bit_cast<float>(*frame.at<u32>(0xc)));  // (from the original)
    *gptr<u32>(r1 + 8u) = std::bit_cast<u32>(S0_5);
    guest::cpu()->s[0] = S0_5;
    return r0_9;
}

}  // namespace d_00750e1c
GUEST_EXPORT_FRAMED(0x00750e1c, d_00750e1c::f_00750e1c, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_00750eb4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00750eb4 {

struct __attribute__((packed)) Object_00750eb4_0 {
    u8 unknown_0[0x5f4];  // (not used here)
    u32 word_5f4;
};
GUEST_OFFSET(Object_00750eb4_0, word_5f4, 0x5f4);  // (from the original)


u32 f_00750eb4(gptr<Object_00750eb4_0> arg0) {
    u32 r0_1 = arg0->word_5f4;
    if (r0_1 == 0) {
        return r0_1;
    }
    return u32(*gptr<u8>(r0_1 + 4u)) >> 3u & 1u;
}

}  // namespace d_00750eb4
GUEST_EXPORT(0x00750eb4, d_00750eb4::f_00750eb4);

// f_00750ed0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00750ed0 {

struct __attribute__((packed)) Local_00750ed0_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_00750ed0_ea_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_00750ed0_ea_1, word_4, 0x4);  // (from the original)

inline constexpr guest::Function<0x002fcaf4, u32(u32, u32, u32, u32)> call_002fcaf4;  // (from the original)
inline constexpr guest::Function<0x002feb00, u32(u32, u32, u32, u32)> call_002feb00;  // (from the original)
inline constexpr guest::Function<0x005757d4, u32(u32, u32, u32, u32)> call_005757d4;  // (from the original)
inline constexpr guest::Function<0x006a5e34, u32(u32, u32, u32, u32)> call_006a5e34;  // (from the original)
inline constexpr guest::Function<0x007500c8, u32(u32, u32, u32, u32)> call_007500c8;  // (from the original)
inline constexpr guest::Function<0x00751240, u32(u32, u32, u32, u32)> call_00751240;  // (from the original)

u32 f_00750ed0(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0xe0);  // the original's stack frame
    u32 r6 = guest::cpu()->r[6];
    u32 r0_1 = call_006a5e34(r0, r1, r2, r3);
    u32 r1_1 = guest::cpu()->r[1];
    u32 r5 = r0_1;
    if (r0_1 != 0) {
        if (*gptr<u32>(r0 + 0x5f0u) != 0) {  // (from the original)
            u32 r0_2 = call_00751240(r0, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
            r1_1 = guest::cpu()->r[1];
            if (r0_2 != 0) {
                call_005757d4(frame.at(8).addr(), r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
                *frame.at<u16>(4) = 0;
                *frame.at<u32>(0) = 0;
                call_007500c8(r0, frame.at(8).addr(), 0u, frame.at(4).addr());
                r1_1 = guest::cpu()->r[1];
                u32 r0_4 = *frame.at<u32>(8);
                u32 r4 = 0u;
                u32 zf_1 = r0_4 == 0;
                u32 cf_1 = r0_4 >= 0u;
                if (cf_1 && !zf_1) {
                    r6 = frame.at(8).addr();
                }
                if (!!cf_1 && !zf_1) {
                    do {
                        gptr<Local_00750ed0_ea_1> ea_1 = gptr<Local_00750ed0_ea_1>(r6 + (r4 << 3) + 0x14u);  // (from the original)
                        u32 r0_5 = call_002feb00(r5, ea_1->word_0, ea_1->word_4, 1u);
                        r1_1 = guest::cpu()->r[1];
                        if (r0_5 != 0) {
                            u32 r0_6 = call_002fcaf4(r0_5, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
                            r1_1 = guest::cpu()->r[1];
                            if (r0_6 == 0) {
                                return 1u;
                            }
                        }
                        r4 += 1u;
                        guest::preempt();
                    } while (*frame.at<u32>(8) > r4);
                }
            }
        }
        r0_1 = 0u;
    }
    guest::cpu()->r[1] = r1_1;
    return r0_1;
}

}  // namespace d_00750ed0
GUEST_EXPORT_FRAMED(0x00750ed0, d_00750ed0::f_00750ed0, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_00751410: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00751410 {

struct __attribute__((packed)) Local_00751410_r0_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_00751410_r0_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_00751410_r0_1, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_00751410_r0_1, word_8, 0x8);  // (from the original)

struct __attribute__((packed)) Local_00751410_r5_1 {
    u8 unknown_0[0x554];  // (not used here)
    u32 word_554;
    u8 unknown_558[0xc];  // (not used here)
    u32 word_564;
    u8 unknown_568[0xc];  // (not used here)
    u32 word_574;
};
GUEST_OFFSET(Local_00751410_r5_1, word_554, 0x554);  // (from the original)
GUEST_OFFSET(Local_00751410_r5_1, word_564, 0x564);  // (from the original)
GUEST_OFFSET(Local_00751410_r5_1, word_574, 0x574);  // (from the original)

inline guest::global<u32, 0x007514f4> global_007514f4;  // (from the original)
inline guest::global<u32, 0x007514fc> global_007514fc;  // (from the original)
inline guest::global<u32, 0x0085f2d4> global_0085f2d4;  // (from the original)
inline constexpr guest::Function<0x0014f3cc, u32(u32, u32, u32)> call_0014f3cc;  // (from the original)
inline constexpr guest::Function<0x00748534, u32(u32, u32, u32, u32)> call_00748534;  // (from the original)
inline constexpr guest::Function<0x00750a48, u32(u32, u32, u32, u32)> call_00750a48;  // (from the original)

u32 f_00751410(gptr<AcFtr> arg0, u32 r1, u32 r2, u32 r3, float S0, float S1, float S2) {
    guest::StackFrame frame(0x40);  // the original's stack frame
    u32 r0 = arg0.addr();
    u32 r3_1 = 0;
    u32 r1_1 = 0;
    gptr<Local_00751410_r5_1> r5_1 = gptr<Local_00751410_r5_1>(r0);
    r0 = arg0->word_5f0;
    u32 r4 = r1;
    if (r0 == 0) {
        goto L_751484;
    }
    r0 = call_00748534(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    if (r0 == 0 || r2 == 1u) {
        goto L_751484;
    }
    *frame.at<u16>(0x3c) = 0;  // (from the original)
    r3_1 = frame.at(0x3c).addr();  // (from the original)
    r1_1 = frame.at(0).addr();
    call_00750a48(r5_1.addr(), r1_1, 0u, r3_1);
    r1 = guest::cpu()->r[1];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    if (r2 == 2u) {
        goto L_7514a4;
    }
    *gptr<u32>(r4) = *frame.at<u32>(0xc);  // (from the original)
    *gptr<u32>(r4 + 4u) = *frame.at<u32>(0x1c);  // (from the original)
    r0 = *frame.at<u32>(0x2c);  // (from the original)
    *gptr<u32>(r4 + 8u) = r0;
    return r0;
L_751484:;
    if (r4 == 0) {
        guest::cpu()->r[1] = r1;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        return r0;
    }
    *gptr<u32>(r4) = r5_1->word_554;
    r1 = r5_1->word_564;
    *gptr<u32>(r4 + 4u) = r1;
    r0 = r5_1->word_574;
    *gptr<u32>(r4 + 8u) = r0;
    guest::cpu()->r[1] = r1;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return r0;
L_7514a4:;
    gptr<Local_00751410_r0_1> r0_1 = gptr<Local_00751410_r0_1>(frame.at(0x30).addr());  // (from the original)
    float S2_2 = std::bit_cast<float>(*global_0085f2d4) * std::bit_cast<float>(*global_007514f4);
    float S0_1 = std::bit_cast<float>(*global_007514fc);
    r0_1->word_0 = std::bit_cast<u32>(S0_1);
    r0_1->word_4 = std::bit_cast<u32>(S0_1);
    r0_1->word_8 = std::bit_cast<u32>(S2_2);
    u32 r0_2 = frame.at(0x30).addr();  // (from the original)
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S0_1;
    call_0014f3cc(r0_2, frame.at(0).addr(), r0_2);
    *gptr<u32>(r4) = *frame.at<u32>(0x30);  // (from the original)
    *gptr<u32>(r4 + 4u) = *frame.at<u32>(0x34);  // (from the original)
    u32 r0_3 = *frame.at<u32>(0x38);  // (from the original)
    *gptr<u32>(r4 + 8u) = r0_3;
    return r0_3;
}

}  // namespace d_00751410
GUEST_EXPORT_FRAMED(0x00751410, d_00751410::f_00751410, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_007516f8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_007516f8 {

struct __attribute__((packed)) Local_007516f8_r4_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_007516f8_r4_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_007516f8_r4_1, word_4, 0x4);  // (from the original)

inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> call_002f74c8;  // (from the original)
inline constexpr guest::Function<0x002fc934, u32(u32, u32, u32, u32)> call_002fc934;  // (from the original)
inline constexpr guest::Function<0x002fe574, u32(u32, u32)> call_002fe574;  // (from the original)
inline constexpr guest::Function<0x002fe7cc, u32(u32, u32, u32, u32)> call_002fe7cc;  // (from the original)
inline constexpr guest::Function<0x002feb00, u32(u32, u32, u32, u32)> call_002feb00;  // (from the original)
inline constexpr guest::Function<0x00691598, u32(u32, u32, u32, u32)> call_00691598;  // (from the original)
inline constexpr guest::Function<0x006b9da4, u32(u32, u32, u32, u32)> call_006b9da4;  // (from the original)
inline constexpr guest::Function<0x006f9638, u32(u32, u32, u32, u32)> call_006f9638;  // (from the original)
inline constexpr guest::Function<0x0075127c, u32(u32, u32, u32, u32)> call_0075127c;  // (from the original)
inline constexpr guest::Function<0x0076936c, u32(u32, u32)> call_0076936c;  // (from the original)

u32 f_007516f8(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x14);  // the original's stack frame
    u32 r0_1 = call_002f74c8(r0, r1, r2, r3);
    u32 r0_2 = call_006f9638(r0_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_3 = call_002fe7cc(r0_2, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_5 = call_006f9638(r0_1 - 1u & 0xffu, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_6 = call_002fe7cc(r0_5, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_8 = call_00691598(r0 + 0x2eu, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    call_002fc934(frame.at(0xc).addr(), r0 + 0x5e4u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    call_006b9da4(frame.at(0xc).addr(), r0_8, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    *frame.at<u16>(0x10) = 0;  // (from the original)
    *frame.at<u32>(0) = frame.at(0x10).addr();  // (from the original)
    call_0075127c(r0, frame.at(4).addr(), frame.at(8).addr(), 0u);
    u32 r1_8 = guest::cpu()->r[1];
    if (r0_3 != 0 && r0_6 != 0) {
        gptr<Local_007516f8_r4_1> r4_1 = gptr<Local_007516f8_r4_1>(frame.at(4).addr());
        u32 r0_11 = call_002feb00(r0_3, r4_1->word_0, r4_1->word_4, 0u);
        u32 r0_12 = call_002feb00(r0_6, r4_1->word_0, r4_1->word_4, 0u);
        r1_8 = guest::cpu()->r[1];
        u32 zf_1 = r0_11 == 0;
        if (!zf_1) {
            zf_1 = r0_12 == 0;
        }
        if (!zf_1) {
            u32 r0_13 = call_002fe574(r0_11, r0_12);
            r1_8 = guest::cpu()->r[1];
            if (r0_13 != 0) {
                u32 r0_14 = call_0076936c(r0_12, r1_8);
                r1_8 = guest::cpu()->r[1];
                if (r0_14 == r0_8) {
                    return 1u;
                }
            }
        }
    }
    guest::cpu()->r[1] = r1_8;
    return 0u;
}

}  // namespace d_007516f8
GUEST_EXPORT_FRAMED(0x007516f8, d_007516f8::f_007516f8, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_00751864: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00751864 {


u32 f_00751864(u32 r0, u32 r1) {
    return r0 + (r1 << 3) + 0x14u;  // (from the original)
}

}  // namespace d_00751864
GUEST_EXPORT(0x00751864, d_00751864::f_00751864);

// f_00751d9c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00751d9c {

inline constexpr guest::Function<0x0076f550, u32(u32, u32)> call_0076f550;  // (from the original)

u32 f_00751d9c(gptr<AcNpc_rec> arg0) {
    u32 r1_1 = u32(*gptr<u8>(arg0->word_660 + 0x224u)) >> 1u & 1u;  // (from the original)
    if (r1_1 == 0) {
        guest::cpu()->r[1] = r1_1;
        return 0u;
    }
    return call_0076f550(arg0.addr(), r1_1);
}

}  // namespace d_00751d9c
GUEST_EXPORT(0x00751d9c, d_00751d9c::f_00751d9c);

// f_00751f40: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00751f40 {

struct __attribute__((packed)) Local_00751f40_r0_2 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_00751f40_r0_2, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_00751f40_r0_2, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_00751f40_r0_2, word_8, 0x8);  // (from the original)

struct __attribute__((packed)) Local_00751f40_r4_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_00751f40_r4_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_00751f40_r4_1, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_00751f40_r4_1, word_8, 0x8);  // (from the original)

inline guest::global<u32, 0x00751fd0> global_00751fd0;  // (from the original)
inline guest::global<u32, 0x00751fd4> global_00751fd4;  // (from the original)
inline guest::global<u32, 0x0085f2cc> global_0085f2cc;  // (from the original)
inline constexpr guest::Function<0x005c2ce0, u32(u32, u32, u32, u32)> call_005c2ce0;  // (from the original)

u32 f_00751f40(u32 r0, u32 r1, u32 r2, u32 r3, float S0, float S1, float S2, float S3, float S4, float S5) {
    guest::StackFrame frame(0xc);  // the original's stack frame
    gptr<Local_00751f40_r4_1> r4_1 = gptr<Local_00751f40_r4_1>(r2);
    u32 r0_1 = call_005c2ce0(r1, r3, r2, r3);
    if (r4_1.addr() == 0) {
        r4_1 = gptr<Local_00751f40_r4_1>(r0 + 0x14u);  // (from the original)
    }
    if (r0_1 != 0) {
        float S3_1 = std::bit_cast<float>(*gptr<u32>(r0_1));
        float S4_1 = std::bit_cast<float>(*gptr<u32>(r0_1 + 4));
        float S2_1 = std::bit_cast<float>(r4_1->word_8) - std::bit_cast<float>(*gptr<u32>(r0_1 + 8u));
        gptr<Local_00751f40_r0_2> r0_2 = gptr<Local_00751f40_r0_2>(frame.at(0).addr());
        float S1_1 = std::bit_cast<float>(r4_1->word_4) - S4_1;
        r0_2->word_0 = std::bit_cast<u32>(std::bit_cast<float>(r4_1->word_0) - S3_1);
        r0_2->word_4 = std::bit_cast<u32>(S1_1);
        r0_2->word_8 = std::bit_cast<u32>(S2_1);
        float S1_2 = std::bit_cast<float>(*frame.at<u32>(0));
        float S0_1 = std::bit_cast<float>(*frame.at<u32>(8));
        float S1_3 = S1_2 * S1_2 + S0_1 * S0_1;
        float S0_2 = sqrtf(S1_3);
        guest::cpu()->s[0] = S0_2;
        guest::cpu()->s[1] = S1_3;
        return r0_2.addr();
    }
    float S1_4 = std::bit_cast<float>(*global_0085f2cc) * std::bit_cast<float>(*global_00751fd0);
    float S0_3 = S1_4 * std::bit_cast<float>(*global_00751fd4);
    guest::cpu()->s[0] = S0_3;
    guest::cpu()->s[1] = S1_4;
    return 0x85f2ccu;  // (from the original)
}

}  // namespace d_00751f40
GUEST_EXPORT_FRAMED(0x00751f40, d_00751f40::f_00751f40, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_0075221c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0075221c {


u32 f_0075221c(gptr<AcNpc_rec> arg0) {
    u32 r1_1 = u32(*gptr<u8>(arg0->word_660 + 0x224u)) >> 2u & 1u;  // (from the original)
    if (r1_1 == 0) {
        guest::cpu()->r[1] = r1_1;
        return 0u;
    }
    u32 r1_2 = u32(arg0->byte_b07) >> 7;
    if (r1_2 != 0) {
        guest::cpu()->r[1] = r1_2;
        return arg0.addr() + 0x80cu;  // (from the original)
    }
    u32 r1_3 = *gptr<u32>(arg0->word_0 + 0x5cu);  // (from the original)
    // virtual function 23 of arg0.addr() (AcNpc_rec)
    return guest::call_address<u32>(r1_3, arg0.addr(), r1_3, guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0075221c
GUEST_EXPORT(0x0075221c, d_0075221c::f_0075221c);

// f_007523a8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_007523a8 {

inline constexpr guest::Function<0x00300904, u32(u32)> call_00300904;  // (from the original)
inline constexpr guest::Function<0x0071262c, u32(u32)> call_0071262c;  // (from the original)

u32 f_007523a8(u32 r0) {
    u32 r0_1 = call_00300904(r0);
    if (r0_1 != 0) {
        u32 res_1 = u32(*gptr<u8>(r0 + 0xb07u)) >> 3u & 1u;  // (from the original)
        u32 zf_1 = res_1 == 0;
        u32 r0_2 = res_1;
        if (!zf_1) {
            r0_2 = *gptr<u32>(r0 + 0xaa0u);  // (from the original)
            zf_1 = r0_2 == 0;
        }
        if (!zf_1) {
            u32 r0_3 = call_0071262c(r0_2);
            if (r0_3 != 0) {
                if ((u32(*gptr<u8>((r0 + 0xb06u) + 2u)) >> 4u & 1u) == 0) {  // (from the original)
                    return 1u;
                }
            }
            return 0u;
        }
    }
    return 1u;
}

}  // namespace d_007523a8
GUEST_EXPORT_FRAMED(0x007523a8, d_007523a8::f_007523a8, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0075256c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0075256c {

struct __attribute__((packed)) Object_0075256c_0 {
    u32 word_0;
    u8 unknown_4[0x4];  // (not used here)
    u32 word_8;
    u32 word_c;
    u8 unknown_10[0x4];  // (not used here)
    u32 word_14;
};
GUEST_OFFSET(Object_0075256c_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_0075256c_0, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_0075256c_0, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_0075256c_0, word_14, 0x14);  // (from the original)

struct __attribute__((packed)) Object_0075256c_1 {
    u8 unknown_0[0x14];  // (not used here)
    u32 word_14;
    u8 unknown_18[0x4];  // (not used here)
    u32 word_1c;
};
GUEST_OFFSET(Object_0075256c_1, word_14, 0x14);  // (from the original)
GUEST_OFFSET(Object_0075256c_1, word_1c, 0x1c);  // (from the original)

struct __attribute__((packed)) Local_0075256c_r1_2 {
    u32 word_0;
    u8 unknown_4[0x4];  // (not used here)
    u32 word_8;
};
GUEST_OFFSET(Local_0075256c_r1_2, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_0075256c_r1_2, word_8, 0x8);  // (from the original)

inline guest::global<u32, 0x0094edd8> global_0094edd8;  // (from the original)

u32 f_0075256c(gptr<Object_0075256c_0> arg0, gptr<Object_0075256c_1> arg1, float S0, float S1) {
    u32 fpsr = guest::cpu()->fpscr;
    u32 r1_1 = *global_0094edd8;
    if (r1_1 == 0) {
        guest::cpu()->r[1] = r1_1;
        return 0u;
    }
    float S1_1 = std::bit_cast<float>(arg1->word_14);
    gptr<Local_0075256c_r1_2> r1_2 = gptr<Local_0075256c_r1_2>(*gptr<u32>(r1_1 + 0x1a4u) + 0x24u);  // (from the original)
    float S0_1 = std::bit_cast<float>(r1_2->word_0);
    u32 fpsr_1 = fpsr & 0xfffffffu | vfp_cmpf(S1_1, S0_1 + std::bit_cast<float>(arg0->word_0));  // (from the original)
    if (fpsr_1 >> 0x1e & 1 || fpsr_1 >> 0x1f != (fpsr_1 >> 0x1c & 1)) {  // (from the original)
        guest::cpu()->r[1] = r1_2.addr();
        guest::cpu()->s[0] = S0_1;
        guest::cpu()->s[1] = S1_1;
        return 1u;
    }
    float S0_2 = S0_1 + std::bit_cast<float>(arg0->word_c);
    u32 fpsr_2 = fpsr_1 & 0xfffffffu | vfp_cmpf(S0_2, S1_1);  // (from the original)
    if (fpsr_2 >> 0x1e & 1 || fpsr_2 >> 0x1f != (fpsr_2 >> 0x1c & 1)) {  // (from the original)
        guest::cpu()->r[1] = r1_2.addr();
        guest::cpu()->s[0] = S0_2;
        guest::cpu()->s[1] = S1_1;
        return 1u;
    }
    float S0_3 = std::bit_cast<float>(r1_2->word_8);
    float S1_2 = std::bit_cast<float>(arg1->word_1c);
    u32 fpsr_3 = fpsr_2 & 0xfffffffu | vfp_cmpf(S0_3 + std::bit_cast<float>(arg0->word_8), S1_2);  // (from the original)
    if (fpsr_3 >> 0x1d & 1) {  // (from the original)
        guest::cpu()->r[1] = r1_2.addr();
        guest::cpu()->s[0] = S0_3;
        guest::cpu()->s[1] = S1_2;
        return 1u;
    }
    float S0_4 = S0_3 + std::bit_cast<float>(arg0->word_14);
    u32 fpsr_4 = fpsr_3 & 0xfffffffu | vfp_cmpf(S0_4, S1_2);  // (from the original)
    if (fpsr_4 >> 0x1e & 1 || fpsr_4 >> 0x1f != (fpsr_4 >> 0x1c & 1)) {  // (from the original)
        guest::cpu()->r[1] = r1_2.addr();
        guest::cpu()->s[0] = S0_4;
        guest::cpu()->s[1] = S1_2;
        return 1u;
    }
    guest::cpu()->r[1] = r1_2.addr();
    guest::cpu()->s[0] = S0_4;
    guest::cpu()->s[1] = S1_2;
    return 0u;
}

}  // namespace d_0075256c
GUEST_EXPORT(0x0075256c, d_0075256c::f_0075256c);

// f_007525fc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_007525fc {

struct __attribute__((packed)) Object_007525fc_0 {
    u32 word_0;
    u8 unknown_4[0x4];  // (not used here)
    u32 word_8;
    u32 word_c;
    u8 unknown_10[0x4];  // (not used here)
    u32 word_14;
};
GUEST_OFFSET(Object_007525fc_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_007525fc_0, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_007525fc_0, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_007525fc_0, word_14, 0x14);  // (from the original)

struct __attribute__((packed)) Local_007525fc_r2_2 {
    u32 word_0;
    u8 unknown_4[0x4];  // (not used here)
    u32 word_8;
};
GUEST_OFFSET(Local_007525fc_r2_2, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_007525fc_r2_2, word_8, 0x8);  // (from the original)

inline guest::global<u32, 0x0094edd8> global_0094edd8;  // (from the original)

u32 f_007525fc(gptr<Object_007525fc_0> arg0, gptr<Float3> arg1, float S0, float S1) {
    u32 fpsr = guest::cpu()->fpscr;
    u32 r2_1 = *global_0094edd8;
    if (r2_1 == 0) {
        return 0u;
    }
    float S1_1 = arg1->v[0];
    gptr<Local_007525fc_r2_2> r2_2 = gptr<Local_007525fc_r2_2>(*gptr<u32>(r2_1 + 0x1a4u) + 0x24u);  // (from the original)
    float S0_1 = std::bit_cast<float>(r2_2->word_0);
    u32 fpsr_1 = fpsr & 0xfffffffu | vfp_cmpf(S1_1, S0_1 + std::bit_cast<float>(arg0->word_0));  // (from the original)
    if (fpsr_1 >> 0x1e & 1 || fpsr_1 >> 0x1f != (fpsr_1 >> 0x1c & 1)) {  // (from the original)
        guest::cpu()->s[0] = S0_1;
        guest::cpu()->s[1] = S1_1;
        return 1u;
    }
    float S0_2 = S0_1 + std::bit_cast<float>(arg0->word_c);
    u32 fpsr_2 = fpsr_1 & 0xfffffffu | vfp_cmpf(S0_2, S1_1);  // (from the original)
    if (fpsr_2 >> 0x1e & 1 || fpsr_2 >> 0x1f != (fpsr_2 >> 0x1c & 1)) {  // (from the original)
        guest::cpu()->s[0] = S0_2;
        guest::cpu()->s[1] = S1_1;
        return 1u;
    }
    float S0_3 = std::bit_cast<float>(r2_2->word_8);
    float S1_2 = arg1->v[2];
    u32 fpsr_3 = fpsr_2 & 0xfffffffu | vfp_cmpf(S0_3 + std::bit_cast<float>(arg0->word_8), S1_2);  // (from the original)
    if (fpsr_3 >> 0x1d & 1) {  // (from the original)
        guest::cpu()->s[0] = S0_3;
        guest::cpu()->s[1] = S1_2;
        return 1u;
    }
    float S0_4 = S0_3 + std::bit_cast<float>(arg0->word_14);
    u32 fpsr_4 = fpsr_3 & 0xfffffffu | vfp_cmpf(S0_4, S1_2);  // (from the original)
    if (fpsr_4 >> 0x1e & 1 || fpsr_4 >> 0x1f != (fpsr_4 >> 0x1c & 1)) {  // (from the original)
        guest::cpu()->s[0] = S0_4;
        guest::cpu()->s[1] = S1_2;
        return 1u;
    }
    guest::cpu()->s[0] = S0_4;
    guest::cpu()->s[1] = S1_2;
    return 0u;
}

}  // namespace d_007525fc
GUEST_EXPORT(0x007525fc, d_007525fc::f_007525fc);

// f_007526bc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_007526bc {

struct __attribute__((packed)) Object_007526bc_0 {
    u8 unknown_0[0x1c];  // (not used here)
    u32 word_1c;
    u8 unknown_20[0x48];  // (not used here)
    u32 word_68;
    u8 unknown_6c[0xa78];  // (not used here)
    u32 word_ae4;
    u8 unknown_ae8[0x20];  // (not used here)
    u8 byte_b08;
};
GUEST_OFFSET(Object_007526bc_0, word_1c, 0x1c);  // (from the original)
GUEST_OFFSET(Object_007526bc_0, word_68, 0x68);  // (from the original)
GUEST_OFFSET(Object_007526bc_0, word_ae4, 0xae4);  // (from the original)
GUEST_OFFSET(Object_007526bc_0, byte_b08, 0xb08);  // (from the original)

struct __attribute__((packed)) Local_007526bc_r0_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_007526bc_r0_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_007526bc_r0_1, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_007526bc_r0_1, word_8, 0x8);  // (from the original)

inline guest::global<u32, 0x007527b4> global_007527b4;  // (from the original)
inline guest::global<u32, 0x007527b8> global_007527b8;  // (from the original)
inline guest::global<u32, 0x007527bc> global_007527bc;  // (from the original)
inline guest::global<u32, 0x007527c8> global_007527c8;  // (from the original)
inline guest::global<u32, 0x007527cc> global_007527cc;  // (from the original)
inline guest::global<u32, 0x007527d0> global_007527d0;  // (from the original)
inline guest::global<u32, 0x0094edd8> global_0094edd8;  // (from the original)
inline guest::global<u32, 0x00aaf198> global_00aaf198;  // (from the original)
inline constexpr guest::Function<0x0014f3cc, u32(u32, u32, u32)> call_0014f3cc;  // (from the original)
inline constexpr guest::Function<0x0056afe8, u32(u32)> call_0056afe8;  // (from the original)
inline constexpr guest::Function<0x00744ce4, u32(u32, u32)> call_00744ce4;  // (from the original)
inline constexpr guest::Function<0x00745f80, u32(u32, u32, u32, u32)> call_00745f80;  // (from the original)

u32 f_007526bc(gptr<Object_007526bc_0> arg0, float S0, float S1, float S2_unused, float S3) {
    guest::StackFrame frame(0x20);  // the original's stack frame
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 r5_1 = *global_0094edd8;
    if (r5_1 != 0) {
        gptr<Local_007526bc_r0_1> r0_1 = gptr<Local_007526bc_r0_1>(frame.at(0x10).addr());  // (from the original)
        float S0_1 = std::bit_cast<float>(*global_007527b4);
        float S1_1 = std::bit_cast<float>(*global_007527b8);
        r0_1->word_0 = std::bit_cast<u32>(S0_1);
        r0_1->word_4 = std::bit_cast<u32>(S1_1);
        r0_1->word_8 = std::bit_cast<u32>(S0_1);
        u32 r1_1 = r0_1->word_0;
        u32 r2_1 = r0_1->word_4;
        u32 r6_1 = frame.at(0).addr();
        float S0_2 = std::bit_cast<float>(*global_007527bc);
        *frame.at<u32>(8) = r0_1->word_8;
        *frame.at<u32>(0) = r1_1;
        *frame.at<u32>(4) = r2_1;
        *frame.at<u32>(0xc) = std::bit_cast<u32>(S0_2);  // (from the original)
        u32 r0_2 = arg0->word_68 + 0x78u;  // (from the original)
        guest::cpu()->s[0] = S0_2;
        guest::cpu()->s[1] = S1_1;
        guest::cpu()->s[2] = S0_1;
        u32 r0_3 = call_00745f80(r0_2, r1_1, r2_1, guest::cpu()->r[3]);
        call_0014f3cc(r6_1, r0_3, r6_1);
        r0_5 = call_00744ce4(r5_1 + 0x1acu, frame.at(0).addr());  // (from the original)
        S0 = guest::cpu()->s[0];
        S1 = guest::cpu()->s[1];
        if (r0_5 == 0) {
            return r0_5;
        }
        if (s32(*global_00aaf198) <= s32(0x3f7d70a4u) && s32(0x3f7d70a4u) <= s32(arg0->word_ae4)) {  // (from the original)
            r0_6 = 0u;
            goto L_752760;
        }
        r0_6 = 1u;
L_752760:;
        float S2_2 = std::bit_cast<float>(*global_007527cc);
        S1 = std::bit_cast<float>(*global_007527c8);
        S0 = std::bit_cast<float>(arg0->word_1c) - std::bit_cast<float>(*gptr<u32>(*gptr<u32>(r5_1 + 0x1a4u) + 0x2cu));  // (from the original)
        if (r0_6 != 0) {
            S1 = S2_2;
        }
        float S2_3 = std::bit_cast<float>(*global_007527d0);
        u32 r0_7 = u32(arg0->byte_b08) >> 6u & 1u;
        if (r0_7 != 0) {
            guest::cpu()->s[0] = S0;
            guest::cpu()->s[1] = S1;
            guest::cpu()->s[2] = S2_3;
            r0_5 = call_0056afe8(r0_7);
            S0 = guest::cpu()->s[0];
            S1 = guest::cpu()->s[1];
            if (r0_5 == 0) {
                return r0_5;
            }
        }
    }
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return 1u;
}

}  // namespace d_007526bc
GUEST_EXPORT_FRAMED(0x007526bc, d_007526bc::f_007526bc, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_00752990: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00752990 {

inline constexpr guest::Function<0x007482bc, u32(u32, u32)> call_007482bc;  // (from the original)

u32 f_00752990(u32 r0) {
    return call_007482bc(r0 + 0x10u, guest::cpu()->r[1]);  // (from the original)
}

}  // namespace d_00752990
GUEST_EXPORT(0x00752990, d_00752990::f_00752990);

// f_00752998: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00752998 {

inline constexpr guest::Function<0x00748310, u32(u32, u32)> call_00748310;  // (from the original)

u32 f_00752998(u32 r0) {
    return call_00748310(r0 + 0x10u, guest::cpu()->r[1]);  // (from the original)
}

}  // namespace d_00752998
GUEST_EXPORT(0x00752998, d_00752998::f_00752998);

// f_00752bf4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00752bf4 {

struct __attribute__((packed)) Object_00752bf4_0 {
    u8 unknown_0[0xa8];  // (not used here)
    u8 byte_a8;
};
GUEST_OFFSET(Object_00752bf4_0, byte_a8, 0xa8);  // (from the original)

inline constexpr guest::Function<0x00152a10, u32(u32, u32, u32, u32)> call_00152a10;  // (from the original)

u32 f_00752bf4(gptr<Object_00752bf4_0> arg0, u32 r1) {
    guest::StackFrame frame(0x48);  // the original's stack frame
    u32 r1_1 = arg0->byte_a8;
    if (r1_1 != 1u) {
        guest::cpu()->r[1] = r1_1;
        return 0u;
    }
    *frame.at<u32>(0) = 0;
    u32 r0_2 = call_00152a10(frame.at(4).addr(), 4u, arg0.addr(), 0u);
    if (r0_2 != 0) {
        return 0u;
    }
    u32 r0_3 = *frame.at<u32>(0x44);  // (from the original)
    *gptr<u8>(r1) = 0xff;  // (from the original)
    *gptr<u8>(r1 + 3u) = u8(r0_3);
    u32 r1_3 = r0_3 >> 8;
    *gptr<u8>(r1 + 2u) = u8(r1_3);
    *gptr<u8>(r1 + 1u) = u8(r0_3 >> 0x10);  // (from the original)
    guest::cpu()->r[1] = r1_3;
    return 1u;
}

}  // namespace d_00752bf4
GUEST_EXPORT_FRAMED(0x00752bf4, d_00752bf4::f_00752bf4, 0x4010);  // pushes {r4, lr} first, as the original

// f_007537c4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_007537c4 {

struct __attribute__((packed)) Object_007537c4_0 {
    u8 unknown_0[0x24];  // (not used here)
    u32 word_24;
    u32 word_28;
};
GUEST_OFFSET(Object_007537c4_0, word_24, 0x24);  // (from the original)
GUEST_OFFSET(Object_007537c4_0, word_28, 0x28);  // (from the original)


u32 f_007537c4(gptr<Object_007537c4_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r1_1 = arg0->word_24;
    u32 zf_1 = r1_1 == 0;
    if (zf_1) {
        r0 = arg0->word_28;
        zf_1 = r0 == 0;
    }
    if (!zf_1) {
        r0 = 1u;
    }
    guest::cpu()->r[1] = r1_1;
    return r0;
}

}  // namespace d_007537c4
GUEST_EXPORT(0x007537c4, d_007537c4::f_007537c4);

// f_00753c94: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00753c94 {


u32 f_00753c94(u32 r0, u32 r1, u32 r2) {
    u32 r1_1 = r1 + ((r2 << 3) - r2 << 4);
    u32 r2_1 = s32(r1_1) >> 5;
    u32 r1_2 = r1_1 & 0x1fu;  // (from the original)
    u32 r0_1 = *gptr<u32>(r0 + (r2_1 << 2) + 4u) & lsl_r(1u, r1_2 & 0xff);  // (from the original)
    if (r0_1 != 0) {
        r0_1 = 1u;
    }
    guest::cpu()->r[1] = r1_2;
    return r0_1;
}

}  // namespace d_00753c94
GUEST_EXPORT(0x00753c94, d_00753c94::f_00753c94);

// f_00753cbc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00753cbc {

struct __attribute__((packed)) Object_00753cbc_0 {
    u8 unknown_0[0x20];  // (not used here)
    u32 word_20;
    u32 word_24;
};
GUEST_OFFSET(Object_00753cbc_0, word_20, 0x20);  // (from the original)
GUEST_OFFSET(Object_00753cbc_0, word_24, 0x24);  // (from the original)


u32 f_00753cbc(gptr<Object_00753cbc_0> arg0) {
    u32 r1_1 = arg0->word_24;
    u32 r0_1 = arg0->word_20;
    guest::cpu()->r[1] = r1_1;
    return r0_1;
}

}  // namespace d_00753cbc
GUEST_EXPORT(0x00753cbc, d_00753cbc::f_00753cbc);

// f_00753ccc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00753ccc {

struct __attribute__((packed)) Object_00753ccc_0 {
    u8 unknown_0[0x64];  // (not used here)
    u32 word_64;
};
GUEST_OFFSET(Object_00753ccc_0, word_64, 0x64);  // (from the original)

inline constexpr guest::Function<0x0073663c, u32(u32, u32)> call_0073663c;  // (from the original)

u32 f_00753ccc(gptr<Object_00753ccc_0> arg0) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 r1 = 0;
    u32 r0_1 = arg0.addr() + 8u;
    if (arg0->word_64 == 0) {
        frame.release();
        return call_0073663c(r0_1, r1);
    }
    u32 r0_2 = call_0073663c(r0_1, r1);
    u32 r0_3 = arg0->word_64;
    return lsr_r(r0_2 + lsl_r(1u, r0_3 & 0xff) - 1u, r0_3 & 0xff);  // (from the original)
}

}  // namespace d_00753ccc
GUEST_EXPORT(0x00753ccc, d_00753ccc::f_00753ccc);

// f_00753d0c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00753d0c {

struct __attribute__((packed)) Object_00753d0c_0 {
    u8 unknown_0[0x64];  // (not used here)
    u32 word_64;
};
GUEST_OFFSET(Object_00753d0c_0, word_64, 0x64);  // (from the original)

inline constexpr guest::Function<0x0073666c, u32(u32, u32)> call_0073666c;  // (from the original)

u32 f_00753d0c(gptr<Object_00753d0c_0> arg0, u32 r1) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 r0_1 = arg0.addr() + 8u;
    if (arg0->word_64 == 0) {
        frame.release();
        return call_0073666c(r0_1, r1);
    }
    u32 r0_2 = call_0073666c(r0_1, r1);
    u32 r0_3 = arg0->word_64;
    u32 r1_1 = r0_2 + lsl_r(1u, r0_3 & 0xff) - 1u;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    return lsr_r(r1_1, r0_3 & 0xff);  // (from the original)
}

}  // namespace d_00753d0c
GUEST_EXPORT(0x00753d0c, d_00753d0c::f_00753d0c);

// f_00754080: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00754080 {

struct __attribute__((packed)) Object_00754080_0 {
    u8 unknown_0[0x30];  // (not used here)
    u32 word_30;
};
GUEST_OFFSET(Object_00754080_0, word_30, 0x30);  // (from the original)


u32 f_00754080(gptr<Object_00754080_0> arg0) {
    return (arg0->word_30 & 0xf80u) >> 7;  // (from the original)
}

}  // namespace d_00754080
GUEST_EXPORT(0x00754080, d_00754080::f_00754080);

// f_00754090: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00754090 {

struct __attribute__((packed)) Object_00754090_0 {
    u8 unknown_0[0x30];  // (not used here)
    u32 word_30;
};
GUEST_OFFSET(Object_00754090_0, word_30, 0x30);  // (from the original)


u32 f_00754090(gptr<Object_00754090_0> arg0) {
    return arg0->word_30 >> 0xcu & 0xffu;  // (from the original)
}

}  // namespace d_00754090
GUEST_EXPORT(0x00754090, d_00754090::f_00754090);

// f_00754100: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00754100 {

inline constexpr guest::Function<0x00754978, u32(u32, u32, u32, u32)> call_00754978;  // (from the original)
inline constexpr guest::Function<0x00754988, u32(u32, u32, u32, u32)> call_00754988;  // (from the original)

u32 f_00754100(u32 r0, u32 r1) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 r1_1 = r1 + (r1 << 3);
    u32 r4_1 = r0 + (r1_1 << 3);
    u32 r0_2 = call_00754978(r4_1 + 8u, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r1_2 = guest::cpu()->r[1];
    if (r0_2 == 0) {
        return r0_2;
    }
    frame.release();
    return call_00754988(r4_1 + 8u, r1_2, guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_00754100
GUEST_EXPORT(0x00754100, d_00754100::f_00754100);

// f_0075412c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0075412c {

struct __attribute__((packed)) Local_0075412c_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0075412c_ea_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_0075412c_ea_1, word_4, 0x4);  // (from the original)

struct __attribute__((packed)) Local_0075412c_ea_5 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0075412c_ea_5, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_0075412c_ea_5, word_4, 0x4);  // (from the original)

struct __attribute__((packed)) Local_0075412c_r2_2 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0075412c_r2_2, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_0075412c_r2_2, word_4, 0x4);  // (from the original)

struct __attribute__((packed)) Local_0075412c_r3_3 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0075412c_r3_3, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_0075412c_r3_3, word_4, 0x4);  // (from the original)

inline constexpr guest::Function<0x00142450, u32(u32, u32, u32, u32)> call_00142450;  // (from the original)
inline constexpr guest::Function<0x007541e8, u32(u32, u32, u32, u32)> call_007541e8;  // (from the original)

void f_0075412c(u32 r0, u32 r1, u32 r2, u32 r3, float S0, float S1) {
    u32 r4 = r1;
    u32 r6 = r2;
    u32 r0_1 = call_007541e8(r0, r1, r2, r3);
    float S0_1 = guest::cpu()->s[0];
    float S1_1 = guest::cpu()->s[1];
    u32 r0_2 = *gptr<u32>(r4 + 0x10u);  // (from the original)
    u32 r12 = *gptr<u32>(r4 + 0x14u);  // (from the original)
    u32 r3_1 = *gptr<u32>(r4 + 8u);
    u32 r0_3 = r12 - r0_2;
    u32 r5 = s32(r0_2 + (r0_1 << 3) - r0_2) >> 3;
    if (1u + u32(s32(r0_3) >> 3) > r3_1) {
        call_00142450(r4, u32(s32(r0_3) >> 3) + 1u, 1u, r3_1);
        r12 = guest::cpu()->r[12];
        S0_1 = guest::cpu()->s[0];
        S1_1 = guest::cpu()->s[1];
    }
    r1 = u32(s32(*gptr<u32>(r4 + 0x14u) - *gptr<u32>(r4 + 0x10u)) >> 3) - r5;  // (from the original)
    u32 zf_1 = r1 == 0;
    u32 cf_1 = r1 >= 0u;
    r0 = 0u;
    if (cf_1 && !zf_1) {
        r12 = ~7u;
    }
    if (!!cf_1 && !zf_1) {
        do {
            gptr<Local_0075412c_ea_1> ea_1 = gptr<Local_0075412c_ea_1>(r4 + 0x10u);  // (from the original)
            u32 r2_1 = ea_1->word_0;
            u32 r3_2 = u32(s32(ea_1->word_4 - r2_1) >> 3) - r0;
            r0 += 1u;
            gptr<Local_0075412c_r3_3> r3_3 = gptr<Local_0075412c_r3_3>(r2_1 + (r3_2 << 3));
            gptr<Local_0075412c_r2_2> r2_2 = gptr<Local_0075412c_r2_2>(r2_1 + (r12 + (r3_2 << 3)));
            S0_1 = std::bit_cast<float>(r2_2->word_0);
            S1_1 = std::bit_cast<float>(r2_2->word_4);
            r3_3->word_0 = std::bit_cast<u32>(S0_1);
            r3_3->word_4 = std::bit_cast<u32>(S1_1);
            guest::preempt();
        } while (r1 > r0);
    }
    *gptr<u32>(r4 + 0x14u) = *gptr<u32>(r4 + 0x14u) + 8u;  // (from the original)
    u32 r0_5 = *gptr<u32>(r4 + 0x10u);  // (from the original)
    u32 r1_3 = *gptr<u32>(r6);
    u32 r2_3 = *gptr<u32>(r6 + 4);
    gptr<Local_0075412c_ea_5> ea_5 = gptr<Local_0075412c_ea_5>(r0_5 + (r5 << 3));
    ea_5->word_0 = r1_3;
    ea_5->word_4 = r2_3;
    guest::cpu()->r[1] = r1_3;
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
}

}  // namespace d_0075412c
GUEST_EXPORT_FRAMED(0x0075412c, d_0075412c::f_0075412c, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_007544a4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_007544a4 {

struct __attribute__((packed)) Local_007544a4_r0_4 {
    u8 byte_0;
    u8 byte_1;
    u8 byte_2;
};
GUEST_OFFSET(Local_007544a4_r0_4, byte_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_007544a4_r0_4, byte_1, 0x1);  // (from the original)
GUEST_OFFSET(Local_007544a4_r0_4, byte_2, 0x2);  // (from the original)

inline guest::global<u32, 0x0098167c> global_0098167c;  // (from the original)
inline constexpr guest::Function<0x00100835, u32(u32, u32)> call_00100834;  // (from the original)
inline constexpr guest::Function<0x005af748, u32(u32, u32, u32)> call_005af748;  // (from the original)
inline constexpr guest::Function<0x00755504, u32(u32, u32)> call_00755504;  // (from the original)

u32 f_007544a4(u32 r0, u32 r1) {
    guest::StackFrame frame(0x18);  // the original's stack frame
    call_00755504(r0 + 0x10u, frame.at(0).addr());  // (from the original)
    u32 r0_3 = call_00100834(frame.at(0).addr(), guest::cpu()->r[1]);
    if (r0_3 != 8u) {
        return 0u;
    }
    u32 r1_4 = *frame.at<u16>(6);
    gptr<Local_007544a4_r0_4> r0_4 = gptr<Local_007544a4_r0_4>(*global_0098167c);
    if (u32(s8(r0_4->byte_0)) != r1_4) {
        guest::cpu()->r[1] = r1_4;
        return 0u;
    }
    u32 r1_5 = s8(r0_4->byte_1);
    if (r1_5 != *frame.at<u16>(8)) {
        guest::cpu()->r[1] = r1_5;
        return 0u;
    }
    u32 r1_6 = *frame.at<u16>(0xa);  // (from the original)
    if (u32(s8(r0_4->byte_2)) != r1_6) {
        guest::cpu()->r[1] = r1_6;
        return 0u;
    }
    u32 r0_6 = call_005af748(frame.at(0x14).addr(), frame.at(0xc).addr(), 2u);  // (from the original)
    if (r0_6 == 0) {
        return r0_6;
    }
    if (r1 != 0) {
        *gptr<u32>(r1) = *frame.at<u32>(0x14);  // (from the original)
    }
    return 1u;
}

}  // namespace d_007544a4
GUEST_EXPORT_FRAMED(0x007544a4, d_007544a4::f_007544a4, 0x4010);  // pushes {r4, lr} first, as the original

// f_0075454c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0075454c {

inline constexpr guest::Function<0x0010184d, u32(u32, u32, u32, u32)> call_0010184c;  // (from the original)
inline constexpr guest::Function<0x00755330, u32(u32, u32, u32, u32)> call_00755330;  // (from the original)
inline constexpr guest::Function<0x00755504, u32(u32, u32, u32, u32)> call_00755504;  // (from the original)

u32 f_0075454c(u32 r0, u32 r1, u32 r2_unused, u32 r3) {
    guest::StackFrame frame(0x54);  // the original's stack frame
    u32 r4 = r0;
    call_00755504(r1, frame.at(0).addr(), 9u, r3);
    call_00755330(r1, frame.at(0x14).addr(), 9u, guest::cpu()->r[3]);  // (from the original)
    u32 r5 = ~0u;
    u32 r7 = 1u;
    u32 r6 = 0u;
L_75458c:;
    r1 = 6u;
L_754590:;
    r5 += 1u;
    u32 nf_1 = r5 >> 0x1f;  // (from the original)
    u32 zf_1 = r5 == 0;
    u32 vf_1 = (r5 & (r5 ^ r5)) >> 0x1f;  // (from the original)
    if (nf_1 == vf_1) {
        u32 r0_1 = *gptr<u32>(r4 + 0x10u);  // (from the original)
        u32 res_1 = r0_1 - r5;
        nf_1 = res_1 >> 0x1f;  // (from the original)
        zf_1 = res_1 == 0;
        vf_1 = ((r0_1 ^ r5) & (r0_1 ^ res_1)) >> 0x1f;  // (from the original)
    }
    if (!zf_1 && nf_1 == vf_1) {
        if ((r1 & lsl_r(r7, *gptr<u32>(*gptr<u32>(r4 + 0xcu) + (r5 + (r5 << 3) << 2) + 0x1cu) & 7u & 0xff)) == 0) {  // (from the original)
            guest::preempt();
            goto L_754590;
        }
        if (s32(r5) >= 0) {
            u32 r8 = frame.at(0x28).addr();  // (from the original)
            u32 r12 = *gptr<u32>(r4 + 0xcu) + (r5 + (r5 << 3) << 2);  // (from the original)
            r3 = 8u;
            u32 r2 = r12 + 0x14u;  // (from the original)
            r0 = 0u;
L_7545e4:;
            u32 r1_3 = *gptr<s8>(r2 + r0);
            if (r1_3 != 0) {
                if (r1_3 - 0x61u <= 0x19u) {  // (from the original)
                    r1_3 -= 0x20u;  // (from the original)
                }
                u32 r9_1 = r8 + (r0 << 1);
                r0 += 1u;
                u32 res_2 = r0 - r3;
                *gptr<u16>(r9_1) = u16(sxtb(r1_3));
                if (res_2 >> 0x1f != ((r0 ^ r3) & (r0 ^ res_2)) >> 0x1f) {  // (from the original)
                    guest::preempt();
                    goto L_7545e4;
                }
            }
            r2 = frame.at(0x3c).addr();  // (from the original)
            *gptr<u16>(r8 + (r0 << 1)) = u16(r6);
            r3 = 8u;
            r12 += 0xcu;  // (from the original)
            r0 = 0u;
L_75462c:;
            u32 r1_4 = *gptr<s8>(r12 + r0);
            if (r1_4 != 0) {
                if (r1_4 - 0x61u <= 0x19u) {  // (from the original)
                    r1_4 -= 0x20u;  // (from the original)
                }
                u32 r8_1 = r2 + (r0 << 1);
                r0 += 1u;
                u32 res_3 = r0 - r3;
                *gptr<u16>(r8_1) = u16(sxtb(r1_4));
                if (res_3 >> 0x1f != ((r0 ^ r3) & (r0 ^ res_3)) >> 0x1f) {  // (from the original)
                    guest::preempt();
                    goto L_75462c;
                }
            }
            *gptr<u16>(r2 + (r0 << 1)) = u16(r6);
            u32 r0_4 = call_0010184c(frame.at(0).addr(), frame.at(0x28).addr(), r2, r3);  // (from the original)
            if (r0_4 == 0) {
                u32 r0_5 = frame.at(0x14).addr();  // (from the original)
                u32 r0_6 = call_0010184c(r0_5, frame.at(0x3c).addr(), guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
                if (r0_6 == 0) {
                    return r5;
                }
            }
            if (s32(r5) >= 0) {
                guest::preempt();
                goto L_75458c;
            }
        }
    }
    return ~0u;
}

}  // namespace d_0075454c
GUEST_EXPORT_FRAMED(0x0075454c, d_0075454c::f_0075454c, 0x43f0);  // pushes {r4, r5, r6, r7, r8, r9, lr} first, as the original

// f_007546b4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_007546b4 {

struct __attribute__((packed)) Object_007546b4_0 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Object_007546b4_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_007546b4_0, word_4, 0x4);  // (from the original)

inline constexpr guest::Function<0x0012e640, u32(u32, u32, u32, u32)> call_0012e640;  // (from the original)

u32 f_007546b4(gptr<Object_007546b4_0> arg0) {
    u32 r1_1 = arg0->word_4;
    u32 r0_1 = arg0->word_0;
    if (r1_1 >> 0x1f == (r1_1 & (r1_1 ^ r1_1)) >> 0x1f) {  // (from the original)
        return call_0012e640(r0_1, r1_1, 0x15180u, 0u);  // (from the original)
    }
    u32 res_1 = r0_1 + 0xfffeae81u;  // (from the original)
    u32 cf_1 = res_1 < r0_1;
    u32 r1_2 = u64(r1_1) + ~0u + cf_1;
    return call_0012e640(res_1, r1_2, 0x15180u, 0u);  // (from the original)
}

}  // namespace d_007546b4
GUEST_EXPORT(0x007546b4, d_007546b4::f_007546b4);

// f_00754830: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00754830 {

struct __attribute__((packed)) Local_00754830_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_00754830_ea_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_00754830_ea_1, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_00754830_ea_1, word_8, 0x8);  // (from the original)

struct __attribute__((packed)) Local_00754830_ea_3 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_00754830_ea_3, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_00754830_ea_3, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_00754830_ea_3, word_8, 0x8);  // (from the original)

struct __attribute__((packed)) Local_00754830_ea_4 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_00754830_ea_4, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_00754830_ea_4, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_00754830_ea_4, word_8, 0x8);  // (from the original)

inline constexpr guest::Function<0x00129698, u32(u32, u32, u32, u32)> call_00129698;  // (from the original)
inline constexpr guest::Function<0x007546f0, u32(u32, u32, u32, u32)> call_007546f0;  // (from the original)

void f_00754830(u32 r0, u32 r1) {
    guest::StackFrame frame(0x28);  // the original's stack frame
    *frame.at<u32>(0) = frame.at(0x1c).addr();  // (from the original)
    *frame.at<u32>(4) = frame.at(0x20).addr();  // (from the original)
    *frame.at<u32>(8) = frame.at(0x24).addr();  // (from the original)
    call_007546f0(r1, frame.at(0x10).addr(), frame.at(0x14).addr(), frame.at(0x18).addr());  // (from the original)
    gptr<Local_00754830_ea_1> ea_1 = gptr<Local_00754830_ea_1>(frame.at(0x1c).addr());  // (from the original)
    u32 r1_2 = ea_1->word_0;
    u32 r2_2 = ea_1->word_4;
    u32 r3_2 = ea_1->word_8;
    *frame.at<u32>(0xc) = 0;  // (from the original)
    gptr<Local_00754830_ea_3> ea_3 = gptr<Local_00754830_ea_3>(frame.at(0).addr());
    ea_3->word_0 = r1_2;
    ea_3->word_4 = r2_2;
    ea_3->word_8 = r3_2;
    gptr<Local_00754830_ea_4> ea_4 = gptr<Local_00754830_ea_4>(frame.at(0x10).addr());  // (from the original)
    call_00129698(r0, ea_4->word_0, ea_4->word_4, ea_4->word_8);
}

}  // namespace d_00754830
GUEST_EXPORT_FRAMED(0x00754830, d_00754830::f_00754830, 0x4010);  // pushes {r4, lr} first, as the original

// f_00754890: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00754890 {

struct __attribute__((packed)) Local_00754890_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Local_00754890_ea_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_00754890_ea_1, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_00754890_ea_1, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Local_00754890_ea_1, word_c, 0xc);  // (from the original)

struct __attribute__((packed)) Local_00754890_ea_2 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Local_00754890_ea_2, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_00754890_ea_2, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_00754890_ea_2, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Local_00754890_ea_2, word_c, 0xc);  // (from the original)

struct __attribute__((packed)) Local_00754890_ea_3 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_00754890_ea_3, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_00754890_ea_3, word_4, 0x4);  // (from the original)

inline constexpr guest::Function<0x00100ef9, u32(u32, u32, u32, u32)> call_00100ef8;  // (from the original)
inline constexpr guest::Function<0x007546f0, u32(u32, u32, u32, u32)> call_007546f0;  // (from the original)

void f_00754890(u32 r0, u32 r1) {
    guest::StackFrame frame(0x28);  // the original's stack frame
    *frame.at<u32>(0) = frame.at(0x1c).addr();  // (from the original)
    *frame.at<u32>(4) = frame.at(0x20).addr();  // (from the original)
    *frame.at<u32>(8) = frame.at(0x24).addr();  // (from the original)
    call_007546f0(r0, frame.at(0x10).addr(), frame.at(0x14).addr(), frame.at(0x18).addr());  // (from the original)
    gptr<Local_00754890_ea_1> ea_1 = gptr<Local_00754890_ea_1>(frame.at(0x18).addr());  // (from the original)
    u32 r0_1 = ea_1->word_0;
    u32 r1_2 = ea_1->word_4;
    u32 r2_2 = ea_1->word_8;
    u32 r3_2 = ea_1->word_c;
    gptr<Local_00754890_ea_2> ea_2 = gptr<Local_00754890_ea_2>(frame.at(0).addr());
    ea_2->word_0 = r0_1;
    ea_2->word_4 = r1_2;
    ea_2->word_8 = r2_2;
    ea_2->word_c = r3_2;
    gptr<Local_00754890_ea_3> ea_3 = gptr<Local_00754890_ea_3>(frame.at(0x10).addr());  // (from the original)
    call_00100ef8(r1, 0x7548e8u, ea_3->word_0, ea_3->word_4);  // (from the original)
}

}  // namespace d_00754890
GUEST_EXPORT_FRAMED(0x00754890, d_00754890::f_00754890, 0x4010);  // pushes {r4, lr} first, as the original

// f_00754908: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00754908 {

inline constexpr guest::Function<0x005a8b9c, u32(u32)> call_005a8b9c;  // (from the original)
inline constexpr guest::Function<0x005a8c34, u32(u32, u32, u32, u32)> call_005a8c34;  // (from the original)

u32 f_00754908(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    call_005a8c34(frame.at(0).addr(), r1, r2, r3);
    u32 r2_1 = *gptr<u32>(r0);
    u32 r3_1 = *gptr<u32>(r0 + 4);
    u32 r1_1 = *frame.at<u32>(0);
    u32 r0_2 = *frame.at<u32>(4);
    u32 cf_1 = r2_1 >= r1_1;
    u32 res_1 = u64(r3_1) + ~r0_2 + cf_1;
    if (res_1 >> 0x1f != ((r3_1 ^ r0_2) & (r3_1 ^ res_1)) >> 0x1f) {  // (from the original)
        guest::cpu()->r[1] = r2_1 - r1_1;
        return 1u;
    }
    call_005a8b9c(frame.at(8).addr());
    u32 r2_2 = *gptr<u32>(r0);
    u32 r3_2 = *gptr<u32>(r0 + 4);
    u32 r1_3 = *frame.at<u32>(8);
    u32 r0_4 = *frame.at<u32>(0xc);  // (from the original)
    u32 cf_2 = r1_3 >= r2_2;
    u32 r1_4 = r1_3 - r2_2;
    u32 res_2 = u64(r0_4) + ~r3_2 + cf_2;
    if (res_2 >> 0x1f == ((r0_4 ^ r3_2) & (r0_4 ^ res_2)) >> 0x1f) {  // (from the original)
        guest::cpu()->r[1] = r1_4;
        return 0u;
    }
    guest::cpu()->r[1] = r1_4;
    return 1u;
}

}  // namespace d_00754908
GUEST_EXPORT_FRAMED(0x00754908, d_00754908::f_00754908, 0x4010);  // pushes {r4, lr} first, as the original

// f_00754964: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00754964 {

struct __attribute__((packed)) Object_00754964_0 {
    u8 unknown_0[0xc];  // (not used here)
    u32 word_c;
};
GUEST_OFFSET(Object_00754964_0, word_c, 0xc);  // (from the original)


u32 f_00754964(gptr<Object_00754964_0> arg0) {
    u32 r0_1 = u32(*gptr<u16>(arg0->word_c + 0x14u)) & 0x10u;  // (from the original)
    if (r0_1 != 0) {
        r0_1 = 1u;
    }
    return r0_1;
}

}  // namespace d_00754964
GUEST_EXPORT(0x00754964, d_00754964::f_00754964);

// f_00754a3c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00754a3c {

struct __attribute__((packed)) Object_00754a3c_0 {
    u8 unknown_0[0xc];  // (not used here)
    u32 word_c;
};
GUEST_OFFSET(Object_00754a3c_0, word_c, 0xc);  // (from the original)


u32 f_00754a3c(gptr<Object_00754a3c_0> arg0, u32 r1) {
    u32 r1_1 = r1 + (r1 << 1);
    u32 r0_1 = arg0->word_c + (r1_1 << 2);
    guest::cpu()->r[1] = r1_1;
    return r0_1;
}

}  // namespace d_00754a3c
GUEST_EXPORT(0x00754a3c, d_00754a3c::f_00754a3c);

// f_00754b40: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00754b40 {

struct __attribute__((packed)) Object_00754b40_0 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
};
GUEST_OFFSET(Object_00754b40_0, word_4, 0x4);  // (from the original)


u32 f_00754b40(gptr<Object_00754b40_0> arg0) {
    return (arg0->word_4 & 0x1cu) >> 2;  // (from the original)
}

}  // namespace d_00754b40
GUEST_EXPORT(0x00754b40, d_00754b40::f_00754b40);

// f_00754b50: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00754b50 {

struct __attribute__((packed)) Object_00754b50_0 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
};
GUEST_OFFSET(Object_00754b50_0, word_4, 0x4);  // (from the original)


u32 f_00754b50(gptr<Object_00754b50_0> arg0) {
    return arg0->word_4 & 3u;
}

}  // namespace d_00754b50
GUEST_EXPORT(0x00754b50, d_00754b50::f_00754b50);

// f_00754b5c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00754b5c {

struct __attribute__((packed)) Object_00754b5c_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_00754b5c_0, word_0, 0x0);  // (from the original)


u32 f_00754b5c(gptr<Object_00754b5c_0> arg0) {
    return arg0->word_0 >> 0x12;  // (from the original)
}

}  // namespace d_00754b5c
GUEST_EXPORT(0x00754b5c, d_00754b5c::f_00754b5c);

// f_00754b68: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00754b68 {

struct __attribute__((packed)) Object_00754b68_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_00754b68_0, word_0, 0x0);  // (from the original)


u32 f_00754b68(gptr<Object_00754b68_0> arg0) {
    return s32(arg0->word_0 << 0xe) >> 0xe;  // (from the original)
}

}  // namespace d_00754b68
GUEST_EXPORT(0x00754b68, d_00754b68::f_00754b68);

// f_00754b78: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00754b78 {

struct __attribute__((packed)) Object_00754b78_0 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
};
GUEST_OFFSET(Object_00754b78_0, word_4, 0x4);  // (from the original)

struct __attribute__((packed)) Local_00754b78_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_00754b78_ea_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_00754b78_ea_1, word_4, 0x4);  // (from the original)

inline constexpr guest::Function<0x00472b38, u32(u32, u32, u32, u32)> call_00472b38;  // (from the original)
inline constexpr guest::Function<0x005a8ea0, u32(u32, u32)> call_005a8ea0;  // (from the original)
inline constexpr guest::Function<0x00754830, u32(u32, u32)> call_00754830;  // (from the original)

u32 f_00754b78(gptr<Object_00754b78_0> arg0, u32 r1) {
    guest::StackFrame frame(0x28);  // the original's stack frame
    u32 r0_2 = call_00472b38(arg0->word_4, frame.at(0).addr(), guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0_2 != 0x14u) {  // (from the original)
        return 0u;
    }
    u32 r0_4 = call_005a8ea0(frame.at(0x20).addr(), frame.at(0).addr());  // (from the original)
    if (r0_4 == 0) {
        return r0_4;
    }
    call_00754830(frame.at(0x18).addr(), frame.at(0x20).addr());  // (from the original)
    gptr<Local_00754b78_ea_1> ea_1 = gptr<Local_00754b78_ea_1>(frame.at(0x18).addr());  // (from the original)
    u32 r1_6 = ea_1->word_4;
    *gptr<u32>(r1) = ea_1->word_0;
    *gptr<u32>(r1 + 4) = r1_6;
    guest::cpu()->r[1] = r1_6;
    return 1u;
}

}  // namespace d_00754b78
GUEST_EXPORT_FRAMED(0x00754b78, d_00754b78::f_00754b78, 0x4010);  // pushes {r4, lr} first, as the original

// f_00754bd0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00754bd0 {

struct __attribute__((packed)) Object_00754bd0_0 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
};
GUEST_OFFSET(Object_00754bd0_0, word_4, 0x4);  // (from the original)

inline constexpr guest::Function<0x002f8574, u32(u32, u32, u32)> call_002f8574;  // (from the original)
inline constexpr guest::Function<0x00736694, u32(u32, u32, u32)> call_00736694;  // (from the original)
inline constexpr guest::Function<0x00736728, u32(u32, u32, u32, u32)> call_00736728;  // (from the original)

u32 f_00754bd0(gptr<Object_00754bd0_0> arg0, u32 r1, u32 r2) {
    u32 r0_2 = call_00736728(arg0->word_4, 1u, r2, guest::cpu()->r[3]);
    u32 r1_1 = guest::cpu()->r[1];
    if (r0_2 != 0) {
        u32 r0_4 = call_00736694(arg0->word_4, 1u, guest::cpu()->r[2]);
        r1_1 = guest::cpu()->r[1];
        if (r0_4 <= 0x40u) {  // (from the original)
            u32 r0_6 = call_00736728(arg0->word_4, 1u, guest::cpu()->r[2], guest::cpu()->r[3]);
            call_002f8574(r1, r0_6, 0x40u);  // (from the original)
            r1_1 = 0x31534433u;  // (from the original)
            if (*gptr<u32>(r1) == r1_1) {
                guest::cpu()->r[1] = r1_1;
                return 1u;
            }
        }
    }
    guest::cpu()->r[1] = r1_1;
    return 0u;
}

}  // namespace d_00754bd0
GUEST_EXPORT_FRAMED(0x00754bd0, d_00754bd0::f_00754bd0, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_00754c40: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00754c40 {

inline constexpr guest::Function<0x00736728, u32(u32, u32)> call_00736728;  // (from the original)
inline constexpr guest::Function<0x00754bd0, u32(u32, u32, u32, u32)> call_00754bd0;  // (from the original)

u32 f_00754c40(u32 r0) {
    guest::StackFrame frame(0x40);  // the original's stack frame
    u32 r0_1 = call_00754bd0(r0, frame.at(0).addr(), guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0_1 == 0) {
        return r0_1;
    }
    u32 r0_3 = call_00736728(*gptr<u32>(r0 + 4u), 1u);
    return r0_3;
}

}  // namespace d_00754c40
GUEST_EXPORT_FRAMED(0x00754c40, d_00754c40::f_00754c40, 0x4010);  // pushes {r4, lr} first, as the original

// f_00754c70: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00754c70 {

struct __attribute__((packed)) Object_00754c70_0 {
    u8 unknown_0[0xa];  // (not used here)
    u8 byte_a;
};
GUEST_OFFSET(Object_00754c70_0, byte_a, 0xa);  // (from the original)


u32 f_00754c70(gptr<Object_00754c70_0> arg0) {
    u32 r0_1 = arg0->byte_a;
    if (r0_1 == 0 || r0_1 == 1u) {
        return r0_1;
    } else {
    }
    return 2u;
}

}  // namespace d_00754c70
GUEST_EXPORT(0x00754c70, d_00754c70::f_00754c70);

// f_00754c88: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00754c88 {

struct __attribute__((packed)) Object_00754c88_0 {
    u8 unknown_0[0xc];  // (not used here)
    u32 word_c;
};
GUEST_OFFSET(Object_00754c88_0, word_c, 0xc);  // (from the original)

inline constexpr guest::Function<0x005b060c, u32(u32, u32)> call_005b060c;  // (from the original)
inline constexpr guest::Function<0x005b0640, u32(u32, u32)> call_005b0640;  // (from the original)

u32 f_00754c88(gptr<Object_00754c88_0> arg0, u32 r1_unused, u32 r2_unused, u32 r3) {
    guest::StackFrame frame(0x4);  // the original's stack frame
    *frame.at<u32>(0) = r3;
    call_005b0640(frame.at(0).addr(), arg0->word_c >> 1u & 0x3ffu);  // (from the original)
    call_005b060c(frame.at(0).addr(), arg0->word_c >> 0xbu & 0x7fu);  // (from the original)
    return *frame.at<u32>(0);
}

}  // namespace d_00754c88
GUEST_EXPORT_FRAMED(0x00754c88, d_00754c88::f_00754c88, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_00754cc0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00754cc0 {

struct __attribute__((packed)) Object_00754cc0_0 {
    u8 unknown_0[0xf];  // (not used here)
    u8 byte_f;
};
GUEST_OFFSET(Object_00754cc0_0, byte_f, 0xf);  // (from the original)


u32 f_00754cc0(gptr<Object_00754cc0_0> arg0, u32 r1) {
    u32 r0_1 = u32(arg0->byte_f) & lsl_r(1u, r1 & 0xff);  // (from the original)
    if (r0_1 != 0) {
        r0_1 = 1u;
    }
    return r0_1;
}

}  // namespace d_00754cc0
GUEST_EXPORT(0x00754cc0, d_00754cc0::f_00754cc0);

// f_00754cd4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00754cd4 {


u32 f_00754cd4(u32 r0, u32 r1) {
    return *gptr<u32>(r0 + (r1 << 2) + 0x10u);  // (from the original)
}

}  // namespace d_00754cd4
GUEST_EXPORT(0x00754cd4, d_00754cd4::f_00754cd4);

// f_00754ce0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00754ce0 {

struct __attribute__((packed)) Object_00754ce0_0 {
    u8 unknown_0[0xe];  // (not used here)
    u8 byte_e;
};
GUEST_OFFSET(Object_00754ce0_0, byte_e, 0xe);  // (from the original)


u32 f_00754ce0(gptr<Object_00754ce0_0> arg0) {
    u32 r0_1 = arg0->byte_e;
    if (r0_1 == 0 || r0_1 == 1u) {
        return r0_1;
    } else {
    }
    return 2u;
}

}  // namespace d_00754ce0
GUEST_EXPORT(0x00754ce0, d_00754ce0::f_00754ce0);

// f_00754cf8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00754cf8 {


u32 f_00754cf8(u32 r0, u32 r1, u32 r2) {
    u32 r3 = r0;
    u32 r12 = 1u;
    r1 = lsl_r(r12, r1 & 0xff) & 0xffu;  // (from the original)
    r0 = r2 + 1u;
    do {
        u32 nf_1 = r0 >> 0x1f;  // (from the original)
        u32 zf_1 = r0 == 0;
        u32 vf_1 = (r0 & (r0 ^ r0)) >> 0x1f;  // (from the original)
        if (nf_1 == vf_1) {
            u32 r2_1 = *gptr<u32>(r3 + 8u);
            u32 res_1 = r2_1 - r0;
            nf_1 = res_1 >> 0x1f;  // (from the original)
            zf_1 = res_1 == 0;
            vf_1 = ((r2_1 ^ r0) & (r2_1 ^ res_1)) >> 0x1f;  // (from the original)
        }
        if (zf_1 || nf_1 != vf_1) {
            guest::cpu()->r[1] = r1;
            return ~0u;
        }
        if ((r1 & lsl_r(r12, *gptr<u32>(*gptr<u32>(r3 + 4u) + (r0 + (r0 << 3) << 2) + 0x1cu) & 7u & 0xff)) != 0) {  // (from the original)
            guest::cpu()->r[1] = r1;
            return r0;
        }
        r0 += 1u;
        guest::preempt();
    } while (1);
}

}  // namespace d_00754cf8
GUEST_EXPORT_FRAMED(0x00754cf8, d_00754cf8::f_00754cf8, 0x10);  // pushes {r4} first, as the original

// f_00754eb8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00754eb8 {

inline constexpr guest::Function<0x001017e5, u32(u32, u32, u32, u32)> call_001017e4;  // (from the original)
inline constexpr guest::Function<0x005ae51c, u32(u32, u32, u32, u32)> call_005ae51c;  // (from the original)

void f_00754eb8(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = r1;
    u32 r5 = r0;
    u32 r0_1 = call_005ae51c(r4, r2, r3, *gptr<u32>(guest::cpu()->r[13] + 0x18u));  // (from the original)
    call_001017e4(r4 + (r0_1 << 1), 0x8c14e4u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r6 = r0_1 + 1u;
    u32 r12 = 8u;
    r1 = r4 + (r6 << 1);
    r3 = r5 + 0x14u;  // (from the original)
    r0 = 0u;
L_754efc:;
    u32 r2_2 = *gptr<s8>(r3 + r0);
    if (r2_2 != 0) {
        if (r2_2 - 0x61u <= 0x19u) {  // (from the original)
            r2_2 -= 0x20u;  // (from the original)
        }
        u32 r7_1 = r1 + (r0 << 1);
        r0 += 1u;
        r2_2 = sxtb(r2_2);
        u32 res_1 = r0 - r12;
        *gptr<u16>(r7_1) = u16(r2_2);
        if (res_1 >> 0x1f != ((r0 ^ r12) & (r0 ^ res_1)) >> 0x1f) {  // (from the original)
            guest::preempt();
            goto L_754efc;
        }
    }
    u32 r7 = 0u;
    u32 r6_1 = r6 + r0;
    *gptr<u16>(r1 + (r0 << 1)) = u16(r7);
    call_001017e4(r4 + (r6_1 << 1), 0x8c14e4u, r2_2, r3);  // (from the original)
    r3 = r6_1 + 1u;
    r6 = 8u;
    r1 = r4 + (r3 << 1);
    r12 = r5 + 0xcu;  // (from the original)
    r0 = 0u;
L_754f5c:;
    u32 r2_3 = *gptr<s8>(r12 + r0);
    if (r2_3 != 0) {
        if (r2_3 - 0x61u <= 0x19u) {  // (from the original)
            r2_3 -= 0x20u;  // (from the original)
        }
        u32 r8_1 = r1 + (r0 << 1);
        r0 += 1u;
        r2_3 = sxtb(r2_3);
        u32 res_2 = r0 - r6;
        *gptr<u16>(r8_1) = u16(r2_3);
        if (res_2 >> 0x1f != ((r0 ^ r6) & (r0 ^ res_2)) >> 0x1f) {  // (from the original)
            guest::preempt();
            goto L_754f5c;
        }
    }
    u32 r6_2 = r0 + r3;
    *gptr<u16>(r1 + (r0 << 1)) = u16(r7);
    call_001017e4(r4 + (r6_2 << 1), 0x8c14e8u, r2_3, r3);  // (from the original)
    r3 = r5 + 8u;
    r1 = r4 + (r6_2 + 1u << 1);
    r4 = 4u;
    r0 = 0u;
L_754fb8:;
    u32 r2_4 = *gptr<s8>(r3 + r0);
    if (r2_4 != 0) {
        if (r2_4 - 0x61u <= 0x19u) {  // (from the original)
            r2_4 -= 0x20u;  // (from the original)
        }
        u32 r5_1 = r1 + (r0 << 1);
        r0 += 1u;
        u32 res_3 = r0 - r4;
        *gptr<u16>(r5_1) = u16(sxtb(r2_4));
        if (res_3 >> 0x1f != ((r0 ^ r4) & (r0 ^ res_3)) >> 0x1f) {  // (from the original)
            guest::preempt();
            goto L_754fb8;
        }
    }
    *gptr<u16>(r1 + (r0 << 1)) = u16(r7);
}

}  // namespace d_00754eb8
GUEST_EXPORT_FRAMED(0x00754eb8, d_00754eb8::f_00754eb8, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_00755000: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00755000 {

inline constexpr guest::Function<0x001017e5, u32(u32, u32, u32, u32)> call_001017e4;  // (from the original)
inline constexpr guest::Function<0x005ae51c, u32(u32, u32, u32, u32)> call_005ae51c;  // (from the original)

void f_00755000(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = r1;
    u32 r7 = r0;
    u32 r3_1 = *gptr<u32>(guest::cpu()->r[13] + 0x1cu);  // (from the original)
    u32 r6 = *gptr<u32>(guest::cpu()->r[13] + 0x18u);  // (from the original)
    u32 r0_1 = call_005ae51c(r4, r2, r3, r3_1);
    call_001017e4(r4 + (r0_1 << 1), 0x8c14e4u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    r3 = r0_1 + 1u;
    u32 r5 = 8u;
    r1 = r4 + (r3 << 1);
    u32 r12 = r7 + 0x14u;  // (from the original)
    r0 = 0u;
L_755048:;
    u32 r2_2 = *gptr<s8>(r12 + r0);
    if (r2_2 != 0) {
        if (r2_2 - 0x61u <= 0x19u) {  // (from the original)
            r2_2 -= 0x20u;  // (from the original)
        }
        u32 r8_1 = r1 + (r0 << 1);
        r0 += 1u;
        r2_2 = sxtb(r2_2);
        u32 res_1 = r0 - r5;
        *gptr<u16>(r8_1) = u16(r2_2);
        if (res_1 >> 0x1f != ((r0 ^ r5) & (r0 ^ res_1)) >> 0x1f) {  // (from the original)
            guest::preempt();
            goto L_755048;
        }
    }
    u32 r8 = 0u;
    u32 r5_1 = r0 + r3;
    *gptr<u16>(r1 + (r0 << 1)) = u16(r8);
    call_001017e4(r4 + (r5_1 << 1), 0x8c14e4u, r2_2, r3);  // (from the original)
    r3 = r5_1 + 1u;
    r12 = 8u;
    r1 = r4 + (r3 << 1);
    r5 = r7 + 0xcu;  // (from the original)
    r0 = 0u;
L_7550a8:;
    u32 r2_3 = *gptr<s8>(r5 + r0);
    if (r2_3 != 0) {
        if (r2_3 - 0x61u <= 0x19u) {  // (from the original)
            r2_3 -= 0x20u;  // (from the original)
        }
        u32 r7_1 = r1 + (r0 << 1);
        r0 += 1u;
        u32 res_2 = r0 - r12;
        *gptr<u16>(r7_1) = u16(sxtb(r2_3));
        if (res_2 >> 0x1f != ((r0 ^ r12) & (r0 ^ res_2)) >> 0x1f) {  // (from the original)
            guest::preempt();
            goto L_7550a8;
        }
    }
    *gptr<u16>(r1 + (r0 << 1)) = u16(r8);
    u32 r7_2 = *gptr<u32>(0x8c1474u + (r6 << 2));  // (from the original)
    call_001017e4(r4 + ((r0 + r3) << 1), *gptr<u32>(0x981698u + (r6 << 2)), r2_3, r3);  // (from the original)
}

}  // namespace d_00755000
GUEST_EXPORT_FRAMED(0x00755000, d_00755000::f_00755000, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_00755110: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00755110 {

struct __attribute__((packed)) Object_00755110_0 {
    u8 unknown_0[0xc];  // (not used here)
    u32 word_c;
    u8 byte_10;
    u8 unknown_11[0x3];  // (not used here)
    u32 word_14;
    u8 unknown_18[0x4];  // (not used here)
    u32 word_1c;
    u32 word_20;
    u32 word_24;
    u32 word_28;
};
GUEST_OFFSET(Object_00755110_0, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_00755110_0, byte_10, 0x10);  // (from the original)
GUEST_OFFSET(Object_00755110_0, word_14, 0x14);  // (from the original)
GUEST_OFFSET(Object_00755110_0, word_1c, 0x1c);  // (from the original)
GUEST_OFFSET(Object_00755110_0, word_20, 0x20);  // (from the original)
GUEST_OFFSET(Object_00755110_0, word_24, 0x24);  // (from the original)
GUEST_OFFSET(Object_00755110_0, word_28, 0x28);  // (from the original)

struct __attribute__((packed)) Local_00755110_r2_2 {
    u8 unknown_0[0x14];  // (not used here)
    u16 half_14;
    u16 half_16;
};
GUEST_OFFSET(Local_00755110_r2_2, half_14, 0x14);  // (from the original)
GUEST_OFFSET(Local_00755110_r2_2, half_16, 0x16);  // (from the original)

inline constexpr guest::Function<0x005aa50c, u32(u32, u32, u32, u32)> call_005aa50c;  // (from the original)

u32 f_00755110(gptr<Object_00755110_0> arg0, u32 r1) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    if (arg0->word_1c == 0 || arg0->word_20 == 0) {
        return 2u;
    }
    *frame.at<u32>(0) = arg0->word_24;
    *frame.at<u32>(4) = arg0->word_28;
    u32 r0_2 = call_005aa50c(frame.at(0).addr(), frame.at(4).addr(), 0x400u, 0x300u);  // (from the original)
    u32 r2_1 = guest::cpu()->r[2];
    u32 r1_2 = *frame.at<u32>(0);
    u32 res_1 = r1_2 - 0xa0u;  // (from the original)
    u32 nf_1 = res_1 >> 0x1f;  // (from the original)
    u32 vf_1 = ((r1_2 ^ 0xa0u) & (r1_2 ^ res_1)) >> 0x1f;  // (from the original)
    if (nf_1 == vf_1) {
        r2_1 = *frame.at<u32>(4);
        u32 res_2 = r2_1 - 0x78u;  // (from the original)
        nf_1 = res_2 >> 0x1f;  // (from the original)
        vf_1 = ((r2_1 ^ 0x78u) & (r2_1 ^ res_2)) >> 0x1f;  // (from the original)
    }
    if (nf_1 != vf_1) {
        guest::cpu()->r[1] = r1_2;
        return 2u;
    }
    u32 res_3 = r1_2 - 0x400u;  // (from the original)
    u32 nf_2 = res_3 >> 0x1f;  // (from the original)
    u32 zf_1 = res_3 == 0;
    u32 vf_2 = ((r1_2 ^ 0x400u) & (r1_2 ^ res_3)) >> 0x1f;  // (from the original)
    if (zf_1 || nf_2 != vf_2) {
        u32 res_4 = r2_1 - 0x300u;  // (from the original)
        nf_2 = res_4 >> 0x1f;  // (from the original)
        zf_1 = res_4 == 0;
        vf_2 = ((r2_1 ^ 0x300u) & (r2_1 ^ res_4)) >> 0x1f;  // (from the original)
    }
    if (!zf_1 && nf_2 == vf_2 || s32(r0_2) > 2) {
        guest::cpu()->r[1] = r1_2;
        return 2u;
    }
    u32 r0_3 = arg0->word_24;
    if ((r0_3 & 7u) != 0) {
        guest::cpu()->r[1] = r1_2;
        return 2u;
    }
    u32 r1_3 = arg0->word_28;
    if ((r1_3 & 7u) != 0) {
        guest::cpu()->r[1] = r1_3;
        return 2u;
    }
    gptr<Local_00755110_r2_2> r2_2 = gptr<Local_00755110_r2_2>(arg0->word_c);
    if ((u32(r2_2->half_14) & 0x10u) != 0) {  // (from the original)
        u32 res_5 = r0_3 - 0x190u;  // (from the original)
        u32 nf_3 = res_5 >> 0x1f;  // (from the original)
        u32 vf_3 = ((r0_3 ^ 0x190u) & (r0_3 ^ res_5)) >> 0x1f;  // (from the original)
        if (nf_3 == vf_3) {
            u32 res_6 = r1_3 - 0xf0u;  // (from the original)
            nf_3 = res_6 >> 0x1f;  // (from the original)
            vf_3 = ((r1_3 ^ 0xf0u) & (r1_3 ^ res_6)) >> 0x1f;  // (from the original)
        }
        if (nf_3 != vf_3) {
            guest::cpu()->r[1] = r1_3;
            return 2u;
        }
        u32 res_7 = r0_3 - 0x400u;  // (from the original)
        u32 nf_4 = res_7 >> 0x1f;  // (from the original)
        u32 zf_2 = res_7 == 0;
        u32 vf_4 = ((r0_3 ^ 0x400u) & (r0_3 ^ res_7)) >> 0x1f;  // (from the original)
        if (zf_2 || nf_4 != vf_4) {
            u32 res_8 = r1_3 - 0x300u;  // (from the original)
            nf_4 = res_8 >> 0x1f;  // (from the original)
            zf_2 = res_8 == 0;
            vf_4 = ((r1_3 ^ 0x300u) & (r1_3 ^ res_8)) >> 0x1f;  // (from the original)
        }
        if (!zf_2 && nf_4 == vf_4) {
            guest::cpu()->r[1] = r1_3;
            return 2u;
        }
    }
    u32 r0_4 = arg0->word_14;
    if (s32(r0_4) < 1 || s32(r0_4) > 0x64) {  // (from the original)
        guest::cpu()->r[1] = r1_3;
        return 2u;
    }
    if ((u32(r2_2->half_16) & 1u) != 0 && arg0->byte_10 != 0) {
        guest::cpu()->r[1] = r1_3;
        return 0u;
    }
    guest::cpu()->r[1] = r1_3;
    return 2u;
}

}  // namespace d_00755110
GUEST_EXPORT_FRAMED(0x00755110, d_00755110::f_00755110, 0x4010);  // pushes {r4, lr} first, as the original

// f_007551f4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_007551f4 {

struct __attribute__((packed)) Object_007551f4_0 {
    u16 half_0;
    u16 half_2;
    u16 half_4;
    u16 half_6;
    u16 half_8;
};
GUEST_OFFSET(Object_007551f4_0, half_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_007551f4_0, half_2, 0x2);  // (from the original)
GUEST_OFFSET(Object_007551f4_0, half_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_007551f4_0, half_6, 0x6);  // (from the original)
GUEST_OFFSET(Object_007551f4_0, half_8, 0x8);  // (from the original)


u32 f_007551f4(gptr<Object_007551f4_0> arg0) {
    u32 r1_1 = u32(arg0->half_0) & ~0xfc00u;  // (from the original)
    if (r1_1 == 0) {
        guest::cpu()->r[1] = r1_1;
        return 1u;
    }
    u32 r1_2 = r1_1 - 1u;
    if (r1_2 >= 0x3e8u) {  // (from the original)
        guest::cpu()->r[1] = r1_2;
        return 0u;
    }
    u32 r1_3 = arg0->half_2;
    if (arg0->half_6 < r1_3) {
        guest::cpu()->r[1] = r1_3;
        return 0u;
    }
    u32 r1_4 = arg0->half_4;
    if (r1_4 <= arg0->half_8) {
        guest::cpu()->r[1] = r1_4;
        return 1u;
    }
    guest::cpu()->r[1] = r1_4;
    return 0u;
}

}  // namespace d_007551f4
GUEST_EXPORT(0x007551f4, d_007551f4::f_007551f4);

// f_0075523c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0075523c {

struct __attribute__((packed)) Object_0075523c_0 {
    u8 unknown_0[0x4];  // (not used here)
    u8 byte_4;
    u8 unknown_5[0xf];  // (not used here)
    u32 word_14;
    u32 word_18;
    u32 word_1c;
    u32 word_20;
    u32 word_24;
};
GUEST_OFFSET(Object_0075523c_0, byte_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_0075523c_0, word_14, 0x14);  // (from the original)
GUEST_OFFSET(Object_0075523c_0, word_18, 0x18);  // (from the original)
GUEST_OFFSET(Object_0075523c_0, word_1c, 0x1c);  // (from the original)
GUEST_OFFSET(Object_0075523c_0, word_20, 0x20);  // (from the original)
GUEST_OFFSET(Object_0075523c_0, word_24, 0x24);  // (from the original)


u32 f_0075523c(gptr<Object_0075523c_0> arg0) {
    u32 r1_1 = arg0->byte_4;
    if (r1_1 == 0) {
        guest::cpu()->r[1] = r1_1;
        return 0u;
    }
    u32 r1_2 = arg0->word_20;
    if (s32(arg0->word_24) > s32(r1_2)) {
        guest::cpu()->r[1] = r1_2;
        return 0u;
    }
    u32 r1_3 = arg0->word_1c;
    if (s32(r1_3) >= s32(arg0->word_18)) {
        guest::cpu()->r[1] = r1_3;
        return 0u;
    }
    u32 r1_4 = r1_3 + (r1_3 << 2) + (r1_3 << 6);
    u32 res_1 = arg0->word_14 + (r1_4 << 3);
    u32 zf_1 = res_1 == 0;
    if (!zf_1) {
        zf_1 = *gptr<u8>(res_1 + 0x21cu) == 0;  // (from the original)
    }
    if (!zf_1) {
        guest::cpu()->r[1] = r1_4;
        return 1u;
    }
    guest::cpu()->r[1] = r1_4;
    return 0u;
}

}  // namespace d_0075523c
GUEST_EXPORT(0x0075523c, d_0075523c::f_0075523c);

// f_00755290: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00755290 {

struct __attribute__((packed)) Object_00755290_0 {
    u8 unknown_0[0x4];  // (not used here)
    u8 byte_4;
    u8 unknown_5[0xf];  // (not used here)
    u32 word_14;
    u32 word_18;
    u32 word_1c;
    u32 word_20;
    u32 word_24;
};
GUEST_OFFSET(Object_00755290_0, byte_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_00755290_0, word_14, 0x14);  // (from the original)
GUEST_OFFSET(Object_00755290_0, word_18, 0x18);  // (from the original)
GUEST_OFFSET(Object_00755290_0, word_1c, 0x1c);  // (from the original)
GUEST_OFFSET(Object_00755290_0, word_20, 0x20);  // (from the original)
GUEST_OFFSET(Object_00755290_0, word_24, 0x24);  // (from the original)


u32 f_00755290(gptr<Object_00755290_0> arg0) {
    u32 r1_1 = arg0->byte_4;
    if (r1_1 == 0) {
        guest::cpu()->r[1] = r1_1;
        return 0u;
    }
    u32 r1_2 = arg0->word_20;
    if (s32(arg0->word_24) > s32(r1_2)) {
        guest::cpu()->r[1] = r1_2;
        return 0u;
    }
    u32 r1_3 = arg0->word_1c;
    if (s32(r1_3) >= s32(arg0->word_18)) {
        guest::cpu()->r[1] = r1_3;
        return 0u;
    }
    u32 r1_4 = r1_3 + (r1_3 << 2) + (r1_3 << 6);
    u32 r0_1 = arg0->word_14 + (r1_4 << 3);
    if (r0_1 == 0) {
        guest::cpu()->r[1] = r1_4;
        return 0u;
    }
    if (*gptr<u8>(r0_1 + 0x21cu) == 0) {  // (from the original)
        guest::cpu()->r[1] = r1_4;
        return 1u;
    }
    guest::cpu()->r[1] = r1_4;
    return 0u;
}

}  // namespace d_00755290
GUEST_EXPORT(0x00755290, d_00755290::f_00755290);

// f_007552e8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_007552e8 {

struct __attribute__((packed)) Object_007552e8_0 {
    u8 unknown_0[0x4];  // (not used here)
    u8 byte_4;
    u8 unknown_5[0xf];  // (not used here)
    u32 word_14;
    u32 word_18;
    u32 word_1c;
    u32 word_20;
    u32 word_24;
};
GUEST_OFFSET(Object_007552e8_0, byte_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_007552e8_0, word_14, 0x14);  // (from the original)
GUEST_OFFSET(Object_007552e8_0, word_18, 0x18);  // (from the original)
GUEST_OFFSET(Object_007552e8_0, word_1c, 0x1c);  // (from the original)
GUEST_OFFSET(Object_007552e8_0, word_20, 0x20);  // (from the original)
GUEST_OFFSET(Object_007552e8_0, word_24, 0x24);  // (from the original)


u32 f_007552e8(gptr<Object_007552e8_0> arg0) {
    u32 r1_1 = arg0->byte_4;
    if (r1_1 == 0) {
        guest::cpu()->r[1] = r1_1;
        return 0u;
    }
    u32 r1_2 = arg0->word_20;
    if (s32(arg0->word_24) > s32(r1_2)) {
        guest::cpu()->r[1] = r1_2;
        return 0u;
    }
    u32 r1_3 = arg0->word_1c;
    if (s32(r1_3) >= s32(arg0->word_18)) {
        guest::cpu()->r[1] = r1_3;
        return 0u;
    }
    u32 r1_4 = r1_3 + (r1_3 << 2) + (r1_3 << 6);
    u32 r0_1 = arg0->word_14 + (r1_4 << 3);
    guest::cpu()->r[1] = r1_4;
    return r0_1;
}

}  // namespace d_007552e8
GUEST_EXPORT(0x007552e8, d_007552e8::f_007552e8);

// f_00755330: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00755330 {


u32 f_00755330(u32 r0, u32 r1) {
    u32 res_1 = 0;
    u32 r12 = r0 + 4u;
    u32 r3 = 8u;
    r0 = 0u;
    do {
        u32 r2_1 = *gptr<s8>(r12 + r0);
        if (r2_1 == 0) {
            *gptr<u16>(r1 + (r0 << 1)) = 0;
            return r0;
        }
        if (r2_1 - 0x61u <= 0x19u) {  // (from the original)
            r2_1 -= 0x20u;  // (from the original)
        }
        u32 r4_1 = r1 + (r0 << 1);
        r0 += 1u;
        res_1 = r0 - r3;
        *gptr<u16>(r4_1) = u16(sxtb(r2_1));
        guest::preempt();
    } while (res_1 >> 0x1f != ((r0 ^ r3) & (r0 ^ res_1)) >> 0x1f);  // (from the original)
    *gptr<u16>(r1 + (r0 << 1)) = 0;
    return r0;
}

}  // namespace d_00755330
GUEST_EXPORT_FRAMED(0x00755330, d_00755330::f_00755330, 0x10);  // pushes {r4} first, as the original

// f_00755384: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00755384 {


u32 f_00755384(u32 r0) {
    u32 r1_1 = 0;
    u32 res_1 = 0;
    u32 r2 = 0u;
    do {
        r1_1 = *gptr<s8>(r0);
        if (r1_1 == 0) {
            guest::cpu()->r[1] = r1_1;
            return 1u;
        }
        u32 r3_1 = r1_1 - 0x30u;  // (from the original)
        u32 zf_1 = r3_1 == 9u;
        u32 cf_1 = r3_1 >= 9u;
        if (cf_1 && !zf_1) {
            u32 r3_2 = r1_1 - 0x41u;  // (from the original)
            zf_1 = r3_2 == 0x19u;  // (from the original)
            cf_1 = r3_2 >= 0x19u;  // (from the original)
        }
        if (cf_1 && !zf_1) {
            u32 r3_3 = r1_1 - 0x61u;  // (from the original)
            zf_1 = r3_3 == 0x19u;  // (from the original)
            cf_1 = r3_3 >= 0x19u;  // (from the original)
        }
        if (!!cf_1 && !zf_1 && r1_1 != 0x5fu) {  // (from the original)
            guest::cpu()->r[1] = r1_1;
            return 0u;
        }
        r2 += 1u;
        res_1 = r2 - 4u;
        r0 += 1u;
        guest::preempt();
    } while (res_1 >> 0x1f != ((r2 ^ 4u) & (r2 ^ res_1)) >> 0x1f);  // (from the original)
    guest::cpu()->r[1] = r1_1;
    return 1u;
}

}  // namespace d_00755384
GUEST_EXPORT(0x00755384, d_00755384::f_00755384);

// f_007553d8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_007553d8 {

inline constexpr guest::Function<0x0010184d, u32(u32, u32, u32, u32)> call_0010184c;  // (from the original)

u32 f_007553d8(u32 r0) {
    guest::StackFrame frame(0xc);  // the original's stack frame
    u32 r1_2 = 0;
    u32 r2 = frame.at(0).addr();
    u32 r12 = 4u;
    u32 r1 = 0u;
L_7553ec:;
    u32 r3 = *gptr<s8>(r0 + r1);
    if (r3 != 0) {
        if (r3 - 0x61u <= 0x19u) {  // (from the original)
            r3 -= 0x20u;  // (from the original)
        }
        u32 r4_1 = r2 + (r1 << 1);
        r1 += 1u;
        r3 = sxtb(r3);
        u32 res_1 = r1 - r12;
        *gptr<u16>(r4_1) = u16(r3);
        if (res_1 >> 0x1f != ((r1 ^ r12) & (r1 ^ res_1)) >> 0x1f) {  // (from the original)
            guest::preempt();
            goto L_7553ec;
        }
    }
    u32 r7 = 0x981698u;  // (from the original)
    u32 r6 = r2;
    u32 r4 = 0u;
    *gptr<u16>(r2 + (r1 << 1)) = 0;
    do {
        u32 r5_1 = r4 & 0xffu;  // (from the original)
        u32 r1_1 = *gptr<u32>(r7 + (r5_1 << 2));
        if (*gptr<u16>(r1_1) == 0x2eu) {  // (from the original)
            r1_1 += 2u;
        }
        u32 r0_1 = call_0010184c(r6, r1_1, r2, r3);
        r1_2 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (r0_1 == 0) {
            return r5_1;
        }
        r4 += 1u;
        guest::preempt();
    } while (s32(r4) < 4);
    guest::cpu()->r[1] = r1_2;
    return 0u;
}

}  // namespace d_007553d8
GUEST_EXPORT_FRAMED(0x007553d8, d_007553d8::f_007553d8, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_00755484: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00755484 {

inline constexpr guest::Function<0x005ad9a0, u32(u32)> call_005ad9a0;  // (from the original)
inline constexpr guest::Function<0x005aeff0, u32(u32)> call_005aeff0;  // (from the original)
inline constexpr guest::Function<0x005b060c, u32(u32, u32)> call_005b060c;  // (from the original)
inline constexpr guest::Function<0x005b0640, u32(u32, u32)> call_005b0640;  // (from the original)

u32 f_00755484(u32 r0, u32 r1_unused, u32 r2_unused, u32 r3) {
    guest::StackFrame frame(0x4);  // the original's stack frame
    *frame.at<u32>(0) = r3;
    u32 r0_2 = call_005ad9a0(r0 + 4u);
    call_005b060c(frame.at(0).addr(), r0_2 - 1u);
    u32 r0_5 = call_005aeff0(r0 + 0xcu);  // (from the original)
    call_005b0640(frame.at(0).addr(), r0_5 - 0x64u);  // (from the original)
    u32 r0_7 = *frame.at<u32>(0);
    return r0_7;
}

}  // namespace d_00755484
GUEST_EXPORT_FRAMED(0x00755484, d_00755484::f_00755484, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_007554bc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_007554bc {

struct __attribute__((packed)) Object_007554bc_0 {
    u8 unknown_0[0x28];  // (not used here)
    u32 word_28;
};
GUEST_OFFSET(Object_007554bc_0, word_28, 0x28);  // (from the original)


u32 f_007554bc(gptr<Object_007554bc_0> arg0, u32 r1) {
    u32 r0_1 = (arg0->word_28 & 0x1e00u) >> 9 & lsl_r(1u, r1 & 0xff);  // (from the original)
    if (r0_1 != 0) {
        r0_1 = 1u;
    }
    return r0_1;
}

}  // namespace d_007554bc
GUEST_EXPORT(0x007554bc, d_007554bc::f_007554bc);

// f_007554d8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_007554d8 {

struct __attribute__((packed)) Object_007554d8_0 {
    u8 unknown_0[0x2c];  // (not used here)
    u32 word_2c;
};
GUEST_OFFSET(Object_007554d8_0, word_2c, 0x2c);  // (from the original)


u32 f_007554d8(gptr<Object_007554d8_0> arg0) {
    return arg0->word_2c & 0x1fu;  // (from the original)
}

}  // namespace d_007554d8
GUEST_EXPORT(0x007554d8, d_007554d8::f_007554d8);

// f_007554e4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_007554e4 {

struct __attribute__((packed)) Object_007554e4_0 {
    u8 unknown_0[0x28];  // (not used here)
    u32 word_28;
};
GUEST_OFFSET(Object_007554e4_0, word_28, 0x28);  // (from the original)


u32 f_007554e4(gptr<Object_007554e4_0> arg0) {
    return arg0->word_28 & 1u;
}

}  // namespace d_007554e4
GUEST_EXPORT(0x007554e4, d_007554e4::f_007554e4);

// f_00755504: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00755504 {


u32 f_00755504(u32 r0, u32 r1) {
    u32 r12 = r0 + 0xcu;  // (from the original)
    u32 r3 = 8u;
    r0 = 0u;
L_755514:;
    u32 r2_1 = *gptr<s8>(r12 + r0);
    if (r2_1 != 0) {
        if (r2_1 - 0x61u <= 0x19u) {  // (from the original)
            r2_1 -= 0x20u;  // (from the original)
        }
        u32 r4_1 = r1 + (r0 << 1);
        r0 += 1u;
        u32 res_1 = r0 - r3;
        *gptr<u16>(r4_1) = u16(sxtb(r2_1));
        if (res_1 >> 0x1f != ((r0 ^ r3) & (r0 ^ res_1)) >> 0x1f) {  // (from the original)
            guest::preempt();
            goto L_755514;
        }
    }
    u32 r1_1 = r1 + (r0 << 1);
    *gptr<u16>(r1_1) = 0;
    guest::cpu()->r[1] = r1_1;
    return r0;
}

}  // namespace d_00755504
GUEST_EXPORT_FRAMED(0x00755504, d_00755504::f_00755504, 0x10);  // pushes {r4} first, as the original

// f_00755558: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00755558 {

struct __attribute__((packed)) Object_00755558_0 {
    u8 unknown_0[0x28];  // (not used here)
    u32 word_28;
};
GUEST_OFFSET(Object_00755558_0, word_28, 0x28);  // (from the original)


u32 f_00755558(gptr<Object_00755558_0> arg0) {
    return arg0->word_28 >> 1u & 0xffu;  // (from the original)
}

}  // namespace d_00755558
GUEST_EXPORT(0x00755558, d_00755558::f_00755558);

// f_00755568: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00755568 {

struct __attribute__((packed)) Object_00755568_0 {
    u8 unknown_0[0x2c];  // (not used here)
    u32 word_2c;
};
GUEST_OFFSET(Object_00755568_0, word_2c, 0x2c);  // (from the original)


u32 f_00755568(gptr<Object_00755568_0> arg0) {
    return (arg0->word_2c & 0x1e00000u) >> 0x15;  // (from the original)
}

}  // namespace d_00755568
GUEST_EXPORT(0x00755568, d_00755568::f_00755568);

// f_00755578: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00755578 {

struct __attribute__((packed)) Object_00755578_0 {
    u8 unknown_0[0x28];  // (not used here)
    u32 word_28;
};
GUEST_OFFSET(Object_00755578_0, word_28, 0x28);  // (from the original)

inline constexpr guest::Function<0x00754908, u32(u32)> call_00754908;  // (from the original)

u32 f_00755578(gptr<Object_00755578_0> arg0) {
    if ((arg0->word_28 & 1u) == 0) {
        return 1u;
    }
    u32 r0_2 = call_00754908(arg0.addr() + 0x14u);  // (from the original)
    if (r0_2 != 0) {
        return 0u;
    }
    u32 r0_4 = call_00754908(arg0.addr() + 0x1cu);  // (from the original)
    if (r0_4 == 0) {
        return 1u;
    }
    return 0u;
}

}  // namespace d_00755578
GUEST_EXPORT_FRAMED(0x00755578, d_00755578::f_00755578, 0x4010);  // pushes {r4, lr} first, as the original

// f_007555bc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_007555bc {

struct __attribute__((packed)) Object_007555bc_0 {
    u8 unknown_0[0x2c];  // (not used here)
    u32 word_2c;
};
GUEST_OFFSET(Object_007555bc_0, word_2c, 0x2c);  // (from the original)


u32 f_007555bc(gptr<Object_007555bc_0> arg0) {
    return arg0->word_2c >> 5u & 0xffu;  // (from the original)
}

}  // namespace d_007555bc
GUEST_EXPORT(0x007555bc, d_007555bc::f_007555bc);

// f_007555cc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_007555cc {


u32 f_007555cc(u32 r0, u32 r1) {
    u32 res_1 = 0;
    u32 r3 = r0;
    u32 r12 = 4u;
    r0 = 0u;
    do {
        u32 r2_1 = *gptr<s8>(r3 + r0);
        if (r2_1 == 0) {
            *gptr<u16>(r1 + (r0 << 1)) = 0;
            return r0;
        }
        if (r2_1 - 0x61u <= 0x19u) {  // (from the original)
            r2_1 -= 0x20u;  // (from the original)
        }
        u32 r4_1 = r1 + (r0 << 1);
        r0 += 1u;
        res_1 = r0 - r12;
        *gptr<u16>(r4_1) = u16(sxtb(r2_1));
        guest::preempt();
    } while (res_1 >> 0x1f != ((r0 ^ r12) & (r0 ^ res_1)) >> 0x1f);  // (from the original)
    *gptr<u16>(r1 + (r0 << 1)) = 0;
    return r0;
}

}  // namespace d_007555cc
GUEST_EXPORT_FRAMED(0x007555cc, d_007555cc::f_007555cc, 0x10);  // pushes {r4} first, as the original

// f_00755620: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00755620 {

struct __attribute__((packed)) Object_00755620_0 {
    u8 unknown_0[0x28];  // (not used here)
    u32 word_28;
};
GUEST_OFFSET(Object_00755620_0, word_28, 0x28);  // (from the original)

struct __attribute__((packed)) Local_00755620_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_00755620_ea_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_00755620_ea_1, word_4, 0x4);  // (from the original)

struct __attribute__((packed)) Local_00755620_ea_2 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_00755620_ea_2, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_00755620_ea_2, word_4, 0x4);  // (from the original)

struct __attribute__((packed)) Local_00755620_ea_3 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_00755620_ea_3, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_00755620_ea_3, word_4, 0x4);  // (from the original)

struct __attribute__((packed)) Local_00755620_ea_4 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_00755620_ea_4, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_00755620_ea_4, word_4, 0x4);  // (from the original)

struct __attribute__((packed)) Local_00755620_ea_5 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_00755620_ea_5, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_00755620_ea_5, word_4, 0x4);  // (from the original)

inline constexpr guest::Function<0x005aed44, u32(u32, u32, u32, u32)> call_005aed44;  // (from the original)
inline constexpr guest::Function<0x005af13c, u32(u32, u32, u32, u32)> call_005af13c;  // (from the original)
inline constexpr guest::Function<0x00754908, u32(u32, u32, u32, u32)> call_00754908;  // (from the original)

u32 f_00755620(gptr<Object_00755620_0> arg0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r14 = guest::cpu()->r[14];
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    gptr<Local_00755620_ea_4> ea_4 = gptr<Local_00755620_ea_4>(0u);
    u32 r4_3 = 0;
    gptr<Local_00755620_ea_5> ea_5 = gptr<Local_00755620_ea_5>(0u);
    u32 r4_4 = 0;
    gptr<Local_00755620_ea_1> ea_1 = gptr<Local_00755620_ea_1>(frame.at(0).addr());
    ea_1->word_0 = r4;
    ea_1->word_4 = r14;
    r4 = r0;
    if ((arg0->word_28 & 1u) == 0) {
        goto L_7556ac;
    } else {
        r0 = r4;
        r2 = 0u;
    }
L_75563c:;
    r1 = *gptr<s8>(r0);
    if (r1 != 0) {
        r3 = r1 - 0x30u;  // (from the original)
        u32 zf_1 = r3 == 9u;
        u32 cf_1 = r3 >= 9u;
        if (cf_1 && !zf_1) {
            r3 = r1 - 0x41u;  // (from the original)
            zf_1 = r3 == 0x19u;  // (from the original)
            cf_1 = r3 >= 0x19u;  // (from the original)
        }
        if (cf_1 && !zf_1) {
            r3 = r1 - 0x61u;  // (from the original)
            zf_1 = r3 == 0x19u;  // (from the original)
            cf_1 = r3 >= 0x19u;  // (from the original)
        }
        if (!!cf_1 && !zf_1 && r1 != 0x5fu) {  // (from the original)
            ea_4 = gptr<Local_00755620_ea_4>(frame.at(0).addr());
            r4_3 = ea_4->word_0;
            guest::cpu()->r[1] = r1;
            guest::cpu()->r[4] = r4_3;
            return 0u;
        }
        r2 += 1u;
        u32 res_1 = r2 - 4u;
        r0 += 1u;
        if (res_1 >> 0x1f != ((r2 ^ 4u) & (r2 ^ res_1)) >> 0x1f) {  // (from the original)
            guest::preempt();
            goto L_75563c;
        }
    }
    r0_1 = r4 + 4u;
    r0_2 = call_005aed44(r0_1, 0u, r2, r3);
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    if (r0_2 == 0) {
        gptr<Local_00755620_ea_2> ea_2 = gptr<Local_00755620_ea_2>(frame.at(0).addr());
        u32 r4_1 = ea_2->word_0;
        guest::cpu()->r[4] = r4_1;
        return r0_2;
    }
    r0_3 = r4 + 0xcu;  // (from the original)
    r0_4 = call_005af13c(r0_3, 0u, r2_1, r3_1);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0_4 == 0) {
        gptr<Local_00755620_ea_3> ea_3 = gptr<Local_00755620_ea_3>(frame.at(0).addr());
        u32 r4_2 = ea_3->word_0;
        guest::cpu()->r[4] = r4_2;
        return r0_4;
    }
L_7556ac:;
    if ((*gptr<u32>(r4 + 0x28u) & 1u) == 0) {  // (from the original)
        ea_5 = gptr<Local_00755620_ea_5>(frame.at(0).addr());
        r4_4 = ea_5->word_0;
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[4] = r4_4;
        return 1u;
    }
    u32 r0_6 = call_00754908(r4 + 0x14u, r1, r2, r3);  // (from the original)
    r1 = guest::cpu()->r[1];
    u32 r2_2 = guest::cpu()->r[2];
    u32 r3_2 = guest::cpu()->r[3];
    if (r0_6 == 0) {
        goto L_7556d4;
    }
    ea_4 = gptr<Local_00755620_ea_4>(frame.at(0).addr());
    r4_3 = ea_4->word_0;
    guest::cpu()->r[4] = r4_3;
    return 0u;
L_7556d4:;
    u32 r0_8 = call_00754908(r4 + 0x1cu, r1, r2_2, r3_2);  // (from the original)
    r1 = guest::cpu()->r[1];
    if (r0_8 != 0) {
        ea_4 = gptr<Local_00755620_ea_4>(frame.at(0).addr());
        r4_3 = ea_4->word_0;
        guest::cpu()->r[4] = r4_3;
        return 0u;
    }
    ea_5 = gptr<Local_00755620_ea_5>(frame.at(0).addr());
    r4_4 = ea_5->word_0;
    guest::cpu()->r[4] = r4_4;
    return 1u;
}

}  // namespace d_00755620
GUEST_EXPORT(0x00755620, d_00755620::f_00755620);

// f_007556f0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_007556f0 {


u32 f_007556f0(u32 r0, u32 r1) {
    return *gptr<u32>(r0 + (r1 << 2) + 0x30u);  // (from the original)
}

}  // namespace d_007556f0
GUEST_EXPORT(0x007556f0, d_007556f0::f_007556f0);

// f_007556fc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_007556fc {

struct __attribute__((packed)) Object_007556fc_0 {
    u8 unknown_0[0x2];  // (not used here)
    u16 half_2;
};
GUEST_OFFSET(Object_007556fc_0, half_2, 0x2);  // (from the original)


u32 f_007556fc(gptr<Object_007556fc_0> arg0) {
    u32 r0_1 = arg0->half_2;
    u32 zf_1 = r0_1 == 0x270eu;  // (from the original)
    u32 cf_1 = r0_1 >= 0x270eu;  // (from the original)
    if (!cf_1 || zf_1) {
        r0_1 = 1u;
    }
    if (cf_1 && !zf_1) {
        r0_1 = 0u;
    }
    guest::cpu()->r[1] = 0x270eu;  // (from the original)
    return r0_1;
}

}  // namespace d_007556fc
GUEST_EXPORT(0x007556fc, d_007556fc::f_007556fc);

// f_00755718: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00755718 {

struct __attribute__((packed)) Object_00755718_0 {
    u16 half_0;
};
GUEST_OFFSET(Object_00755718_0, half_0, 0x0);  // (from the original)


u32 f_00755718(gptr<Object_00755718_0> arg0) {
    return arg0->half_0 >= 0x384u ? 0u : 1u;  // (from the original)
}

}  // namespace d_00755718
GUEST_EXPORT(0x00755718, d_00755718::f_00755718);

// f_0075572c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0075572c {

struct __attribute__((packed)) Object_0075572c_0 {
    u16 half_0;
    u16 half_2;
};
GUEST_OFFSET(Object_0075572c_0, half_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_0075572c_0, half_2, 0x2);  // (from the original)

struct __attribute__((packed)) Object_0075572c_1 {
    u16 half_0;
    u16 half_2;
};
GUEST_OFFSET(Object_0075572c_1, half_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_0075572c_1, half_2, 0x2);  // (from the original)


u32 f_0075572c(gptr<Object_0075572c_0> arg0, gptr<Object_0075572c_1> arg1) {
    if (arg0->half_0 != arg1->half_0) {
        guest::cpu()->r[1] = arg1.addr();
        return 0u;
    }
    u32 r1_1 = arg1->half_2;
    if (arg0->half_2 == r1_1) {
        guest::cpu()->r[1] = r1_1;
        return 1u;
    }
    guest::cpu()->r[1] = r1_1;
    return 0u;
}

}  // namespace d_0075572c
GUEST_EXPORT(0x0075572c, d_0075572c::f_0075572c);

// f_00755758: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00755758 {

struct __attribute__((packed)) Object_00755758_0 {
    u16 half_0;
    u16 half_2;
};
GUEST_OFFSET(Object_00755758_0, half_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_00755758_0, half_2, 0x2);  // (from the original)

struct __attribute__((packed)) Object_00755758_1 {
    u16 half_0;
    u16 half_2;
};
GUEST_OFFSET(Object_00755758_1, half_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_00755758_1, half_2, 0x2);  // (from the original)


u32 f_00755758(gptr<Object_00755758_0> arg0, gptr<Object_00755758_1> arg1) {
    if (arg0->half_0 != arg1->half_0) {
        guest::cpu()->r[1] = arg1.addr();
        return 1u;
    }
    u32 r1_1 = arg1->half_2;
    if (arg0->half_2 == r1_1) {
        guest::cpu()->r[1] = r1_1;
        return 0u;
    }
    guest::cpu()->r[1] = r1_1;
    return 1u;
}

}  // namespace d_00755758
GUEST_EXPORT(0x00755758, d_00755758::f_00755758);

// f_00755788: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00755788 {

struct __attribute__((packed)) Object_00755788_0 {
    u8 unknown_0[0xc];  // (not used here)
    u32 word_c;
    u8 byte_10;
    u8 unknown_11[0x3];  // (not used here)
    u32 word_14;
    u8 unknown_18[0x4];  // (not used here)
    u32 word_1c;
    u32 word_20;
    u32 word_24;
};
GUEST_OFFSET(Object_00755788_0, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_00755788_0, byte_10, 0x10);  // (from the original)
GUEST_OFFSET(Object_00755788_0, word_14, 0x14);  // (from the original)
GUEST_OFFSET(Object_00755788_0, word_1c, 0x1c);  // (from the original)
GUEST_OFFSET(Object_00755788_0, word_20, 0x20);  // (from the original)
GUEST_OFFSET(Object_00755788_0, word_24, 0x24);  // (from the original)

struct __attribute__((packed)) Local_00755788_r2_2 {
    u8 unknown_0[0x14];  // (not used here)
    u16 half_14;
    u16 half_16;
};
GUEST_OFFSET(Local_00755788_r2_2, half_14, 0x14);  // (from the original)
GUEST_OFFSET(Local_00755788_r2_2, half_16, 0x16);  // (from the original)

inline constexpr guest::Function<0x005aa50c, u32(u32, u32, u32, u32)> call_005aa50c;  // (from the original)

u32 f_00755788(gptr<Object_00755788_0> arg0, u32 r1) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    if (arg0->word_1c == 0) {
        return 2u;
    }
    *frame.at<u32>(0) = arg0->word_20;
    *frame.at<u32>(4) = arg0->word_24;
    u32 r0_2 = call_005aa50c(frame.at(0).addr(), frame.at(4).addr(), 0x400u, 0x300u);  // (from the original)
    u32 r2_1 = guest::cpu()->r[2];
    u32 r1_2 = *frame.at<u32>(0);
    u32 res_1 = r1_2 - 0xa0u;  // (from the original)
    u32 nf_1 = res_1 >> 0x1f;  // (from the original)
    u32 vf_1 = ((r1_2 ^ 0xa0u) & (r1_2 ^ res_1)) >> 0x1f;  // (from the original)
    if (nf_1 == vf_1) {
        r2_1 = *frame.at<u32>(4);
        u32 res_2 = r2_1 - 0x78u;  // (from the original)
        nf_1 = res_2 >> 0x1f;  // (from the original)
        vf_1 = ((r2_1 ^ 0x78u) & (r2_1 ^ res_2)) >> 0x1f;  // (from the original)
    }
    if (nf_1 != vf_1) {
        guest::cpu()->r[1] = r1_2;
        return 2u;
    }
    u32 res_3 = r1_2 - 0x400u;  // (from the original)
    u32 nf_2 = res_3 >> 0x1f;  // (from the original)
    u32 zf_1 = res_3 == 0;
    u32 vf_2 = ((r1_2 ^ 0x400u) & (r1_2 ^ res_3)) >> 0x1f;  // (from the original)
    if (zf_1 || nf_2 != vf_2) {
        u32 res_4 = r2_1 - 0x300u;  // (from the original)
        nf_2 = res_4 >> 0x1f;  // (from the original)
        zf_1 = res_4 == 0;
        vf_2 = ((r2_1 ^ 0x300u) & (r2_1 ^ res_4)) >> 0x1f;  // (from the original)
    }
    if (!zf_1 && nf_2 == vf_2 || s32(r0_2) > 2) {
        guest::cpu()->r[1] = r1_2;
        return 2u;
    }
    u32 r0_3 = arg0->word_20;
    if ((r0_3 & 7u) != 0) {
        guest::cpu()->r[1] = r1_2;
        return 2u;
    }
    u32 r1_3 = arg0->word_24;
    if ((r1_3 & 7u) != 0) {
        guest::cpu()->r[1] = r1_3;
        return 2u;
    }
    gptr<Local_00755788_r2_2> r2_2 = gptr<Local_00755788_r2_2>(arg0->word_c);
    if ((u32(r2_2->half_14) & 0x10u) != 0) {  // (from the original)
        u32 res_5 = r0_3 - 0x190u;  // (from the original)
        u32 nf_3 = res_5 >> 0x1f;  // (from the original)
        u32 vf_3 = ((r0_3 ^ 0x190u) & (r0_3 ^ res_5)) >> 0x1f;  // (from the original)
        if (nf_3 == vf_3) {
            u32 res_6 = r1_3 - 0xf0u;  // (from the original)
            nf_3 = res_6 >> 0x1f;  // (from the original)
            vf_3 = ((r1_3 ^ 0xf0u) & (r1_3 ^ res_6)) >> 0x1f;  // (from the original)
        }
        if (nf_3 != vf_3) {
            guest::cpu()->r[1] = r1_3;
            return 2u;
        }
        u32 res_7 = r0_3 - 0x400u;  // (from the original)
        u32 nf_4 = res_7 >> 0x1f;  // (from the original)
        u32 zf_2 = res_7 == 0;
        u32 vf_4 = ((r0_3 ^ 0x400u) & (r0_3 ^ res_7)) >> 0x1f;  // (from the original)
        if (zf_2 || nf_4 != vf_4) {
            u32 res_8 = r1_3 - 0x300u;  // (from the original)
            nf_4 = res_8 >> 0x1f;  // (from the original)
            zf_2 = res_8 == 0;
            vf_4 = ((r1_3 ^ 0x300u) & (r1_3 ^ res_8)) >> 0x1f;  // (from the original)
        }
        if (!zf_2 && nf_4 == vf_4) {
            guest::cpu()->r[1] = r1_3;
            return 2u;
        }
    }
    u32 r0_4 = arg0->word_14;
    if (s32(r0_4) < 1 || s32(r0_4) > 0x64) {  // (from the original)
        guest::cpu()->r[1] = r1_3;
        return 2u;
    }
    if ((u32(r2_2->half_16) & 1u) != 0 && arg0->byte_10 != 0) {
        guest::cpu()->r[1] = r1_3;
        return 0u;
    }
    guest::cpu()->r[1] = r1_3;
    return 2u;
}

}  // namespace d_00755788
GUEST_EXPORT_FRAMED(0x00755788, d_00755788::f_00755788, 0x4010);  // pushes {r4, lr} first, as the original

// f_00755864: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00755864 {

inline constexpr guest::Function<0x0073663c, u32(u32, u32)> call_0073663c;  // (from the original)

u32 f_00755864(u32 r0) {
    return call_0073663c(r0 + 8u, guest::cpu()->r[1]);
}

}  // namespace d_00755864
GUEST_EXPORT(0x00755864, d_00755864::f_00755864);

// f_0075586c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0075586c {

inline constexpr guest::Function<0x0073666c, u32(u32, u32)> call_0073666c;  // (from the original)

u32 f_0075586c(u32 r0) {
    return call_0073666c(r0 + 8u, guest::cpu()->r[1]);
}

}  // namespace d_0075586c
GUEST_EXPORT(0x0075586c, d_0075586c::f_0075586c);

// f_00755874: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00755874 {

struct __attribute__((packed)) Object_00755874_0 {
    u8 unknown_0[0x68];  // (not used here)
    u32 word_68;
};
GUEST_OFFSET(Object_00755874_0, word_68, 0x68);  // (from the original)

inline constexpr guest::Function<0x0073663c, u32(u32, u32)> call_0073663c;  // (from the original)

u32 f_00755874(gptr<Object_00755874_0> arg0) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 r1 = 0;
    u32 r0_1 = arg0.addr() + 8u;
    if (arg0->word_68 == 0) {
        frame.release();
        return call_0073663c(r0_1, r1);
    }
    u32 r0_2 = call_0073663c(r0_1, r1);
    u32 r0_3 = arg0->word_68;
    return lsr_r(r0_2 + lsl_r(1u, r0_3 & 0xff) - 1u, r0_3 & 0xff);  // (from the original)
}

}  // namespace d_00755874
GUEST_EXPORT(0x00755874, d_00755874::f_00755874);

// f_007558b4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_007558b4 {

struct __attribute__((packed)) Object_007558b4_0 {
    u8 unknown_0[0x68];  // (not used here)
    u32 word_68;
};
GUEST_OFFSET(Object_007558b4_0, word_68, 0x68);  // (from the original)

inline constexpr guest::Function<0x0073666c, u32(u32, u32)> call_0073666c;  // (from the original)

u32 f_007558b4(gptr<Object_007558b4_0> arg0) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 r1 = 0;
    u32 r0_1 = arg0.addr() + 8u;
    if (arg0->word_68 == 0) {
        frame.release();
        return call_0073666c(r0_1, r1);
    }
    u32 r0_2 = call_0073666c(r0_1, r1);
    u32 r0_3 = arg0->word_68;
    return lsr_r(r0_2 + lsl_r(1u, r0_3 & 0xff) - 1u, r0_3 & 0xff);  // (from the original)
}

}  // namespace d_007558b4
GUEST_EXPORT(0x007558b4, d_007558b4::f_007558b4);

// f_00755a40: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00755a40 {

struct __attribute__((packed)) Object_00755a40_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_00755a40_0, word_0, 0x0);  // (from the original)

inline constexpr guest::Function<0x00159550, u32(u32, u32, u32)> call_00159550;  // (from the original)

u32 f_00755a40(gptr<Object_00755a40_0> arg0, u32 r1, u32 r2) {
    u32 r0_2 = call_00159550(arg0->word_0, r2, r1);
    return r0_2 == 0 ? 1u : 0u;
}

}  // namespace d_00755a40
GUEST_EXPORT_FRAMED(0x00755a40, d_00755a40::f_00755a40, 0x4010);  // pushes {r4, lr} first, as the original

// f_00755cd0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00755cd0 {

struct __attribute__((packed)) Local_00755cd0_r3_1 {
    u8 unknown_0[0x64];  // (not used here)
    u32 word_64;
    u32 word_68;
};
GUEST_OFFSET(Local_00755cd0_r3_1, word_64, 0x64);  // (from the original)
GUEST_OFFSET(Local_00755cd0_r3_1, word_68, 0x68);  // (from the original)


u32 f_00755cd0(gptr<AcNpcSpShop> arg0, u32 r1) {
    u32 r0 = arg0.addr();
    u32 r12 = arg0->word_60;
    if (r12 == 0) {
        return 0u;
    }
    u32 r2 = r12 & 1u;
    u32 r3 = 0u;
    if (r2 >= 0u && r2 != 0) {
        do {
            if (*gptr<u32>(r0 + (r3 << 2) + 0x64u) == r1) {  // (from the original)
                return 1u;
            }
            r3 += 1u;
            guest::preempt();
        } while (r2 > r3);
    }
    if (r12 <= r2) {
        return 0u;
    }
    do {
        gptr<Local_00755cd0_r3_1> r3_1 = gptr<Local_00755cd0_r3_1>(r0 + (r2 << 2));
        if (r3_1->word_64 == r1 || r3_1->word_68 == r1) {
            return 1u;
        }
        r2 += 2u;
        guest::preempt();
    } while (r12 > r2);
    return 0u;
}

}  // namespace d_00755cd0
GUEST_EXPORT_FRAMED(0x00755cd0, d_00755cd0::f_00755cd0, 0x10);  // pushes {r4} first, as the original

// f_00756120: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00756120 {

inline constexpr guest::Function<0x002fb328, u32(u32, u32, u32, u32)> call_002fb328;  // (from the original)
inline constexpr guest::Function<0x0071dcdc, u32(u32, u32)> call_0071dcdc;  // (from the original)
inline constexpr guest::Function<0x00756758, u32(u32, u32)> call_00756758;  // (from the original)

u32 f_00756120(u32 r0, u32 r1) {
    u32 r1_1 = 0;
    u32 r0_1 = call_002fb328(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_3 = call_00756758(r0_1 + 0x406ecu, r0);  // (from the original)
    u32 r6 = r0_3;
    u32 r5 = r1 + 0x7008u;  // (from the original)
    u32 r4 = 0u;
    do {
        u32 r0_4 = call_0071dcdc(r5, r4);
        r1_1 = guest::cpu()->r[1];
        if (r0_4 != 0) {
            u32 r0_5 = *gptr<u8>(r0_4 + 0x272u);  // (from the original)
            if ((r0_5 & 0x80u) != 0 && (r0_5 & 0x20u) == 0 && (r0_5 & 7u) == r6) {  // (from the original)
                return r4;
            }
        }
        r4 += 1u;
        guest::preempt();
    } while (r4 < 0xau);  // (from the original)
    guest::cpu()->r[1] = r1_1;
    return ~0u;
}

}  // namespace d_00756120
GUEST_EXPORT_FRAMED(0x00756120, d_00756120::f_00756120, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_007561ac: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_007561ac {

struct __attribute__((packed)) Object_007561ac_0 {
    u8 unknown_0[0x9];  // (not used here)
    u8 byte_9;
    u8 unknown_a[0x34];  // (not used here)
    u8 byte_3e;
};
GUEST_OFFSET(Object_007561ac_0, byte_9, 0x9);  // (from the original)
GUEST_OFFSET(Object_007561ac_0, byte_3e, 0x3e);  // (from the original)

struct __attribute__((packed)) Local_007561ac_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_007561ac_ea_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_007561ac_ea_1, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_007561ac_ea_1, word_8, 0x8);  // (from the original)

struct __attribute__((packed)) Local_007561ac_ea_2 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_007561ac_ea_2, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_007561ac_ea_2, word_4, 0x4);  // (from the original)

struct __attribute__((packed)) Local_007561ac_ea_3 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_007561ac_ea_3, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_007561ac_ea_3, word_4, 0x4);  // (from the original)

struct __attribute__((packed)) Local_007561ac_r3_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_007561ac_r3_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_007561ac_r3_1, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_007561ac_r3_1, word_8, 0x8);  // (from the original)

inline constexpr guest::Function<0x002fb378, u32(u32)> call_002fb378;  // (from the original)
inline constexpr guest::Function<0x002fb430, u32(u32, u32, u32, u32)> call_002fb430;  // (from the original)
inline constexpr guest::Function<0x002fd41c, u32(u32, u32, u32, u32)> call_002fd41c;  // (from the original)
inline constexpr guest::Function<0x003014b4, u32(u32, u32, u32, u32)> call_003014b4;  // (from the original)

u32 f_007561ac(gptr<Object_007561ac_0> arg0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x20);  // the original's stack frame
    u32 r0_1 = arg0->byte_9;
    if (s32(r0_1) < 3 || s32(r0_1) >= 9) {
        return 0u;
    }
    if (s32(r0_1) >= 4) {
        return 1u;
    }
    call_002fb430(frame.at(0x14).addr(), arg0.addr(), r2, r3);  // (from the original)
    gptr<Local_007561ac_ea_1> ea_1 = gptr<Local_007561ac_ea_1>(frame.at(0x14).addr());  // (from the original)
    u32 r1_1 = ea_1->word_4;
    u32 r2_1 = ea_1->word_8;
    gptr<Local_007561ac_r3_1> r3_1 = gptr<Local_007561ac_r3_1>(frame.at(8).addr());
    r3_1->word_0 = ea_1->word_0;
    r3_1->word_4 = r1_1;
    r3_1->word_8 = r2_1;
    u32 r1_2 = s8(arg0->byte_3e);
    u32 r0_4 = call_003014b4(frame.at(8).addr(), r1_2, r2_1, r3_1.addr());
    u32 r0_5 = call_002fb378(r0_4);
    gptr<Local_007561ac_ea_2> ea_2 = gptr<Local_007561ac_ea_2>(frame.at(0xc).addr());  // (from the original)
    u32 r1_3 = ea_2->word_0;
    u32 r2_2 = ea_2->word_4;
    gptr<Local_007561ac_ea_3> ea_3 = gptr<Local_007561ac_ea_3>(frame.at(0).addr());
    ea_3->word_0 = r1_3;
    ea_3->word_4 = r2_2;
    u32 r0_7 = call_002fd41c(*gptr<u32>(r0_5), *gptr<u32>(r0_5 + 4), r2_2, *frame.at<u32>(8));
    return r0_7;
}

}  // namespace d_007561ac
GUEST_EXPORT_FRAMED(0x007561ac, d_007561ac::f_007561ac, 0x4010);  // pushes {r4, lr} first, as the original

// f_00756238: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00756238 {

struct __attribute__((packed)) Object_00756238_1 {
    u8 unknown_0[0x1028];  // (not used here)
    u32 word_1028;
};
GUEST_OFFSET(Object_00756238_1, word_1028, 0x1028);  // (from the original)

inline constexpr guest::Function<0x00318e38, u32(u32, u32, u32, u32)> call_00318e38;  // (from the original)

u32 f_00756238(u32 r0, gptr<Object_00756238_1> arg1) {
    u32 r0_1 = call_00318e38(r0, arg1->word_1028, guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0_1 != 0) {
        r0_1 = 1u;
    }
    return r0_1;
}

}  // namespace d_00756238
GUEST_EXPORT_FRAMED(0x00756238, d_00756238::f_00756238, 0x4010);  // pushes {r4, lr} first, as the original

// f_00756380: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00756380 {

inline constexpr guest::Function<0x002fb328, u32(u32, u32, u32, u32)> call_002fb328;  // (from the original)
inline constexpr guest::Function<0x00309fbc, u32(u32, u32, u32, u32)> call_00309fbc;  // (from the original)

u32 f_00756380(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = r0;
    if (r1 == 0) {
        r2 = 0u;
    } else {
        u32 r0_1 = call_002fb328(r0, r1, r2, r3);
        u32 r0_3 = call_00309fbc(r0_1 + 0xa0u, r1, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        r1 = r0_3;
        if (r0_3 >= 4u) {
            guest::cpu()->r[1] = r1;
            return 0u;
        } else {
            r0 = 0u;
            r1 = r4 + (r1 << 7);
        }
        do {
            if (*gptr<u8>(r1 + (r0 << 6) + 8u) >= 0x21u) {  // (from the original)
                guest::cpu()->r[1] = r1;
                return 1u;
            }
            r0 += 1u;
            guest::preempt();
        } while (s32(r0) < 2);
        guest::cpu()->r[1] = r1;
        return 0u;
    }
L_7563d8:;
    r0 = 0u;
    r1 = r4 + (r2 << 7);
L_7563e0:;
    if (*gptr<u8>(r1 + (r0 << 6) + 8u) < 0x21u) {  // (from the original)
        goto L_7563f8;
    }
    guest::cpu()->r[1] = r1;
    return 1u;
L_7563f8:;
    r0 += 1u;
    if (s32(r0) < 2) {
        guest::preempt();
        goto L_7563e0;
    }
    r2 += 1u;
    if (s32(r2) < 4) {
        guest::preempt();
        goto L_7563d8;
    }
    guest::cpu()->r[1] = r1;
    return 0u;
}

}  // namespace d_00756380
GUEST_EXPORT_FRAMED(0x00756380, d_00756380::f_00756380, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_00756758: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00756758 {


u32 f_00756758(u32 r0, u32 r1) {
    if (r1 == r0) {
        return 0u;
    }
    if (r1 == r0 + 0x40u) {  // (from the original)
        return 1u;
    }
    if (r1 == r0 + 0x80u) {  // (from the original)
        return 2u;
    }
    if (r1 == r0 + 0xc0u) {  // (from the original)
        return 3u;
    }
    if (r1 == r0 + 0x100u) {  // (from the original)
        return 4u;
    }
    if (r1 == r0 + 0x140u) {  // (from the original)
        return 5u;
    }
    if (r1 == r0 + 0x180u) {  // (from the original)
        return 6u;
    }
    return r1 == r0 + 0x1c0u ? 7u : ~0u;  // (from the original)
}

}  // namespace d_00756758
GUEST_EXPORT(0x00756758, d_00756758::f_00756758);

// f_007567d8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_007567d8 {

struct __attribute__((packed)) Local_007567d8_ea_1 {
    u16 half_0;
    u8 unknown_2[0x12];  // (not used here)
    u8 byte_14;
};
GUEST_OFFSET(Local_007567d8_ea_1, half_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_007567d8_ea_1, byte_14, 0x14);  // (from the original)

struct __attribute__((packed)) Local_007567d8_r5_1 {
    u16 half_0;
    u8 unknown_2[0x12];  // (not used here)
    u8 byte_14;
};
GUEST_OFFSET(Local_007567d8_r5_1, half_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_007567d8_r5_1, byte_14, 0x14);  // (from the original)

inline constexpr guest::Function<0x00100d2d, u32(u32, u32, u32)> call_00100d2c;  // (from the original)
inline constexpr guest::Function<0x002fb328, u32(u32, u32, u32, u32)> call_002fb328;  // (from the original)
inline constexpr guest::Function<0x00309fbc, u32(u32, u32, u32)> call_00309fbc;  // (from the original)

u32 f_007567d8(u32 r0, u32 r1, u32 r2) {
    u32 r4 = 0;
    u32 r7 = 0;
    u32 r6 = r1;
    u32 r0_1 = call_002fb328(r0, r1, r2, guest::cpu()->r[3]);
    u32 r0_3 = call_00309fbc(r0_1 + 0xa0u, r2, guest::cpu()->r[2]);  // (from the original)
    u32 r1_1 = guest::cpu()->r[1];
    u32 r8 = r0_3;
    if (r0_3 >= 4u) {
        return ~0u;
    } else {
        r4 = 0u;
        r7 = r0 + (r8 << 7);
    }
    do {
        u32 r1_2 = r7 + (r4 << 6);
        gptr<Local_007567d8_r5_1> r5_1 = gptr<Local_007567d8_r5_1>(r1_2 + 0xcu);  // (from the original)
        r1_1 = *gptr<u16>(r1_2 + 0x38u);  // (from the original)
        if (r1_1 == *gptr<u16>(r6 + 0x2cu)) {  // (from the original)
            r1_1 = *gptr<u16>(r6);
            if (r5_1->half_0 == r1_1) {
                r1_1 = r5_1->byte_14;
                if (r1_1 == *gptr<u8>(r6 + 0x14u)) {  // (from the original)
                    u32 r0_5 = call_00100d2c(r5_1.addr() + 2u, r6 + 2u, 0x12u);  // (from the original)
                    r1_1 = guest::cpu()->r[1];
                    if (r0_5 == 0) {
                        gptr<Local_007567d8_ea_1> ea_1 = gptr<Local_007567d8_ea_1>(r5_1.addr() + 0x16u);  // (from the original)
                        r1_1 = ea_1->half_0;
                        u32 r0_6 = r6 + 0x16u;  // (from the original)
                        if (r1_1 == *gptr<u16>(r6 + 0x16u)) {  // (from the original)
                            r1_1 = ea_1->byte_14;
                            if (r1_1 == *gptr<u8>(r0_6 + 0x14u)) {  // (from the original)
                                u32 r0_8 = call_00100d2c(ea_1.addr() + 2u, r0_6 + 2u, 0x12u);  // (from the original)
                                r1_1 = guest::cpu()->r[1];
                                if (r0_8 == 0) {
                                    return r4 + (r8 << 1);
                                }
                            }
                        }
                    }
                }
            }
        }
        r4 += 1u;
        guest::preempt();
    } while (s32(r4) < 2);
    guest::cpu()->r[1] = r1_1;
    return ~0u;
}

}  // namespace d_007567d8
GUEST_EXPORT_FRAMED(0x007567d8, d_007567d8::f_007567d8, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_00756968: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00756968 {

struct __attribute__((packed)) Object_00756968_0 {
    u8 unknown_0[0x8];  // (not used here)
    u8 byte_8;
};
GUEST_OFFSET(Object_00756968_0, byte_8, 0x8);  // (from the original)

struct __attribute__((packed)) Object_00756968_1 {
    u32 word_0;
};
GUEST_OFFSET(Object_00756968_1, word_0, 0x0);  // (from the original)


void f_00756968(gptr<Object_00756968_0> arg0, gptr<Object_00756968_1> arg1) {
    u32 r0 = arg0.addr();
    u32 r12 = arg0->byte_8;
    u32 r3 = 0x88f364u;  // (from the original)
    r0 = 0u;
    u32 r2 = r12;
    do {
        if (s32(r2) < s32(*gptr<u32>(r3 + (r0 << 2)))) {
            u32 r0_1 = r0 & 0xffu;  // (from the original)
            if (r0_1 >= 0xcu) {  // (from the original)
                return;
            }
            arg1->word_0 = r12 - *gptr<u32>(0x88f334u + (r0_1 << 2));  // (from the original)
            return;
        }
        r0 += 1u;
        guest::preempt();
    } while (s32(r0) < 0xc);  // (from the original)
}

}  // namespace d_00756968
GUEST_EXPORT_FRAMED(0x00756968, d_00756968::f_00756968, 0x10);  // pushes {r4} first, as the original

// f_007569d4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_007569d4 {

struct __attribute__((packed)) Local_007569d4_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_007569d4_ea_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_007569d4_ea_1, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_007569d4_ea_1, word_8, 0x8);  // (from the original)

struct __attribute__((packed)) Local_007569d4_ea_2 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_007569d4_ea_2, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_007569d4_ea_2, word_4, 0x4);  // (from the original)

struct __attribute__((packed)) Local_007569d4_ea_3 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_007569d4_ea_3, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_007569d4_ea_3, word_4, 0x4);  // (from the original)

struct __attribute__((packed)) Local_007569d4_r3_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_007569d4_r3_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_007569d4_r3_1, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_007569d4_r3_1, word_8, 0x8);  // (from the original)

inline constexpr guest::Function<0x002fb378, u32(u32)> call_002fb378;  // (from the original)
inline constexpr guest::Function<0x002fb430, u32(u32, u32, u32, u32)> call_002fb430;  // (from the original)
inline constexpr guest::Function<0x002fb4a0, u32(u32, u32, u32, u32)> call_002fb4a0;  // (from the original)
inline constexpr guest::Function<0x0056cc38, u32(u32, u32, u32, u32)> call_0056cc38;  // (from the original)

u32 f_007569d4(u32 r0, u32 r1_unused, u32 r2_unused, u32 r3) {
    guest::StackFrame frame(0x24);  // the original's stack frame
    u32 r2_1 = frame.at(0x14).addr();  // (from the original)
    call_002fb430(r2_1, r0, r2_1, r3);
    gptr<Local_007569d4_ea_1> ea_1 = gptr<Local_007569d4_ea_1>(frame.at(0x14).addr());  // (from the original)
    u32 r1_1 = ea_1->word_4;
    u32 r2_2 = ea_1->word_8;
    gptr<Local_007569d4_r3_1> r3_1 = gptr<Local_007569d4_r3_1>(frame.at(8).addr());
    r3_1->word_0 = ea_1->word_0;
    r3_1->word_4 = r1_1;
    r3_1->word_8 = r2_2;
    u32 r0_2 = call_0056cc38(frame.at(8).addr(), 1u, r2_2, r3_1.addr());
    u32 r0_3 = call_002fb378(r0_2);
    gptr<Local_007569d4_ea_2> ea_2 = gptr<Local_007569d4_ea_2>(frame.at(0xc).addr());  // (from the original)
    u32 r1_2 = ea_2->word_0;
    u32 r2_3 = ea_2->word_4;
    gptr<Local_007569d4_ea_3> ea_3 = gptr<Local_007569d4_ea_3>(frame.at(0).addr());
    ea_3->word_0 = r1_2;
    ea_3->word_4 = r2_3;
    u32 r0_5 = call_002fb4a0(*gptr<u32>(r0_3), *gptr<u32>(r0_3 + 4), *gptr<u32>(r0_3 + 8), *frame.at<u32>(8));
    return r0_5;
}

}  // namespace d_007569d4
GUEST_EXPORT_FRAMED(0x007569d4, d_007569d4::f_007569d4, 0x4000);  // pushes {lr} first, as the original

// f_00756a7c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00756a7c {


u32 f_00756a7c(u32 r0, u32 r1) {
    u32 r2 = 0;
    if (r1 >= 0xau) {  // (from the original)
        return 3u;
    } else {
        r2 = 0u;
    }
    do {
        u32 r3_1 = r2 & 0xffu;  // (from the original)
        if ((r3_1 >= 3u ? ~0u : u32(*gptr<s8>(r3_1 + r0 + 0x56u))) == r1) {  // (from the original)
            return r2 & 0xffu;  // (from the original)
        }
        r2 += 1u;
        guest::preempt();
    } while (s32(r2) < 3);
    return 3u;
}

}  // namespace d_00756a7c
GUEST_EXPORT(0x00756a7c, d_00756a7c::f_00756a7c);

// f_00756ad8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00756ad8 {

struct __attribute__((packed)) Local_00756ad8_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_00756ad8_ea_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_00756ad8_ea_1, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_00756ad8_ea_1, word_8, 0x8);  // (from the original)

struct __attribute__((packed)) Local_00756ad8_ea_2 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_00756ad8_ea_2, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_00756ad8_ea_2, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_00756ad8_ea_2, word_8, 0x8);  // (from the original)

struct __attribute__((packed)) Local_00756ad8_ea_3 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_00756ad8_ea_3, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_00756ad8_ea_3, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_00756ad8_ea_3, word_8, 0x8);  // (from the original)

inline constexpr guest::Function<0x002fb430, u32(u32, u32, u32, u32)> call_002fb430;  // (from the original)
inline constexpr guest::Function<0x0030a488, u32(u32, u32, u32, u32)> call_0030a488;  // (from the original)

u32 f_00756ad8(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x20);  // the original's stack frame
    call_002fb430(frame.at(0x10).addr(), r1 + 0x46u, r2, r3);  // (from the original)
    gptr<Local_00756ad8_ea_1> ea_1 = gptr<Local_00756ad8_ea_1>(frame.at(0x10).addr());  // (from the original)
    u32 r0_2 = ea_1->word_0;
    u32 r1_2 = ea_1->word_4;
    u32 r2_1 = ea_1->word_8;
    gptr<Local_00756ad8_ea_2> ea_2 = gptr<Local_00756ad8_ea_2>(frame.at(4).addr());
    ea_2->word_0 = r0_2;
    ea_2->word_4 = r1_2;
    ea_2->word_8 = r2_1;
    u32 r3_1 = r2 == 0 ? u32(*gptr<u8>(r1 + 0x5au)) << 1 : u32(*gptr<u8>(r1 + 0x5au));  // (from the original)
    *frame.at<u32>(0) = 0;
    call_0030a488(frame.at(4).addr(), 0u, 0u, r3_1);
    gptr<Local_00756ad8_ea_3> ea_3 = gptr<Local_00756ad8_ea_3>(frame.at(4).addr());
    u32 r0_4 = ea_3->word_0;
    u32 r1_3 = ea_3->word_4;
    u32 r2_2 = ea_3->word_8;
    *gptr<u32>(r0) = r0_4;
    *gptr<u32>(r0 + 4) = r1_3;
    *gptr<u32>(r0 + 8) = r2_2;
    guest::cpu()->r[1] = r1_3;
    return r0_4;
}

}  // namespace d_00756ad8
GUEST_EXPORT_FRAMED(0x00756ad8, d_00756ad8::f_00756ad8, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_00756bd0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00756bd0 {


u32 f_00756bd0(u32 r0) {
    u32 r3 = r0;
    r0 = 0u;
    u32 r1 = r0;
    do {
        u32 r2_1 = r1 & 0xffu;  // (from the original)
        if (r2_1 < 3u && u32(*gptr<s8>(r2_1 + r3 + 0x56u)) < 0xau) {  // (from the original)
            r0 += 1u;
        }
        r1 += 1u;
        guest::preempt();
    } while (s32(r1) < 3);
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_00756bd0
GUEST_EXPORT(0x00756bd0, d_00756bd0::f_00756bd0);

// f_00756d94: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00756d94 {


u32 f_00756d94(u32 r0, u32 r1) {
    if (r1 >= 3u) {
        guest::cpu()->r[1] = r1;
        return 0u;
    }
    u32 r1_1 = r1 + (r1 << 1) + (r1 << 3);
    guest::cpu()->r[1] = r1_1;
    return r0 + (r1_1 << 1) + 8u;
}

}  // namespace d_00756d94
GUEST_EXPORT(0x00756d94, d_00756d94::f_00756d94);

// f_00756db4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00756db4 {

inline constexpr guest::Function<0x002ff6f4, u32(u32, u32)> call_002ff6f4;  // (from the original)
inline constexpr guest::Function<0x00311a34, u32(u32, u32)> call_00311a34;  // (from the original)
inline constexpr guest::Function<0x0071a0a0, u32(u32, u32, u32, u32)> call_0071a0a0;  // (from the original)

u32 f_00756db4(u32 r0, u32 r1) {
    u32 r6 = r0;
    u32 r7 = 0u;
    u32 r9 = r1;
    u32 r8 = ~0u;
    u32 r4 = r7;
    do {
        u32 r5_1 = r6 + (r4 + (r4 << 1) + (r4 << 3) << 1);
        u32 r0_2 = call_0071a0a0(r5_1 + 8u, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        if (r0_2 != 0) {
            u32 r0_4 = call_00311a34(r5_1 + 8u, r9);
            r1 = guest::cpu()->r[1];
            if (r0_4 == 0) {
                r7 += 1u;
                u32 r0_5 = call_002ff6f4(r7, r1);
                r1 = guest::cpu()->r[1];
                if (r0_5 == 0) {
                    r8 = r4;
                }
            }
        }
        r4 += 1u;
        guest::preempt();
    } while (s32(r4) < 3);
    return r6 + (r8 + (r8 << 1) + (r8 << 3) << 1) + 8u;
}

}  // namespace d_00756db4
GUEST_EXPORT_FRAMED(0x00756db4, d_00756db4::f_00756db4, 0x47f0);  // pushes {r4, r5, r6, r7, r8, r9, r10, lr} first, as the original

// f_00756e38: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00756e38 {

inline constexpr guest::Function<0x00311a34, u32(u32, u32)> call_00311a34;  // (from the original)
inline constexpr guest::Function<0x0071a0a0, u32(u32, u32, u32, u32)> call_0071a0a0;  // (from the original)

u32 f_00756e38(u32 r0, u32 r1) {
    u32 r6 = r0;
    u32 r7 = r1;
    u32 r4 = 0u;
    do {
        u32 r5_1 = r6 + (r4 + (r4 << 1) + (r4 << 3) << 1);
        u32 r0_2 = call_0071a0a0(r5_1 + 8u, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        if (r0_2 != 0) {
            u32 r0_4 = call_00311a34(r5_1 + 8u, r7);
            r1 = guest::cpu()->r[1];
            if (r0_4 == 0) {
                return 1u;
            }
        }
        r4 += 1u;
        guest::preempt();
    } while (s32(r4) < 3);
    guest::cpu()->r[1] = r1;
    return 0u;
}

}  // namespace d_00756e38
GUEST_EXPORT_FRAMED(0x00756e38, d_00756e38::f_00756e38, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_00757084: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00757084 {

struct __attribute__((packed)) Object_00757084_0 {
    u8 unknown_0[0x8];  // (not used here)
    u8 byte_8;
};
GUEST_OFFSET(Object_00757084_0, byte_8, 0x8);  // (from the original)


u32 f_00757084(gptr<Object_00757084_0> arg0) {
    u32 r0_1 = arg0->byte_8;
    if (r0_1 == 0x14u) {  // (from the original)
        return 0u;
    }
    if (r0_1 == 0x15u) {  // (from the original)
        return 1u;
    }
    return r0_1 == 0x16u ? 2u : 3u;  // (from the original)
}

}  // namespace d_00757084
GUEST_EXPORT(0x00757084, d_00757084::f_00757084);

// f_00757160: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00757160 {

struct __attribute__((packed)) Object_00757160_0 {
    u8 unknown_0[0x22];  // (not used here)
    u16 half_22;
};
GUEST_OFFSET(Object_00757160_0, half_22, 0x22);  // (from the original)

inline guest::global<u32, 0x00a83af0> global_00a83af0;  // (from the original)

u32 f_00757160(gptr<Object_00757160_0> arg0) {
    u32 r0_1 = arg0->half_22;
    u32 r1_1 = *global_00a83af0;
    u32 zf_1 = r1_1 == 0;
    u32 cf_1 = r1_1 >= 0u;
    if (!zf_1) {
        zf_1 = 0x18fu == r0_1;  // (from the original)
        cf_1 = 0x18fu >= r0_1;  // (from the original)
    }
    if (!cf_1 || zf_1) {
        guest::cpu()->r[1] = r1_1;
        return 8u;
    }
    u32 r0_2 = r1_1 + (r0_1 + (r0_1 << 4) << 1);
    if (r0_2 != 0) {
        u32 r0_3 = u32(*gptr<u8>(r0_2 + 0x1cu)) >> 4;  // (from the original)
        guest::cpu()->r[1] = r1_1;
        return r0_3;
    }
    guest::cpu()->r[1] = r1_1;
    return 8u;
}

}  // namespace d_00757160
GUEST_EXPORT(0x00757160, d_00757160::f_00757160);

// f_007571a0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_007571a0 {

struct __attribute__((packed)) Local_007571a0_r4_1 {
    u8 unknown_0[0x3a];  // (not used here)
    u16 half_3a;
};
GUEST_OFFSET(Local_007571a0_r4_1, half_3a, 0x3a);  // (from the original)

inline constexpr guest::Function<0x0030f52c, u32(u32, u32)> call_0030f52c;  // (from the original)

u32 f_007571a0(gptr<SavedRecordInner> arg0, u32 r1, u32 r2, u32 r3) {
    u32 r0 = arg0.addr();
    gptr<Local_007571a0_r4_1> r4_1 = gptr<Local_007571a0_r4_1>(0u);
    u32 r12 = r1;
    u32 r1_1 = arg0->value;
    u32 r5 = r2;
    if (r1_1 == 0x14u || r1_1 == 0x15u) {  // (from the original)
        goto L_7571f0;
    }
    if (r1_1 == 0x16u) {  // (from the original)
        goto L_7571f0;
    } else {
        r1 = 4u;
    }
L_7571c8:;
    if (s32(r1) > s32(r3)) {
        r4_1 = gptr<Local_007571a0_r4_1>(r0 + (r3 + (r3 << 1) << 3));
        if ((u32(r4_1->half_3a) - 0xffffu) != 0) {  // (from the original)
            goto L_7571f8;
        }
    }
    return 0u;
L_7571f0:;
    r1 = 6u;
    guest::preempt();
    goto L_7571c8;
L_7571f8:;
    call_0030f52c(r12, r4_1.addr() + 0x24u);  // (from the original)
    *gptr<u16>(r5) = u16(u32(r4_1->half_3a));
    return 1u;
}

}  // namespace d_007571a0
GUEST_EXPORT_FRAMED(0x007571a0, d_007571a0::f_007571a0, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_007573c0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_007573c0 {

struct __attribute__((packed)) Object_007573c0_1 {
    u8 unknown_0[0x1028];  // (not used here)
    u32 word_1028;
};
GUEST_OFFSET(Object_007573c0_1, word_1028, 0x1028);  // (from the original)

struct __attribute__((packed)) Local_007573c0_ea_2 {
    u16 half_0;
    u8 unknown_2[0x12];  // (not used here)
    u8 byte_14;
    u8 unknown_15[0x1];  // (not used here)
    u16 half_16;
};
GUEST_OFFSET(Local_007573c0_ea_2, half_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_007573c0_ea_2, byte_14, 0x14);  // (from the original)
GUEST_OFFSET(Local_007573c0_ea_2, half_16, 0x16);  // (from the original)

struct __attribute__((packed)) Local_007573c0_r5_1 {
    u16 half_0;
    u8 unknown_2[0x12];  // (not used here)
    u8 byte_14;
    u8 unknown_15[0x17];  // (not used here)
    u16 half_2c;
};
GUEST_OFFSET(Local_007573c0_r5_1, half_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_007573c0_r5_1, byte_14, 0x14);  // (from the original)
GUEST_OFFSET(Local_007573c0_r5_1, half_2c, 0x2c);  // (from the original)

inline constexpr guest::Function<0x00100d2d, u32(u32, u32, u32)> call_00100d2c;  // (from the original)
inline constexpr guest::Function<0x00301e20, u32(u32, u32, u32, u32)> call_00301e20;  // (from the original)

u32 f_007573c0(u32 r0, gptr<Object_007573c0_1> arg1, u32 r2) {
    u32 r1 = arg1.addr();
    u32 r4 = 0;
    u32 r7 = r1 + 0x1000u;  // (from the original)
    u32 r8 = r0;
    u32 r0_1 = arg1->word_1028;
    if (r0_1 != 0) {
        u32 r0_2 = call_00301e20(r0_1, r1, r2, guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        if (r0_2 == 0) {
            return 0u;
        } else {
            r4 = 0u;
        }
        do {
            gptr<Local_007573c0_r5_1> r5_1 = gptr<Local_007573c0_r5_1>(*gptr<u32>(r7 + 0x28u));  // (from the original)
            u32 r0_3 = r5_1->half_0;
            gptr<Local_007573c0_ea_2> ea_2 = gptr<Local_007573c0_ea_2>(r8 + (r4 + (r4 << 1) << 3) + 0x24u);  // (from the original)
            r1 = ea_2->half_0;
            if (r0_3 == r1) {
                r1 = r5_1->byte_14;
                if (r1 == ea_2->byte_14) {
                    u32 r0_5 = call_00100d2c(r5_1.addr() + 2u, ea_2.addr() + 2u, 0x12u);  // (from the original)
                    r1 = guest::cpu()->r[1];
                    if (r0_5 == 0) {
                        r1 = ea_2->half_16;
                        if (r5_1->half_2c == r1) {
                            guest::cpu()->r[1] = r1;
                            return 1u;
                        }
                    }
                }
            }
            r4 += 1u;
            guest::preempt();
        } while (s32(r4) < 6);
    }
    guest::cpu()->r[1] = r1;
    return 0u;
}

}  // namespace d_007573c0
GUEST_EXPORT_FRAMED(0x007573c0, d_007573c0::f_007573c0, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_00757948: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00757948 {

struct __attribute__((packed)) Object_00757948_0 {
    u8 unknown_0[0x75];  // (not used here)
    u8 byte_75;
};
GUEST_OFFSET(Object_00757948_0, byte_75, 0x75);  // (from the original)


u32 f_00757948(gptr<Object_00757948_0> arg0) {
    u32 r0_1 = arg0->byte_75;
    if ((r0_1 & 4u) != 0) {
        return 0u;
    }
    return (r0_1 & 1u) == 0 ? 1u : 2u;
}

}  // namespace d_00757948
GUEST_EXPORT(0x00757948, d_00757948::f_00757948);

// f_00757968: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00757968 {

struct __attribute__((packed)) Object_00757968_0 {
    u8 unknown_0[0x75];  // (not used here)
    u8 byte_75;
};
GUEST_OFFSET(Object_00757968_0, byte_75, 0x75);  // (from the original)


u32 f_00757968(gptr<Object_00757968_0> arg0) {
    u32 r0_1 = arg0->byte_75;
    if ((r0_1 & 4u) != 0) {
        return 0u;
    }
    if ((r0_1 & 0x20u) != 0) {  // (from the original)
        return 1u;
    }
    u32 r0_2 = r0_1 & 8u;
    if (r0_2 != 0) {
        r0_2 = 2u;
    }
    return r0_2;
}

}  // namespace d_00757968
GUEST_EXPORT(0x00757968, d_00757968::f_00757968);

// f_00757b34: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00757b34 {

struct __attribute__((packed)) Object_00757b34_1 {
    u8 unknown_0[0xc];  // (not used here)
    u32 word_c;
    u32 word_10;
};
GUEST_OFFSET(Object_00757b34_1, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_00757b34_1, word_10, 0x10);  // (from the original)

inline guest::global<u32, 0x00757b68> global_00757b68;  // (from the original)
inline constexpr guest::Function<0x006c6640, u32(u32, u32, u32, u32)> call_006c6640;  // (from the original)

u32 f_00757b34(gptr<Float3> arg0, gptr<Object_00757b34_1> arg1) {
    u32 r2_1 = arg1->word_10;
    float S0_1 = std::bit_cast<float>(*global_00757b68);
    arg0->v[0] = std::bit_cast<float>(u32(arg1->word_c));
    arg0->v[1] = S0_1;
    arg0->v[2] = std::bit_cast<float>(u32(r2_1));
    guest::cpu()->s[0] = S0_1;
    u32 r0_1 = call_006c6640(arg0.addr(), 0u, r2_1, guest::cpu()->r[3]);
    float S0_2 = guest::cpu()->s[0];
    arg0->v[1] = S0_2;
    guest::cpu()->s[0] = S0_2;
    return r0_1;
}

}  // namespace d_00757b34
GUEST_EXPORT_FRAMED(0x00757b34, d_00757b34::f_00757b34, 0x4010);  // pushes {r4, lr} first, as the original

// f_00757b6c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00757b6c {

struct __attribute__((packed)) Object_00757b6c_0 {
    u8 unknown_0[0xc];  // (not used here)
    u32 word_c;
    u32 word_10;
};
GUEST_OFFSET(Object_00757b6c_0, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_00757b6c_0, word_10, 0x10);  // (from the original)

inline guest::global<u32, 0x00757bb8> global_00757bb8;  // (from the original)
inline constexpr guest::Function<0x003171b4, u32(u32, u32, u32, u32)> call_003171b4;  // (from the original)
inline constexpr guest::Function<0x006c6640, u32(u32, u32, u32, u32)> call_006c6640;  // (from the original)

u32 f_00757b6c(gptr<Object_00757b6c_0> arg0, u32 r1, u32 r2) {
    guest::StackFrame frame(0xc);  // the original's stack frame
    float S0_1 = std::bit_cast<float>(arg0->word_c);
    float S2_1 = std::bit_cast<float>(arg0->word_10);
    float S1_1 = std::bit_cast<float>(*global_00757bb8);
    *frame.at<u32>(0) = std::bit_cast<u32>(S0_1);
    *frame.at<u32>(4) = std::bit_cast<u32>(S1_1);
    *frame.at<u32>(8) = std::bit_cast<u32>(S2_1);
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    guest::cpu()->s[2] = S2_1;
    call_006c6640(frame.at(0).addr(), 0u, r2, arg0.addr());
    u32 r3_1 = guest::cpu()->r[3];
    float S0_2 = guest::cpu()->s[0];
    *frame.at<u32>(4) = std::bit_cast<u32>(S0_2);
    guest::cpu()->s[0] = S0_2;
    u32 r0_2 = call_003171b4(r1, r2, frame.at(0).addr(), r3_1);
    return r0_2;
}

}  // namespace d_00757b6c
GUEST_EXPORT_FRAMED(0x00757b6c, d_00757b6c::f_00757b6c, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_00757bc4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00757bc4 {

inline constexpr guest::Function<0x00757cc0, u32(u32)> call_00757cc0;  // (from the original)
inline constexpr guest::Function<0x00757cd8, u32(u32)> call_00757cd8;  // (from the original)

u32 f_00757bc4(u32 r0) {
    u32 r0_2 = call_00757cc0(r0 + 0x80u);  // (from the original)
    if (r0_2 == 0) {
        return r0_2;
    }
    u32 r0_4 = call_00757cd8(r0 + 0x80u);  // (from the original)
    if (r0_4 != 0) {
        r0_4 = 1u;
    }
    return r0_4;
}

}  // namespace d_00757bc4
GUEST_EXPORT_FRAMED(0x00757bc4, d_00757bc4::f_00757bc4, 0x4010);  // pushes {r4, lr} first, as the original

// f_00757c1c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00757c1c {

inline constexpr guest::Function<0x0070ef54, u32(u32, u32)> call_0070ef54;  // (from the original)
inline constexpr guest::Function<0x00757f08, u32(u32, u32, u32, u32)> call_00757f08;  // (from the original)

u32 f_00757c1c(u32 r0) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    call_00757f08(r0 + 0x80u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    frame.release();
    return call_0070ef54((r0 + 0x70000u) + 0x1900u, guest::cpu()->r[1]);  // (from the original)
}

}  // namespace d_00757c1c
GUEST_EXPORT(0x00757c1c, d_00757c1c::f_00757c1c);

// f_00757c3c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00757c3c {

inline constexpr guest::Function<0x0070efa0, u32(u32, u32)> call_0070efa0;  // (from the original)
inline constexpr guest::Function<0x00757f78, u32(u32, u32, u32, u32)> call_00757f78;  // (from the original)

u32 f_00757c3c(u32 r0, u32 r1) {
    u32 r0_2 = call_00757f78(r0 + 0x80u, r1, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r1_1 = guest::cpu()->r[1];
    if (r0_2 != 0) {
        r0_2 = call_0070efa0(r0 + 0x71900u, r1);  // (from the original)
        r1_1 = guest::cpu()->r[1];
        if (r0_2 != 0) {
            r0_2 = 1u;
        }
    }
    guest::cpu()->r[1] = r1_1;
    return r0_2;
}

}  // namespace d_00757c3c
GUEST_EXPORT_FRAMED(0x00757c3c, d_00757c3c::f_00757c3c, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_00757c74: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00757c74 {

inline constexpr guest::Function<0x002fd4b4, u32(u32, u32, u32)> call_002fd4b4;  // (from the original)
inline constexpr guest::Function<0x0056ca68, u32(u32, u32, u32, u32)> call_0056ca68;  // (from the original)

u32 f_00757c74(gptr<Date> arg0, u32 r1, u32 r2) {
    guest::StackFrame frame(0x1c);  // the original's stack frame
    *frame.at<u32>(0) = 0;
    *frame.at<u32>(4) = 0;
    *frame.at<u32>(8) = 0;
    u32 r3_1 = arg0->day;
    u32 r2_1 = arg0->month;
    u32 r1_1 = arg0->year;
    call_0056ca68(frame.at(0xc).addr(), r1_1, r2_1, r3_1);  // (from the original)
    u32 r0_2 = call_002fd4b4(r1, frame.at(0xc).addr(), r2);  // (from the original)
    return r0_2;
}

}  // namespace d_00757c74
GUEST_EXPORT_FRAMED(0x00757c74, d_00757c74::f_00757c74, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_00757cc0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00757cc0 {

struct __attribute__((packed)) Object_00757cc0_0 {
    u8 unknown_0[0x6];  // (not used here)
    u8 byte_6;
};
GUEST_OFFSET(Object_00757cc0_0, byte_6, 0x6);  // (from the original)


u32 f_00757cc0(gptr<Object_00757cc0_0> arg0) {
    return arg0->byte_6 == 2u ? 1u : 0u;
}

}  // namespace d_00757cc0
GUEST_EXPORT(0x00757cc0, d_00757cc0::f_00757cc0);

// f_00757f08: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00757f08 {

inline constexpr guest::Function<0x00119859, u32(u32, u32, u32, u32)> call_00119858;  // (from the original)
inline constexpr guest::Function<0x003193e8, u32(u32, u32, u32, u32)> call_003193e8;  // (from the original)
inline constexpr guest::Function<0x0071a2b0, u32(u32, u32, u32, u32)> call_0071a2b0;  // (from the original)
inline constexpr guest::Function<0x0071d9c4, u32(u32, u32, u32, u32)> call_0071d9c4;  // (from the original)
inline constexpr guest::Function<0x0071fe48, u32(u32)> call_0071fe48;  // (from the original)
inline constexpr guest::Function<0x00757cfc, u32(u32, u32, u32, u32)> call_00757cfc;  // (from the original)
inline constexpr guest::Function<0x00759298, u32(u32, u32, u32, u32)> call_00759298;  // (from the original)

u32 f_00757f08(u32 r0, u32 r1, u32 r2, u32 r3) {
    call_00757cfc(r0, r1, r2, r3);
    call_0071a2b0(r0 + 0x20u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    call_00119858(r0 + 0x29220u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    call_00759298(r0 + 0x4be00u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    call_0071d9c4(r0 + 0x502bcu, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    call_0071fe48(r0 + 0x52bb0u);  // (from the original)
    u32 r3_5 = ~0u;
    u32 r0_7 = call_003193e8(r0 + 0x533a8u, 0x1e4d8u, r3_5, r3_5);  // (from the original)
    *gptr<u32>(0x533a4u + r0) = r0_7;  // (from the original)
    guest::cpu()->r[1] = 0x533a4u;  // (from the original)
    return r0_7;
}

}  // namespace d_00757f08
GUEST_EXPORT_FRAMED(0x00757f08, d_00757f08::f_00757f08, 0x4010);  // pushes {r4, lr} first, as the original

// f_00757f78: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00757f78 {

struct __attribute__((packed)) Local_00757f78_r5_2 {
    u8 unknown_0[0x14e];  // (not used here)
    u8 byte_14e;
};
GUEST_OFFSET(Local_00757f78_r5_2, byte_14e, 0x14e);  // (from the original)

inline constexpr guest::Function<0x00119875, u32(u32, u32, u32, u32)> call_00119874;  // (from the original)
inline constexpr guest::Function<0x00301484, u32(u32, u32, u32, u32)> call_00301484;  // (from the original)
inline constexpr guest::Function<0x003193e8, u32(u32, u32, u32, u32)> call_003193e8;  // (from the original)
inline constexpr guest::Function<0x005d4788, u32(u32)> call_005d4788;  // (from the original)
inline constexpr guest::Function<0x0071a310, u32(u32, u32, u32, u32)> call_0071a310;  // (from the original)
inline constexpr guest::Function<0x0071d9e8, u32(u32, u32, u32, u32)> call_0071d9e8;  // (from the original)
inline constexpr guest::Function<0x0071fe68, u32(u32, u32, u32, u32)> call_0071fe68;  // (from the original)
inline constexpr guest::Function<0x00757d20, u32(u32, u32, u32, u32)> call_00757d20;  // (from the original)
inline constexpr guest::Function<0x007592c0, u32(u32, u32, u32, u32)> call_007592c0;  // (from the original)

u32 f_00757f78(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r0_1 = call_00757d20(r0, r1, r2, r3);
    u32 r1_1 = guest::cpu()->r[1];
    if (r0_1 != 0) {
        r0_1 = call_0071a310(r0 + 0x20u, r1, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        r1_1 = guest::cpu()->r[1];
        if (r0_1 != 0) {
            r0_1 = call_00119874(r0 + 0x29220u, r1, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
            r1_1 = guest::cpu()->r[1];
            if (r0_1 != 0) {
                r0_1 = call_007592c0(r0 + 0x4be00u, r1, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
                r1_1 = guest::cpu()->r[1];
                if (r0_1 != 0) {
                    r0_1 = call_0071d9e8(r0 + 0x502bcu, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
                    r1_1 = guest::cpu()->r[1];
                    if (r0_1 != 0) {
                        r0_1 = call_0071fe68(r0 + 0x52bb0u, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
                        r1_1 = guest::cpu()->r[1];
                        if (r0_1 != 0) {
                            u32 r0_7 = *gptr<u8>(r0 + 0x6214eu);  // (from the original)
                            u32 r0_8 = call_00301484(r0_7, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
                            r1_1 = guest::cpu()->r[1];
                            if ((r0_7 >> 4) == r0_8) {
                                gptr<Local_00757f78_r5_2> r5_2 = gptr<Local_00757f78_r5_2>(r0 + 0x62000u);  // (from the original)
                                u32 r0_10 = call_005d4788(u32(r5_2->byte_14e) & 0xfu);  // (from the original)
                                r1_1 = r5_2->byte_14e;
                                if (r0_10 == r1_1 >> 4) {
                                    u32 r3_7 = ~0u;
                                    u32 r0_12 = call_003193e8(r0 + 0x533a8u, 0x1e4d8u, r3_7, r3_7);  // (from the original)
                                    r1_1 = *gptr<u32>(0x533a4u + r0);  // (from the original)
                                    if (r1_1 == r0_12) {
                                        guest::cpu()->r[1] = r1_1;
                                        return 1u;
                                    }
                                }
                            }
                            r0_1 = 0u;
                        }
                    }
                }
            }
        }
    }
    guest::cpu()->r[1] = r1_1;
    return r0_1;
}

}  // namespace d_00757f78
GUEST_EXPORT_FRAMED(0x00757f78, d_00757f78::f_00757f78, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_00758070: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00758070 {

struct __attribute__((packed)) Object_00758070_0 {
    u8 unknown_0[0x30];  // (not used here)
    u8 byte_30;
};
GUEST_OFFSET(Object_00758070_0, byte_30, 0x30);  // (from the original)


u32 f_00758070(gptr<Object_00758070_0> arg0) {
    u32 r2_1 = arg0->byte_30;
    u32 r1_1 = 0u;
    if (r2_1 == 2u || r2_1 == 4u) {
        r1_1 = arg0.addr();
    }
    guest::cpu()->r[1] = r1_1;
    return r1_1;
}

}  // namespace d_00758070
GUEST_EXPORT(0x00758070, d_00758070::f_00758070);

// f_0075808c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0075808c {

struct __attribute__((packed)) Object_0075808c_0 {
    u8 unknown_0[0x30];  // (not used here)
    u8 byte_30;
};
GUEST_OFFSET(Object_0075808c_0, byte_30, 0x30);  // (from the original)


u32 f_0075808c(gptr<Object_0075808c_0> arg0) {
    u32 r0_1 = arg0->byte_30;
    return (r0_1 == 2u || r0_1 == 4u) ? 1u : 0u;
}

}  // namespace d_0075808c
GUEST_EXPORT(0x0075808c, d_0075808c::f_0075808c);

// f_007580b8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_007580b8 {

struct __attribute__((packed)) Object_007580b8_0 {
    u8 unknown_0[0x270];  // (not used here)
    u8 byte_270;
};
GUEST_OFFSET(Object_007580b8_0, byte_270, 0x270);  // (from the original)


u32 f_007580b8(gptr<Object_007580b8_0> arg0) {
    return (u32(arg0->byte_270) & 7u) == 3u ? 1u : 0u;
}

}  // namespace d_007580b8
GUEST_EXPORT(0x007580b8, d_007580b8::f_007580b8);

// f_007580d0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_007580d0 {

struct __attribute__((packed)) Object_007580d0_0 {
    u8 unknown_0[0x30];  // (not used here)
    u8 byte_30;
};
GUEST_OFFSET(Object_007580d0_0, byte_30, 0x30);  // (from the original)


u32 f_007580d0(gptr<Object_007580d0_0> arg0) {
    u32 r2_1 = arg0->byte_30;
    u32 r1_1 = 0u;
    if (r2_1 == 1u || r2_1 == 3u || r2_1 == 6u) {
        r1_1 = arg0.addr();
    }
    guest::cpu()->r[1] = r1_1;
    return r1_1;
}

}  // namespace d_007580d0
GUEST_EXPORT(0x007580d0, d_007580d0::f_007580d0);

// f_00758118: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00758118 {

struct __attribute__((packed)) Object_00758118_0 {
    u8 unknown_0[0x270];  // (not used here)
    u8 byte_270;
};
GUEST_OFFSET(Object_00758118_0, byte_270, 0x270);  // (from the original)


u32 f_00758118(gptr<Object_00758118_0> arg0) {
    return u32(arg0->byte_270) >> 3u & 3u;
}

}  // namespace d_00758118
GUEST_EXPORT(0x00758118, d_00758118::f_00758118);

// f_00758128: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00758128 {

struct __attribute__((packed)) Local_00758128_r0_2 {
    u16 half_0;
    u8 unknown_2[0x12];  // (not used here)
    u8 byte_14;
};
GUEST_OFFSET(Local_00758128_r0_2, half_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_00758128_r0_2, byte_14, 0x14);  // (from the original)

struct __attribute__((packed)) Local_00758128_r4_1 {
    u16 half_0;
    u8 unknown_2[0x12];  // (not used here)
    u8 byte_14;
};
GUEST_OFFSET(Local_00758128_r4_1, half_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_00758128_r4_1, byte_14, 0x14);  // (from the original)

inline constexpr guest::Function<0x00100d2d, u32(u32, u32, u32)> call_00100d2c;  // (from the original)
inline constexpr guest::Function<0x002fb328, u32(u32)> call_002fb328;  // (from the original)

u32 f_00758128(u32 r0) {
    u32 r1_2 = 0;
    u32 r0_1 = call_002fb328(r0);
    u32 r1_1 = *gptr<u8>(r0 + 0x30u);  // (from the original)
    gptr<Local_00758128_r0_2> r0_2 = gptr<Local_00758128_r0_2>(r0_1 + 0x621b8u);  // (from the original)
    if (r1_1 != 1u && r1_1 != 3u && r1_1 != 6u) {
        if (r1_1 != 2u && r1_1 != 4u) {
            guest::cpu()->r[1] = r1_1;
            return 0u;
        }
        r1_2 = r0_2->half_0;
        if (r1_2 != *gptr<u16>(r0)) {
            guest::cpu()->r[1] = r1_2;
            return 1u;
        }
        r1_2 = r0_2->byte_14;
        if (r1_2 != *gptr<u8>(r0 + 0x14u)) {  // (from the original)
            guest::cpu()->r[1] = r1_2;
            return 1u;
        }
        u32 r0_4 = call_00100d2c(r0_2.addr() + 2u, r0 + 2u, 0x12u);  // (from the original)
        r1_2 = guest::cpu()->r[1];
        if (r0_4 != 0) {
            return 1u;
        }
        return 0u;
    }
    r1_2 = r0_2->half_0;
    gptr<Local_00758128_r4_1> r4_1 = gptr<Local_00758128_r4_1>(r0 + 0x16u);  // (from the original)
    if (r1_2 == r4_1->half_0) {
        r1_2 = r0_2->byte_14;
        if (r1_2 == r4_1->byte_14) {
            u32 r0_6 = call_00100d2c(r0_2.addr() + 2u, r4_1.addr() + 2u, 0x12u);  // (from the original)
            r1_2 = guest::cpu()->r[1];
            if (r0_6 == 0) {
                return 0u;
            }
        }
    }
    guest::cpu()->r[1] = r1_2;
    return 1u;
}

}  // namespace d_00758128
GUEST_EXPORT_FRAMED(0x00758128, d_00758128::f_00758128, 0x4010);  // pushes {r4, lr} first, as the original

// f_007581ec: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_007581ec {

struct __attribute__((packed)) Object_007581ec_0 {
    u8 unknown_0[0x30];  // (not used here)
    u8 byte_30;
};
GUEST_OFFSET(Object_007581ec_0, byte_30, 0x30);  // (from the original)


u32 f_007581ec(gptr<Object_007581ec_0> arg0) {
    u32 r0_1 = arg0->byte_30;
    return (r0_1 == 1u || r0_1 == 3u) ? 1u : 0u;
}

}  // namespace d_007581ec
GUEST_EXPORT(0x007581ec, d_007581ec::f_007581ec);

// f_007586b4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_007586b4 {

inline constexpr guest::Function<0x007588ec, u32(u32, u32, u32, u32)> call_007588ec;  // (from the original)
inline constexpr guest::Function<0x00758bac, u32(u32, u32, u32, u32)> call_00758bac;  // (from the original)

u32 f_007586b4(u32 r0, u32 r1_unused, u32 r2, u32 r3) {
    guest::StackFrame frame(0xc);  // the original's stack frame
    u32 r8 = 0;
    u32 res_1 = 0;
    u32 r1_2 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 res_2 = 0;
    u32 res_6 = 0;
    u32 r1_6 = 0;
    u32 r0_5 = 0;
    u32 r4 = r0;
    u32 r0_1 = call_00758bac(r0, 0u, r2, r3);
    *frame.at<u32>(0) = r0_1;
    u32 r5 = 1u;
    u32 r7 = *gptr<u8>(r4 + 0x64u) == 7u ? 1u : 0u;  // (from the original)
    r0 = r4 + 0x34u;  // (from the original)
    u32 r6 = *gptr<u16>(r4 + 0x62u) == 0 ? 1u : 0u;  // (from the original)
    r2 = r5;
    r3 = r5 + u32(s32(r4 + 0x64u - r0) >> 1);  // (from the original)
    do {
        u32 r1_1 = *gptr<u16>(r0);
        if (r1_1 == 0) {
            goto L_758728;
        }
        if (r1_1 == 0xau) {  // (from the original)
            goto L_75874c;
        }
        r2 += 1u;
        res_1 = r3 - r2;
        r0 += 2u;
        guest::preempt();
    } while (res_1 != 0 && res_1 >> 0x1f == ((r3 ^ r2) & (r3 ^ res_1)) >> 0x1f);  // (from the original)
L_758728:;
    r1_2 = frame.at(8).addr();
    r0_2 = r4 + 0x34u;  // (from the original)
    r0_3 = call_007588ec(r0_2, r1_2, r2, r3);
    *frame.at<u32>(4) = r0_3;
    r0_4 = *gptr<u8>(r4 + 0x270u);  // (from the original)
    if ((r0_4 & 7u) != 1u) {
        goto L_758764;
    }
    goto L_758754;
L_75874c:;
    r5 = 0u;
    guest::preempt();
    goto L_758728;
L_758754:;
    res_2 = r0_4 >> 6u & 1u;
    if (res_2 == 0) {
        r8 = 1u;
        goto L_758768;
    }
L_758764:;
    r8 = 0u;
L_758768:;
    r3 = 0xff20u;  // (from the original)
    u32 r9 = *gptr<u8>(r4 + 0x271u) == 0x1bu ? 1u : 0u;  // (from the original)
    r0 = r4 + 0x68u;  // (from the original)
    r2 = 1u;
    u32 r10 = *gptr<u8>(r4 + 0x272u) == 0 ? 1u : 0u;  // (from the original)
    u32 r12 = r2;
    u32 r11 = r2 + u32(s32(r4 + 0xaau - r0) >> 1);  // (from the original)
L_7587a4:;
    u32 r1_3 = *gptr<u16>(r0);
    if (r1_3 != 0) {
        if (r1_3 == 0x40u || r1_3 == r3) {  // (from the original)
            r2 = 0u;
        } else {
            r12 += 1u;
            u32 res_3 = r11 - r12;
            r0 += 2u;
            if (res_3 != 0 && res_3 >> 0x1f == ((r11 ^ r12) & (r11 ^ res_3)) >> 0x1f) {  // (from the original)
                guest::preempt();
                goto L_7587a4;
            }
        }
    }
    r0 = r4 + 0xaau;  // (from the original)
    r12 = 1u;
    u32 r14 = 1u;
    r11 = 1u + u32(s32(r4 + 0x22cu - r0) >> 1);  // (from the original)
L_7587f0:;
    u32 r1_4 = *gptr<u16>(r0);
    if (r1_4 != 0) {
        if (r1_4 == 0x40u || r1_4 == r3) {  // (from the original)
            r2 = 0u;
        } else {
            r12 += 1u;
            u32 res_4 = r11 - r12;
            r0 += 2u;
            if (res_4 != 0 && res_4 >> 0x1f == ((r11 ^ r12) & (r11 ^ res_4)) >> 0x1f) {  // (from the original)
                guest::preempt();
                goto L_7587f0;
            }
        }
    }
    r0 = r4 + 0x22cu;  // (from the original)
    r12 = r14;
    r11 = 1u;
    r14 += u32(s32(r4 + 0x26eu - r0) >> 1);  // (from the original)
L_75883c:;
    u32 r1_5 = *gptr<u16>(r0);
    if (r1_5 != 0) {
        if (r1_5 == 0x40u || r1_5 == r3) {  // (from the original)
            r2 = 0u;
        } else {
            r11 += 1u;
            u32 res_5 = r14 - r11;
            r0 += 2u;
            if (res_5 != 0 && res_5 >> 0x1f == ((r14 ^ r11) & (r14 ^ res_5)) >> 0x1f) {  // (from the original)
                guest::preempt();
                goto L_75883c;
            }
        }
    }
    r0 = r4 + 0x22cu;  // (from the original)
    r3 = 1u;
    u32 r1 = r3;
    r4 = r12 + u32(s32(r4 + 0x26eu - r0) >> 1);  // (from the original)
    do {
        u32 r12_1 = *gptr<u16>(r0);
        if (r12_1 == 0) {
            r1_6 = *frame.at<u32>(0) & r7 & r6 & r5;
            r0_5 = *frame.at<u32>(4) & r1_6 & r8 & r9 & r10 & r2 & r3;
            guest::cpu()->r[1] = r1_6;
            return r0_5;
        }
        if (r12_1 == 0xau) {  // (from the original)
            goto L_7588e0;
        }
        r1 += 1u;
        res_6 = r4 - r1;
        r0 += 2u;
        guest::preempt();
    } while (res_6 != 0 && res_6 >> 0x1f == ((r4 ^ r1) & (r4 ^ res_6)) >> 0x1f);  // (from the original)
    r1_6 = *frame.at<u32>(0) & r7 & r6 & r5;
    r0_5 = *frame.at<u32>(4) & r1_6 & r8 & r9 & r10 & r2 & r3;
    guest::cpu()->r[1] = r1_6;
    return r0_5;
L_7588e0:;
    r3 = 0u;
    r1_6 = *frame.at<u32>(0) & r7 & r6 & r5;
    r0_5 = *frame.at<u32>(4) & r1_6 & r8 & r9 & r10 & r2 & r3;
    guest::cpu()->r[1] = r1_6;
    return r0_5;
}

}  // namespace d_007586b4
GUEST_EXPORT_FRAMED(0x007586b4, d_007586b4::f_007586b4, 0x4ff0);  // pushes {r4, r5, r6, r7, r8, r9, r10, r11, lr} first, as the original

// f_007588ec: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_007588ec {

struct __attribute__((packed)) Local_007588ec_r0_5 {
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
};
GUEST_OFFSET(Local_007588ec_r0_5, word_18, 0x18);  // (from the original)
GUEST_OFFSET(Local_007588ec_r0_5, word_1c, 0x1c);  // (from the original)
GUEST_OFFSET(Local_007588ec_r0_5, word_20, 0x20);  // (from the original)
GUEST_OFFSET(Local_007588ec_r0_5, word_24, 0x24);  // (from the original)
GUEST_OFFSET(Local_007588ec_r0_5, word_28, 0x28);  // (from the original)
GUEST_OFFSET(Local_007588ec_r0_5, word_2c, 0x2c);  // (from the original)
GUEST_OFFSET(Local_007588ec_r0_5, word_30, 0x30);  // (from the original)
GUEST_OFFSET(Local_007588ec_r0_5, word_34, 0x34);  // (from the original)
GUEST_OFFSET(Local_007588ec_r0_5, word_38, 0x38);  // (from the original)
GUEST_OFFSET(Local_007588ec_r0_5, word_3c, 0x3c);  // (from the original)
GUEST_OFFSET(Local_007588ec_r0_5, word_40, 0x40);  // (from the original)
GUEST_OFFSET(Local_007588ec_r0_5, word_44, 0x44);  // (from the original)

inline constexpr guest::Function<0x003083bc, u32(u32, u32, u32, u32)> call_003083bc;  // (from the original)
inline constexpr guest::Function<0x005e9fdc, u32(u32, u32, u32, u32)> call_005e9fdc;  // (from the original)
inline constexpr guest::Function<0x005f4bfc, u32(u32, u32, u32, u32)> call_005f4bfc;  // (from the original)
inline constexpr guest::Function<0x007589dc, u32(u32, u32, u32, u32)> call_007589dc;  // (from the original)

u32 f_007588ec(u32 r0, u32 r1, u32 r2_unused, u32 r3, float S0) {
    guest::StackFrame frame(0x48);  // the original's stack frame
    u32 res_1 = 0;
    u32 r3_3 = 0;
    u32 r6 = r0;
    u32 r5 = r1;
    u32 r0_2 = call_003083bc(frame.at(0).addr(), frame.at(0x18).addr(), 0x18u, r3);  // (from the original)
    u32 r1_2 = guest::cpu()->r[1];
    u32 r2_1 = guest::cpu()->r[2];
    u32 r3_1 = guest::cpu()->r[3];
    u32 r4 = 0x909d90u;  // (from the original)
    *gptr<u32>(r0_2) = r4;
    u32 r0_4 = call_005f4bfc(r0_2 + 0xcu, r1_2, r2_1, r3_1);  // (from the original)
    S0 = guest::cpu()->s[0];
    gptr<Local_007588ec_r0_5> r0_5 = gptr<Local_007588ec_r0_5>(r0_4 - 0xcu);  // (from the original)
    r0_5->word_18 = 0;
    r0_5->word_1c = 0;
    r0_5->word_20 = 0;
    r0_5->word_24 = 0;
    r0_5->word_28 = 0;
    r0_5->word_2c = 0;
    r0_5->word_30 = 0;
    r0_5->word_34 = 0;
    r0_5->word_38 = 0;
    r0_5->word_3c = 0;
    r0_5->word_40 = 0;
    u32 r2 = 0x8906ecu;  // (from the original)
    r0_5->word_44 = 0;
    r0 = r0_5.addr() + 0x16u;  // (from the original)
    r1 = 0xcu;  // (from the original)
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
    guest::cpu()->s[0] = S0;
    call_007589dc(r6, frame.at(0).addr(), r2, r3_3);
    u32 r1_4 = guest::cpu()->r[1];
    u32 r2_2 = guest::cpu()->r[2];
    u32 r3_4 = guest::cpu()->r[3];
    call_005e9fdc(frame.at(0).addr(), r1_4, r2_2, r3_4);
    float S0_3 = guest::cpu()->s[0];
    u32 r0_7 = std::bit_cast<u32>(S0_3);
    *gptr<u32>(r5) = std::bit_cast<u32>(S0_3);
    *frame.at<u32>(0) = r4;
    u32 res_2 = r0_7 - 0x42c00000u;  // (from the original)
    u32 nf_1 = res_2 >> 0x1f;  // (from the original)
    u32 zf_1 = res_2 == 0;
    u32 vf_1 = ((r0_7 ^ 0x42c00000u) & (r0_7 ^ res_2)) >> 0x1f;  // (from the original)
    if (zf_1 || nf_1 != vf_1) {
        r5 = 1u;
    }
    if (!zf_1 && nf_1 == vf_1) {
        r5 = 0u;
    }
    return r5;
}

}  // namespace d_007588ec
GUEST_EXPORT_FRAMED(0x007588ec, d_007588ec::f_007588ec, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_00758bac: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00758bac {

struct __attribute__((packed)) Object_00758bac_0 {
    u8 unknown_0[0xa8];  // (not used here)
    u16 half_a8;
    u8 unknown_aa[0x180];  // (not used here)
    u16 half_22a;
    u8 unknown_22c[0x40];  // (not used here)
    u16 half_26c;
    u8 byte_26e;
    u8 unknown_26f[0x2];  // (not used here)
    u8 byte_271;
};
GUEST_OFFSET(Object_00758bac_0, half_a8, 0xa8);  // (from the original)
GUEST_OFFSET(Object_00758bac_0, half_22a, 0x22a);  // (from the original)
GUEST_OFFSET(Object_00758bac_0, half_26c, 0x26c);  // (from the original)
GUEST_OFFSET(Object_00758bac_0, byte_26e, 0x26e);  // (from the original)
GUEST_OFFSET(Object_00758bac_0, byte_271, 0x271);  // (from the original)

inline constexpr guest::Function<0x002fc934, u32(u32, u32)> call_002fc934;  // (from the original)
inline constexpr guest::Function<0x002fcaf4, u32(u32, u32)> call_002fcaf4;  // (from the original)
inline constexpr guest::Function<0x0030b6b8, u32(u32)> call_0030b6b8;  // (from the original)
inline constexpr guest::Function<0x006b9b30, u32(u32, u32)> call_006b9b30;  // (from the original)
inline constexpr guest::Function<0x006baa64, u32(u32)> call_006baa64;  // (from the original)

u32 f_00758bac(gptr<Object_00758bac_0> arg0, u32 r1_unused, u32 r2_unused, u32 r3) {
    guest::StackFrame frame(0x4);  // the original's stack frame
    u32 r0 = arg0.addr();
    u32 r6 = 0;
    u32 r8 = guest::cpu()->r[8];
    u32 res_1 = 0;
    u32 res_2 = 0;
    u32 res_3 = 0;
    u32 r1_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 res_4 = 0;
    u32 r7_1 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 r1_2 = 0;
    *frame.at<u32>(0) = r3;
    u32 r4 = r0;
    u32 r0_1 = arg0->byte_26e;
    u32 zf_1 = r0_1 == 0x20u;  // (from the original)
    u32 cf_1 = r0_1 >= 0x20u;  // (from the original)
    if (!cf_1 || zf_1) {
        r8 = 1u;
    }
    if (cf_1 && !zf_1) {
        r8 = 0u;
    }
    u32 r9 = arg0->byte_271 >= 0x23u ? 0u : 1u;  // (from the original)
    if (arg0->half_a8 == 0 && arg0->half_22a == 0 && arg0->half_26c == 0) {
        r6 = 1u;
        goto L_758c00;
    }
    r6 = 0u;
L_758c00:;
    u32 r5 = 1u;
    r0 = r4 + 0x68u;  // (from the original)
    r3 = r5;
    u32 r1 = r5;
    u32 r12 = r5 + u32(s32(r4 + 0xaau - r0) >> 1);  // (from the original)
    do {
        u32 r2_1 = *gptr<u16>(r0);
        if (r2_1 == 0xeu || r2_1 == 0xfu) {  // (from the original)
            goto L_758cec;
        }
        r1 += 1u;
        res_1 = r12 - r1;
        r0 += 2u;
        guest::preempt();
    } while (res_1 != 0 && res_1 >> 0x1f == ((r12 ^ r1) & (r12 ^ res_1)) >> 0x1f);  // (from the original)
L_758c3c:;
    r0 = r4 + 0xaau;  // (from the original)
    r1 = 1u;
    r12 = r3 + u32(s32(r4 + 0x22cu - r0) >> 1);  // (from the original)
    do {
        u32 r2_2 = *gptr<u16>(r0);
        if (r2_2 == 0xeu || r2_2 == 0xfu) {  // (from the original)
            goto L_758cf4;
        }
        r1 += 1u;
        res_2 = r12 - r1;
        r0 += 2u;
        guest::preempt();
    } while (res_2 != 0 && res_2 >> 0x1f == ((r12 ^ r1) & (r12 ^ res_2)) >> 0x1f);  // (from the original)
L_758c70:;
    r0 = r4 + 0x22cu;  // (from the original)
    r1 = 1u;
    r3 += u32(s32(r4 + 0x26eu - r0) >> 1);  // (from the original)
    do {
        u32 r2_3 = *gptr<u16>(r0);
        if (r2_3 == 0xeu || r2_3 == 0xfu) {  // (from the original)
            goto L_758cfc;
        }
        r1 += 1u;
        res_3 = r3 - r1;
        r0 += 2u;
        guest::preempt();
    } while (res_3 != 0 && res_3 >> 0x1f == ((r3 ^ r1) & (r3 ^ res_3)) >> 0x1f);  // (from the original)
L_758ca8:;
    r1_1 = *gptr<u8>(r4 + 0x26fu);  // (from the original)
    r0_2 = (u32(*gptr<u8>(r4 + 0x270u)) >> 5u & 1u) == 0 ? 0x29u : 0x2au;  // (from the original)
    r0_3 = call_006b9b30(r0_2, r1_1);
    res_4 = r0_3 - 0x7ffeu;  // (from the original)
    r7_1 = res_4 == 0 ? 0u : 1u;
    r0_4 = r4 + 0x274u;  // (from the original)
    r0_5 = call_002fcaf4(r0_4, res_4);
    r1_2 = guest::cpu()->r[1];
    if (r0_5 != 0) {
        r4 = 1u;
        return r8 & r9 & r6 & r5 & r7_1 & r4;
    }
    goto L_758d04;
L_758cec:;
    r5 = 0u;
    guest::preempt();
    goto L_758c3c;
L_758cf4:;
    r5 = 0u;
    guest::preempt();
    goto L_758c70;
L_758cfc:;
    r5 = 0u;
    guest::preempt();
    goto L_758ca8;
L_758d04:;
    call_002fc934(frame.at(0).addr(), r4 + 0x274u);  // (from the original)
    call_006baa64(frame.at(0).addr());
    u32 r0_9 = call_0030b6b8(frame.at(0).addr());
    r1_2 = 0x172au;  // (from the original)
    u32 r0_10 = r0_9 - 0x2000u;  // (from the original)
    u32 zf_2 = r0_10 == r1_2;
    u32 cf_2 = r0_10 >= r1_2;
    if (!cf_2 || zf_2) {
        r4 = 1u;
    }
    if (cf_2 && !zf_2) {
        r4 = 0u;
    }
    guest::cpu()->r[1] = r1_2;
    return r8 & r9 & r6 & r5 & r7_1 & r4;
}

}  // namespace d_00758bac
GUEST_EXPORT_FRAMED(0x00758bac, d_00758bac::f_00758bac, 0x43f0);  // pushes {r4, r5, r6, r7, r8, r9, lr} first, as the original

// f_00758d74: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00758d74 {

inline constexpr guest::Function<0x005fdf68, u32(u32, u32, u32)> call_005fdf68;  // (from the original)

void f_00758d74(u32 r0, u32 r1) {
    u32 r0_1 = call_005fdf68(r0, r1 + 0xaau, 0xc1u);  // (from the original)
    *gptr<u32>(r0_1) = 0x908b9c;  // (from the original)
    guest::cpu()->r[1] = 0x908b9cu;  // (from the original)
}

}  // namespace d_00758d74
GUEST_EXPORT_FRAMED(0x00758d74, d_00758d74::f_00758d74, 0x4010);  // pushes {r4, lr} first, as the original

// f_00758d94: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00758d94 {

inline constexpr guest::Function<0x005fdf68, u32(u32, u32, u32)> call_005fdf68;  // (from the original)

void f_00758d94(u32 r0, u32 r1) {
    u32 r0_1 = call_005fdf68(r0, r1 + 0x22cu, 0x21u);  // (from the original)
    *gptr<u32>(r0_1) = 0x908b9c;  // (from the original)
    guest::cpu()->r[1] = 0x908b9cu;  // (from the original)
}

}  // namespace d_00758d94
GUEST_EXPORT_FRAMED(0x00758d94, d_00758d94::f_00758d94, 0x4010);  // pushes {r4, lr} first, as the original

// f_00758db4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00758db4 {

inline constexpr guest::Function<0x005fdf68, u32(u32, u32, u32)> call_005fdf68;  // (from the original)

void f_00758db4(u32 r0, u32 r1) {
    u32 r0_1 = call_005fdf68(r0, r1 + 0x68u, 0x21u);  // (from the original)
    *gptr<u32>(r0_1) = 0x908b9c;  // (from the original)
    guest::cpu()->r[1] = 0x908b9cu;  // (from the original)
}

}  // namespace d_00758db4
GUEST_EXPORT_FRAMED(0x00758db4, d_00758db4::f_00758db4, 0x4010);  // pushes {r4, lr} first, as the original

// f_00758de0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00758de0 {

inline constexpr guest::Function<0x007589dc, u32(u32, u32, u32, u32)> call_007589dc;  // (from the original)

void f_00758de0() {
    call_007589dc(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_00758de0
GUEST_EXPORT(0x00758de0, d_00758de0::f_00758de0);

// f_00759190: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00759190 {

inline constexpr guest::Function<0x003026e8, u32(u32)> call_003026e8;  // (from the original)
inline constexpr guest::Function<0x005ca398, u32(u32)> call_005ca398;  // (from the original)
inline constexpr guest::Function<0x00718364, u32(u32, u32, u32, u32)> call_00718364;  // (from the original)
inline constexpr guest::Function<0x00718378, u32(u32)> call_00718378;  // (from the original)

u32 f_00759190(u32 r0) {
    u32 r5 = r0 + 0x4be00u;  // (from the original)
    u32 r4 = 0u;
    do {
        u32 r6_1 = r5 + (r4 << 2);
        r0 = call_00718364(r6_1 + 8u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
        if (r0 != 0) {
            u32 r0_3 = call_00718378(r6_1 + 8u);
            if (r0_3 != 0) {
                goto L_759204;
            }
            u32 r0_5 = call_003026e8(r4 >= 0x38u ? r5 + 8u : r6_1 + 8u);  // (from the original)
            u32 r0_6 = call_005ca398(r0_5);
            if (r0_6 == 0 || r0_6 == 0xa5u) {  // (from the original)
                goto L_759204;
            }
            r0 = 0u;
        }
        return r0;
L_759204:;
        r4 += 1u;
        if (r4 >= 0x38u) {  // (from the original)
            r4 = 0u;
            do {
                r0 = call_00718364(r5 + (r4 << 2) + 0xe8u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
                if (r0 == 0) {
                    return r0;
                }
                r4 += 1u;
                guest::preempt();
            } while (r4 < 2u);
            return 1u;
        }
        guest::preempt();
    } while (1);
}

}  // namespace d_00759190
GUEST_EXPORT_FRAMED(0x00759190, d_00759190::f_00759190, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_00759328: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00759328 {

struct __attribute__((packed)) Local_00759328_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_00759328_ea_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_00759328_ea_1, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_00759328_ea_1, word_8, 0x8);  // (from the original)

struct __attribute__((packed)) Local_00759328_r3_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_00759328_r3_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_00759328_r3_1, word_4, 0x4);  // (from the original)

struct __attribute__((packed)) Local_00759328_r3_5 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_00759328_r3_5, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_00759328_r3_5, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_00759328_r3_5, word_8, 0x8);  // (from the original)

inline constexpr guest::Function<0x002fb378, u32(u32, u32, u32, u32)> call_002fb378;  // (from the original)
inline constexpr guest::Function<0x002fb430, u32(u32, u32, u32, u32)> call_002fb430;  // (from the original)
inline constexpr guest::Function<0x003081b4, u32(u32, u32, u32, u32)> call_003081b4;  // (from the original)
inline constexpr guest::Function<0x00308efc, u32(u32, u32, u32, u32)> call_00308efc;  // (from the original)
inline constexpr guest::Function<0x0056be20, u32(u32, u32, u32, u32)> call_0056be20;  // (from the original)
inline constexpr guest::Function<0x007593ec, u32(u32, u32, u32, u32)> call_007593ec;  // (from the original)
inline constexpr guest::Function<0x00759664, u32(u32, u32, u32, u32)> call_00759664;  // (from the original)
inline constexpr guest::Function<0x007795ac, u32(u32, u32, u32, u32)> call_007795ac;  // (from the original)

u32 f_00759328(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x3c);  // the original's stack frame
    u32 r0_1 = call_002fb378(r0, r1, r2, r3);
    u32 r1_1 = *gptr<u32>(r0_1);
    u32 r2_1 = *gptr<u32>(r0_1 + 4);
    gptr<Local_00759328_r3_1> r3_1 = gptr<Local_00759328_r3_1>(frame.at(8).addr());
    u32 r4_1 = frame.at(0x18).addr();  // (from the original)
    *frame.at<u32>(0x10) = *gptr<u32>(r0_1 + 8u);  // (from the original)
    r3_1->word_0 = r1_1;
    r3_1->word_4 = r2_1;
    u32 r0_3 = call_0056be20(frame.at(8).addr(), r1_1, r2_1, r3_1.addr());
    u32 r1_2 = guest::cpu()->r[1];
    *frame.at<u32>(0) = r0_3;
    *frame.at<u32>(4) = r1_2;
    call_007795ac(r4_1, r1_2, guest::cpu()->r[2], guest::cpu()->r[3]);
    call_003081b4(r4_1, frame.at(0).addr(), guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r1_4 = guest::cpu()->r[1];
    u32 r2_4 = guest::cpu()->r[2];
    u32 r3_4 = guest::cpu()->r[3];
    if (r1 != 0) {
        u32 r4_2 = frame.at(0x18).addr();  // (from the original)
        call_002fb430(frame.at(0x2c).addr(), r4_2, r2_4, r3_4);  // (from the original)
        gptr<Local_00759328_ea_1> ea_1 = gptr<Local_00759328_ea_1>(frame.at(0x2c).addr());  // (from the original)
        u32 r1_5 = ea_1->word_4;
        u32 r2_5 = ea_1->word_8;
        gptr<Local_00759328_r3_5> r3_5 = gptr<Local_00759328_r3_5>(frame.at(0x20).addr());  // (from the original)
        r3_5->word_0 = ea_1->word_0;
        r3_5->word_4 = r1_5;
        r3_5->word_8 = r2_5;
        call_00308efc(frame.at(0x20).addr(), r1_5, r2_5, r3_5.addr());  // (from the original)
        u32 r0_7 = call_0056be20(frame.at(0x20).addr(), guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        u32 r1_7 = guest::cpu()->r[1];
        *frame.at<u32>(0) = r0_7;
        *frame.at<u32>(4) = r1_7;
        call_007795ac(r4_2, r1_7, guest::cpu()->r[2], guest::cpu()->r[3]);
        call_003081b4(r4_2, frame.at(0).addr(), guest::cpu()->r[2], guest::cpu()->r[3]);
        r1_4 = guest::cpu()->r[1];
        r2_4 = guest::cpu()->r[2];
        r3_4 = guest::cpu()->r[3];
    }
    u32 r0_9 = call_00759664(frame.at(0x18).addr(), r1_4, r2_4, r3_4);  // (from the original)
    u32 r1_9 = guest::cpu()->r[1];
    *frame.at<u32>(0) = r1;
    *frame.at<u32>(4) = r2;
    u32 r0_10 = call_007593ec(r0, r1_9, r0_9, r1_9);
    return r0_10;
}

}  // namespace d_00759328
GUEST_EXPORT_FRAMED(0x00759328, d_00759328::f_00759328, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_007593ec: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_007593ec {

struct __attribute__((packed)) Local_007593ec_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_007593ec_ea_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_007593ec_ea_1, word_4, 0x4);  // (from the original)

struct __attribute__((packed)) Local_007593ec_ea_2 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_007593ec_ea_2, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_007593ec_ea_2, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_007593ec_ea_2, word_8, 0x8);  // (from the original)

struct __attribute__((packed)) Local_007593ec_ea_3 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_007593ec_ea_3, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_007593ec_ea_3, word_4, 0x4);  // (from the original)

struct __attribute__((packed)) Local_007593ec_ea_4 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_007593ec_ea_4, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_007593ec_ea_4, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_007593ec_ea_4, word_8, 0x8);  // (from the original)

struct __attribute__((packed)) Local_007593ec_ea_5 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_007593ec_ea_5, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_007593ec_ea_5, word_4, 0x4);  // (from the original)

struct __attribute__((packed)) Local_007593ec_ea_6 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_007593ec_ea_6, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_007593ec_ea_6, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_007593ec_ea_6, word_8, 0x8);  // (from the original)

struct __attribute__((packed)) Local_007593ec_ea_7 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_007593ec_ea_7, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_007593ec_ea_7, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_007593ec_ea_7, word_8, 0x8);  // (from the original)

struct __attribute__((packed)) Local_007593ec_ea_8 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_007593ec_ea_8, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_007593ec_ea_8, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_007593ec_ea_8, word_8, 0x8);  // (from the original)

struct __attribute__((packed)) Local_007593ec_r1_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_007593ec_r1_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_007593ec_r1_1, word_4, 0x4);  // (from the original)

struct __attribute__((packed)) Local_007593ec_r1_4 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_007593ec_r1_4, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_007593ec_r1_4, word_4, 0x4);  // (from the original)

struct __attribute__((packed)) Local_007593ec_r3_11 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_007593ec_r3_11, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_007593ec_r3_11, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_007593ec_r3_11, word_8, 0x8);  // (from the original)

struct __attribute__((packed)) Local_007593ec_r3_16 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_007593ec_r3_16, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_007593ec_r3_16, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_007593ec_r3_16, word_8, 0x8);  // (from the original)

struct __attribute__((packed)) Local_007593ec_r3_6 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_007593ec_r3_6, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_007593ec_r3_6, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_007593ec_r3_6, word_8, 0x8);  // (from the original)

struct __attribute__((packed)) Local_007593ec_r4_5 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_007593ec_r4_5, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_007593ec_r4_5, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_007593ec_r4_5, word_8, 0x8);  // (from the original)

inline constexpr guest::Function<0x002fb430, u32(u32, u32, u32, u32)> call_002fb430;  // (from the original)
inline constexpr guest::Function<0x002fd4b4, u32(u32, u32, u32)> call_002fd4b4;  // (from the original)
inline constexpr guest::Function<0x003081b4, u32(u32, u32, u32, u32)> call_003081b4;  // (from the original)
inline constexpr guest::Function<0x00308efc, u32(u32, u32, u32, u32)> call_00308efc;  // (from the original)
inline constexpr guest::Function<0x0056be20, u32(u32, u32, u32, u32)> call_0056be20;  // (from the original)
inline constexpr guest::Function<0x0056c258, u32(u32, u32, u32, u32)> call_0056c258;  // (from the original)
inline constexpr guest::Function<0x00759664, u32(u32, u32, u32, u32)> call_00759664;  // (from the original)
inline constexpr guest::Function<0x007795ac, u32(u32, u32, u32, u32)> call_007795ac;  // (from the original)

u32 f_007593ec(u32 r0, u32 r1_unused, u32 r2, u32 r3) {
    guest::StackFrame frame(0x48);  // the original's stack frame
    u32 r2_18 = 0;
    u32 r1_18 = 0;
    u32 r0_13 = 0;
    gptr<Local_007593ec_r1_1> r1_1 = gptr<Local_007593ec_r1_1>(frame.at(0x60).addr());  // (from the original)
    u32 r7_1 = r1_1->word_4;
    if (r1_1->word_0 != 0) {
        u32 r4_1 = frame.at(0x28).addr();  // (from the original)
        u32 r0_1 = call_00759664(r0, r1_1.addr(), r2, r3);
        u32 r1_2 = guest::cpu()->r[1];
        gptr<Local_007593ec_ea_1> ea_1 = gptr<Local_007593ec_ea_1>(frame.at(0x10).addr());  // (from the original)
        ea_1->word_0 = r0_1;
        ea_1->word_4 = r1_2;
        call_007795ac(r4_1, r1_2, guest::cpu()->r[2], guest::cpu()->r[3]);
        call_003081b4(r4_1, frame.at(0x10).addr(), guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        gptr<Local_007593ec_r1_4> r1_4 = gptr<Local_007593ec_r1_4>(frame.at(0x10).addr());  // (from the original)
        u32 r4_2 = frame.at(0x30).addr();  // (from the original)
        r1_4->word_0 = r2;
        r1_4->word_4 = r3;
        call_007795ac(r4_2, r1_4.addr(), guest::cpu()->r[2], guest::cpu()->r[3]);
        call_003081b4(r4_2, frame.at(0x10).addr(), guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        u32 r4_3 = frame.at(0x28).addr();  // (from the original)
        call_002fb430(frame.at(0x38).addr(), r4_3, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        gptr<Local_007593ec_ea_2> ea_2 = gptr<Local_007593ec_ea_2>(frame.at(0x38).addr());  // (from the original)
        u32 r1_6 = ea_2->word_4;
        u32 r2_6 = ea_2->word_8;
        gptr<Local_007593ec_r3_6> r3_6 = gptr<Local_007593ec_r3_6>(frame.at(0x10).addr());  // (from the original)
        r3_6->word_0 = ea_2->word_0;
        r3_6->word_4 = r1_6;
        r3_6->word_8 = r2_6;
        call_00308efc(frame.at(0x10).addr(), r1_6, r2_6, r3_6.addr());  // (from the original)
        u32 r0_5 = call_0056be20(frame.at(0x10).addr(), guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        u32 r1_8 = guest::cpu()->r[1];
        gptr<Local_007593ec_ea_3> ea_3 = gptr<Local_007593ec_ea_3>(frame.at(0x38).addr());  // (from the original)
        ea_3->word_0 = r0_5;
        ea_3->word_4 = r1_8;
        call_007795ac(r4_3, r1_8, guest::cpu()->r[2], guest::cpu()->r[3]);
        call_003081b4(r4_3, frame.at(0x38).addr(), guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        u32 r4_4 = frame.at(0x30).addr();  // (from the original)
        call_002fb430(frame.at(0x38).addr(), r4_4, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        gptr<Local_007593ec_ea_4> ea_4 = gptr<Local_007593ec_ea_4>(frame.at(0x38).addr());  // (from the original)
        u32 r1_10 = ea_4->word_4;
        u32 r2_11 = ea_4->word_8;
        gptr<Local_007593ec_r3_11> r3_11 = gptr<Local_007593ec_r3_11>(frame.at(0x10).addr());  // (from the original)
        r3_11->word_0 = ea_4->word_0;
        r3_11->word_4 = r1_10;
        r3_11->word_8 = r2_11;
        call_00308efc(frame.at(0x10).addr(), r1_10, r2_11, r3_11.addr());  // (from the original)
        u32 r0_9 = call_0056be20(frame.at(0x10).addr(), guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        u32 r1_12 = guest::cpu()->r[1];
        gptr<Local_007593ec_ea_5> ea_5 = gptr<Local_007593ec_ea_5>(frame.at(0x38).addr());  // (from the original)
        ea_5->word_0 = r0_9;
        ea_5->word_4 = r1_12;
        call_007795ac(r4_4, r1_12, guest::cpu()->r[2], guest::cpu()->r[3]);
        call_003081b4(r4_4, frame.at(0x38).addr(), guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        call_002fb430(frame.at(0x38).addr(), frame.at(0x28).addr(), guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        gptr<Local_007593ec_ea_6> ea_6 = gptr<Local_007593ec_ea_6>(frame.at(0x38).addr());  // (from the original)
        u32 r1_15 = ea_6->word_4;
        u32 r2_16 = ea_6->word_8;
        gptr<Local_007593ec_r3_16> r3_16 = gptr<Local_007593ec_r3_16>(frame.at(4).addr());
        r3_16->word_0 = ea_6->word_0;
        r3_16->word_4 = r1_15;
        r3_16->word_8 = r2_16;
        call_002fb430(frame.at(0x10).addr(), frame.at(0x30).addr(), r2_16, r3_16.addr());  // (from the original)
        gptr<Local_007593ec_ea_7> ea_7 = gptr<Local_007593ec_ea_7>(frame.at(0x10).addr());  // (from the original)
        u32 r0_12 = ea_7->word_0;
        u32 r1_17 = ea_7->word_4;
        u32 r2_17 = ea_7->word_8;
        gptr<Local_007593ec_ea_8> ea_8 = gptr<Local_007593ec_ea_8>(frame.at(0x1c).addr());  // (from the original)
        ea_8->word_0 = r0_12;
        ea_8->word_4 = r1_17;
        ea_8->word_8 = r2_17;
        r2_18 = r7_1;
        r1_18 = frame.at(4).addr();
        r0_13 = frame.at(0x1c).addr();  // (from the original)
    } else {
        call_0056c258(frame.at(0x18).addr(), r1_1.addr(), r2, r3);  // (from the original)
        call_002fb430(frame.at(0xc).addr(), r0, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        gptr<Local_007593ec_r4_5> r4_5 = gptr<Local_007593ec_r4_5>(frame.at(0xc).addr());  // (from the original)
        u32 r1_19 = r4_5->word_4;
        u32 r2_20 = r4_5->word_8;
        *frame.at<u32>(0) = r4_5->word_0;
        *frame.at<u32>(4) = r1_19;
        *frame.at<u32>(8) = r2_20;
        r2_18 = r7_1;
        r1_18 = frame.at(0).addr();
        r0_13 = frame.at(0x18).addr();  // (from the original)
    }
    u32 r0_16 = call_002fd4b4(r0_13, r1_18, r2_18);
    return r0_16;
}

}  // namespace d_007593ec
GUEST_EXPORT_FRAMED(0x007593ec, d_007593ec::f_007593ec, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_007596ac: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_007596ac {

struct __attribute__((packed)) Local_007596ac_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_007596ac_ea_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_007596ac_ea_1, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_007596ac_ea_1, word_8, 0x8);  // (from the original)

inline constexpr guest::Function<0x002fb430, u32(u32, u32, u32, u32)> call_002fb430;  // (from the original)
inline constexpr guest::Function<0x0074fff8, u32(u32, u32)> call_0074fff8;  // (from the original)

u32 f_007596ac(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x18);  // the original's stack frame
    call_002fb430(frame.at(0xc).addr(), r0, r2, r3);  // (from the original)
    gptr<Local_007596ac_ea_1> ea_1 = gptr<Local_007596ac_ea_1>(frame.at(0xc).addr());  // (from the original)
    u32 r1_1 = ea_1->word_4;
    u32 r2_1 = ea_1->word_8;
    *frame.at<u32>(0) = ea_1->word_0;
    *frame.at<u32>(4) = r1_1;
    *frame.at<u32>(8) = r2_1;
    u32 r0_3 = call_0074fff8(frame.at(0).addr(), r1);
    return r0_3;
}

}  // namespace d_007596ac
GUEST_EXPORT_FRAMED(0x007596ac, d_007596ac::f_007596ac, 0x4010);  // pushes {r4, lr} first, as the original

// f_007598fc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_007598fc {

struct __attribute__((packed)) Object_007598fc_0 {
    u8 unknown_0[0x10];  // (not used here)
    u8 byte_10;
};
GUEST_OFFSET(Object_007598fc_0, byte_10, 0x10);  // (from the original)


u32 f_007598fc(gptr<Object_007598fc_0> arg0) {
    return arg0->byte_10 >= 2u ? 1u : 0u;
}

}  // namespace d_007598fc
GUEST_EXPORT(0x007598fc, d_007598fc::f_007598fc);

// f_00759910: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00759910 {

struct __attribute__((packed)) Object_00759910_0 {
    u8 unknown_0[0xc];  // (not used here)
    u8 byte_c;
    u8 byte_d;
    u8 byte_e;
    u8 byte_f;
};
GUEST_OFFSET(Object_00759910_0, byte_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_00759910_0, byte_d, 0xd);  // (from the original)
GUEST_OFFSET(Object_00759910_0, byte_e, 0xe);  // (from the original)
GUEST_OFFSET(Object_00759910_0, byte_f, 0xf);  // (from the original)


u32 f_00759910(gptr<Object_00759910_0> arg0) {
    u32 r1_1 = 0u;
    if (arg0->byte_c != 0) {
        r1_1 = 1u;
    }
    if (arg0->byte_d != 0) {
        r1_1 += 1u;
    }
    if (arg0->byte_e != 0) {
        r1_1 += 1u;
    }
    if (arg0->byte_f != 0) {
        r1_1 += 1u;
    }
    guest::cpu()->r[1] = r1_1;
    return r1_1 == 0 ? 1u : 0u;
}

}  // namespace d_00759910
GUEST_EXPORT(0x00759910, d_00759910::f_00759910);

// f_00759a20: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00759a20 {

struct __attribute__((packed)) Object_00759a20_0 {
    u8 unknown_0[0xc];  // (not used here)
    u8 byte_c;
    u8 unknown_d[0x1];  // (not used here)
    u8 byte_e;
    u8 unknown_f[0x1];  // (not used here)
    u8 byte_10;
    u8 unknown_11[0x1];  // (not used here)
    u8 byte_12;
};
GUEST_OFFSET(Object_00759a20_0, byte_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_00759a20_0, byte_e, 0xe);  // (from the original)
GUEST_OFFSET(Object_00759a20_0, byte_10, 0x10);  // (from the original)
GUEST_OFFSET(Object_00759a20_0, byte_12, 0x12);  // (from the original)


u32 f_00759a20(gptr<Object_00759a20_0> arg0) {
    u32 r1_1 = arg0->byte_c;
    u32 zf_1 = r1_1 == 0;
    if (zf_1) {
        r1_1 = arg0->byte_e;
        zf_1 = r1_1 == 0;
    }
    if (!zf_1) {
        guest::cpu()->r[1] = r1_1;
        return 0u;
    }
    u32 r1_2 = arg0->byte_10;
    if (r1_2 == 0 && arg0->byte_12 == 0) {
        guest::cpu()->r[1] = r1_2;
        return 1u;
    }
    guest::cpu()->r[1] = r1_2;
    return 0u;
}

}  // namespace d_00759a20
GUEST_EXPORT(0x00759a20, d_00759a20::f_00759a20);

// f_00759a54: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00759a54 {

struct __attribute__((packed)) Object_00759a54_1 {
    u16 half_0;
    u16 half_2;
};
GUEST_OFFSET(Object_00759a54_1, half_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_00759a54_1, half_2, 0x2);  // (from the original)

inline guest::global<u32, 0x00759aa8> global_00759aa8;  // (from the original)
inline guest::global<u32, 0x00759aac> global_00759aac;  // (from the original)
inline constexpr guest::Function<0x006c5c60, u32(u32, u32, u32, u32)> call_006c5c60;  // (from the original)

u32 f_00759a54(gptr<Float3> arg0, gptr<Object_00759a54_1> arg1, u32 r2_unused, u32 r3) {
    guest::StackFrame frame(0x4);  // the original's stack frame
    *frame.at<u32>(0) = r3;
    u32 r2_1 = arg1->half_2;
    float S0_1 = std::bit_cast<float>(*global_00759aa8);
    *frame.at<u16>(0) = u16(r2_1);
    u32 r2_2 = sxth(r2_1);
    u32 r1_1 = arg1->half_0;
    *frame.at<u16>(0) = u16(r1_1);
    float S2_1 = float(s32(std::bit_cast<u32>(std::bit_cast<float>(r2_2)))) * S0_1;
    float S0_2 = float(s32(std::bit_cast<u32>(std::bit_cast<float>(sxth(r1_1))))) * S0_1;
    float S1_1 = std::bit_cast<float>(*global_00759aac);
    arg0->v[0] = S0_2;
    arg0->v[1] = S1_1;
    arg0->v[2] = S2_1;
    guest::cpu()->s[0] = S0_2;
    guest::cpu()->s[1] = S1_1;
    guest::cpu()->s[2] = S2_1;
    u32 r0_1 = call_006c5c60(arg0.addr(), 0u, r2_2, r3);
    float S0_3 = guest::cpu()->s[0];
    arg0->v[1] = S0_3;
    guest::cpu()->s[0] = S0_3;
    return r0_1;
}

}  // namespace d_00759a54
GUEST_EXPORT_FRAMED(0x00759a54, d_00759a54::f_00759a54, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_00759ab0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00759ab0 {

struct __attribute__((packed)) Object_00759ab0_1 {
    u16 half_0;
    u16 half_2;
};
GUEST_OFFSET(Object_00759ab0_1, half_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_00759ab0_1, half_2, 0x2);  // (from the original)

inline guest::global<u32, 0x00759b04> global_00759b04;  // (from the original)
inline guest::global<u32, 0x00759b08> global_00759b08;  // (from the original)
inline constexpr guest::Function<0x006c7868, u32(u32, u32)> call_006c7868;  // (from the original)

u32 f_00759ab0(gptr<Float3> arg0, gptr<Object_00759ab0_1> arg1, u32 r2_unused, u32 r3) {
    guest::StackFrame frame(0x4);  // the original's stack frame
    *frame.at<u32>(0) = r3;
    u32 r2_1 = arg1->half_2;
    float S0_1 = std::bit_cast<float>(*global_00759b04);
    *frame.at<u16>(0) = u16(r2_1);
    u32 r1_1 = arg1->half_0;
    *frame.at<u16>(0) = u16(r1_1);
    float S2_1 = float(s32(std::bit_cast<u32>(std::bit_cast<float>(sxth(r2_1))))) * S0_1;
    float S0_2 = float(s32(std::bit_cast<u32>(std::bit_cast<float>(sxth(r1_1))))) * S0_1;
    float S1_1 = std::bit_cast<float>(*global_00759b08);
    arg0->v[0] = S0_2;
    arg0->v[1] = S1_1;
    arg0->v[2] = S2_1;
    guest::cpu()->s[0] = S0_2;
    guest::cpu()->s[1] = S1_1;
    guest::cpu()->s[2] = S2_1;
    u32 r0_1 = call_006c7868(arg0.addr(), 0u);
    float S0_3 = guest::cpu()->s[0];
    arg0->v[1] = S0_3;
    guest::cpu()->s[0] = S0_3;
    return r0_1;
}

}  // namespace d_00759ab0
GUEST_EXPORT_FRAMED(0x00759ab0, d_00759ab0::f_00759ab0, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_00759ba8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00759ba8 {

struct __attribute__((packed)) Object_00759ba8_0 {
    u8 unknown_0[0x90];  // (not used here)
    u32 word_90;
    u32 word_94;
};
GUEST_OFFSET(Object_00759ba8_0, word_90, 0x90);  // (from the original)
GUEST_OFFSET(Object_00759ba8_0, word_94, 0x94);  // (from the original)


u32 f_00759ba8(gptr<Object_00759ba8_0> arg0) {
    u32 r1_1 = arg0->word_90;
    u32 r2_1 = arg0->word_94;
    u32 r0_1 = r1_1 - 1u;
    u32 res_1 = r2_1 - r0_1;
    u32 nf_1 = res_1 >> 0x1f;  // (from the original)
    u32 vf_1 = ((r2_1 ^ r0_1) & (r2_1 ^ res_1)) >> 0x1f;  // (from the original)
    if (nf_1 == vf_1) {
        r0_1 = 1u;
    }
    if (nf_1 != vf_1) {
        r0_1 = 0u;
    }
    guest::cpu()->r[1] = r1_1;
    return r0_1;
}

}  // namespace d_00759ba8
GUEST_EXPORT(0x00759ba8, d_00759ba8::f_00759ba8);

// f_00759bc4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00759bc4 {

struct __attribute__((packed)) Object_00759bc4_0 {
    u8 unknown_0[0x94];  // (not used here)
    u32 word_94;
};
GUEST_OFFSET(Object_00759bc4_0, word_94, 0x94);  // (from the original)


u32 f_00759bc4(gptr<Object_00759bc4_0> arg0) {
    u32 r0_1 = arg0->word_94;
    u32 nf_1 = r0_1 >> 0x1f;  // (from the original)
    u32 zf_1 = r0_1 == 0;
    if (zf_1 || nf_1 != 0u) {
        r0_1 = 1u;
    }
    if (!zf_1 && nf_1 == 0u) {
        r0_1 = 0u;
    }
    return r0_1;
}

}  // namespace d_00759bc4
GUEST_EXPORT(0x00759bc4, d_00759bc4::f_00759bc4);

// f_00759bd8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00759bd8 {

inline guest::global<u32, 0x0095debc> global_0095debc;  // (from the original)
inline constexpr guest::Function<0x0075c158, u32(u32, u32, u32, u32)> call_0075c158;  // (from the original)

u32 f_00759bd8(u32 r0_unused, u32 r1_unused, u32 r2_unused, u32 r3) {
    guest::StackFrame frame(0x4);  // the original's stack frame
    *frame.at<u32>(0) = r3;
    *frame.at<u32>(0) = ~0u;
    call_0075c158(*global_0095debc, frame.at(0).addr(), 0x890c6cu, 2u);  // (from the original)
    return *frame.at<u32>(0);
}

}  // namespace d_00759bd8
GUEST_EXPORT_FRAMED(0x00759bd8, d_00759bd8::f_00759bd8, 0x4000);  // pushes {lr} first, as the original

// f_00759c0c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00759c0c {

inline guest::global<u32, 0x0095debc> global_0095debc;  // (from the original)
inline constexpr guest::Function<0x0075c158, u32(u32, u32, u32, u32)> call_0075c158;  // (from the original)

u32 f_00759c0c(u32 r0_unused, u32 r1_unused, u32 r2_unused, u32 r3) {
    guest::StackFrame frame(0x4);  // the original's stack frame
    *frame.at<u32>(0) = r3;
    *frame.at<u32>(0) = ~0u;
    call_0075c158(*global_0095debc, frame.at(0).addr(), 0x890c6cu, 1u);  // (from the original)
    return *frame.at<u32>(0);
}

}  // namespace d_00759c0c
GUEST_EXPORT_FRAMED(0x00759c0c, d_00759c0c::f_00759c0c, 0x4000);  // pushes {lr} first, as the original

// f_00759c40: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00759c40 {

inline guest::global<u32, 0x0095debc> global_0095debc;  // (from the original)
inline constexpr guest::Function<0x0075c158, u32(u32, u32, u32, u32)> call_0075c158;  // (from the original)

u32 f_00759c40(u32 r0, u32 r1, u32 r2_unused, u32 r3) {
    guest::StackFrame frame(0x4);  // the original's stack frame
    *frame.at<u32>(0) = r3;
    if (r1 >= 3u) {
        return ~0u;
    }
    u32 r3_1 = *gptr<u32>((r0 + (r1 << 2)) + 0x98u);  // (from the original)
    *frame.at<u32>(0) = ~0u;
    call_0075c158(*global_0095debc, frame.at(0).addr(), 0x890c6cu, r3_1);  // (from the original)
    return *frame.at<u32>(0);
}

}  // namespace d_00759c40
GUEST_EXPORT_FRAMED(0x00759c40, d_00759c40::f_00759c40, 0x4000);  // pushes {lr} first, as the original

// f_00759c88: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00759c88 {

struct __attribute__((packed)) Object_00759c88_0 {
    u8 unknown_0[0xac];  // (not used here)
    u8 byte_ac;
};
GUEST_OFFSET(Object_00759c88_0, byte_ac, 0xac);  // (from the original)


u32 f_00759c88(gptr<Object_00759c88_0> arg0, u32 r1) {
    u32 r2_1 = arg0->byte_ac;
    if (r2_1 >= 5u || r1 >= 2u) {
        return 0u;
    }
    return *gptr<u32>(0x893200u + (r2_1 << 3) + (r1 << 2));  // (from the original)
}

}  // namespace d_00759c88
GUEST_EXPORT(0x00759c88, d_00759c88::f_00759c88);

// f_0075a29c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0075a29c {

struct __attribute__((packed)) Local_0075a29c_ea_6 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0075a29c_ea_6, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_0075a29c_ea_6, word_4, 0x4);  // (from the original)

inline constexpr guest::Function<0x005ec990, u32(u32, u32, u32)> call_005ec990;  // (from the original)
inline constexpr guest::Function<0x005fd310, u32(u32, u32, u32, u32)> call_005fd310;  // (from the original)
inline constexpr guest::Function<0x0060184c, u32(u32, u32, u32)> call_0060184c;  // (from the original)
inline constexpr guest::Function<0x006019b0, u32(u32, u32, u32)> call_006019b0;  // (from the original)

u32 f_0075a29c(u32 r0, u32 r1, u32 r2) {
    guest::StackFrame frame(0x9c);  // the original's stack frame
    u32 res_1 = 0;
    u32 r5 = r1;
    call_005fd310(frame.at(0).addr(), r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    u32 r0_2 = *gptr<u32>(r0 + 0x14u);  // (from the original)
    u32 r1_1 = *gptr<u32>(r0);
    u32 r4 = 0u;
    r0 = r1_1 + (r0_2 >> 1 << 1);
    *frame.at<u32>(0x80) = r0;  // (from the original)
    *frame.at<u32>(0x7c) = r0;  // (from the original)
    if (r5 != 0 && r5 >> 0x1f == (r5 & (r5 ^ r5)) >> 0x1f) {  // (from the original)
        u32 r7 = 0u;
        u32 r8 = 1u;
        u32 r9 = 4u;
        u32 r10 = ~0x80000000u;  // (from the original)
        u32 r11 = ~0u;
        do {
            call_005ec990(frame.at(0x88).addr(), r0, r2);  // (from the original)
            u32 r0_4 = *frame.at<u32>(0x7c);  // (from the original)
            *frame.at<u8>(0x60) = u8(r9);  // (from the original)
            *frame.at<u32>(0x64) = r7;  // (from the original)
            *frame.at<u32>(0x7c) = r0_4 + 2u;  // (from the original)
            *frame.at<u16>(0x68) = u16(r7);  // (from the original)
            gptr<Local_0075a29c_ea_6> ea_6 = gptr<Local_0075a29c_ea_6>(frame.at(0x6c).addr());  // (from the original)
            ea_6->word_0 = r10;
            ea_6->word_4 = r11;
            u32 r6_1 = frame.at(0).addr();
            *frame.at<u8>(0x74) = u8(r7);  // (from the original)
            *frame.at<u32>(0x78) = r7;  // (from the original)
            call_006019b0(r6_1, frame.at(0x7c).addr(), 0x95df14u);  // (from the original)
            u32 r0_5 = *frame.at<u32>(0x7c);  // (from the original)
            *frame.at<u8>(0x60) = u8(r8);  // (from the original)
            *frame.at<u32>(0x64) = r0_5;  // (from the original)
            call_0060184c(r6_1, 0x95df14u, guest::cpu()->r[2]);  // (from the original)
            r2 = guest::cpu()->r[2];
            u32 r0_6 = 0u;
            if (*frame.at<u8>(0x74) != 0) {  // (from the original)
                r0_6 = s32(*frame.at<u32>(0x78) - *frame.at<u32>(0x64)) >> 1;  // (from the original)
            }
            r4 += 1u;
            res_1 = r4 - r5;
            r0 = *frame.at<u32>(0x7c) + (r0_6 << 1);  // (from the original)
            *frame.at<u32>(0x7c) = r0;  // (from the original)
            guest::preempt();
        } while (res_1 >> 0x1f != ((r4 ^ r5) & (r4 ^ res_1)) >> 0x1f);  // (from the original)
    }
    return s32(r0 - *frame.at<u32>(0x80)) >> 1;  // (from the original)
}

}  // namespace d_0075a29c
GUEST_EXPORT_FRAMED(0x0075a29c, d_0075a29c::f_0075a29c, 0x4ff0);  // pushes {r4, r5, r6, r7, r8, r9, r10, r11, lr} first, as the original

// f_0075a818: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0075a818 {

struct __attribute__((packed)) Local_0075a818_ea_6 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0075a818_ea_6, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_0075a818_ea_6, word_4, 0x4);  // (from the original)

inline constexpr guest::Function<0x005ec990, u32(u32, u32, u32)> call_005ec990;  // (from the original)
inline constexpr guest::Function<0x005fd310, u32(u32, u32, u32, u32)> call_005fd310;  // (from the original)
inline constexpr guest::Function<0x0060184c, u32(u32, u32, u32)> call_0060184c;  // (from the original)
inline constexpr guest::Function<0x006019b0, u32(u32, u32, u32)> call_006019b0;  // (from the original)

u32 f_0075a818(u32 r0, u32 r1, u32 r2) {
    guest::StackFrame frame(0x94);  // the original's stack frame
    u32 res_1 = 0;
    u32 r0_7 = 0;
    call_005fd310(frame.at(0).addr(), r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    u32 r0_2 = *gptr<u32>(r0 + 0x14u);  // (from the original)
    u32 r1_1 = *gptr<u32>(r0);
    u32 r4 = 0u;
    u32 r7 = r4;
    u32 r8 = 1u;
    u32 r6 = r1_1 + (r0_2 >> 1 << 1);
    u32 r9 = 4u;
    u32 r10 = ~0x80000000u;  // (from the original)
    u32 r11 = ~0u;
    *frame.at<u32>(0x7c) = r6;  // (from the original)
    do {
        call_005ec990(frame.at(0x80).addr(), *frame.at<u32>(0x7c), r2);  // (from the original)
        u32 r0_4 = *frame.at<u32>(0x7c);  // (from the original)
        *frame.at<u8>(0x60) = u8(r9);  // (from the original)
        *frame.at<u32>(0x64) = r7;  // (from the original)
        *frame.at<u32>(0x7c) = r0_4 + 2u;  // (from the original)
        *frame.at<u16>(0x68) = u16(r7);  // (from the original)
        gptr<Local_0075a818_ea_6> ea_6 = gptr<Local_0075a818_ea_6>(frame.at(0x6c).addr());  // (from the original)
        ea_6->word_0 = r10;
        ea_6->word_4 = r11;
        u32 r5_1 = frame.at(0).addr();
        *frame.at<u8>(0x74) = u8(r7);  // (from the original)
        *frame.at<u32>(0x78) = r7;  // (from the original)
        call_006019b0(r5_1, frame.at(0x7c).addr(), 0x95df14u);  // (from the original)
        u32 r0_5 = *frame.at<u32>(0x7c);  // (from the original)
        *frame.at<u8>(0x60) = u8(r8);  // (from the original)
        *frame.at<u32>(0x64) = r0_5;  // (from the original)
        call_0060184c(r5_1, 0x95df14u, guest::cpu()->r[2]);  // (from the original)
        r2 = guest::cpu()->r[2];
        u32 r0_6 = 0u;
        if (*frame.at<u8>(0x74) != 0) {  // (from the original)
            r0_6 = s32(*frame.at<u32>(0x78) - *frame.at<u32>(0x64)) >> 1;  // (from the original)
        }
        r4 += 1u;
        res_1 = r4 - 2u;
        r0_7 = *frame.at<u32>(0x7c) + (r0_6 << 1);  // (from the original)
        *frame.at<u32>(0x7c) = r0_7;  // (from the original)
        guest::preempt();
    } while (res_1 >> 0x1f != ((r4 ^ 2u) & (r4 ^ res_1)) >> 0x1f);  // (from the original)
    return s32(r0_7 - r6) >> 1;
}

}  // namespace d_0075a818
GUEST_EXPORT_FRAMED(0x0075a818, d_0075a818::f_0075a818, 0x4ff0);  // pushes {r4, r5, r6, r7, r8, r9, r10, r11, lr} first, as the original

// f_0075a90c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0075a90c {

struct __attribute__((packed)) Object_0075a90c_0 {
    u8 unknown_0[0x10];  // (not used here)
    u32 word_10;
};
GUEST_OFFSET(Object_0075a90c_0, word_10, 0x10);  // (from the original)

struct __attribute__((packed)) Object_0075a90c_1 {
    u8 byte_0;
};
GUEST_OFFSET(Object_0075a90c_1, byte_0, 0x0);  // (from the original)


void f_0075a90c(gptr<Object_0075a90c_0> arg0, gptr<Object_0075a90c_1> arg1) {
    arg1->byte_0 = u8(u32(*gptr<u8>(arg0->word_10)));
}

}  // namespace d_0075a90c
GUEST_EXPORT(0x0075a90c, d_0075a90c::f_0075a90c);

// f_0075a91c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0075a91c {

struct __attribute__((packed)) Object_0075a91c_0 {
    u8 unknown_0[0x10];  // (not used here)
    u32 word_10;
};
GUEST_OFFSET(Object_0075a91c_0, word_10, 0x10);  // (from the original)

struct __attribute__((packed)) Object_0075a91c_1 {
    u8 byte_0;
};
GUEST_OFFSET(Object_0075a91c_1, byte_0, 0x0);  // (from the original)


void f_0075a91c(gptr<Object_0075a91c_0> arg0, gptr<Object_0075a91c_1> arg1) {
    arg1->byte_0 = u8(u32(*gptr<u8>(arg0->word_10)));
}

}  // namespace d_0075a91c
GUEST_EXPORT(0x0075a91c, d_0075a91c::f_0075a91c);

// f_0075ac90: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0075ac90 {

struct __attribute__((packed)) Object_0075ac90_0 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u8 unknown_c[0x4];  // (not used here)
    u32 word_10;
};
GUEST_OFFSET(Object_0075ac90_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_0075ac90_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_0075ac90_0, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_0075ac90_0, word_10, 0x10);  // (from the original)

inline guest::global<u8, 0x008c9f1c> global_008c9f1c;  // (from the original)

u32 f_0075ac90(gptr<Object_0075ac90_0> arg0) {
    u32 r1_1 = arg0->word_0;
    if ((r1_1 & 1u) != 0 && arg0->word_4 + 1u != 0 || (r1_1 & 2u) != 0 && arg0->word_8 + 1u != 0) {
        guest::cpu()->r[1] = r1_1;
        return 1u;
    }
    if ((r1_1 & 4u) == 0) {
        guest::cpu()->r[1] = r1_1;
        return 0u;
    }
    u32 r1_2 = s8(*global_008c9f1c);
    if (u32(*gptr<s8>(arg0->word_10)) == r1_2) {
        guest::cpu()->r[1] = r1_2;
        return 0u;
    }
    guest::cpu()->r[1] = r1_2;
    return 1u;
}

}  // namespace d_0075ac90
GUEST_EXPORT(0x0075ac90, d_0075ac90::f_0075ac90);

// f_0075ad18: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0075ad18 {

struct __attribute__((packed)) Object_0075ad18_0 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u8 unknown_c[0x4];  // (not used here)
    u32 word_10;
};
GUEST_OFFSET(Object_0075ad18_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_0075ad18_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_0075ad18_0, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_0075ad18_0, word_10, 0x10);  // (from the original)

inline guest::global<u8, 0x008c9f1c> global_008c9f1c;  // (from the original)
inline constexpr guest::Function<0x00300768, u32(u32, u32, u32, u32)> call_00300768;  // (from the original)

u32 f_0075ad18(gptr<Object_0075ad18_0> arg0, u32 r1_unused, u32 r2) {
    u32 r1_1 = arg0->word_0;
    u32 zf_1 = (r1_1 & 2u) == 0;
    if (!zf_1) {
        r2 = arg0->word_8;
        zf_1 = r2 + 1u == 0;
    }
    if (!zf_1) {
        if (r2 == 0) {
            guest::cpu()->r[1] = r1_1;
            return 1u;
        }
        guest::cpu()->r[1] = r1_1;
        return 0u;
    }
    if ((r1_1 & 4u) != 0) {
        u32 r2_1 = *gptr<s8>(arg0->word_10);
        u32 r3_1 = s8(*global_008c9f1c);
        if (r2_1 != r3_1) {
            u32 r0_2 = call_00300768(arg0.addr() + 0xcu, 0xad5b7cu, r2_1, r3_1);  // (from the original)
            return r0_2;
        }
    }
    if ((r1_1 & 1u) != 0 && arg0->word_4 + 1u != 0) {
        guest::cpu()->r[1] = r1_1;
        return 0u;
    }
    guest::cpu()->r[1] = r1_1;
    return 1u;
}

}  // namespace d_0075ad18
GUEST_EXPORT_FRAMED(0x0075ad18, d_0075ad18::f_0075ad18, 0x4010);  // pushes {r4, lr} first, as the original

// f_0075ad90: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0075ad90 {

struct __attribute__((packed)) Object_0075ad90_0 {
    u8 unknown_0[0x14];  // (not used here)
    u32 word_14;
    u8 unknown_18[0x4];  // (not used here)
    u32 word_1c;
    u32 word_20;
    u8 unknown_24[0x94];  // (not used here)
    u32 word_b8;
};
GUEST_OFFSET(Object_0075ad90_0, word_14, 0x14);  // (from the original)
GUEST_OFFSET(Object_0075ad90_0, word_1c, 0x1c);  // (from the original)
GUEST_OFFSET(Object_0075ad90_0, word_20, 0x20);  // (from the original)
GUEST_OFFSET(Object_0075ad90_0, word_b8, 0xb8);  // (from the original)

inline constexpr guest::Function<0x005ea0a8, u32(u32, u32, u32, u32)> call_005ea0a8;  // (from the original)

u32 f_0075ad90(gptr<Object_0075ad90_0> arg0) {
    guest::StackFrame frame(0xc);  // the original's stack frame
    *frame.at<u32>(0) = arg0->word_14;
    *frame.at<u32>(4) = *gptr<u32>(arg0->word_20 + (arg0->word_1c - 1u << 2));
    u32 r0_2 = call_005ea0a8(arg0->word_b8, frame.at(0).addr(), frame.at(4).addr(), guest::cpu()->r[3]);
    return r0_2;
}

}  // namespace d_0075ad90
GUEST_EXPORT_FRAMED(0x0075ad90, d_0075ad90::f_0075ad90, 0x4000);  // pushes {lr} first, as the original

// f_0075b208: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0075b208 {

struct __attribute__((packed)) Object_0075b208_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_0075b208_0, word_0, 0x0);  // (from the original)

struct __attribute__((packed)) Object_0075b208_1 {
    u32 word_0;
};
GUEST_OFFSET(Object_0075b208_1, word_0, 0x0);  // (from the original)

inline constexpr guest::Function<0x0056d060, u32(u32, u32, u32, u32)> call_0056d060;  // (from the original)
inline constexpr guest::Function<0x0062fac8, u32(u32, u32, u32, u32)> call_0062fac8;  // (from the original)
inline constexpr guest::Function<0x0062fb44, u32(u32, u32, u32, u32)> call_0062fb44;  // (from the original)
inline constexpr guest::Function<0x0063001c, u32(u32, u32, u32, u32)> call_0063001c;  // (from the original)

u32 f_0075b208(gptr<Object_0075b208_0> arg0, gptr<Object_0075b208_1> arg1) {
    u32 res_1 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 r0_7 = 0;
    u32 r0_8 = 0;
    u32 r0_9 = 0;
    u32 r0_1 = *gptr<u8>(arg0->word_0 + 8u);
    if (r0_1 < 0x16u) {  // (from the original)
        res_1 = r0_1 & 0xffu;  // (from the original)
        if (res_1 != 0) {
            r1_1 = arg1->word_0;
            r2_1 = res_1 - 1u;
            if (r2_1 > 0xbu) {  // (from the original)
                goto L_75b24c;
            }
            if (u32(*gptr<s8>(r1_1 + 4u)) != res_1) {
                return 0u;
            }
        }
    }
L_75b244:;
    return 1u;
L_75b24c:;
    if (res_1 != 0xdu) {  // (from the original)
        if (res_1 == 0xeu) {  // (from the original)
            goto L_75b2b0;
        }
        if (res_1 == 0xfu) {  // (from the original)
            goto L_75b2c8;
        }
        if (res_1 == 0x10u) {  // (from the original)
            goto L_75b2e0;
        }
        if (res_1 == 0x11u) {  // (from the original)
            goto L_75b2f8;
        }
        if (res_1 == 0x12u) {  // (from the original)
            goto L_75b310;
        }
        if (res_1 == 0x13u) {  // (from the original)
            goto L_75b328;
        }
        if (res_1 == 0x14u) {  // (from the original)
            goto L_75b340;
        }
        if (res_1 == 0x15u) {  // (from the original)
            goto L_75b358;
        }
        return 0u;
    }
    r0_2 = call_0056d060(r1_1, r1_1, r2_1, guest::cpu()->r[3]);
    if (r0_2 != 0) {
        return 0u;
    }
    guest::preempt();
    goto L_75b244;
L_75b2b0:;
    r0_3 = call_0056d060(r1_1, r1_1, r2_1, guest::cpu()->r[3]);
    if (r0_3 != 1u) {
        return 0u;
    }
    guest::preempt();
    goto L_75b244;
L_75b2c8:;
    r0_4 = call_0056d060(r1_1, r1_1, r2_1, guest::cpu()->r[3]);
    if (r0_4 != 2u) {
        return 0u;
    }
    guest::preempt();
    goto L_75b244;
L_75b2e0:;
    r0_5 = call_0056d060(r1_1, r1_1, r2_1, guest::cpu()->r[3]);
    if (r0_5 != 3u) {
        return 0u;
    }
    guest::preempt();
    goto L_75b244;
L_75b2f8:;
    r0_6 = call_0062fb44(res_1, r1_1, r2_1, guest::cpu()->r[3]);
    if (r0_6 == 0) {
        return 0u;
    }
    guest::preempt();
    goto L_75b244;
L_75b310:;
    r0_7 = call_0063001c(res_1, r1_1, r2_1, guest::cpu()->r[3]);
    if (r0_7 == 0) {
        return 0u;
    }
    guest::preempt();
    goto L_75b244;
L_75b328:;
    r0_8 = call_0063001c(res_1, r1_1, r2_1, guest::cpu()->r[3]);
    if (r0_8 == 0) {
        return 0u;
    }
    guest::preempt();
    goto L_75b244;
L_75b340:;
    r0_9 = call_0063001c(res_1, r1_1, r2_1, guest::cpu()->r[3]);
    if (r0_9 == 0) {
        return 0u;
    }
    guest::preempt();
    goto L_75b244;
L_75b358:;
    u32 r0_10 = call_0062fac8(res_1, r1_1, r2_1, guest::cpu()->r[3]);
    if (r0_10 == 0) {
        return 0u;
    }
    guest::preempt();
    goto L_75b244;
}

}  // namespace d_0075b208
GUEST_EXPORT_FRAMED(0x0075b208, d_0075b208::f_0075b208, 0x4010);  // pushes {r4, lr} first, as the original

// f_0075b438: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0075b438 {

struct __attribute__((packed)) Object_0075b438_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_0075b438_0, word_0, 0x0);  // (from the original)


u32 f_0075b438(gptr<Object_0075b438_0> arg0) {
    u32 r1_1 = *gptr<u8>(arg0->word_0 + 7u);
    u32 r0_1 = 0u;
    if (r1_1 < 3u) {
        r0_1 = r1_1 & 0xffu;  // (from the original)
    }
    guest::cpu()->r[1] = r1_1;
    return r0_1;
}

}  // namespace d_0075b438
GUEST_EXPORT(0x0075b438, d_0075b438::f_0075b438);

// f_0075b450: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0075b450 {

struct __attribute__((packed)) Object_0075b450_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_0075b450_0, word_0, 0x0);  // (from the original)


u32 f_0075b450(gptr<Object_0075b450_0> arg0) {
    u32 r0_1 = *gptr<u8>(arg0->word_0 + 1u);
    if (r0_1 != 1u) {
        r0_1 = 0u;
    }
    return r0_1;
}

}  // namespace d_0075b450
GUEST_EXPORT(0x0075b450, d_0075b450::f_0075b450);

// f_0075b558: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0075b558 {

struct __attribute__((packed)) Object_0075b558_0 {
    u32 word_0;
    u8 byte_4;
};
GUEST_OFFSET(Object_0075b558_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_0075b558_0, byte_4, 0x4);  // (from the original)

inline guest::global<u8, 0x00890f12> global_00890f12;  // (from the original)

u32 f_0075b558(gptr<Object_0075b558_0> arg0) {
    u32 r1_1 = arg0->byte_4;
    if (r1_1 >= 0x27u) {  // (from the original)
        u32 r0_1 = arg0->word_0;
        if (r0_1 == 0) {
            u32 r0_2 = *global_00890f12;
            guest::cpu()->r[1] = 0u;
            return r0_2;
        } else {
            r1_1 = *gptr<u8>(r0_1);
        }
    }
    if (r1_1 >= 0x27u) {  // (from the original)
        guest::cpu()->r[1] = r1_1;
        return 0u;
    }
    u32 r0_3 = *gptr<u8>(0x890f12u + r1_1);  // (from the original)
    guest::cpu()->r[1] = r1_1;
    return r0_3;
}

}  // namespace d_0075b558
GUEST_EXPORT(0x0075b558, d_0075b558::f_0075b558);

// f_0075b8b0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0075b8b0 {

inline constexpr guest::Function<0x005ffc14, u32(u32, u32, u32)> call_005ffc14;  // (from the original)
inline constexpr guest::Function<0x00601a20, u32(u32, u32, u32, u32)> call_00601a20;  // (from the original)

u32 f_0075b8b0(u32 r0, u32 r1, u32 r2) {
    guest::StackFrame frame(0x64);  // the original's stack frame
    u32 r0_2 = call_00601a20(frame.at(0).addr(), r1, r2, guest::cpu()->r[3]);
    *gptr<u32>(r0_2) = 0x90a998;  // (from the original)
    u32 r0_4 = call_005ffc14(frame.at(0).addr(), r0, r1);
    return r0_4;
}

}  // namespace d_0075b8b0
GUEST_EXPORT_FRAMED(0x0075b8b0, d_0075b8b0::f_0075b8b0, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_0075bdac: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0075bdac {

inline constexpr guest::Function<0x00135740, u32(u32, u32)> call_00135740;  // (from the original)
inline constexpr guest::Function<0x00137e84, u32(u32, u32)> call_00137e84;  // (from the original)
inline constexpr guest::Function<0x00138998, u32(u32, u32)> call_00138998;  // (from the original)
inline constexpr guest::Function<0x00159960, u32(u32, u32)> call_00159960;  // (from the original)
inline constexpr guest::Function<0x005b1760, u32(u32, u32)> call_005b1760;  // (from the original)
inline constexpr guest::Function<0x005b177c, u32(u32, u32)> call_005b177c;  // (from the original)
inline constexpr guest::Function<0x0075adcc, u32(u32, u32, u32, u32)> call_0075adcc;  // (from the original)

u32 f_0075bdac(u32 r0, u32 r1) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 r5 = guest::cpu()->r[5];
    u32 r4_1 = r0 + 0x14u;  // (from the original)
    u32 r0_1 = call_0075adcc(r4_1, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r1_1 = guest::cpu()->r[1];
    u32 zf_1 = r0_1 == 0;
    if (!zf_1) {
        r5 = *gptr<u32>(r0_1 + 0x17cu);  // (from the original)
    }
    u32 r6_1 = 0u;
    if (!zf_1) {
        zf_1 = r5 == 0;
    }
    if (!zf_1) {
        call_00135740(r4_1, r1_1);
        call_005b177c(frame.at(0).addr(), guest::cpu()->r[1]);
        call_005b1760(frame.at(0).addr(), r5);
        u32 r0_5 = call_00159960(frame.at(0).addr(), guest::cpu()->r[1]);
        r6_1 = r0_5;
        call_00138998(frame.at(0).addr(), guest::cpu()->r[1]);
        call_00137e84(r4_1, guest::cpu()->r[1]);
        r1_1 = guest::cpu()->r[1];
    }
    guest::cpu()->r[1] = r1_1;
    return r6_1;
}

}  // namespace d_0075bdac
GUEST_EXPORT_FRAMED(0x0075bdac, d_0075bdac::f_0075bdac, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0075be20: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0075be20 {

struct __attribute__((packed)) Local_0075be20_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0075be20_ea_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_0075be20_ea_1, word_4, 0x4);  // (from the original)

struct __attribute__((packed)) Local_0075be20_r4_1 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_0075be20_r4_1, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_0075be20_r4_1, word_8, 0x8);  // (from the original)

inline constexpr guest::Function<0x00135740, u32(u32, u32, u32, u32)> call_00135740;  // (from the original)
inline constexpr guest::Function<0x00137e84, u32(u32, u32)> call_00137e84;  // (from the original)
inline constexpr guest::Function<0x00138998, u32(u32, u32, u32, u32)> call_00138998;  // (from the original)
inline constexpr guest::Function<0x001597e0, u32(u32, u32, u32, u32)> call_001597e0;  // (from the original)
inline constexpr guest::Function<0x005b1760, u32(u32, u32, u32, u32)> call_005b1760;  // (from the original)
inline constexpr guest::Function<0x005b177c, u32(u32, u32, u32, u32)> call_005b177c;  // (from the original)
inline constexpr guest::Function<0x0075adcc, u32(u32, u32, u32, u32)> call_0075adcc;  // (from the original)

u32 f_0075be20(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 r6 = guest::cpu()->r[6];
    gptr<Local_0075be20_r4_1> r4_1 = gptr<Local_0075be20_r4_1>(r1);
    u32 r7_1 = 0u;
    if (r3 >> 0x1f == (r3 & (r3 ^ r3)) >> 0x1f) {  // (from the original)
        u32 r5_1 = r0 + 0x14u;  // (from the original)
        u32 r0_1 = call_0075adcc(r5_1, r2, r2, r3);
        r1 = guest::cpu()->r[1];
        u32 zf_1 = r0_1 == 0;
        if (!zf_1) {
            r6 = *gptr<u32>(r0_1 + 0x17cu);  // (from the original)
            zf_1 = r6 == 0;
        }
        if (!zf_1) {
            call_00135740(r5_1, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
            call_005b177c(frame.at(0).addr(), guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
            call_005b1760(frame.at(0).addr(), r6, guest::cpu()->r[2], guest::cpu()->r[3]);
            u32 r0_5 = call_001597e0(frame.at(0).addr(), r3, guest::cpu()->r[2], guest::cpu()->r[3]);
            call_00138998(frame.at(0).addr(), guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
            call_00137e84(r5_1, guest::cpu()->r[1]);
            r1 = guest::cpu()->r[1];
            if (r0_5 != 0) {
                gptr<Local_0075be20_ea_1> ea_1 = gptr<Local_0075be20_ea_1>(r4_1.addr() + 4u);
                ea_1->word_0 = r0_5;
                ea_1->word_4 = ~0xc0000000u;  // (from the original)
                return 1u;
            }
        }
    }
    r4_1->word_4 = 0x8906ec;  // (from the original)
    r4_1->word_8 = ~0xc0000000u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r7_1;
}

}  // namespace d_0075be20
GUEST_EXPORT_FRAMED(0x0075be20, d_0075be20::f_0075be20, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_0075bedc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0075bedc {

inline constexpr guest::Function<0x005e8348, u32(u32, u32, u32, u32)> call_005e8348;  // (from the original)
inline constexpr guest::Function<0x005ffc14, u32(u32, u32, u32, u32)> call_005ffc14;  // (from the original)
inline constexpr guest::Function<0x00601a20, u32(u32, u32, u32, u32)> call_00601a20;  // (from the original)
inline constexpr guest::Function<0x00601bc0, u32(u32, u32, u32, u32)> call_00601bc0;  // (from the original)
inline constexpr guest::Function<0x0075be20, u32(u32, u32, u32, u32)> call_0075be20;  // (from the original)

u32 f_0075bedc(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0xac);  // the original's stack frame
    *frame.at<u32>(0x9c) = 0x90a570;  // (from the original)
    *frame.at<u32>(0xa0) = 0;  // (from the original)
    *frame.at<u32>(0xa4) = 0;  // (from the original)
    u32 r0_1 = call_0075be20(r0, frame.at(0x9c).addr(), 0x75bfa0u, r2);  // (from the original)
    u32 r1_2 = guest::cpu()->r[1];
    u32 r4_1 = r0_1;
    if (r0_1 != 0) {
        u32 r0_3 = call_00601bc0(frame.at(0).addr(), r1_2, guest::cpu()->r[2], guest::cpu()->r[3]);
        *gptr<u32>(r0_3) = 0x909294;  // (from the original)
        *gptr<u32>(r0_3 + 0x8cu) = r3;  // (from the original)
        *gptr<u32>(r0_3 + 0x90u) = 0;  // (from the original)
        *gptr<u32>(r0_3 + 0x94u) = 0;  // (from the original)
        *gptr<u8>(r0_3 + 0x98u) = 0;  // (from the original)
        *gptr<u8>(r0_3 + 0x99u) = 0;  // (from the original)
        u32 r0_5 = call_005e8348(frame.at(0).addr(), r1, frame.at(0x9c).addr(), guest::cpu()->r[3]);  // (from the original)
        r1_2 = guest::cpu()->r[1];
        if (r0_5 == 0) {
            r4_1 = 0u;
        }
        *frame.at<u32>(0) = 0x90aa8c;  // (from the original)
        if (r4_1 != 0) {
            u32 r0_7 = call_00601a20(frame.at(0).addr(), r1_2, guest::cpu()->r[2], guest::cpu()->r[3]);
            *gptr<u32>(r0_7) = 0x90a998;  // (from the original)
            u32 r0_9 = call_005ffc14(frame.at(0).addr(), r1, r3, guest::cpu()->r[3]);
            r1_2 = guest::cpu()->r[1];
            if (r0_9 != 0) {
                r4_1 = 0u;
            }
            *frame.at<u32>(0) = 0x90aa8c;  // (from the original)
        }
    }
    guest::cpu()->r[1] = r1_2;
    return r4_1;
}

}  // namespace d_0075bedc
GUEST_EXPORT_FRAMED(0x0075bedc, d_0075bedc::f_0075bedc, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_0075bfc0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0075bfc0 {

inline constexpr guest::Function<0x00135740, u32(u32, u32, u32)> call_00135740;  // (from the original)
inline constexpr guest::Function<0x00137e84, u32(u32)> call_00137e84;  // (from the original)
inline constexpr guest::Function<0x00138998, u32(u32, u32, u32)> call_00138998;  // (from the original)
inline constexpr guest::Function<0x001597e0, u32(u32, u32, u32)> call_001597e0;  // (from the original)
inline constexpr guest::Function<0x005b1760, u32(u32, u32, u32)> call_005b1760;  // (from the original)
inline constexpr guest::Function<0x005b177c, u32(u32, u32, u32)> call_005b177c;  // (from the original)
inline constexpr guest::Function<0x0075adcc, u32(u32, u32, u32, u32)> call_0075adcc;  // (from the original)

u32 f_0075bfc0(u32 r0, u32 r1, u32 r2) {
    guest::StackFrame frame(0xc);  // the original's stack frame
    u32 r5 = guest::cpu()->r[5];
    u32 r4_1 = r0 + 0x14u;  // (from the original)
    u32 r0_1 = call_0075adcc(r4_1, r1, r2, guest::cpu()->r[3]);
    u32 zf_1 = r0_1 == 0;
    if (!zf_1) {
        r5 = *gptr<u32>(r0_1 + 0x17cu);  // (from the original)
    }
    u32 r6_1 = 0u;
    if (!zf_1) {
        zf_1 = r5 == 0;
    }
    if (!zf_1) {
        call_00135740(r4_1, guest::cpu()->r[1], guest::cpu()->r[2]);
        call_005b177c(frame.at(0).addr(), guest::cpu()->r[1], guest::cpu()->r[2]);
        call_005b1760(frame.at(0).addr(), r5, guest::cpu()->r[2]);
        u32 r0_5 = call_001597e0(frame.at(0).addr(), r2, guest::cpu()->r[2]);
        r6_1 = r0_5;
        call_00138998(frame.at(0).addr(), guest::cpu()->r[1], guest::cpu()->r[2]);
        call_00137e84(r4_1);
    }
    return r6_1;
}

}  // namespace d_0075bfc0
GUEST_EXPORT_FRAMED(0x0075bfc0, d_0075bfc0::f_0075bfc0, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_0075c348: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0075c348 {

struct __attribute__((packed)) Local_0075c348_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0075c348_ea_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_0075c348_ea_1, word_4, 0x4);  // (from the original)

inline constexpr guest::Function<0x00135740, u32(u32, u32, u32, u32)> call_00135740;  // (from the original)
inline constexpr guest::Function<0x00137e84, u32(u32)> call_00137e84;  // (from the original)
inline constexpr guest::Function<0x00138998, u32(u32, u32, u32, u32)> call_00138998;  // (from the original)
inline constexpr guest::Function<0x00159824, u32(u32, u32, u32, u32)> call_00159824;  // (from the original)
inline constexpr guest::Function<0x005b1760, u32(u32, u32, u32, u32)> call_005b1760;  // (from the original)
inline constexpr guest::Function<0x005b177c, u32(u32, u32, u32, u32)> call_005b177c;  // (from the original)
inline constexpr guest::Function<0x0075adcc, u32(u32, u32, u32, u32)> call_0075adcc;  // (from the original)

u32 f_0075c348(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 r7 = guest::cpu()->r[7];
    u32 r5_1 = r0 + 0x14u;  // (from the original)
    u32 r0_1 = call_0075adcc(r5_1, r2, r2, r3);
    u32 zf_1 = r0_1 == 0;
    if (!zf_1) {
        r7 = *gptr<u32>(r0_1 + 0x17cu);  // (from the original)
    }
    u32 r6_1 = 0u;
    if (!zf_1) {
        zf_1 = r7 == 0;
    }
    if (!zf_1) {
        call_00135740(r5_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
        call_005b177c(frame.at(0).addr(), guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
        call_005b1760(frame.at(0).addr(), r7, guest::cpu()->r[2], guest::cpu()->r[3]);
        u32 r0_5 = call_00159824(frame.at(0).addr(), r3, guest::cpu()->r[2], guest::cpu()->r[3]);
        r6_1 = r0_5;
        call_00138998(frame.at(0).addr(), guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
        call_00137e84(r5_1);
    }
    if (r6_1 != 0) {
        gptr<Local_0075c348_ea_1> ea_1 = gptr<Local_0075c348_ea_1>(r1 + 4u);
        ea_1->word_0 = r6_1;
        u32 r1_4 = ~0xc0000000u;  // (from the original)
        ea_1->word_4 = r1_4;
        guest::cpu()->r[1] = r1_4;
        return 1u;
    }
    *gptr<u32>(r1 + 4u) = 0x8906ec;  // (from the original)
    u32 r1_5 = ~0xc0000000u;  // (from the original)
    *gptr<u32>(r1 + 8u) = r1_5;
    guest::cpu()->r[1] = r1_5;
    return 0u;
}

}  // namespace d_0075c348
GUEST_EXPORT_FRAMED(0x0075c348, d_0075c348::f_0075c348, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_0075c4f8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0075c4f8 {

inline constexpr guest::Function<0x00135740, u32(u32, u32, u32)> call_00135740;  // (from the original)
inline constexpr guest::Function<0x00137e84, u32(u32)> call_00137e84;  // (from the original)
inline constexpr guest::Function<0x00138998, u32(u32, u32, u32)> call_00138998;  // (from the original)
inline constexpr guest::Function<0x00159824, u32(u32, u32, u32)> call_00159824;  // (from the original)
inline constexpr guest::Function<0x005b1760, u32(u32, u32, u32)> call_005b1760;  // (from the original)
inline constexpr guest::Function<0x005b177c, u32(u32, u32, u32)> call_005b177c;  // (from the original)
inline constexpr guest::Function<0x0075adcc, u32(u32, u32, u32, u32)> call_0075adcc;  // (from the original)

u32 f_0075c4f8(u32 r0, u32 r1, u32 r2) {
    guest::StackFrame frame(0xc);  // the original's stack frame
    u32 r5 = guest::cpu()->r[5];
    u32 r4_1 = r0 + 0x14u;  // (from the original)
    u32 r0_1 = call_0075adcc(r4_1, r1, r2, guest::cpu()->r[3]);
    u32 zf_1 = r0_1 == 0;
    if (!zf_1) {
        r5 = *gptr<u32>(r0_1 + 0x17cu);  // (from the original)
    }
    u32 r6_1 = 0u;
    if (!zf_1) {
        zf_1 = r5 == 0;
    }
    if (!zf_1) {
        call_00135740(r4_1, guest::cpu()->r[1], guest::cpu()->r[2]);
        call_005b177c(frame.at(0).addr(), guest::cpu()->r[1], guest::cpu()->r[2]);
        call_005b1760(frame.at(0).addr(), r5, guest::cpu()->r[2]);
        u32 r0_5 = call_00159824(frame.at(0).addr(), r2, guest::cpu()->r[2]);
        r6_1 = r0_5;
        call_00138998(frame.at(0).addr(), guest::cpu()->r[1], guest::cpu()->r[2]);
        call_00137e84(r4_1);
    }
    return r6_1;
}

}  // namespace d_0075c4f8
GUEST_EXPORT_FRAMED(0x0075c4f8, d_0075c4f8::f_0075c4f8, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_0075cd40: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0075cd40 {

struct __attribute__((packed)) Object_0075cd40_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_0075cd40_0, word_0, 0x0);  // (from the original)


void f_0075cd40(gptr<Object_0075cd40_0> arg0, gptr<MailWork__BodyLineEngine> arg1) {
    u32 r1_1 = arg1->word_4;
    arg0->word_0 = r1_1;
    guest::cpu()->r[1] = r1_1;
}

}  // namespace d_0075cd40
GUEST_EXPORT(0x0075cd40, d_0075cd40::f_0075cd40);

// f_0075cdbc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0075cdbc {

struct __attribute__((packed)) Object_0075cdbc_0 {
    u8 unknown_0[0x35c];  // (not used here)
    u32 word_35c;
};
GUEST_OFFSET(Object_0075cdbc_0, word_35c, 0x35c);  // (from the original)


u32 f_0075cdbc(gptr<Object_0075cdbc_0> arg0) {
    return arg0->word_35c + 0x20u;  // (from the original)
}

}  // namespace d_0075cdbc
GUEST_EXPORT(0x0075cdbc, d_0075cdbc::f_0075cdbc);

// f_0075ce78: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0075ce78 {

struct __attribute__((packed)) Object_0075ce78_0 {
    u8 unknown_0[0x35c];  // (not used here)
    u32 word_35c;
};
GUEST_OFFSET(Object_0075ce78_0, word_35c, 0x35c);  // (from the original)


u32 f_0075ce78(gptr<Object_0075ce78_0> arg0) {
    return *gptr<u32>(arg0->word_35c + 4u);
}

}  // namespace d_0075ce78
GUEST_EXPORT(0x0075ce78, d_0075ce78::f_0075ce78);

// f_0075cf18: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0075cf18 {

struct __attribute__((packed)) Object_0075cf18_0 {
    u8 unknown_0[0x4];  // (not used here)
    u8 byte_4;
    u8 unknown_5[0x1];  // (not used here)
    u8 byte_6;
};
GUEST_OFFSET(Object_0075cf18_0, byte_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_0075cf18_0, byte_6, 0x6);  // (from the original)


u32 f_0075cf18(gptr<Object_0075cf18_0> arg0) {
    u32 r1_1 = arg0->byte_4;
    u32 r0_1 = (r1_1 == 8u && arg0->byte_6 == 5u ? 1u : 0u) | ((r1_1 == 0 || r1_1 == 7u) ? 1u : 0u);
    guest::cpu()->r[1] = r1_1;
    return r0_1;
}

}  // namespace d_0075cf18
GUEST_EXPORT(0x0075cf18, d_0075cf18::f_0075cf18);

// f_0075cf7c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0075cf7c {

struct __attribute__((packed)) Object_0075cf7c_0 {
    u8 unknown_0[0x35c];  // (not used here)
    u32 word_35c;
};
GUEST_OFFSET(Object_0075cf7c_0, word_35c, 0x35c);  // (from the original)


u32 f_0075cf7c(gptr<Object_0075cf7c_0> arg0) {
    return *gptr<u32>(arg0->word_35c + 8u);
}

}  // namespace d_0075cf7c
GUEST_EXPORT(0x0075cf7c, d_0075cf7c::f_0075cf7c);

// f_0075d11c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0075d11c {

inline constexpr guest::Function<0x00159960, u32(u32, u32)> call_00159960;  // (from the original)

u32 f_0075d11c(u32 r0) {
    return call_00159960(r0 + 0x32cu, guest::cpu()->r[1]);  // (from the original)
}

}  // namespace d_0075d11c
GUEST_EXPORT(0x0075d11c, d_0075d11c::f_0075d11c);

// f_0075d2e0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0075d2e0 {

inline constexpr guest::Function<0x0060c5c4, u32(u32)> call_0060c5c4;  // (from the original)

void f_0075d2e0(u32 r0) {
    u32 r0_1 = call_0060c5c4(r0);
    float S0_1 = std::bit_cast<float>(*gptr<u32>(r0_1));
    guest::cpu()->s[0] = S0_1;
}

}  // namespace d_0075d2e0
GUEST_EXPORT_FRAMED(0x0075d2e0, d_0075d2e0::f_0075d2e0, 0x4010);  // pushes {r4, lr} first, as the original

// f_0075d4b0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0075d4b0 {

struct __attribute__((packed)) Object_0075d4b0_0 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
};
GUEST_OFFSET(Object_0075d4b0_0, word_4, 0x4);  // (from the original)

inline guest::global<u32, 0x008ae144> global_008ae144;  // (from the original)

u32 f_0075d4b0(gptr<Object_0075d4b0_0> arg0, gptr<Float3> arg1) {
    guest::StackFrame frame(0x4);  // the original's stack frame
    float S1_1 = std::bit_cast<float>(*global_008ae144);
    float S0_1 = std::bit_cast<float>(vcvt_sz_f(std::bit_cast<float>(arg0->word_4) * arg1->v[2] * S1_1));
    u32 r0_1 = std::bit_cast<u32>(S0_1);
    *frame.at<u16>(0) = u16(r0_1);
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    return uxth(r0_1);
}

}  // namespace d_0075d4b0
GUEST_EXPORT(0x0075d4b0, d_0075d4b0::f_0075d4b0);

// f_0075d4e8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0075d4e8 {

inline constexpr guest::Function<0x0060c5c4, u32(u32)> call_0060c5c4;  // (from the original)

u32 f_0075d4e8(u32 r0) {
    u32 r0_1 = call_0060c5c4(r0);
    float S0_1 = std::bit_cast<float>(*gptr<u32>(r0_1 + 4u));
    guest::cpu()->s[0] = S0_1;
    return r0_1;
}

}  // namespace d_0075d4e8
GUEST_EXPORT_FRAMED(0x0075d4e8, d_0075d4e8::f_0075d4e8, 0x4010);  // pushes {r4, lr} first, as the original

// f_0075d630: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0075d630 {

struct __attribute__((packed)) Object_0075d630_1 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u8 unknown_10[0x4];  // (not used here)
    u32 word_14;
    u32 word_18;
    u32 word_1c;
    u8 unknown_20[0x4];  // (not used here)
    u32 word_24;
    u32 word_28;
    u32 word_2c;
};
GUEST_OFFSET(Object_0075d630_1, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_0075d630_1, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_0075d630_1, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_0075d630_1, word_14, 0x14);  // (from the original)
GUEST_OFFSET(Object_0075d630_1, word_18, 0x18);  // (from the original)
GUEST_OFFSET(Object_0075d630_1, word_1c, 0x1c);  // (from the original)
GUEST_OFFSET(Object_0075d630_1, word_24, 0x24);  // (from the original)
GUEST_OFFSET(Object_0075d630_1, word_28, 0x28);  // (from the original)
GUEST_OFFSET(Object_0075d630_1, word_2c, 0x2c);  // (from the original)

inline guest::global<u32, 0x0085f2e8> global_0085f2e8;  // (from the original)
inline guest::global<u32, 0x0085f2ec> global_0085f2ec;  // (from the original)

void f_0075d630(gptr<GridTile> arg0, gptr<Object_0075d630_1> arg1) {
    arg1->word_4 = 0;
    arg1->word_8 = u32(arg0->corners[0]) << 0x1b >> 0x18;  // (from the original)
    arg1->word_c = 0;
    arg1->word_14 = *global_0085f2e8;
    arg1->word_18 = (u32(arg0->corners[0]) & 0x3e0u) >> 2;  // (from the original)
    u32 r3_1 = 0u - *global_0085f2ec;
    arg1->word_1c = r3_1;
    arg1->word_24 = 0u - *global_0085f2e8;
    arg1->word_28 = (u32(arg0->corners[0]) & 0x7c00u) >> 7;  // (from the original)
    arg1->word_2c = r3_1;
}

}  // namespace d_0075d630
GUEST_EXPORT(0x0075d630, d_0075d630::f_0075d630);

// f_0075d6a4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0075d6a4 {

struct __attribute__((packed)) Object_0075d6a4_1 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u8 unknown_10[0x4];  // (not used here)
    u32 word_14;
    u32 word_18;
    u32 word_1c;
    u8 unknown_20[0x4];  // (not used here)
    u32 word_24;
    u32 word_28;
    u32 word_2c;
};
GUEST_OFFSET(Object_0075d6a4_1, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_0075d6a4_1, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_0075d6a4_1, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_0075d6a4_1, word_14, 0x14);  // (from the original)
GUEST_OFFSET(Object_0075d6a4_1, word_18, 0x18);  // (from the original)
GUEST_OFFSET(Object_0075d6a4_1, word_1c, 0x1c);  // (from the original)
GUEST_OFFSET(Object_0075d6a4_1, word_24, 0x24);  // (from the original)
GUEST_OFFSET(Object_0075d6a4_1, word_28, 0x28);  // (from the original)
GUEST_OFFSET(Object_0075d6a4_1, word_2c, 0x2c);  // (from the original)

inline guest::global<u32, 0x0085f2e8> global_0085f2e8;  // (from the original)
inline guest::global<u32, 0x0085f2ec> global_0085f2ec;  // (from the original)

void f_0075d6a4(gptr<GridTile> arg0, gptr<Object_0075d6a4_1> arg1) {
    arg1->word_4 = 0;
    arg1->word_8 = u32(arg0->corners[2]) << 0x1b >> 0x18;  // (from the original)
    arg1->word_c = 0;
    arg1->word_14 = 0u - *global_0085f2e8;
    arg1->word_18 = (u32(arg0->corners[2]) & 0x3e0u) >> 2;  // (from the original)
    arg1->word_1c = *global_0085f2ec;
    arg1->word_24 = *global_0085f2e8;
    arg1->word_28 = (u32(arg0->corners[2]) & 0x7c00u) >> 7;  // (from the original)
    arg1->word_2c = *global_0085f2ec;
}

}  // namespace d_0075d6a4
GUEST_EXPORT(0x0075d6a4, d_0075d6a4::f_0075d6a4);

// f_0075d718: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0075d718 {

struct __attribute__((packed)) Object_0075d718_1 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u8 unknown_10[0x4];  // (not used here)
    u32 word_14;
    u32 word_18;
    u32 word_1c;
    u8 unknown_20[0x4];  // (not used here)
    u32 word_24;
    u32 word_28;
    u32 word_2c;
};
GUEST_OFFSET(Object_0075d718_1, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_0075d718_1, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_0075d718_1, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_0075d718_1, word_14, 0x14);  // (from the original)
GUEST_OFFSET(Object_0075d718_1, word_18, 0x18);  // (from the original)
GUEST_OFFSET(Object_0075d718_1, word_1c, 0x1c);  // (from the original)
GUEST_OFFSET(Object_0075d718_1, word_24, 0x24);  // (from the original)
GUEST_OFFSET(Object_0075d718_1, word_28, 0x28);  // (from the original)
GUEST_OFFSET(Object_0075d718_1, word_2c, 0x2c);  // (from the original)

inline guest::global<u32, 0x0085f2e8> global_0085f2e8;  // (from the original)
inline guest::global<u32, 0x0085f2ec> global_0085f2ec;  // (from the original)

void f_0075d718(gptr<GridTile> arg0, gptr<Object_0075d718_1> arg1) {
    arg1->word_4 = 0;
    arg1->word_8 = u32(arg0->corners[1]) << 0x1b >> 0x18;  // (from the original)
    arg1->word_c = 0;
    u32 r2_1 = 0u - *global_0085f2e8;
    arg1->word_14 = r2_1;
    arg1->word_18 = (u32(arg0->corners[1]) & 0x3e0u) >> 2;  // (from the original)
    u32 r12_1 = *global_0085f2ec;
    arg1->word_24 = r2_1;
    arg1->word_1c = 0u - r12_1;
    arg1->word_28 = (u32(arg0->corners[1]) & 0x7c00u) >> 7;  // (from the original)
    arg1->word_2c = *global_0085f2ec;
}

}  // namespace d_0075d718
GUEST_EXPORT(0x0075d718, d_0075d718::f_0075d718);

// f_0075d788: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0075d788 {

struct __attribute__((packed)) Object_0075d788_1 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u8 unknown_10[0x4];  // (not used here)
    u32 word_14;
    u32 word_18;
    u32 word_1c;
    u8 unknown_20[0x4];  // (not used here)
    u32 word_24;
    u32 word_28;
    u32 word_2c;
};
GUEST_OFFSET(Object_0075d788_1, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_0075d788_1, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_0075d788_1, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_0075d788_1, word_14, 0x14);  // (from the original)
GUEST_OFFSET(Object_0075d788_1, word_18, 0x18);  // (from the original)
GUEST_OFFSET(Object_0075d788_1, word_1c, 0x1c);  // (from the original)
GUEST_OFFSET(Object_0075d788_1, word_24, 0x24);  // (from the original)
GUEST_OFFSET(Object_0075d788_1, word_28, 0x28);  // (from the original)
GUEST_OFFSET(Object_0075d788_1, word_2c, 0x2c);  // (from the original)

inline guest::global<u32, 0x0085f2e8> global_0085f2e8;  // (from the original)
inline guest::global<u32, 0x0085f2ec> global_0085f2ec;  // (from the original)

void f_0075d788(gptr<GridTile> arg0, gptr<Object_0075d788_1> arg1) {
    arg1->word_4 = 0;
    arg1->word_8 = u32(arg0->corners[3]) << 0x1b >> 0x18;  // (from the original)
    arg1->word_c = 0;
    arg1->word_14 = *global_0085f2e8;
    arg1->word_18 = (u32(arg0->corners[3]) & 0x3e0u) >> 2;  // (from the original)
    arg1->word_1c = *global_0085f2ec;
    arg1->word_24 = *global_0085f2e8;
    arg1->word_28 = (u32(arg0->corners[3]) & 0x7c00u) >> 7;  // (from the original)
    arg1->word_2c = 0u - *global_0085f2ec;
}

}  // namespace d_0075d788
GUEST_EXPORT(0x0075d788, d_0075d788::f_0075d788);

// f_0075d898: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0075d898 {


u32 f_0075d898(u32 r0, u32 r1, u32 r2) {
    u32 r2_1 = r2 & 0xfu;  // (from the original)
    u32 r3_1 = r1 & 0xfu;  // (from the original)
    u32 r1_1 = r2_1 + (r2_1 << 2);
    u32 r0_1 = (u32(*gptr<u8>(r0 + (r1_1 << 5) + (r3_1 + (r3_1 << 2) << 1) + 0x25u)) & 0x80u) >> 7;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    return r0_1;
}

}  // namespace d_0075d898
GUEST_EXPORT(0x0075d898, d_0075d898::f_0075d898);

// f_0075d968: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0075d968 {


u32 f_0075d968(u32 r0, u32 r1) {
    if (r1 >= 2u) {
        guest::cpu()->r[1] = r1;
        return 0u;
    }
    u32 r1_1 = (r1 << 6) - (r1 + (r1 << 2));
    u32 r0_2 = *gptr<u32>((r0 + (r1_1 << 2) + 0x52cu) + 0xd0u);  // (from the original)
    guest::cpu()->r[1] = r1_1;
    return r0_2;
}

}  // namespace d_0075d968
GUEST_EXPORT(0x0075d968, d_0075d968::f_0075d968);

// f_0075d990: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0075d990 {

inline constexpr guest::Function<0x002f74c8, u32(u32)> call_002f74c8;  // (from the original)

u32 f_0075d990(u32 r0) {
    u32 r0_1 = call_002f74c8(r0);
    if (r0_1 != 0xa1u) {  // (from the original)
        if (r0_1 != 0xa2u) {  // (from the original)
            return 0u;
        }
        return *gptr<u32>(((r0 + 0x400u) + 0x218u) + 0xd0u);  // (from the original)
    }
    return *gptr<u32>(((r0 + 0x400u) + 0x12cu) + 0xd0u);  // (from the original)
}

}  // namespace d_0075d990
GUEST_EXPORT_FRAMED(0x0075d990, d_0075d990::f_0075d990, 0x4010);  // pushes {r4, lr} first, as the original

// f_0075db6c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0075db6c {


u32 f_0075db6c(u32 r0, u32 r1, u32 r2) {
    if (r1 >= 5u || r2 >= 4u) {
        return r0 + 0x5058u;  // (from the original)
    }
    return r0 + (r2 + (r2 << 2) << 8) + (r1 << 8) + 0x5058u;  // (from the original)
}

}  // namespace d_0075db6c
GUEST_EXPORT(0x0075db6c, d_0075db6c::f_0075db6c);

// f_0075dbc4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0075dbc4 {

struct __attribute__((packed)) Object_0075dbc4_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_0075dbc4_0, word_0, 0x0);  // (from the original)


u32 f_0075dbc4(gptr<Object_0075dbc4_0> arg0) {
    return arg0->word_0 & 1u;
}

}  // namespace d_0075dbc4
GUEST_EXPORT(0x0075dbc4, d_0075dbc4::f_0075dbc4);

// f_0075dc00: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0075dc00 {

struct __attribute__((packed)) Object_0075dc00_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_0075dc00_0, word_0, 0x0);  // (from the original)


u32 f_0075dc00(gptr<Object_0075dc00_0> arg0, u32 r1) {
    u32 r0_1 = arg0->word_0 & r1;
    if (r0_1 != 0) {
        r0_1 = 1u;
    }
    return r0_1;
}

}  // namespace d_0075dc00
GUEST_EXPORT(0x0075dc00, d_0075dc00::f_0075dc00);

// f_0075dc40: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0075dc40 {


u32 f_0075dc40(u32 r0) {
    u32 r1 = 0u;
    do {
        u32 r2_1 = *gptr<s8>(r0 + r1);
        u32 r3_1 = r2_1 - 0x30u;  // (from the original)
        u32 zf_1 = r3_1 == 9u;
        u32 cf_1 = r3_1 >= 9u;
        if (cf_1 && !zf_1) {
            u32 r3_2 = r2_1 - 0x61u;  // (from the original)
            zf_1 = r3_2 == 0x19u;  // (from the original)
            cf_1 = r3_2 >= 0x19u;  // (from the original)
        }
        if (cf_1 && !zf_1) {
            u32 r2_2 = r2_1 - 0x41u;  // (from the original)
            zf_1 = r2_2 == 0x19u;  // (from the original)
            cf_1 = r2_2 >= 0x19u;  // (from the original)
        }
        if (!!cf_1 && !zf_1) {
            guest::cpu()->r[1] = r1;
            return 0u;
        }
        r1 += 1u;
        guest::preempt();
    } while (r1 < 0x10u);  // (from the original)
    guest::cpu()->r[1] = r1;
    return 1u;
}

}  // namespace d_0075dc40
GUEST_EXPORT(0x0075dc40, d_0075dc40::f_0075dc40);

// f_0075de74: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0075de74 {

struct __attribute__((packed)) Object_0075de74_0 {
    u8 unknown_0[0x132ad];  // (not used here)
    u8 byte_132ad;
};
GUEST_OFFSET(Object_0075de74_0, byte_132ad, 0x132ad);  // (from the original)

inline constexpr guest::Function<0x0075e830, u32(u32, u32)> call_0075e830;  // (from the original)
inline constexpr guest::Function<0x0075e840, u32(u32, u32)> call_0075e840;  // (from the original)

u32 f_0075de74(gptr<Object_0075de74_0> arg0) {
    u32 r0_3 = 0;
    u32 r1_1 = s8(arg0->byte_132ad);
    if (r1_1 != 0) {
        r1_1 = 0x13268u;  // (from the original)
        u32 r4_1 = *gptr<u8>(r1_1 + arg0.addr());
        if (r4_1 < 4u) {
            u32 r0_1 = arg0.addr() + 0x1c1u;  // (from the original)
            u32 r0_2 = call_0075e830(r0_1, r4_1);
            r1_1 = guest::cpu()->r[1];
            if (r0_2 >= 0xa5u) {  // (from the original)
                return 0u;
            }
            r0_3 = call_0075e840(r0_1, r4_1);
            r1_1 = guest::cpu()->r[1];
            if (r0_3 == 0) {
                return r0_3;
            }
        }
    }
    guest::cpu()->r[1] = r1_1;
    return 1u;
}

}  // namespace d_0075de74
GUEST_EXPORT_FRAMED(0x0075de74, d_0075de74::f_0075de74, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0075dedc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0075dedc {


u32 f_0075dedc(u32 r0, u32 r1) {
    if (r1 >= 4u) {
        guest::cpu()->r[1] = r1;
        return 0u;
    }
    u32 r1_1 = r1 + (r1 << 5);
    u32 r1_2 = r1_1 + (r1_1 << 3);
    guest::cpu()->r[1] = r1_2;
    return r0 + 0x9db4u + (r1_2 << 5);  // (from the original)
}

}  // namespace d_0075dedc
GUEST_EXPORT(0x0075dedc, d_0075dedc::f_0075dedc);

// f_0075df00: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0075df00 {

struct __attribute__((packed)) Object_0075df00_1 {
    u32 word_0;
};
GUEST_OFFSET(Object_0075df00_1, word_0, 0x0);  // (from the original)

inline constexpr guest::Function<0x0075e9f8, u32(u32, u32)> call_0075e9f8;  // (from the original)

u32 f_0075df00(u32 r0, gptr<Object_0075df00_1> arg1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x4);  // the original's stack frame
    *frame.at<u32>(0) = r3;
    u32 r5_1 = *frame.at<u32>(0x20);  // (from the original)
    if (r2 < 4u && arg1.addr() != 0 && arg1->word_0 != 0) {
        u32 r0_2 = call_0075e9f8(r0 + 0x58u, r2);  // (from the original)
        *frame.at<u32>(0) = 0;
        if (r5_1 >= 0x1bu) {  // (from the original)
            r5_1 = 0x1bu;  // (from the original)
        }
        *frame.at<u8>(0) = u8(((r0_2 & 3u | u32(*frame.at<u8>(0)) & ~3u) & ~4u | 4u & r3 << 2) & ~0xf8u | 0xf8u & r5_1 << 3);  // (from the original)
        *frame.at<u8>(1) = u8(u32(*gptr<u8>(0x132a4u + (r0 + r2))));  // (from the original)
        u32 r1_1 = arg1->word_0;
        *gptr<u16>(r1_1) = u16(u32(*frame.at<u16>(0)));
        arg1->word_0 = r1_1 + 2u;
        return r0_2;
    }
    return 0u;
}

}  // namespace d_0075df00
GUEST_EXPORT_FRAMED(0x0075df00, d_0075df00::f_0075df00, 0x43f0);  // pushes {r4, r5, r6, r7, r8, r9, lr} first, as the original

// f_0075e124: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0075e124 {

inline guest::global<u32, 0x0095362c> global_0095362c;  // (from the original)
inline constexpr guest::Function<0x0030b6c4, u32(u32, u32)> call_0030b6c4;  // (from the original)
inline constexpr guest::Function<0x00625690, u32(u32, u32, u32, u32)> call_00625690;  // (from the original)
inline constexpr guest::Function<0x0075dfdc, u32(u32)> call_0075dfdc;  // (from the original)
inline constexpr guest::Function<0x0075e2fc, u32(u32, u32)> call_0075e2fc;  // (from the original)
inline constexpr guest::Function<0x0075e858, u32(u32, u32)> call_0075e858;  // (from the original)

u32 f_0075e124(u32 r0, u32 r1) {
    u32 r0_1 = call_00625690(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r1_1 = guest::cpu()->r[1];
    if (r0_1 > 1u) {
        u32 r0_2 = call_0030b6c4(r0_1, r1_1);
        r1_1 = guest::cpu()->r[1];
        if (r0_2 != 0) {
            u32 r4_1 = *global_0095362c + 0x1c0u;  // (from the original)
            u32 r0_3 = call_0075e2fc(r4_1, r1_1);
            r1_1 = guest::cpu()->r[1];
            if (r0_3 < 4u) {
                return 0u;
            }
            u32 r0_5 = call_0075e858(r4_1 + 1u, 0x8cu);  // (from the original)
            u32 r0_7 = call_0075dfdc(*global_0095362c);
            r1_1 = r0_7 - 1u;
            if (r0_5 != r1_1) {
                guest::cpu()->r[1] = r1_1;
                return 0u;
            }
            guest::cpu()->r[1] = r1_1;
            return 1u;
        }
        if (*gptr<u8>(r0) == 0x27u) {  // (from the original)
            guest::cpu()->r[1] = r1_1;
            return 1u;
        }
        guest::cpu()->r[1] = r1_1;
        return 0u;
    }
    guest::cpu()->r[1] = r1_1;
    return 1u;
}

}  // namespace d_0075e124
GUEST_EXPORT_FRAMED(0x0075e124, d_0075e124::f_0075e124, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0075e1e0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0075e1e0 {

inline constexpr guest::Function<0x00624038, u32(u32, u32)> call_00624038;  // (from the original)
inline constexpr guest::Function<0x0062624c, u32(u32, u32)> call_0062624c;  // (from the original)

u32 f_0075e1e0() {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 r0_1 = call_00624038(0u, 0u);
    u32 r1_1 = guest::cpu()->r[1];
    if (r0_1 == 0) {
        return ~0u;
    }
    frame.release();
    return call_0062624c(r0_1, r1_1);
}

}  // namespace d_0075e1e0
GUEST_EXPORT(0x0075e1e0, d_0075e1e0::f_0075e1e0);

// f_0075e208: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0075e208 {

struct __attribute__((packed)) Object_0075e208_0 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Object_0075e208_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_0075e208_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_0075e208_0, word_8, 0x8);  // (from the original)

struct __attribute__((packed)) Object_0075e208_1 {
    u32 word_0;
};
GUEST_OFFSET(Object_0075e208_1, word_0, 0x0);  // (from the original)


u32 f_0075e208(gptr<Object_0075e208_0> arg0, gptr<Object_0075e208_1> arg1) {
    u32 r1_1 = arg1->word_0;
    if (r1_1 == 0 || arg0->word_0 == r1_1) {
        guest::cpu()->r[1] = r1_1;
        return 1u;
    }
    if (arg0->word_4 != r1_1 && arg0->word_8 != r1_1) {
        guest::cpu()->r[1] = r1_1;
        return 0u;
    }
    guest::cpu()->r[1] = r1_1;
    return 1u;
}

}  // namespace d_0075e208
GUEST_EXPORT(0x0075e208, d_0075e208::f_0075e208);

// f_0075e23c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0075e23c {

struct __attribute__((packed)) Object_0075e23c_0 {
    u8 unknown_0[0x11ae0];  // (not used here)
    u32 word_11ae0;
};
GUEST_OFFSET(Object_0075e23c_0, word_11ae0, 0x11ae0);  // (from the original)


u32 f_0075e23c(gptr<Object_0075e23c_0> arg0) {
    return arg0->word_11ae0;
}

}  // namespace d_0075e23c
GUEST_EXPORT(0x0075e23c, d_0075e23c::f_0075e23c);

// f_0075e260: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0075e260 {


u32 f_0075e260(u32 r0, u32 r1) {
    u32 r1_1 = (r1 << 4) - r1 + (r1 << 5);
    guest::cpu()->r[1] = r1_1;
    return r0 + (r1_1 << 2) + 0x10u;  // (from the original)
}

}  // namespace d_0075e260
GUEST_EXPORT(0x0075e260, d_0075e260::f_0075e260);

// f_0075e2fc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0075e2fc {

inline guest::global<u32, 0x0095362c> global_0095362c;  // (from the original)
inline constexpr guest::Function<0x0075dfe8, u32(u32, u32, u32, u32)> call_0075dfe8;  // (from the original)
inline constexpr guest::Function<0x0075ea7c, u32(u32, u32)> call_0075ea7c;  // (from the original)

u32 f_0075e2fc(u32 r0, u32 r1) {
    u32 r4 = 0;
    u32 r5 = r0;
    u32 r0_2 = call_0075dfe8(*global_0095362c, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r1_1 = guest::cpu()->r[1];
    if (r0_2 == 0) {
        r4 = 0u;
    } else {
        return *gptr<u8>(r5 + 0xfu);  // (from the original)
    }
    do {
        u32 r6_1 = r4 & 0xffu;  // (from the original)
        u32 r0_5 = call_0075ea7c(r5 + 6u, r6_1);
        r1_1 = guest::cpu()->r[1];
        if (r0_5 == 0) {
            return r6_1;
        }
        r4 += 1u;
        guest::preempt();
    } while (s32(r4) < 4);
    guest::cpu()->r[1] = r1_1;
    return 4u;
}

}  // namespace d_0075e2fc
GUEST_EXPORT_FRAMED(0x0075e2fc, d_0075e2fc::f_0075e2fc, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0075e35c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0075e35c {

inline guest::global<u32, 0x0095362c> global_0095362c;  // (from the original)
inline constexpr guest::Function<0x0075dfdc, u32(u32)> call_0075dfdc;  // (from the original)
inline constexpr guest::Function<0x0075e858, u32(u32, u32, u32, u32)> call_0075e858;  // (from the original)

u32 f_0075e35c(u32 r0) {
    u32 r0_2 = call_0075e858(r0 + 1u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_4 = call_0075dfdc(*global_0095362c);
    return r0_2 == r0_4 ? 1u : 0u;
}

}  // namespace d_0075e35c
GUEST_EXPORT_FRAMED(0x0075e35c, d_0075e35c::f_0075e35c, 0x4010);  // pushes {r4, lr} first, as the original

// f_0075e38c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0075e38c {

inline constexpr guest::Function<0x0075dfe8, u32(u32, u32, u32, u32)> call_0075dfe8;  // (from the original)
inline constexpr guest::Function<0x0075ea44, u32(u32, u32)> call_0075ea44;  // (from the original)
inline constexpr guest::Function<0x0075ea7c, u32(u32, u32)> call_0075ea7c;  // (from the original)

u32 f_0075e38c(u32 r0, u32 r1) {
    guest::StackFrame frame(0x18);  // the original's stack frame
    u32 r4 = 0;
    u32 r6 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r0_6 = 0;
    u32 r5 = r0;
    u32 r7 = 0x95362cu;  // (from the original)
    u32 r0_2 = call_0075dfe8(*gptr<u32>(r7), r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0_2 == 0) {
        r4 = 0u;
        goto L_75e3dc;
    } else {
        r6 = *gptr<u8>(r5 + 0xfu);  // (from the original)
    }
L_75e3b0:;
    if (r6 >= 4u) {
        guest::cpu()->r[1] = r1;
        return 0xa5u;  // (from the original)
    }
    r0_3 = *gptr<u32>(r7);
    r0_4 = call_0075dfe8(r0_3, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0_4 != 0) {
        return *gptr<u8>(r5 + 0xeu);  // (from the original)
    }
    r0_6 = r5 + 6u;
    frame.release();
    return call_0075ea44(r0_6, r6);
L_75e3dc:;
    r6 = r4 & 0xffu;  // (from the original)
    u32 r0_8 = call_0075ea7c(r5 + 6u, r6);
    r1 = guest::cpu()->r[1];
    if (r0_8 == 0) {
        guest::preempt();
        goto L_75e3b0;
    }
    r4 += 1u;
    if (s32(r4) < 4) {
        guest::preempt();
        goto L_75e3dc;
    }
    return 0xa5u;  // (from the original)
}

}  // namespace d_0075e38c
GUEST_EXPORT(0x0075e38c, d_0075e38c::f_0075e38c);

// f_0075e448: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0075e448 {

inline guest::global<u32, 0x0095362c> global_0095362c;  // (from the original)
inline constexpr guest::Function<0x0075dfe8, u32(u32, u32, u32, u32)> call_0075dfe8;  // (from the original)
inline constexpr guest::Function<0x0075ea7c, u32(u32, u32)> call_0075ea7c;  // (from the original)

u32 f_0075e448(u32 r0, u32 r1) {
    u32 r4 = 0;
    u32 r5 = r0;
    u32 r0_2 = call_0075dfe8(*global_0095362c, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r1_1 = guest::cpu()->r[1];
    if (r0_2 == 0) {
        r4 = 0u;
    } else {
        return 0u;
    }
    do {
        u32 r0_4 = call_0075ea7c(r5 + 6u, r4 & 0xffu);  // (from the original)
        r1_1 = guest::cpu()->r[1];
        if (r0_4 < 4u) {
            return 1u;
        }
        r4 += 1u;
        guest::preempt();
    } while (s32(r4) < 4);
    guest::cpu()->r[1] = r1_1;
    return 0u;
}

}  // namespace d_0075e448
GUEST_EXPORT_FRAMED(0x0075e448, d_0075e448::f_0075e448, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0075e4a0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0075e4a0 {

struct __attribute__((packed)) Local_0075e4a0_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0075e4a0_ea_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_0075e4a0_ea_1, word_4, 0x4);  // (from the original)

inline guest::global<u32, 0x0095362c> global_0095362c;  // (from the original)
inline constexpr guest::Function<0x00135748, u32(u32)> call_00135748;  // (from the original)
inline constexpr guest::Function<0x001357ec, u32(u32, u32)> call_001357ec;  // (from the original)
inline constexpr guest::Function<0x00625678, u32(u32, u32, u32, u32)> call_00625678;  // (from the original)
inline constexpr guest::Function<0x00747660, u32(u32, u32)> call_00747660;  // (from the original)
inline constexpr guest::Function<0x0075e978, u32(u32, u32)> call_0075e978;  // (from the original)
inline constexpr guest::Function<0x0075f1f8, u32(u32, u32, u32)> call_0075f1f8;  // (from the original)

u32 f_0075e4a0(u32 r0, u32 r1, u32 r2) {
    guest::StackFrame frame(0xc);  // the original's stack frame
    u32 r0_1 = call_00625678(r1, r1, r2, guest::cpu()->r[3]);
    u32 r1_1 = guest::cpu()->r[1];
    if (r0_1 != 0) {
        *frame.at<u32>(4) = 0;
        *frame.at<u32>(8) = 0;
        call_0075f1f8(*global_0095362c + 0xb0u, frame.at(0).addr(), r1);  // (from the original)
        r1_1 = guest::cpu()->r[1];
        u32 r5_1 = ~0u;
        if (*gptr<u8>(0x42aau + r0) != 0) {  // (from the original)
            if (*frame.at<u32>(0) == 0) {
                gptr<Local_0075e4a0_ea_1> ea_1 = gptr<Local_0075e4a0_ea_1>(frame.at(4).addr());
                r1_1 = ea_1->word_4;
                if ((ea_1->word_0 | r1_1) == 0) {
                    goto L_75e564;
                }
            }
            call_00135748(r0);
            u32 r0_4 = call_0075e978(r0 + 0x3860u, r0_1 + 4u);  // (from the original)
            u32 r1_3 = guest::cpu()->r[1];
            r5_1 = r0_4;
            if (r5_1 >> 0x1f == (r0_4 & (r0_4 ^ r5_1)) >> 0x1f) {  // (from the original)
                u32 r0_6 = call_00747660(r0 + (r5_1 + (r5_1 << 1) << 2) + 0x38e4u, frame.at(0).addr());  // (from the original)
                r1_3 = guest::cpu()->r[1];
                if (r0_6 != 0) {
                    r5_1 = ~0u;
                }
            }
            call_001357ec(r0, r1_3);
            r1_1 = guest::cpu()->r[1];
        }
L_75e564:;
        r0_1 = u32(s32(r5_1) >> 0x1f) + 1u;  // (from the original)
    }
    guest::cpu()->r[1] = r1_1;
    return r0_1;
}

}  // namespace d_0075e4a0
GUEST_EXPORT_FRAMED(0x0075e4a0, d_0075e4a0::f_0075e4a0, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_0075e57c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0075e57c {

struct __attribute__((packed)) Object_0075e57c_1 {
    u32 word_0;
};
GUEST_OFFSET(Object_0075e57c_1, word_0, 0x0);  // (from the original)

struct __attribute__((packed)) Local_0075e57c_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0075e57c_ea_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_0075e57c_ea_1, word_4, 0x4);  // (from the original)

inline guest::global<u32, 0x009529cc> global_009529cc;  // (from the original)
inline constexpr guest::Function<0x00135748, u32(u32)> call_00135748;  // (from the original)
inline constexpr guest::Function<0x001357ec, u32(u32, u32)> call_001357ec;  // (from the original)
inline constexpr guest::Function<0x001aa4a0, u32(u32, u32, u32, u32)> call_001aa4a0;  // (from the original)
inline constexpr guest::Function<0x00747660, u32(u32, u32)> call_00747660;  // (from the original)
inline constexpr guest::Function<0x0075e978, u32(u32, u32)> call_0075e978;  // (from the original)

u32 f_0075e57c(u32 r0, gptr<Object_0075e57c_1> arg1, u32 r2) {
    guest::StackFrame frame(0xc);  // the original's stack frame
    *frame.at<u32>(4) = 0;
    *frame.at<u32>(8) = 0;
    *frame.at<u32>(0) = arg1->word_0;
    call_001aa4a0(*global_009529cc, arg1.addr(), frame.at(4).addr(), guest::cpu()->r[3]);
    u32 r1_1 = guest::cpu()->r[1];
    u32 r5_1 = ~0u;
    if (*gptr<u8>(0x42aau + r0) != 0) {  // (from the original)
        if (*frame.at<u32>(0) == 0) {
            gptr<Local_0075e57c_ea_1> ea_1 = gptr<Local_0075e57c_ea_1>(frame.at(4).addr());
            r1_1 = ea_1->word_4;
            if ((ea_1->word_0 | r1_1) == 0) {
                guest::cpu()->r[1] = r1_1;
                return r5_1;
            }
        }
        call_00135748(r0);
        u32 r0_3 = call_0075e978(r0 + 0x3860u, r2);  // (from the original)
        u32 r1_2 = guest::cpu()->r[1];
        r5_1 = r0_3;
        if (r5_1 >> 0x1f == (r0_3 & (r0_3 ^ r5_1)) >> 0x1f) {  // (from the original)
            u32 r0_5 = call_00747660(r0 + (r5_1 + (r5_1 << 1) << 2) + 0x38e4u, frame.at(0).addr());  // (from the original)
            r1_2 = guest::cpu()->r[1];
            if (r0_5 != 0) {
                r5_1 = ~0u;
            }
        }
        call_001357ec(r0, r1_2);
        r1_1 = guest::cpu()->r[1];
    }
    guest::cpu()->r[1] = r1_1;
    return r5_1;
}

}  // namespace d_0075e57c
GUEST_EXPORT_FRAMED(0x0075e57c, d_0075e57c::f_0075e57c, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_0075e7ac: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0075e7ac {

inline guest::global<u32, 0x0095362c> global_0095362c;  // (from the original)
inline constexpr guest::Function<0x00135740, u32(u32, u32)> call_00135740;  // (from the original)
inline constexpr guest::Function<0x00137e84, u32(u32, u32)> call_00137e84;  // (from the original)

u32 f_0075e7ac(u32 r0, u32 r1) {
    u32 r0_1 = 0;
    if (r1 >= 4u) {
        r0_1 = 0u;
    } else {
        u32 r0_2 = *global_0095362c + 0x13280u;  // (from the original)
        call_00135740(r0_2, r1);
        u32 r5_1 = *gptr<u8>(r0 + r1 + 0x24u);  // (from the original)
        call_00137e84(r0_2, guest::cpu()->r[1]);
        r0_1 = r5_1;
    }
    return r0_1;
}

}  // namespace d_0075e7ac
GUEST_EXPORT_FRAMED(0x0075e7ac, d_0075e7ac::f_0075e7ac, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0075e978: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0075e978 {

struct __attribute__((packed)) Object_0075e978_1 {
    u16 half_0;
    u16 half_2;
};
GUEST_OFFSET(Object_0075e978_1, half_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_0075e978_1, half_2, 0x2);  // (from the original)

struct __attribute__((packed)) Local_0075e978_r12 {
    u16 half_0;
};
GUEST_OFFSET(Local_0075e978_r12, half_0, 0x0);  // (from the original)


u32 f_0075e978(u32 r0, gptr<Object_0075e978_1> arg1) {
    u32 r1 = arg1.addr();
    u32 r5 = guest::cpu()->r[5];
    gptr<Local_0075e978_r12> r12 = gptr<Local_0075e978_r12>(0x88f298u);  // (from the original)
    u32 r2 = r0;
    u32 r4 = arg1->half_0;
    u32 zf_1 = r4 == r12->half_0;
    if (!zf_1) {
        r5 = arg1->half_2;
        zf_1 = r5 == 0;
    }
    if (zf_1) {
        guest::cpu()->r[1] = r1;
        return ~0u;
    } else {
        r0 = 0u;
    }
    do {
        r1 = r2 + (r0 << 2);
        u32 r3_1 = *gptr<u16>(r1);
        u32 zf_2 = r3_1 == r12->half_0;
        if (!zf_2) {
            r1 = *gptr<u16>(r1 + 2u);
            zf_2 = r1 == 0;
        }
        if (!zf_2 && r3_1 == r4 && r1 == r5) {
            guest::cpu()->r[1] = r1;
            return r0;
        }
        r0 += 1u;
        guest::preempt();
    } while (r0 < 0x20u);  // (from the original)
    guest::cpu()->r[1] = r1;
    return ~0u;
}

}  // namespace d_0075e978
GUEST_EXPORT_FRAMED(0x0075e978, d_0075e978::f_0075e978, 0x70);  // pushes {r4, r5, r6} first, as the original

// f_0075ef68: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0075ef68 {

struct __attribute__((packed)) Object_0075ef68_0 {
    u8 unknown_0[0x8];  // (not used here)
    u32 word_8;
    u32 word_c;
    u32 word_10;
};
GUEST_OFFSET(Object_0075ef68_0, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_0075ef68_0, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_0075ef68_0, word_10, 0x10);  // (from the original)

inline constexpr guest::Function<0x007475e0, u32(u32, u32)> call_007475e0;  // (from the original)

u32 f_0075ef68(gptr<Object_0075ef68_0> arg0) {
    u32 r1_1 = arg0->word_c ^ ~0u | arg0->word_8 ^ ~2u;
    if (r1_1 == 0) {
        guest::cpu()->r[1] = r1_1;
        return 0u;
    }
    u32 r0_1 = arg0->word_10;
    if (r0_1 == 0) {
        guest::cpu()->r[1] = r1_1;
        return 1u;
    }
    return call_007475e0(r0_1, r1_1);
}

}  // namespace d_0075ef68
GUEST_EXPORT(0x0075ef68, d_0075ef68::f_0075ef68);

// f_0075efdc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0075efdc {


u32 f_0075efdc(u32 r0, u32 r1) {
    return r1 >= 4u ? 0u : *gptr<u32>(r0 + (r1 << 2) + 0x1cu);  // (from the original)
}

}  // namespace d_0075efdc
GUEST_EXPORT(0x0075efdc, d_0075efdc::f_0075efdc);

// f_0075f020: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0075f020 {

inline constexpr guest::Function<0x0075f0b0, u32(u32, u32)> call_0075f0b0;  // (from the original)

u32 f_0075f020(u32 r0, u32 r1) {
    u32 r0_1 = call_0075f0b0(r0, r1);
    u32 r1_1 = guest::cpu()->r[1];
    if (r0_1 == 0) {
        u32 r0_2 = *gptr<u8>(r0 + 8u);
        r1_1 = lsl_r(1u, r1 & 0xff);  // (from the original)
        if (r0_2 != 0 && r1 < 6u) {
            u32 r2_1 = r1_1 & 0xffu;  // (from the original)
            if ((r2_1 & 0x3fu) != 0 && (r2_1 & r0_2) != 0 && (r0_2 & 0x80u) >> 7 == 1u) {  // (from the original)
                guest::cpu()->r[1] = r1_1;
                return 1u;
            }
        }
        if (r0_2 != 0 && r1 < 6u) {
            r1_1 &= 0xffu;  // (from the original)
            if ((r1_1 & 0x3fu) != 0 && (r1_1 & r0_2) != 0) {  // (from the original)
                if (((r0_2 & 0x80u) >> 7) == 0) {  // (from the original)
                    guest::cpu()->r[1] = r1_1;
                    return 1u;
                }
            }
        }
        guest::cpu()->r[1] = r1_1;
        return 0u;
    }
    guest::cpu()->r[1] = r1_1;
    return 1u;
}

}  // namespace d_0075f020
GUEST_EXPORT_FRAMED(0x0075f020, d_0075f020::f_0075f020, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_0075f0b0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0075f0b0 {


u32 f_0075f0b0(u32 r0, u32 r1) {
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r0_1 = 0;
    if (r1 >= 6u) {
        guest::cpu()->r[1] = r1;
        return 0u;
    }
    u32 r5 = 1u;
    u32 r6 = lsl_r(r5, r1 & 0xff);  // (from the original)
    u32 r12 = r6 & 0xffu;  // (from the original)
    if ((r12 & 0x3fu) == 0) {  // (from the original)
        guest::cpu()->r[1] = r1;
        return 0u;
    } else {
        r2 = r0;
        r3 = 0u;
    }
L_75f0d8:;
    if (r12 != (u32(*gptr<u8>(r2)) & 0x7fu)) {  // (from the original)
        goto L_75f10c;
    }
    r0_1 = (u32(*gptr<u8>(r2)) & 0x80u) >> 7 ^ 1u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0_1;
L_75f10c:;
    r3 += 1u;
    u32 res_1 = r3 - 8u;
    r2 += 1u;
    if (res_1 >> 0x1f == ((r3 ^ 8u) & (r3 ^ res_1)) >> 0x1f) {  // (from the original)
        u32 r2_1 = *gptr<u8>(r0 + 8u);
        if (r2_1 != 0 && (r2_1 & 0x7fu) == r12) {  // (from the original)
            guest::cpu()->r[1] = r1;
            return (r2_1 & 0x80u) >> 7 ^ 1u;  // (from the original)
        }
        if (r1 < 6u) {
            r1 = r6 & 0xffu;  // (from the original)
            if ((r1 & 0x3fu) != 0 && (u32(*gptr<u8>(r0 + 9u)) & r1) != 0) {  // (from the original)
                guest::cpu()->r[1] = r1;
                return r5;
            }
        }
        guest::cpu()->r[1] = r1;
        return 0u;
    }
    guest::preempt();
    goto L_75f0d8;
}

}  // namespace d_0075f0b0
GUEST_EXPORT_FRAMED(0x0075f0b0, d_0075f0b0::f_0075f0b0, 0x70);  // pushes {r4, r5, r6} first, as the original

// f_0075f17c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0075f17c {

struct __attribute__((packed)) Object_0075f17c_0 {
    u8 unknown_0[0x8];  // (not used here)
    u8 byte_8;
};
GUEST_OFFSET(Object_0075f17c_0, byte_8, 0x8);  // (from the original)


u32 f_0075f17c(gptr<Object_0075f17c_0> arg0, u32 r1, u32 r2) {
    u32 r0_1 = arg0->byte_8;
    if (r0_1 == 0) {
        return r0_1;
    }
    if (r1 >= 6u) {
        guest::cpu()->r[1] = r1;
        return 0u;
    }
    u32 r1_1 = lsl_r(1u, r1 & 0xff) & 0xffu;  // (from the original)
    if ((r1_1 & 0x3fu) == 0 || (r1_1 & r0_1) == 0) {  // (from the original)
        guest::cpu()->r[1] = r1_1;
        return 0u;
    }
    if ((r0_1 & 0x80u) >> 7 == r2) {  // (from the original)
        guest::cpu()->r[1] = r1_1;
        return 1u;
    }
    guest::cpu()->r[1] = r1_1;
    return 0u;
}

}  // namespace d_0075f17c
GUEST_EXPORT(0x0075f17c, d_0075f17c::f_0075f17c);

// f_0075f34c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0075f34c {

struct __attribute__((packed)) Local_0075f34c_r2_1 {
    u8 unknown_0[0x10];  // (not used here)
    u32 word_10;
    u32 word_14;
};
GUEST_OFFSET(Local_0075f34c_r2_1, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Local_0075f34c_r2_1, word_14, 0x14);  // (from the original)

inline constexpr guest::Function<0x003081b4, u32(u32, u32, u32, u32)> call_003081b4;  // (from the original)

u32 f_0075f34c(u32 r0, u32 r1) {
    guest::StackFrame frame(0xc);  // the original's stack frame
    u32 r1_1 = 0;
    u32 r5 = r0;
    u32 r6 = r1;
    u32 r4 = 0u;
    u32 r7 = frame.at(0).addr();
    do {
        u32 r3_1 = r6 + (r4 << 3);
        *frame.at<u32>(0) = 0;
        *frame.at<u32>(4) = 0;
        call_003081b4(r7, r3_1, 0u, r3_1);
        gptr<Local_0075f34c_r2_1> r2_1 = gptr<Local_0075f34c_r2_1>(r5 + (r4 + (r4 << 1) << 3));
        r1_1 = *frame.at<u32>(0) ^ r2_1->word_10;
        if ((*frame.at<u32>(4) ^ r2_1->word_14 | r1_1) != 0) {
            guest::cpu()->r[1] = r1_1;
            return 0u;
        }
        r4 += 1u;
        guest::preempt();
    } while (s32(r4) < 4);
    guest::cpu()->r[1] = r1_1;
    return 1u;
}

}  // namespace d_0075f34c
GUEST_EXPORT_FRAMED(0x0075f34c, d_0075f34c::f_0075f34c, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_0075f448: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0075f448 {

inline guest::global<u32, 0x0095362c> global_0095362c;  // (from the original)
inline constexpr guest::Function<0x00135740, u32(u32, u32)> call_00135740;  // (from the original)
inline constexpr guest::Function<0x00137e84, u32(u32, u32)> call_00137e84;  // (from the original)
inline constexpr guest::Function<0x0075ef68, u32(u32, u32)> call_0075ef68;  // (from the original)

u32 f_0075f448(u32 r0, u32 r1) {
    u32 r0_1 = *global_0095362c + 0x13280u;  // (from the original)
    call_00135740(r0_1, r1);
    u32 r1_1 = guest::cpu()->r[1];
    if (r1 < 4u) {
        u32 r0_2 = r0 + (r1 + (r1 << 1) << 3) + 8u;
        if (r0_2 != 0) {
            u32 r0_3 = call_0075ef68(r0_2, r1_1);
            call_00137e84(r0_1, guest::cpu()->r[1]);
            return r0_3;
        }
    }
    call_00137e84(r0_1, r1_1);
    return 0u;
}

}  // namespace d_0075f448
GUEST_EXPORT_FRAMED(0x0075f448, d_0075f448::f_0075f448, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0075f578: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0075f578 {

inline constexpr guest::Function<0x00746e74, u32(u32)> call_00746e74;  // (from the original)
inline constexpr guest::Function<0x0075f3cc, u32(u32, u32)> call_0075f3cc;  // (from the original)

u32 f_0075f578(u32 r0) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 r0_1 = call_00746e74(0xa22020u);  // (from the original)
    if ((*gptr<u32>(r0_1) ^ ~2u | *gptr<u32>(r0_1 + 4) ^ ~0u) == 0) {
        guest::cpu()->r[1] = r0_1;
        return 4u;
    }
    frame.release();
    return call_0075f3cc(r0, r0_1);
}

}  // namespace d_0075f578
GUEST_EXPORT(0x0075f578, d_0075f578::f_0075f578);

// f_0075f644: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0075f644 {

struct __attribute__((packed)) Local_0075f644_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0075f644_ea_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_0075f644_ea_1, word_4, 0x4);  // (from the original)

struct __attribute__((packed)) Local_0075f644_r5_1 {
    u8 unknown_0[0x8];  // (not used here)
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Local_0075f644_r5_1, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Local_0075f644_r5_1, word_c, 0xc);  // (from the original)

struct __attribute__((packed)) Local_0075f644_r5_2 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0075f644_r5_2, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_0075f644_r5_2, word_4, 0x4);  // (from the original)

inline guest::global<u32, 0x0095362c> global_0095362c;  // (from the original)
inline constexpr guest::Function<0x00135740, u32(u32, u32, u32, u32)> call_00135740;  // (from the original)
inline constexpr guest::Function<0x00137e84, u32(u32, u32)> call_00137e84;  // (from the original)
inline constexpr guest::Function<0x00746e74, u32(u32)> call_00746e74;  // (from the original)
inline constexpr guest::Function<0x00746e90, u32(u32, u32)> call_00746e90;  // (from the original)

u32 f_0075f644(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0xc);  // the original's stack frame
    gptr<Local_0075f644_r5_1> r5_1 = gptr<Local_0075f644_r5_1>(0u);
    u32 r0_1 = *global_0095362c + 0x13280u;  // (from the original)
    call_00135740(r0_1, r1, r2, r3);
    u32 r1_1 = guest::cpu()->r[1];
    if (r1 < 4u) {
        r5_1 = gptr<Local_0075f644_r5_1>(r0 + (r1 + (r1 << 1) << 3) + 8u);
        if (r5_1.addr() != 0) {
            r1_1 = r5_1->word_8 ^ ~2u;
            if ((r5_1->word_c ^ ~0u | r1_1) != 0) {
                if (r2 == 0) {
                    goto L_75f6f0;
                }
                gptr<Local_0075f644_ea_1> ea_1 = gptr<Local_0075f644_ea_1>(r5_1.addr() + 8u);
                u32 r1_2 = ea_1->word_4;
                *frame.at<u32>(0) = ea_1->word_0;
                *frame.at<u32>(4) = r1_2;
                u32 r0_2 = call_00746e74(0xa22020u);  // (from the original)
                r1_1 = *frame.at<u32>(0);
                if ((*gptr<u32>(r0_2 + 4u) ^ *frame.at<u32>(4) | *gptr<u32>(r0_2) ^ r1_1) != 0) {
                    goto L_75f6f0;
                }
            }
        }
    }
    call_00137e84(r0_1, r1_1);
    return 0u;
L_75f6f0:;
    gptr<Local_0075f644_r5_2> r5_2 = gptr<Local_0075f644_r5_2>(r5_1.addr() + 8u);
    u32 r2_1 = r5_2->word_4;
    *frame.at<u32>(0) = r5_2->word_0;
    *frame.at<u32>(4) = r2_1;
    u32 r0_3 = call_00746e90(0xa22020u, frame.at(0).addr());  // (from the original)
    call_00137e84(r0_1, guest::cpu()->r[1]);
    return r0_3;
}

}  // namespace d_0075f644
GUEST_EXPORT_FRAMED(0x0075f644, d_0075f644::f_0075f644, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_0075f728: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0075f728 {

struct __attribute__((packed)) Object_0075f728_0 {
    u8 unknown_0[0x3eb];  // (not used here)
    u8 byte_3eb;
    u8 byte_3ec;
};
GUEST_OFFSET(Object_0075f728_0, byte_3eb, 0x3eb);  // (from the original)
GUEST_OFFSET(Object_0075f728_0, byte_3ec, 0x3ec);  // (from the original)

inline guest::global<u32, 0x0095362c> global_0095362c;  // (from the original)
inline constexpr guest::Function<0x00300904, u32(u32, u32)> call_00300904;  // (from the original)
inline constexpr guest::Function<0x0075f020, u32(u32, u32)> call_0075f020;  // (from the original)

u32 f_0075f728(gptr<Object_0075f728_0> arg0) {
    u32 r0_1 = arg0.addr() + 0x300u;  // (from the original)
    u32 r1_1 = arg0->byte_3ec;
    u32 zf_1 = r1_1 == 0;
    if (zf_1) {
        r0_1 = arg0->byte_3eb;
        zf_1 = r0_1 == 0;
    }
    if (zf_1) {
        guest::cpu()->r[1] = r1_1;
        return 0u;
    }
    u32 r0_2 = call_00300904(r0_1, r1_1);
    if (r0_2 != 0) {
        return 0u;
    }
    u32 r0_4 = call_0075f020(*global_0095362c + 0x7874u, 0u);  // (from the original)
    if (r0_4 == 0) {
        return 1u;
    }
    return 0u;
}

}  // namespace d_0075f728
GUEST_EXPORT_FRAMED(0x0075f728, d_0075f728::f_0075f728, 0x4010);  // pushes {r4, lr} first, as the original

// f_0075f780: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0075f780 {

inline constexpr guest::Function<0x00135748, u32(u32)> call_00135748;  // (from the original)
inline constexpr guest::Function<0x001357ec, u32(u32)> call_001357ec;  // (from the original)

u32 f_0075f780(u32 r0) {
    u32 r5_1 = r0 + 0x28u;  // (from the original)
    call_00135748(r5_1);
    u32 r4_1 = *gptr<u32>(r0 + 0x24u);  // (from the original)
    call_001357ec(r5_1);
    return r4_1;
}

}  // namespace d_0075f780
GUEST_EXPORT_FRAMED(0x0075f780, d_0075f780::f_0075f780, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original
