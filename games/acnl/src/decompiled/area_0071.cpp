// Functions decompiled by tools/decomp (docs/decomp.md), each proved equal to the recompiled original (prove-cpp). The
// names are generated (d_<address>::f_<address>, Object_<address>_<argument>, word_<offset>) and still to be chosen.
#include "guest/guest.hpp"
#include "graphics/hemisphere_light.hpp"
#include "recovered/structs.hpp"
#include "search/search_cand_core.hpp"

#include <bit>

using guest::gptr;

// f_00710614: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00710614 {


u32 f_00710614(u32 r0, u32 r1) {
    u32 r1_1 = r1 * 5u;
    guest::cpu()->r[1] = r1_1;
    return r0 + (r1_1 << 7);
}

}  // namespace d_00710614
GUEST_EXPORT(0x00710614, d_00710614::f_00710614);

// f_007108c4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_007108c4 {

inline constexpr guest::Function<0x002fb328, u32(u32, u32, u32, u32)> call_002fb328;
inline constexpr guest::Function<0x007111b4, u32(u32)> call_007111b4;

u32 f_007108c4(u32 r0, u32 r1) {
    u32 r0_1 = call_002fb328(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_2 = u32(*gptr<u8>(r0_1 + 0x621d0u)) & 1u;  // (from the original)
    if (r0_2 == 0) {
        guest::cpu()->r[1] = 0x6214fu;  // (from the original)
        return r0_2;
    }
    u32 r0_3 = call_002fb328(r0_2, 0x6214fu, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_4 = *gptr<u8>(r0_3 + 0x62264u);  // (from the original)
    if (r0_4 != 3u) {
        return 0u;
    }
    u32 r0_5 = call_002fb328(r0_4, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_7 = call_007111b4(r0_5 + 0x62250u);  // (from the original)
    return r0_7 == 0;
}

}  // namespace d_007108c4
GUEST_EXPORT_FRAMED(0x007108c4, d_007108c4::f_007108c4, 0x4010);  // pushes {r4, lr} first, as the original

// f_0071109c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0071109c {

inline constexpr guest::Function<0x0056c0e4, u32(u32, u32, u32, u32)> call_0056c0e4;
inline constexpr guest::Function<0x00710d50, u32(u32, u32, u32, u32)> call_00710d50;

u32 f_0071109c(u32 r0) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 r0_1 = call_0056c0e4(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0_1 != 0) {
        return 0u;
    }
    frame.release();
    return call_00710d50(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0071109c
GUEST_EXPORT(0x0071109c, d_0071109c::f_0071109c);

// f_007110c4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_007110c4 {

struct __attribute__((packed)) Object_007110c4_0 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Object_007110c4_0, word_0, 0x0);
GUEST_OFFSET(Object_007110c4_0, word_4, 0x4);

struct __attribute__((packed)) Local_007110c4_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_007110c4_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_007110c4_ea_1, word_4, 0x4);
GUEST_OFFSET(Local_007110c4_ea_1, word_8, 0x8);

struct __attribute__((packed)) Local_007110c4_ea_2 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_007110c4_ea_2, word_0, 0x0);
GUEST_OFFSET(Local_007110c4_ea_2, word_4, 0x4);
GUEST_OFFSET(Local_007110c4_ea_2, word_8, 0x8);

inline constexpr guest::Function<0x002fb338, u32(u32, u32, u32, u32)> call_002fb338;
inline constexpr guest::Function<0x00300650, u32(u32)> call_00300650;
inline constexpr guest::Function<0x003036dc, u32(u32, u32, u32, u32)> call_003036dc;

struct __attribute__((packed)) Frame_007110c4 {
    u32 word_0;
    u32 word_4;
    u8 unknown_8[0x18];  // (not read or written by name)
};
GUEST_OFFSET(Frame_007110c4, word_0, 0x0);
GUEST_OFFSET(Frame_007110c4, word_4, 0x4);
GUEST_SIZE(Frame_007110c4, 0x20);

u32 f_007110c4(gptr<Object_007110c4_0> arg0, u32 r1_unused, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_007110c4> frame;  // the original's stack frame
    u32 r1_1 = arg0->word_4;
    frame->word_0 = arg0->word_0;
    frame->word_4 = r1_1;
    u32 r0_2 = call_002fb338(frame.at(0).addr(), r1_1, r2, r3);
    if (r0_2 == 0) {
        return r0_2;
    }
    call_00300650(frame.at(0x14).addr());  // (from the original)
    gptr<Local_007110c4_ea_1> ea_1 = gptr<Local_007110c4_ea_1>(frame.at(0x14).addr());  // (from the original)
    u32 r0_4 = ea_1->word_0;
    u32 r1_3 = ea_1->word_4;
    u32 r2_2 = ea_1->word_8;
    gptr<Local_007110c4_ea_2> ea_2 = gptr<Local_007110c4_ea_2>(frame.at(8).addr());
    ea_2->word_0 = r0_4;
    ea_2->word_4 = r1_3;
    ea_2->word_8 = r2_2;
    u32 r1_4 = arg0->word_4;
    frame->word_0 = arg0->word_0;
    frame->word_4 = r1_4;
    u32 r0_6 = call_003036dc(frame.at(0).addr(), frame.at(8).addr(), 1u, 1u);
    if (r0_6 != 1u) {
        r0_6 = 0u;
    }
    return r0_6;
}

}  // namespace d_007110c4
GUEST_EXPORT_FRAMED(0x007110c4, d_007110c4::f_007110c4, 0x4010);  // pushes {r4, lr} first, as the original

// f_0071112c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0071112c {

struct __attribute__((packed)) Object_0071112c_0 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Object_0071112c_0, word_0, 0x0);
GUEST_OFFSET(Object_0071112c_0, word_4, 0x4);

struct __attribute__((packed)) Local_0071112c_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_0071112c_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_0071112c_ea_1, word_4, 0x4);
GUEST_OFFSET(Local_0071112c_ea_1, word_8, 0x8);

struct __attribute__((packed)) Local_0071112c_ea_2 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_0071112c_ea_2, word_0, 0x0);
GUEST_OFFSET(Local_0071112c_ea_2, word_4, 0x4);
GUEST_OFFSET(Local_0071112c_ea_2, word_8, 0x8);

inline constexpr guest::Function<0x002fb338, u32(u32, u32, u32, u32)> call_002fb338;
inline constexpr guest::Function<0x00300650, u32(u32)> call_00300650;
inline constexpr guest::Function<0x003036dc, u32(u32, u32, u32, u32)> call_003036dc;

struct __attribute__((packed)) Frame_0071112c {
    u32 word_0;
    u32 word_4;
    u8 unknown_8[0x18];  // (not read or written by name)
};
GUEST_OFFSET(Frame_0071112c, word_0, 0x0);
GUEST_OFFSET(Frame_0071112c, word_4, 0x4);
GUEST_SIZE(Frame_0071112c, 0x20);

u32 f_0071112c(gptr<Object_0071112c_0> arg0, u32 r1_unused, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_0071112c> frame;  // the original's stack frame
    u32 r1_1 = arg0->word_4;
    frame->word_0 = arg0->word_0;
    frame->word_4 = r1_1;
    u32 r0_2 = call_002fb338(frame.at(0).addr(), r1_1, r2, r3);
    if (r0_2 == 0) {
        return r0_2;
    }
    call_00300650(frame.at(0x14).addr());  // (from the original)
    gptr<Local_0071112c_ea_1> ea_1 = gptr<Local_0071112c_ea_1>(frame.at(0x14).addr());  // (from the original)
    u32 r0_4 = ea_1->word_0;
    u32 r1_3 = ea_1->word_4;
    u32 r2_2 = ea_1->word_8;
    gptr<Local_0071112c_ea_2> ea_2 = gptr<Local_0071112c_ea_2>(frame.at(8).addr());
    ea_2->word_0 = r0_4;
    ea_2->word_4 = r1_3;
    ea_2->word_8 = r2_2;
    u32 r1_4 = arg0->word_4;
    frame->word_0 = arg0->word_0;
    frame->word_4 = r1_4;
    u32 r0_6 = call_003036dc(frame.at(0).addr(), frame.at(8).addr(), 1u, 1u);
    return r0_6 + 1u == 0;
}

}  // namespace d_0071112c
GUEST_EXPORT_FRAMED(0x0071112c, d_0071112c::f_0071112c, 0x4010);  // pushes {r4, lr} first, as the original

// f_007111b4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_007111b4 {

struct __attribute__((packed)) Object_007111b4_0 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Object_007111b4_0, word_0, 0x0);
GUEST_OFFSET(Object_007111b4_0, word_4, 0x4);

struct __attribute__((packed)) Local_007111b4_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_007111b4_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_007111b4_ea_1, word_4, 0x4);
GUEST_OFFSET(Local_007111b4_ea_1, word_8, 0x8);

struct __attribute__((packed)) Local_007111b4_ea_2 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_007111b4_ea_2, word_0, 0x0);
GUEST_OFFSET(Local_007111b4_ea_2, word_4, 0x4);
GUEST_OFFSET(Local_007111b4_ea_2, word_8, 0x8);

inline constexpr guest::Function<0x002fb338, u32(u32, u32, u32, u32)> call_002fb338;
inline constexpr guest::Function<0x00300650, u32(u32)> call_00300650;
inline constexpr guest::Function<0x003036dc, u32(u32, u32, u32, u32)> call_003036dc;

struct __attribute__((packed)) Frame_007111b4 {
    u32 word_0;
    u32 word_4;
    u8 unknown_8[0x18];  // (not read or written by name)
};
GUEST_OFFSET(Frame_007111b4, word_0, 0x0);
GUEST_OFFSET(Frame_007111b4, word_4, 0x4);
GUEST_SIZE(Frame_007111b4, 0x20);

u32 f_007111b4(gptr<Object_007111b4_0> arg0, u32 r1_unused, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_007111b4> frame;  // the original's stack frame
    u32 r1_1 = arg0->word_4;
    frame->word_0 = arg0->word_0;
    frame->word_4 = r1_1;
    u32 r0_2 = call_002fb338(frame.at(0).addr(), r1_1, r2, r3);
    if (r0_2 == 0) {
        return r0_2;
    }
    call_00300650(frame.at(0x14).addr());  // (from the original)
    gptr<Local_007111b4_ea_1> ea_1 = gptr<Local_007111b4_ea_1>(frame.at(0x14).addr());  // (from the original)
    u32 r0_4 = ea_1->word_0;
    u32 r1_3 = ea_1->word_4;
    u32 r2_2 = ea_1->word_8;
    gptr<Local_007111b4_ea_2> ea_2 = gptr<Local_007111b4_ea_2>(frame.at(8).addr());
    ea_2->word_0 = r0_4;
    ea_2->word_4 = r1_3;
    ea_2->word_8 = r2_2;
    u32 r1_4 = arg0->word_4;
    frame->word_0 = arg0->word_0;
    frame->word_4 = r1_4;
    u32 r0_6 = call_003036dc(frame.at(0).addr(), frame.at(8).addr(), 1u, 1u);
    return r0_6 == 0;
}

}  // namespace d_007111b4
GUEST_EXPORT_FRAMED(0x007111b4, d_007111b4::f_007111b4, 0x4010);  // pushes {r4, lr} first, as the original

// f_007112c8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_007112c8 {

inline guest::global<u32, 0x00aaf14c> global_00aaf14c;
inline constexpr guest::Function<0x002fb338, u32(u32)> call_002fb338;
inline constexpr guest::Function<0x0031703c, u32(u32)> call_0031703c;
inline constexpr guest::Function<0x0056c0e4, u32(u32)> call_0056c0e4;
inline constexpr guest::Function<0x00710d50, u32(u32)> call_00710d50;
inline constexpr guest::Function<0x007111b4, u32(u32, u32, u32, u32)> call_007111b4;
inline constexpr guest::Function<0x007596ac, u32(u32, u32)> call_007596ac;

u32 f_007112c8(u32 r0, u32 r1) {
    u32 r0_10 = 0;
    u32 r0_1 = call_007111b4(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0_1 == 0) {
        u32 r0_2 = call_0056c0e4(r0_1);
        if (r0_2 == 0) {
            u32 r0_3 = call_00710d50(r0);
            if (r0_3 != 0) {
                u32 r0_4 = *global_00aaf14c;
                if (r0_4 != 0) {
                    if (!((u32(*gptr<u8>(r0_4 + 0x5701u)) << 0x1e) >> 0x1f)) {  // (from the original)
                        return 0u;
                    }
                }
                u32 r0_6 = call_002fb338(r0 + 8u);
                if (r0_6 != 0) {
                    u32 r0_8 = call_007596ac(r0 + 8u, 1u);
                    if (r0_8 != 0) {
                        r0_10 = call_0031703c(r0 + 8u);
                        if (r0_10 == 1u) {
                            return r0_10;
                        }
                    }
                }
            }
        }
    }
    return 0u;
}

}  // namespace d_007112c8
GUEST_EXPORT_FRAMED(0x007112c8, d_007112c8::f_007112c8, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_00711858: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00711858 {

inline guest::global<u32, 0x00aaf14c> global_00aaf14c;
inline constexpr guest::Function<0x0056c0e4, u32(u32)> call_0056c0e4;
inline constexpr guest::Function<0x00710d50, u32(u32)> call_00710d50;
inline constexpr guest::Function<0x007111b4, u32(u32, u32, u32, u32)> call_007111b4;

u32 f_00711858(u32 r0) {
    u32 r0_1 = call_007111b4(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0_1 != 0) {
        return 0u;
    }
    u32 r0_2 = call_0056c0e4(r0_1);
    if (r0_2 != 0) {
        return 0u;
    }
    u32 r0_3 = call_00710d50(r0);
    if (r0_3 == 0) {
        return 0u;
    }
    u32 r0_4 = *global_00aaf14c;
    if (r0_4 == 0 || u32(*gptr<u8>(r0_4 + 0x5701u)) & 2u) {  // (from the original)
        return 1u;
    }
    return 0u;
}

}  // namespace d_00711858
GUEST_EXPORT_FRAMED(0x00711858, d_00711858::f_00711858, 0x4010);  // pushes {r4, lr} first, as the original

// f_00711bdc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00711bdc {

inline constexpr guest::Function<0x006c5c60, u32(u32, u32, u32, u32)> call_006c5c60;

u32 f_00711bdc(u32 r0) {
    return call_006c5c60(r0 + 0x6cu, 0u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
}

}  // namespace d_00711bdc
GUEST_EXPORT(0x00711bdc, d_00711bdc::f_00711bdc);

// f_00711d9c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00711d9c {


u32 f_00711d9c(u32 r0_unused, u32 r1) {
    u32 r0_1 = 0x986a10u;  // (from the original)
    if (r1 < 5u) {
        r0_1 += (r1 << 4);
    }
    return r0_1;
}

}  // namespace d_00711d9c
GUEST_EXPORT(0x00711d9c, d_00711d9c::f_00711d9c);

// f_0071262c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0071262c {

struct __attribute__((packed)) Object_0071262c_0 {
    u8 unknown_0[0x5];  // (not used here)
    u8 byte_5;
};
GUEST_OFFSET(Object_0071262c_0, byte_5, 0x5);

inline constexpr guest::Function<0x00305f44, u32(u32)> call_00305f44;
inline constexpr guest::Function<0x0061a7a0, u32(u32, u32)> call_0061a7a0;

u32 f_0071262c(gptr<Object_0071262c_0> arg0) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 r0_1 = call_00305f44(arg0.addr());
    u32 r0_2 = arg0->byte_5;
    u32 r2_1 = r0_2 & 7u;
    if (1u == r0_2 >> 6 || 3u == r0_2 >> 6) {
        guest::cpu()->r[1] = r0_1;
        return 0u;
    }
    if (2u == r0_2 >> 6 || r2_1 == r0_1) {
        guest::cpu()->r[1] = r0_1;
        return 1u;
    }
    if (r2_1 == 4u) {
        frame.release();
        return call_0061a7a0(r0_2, r0_1);
    }
    guest::cpu()->r[1] = r0_1;
    return 0u;
}

}  // namespace d_0071262c
GUEST_EXPORT(0x0071262c, d_0071262c::f_0071262c);

// f_0071268c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0071268c {

struct __attribute__((packed)) Object_0071268c_0 {
    u8 unknown_0[0xc];  // (not used here)
    u32 word_c;
    u32 word_10;
};
GUEST_OFFSET(Object_0071268c_0, word_c, 0xc);
GUEST_OFFSET(Object_0071268c_0, word_10, 0x10);

inline guest::global<u32, 0x00887784> global_00887784;
inline guest::global<u32, 0x00887788> global_00887788;

u32 f_0071268c(gptr<Object_0071268c_0> arg0) {
    u32 r3_1 = arg0->word_c;
    u32 r2_1 = *global_00887784;
    u32 r1_1 = *global_00887788;
    if (r3_1 != r2_1) {
        guest::cpu()->r[1] = r1_1;
        return 0u;
    }
    if (r3_1 == 0 && ((arg0->word_10 | r1_1) & 1u) == 0) {
        guest::cpu()->r[1] = r1_1;
        return 1u;
    }
    if (arg0->word_10 != r1_1) {
        guest::cpu()->r[1] = r1_1;
        return 0u;
    }
    guest::cpu()->r[1] = r1_1;
    return 1u;
}

}  // namespace d_0071268c
GUEST_EXPORT(0x0071268c, d_0071268c::f_0071268c);

// f_007126dc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_007126dc {

struct __attribute__((packed)) Object_007126dc_0 {
    u8 unknown_0[0xc];  // (not used here)
    u32 word_c;
    u32 word_10;
};
GUEST_OFFSET(Object_007126dc_0, word_c, 0xc);
GUEST_OFFSET(Object_007126dc_0, word_10, 0x10);

inline guest::global<u32, 0x00887794> global_00887794;
inline guest::global<u32, 0x00887798> global_00887798;
inline guest::global<u32, 0x008877a4> global_008877a4;
inline guest::global<u32, 0x008877a8> global_008877a8;

u32 f_007126dc(gptr<Object_007126dc_0> arg0) {
    u32 r4_1 = 0;
    u32 r3_1 = arg0->word_c;
    u32 r1_1 = *global_008877a8;
    if (r3_1 == *global_008877a4) {
        if ((r3_1 != 0 || ((arg0->word_10 | r1_1) & 1u) != 0) && arg0->word_10 != r1_1) {
            goto L_712724;
        }
        r4_1 = 1u;
        goto L_712728;
    }
L_712724:;
    r4_1 = 0u;
L_712728:;
    u32 r1_2 = *global_00887798;
    if (r3_1 == *global_00887794) {
        if ((r3_1 != 0 || ((arg0->word_10 | r1_2) & 1u) != 0) && arg0->word_10 != r1_2) {
            guest::cpu()->r[1] = r1_2;
            return r4_1;
        }
        guest::cpu()->r[1] = r1_2;
        return 1u | r4_1;
    }
    guest::cpu()->r[1] = r1_2;
    return r4_1;
}

}  // namespace d_007126dc
GUEST_EXPORT_FRAMED(0x007126dc, d_007126dc::f_007126dc, 0x10);  // pushes {r4} first, as the original

// f_00712788: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00712788 {


u32 f_00712788(u32 r0, u32 r1) {
    return r1 == 0x400u ? r0 + 0xa4u : r0 + 0x144u;  // (from the original)
}

}  // namespace d_00712788
GUEST_EXPORT(0x00712788, d_00712788::f_00712788);

// f_00712798: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00712798 {

inline constexpr guest::Function<0x0073682c, u32(u32)> call_0073682c;
inline constexpr guest::Function<0x0077a650, u32(u32)> call_0077a650;

u32 f_00712798(u32 r0, float S0) {
    call_0073682c(r0);
    float S0_1 = guest::cpu()->s[0];
    float S0_2 = 0.5f + S0_1 * 400.0f;
    guest::cpu()->s[0] = S0_2;
    guest::cpu()->s[1] = S0_1;
    call_0077a650(r0);
    float S0_3 = guest::cpu()->s[0];
    float S0_4 = std::bit_cast<float>(vcvt_sz_f(S0_3));
    guest::cpu()->s[0] = S0_4;
    return std::bit_cast<u32>(S0_4);
}

}  // namespace d_00712798
GUEST_EXPORT_FRAMED(0x00712798, d_00712798::f_00712798, 0x4010);  // pushes {r4, lr} first, as the original

// f_007127c8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_007127c8 {


u32 f_007127c8(u32 r0, u32 r1) {
    return r1 == 0x400u ? r0 + 0x64u : r0 + 0x104u;  // (from the original)
}

}  // namespace d_007127c8
GUEST_EXPORT(0x007127c8, d_007127c8::f_007127c8);

// f_007127d8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_007127d8 {


u32 f_007127d8(u32 r0, u32 r1) {
    return r1 == 0x400u ? r0 + 0xd4u : r0 + 0x174u;  // (from the original)
}

}  // namespace d_007127d8
GUEST_EXPORT(0x007127d8, d_007127d8::f_007127d8);

// f_00712800: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00712800 {

inline constexpr guest::Function<0x00718378, u32(u32)> call_00718378;

u32 f_00712800(u32 r0) {
    u32 r0_1 = call_00718378(r0);
    return r0_1 ^ 1u;
}

}  // namespace d_00712800
GUEST_EXPORT_FRAMED(0x00712800, d_00712800::f_00712800, 0x4010);  // pushes {r4, lr} first, as the original

// f_00712810: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00712810 {


u32 f_00712810(u32 r0, u32 r1) {
    if (r1 >= 6u) {
        return 0u;
    }
    u32 r0_1 = u32(*gptr<u8>(r0 + (r1 >> 3) + 0x28u)) & 1u << (r1 & 7u);  // (from the original)
    if (r0_1 != 0) {
        r0_1 = 1u;
    }
    return r0_1;
}

}  // namespace d_00712810
GUEST_EXPORT(0x00712810, d_00712810::f_00712810);

// f_0071287c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0071287c {


u32 f_0071287c(u32 r0) {
    u32 r1 = r0 + 0x5460u;  // (from the original)
    if (r0 >= r1) {
        guest::cpu()->r[1] = r1;
        return 0u;
    }
    do {
        if (*gptr<u8>(r0 + 0x86cu) != 0) {  // (from the original)
            guest::cpu()->r[1] = r1;
            return 1u;
        }
        r0 += 0x870u;  // (from the original)
        guest::preempt();
    } while (r0 < r1);
    guest::cpu()->r[1] = r1;
    return 0u;
}

}  // namespace d_0071287c
GUEST_EXPORT(0x0071287c, d_0071287c::f_0071287c);

// f_00712c88: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00712c88 {

inline constexpr u32 vtable_script__WordFix_9u_ = 0x0090a3e8u;
inline constexpr guest::Function<0x002f825c, u32(u32, u32)> call_002f825c;
inline constexpr guest::Function<0x003083bc, u32(u32, u32, u32, u32)> call_003083bc;
inline constexpr guest::Function<0x0056d488, u32(u32, u32, u32)> call_0056d488;
inline constexpr guest::Function<0x005f4bfc, u32(u32)> call_005f4bfc;
inline constexpr guest::Function<0x0075b8b0, u32(u32, u32)> call_0075b8b0;

struct __attribute__((packed)) Frame_00712c88 {
    u32 word_0;
    u8 unknown_4[0x28];  // (not read or written by name)
    u32 word_2c;
    u8 unknown_30[0x2c];  // (not read or written by name)
};
GUEST_OFFSET(Frame_00712c88, word_0, 0x0);
GUEST_OFFSET(Frame_00712c88, word_2c, 0x2c);
GUEST_SIZE(Frame_00712c88, 0x5c);

u32 f_00712c88(u32 r0, u32 r1) {
    guest::StackFrameOf<Frame_00712c88> frame;  // the original's stack frame
    u32 res_1 = 0;
    u32 res_2 = 0;
    u32 r7 = r0;
    u32 r6 = r1;
    u32 r0_1 = frame.at(0).addr();
    u32 r9 = 0u;
    call_003083bc(r0_1, frame.at(0x18).addr(), 9u, guest::cpu()->r[3]);  // (from the original)
    u32 r5 = vtable_script__WordFix_9u_;
    *gptr<u32>(r0_1) = r5;
    u32 r0_2 = r0_1 + 0xcu;  // (from the original)
    call_005f4bfc(r0_2);
    u32 r4 = r0_2 - 0xcu;  // (from the original)
    call_002f825c(r0_2 + 0xcu, 0x12u);  // (from the original)
    u32 r8 = 0x8906ecu;  // (from the original)
    r0 = r4 + 0x18u;  // (from the original)
    *gptr<u16>(r4 + 0x18u) = u16(u32(*gptr<u16>(r8)));  // (from the original)
    r1 = 4u;
    do {
        u32 r2_3 = *gptr<u16>(r8);
        res_1 = r1 - 1u;
        r1 = res_1;
        *gptr<u16>(r0 + 2u) = u16(r2_3);
        u32 r2_4 = *gptr<u16>(r8);
        u32 ea_2 = r0 + 4u;
        *gptr<u16>(ea_2) = u16(r2_4);
        r0 = ea_2;
        guest::preempt();
    } while (res_1 != 0);
    call_0056d488(r4, r7, r9);
    u32 r0_4 = frame.at(0x2c).addr();  // (from the original)
    r7 = 0u;
    call_003083bc(r0_4, frame.at(0x44).addr(), 9u, guest::cpu()->r[3]);  // (from the original)
    *gptr<u32>(r0_4) = r5;
    u32 r0_5 = r0_4 + 0xcu;  // (from the original)
    call_005f4bfc(r0_5);
    r4 = r0_5 - 0xcu;  // (from the original)
    call_002f825c(r0_5 + 0xcu, 0x12u);  // (from the original)
    r0 = r4 + 0x18u;  // (from the original)
    *gptr<u16>(r4 + 0x18u) = u16(u32(*gptr<u16>(r8)));  // (from the original)
    r1 = 4u;
    do {
        u32 r2_7 = *gptr<u16>(r8);
        res_2 = r1 - 1u;
        r1 = res_2;
        *gptr<u16>(r0 + 2u) = u16(r2_7);
        u32 r2_8 = *gptr<u16>(r8);
        u32 ea_4 = r0 + 4u;
        *gptr<u16>(ea_4) = u16(r2_8);
        r0 = ea_4;
        guest::preempt();
    } while (res_2 != 0);
    call_0056d488(r4, r6, r7);
    u32 r0_8 = call_0075b8b0(frame.at(0).addr(), frame.at(0x2c).addr());  // (from the original)
    frame->word_2c = r5;
    frame->word_0 = r5;
    return r0_8;
}

}  // namespace d_00712c88
GUEST_EXPORT_FRAMED(0x00712c88, d_00712c88::f_00712c88, 0x43f0);  // pushes {r4, r5, r6, r7, r8, r9, lr} first, as the original

// f_007132e4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_007132e4 {

inline constexpr guest::Function<0x002fb328, u32(u32)> call_002fb328;
inline constexpr guest::Function<0x002fb378, u32(u32)> call_002fb378;
inline constexpr guest::Function<0x0056c0e4, u32(u32, u32, u32, u32)> call_0056c0e4;
inline constexpr guest::Function<0x00758de4, u32(u32)> call_00758de4;
inline constexpr guest::Function<0x00758e08, u32(u32)> call_00758e08;

u32 f_007132e4(u32 r0) {
    u32 r0_1 = call_0056c0e4(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0_1 != 0) {
        return 0u;
    }
    u32 r0_2 = call_002fb378(r0_1);
    u32 r4_1 = *gptr<u32>(r0_2 + 4u);
    u32 r0_3 = call_002fb328(r0_2);
    u32 r0_5 = call_00758de4(r0_3 + 0x62250u);  // (from the original)
    if (r0_5 != 0) {
        if (u32(s32(r4_1) >> 0x18) - 7u < 0xeu) {  // (from the original)
            return 1u;
        }
        return 0u;
    }
    u32 r0_6 = call_002fb328(r0_5);
    u32 r0_8 = call_00758e08(r0_6 + 0x62250u);  // (from the original)
    u32 zf_1 = r0_8 == 0;
    u32 r0_9 = u32(s32(r4_1) >> 0x18) - 0xau;  // (from the original)
    if (!zf_1) {
        if (r0_9 < 0xeu) {  // (from the original)
            return 1u;
        }
        return 0u;
    }
    if (r0_9 < 0xbu) {  // (from the original)
        return 1u;
    }
    return 0u;
}

}  // namespace d_007132e4
GUEST_EXPORT_FRAMED(0x007132e4, d_007132e4::f_007132e4, 0x4010);  // pushes {r4, lr} first, as the original

// f_0071348c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0071348c {

inline constexpr guest::Function<0x00718c0c, u32(u32, u32)> call_00718c0c;
inline constexpr guest::Function<0x0071ecc4, u32(u32, u32, u32, u32)> call_0071ecc4;
inline constexpr guest::Function<0x0071ecf0, u32(u32, u32)> call_0071ecf0;
inline constexpr guest::Function<0x00724400, u32(u32, u32, u32, u32)> call_00724400;

u32 f_0071348c(u32 r0, u32 r1) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 r0_2 = call_0071ecc4(r0 + 0x4cu, r1, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    if (r0_2 != 0) {
        frame.release();
        return call_0071ecf0(r0 + 0x4cu, r1);  // (from the original)
    }
    u32 r0_5 = call_00718c0c(r0 + 0x3cf4u, r1);  // (from the original)
    if (r0_5 == 0) {
    } else {
        frame.release();
        return call_00724400(r0 + 0x3cf4u, r1, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    }
    return 0x95bfdcu;  // (from the original)
}

}  // namespace d_0071348c
GUEST_EXPORT(0x0071348c, d_0071348c::f_0071348c);

// f_00713bf0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00713bf0 {

struct __attribute__((packed)) Object_00713bf0_0 {
    u8 unknown_0[0x20];  // (not used here)
    u32 word_20;
    u32 word_24;
    u32 word_28;
    u32 word_2c;
    u8 unknown_30[0x24];  // (not used here)
    u8 byte_54;
};
GUEST_OFFSET(Object_00713bf0_0, word_20, 0x20);
GUEST_OFFSET(Object_00713bf0_0, word_24, 0x24);
GUEST_OFFSET(Object_00713bf0_0, word_28, 0x28);
GUEST_OFFSET(Object_00713bf0_0, word_2c, 0x2c);
GUEST_OFFSET(Object_00713bf0_0, byte_54, 0x54);


u32 f_00713bf0(gptr<Object_00713bf0_0> arg0) {
    u32 r1_1 = arg0->byte_54;
    u32 r2_1 = arg0->word_2c;
    if (s32(r1_1 + 1u) >= s32(r2_1)) {
        guest::cpu()->r[1] = r1_1;
        return 0xffu;  // (from the original)
    }
    if (r2_1 <= r1_1 + 1u) {
        u32 r0_2 = *gptr<u8>(arg0->word_20);
        guest::cpu()->r[1] = r1_1 + 1u;
        return r0_2;
    }
    u32 r2_2 = arg0->word_24;
    u32 r1_3 = r1_1 + 1u + arg0->word_28;
    if (s32(r2_2) <= s32(r1_3)) {
        r1_3 -= r2_2;
    }
    u32 r0_4 = *gptr<u8>(arg0->word_20 + r1_3);
    guest::cpu()->r[1] = r1_3;
    return r0_4;
}

}  // namespace d_00713bf0
GUEST_EXPORT(0x00713bf0, d_00713bf0::f_00713bf0);

// f_00713d94: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00713d94 {

inline guest::global<u32, 0x0094d004> global_0094d004;
inline constexpr guest::Function<0x0070eb60, u32(u32, u32)> call_0070eb60;
inline constexpr guest::Function<0x0070eb8c, u32(u32, u32)> call_0070eb8c;
inline constexpr guest::Function<0x0070ebb8, u32(u32, u32)> call_0070ebb8;

u32 f_00713d94(u32 r0_unused, u32 r1, u32 r2) {
    if (r1 == 0) {
        guest::cpu()->r[1] = r1;
        return 0u;
    }
    if (r1 == 4u || r1 == 5u) {
        guest::cpu()->r[1] = r1;
        return 0x20u;  // (from the original)
    }
    u32 r3_1 = 0u;
    if (r2 != 0xffu) {  // (from the original)
        r3_1 = r2 & 0x7fu;  // (from the original)
    }
    u32 r0_1 = *global_0094d004;
    if (r1 == 1u) {
        return call_0070eb8c(r0_1, r3_1);
    }
    if (r1 == 2u) {
        return call_0070eb60(r0_1, r3_1);
    }
    if (r1 == 3u) {
        return call_0070ebb8(r0_1, r3_1);
    }
    guest::cpu()->r[1] = r1;
    return 0u;
}

}  // namespace d_00713d94
GUEST_EXPORT(0x00713d94, d_00713d94::f_00713d94);

// f_00714934: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00714934 {

struct __attribute__((packed)) Object_00714934_0 {
    u8 unknown_0[0x11];  // (not used here)
    u8 byte_11;
};
GUEST_OFFSET(Object_00714934_0, byte_11, 0x11);

struct __attribute__((packed)) Local_00714934_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_00714934_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_00714934_ea_1, word_4, 0x4);

struct __attribute__((packed)) Local_00714934_r3_4 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_00714934_r3_4, word_0, 0x0);
GUEST_OFFSET(Local_00714934_r3_4, word_4, 0x4);

struct __attribute__((packed)) Local_00714934_r3_5 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_00714934_r3_5, word_0, 0x0);
GUEST_OFFSET(Local_00714934_r3_5, word_4, 0x4);

inline constexpr guest::Function<0x002fe7cc, u32(u32, u32, u32, u32)> call_002fe7cc;
inline constexpr guest::Function<0x0052ed04, u32(u32, u32, u32, u32)> call_0052ed04;
inline constexpr guest::Function<0x0052edfc, u32(u32, u32, u32, u32)> call_0052edfc;
inline constexpr guest::Function<0x0052f144, u32(u32, u32, u32, u32)> call_0052f144;
inline constexpr guest::Function<0x005cdfe8, u32(u32, u32)> call_005cdfe8;
inline constexpr guest::Function<0x005ce13c, u32(u32, u32, u32, u32)> call_005ce13c;
inline constexpr guest::Function<0x0060d20c, u32(u32, u32, u32)> call_0060d20c;
inline constexpr guest::Function<0x00748164, u32(u32, u32, u32, u32)> call_00748164;
inline constexpr guest::Function<0x007481ec, u32(u32, u32)> call_007481ec;
inline constexpr guest::Function<0x0074824c, u32(u32, u32)> call_0074824c;
inline constexpr guest::Function<0x00748284, u32(u32, u32)> call_00748284;
inline constexpr guest::Function<0x0075291c, u32(u32, u32, u32, u32)> call_0075291c;
inline constexpr guest::Function<0x0075d608, u32(u32, u32, u32, u32)> call_0075d608;

struct __attribute__((packed)) Frame_00714934 {
    u8 byte_0;
    u8 byte_1;
    u8 byte_2;
    u8 byte_3;
    u8 unknown_4[0x4];  // (not read or written by name)
    u8 byte_8;
    u8 byte_9;
    u8 byte_a;
    u8 byte_b;
    u8 unknown_c[0x34];  // (not read or written by name)
    u8 byte_40;
    u8 unknown_41[0x3];  // (not read or written by name)
    u32 word_44;
    u8 unknown_48[0x10];  // (not read or written by name)
    u8 byte_58;
    u8 unknown_59[0x7];  // (not read or written by name)
};
GUEST_OFFSET(Frame_00714934, byte_0, 0x0);
GUEST_OFFSET(Frame_00714934, byte_1, 0x1);
GUEST_OFFSET(Frame_00714934, byte_2, 0x2);
GUEST_OFFSET(Frame_00714934, byte_3, 0x3);
GUEST_OFFSET(Frame_00714934, byte_8, 0x8);
GUEST_OFFSET(Frame_00714934, byte_9, 0x9);
GUEST_OFFSET(Frame_00714934, byte_a, 0xa);
GUEST_OFFSET(Frame_00714934, byte_b, 0xb);
GUEST_OFFSET(Frame_00714934, byte_40, 0x40);
GUEST_OFFSET(Frame_00714934, word_44, 0x44);
GUEST_OFFSET(Frame_00714934, byte_58, 0x58);
GUEST_SIZE(Frame_00714934, 0x60);

u32 f_00714934(gptr<Object_00714934_0> arg0, u32 r1_unused, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_00714934> frame;  // the original's stack frame
    u32 r0 = arg0.addr();
    u32 r0_18 = 0;
    u32 r6 = r0;
    u32 r1_1 = arg0->byte_11;
    frame->byte_40 = 2;
    u32 r0_1 = call_002fe7cc(r1_1, r1_1, r2, r3);
    frame->word_44 = r0_1;
    call_00748284(frame.at(0x28).addr(), r6);  // (from the original)
    call_0074824c(frame.at(0x10).addr(), r6);  // (from the original)
    u32 r0_5 = call_007481ec(frame.at(0x28).addr(), frame.at(0x10).addr());  // (from the original)
    u32 r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (!(r0_5 == 0)) {
        u32 r8 = frame.at(0).addr();
        do {
            u32 r5 = frame.at(0x40).addr();  // (from the original)
            u32 r7_1 = frame.at(0x30).addr();  // (from the original)
            if (frame->word_44 != 0) {
                call_0052edfc(frame.at(0x38).addr(), r7_1, r2, r3);  // (from the original)
                gptr<Local_00714934_r3_4> r3_4 = gptr<Local_00714934_r3_4>(frame.at(0x38).addr());  // (from the original)
                u32 r0_8 = call_0075291c(frame->word_44, r3_4->word_0, r3_4->word_4, r3_4.addr());
                r1 = guest::cpu()->r[1];
                r2 = guest::cpu()->r[2];
                r3 = guest::cpu()->r[3];
                if (r0_8 != 0) {
                    call_0052ed04(frame.at(0x20).addr(), r7_1, r2, r3);  // (from the original)
                    gptr<Local_00714934_r3_5> r3_5 = gptr<Local_00714934_r3_5>(frame.at(0x20).addr());  // (from the original)
                    u32 r0_10 = call_0075d608(r0_8, r3_5->word_0, r3_5->word_4, r3_5.addr());
                    call_005cdfe8(frame.at(8).addr(), r0_10);
                    r1 = guest::cpu()->r[1];
                    r2 = guest::cpu()->r[2];
                    r3 = guest::cpu()->r[3];
                    u32 r4 = 0u;
                    frame->byte_0 = u8(u32(frame->byte_8));
                    frame->byte_1 = u8(u32(frame->byte_a));
                    frame->byte_2 = u8(u32(frame->byte_9));
                    frame->byte_3 = u8(u32(frame->byte_b));
                    do {
                        u32 r0_12 = *gptr<u8>(r8 + r4);
                        u32 r0_13 = call_005ce13c(r0_12, r1, r2, r3);
                        r2 = guest::cpu()->r[2];
                        r3 = guest::cpu()->r[3];
                        r1 = *gptr<u8>(r5);
                        if (r1 == r0_13) {
                            if (*gptr<u32>(r6 + 0x20u) != 0) {  // (from the original)
                                call_00748164(frame.at(0x48).addr(), frame.at(0x30).addr(), r6 + 0x24u, r3);  // (from the original)
                                gptr<Local_00714934_ea_1> ea_1 = gptr<Local_00714934_ea_1>(frame.at(0x48).addr());  // (from the original)
                                u32 r2_8 = *gptr<u32>(r6 + 0x20u);  // (from the original)
                                call_0060d20c(frame.at(0x50).addr(), ea_1->word_4 * 0xa0u + ea_1->word_0 * 0xau + r2_8, r2_8);  // (from the original)
                                r1 = guest::cpu()->r[1];
                                r2 = guest::cpu()->r[2];
                                r3 = guest::cpu()->r[3];
                                if (frame->byte_58 == 0) {
                                    break;
                                }
                            }
                            guest::cpu()->r[1] = r1;
                            return 1u;
                        }
                        r4 += 1u;
                        guest::preempt();
                    } while (r4 < 4u);
                }
            }
            call_0052f144(frame.at(0x28).addr(), r1, r2, r3);  // (from the original)
            r0_18 = call_007481ec(frame.at(0x28).addr(), frame.at(0x10).addr());  // (from the original)
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            guest::preempt();
        } while (r0_18 != 0);
    }
    guest::cpu()->r[1] = r1;
    return 0u;
}

}  // namespace d_00714934
GUEST_EXPORT_FRAMED(0x00714934, d_00714934::f_00714934, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_00714b40: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00714b40 {

struct __attribute__((packed)) Object_00714b40_0 {
    u8 unknown_0[0x11];  // (not used here)
    u8 byte_11;
};
GUEST_OFFSET(Object_00714b40_0, byte_11, 0x11);

struct __attribute__((packed)) Local_00714b40_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_00714b40_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_00714b40_ea_1, word_4, 0x4);

struct __attribute__((packed)) Local_00714b40_r3_4 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_00714b40_r3_4, word_0, 0x0);
GUEST_OFFSET(Local_00714b40_r3_4, word_4, 0x4);

struct __attribute__((packed)) Local_00714b40_r3_5 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_00714b40_r3_5, word_0, 0x0);
GUEST_OFFSET(Local_00714b40_r3_5, word_4, 0x4);

inline constexpr guest::Function<0x002fe7cc, u32(u32, u32, u32, u32)> call_002fe7cc;
inline constexpr guest::Function<0x0052ed04, u32(u32, u32, u32, u32)> call_0052ed04;
inline constexpr guest::Function<0x0052edfc, u32(u32, u32, u32, u32)> call_0052edfc;
inline constexpr guest::Function<0x0052f144, u32(u32, u32, u32, u32)> call_0052f144;
inline constexpr guest::Function<0x005cdfe8, u32(u32, u32)> call_005cdfe8;
inline constexpr guest::Function<0x005ce13c, u32(u32, u32, u32, u32)> call_005ce13c;
inline constexpr guest::Function<0x0060d20c, u32(u32, u32, u32)> call_0060d20c;
inline constexpr guest::Function<0x00748164, u32(u32, u32, u32, u32)> call_00748164;
inline constexpr guest::Function<0x007481ec, u32(u32, u32)> call_007481ec;
inline constexpr guest::Function<0x0074824c, u32(u32, u32)> call_0074824c;
inline constexpr guest::Function<0x00748284, u32(u32, u32)> call_00748284;
inline constexpr guest::Function<0x0075291c, u32(u32, u32, u32, u32)> call_0075291c;
inline constexpr guest::Function<0x0075d608, u32(u32, u32, u32, u32)> call_0075d608;

struct __attribute__((packed)) Frame_00714b40 {
    u8 byte_0;
    u8 byte_1;
    u8 byte_2;
    u8 byte_3;
    u8 unknown_4[0x4];  // (not read or written by name)
    u8 byte_8;
    u8 byte_9;
    u8 byte_a;
    u8 byte_b;
    u8 unknown_c[0x34];  // (not read or written by name)
    u8 byte_40;
    u8 unknown_41[0x3];  // (not read or written by name)
    u32 word_44;
    u8 unknown_48[0x10];  // (not read or written by name)
    u8 byte_58;
    u8 unknown_59[0x7];  // (not read or written by name)
};
GUEST_OFFSET(Frame_00714b40, byte_0, 0x0);
GUEST_OFFSET(Frame_00714b40, byte_1, 0x1);
GUEST_OFFSET(Frame_00714b40, byte_2, 0x2);
GUEST_OFFSET(Frame_00714b40, byte_3, 0x3);
GUEST_OFFSET(Frame_00714b40, byte_8, 0x8);
GUEST_OFFSET(Frame_00714b40, byte_9, 0x9);
GUEST_OFFSET(Frame_00714b40, byte_a, 0xa);
GUEST_OFFSET(Frame_00714b40, byte_b, 0xb);
GUEST_OFFSET(Frame_00714b40, byte_40, 0x40);
GUEST_OFFSET(Frame_00714b40, word_44, 0x44);
GUEST_OFFSET(Frame_00714b40, byte_58, 0x58);
GUEST_SIZE(Frame_00714b40, 0x60);

u32 f_00714b40(gptr<Object_00714b40_0> arg0, u32 r1_unused, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_00714b40> frame;  // the original's stack frame
    u32 r0 = arg0.addr();
    u32 r0_18 = 0;
    u32 r6 = r0;
    u32 r1_1 = arg0->byte_11;
    frame->byte_40 = 3;
    u32 r0_1 = call_002fe7cc(r1_1, r1_1, r2, r3);
    frame->word_44 = r0_1;
    call_00748284(frame.at(0x28).addr(), r6);  // (from the original)
    call_0074824c(frame.at(0x10).addr(), r6);  // (from the original)
    u32 r0_5 = call_007481ec(frame.at(0x28).addr(), frame.at(0x10).addr());  // (from the original)
    u32 r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (!(r0_5 == 0)) {
        u32 r8 = frame.at(0).addr();
        do {
            u32 r5 = frame.at(0x40).addr();  // (from the original)
            u32 r7_1 = frame.at(0x30).addr();  // (from the original)
            if (frame->word_44 != 0) {
                call_0052edfc(frame.at(0x38).addr(), r7_1, r2, r3);  // (from the original)
                gptr<Local_00714b40_r3_4> r3_4 = gptr<Local_00714b40_r3_4>(frame.at(0x38).addr());  // (from the original)
                u32 r0_8 = call_0075291c(frame->word_44, r3_4->word_0, r3_4->word_4, r3_4.addr());
                r1 = guest::cpu()->r[1];
                r2 = guest::cpu()->r[2];
                r3 = guest::cpu()->r[3];
                if (r0_8 != 0) {
                    call_0052ed04(frame.at(0x20).addr(), r7_1, r2, r3);  // (from the original)
                    gptr<Local_00714b40_r3_5> r3_5 = gptr<Local_00714b40_r3_5>(frame.at(0x20).addr());  // (from the original)
                    u32 r0_10 = call_0075d608(r0_8, r3_5->word_0, r3_5->word_4, r3_5.addr());
                    call_005cdfe8(frame.at(8).addr(), r0_10);
                    r1 = guest::cpu()->r[1];
                    r2 = guest::cpu()->r[2];
                    r3 = guest::cpu()->r[3];
                    u32 r4 = 0u;
                    frame->byte_0 = u8(u32(frame->byte_8));
                    frame->byte_1 = u8(u32(frame->byte_a));
                    frame->byte_2 = u8(u32(frame->byte_9));
                    frame->byte_3 = u8(u32(frame->byte_b));
                    do {
                        u32 r0_12 = *gptr<u8>(r8 + r4);
                        u32 r0_13 = call_005ce13c(r0_12, r1, r2, r3);
                        r2 = guest::cpu()->r[2];
                        r3 = guest::cpu()->r[3];
                        r1 = *gptr<u8>(r5);
                        if (r1 == r0_13) {
                            if (*gptr<u32>(r6 + 0x20u) != 0) {  // (from the original)
                                call_00748164(frame.at(0x48).addr(), frame.at(0x30).addr(), r6 + 0x24u, r3);  // (from the original)
                                gptr<Local_00714b40_ea_1> ea_1 = gptr<Local_00714b40_ea_1>(frame.at(0x48).addr());  // (from the original)
                                u32 r2_8 = *gptr<u32>(r6 + 0x20u);  // (from the original)
                                call_0060d20c(frame.at(0x50).addr(), ea_1->word_4 * 0xa0u + ea_1->word_0 * 0xau + r2_8, r2_8);  // (from the original)
                                r1 = guest::cpu()->r[1];
                                r2 = guest::cpu()->r[2];
                                r3 = guest::cpu()->r[3];
                                if (frame->byte_58 == 0) {
                                    break;
                                }
                            }
                            guest::cpu()->r[1] = r1;
                            return 1u;
                        }
                        r4 += 1u;
                        guest::preempt();
                    } while (r4 < 4u);
                }
            }
            call_0052f144(frame.at(0x28).addr(), r1, r2, r3);  // (from the original)
            r0_18 = call_007481ec(frame.at(0x28).addr(), frame.at(0x10).addr());  // (from the original)
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            guest::preempt();
        } while (r0_18 != 0);
    }
    guest::cpu()->r[1] = r1;
    return 0u;
}

}  // namespace d_00714b40
GUEST_EXPORT_FRAMED(0x00714b40, d_00714b40::f_00714b40, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_00715074: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00715074 {

struct __attribute__((packed)) Object_00715074_0 {
    u8 unknown_0[0x11];  // (not used here)
    u8 byte_11;
};
GUEST_OFFSET(Object_00715074_0, byte_11, 0x11);

struct __attribute__((packed)) Local_00715074_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_00715074_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_00715074_ea_1, word_4, 0x4);

struct __attribute__((packed)) Local_00715074_r3_4 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_00715074_r3_4, word_0, 0x0);
GUEST_OFFSET(Local_00715074_r3_4, word_4, 0x4);

struct __attribute__((packed)) Local_00715074_r3_5 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_00715074_r3_5, word_0, 0x0);
GUEST_OFFSET(Local_00715074_r3_5, word_4, 0x4);

inline constexpr guest::Function<0x002fe7cc, u32(u32, u32, u32, u32)> call_002fe7cc;
inline constexpr guest::Function<0x0052ed04, u32(u32, u32, u32, u32)> call_0052ed04;
inline constexpr guest::Function<0x0052edfc, u32(u32, u32, u32, u32)> call_0052edfc;
inline constexpr guest::Function<0x0052f144, u32(u32, u32, u32, u32)> call_0052f144;
inline constexpr guest::Function<0x005cdfe8, u32(u32, u32)> call_005cdfe8;
inline constexpr guest::Function<0x005ce13c, u32(u32, u32, u32, u32)> call_005ce13c;
inline constexpr guest::Function<0x0060d20c, u32(u32, u32, u32)> call_0060d20c;
inline constexpr guest::Function<0x00748164, u32(u32, u32, u32, u32)> call_00748164;
inline constexpr guest::Function<0x007481ec, u32(u32, u32)> call_007481ec;
inline constexpr guest::Function<0x0074824c, u32(u32, u32)> call_0074824c;
inline constexpr guest::Function<0x00748284, u32(u32, u32)> call_00748284;
inline constexpr guest::Function<0x0075291c, u32(u32, u32, u32, u32)> call_0075291c;
inline constexpr guest::Function<0x0075d608, u32(u32, u32, u32, u32)> call_0075d608;

struct __attribute__((packed)) Frame_00715074 {
    u8 byte_0;
    u8 byte_1;
    u8 byte_2;
    u8 byte_3;
    u8 unknown_4[0x4];  // (not read or written by name)
    u8 byte_8;
    u8 byte_9;
    u8 byte_a;
    u8 byte_b;
    u8 unknown_c[0x34];  // (not read or written by name)
    u8 byte_40;
    u8 unknown_41[0x3];  // (not read or written by name)
    u32 word_44;
    u8 unknown_48[0x10];  // (not read or written by name)
    u8 byte_58;
    u8 unknown_59[0x7];  // (not read or written by name)
};
GUEST_OFFSET(Frame_00715074, byte_0, 0x0);
GUEST_OFFSET(Frame_00715074, byte_1, 0x1);
GUEST_OFFSET(Frame_00715074, byte_2, 0x2);
GUEST_OFFSET(Frame_00715074, byte_3, 0x3);
GUEST_OFFSET(Frame_00715074, byte_8, 0x8);
GUEST_OFFSET(Frame_00715074, byte_9, 0x9);
GUEST_OFFSET(Frame_00715074, byte_a, 0xa);
GUEST_OFFSET(Frame_00715074, byte_b, 0xb);
GUEST_OFFSET(Frame_00715074, byte_40, 0x40);
GUEST_OFFSET(Frame_00715074, word_44, 0x44);
GUEST_OFFSET(Frame_00715074, byte_58, 0x58);
GUEST_SIZE(Frame_00715074, 0x60);

u32 f_00715074(gptr<Object_00715074_0> arg0, u32 r1_unused, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_00715074> frame;  // the original's stack frame
    u32 r0 = arg0.addr();
    u32 r0_18 = 0;
    u32 r6 = r0;
    u32 r1_1 = arg0->byte_11;
    frame->byte_40 = 1;
    u32 r0_1 = call_002fe7cc(r1_1, r1_1, r2, r3);
    frame->word_44 = r0_1;
    call_00748284(frame.at(0x28).addr(), r6);  // (from the original)
    call_0074824c(frame.at(0x10).addr(), r6);  // (from the original)
    u32 r0_5 = call_007481ec(frame.at(0x28).addr(), frame.at(0x10).addr());  // (from the original)
    u32 r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (!(r0_5 == 0)) {
        u32 r8 = frame.at(0).addr();
        do {
            u32 r5 = frame.at(0x40).addr();  // (from the original)
            u32 r7_1 = frame.at(0x30).addr();  // (from the original)
            if (frame->word_44 != 0) {
                call_0052edfc(frame.at(0x38).addr(), r7_1, r2, r3);  // (from the original)
                gptr<Local_00715074_r3_4> r3_4 = gptr<Local_00715074_r3_4>(frame.at(0x38).addr());  // (from the original)
                u32 r0_8 = call_0075291c(frame->word_44, r3_4->word_0, r3_4->word_4, r3_4.addr());
                r1 = guest::cpu()->r[1];
                r2 = guest::cpu()->r[2];
                r3 = guest::cpu()->r[3];
                if (r0_8 != 0) {
                    call_0052ed04(frame.at(0x20).addr(), r7_1, r2, r3);  // (from the original)
                    gptr<Local_00715074_r3_5> r3_5 = gptr<Local_00715074_r3_5>(frame.at(0x20).addr());  // (from the original)
                    u32 r0_10 = call_0075d608(r0_8, r3_5->word_0, r3_5->word_4, r3_5.addr());
                    call_005cdfe8(frame.at(8).addr(), r0_10);
                    r1 = guest::cpu()->r[1];
                    r2 = guest::cpu()->r[2];
                    r3 = guest::cpu()->r[3];
                    u32 r4 = 0u;
                    frame->byte_0 = u8(u32(frame->byte_8));
                    frame->byte_1 = u8(u32(frame->byte_a));
                    frame->byte_2 = u8(u32(frame->byte_9));
                    frame->byte_3 = u8(u32(frame->byte_b));
                    do {
                        u32 r0_12 = *gptr<u8>(r8 + r4);
                        u32 r0_13 = call_005ce13c(r0_12, r1, r2, r3);
                        r2 = guest::cpu()->r[2];
                        r3 = guest::cpu()->r[3];
                        r1 = *gptr<u8>(r5);
                        if (r1 == r0_13) {
                            if (*gptr<u32>(r6 + 0x20u) != 0) {  // (from the original)
                                call_00748164(frame.at(0x48).addr(), frame.at(0x30).addr(), r6 + 0x24u, r3);  // (from the original)
                                gptr<Local_00715074_ea_1> ea_1 = gptr<Local_00715074_ea_1>(frame.at(0x48).addr());  // (from the original)
                                u32 r2_8 = *gptr<u32>(r6 + 0x20u);  // (from the original)
                                call_0060d20c(frame.at(0x50).addr(), ea_1->word_4 * 0xa0u + ea_1->word_0 * 0xau + r2_8, r2_8);  // (from the original)
                                r1 = guest::cpu()->r[1];
                                r2 = guest::cpu()->r[2];
                                r3 = guest::cpu()->r[3];
                                if (frame->byte_58 == 0) {
                                    break;
                                }
                            }
                            guest::cpu()->r[1] = r1;
                            return 1u;
                        }
                        r4 += 1u;
                        guest::preempt();
                    } while (r4 < 4u);
                }
            }
            call_0052f144(frame.at(0x28).addr(), r1, r2, r3);  // (from the original)
            r0_18 = call_007481ec(frame.at(0x28).addr(), frame.at(0x10).addr());  // (from the original)
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            guest::preempt();
        } while (r0_18 != 0);
    }
    guest::cpu()->r[1] = r1;
    return 0u;
}

}  // namespace d_00715074
GUEST_EXPORT_FRAMED(0x00715074, d_00715074::f_00715074, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_00715280: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00715280 {

struct __attribute__((packed)) Object_00715280_0 {
    u8 unknown_0[0x11];  // (not used here)
    u8 byte_11;
};
GUEST_OFFSET(Object_00715280_0, byte_11, 0x11);

struct __attribute__((packed)) Local_00715280_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_00715280_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_00715280_ea_1, word_4, 0x4);

struct __attribute__((packed)) Local_00715280_r0_7 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_00715280_r0_7, word_0, 0x0);
GUEST_OFFSET(Local_00715280_r0_7, word_4, 0x4);

inline constexpr guest::Function<0x002fccdc, u32(u32, u32, u32, u32)> call_002fccdc;
inline constexpr guest::Function<0x002fe7cc, u32(u32, u32, u32, u32)> call_002fe7cc;
inline constexpr guest::Function<0x002feb00, u32(u32, u32, u32, u32)> call_002feb00;
inline constexpr guest::Function<0x0052f144, u32(u32, u32, u32, u32)> call_0052f144;
inline constexpr guest::Function<0x0060d20c, u32(u32, u32, u32)> call_0060d20c;
inline constexpr guest::Function<0x00748164, u32(u32, u32, u32, u32)> call_00748164;
inline constexpr guest::Function<0x007481ec, u32(u32, u32)> call_007481ec;
inline constexpr guest::Function<0x0074824c, u32(u32, u32)> call_0074824c;
inline constexpr guest::Function<0x00748284, u32(u32, u32)> call_00748284;

struct __attribute__((packed)) Frame_00715280 {
    u8 unknown_0[0x38];  // (not read or written by name)
    u8 byte_38;
    u8 unknown_39[0x3];  // (not read or written by name)
};
GUEST_OFFSET(Frame_00715280, byte_38, 0x38);
GUEST_SIZE(Frame_00715280, 0x3c);

u32 f_00715280(gptr<Object_00715280_0> arg0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_00715280> frame;  // the original's stack frame
    u32 r0 = arg0.addr();
    u32 r0_14 = 0;
    u32 r5 = r0;
    u32 r0_1 = arg0->byte_11;
    u32 r0_2 = call_002fe7cc(r0_1, r1, r2, r3);
    u32 r4 = r0_2;
    call_00748284(frame.at(0x10).addr(), r5);  // (from the original)
    call_0074824c(frame.at(0x20).addr(), r5);  // (from the original)
    u32 r0_6 = call_007481ec(frame.at(0x10).addr(), frame.at(0x20).addr());  // (from the original)
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0_6 != 0) {
        do {
            gptr<Local_00715280_r0_7> r0_7 = gptr<Local_00715280_r0_7>(frame.at(0x18).addr());  // (from the original)
            if (r4 != 0) {
                u32 r0_8 = call_002feb00(r4, r0_7->word_0, r0_7->word_4, 0u);
                r1 = guest::cpu()->r[1];
                r2 = guest::cpu()->r[2];
                r3 = guest::cpu()->r[3];
                if (r0_8 != 0) {
                    u32 r0_9 = call_002fccdc(r0_8, r1, r2, r3);
                    r1 = guest::cpu()->r[1];
                    r2 = guest::cpu()->r[2];
                    r3 = guest::cpu()->r[3];
                    if (r0_9 == 0xau) {  // (from the original)
                        if (*gptr<u32>(r5 + 0x20u) != 0) {  // (from the original)
                            call_00748164(frame.at(8).addr(), frame.at(0x18).addr(), r5 + 0x24u, r3);  // (from the original)
                            gptr<Local_00715280_ea_1> ea_1 = gptr<Local_00715280_ea_1>(frame.at(8).addr());
                            u32 r2_6 = ea_1->word_4 * 0xa0u;  // (from the original)
                            call_0060d20c(frame.at(0x30).addr(), *gptr<u32>(r5 + 0x20u) + (r2_6 + ea_1->word_0 * 0xau), r2_6);  // (from the original)
                            r1 = guest::cpu()->r[1];
                            r2 = guest::cpu()->r[2];
                            r3 = guest::cpu()->r[3];
                            if (frame->byte_38 == 0) {
                                goto L_715398;
                            }
                        }
                        guest::cpu()->r[1] = r1;
                        return 1u;
L_715398:;
                    }
                }
            }
            call_0052f144(frame.at(0x10).addr(), r1, r2, r3);  // (from the original)
            r0_14 = call_007481ec(frame.at(0x10).addr(), frame.at(0x20).addr());  // (from the original)
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            guest::preempt();
        } while (r0_14 != 0);
    }
    guest::cpu()->r[1] = r1;
    return 0u;
}

}  // namespace d_00715280
GUEST_EXPORT_FRAMED(0x00715280, d_00715280::f_00715280, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_007153ec: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_007153ec {

struct __attribute__((packed)) Object_007153ec_0 {
    u8 unknown_0[0x1c];  // (not used here)
    u8 byte_1c;
};
GUEST_OFFSET(Object_007153ec_0, byte_1c, 0x1c);

struct __attribute__((packed)) Local_007153ec_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_007153ec_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_007153ec_ea_1, word_4, 0x4);

struct __attribute__((packed)) Local_007153ec_ea_2 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_007153ec_ea_2, word_0, 0x0);
GUEST_OFFSET(Local_007153ec_ea_2, word_4, 0x4);

struct __attribute__((packed)) Local_007153ec_r0_8 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_007153ec_r0_8, word_0, 0x0);
GUEST_OFFSET(Local_007153ec_r0_8, word_4, 0x4);

struct __attribute__((packed)) Local_007153ec_r3_12 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_007153ec_r3_12, word_0, 0x0);
GUEST_OFFSET(Local_007153ec_r3_12, word_4, 0x4);

struct __attribute__((packed)) Local_007153ec_r3_13 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_007153ec_r3_13, word_0, 0x0);
GUEST_OFFSET(Local_007153ec_r3_13, word_4, 0x4);

struct __attribute__((packed)) Local_007153ec_r3_5 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_007153ec_r3_5, word_0, 0x0);
GUEST_OFFSET(Local_007153ec_r3_5, word_4, 0x4);

struct __attribute__((packed)) Local_007153ec_r3_6 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_007153ec_r3_6, word_0, 0x0);
GUEST_OFFSET(Local_007153ec_r3_6, word_4, 0x4);

inline constexpr guest::Function<0x0023fc84, u32(u32, u32, u32, u32)> call_0023fc84;
inline constexpr guest::Function<0x002fe7cc, u32(u32)> call_002fe7cc;
inline constexpr guest::Function<0x0052ed04, u32(u32, u32, u32, u32)> call_0052ed04;
inline constexpr guest::Function<0x0052edfc, u32(u32, u32, u32, u32)> call_0052edfc;
inline constexpr guest::Function<0x0052f144, u32(u32, u32, u32, u32)> call_0052f144;
inline constexpr guest::Function<0x0060d20c, u32(u32, u32, u32)> call_0060d20c;
inline constexpr guest::Function<0x006cacdc, u32(u32, u32, u32, u32)> call_006cacdc;
inline constexpr guest::Function<0x006cc304, u32(u32, u32, u32, u32)> call_006cc304;
inline constexpr guest::Function<0x00748164, u32(u32, u32, u32, u32)> call_00748164;
inline constexpr guest::Function<0x007481ec, u32(u32, u32)> call_007481ec;
inline constexpr guest::Function<0x0074824c, u32(u32, u32)> call_0074824c;
inline constexpr guest::Function<0x00748284, u32(u32, u32)> call_00748284;
inline constexpr guest::Function<0x0075291c, u32(u32, u32, u32, u32)> call_0075291c;
inline constexpr guest::Function<0x0075d608, u32(u32, u32, u32, u32)> call_0075d608;

struct __attribute__((packed)) Frame_007153ec {
    u8 unknown_0[0x48];  // (not read or written by name)
    u8 byte_48;
    u8 unknown_49[0xf];  // (not read or written by name)
    u8 byte_58;
    u8 unknown_59[0xb];  // (not read or written by name)
};
GUEST_OFFSET(Frame_007153ec, byte_48, 0x48);
GUEST_OFFSET(Frame_007153ec, byte_58, 0x58);
GUEST_SIZE(Frame_007153ec, 0x64);

u32 f_007153ec(gptr<Object_007153ec_0> arg0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_007153ec> frame;  // the original's stack frame
    u32 r0 = arg0.addr();
    u32 r5 = 0;
    u32 r0_20 = 0;
    u32 r0_36 = 0;
    u32 r4 = r0;
    u32 r0_1 = arg0->byte_1c;
    u32 r0_2 = call_006cacdc(r0_1, r1, r2, r3);
    if (r0_2 != 0) {
        u32 r0_3 = call_002fe7cc(1u);
        r5 = r0_3;
        call_00748284(frame.at(0).addr(), r4);
        call_0074824c(frame.at(0x50).addr(), r4);  // (from the original)
        u32 r0_7 = call_007481ec(frame.at(0).addr(), frame.at(0x50).addr());  // (from the original)
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (r0_7 != 0) {
            do {
                gptr<Local_007153ec_r0_8> r0_8 = gptr<Local_007153ec_r0_8>(frame.at(8).addr());
                if (r5 != 0) {
                    call_0052edfc(frame.at(0x18).addr(), r0_8.addr(), r2, r3);  // (from the original)
                    gptr<Local_007153ec_r3_5> r3_5 = gptr<Local_007153ec_r3_5>(frame.at(0x18).addr());  // (from the original)
                    u32 r0_10 = call_0075291c(r5, r3_5->word_0, r3_5->word_4, r3_5.addr());
                    r1 = guest::cpu()->r[1];
                    r3 = guest::cpu()->r[3];
                    if (r0_10 != 0) {
                        call_0052ed04(frame.at(0x20).addr(), r0_8.addr(), guest::cpu()->r[2], r3);  // (from the original)
                        gptr<Local_007153ec_r3_6> r3_6 = gptr<Local_007153ec_r3_6>(frame.at(0x20).addr());  // (from the original)
                        u32 r0_12 = call_0075d608(r0_10, r3_6->word_0, r3_6->word_4, r3_6.addr());
                        r1 = guest::cpu()->r[1];
                        r3 = guest::cpu()->r[3];
                        if (r0_12 != 0x14u && r0_12 != 0x31u && r0_12 != 0x32u && r0_12 != 0x33u) {  // (from the original)
                            call_0023fc84(frame.at(0x40).addr(), r0_8->word_0, r0_8->word_4, 1u);  // (from the original)
                            r3 = frame.at(0x40).addr();  // (from the original)
                            u32 r0_14 = *gptr<u32>(r3);
                            r1 = *gptr<u32>(r3 + 4);
                            u32 r2_10 = *gptr<u32>(r3 + 8) & 0xffu;  // (from the original)
                            if (r2_10 >= 0xfcu) {  // (from the original)
                                goto L_7154f8;
                            }
                            u32 r0_15 = call_006cc304(r0_14, r1, r2_10, r3);
                            r1 = guest::cpu()->r[1];
                            r3 = guest::cpu()->r[3];
                            if (r0_15 == 0) {
                                goto L_7154f8;
                            }
                        }
                        goto L_7155a4;
L_7154f8:;
                    }
                }
                if (*gptr<u32>(r4 + 0x20u) != 0) {  // (from the original)
                    call_00748164(frame.at(0x38).addr(), frame.at(8).addr(), r4 + 0x24u, r3);  // (from the original)
                    gptr<Local_007153ec_ea_1> ea_1 = gptr<Local_007153ec_ea_1>(frame.at(0x38).addr());  // (from the original)
                    u32 r2_12 = *gptr<u32>(r4 + 0x20u);  // (from the original)
                    call_0060d20c(frame.at(0x40).addr(), ea_1->word_4 * 0xa0u + ea_1->word_0 * 0xau + r2_12, r2_12);  // (from the original)
                    r1 = guest::cpu()->r[1];
                    r3 = guest::cpu()->r[3];
                    if (frame->byte_48 == 0) {
                        goto L_715598;
                    }
                }
                guest::cpu()->r[1] = r1;
                return 1u;
L_715598:;
L_7155a4:;
                call_0052f144(frame.at(0).addr(), r1, guest::cpu()->r[2], r3);
                r0_20 = call_007481ec(frame.at(0).addr(), frame.at(0x50).addr());  // (from the original)
                r1 = guest::cpu()->r[1];
                r2 = guest::cpu()->r[2];
                r3 = guest::cpu()->r[3];
                guest::preempt();
            } while (r0_20 != 0);
        }
    } else {
        u32 r0_21 = *gptr<u8>(r4 + 0x11u);  // (from the original)
        u32 r0_22 = call_002fe7cc(r0_21);
        r5 = r0_22;
        call_00748284(frame.at(8).addr(), r4);
        call_0074824c(frame.at(0x38).addr(), r4);  // (from the original)
        u32 r0_26 = call_007481ec(frame.at(8).addr(), frame.at(0x38).addr());  // (from the original)
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (r0_26 != 0) {
            do {
                u32 r0_27 = frame.at(0x10).addr();  // (from the original)
                if (r5 != 0) {
                    call_0052edfc(frame.at(0x28).addr(), r0_27, r2, r3);  // (from the original)
                    gptr<Local_007153ec_r3_12> r3_12 = gptr<Local_007153ec_r3_12>(frame.at(0x28).addr());  // (from the original)
                    u32 r0_29 = call_0075291c(r5, r3_12->word_0, r3_12->word_4, r3_12.addr());
                    r1 = guest::cpu()->r[1];
                    r3 = guest::cpu()->r[3];
                    if (r0_29 != 0) {
                        call_0052ed04(frame.at(0x30).addr(), r0_27, guest::cpu()->r[2], r3);  // (from the original)
                        gptr<Local_007153ec_r3_13> r3_13 = gptr<Local_007153ec_r3_13>(frame.at(0x30).addr());  // (from the original)
                        u32 r0_31 = call_0075d608(r0_29, r3_13->word_0, r3_13->word_4, r3_13.addr());
                        r1 = guest::cpu()->r[1];
                        r3 = guest::cpu()->r[3];
                        if (r0_31 == 0x14u || r0_31 == 0x31u || r0_31 == 0x32u || r0_31 == 0x33u) {  // (from the original)
                            goto L_715744;
                        }
                    }
                }
                if (*gptr<u32>(r4 + 0x20u) != 0) {  // (from the original)
                    call_00748164(frame.at(0x48).addr(), frame.at(0x10).addr(), r4 + 0x24u, r3);  // (from the original)
                    gptr<Local_007153ec_ea_2> ea_2 = gptr<Local_007153ec_ea_2>(frame.at(0x48).addr());  // (from the original)
                    u32 r2_22 = *gptr<u32>(r4 + 0x20u);  // (from the original)
                    call_0060d20c(frame.at(0x50).addr(), ea_2->word_4 * 0xa0u + ea_2->word_0 * 0xau + r2_22, r2_22);  // (from the original)
                    r1 = guest::cpu()->r[1];
                    r3 = guest::cpu()->r[3];
                    if (frame->byte_58 == 0) {
                        goto L_715738;
                    }
                }
                guest::cpu()->r[1] = r1;
                return 1u;
L_715738:;
L_715744:;
                call_0052f144(frame.at(8).addr(), r1, guest::cpu()->r[2], r3);
                r0_36 = call_007481ec(frame.at(8).addr(), frame.at(0x38).addr());  // (from the original)
                r1 = guest::cpu()->r[1];
                r2 = guest::cpu()->r[2];
                r3 = guest::cpu()->r[3];
                guest::preempt();
            } while (r0_36 != 0);
        }
    }
    guest::cpu()->r[1] = r1;
    return 0u;
}

}  // namespace d_007153ec
GUEST_EXPORT_FRAMED(0x007153ec, d_007153ec::f_007153ec, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_00715780: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00715780 {

struct __attribute__((packed)) Object_00715780_0 {
    u8 unknown_0[0x11];  // (not used here)
    u8 byte_11;
};
GUEST_OFFSET(Object_00715780_0, byte_11, 0x11);

struct __attribute__((packed)) Local_00715780_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_00715780_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_00715780_ea_1, word_4, 0x4);

inline constexpr guest::Function<0x002fe7cc, u32(u32)> call_002fe7cc;
inline constexpr guest::Function<0x00317148, u32(u32, u32, u32)> call_00317148;
inline constexpr guest::Function<0x0052edfc, u32(u32, u32, u32)> call_0052edfc;
inline constexpr guest::Function<0x0052f144, u32(u32)> call_0052f144;
inline constexpr guest::Function<0x00605618, u32(u32)> call_00605618;
inline constexpr guest::Function<0x0060d20c, u32(u32, u32, u32)> call_0060d20c;
inline constexpr guest::Function<0x00748164, u32(u32, u32, u32)> call_00748164;
inline constexpr guest::Function<0x007481ec, u32(u32, u32)> call_007481ec;
inline constexpr guest::Function<0x0074824c, u32(u32, u32)> call_0074824c;
inline constexpr guest::Function<0x00748284, u32(u32, u32, u32, u32)> call_00748284;

struct __attribute__((packed)) Frame_00715780 {
    u32 word_0;
    u32 word_4;
    u8 unknown_8[0x30];  // (not read or written by name)
    u8 byte_38;
    u8 unknown_39[0x7];  // (not read or written by name)
};
GUEST_OFFSET(Frame_00715780, word_0, 0x0);
GUEST_OFFSET(Frame_00715780, word_4, 0x4);
GUEST_OFFSET(Frame_00715780, byte_38, 0x38);
GUEST_SIZE(Frame_00715780, 0x40);

u32 f_00715780(gptr<Object_00715780_0> arg0, u32 r1_unused, u32 r2) {
    guest::StackFrameOf<Frame_00715780> frame;  // the original's stack frame
    u32 r0 = arg0.addr();
    u32 r0_15 = 0;
    u32 r4 = arg0->byte_11;
    u32 r6 = r0;
    call_00748284(frame.at(0x10).addr(), r0, r2, guest::cpu()->r[3]);  // (from the original)
    call_0074824c(frame.at(0x20).addr(), r6);  // (from the original)
    u32 r0_4 = call_007481ec(frame.at(0x10).addr(), frame.at(0x20).addr());  // (from the original)
    r2 = guest::cpu()->r[2];
    if (r0_4 != 0) {
        do {
            call_0052edfc(frame.at(0).addr(), frame.at(0x18).addr(), r2);  // (from the original)
            u32 r0_7 = call_002fe7cc(r4 & 0xffu);  // (from the original)
            if (r0_7 != 0) {
                u32 r0_8 = call_00317148(r0_7, frame->word_0, frame->word_4);
                if (r0_8 != 0) {
                    u32 r0_9 = *gptr<u16>(r0_8);
                    u32 r0_10 = call_00605618(r0_9);
                    u32 r5_1 = r0_10 == 1u;
                    if (r5_1 == 0) {
                        goto L_7158d8;
                    }
                    if (*gptr<u32>(r6 + 0x20u) != 0) {  // (from the original)
                        call_00748164(frame.at(8).addr(), frame.at(0x18).addr(), r6 + 0x24u);  // (from the original)
                        gptr<Local_00715780_ea_1> ea_1 = gptr<Local_00715780_ea_1>(frame.at(8).addr());
                        u32 r2_7 = ea_1->word_4 * 0xa0u;  // (from the original)
                        call_0060d20c(frame.at(0x30).addr(), *gptr<u32>(r6 + 0x20u) + (r2_7 + ea_1->word_0 * 0xau), r2_7);  // (from the original)
                        if (frame->byte_38 == 0) {
                            goto L_7158c8;
                        }
                    }
                    return 1u;
                }
            }
            goto L_7158d4;
L_7158c8:;
L_7158d4:;
L_7158d8:;
            call_0052f144(frame.at(0x10).addr());  // (from the original)
            r0_15 = call_007481ec(frame.at(0x10).addr(), frame.at(0x20).addr());  // (from the original)
            r2 = guest::cpu()->r[2];
            guest::preempt();
        } while (r0_15 != 0);
    }
    return 0u;
}

}  // namespace d_00715780
GUEST_EXPORT_FRAMED(0x00715780, d_00715780::f_00715780, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_00715918: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00715918 {

struct __attribute__((packed)) Local_00715918_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_00715918_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_00715918_ea_1, word_4, 0x4);


u32 f_00715918(u32 r0, u32 r1_unused, u32 r2, u32 r3) {
    u32 res_1 = r2 | r3;
    u32 r1_1 = res_1;
    if (!(res_1 == 0)) {
        u32 r4 = 0u;
        do {
            gptr<Local_00715918_ea_1> ea_1 = gptr<Local_00715918_ea_1>(r0 + (r4 << 3));
            u32 r1_2 = ea_1->word_0;
            u32 r12_1 = ea_1->word_4;
            if ((r1_2 ^ r2 | r12_1 ^ r3) == 0) {
                guest::cpu()->r[1] = r1_2;
                return 1u;
            }
            r1_1 = r1_2 | r12_1;
            if (r1_1 == 0) {
                break;
            }
            r4 += 1u;
            guest::preempt();
        } while (r4 < 0x64u);  // (from the original)
    }
    guest::cpu()->r[1] = r1_1;
    return 0u;
}

}  // namespace d_00715918
GUEST_EXPORT_FRAMED(0x00715918, d_00715918::f_00715918, 0x70);  // pushes {r4, r5, r6} first, as the original

// f_0071596c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0071596c {

struct __attribute__((packed)) Local_0071596c_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0071596c_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_0071596c_ea_1, word_4, 0x4);

struct __attribute__((packed)) Local_0071596c_r12_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0071596c_r12_1, word_0, 0x0);
GUEST_OFFSET(Local_0071596c_r12_1, word_4, 0x4);


u32 f_0071596c(u32 r0) {
    u32 r1 = 0u;
    do {
        gptr<Local_0071596c_r12_1> r12_1 = gptr<Local_0071596c_r12_1>(r0 + (r1 << 3));
        if ((r12_1->word_4 | r12_1->word_0) == 0) {
            guest::cpu()->r[1] = r1;
            return r1;
        }
        gptr<Local_0071596c_ea_1> ea_1 = gptr<Local_0071596c_ea_1>(r12_1.addr() + 8u);
        if ((ea_1->word_0 | ea_1->word_4) == 0) {
            guest::cpu()->r[1] = r1;
            return r1 + 1u;
        }
        r1 += 2u;
        guest::preempt();
    } while (s32(r1) < 0x64);  // (from the original)
    guest::cpu()->r[1] = r1;
    return r1;
}

}  // namespace d_0071596c
GUEST_EXPORT(0x0071596c, d_0071596c::f_0071596c);

// f_007159b0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_007159b0 {

inline constexpr guest::Function<0x0029b88c, u32(u32, u32)> call_0029b88c;
inline constexpr guest::Function<0x002fb338, u32(u32, u32)> call_002fb338;
inline constexpr guest::Function<0x002fb96c, u32(u32, u32, u32, u32)> call_002fb96c;
inline constexpr guest::Function<0x002fbd54, u32(u32, u32)> call_002fbd54;
inline constexpr guest::Function<0x007592f4, u32(u32, u32)> call_007592f4;

u32 f_007159b0(u32 r0, u32 r1) {
    u32 r6_1 = 0;
    u32 r6 = 0u;
    u32 r5 = r0;
    u32 r7 = r1;
    u32 r4 = r6;
    do {
        u32 r0_2 = call_002fb96c(r4 & 0xffu, r1, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        r1 = guest::cpu()->r[1];
        if (r0_2 != 0) {
            r1 = r0_2 + 0x8ae0u;  // (from the original)
            if (r1 == r5) {
                r6 = r0_2;
            }
        }
        r4 += 1u;
        guest::preempt();
    } while (s32(r4) < 8);
    if (r6 != 0) {
        r0 = call_002fbd54(r6 + 0x55a6u, r1);  // (from the original)
        r1 = guest::cpu()->r[1];
        if (r0 != 0) {
            r0 = call_002fb338(r5, r1);
            r1 = guest::cpu()->r[1];
            if (r0 != 0) {
                u32 r0_4 = call_0029b88c(2u, r1);
                r1 = *gptr<u32>(r5 + 0x24u);  // (from the original)
                if (*gptr<u32>(r0_4 + 0xcu) > r1 && !(u32(*gptr<u8>(r6 + 0x5730u)) & 2u)) {  // (from the original)
                    if (r7 == 0) {
                        goto L_715a88;
                    }
                    guest::cpu()->r[1] = r1;
                    return 0u;
                }
                r6_1 = r6 + 0x5730u;  // (from the original)
                if (u32(*gptr<u8>(r6_1)) & 4u) {
                    goto L_715a90;
                }
                if (r7 != 0) {
                    if (r7 == 1u) {
                        guest::cpu()->r[1] = r1;
                        return 2u;
                    }
                    guest::cpu()->r[1] = r1;
                    return 0u;
                }
L_715a88:;
                r0 = *gptr<u8>(r5 + 0x18u);  // (from the original)
            }
        }
        guest::cpu()->r[1] = r1;
        return r0;
L_715a90:;
        if (r7 == 0) {
            u32 r0_5 = call_007592f4(r5, r1);
            return *gptr<u8>(r0_5 + r5 + 0x11u);  // (from the original)
        }
        if (r7 == 1u) {
            u32 r0_7 = call_007592f4(r5, r1);
            return *gptr<u8>(r0_7 + r5 + 0xau);  // (from the original)
        }
        if (r7 == 2u) {
            r0 = *gptr<u8>(r5 + 8u);
            guest::cpu()->r[1] = r1;
            return r0;
        }
        if (r7 == 3u) {
            r0 = *gptr<u8>(r5 + 9u);
            guest::cpu()->r[1] = r1;
            return r0;
        }
    }
    guest::cpu()->r[1] = r1;
    return 0u;
}

}  // namespace d_007159b0
GUEST_EXPORT_FRAMED(0x007159b0, d_007159b0::f_007159b0, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_00715aec: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00715aec {

inline constexpr guest::Function<0x0029b88c, u32(u32, u32, u32, u32)> call_0029b88c;

u32 f_00715aec(u32 r0, u32 r1) {
    u32 r6 = r0;
    u32 r9 = 0u;
    u32 r4 = r9;
    do {
        u32 r5_1 = r4 & 0xffu;  // (from the original)
        if (r5_1 != 0) {
            u32 r0_1 = call_0029b88c(r5_1, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
            r1 = *gptr<u32>(r6 + (r5_1 << 2) + 0x1cu);  // (from the original)
            if (*gptr<u32>(r0_1 + 0xcu) <= r1) {  // (from the original)
                r1 = r5_1;
                if ((u32(*gptr<u8>(r6 + r5_1 + 0x1b4u)) & 1u) == 0) {  // (from the original)
                    u32 r0_2 = call_0029b88c(r1, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
                    r1 = guest::cpu()->r[1];
                    u32 r0_3 = *gptr<u32>(r0_2 + 4u);
                    if (r0_3 == 0) {
                        r0_3 = 2u;
                    } else {
                        u32 zf_1 = r0_3 == 1u;
                        if (zf_1) {
                            r0_3 = 3u;
                        } else {
                            zf_1 = r0_3 == 2u;
                        }
                        if (!zf_1) {
                            r0_3 = r0_3 == 3u;
                        }
                    }
                    r9 += r0_3;
                }
            }
        }
        r4 += 1u;
        guest::preempt();
    } while (s32(r4) < 0x66);  // (from the original)
    guest::cpu()->r[1] = r1;
    return r9;
}

}  // namespace d_00715aec
GUEST_EXPORT_FRAMED(0x00715aec, d_00715aec::f_00715aec, 0x47f0);  // pushes {r4, r5, r6, r7, r8, r9, r10, lr} first, as the original

// f_00715b88: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00715b88 {

inline constexpr guest::Function<0x0029b88c, u32(u32)> call_0029b88c;

u32 f_00715b88(u32 r0_unused, u32 r1) {
    u32 r0_1 = call_0029b88c(r1);
    u32 r0_2 = *gptr<u32>(r0_1 + 4u);
    if (r0_2 == 0) {
        return 2u;
    }
    u32 zf_1 = r0_2 == 1u;
    if (zf_1) {
        r0_2 = 3u;
    } else {
        zf_1 = r0_2 == 2u;
    }
    if (zf_1) {
        return r0_2;
    }
    return r0_2 == 3u;
}

}  // namespace d_00715b88
GUEST_EXPORT_FRAMED(0x00715b88, d_00715b88::f_00715b88, 0x4010);  // pushes {r4, lr} first, as the original

// f_00715bc4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00715bc4 {

inline constexpr guest::Function<0x0029b88c, u32(u32, u32, u32, u32)> call_0029b88c;

u32 f_00715bc4(u32 r0, u32 r1) {
    u32 r6 = r0;
    u32 r7 = 0u;
    u32 r4 = r7;
    do {
        u32 r5_1 = r4 & 0xffu;  // (from the original)
        u32 r0_1 = call_0029b88c(r5_1, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        if (*gptr<u32>(r0_1 + 4u) == 0) {
            u32 r0_2 = call_0029b88c(r5_1, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
            r1 = *gptr<u32>(r6 + (r5_1 << 2) + 0x1cu);  // (from the original)
            if (*gptr<u32>(r0_2 + 0xcu) <= r1) {  // (from the original)
                r7 += 1u;
            }
        }
        r4 += 1u;
        guest::preempt();
    } while (s32(r4) < 0x66);  // (from the original)
    guest::cpu()->r[1] = r1;
    return r7;
}

}  // namespace d_00715bc4
GUEST_EXPORT_FRAMED(0x00715bc4, d_00715bc4::f_00715bc4, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_00715c98: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00715c98 {

inline constexpr guest::Function<0x0029b88c, u32(u32)> call_0029b88c;

u32 f_00715c98(u32 r0, u32 r1) {
    u32 r0_1 = call_0029b88c(r1);
    u32 r0_2 = *gptr<u32>(r0_1 + 0xcu);  // (from the original)
    u32 r1_1 = *gptr<u32>(r0 + (r1 << 2) + 0x1cu);  // (from the original)
    u32 zf_1 = r0_2 == r1_1;
    u32 cf_1 = r0_2 >= r1_1;
    if (r0_2 <= r1_1) {
        r0_2 = 1u;
    }
    if (cf_1 && !zf_1) {
        r0_2 = 0u;
    }
    guest::cpu()->r[1] = r1_1;
    return r0_2;
}

}  // namespace d_00715c98
GUEST_EXPORT_FRAMED(0x00715c98, d_00715c98::f_00715c98, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_00715cc8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00715cc8 {

struct __attribute__((packed)) Local_00715cc8_r1_1 {
    u8 unknown_0[0xa];  // (not used here)
    u8 byte_a;
    u8 byte_b;
    u8 unknown_c[0x5];  // (not used here)
    u8 byte_11;
    u8 byte_12;
};
GUEST_OFFSET(Local_00715cc8_r1_1, byte_a, 0xa);
GUEST_OFFSET(Local_00715cc8_r1_1, byte_b, 0xb);
GUEST_OFFSET(Local_00715cc8_r1_1, byte_11, 0x11);
GUEST_OFFSET(Local_00715cc8_r1_1, byte_12, 0x12);

inline constexpr guest::Function<0x0029b88c, u32(u32, u32, u32, u32)> call_0029b88c;

u32 f_00715cc8(u32 r0, u32 r1, u32 r2) {
    u32 r5 = r0;
    u32 r4 = r1;
    u32 r0_1 = call_0029b88c(r1, r1, r2, guest::cpu()->r[3]);
    gptr<Local_00715cc8_r1_1> r1_1 = gptr<Local_00715cc8_r1_1>(guest::cpu()->r[1]);
    u32 r0_2 = *gptr<u32>(r0_1 + 4u);
    if (r0_2 != 0) {
        if (r0_2 == 1u) {
            if (*gptr<u8>(r5 + 8u) == r4) {
                guest::cpu()->r[1] = r1_1.addr();
                return 1u;
            }
            if (*gptr<u8>(r5 + 9u) != r4) {
                guest::cpu()->r[1] = r1_1.addr();
                return 0u;
            }
            guest::cpu()->r[1] = r1_1.addr();
            return 1u;
        }
        if (r0_2 == 2u) {
            if (*gptr<u8>(r5 + 0xau) == r4) {  // (from the original)
                guest::cpu()->r[1] = r1_1.addr();
                return 1u;
            } else {
                r0 = 1u;
            }
            do {
                r1_1 = gptr<Local_00715cc8_r1_1>(r5 + r0);
                u32 zf_1 = r1_1->byte_a == r4;
                if (!zf_1) {
                    r1_1 = gptr<Local_00715cc8_r1_1>(u32(r1_1->byte_b));
                    zf_1 = r1_1.addr() == r4;
                }
                if (zf_1) {
                    guest::cpu()->r[1] = r1_1.addr();
                    return 1u;
                }
                r0 += 2u;
                guest::preempt();
            } while (s32(r0) < 7);
            guest::cpu()->r[1] = r1_1.addr();
            return 0u;
        }
        if (r0_2 != 3u) {
            guest::cpu()->r[1] = r1_1.addr();
            return 0u;
        }
        if (*gptr<u8>(r5 + 0x11u) == r4) {  // (from the original)
            guest::cpu()->r[1] = r1_1.addr();
            return 1u;
        } else {
            r0 = 1u;
        }
        do {
            r1_1 = gptr<Local_00715cc8_r1_1>(r5 + r0);
            u32 zf_2 = r1_1->byte_11 == r4;
            if (!zf_2) {
                r1_1 = gptr<Local_00715cc8_r1_1>(u32(r1_1->byte_12));
                zf_2 = r1_1.addr() == r4;
            }
            if (zf_2) {
                guest::cpu()->r[1] = r1_1.addr();
                return 1u;
            }
            r0 += 2u;
            guest::preempt();
        } while (s32(r0) < 7);
        guest::cpu()->r[1] = r1_1.addr();
        return 0u;
    }
    if (*gptr<u8>(r5 + 0x18u) != r4) {  // (from the original)
        guest::cpu()->r[1] = r1_1.addr();
        return 0u;
    }
    guest::cpu()->r[1] = r1_1.addr();
    return 1u;
}

}  // namespace d_00715cc8
GUEST_EXPORT_FRAMED(0x00715cc8, d_00715cc8::f_00715cc8, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_00715ffc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00715ffc {


u32 f_00715ffc(u32 r0) {
    u32 r2 = r0;
    r0 = 0u;
    u32 r1 = r0;
    do {
        u32 r3_1 = *gptr<u8>((r1 & 0xffu) + r2 + 0xc0u);  // (from the original)
        if (r3_1 == 1u) {
            r0 += 1u;
        } else if (r3_1 == 2u) {
            r0 += 2u;
        } else if (r3_1 == 3u) {
            r0 += 3u;
        }
        r1 += 1u;
        guest::preempt();
    } while (s32(r1) < 0x18);  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_00715ffc
GUEST_EXPORT(0x00715ffc, d_00715ffc::f_00715ffc);

// f_00716044: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00716044 {

inline constexpr guest::Function<0x006158d4, u32(u32)> call_006158d4;

u32 f_00716044(u32 r0, u32 r1) {
    u32 r0_1 = call_006158d4(r0);
    return *gptr<u32>(r0_1 + r1 * 0x28u + 0x28u);  // (from the original)
}

}  // namespace d_00716044
GUEST_EXPORT_FRAMED(0x00716044, d_00716044::f_00716044, 0x4010);  // pushes {r4, lr} first, as the original

// f_00716060: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00716060 {

struct __attribute__((packed)) Local_00716060_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_00716060_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_00716060_ea_1, word_4, 0x4);
GUEST_OFFSET(Local_00716060_ea_1, word_8, 0x8);

inline constexpr guest::Function<0x006c91d0, u32(u32)> call_006c91d0;

u32 f_00716060(u32 r0) {
    u32 r4 = 0u;
    u32 r1 = r0;
    u32 r7 = r4;
    u32 r6 = r4;
    u32 r5 = r4;
    r0 = r4;
    do {
        u32 r2_1 = *gptr<u8>((r0 & 0xffu) + r1 + 0xc0u);  // (from the original)
        if (r2_1 != 1u) {
            if (r2_1 != 2u) {
                if (r2_1 == 3u) {
                    r4 += 0x30d40u;  // (from the original)
                    r7 += 1u;
                } else {
                    goto L_7160c4;
                }
            }
            r4 += 0x186a0u;  // (from the original)
            r6 += 1u;
        }
        r4 += 0xc350u;  // (from the original)
        r5 += 1u;
L_7160c4:;
        r0 += 1u;
        guest::preempt();
    } while (s32(r0) < 0x18);  // (from the original)
    u32 r0_1 = call_006c91d0(r0);
    gptr<Local_00716060_ea_1> ea_1 = gptr<Local_00716060_ea_1>(r0_1 + 0x14u);  // (from the original)
    ea_1->word_0 = r7;
    ea_1->word_4 = r6;
    ea_1->word_8 = r5;
    return r4;
}

}  // namespace d_00716060
GUEST_EXPORT_FRAMED(0x00716060, d_00716060::f_00716060, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_00716128: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00716128 {

inline constexpr guest::Function<0x00715dac, u32(u32, u32, u32, u32)> call_00715dac;

u32 f_00716128(u32 r0) {
    u32 r5 = r0;
    u32 r4 = 0u;
    do {
        u32 r0_1 = call_00715dac(r5, r4 & 0xffu, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        if (r0_1 != 0) {
            return 1u;
        }
        r4 += 1u;
        guest::preempt();
    } while (s32(r4) < 0x18);  // (from the original)
    return 0u;
}

}  // namespace d_00716128
GUEST_EXPORT_FRAMED(0x00716128, d_00716128::f_00716128, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_00716168: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00716168 {

inline constexpr guest::Function<0x006158d4, u32(u32)> call_006158d4;

u32 f_00716168(u32 r0, u32 r1, u32 r2) {
    u32 r0_1 = call_006158d4(r0);
    u32 r1_1 = r1 * 5u;
    u32 r0_2 = *gptr<u32>(r0_1 + (r1_1 << 3) + (r2 << 2) + 0x18u);  // (from the original)
    guest::cpu()->r[1] = r1_1;
    return r0_2;
}

}  // namespace d_00716168
GUEST_EXPORT_FRAMED(0x00716168, d_00716168::f_00716168, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0071618c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0071618c {

inline constexpr guest::Function<0x006158d4, u32(u32)> call_006158d4;

u32 f_0071618c(u32 r0, u32 r1, u32 r2) {
    u32 r0_1 = call_006158d4(r0);
    return *gptr<u32>(r0_1 + r1 * 0x28u + (r2 << 2) + 0x28u);  // (from the original)
}

}  // namespace d_0071618c
GUEST_EXPORT_FRAMED(0x0071618c, d_0071618c::f_0071618c, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_00716260: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00716260 {

struct __attribute__((packed)) Object_00716260_1 {
    u8 unknown_0[0xc];  // (not used here)
    u8 byte_c;
};
GUEST_OFFSET(Object_00716260_1, byte_c, 0xc);

struct __attribute__((packed)) Local_00716260_ea_1 {
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
};
GUEST_OFFSET(Local_00716260_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_00716260_ea_1, word_4, 0x4);
GUEST_OFFSET(Local_00716260_ea_1, word_8, 0x8);
GUEST_OFFSET(Local_00716260_ea_1, word_c, 0xc);
GUEST_OFFSET(Local_00716260_ea_1, word_10, 0x10);
GUEST_OFFSET(Local_00716260_ea_1, word_14, 0x14);
GUEST_OFFSET(Local_00716260_ea_1, word_18, 0x18);
GUEST_OFFSET(Local_00716260_ea_1, word_1c, 0x1c);
GUEST_OFFSET(Local_00716260_ea_1, word_20, 0x20);
GUEST_OFFSET(Local_00716260_ea_1, word_24, 0x24);
GUEST_OFFSET(Local_00716260_ea_1, word_28, 0x28);
GUEST_OFFSET(Local_00716260_ea_1, word_2c, 0x2c);

struct __attribute__((packed)) Local_00716260_ea_2 {
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
GUEST_OFFSET(Local_00716260_ea_2, word_0, 0x0);
GUEST_OFFSET(Local_00716260_ea_2, word_4, 0x4);
GUEST_OFFSET(Local_00716260_ea_2, word_8, 0x8);
GUEST_OFFSET(Local_00716260_ea_2, word_c, 0xc);
GUEST_OFFSET(Local_00716260_ea_2, word_10, 0x10);
GUEST_OFFSET(Local_00716260_ea_2, word_14, 0x14);
GUEST_OFFSET(Local_00716260_ea_2, word_18, 0x18);
GUEST_OFFSET(Local_00716260_ea_2, word_1c, 0x1c);
GUEST_OFFSET(Local_00716260_ea_2, word_20, 0x20);

struct __attribute__((packed)) Local_00716260_ea_3 {
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
GUEST_OFFSET(Local_00716260_ea_3, word_0, 0x0);
GUEST_OFFSET(Local_00716260_ea_3, word_4, 0x4);
GUEST_OFFSET(Local_00716260_ea_3, word_8, 0x8);
GUEST_OFFSET(Local_00716260_ea_3, word_c, 0xc);
GUEST_OFFSET(Local_00716260_ea_3, word_10, 0x10);
GUEST_OFFSET(Local_00716260_ea_3, word_14, 0x14);
GUEST_OFFSET(Local_00716260_ea_3, word_18, 0x18);
GUEST_OFFSET(Local_00716260_ea_3, word_1c, 0x1c);
GUEST_OFFSET(Local_00716260_ea_3, word_20, 0x20);

inline constexpr u32 vtable_SearchCand_4_ = 0x008eb34cu;
inline constexpr guest::Function<0x002fb94c, u32(u32)> call_002fb94c;
inline constexpr guest::Function<0x002fc934, u32(u32, u32)> call_002fc934;
inline constexpr guest::Function<0x002fcaf4, u32(u32, u32, u32)> call_002fcaf4;
inline constexpr guest::Function<0x002fcb34, u32(u32)> call_002fcb34;
inline constexpr guest::Function<0x002fcb84, u32(u32, u32, u32)> call_002fcb84;
inline constexpr guest::Function<0x002fcbb0, u32(u32, u32, u32)> call_002fcbb0;
inline constexpr guest::Function<0x00306e7c, u32(u32, u32)> call_00306e7c;
inline constexpr guest::Function<0x00306f60, u32(u32, u32, u32)> call_00306f60;
inline constexpr guest::Function<0x00307040, u32(u32, u32, u32, u32)> call_00307040;
inline constexpr guest::Function<0x0030716c, u32(u32, u32, u32)> call_0030716c;
inline constexpr guest::Function<0x00724424, u32(u32, u32, u32)> call_00724424;

struct __attribute__((packed)) Frame_00716260 {
    u8 unknown_0[0x10];  // (not read or written by name)
    u32 word_10;
    u8 unknown_14[0x14];  // (not read or written by name)
    u32 word_28;
    u8 unknown_2c[0x2c];  // (not read or written by name)
};
GUEST_OFFSET(Frame_00716260, word_10, 0x10);
GUEST_OFFSET(Frame_00716260, word_28, 0x28);
GUEST_SIZE(Frame_00716260, 0x58);

void f_00716260(u32 r0, gptr<Object_00716260_1> arg1, u32 r2) {
    guest::StackFrameOf<Frame_00716260> frame;  // the original's stack frame
    u32 r1 = arg1.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r10 = guest::cpu()->r[10];
    u32 r11 = guest::cpu()->r[11];
    u32 r14 = guest::cpu()->r[14];
    u32 r7_1 = 0;
    u32 r0_17 = 0;
    gptr<Local_00716260_ea_1> ea_1 = gptr<Local_00716260_ea_1>(frame.at(0x28).addr());  // (from the original)
    ea_1->word_0 = r0;
    ea_1->word_4 = r1;
    ea_1->word_8 = r2;
    ea_1->word_c = r4;
    ea_1->word_10 = r5;
    ea_1->word_14 = r6;
    ea_1->word_18 = r7;
    ea_1->word_1c = r8;
    ea_1->word_20 = r9;
    ea_1->word_24 = r10;
    ea_1->word_28 = r11;
    ea_1->word_2c = r14;
    r11 = r2;
    u32 r0_1 = arg1->byte_c;
    u32 r0_2 = r0_1 & 7u;
    u32 zf_1 = r0_2 == 4u;
    u32 r1_2 = (r0_1 & 0x38u) >> 3;  // (from the original)
    u32 r0_3 = r0_2 * 5u;
    u32 r0_4 = frame.at(0).addr();
    call_00307040(r0_4, 4u, frame.at(0x14).addr(), guest::cpu()->r[3]);  // (from the original)
    *gptr<u32>(r0_4) = vtable_SearchCand_4_;
    u32 r0_6 = call_00306e7c(frame.at(0).addr(), 0x8eb34cu);  // (from the original)
    u32 r0_7 = call_002fb94c(r0_6);
    r2 = guest::cpu()->r[2];
    r9 = r0_7;
    r6 = 0u;
    r10 = r9 + 0x6bd0u;  // (from the original)
    r8 = ((zf_1 ? r0_3 + r1_2 - 5u : r0_3 + r1_2) << 3) + 0x88ef84u;  // (from the original)
    do {
        r5 = r8 + (r6 << 1);
        u32 r1_4 = *gptr<u16>(r5);
        u32 r0_8 = frame.at(0x20).addr();  // (from the original)
        call_002fcbb0(r0_8, r1_4, r2);
        u32 r0_9 = call_002fcb34(r0_8);
        r2 = guest::cpu()->r[2];
        if (r0_9 != 0x27u) {  // (from the original)
            u32 r1_7 = *gptr<u16>(r5);
            call_002fcbb0(frame.at(0x1c).addr(), r1_7, r2);  // (from the original)
            u32 r0_12 = call_002fcb34(frame.at(0x1c).addr());  // (from the original)
            r2 = guest::cpu()->r[2];
            if (r0_12 != 0x28u) {  // (from the original)
                u32 r0_13 = call_002fcaf4(r11, guest::cpu()->r[1], r2);
                r2 = guest::cpu()->r[2];
                if (r0_13 != 0) {
                    goto L_716350;
                }
                u32 r1_9 = *gptr<u16>(r5);
                u32 r0_14 = call_002fcb84(r11, r1_9, r2);
                r2 = guest::cpu()->r[2];
                if (r0_14 == 0) {
                    goto L_716350;
                }
            }
        }
        r7_1 = 1u;
        goto L_716354;
L_716350:;
        r7_1 = 0u;
L_716354:;
        if (r7_1 == 0) {
            if (r9 == 0) {
                goto L_7163d0;
            } else {
                r4 = 0u;
            }
L_716384:;
            u32 r0_15 = call_00724424(r10, r4, 0u);
            u32 r1_10 = *gptr<u16>(r5);
            u32 r0_16 = call_002fcb84(r0_15, r1_10, guest::cpu()->r[2]);
            r2 = guest::cpu()->r[2];
            if (r0_16 == 0) {
                r4 += 1u;
                if (r4 < 0x10u) {  // (from the original)
                    guest::preempt();
                    goto L_716384;
                }
                goto L_7163d0;
            }
        }
        r0_17 = frame.at(0).addr();
        call_0030716c(r0_17, r6, r2);
        r2 = guest::cpu()->r[2];
L_7163d0:;
        r6 += 1u;
        guest::preempt();
    } while (r6 < 4u);
    if (frame->word_10 != 0) {
        u32 r0_19 = call_00306f60(frame.at(0).addr(), guest::cpu()->r[1], r2);
        u32 r1_11 = gptr<u16>(r8)[r0_19];
        call_002fcbb0(frame.at(0x18).addr(), r1_11, r2);  // (from the original)
        call_002fc934(frame->word_28, frame.at(0x18).addr());  // (from the original)
        gptr<Local_00716260_ea_2> ea_2 = gptr<Local_00716260_ea_2>(frame.at(0x34).addr());  // (from the original)
        u32 r4_2 = ea_2->word_0;
        u32 r5_1 = ea_2->word_4;
        u32 r6_1 = ea_2->word_8;
        u32 r7_2 = ea_2->word_c;
        u32 r8_1 = ea_2->word_10;
        u32 r9_1 = ea_2->word_14;
        u32 r10_1 = ea_2->word_18;
        u32 r11_1 = ea_2->word_1c;
        guest::cpu()->r[4] = r4_2;
        guest::cpu()->r[5] = r5_1;
        guest::cpu()->r[6] = r6_1;
        guest::cpu()->r[7] = r7_2;
        guest::cpu()->r[8] = r8_1;
        guest::cpu()->r[9] = r9_1;
        guest::cpu()->r[10] = r10_1;
        guest::cpu()->r[11] = r11_1;
        return;
    }
    call_002fcbb0(frame->word_28, 0x7ffeu, r2);  // (from the original)
    gptr<Local_00716260_ea_3> ea_3 = gptr<Local_00716260_ea_3>(frame.at(0x34).addr());  // (from the original)
    u32 r4_3 = ea_3->word_0;
    u32 r5_2 = ea_3->word_4;
    u32 r6_2 = ea_3->word_8;
    u32 r7_3 = ea_3->word_c;
    u32 r8_2 = ea_3->word_10;
    u32 r9_2 = ea_3->word_14;
    u32 r10_2 = ea_3->word_18;
    u32 r11_2 = ea_3->word_1c;
    guest::cpu()->r[4] = r4_3;
    guest::cpu()->r[5] = r5_2;
    guest::cpu()->r[6] = r6_2;
    guest::cpu()->r[7] = r7_3;
    guest::cpu()->r[8] = r8_2;
    guest::cpu()->r[9] = r9_2;
    guest::cpu()->r[10] = r10_2;
    guest::cpu()->r[11] = r11_2;
}

}  // namespace d_00716260
GUEST_EXPORT(0x00716260, d_00716260::f_00716260);

// f_007164c0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_007164c0 {

struct __attribute__((packed)) Local_007164c0_ea_2 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_007164c0_ea_2, word_0, 0x0);
GUEST_OFFSET(Local_007164c0_ea_2, word_4, 0x4);

inline constexpr guest::Function<0x006c91d0, u32(u32)> call_006c91d0;
inline constexpr guest::Function<0x007203bc, u32(u32, u32, u32, u32)> call_007203bc;
inline constexpr guest::Function<0x0076d7a4, u32(u32)> call_0076d7a4;

u32 f_007164c0(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 res_1 = 0;
    u32 r4 = 0u;
    u32 r7 = r0;
    u32 r8 = r1;
    u32 r9 = 0x88f040u;  // (from the original)
    u32 r5 = r4;
    do {
        u32 r6_1 = r7 + (r5 * 0x81u + (r5 << 8) << 1);  // (from the original)
        u32 r0_2 = call_007203bc(r6_1 + 0x18u, r1, r2, r3);  // (from the original)
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (r0_2 != 0) {
            u32 r1_1 = *gptr<u8>(r6_1 + 0x36u);  // (from the original)
            r0 = r9 + r5 * 0x14u - 4u;  // (from the original)
            if ((r1_1 & 1u) == 0) {
                u32 ea_1 = r0 + 4u;
                r0 = ea_1;
                r4 += *gptr<u32>(ea_1);
            }
            r2 = 0u;
            r1 = r1_1 + 1u >> 1;
            if (r1 != 0) {
                do {
                    res_1 = r1 - 1u;
                    r1 = res_1;
                    gptr<Local_007164c0_ea_2> ea_2 = gptr<Local_007164c0_ea_2>(r0 + 4u);
                    r3 = ea_2->word_0;
                    r0 += 8u;
                    r4 += r3;
                    r2 += ea_2->word_4;
                    guest::preempt();
                } while (res_1 != 0);
            }
            r4 += r2;
        }
        r5 += 1u;
        guest::preempt();
    } while (r5 < 6u);
    if (u32(*gptr<u8>(r8 + 0x5727u)) >> 7 != 0) {  // (from the original)
        r4 += 0x26930u;  // (from the original)
    }
    if (!(u32(*gptr<u8>(r8 + 0x5704u)) & 0x10u)) {  // (from the original)
        if (r4 >= 0x2710u) {  // (from the original)
            r4 -= 0x2710u;  // (from the original)
        }
    }
    u32 r0_3 = call_0076d7a4(r8);
    if (r0_3 <= r4) {
        r0_3 = call_0076d7a4(r8);
        r4 -= r0_3;
    }
    u32 r0_4 = call_006c91d0(r0_3);
    *gptr<u32>(r0_4 + 0xcu) = r4;  // (from the original)
    return r4;
}

}  // namespace d_007164c0
GUEST_EXPORT_FRAMED(0x007164c0, d_007164c0::f_007164c0, 0x47f0);  // pushes {r4, r5, r6, r7, r8, r9, r10, lr} first, as the original

// f_007165d0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_007165d0 {

struct __attribute__((packed)) Object_007165d0_0 {
    u8 unknown_0[0x36];  // (not used here)
    u8 byte_36;
    u8 unknown_37[0x301];  // (not used here)
    u8 byte_338;
};
GUEST_OFFSET(Object_007165d0_0, byte_36, 0x36);
GUEST_OFFSET(Object_007165d0_0, byte_338, 0x338);

inline constexpr guest::Function<0x00305158, u32(u32)> call_00305158;

u32 f_007165d0(gptr<Object_007165d0_0> arg0) {
    u32 r0_1 = arg0->byte_36;
    if (r0_1 != 1u) {
        if (r0_1 == 0) {
            return 1u;
        }
        if (r0_1 == 2u || r0_1 == 3u) {
            return r0_1;
        }
        if (r0_1 == 4u) {
            if (arg0->byte_338 != 1u) {
                u32 r4_1 = 0u;
                u32 r0_3 = call_00305158(arg0.addr() + 0x61cu);  // (from the original)
                if (r0_3 != 0) {
                    r4_1 = 1u;
                }
                u32 r0_5 = call_00305158(arg0.addr() + 0xc20u);  // (from the original)
                if (r0_5 != 0) {
                    r4_1 += 1u;
                }
                u32 r0_7 = call_00305158(arg0.addr() + 0x91eu);  // (from the original)
                if (r0_7 != 0) {
                    r4_1 += 1u;
                }
                u32 r0_9 = call_00305158(arg0.addr() + 0xf22u);  // (from the original)
                if (r0_9 != 0) {
                    r4_1 += 1u;
                }
                return r4_1 + 5u & 0xffu;  // (from the original)
            }
            return 4u;
        }
    }
    return 0u;
}

}  // namespace d_007165d0
GUEST_EXPORT_FRAMED(0x007165d0, d_007165d0::f_007165d0, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_00716764: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00716764 {


u32 f_00716764(u32 r0, u32 r1) {
    u32 r3 = 0x88f29cu;  // (from the original)
    u32 r2 = 0u;
    do {
        u32 r12 = r2 & 0xffu;  // (from the original)
        if (!(r12 >= 0x2fu)) {  // (from the original)
            r1 = 0u;
L_716780:;
            if (*gptr<u8>(r3 + r1) != r12 && *gptr<u8>(r3 + r1 + 1u) != r12) {
                r1 += 2u;
                if (s32(r1) < 0x28) {  // (from the original)
                    guest::preempt();
                    goto L_716780;
                }
            } else {
                r12 = r2 & 0xffu;  // (from the original)
                r1 = 0u;
                do {
                    if (*gptr<u8>(r0 + r1) == r12 || *gptr<u8>(r0 + r1 + 1u) == r12) {
                        goto L_7167e8;
                    }
                    r1 += 2u;
                    guest::preempt();
                } while (r1 < 0x28u);  // (from the original)
                guest::cpu()->r[1] = r1;
                return 0u;
            }
        }
L_7167e8:;
        r2 += 1u;
        guest::preempt();
    } while (s32(r2) < 0x2f);  // (from the original)
    guest::cpu()->r[1] = r1;
    return 1u;
}

}  // namespace d_00716764
GUEST_EXPORT_FRAMED(0x00716764, d_00716764::f_00716764, 0x10);  // pushes {r4} first, as the original

// f_00716804: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00716804 {


u32 f_00716804(u32 r0_unused, u32 r1) {
    u32 r2 = 0x88f29cu;  // (from the original)
    u32 r0 = 0u;
    do {
        if (*gptr<u8>(r2 + r0) == r1 || *gptr<u8>(r2 + r0 + 1u) == r1) {
            return r1 - 1u;
        }
        r0 += 2u;
        guest::preempt();
    } while (s32(r0) < 0x28);  // (from the original)
    return ~0u;
}

}  // namespace d_00716804
GUEST_EXPORT(0x00716804, d_00716804::f_00716804);

// f_00716848: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00716848 {


u32 f_00716848(u32 r0_unused, u32 r1) {
    u32 r0 = 0;
    u32 r2 = 0;
    if (r1 >= 0x2fu) {  // (from the original)
        return 0u;
    } else {
        r2 = 0x88f29cu;  // (from the original)
        r0 = 0u;
    }
    do {
        if (*gptr<u8>(r2 + r0) == r1 || *gptr<u8>(r2 + r0 + 1u) == r1) {
            return 1u;
        }
        r0 += 2u;
        guest::preempt();
    } while (s32(r0) < 0x28);  // (from the original)
    return 0u;
}

}  // namespace d_00716848
GUEST_EXPORT(0x00716848, d_00716848::f_00716848);

// f_00716894: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00716894 {


u32 f_00716894(u32 r0, u32 r1) {
    r1 = *gptr<u8>(r0 + r1);
    u32 r2 = 0x88f29cu;  // (from the original)
    r0 = 0u;
    do {
        if (*gptr<u8>(r2 + r0) == r1) {
            return r0;
        }
        if (*gptr<u8>(r2 + r0 + 1u) == r1) {
            return r0 + 1u;
        }
        r0 += 2u;
        guest::preempt();
    } while (s32(r0) < 0x28);  // (from the original)
    return ~0u;
}

}  // namespace d_00716894
GUEST_EXPORT(0x00716894, d_00716894::f_00716894);

// f_007168dc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_007168dc {


u32 f_007168dc(u32 r0, u32 r1) {
    u32 r0_1 = *gptr<u8>(r0 + r1);
    if (r0_1 != 0) {
        r0_1 = 1u;
    }
    return r0_1;
}

}  // namespace d_007168dc
GUEST_EXPORT(0x007168dc, d_007168dc::f_007168dc);

// f_00716928: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00716928 {


u32 f_00716928(u32 r0) {
    u32 r1 = 0u;
    do {
        if (*gptr<u8>(r0 + r1) != 0 || *gptr<u8>(r0 + r1 + 1u) != 0) {
            guest::cpu()->r[1] = r1;
            return 1u;
        }
        r1 += 2u;
        guest::preempt();
    } while (s32(r1) < 0x28);  // (from the original)
    guest::cpu()->r[1] = r1;
    return 0u;
}

}  // namespace d_00716928
GUEST_EXPORT(0x00716928, d_00716928::f_00716928);

// f_00716b74: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00716b74 {

inline constexpr guest::Function<0x002fae84, u32(u32, u32, u32, u32)> call_002fae84;
inline constexpr guest::Function<0x002fb328, u32(u32, u32)> call_002fb328;
inline constexpr guest::Function<0x002fb378, u32(u32)> call_002fb378;
inline constexpr guest::Function<0x00300650, u32(u32)> call_00300650;
inline constexpr guest::Function<0x0056c0e4, u32(u32, u32)> call_0056c0e4;
inline constexpr guest::Function<0x00758de4, u32(u32)> call_00758de4;
inline constexpr guest::Function<0x00758e08, u32(u32)> call_00758e08;

struct __attribute__((packed)) Frame_00716b74 {
    u8 unknown_0[0x4];  // (not read or written by name)
    u32 word_4;
    u8 unknown_8[0x8];  // (not read or written by name)
};
GUEST_OFFSET(Frame_00716b74, word_4, 0x4);
GUEST_SIZE(Frame_00716b74, 0x10);

u32 f_00716b74(u32 r0, u32 r1) {
    guest::StackFrameOf<Frame_00716b74> frame;  // the original's stack frame
    u32 r0_1 = call_002fae84(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r1_1 = 0x6add4u;  // (from the original)
    u32 r0_2 = r0_1 + r1_1;
    if (r0_2 != 0) {
        r0_2 = *gptr<u16>(r0_2 + 0xeu);  // (from the original)
        r1_1 = r0_2 - 0x2007u;  // (from the original)
        if (r1_1 == 0) {
            guest::cpu()->r[1] = r1_1;
            return 0u;
        }
    }
    u32 r0_3 = call_0056c0e4(r0_2, r1_1);
    if (r0_3 != 0) {
        return 0u;
    }
    u32 r0_5 = call_00300650(frame.at(0).addr());
    u32 r4_1 = frame->word_4;
    u32 r0_6 = call_002fb378(r0_5);
    u32 r4_2 = *gptr<u32>(r0_6 + 4u);
    u32 r1_4 = (r4_1 << 8) >> 0x18;  // (from the original)
    if (r1_4 == 6u) {
        guest::cpu()->r[1] = r1_4;
        return 0u;
    }
    u32 r0_7 = call_002fb328(r0_6, r1_4);
    u32 r0_9 = call_00758de4(r0_7 + 0x62250u);  // (from the original)
    if (r0_9 != 0) {
        if (u32(s32(r4_2) >> 0x18) - 2u < 0x12u) {  // (from the original)
            return 0u;
        }
        return 1u;
    }
    u32 r0_10 = call_002fb328(r0_9, guest::cpu()->r[1]);
    u32 r0_12 = call_00758e08(r0_10 + 0x62250u);  // (from the original)
    u32 zf_1 = r0_12 == 0;
    u32 r0_13 = s32(r4_2) >> 0x18;  // (from the original)
    if (!zf_1) {
        if (r0_13 - 5u < 0xfu) {  // (from the original)
            return 0u;
        }
        return 1u;
    }
    if (r0_13 - 2u < 0x12u) {  // (from the original)
        return 0u;
    }
    return 1u;
}

}  // namespace d_00716b74
GUEST_EXPORT_FRAMED(0x00716b74, d_00716b74::f_00716b74, 0x4010);  // pushes {r4, lr} first, as the original

// f_00716c60: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00716c60 {

struct __attribute__((packed)) Local_00716c60_r0_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_00716c60_r0_1, word_0, 0x0);
GUEST_OFFSET(Local_00716c60_r0_1, word_4, 0x4);
GUEST_OFFSET(Local_00716c60_r0_1, word_8, 0x8);

inline constexpr guest::Function<0x002fb328, u32(u32)> call_002fb328;
inline constexpr guest::Function<0x002fb378, u32(u32, u32, u32, u32)> call_002fb378;
inline constexpr guest::Function<0x00308efc, u32(u32, u32)> call_00308efc;
inline constexpr guest::Function<0x00758de4, u32(u32)> call_00758de4;
inline constexpr guest::Function<0x00758e08, u32(u32)> call_00758e08;

struct __attribute__((packed)) Frame_00716c60 {
    u32 word_0;
    u8 unknown_4[0x4];  // (not read or written by name)
    u32 word_8;
    u8 unknown_c[0x4];  // (not read or written by name)
};
GUEST_OFFSET(Frame_00716c60, word_0, 0x0);
GUEST_OFFSET(Frame_00716c60, word_8, 0x8);
GUEST_SIZE(Frame_00716c60, 0x10);

u32 f_00716c60(u32 r0, u32 r1) {
    guest::StackFrameOf<Frame_00716c60> frame;  // the original's stack frame
    gptr<Local_00716c60_r0_1> r0_1 = gptr<Local_00716c60_r0_1>(call_002fb378(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]));
    u32 r1_1 = r0_1->word_0;
    u32 r4_1 = r0_1->word_4;
    frame->word_8 = r0_1->word_8;
    frame->word_0 = r1_1;
    *frame.at<u32>(4) = r4_1;
    call_00308efc(frame.at(0).addr(), r1_1);
    u32 r0_3 = *frame.at<u8>(6);
    if (r0_3 != 6u) {
        u32 r0_4 = call_002fb328(r0_3);
        u32 r0_6 = call_00758de4(r0_4 + 0x62250u);  // (from the original)
        if (r0_6 == 0) {
            u32 r0_7 = call_002fb328(r0_6);
            u32 r0_9 = call_00758e08(r0_7 + 0x62250u);  // (from the original)
            u32 zf_1 = r0_9 == 0;
            u32 r0_10 = s32(r4_1) >> 0x18;  // (from the original)
            if (!zf_1) {
                return r0_10 - 5u >= 7u;
            }
            if (r0_10 - 2u < 0xau) {  // (from the original)
                return 0u;
            }
            return 1u;
        }
        if (u32(s32(r4_1) >> 0x18) - 2u >= 8u) {  // (from the original)
            return 1u;
        }
        return 0u;
    }
    u32 r0_11 = call_002fb328(r0_3);
    u32 r0_13 = call_00758de4(r0_11 + 0x62250u);  // (from the original)
    if (r0_13 != 0) {
        if (u32(s32(r4_1) >> 0x18) - 0xau < 0xeu) {  // (from the original)
            return 1u;
        }
        return 0u;
    }
    call_002fb328(r0_13);
    call_00758e08(r0_13);
    if ((u32(s32(r4_1) >> 0x18) - 0xcu) < 0xcu) {  // (from the original)
        return 1u;
    }
    return 0u;
}

}  // namespace d_00716c60
GUEST_EXPORT_FRAMED(0x00716c60, d_00716c60::f_00716c60, 0x4010);  // pushes {r4, lr} first, as the original

// f_00716d80: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00716d80 {

struct __attribute__((packed)) Object_00716d80_0 {
    u8 unknown_0[0x4];  // (not used here)
    u16 half_4;
    u16 half_6;
};
GUEST_OFFSET(Object_00716d80_0, half_4, 0x4);
GUEST_OFFSET(Object_00716d80_0, half_6, 0x6);


u32 f_00716d80(gptr<Object_00716d80_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r1 = r0 + 4u;
    u32 r2 = 0xffffu;  // (from the original)
    u32 r4 = arg0->half_6;
    u32 r3 = 0u;
    if (arg0->half_4 != r2) {
        r3 = 1u;
    }
    u32 r12 = 0u;
    u32 r5 = 2u;
    do {
        u32 ea_1 = r1 + 4u;
        r1 = ea_1;
        if (r4 != r2) {
            r3 += 1u;
        }
        r4 = *gptr<u16>(r1 + 2u);
        if (*gptr<u16>(ea_1) != r2) {
            r12 += 1u;
        }
        r5 -= 1u;
        guest::preempt();
    } while (r5 != 0);
    u32 r1_1 = *gptr<u16>(r0 + 0xeu);  // (from the original)
    u32 r0_1 = r3 + r12;
    if (r1_1 != r2) {
        r0_1 += 1u;
    }
    guest::cpu()->r[1] = r1_1;
    return r0_1;
}

}  // namespace d_00716d80
GUEST_EXPORT_FRAMED(0x00716d80, d_00716d80::f_00716d80, 0x70);  // pushes {r4, r5, r6} first, as the original

// f_00716de4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00716de4 {

inline constexpr guest::Function<0x002fae84, u32(u32, u32, u32, u32)> call_002fae84;
inline constexpr guest::Function<0x002fb378, u32(u32)> call_002fb378;
inline constexpr guest::Function<0x00300650, u32(u32)> call_00300650;
inline constexpr guest::Function<0x0056c0e4, u32(u32, u32)> call_0056c0e4;

struct __attribute__((packed)) Frame_00716de4 {
    u8 unknown_0[0x4];  // (not read or written by name)
    u32 word_4;
    u8 unknown_8[0x8];  // (not read or written by name)
};
GUEST_OFFSET(Frame_00716de4, word_4, 0x4);
GUEST_SIZE(Frame_00716de4, 0x10);

u32 f_00716de4(u32 r0, u32 r1) {
    guest::StackFrameOf<Frame_00716de4> frame;  // the original's stack frame
    u32 r0_1 = call_002fae84(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r1_1 = 0x6add4u;  // (from the original)
    u32 r0_2 = r0_1 + r1_1;
    if (r0_2 != 0) {
        r0_2 = *gptr<u16>(r0_2 + 0xeu);  // (from the original)
        r1_1 = r0_2 - 0x2007u;  // (from the original)
        if (r1_1 == 0) {
            guest::cpu()->r[1] = r1_1;
            return 0u;
        }
    }
    u32 r0_3 = call_0056c0e4(r0_2, r1_1);
    if (r0_3 != 0) {
        return 0u;
    }
    u32 r0_5 = call_00300650(frame.at(0).addr());
    u32 r4_1 = frame->word_4;
    u32 r0_6 = call_002fb378(r0_5);
    u32 r0_7 = *gptr<u32>(r0_6 + 4u);
    u32 r1_3 = r4_1 >> 0x10u & 0xffu;  // (from the original)
    if (r1_3 != 6u) {
        guest::cpu()->r[1] = r1_3;
        return 0u;
    }
    if (s32(r0_7) >> 0x18 >= 0x14) {  // (from the original)
        guest::cpu()->r[1] = r1_3;
        return 1u;
    }
    guest::cpu()->r[1] = r1_3;
    return 0u;
}

}  // namespace d_00716de4
GUEST_EXPORT_FRAMED(0x00716de4, d_00716de4::f_00716de4, 0x4010);  // pushes {r4, lr} first, as the original

// f_00716e68: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00716e68 {

struct __attribute__((packed)) Object_00716e68_0 {
    u8 byte_0;
    u8 unknown_1[0x3];  // (not used here)
    u16 half_4;
    u16 half_6;
};
GUEST_OFFSET(Object_00716e68_0, byte_0, 0x0);
GUEST_OFFSET(Object_00716e68_0, half_4, 0x4);
GUEST_OFFSET(Object_00716e68_0, half_6, 0x6);

struct __attribute__((packed)) Local_00716e68_r0_2 {
    u8 byte_0;
    u8 unknown_1[0x12];  // (not used here)
    u8 byte_13;
};
GUEST_OFFSET(Local_00716e68_r0_2, byte_0, 0x0);
GUEST_OFFSET(Local_00716e68_r0_2, byte_13, 0x13);

inline guest::global<u32, 0x00aaf14c> global_00aaf14c;
inline constexpr guest::Function<0x0030b6c4, u32(u32, u32, u32, u32)> call_0030b6c4;

u32 f_00716e68(gptr<Object_00716e68_0> arg0, u32 r1, u32 r2, u32 r3) {
    u32 r0 = arg0.addr();
    u32 r4 = r0;
    u32 r0_1 = call_0030b6c4(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    if (r0_1 != 0) {
        r0_1 = *global_00aaf14c;
        if (r0_1 != 0) {
            gptr<Local_00716e68_r0_2> r0_2 = gptr<Local_00716e68_r0_2>(r0_1 + 0x5700u);  // (from the original)
            r1 = u32(r0_2->byte_0) << 0x1b;  // (from the original)
            if (r1 >> 0x1f) {  // (from the original)
                if ((u32(r0_2->byte_13) >> 7) != 0 && arg0->byte_0 < 2u) {
                    r1 = 0xffffu;  // (from the original)
                    r0 = r4 + 4u;
                    r2 = 0u;
                    u32 r12 = arg0->half_6;
                    if (arg0->half_4 != r1) {
                        r2 = 1u;
                    }
                    r3 = 0u;
                    u32 r14 = 2u;
                    do {
                        u32 ea_1 = r0 + 4u;
                        r0 = ea_1;
                        if (r12 != r1) {
                            r2 += 1u;
                        }
                        r12 = *gptr<u16>(r0 + 2u);
                        if (*gptr<u16>(ea_1) != r1) {
                            r3 += 1u;
                        }
                        r14 -= 1u;
                        guest::preempt();
                    } while (r14 != 0);
                    u32 r0_3 = r2 + r3;
                    if (*gptr<u16>(r4 + 0xeu) != r1) {  // (from the original)
                        r0_3 += 1u;
                    }
                    if (r0_3 < 6u) {
                        guest::cpu()->r[1] = r1;
                        return 1u;
                    }
                }
            }
            r0_1 = 0u;
        }
    }
    guest::cpu()->r[1] = r1;
    return r0_1;
}

}  // namespace d_00716e68
GUEST_EXPORT_FRAMED(0x00716e68, d_00716e68::f_00716e68, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_00717254: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00717254 {

struct __attribute__((packed)) Local_00717254_r3_1 {
    u8 unknown_0[0x4];  // (not used here)
    u16 half_4;
    u16 half_6;
};
GUEST_OFFSET(Local_00717254_r3_1, half_4, 0x4);
GUEST_OFFSET(Local_00717254_r3_1, half_6, 0x6);


u32 f_00717254(u32 r0, u32 r1) {
    u32 r2 = 0u;
    do {
        gptr<Local_00717254_r3_1> r3_1 = gptr<Local_00717254_r3_1>(r0 + (r2 << 1));
        if (r3_1->half_4 == r1 || r3_1->half_6 == r1) {
            return 1u;
        }
        r2 += 2u;
        guest::preempt();
    } while (s32(r2) < 6);
    return 0u;
}

}  // namespace d_00717254
GUEST_EXPORT(0x00717254, d_00717254::f_00717254);

// f_007179a0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_007179a0 {

inline constexpr guest::Function<0x00300888, u32(u32, u32, u32, u32)> call_00300888;
inline constexpr guest::Function<0x00535ab0, u32(u32, u32, u32)> call_00535ab0;
inline constexpr guest::Function<0x006a5e34, u32(u32, u32, u32, u32)> call_006a5e34;

struct __attribute__((packed)) Frame_007179a0 {
    u32 word_0;
    u32 word_4;
    u8 unknown_8[0x4];  // (not read or written by name)
};
GUEST_OFFSET(Frame_007179a0, word_0, 0x0);
GUEST_OFFSET(Frame_007179a0, word_4, 0x4);
GUEST_SIZE(Frame_007179a0, 0xc);

u32 f_007179a0(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_007179a0> frame;  // the original's stack frame
    u32 r0_1 = call_006a5e34(r0, r1, r2, r3);
    if (r0_1 == 0) {
        return r0_1;
    }
    u32 r0_3 = call_00300888(frame.at(0).addr(), frame.at(4).addr(), 0x28u, r2);  // (from the original)
    if (r0_3 == 0) {
        return r0_3;
    }
    u32 r0_4 = call_00535ab0(r1, frame->word_0, frame->word_4);
    return r0_4;
}

}  // namespace d_007179a0
GUEST_EXPORT_FRAMED(0x007179a0, d_007179a0::f_007179a0, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_007179ec: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_007179ec {


u32 f_007179ec(u32 r0, u32 r1) {
    if (r1 >= 8u) {
        return ~0u;
    }
    u32 r0_2 = *gptr<s8>(r0 + r1 + 0x34u);  // (from the original)
    u32 nf_1 = r0_2 >> 0x1f;  // (from the original)
    u32 vf_1 = (r0_2 & (r0_2 ^ r0_2)) >> 0x1f;  // (from the original)
    if (nf_1 == vf_1) {
        nf_1 = r0_2 - 4u >> 0x1f;  // (from the original)
        vf_1 = ((r0_2 ^ 4u) & (r0_2 ^ r0_2 - 4u)) >> 0x1f;  // (from the original)
    }
    if (nf_1 == vf_1) {
        return r0_2 - 4u;
    }
    return ~0u;
}

}  // namespace d_007179ec
GUEST_EXPORT(0x007179ec, d_007179ec::f_007179ec);

// f_00717aac: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00717aac {


u32 f_00717aac(u32 r0, u32 r1) {
    if (r1 >= 8u) {
        return 0u;
    }
    u32 r0_1 = *gptr<s8>(r0 + r1 + 0x34u);  // (from the original)
    if (s32(r0_1) >= 0 && s32(r0_1) < 4) {
        return 1u;
    }
    u32 nf_1 = r0_1 >> 0x1f;  // (from the original)
    u32 vf_1 = (r0_1 & (r0_1 ^ r0_1)) >> 0x1f;  // (from the original)
    if (nf_1 == vf_1) {
        nf_1 = r0_1 - 4u >> 0x1f;  // (from the original)
        vf_1 = ((r0_1 ^ 4u) & (r0_1 ^ r0_1 - 4u)) >> 0x1f;  // (from the original)
    }
    if (nf_1 != vf_1) {
        return 0u;
    }
    return s32(r0_1 - 4u) >= 0 ? 2u : 0u;
}

}  // namespace d_00717aac
GUEST_EXPORT(0x00717aac, d_00717aac::f_00717aac);

// f_00718364: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00718364 {

struct __attribute__((packed)) Object_00718364_0 {
    u16 half_0;
};
GUEST_OFFSET(Object_00718364_0, half_0, 0x0);


u32 f_00718364(gptr<Object_00718364_0> arg0) {
    u32 r0_1 = arg0->half_0;
    u32 zf_1 = r0_1 == 0xfcu;  // (from the original)
    u32 cf_1 = r0_1 >= 0xfcu;  // (from the original)
    if (r0_1 <= 0xfcu) {  // (from the original)
        r0_1 = 1u;
    }
    if (cf_1 && !zf_1) {
        r0_1 = 0u;
    }
    return r0_1;
}

}  // namespace d_00718364
GUEST_EXPORT(0x00718364, d_00718364::f_00718364);

// f_007186c4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_007186c4 {

struct __attribute__((packed)) Object_007186c4_1 {
    u8 unknown_0[0x846bcb];  // (not used here)
    u8 byte_846bcb;
};
GUEST_OFFSET(Object_007186c4_1, byte_846bcb, 0x846bcb);

inline constexpr guest::Function<0x0062512c, u32(u32, u32, u32)> call_0062512c;

void f_007186c4(u32 r0, gptr<Object_007186c4_1> arg1) {
    if (s32(arg1.addr()) >= 8) {
        return;
    }
    u32 r0_1 = arg1->byte_846bcb;
    call_0062512c(r0_1, r0 + arg1.addr() * 6u + 0xe4u, 1u);  // (from the original)
}

}  // namespace d_007186c4
GUEST_EXPORT(0x007186c4, d_007186c4::f_007186c4);

// f_007187e8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_007187e8 {

struct __attribute__((packed)) Local_007187e8_r0_2 {
    u16 half_0;
    u8 unknown_2[0x2];  // (not used here)
    u32 word_4;
};
GUEST_OFFSET(Local_007187e8_r0_2, half_0, 0x0);
GUEST_OFFSET(Local_007187e8_r0_2, word_4, 0x4);

inline guest::global<u16, 0x00886eda> global_00886eda;
inline guest::global<u16, 0x00886f00> global_00886f00;
inline guest::global<u32, 0x0094dfbc> global_0094dfbc;
inline guest::global<u32, 0x0094dfd4> global_0094dfd4;
inline guest::global<u32, 0x0094edd8> global_0094edd8;
inline guest::global<u8, 0x009506b0> global_009506b0;
inline guest::global<u32, 0x009506b4> global_009506b4;
inline constexpr guest::Function<0x00284b48, u32(u32, u32, u32, u32)> call_00284b48;
inline constexpr guest::Function<0x005b4cc0, u32(u32, u32, u32, u32)> call_005b4cc0;

u32 f_007187e8(u32 r0_unused, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x4);  // the original's stack frame
    u32 r12 = guest::cpu()->r[12];
    *frame.at<u32>(0x20) = r12;  // (from the original)
    u32 r0_1 = *global_0094edd8;
    if (r0_1 != 0) {
        u32 r5 = 0u;
        u32 r7 = r5;
        u32 r6 = r5;
        u32 r8 = r5;
        gptr<Local_007187e8_r0_2> r0_2 = gptr<Local_007187e8_r0_2>(call_005b4cc0(0xa5u, r1, r2, r3));  // (from the original)
        r2 = r0_2->half_0;
        r1 = 0u;
        if (r2 >= 0u && r2 != 0) {
            u32 r0 = r0_2->word_4;
            r12 = 4u;
            u32 r4 = 2u;
            do {
                r3 = *gptr<u16>(r0 + (r1 << 3));
                if (r3 != 0) {
                    if (r3 == 1u) {
                        r3 = r12 + (r1 << 3);
                        r6 = *gptr<u32>(r0 + r3);
                        r8 = *gptr<u16>(r0 + (r4 + (r1 << 3)));
                    }
                } else {
                    r3 = r12 + (r1 << 3);
                    r5 = *gptr<u32>(r0 + r3);
                    r7 = *gptr<u16>(r0 + (r4 + (r1 << 3)));
                }
                r1 += 1u;
                guest::preempt();
            } while (r2 > r1);
            if (r7 != 0 && r5 != 0) {
                r4 = 0u;
                if (r7 >= 0u && r7 != 0) {
                    u32 r9 = 0x886ed6u;  // (from the original)
                    u32 r10 = 0x950800u;  // (from the original)
                    u32 r11 = 0x886eecu;  // (from the original)
                    do {
                        r1 = *gptr<u16>(r9);
                        u32 r0_3 = *gptr<u16>(r5 + (r4 << 3));
                        if (r0_3 == r1) {
                            r0_1 = *gptr<u32>(r10);
                            if (r0_1 == 0) {
                                guest::cpu()->r[1] = r1;
                                return r0_1;
                            }
                        } else {
                            r1 = *gptr<u16>(r11);
                            if (r0_3 == r1) {
                                r0_1 = *global_0094dfd4;
                                if (r0_1 == 0) {
                                    guest::cpu()->r[1] = r1;
                                    return r0_1;
                                }
                            } else {
                                u32 r1_1 = *global_00886eda;
                                if (r0_3 == r1_1) {
                                    r0_1 = call_00284b48(r0_3, r1_1, r2, r3);
                                    r1 = guest::cpu()->r[1];
                                    r2 = guest::cpu()->r[2];
                                    r3 = guest::cpu()->r[3];
                                    if (r0_1 == 0) {
                                        return r0_1;
                                    }
                                } else {
                                    r1 = *global_00886f00;
                                    if (r0_3 == r1 && (*global_009506b0 != 0xffu || *global_009506b4 == 0)) {  // (from the original)
                                        guest::cpu()->r[1] = r1;
                                        return 0u;
                                    }
                                }
                            }
                        }
                        r4 += 1u;
                        guest::preempt();
                    } while (r4 < r7);
                }
            }
            if (r8 != 0 && r6 != 0) {
                r0 = 0u;
                if (r8 >= 0u && r8 != 0) {
                    r12 = 0x886f74u;  // (from the original)
                    r1 = *global_0094dfbc;
                    do {
                        if (*gptr<u16>(r6 + r0 * 0x1cu) == *gptr<u16>(r12) && r1 == 0) {  // (from the original)
                            guest::cpu()->r[1] = r1;
                            return 0u;
                        }
                        r0 += 1u;
                        guest::preempt();
                    } while (r0 < r8);
                }
            }
        }
        r0_1 = 1u;
    }
    guest::cpu()->r[1] = r1;
    return r0_1;
}

}  // namespace d_007187e8
GUEST_EXPORT_FRAMED(0x007187e8, d_007187e8::f_007187e8, 0x4ff0);  // pushes {r4, r5, r6, r7, r8, r9, r10, r11, lr} first, as the original

// f_00718c1c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00718c1c {

struct __attribute__((packed)) Object_00718c1c_0 {
    u8 unknown_0[0xc];  // (not used here)
    u32 word_c;
    u32 word_10;
};
GUEST_OFFSET(Object_00718c1c_0, word_c, 0xc);
GUEST_OFFSET(Object_00718c1c_0, word_10, 0x10);

inline guest::global<u32, 0x0087919c> global_0087919c;
inline guest::global<u32, 0x008791a0> global_008791a0;

u32 f_00718c1c(gptr<Object_00718c1c_0> arg0) {
    u32 r3_1 = arg0->word_c;
    u32 r2_1 = *global_0087919c;
    u32 r1_1 = *global_008791a0;
    if (r3_1 != r2_1) {
        guest::cpu()->r[1] = r1_1;
        return 0u;
    }
    if (r3_1 == 0 && ((arg0->word_10 | r1_1) & 1u) == 0) {
        guest::cpu()->r[1] = r1_1;
        return 1u;
    }
    if (arg0->word_10 != r1_1) {
        guest::cpu()->r[1] = r1_1;
        return 0u;
    }
    guest::cpu()->r[1] = r1_1;
    return 1u;
}

}  // namespace d_00718c1c
GUEST_EXPORT(0x00718c1c, d_00718c1c::f_00718c1c);

// f_00718c6c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00718c6c {

struct __attribute__((packed)) Object_00718c6c_0 {
    u8 unknown_0[0xc];  // (not used here)
    u32 word_c;
    u32 word_10;
};
GUEST_OFFSET(Object_00718c6c_0, word_c, 0xc);
GUEST_OFFSET(Object_00718c6c_0, word_10, 0x10);

inline guest::global<u32, 0x008791b4> global_008791b4;
inline guest::global<u32, 0x008791b8> global_008791b8;
inline guest::global<u32, 0x008791bc> global_008791bc;
inline guest::global<u32, 0x008791c0> global_008791c0;

u32 f_00718c6c(gptr<Object_00718c6c_0> arg0) {
    u32 r4_1 = 0;
    u32 r3_1 = arg0->word_c;
    u32 r1_1 = *global_008791c0;
    if (r3_1 == *global_008791bc) {
        if ((r3_1 != 0 || ((arg0->word_10 | r1_1) & 1u) != 0) && arg0->word_10 != r1_1) {
            goto L_718cb4;
        }
        r4_1 = 1u;
        goto L_718cb8;
    }
L_718cb4:;
    r4_1 = 0u;
L_718cb8:;
    u32 r1_2 = *global_008791b8;
    if (r3_1 == *global_008791b4) {
        if ((r3_1 != 0 || ((arg0->word_10 | r1_2) & 1u) != 0) && arg0->word_10 != r1_2) {
            guest::cpu()->r[1] = r1_2;
            return r4_1;
        }
        guest::cpu()->r[1] = r1_2;
        return 1u | r4_1;
    }
    guest::cpu()->r[1] = r1_2;
    return r4_1;
}

}  // namespace d_00718c6c
GUEST_EXPORT_FRAMED(0x00718c6c, d_00718c6c::f_00718c6c, 0x10);  // pushes {r4} first, as the original

// f_00718d38: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00718d38 {

struct __attribute__((packed)) Object_00718d38_0 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
    u8 unknown_8[0x7c];  // (not used here)
    u32 word_84;
    u8 unknown_88[0x86];  // (not used here)
    u8 byte_10e;
};
GUEST_OFFSET(Object_00718d38_0, word_4, 0x4);
GUEST_OFFSET(Object_00718d38_0, word_84, 0x84);
GUEST_OFFSET(Object_00718d38_0, byte_10e, 0x10e);

inline constexpr guest::Function<0x0075cd14, u32(u32, u32)> call_0075cd14;
inline constexpr guest::Function<0x0075d0f0, u32(u32, u32)> call_0075d0f0;

u32 f_00718d38(gptr<Object_00718d38_0> arg0) {
    u32 r1_1 = arg0->byte_10e;
    if (r1_1 != 0) {
        u32 r0_1 = arg0->word_4;
        if (r0_1 == 0) {
            guest::cpu()->r[1] = r1_1;
            return 0u;
        }
        u32 r0_2 = call_0075d0f0(r0_1, r1_1);
        return r0_2 != 0;
    }
    u32 r0_3 = arg0->word_84;
    if (r0_3 == 0) {
        guest::cpu()->r[1] = r1_1;
        return 0u;
    }
    u32 r0_4 = call_0075cd14(r0_3, r1_1);
    return r0_4 != 0;
}

}  // namespace d_00718d38
GUEST_EXPORT_FRAMED(0x00718d38, d_00718d38::f_00718d38, 0x4010);  // pushes {r4, lr} first, as the original

// f_00718dd8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00718dd8 {

inline constexpr guest::Function<0x0071ef10, u32(u32)> call_0071ef10;

u32 f_00718dd8(u32 r0) {
    u32 r0_2 = call_0071ef10(r0 + 0x458u);  // (from the original)
    return r0_2 == 0;
}

}  // namespace d_00718dd8
GUEST_EXPORT_FRAMED(0x00718dd8, d_00718dd8::f_00718dd8, 0x4010);  // pushes {r4, lr} first, as the original

// f_00718e20: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00718e20 {


u32 f_00718e20(gptr<SearchCandCore> arg0, u32 r1) {
    u32 r0 = arg0.addr();
    u32 r5 = guest::cpu()->r[5];
    u32 r2 = r0;
    u32 r3 = u32(arg0->count);
    r0 = 0u;
    if (r3 != 0 && s32(r3) >= 0) {
        r2 = arg0->bits.addr();
        r5 = 1u;
    }
    if (s32(r3) > 0) {
        do {
            u32 b_1 = s32(r0) >> 5;
            if ((gptr<u32>(r2)[b_1] & (r5 << (r0 & 0x1fu))) != 0) {  // (from the original)
                if (r1 == 0) {
                    guest::cpu()->r[1] = r1;
                    return r0;
                } else {
                    r1 -= 1u;
                }
            }
            r0 += 1u;
            guest::preempt();
        } while (s32(r3) > s32(r0));
    }
    guest::cpu()->r[1] = r1;
    return ~0u;
}

}  // namespace d_00718e20
GUEST_EXPORT_FRAMED(0x00718e20, d_00718e20::f_00718e20, 0x70);  // pushes {r4, r5, r6} first, as the original

// f_00718f9c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00718f9c {

struct __attribute__((packed)) Object_00718f9c_0 {
    u8 unknown_0[0x114];  // (not used here)
    u32 word_114;
};
GUEST_OFFSET(Object_00718f9c_0, word_114, 0x114);


u32 f_00718f9c(gptr<Object_00718f9c_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r12 = r0;
    u32 r3 = arg0->word_114;
    u32 r2 = 0u;
    r0 = r2;
    u32 r1 = r2;
    do {
        if (r3 <= r2) {
            guest::cpu()->r[1] = r1;
            return r0;
        }
        u32 r4_1 = *gptr<u32>(r12 + (r1 << 2) + 0x14u);  // (from the original)
        if (r4_1 != 0) {
            r2 += 1u;
            if (*gptr<u32>(r4_1 + 0x80u) != 0) {  // (from the original)
                r0 += 1u;
            }
        }
        r1 += 1u;
        guest::preempt();
    } while (s32(r1) < 0x40);  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_00718f9c
GUEST_EXPORT_FRAMED(0x00718f9c, d_00718f9c::f_00718f9c, 0x10);  // pushes {r4} first, as the original

// f_0071900c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0071900c {

struct __attribute__((packed)) Object_0071900c_0 {
    u8 unknown_0[0x118];  // (not used here)
    u32 word_118;
};
GUEST_OFFSET(Object_0071900c_0, word_118, 0x118);


u32 f_0071900c(gptr<Object_0071900c_0> arg0, u32 r1) {
    u32 r0_1 = arg0->word_118;
    if (r0_1 == 0) {
        return 0x18u;  // (from the original)
    }
    u32 r1_1 = *gptr<u32>(*gptr<u32>(r0_1) + 0x10u);  // (from the original)
    // virtual function 4 of r0_1
    return guest::call_address<u32>(r1_1, r0_1, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0071900c
GUEST_EXPORT(0x0071900c, d_0071900c::f_0071900c);

// f_0071902c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0071902c {

struct __attribute__((packed)) Object_0071902c_0 {
    u8 unknown_0[0x118];  // (not used here)
    u32 word_118;
};
GUEST_OFFSET(Object_0071902c_0, word_118, 0x118);


u32 f_0071902c(gptr<Object_0071902c_0> arg0) {
    u32 r0_1 = arg0->word_118;
    if (r0_1 == 0) {
        return 0x18u;  // (from the original)
    }
    u32 r1_1 = *gptr<u32>(*gptr<u32>(r0_1) + 0x14u);  // (from the original)
    // virtual function 5 of r0_1
    return guest::call_address<u32>(r1_1, r0_1, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0071902c
GUEST_EXPORT(0x0071902c, d_0071902c::f_0071902c);

// f_0071904c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0071904c {

struct __attribute__((packed)) Object_0071904c_0 {
    u8 unknown_0[0x118];  // (not used here)
    u32 word_118;
};
GUEST_OFFSET(Object_0071904c_0, word_118, 0x118);


u32 f_0071904c(gptr<Object_0071904c_0> arg0, u32 r1) {
    u32 r0_1 = arg0->word_118;
    if (r0_1 == 0) {
        return 0x18u;  // (from the original)
    }
    u32 r1_1 = *gptr<u32>(*gptr<u32>(r0_1) + 0x1cu);  // (from the original)
    // virtual function 7 of r0_1
    return guest::call_address<u32>(r1_1, r0_1, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0071904c
GUEST_EXPORT(0x0071904c, d_0071904c::f_0071904c);

// f_0071906c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0071906c {

struct __attribute__((packed)) Object_0071906c_0 {
    u8 unknown_0[0x118];  // (not used here)
    u32 word_118;
};
GUEST_OFFSET(Object_0071906c_0, word_118, 0x118);


u32 f_0071906c(gptr<Object_0071906c_0> arg0, u32 r1) {
    u32 r0_1 = arg0->word_118;
    if (r0_1 == 0) {
        return r0_1;
    }
    u32 r1_1 = *gptr<u32>(*gptr<u32>(r0_1) + 0x18u);  // (from the original)
    // virtual function 6 of r0_1
    return guest::call_address<u32>(r1_1, r0_1, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0071906c
GUEST_EXPORT(0x0071906c, d_0071906c::f_0071906c);

// f_0071a040: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0071a040 {


u32 f_0071a040(u32 r0_unused, u32 r1) {
    u32 r0_1 = 0x83b146u;  // (from the original)
    if (r1 < 4u) {
        r0_1 += (r1 << 4);
    }
    return r0_1;
}

}  // namespace d_0071a040
GUEST_EXPORT(0x0071a040, d_0071a040::f_0071a040);

// f_0071a054: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0071a054 {

struct __attribute__((packed)) Local_0071a054_r0_1 {
    u8 unknown_0[0x1f8];  // (not used here)
    float float_1f8;
    u8 unknown_1fc[0x1f0];  // (not used here)
    float float_3ec;
};
GUEST_OFFSET(Local_0071a054_r0_1, float_1f8, 0x1f8);
GUEST_OFFSET(Local_0071a054_r0_1, float_3ec, 0x3ec);


void f_0071a054(u32 r0, u32 r1) {
    if (r1 >= 0x12u) {  // (from the original)
        float S0_1 = 0.0f;
        guest::cpu()->r[1] = r1;
        guest::cpu()->s[0] = S0_1;
        return;
    }
    u32 r2_1 = *gptr<u8>(r0 + r1 + 0x434u);  // (from the original)
    if (r2_1 == 0) {
        r1 = r1 * 7u;
    }
    gptr<Local_0071a054_r0_1> r0_1 = gptr<Local_0071a054_r0_1>(r0 + (r1 << 2));
    float S0_2 = r2_1 == 0 ? r0_1->float_1f8 : r0_1->float_3ec;
    guest::cpu()->r[1] = r1;
    guest::cpu()->s[0] = S0_2;
}

}  // namespace d_0071a054
GUEST_EXPORT(0x0071a054, d_0071a054::f_0071a054);

// f_0071a310: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0071a310 {

inline constexpr guest::Function<0x003193e8, u32(u32, u32, u32, u32)> call_003193e8;
inline constexpr guest::Function<0x00712bd4, u32(u32, u32, u32, u32)> call_00712bd4;

u32 f_0071a310(u32 r0, u32 r1, u32 r2_unused, u32 r3) {
    guest::StackFrame frame(0x4);  // the original's stack frame
    u32 r12 = guest::cpu()->r[12];
    u32 r1_1 = 0;
    u32 r0_4 = 0;
    *frame.at<u32>(0x20) = r12;  // (from the original)
    u32 r5 = 1u;
    u32 r4 = 0u;
    u32 r8 = r0;
    u32 r7 = r1;
    u32 r9 = 0x38f4u;  // (from the original)
    u32 r11 = r5;
    u32 r10 = r4;
    do {
        u32 r6_1 = r8 + r4 * 0xa480u;  // (from the original)
        u32 r0_1 = call_00712bd4(r6_1, r4, r7, r3);
        r1_1 = guest::cpu()->r[1];
        r3 = guest::cpu()->r[3];
        if (r0_1 != 0) {
            u32 r6_2 = r6_1 + 0x6b88u;  // (from the original)
            u32 r3_1 = ~0u;
            u32 r0_3 = call_003193e8(r6_2 + 4u, r9, r3_1, r3_1);
            r3 = guest::cpu()->r[3];
            r1_1 = *gptr<u32>(r6_2);
            if (r1_1 == r0_3) {
                r0_4 = r11;
                goto L_71a388;
            }
        }
        r0_4 = r10;
L_71a388:;
        r4 += 1u;
        r5 &= r0_4;
        guest::preempt();
    } while (r4 < 4u);
    guest::cpu()->r[1] = r1_1;
    return r5;
}

}  // namespace d_0071a310
GUEST_EXPORT_FRAMED(0x0071a310, d_0071a310::f_0071a310, 0x4ff0);  // pushes {r4, r5, r6, r7, r8, r9, r10, r11, lr} first, as the original

// f_0071aa1c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0071aa1c {

struct __attribute__((packed)) Object_0071aa1c_1 {
    u32 word_0;
};
GUEST_OFFSET(Object_0071aa1c_1, word_0, 0x0);

inline constexpr guest::Function<0x002fc934, u32(u32, u32)> call_002fc934;

void f_0071aa1c(u32 r0_unused, gptr<Object_0071aa1c_1> arg1) {
    u32 r1_1 = arg1->word_0;
    if (r1_1 == 0) {
        call_002fc934(guest::cpu()->r[0], 0x95bfdcu);
        return;  // (from the original)
    }
    u32 r2_1 = *gptr<u32>(*gptr<u32>(r1_1) + 0xa4u);  // (from the original)
    // virtual function 41 of r1_1
    guest::call_address<u32>(r2_1, guest::cpu()->r[0], r1_1, r2_1, guest::cpu()->r[3]);
}

}  // namespace d_0071aa1c
GUEST_EXPORT(0x0071aa1c, d_0071aa1c::f_0071aa1c);

// f_0071ad3c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0071ad3c {

struct __attribute__((packed)) Object_0071ad3c_0 {
    u8 unknown_0[0x18];  // (not used here)
    u32 word_18;
    u32 word_1c;
};
GUEST_OFFSET(Object_0071ad3c_0, word_18, 0x18);
GUEST_OFFSET(Object_0071ad3c_0, word_1c, 0x1c);


u32 f_0071ad3c(gptr<Object_0071ad3c_0> arg0) {
    u32 r1_1 = arg0->word_1c;
    u32 r0_1 = s32(r1_1) <= s32(arg0->word_18);
    guest::cpu()->r[1] = r1_1;
    return r0_1;
}

}  // namespace d_0071ad3c
GUEST_EXPORT(0x0071ad3c, d_0071ad3c::f_0071ad3c);

// f_0071ae0c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0071ae0c {

struct __attribute__((packed)) Object_0071ae0c_0 {
    float float_0;
    float float_4;
    float float_8;
};
GUEST_OFFSET(Object_0071ae0c_0, float_0, 0x0);
GUEST_OFFSET(Object_0071ae0c_0, float_4, 0x4);
GUEST_OFFSET(Object_0071ae0c_0, float_8, 0x8);

inline constexpr guest::Function<0x00148710, u32(u32, u32, u32)> call_00148710;

void f_0071ae0c(gptr<Object_0071ae0c_0> arg0, u32 r1_unused, u32 r2) {
    float S0_1 = 0.0f;
    arg0->float_0 = S0_1;
    arg0->float_4 = S0_1;
    arg0->float_8 = S0_1;
    guest::cpu()->s[0] = S0_1;
    call_00148710(arg0.addr(), r2 + 0x80u, arg0.addr());
    return;  // (from the original)
}

}  // namespace d_0071ae0c
GUEST_EXPORT(0x0071ae0c, d_0071ae0c::f_0071ae0c);

// f_0071ae30: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0071ae30 {

struct __attribute__((packed)) Local_0071ae30_r4_1 {
    u8 unknown_0[0x154];  // (not used here)
    u32 word_154;
    u8 unknown_158[0xb0];  // (not used here)
    u8 byte_208;
};
GUEST_OFFSET(Local_0071ae30_r4_1, word_154, 0x154);
GUEST_OFFSET(Local_0071ae30_r4_1, byte_208, 0x208);

inline guest::global<u32, 0x0094fd3c> global_0094fd3c;
inline guest::global<u8, 0x00ad56e0> global_00ad56e0;
inline constexpr guest::Function<0x005ce6dc, u32(u32, u32)> call_005ce6dc;
inline constexpr guest::Function<0x007237e0, u32(u32, u32)> call_007237e0;

u32 f_0071ae30(u32 r0, u32 r1) {
    if (*global_00ad56e0 == 0) {
        gptr<Local_0071ae30_r4_1> r4_1 = gptr<Local_0071ae30_r4_1>(*global_0094fd3c);
        u32 r0_1 = call_005ce6dc(0x94fd3cu, r1);  // (from the original)
        r1 = guest::cpu()->r[1];
        if ((r0_1 != 0 || r4_1->byte_208 != 0 || (r4_1->word_154 & 4u) == 0) && *gptr<u8>(r0 + 0xf8u) == 0) {  // (from the original)
            u32 r0_2 = call_007237e0(r0, r1);
            r1 = guest::cpu()->r[1];
            if (r0_2 == 0) {
                r1 = 0x2f635cu;  // (from the original)
                if (!(*gptr<u32>(r0 + 0xb8u) == r1 && *gptr<u32>(r0 + 0xbcu) == 0)) {  // (from the original)
                    guest::cpu()->r[1] = r1;
                    return 1u;
                }
            }
        }
    }
    guest::cpu()->r[1] = r1;
    return 0u;
}

}  // namespace d_0071ae30
GUEST_EXPORT_FRAMED(0x0071ae30, d_0071ae30::f_0071ae30, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0071b2a8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0071b2a8 {

struct __attribute__((packed)) Object_0071b2a8_0 {
    u8 unknown_0[0xb8];  // (not used here)
    u32 word_b8;
    u32 word_bc;
    u8 unknown_c0[0x44];  // (not used here)
    u32 word_104;
};
GUEST_OFFSET(Object_0071b2a8_0, word_b8, 0xb8);
GUEST_OFFSET(Object_0071b2a8_0, word_bc, 0xbc);
GUEST_OFFSET(Object_0071b2a8_0, word_104, 0x104);

inline constexpr guest::Function<0x007237e0, u32(u32)> call_007237e0;

u32 f_0071b2a8(gptr<Object_0071b2a8_0> arg0) {
    u32 r0_5 = 0;
    if (arg0->word_104 == 0) {
        return ~0u;
    }
    u32 r0_2 = call_007237e0(arg0.addr());
    if (r0_2 != 0) {
        return ~0u;
    }
    if (arg0->word_b8 == 0x2f635cu && arg0->word_bc == 0) {  // (from the original)
        return ~0u;
    } else {
        r0_5 = *gptr<u32>(arg0->word_104 + 0xc8u);  // (from the original)
    }
    return r0_5;
}

}  // namespace d_0071b2a8
GUEST_EXPORT_FRAMED(0x0071b2a8, d_0071b2a8::f_0071b2a8, 0x4010);  // pushes {r4, lr} first, as the original

// f_0071b708: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0071b708 {

struct __attribute__((packed)) Object_0071b708_0 {
    u16 half_0;
};
GUEST_OFFSET(Object_0071b708_0, half_0, 0x0);

inline guest::global<u32, 0x0095debc> global_0095debc;
inline constexpr guest::Function<0x002fbb30, u32(u32, u32, u32, u32)> call_002fbb30;
inline constexpr guest::Function<0x003083e4, u32(u32, u32, u32, u32)> call_003083e4;

u32 f_0071b708(gptr<Object_0071b708_0> arg0, u32 r1, u32 r2_unused, u32 r3) {
    guest::StackFrame frame(0x650);  // the original's stack frame
    u32 r6_1 = frame.at(0).addr();
    call_002fbb30(r6_1, 0xa83afcu, 0x63cu, r3);  // (from the original)
    u32 r0_1 = gptr<u32>(r6_1)[u32(arg0->half_0)];
    *gptr<u8>(r0_1 + 0xfu) = 0;  // (from the original)
    u32 r0_2 = *global_0095debc;
    frame.release();
    return call_003083e4(r0_2, r1, 0x8810b4u, r0_1 + 0xau);  // (from the original)
}

}  // namespace d_0071b708
GUEST_EXPORT(0x0071b708, d_0071b708::f_0071b708);

// f_0071b83c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0071b83c {

struct __attribute__((packed)) Object_0071b83c_0 {
    u16 half_0;
};
GUEST_OFFSET(Object_0071b83c_0, half_0, 0x0);

inline constexpr guest::Function<0x002fbb30, u32(u32, u32, u32, u32)> call_002fbb30;

u32 f_0071b83c(gptr<Object_0071b83c_0> arg0) {
    guest::StackFrame frame(0x640);  // the original's stack frame
    u32 r5_1 = frame.at(0).addr();
    call_002fbb30(r5_1, 0xa83afcu, 0x63cu, guest::cpu()->r[3]);  // (from the original)
    return *gptr<s8>(gptr<u32>(r5_1)[u32(arg0->half_0)] + 2u);
}

}  // namespace d_0071b83c
GUEST_EXPORT_FRAMED(0x0071b83c, d_0071b83c::f_0071b83c, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0071b88c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0071b88c {

struct __attribute__((packed)) Object_0071b88c_0 {
    u16 half_0;
};
GUEST_OFFSET(Object_0071b88c_0, half_0, 0x0);

inline constexpr guest::Function<0x002fbb30, u32(u32, u32, u32, u32)> call_002fbb30;

u32 f_0071b88c(gptr<Object_0071b88c_0> arg0) {
    guest::StackFrame frame(0x640);  // the original's stack frame
    u32 r5_1 = frame.at(0).addr();
    call_002fbb30(r5_1, 0xa83afcu, 0x63cu, guest::cpu()->r[3]);  // (from the original)
    u32 r1_1 = gptr<u32>(r5_1)[u32(arg0->half_0)];
    *gptr<u8>(r1_1 + 0xfu) = 0;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    return r1_1 + 0xau;  // (from the original)
}

}  // namespace d_0071b88c
GUEST_EXPORT_FRAMED(0x0071b88c, d_0071b88c::f_0071b88c, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0071b8d0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0071b8d0 {

struct __attribute__((packed)) Object_0071b8d0_0 {
    u16 half_0;
};
GUEST_OFFSET(Object_0071b8d0_0, half_0, 0x0);

inline constexpr guest::Function<0x002fbb30, u32(u32, u32, u32, u32)> call_002fbb30;

u32 f_0071b8d0(gptr<Object_0071b8d0_0> arg0) {
    guest::StackFrame frame(0x640);  // the original's stack frame
    u32 r5_1 = frame.at(0).addr();
    call_002fbb30(r5_1, 0xa83afcu, 0x63cu, guest::cpu()->r[3]);  // (from the original)
    return u32(*gptr<u8>(gptr<u32>(r5_1)[u32(arg0->half_0)] + 0x1cu)) >> 4;  // (from the original)
}

}  // namespace d_0071b8d0
GUEST_EXPORT_FRAMED(0x0071b8d0, d_0071b8d0::f_0071b8d0, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0071bf58: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0071bf58 {

struct __attribute__((packed)) Object_0071bf58_0 {
    u8 unknown_0[0x60];  // (not used here)
    u32 word_60;
};
GUEST_OFFSET(Object_0071bf58_0, word_60, 0x60);


u32 f_0071bf58(gptr<Object_0071bf58_0> arg0, u32 r1) {
    u32 r0 = arg0.addr();
    u32 r2 = 0;
    u32 r12 = r0;
    u32 r0_1 = arg0->word_60;
    if (r0_1 == 0) {
        return r0_1;
    } else {
        r0 = 0u;
        r2 = r0;
    }
    do {
        u32 r3_1 = r12 + 0x10u;  // (from the original)
        if (r2 < 0xau) {  // (from the original)
            r3_1 += (r2 << 3);
        }
        r2 += 1u;
        if (*gptr<u32>(r3_1) == r1) {
            r0 += 1u;
        }
        guest::preempt();
    } while (s32(r2) < 0xa);  // (from the original)
    return r0;
}

}  // namespace d_0071bf58
GUEST_EXPORT_FRAMED(0x0071bf58, d_0071bf58::f_0071bf58, 0x10);  // pushes {r4} first, as the original

// f_0071bfa0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0071bfa0 {

struct __attribute__((packed)) Object_0071bfa0_0 {
    u8 unknown_0[0x60];  // (not used here)
    u32 word_60;
};
GUEST_OFFSET(Object_0071bfa0_0, word_60, 0x60);


u32 f_0071bfa0(gptr<Object_0071bfa0_0> arg0, u32 r1) {
    u32 r0 = arg0.addr();
    u32 r2 = 0;
    if (arg0->word_60 == 0) {
        return 0u;
    } else {
        r2 = 0u;
    }
    do {
        u32 r3_1 = r0 + 0x10u;  // (from the original)
        if (r2 < 0xau) {  // (from the original)
            r3_1 += (r2 << 3);
        }
        if (*gptr<u32>(r3_1) == r1) {
            return 1u;
        }
        r2 += 1u;
        guest::preempt();
    } while (s32(r2) < 0xa);  // (from the original)
    return 0u;
}

}  // namespace d_0071bfa0
GUEST_EXPORT(0x0071bfa0, d_0071bfa0::f_0071bfa0);

// f_0071c0d0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0071c0d0 {

struct __attribute__((packed)) Object_0071c0d0_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_0071c0d0_0, word_0, 0x0);

inline constexpr guest::Function<0x0047ea68, u32(u32, u32, u32)> call_0047ea68;

u32 f_0071c0d0(gptr<Object_0071c0d0_0> arg0) {
    u32 r0_2 = call_0047ea68(arg0.addr() + 4u, 0x1444u, 0u);  // (from the original)
    arg0->word_0 = r0_2;
    return r0_2;
}

}  // namespace d_0071c0d0
GUEST_EXPORT_FRAMED(0x0071c0d0, d_0071c0d0::f_0071c0d0, 0x4010);  // pushes {r4, lr} first, as the original

// f_0071c0f4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0071c0f4 {

struct __attribute__((packed)) Object_0071c0f4_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_0071c0f4_0, word_0, 0x0);

inline constexpr guest::Function<0x0047ea68, u32(u32, u32, u32)> call_0047ea68;

u32 f_0071c0f4(gptr<Object_0071c0f4_0> arg0) {
    u32 r0_2 = call_0047ea68(arg0.addr() + 4u, 0x1444u, 0u);  // (from the original)
    u32 r1_1 = arg0->word_0;
    guest::cpu()->r[1] = r1_1;
    return r0_2 == r1_1;
}

}  // namespace d_0071c0f4
GUEST_EXPORT_FRAMED(0x0071c0f4, d_0071c0f4::f_0071c0f4, 0x4010);  // pushes {r4, lr} first, as the original

// f_0071c124: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0071c124 {


u32 f_0071c124(u32 r0, u32 r1) {
    if (r1 < 4u) {
        r1 = r1 * 3u;
        r0 += (r1 << 3);
    }
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0071c124
GUEST_EXPORT(0x0071c124, d_0071c124::f_0071c124);

// f_0071c2f8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0071c2f8 {

inline constexpr guest::Function<0x002fb328, u32(u32, u32, u32, u32)> call_002fb328;
inline constexpr guest::Function<0x0056c0e4, u32(u32)> call_0056c0e4;
inline constexpr guest::Function<0x00710fcc, u32(u32, u32, u32, u32)> call_00710fcc;

u32 f_0071c2f8(u32 r0) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 r0_1 = call_002fb328(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0_1 + 0x62250u == 0) {  // (from the original)
        return r0_1 + 0x62250u;  // (from the original)
    }
    u32 r0_3 = call_0056c0e4(r0_1 + 0x62250u);  // (from the original)
    if (r0_3 != 0) {
        return 0u;
    }
    frame.release();
    return call_00710fcc(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0071c2f8
GUEST_EXPORT(0x0071c2f8, d_0071c2f8::f_0071c2f8);

// f_0071c358: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0071c358 {

inline constexpr guest::Function<0x002fb328, u32(u32, u32, u32, u32)> call_002fb328;
inline constexpr guest::Function<0x007111b4, u32(u32, u32, u32, u32)> call_007111b4;

u32 f_0071c358(u32 r0) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 r0_1 = call_002fb328(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_2 = r0_1 + 0x62250u;  // (from the original)
    if (r0_2 == 0) {
        return r0_2;
    }
    u32 r0_3 = call_002fb328(r0_2, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_4 = *gptr<u8>(r0_3 + 0x62264u);  // (from the original)
    if (r0_4 >= 2u) {
        u32 r0_5 = call_002fb328(r0_4, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
        frame.release();
        return call_007111b4(r0_5 + 0x62250u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    }
    u32 r0_7 = *gptr<u8>(r0 + 0x10u);  // (from the original)
    if (r0_7 != 1u) {
        r0_7 = 0u;
    }
    return r0_7;
}

}  // namespace d_0071c358
GUEST_EXPORT(0x0071c358, d_0071c358::f_0071c358);

// f_0071c620: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0071c620 {

inline guest::global<u32, 0x00aaf14c> global_00aaf14c;
inline constexpr guest::Function<0x002fb328, u32(u32, u32, u32, u32)> call_002fb328;
inline constexpr guest::Function<0x0056c0e4, u32(u32)> call_0056c0e4;
inline constexpr guest::Function<0x00710fcc, u32(u32)> call_00710fcc;

u32 f_0071c620(u32 r0, u32 r1) {
    u32 r0_1 = call_002fb328(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_2 = r0_1 + 0x62250u;  // (from the original)
    if (r0_2 == 0) {
        return 0u;
    }
    u32 r0_3 = call_0056c0e4(r0_2);
    if (r0_3 != 0) {
        return 0u;
    }
    u32 r0_4 = call_00710fcc(r0);
    if (r0_4 == 0) {
        return 0u;
    }
    u32 r0_5 = *global_00aaf14c;
    if (r0_5 != 0) {
        r0_5 = u32(*gptr<u8>(r0_5 + 0x5701u)) << 0x1e;  // (from the original)
        if (!(r0_5 >> 0x1f)) {  // (from the original)
            return 0u;
        }
    }
    u32 r0_6 = call_002fb328(r0_5, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    if (s32(u32(*gptr<u8>(r0_6 + 0x621d9u)) << 0x19) >= 0) {  // (from the original)
        guest::cpu()->r[1] = 0x6214fu;  // (from the original)
        return 1u;
    }
    guest::cpu()->r[1] = 0x6214fu;  // (from the original)
    return 0u;
}

}  // namespace d_0071c620
GUEST_EXPORT_FRAMED(0x0071c620, d_0071c620::f_0071c620, 0x4010);  // pushes {r4, lr} first, as the original

// f_0071cba4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0071cba4 {

struct __attribute__((packed)) Object_0071cba4_1 {
    u8 unknown_0[0x846fb6];  // (not used here)
    u8 byte_846fb6;
};
GUEST_OFFSET(Object_0071cba4_1, byte_846fb6, 0x846fb6);

inline constexpr guest::Function<0x0062512c, u32(u32, u32, u32)> call_0062512c;

u32 f_0071cba4(u32 r0, gptr<Object_0071cba4_1> arg1) {
    if (s32(arg1.addr()) >= 0xc) {  // (from the original)
        guest::cpu()->r[1] = arg1.addr();
        return r0;
    }
    u32 r0_1 = arg1->byte_846fb6;
    return call_0062512c(r0_1, r0 + arg1.addr() * 6u + 0x1370u, 1u);  // (from the original)
}

}  // namespace d_0071cba4
GUEST_EXPORT(0x0071cba4, d_0071cba4::f_0071cba4);

// f_0071cff8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0071cff8 {

struct __attribute__((packed)) Object_0071cff8_0 {
    float float_0;
    u8 unknown_4[0x4];  // (not used here)
    float float_8;
    float float_c;
};
GUEST_OFFSET(Object_0071cff8_0, float_0, 0x0);
GUEST_OFFSET(Object_0071cff8_0, float_8, 0x8);
GUEST_OFFSET(Object_0071cff8_0, float_c, 0xc);

struct __attribute__((packed)) Object_0071cff8_2 {
    float float_0;
    u8 unknown_4[0x4];  // (not used here)
    float float_8;
};
GUEST_OFFSET(Object_0071cff8_2, float_0, 0x0);
GUEST_OFFSET(Object_0071cff8_2, float_8, 0x8);

inline constexpr guest::Function<0x0014f4d0, u32(u32, u32, u32)> call_0014f4d0;

void f_0071cff8(gptr<Object_0071cff8_0> arg0, gptr<Float3> arg1, gptr<Object_0071cff8_2> arg2) {
    u32 fpsr = guest::cpu()->fpscr;
    float S1_1 = arg0->float_0;
    float S3_1 = arg0->float_8;
    float S0_1 = arg0->float_c;
    float S2_1 = 0.0f;
    float S5_1 = S1_1 * arg1->v[0] + S3_1 * arg1->v[2];
    float S1_2 = S1_1 * arg2->float_0 + S3_1 * arg2->float_8 + S0_1;
    float S0_2 = S5_1 + S0_1;
    u32 fpsr_1 = fpsr & 0xfffffffu | vfp_cmpf(S1_2, S2_1);  // (from the original)
    if (!(fpsr_1 >> 0x1e & 1) && fpsr_1 >> 0x1f == (fpsr_1 >> 0x1c & 1)) {  // (from the original)
        fpsr_1 = fpsr_1 & 0xfffffffu | vfp_cmpf(S0_2, S2_1);  // (from the original)
        if (!(fpsr_1 >> 0x1d & 1)) {  // (from the original)
            float S0_3 = -S0_2;
            guest::cpu()->s[0] = S0_3;
            guest::cpu()->s[1] = S1_2;
            call_0014f4d0(arg1.addr(), arg0.addr(), arg1.addr());
            return;
        }
    }
    u32 fpsr_2 = fpsr_1 & 0xfffffffu | vfp_cmpf(S1_2, S2_1);  // (from the original)
    if (fpsr_2 >> 0x1d & 1) {  // (from the original)
        guest::cpu()->r[1] = arg1.addr();
        guest::cpu()->s[0] = S0_2;
        guest::cpu()->s[1] = S1_2;
        return;
    }
    u32 fpsr_3 = fpsr_2 & 0xfffffffu | vfp_cmpf(S0_2, S2_1);  // (from the original)
    if (fpsr_3 >> 0x1e & 1 || fpsr_3 >> 0x1f != (fpsr_3 >> 0x1c & 1)) {  // (from the original)
        guest::cpu()->r[1] = arg1.addr();
        guest::cpu()->s[0] = S0_2;
        guest::cpu()->s[1] = S1_2;
        return;
    }
    float S0_4 = -S0_2;
    guest::cpu()->s[0] = S0_4;
    guest::cpu()->s[1] = S1_2;
    call_0014f4d0(arg1.addr(), arg0.addr(), arg1.addr());
}

}  // namespace d_0071cff8
GUEST_EXPORT(0x0071cff8, d_0071cff8::f_0071cff8);

// f_0071d0b8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0071d0b8 {

struct __attribute__((packed)) Object_0071d0b8_0 {
    u8 unknown_0[0xc];  // (not used here)
    u32 word_c;
    u32 word_10;
};
GUEST_OFFSET(Object_0071d0b8_0, word_c, 0xc);
GUEST_OFFSET(Object_0071d0b8_0, word_10, 0x10);

inline guest::global<u32, 0x008793f4> global_008793f4;
inline guest::global<u32, 0x008793f8> global_008793f8;

u32 f_0071d0b8(gptr<Object_0071d0b8_0> arg0) {
    u32 r3_1 = arg0->word_c;
    u32 r2_1 = *global_008793f4;
    u32 r1_1 = *global_008793f8;
    if (r3_1 != r2_1) {
        guest::cpu()->r[1] = r1_1;
        return 0u;
    }
    if (r3_1 == 0 && ((arg0->word_10 | r1_1) & 1u) == 0) {
        guest::cpu()->r[1] = r1_1;
        return 1u;
    }
    if (arg0->word_10 != r1_1) {
        guest::cpu()->r[1] = r1_1;
        return 0u;
    }
    guest::cpu()->r[1] = r1_1;
    return 1u;
}

}  // namespace d_0071d0b8
GUEST_EXPORT(0x0071d0b8, d_0071d0b8::f_0071d0b8);

// f_0071d108: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0071d108 {

struct __attribute__((packed)) Object_0071d108_0 {
    u8 unknown_0[0xc];  // (not used here)
    u32 word_c;
    u32 word_10;
};
GUEST_OFFSET(Object_0071d108_0, word_c, 0xc);
GUEST_OFFSET(Object_0071d108_0, word_10, 0x10);

inline guest::global<u32, 0x0087940c> global_0087940c;
inline guest::global<u32, 0x00879410> global_00879410;
inline guest::global<u32, 0x00879414> global_00879414;
inline guest::global<u32, 0x00879418> global_00879418;

u32 f_0071d108(gptr<Object_0071d108_0> arg0) {
    u32 r4_1 = 0;
    u32 r3_1 = arg0->word_c;
    u32 r1_1 = *global_00879418;
    if (r3_1 == *global_00879414) {
        if ((r3_1 != 0 || ((arg0->word_10 | r1_1) & 1u) != 0) && arg0->word_10 != r1_1) {
            goto L_71d150;
        }
        r4_1 = 1u;
        goto L_71d154;
    }
L_71d150:;
    r4_1 = 0u;
L_71d154:;
    u32 r1_2 = *global_00879410;
    if (r3_1 == *global_0087940c) {
        if ((r3_1 != 0 || ((arg0->word_10 | r1_2) & 1u) != 0) && arg0->word_10 != r1_2) {
            guest::cpu()->r[1] = r1_2;
            return r4_1;
        }
        guest::cpu()->r[1] = r1_2;
        return 1u | r4_1;
    }
    guest::cpu()->r[1] = r1_2;
    return r4_1;
}

}  // namespace d_0071d108
GUEST_EXPORT_FRAMED(0x0071d108, d_0071d108::f_0071d108, 0x10);  // pushes {r4} first, as the original

// f_0071d1a4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0071d1a4 {

struct __attribute__((packed)) Object_0071d1a4_0 {
    u8 unknown_0[0xc];  // (not used here)
    u32 word_c;
    u32 word_10;
};
GUEST_OFFSET(Object_0071d1a4_0, word_c, 0xc);
GUEST_OFFSET(Object_0071d1a4_0, word_10, 0x10);

inline guest::global<u32, 0x00879404> global_00879404;
inline guest::global<u32, 0x00879408> global_00879408;

u32 f_0071d1a4(gptr<Object_0071d1a4_0> arg0) {
    u32 r3_1 = arg0->word_c;
    u32 r2_1 = *global_00879404;
    u32 r1_1 = *global_00879408;
    if (r3_1 != r2_1) {
        guest::cpu()->r[1] = r1_1;
        return 0u;
    }
    if (r3_1 == 0 && ((arg0->word_10 | r1_1) & 1u) == 0) {
        guest::cpu()->r[1] = r1_1;
        return 1u;
    }
    if (arg0->word_10 != r1_1) {
        guest::cpu()->r[1] = r1_1;
        return 0u;
    }
    guest::cpu()->r[1] = r1_1;
    return 1u;
}

}  // namespace d_0071d1a4
GUEST_EXPORT(0x0071d1a4, d_0071d1a4::f_0071d1a4);

// f_0071d2b0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0071d2b0 {

struct __attribute__((packed)) Object_0071d2b0_0 {
    u8 unknown_0[0x1];  // (not used here)
    u8 byte_1;
};
GUEST_OFFSET(Object_0071d2b0_0, byte_1, 0x1);


u32 f_0071d2b0(gptr<Object_0071d2b0_0> arg0) {
    u32 r0_1 = u32(arg0->byte_1) & 0xfu;  // (from the original)
    if (r0_1 != 1u) {
        r0_1 = 0u;
    }
    return r0_1;
}

}  // namespace d_0071d2b0
GUEST_EXPORT(0x0071d2b0, d_0071d2b0::f_0071d2b0);

// f_0071d2d4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0071d2d4 {

struct __attribute__((packed)) Object_0071d2d4_0 {
    u8 unknown_0[0x10];  // (not used here)
    u32 word_10;
};
GUEST_OFFSET(Object_0071d2d4_0, word_10, 0x10);

inline constexpr guest::Function<0x001332d4, u32(u32, u32, u32, u32)> call_001332d4;

u32 f_0071d2d4(gptr<Object_0071d2d4_0> arg0) {
    u32 r0_1 = *gptr<u32>(arg0->word_10 + 0x144u) + 0xcu;  // (from the original)
    return call_001332d4(r0_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0071d2d4
GUEST_EXPORT(0x0071d2d4, d_0071d2d4::f_0071d2d4);

// f_0071d2e4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0071d2e4 {

inline constexpr guest::Function<0x0013c0e8, u32(u32, u32)> call_0013c0e8;

u32 f_0071d2e4(u32 r0, u32 r1) {
    if (r1 >= 6u || *gptr<u32>(r0 + (r1 << 2) + 0x14u) == 0) {  // (from the original)
        guest::cpu()->r[1] = r1;
        return 0u;
    }
    u32 r1_1 = r1 * 3u;
    return call_0013c0e8(r0 + (r1_1 << 3) + 0x2cu, r1_1);  // (from the original)
}

}  // namespace d_0071d2e4
GUEST_EXPORT(0x0071d2e4, d_0071d2e4::f_0071d2e4);

// f_0071d314: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0071d314 {


u32 f_0071d314(u32 r0, u32 r1) {
    if (r1 >= 6u) {
        return 0u;
    }
    u32 r0_1 = *gptr<u32>(r0 + (r1 << 2) + 0x14u);  // (from the original)
    if (r0_1 != 0) {
        r0_1 = 1u;
    }
    return r0_1;
}

}  // namespace d_0071d314
GUEST_EXPORT(0x0071d314, d_0071d314::f_0071d314);

// f_0071d474: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0071d474 {

inline constexpr guest::Function<0x003193e8, u32(u32, u32, u32, u32)> call_003193e8;

u32 f_0071d474(u32 r0) {
    u32 r3_1 = ~0u;
    return call_003193e8(r0 + 4u, 0x29604u, r3_1, r3_1);  // (from the original)
}

}  // namespace d_0071d474
GUEST_EXPORT(0x0071d474, d_0071d474::f_0071d474);

// f_0071d528: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0071d528 {

inline constexpr guest::Function<0x0071fce4, u32(u32, u32, u32, u32)> call_0071fce4;

u32 f_0071d528(u32 r0, u32 r1) {
    u32 r5 = r0;
    u32 r6 = r1;
    u32 r4 = 0u;
    do {
        u32 r0_2 = call_0071fce4(r5 + r4 * 0x7dd8u, r6, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        if (r0_2 != 0) {
            return 1u;
        }
        r4 += 1u;
        guest::preempt();
    } while (r4 < 0x10u);  // (from the original)
    return 0u;
}

}  // namespace d_0071d528
GUEST_EXPORT_FRAMED(0x0071d528, d_0071d528::f_0071d528, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0071d5f8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0071d5f8 {

inline constexpr guest::Function<0x0071fc90, u32(u32, u32, u32, u32)> call_0071fc90;

u32 f_0071d5f8(u32 r0, u32 r1) {
    u32 r5 = r0;
    u32 r6 = r1;
    u32 r4 = 0u;
    do {
        u32 r0_2 = call_0071fc90(r5 + r4 * 0x7dd8u, r6, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        if (r0_2 != 0) {
            return 1u;
        }
        r4 += 1u;
        guest::preempt();
    } while (r4 < 0x10u);  // (from the original)
    return 0u;
}

}  // namespace d_0071d5f8
GUEST_EXPORT_FRAMED(0x0071d5f8, d_0071d5f8::f_0071d5f8, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0071d664: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0071d664 {

inline constexpr guest::Function<0x0071d578, u32(u32, u32, u32, u32)> call_0071d578;

u32 f_0071d664(u32 r0, u32 r1) {
    u32 r0_2 = call_0071d578(r0 + 0x80308u, r1, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r4 = r0_2;
    u32 r0_4 = call_0071d578(r0 + 0xfe088u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r5 = r0_4;
    u32 r0_6 = call_0071d578(r0 + 0x2588u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    r1 = r0_6;
    r0 = 0x10u;  // (from the original)
    do {
        r0 -= 4u;
        if (r4 > r0) {
            return 1u;
        }
        if (r5 > r0) {
            return 2u;
        }
        if (r1 > r0) {
            return 0u;
        }
        guest::preempt();
    } while (r0 != 0);
    return ~0u;
}

}  // namespace d_0071d664
GUEST_EXPORT_FRAMED(0x0071d664, d_0071d664::f_0071d664, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0071d6e4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0071d6e4 {

inline constexpr guest::Function<0x002ff8b0, u32(u32, u32, u32, u32)> call_002ff8b0;
inline constexpr guest::Function<0x0071d528, u32(u32, u32)> call_0071d528;

u32 f_0071d6e4(u32 r0, u32 r1) {
    u32 r5 = r0;
    u32 r0_1 = call_002ff8b0(4u, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r6 = r0_1;
    if (!(r0_1 >= 4u)) {
        u32 r4 = 0u;
        do {
            u32 r0_3 = call_0071d528(r5 + r4 * 0x7dd80u + 0x2588u, r6);  // (from the original)
            if (r0_3 != 0) {
                return 1u;
            }
            r4 += 1u;
            guest::preempt();
        } while (r4 < 3u);
    }
    return 0u;
}

}  // namespace d_0071d6e4
GUEST_EXPORT_FRAMED(0x0071d6e4, d_0071d6e4::f_0071d6e4, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0071d7b4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0071d7b4 {

inline constexpr guest::Function<0x003193e8, u32(u32, u32, u32, u32)> call_003193e8;

u32 f_0071d7b4(u32 r0) {
    u32 r3_1 = ~0u;
    return call_003193e8(r0 + 4u, 0x17be0cu, r3_1, r3_1);  // (from the original)
}

}  // namespace d_0071d7b4
GUEST_EXPORT(0x0071d7b4, d_0071d7b4::f_0071d7b4);

// f_0071d9c4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0071d9c4 {

struct __attribute__((packed)) Object_0071d9c4_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_0071d9c4_0, word_0, 0x0);

inline constexpr guest::Function<0x0047ea68, u32(u32, u32, u32)> call_0047ea68;

u32 f_0071d9c4(gptr<Object_0071d9c4_0> arg0) {
    u32 r0_2 = call_0047ea68(arg0.addr() + 4u, 0x28f0u, 0u);  // (from the original)
    arg0->word_0 = r0_2;
    return r0_2;
}

}  // namespace d_0071d9c4
GUEST_EXPORT_FRAMED(0x0071d9c4, d_0071d9c4::f_0071d9c4, 0x4010);  // pushes {r4, lr} first, as the original

// f_0071d9e8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0071d9e8 {

struct __attribute__((packed)) Object_0071d9e8_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_0071d9e8_0, word_0, 0x0);

inline constexpr guest::Function<0x0047ea68, u32(u32, u32, u32)> call_0047ea68;

u32 f_0071d9e8(gptr<Object_0071d9e8_0> arg0) {
    u32 r0_2 = call_0047ea68(arg0.addr() + 4u, 0x28f0u, 0u);  // (from the original)
    u32 r1_1 = arg0->word_0;
    guest::cpu()->r[1] = r1_1;
    return r0_2 == r1_1;
}

}  // namespace d_0071d9e8
GUEST_EXPORT_FRAMED(0x0071d9e8, d_0071d9e8::f_0071d9e8, 0x4010);  // pushes {r4, lr} first, as the original

// f_0071e6a8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0071e6a8 {

inline constexpr guest::Function<0x002fb328, u32(u32, u32)> call_002fb328;
inline constexpr guest::Function<0x002ff8b0, u32(u32, u32)> call_002ff8b0;
inline constexpr guest::Function<0x00300904, u32(u32)> call_00300904;
inline constexpr guest::Function<0x00303770, u32(u32)> call_00303770;
inline constexpr guest::Function<0x003041c8, u32(u32)> call_003041c8;

u32 f_0071e6a8(u32 r0, u32 r1) {
    u32 r0_1 = call_002fb328(r0, r1);
    u32 r1_1 = guest::cpu()->r[1];
    u32 r0_2 = r0_1 + 0x6ae54u;  // (from the original)
    if (r0_2 != 0) {
        r1_1 = u32(*gptr<u16>(r0_2 + 0xeu)) - 0x2004u;  // (from the original)
        if (r1_1 == 0) {
            guest::cpu()->r[1] = r1_1;
            return 0u;
        }
    }
    u32 r0_3 = call_002ff8b0(0u, r1_1);
    u32 r0_4 = call_00303770(r0_3);
    if (r0_4 == 0) {
        return 0u;
    }
    if (!((u32(*gptr<u8>(r0_4 + 0x5701u)) << 0x1e) >> 0x1f)) {  // (from the original)
        return 0u;
    }
    u32 r0_5 = u32(*gptr<u8>(r0_4 + 0x5712u)) << 0x1a;  // (from the original)
    if (!(r0_5 >> 0x1f)) {  // (from the original)
        return 0u;
    }
    u32 r0_6 = call_00300904(r0_5);
    if (r0_6 == 0) {
        u32 r0_7 = call_003041c8(r0_6);
        if (r0_7 != 0x60u) {  // (from the original)
            return 1u;
        }
    }
    if ((u32(*gptr<u8>(r0_4 + 0x5713u)) & 1u) == 0) {  // (from the original)
        return 0u;
    }
    return 1u;
}

}  // namespace d_0071e6a8
GUEST_EXPORT_FRAMED(0x0071e6a8, d_0071e6a8::f_0071e6a8, 0x4010);  // pushes {r4, lr} first, as the original

// f_0071ec70: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0071ec70 {

inline constexpr guest::Function<0x007207d8, u32(u32, u32, u32, u32)> call_007207d8;

u32 f_0071ec70(u32 r0) {
    u32 r5 = r0;
    u32 r4 = 0u;
    do {
        if (s32(*gptr<u32>(r5 + (r4 << 2) + 0x210u)) <= 0) {  // (from the original)
            u32 r0_2 = call_007207d8(r5 + r4 * 0x18u + 0x14u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
            if (r0_2 == 0) {
                goto L_71ecb0;
            }
        }
        return 1u;
L_71ecb0:;
        r4 += 1u;
        guest::preempt();
    } while (s32(r4) < 4);
    return 0u;
}

}  // namespace d_0071ec70
GUEST_EXPORT_FRAMED(0x0071ec70, d_0071ec70::f_0071ec70, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0071ecf0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0071ecf0 {

struct __attribute__((packed)) Object_0071ecf0_0 {
    u8 unknown_0[0x3ca0];  // (not used here)
    u32 word_3ca0;
};
GUEST_OFFSET(Object_0071ecf0_0, word_3ca0, 0x3ca0);

inline guest::global<u32, 0x00aaf14c> global_00aaf14c;
inline constexpr guest::Function<0x007201d0, u32(u32, u32)> call_007201d0;

u32 f_0071ecf0(gptr<Object_0071ecf0_0> arg0, u32 r1) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 r1_1 = 0;
    u32 r3_1 = arg0->word_3ca0;
    u32 r2_1 = *global_00aaf14c;
    if (s32(r3_1) <= s32(r1)) {
        r1_1 = r3_1 + 0xau > r1 ? r1 - r3_1 : ~0u;  // (from the original)
    } else {
        r1_1 = ~0u;
    }
    u32 r1_2 = r1_1 + (*gptr<u32>(arg0.addr() + (*gptr<u32>(arg0.addr() + 0x185cu) << 2) + 0x1860u) - 1u) * 0xau;  // (from the original)
    frame.release();
    return call_007201d0(r2_1 + 0x6f10u, r1_2);  // (from the original)
}

}  // namespace d_0071ecf0
GUEST_EXPORT(0x0071ecf0, d_0071ecf0::f_0071ecf0);

// f_0071ed64: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0071ed64 {

struct __attribute__((packed)) Object_0071ed64_0 {
    u8 unknown_0[0x3520];  // (not used here)
    u32 word_3520;
};
GUEST_OFFSET(Object_0071ed64_0, word_3520, 0x3520);


u32 f_0071ed64(gptr<Object_0071ed64_0> arg0, u32 r1) {
    u32 r0_1 = arg0->word_3520;
    if (s32(r0_1) > s32(r1)) {
        return 0u;
    }
    if (r0_1 + 0xau > r1) {  // (from the original)
        return 1u;
    }
    return 0u;
}

}  // namespace d_0071ed64
GUEST_EXPORT(0x0071ed64, d_0071ed64::f_0071ed64);

// f_0071ed90: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0071ed90 {

struct __attribute__((packed)) Object_0071ed90_0 {
    u8 unknown_0[0x2780];  // (not used here)
    u32 word_2780;
};
GUEST_OFFSET(Object_0071ed90_0, word_2780, 0x2780);


u32 f_0071ed90(gptr<Object_0071ed90_0> arg0, u32 r1) {
    u32 r0_1 = arg0->word_2780;
    if (s32(r0_1) > s32(r1)) {
        return 0u;
    }
    return r0_1 + 8u > r1;
}

}  // namespace d_0071ed90
GUEST_EXPORT(0x0071ed90, d_0071ed90::f_0071ed90);

// f_0071edb8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0071edb8 {

struct __attribute__((packed)) Local_0071edb8_r4_1 {
    u32 word_0;
};
GUEST_OFFSET(Local_0071edb8_r4_1, word_0, 0x0);

inline guest::global<u32, 0x0095c6d0> global_0095c6d0;
inline constexpr guest::Function<0x002d5770, u32(u32, u32)> call_002d5770;
inline constexpr guest::Function<0x002f74c8, u32(u32)> call_002f74c8;
inline constexpr guest::Function<0x002f74e0, u32(u32, u32)> call_002f74e0;
inline constexpr guest::Function<0x00305f2c, u32(u32, u32)> call_00305f2c;
inline constexpr guest::Function<0x0076e62c, u32(u32, u32)> call_0076e62c;

u32 f_0071edb8(u32 r0, u32 r1) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 r1_2 = 0;
    u32 r0_6 = 0;
    u32 r0_7 = 0;
    u32 r0_1 = call_00305f2c(r0, r1);
    u32 r1_1 = guest::cpu()->r[1];
    gptr<Local_0071edb8_r4_1> r4_1 = gptr<Local_0071edb8_r4_1>(r0 + 0x2780u);  // (from the original)
    if (r0_1 != 3u) {
        u32 r0_2 = call_002f74c8(r0_1);
        u32 r0_3 = call_002f74e0(0x40000u, r0_2);  // (from the original)
        r1_1 = guest::cpu()->r[1];
        if (r0_3 == 0) {
            u32 r0_4 = r4_1->word_0;
            if (s32(r0_4) <= s32(r1)) {
                if (r0_4 + 8u > r1) {
                    r1_2 = r1 - r0_4;
                    r0_7 = *global_0095c6d0;
                    frame.release();
                    return call_0076e62c(r0_7, r1_2);
                }
            }
            r1_2 = ~0u;
            r0_7 = *global_0095c6d0;
            frame.release();
            return call_0076e62c(r0_7, r1_2);
        }
    }
    u32 r0_5 = r4_1->word_0;
    if (s32(r0_5) <= s32(r1)) {
        r1_1 = r1;
        r0_6 = r0_5 + 8u > r1 ? r1_1 - r0_5 : ~0u;
    } else {
        r0_6 = ~0u;
    }
    frame.release();
    return call_002d5770(r0_6, r1_1);
}

}  // namespace d_0071edb8
GUEST_EXPORT(0x0071edb8, d_0071edb8::f_0071edb8);

// f_0071f27c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0071f27c {

inline constexpr guest::Function<0x00746ee4, u32(u32, u32, u32, u32)> call_00746ee4;
inline constexpr guest::Function<0x00746f8c, u32(u32, u32, u32, u32)> call_00746f8c;

u32 f_0071f27c() {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 r0_1 = call_00746f8c(0xa22020u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    if (r0_1 == 0) {
        return 1u;
    }
    frame.release();
    return call_00746ee4(0xa22020u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
}

}  // namespace d_0071f27c
GUEST_EXPORT(0x0071f27c, d_0071f27c::f_0071f27c);

// f_0071f2a8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0071f2a8 {

struct __attribute__((packed)) Object_0071f2a8_0 {
    u8 unknown_0[0x2e4];  // (not used here)
    u8 byte_2e4;
};
GUEST_OFFSET(Object_0071f2a8_0, byte_2e4, 0x2e4);


u32 f_0071f2a8(gptr<Object_0071f2a8_0> arg0) {
    u32 r1_1 = arg0->byte_2e4;
    guest::cpu()->r[1] = r1_1;
    return r1_1 == 2u ? arg0.addr() + 0x28cu : 0u;  // (from the original)
}

}  // namespace d_0071f2a8
GUEST_EXPORT(0x0071f2a8, d_0071f2a8::f_0071f2a8);

// f_0071f2c4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0071f2c4 {


u32 f_0071f2c4(gptr<AcStrcCampingCar> arg0) {
    u32 r0_1 = arg0->byte_88;
    if (r0_1 >= 2u) {
        r0_1 = 0u;
    }
    return r0_1;
}

}  // namespace d_0071f2c4
GUEST_EXPORT(0x0071f2c4, d_0071f2c4::f_0071f2c4);

// f_0071f644: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0071f644 {

struct __attribute__((packed)) Object_0071f644_1 {
    u8 unknown_0[0x4];  // (not used here)
    u16 half_4;
};
GUEST_OFFSET(Object_0071f644_1, half_4, 0x4);

inline constexpr guest::Function<0x002fcbb0, u32(u32, u32, u32, u32)> call_002fcbb0;

u32 f_0071f644(u32 r0_unused, gptr<Object_0071f644_1> arg1) {
    u32 r1_1 = arg1->half_4;
    return call_002fcbb0(guest::cpu()->r[0], r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0071f644
GUEST_EXPORT(0x0071f644, d_0071f644::f_0071f644);

// f_0071f66c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0071f66c {

struct __attribute__((packed)) Object_0071f66c_1 {
    u8 unknown_0[0x86];  // (not used here)
    u16 half_86;
};
GUEST_OFFSET(Object_0071f66c_1, half_86, 0x86);

inline constexpr guest::Function<0x002fcbb0, u32(u32, u32, u32, u32)> call_002fcbb0;

void f_0071f66c(u32 r0_unused, gptr<Object_0071f66c_1> arg1) {
    u32 r1_1 = arg1->half_86;
    call_002fcbb0(guest::cpu()->r[0], r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0071f66c
GUEST_EXPORT(0x0071f66c, d_0071f66c::f_0071f66c);

// f_0071f69c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0071f69c {

struct __attribute__((packed)) Object_0071f69c_0 {
    u8 byte_0;
};
GUEST_OFFSET(Object_0071f69c_0, byte_0, 0x0);

inline constexpr guest::Function<0x002d0920, u32(u32, u32, u32, u32)> call_002d0920;
inline constexpr guest::Function<0x0030b6b8, u32(u32)> call_0030b6b8;

u32 f_0071f69c(gptr<Object_0071f69c_0> arg0, u32 r1) {
    u32 r0_1 = arg0->byte_0;
    u32 r0_2 = call_002d0920(r0_1, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0_2 == 0) {
        return r0_2;
    }
    u32 r0_4 = call_0030b6b8(r0_2 + ((u32(*gptr<u8>(r0_2 + 0x24u)) & 1u) << 4) + 0x3cu);  // (from the original)
    u32 r0_5 = r0_4 - 0x3356u;  // (from the original)
    if (r0_5 == 0) {
        return 1u;
    }
    return r0_5 == 1u ? 2u : 0u;
}

}  // namespace d_0071f69c
GUEST_EXPORT_FRAMED(0x0071f69c, d_0071f69c::f_0071f69c, 0x4010);  // pushes {r4, lr} first, as the original

// f_0071f6e4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0071f6e4 {

struct __attribute__((packed)) Object_0071f6e4_0 {
    u8 byte_0;
};
GUEST_OFFSET(Object_0071f6e4_0, byte_0, 0x0);

inline constexpr guest::Function<0x002d0920, u32(u32, u32, u32, u32)> call_002d0920;
inline constexpr guest::Function<0x005c132c, u32(u32, u32)> call_005c132c;
inline constexpr guest::Function<0x006c1678, u32(u32, u32, u32)> call_006c1678;
inline constexpr guest::Function<0x0070ab44, u32(u32, u32, u32, u32)> call_0070ab44;

u32 f_0071f6e4(gptr<Object_0071f6e4_0> arg0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x34);  // the original's stack frame
    u32 r0_1 = arg0->byte_0;
    u32 r0_2 = call_002d0920(r0_1, r1, r2, r3);
    if (r0_2 != 0) {
        u32 r0_3 = arg0->byte_0;
        u32 r0_4 = call_005c132c(r0_3, 0u);
        if (r0_4 != 0) {
            call_0070ab44(r0_4 + 0x1b4u, frame.at(0).addr(), *gptr<u32>(r0_4 + 0x25cu), 0u);  // (from the original)
            call_006c1678(r0_2, r0_4, frame.at(0).addr());
            return 1u;
        }
    }
    return 0u;
}

}  // namespace d_0071f6e4
GUEST_EXPORT_FRAMED(0x0071f6e4, d_0071f6e4::f_0071f6e4, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_0071f750: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0071f750 {

struct __attribute__((packed)) Object_0071f750_0 {
    u8 byte_0;
};
GUEST_OFFSET(Object_0071f750_0, byte_0, 0x0);

inline constexpr guest::Function<0x002d0920, u32(u32, u32, u32, u32)> call_002d0920;
inline constexpr guest::Function<0x006bead8, u32(u32, u32)> call_006bead8;

u32 f_0071f750(gptr<Object_0071f750_0> arg0, u32 r1) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 r0_1 = arg0->byte_0;
    u32 r0_2 = call_002d0920(r0_1, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0_2 == 0) {
        return r0_2;
    }
    frame.release();
    return call_006bead8(r0_2, r1);
}

}  // namespace d_0071f750
GUEST_EXPORT(0x0071f750, d_0071f750::f_0071f750);

// f_0071f778: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0071f778 {

struct __attribute__((packed)) Object_0071f778_0 {
    u8 byte_0;
};
GUEST_OFFSET(Object_0071f778_0, byte_0, 0x0);

inline constexpr guest::Function<0x002d0920, u32(u32, u32, u32, u32)> call_002d0920;
inline constexpr guest::Function<0x006be888, u32(u32, u32, u32, u32)> call_006be888;

u32 f_0071f778(gptr<Object_0071f778_0> arg0) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 r0_1 = arg0->byte_0;
    u32 r0_2 = call_002d0920(r0_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0_2 == 0) {
        return r0_2;
    }
    frame.release();
    return call_006be888(r0_2, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0071f778
GUEST_EXPORT(0x0071f778, d_0071f778::f_0071f778);

// f_0071f798: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0071f798 {

struct __attribute__((packed)) Object_0071f798_0 {
    u8 byte_0;
};
GUEST_OFFSET(Object_0071f798_0, byte_0, 0x0);

struct __attribute__((packed)) Object_0071f798_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Object_0071f798_1, word_0, 0x0);
GUEST_OFFSET(Object_0071f798_1, word_4, 0x4);
GUEST_OFFSET(Object_0071f798_1, word_8, 0x8);

struct __attribute__((packed)) Local_0071f798_r0_2 {
    u8 unknown_0[0x644];  // (not used here)
    u32 word_644;
    u32 word_648;
    u32 word_64c;
};
GUEST_OFFSET(Local_0071f798_r0_2, word_644, 0x644);
GUEST_OFFSET(Local_0071f798_r0_2, word_648, 0x648);
GUEST_OFFSET(Local_0071f798_r0_2, word_64c, 0x64c);

inline constexpr guest::Function<0x002d0920, u32(u32, u32, u32, u32)> call_002d0920;

u32 f_0071f798(gptr<Object_0071f798_0> arg0, gptr<Object_0071f798_1> arg1) {
    u32 r0_1 = arg0->byte_0;
    gptr<Local_0071f798_r0_2> r0_2 = gptr<Local_0071f798_r0_2>(call_002d0920(r0_1, arg1.addr(), guest::cpu()->r[2], guest::cpu()->r[3]));
    if (r0_2.addr() == 0) {
        return r0_2.addr();
    }
    if (arg1.addr() == 0) {
        return 1u;
    }
    arg1->word_0 = r0_2->word_644;
    u32 r1_2 = r0_2->word_648;
    arg1->word_4 = r1_2;
    arg1->word_8 = r0_2->word_64c;
    guest::cpu()->r[1] = r1_2;
    return 1u;
}

}  // namespace d_0071f798
GUEST_EXPORT_FRAMED(0x0071f798, d_0071f798::f_0071f798, 0x4010);  // pushes {r4, lr} first, as the original

// f_0071f7d8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0071f7d8 {

struct __attribute__((packed)) Object_0071f7d8_0 {
    u8 byte_0;
};
GUEST_OFFSET(Object_0071f7d8_0, byte_0, 0x0);

struct __attribute__((packed)) Object_0071f7d8_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Object_0071f7d8_1, word_0, 0x0);
GUEST_OFFSET(Object_0071f7d8_1, word_4, 0x4);
GUEST_OFFSET(Object_0071f7d8_1, word_8, 0x8);

struct __attribute__((packed)) Local_0071f7d8_r0_2 {
    u8 unknown_0[0x640];  // (not used here)
    u8 byte_640;
    u8 unknown_641[0x3];  // (not used here)
    u32 word_644;
    u32 word_648;
    u32 word_64c;
};
GUEST_OFFSET(Local_0071f7d8_r0_2, byte_640, 0x640);
GUEST_OFFSET(Local_0071f7d8_r0_2, word_644, 0x644);
GUEST_OFFSET(Local_0071f7d8_r0_2, word_648, 0x648);
GUEST_OFFSET(Local_0071f7d8_r0_2, word_64c, 0x64c);

inline constexpr guest::Function<0x002d0920, u32(u32, u32, u32, u32)> call_002d0920;

u32 f_0071f7d8(gptr<Object_0071f7d8_0> arg0, gptr<Object_0071f7d8_1> arg1) {
    u32 r0_1 = arg0->byte_0;
    gptr<Local_0071f7d8_r0_2> r0_2 = gptr<Local_0071f7d8_r0_2>(call_002d0920(r0_1, arg1.addr(), guest::cpu()->r[2], guest::cpu()->r[3]));
    u32 r1_1 = guest::cpu()->r[1];
    if (r0_2.addr() != 0) {
        if (arg1.addr() != 0) {
            arg1->word_0 = r0_2->word_644;
            r1_1 = r0_2->word_648;
            arg1->word_4 = r1_1;
            arg1->word_8 = r0_2->word_64c;
        }
        u32 r0_3 = arg0->byte_0;
        u32 r0_4 = call_002d0920(r0_3, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1_1 = guest::cpu()->r[1];
        u32 zf_1 = r0_4 == 0;
        if (!zf_1) {
            zf_1 = r0_4 + 0x668u == 0;  // (from the original)
            r0_4 = r0_4 + 0x668u;  // (from the original)
        }
        if (!zf_1) {
            zf_1 = *gptr<u32>(r0_4) == 0;
        }
        r0_2 = gptr<Local_0071f7d8_r0_2>(zf_1 && r0_2->byte_640 == 4u);
    }
    guest::cpu()->r[1] = r1_1;
    return r0_2.addr();
}

}  // namespace d_0071f7d8
GUEST_EXPORT_FRAMED(0x0071f7d8, d_0071f7d8::f_0071f7d8, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0071fc78: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0071fc78 {

struct __attribute__((packed)) Object_0071fc78_0 {
    u8 unknown_0[0x7dd6];  // (not used here)
    u8 byte_7dd6;
};
GUEST_OFFSET(Object_0071fc78_0, byte_7dd6, 0x7dd6);


u32 f_0071fc78(gptr<Object_0071fc78_0> arg0) {
    return (u32(arg0->byte_7dd6) & 4u) >> 2;
}

}  // namespace d_0071fc78
GUEST_EXPORT(0x0071fc78, d_0071fc78::f_0071fc78);

// f_0071fc90: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0071fc90 {


u32 f_0071fc90(u32 r0, u32 r1) {
    if (r1 >= 4u) {
        return 0u;
    }
    return (u32(*gptr<u8>(r0 + r1 + 0x7dd2u)) & 4u) >> 2;  // (from the original)
}

}  // namespace d_0071fc90
GUEST_EXPORT(0x0071fc90, d_0071fc90::f_0071fc90);

// f_0071fce4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0071fce4 {


u32 f_0071fce4(u32 r0, u32 r1) {
    if (r1 >= 4u) {
        return 0u;
    }
    return (u32(*gptr<u8>(r0 + r1 + 0x7dd2u)) & 8u) >> 3;  // (from the original)
}

}  // namespace d_0071fce4
GUEST_EXPORT(0x0071fce4, d_0071fce4::f_0071fce4);

// f_0071fd0c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0071fd0c {

struct __attribute__((packed)) Object_0071fd0c_0 {
    u8 unknown_0[0x7dc8];  // (not used here)
    u32 word_7dc8;
};
GUEST_OFFSET(Object_0071fd0c_0, word_7dc8, 0x7dc8);

struct __attribute__((packed)) Object_0071fd0c_1 {
    u8 unknown_0[0x7dc8];  // (not used here)
    u32 word_7dc8;
};
GUEST_OFFSET(Object_0071fd0c_1, word_7dc8, 0x7dc8);


u32 f_0071fd0c(gptr<Object_0071fd0c_0> arg0, gptr<Object_0071fd0c_1> arg1) {
    return !(arg0->word_7dc8 >= arg1->word_7dc8);
}

}  // namespace d_0071fd0c
GUEST_EXPORT(0x0071fd0c, d_0071fd0c::f_0071fd0c);

// f_0071fe48: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0071fe48 {

struct __attribute__((packed)) Object_0071fe48_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_0071fe48_0, word_0, 0x0);

inline constexpr guest::Function<0x0047ea68, u32(u32, u32, u32)> call_0047ea68;

u32 f_0071fe48(gptr<Object_0071fe48_0> arg0) {
    u32 r0_2 = call_0047ea68(arg0.addr() + 4u, 0x7f0u, 0u);  // (from the original)
    arg0->word_0 = r0_2;
    return r0_2;
}

}  // namespace d_0071fe48
GUEST_EXPORT_FRAMED(0x0071fe48, d_0071fe48::f_0071fe48, 0x4010);  // pushes {r4, lr} first, as the original

// f_0071fe68: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0071fe68 {

struct __attribute__((packed)) Object_0071fe68_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_0071fe68_0, word_0, 0x0);

inline constexpr guest::Function<0x0047ea68, u32(u32, u32, u32)> call_0047ea68;

u32 f_0071fe68(gptr<Object_0071fe68_0> arg0) {
    u32 r0_2 = call_0047ea68(arg0.addr() + 4u, 0x7f0u, 0u);  // (from the original)
    u32 r1_1 = arg0->word_0;
    guest::cpu()->r[1] = r1_1;
    return r0_2 == r1_1;
}

}  // namespace d_0071fe68
GUEST_EXPORT_FRAMED(0x0071fe68, d_0071fe68::f_0071fe68, 0x4010);  // pushes {r4, lr} first, as the original
