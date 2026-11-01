// Functions decompiled by tools/decomp (docs/decomp.md), each proved equal to the recompiled original (prove-cpp). The
// names are generated (d_<address>::f_<address>, Object_<address>_<argument>, word_<offset>) and still to be chosen.
#include "guest/guest.hpp"
#include "recovered/structs.hpp"

#include <bit>

using guest::gptr;

// f_0027041c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0027041c {

struct __attribute__((packed)) Object_0027041c_0 {
    u8 unknown_0[0x100];  // (not used here)
    u32 word_100;
    u32 word_104;
    u32 word_108;
    u8 byte_10c;
    u8 unknown_10d[0x1];  // (not used here)
    u8 byte_10e;
};
GUEST_OFFSET(Object_0027041c_0, word_100, 0x100);  // (from the original)
GUEST_OFFSET(Object_0027041c_0, word_104, 0x104);  // (from the original)
GUEST_OFFSET(Object_0027041c_0, word_108, 0x108);  // (from the original)
GUEST_OFFSET(Object_0027041c_0, byte_10c, 0x10c);  // (from the original)
GUEST_OFFSET(Object_0027041c_0, byte_10e, 0x10e);  // (from the original)


void f_0027041c(gptr<Object_0027041c_0> arg0) {
    arg0->word_108 = ~0u;
    arg0->word_100 = 0;
    arg0->word_104 = 2;
    arg0->byte_10c = 0;
    arg0->byte_10e = 0;
}

}  // namespace d_0027041c
GUEST_EXPORT(0x0027041c, d_0027041c::f_0027041c);

// f_00270550: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00270550 {

struct __attribute__((packed)) Local_00270550_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_00270550_ea_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_00270550_ea_1, word_4, 0x4);  // (from the original)

struct __attribute__((packed)) Local_00270550_ea_2 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_00270550_ea_2, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_00270550_ea_2, word_4, 0x4);  // (from the original)

struct __attribute__((packed)) Local_00270550_ea_3 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_00270550_ea_3, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_00270550_ea_3, word_4, 0x4);  // (from the original)

struct __attribute__((packed)) Local_00270550_r0_8 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_00270550_r0_8, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_00270550_r0_8, word_4, 0x4);  // (from the original)

struct __attribute__((packed)) Local_00270550_r1_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_00270550_r1_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_00270550_r1_1, word_4, 0x4);  // (from the original)

struct __attribute__((packed)) Local_00270550_r1_2 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_00270550_r1_2, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_00270550_r1_2, word_4, 0x4);  // (from the original)

inline constexpr guest::Function<0x001abcd4, u32(u32, u32)> call_001abcd4;  // (from the original)
inline constexpr guest::Function<0x00317e2c, u32(u32, u32)> call_00317e2c;  // (from the original)
inline constexpr guest::Function<0x0031e204, u32(u32, u32)> call_0031e204;  // (from the original)
inline constexpr guest::Function<0x004edd6c, u32(u32, u32, u32, u32)> call_004edd6c;  // (from the original)
inline constexpr guest::Function<0x004edd84, u32(u32, u32)> call_004edd84;  // (from the original)
inline constexpr guest::Function<0x004ef50c, u32(u32, u32)> call_004ef50c;  // (from the original)

u32 f_00270550(gptr<NpcModel> arg0) {
    arg0->word_0 = 0x8f8c1c;  // (from the original)
    u32 r0_2 = call_004edd6c(arg0.addr() + 0x384u, 0x8f8c1cu, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    *gptr<u32>(r0_2 - 0x384u) = 0x8ed6ac;  // (from the original)
    u32 r0_4 = call_0031e204(r0_2 - 0xd4u, 0x8ed6acu);  // (from the original)
    u32 r0_5 = r0_4 - 0x2b0u;  // (from the original)
    u32 r5_1 = ~0u;
    gptr<Local_00270550_ea_1> ea_1 = gptr<Local_00270550_ea_1>(r0_5 + 0x274u);  // (from the original)
    ea_1->word_0 = 0;
    ea_1->word_4 = r5_1;
    gptr<Local_00270550_ea_2> ea_2 = gptr<Local_00270550_ea_2>(r0_5 + 0x26cu);  // (from the original)
    ea_2->word_0 = 0;
    ea_2->word_4 = r5_1;
    gptr<Local_00270550_r1_1> r1_1 = gptr<Local_00270550_r1_1>(r0_5 + 0x264u);  // (from the original)
    r1_1->word_0 = 0;
    r1_1->word_4 = r5_1;
    u32 r0_7 = call_00317e2c(r0_5 + 0x15cu, r1_1.addr());  // (from the original)
    gptr<Local_00270550_r0_8> r0_8 = gptr<Local_00270550_r0_8>(r0_7 - 0x18u);  // (from the original)
    gptr<Local_00270550_ea_3> ea_3 = gptr<Local_00270550_ea_3>(r0_8.addr() + 0x10u);  // (from the original)
    ea_3->word_0 = 0;
    ea_3->word_4 = r5_1;
    gptr<Local_00270550_r1_2> r1_2 = gptr<Local_00270550_r1_2>(r0_8.addr() + 8u);
    r1_2->word_0 = 0;
    r1_2->word_4 = r5_1;
    r0_8->word_0 = 0;
    r0_8->word_4 = r5_1;
    u32 r4_1 = r0_8.addr() - 0x144u;  // (from the original)
    *gptr<u32>(r4_1) = 0x8eb174;  // (from the original)
    call_001abcd4(r4_1, r1_2.addr());
    u32 r0_10 = call_004ef50c(r4_1 + 0xccu, guest::cpu()->r[1]);  // (from the original)
    u32 r0_12 = call_004edd84(r0_10 - 0x54u, guest::cpu()->r[1]);  // (from the original)
    return r0_12 - 0x78u;  // (from the original)
}

}  // namespace d_00270550
GUEST_EXPORT_FRAMED(0x00270550, d_00270550::f_00270550, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_002706ec: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002706ec {

inline constexpr guest::Function<0x002f747c, u32(u32, u32, u32, u32)> call_002f747c;  // (from the original)
inline constexpr guest::Function<0x00317dec, u32(u32, u32, u32, u32)> call_00317dec;  // (from the original)

u32 f_002706ec(gptr<ObjectResource> arg0) {
    arg0->word_0 = 0x8ef578;  // (from the original)
    if (arg0->word_8 != 0) {
        call_002f747c(arg0.addr() + 4u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    }
    u32 r0_3 = call_00317dec(arg0.addr() + 4u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    return r0_3 - 4u;
}

}  // namespace d_002706ec
GUEST_EXPORT_FRAMED(0x002706ec, d_002706ec::f_002706ec, 0x4010);  // pushes {r4, lr} first, as the original

// f_00270ce0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00270ce0 {

inline constexpr guest::Function<0x002f73b8, u32(u32, u32, u32, u32)> call_002f73b8;  // (from the original)

u32 f_00270ce0(u32 r0) {
    return call_002f73b8(r0 + 0x14u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
}

}  // namespace d_00270ce0
GUEST_EXPORT(0x00270ce0, d_00270ce0::f_00270ce0);

// f_00270ce8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00270ce8 {

struct __attribute__((packed)) Object_00270ce8_0 {
    u8 unknown_0[0x8];  // (not used here)
    u32 word_8;
    u8 unknown_c[0x10];  // (not used here)
    u32 word_1c;
    u32 word_20;
};
GUEST_OFFSET(Object_00270ce8_0, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_00270ce8_0, word_1c, 0x1c);  // (from the original)
GUEST_OFFSET(Object_00270ce8_0, word_20, 0x20);  // (from the original)

struct __attribute__((packed)) Local_00270ce8_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_00270ce8_ea_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_00270ce8_ea_1, word_4, 0x4);  // (from the original)

inline guest::global<u8, 0x008c9f1c> global_008c9f1c;  // (from the original)
inline constexpr guest::Function<0x00317a50, u32(u32, u32, u32, u32)> call_00317a50;  // (from the original)
inline constexpr guest::Function<0x00317a88, u32(u32, u32, u32, u32)> call_00317a88;  // (from the original)
inline constexpr guest::Function<0x00544a20, u32(u32, u32, u32, u32)> call_00544a20;  // (from the original)
inline constexpr guest::Function<0x00544d8c, u32(u32, u32, u32, u32)> call_00544d8c;  // (from the original)
inline constexpr guest::Function<0x00544f18, u32(u32, u32, u32, u32)> call_00544f18;  // (from the original)
inline constexpr guest::Function<0x00544fec, u32(u32, u32, u32, u32)> call_00544fec;  // (from the original)
inline constexpr guest::Function<0x0054a644, u32(u32, u32, u32, u32)> call_0054a644;  // (from the original)
inline constexpr guest::Function<0x00712c08, u32(u32, u32, u32, u32)> call_00712c08;  // (from the original)

u32 f_00270ce8(gptr<Object_00270ce8_0> arg0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0xa8);  // the original's stack frame
    u32 r0_1 = 0;
    u32 r5_1 = arg0.addr() + 0x14u;  // (from the original)
    if (arg0->word_20 + 1u != 0 && arg0->word_1c != 0) {
        r0_1 = 1u;
    } else {
        u32 r10_1 = arg0->word_8;
        gptr<Local_00270ce8_ea_1> ea_1 = gptr<Local_00270ce8_ea_1>(frame.at(0x24).addr());  // (from the original)
        ea_1->word_0 = frame.at(0x2c).addr();  // (from the original)
        ea_1->word_4 = 0x40;  // (from the original)
        u32 r2_1 = *frame.at<u32>(0x24) - 1u;  // (from the original)
        *gptr<u8>(0x40u + r2_1) = u8(u32(*global_008c9f1c));  // (from the original)
        *frame.at<u8>(0x2c) = u8(u32(*global_008c9f1c));  // (from the original)
        *frame.at<u32>(0x20) = 0x904950;  // (from the original)
        u32 r0_2 = call_00712c08(r1, r1, r2_1, 0x40u);  // (from the original)
        u32 r0_3 = frame.at(0x70).addr();  // (from the original)
        u32 r0_4 = call_0054a644(r0_3, frame.at(0x20).addr(), guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        u32 r0_5 = call_00544fec(r0_4, 0x881bb8u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        u32 r0_6 = call_00544fec(r0_5, r2 == 0 ? 0x881ba8u : 0x881ba4u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        *frame.at<u32>(0x9c) = r0_2;  // (from the original)
        u32 r0_7 = call_00544a20(r0_6, frame.at(0).addr(), guest::cpu()->r[2], guest::cpu()->r[3]);
        u32 r2_6 = guest::cpu()->r[2];
        u32 r3_5 = guest::cpu()->r[3];
        if (r0_7 != 0) {
            u32 r2_7 = *gptr<u32>(r0_6 + 4u);
            call_00544d8c(frame.at(0x9c).addr(), *frame.at<u8>(0) == 0 ? 0u : frame.at(0).addr(), r2_7, r3_5);  // (from the original)
            r2_6 = guest::cpu()->r[2];
            r3_5 = guest::cpu()->r[3];
        }
        u32 r0_8 = call_00544fec(r0_6, r3 == 0 ? 0x881bb4u : 0x881bb0u, r2_6, r3_5);  // (from the original)
        call_00544f18(r0_8, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
        r0_1 = call_00317a50(r5_1, frame.at(0x20).addr(), r10_1, 0x80u);  // (from the original)
        r1 = guest::cpu()->r[1];
        if (r0_1 != 0) {
            call_00317a88(r5_1, arg0.addr() + 4u, 0u, 1u);
            r1 = guest::cpu()->r[1];
            r0_1 = 1u;
        }
    }
    guest::cpu()->r[1] = r1;
    return r0_1;
}

}  // namespace d_00270ce8
GUEST_EXPORT_FRAMED(0x00270ce8, d_00270ce8::f_00270ce8, 0x47f0);  // pushes {r4, r5, r6, r7, r8, r9, r10, lr} first, as the original

// f_00271290: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00271290 {

struct __attribute__((packed)) Object_00271290_0 {
    u8 unknown_0[0x24];  // (not used here)
    u8 byte_24;
    u8 unknown_25[0x27f];  // (not used here)
    u32 word_2a4;
};
GUEST_OFFSET(Object_00271290_0, byte_24, 0x24);  // (from the original)
GUEST_OFFSET(Object_00271290_0, word_2a4, 0x2a4);  // (from the original)

struct __attribute__((packed)) Local_00271290_ea_4 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_00271290_ea_4, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_00271290_ea_4, word_4, 0x4);  // (from the original)

struct __attribute__((packed)) Local_00271290_r2_2 {
    u8 unknown_0[0x8];  // (not used here)
    u32 word_8;
    u32 word_c;
    u8 unknown_10[0xc];  // (not used here)
    u32 word_1c;
};
GUEST_OFFSET(Local_00271290_r2_2, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Local_00271290_r2_2, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Local_00271290_r2_2, word_1c, 0x1c);  // (from the original)

inline constexpr guest::Function<0x001ce934, u32(u32, u32, u32, u32)> call_001ce934;  // (from the original)

u32 f_00271290(gptr<Object_00271290_0> arg0, u32 r1, u32 r2_unused, u32 r3) {
    guest::StackFrame frame(0x4);  // the original's stack frame
    *frame.at<u32>(0) = r3;
    u32 r0_1 = arg0->word_2a4;
    if (r0_1 == 0) {
        return r0_1;
    }
    u32 r3_1 = arg0->byte_24;
    u32 r0_2 = 0u;
    u32 r2_1 = r3_1 & 1u;
    gptr<Local_00271290_r2_2> r2_2 = gptr<Local_00271290_r2_2>(r2_1 >= 2u ? arg0.addr() + 0x6cu : arg0.addr() + (r2_1 + (r2_1 << 5) << 3) + 0x6cu);  // (from the original)
    u32 zf_1 = r2_2->word_c + 1u == 0;
    if (!zf_1) {
        r2_2 = gptr<Local_00271290_r2_2>(r2_2->word_8);
        zf_1 = r2_2.addr() == 0;
    }
    if (!zf_1) {
        zf_1 = r2_2->word_1c == 0;
    }
    if (zf_1) {
        return 0u;
    }
    u32 ea_1 = r2_2.addr() + 0x20u;  // (from the original)
    u32 r4_1 = *gptr<u32>(ea_1);
    u32 r2_3 = r4_1 == 0 ? r0_2 : ea_1 + r4_1;
    if (r2_3 == 0) {
        r0_2 = 0u;
    } else {
        u32 ea_2 = r2_3 + 0x28u;  // (from the original)
        u32 r4_2 = *gptr<u32>(ea_2);
        if (r4_2 != 0) {
            r0_2 = r4_2 + ea_2;
        }
    }
    u32 r3_2 = r3_1 & 1u;
    *frame.at<u32>(0) = 7;
    gptr<Local_00271290_ea_4> ea_4 = gptr<Local_00271290_ea_4>(arg0.addr() + (r3_2 + (r3_2 << 2) << 2) + 0x44u);  // (from the original)
    call_001ce934(r0_2, ea_4->word_0, ea_4->word_4, r1);
    return 1u;
}

}  // namespace d_00271290
GUEST_EXPORT_FRAMED(0x00271290, d_00271290::f_00271290, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_00271c78: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00271c78 {

struct __attribute__((packed)) Object_00271c78_0 {
    u8 unknown_0[0x24];  // (not used here)
    u8 byte_24;
};
GUEST_OFFSET(Object_00271c78_0, byte_24, 0x24);  // (from the original)

struct __attribute__((packed)) Local_00271c78_r2_1 {
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
GUEST_OFFSET(Local_00271c78_r2_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_00271c78_r2_1, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_00271c78_r2_1, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Local_00271c78_r2_1, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Local_00271c78_r2_1, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Local_00271c78_r2_1, word_14, 0x14);  // (from the original)
GUEST_OFFSET(Local_00271c78_r2_1, word_18, 0x18);  // (from the original)
GUEST_OFFSET(Local_00271c78_r2_1, word_1c, 0x1c);  // (from the original)
GUEST_OFFSET(Local_00271c78_r2_1, word_20, 0x20);  // (from the original)
GUEST_OFFSET(Local_00271c78_r2_1, word_24, 0x24);  // (from the original)
GUEST_OFFSET(Local_00271c78_r2_1, word_28, 0x28);  // (from the original)
GUEST_OFFSET(Local_00271c78_r2_1, word_2c, 0x2c);  // (from the original)

inline constexpr guest::Function<0x0013451c, u32(u32, u32)> call_0013451c;  // (from the original)
inline constexpr guest::Function<0x003280e0, u32(u32, u32, u32, u32)> call_003280e0;  // (from the original)
inline constexpr guest::Function<0x004df3e4, u32(u32, u32)> call_004df3e4;  // (from the original)
inline constexpr guest::Function<0x005676b8, u32(u32, u32)> call_005676b8;  // (from the original)
inline constexpr guest::Function<0x00724bf8, u32(u32, u32, u32, u32)> call_00724bf8;  // (from the original)

u32 f_00271c78(gptr<Object_00271c78_0> arg0, u32 r1, u32 r2, float S0, float S1, float S2, float S3, float S4, float S5, float S6, float S7, float S8, float S9, float S10, float S11) {
    guest::StackFrame frame(0x70);  // the original's stack frame
    u32 r4 = guest::cpu()->r[4];
    u32 r3_1 = u32(arg0->byte_24) & 1u;
    u32 r3_2 = arg0.addr() + (r3_1 + (r3_1 << 2) + (r3_1 << 5) << 2);
    u32 res_1 = *gptr<u8>(r3_2 + 0x2a8u);  // (from the original)
    u32 zf_1 = res_1 == 0;
    if (!zf_1) {
        u32 res_2 = r3_2 + 0x2acu;  // (from the original)
        zf_1 = res_2 == 0;
        r4 = res_2;
    }
    if (zf_1) {
        frame.release();
        return call_003280e0(arg0.addr() + 0x27cu, r1, r2, r3_2);  // (from the original)
    }
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    guest::cpu()->s[3] = S3;
    guest::cpu()->s[4] = S4;
    guest::cpu()->s[5] = S5;
    guest::cpu()->s[6] = S6;
    guest::cpu()->s[7] = S7;
    guest::cpu()->s[8] = S8;
    guest::cpu()->s[9] = S9;
    guest::cpu()->s[10] = S10;
    guest::cpu()->s[11] = S11;
    u32 r0_3 = call_00724bf8(arg0.addr() + 0x27cu, r1, r2, 0u);  // (from the original)
    if (r0_3 == 0) {
        return r0_3;
    }
    float S0_2 = std::bit_cast<float>(*gptr<u32>(r0_3));
    float S1_2 = std::bit_cast<float>(*gptr<u32>(r0_3 + 4));
    float S2_1 = std::bit_cast<float>(*gptr<u32>(r0_3 + 8));
    float S3_1 = std::bit_cast<float>(*gptr<u32>(r0_3 + 0xc));  // (from the original)
    float S4_1 = std::bit_cast<float>(*gptr<u32>(r0_3 + 0x10));  // (from the original)
    float S5_1 = std::bit_cast<float>(*gptr<u32>(r0_3 + 0x14));  // (from the original)
    float S6_1 = std::bit_cast<float>(*gptr<u32>(r0_3 + 0x18));  // (from the original)
    float S7_1 = std::bit_cast<float>(*gptr<u32>(r0_3 + 0x1c));  // (from the original)
    float S8_1 = std::bit_cast<float>(*gptr<u32>(r0_3 + 0x20));  // (from the original)
    float S9_1 = std::bit_cast<float>(*gptr<u32>(r0_3 + 0x24));  // (from the original)
    float S10_1 = std::bit_cast<float>(*gptr<u32>(r0_3 + 0x28));  // (from the original)
    float S11_1 = std::bit_cast<float>(*gptr<u32>(r0_3 + 0x2c));  // (from the original)
    gptr<Local_00271c78_r2_1> r2_1 = gptr<Local_00271c78_r2_1>(frame.at(0x30).addr());  // (from the original)
    r2_1->word_0 = std::bit_cast<u32>(S0_2);
    r2_1->word_4 = std::bit_cast<u32>(S1_2);
    r2_1->word_8 = std::bit_cast<u32>(S2_1);
    r2_1->word_c = std::bit_cast<u32>(S3_1);
    r2_1->word_10 = std::bit_cast<u32>(S4_1);
    r2_1->word_14 = std::bit_cast<u32>(S5_1);
    r2_1->word_18 = std::bit_cast<u32>(S6_1);
    r2_1->word_1c = std::bit_cast<u32>(S7_1);
    r2_1->word_20 = std::bit_cast<u32>(S8_1);
    r2_1->word_24 = std::bit_cast<u32>(S9_1);
    r2_1->word_28 = std::bit_cast<u32>(S10_1);
    r2_1->word_2c = std::bit_cast<u32>(S11_1);
    guest::cpu()->s[0] = S0_2;
    guest::cpu()->s[1] = S1_2;
    call_0013451c(frame.at(0).addr(), frame.at(0x30).addr());  // (from the original)
    *frame.at<u16>(0x60) = u16(0xffffc000u);  // (from the original)
    u32 r1_3 = *frame.at<u32>(0x60);  // (from the original)
    call_005676b8(frame.at(0).addr(), r1_3);
    u32 r0_6 = call_004df3e4(r4, frame.at(0).addr());
    return r0_6;
}

}  // namespace d_00271c78
GUEST_EXPORT(0x00271c78, d_00271c78::f_00271c78);

// f_00271d0c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00271d0c {

struct __attribute__((packed)) Object_00271d0c_0 {
    u8 unknown_0[0x24];  // (not used here)
    u8 byte_24;
};
GUEST_OFFSET(Object_00271d0c_0, byte_24, 0x24);  // (from the original)

inline constexpr guest::Function<0x0032821c, u32(u32, u32, u32, u32)> call_0032821c;  // (from the original)
inline constexpr guest::Function<0x004df2c8, u32(u32)> call_004df2c8;  // (from the original)

u32 f_00271d0c(gptr<Object_00271d0c_0> arg0, float S0, float S1, float S2, float S3) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 r2_1 = u32(arg0->byte_24) & 1u;
    u32 r2_2 = arg0.addr() + (r2_1 + (r2_1 << 2) + (r2_1 << 5) << 2);
    u32 r3_1 = *gptr<u8>(r2_2 + 0x2a8u);  // (from the original)
    u32 zf_1 = r3_1 == 0;
    if (!zf_1) {
        u32 res_1 = r2_2 + 0x2acu;  // (from the original)
        zf_1 = res_1 == 0;
        r2_2 = res_1;
    }
    if (zf_1) {
        frame.release();
        return call_0032821c(arg0.addr() + 0x27cu, guest::cpu()->r[1], r2_2, r3_1);  // (from the original)
    }
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S0;
    guest::cpu()->s[2] = S0;
    call_004df2c8(r2_2);
    return 1u;
}

}  // namespace d_00271d0c
GUEST_EXPORT(0x00271d0c, d_00271d0c::f_00271d0c);

// f_00271e30: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00271e30 {

struct __attribute__((packed)) Object_00271e30_0 {
    u8 unknown_0[0x29c];  // (not used here)
    u32 word_29c;
    u32 word_2a0;
    u32 word_2a4;
    u8 unknown_2a8[0x128];  // (not used here)
    u32 word_3d0;
    u32 word_3d4;
    u32 word_3d8;
    u32 word_3dc;
};
GUEST_OFFSET(Object_00271e30_0, word_29c, 0x29c);  // (from the original)
GUEST_OFFSET(Object_00271e30_0, word_2a0, 0x2a0);  // (from the original)
GUEST_OFFSET(Object_00271e30_0, word_2a4, 0x2a4);  // (from the original)
GUEST_OFFSET(Object_00271e30_0, word_3d0, 0x3d0);  // (from the original)
GUEST_OFFSET(Object_00271e30_0, word_3d4, 0x3d4);  // (from the original)
GUEST_OFFSET(Object_00271e30_0, word_3d8, 0x3d8);  // (from the original)
GUEST_OFFSET(Object_00271e30_0, word_3dc, 0x3dc);  // (from the original)


u32 f_00271e30(gptr<Object_00271e30_0> arg0, u32 r1, u32 r2, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    float S0_1 = std::bit_cast<float>(*gptr<u32>(r13));
    float S1_1 = std::bit_cast<float>(*gptr<u32>(r13 + 4));
    float S2_1 = std::bit_cast<float>(*gptr<u32>(r13 + 8));
    float S3_1 = std::bit_cast<float>(*gptr<u32>(r13 + 0xc));  // (from the original)
    arg0->word_29c = r1;
    arg0->word_2a0 = r2;
    arg0->word_2a4 = r3;
    arg0->word_3d0 = std::bit_cast<u32>(S0_1);
    arg0->word_3d4 = std::bit_cast<u32>(S1_1);
    arg0->word_3d8 = std::bit_cast<u32>(S2_1);
    arg0->word_3dc = std::bit_cast<u32>(S3_1);
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    return arg0.addr() + 0x3d0u;  // (from the original)
}

}  // namespace d_00271e30
GUEST_EXPORT(0x00271e30, d_00271e30::f_00271e30);

// f_00272300: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00272300 {

struct __attribute__((packed)) Object_00272300_0 {
    u8 unknown_0[0x24];  // (not used here)
    u8 byte_24;
    u8 unknown_25[0x4ab];  // (not used here)
    u32 word_4d0;
};
GUEST_OFFSET(Object_00272300_0, byte_24, 0x24);  // (from the original)
GUEST_OFFSET(Object_00272300_0, word_4d0, 0x4d0);  // (from the original)

struct __attribute__((packed)) Local_00272300_r0_1 {
    u8 unknown_0[0x8];  // (not used here)
    u32 word_8;
    u32 word_c;
    u8 unknown_10[0xc];  // (not used here)
    u32 word_1c;
};
GUEST_OFFSET(Local_00272300_r0_1, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Local_00272300_r0_1, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Local_00272300_r0_1, word_1c, 0x1c);  // (from the original)

inline constexpr guest::Function<0x001ce934, u32(u32, u32, u32, u32)> call_001ce934;  // (from the original)
inline constexpr guest::Function<0x00712c28, u32(u32, u32, u32, u32)> call_00712c28;  // (from the original)
inline constexpr guest::Function<0x00712c38, u32(u32, u32, u32, u32)> call_00712c38;  // (from the original)

u32 f_00272300(gptr<Object_00272300_0> arg0, u32 r1, u32 r2_unused, u32 r3) {
    guest::StackFrame frame(0x4);  // the original's stack frame
    gptr<Local_00272300_r0_1> r0_1 = gptr<Local_00272300_r0_1>(0u);
    *frame.at<u32>(0) = r3;
    u32 r1_1 = arg0->word_4d0;
    if (r1_1 != 0) {
        u32 r5_1 = 0u;
        u32 r2_1 = u32(arg0->byte_24) & 1u;
        if (r2_1 >= 2u) {
            r0_1 = gptr<Local_00272300_r0_1>(arg0.addr() + 0x60u);  // (from the original)
        } else {
            r3 = r2_1 + (r2_1 << 2);
            r0_1 = gptr<Local_00272300_r0_1>(arg0.addr() + (r3 + (r2_1 << 6) << 2) + 0x60u);  // (from the original)
        }
        u32 zf_1 = r0_1->word_c + 1u == 0;
        if (!zf_1) {
            r0_1 = gptr<Local_00272300_r0_1>(r0_1->word_8);
            zf_1 = r0_1.addr() == 0;
        }
        if (!zf_1) {
            zf_1 = r0_1->word_1c == 0;
        }
        if (!zf_1) {
            u32 ea_1 = r0_1.addr() + 0x20u;  // (from the original)
            u32 r2_2 = *gptr<u32>(ea_1);
            u32 r0_2 = r2_2 == 0 ? r5_1 : ea_1 + r2_2;
            if (r0_2 == 0) {
                r5_1 = 0u;
            } else {
                u32 ea_2 = r0_2 + 0x28u;  // (from the original)
                r2_2 = *gptr<u32>(ea_2);
                if (r2_2 != 0) {
                    r5_1 = r2_2 + ea_2;
                }
            }
            u32 r0_3 = call_00712c28(r1_1, r1_1, r2_2, r3);
            u32 r0_5 = call_00712c38(*gptr<u32>(arg0.addr() + 0x4d0u), guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
            *frame.at<u32>(0) = 0x10;  // (from the original)
            call_001ce934(r5_1, r0_5, r0_3, r1);
            return 1u;
        }
    }
    guest::cpu()->r[1] = r1_1;
    return 0u;
}

}  // namespace d_00272300
GUEST_EXPORT_FRAMED(0x00272300, d_00272300::f_00272300, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_002738b8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002738b8 {

inline guest::global<u32, 0x00886d68> global_00886d68;  // (from the original)
inline guest::global<u32, 0x00886d6c> global_00886d6c;  // (from the original)
inline constexpr guest::Function<0x00817cd8, u32(u32, u32, u32)> call_00817cd8;  // (from the original)

void f_002738b8() {
    call_00817cd8(guest::cpu()->r[0], *global_00886d68, *global_00886d6c);
}

}  // namespace d_002738b8
GUEST_EXPORT_FRAMED(0x002738b8, d_002738b8::f_002738b8, 0x4010);  // pushes {r4, lr} first, as the original

// f_00273a9c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00273a9c {

struct __attribute__((packed)) Object_00273a9c_0 {
    u8 unknown_0[0x2be8];  // (not used here)
    u32 word_2be8;
};
GUEST_OFFSET(Object_00273a9c_0, word_2be8, 0x2be8);  // (from the original)


u32 f_00273a9c(gptr<Object_00273a9c_0> arg0, u32 r1) {
    u32 ea_1 = arg0.addr() + ((r1 - arg0->word_2be8) * 0xadu << 2) + 0xfa0u;  // (from the original)
    u32 r1_1 = *gptr<u32>(*gptr<u32>(ea_1) + 0x60u);  // (from the original)
    // virtual function 24 of ea_1
    return guest::call_address<u32>(r1_1, ea_1, r1_1, 0xadu, guest::cpu()->r[3]);  // (from the original)
}

}  // namespace d_00273a9c
GUEST_EXPORT(0x00273a9c, d_00273a9c::f_00273a9c);

// f_00273b30: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00273b30 {

struct __attribute__((packed)) Object_00273b30_0 {
    u8 unknown_0[0x2be8];  // (not used here)
    u32 word_2be8;
};
GUEST_OFFSET(Object_00273b30_0, word_2be8, 0x2be8);  // (from the original)

inline constexpr guest::Function<0x001df3d4, u32(u32, u32, u32, u32)> call_001df3d4;  // (from the original)
inline constexpr guest::Function<0x002e3568, u32(u32, u32, u32, u32)> call_002e3568;  // (from the original)
inline constexpr guest::Function<0x002fb918, u32(u32, u32, u32, u32)> call_002fb918;  // (from the original)
inline constexpr guest::Function<0x006f51f8, u32(u32, u32, u32, u32)> call_006f51f8;  // (from the original)

void f_00273b30(gptr<Object_00273b30_0> arg0, u32 r1) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 r3_1 = 0x2bf1u;  // (from the original)
    u32 r2_1 = arg0->word_2be8;
    u32 r0_1 = *gptr<u8>(r3_1 + arg0.addr());
    u32 r5_1 = r1 - r2_1;
    if (r0_1 != 0) {
        u32 r0_2 = call_002fb918(r0_1, r1, r2_1, r3_1);
        u32 r0_3 = call_001df3d4(r0_2, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        r2_1 = guest::cpu()->r[2];
        r3_1 = guest::cpu()->r[3];
        if (r0_3 != 0) {
            u32 r0_4 = call_006f51f8(r0_3, r5_1, r2_1, r3_1);
            r3_1 = guest::cpu()->r[3];
            r2_1 = arg0.addr() + (r5_1 * 0xadu << 2) + 0xfa0u;  // (from the original)
            r1 = r0_4;
            *gptr<u32>(r2_1 + 0x2b0u) = r1;  // (from the original)
        }
    }
    frame.release();
    call_002e3568((arg0.addr() + (r5_1 * 0xadu << 2)) + 0xfa0u, r1, r2_1, r3_1);  // (from the original)
    return;
}

}  // namespace d_00273b30
GUEST_EXPORT(0x00273b30, d_00273b30::f_00273b30);

// f_00273ba8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00273ba8 {

inline constexpr guest::Function<0x001323bc, u32(u32)> call_001323bc;  // (from the original)
inline constexpr guest::Function<0x00568c10, u32(u32, u32, u32, u32)> call_00568c10;  // (from the original)
inline constexpr guest::Function<0x00569e6c, u32(u32, u32, u32)> call_00569e6c;  // (from the original)

void f_00273ba8(u32 r0, u32 r1, u32 r2) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 r0_2 = call_00568c10(r0 + 0x26cu, r1, r2, guest::cpu()->r[3]);  // (from the original)
    u32 r0_3 = call_001323bc(r0_2);
    frame.release();
    call_00569e6c(r0_3, r0 + 0x26cu, 1u);  // (from the original)
    return;
}

}  // namespace d_00273ba8
GUEST_EXPORT(0x00273ba8, d_00273ba8::f_00273ba8);

// f_0027430c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0027430c {

struct __attribute__((packed)) Object_0027430c_0 {
    u8 unknown_0[0x2be8];  // (not used here)
    u32 word_2be8;
};
GUEST_OFFSET(Object_0027430c_0, word_2be8, 0x2be8);  // (from the original)


u32 f_0027430c(gptr<Object_0027430c_0> arg0, u32 r1) {
    u32 r2_1 = arg0->word_2be8;
    if (s32(r2_1) > s32(r1)) {
        return arg0.addr() + 0xfa0u;  // (from the original)
    }
    if (r2_1 + 0xau <= r1) {  // (from the original)
        return arg0.addr() + 0xfa0u;  // (from the original)
    }
    return arg0.addr() + ((r1 - r2_1) * 0xadu << 2) + 0xfa0u;  // (from the original)
}

}  // namespace d_0027430c
GUEST_EXPORT(0x0027430c, d_0027430c::f_0027430c);

// f_00274384: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00274384 {

inline constexpr guest::Function<0x00567e24, u32(u32, u32)> call_00567e24;  // (from the original)

u32 f_00274384(u32 r0) {
    return call_00567e24(r0 + 0x24u, 0x886e00u);  // (from the original)
}

}  // namespace d_00274384
GUEST_EXPORT(0x00274384, d_00274384::f_00274384);

// f_00274394: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00274394 {

struct __attribute__((packed)) Object_00274394_0 {
    u8 unknown_0[0x2be8];  // (not used here)
    u32 word_2be8;
};
GUEST_OFFSET(Object_00274394_0, word_2be8, 0x2be8);  // (from the original)


u32 f_00274394(gptr<Object_00274394_0> arg0, u32 r1) {
    u32 r1_1 = (r1 - arg0->word_2be8) * 0xadu;  // (from the original)
    u32 r0_1 = *gptr<u32>(arg0.addr() + (r1_1 << 2) + 0x1250u);  // (from the original)
    guest::cpu()->r[1] = r1_1;
    return r0_1;
}

}  // namespace d_00274394
GUEST_EXPORT(0x00274394, d_00274394::f_00274394);

// f_00274478: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00274478 {

inline guest::global<u32, 0x002744fc> global_002744fc;  // (from the original)
inline guest::global<u8, 0x009506b0> global_009506b0;  // (from the original)
inline guest::global<u32, 0x009506b4> global_009506b4;  // (from the original)
inline constexpr guest::Function<0x002ff8b0, u32(u32, u32, u32, u32)> call_002ff8b0;  // (from the original)
inline constexpr guest::Function<0x005697e0, u32(u32, u32)> call_005697e0;  // (from the original)
inline constexpr guest::Function<0x006dce18, u32(u32, u32, u32)> call_006dce18;  // (from the original)

void f_00274478(u32 r0, u32 r1, u32 r2, float S0) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    if (*global_009506b0 == 0xffu) {  // (from the original)
        if (*global_009506b4 != 0) {
            u32 r0_1 = call_002ff8b0(4u, r1, r2, guest::cpu()->r[3]);
            u32 r2_1 = *global_009506b0 == 0xffu ? *global_009506b4 : 0u;  // (from the original)
            call_006dce18(r2_1, r0_1, r2_1);
            float S0_2 = guest::cpu()->s[0];
            u32 r1_1 = std::bit_cast<u32>(S0_2) + 0x40800000u;  // (from the original)
            if (r1_1 != 0) {
                guest::cpu()->s[0] = S0_2;
                frame.release();
                call_005697e0(r0 + 0x430u, r1_1);  // (from the original)
                return;
            }
            float S0_3 = std::bit_cast<float>(*global_002744fc);
            guest::cpu()->s[0] = S0_3;
            frame.release();
            call_005697e0(r0 + 0x430u, r1_1);  // (from the original)
            return;
        }
    }
    guest::cpu()->r[1] = r1;
    guest::cpu()->s[0] = S0;
}

}  // namespace d_00274478
GUEST_EXPORT(0x00274478, d_00274478::f_00274478);

// f_00274500: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00274500 {

inline guest::global<u32, 0x00886d80> global_00886d80;  // (from the original)
inline guest::global<u32, 0x00886d84> global_00886d84;  // (from the original)
inline constexpr guest::Function<0x001207d8, u32(u32, u32, u32, u32)> call_001207d8;  // (from the original)
inline constexpr guest::Function<0x00125aec, u32(u32, u32, u32, u32)> call_00125aec;  // (from the original)
inline constexpr guest::Function<0x00125e3c, u32(u32, u32, u32, u32)> call_00125e3c;  // (from the original)
inline constexpr guest::Function<0x002cd444, u32(u32, u32, u32, u32)> call_002cd444;  // (from the original)
inline constexpr guest::Function<0x002f915c, u32(u32)> call_002f915c;  // (from the original)
inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> call_00301d0c;  // (from the original)

u32 f_00274500(gptr<PostDragWindow> arg0) {
    arg0->word_4 = 0;
    arg0->byte_8 = 0;
    u32 r2_1 = *global_00886d84;
    arg0->word_c = *global_00886d80;
    arg0->word_10 = r2_1;
    arg0->word_14 = 0;
    arg0->byte_18 = 0;
    arg0->word_1c = 0;
    arg0->word_0 = 0x8ef6e0;  // (from the original)
    arg0->word_20 = 0;
    u32 r0_2 = call_001207d8(arg0.addr() + 0x24u, 0x8ef6e0u, r2_1, arg0.addr() + 0xcu);  // (from the original)
    u32 r0_4 = call_00125e3c(r0_2 + 0x248u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_6 = call_00125aec(r0_4 + 0x14cu, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_8 = call_00125aec(r0_6 + 0x28u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_10 = call_00125aec(r0_8 + 0x28u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_12 = call_00125aec(r0_10 + 0x28u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_13 = r0_12 + 0x28u;  // (from the original)
    u32 r0_14 = call_002cd444(r0_13, r0_13 + 0x118u, 2u, guest::cpu()->r[3]);  // (from the original)
    *gptr<u32>(r0_14) = 0x8ef284;  // (from the original)
    *gptr<u32>(r0_14 + 0xe4u) = 0x8ef2c8;  // (from the original)
    u32 r0_16 = call_00301d0c(r0_14 + 0x118u, 0x2e0994u, 0x518u, 2u);  // (from the original)
    u32 r0_18 = call_00301d0c(r0_16 + 0xa30u, 0x2e37acu, 0x2b4u, 0xau);  // (from the original)
    u32 r0_20 = call_002f915c(r0_18 + 0x1b08u);  // (from the original)
    u32 r0_21 = r0_20 - 0x2aa8u;  // (from the original)
    *gptr<u32>(0x2be8u + r0_21) = 0;  // (from the original)
    *gptr<u32>(0x2becu + r0_21) = 0;  // (from the original)
    *gptr<u8>(0x2bf0u + r0_21) = 0;  // (from the original)
    *gptr<u8>(0x2bf1u + r0_21) = 0;  // (from the original)
    guest::cpu()->r[1] = 0x2be8u;  // (from the original)
    return r0_21;
}

}  // namespace d_00274500
GUEST_EXPORT_FRAMED(0x00274500, d_00274500::f_00274500, 0x4010);  // pushes {r4, lr} first, as the original

// f_0027460c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0027460c {

struct __attribute__((packed)) Local_0027460c_ea_1 {
    u32 word_0;
    u8 unknown_4[0xe0];  // (not used here)
    u32 word_e4;
};
GUEST_OFFSET(Local_0027460c_ea_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_0027460c_ea_1, word_e4, 0xe4);  // (from the original)

inline constexpr guest::Function<0x002f76ad, u32(u32, u32, u32, u32)> call_002f76ac;  // (from the original)
inline constexpr guest::Function<0x002f770c, u32(u32, u32, u32, u32)> call_002f770c;  // (from the original)
inline constexpr guest::Function<0x00567ef0, u32(u32, u32, u32, u32)> call_00567ef0;  // (from the original)
inline constexpr guest::Function<0x0056988c, u32(u32, u32, u32, u32)> call_0056988c;  // (from the original)
inline constexpr guest::Function<0x005bf744, u32(u32, u32, u32, u32)> call_005bf744;  // (from the original)

u32 f_0027460c(gptr<PostDragWindow> arg0, u32 r1_unused, u32 r2_unused, u32 r3) {
    arg0->word_0 = 0x8ef6e0;  // (from the original)
    u32 r1_1 = 0x8ee258u;  // (from the original)
    arg0->word_2aa8 = 0x8ee248;  // (from the original)
    arg0->word_2ab4 = r1_1;
    u32 r0_2 = call_0056988c(arg0.addr() + 0x2bbcu, r1_1, 0x8ee248u, r3);  // (from the original)
    u32 r0_4 = call_0056988c(r0_2 - 0x28u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_6 = call_0056988c(r0_4 - 0x28u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_8 = call_0056988c(r0_6 - 0x28u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_10 = call_0056988c(r0_8 - 0x28u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_12 = call_0056988c(r0_10 - 0x28u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_14 = call_0056988c(r0_12 - 0x2cu, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    call_002f76ac(r0_14 - 0x1b28u, 0x2e3854u, 0x2b4u, 0xau);  // (from the original)
    gptr<Local_0027460c_ea_1> ea_1 = gptr<Local_0027460c_ea_1>((r0_14 - 0x2ac8u) + 0x458u);  // (from the original)
    ea_1->word_0 = 0x8ef284;  // (from the original)
    ea_1->word_e4 = 0x8ef2c8u;  // (from the original)
    call_002f76ac(ea_1.addr() + 0x118u, 0x2e0b3cu, 0x518u, 2u);  // (from the original)
    u32 r0_17 = call_002f770c(ea_1.addr(), guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_19 = call_0056988c(r0_17 - 0x28u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_21 = call_0056988c(r0_19 - 0x28u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_23 = call_0056988c(r0_21 - 0x28u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_25 = call_0056988c(r0_23 - 0x28u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_27 = call_005bf744(r0_25 - 0x14cu, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_29 = call_00567ef0(r0_27 - 0x248u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    return r0_29 - 0x24u;  // (from the original)
}

}  // namespace d_0027460c
GUEST_EXPORT_FRAMED(0x0027460c, d_0027460c::f_0027460c, 0x4010);  // pushes {r4, lr} first, as the original

// f_00274754: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00274754 {

struct __attribute__((packed)) Local_00274754_r0_2 {
    u8 byte_0;
};
GUEST_OFFSET(Local_00274754_r0_2, byte_0, 0x0);  // (from the original)

inline guest::global<u32, 0x0094fd4c> global_0094fd4c;  // (from the original)
inline constexpr guest::Function<0x0031ec78, u32(u32, u32, u32, u32)> call_0031ec78;  // (from the original)
inline constexpr guest::Function<0x00567e24, u32(u32, u32, u32, u32)> call_00567e24;  // (from the original)

u32 f_00274754(u32 r0, u32 r1, u32 r2) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    call_0031ec78(r0 + 0x2788u, r1, r2, guest::cpu()->r[3]);  // (from the original)
    u32 r2_1 = guest::cpu()->r[2];
    gptr<Local_00274754_r0_2> r0_2 = gptr<Local_00274754_r0_2>(r0 + 0x2ca5u);  // (from the original)
    u32 r1_1 = *global_0094fd4c;
    if (r1_1 == 0) {
        r0_2->byte_0 = 0;
        call_00567e24(r0 + 0x40cu, 0x2747e4u, r2_1, guest::cpu()->r[3]);  // (from the original)
    } else {
        r0_2->byte_0 = 1;
        *gptr<u32>(r0 + 0x654u) = r1_1;  // (from the original)
    }
    frame.release();
    return call_00567e24(r0 + 0x170u, 0x2747c4u, r2_1, guest::cpu()->r[3]);  // (from the original)
}

}  // namespace d_00274754
GUEST_EXPORT(0x00274754, d_00274754::f_00274754);

// f_0027480c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0027480c {

struct __attribute__((packed)) Local_0027480c_r3_2 {
    u8 unknown_0[0xd4];  // (not used here)
    u32 word_d4;
};
GUEST_OFFSET(Local_0027480c_r3_2, word_d4, 0xd4);  // (from the original)


void f_0027480c(u32 r0, u32 r1) {
    u32 r2 = 0u;
    do {
        u32 r3_1 = (r2 << 4) - r2;
        r2 += 1u;
        gptr<Local_0027480c_r3_2> r3_2 = gptr<Local_0027480c_r3_2>(r0 + ((r3_1 << 3) - r3_1 << 3) + 0x8e0u);  // (from the original)
        u32 r12_1 = r3_2->word_d4;
        r3_2->word_d4 = r1 == 0 ? r12_1 & ~8u : r12_1 | 8u;
        guest::preempt();
    } while (s32(r2) < 0xa);  // (from the original)
}

}  // namespace d_0027480c
GUEST_EXPORT(0x0027480c, d_0027480c::f_0027480c);

// f_00275798: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00275798 {

inline constexpr guest::Function<0x00132364, u32(u32, u32, u32, u32)> call_00132364;  // (from the original)
inline constexpr guest::Function<0x001323b4, u32(u32)> call_001323b4;  // (from the original)
inline constexpr guest::Function<0x002f6d18, u32(u32)> call_002f6d18;  // (from the original)
inline constexpr guest::Function<0x0031eb20, u32(u32, u32, u32, u32)> call_0031eb20;  // (from the original)

void f_00275798(u32 r0) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 r5 = r0;
    call_00132364(r0 + 0x170u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    if (*gptr<u8>(0x2ca5u + r5) == 0) {  // (from the original)
        call_00132364(r5 + 0x40cu, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    }
    u32 r0_4 = call_001323b4(r5 + 0x24u);  // (from the original)
    call_002f6d18(r0_4);
    u32 r4 = 0u;
    do {
        u32 r0_5 = (r4 << 4) - r4;
        call_001323b4(r5 + ((r0_5 << 3) - r0_5 << 3) + 0x684u);  // (from the original)
        r4 += 1u;
        guest::preempt();
    } while (s32(r4) < 0xa);  // (from the original)
    frame.release();
    call_0031eb20((r5 + 0x2400u) + 0x388u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    return;
}

}  // namespace d_00275798
GUEST_EXPORT(0x00275798, d_00275798::f_00275798);

// f_00275808: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00275808 {

inline guest::global<u32, 0x008874f8> global_008874f8;  // (from the original)
inline guest::global<u32, 0x008874fc> global_008874fc;  // (from the original)
inline constexpr guest::Function<0x001207d8, u32(u32, u32, u32, u32)> call_001207d8;  // (from the original)
inline constexpr guest::Function<0x00125aec, u32(u32, u32, u32, u32)> call_00125aec;  // (from the original)
inline constexpr guest::Function<0x00125e3c, u32(u32, u32, u32, u32)> call_00125e3c;  // (from the original)
inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> call_00301d0c;  // (from the original)
inline constexpr guest::Function<0x0031ecbc, u32(u32, u32, u32, u32)> call_0031ecbc;  // (from the original)

u32 f_00275808(gptr<SantaBagWindow> arg0) {
    arg0->word_4 = 0;
    arg0->byte_8 = 0;
    u32 r2_1 = *global_008874fc;
    arg0->word_c = *global_008874f8;
    arg0->word_10 = r2_1;
    arg0->word_14 = 0;
    arg0->byte_18 = 0;
    arg0->word_1c = 0;
    arg0->word_0 = 0x8ef6f4;  // (from the original)
    arg0->word_20 = 0;
    u32 r0_2 = call_00125e3c(arg0.addr() + 0x24u, 0x8ef6f4u, r2_1, arg0.addr() + 0xcu);  // (from the original)
    u32 r0_4 = call_001207d8(r0_2 + 0x14cu, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_6 = call_00125aec(r0_4 + 0x248u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_8 = call_00125aec(r0_6 + 0x28u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 ea_1 = r0_8 + 0x28u;  // (from the original)
    *gptr<u32>(ea_1) = 0;
    u32 r0_10 = call_001207d8(ea_1 + 4u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 ea_2 = r0_10 + 0x248u;  // (from the original)
    *gptr<u32>(ea_2) = 0;
    u32 r0_12 = call_00125aec(ea_2 + 4u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_14 = call_00301d0c(r0_12 + 0x28u, 0x20708cu, 0x348u, 0xau);  // (from the original)
    u32 r1_6 = ~0u;
    u32 r0_15 = r0_14 - 0x680u;  // (from the original)
    u32 r3_7 = 0x2780u - (r1_6 << 2);  // (from the original)
    *gptr<u32>(0x2780u + r0_15) = r1_6;  // (from the original)
    *gptr<u32>(r3_7 + r0_15) = r1_6;
    u32 r0_17 = call_0031ecbc(r0_15 + 0x2788u, r1_6, 0x2780u, r3_7);  // (from the original)
    u32 r0_18 = r0_17 - 0x2788u;  // (from the original)
    *gptr<u8>(0x2c78u + r0_18) = 0;  // (from the original)
    *gptr<u8>(0x2ca4u + r0_18) = 0;  // (from the original)
    *gptr<u8>(0x2ca5u + r0_18) = 0;  // (from the original)
    return r0_18;
}

}  // namespace d_00275808
GUEST_EXPORT_FRAMED(0x00275808, d_00275808::f_00275808, 0x4010);  // pushes {r4, lr} first, as the original

// f_002762c4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002762c4 {

inline guest::global<u32, 0x00276338> global_00276338;  // (from the original)
inline guest::global<u32, 0x0027633c> global_0027633c;  // (from the original)

void f_002762c4(gptr<SoundConductor> arg0) {
    u32 r12_1 = ~0u;
    arg0->word_0 = 0x8ef714;  // (from the original)
    arg0->word_4 = 0;
    arg0->byte_8 = 0;
    arg0->word_10 = 0;
    arg0->word_c = r12_1;
    arg0->word_14 = 0;
    arg0->word_1c = 0;
    arg0->word_18 = 0x8f3a54;  // (from the original)
    arg0->word_20 = 0;
    arg0->word_24 = 0;
    float S0_1 = std::bit_cast<float>(*global_00276338);
    float S1_1 = std::bit_cast<float>(*global_0027633c);
    arg0->word_28 = 0;
    arg0->word_2c = std::bit_cast<u32>(S0_1);
    arg0->word_30 = std::bit_cast<u32>(S1_1);
    arg0->half_34 = u16(r12_1);
    arg0->half_36 = u16(r12_1);
    arg0->word_38 = 0;
    arg0->word_3c = 0;
    arg0->word_40 = r12_1;
    arg0->byte_44 = 0;
    arg0->word_48 = 0;
    arg0->word_4c = 0;
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
}

}  // namespace d_002762c4
GUEST_EXPORT(0x002762c4, d_002762c4::f_002762c4);

// f_002763bc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002763bc {

struct __attribute__((packed)) Object_002763bc_0 {
    u8 unknown_0[0x10];  // (not used here)
    u32 word_10;
    u8 unknown_14[0x104];  // (not used here)
    u32 word_118;
    u32 word_11c;
    u8 unknown_120[0x4];  // (not used here)
    u8 byte_124;
};
GUEST_OFFSET(Object_002763bc_0, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Object_002763bc_0, word_118, 0x118);  // (from the original)
GUEST_OFFSET(Object_002763bc_0, word_11c, 0x11c);  // (from the original)
GUEST_OFFSET(Object_002763bc_0, byte_124, 0x124);  // (from the original)

inline guest::global<u32, 0x0094d548> global_0094d548;  // (from the original)

void f_002763bc(gptr<Object_002763bc_0> arg0, u32 r1, u32 r2) {
    if (r1 != 0) {
        if (r1 == 1u) {
            arg0->word_118 = r2;
            arg0->byte_124 = 3;
            arg0->word_10 = r1;
            return;
        }
        arg0->word_10 = r1;
        return;
    }
    u32 r3_1 = *global_0094d548;
    if (r3_1 == 0) {
        arg0->word_10 = r1;
        return;
    }
    arg0->word_118 = r2;
    arg0->word_11c = r3_1 + 0x244u;  // (from the original)
    arg0->word_10 = r1;
}

}  // namespace d_002763bc
GUEST_EXPORT(0x002763bc, d_002763bc::f_002763bc);

// f_0027643c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0027643c {

struct __attribute__((packed)) Object_0027643c_0 {
    u8 unknown_0[0x114];  // (not used here)
    u32 word_114;
};
GUEST_OFFSET(Object_0027643c_0, word_114, 0x114);  // (from the original)

struct __attribute__((packed)) Local_0027643c_r1_1 {
    u8 unknown_0[0x14];  // (not used here)
    u32 word_14;
};
GUEST_OFFSET(Local_0027643c_r1_1, word_14, 0x14);  // (from the original)


void f_0027643c(gptr<Object_0027643c_0> arg0, u32 r1) {
    if (r1 >= 0x40u) {  // (from the original)
        guest::cpu()->r[1] = r1;
        return;
    }
    gptr<Local_0027643c_r1_1> r1_1 = gptr<Local_0027643c_r1_1>(arg0.addr() + (r1 << 2));
    if (r1_1->word_14 == 0) {
        guest::cpu()->r[1] = r1_1.addr();
        return;
    }
    r1_1->word_14 = 0;
    u32 r1_2 = arg0->word_114 - 1u;
    arg0->word_114 = r1_2;
    guest::cpu()->r[1] = r1_2;
}

}  // namespace d_0027643c
GUEST_EXPORT(0x0027643c, d_0027643c::f_0027643c);

// f_0027646c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0027646c {

inline guest::global<u32, 0x00276534> global_00276534;  // (from the original)
inline constexpr guest::Function<0x00131280, u32(u32, u32, u32, u32)> call_00131280;  // (from the original)
inline constexpr guest::Function<0x001320cc, u32(u32, u32, u32, u32)> call_001320cc;  // (from the original)
inline constexpr guest::Function<0x00301444, u32(u32, u32)> call_00301444;  // (from the original)

void f_0027646c(u32 r0, u32 r1_unused, u32 r2_unused, u32 r3, float S0) {
    u32 r6 = 0x94cff4u;  // (from the original)
    if (*gptr<u32>(r6) == 0) {
        u32 r0_1 = call_00131280(0x1c4u, r0, 4u, r3);  // (from the original)
        u32 r3_1 = guest::cpu()->r[3];
        S0 = guest::cpu()->s[0];
        u32 r4 = r0_1;
        if (r0_1 == 0) {
            *gptr<u32>(r6 + 4u) = r4;
            r4 = 0u;
        } else {
            u32 r0_2 = call_001320cc(r0_1, r0, 3u, r3_1);
            S0 = std::bit_cast<float>(*global_00276534);
            *gptr<u32>(r0_2) = 0x8fa3e4;  // (from the original)
            *gptr<u32>(r6 + 4u) = r0_2;
            r0 = 0u;
            *gptr<u32>(r4 + 0x120u) = std::bit_cast<u32>(S0);  // (from the original)
            *gptr<u32>(r4 + 0x10u) = r0;  // (from the original)
            *gptr<u32>(r4 + 0x114u) = r0;  // (from the original)
            *gptr<u32>(r4 + 0x118u) = r0;  // (from the original)
            *gptr<u32>(r4 + 0x11cu) = r0;  // (from the original)
            *gptr<u8>(r4 + 0x124u) = u8(r0);  // (from the original)
            *gptr<u32>(r4 + 0x1bcu) = r0;  // (from the original)
            u32 r2 = r0;
            u32 r1 = r0;
            *gptr<u32>(r4 + 0x1c0u) = r0;  // (from the original)
            do {
                u32 r2_1 = r2 + 1u;
                r1 += 2u;
                *gptr<u32>((r4 + (r2 << 2)) + 0x14u) = r0;  // (from the original)
                r2 = r2_1 + 1u;
                *gptr<u32>((r4 + (r2_1 << 2)) + 0x14u) = r0;  // (from the original)
                guest::preempt();
            } while (r1 < 0x40u);  // (from the original)
            guest::cpu()->s[0] = S0;
            call_00301444(r4 + 0x125u, 0x96u);  // (from the original)
            S0 = guest::cpu()->s[0];
        }
        *gptr<u32>(r6) = r4;
    }
    guest::cpu()->s[0] = S0;
}

}  // namespace d_0027646c
GUEST_EXPORT_FRAMED(0x0027646c, d_0027646c::f_0027646c, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_002767bc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002767bc {

struct __attribute__((packed)) Object_002767bc_0 {
    u8 unknown_0[0x114];  // (not used here)
    u32 word_114;
};
GUEST_OFFSET(Object_002767bc_0, word_114, 0x114);  // (from the original)


u32 f_002767bc(gptr<Object_002767bc_0> arg0, u32 r1) {
    u32 r0 = arg0.addr();
    u32 r2 = r0;
    r0 = arg0->word_114;
    u32 zf_1 = r0 == 0x40u;  // (from the original)
    u32 cf_1 = r0 >= 0x40u;  // (from the original)
    if (r0 <= 0x40u) {  // (from the original)
        r0 = 0u;
    }
    if (cf_1 && !zf_1) {
        return 0x41u;  // (from the original)
    }
    do {
        if (*gptr<u32>(r2 + (r0 << 2) + 0x14u) == 0) {  // (from the original)
            *gptr<u32>(r2 + (r0 << 2) + 0x14u) = r1;  // (from the original)
            *gptr<u32>(r2 + 0x114u) = *gptr<u32>(r2 + 0x114u) + 1u;  // (from the original)
            return r0;
        }
        r0 += 1u;
        guest::preempt();
    } while (r0 < 0x40u);  // (from the original)
    return 0x41u;  // (from the original)
}

}  // namespace d_002767bc
GUEST_EXPORT(0x002767bc, d_002767bc::f_002767bc);

// f_0027680c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0027680c {

struct __attribute__((packed)) Object_0027680c_0 {
    u8 unknown_0[0x54];  // (not used here)
    u8 byte_54;
    u8 unknown_55[0x13];  // (not used here)
    u8 byte_68;
    u8 unknown_69[0x57];  // (not used here)
    u32 word_c0;
    u32 word_c4;
};
GUEST_OFFSET(Object_0027680c_0, byte_54, 0x54);  // (from the original)
GUEST_OFFSET(Object_0027680c_0, byte_68, 0x68);  // (from the original)
GUEST_OFFSET(Object_0027680c_0, word_c0, 0xc0);  // (from the original)
GUEST_OFFSET(Object_0027680c_0, word_c4, 0xc4);  // (from the original)

inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> call_002f74c8;  // (from the original)
inline constexpr guest::Function<0x0032ba1c, u32(u32, u32, u32, u32)> call_0032ba1c;  // (from the original)
inline constexpr guest::Function<0x00342ce4, u32(u32, u32, u32, u32)> call_00342ce4;  // (from the original)

u32 f_0027680c(gptr<Object_0027680c_0> arg0, u32 r1, u32 r2) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 r0_1 = 0;
    u32 r3_1 = 0x1000f83u;  // (from the original)
    if (r1 != r3_1) {
        r0_1 = 0u;
        if (arg0->byte_68 == 0) {
            arg0->byte_54 = u8(r0_1);
            if (r1 == 0x1000f23u) {  // (from the original)
                u32 r0_2 = call_002f74c8(r0_1, r1, 0x1000f23u, r3_1);  // (from the original)
                r3_1 = guest::cpu()->r[3];
                if (r0_2 == 0x2bu) {  // (from the original)
                    frame.release();
                    return call_00342ce4(arg0.addr() + 0x58u, 0x1000f24u, r2, r3_1);  // (from the original)
                }
            }
            frame.release();
            return call_0032ba1c(arg0.addr() + 0xcu, r1, r2, r3_1);  // (from the original)
        }
    } else {
        r0_1 = arg0.addr() + 0xc0u;  // (from the original)
        r1 = 0xcu;  // (from the original)
        arg0->word_c0 = r1;
        arg0->word_c4 = r2;
    }
    guest::cpu()->r[1] = r1;
    return r0_1;
}

}  // namespace d_0027680c
GUEST_EXPORT(0x0027680c, d_0027680c::f_0027680c);

// f_0027689c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0027689c {

struct __attribute__((packed)) Object_0027689c_0 {
    u8 unknown_0[0xbc];  // (not used here)
    u32 word_bc;
};
GUEST_OFFSET(Object_0027689c_0, word_bc, 0xbc);  // (from the original)

struct __attribute__((packed)) Object_0027689c_2 {
    u8 byte_0;
};
GUEST_OFFSET(Object_0027689c_2, byte_0, 0x0);  // (from the original)

inline guest::global<u32, 0x0094d080> global_0094d080;  // (from the original)
inline constexpr guest::Function<0x00130ed8, u32(u32, u32)> call_00130ed8;  // (from the original)
inline constexpr guest::Function<0x00136e58, u32(u32, u32, u32, u32)> call_00136e58;  // (from the original)
inline constexpr guest::Function<0x004c331c, u32(u32, u32, u32, u32)> call_004c331c;  // (from the original)
inline constexpr guest::Function<0x004c7500, u32(u32, u32, u32, u32)> call_004c7500;  // (from the original)
inline constexpr guest::Function<0x006b1d88, u32(u32, u32, u32, u32)> call_006b1d88;  // (from the original)

void f_0027689c(gptr<Object_0027689c_0> arg0, u32 r1, gptr<Object_0027689c_2> arg2, u32 r3) {
    guest::StackFrame frame(0x18);  // the original's stack frame
    *frame.at<u32>(0) = r3;
    if (arg2->byte_0 <= 0xdu) {  // (from the original)
        u32 r0_1 = arg0->word_bc;
        if (r0_1 != 0) {
            call_00136e58(r0_1, 0u, arg2.addr(), r3);
        }
        if (arg2->byte_0 == 0xdu) {  // (from the original)
            u32 r0_2 = *global_0094d080;
            frame.release();
            call_006b1d88(r0_2, arg0.addr() + 0xbcu, 0x1000476u, 0x94d080u);  // (from the original)
            return;  // (from the original)
        }
        u32 r2_1 = r1;
        if (r1 != 0x1000475u) {  // (from the original)
            r2_1 = 0x1000475u;  // (from the original)
        }
        call_006b1d88(*global_0094d080, arg0.addr() + 0xbcu, r2_1, 0x94d080u);  // (from the original)
        call_004c331c(frame.at(0).addr(), arg0.addr() + 0xbcu, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        u32 r0_5 = *frame.at<u32>(0);
        u32 r1_4 = 0u;
        u32 r2_3 = *gptr<s16>(0x83b196u + (u32(arg2->byte_0) << 1));  // (from the original)
        if (r0_5 != 0) {
            call_004c7500(r0_5, r1_4, r2_3, 0x83b196u);  // (from the original)
            r1_4 = guest::cpu()->r[1];
        }
        call_00130ed8(frame.at(0).addr(), r1_4);
        r1 = guest::cpu()->r[1];
    }
    guest::cpu()->r[1] = r1;
}

}  // namespace d_0027689c
GUEST_EXPORT(0x0027689c, d_0027689c::f_0027689c);

// f_00276c98: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00276c98 {

struct __attribute__((packed)) Object_00276c98_0 {
    u8 unknown_0[0x34];  // (not used here)
    u8 byte_34;
    u8 unknown_35[0x3f];  // (not used here)
    u32 word_74;
};
GUEST_OFFSET(Object_00276c98_0, byte_34, 0x34);  // (from the original)
GUEST_OFFSET(Object_00276c98_0, word_74, 0x74);  // (from the original)

inline constexpr guest::Function<0x0020a4cc, u32(u32, u32, u32, u32)> call_0020a4cc;  // (from the original)

void f_00276c98(gptr<Object_00276c98_0> arg0, u32 r1, u32 r2, u32 r3) {
    if (arg0->byte_34 != 0 || r1 >= 0x83u) {  // (from the original)
        guest::cpu()->r[1] = r1;
        return;
    }
    arg0->word_74 = r1 + 0x1000a96u;  // (from the original)
    call_0020a4cc(arg0.addr(), r2, r3, r3);
}

}  // namespace d_00276c98
GUEST_EXPORT(0x00276c98, d_00276c98::f_00276c98);

// f_00276cdc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00276cdc {

struct __attribute__((packed)) Object_00276cdc_0 {
    u8 unknown_0[0x74];  // (not used here)
    u32 word_74;
};
GUEST_OFFSET(Object_00276cdc_0, word_74, 0x74);  // (from the original)

inline constexpr guest::Function<0x00130ed8, u32(u32, u32)> call_00130ed8;  // (from the original)
inline constexpr guest::Function<0x004c331c, u32(u32, u32, u32, u32)> call_004c331c;  // (from the original)
inline constexpr guest::Function<0x004c74b0, u32(u32, u32, u32, u32)> call_004c74b0;  // (from the original)

void f_00276cdc(gptr<Object_00276cdc_0> arg0, u32 r1_unused, u32 r2_unused, u32 r3, float S0) {
    guest::StackFrame frame(0x4);  // the original's stack frame
    u32 r0 = arg0.addr();
    *frame.at<u32>(0) = r3;
    u32 r4 = r0;
    r3 = arg0->word_74;
    u32 r1 = r0 + 0x44u;  // (from the original)
    u32 r2 = 0u;
    do {
        u32 r0_1 = *gptr<u32>(r2 >= 2u ? r1 : r1 + (r2 << 2));
        if ((r0_1 == 0 ? ~0u : *gptr<u32>(r0_1 + 0xb0u)) == r3) {  // (from the original)
            if (r2 < 2u) {
                r1 += (r2 << 2);
            }
            if (r1 == 0) {
                guest::cpu()->r[1] = r1;
                guest::cpu()->s[0] = S0;
                return;
            }
            guest::cpu()->s[0] = S0;
            call_004c331c(frame.at(0).addr(), r1, r2, r3);
            u32 r2_1 = guest::cpu()->r[2];
            u32 r3_1 = guest::cpu()->r[3];
            u32 r1_1 = *gptr<u32>(r4 + 0x7cu);  // (from the original)
            u32 r0_3 = *frame.at<u32>(0);
            float S0_1 = std::bit_cast<float>(*gptr<u32>(r1_1 + 0x120u));  // (from the original)
            if (r0_3 != 0) {
                guest::cpu()->s[0] = S0_1;
                call_004c74b0(r0_3, r1_1, r2_1, r3_1);
                r1_1 = guest::cpu()->r[1];
                S0_1 = guest::cpu()->s[0];
            }
            guest::cpu()->s[0] = S0_1;
            call_00130ed8(frame.at(0).addr(), r1_1);
            return;
        }
        r2 += 1u;
        guest::preempt();
    } while (s32(r2) < 2);
    guest::cpu()->r[1] = r1;
    guest::cpu()->s[0] = S0;
}

}  // namespace d_00276cdc
GUEST_EXPORT_FRAMED(0x00276cdc, d_00276cdc::f_00276cdc, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_00277b4c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00277b4c {

struct __attribute__((packed)) Local_00277b4c_ea_2 {
    u32 word_0;
    u32 word_4;
    u8 unknown_8[0x70];  // (not used here)
    u32 word_78;
    u32 word_7c;
    u32 word_80;
    u8 byte_84;
    u8 unknown_85[0x1];  // (not used here)
    u16 half_86;
    u16 half_88;
    u16 half_8a;
    u16 half_8c;
    u16 half_8e;
    u16 half_90;
    u8 unknown_92[0x2];  // (not used here)
    u32 word_94;
    u8 byte_98;
    u8 unknown_99[0x3];  // (not used here)
    u32 word_9c;
    u16 half_a0;
    u16 half_a2;
    u16 half_a4;
    u16 half_a6;
    u16 half_a8;
};
GUEST_OFFSET(Local_00277b4c_ea_2, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_00277b4c_ea_2, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_00277b4c_ea_2, word_78, 0x78);  // (from the original)
GUEST_OFFSET(Local_00277b4c_ea_2, word_7c, 0x7c);  // (from the original)
GUEST_OFFSET(Local_00277b4c_ea_2, word_80, 0x80);  // (from the original)
GUEST_OFFSET(Local_00277b4c_ea_2, byte_84, 0x84);  // (from the original)
GUEST_OFFSET(Local_00277b4c_ea_2, half_86, 0x86);  // (from the original)
GUEST_OFFSET(Local_00277b4c_ea_2, half_88, 0x88);  // (from the original)
GUEST_OFFSET(Local_00277b4c_ea_2, half_8a, 0x8a);  // (from the original)
GUEST_OFFSET(Local_00277b4c_ea_2, half_8c, 0x8c);  // (from the original)
GUEST_OFFSET(Local_00277b4c_ea_2, half_8e, 0x8e);  // (from the original)
GUEST_OFFSET(Local_00277b4c_ea_2, half_90, 0x90);  // (from the original)
GUEST_OFFSET(Local_00277b4c_ea_2, word_94, 0x94);  // (from the original)
GUEST_OFFSET(Local_00277b4c_ea_2, byte_98, 0x98);  // (from the original)
GUEST_OFFSET(Local_00277b4c_ea_2, word_9c, 0x9c);  // (from the original)
GUEST_OFFSET(Local_00277b4c_ea_2, half_a0, 0xa0);  // (from the original)
GUEST_OFFSET(Local_00277b4c_ea_2, half_a2, 0xa2);  // (from the original)
GUEST_OFFSET(Local_00277b4c_ea_2, half_a4, 0xa4);  // (from the original)
GUEST_OFFSET(Local_00277b4c_ea_2, half_a6, 0xa6);  // (from the original)
GUEST_OFFSET(Local_00277b4c_ea_2, half_a8, 0xa8);  // (from the original)

inline guest::global<u32, 0x00277c04> global_00277c04;  // (from the original)
inline guest::global<u32, 0x00277c08> global_00277c08;  // (from the original)
inline constexpr guest::Function<0x0020af18, u32(u32, u32, u32, u32)> call_0020af18;  // (from the original)
inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> call_00301d0c;  // (from the original)

u32 f_00277b4c(u32 r0, u32 r1, u32 r2, u32 r3, float S0, float S1) {
    u32 r0_1 = call_0020af18(r0, r1, r2, r3);
    *gptr<u32>(r0_1) = 0x8f8dc8;  // (from the original)
    u32 r0_3 = call_00301d0c(r0_1 + 0x44u, 0x131800u, 4u, 2u);  // (from the original)
    u32 r0_5 = call_00301d0c(r0_3 + 8u, 0x1287a8u, 0x14u, 2u);  // (from the original)
    u32 r2_1 = ~0u;
    *gptr<u32>(r0_5 + 0x28u) = r2_1;  // (from the original)
    gptr<Local_00277b4c_ea_2> ea_2 = gptr<Local_00277b4c_ea_2>(r0_5 - 0x4cu);  // (from the original)
    ea_2->word_0 = 0x8ef798;  // (from the original)
    ea_2->word_7c = 0;
    ea_2->word_78 = r2_1;
    ea_2->word_80 = 0;
    ea_2->byte_84 = 0;
    ea_2->half_86 = u16(r2_1);
    ea_2->half_88 = u16(r2_1);
    ea_2->half_8a = 0;
    ea_2->half_8c = u16(r2_1);
    float S0_3 = std::bit_cast<float>(*global_00277c04);
    ea_2->half_8e = u16(r2_1);
    ea_2->half_90 = 0;
    float S1_3 = std::bit_cast<float>(*global_00277c08);
    ea_2->word_94 = std::bit_cast<u32>(S0_3);
    ea_2->byte_98 = 0;
    ea_2->word_9c = std::bit_cast<u32>(S1_3);
    ea_2->half_a8 = 7;
    ea_2->half_a0 = u16(r2_1);
    ea_2->half_a2 = u16(r2_1);
    ea_2->half_a4 = 0;
    ea_2->half_a6 = 0;
    ea_2->word_4 = 3;
    guest::cpu()->r[1] = 0u;
    guest::cpu()->s[0] = S0_3;
    guest::cpu()->s[1] = S1_3;
    return ea_2.addr();
}

}  // namespace d_00277b4c
GUEST_EXPORT_FRAMED(0x00277b4c, d_00277b4c::f_00277b4c, 0x4010);  // pushes {r4, lr} first, as the original

// f_00277c1c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00277c1c {

inline constexpr guest::Function<0x00136cc8, u32(u32, u32, u32, u32)> call_00136cc8;  // (from the original)
inline constexpr guest::Function<0x00136e58, u32(u32, u32, u32, u32)> call_00136e58;  // (from the original)
inline constexpr guest::Function<0x0020aedc, u32(u32, u32, u32, u32)> call_0020aedc;  // (from the original)
inline constexpr guest::Function<0x0027643c, u32(u32, u32, u32, u32)> call_0027643c;  // (from the original)
inline constexpr guest::Function<0x002f76ad, u32(u32, u32, u32, u32)> call_002f76ac;  // (from the original)

u32 f_00277c1c(gptr<SoundObjHaniwa> arg0, u32 r1, u32 r2, u32 r3) {
    u32 r0 = arg0.addr();
    u32 r5 = 0;
    u32 cf_3 = 0;
    u32 r6 = r0;
    u32 r4 = r6;
    u32 r7 = ~0u;
    arg0->word_0 = 0x8ef798;  // (from the original)
    if (arg0->word_78 < 0x40u) {  // (from the original)
        r1 = 0u;
        r2 = arg0->word_74;
        r3 = r4 + 0x44u;  // (from the original)
        r5 = r1;
L_277c5c:;
        r0 = r3 + (r1 << 2);
L_277c60:;
        u32 r0_1 = *gptr<u32>(r0);
        if ((r0_1 == 0 ? ~0u : *gptr<u32>(r0_1 + 0xb0u)) != r2) {  // (from the original)
            r1 += 1u;
            u32 cf_1 = r1 >= 2u;
            if (s32(r1) < 2) {
                r0 = r3;
                if (cf_1) {
                    guest::preempt();
                    goto L_277c60;
                }
                guest::preempt();
                goto L_277c5c;
            }
        } else {
            if (r1 < 2u) {
                r3 += (r1 << 2);
            }
            if (r3 != 0) {
                u32 r0_2 = *gptr<u32>(r3);
                if (r0_2 != 0) {
                    call_00136e58(r0_2, 0u, r2, r3);
                    r2 = guest::cpu()->r[2];
                    r3 = guest::cpu()->r[3];
                }
            }
        }
        *gptr<u32>(r4 + 0x80u) = r5;  // (from the original)
        call_0027643c(*gptr<u32>(r4 + 0x7cu), *gptr<u32>(r4 + 0x78u), r2, r3);  // (from the original)
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        *gptr<u32>(r4 + 0x7cu) = r5;  // (from the original)
        *gptr<u32>(r4 + 0x78u) = r7;  // (from the original)
    }
    if (*gptr<u8>(r4 + 0x34u) != 0) {  // (from the original)
        *gptr<u32>(r4 + 0x74u) = r7;  // (from the original)
        r7 = r4;
        r5 = r4 + 0x44u;  // (from the original)
        r4 = 0u;
L_277cec:;
        r0 = r5 + (r4 << 2);
L_277cf0:;
        call_00136cc8(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r4 += 1u;
        u32 cf_2 = r4 >= 2u;
        if (s32(r4) < 2) {
            if (cf_2) {
                r0 = r5;
                guest::preempt();
                goto L_277cf0;
            }
            guest::preempt();
            goto L_277cec;
        }
        call_0020aedc(r7, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
    }
    r5 = r6 + 0x44u;  // (from the original)
    r4 = 0u;
    *gptr<u32>(r6) = 0x8f8dc8;  // (from the original)
    do {
        u32 r0_4 = r5;
        if (r4 < 2u) {
            r0_4 = r5 + (r4 << 2);
        }
        call_00136cc8(r0_4, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r4 += 1u;
        guest::preempt();
    } while (s32(r4) < 2);
    call_0020aedc(r6, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r5 = r6 + 0x44u;  // (from the original)
    r4 = 0u;
    r0 = r5;
    do {
        r0 += (r4 << 2);
        do {
            call_00136cc8(r0, r1, r2, r3);
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            r4 += 1u;
            cf_3 = r4 >= 2u;
            r0 = r5;
            if (s32(r4) >= 2) {
                call_002f76ac(r0, 0x137d74u, 4u, 2u);  // (from the original)
                return r5 - 0x44u;  // (from the original)
            }
            guest::preempt();
        } while (cf_3);
        guest::preempt();
    } while (1);
}

}  // namespace d_00277c1c
GUEST_EXPORT_FRAMED(0x00277c1c, d_00277c1c::f_00277c1c, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_00277d98: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00277d98 {

inline constexpr guest::Function<0x0020a4cc, u32(u32, u32, u32, u32)> call_0020a4cc;  // (from the original)
inline constexpr guest::Function<0x002a5fa8, u32(u32, u32, u32, u32)> call_002a5fa8;  // (from the original)

u32 f_00277d98(gptr<SoundObjPlayer> arg0, u32 r1, u32 r2) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 r0_1 = arg0->byte_34;
    if (r0_1 == 0) {
        call_002a5fa8(arg0.addr() + 0xa4u, arg0.addr(), r2, guest::cpu()->r[3]);  // (from the original)
        frame.release();
        return call_0020a4cc(arg0.addr(), r1, r2, guest::cpu()->r[3]);
    }
    guest::cpu()->r[1] = r1;
    return r0_1;
}

}  // namespace d_00277d98
GUEST_EXPORT(0x00277d98, d_00277d98::f_00277d98);

// f_00277f80: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00277f80 {

inline constexpr guest::Function<0x00136cc8, u32(u32)> call_00136cc8;  // (from the original)
inline constexpr guest::Function<0x0020aedc, u32(u32, u32)> call_0020aedc;  // (from the original)
inline constexpr guest::Function<0x002a6594, u32(u32, u32, u32, u32)> call_002a6594;  // (from the original)

u32 f_00277f80(gptr<SoundObjPlayer> arg0) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 r0 = arg0.addr();
    u32 cf_1 = 0;
    u32 r4_1 = r0;
    r0 = arg0->byte_34;
    if (r0 != 0) {
        call_002a6594(r4_1 + 0xa4u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        u32 r5 = r4_1 + 0x44u;  // (from the original)
        u32 r6 = r4_1;
        u32 r4 = 0u;
        r0 = r5;
        do {
            r0 += (r4 << 2);
            do {
                call_00136cc8(r0);
                r4 += 1u;
                cf_1 = r4 >= 4u;
                if (s32(r4) >= 4) {
                    frame.release();
                    return call_0020aedc(r6, guest::cpu()->r[1]);
                }
                r0 = r5;
                guest::preempt();
            } while (cf_1);
            guest::preempt();
        } while (1);
    }
    return r0;
}

}  // namespace d_00277f80
GUEST_EXPORT(0x00277f80, d_00277f80::f_00277f80);

// f_00277fe4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00277fe4 {

struct __attribute__((packed)) Local_00277fe4_r0_8 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
    u8 unknown_8[0xb4];  // (not used here)
    u8 byte_bc;
};
GUEST_OFFSET(Local_00277fe4_r0_8, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_00277fe4_r0_8, byte_bc, 0xbc);  // (from the original)

inline constexpr guest::Function<0x0020af18, u32(u32, u32, u32, u32)> call_0020af18;  // (from the original)
inline constexpr guest::Function<0x002a65d0, u32(u32)> call_002a65d0;  // (from the original)
inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> call_00301d0c;  // (from the original)

u32 f_00277fe4(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r0_1 = call_0020af18(r0, r1, r2, r3);
    *gptr<u32>(r0_1) = 0x8f8e48;  // (from the original)
    u32 r0_3 = call_00301d0c(r0_1 + 0x44u, 0x131800u, 4u, 4u);  // (from the original)
    u32 r0_5 = call_00301d0c(r0_3 + 0x10u, 0x1287a8u, 0x14u, 4u);  // (from the original)
    *gptr<u32>(r0_5 - 0x54u) = 0x8ef7d8;  // (from the original)
    u32 r0_7 = call_002a65d0(r0_5 + 0x50u);  // (from the original)
    gptr<Local_00277fe4_r0_8> r0_8 = gptr<Local_00277fe4_r0_8>(r0_7 - 0xa4u);  // (from the original)
    r0_8->byte_bc = 0;
    r0_8->word_4 = 0;
    return r0_8.addr();
}

}  // namespace d_00277fe4
GUEST_EXPORT_FRAMED(0x00277fe4, d_00277fe4::f_00277fe4, 0x4010);  // pushes {r4, lr} first, as the original

// f_002783c4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002783c4 {

struct __attribute__((packed)) Local_002783c4_ea_1 {
    u32 word_0;
    u8 unknown_4[0x4];  // (not used here)
    u32 word_8;
};
GUEST_OFFSET(Local_002783c4_ea_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_002783c4_ea_1, word_8, 0x8);  // (from the original)

inline guest::global<u32, 0x0094d080> global_0094d080;  // (from the original)
inline constexpr guest::Function<0x0013c1e8, u32(u32, u32, u32)> call_0013c1e8;  // (from the original)
inline constexpr guest::Function<0x0013c240, u32(u32, u32, u32, u32)> call_0013c240;  // (from the original)
inline constexpr guest::Function<0x004c9310, u32(u32, u32)> call_004c9310;  // (from the original)
inline constexpr guest::Function<0x0073e1c0, u32(u32, u32, u32)> call_0073e1c0;  // (from the original)

void f_002783c4(u32 r0, u32 r1) {
    guest::StackFrame frame(0x44);  // the original's stack frame
    u32 r6_1 = *gptr<u32>(*gptr<u32>(*global_0094d080 + 0xc0cu) + 0x144u);  // (from the original)
    u32 r7_1 = *gptr<u32>(*global_0094d080 + 0xc10u);  // (from the original)
    *frame.at<u32>(0x18) = 0;  // (from the original)
    *frame.at<u8>(0x30) = 0;  // (from the original)
    *frame.at<u32>(0x2c) = 0;  // (from the original)
    *frame.at<u8>(0x31) = 0;  // (from the original)
    u32 r0_1 = ~0u;
    *frame.at<u32>(0x1c) = r0_1;  // (from the original)
    *frame.at<u32>(0x20) = r0_1;  // (from the original)
    *frame.at<u32>(0x24) = r0_1;  // (from the original)
    *frame.at<u32>(0x28) = r0_1;  // (from the original)
    u32 r0_2 = call_0013c240(r7_1, r1, frame.at(0x18).addr(), guest::cpu()->r[3]);  // (from the original)
    if (r0_2 != 0) {
        u32 r2_2 = frame.at(0).addr();
        *gptr<u32>(r0 + 0x14u) = *frame.at<u32>(0x18);  // (from the original)
        u32 r0_3 = call_0013c1e8(r7_1, r1, r2_2);
        if (r0_3 != 0) {
            u32 r0_4 = call_0073e1c0(r6_1, *frame.at<u32>(0), r2_2);
            call_004c9310(frame.at(0x34).addr(), r0_4);  // (from the original)
            u32 r0_6 = *frame.at<u32>(0x38);  // (from the original)
            gptr<Local_002783c4_ea_1> ea_1 = gptr<Local_002783c4_ea_1>(r0 + 0x10u);  // (from the original)
            ea_1->word_0 = r1;
            ea_1->word_8 = r0_6;
        }
    }
}

}  // namespace d_002783c4
GUEST_EXPORT_FRAMED(0x002783c4, d_002783c4::f_002783c4, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_00278484: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00278484 {

struct __attribute__((packed)) Object_00278484_0 {
    u8 unknown_0[0x1c];  // (not used here)
    u8 byte_1c;
};
GUEST_OFFSET(Object_00278484_0, byte_1c, 0x1c);  // (from the original)

inline constexpr guest::Function<0x002782dc, u32(u32, u32, u32, u32)> call_002782dc;  // (from the original)

void f_00278484(gptr<Object_00278484_0> arg0, u32 r1_unused, u32 r2_unused, u32 r3) {
    guest::StackFrame frame(0x4);  // the original's stack frame
    *frame.at<u32>(0) = r3;
    u32 r12_1 = *frame.at<u32>(8);
    arg0->byte_1c = u8(r3);
    *frame.at<u32>(0) = r12_1;
    call_002782dc(arg0.addr(), guest::cpu()->r[1], guest::cpu()->r[2], 3u);
}

}  // namespace d_00278484
GUEST_EXPORT_FRAMED(0x00278484, d_00278484::f_00278484, 0x4000);  // pushes {lr} first, as the original

// f_002796a0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002796a0 {

struct __attribute__((packed)) Object_002796a0_1 {
    u32 word_0;
};
GUEST_OFFSET(Object_002796a0_1, word_0, 0x0);  // (from the original)

struct __attribute__((packed)) Local_002796a0_r0_1 {
    u8 unknown_0[0x146];  // (not used here)
    u8 byte_146;
    u8 byte_147;
};
GUEST_OFFSET(Local_002796a0_r0_1, byte_146, 0x146);  // (from the original)
GUEST_OFFSET(Local_002796a0_r0_1, byte_147, 0x147);  // (from the original)

inline guest::global<u32, 0x002796ec> global_002796ec;  // (from the original)
inline constexpr guest::Function<0x0012e8e8, u32(u32, u32)> call_0012e8e8;  // (from the original)
inline constexpr guest::Function<0x0020a474, u32(u32, u32, u32)> call_0020a474;  // (from the original)

u32 f_002796a0(u32 r0, gptr<Object_002796a0_1> arg1, u32 r2, float S0) {
    u32 r1_1 = arg1->word_0;
    u32 r3_1 = r0 + ((r1_1 << 3) - r1_1 << 2);
    u32 r12_1 = *gptr<u32>(r3_1 + 0x24u);  // (from the original)
    if (r12_1 == 4u || r12_1 == 5u) {
        guest::cpu()->r[1] = r1_1;
        return r0;
    }
    float S0_1 = std::bit_cast<float>(*global_002796ec);
    if (r2 == 0) {
        gptr<Local_002796a0_r0_1> r0_1 = gptr<Local_002796a0_r0_1>(r0 + (r1_1 + (r1_1 << 1) << 2));
        u32 r2_1 = r0_1->byte_146;
        u32 r1_2 = r0_1->byte_147;
        guest::cpu()->s[0] = S0_1;
        return call_0020a474(r3_1 + 0xcu, r1_2, r2_1);  // (from the original)
    }
    guest::cpu()->s[0] = S0_1;
    return call_0012e8e8(r3_1 + 0xcu, r1_1);  // (from the original)
}

}  // namespace d_002796a0
GUEST_EXPORT(0x002796a0, d_002796a0::f_002796a0);

// f_00279984: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00279984 {

struct __attribute__((packed)) Object_00279984_1 {
    u8 unknown_0[0x83de92];  // (not used here)
    u8 byte_83de92;
};
GUEST_OFFSET(Object_00279984_1, byte_83de92, 0x83de92);  // (from the original)

struct __attribute__((packed)) Local_00279984_r4_1 {
    u8 unknown_0[0x434];  // (not used here)
    u8 byte_434;
};
GUEST_OFFSET(Local_00279984_r4_1, byte_434, 0x434);  // (from the original)

inline guest::global<u32, 0x00279a04> global_00279a04;  // (from the original)
inline guest::global<u32, 0x0094d080> global_0094d080;  // (from the original)
inline constexpr guest::Function<0x002bcd40, u32(u32, u32)> call_002bcd40;  // (from the original)
inline constexpr guest::Function<0x004bf06c, u32(u32, u32, u32, u32)> call_004bf06c;  // (from the original)
inline constexpr guest::Function<0x00766f04, u32(u32, u32, u32, u32)> call_00766f04;  // (from the original)

void f_00279984(u32 r0, gptr<Object_00279984_1> arg1, float S0) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    if (arg1.addr() >= 0x12u) {  // (from the original)
        return;
    }
    u32 r2_1 = arg1->byte_83de92;
    if (r2_1 != 1u) {
        u32 r0_1 = *global_0094d080;
        u32 r0_2 = call_00766f04(r0_1, arg1.addr(), r2_1, guest::cpu()->r[3]);
        frame.release();
        call_004bf06c(r0_2, 1u, 0u, guest::cpu()->r[3]);
        return;
    }
    gptr<Local_00279984_r4_1> r4_1 = gptr<Local_00279984_r4_1>(r0 + arg1.addr());
    if (r4_1->byte_434 == 1u) {
        guest::cpu()->s[0] = S0;
        return;
    }
    u32 r0_3 = r0 + (((arg1.addr() << 3) - arg1.addr()) << 2);
    float S0_2 = std::bit_cast<float>(*global_00279a04);
    *gptr<u32>((r0 + (arg1.addr() << 2)) + 0x3ecu) = *gptr<u32>(r0_3 + 0x1fcu);  // (from the original)
    guest::cpu()->s[0] = S0_2;
    call_002bcd40(r0_3 + 0x1f4u, 0u);  // (from the original)
    r4_1->byte_434 = 1;
}

}  // namespace d_00279984
GUEST_EXPORT(0x00279984, d_00279984::f_00279984);

// f_00279a08: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00279a08 {

struct __attribute__((packed)) Object_00279a08_1 {
    u8 unknown_0[0x83de92];  // (not used here)
    u8 byte_83de92;
};
GUEST_OFFSET(Object_00279a08_1, byte_83de92, 0x83de92);  // (from the original)

struct __attribute__((packed)) Local_00279a08_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Local_00279a08_ea_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_00279a08_ea_1, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_00279a08_ea_1, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Local_00279a08_ea_1, word_c, 0xc);  // (from the original)

struct __attribute__((packed)) Local_00279a08_ea_2 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Local_00279a08_ea_2, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_00279a08_ea_2, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_00279a08_ea_2, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Local_00279a08_ea_2, word_c, 0xc);  // (from the original)

struct __attribute__((packed)) Local_00279a08_ea_4 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Local_00279a08_ea_4, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_00279a08_ea_4, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_00279a08_ea_4, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Local_00279a08_ea_4, word_c, 0xc);  // (from the original)

inline guest::global<u32, 0x0094d080> global_0094d080;  // (from the original)
inline constexpr guest::Function<0x002bcd40, u32(u32, u32)> call_002bcd40;  // (from the original)
inline constexpr guest::Function<0x004bf06c, u32(u32, u32, u32, u32)> call_004bf06c;  // (from the original)
inline constexpr guest::Function<0x00766f04, u32(u32, u32, u32, u32)> call_00766f04;  // (from the original)

void f_00279a08(u32 r0, gptr<Object_00279a08_1> arg1, u32 r2, float S0) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r14 = guest::cpu()->r[14];
    if (arg1.addr() >= 0x12u) {  // (from the original)
        guest::cpu()->r[4] = r4;
        guest::cpu()->r[5] = r5;
        guest::cpu()->r[6] = r6;
        return;
    }
    gptr<Local_00279a08_ea_1> ea_1 = gptr<Local_00279a08_ea_1>(frame.at(0).addr());
    ea_1->word_0 = r4;
    ea_1->word_4 = r5;
    ea_1->word_8 = r6;
    ea_1->word_c = r14;
    if (arg1->byte_83de92 != 1u) {
        u32 r0_1 = *global_0094d080;
        u32 r0_2 = call_00766f04(r0_1, arg1.addr(), r2, guest::cpu()->r[3]);
        gptr<Local_00279a08_ea_2> ea_2 = gptr<Local_00279a08_ea_2>(frame.at(0).addr());
        u32 r4_1 = ea_2->word_0;
        u32 r5_1 = ea_2->word_4;
        u32 r6_1 = ea_2->word_8;
        r14 = ea_2->word_c;
        guest::cpu()->r[4] = r4_1;
        guest::cpu()->r[5] = r5_1;
        guest::cpu()->r[6] = r6_1;
        frame.release();
        call_004bf06c(r0_2, 0u, r2, guest::cpu()->r[3]);
        return;
    }
    float S0_2 = std::bit_cast<float>(*gptr<u32>(r0 + (arg1.addr() << 2) + 0x3ecu));  // (from the original)
    guest::cpu()->s[0] = S0_2;
    call_002bcd40(r0 + ((arg1.addr() << 3) - arg1.addr() << 2) + 0x1f4u, r2);  // (from the original)
    *gptr<u8>(r0 + arg1.addr() + 0x434u) = 0;  // (from the original)
    gptr<Local_00279a08_ea_4> ea_4 = gptr<Local_00279a08_ea_4>(frame.at(0).addr());
    u32 r4_2 = ea_4->word_0;
    u32 r5_2 = ea_4->word_4;
    u32 r6_2 = ea_4->word_8;
    guest::cpu()->r[4] = r4_2;
    guest::cpu()->r[5] = r5_2;
    guest::cpu()->r[6] = r6_2;
}

}  // namespace d_00279a08
GUEST_EXPORT(0x00279a08, d_00279a08::f_00279a08);

// f_00279e9c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00279e9c {

struct __attribute__((packed)) Local_00279e9c_r4_1 {
    u8 unknown_0[0x26];  // (not used here)
    u8 byte_26;
    u8 byte_27;
    u32 word_28;
};
GUEST_OFFSET(Local_00279e9c_r4_1, byte_26, 0x26);  // (from the original)
GUEST_OFFSET(Local_00279e9c_r4_1, byte_27, 0x27);  // (from the original)
GUEST_OFFSET(Local_00279e9c_r4_1, word_28, 0x28);  // (from the original)

inline constexpr guest::Function<0x002e9d28, u32(u32, u32, u32, u32)> call_002e9d28;  // (from the original)
inline constexpr guest::Function<0x00615508, u32(u32, u32)> call_00615508;  // (from the original)
inline constexpr guest::Function<0x00615534, u32(u32, u32)> call_00615534;  // (from the original)

void f_00279e9c(u32 r0, u32 r1) {
    u32 r1_3 = 0;
    u32 r6 = r0;
    call_002e9d28(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r5 = 0u;
    u32 r7 = r5;
    do {
        u32 r1_1 = r5 + (r5 << 1) + (r5 << 3);
        gptr<Local_00279e9c_r4_1> r4_1 = gptr<Local_00279e9c_r4_1>(r6 + (r1_1 << 2) + 0xca8u);  // (from the original)
        call_00615508(r4_1.addr(), r1_1);
        call_00615534(r4_1.addr() + 0x10u, guest::cpu()->r[1]);  // (from the original)
        r1_3 = guest::cpu()->r[1];
        r4_1->byte_26 = u8(r7);
        r5 += 1u;
        r4_1->byte_27 = u8(r7);
        r4_1->word_28 = r7;
        guest::preempt();
    } while (r5 < 4u);
    *gptr<u32>(r6 + 0xd58u) = r7;  // (from the original)
    *gptr<u32>(r6 + 0xd5cu) = r7;  // (from the original)
    *gptr<u32>(r6 + 0xd60u) = r7;  // (from the original)
    guest::cpu()->r[1] = r1_3;
}

}  // namespace d_00279e9c
GUEST_EXPORT_FRAMED(0x00279e9c, d_00279e9c::f_00279e9c, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_00279f00: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00279f00 {

struct __attribute__((packed)) Local_00279f00_r0_4 {
    u8 unknown_0[0xd58];  // (not used here)
    u32 word_d58;
    u32 word_d5c;
    u32 word_d60;
};
GUEST_OFFSET(Local_00279f00_r0_4, word_d58, 0xd58);  // (from the original)
GUEST_OFFSET(Local_00279f00_r0_4, word_d5c, 0xd5c);  // (from the original)
GUEST_OFFSET(Local_00279f00_r0_4, word_d60, 0xd60);  // (from the original)

inline constexpr guest::Function<0x002e9dcc, u32(u32, u32, u32, u32)> call_002e9dcc;  // (from the original)
inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> call_00301d0c;  // (from the original)

void f_00279f00(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r0_1 = call_002e9dcc(r0, r1, r2, r3);
    u32 r0_3 = call_00301d0c(r0_1 + 0xca8u, 0x2a7044u, 0x2cu, 4u);  // (from the original)
    gptr<Local_00279f00_r0_4> r0_4 = gptr<Local_00279f00_r0_4>(r0_3 - 0xca8u);  // (from the original)
    r0_4->word_d5c = 0;
    r0_4->word_d60 = 0;
    r0_4->word_d58 = 0;
    guest::cpu()->r[1] = 0u;
}

}  // namespace d_00279f00
GUEST_EXPORT_FRAMED(0x00279f00, d_00279f00::f_00279f00, 0x4010);  // pushes {r4, lr} first, as the original

// f_00279f40: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00279f40 {

struct __attribute__((packed)) Local_00279f40_r5_1 {
    u8 unknown_0[0x870];  // (not used here)
    u32 word_870;
    u32 word_874;
};
GUEST_OFFSET(Local_00279f40_r5_1, word_870, 0x870);  // (from the original)
GUEST_OFFSET(Local_00279f40_r5_1, word_874, 0x874);  // (from the original)

inline constexpr guest::Function<0x001b3f24, u32(u32, u32, u32, u32)> call_001b3f24;  // (from the original)

u32 f_00279f40(u32 r0, u32 r1, u32 r2) {
    u32 r0_1 = 0;
    u32 r6 = r0;
    u32 r7 = r1;
    u32 r8 = r2;
    u32 r4 = 0u;
    u32 r9 = ~0u;
    do {
        gptr<Local_00279f40_r5_1> r5_1 = gptr<Local_00279f40_r5_1>(r6 + ((r4 << 4) - r4 + (r4 << 8) << 3));
        r0_1 = r5_1->word_870;
        u32 zf_1 = r0_1 == r7;
        if (zf_1) {
            r0_1 = r5_1->word_874;
            zf_1 = r0_1 == r8;
        }
        if (zf_1) {
            r0_1 = call_001b3f24(r5_1.addr(), 0x16u, r2, guest::cpu()->r[3]);  // (from the original)
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r5_1->word_870 = r9;
            r5_1->word_874 = r9;
        }
        r4 += 1u;
        guest::preempt();
    } while (r4 < 8u);
    guest::cpu()->r[1] = r1;
    return r0_1;
}

}  // namespace d_00279f40
GUEST_EXPORT_FRAMED(0x00279f40, d_00279f40::f_00279f40, 0x47f0);  // pushes {r4, r5, r6, r7, r8, r9, r10, lr} first, as the original

// f_0027a004: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0027a004 {

struct __attribute__((packed)) Local_0027a004_r1_1 {
    u8 unknown_0[0x870];  // (not used here)
    u32 word_870;
    u32 word_874;
};
GUEST_OFFSET(Local_0027a004_r1_1, word_870, 0x870);  // (from the original)
GUEST_OFFSET(Local_0027a004_r1_1, word_874, 0x874);  // (from the original)

struct __attribute__((packed)) Local_0027a004_r1_2 {
    u8 unknown_0[0xe8];  // (not used here)
    u32 word_e8;
    u32 word_ec;
};
GUEST_OFFSET(Local_0027a004_r1_2, word_e8, 0xe8);  // (from the original)
GUEST_OFFSET(Local_0027a004_r1_2, word_ec, 0xec);  // (from the original)


u32 f_0027a004(u32 r0) {
    gptr<Local_0027a004_r1_2> r1_2 = gptr<Local_0027a004_r1_2>(0u);
    u32 r2 = r0;
    r0 = 0u;
    do {
        gptr<Local_0027a004_r1_1> r1_1 = gptr<Local_0027a004_r1_1>(r2 + ((r0 << 4) - r0 + (r0 << 8) << 3));
        if (r1_1->word_870 + 1u == 0 && r1_1->word_874 + 1u == 0) {
            guest::cpu()->r[1] = r1_1.addr();
            return r0;
        }
        r1_2 = gptr<Local_0027a004_r1_2>(r1_1.addr() + 0x1000u);  // (from the original)
        u32 zf_1 = r1_2->word_e8 + 1u == 0;
        if (zf_1) {
            r1_2 = gptr<Local_0027a004_r1_2>(r1_2->word_ec);
            zf_1 = r1_2.addr() + 1u == 0;
        }
        if (zf_1) {
            guest::cpu()->r[1] = r1_2.addr();
            return r0 + 1u;
        }
        r0 += 2u;
        guest::preempt();
    } while (s32(r0) < 8);
    guest::cpu()->r[1] = r1_2.addr();
    return 0u;
}

}  // namespace d_0027a004
GUEST_EXPORT(0x0027a004, d_0027a004::f_0027a004);

// f_0027a060: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0027a060 {

struct __attribute__((packed)) Local_0027a060_r5_1 {
    u8 unknown_0[0x870];  // (not used here)
    u32 word_870;
    u32 word_874;
};
GUEST_OFFSET(Local_0027a060_r5_1, word_870, 0x870);  // (from the original)
GUEST_OFFSET(Local_0027a060_r5_1, word_874, 0x874);  // (from the original)

inline constexpr guest::Function<0x001b3f24, u32(u32, u32, u32, u32)> call_001b3f24;  // (from the original)

void f_0027a060(u32 r0) {
    u32 r6 = r0;
    u32 r4 = 0u;
    u32 r7 = ~0u;
    do {
        gptr<Local_0027a060_r5_1> r5_1 = gptr<Local_0027a060_r5_1>(r6 + ((r4 << 4) - r4 + (r4 << 8) << 3));
        call_001b3f24(r5_1.addr(), 0x16u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        r4 += 1u;
        r5_1->word_870 = r7;
        r5_1->word_874 = r7;
        guest::preempt();
    } while (r4 < 8u);
}

}  // namespace d_0027a060
GUEST_EXPORT_FRAMED(0x0027a060, d_0027a060::f_0027a060, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_0027a0a0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0027a0a0 {

struct __attribute__((packed)) Local_0027a0a0_r5_1 {
    u8 unknown_0[0x870];  // (not used here)
    u32 word_870;
    u32 word_874;
};
GUEST_OFFSET(Local_0027a0a0_r5_1, word_870, 0x870);  // (from the original)
GUEST_OFFSET(Local_0027a0a0_r5_1, word_874, 0x874);  // (from the original)

inline constexpr guest::Function<0x003059f8, u32(u32, u32, u32, u32)> call_003059f8;  // (from the original)

void f_0027a0a0(u32 r0) {
    u32 r6 = r0;
    u32 r4 = 0u;
    u32 r7 = ~0u;
    do {
        gptr<Local_0027a0a0_r5_1> r5_1 = gptr<Local_0027a0a0_r5_1>(r6 + ((r4 << 4) - r4 + (r4 << 8) << 3));
        call_003059f8(r5_1.addr(), guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
        r4 += 1u;
        r5_1->word_870 = r7;
        r5_1->word_874 = r7;
        guest::preempt();
    } while (r4 < 8u);
}

}  // namespace d_0027a0a0
GUEST_EXPORT_FRAMED(0x0027a0a0, d_0027a0a0::f_0027a0a0, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_0027a2bc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0027a2bc {

struct __attribute__((packed)) Local_0027a2bc_r12_1 {
    u8 unknown_0[0x870];  // (not used here)
    u32 word_870;
    u32 word_874;
};
GUEST_OFFSET(Local_0027a2bc_r12_1, word_870, 0x870);  // (from the original)
GUEST_OFFSET(Local_0027a2bc_r12_1, word_874, 0x874);  // (from the original)


u32 f_0027a2bc(u32 r0, u32 r1, u32 r2) {
    u32 r3 = 0u;
    do {
        gptr<Local_0027a2bc_r12_1> r12_1 = gptr<Local_0027a2bc_r12_1>(r0 + ((r3 << 4) - r3 + (r3 << 8) << 3));
        if (r12_1->word_870 + 1u == 0 && r12_1->word_874 + 1u == 0) {
            *gptr<u32>(r0 + ((r3 << 4) - r3 + (r3 << 8) << 3) + 0x870u) = r1;  // (from the original)
            r12_1->word_874 = r2;
            return 1u;
        }
        r3 += 1u;
        guest::preempt();
    } while (s32(r3) < 8);
    return 0u;
}

}  // namespace d_0027a2bc
GUEST_EXPORT_FRAMED(0x0027a2bc, d_0027a2bc::f_0027a2bc, 0x10);  // pushes {r4} first, as the original

// f_0027a31c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0027a31c {

struct __attribute__((packed)) Local_0027a31c_r5_1 {
    u8 unknown_0[0x870];  // (not used here)
    u32 word_870;
    u32 word_874;
};
GUEST_OFFSET(Local_0027a31c_r5_1, word_870, 0x870);  // (from the original)
GUEST_OFFSET(Local_0027a31c_r5_1, word_874, 0x874);  // (from the original)

inline constexpr guest::Function<0x001b3f24, u32(u32, u32, u32, u32)> call_001b3f24;  // (from the original)
inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> call_00301d0c;  // (from the original)

u32 f_0027a31c(u32 r0) {
    u32 r1_1 = 0;
    u32 r0_1 = call_00301d0c(r0, 0x1b497cu, 0x878u, 8u);  // (from the original)
    u32 r2 = guest::cpu()->r[2];
    u32 r3 = guest::cpu()->r[3];
    u32 r6 = r0_1;
    u32 r4 = 0u;
    u32 r7 = ~0u;
    do {
        gptr<Local_0027a31c_r5_1> r5_1 = gptr<Local_0027a31c_r5_1>(r6 + ((r4 << 4) - r4 + (r4 << 8) << 3));
        call_001b3f24(r5_1.addr(), 0x16u, r2, r3);  // (from the original)
        r1_1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r4 += 1u;
        r5_1->word_870 = r7;
        r5_1->word_874 = r7;
        guest::preempt();
    } while (r4 < 8u);
    guest::cpu()->r[1] = r1_1;
    return r6;
}

}  // namespace d_0027a31c
GUEST_EXPORT_FRAMED(0x0027a31c, d_0027a31c::f_0027a31c, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_0027a4f4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0027a4f4 {

inline constexpr guest::Function<0x002fbd54, u32(u32, u32, u32, u32)> call_002fbd54;  // (from the original)
inline constexpr guest::Function<0x005c6760, u32(u32, u32, u32, u32)> call_005c6760;  // (from the original)
inline constexpr guest::Function<0x006bca58, u32(u32, u32, u32, u32)> call_006bca58;  // (from the original)

u32 f_0027a4f4(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r0_2 = 0;
    u32 r6 = r0;
    u32 r7 = r1;
    u32 r8 = r2;
    call_005c6760(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    u32 r4 = 0u;
    do {
        u32 r5_1 = r6 + (r4 * 0x149u << 7);  // (from the original)
        r0_2 = call_002fbd54(r5_1 + 0x55a6u, r1, r2, r3);  // (from the original)
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (r0_2 != 0) {
            r0_2 = call_006bca58(r5_1, r7, r8, r4 & 0xffu);  // (from the original)
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
        }
        r4 += 1u;
        guest::preempt();
    } while (r4 < 4u);
    guest::cpu()->r[1] = r1;
    return r0_2;
}

}  // namespace d_0027a4f4
GUEST_EXPORT_FRAMED(0x0027a4f4, d_0027a4f4::f_0027a4f4, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_0027a6c4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0027a6c4 {

inline constexpr guest::Function<0x00301e20, u32(u32, u32, u32, u32)> call_00301e20;  // (from the original)
inline constexpr guest::Function<0x00309ef0, u32(u32, u32)> call_00309ef0;  // (from the original)
inline constexpr guest::Function<0x0030e56c, u32(u32, u32)> call_0030e56c;  // (from the original)

u32 f_0027a6c4(u32 r0, u32 r1) {
    u32 r4 = 0;
    u32 r9 = 0;
    u32 r5_1 = 0;
    u32 r0_3 = 0;
    u32 r7_1 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 r6 = r0;
    u32 r8 = r1;
    u32 r0_1 = call_00301e20(r1, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0_1 == 0) {
        return r0_1;
    } else {
        r4 = 0u;
        r9 = r4;
    }
L_27a6e8:;
    u32 r0_2 = r4 & 0xffu;  // (from the original)
    if (r0_2 >= 4u) {
        r5_1 = r9;
    } else {
        r1 = r0_2 * 0x149u;  // (from the original)
        r5_1 = r6 + (r1 << 7);
    }
    if (r5_1 == 0) {
        goto L_27a768;
    }
    r0_3 = call_00301e20(r8, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0_3 == 0) {
        goto L_27a768;
    }
    r7_1 = r5_1 + 0x8e08u;  // (from the original)
    r0_4 = call_00309ef0(r7_1, r1);
    r1 = guest::cpu()->r[1];
    if (r0_4 == 0 || *gptr<u8>(r7_1 + 9u) >= 3u) {
        goto L_27a768;
    }
    r0_5 = call_0030e56c(r7_1, r8);
    r1 = guest::cpu()->r[1];
    if (r0_5 == 0 || r7_1 == 0) {
        goto L_27a768;
    }
    return r5_1;
L_27a768:;
    r4 += 1u;
    if (s32(r4) >= 4) {
        return 0u;
    }
    guest::preempt();
    goto L_27a6e8;
}

}  // namespace d_0027a6c4
GUEST_EXPORT_FRAMED(0x0027a6c4, d_0027a6c4::f_0027a6c4, 0x47f0);  // pushes {r4, r5, r6, r7, r8, r9, r10, lr} first, as the original

// f_0027a780: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0027a780 {

inline constexpr guest::Function<0x00118c9d, u32(u32, u32)> call_00118c9c;  // (from the original)
inline constexpr guest::Function<0x002fb328, u32(u32, u32)> call_002fb328;  // (from the original)
inline constexpr guest::Function<0x00301e20, u32(u32, u32, u32, u32)> call_00301e20;  // (from the original)
inline constexpr guest::Function<0x00309ef0, u32(u32, u32)> call_00309ef0;  // (from the original)

u32 f_0027a780(u32 r0, u32 r1) {
    u32 r4 = 0;
    u32 r9 = 0;
    u32 r5_1 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 r1_1 = 0;
    u32 r8_1 = 0;
    u32 r0_7 = 0;
    u32 r6 = r0;
    u32 r7 = r1;
    u32 r0_1 = call_00301e20(r1, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0_1 == 0) {
        return r0_1;
    } else {
        r4 = 0u;
        r9 = r4;
    }
L_27a7a4:;
    u32 r0_2 = r4 & 0xffu;  // (from the original)
    if (r0_2 >= 4u) {
        r5_1 = r9;
    } else {
        r1 = r0_2 * 0x149u;  // (from the original)
        r5_1 = r6 + (r1 << 7);
    }
    if (r5_1 == 0) {
        goto L_27a83c;
    }
    r0_3 = call_00301e20(r7, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0_3 == 0) {
        goto L_27a83c;
    }
    r0_4 = call_002fb328(r0_3, r1);
    r0_5 = r0_4 + 0x292a4u;  // (from the original)
    r0_6 = call_00118c9c(r0_5, r7);
    r1_1 = guest::cpu()->r[1];
    r8_1 = r5_1 + 0x8d4cu;  // (from the original)
    r0_7 = call_00309ef0(r8_1, r1_1);
    r1 = guest::cpu()->r[1];
    if (r0_7 == 0 || *gptr<u8>(r8_1 + 9u) != 0 || u32(*gptr<s8>(0x8d5bu + r5_1)) != r0_6 || r8_1 == 0) {  // (from the original)
        goto L_27a83c;
    }
    return r5_1;
L_27a83c:;
    r4 += 1u;
    if (s32(r4) >= 4) {
        guest::cpu()->r[1] = r1;
        return 0u;
    }
    guest::preempt();
    goto L_27a7a4;
}

}  // namespace d_0027a780
GUEST_EXPORT_FRAMED(0x0027a780, d_0027a780::f_0027a780, 0x47f0);  // pushes {r4, r5, r6, r7, r8, r9, r10, lr} first, as the original

// f_0027a858: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0027a858 {

inline constexpr guest::Function<0x00118c9d, u32(u32, u32)> call_00118c9c;  // (from the original)
inline constexpr guest::Function<0x002fb328, u32(u32, u32)> call_002fb328;  // (from the original)
inline constexpr guest::Function<0x00301e20, u32(u32, u32, u32, u32)> call_00301e20;  // (from the original)
inline constexpr guest::Function<0x00309ef0, u32(u32, u32)> call_00309ef0;  // (from the original)

u32 f_0027a858(u32 r0, u32 r1) {
    u32 r4 = 0;
    u32 r9 = 0;
    u32 r5_1 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 r1_1 = 0;
    u32 r8_1 = 0;
    u32 r0_7 = 0;
    u32 r6 = r0;
    u32 r7 = r1;
    u32 r0_1 = call_00301e20(r1, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0_1 == 0) {
        return r0_1;
    } else {
        r4 = 0u;
        r9 = r4;
    }
L_27a87c:;
    u32 r0_2 = r4 & 0xffu;  // (from the original)
    if (r0_2 >= 4u) {
        r5_1 = r9;
    } else {
        r1 = r0_2 * 0x149u;  // (from the original)
        r5_1 = r6 + (r1 << 7);
    }
    if (r5_1 == 0) {
        goto L_27a914;
    }
    r0_3 = call_00301e20(r7, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0_3 == 0) {
        goto L_27a914;
    }
    r0_4 = call_002fb328(r0_3, r1);
    r0_5 = r0_4 + 0x292a4u;  // (from the original)
    r0_6 = call_00118c9c(r0_5, r7);
    r1_1 = guest::cpu()->r[1];
    r8_1 = r5_1 + 0x8d5cu;  // (from the original)
    r0_7 = call_00309ef0(r8_1, r1_1);
    r1 = guest::cpu()->r[1];
    if (r0_7 == 0 || *gptr<u8>(r8_1 + 9u) >= 2u || u32(*gptr<s8>(0x8d6bu + r5_1)) != r0_6 || r8_1 == 0) {  // (from the original)
        goto L_27a914;
    }
    return r5_1;
L_27a914:;
    r4 += 1u;
    if (s32(r4) >= 4) {
        guest::cpu()->r[1] = r1;
        return 0u;
    }
    guest::preempt();
    goto L_27a87c;
}

}  // namespace d_0027a858
GUEST_EXPORT_FRAMED(0x0027a858, d_0027a858::f_0027a858, 0x47f0);  // pushes {r4, r5, r6, r7, r8, r9, r10, lr} first, as the original

// f_0027a930: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0027a930 {

inline constexpr guest::Function<0x00118c9d, u32(u32, u32)> call_00118c9c;  // (from the original)
inline constexpr guest::Function<0x002fb328, u32(u32, u32)> call_002fb328;  // (from the original)
inline constexpr guest::Function<0x00301e20, u32(u32, u32, u32, u32)> call_00301e20;  // (from the original)
inline constexpr guest::Function<0x00309ef0, u32(u32, u32)> call_00309ef0;  // (from the original)

u32 f_0027a930(u32 r0, u32 r1) {
    u32 r4 = 0;
    u32 r9 = 0;
    u32 r5_1 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 r1_1 = 0;
    u32 r8_1 = 0;
    u32 r6 = r0;
    u32 r7 = r1;
    u32 r0_1 = call_00301e20(r1, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0_1 == 0) {
        return r0_1;
    } else {
        r4 = 0u;
        r9 = r4;
    }
L_27a954:;
    u32 r0_2 = r4 & 0xffu;  // (from the original)
    if (r0_2 >= 4u) {
        r5_1 = r9;
    } else {
        r1 = r0_2 * 0x149u;  // (from the original)
        r5_1 = r6 + (r1 << 7);
    }
    if (r5_1 == 0) {
        goto L_27a9e0;
    }
    r0_3 = call_00301e20(r7, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0_3 == 0) {
        goto L_27a9e0;
    }
    r0_4 = call_002fb328(r0_3, r1);
    r0_5 = r0_4 + 0x292a4u;  // (from the original)
    r0_6 = call_00118c9c(r0_5, r7);
    r1_1 = guest::cpu()->r[1];
    r8_1 = r5_1 + 0x8d6cu;  // (from the original)
    call_00309ef0(r8_1, r1_1);
    r1 = guest::cpu()->r[1];
    if (*gptr<u8>(r8_1 + 9u) == 1u || u32(*gptr<s8>(0x8d80u + r5_1)) != r0_6 || r8_1 == 0) {  // (from the original)
        goto L_27a9e0;
    }
    return r5_1;
L_27a9e0:;
    r4 += 1u;
    if (s32(r4) >= 4) {
        guest::cpu()->r[1] = r1;
        return 0u;
    }
    guest::preempt();
    goto L_27a954;
}

}  // namespace d_0027a930
GUEST_EXPORT_FRAMED(0x0027a930, d_0027a930::f_0027a930, 0x47f0);  // pushes {r4, r5, r6, r7, r8, r9, r10, lr} first, as the original

// f_0027a9fc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0027a9fc {

inline constexpr guest::Function<0x00301e20, u32(u32, u32, u32, u32)> call_00301e20;  // (from the original)
inline constexpr guest::Function<0x0076de78, u32(u32, u32, u32)> call_0076de78;  // (from the original)

u32 f_0027a9fc(u32 r0, u32 r1, u32 r2) {
    u32 r4 = 0;
    u32 r9 = 0;
    u32 r5_1 = 0;
    u32 r0_3 = 0;
    u32 r6 = r0;
    u32 r8 = r2;
    u32 r7 = r1;
    u32 r0_1 = call_00301e20(r1, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0_1 == 0) {
        return r0_1;
    } else {
        r4 = 0u;
        r9 = r4;
    }
L_27aa24:;
    u32 r0_2 = r4 & 0xffu;  // (from the original)
    if (r0_2 >= 4u) {
        r5_1 = r9;
    } else {
        r1 = r0_2 * 0x149u;  // (from the original)
        r5_1 = r6 + (r1 << 7);
    }
    if (r5_1 == 0) {
        goto L_27aa70;
    }
    r0_3 = call_0076de78(r5_1, r7, r8);
    r1 = guest::cpu()->r[1];
    if (r0_3 == 0 || r5_1 + 0x8d84u == 0) {  // (from the original)
        goto L_27aa70;
    }
    return r5_1;
L_27aa70:;
    r4 += 1u;
    if (s32(r4) >= 4) {
        guest::cpu()->r[1] = r1;
        return 0u;
    }
    guest::preempt();
    goto L_27aa24;
}

}  // namespace d_0027a9fc
GUEST_EXPORT_FRAMED(0x0027a9fc, d_0027a9fc::f_0027a9fc, 0x47f0);  // pushes {r4, r5, r6, r7, r8, r9, r10, lr} first, as the original

// f_0027aac0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0027aac0 {

inline constexpr guest::Function<0x001187cd, u32(u32, u32, u32, u32)> call_001187cc;  // (from the original)
inline constexpr guest::Function<0x002fbd54, u32(u32, u32, u32, u32)> call_002fbd54;  // (from the original)
inline constexpr guest::Function<0x005c6760, u32(u32, u32, u32, u32)> call_005c6760;  // (from the original)

void f_0027aac0(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r6 = r0;
    u32 r7 = r1;
    u32 r8 = r2;
    call_005c6760(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    u32 r4 = 0u;
    do {
        u32 r5_1 = r6 + (r4 * 0x149u << 7);  // (from the original)
        u32 r0_2 = call_002fbd54(r5_1 + 0x55a6u, r1, r2, r3);  // (from the original)
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (r0_2 != 0) {
            call_001187cc(r5_1, r7, r8, r4 & 0xffu);  // (from the original)
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
        }
        r4 += 1u;
        guest::preempt();
    } while (r4 < 4u);
    guest::cpu()->r[1] = r1;
}

}  // namespace d_0027aac0
GUEST_EXPORT_FRAMED(0x0027aac0, d_0027aac0::f_0027aac0, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_0027b3a8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0027b3a8 {

struct __attribute__((packed)) Local_0027b3a8_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Local_0027b3a8_ea_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_0027b3a8_ea_1, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_0027b3a8_ea_1, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Local_0027b3a8_ea_1, word_c, 0xc);  // (from the original)

inline constexpr guest::Function<0x002fc934, u32(u32, u32)> call_002fc934;  // (from the original)

u32 f_0027b3a8(u32 r0, u32 r1, u32 r2, u32 r3) {
    gptr<Local_0027b3a8_ea_1> ea_1 = gptr<Local_0027b3a8_ea_1>(guest::cpu()->r[13] + 0x20u);  // (from the original)
    u32 r4_1 = ea_1->word_0;
    u32 r5_1 = ea_1->word_4;
    u32 r6_1 = ea_1->word_8;
    u32 r7_1 = ea_1->word_c;
    u32 r0_1 = call_002fc934(r0, r1);
    u32 r0_3 = call_002fc934(r0_1 + 4u, r2);
    u32 r0_5 = call_002fc934(r0_3 + 4u, r3);
    u32 r0_7 = call_002fc934(r0_5 + 4u, 0x95bfdcu);  // (from the original)
    u32 r0_9 = call_002fc934(r0_7 + 4u, r4_1);
    u32 r0_11 = call_002fc934(r0_9 + 4u, r5_1);
    u32 r0_13 = call_002fc934(r0_11 + 4u, r6_1);
    u32 r0_15 = call_002fc934(r0_13 + 4u, r7_1);
    u32 r0_16 = r0_15 - 0x1cu;  // (from the original)
    *gptr<u8>(r0_16 + 0x20u) = 1;  // (from the original)
    guest::cpu()->r[1] = 1u;
    return r0_16;
}

}  // namespace d_0027b3a8
GUEST_EXPORT_FRAMED(0x0027b3a8, d_0027b3a8::f_0027b3a8, 0x47f0);  // pushes {r4, r5, r6, r7, r8, r9, r10, lr} first, as the original

// f_0027b528: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0027b528 {

struct __attribute__((packed)) Local_0027b528_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u32 word_18;
};
GUEST_OFFSET(Local_0027b528_ea_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_0027b528_ea_1, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_0027b528_ea_1, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Local_0027b528_ea_1, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Local_0027b528_ea_1, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Local_0027b528_ea_1, word_14, 0x14);  // (from the original)
GUEST_OFFSET(Local_0027b528_ea_1, word_18, 0x18);  // (from the original)

struct __attribute__((packed)) Local_0027b528_ea_2 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0027b528_ea_2, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_0027b528_ea_2, word_4, 0x4);  // (from the original)

struct __attribute__((packed)) Local_0027b528_ea_3 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u32 word_18;
};
GUEST_OFFSET(Local_0027b528_ea_3, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_0027b528_ea_3, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_0027b528_ea_3, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Local_0027b528_ea_3, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Local_0027b528_ea_3, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Local_0027b528_ea_3, word_14, 0x14);  // (from the original)
GUEST_OFFSET(Local_0027b528_ea_3, word_18, 0x18);  // (from the original)

struct __attribute__((packed)) Local_0027b528_r4_1 {
    u8 unknown_0[0xe];  // (not used here)
    u8 byte_e;
};
GUEST_OFFSET(Local_0027b528_r4_1, byte_e, 0xe);  // (from the original)

inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> call_002f74c8;  // (from the original)
inline constexpr guest::Function<0x002fc934, u32(u32, u32, u32, u32)> call_002fc934;  // (from the original)
inline constexpr guest::Function<0x002fc994, u32(u32, u32, u32, u32)> call_002fc994;  // (from the original)
inline constexpr guest::Function<0x002fcbb0, u32(u32, u32, u32, u32)> call_002fcbb0;  // (from the original)
inline constexpr guest::Function<0x0030b654, u32(u32, u32, u32, u32)> call_0030b654;  // (from the original)
inline constexpr guest::Function<0x004e9a78, u32(u32, u32, u32, u32)> call_004e9a78;  // (from the original)
inline constexpr guest::Function<0x0059e65c, u32(u32, u32, u32, u32)> call_0059e65c;  // (from the original)
inline constexpr guest::Function<0x006a5e34, u32(u32, u32, u32, u32)> call_006a5e34;  // (from the original)

u32 f_0027b528(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x28);  // the original's stack frame
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r14 = guest::cpu()->r[14];
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r3_2 = 0;
    if (r2 >= 3u) {
        guest::cpu()->r[4] = r4;
        guest::cpu()->r[5] = r5;
        guest::cpu()->r[6] = r6;
        guest::cpu()->r[7] = r7;
        guest::cpu()->r[8] = r8;
        guest::cpu()->r[9] = r9;
        return r0;
    }
    gptr<Local_0027b528_ea_1> ea_1 = gptr<Local_0027b528_ea_1>(frame.at(0xc).addr());  // (from the original)
    ea_1->word_0 = r4;
    ea_1->word_4 = r5;
    ea_1->word_8 = r6;
    ea_1->word_c = r7;
    ea_1->word_10 = r8;
    ea_1->word_14 = r9;
    ea_1->word_18 = r14;
    gptr<Local_0027b528_r4_1> r4_1 = gptr<Local_0027b528_r4_1>(r0 + r2);
    gptr<Local_0027b528_ea_2> ea_2 = gptr<Local_0027b528_ea_2>(frame.at(0x28).addr());  // (from the original)
    u32 r6_1 = ea_2->word_0;
    u32 r7_1 = ea_2->word_4;
    u32 r3_1 = frame.at(4).addr();
    if (r4_1->byte_e != 0) {
        call_002fcbb0(r3_1, 0x2083u, r2, r3_1);  // (from the original)
        r1_1 = guest::cpu()->r[1];
        r2_1 = guest::cpu()->r[2];
        r3_2 = guest::cpu()->r[3];
    } else {
        call_002fc934(r3_1, r0 + (r2 << 2) + 2u, r2, r3_1);
        r1_1 = guest::cpu()->r[1];
        r2_1 = guest::cpu()->r[2];
        r3_2 = guest::cpu()->r[3];
    }
    if (r4_1->byte_e == 0) {
        r4_1->byte_e = 1;
        u32 r0_1 = call_002f74c8(1u, r1_1, r2_1, r3_2);
        r1_1 = guest::cpu()->r[1];
        if (r0_1 == r1) {
            u32 r0_3 = call_0030b654(frame.at(4).addr(), r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
            u32 r1_3 = guest::cpu()->r[1];
            u32 r2_3 = guest::cpu()->r[2];
            u32 r3_4 = guest::cpu()->r[3];
            if (r0_3 != 0) {
                call_004e9a78(r3, r6_1, 1u, r7_1);
                r1_1 = guest::cpu()->r[1];
            } else {
                u32 r0_4 = call_006a5e34(r0_3, r1_3, r2_3, r3_4);
                r1_1 = guest::cpu()->r[1];
                if (r0_4 != 0) {
                    u32 r0_6 = call_002fcbb0(frame.at(8).addr(), 0x2083u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
                    *frame.at<u32>(0) = 0;
                    call_002fc994(r0_4, r0_6, r3, r6_1);
                    call_0059e65c(r3, r6_1, 1u, guest::cpu()->r[3]);
                    r1_1 = guest::cpu()->r[1];
                }
            }
        }
    }
    gptr<Local_0027b528_ea_3> ea_3 = gptr<Local_0027b528_ea_3>(frame.at(0xc).addr());  // (from the original)
    u32 r4_2 = ea_3->word_0;
    u32 r5_1 = ea_3->word_4;
    u32 r6_2 = ea_3->word_8;
    u32 r7_2 = ea_3->word_c;
    u32 r8_1 = ea_3->word_10;
    u32 r9_1 = ea_3->word_14;
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->r[4] = r4_2;
    guest::cpu()->r[5] = r5_1;
    guest::cpu()->r[6] = r6_2;
    guest::cpu()->r[7] = r7_2;
    guest::cpu()->r[8] = r8_1;
    guest::cpu()->r[9] = r9_1;
    return frame.at(4).addr();
}

}  // namespace d_0027b528
GUEST_EXPORT(0x0027b528, d_0027b528::f_0027b528);

// f_0027c060: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0027c060 {

struct __attribute__((packed)) Local_0027c060_ea_3 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_0027c060_ea_3, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_0027c060_ea_3, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_0027c060_ea_3, word_8, 0x8);  // (from the original)

struct __attribute__((packed)) Local_0027c060_r0_12 {
    u8 unknown_0[0xe04];  // (not used here)
    u32 word_e04;
    u32 word_e08;
};
GUEST_OFFSET(Local_0027c060_r0_12, word_e04, 0xe04);  // (from the original)
GUEST_OFFSET(Local_0027c060_r0_12, word_e08, 0xe08);  // (from the original)

struct __attribute__((packed)) Local_0027c060_r0_15 {
    u8 unknown_0[0x1c];  // (not used here)
    u32 word_1c;
    u8 unknown_20[0xe34];  // (not used here)
    u32 word_e54;
    u32 word_e58;
    u8 byte_e5c;
    u8 byte_e5d;
    u8 byte_e5e;
    u8 byte_e5f;
};
GUEST_OFFSET(Local_0027c060_r0_15, word_1c, 0x1c);  // (from the original)
GUEST_OFFSET(Local_0027c060_r0_15, word_e54, 0xe54);  // (from the original)
GUEST_OFFSET(Local_0027c060_r0_15, word_e58, 0xe58);  // (from the original)
GUEST_OFFSET(Local_0027c060_r0_15, byte_e5c, 0xe5c);  // (from the original)
GUEST_OFFSET(Local_0027c060_r0_15, byte_e5d, 0xe5d);  // (from the original)
GUEST_OFFSET(Local_0027c060_r0_15, byte_e5e, 0xe5e);  // (from the original)
GUEST_OFFSET(Local_0027c060_r0_15, byte_e5f, 0xe5f);  // (from the original)

struct __attribute__((packed)) Local_0027c060_r1_5 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0027c060_r1_5, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_0027c060_r1_5, word_4, 0x4);  // (from the original)

inline guest::global<u32, 0x0027c13c> global_0027c13c;  // (from the original)
inline guest::global<u32, 0x008490c8> global_008490c8;  // (from the original)
inline guest::global<u32, 0x008490cc> global_008490cc;  // (from the original)
inline constexpr guest::Function<0x00125aec, u32(u32, u32, u32, u32)> call_00125aec;  // (from the original)
inline constexpr guest::Function<0x00125e3c, u32(u32, u32, u32, u32)> call_00125e3c;  // (from the original)
inline constexpr guest::Function<0x002b6de0, u32(u32, u32, u32, u32)> call_002b6de0;  // (from the original)
inline constexpr guest::Function<0x002f7604, u32(u32, u32, u32, u32)> call_002f7604;  // (from the original)
inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> call_00301d0c;  // (from the original)
inline constexpr guest::Function<0x004ba6c8, u32(u32, u32, u32, u32)> call_004ba6c8;  // (from the original)

u32 f_0027c060(u32 r0, u32 r1, u32 r2, u32 r3, float S0) {
    u32 r0_1 = call_002b6de0(r0, r1, r2, r3);
    *gptr<u32>(r0_1 + 0xe4u) = 0;  // (from the original)
    *gptr<u8>(r0_1 + 0xe8u) = 0;  // (from the original)
    u32 r2_1 = *global_008490c8;
    u32 r3_1 = *global_008490cc;
    gptr<Local_0027c060_ea_3> ea_3 = gptr<Local_0027c060_ea_3>(r0_1 + 0xecu);  // (from the original)
    ea_3->word_0 = r2_1;
    ea_3->word_4 = r3_1;
    ea_3->word_8 = 0;
    *gptr<u8>(r0_1 + 0xf8u) = 0;  // (from the original)
    *gptr<u32>(r0_1 + 0xfcu) = 0;  // (from the original)
    *gptr<u32>(r0_1 + 0xe0u) = 0x8ef9a0;  // (from the original)
    *gptr<u32>(r0_1) = 0x8ef958;  // (from the original)
    u32 ea_7 = r0_1 + 0x100u;  // (from the original)
    *gptr<u32>(ea_7) = 0;
    u32 r0_3 = call_00301d0c(ea_7 + 4u, 0x2b6de0u, 0xe0u, 0xcu);  // (from the original)
    u32 r1_1 = guest::cpu()->r[1];
    u32 r2_2 = guest::cpu()->r[2];
    u32 r3_2 = guest::cpu()->r[3];
    u32 r0_5 = call_002f7604(r0_3 + 0xa80u, r1_1, r2_2, r3_2);  // (from the original)
    u32 r1_2 = guest::cpu()->r[1];
    u32 r2_3 = guest::cpu()->r[2];
    u32 r3_3 = guest::cpu()->r[3];
    u32 r0_7 = call_00125e3c(r0_5 + 0xe4u, r1_2, r2_3, r3_3);  // (from the original)
    u32 r1_3 = guest::cpu()->r[1];
    u32 r2_4 = guest::cpu()->r[2];
    u32 r3_4 = guest::cpu()->r[3];
    u32 r0_9 = call_00125aec(r0_7 + 0x14cu, r1_3, r2_4, r3_4);  // (from the original)
    u32 r1_4 = guest::cpu()->r[1];
    u32 r2_5 = guest::cpu()->r[2];
    u32 r3_5 = guest::cpu()->r[3];
    u32 r0_11 = call_00125aec(r0_9 + 0x28u, r1_4, r2_5, r3_5);  // (from the original)
    u32 r2_6 = guest::cpu()->r[2];
    u32 r3_6 = guest::cpu()->r[3];
    gptr<Local_0027c060_r0_12> r0_12 = gptr<Local_0027c060_r0_12>(r0_11 - 0xddcu);  // (from the original)
    r0_12->word_e04 = 0;
    float S0_6 = std::bit_cast<float>(*global_0027c13c);
    gptr<Local_0027c060_r1_5> r1_5 = gptr<Local_0027c060_r1_5>(r0_12.addr() + 0xe0cu);  // (from the original)
    r0_12->word_e08 = 0;
    r1_5->word_0 = std::bit_cast<u32>(S0_6);
    r1_5->word_4 = std::bit_cast<u32>(S0_6);
    guest::cpu()->s[0] = S0_6;
    u32 r0_14 = call_004ba6c8(r0_12.addr() + 0xe20u, r1_5.addr(), r2_6, r3_6);  // (from the original)
    gptr<Local_0027c060_r0_15> r0_15 = gptr<Local_0027c060_r0_15>(r0_14 - 0xe20u);  // (from the original)
    r0_15->word_e54 = ~0u;
    r0_15->word_e58 = 0;
    r0_15->byte_e5c = 0;
    r0_15->byte_e5d = 0;
    r0_15->byte_e5e = 0;
    u32 r1_6 = r0_15.addr() + 0xc68u;  // (from the original)
    r0_15->byte_e5f = 0;
    r0_15->word_1c = r1_6;
    guest::cpu()->r[1] = r1_6;
    return r0_15.addr();
}

}  // namespace d_0027c060
GUEST_EXPORT_FRAMED(0x0027c060, d_0027c060::f_0027c060, 0x4010);  // pushes {r4, lr} first, as the original

// f_0027c2c8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0027c2c8 {

inline guest::global<u32, 0x00975338> global_00975338;  // (from the original)
inline guest::global<u32, 0x00ad5ba4> global_00ad5ba4;  // (from the original)
inline constexpr guest::Function<0x00132478, u32(u32, u32, u32, u32)> call_00132478;  // (from the original)
inline constexpr guest::Function<0x0013f134, u32(u32, u32, u32, u32)> call_0013f134;  // (from the original)
inline constexpr guest::Function<0x0027c8f8, u32(u32, u32, u32, u32)> call_0027c8f8;  // (from the original)
inline constexpr guest::Function<0x002ee898, u32(u32, u32, u32, u32)> call_002ee898;  // (from the original)
inline constexpr guest::Function<0x002ee91c, u32(u32, u32, u32, u32)> call_002ee91c;  // (from the original)
inline constexpr guest::Function<0x002f73b8, u32(u32, u32, u32, u32)> call_002f73b8;  // (from the original)
inline constexpr guest::Function<0x002f747c, u32(u32, u32, u32, u32)> call_002f747c;  // (from the original)
inline constexpr guest::Function<0x003045a8, u32(u32, u32, u32, u32)> call_003045a8;  // (from the original)
inline constexpr guest::Function<0x005b19f8, u32(u32, u32, u32, u32)> call_005b19f8;  // (from the original)
inline constexpr guest::Function<0x005b1a2c, u32(u32, u32, u32, u32)> call_005b1a2c;  // (from the original)
inline constexpr guest::Function<0x00755ac4, u32(u32, u32, u32, u32)> call_00755ac4;  // (from the original)
inline constexpr guest::Function<0x0081533c, u32(u32, u32, u32, u32)> call_0081533c;  // (from the original)
inline constexpr guest::Function<0x00815500, u32(u32, u32, u32, u32)> call_00815500;  // (from the original)

u32 f_0027c2c8(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x18);  // the original's stack frame
    u32 r0_4 = 0;
    u32 r4 = r0;
    u32 r5 = r1;
    u32 r0_2 = call_003045a8(*global_00975338, r1, r2, r3);
    if (*global_00ad5ba4 == 0) {
        call_00815500(0xad5ba0u, r0_2, 0x32000u, guest::cpu()->r[3]);  // (from the original)
    }
    call_0081533c(frame.at(0).addr(), 0xad5ba0u, 0x894fc4u, 0u);  // (from the original)
    call_005b1a2c(0x95df58u, frame.at(0).addr(), guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    call_00755ac4(0x95df58u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    call_002ee898(0xad5ce8u, 0x894f9cu, r0_2, guest::cpu()->r[3]);  // (from the original)
    call_002ee898(0xad5dd8u, 0x894f74u, r0_2, guest::cpu()->r[3]);  // (from the original)
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    do {
        r0_4 = call_0027c8f8(r4, r5, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        guest::preempt();
    } while (r0_4 == 0);
    r5 = 0xad5ba0u;  // (from the original)
    r4 = *gptr<u32>(r5 + 0x128u);  // (from the original)
    if (r4 != 0) {
        do {
            call_005b19f8(r4 + 0xcu, r1, r2, r3);  // (from the original)
            call_002f73b8(r4 + 0x14u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            r4 = *gptr<u32>(r4 + 8u);
            guest::preempt();
        } while (r4 != 0);
    }
    r4 = *gptr<u32>(r5 + 0x140u);  // (from the original)
    if (r4 != 0) {
        do {
            call_005b19f8(r4 + 0xcu, r1, r2, r3);  // (from the original)
            call_002f73b8(r4 + 0x14u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            r4 = *gptr<u32>(r4 + 8u);
            guest::preempt();
        } while (r4 != 0);
    }
    call_00132478(r5 + 0x124u, r1, r2, r3);  // (from the original)
    call_00132478(r5 + 0x130u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    call_00132478(r5 + 0x13cu, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    call_0013f134(r5 + 0x130u, r5 + 8u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    call_002f747c(r5, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    call_002ee91c(0xad5ce8u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    frame.release();
    return call_002ee91c(0xad5dd8u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
}

}  // namespace d_0027c2c8
GUEST_EXPORT(0x0027c2c8, d_0027c2c8::f_0027c2c8);

// f_0027c554: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0027c554 {

inline guest::global<u32, 0x0095df50> global_0095df50;  // (from the original)

u32 f_0027c554() {
    *global_0095df50 = 0;
    guest::cpu()->r[1] = 0x95df50u;  // (from the original)
    return 0u;
}

}  // namespace d_0027c554
GUEST_EXPORT(0x0027c554, d_0027c554::f_0027c554);

// f_0027d310: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0027d310 {

struct __attribute__((packed)) Local_0027d310_r12_1 {
    u8 byte_0;
};
GUEST_OFFSET(Local_0027d310_r12_1, byte_0, 0x0);  // (from the original)

struct __attribute__((packed)) Local_0027d310_r2_1 {
    u8 byte_0;
};
GUEST_OFFSET(Local_0027d310_r2_1, byte_0, 0x0);  // (from the original)

struct __attribute__((packed)) Local_0027d310_r3_1 {
    u8 byte_0;
};
GUEST_OFFSET(Local_0027d310_r3_1, byte_0, 0x0);  // (from the original)

inline guest::global<u8, 0x0095df54> global_0095df54;  // (from the original)
inline constexpr guest::Function<0x002ff6f8, u32(u32, u32, u32, u32)> call_002ff6f8;  // (from the original)

u32 f_0027d310(u32 r0_unused, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0u;
    u32 r6 = 0xad5b90u;  // (from the original)
    do {
        u32 r5_1 = r4 >= 4u ? 0xad5b90u : r6 + (r4 << 2);  // (from the original)
        u32 r0_2 = call_002ff6f8(~0x80000000u, r1, r2, r3);  // (from the original)
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r4 += 1u;
        *gptr<u32>(r5_1) = r0_2;
        guest::preempt();
    } while (r4 < 4u);
    u32 r0_3 = call_002ff6f8(0x64u, r1, r2, r3);  // (from the original)
    u32 res_1 = r0_3 - 0x32u;  // (from the original)
    u32 vf_1 = ((r0_3 ^ 0x32u) & (r0_3 ^ res_1)) >> 0x1f;  // (from the original)
    gptr<Local_0027d310_r2_1> r2_1 = gptr<Local_0027d310_r2_1>(0x95df55u);  // (from the original)
    gptr<Local_0027d310_r3_1> r3_1 = gptr<Local_0027d310_r3_1>(0x95df56u);  // (from the original)
    if (res_1 != 0 && res_1 >> 0x1f == vf_1) {  // (from the original)
        *global_0095df54 = 0;
    }
    gptr<Local_0027d310_r12_1> r12_1 = gptr<Local_0027d310_r12_1>(0x95df57u);  // (from the original)
    if (res_1 != 0 && res_1 >> 0x1f == vf_1) {  // (from the original)
        r2_1->byte_0 = 1;
        r3_1->byte_0 = 0;
        r12_1->byte_0 = 1;
    } else {
        *global_0095df54 = 1;
        r2_1->byte_0 = 0;
        r3_1->byte_0 = 1;
        r12_1->byte_0 = 0;
    }
    guest::cpu()->r[1] = 0u;
    return 1u;
}

}  // namespace d_0027d310
GUEST_EXPORT_FRAMED(0x0027d310, d_0027d310::f_0027d310, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0027d394: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0027d394 {

inline guest::global<u32, 0x0094f268> global_0094f268;  // (from the original)
inline constexpr guest::Function<0x00251c24, u32(u32, u32)> call_00251c24;  // (from the original)
inline constexpr guest::Function<0x00300900, u32(u32, u32)> call_00300900;  // (from the original)

u32 f_0027d394(u32 r0, u32 r1) {
    u32 r0_1 = call_00300900(r0, r1);
    if (r0_1 == 0) {
        return 1u;
    }
    u32 r1_2 = *gptr<u8>(r0 + 0x116u);  // (from the original)
    u32 r0_3 = call_00251c24(*global_0094f268, r1_2);
    if (r0_3 == 0) {
        return r0_3;
    }
    return 1u;
}

}  // namespace d_0027d394
GUEST_EXPORT_FRAMED(0x0027d394, d_0027d394::f_0027d394, 0x4010);  // pushes {r4, lr} first, as the original

// f_0027d44c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0027d44c {

inline constexpr guest::Function<0x00599c6c, u32(u32)> call_00599c6c;  // (from the original)

u32 f_0027d44c(gptr<AcFsFdShadow> arg0) {
    u32 r0_1 = arg0->byte_c9;
    if (r0_1 != 0x48u && r0_1 != 0x49u && r0_1 != 0x4au) {  // (from the original)
        return 1u;
    }
    u32 r0_2 = call_00599c6c(r0_1);
    if (r0_2 == 0) {
        return r0_2;
    }
    return 1u;
}

}  // namespace d_0027d44c
GUEST_EXPORT_FRAMED(0x0027d44c, d_0027d44c::f_0027d44c, 0x4010);  // pushes {r4, lr} first, as the original

// f_0027d490: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0027d490 {

struct __attribute__((packed)) Object_0027d490_0 {
    u8 unknown_0[0x119];  // (not used here)
    u8 byte_119;
};
GUEST_OFFSET(Object_0027d490_0, byte_119, 0x119);  // (from the original)

struct __attribute__((packed)) Local_0027d490_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Local_0027d490_ea_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_0027d490_ea_1, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_0027d490_ea_1, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Local_0027d490_ea_1, word_c, 0xc);  // (from the original)

struct __attribute__((packed)) Local_0027d490_ea_3 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Local_0027d490_ea_3, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_0027d490_ea_3, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Local_0027d490_ea_3, word_c, 0xc);  // (from the original)

inline constexpr guest::Function<0x002d0998, u32(u32, u32, u32, u32)> call_002d0998;  // (from the original)

u32 f_0027d490(gptr<Object_0027d490_0> arg0, u32 r1_unused, u32 r2_unused, u32 r3) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r14 = guest::cpu()->r[14];
    u32 r1_1 = arg0->byte_119;
    if (r1_1 >= 4u) {
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->r[4] = r4;
        guest::cpu()->r[5] = r5;
        return arg0.addr();
    }
    gptr<Local_0027d490_ea_1> ea_1 = gptr<Local_0027d490_ea_1>(frame.at(0).addr());
    ea_1->word_0 = r3;
    ea_1->word_4 = r4;
    ea_1->word_8 = r5;
    ea_1->word_c = r14;
    *frame.at<u8>(0) = u8(r1_1);
    u32 r0_2 = call_002d0998(frame.at(0).addr(), r1_1, guest::cpu()->r[2], r3);
    u32 r1_2 = guest::cpu()->r[1];
    u32 zf_1 = r0_2 == 0;
    if (!zf_1) {
        r1_2 = *gptr<u32>(r0_2);
        zf_1 = r1_2 == 0;
    }
    if (!zf_1 && r1_2 == arg0.addr()) {
        r1_2 = 0u;
        *gptr<u32>(r0_2) = r1_2;
    }
    *gptr<u8>(arg0.addr() + 0x119u) = 4;  // (from the original)
    gptr<Local_0027d490_ea_3> ea_3 = gptr<Local_0027d490_ea_3>(frame.at(0).addr());
    u32 r4_1 = ea_3->word_4;
    u32 r5_1 = ea_3->word_8;
    guest::cpu()->r[1] = r1_2;
    guest::cpu()->r[4] = r4_1;
    guest::cpu()->r[5] = r5_1;
    return 4u;
}

}  // namespace d_0027d490
GUEST_EXPORT(0x0027d490, d_0027d490::f_0027d490);

// f_0027d790: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0027d790 {

struct __attribute__((packed)) Object_0027d790_0 {
    u8 unknown_0[0x48];  // (not used here)
    u32 word_48;
    u8 unknown_4c[0x4];  // (not used here)
    u32 word_50;
    u8 unknown_54[0xc2];  // (not used here)
    u8 byte_116;
    u8 byte_117;
    u8 byte_118;
    u8 unknown_119[0x6f];  // (not used here)
    u32 word_188;
};
GUEST_OFFSET(Object_0027d790_0, word_48, 0x48);  // (from the original)
GUEST_OFFSET(Object_0027d790_0, word_50, 0x50);  // (from the original)
GUEST_OFFSET(Object_0027d790_0, byte_116, 0x116);  // (from the original)
GUEST_OFFSET(Object_0027d790_0, byte_117, 0x117);  // (from the original)
GUEST_OFFSET(Object_0027d790_0, byte_118, 0x118);  // (from the original)
GUEST_OFFSET(Object_0027d790_0, word_188, 0x188);  // (from the original)

inline guest::global<u32, 0x0094f268> global_0094f268;  // (from the original)
inline constexpr guest::Function<0x00251c24, u32(u32, u32, u32, u32)> call_00251c24;  // (from the original)
inline constexpr guest::Function<0x00255968, u32(u32, u32)> call_00255968;  // (from the original)

u32 f_0027d790(gptr<Object_0027d790_0> arg0, u32 r1, u32 r2, u32 r3, float S0) {
    u32 r1_1 = arg0->byte_116;
    u32 r0_1 = *global_0094f268;
    u32 r0_2 = call_00251c24(r0_1, r1_1, r2, r3);
    u32 r1_2 = guest::cpu()->r[1];
    float S0_1 = guest::cpu()->s[0];
    if (r0_2 != 0) {
        u32 r0_3 = arg0->word_188;
        if (r0_3 == 0) {
            u32 r0_4 = *global_0094f268;
            u32 r1_3 = arg0->byte_116;
            r0_3 = call_00255968(r0_4, r1_3);
            arg0->word_188 = r0_3;
        }
        u32 r1_4 = std::bit_cast<u32>(std::bit_cast<float>(vcvt_uz_f(std::bit_cast<float>(arg0->word_48))));
        *gptr<u8>(r0_3 + 1u) = u8(u32(*gptr<u8>(r0_3 + 1u)) & ~0xf8u | 0xf8u & r1_4 << 1);  // (from the original)
        u32 r1_5 = u32(*gptr<u8>(r0_3 + 2u)) & ~0x1fu | (0x3e0u & r1_4 >> 2) >> 5;  // (from the original)
        *gptr<u8>(r0_3 + 2u) = u8(r1_5);
        S0_1 = std::bit_cast<float>(vcvt_uz_f(std::bit_cast<float>(arg0->word_50)));
        u32 r1_6 = std::bit_cast<u32>(S0_1);
        *gptr<u8>(r0_3 + 2u) = u8((r1_5 & ~0xe0u) | 0xe0u & r1_6 << 3);  // (from the original)
        *gptr<u8>(r0_3 + 3u) = u8(u32(*gptr<u8>(r0_3 + 3u)) & ~0x7fu | (0x3f8u & r1_6 >> 2) >> 3);  // (from the original)
        *gptr<u8>(r0_3) = u8(u32(*gptr<u8>(r0_3)) & ~0x80u | r1 << 7);  // (from the original)
        *gptr<u8>(r0_3 + 1u) = u8(u32(*gptr<u8>(r0_3 + 1u)) & ~7u | (r1 & 0xeu) >> 1);  // (from the original)
        r1_2 = u32(*gptr<u8>(r0_3 + 5u)) & ~0x3cu | (u32(arg0->byte_117) & 0xfu) << 2;  // (from the original)
        *gptr<u8>(r0_3 + 5u) = u8(r1_2);
        r0_2 = 1u;
        arg0->byte_118 = u8(r0_2);
    }
    guest::cpu()->r[1] = r1_2;
    guest::cpu()->s[0] = S0_1;
    return r0_2;
}

}  // namespace d_0027d790
GUEST_EXPORT_FRAMED(0x0027d790, d_0027d790::f_0027d790, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0027d8a8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0027d8a8 {


u32 f_0027d8a8(u32 r0) {
    return r0 >= 8u ? 0x984204u : 0x9841ecu + (r0 + (r0 << 1) << 2);  // (from the original)
}

}  // namespace d_0027d8a8
GUEST_EXPORT(0x0027d8a8, d_0027d8a8::f_0027d8a8);

// f_0027d93c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0027d93c {

inline guest::global<u32, 0x0098420c> global_0098420c;  // (from the original)

void f_0027d93c(u32 r0) {
    if (r0 >= 8u) {
        float S0_1 = std::bit_cast<float>(*global_0098420c);
        guest::cpu()->r[1] = 0x9841ecu;  // (from the original)
        guest::cpu()->s[0] = S0_1;
        return;
    }
    float S0_2 = std::bit_cast<float>(*gptr<u32>(0x9841ecu + (r0 + (r0 << 1) << 2) + 8u));  // (from the original)
    guest::cpu()->r[1] = 0x9841ecu;  // (from the original)
    guest::cpu()->s[0] = S0_2;
}

}  // namespace d_0027d93c
GUEST_EXPORT(0x0027d93c, d_0027d93c::f_0027d93c);

// f_0027d9a8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0027d9a8 {

inline guest::global<u32, 0x0094f268> global_0094f268;  // (from the original)
inline constexpr guest::Function<0x00251c24, u32(u32, u32, u32, u32)> call_00251c24;  // (from the original)
inline constexpr guest::Function<0x0025222c, u32(u32, u32, u32, u32)> call_0025222c;  // (from the original)

void f_0027d9a8(u32 r0_unused, u32 r1, u32 r2) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 r4_1 = *global_0094f268;
    u32 r0_1 = call_00251c24(r4_1, r2, r2, guest::cpu()->r[3]);
    u32 r1_1 = guest::cpu()->r[1];
    if (r0_1 != 0) {
        frame.release();
        call_0025222c(r4_1, r1, r2, guest::cpu()->r[3]);
        return;
    }
    guest::cpu()->r[1] = r1_1;
}

}  // namespace d_0027d9a8
GUEST_EXPORT(0x0027d9a8, d_0027d9a8::f_0027d9a8);

// f_0027d9ec: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0027d9ec {

inline guest::global<u32, 0x0094f268> global_0094f268;  // (from the original)
inline constexpr guest::Function<0x00251c24, u32(u32, u32, u32, u32)> call_00251c24;  // (from the original)
inline constexpr guest::Function<0x00252338, u32(u32, u32, u32, u32)> call_00252338;  // (from the original)

u32 f_0027d9ec(u32 r0_unused, u32 r1) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 r4_1 = *global_0094f268;
    u32 r0_1 = call_00251c24(r4_1, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r1_1 = guest::cpu()->r[1];
    if (r0_1 != 0) {
        frame.release();
        return call_00252338(r4_1, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    }
    guest::cpu()->r[1] = r1_1;
    return r0_1;
}

}  // namespace d_0027d9ec
GUEST_EXPORT(0x0027d9ec, d_0027d9ec::f_0027d9ec);

// f_0027da24: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0027da24 {

struct __attribute__((packed)) Object_0027da24_0 {
    u8 unknown_0[0x116];  // (not used here)
    u8 byte_116;
};
GUEST_OFFSET(Object_0027da24_0, byte_116, 0x116);  // (from the original)

inline guest::global<u32, 0x0094f268> global_0094f268;  // (from the original)
inline constexpr guest::Function<0x0025286c, u32(u32, u32, u32)> call_0025286c;  // (from the original)

u32 f_0027da24(gptr<Object_0027da24_0> arg0) {
    u32 r1_1 = arg0->byte_116;
    return call_0025286c(*global_0094f268, r1_1, 0u);
}

}  // namespace d_0027da24
GUEST_EXPORT(0x0027da24, d_0027da24::f_0027da24);

// f_0027da40: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0027da40 {

struct __attribute__((packed)) Local_0027da40_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Local_0027da40_ea_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_0027da40_ea_1, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_0027da40_ea_1, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Local_0027da40_ea_1, word_c, 0xc);  // (from the original)

struct __attribute__((packed)) Local_0027da40_ea_2 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Local_0027da40_ea_2, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_0027da40_ea_2, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Local_0027da40_ea_2, word_c, 0xc);  // (from the original)

inline constexpr guest::Function<0x002d0998, u32(u32, u32, u32, u32)> call_002d0998;  // (from the original)

u32 f_0027da40(u32 r0, u32 r1, u32 r2_unused, u32 r3) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r14 = guest::cpu()->r[14];
    if (r1 >= 4u) {
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[4] = r4;
        guest::cpu()->r[5] = r5;
        return r0;
    }
    gptr<Local_0027da40_ea_1> ea_1 = gptr<Local_0027da40_ea_1>(frame.at(0).addr());
    ea_1->word_0 = r3;
    ea_1->word_4 = r4;
    ea_1->word_8 = r5;
    ea_1->word_c = r14;
    *frame.at<u8>(0) = u8(r1);
    u32 r0_2 = call_002d0998(frame.at(0).addr(), r1, guest::cpu()->r[2], r3);
    u32 r1_1 = guest::cpu()->r[1];
    u32 zf_1 = r0_2 == 0;
    if (!zf_1) {
        r1_1 = *gptr<u32>(r0_2);
        zf_1 = r1_1 == 0;
    }
    if (!zf_1 && r1_1 == r0) {
        r1_1 = 0u;
        *gptr<u32>(r0_2) = r1_1;
    }
    gptr<Local_0027da40_ea_2> ea_2 = gptr<Local_0027da40_ea_2>(frame.at(0).addr());
    u32 r4_1 = ea_2->word_4;
    u32 r5_1 = ea_2->word_8;
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->r[4] = r4_1;
    guest::cpu()->r[5] = r5_1;
    return r0_2;
}

}  // namespace d_0027da40
GUEST_EXPORT(0x0027da40, d_0027da40::f_0027da40);

// f_0027da80: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0027da80 {

struct __attribute__((packed)) Object_0027da80_0 {
    u8 unknown_0[0x40];  // (not used here)
    u32 word_40;
    u8 unknown_44[0xd2];  // (not used here)
    u8 byte_116;
    u8 unknown_117[0x71];  // (not used here)
    u32 word_188;
};
GUEST_OFFSET(Object_0027da80_0, word_40, 0x40);  // (from the original)
GUEST_OFFSET(Object_0027da80_0, byte_116, 0x116);  // (from the original)
GUEST_OFFSET(Object_0027da80_0, word_188, 0x188);  // (from the original)

inline guest::global<u32, 0x0027dafc> global_0027dafc;  // (from the original)
inline guest::global<u32, 0x0094f268> global_0094f268;  // (from the original)
inline constexpr guest::Function<0x00255968, u32(u32, u32, u32)> call_00255968;  // (from the original)
inline constexpr guest::Function<0x00300900, u32(u32, u32, u32, u32)> call_00300900;  // (from the original)
inline constexpr guest::Function<0x005210a8, u32(u32, u32, u32, u32)> call_005210a8;  // (from the original)
inline constexpr guest::Function<0x0061a79c, u32(u32, u32, u32)> call_0061a79c;  // (from the original)

void f_0027da80(gptr<Object_0027da80_0> arg0, u32 r1, u32 r2) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    float S0_1 = std::bit_cast<float>(*global_0027dafc);
    arg0->word_40 = std::bit_cast<u32>(S0_1);
    guest::cpu()->s[0] = S0_1;
    u32 r0_1 = call_00300900(arg0.addr(), r1, r2, guest::cpu()->r[3]);
    u32 r1_1 = guest::cpu()->r[1];
    u32 r2_1 = guest::cpu()->r[2];
    float S0_2 = guest::cpu()->s[0];
    if (r0_1 == 0) {
        frame.release();
        call_005210a8(arg0.addr(), r1_1, r2_1, guest::cpu()->r[3]);
        return;
    }
    u32 r0_2 = arg0->word_188;
    if (r0_2 == 0) {
        u32 r1_2 = arg0->byte_116;
        u32 r0_3 = *global_0094f268;
        guest::cpu()->s[0] = S0_2;
        r0_2 = call_00255968(r0_3, r1_2, r2_1);
        S0_2 = guest::cpu()->s[0];
        arg0->word_188 = r0_2;
    }
    u32 r2_2 = *gptr<u8>(r0_2 + 4u);
    u32 r1_3 = r2_2 & 3u;
    if ((u32(*gptr<u8>(r0_2 + 3u)) >> 7) + (r1_3 << 1) != 4u) {
        guest::cpu()->s[0] = S0_2;
        return;
    }
    guest::cpu()->s[0] = S0_2;
    u32 r0_4 = call_0061a79c(arg0.addr(), r1_3, r2_2);
    u32 r1_4 = guest::cpu()->r[1];
    u32 r2_3 = guest::cpu()->r[2];
    if (r0_4 == 0) {
        return;
    }
    frame.release();
    call_005210a8(arg0.addr(), r1_4, r2_3, guest::cpu()->r[3]);
    return;
}

}  // namespace d_0027da80
GUEST_EXPORT(0x0027da80, d_0027da80::f_0027da80);

// f_0027dc10: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0027dc10 {


u32 f_0027dc10(u32 r0_unused, u32 r1, u32 r2) {
    u32 r0_2 = *gptr<s16>(0x83e168u + ((r1 + (r1 << 2)) << 3) + (r2 << 3) - 4u);  // (from the original)
    guest::cpu()->r[1] = 0x83e168u;  // (from the original)
    return r0_2;
}

}  // namespace d_0027dc10
GUEST_EXPORT(0x0027dc10, d_0027dc10::f_0027dc10);

// f_0027dc2c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0027dc2c {


void f_0027dc2c(u32 r0_unused, u32 r1, u32 r2) {
    float S0_1 = std::bit_cast<float>(*gptr<u32>(0x83e168u + ((r1 + (r1 << 2)) << 3) + (r2 << 3) - 8u));  // (from the original)
    guest::cpu()->r[1] = 0x83e168u;  // (from the original)
    guest::cpu()->s[0] = S0_1;
}

}  // namespace d_0027dc2c
GUEST_EXPORT(0x0027dc2c, d_0027dc2c::f_0027dc2c);

// f_0027dc48: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0027dc48 {


u32 f_0027dc48(u32 r0_unused, u32 r1, u32 r2) {
    return *gptr<u16>(0x83e168u + (r1 + (r1 << 2) << 3) + (r2 << 3) + 6u);  // (from the original)
}

}  // namespace d_0027dc48
GUEST_EXPORT(0x0027dc48, d_0027dc48::f_0027dc48);

// f_0027dc64: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0027dc64 {

struct __attribute__((packed)) Object_0027dc64_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_0027dc64_0, word_0, 0x0);  // (from the original)


u32 f_0027dc64(gptr<Object_0027dc64_0> arg0, u32 r1) {
    u32 r0_1 = arg0->word_0;
    if (r0_1 == 0) {
        return r0_1;
    }
    u32 r1_1 = *gptr<u32>(*gptr<u32>(r0_1) + 0x9cu);  // (from the original)
    // virtual function 39 of r0_1
    return guest::call_address<u32>(r1_1, r0_1, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0027dc64
GUEST_EXPORT(0x0027dc64, d_0027dc64::f_0027dc64);

// f_0027dc88: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0027dc88 {

struct __attribute__((packed)) Local_0027dc88_ea_1 {
    u32 word_0;
    u8 unknown_4[0xcc];  // (not used here)
    u32 word_d0;
    u8 unknown_d4[0x44];  // (not used here)
    u8 byte_118;
};
GUEST_OFFSET(Local_0027dc88_ea_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_0027dc88_ea_1, word_d0, 0xd0);  // (from the original)
GUEST_OFFSET(Local_0027dc88_ea_1, byte_118, 0x118);  // (from the original)

inline constexpr guest::Function<0x001e90e4, u32(u32, u32, u32, u32)> call_001e90e4;  // (from the original)
inline constexpr guest::Function<0x002d59d4, u32(u32, u32, u32)> call_002d59d4;  // (from the original)
inline constexpr guest::Function<0x002fd0c4, u32(u32, u32, u32)> call_002fd0c4;  // (from the original)

u32 f_0027dc88(u32 r0, u32 r1, u32 r2) {
    u32 r0_1 = call_001e90e4(r0, r1 + 4u, r2, guest::cpu()->r[3]);
    u32 r0_3 = call_002fd0c4(r0_1 + 0xd0u, r1 + 0x14u, guest::cpu()->r[2]);  // (from the original)
    u32 r1_3 = *gptr<u32>(r1);
    gptr<Local_0027dc88_ea_1> ea_1 = gptr<Local_0027dc88_ea_1>(r0_3 - 0xd0u);  // (from the original)
    ea_1->word_0 = r1_3;
    u32 r2_2 = *gptr<u32>(r1 + 0x1cu);  // (from the original)
    *gptr<u32>(ea_1.addr() + *gptr<u32>(r1_3 - 0xcu)) = r2_2;  // (from the original)
    u32 r1_4 = *gptr<u32>(r1 + 0x20u);  // (from the original)
    ea_1->word_d0 = r1_4;
    ea_1->byte_118 = 0;
    u32 r0_5 = call_002d59d4(ea_1.addr() + 0x11cu, r1_4, r2_2);  // (from the original)
    u32 r0_6 = r0_5 - 0x11cu;  // (from the original)
    *gptr<u32>(r0_6 + 0x188u) = 0;  // (from the original)
    return r0_6;
}

}  // namespace d_0027dc88
GUEST_EXPORT_FRAMED(0x0027dc88, d_0027dc88::f_0027dc88, 0x4010);  // pushes {r4, lr} first, as the original

// f_0027dd00: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0027dd00 {

struct __attribute__((packed)) Object_0027dd00_0 {
    u32 word_0;
    u8 unknown_4[0xcc];  // (not used here)
    u32 word_d0;
};
GUEST_OFFSET(Object_0027dd00_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_0027dd00_0, word_d0, 0xd0);  // (from the original)

struct __attribute__((packed)) Local_0027dd00_r1_3 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0027dd00_r1_3, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_0027dd00_r1_3, word_4, 0x4);  // (from the original)

inline constexpr guest::Function<0x002d59e8, u32(u32, u32, u32, u32)> call_002d59e8;  // (from the original)
inline constexpr guest::Function<0x004ecf70, u32(u32, u32, u32)> call_004ecf70;  // (from the original)
inline constexpr guest::Function<0x004edd84, u32(u32, u32)> call_004edd84;  // (from the original)
inline constexpr guest::Function<0x0057bb6c, u32(u32, u32)> call_0057bb6c;  // (from the original)

u32 f_0027dd00(gptr<Object_0027dd00_0> arg0, u32 r1) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 r4_1 = r1;
    if (r1 == 0) {
        r4_1 = 0x8efb34u;  // (from the original)
    }
    u32 r1_1 = *gptr<u32>(r4_1);
    arg0->word_0 = r1_1;
    u32 r2_1 = *gptr<u32>(r4_1 + 0x1cu);  // (from the original)
    *gptr<u32>(arg0.addr() + *gptr<u32>(r1_1 - 0xcu)) = r2_1;  // (from the original)
    u32 r1_2 = *gptr<u32>(r4_1 + 0x20u);  // (from the original)
    arg0->word_d0 = r1_2;
    u32 r0_2 = call_002d59e8((arg0.addr() + 0xd0u) + 0x4cu, r1_2, r2_1, guest::cpu()->r[3]);  // (from the original)
    gptr<Local_0027dd00_r1_3> r1_3 = gptr<Local_0027dd00_r1_3>(r4_1 + 0x14u);  // (from the original)
    if (r1_3.addr() == 0) {
        r1_3 = gptr<Local_0027dd00_r1_3>(0x8f427cu);  // (from the original)
    }
    u32 r0_3 = r0_2 - 0x4cu;  // (from the original)
    u32 r2_2 = r1_3->word_0;
    *gptr<u32>(r0_3) = r2_2;
    u32 r2_3 = *gptr<u32>(r2_2 - 0xcu);  // (from the original)
    u32 r1_4 = r1_3->word_4;
    *gptr<u32>(r0_3 + r2_3) = r1_4;
    u32 r0_5 = call_004ecf70(r0_3 + 0x10u, r1_4, r2_3);  // (from the original)
    u32 r0_7 = call_004edd84(r0_5 - 0xcu, guest::cpu()->r[1]);  // (from the original)
    frame.release();
    return call_0057bb6c(r0_7 - 0xd4u, guest::cpu()->r[1]);  // (from the original)
}

}  // namespace d_0027dd00
GUEST_EXPORT(0x0027dd00, d_0027dd00::f_0027dd00);

// f_0027e08c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0027e08c {

inline constexpr guest::Function<0x002fcbb0, u32(u32, u32, u32, u32)> call_002fcbb0;  // (from the original)
inline constexpr guest::Function<0x002ff6f8, u32(u32, u32, u32, u32)> call_002ff6f8;  // (from the original)
inline constexpr guest::Function<0x00306354, u32(u32, u32, u32, u32)> call_00306354;  // (from the original)
inline constexpr guest::Function<0x00768138, u32(u32, u32, u32)> call_00768138;  // (from the original)

void f_0027e08c(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x14);  // the original's stack frame
    call_002fcbb0(frame.at(0xc).addr(), 0x2242u, r2, r3);  // (from the original)
    call_002fcbb0(frame.at(0x10).addr(), 0x2e59u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_3 = call_002ff6f8(3u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r2_3 = s32(u32(*gptr<u8>(0x5700u + r1)) << 0x1b) < 0 ? r0_3 + 1u : r0_3 + 4u;  // (from the original)
    *frame.at<u32>(0) = frame.at(0xc).addr();  // (from the original)
    *frame.at<u32>(4) = 5;
    *frame.at<u32>(8) = 0;
    call_00306354(r0, 0x27e128u, r2_3, r1 + 0x55a6u);  // (from the original)
    call_00768138(r0, frame.at(0x10).addr(), 0u);  // (from the original)
}

}  // namespace d_0027e08c
GUEST_EXPORT_FRAMED(0x0027e08c, d_0027e08c::f_0027e08c, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_0027e13c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0027e13c {

struct __attribute__((packed)) Local_0027e13c_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0027e13c_ea_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_0027e13c_ea_1, word_4, 0x4);  // (from the original)

struct __attribute__((packed)) Local_0027e13c_ea_2 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0027e13c_ea_2, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_0027e13c_ea_2, word_4, 0x4);  // (from the original)

struct __attribute__((packed)) Local_0027e13c_ea_3 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0027e13c_ea_3, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_0027e13c_ea_3, word_4, 0x4);  // (from the original)

struct __attribute__((packed)) Local_0027e13c_ea_4 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0027e13c_ea_4, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_0027e13c_ea_4, word_4, 0x4);  // (from the original)

struct __attribute__((packed)) Local_0027e13c_ea_5 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0027e13c_ea_5, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_0027e13c_ea_5, word_4, 0x4);  // (from the original)

inline guest::global<u16, 0x00887290> global_00887290;  // (from the original)
inline guest::global<u32, 0x00950148> global_00950148;  // (from the original)
inline constexpr guest::Function<0x0056b5a4, u32(u32, u32)> call_0056b5a4;  // (from the original)
inline constexpr guest::Function<0x0056c7b0, u32(u32, u32)> call_0056c7b0;  // (from the original)
inline constexpr guest::Function<0x0056d230, u32(u32, u32)> call_0056d230;  // (from the original)
inline constexpr guest::Function<0x00695ed8, u32(u32, u32, u32, u32)> call_00695ed8;  // (from the original)
inline constexpr guest::Function<0x006f0130, u32(u32, u32, u32, u32)> call_006f0130;  // (from the original)

u32 f_0027e13c(u32 r0_unused, u32 r1) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 r4 = guest::cpu()->r[4];
    u32 r14 = guest::cpu()->r[14];
    u32 r0_1 = *global_00950148;
    if (r0_1 == 0) {
        guest::cpu()->r[4] = r4;
        return r0_1;
    }
    gptr<Local_0027e13c_ea_1> ea_1 = gptr<Local_0027e13c_ea_1>(frame.at(0).addr());
    ea_1->word_0 = r4;
    ea_1->word_4 = r14;
    u32 r0_2 = call_00695ed8(r0_1, 0x27e1b0u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    if (r0_2 == 0) {
        gptr<Local_0027e13c_ea_2> ea_2 = gptr<Local_0027e13c_ea_2>(frame.at(0).addr());
        u32 r4_1 = ea_2->word_0;
        guest::cpu()->r[4] = r4_1;
        return r0_2;
    }
    u32 r0_3 = *gptr<u16>(r0_2 + 0xcu);  // (from the original)
    u32 r1_2 = *global_00887290;
    if (r0_3 != r1_2) {
        gptr<Local_0027e13c_ea_3> ea_3 = gptr<Local_0027e13c_ea_3>(frame.at(0).addr());
        u32 r4_2 = ea_3->word_0;
        guest::cpu()->r[1] = r1_2;
        guest::cpu()->r[4] = r4_2;
        return r0_3;
    }
    u32 r0_4 = *gptr<u8>(0x2885u + r0_2);  // (from the original)
    if (r0_4 == 0) {
        gptr<Local_0027e13c_ea_4> ea_4 = gptr<Local_0027e13c_ea_4>(frame.at(0).addr());
        u32 r4_3 = ea_4->word_0;
        guest::cpu()->r[1] = r1_2;
        guest::cpu()->r[4] = r4_3;
        return r0_4;
    }
    u32 r0_6 = call_0056d230(r0_2 + 0x2870u, r1_2);  // (from the original)
    u32 r0_7 = call_0056b5a4(r0_6, guest::cpu()->r[1]);
    call_0056c7b0(r0_7, guest::cpu()->r[1]);
    gptr<Local_0027e13c_ea_5> ea_5 = gptr<Local_0027e13c_ea_5>(frame.at(0).addr());
    u32 r4_4 = ea_5->word_0;
    r14 = ea_5->word_4;
    guest::cpu()->r[4] = r4_4;
    frame.release();
    return call_006f0130(0xeu, 1u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
}

}  // namespace d_0027e13c
GUEST_EXPORT(0x0027e13c, d_0027e13c::f_0027e13c);

// f_0027e634: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0027e634 {

struct __attribute__((packed)) Local_0027e634_ea_4 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0027e634_ea_4, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_0027e634_ea_4, word_4, 0x4);  // (from the original)

inline constexpr guest::Function<0x005cd270, u32(u32, u32, u32, u32)> call_005cd270;  // (from the original)

u32 f_0027e634(u32 r0, u32 r1, u32 r2, u32 r3) {
    call_005cd270(r0, r1, r2, r3);
    *gptr<u32>(r0 + 0x20u) = 0;  // (from the original)
    *gptr<u32>(r0 + 8u) = 0x1800181;  // (from the original)
    *gptr<u32>(r0 + 0xcu) = 0;  // (from the original)
    gptr<Local_0027e634_ea_4> ea_4 = gptr<Local_0027e634_ea_4>(r0 + 0x24u);  // (from the original)
    ea_4->word_0 = 0;
    ea_4->word_4 = 0x5264c0;  // (from the original)
    guest::cpu()->r[1] = 0u;
    return 0u;
}

}  // namespace d_0027e634
GUEST_EXPORT_FRAMED(0x0027e634, d_0027e634::f_0027e634, 0x4010);  // pushes {r4, lr} first, as the original

// f_0027e670: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0027e670 {

struct __attribute__((packed)) Local_0027e670_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0027e670_ea_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_0027e670_ea_1, word_4, 0x4);  // (from the original)

inline guest::global<u32, 0x0095386c> global_0095386c;  // (from the original)
inline constexpr guest::Function<0x002f98a8, u32(u32, u32, u32, u32)> call_002f98a8;  // (from the original)
inline constexpr guest::Function<0x005cd270, u32(u32, u32)> call_005cd270;  // (from the original)

u32 f_0027e670(u32 r0, u32 r1) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    call_002f98a8(*global_0095386c, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    call_005cd270(r0, guest::cpu()->r[1]);
    gptr<Local_0027e670_ea_1> ea_1 = gptr<Local_0027e670_ea_1>(r0 + 8u);
    ea_1->word_0 = 0x24000942;  // (from the original)
    ea_1->word_4 = 0;
    *gptr<u32>(r0 + 0x20u) = 0x5264e0;  // (from the original)
    *gptr<u32>(r0 + 0x24u) = 0x526474;  // (from the original)
    *gptr<u32>(r0 + 0x28u) = 0x526484;  // (from the original)
    frame.release();
    return guest::call_address<u32>(0x10f9fdu, 0x526484u, 0u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
}

}  // namespace d_0027e670
GUEST_EXPORT(0x0027e670, d_0027e670::f_0027e670);

// f_0027eeac: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0027eeac {

struct __attribute__((packed)) Local_0027eeac_r0_2 {
    u8 byte_0;
    u8 byte_1;
    u8 unknown_2[0x22];  // (not used here)
    u32 word_24;
};
GUEST_OFFSET(Local_0027eeac_r0_2, byte_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_0027eeac_r0_2, byte_1, 0x1);  // (from the original)
GUEST_OFFSET(Local_0027eeac_r0_2, word_24, 0x24);  // (from the original)

inline constexpr guest::Function<0x0027ec34, u32(u32, u32, u32, u32)> call_0027ec34;  // (from the original)
inline constexpr guest::Function<0x002f9e1c, u32(u32, u32, u32, u32)> call_002f9e1c;  // (from the original)
inline constexpr guest::Function<0x00306f60, u32(u32, u32, u32, u32)> call_00306f60;  // (from the original)
inline constexpr guest::Function<0x003171b4, u32(u32, u32, u32, u32)> call_003171b4;  // (from the original)
inline constexpr guest::Function<0x007ceb80, u32(u32, u32, u32, u32)> call_007ceb80;  // (from the original)
inline constexpr guest::Function<0x007d1fd4, u32(u32, u32, u32, u32)> call_007d1fd4;  // (from the original)

u32 f_0027eeac(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    call_0027ec34(r0, r1, r2, r3);
    call_003171b4(frame.at(0).addr(), frame.at(4).addr(), r0 + 0x14u, guest::cpu()->r[3]);  // (from the original)
    gptr<Local_0027eeac_r0_2> r0_2 = gptr<Local_0027eeac_r0_2>(r0 + 0x2520u);  // (from the original)
    call_007d1fd4(r0_2.addr(), *frame.at<u32>(0), *frame.at<u32>(4), 0u);
    u32 r5_1 = r0_2->word_24;
    u32 r0_3 = call_00306f60(r5_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r1_4 = guest::cpu()->r[1];
    if (s32(r0_3) >= 0) {
        u32 r0_4 = call_002f9e1c(r0_3, *gptr<u32>(r5_1 + 0x14u), guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        u32 r3_4 = r0_2->byte_1;
        r1_4 = guest::cpu()->r[1] + u32(r0_2->byte_0);
        r0_3 = r0_4 + r3_4;
        if (1u != 0) {
            u32 r1_7 = 1u & ~0xffu | *frame.at<u32>(0) & 0xffu;  // (from the original)
            u32 r2_5 = (r0_3 << 8) & 0xff00u | ((r3_4 & ~0xffu) | r1_4 & 0xffu) & ~0xff00u;  // (from the original)
            u32 r1_8 = r1_7 & ~0xff00u | *frame.at<u32>(4) << 8 & 0xff00u;  // (from the original)
            *frame.at<u32>(8) = 0x8f5b94;  // (from the original)
            r0_3 = call_007ceb80(r0_2.addr(), r1_8, r2_5, frame.at(8).addr());
            r1_4 = guest::cpu()->r[1];
        }
    }
    guest::cpu()->r[1] = r1_4;
    return r0_3;
}

}  // namespace d_0027eeac
GUEST_EXPORT_FRAMED(0x0027eeac, d_0027eeac::f_0027eeac, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original
