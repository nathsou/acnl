// Functions decompiled by tools/decomp (docs/decomp.md), each proved equal to the recompiled original (prove-cpp). The
// names are generated (d_<address>::f_<address>, Object_<address>_<argument>, word_<offset>) and still to be chosen.
#include "guest/guest.hpp"
#include "recovered/structs.hpp"

#include <bit>

using guest::gptr;

// f_00530da8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00530da8 {

inline guest::global<u32, 0x00952c5c> global_00952c5c;  // (from the original)
inline constexpr guest::Function<0x002d5b40, u32(u32, u32, u32, u32)> call_002d5b40;  // (from the original)
inline constexpr guest::Function<0x0031758c, u32(u32, u32, u32, u32)> call_0031758c;  // (from the original)
inline constexpr guest::Function<0x008156fc, u32(u32, u32, u32, u32)> call_008156fc;  // (from the original)

u32 f_00530da8(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 r7_1 = *global_00952c5c;
    *frame.at<u32>(8) = 0x9047f8;  // (from the original)
    *frame.at<u32>(0xc) = 0x530e28;  // (from the original)
    *frame.at<u32>(0) = 1;
    *frame.at<u32>(4) = 0;
    call_0031758c(r0, 0x1400u, r7_1, frame.at(8).addr());  // (from the original)
    call_008156fc(r0 + 0x2cu, r7_1, 0x4000u, guest::cpu()->r[3]);  // (from the original)
    *gptr<u8>(r0 + 0x290u) = u8(r1);  // (from the original)
    *gptr<u8>(r0 + 0x291u) = u8(r2);  // (from the original)
    u32 r0_3 = call_002d5b40(r0 + 0x2a4u, r3, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    return r0_3;
}

}  // namespace d_00530da8
GUEST_EXPORT_FRAMED(0x00530da8, d_00530da8::f_00530da8, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_0053138c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0053138c {

inline constexpr guest::Function<0x004ee364, u32(u32, u32)> call_004ee364;  // (from the original)

u32 f_0053138c(u32 r0) {
    return call_004ee364(r0 + 8u, 0u);
}

}  // namespace d_0053138c
GUEST_EXPORT(0x0053138c, d_0053138c::f_0053138c);

// f_00531398: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00531398 {

inline constexpr guest::Function<0x004edd20, u32(u32, u32, u32, u32)> call_004edd20;  // (from the original)
inline constexpr guest::Function<0x004ee4c8, u32(u32, u32, u32, u32)> call_004ee4c8;  // (from the original)

u32 f_00531398(u32 r0) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    call_004ee4c8(r0 + 8u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    frame.release();
    return call_004edd20(r0 + 8u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_00531398
GUEST_EXPORT(0x00531398, d_00531398::f_00531398);

// f_005313b4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005313b4 {

inline constexpr guest::Function<0x00132478, u32(u32, u32)> call_00132478;  // (from the original)
inline constexpr guest::Function<0x0013f134, u32(u32, u32)> call_0013f134;  // (from the original)
inline constexpr guest::Function<0x002d5f68, u32(u32, u32, u32, u32)> call_002d5f68;  // (from the original)
inline constexpr guest::Function<0x002f73b8, u32(u32, u32)> call_002f73b8;  // (from the original)
inline constexpr guest::Function<0x002f747c, u32(u32, u32, u32, u32)> call_002f747c;  // (from the original)
inline constexpr guest::Function<0x004ecec8, u32(u32, u32)> call_004ecec8;  // (from the original)
inline constexpr guest::Function<0x004f1270, u32(u32, u32)> call_004f1270;  // (from the original)
inline constexpr guest::Function<0x005b19f8, u32(u32, u32)> call_005b19f8;  // (from the original)

u32 f_005313b4(u32 r0, u32 r1) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 r1_6 = 0;
    u32 r6 = r0;
    call_002d5f68(r0 + 0x2a4u, r1, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    r1 = guest::cpu()->r[1];
    if (*gptr<u32>(r6 + 0xcu) != 0) {  // (from the original)
        call_004f1270(r6 + 8u, r1);
        r1 = guest::cpu()->r[1];
    }
    if (*gptr<u32>(r6 + 0x1cu) != 0) {  // (from the original)
        call_004ecec8(r6 + 0x14u, r1);  // (from the original)
        r1 = guest::cpu()->r[1];
    }
    u32 r4 = *gptr<u32>(r6 + 0x270u);  // (from the original)
    u32 r5 = r6 + 0x2cu;  // (from the original)
    if (r4 != 0) {
        do {
            call_005b19f8(r4 + 0xcu, r1);  // (from the original)
            call_002f73b8(r4 + 0x14u, guest::cpu()->r[1]);  // (from the original)
            r1 = guest::cpu()->r[1];
            r4 = *gptr<u32>(r4 + 8u);
            guest::preempt();
        } while (r4 != 0);
    }
    r4 = *gptr<u32>(r5 + 0x25cu);  // (from the original)
    if (r4 != 0) {
        do {
            call_005b19f8(r4 + 0xcu, r1);  // (from the original)
            call_002f73b8(r4 + 0x14u, guest::cpu()->r[1]);  // (from the original)
            r1 = guest::cpu()->r[1];
            r4 = *gptr<u32>(r4 + 8u);
            guest::preempt();
        } while (r4 != 0);
    }
    call_00132478(r5 + 0x240u, r1);  // (from the original)
    call_00132478(r5 + 0x24cu, guest::cpu()->r[1]);  // (from the original)
    call_00132478(r5 + 0x258u, guest::cpu()->r[1]);  // (from the original)
    r4 = 0u;
    do {
        call_0013f134(r5 + 0x24cu, r5 + ((r4 << 3) - r4 + (r4 << 6) << 2) + 8u);  // (from the original)
        r1_6 = guest::cpu()->r[1];
        r4 += 1u;
        guest::preempt();
    } while (r4 < 2u);
    call_002f747c(r5, r1_6, guest::cpu()->r[2], guest::cpu()->r[3]);
    frame.release();
    return call_002f747c(r6, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_005313b4
GUEST_EXPORT(0x005313b4, d_005313b4::f_005313b4);

// f_0053149c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0053149c {

struct __attribute__((packed)) Local_0053149c_r0_17 {
    u8 unknown_0[0x290];  // (not used here)
    u8 byte_290;
    u8 byte_291;
};
GUEST_OFFSET(Local_0053149c_r0_17, byte_290, 0x290);  // (from the original)
GUEST_OFFSET(Local_0053149c_r0_17, byte_291, 0x291);  // (from the original)

inline constexpr guest::Function<0x00125e08, u32(u32, u32, u32, u32)> call_00125e08;  // (from the original)
inline constexpr guest::Function<0x002d5f90, u32(u32, u32, u32, u32)> call_002d5f90;  // (from the original)
inline constexpr guest::Function<0x002f825c, u32(u32, u32, u32, u32)> call_002f825c;  // (from the original)
inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> call_00301d0c;  // (from the original)
inline constexpr guest::Function<0x004ecf18, u32(u32, u32, u32, u32)> call_004ecf18;  // (from the original)
inline constexpr guest::Function<0x004edd3c, u32(u32, u32, u32, u32)> call_004edd3c;  // (from the original)
inline constexpr guest::Function<0x005673c8, u32(u32, u32, u32, u32)> call_005673c8;  // (from the original)
inline constexpr guest::Function<0x005b1a1c, u32(u32, u32, u32, u32)> call_005b1a1c;  // (from the original)

u32 f_0053149c(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r0_1 = call_005673c8(r0, r1, r2, r3);
    u32 r0_3 = call_004edd3c(r0_1 + 8u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_5 = call_004ecf18(r0_3 + 0xcu, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    call_002f825c(r0_5 + 0x18u, 0x264u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_8 = call_005673c8((r0_5 - 0x14u) + 0x2cu, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_10 = call_00301d0c(r0_8 + 8u, 0x5b1c18u, 0x11cu, 2u);  // (from the original)
    u32 r0_12 = call_00125e08(r0_10 + 0x238u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_14 = call_00125e08(r0_12 + 0xcu, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_16 = call_00125e08(r0_14 + 0xcu, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    gptr<Local_0053149c_r0_17> r0_17 = gptr<Local_0053149c_r0_17>(r0_16 - 0x284u);  // (from the original)
    r0_17->byte_290 = 0;
    r0_17->byte_291 = 0;
    u32 r0_19 = call_005b1a1c(r0_17.addr() + 0x294u, 0u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_21 = call_005b1a1c(r0_19 + 8u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_23 = call_002d5f90(r0_21 + 8u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    return r0_23 - 0x2a4u;  // (from the original)
}

}  // namespace d_0053149c
GUEST_EXPORT_FRAMED(0x0053149c, d_0053149c::f_0053149c, 0x4010);  // pushes {r4, lr} first, as the original

// f_0053152c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0053152c {

inline constexpr guest::Function<0x002e9324, u32(u32, u32, u32, u32)> call_002e9324;  // (from the original)
inline constexpr guest::Function<0x002f76ad, u32(u32, u32, u32, u32)> call_002f76ac;  // (from the original)
inline constexpr guest::Function<0x00317dec, u32(u32, u32, u32, u32)> call_00317dec;  // (from the original)
inline constexpr guest::Function<0x004ecf70, u32(u32, u32, u32, u32)> call_004ecf70;  // (from the original)
inline constexpr guest::Function<0x004edd84, u32(u32, u32, u32, u32)> call_004edd84;  // (from the original)

u32 f_0053152c(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 r0_2 = call_002e9324(r0 + 0x2a4u, r1, r2, r3);  // (from the original)
    u32 r0_3 = r0_2 - 0x10u;  // (from the original)
    call_002f76ac(r0_3 - 0x260u, 0x5b1c68u, 0x11cu, 2u);  // (from the original)
    u32 r0_5 = call_00317dec(r0_3 - 0x268u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_7 = call_004ecf70(r0_5 - 0x18u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_9 = call_004edd84(r0_7 - 0xcu, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    frame.release();
    return call_00317dec(r0_9 - 8u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0053152c
GUEST_EXPORT(0x0053152c, d_0053152c::f_0053152c);

// f_005360e0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005360e0 {

struct __attribute__((packed)) Object_005360e0_0 {
    u8 byte_0;
};
GUEST_OFFSET(Object_005360e0_0, byte_0, 0x0);  // (from the original)

inline guest::global<u32, 0x00878198> global_00878198;  // (from the original)

u32 f_005360e0(gptr<Object_005360e0_0> arg0, u32 r1) {
    u32 r0_1 = arg0->byte_0;
    if (r0_1 >= 0xaau) {  // (from the original)
        return *global_00878198;
    }
    u32 r0_3 = r0_1 + (r0_1 << 1);
    return r1 == 0 ? *gptr<u32>(0x878198u + (r0_3 << 2) + 4u) : *gptr<u32>(0x878198u + (r0_3 << 2));  // (from the original)
}

}  // namespace d_005360e0
GUEST_EXPORT(0x005360e0, d_005360e0::f_005360e0);

// f_00536110: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00536110 {


u32 f_00536110(u32 r0) {
    return *gptr<u16>(r0 >= 0x56u ? 0x887086u : 0xa184e4u + (r0 << 1));  // (from the original)
}

}  // namespace d_00536110
GUEST_EXPORT(0x00536110, d_00536110::f_00536110);

// f_00536130: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00536130 {

inline guest::global<u32, 0x00878990> global_00878990;  // (from the original)
inline constexpr guest::Function<0x005361a8, u32(u32)> call_005361a8;  // (from the original)
inline constexpr guest::Function<0x006bf18c, u32(u32)> call_006bf18c;  // (from the original)

u32 f_00536130(u32 r0, float S0) {
    u32 r0_3 = 0;
    u32 r0_1 = call_005361a8(r0);
    float S0_1 = guest::cpu()->s[0];
    if (r0_1 != 0) {
        u32 r4_1 = *gptr<u16>(r0_1);
        if (r4_1 >= 0x1fbu) {  // (from the original)
            r4_1 = 0u;
            return *gptr<u32>(0x878990u + (r4_1 << 2));  // (from the original)
        }
        if (r4_1 != 0x136u && r4_1 != 0x151u) {  // (from the original)
            return *gptr<u32>(0x878990u + (r4_1 << 2));  // (from the original)
        }
        call_006bf18c(r0);
        float S0_2 = guest::cpu()->s[0];
        S0_1 = std::bit_cast<float>(vcvt_uz_f(S0_2));
        u32 r0_2 = std::bit_cast<u32>(S0_1) + r4_1;
        if (r0_2 < 0x1fbu) {  // (from the original)
            r0_3 = *gptr<u32>(0x878990u + (r0_2 << 2));  // (from the original)
            guest::cpu()->s[0] = S0_1;
            return r0_3;
        }
    }
    r0_3 = *global_00878990;
    guest::cpu()->s[0] = S0_1;
    return r0_3;
}

}  // namespace d_00536130
GUEST_EXPORT_FRAMED(0x00536130, d_00536130::f_00536130, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_005361e8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005361e8 {

inline guest::global<u32, 0x00a183a0> global_00a183a0;  // (from the original)

u32 f_005361e8(u32 r0, u32 r1) {
    if (r0 >= 0x9bu) {  // (from the original)
        return 0u;
    }
    u32 r1_1 = *global_00a183a0;
    if (r1_1 != 0) {
        guest::cpu()->r[1] = r1_1;
        return r0 + (r0 << 1) + r1_1;
    }
    guest::cpu()->r[1] = r1_1;
    return 0u;
}

}  // namespace d_005361e8
GUEST_EXPORT(0x005361e8, d_005361e8::f_005361e8);

// f_005369d0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005369d0 {

struct __attribute__((packed)) Object_005369d0_0 {
    u8 unknown_0[0x8];  // (not used here)
    u32 word_8;
};
GUEST_OFFSET(Object_005369d0_0, word_8, 0x8);  // (from the original)

struct __attribute__((packed)) Local_005369d0_r0_1 {
    u32 word_0;
    u8 unknown_4[0x30];  // (not used here)
    u32 word_34;
};
GUEST_OFFSET(Local_005369d0_r0_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_005369d0_r0_1, word_34, 0x34);  // (from the original)


u32 f_005369d0(gptr<Object_005369d0_0> arg0, u32 r1) {
    gptr<Local_005369d0_r0_1> r0_1 = gptr<Local_005369d0_r0_1>(0u);
    u32 ea_1 = arg0->word_8 + 0x28u;  // (from the original)
    u32 r3_1 = *gptr<u32>(ea_1);
    u32 r2_1 = r3_1 == 0 ? r0_1.addr() : ea_1 + r3_1;
    if (r2_1 == 0) {
        r0_1 = gptr<Local_005369d0_r0_1>(0u);
    } else {
        u32 ea_2 = r2_1 + (r1 << 4) + 0x28u;  // (from the original)
        u32 r2_2 = *gptr<u32>(ea_2);
        if (r2_2 != 0) {
            r0_1 = gptr<Local_005369d0_r0_1>(r2_2 + ea_2);
        }
    }
    if (r0_1.addr() == 0) {
        return r0_1->word_34 & 0xffu;  // (from the original)
    }
    if ((0x20000001u & ~r0_1->word_0) != 0) {  // (from the original)
        r0_1 = gptr<Local_005369d0_r0_1>(0u);
    }
    return r0_1->word_34 & 0xffu;  // (from the original)
}

}  // namespace d_005369d0
GUEST_EXPORT(0x005369d0, d_005369d0::f_005369d0);

// f_00536a28: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00536a28 {

struct __attribute__((packed)) Object_00536a28_0 {
    u8 unknown_0[0x8];  // (not used here)
    u32 word_8;
};
GUEST_OFFSET(Object_00536a28_0, word_8, 0x8);  // (from the original)


u32 f_00536a28(gptr<Object_00536a28_0> arg0, u32 r1) {
    u32 r1_1 = 0;
    u32 r0_1 = 0u;
    u32 ea_1 = arg0->word_8 + 0x28u;  // (from the original)
    u32 r3_1 = *gptr<u32>(ea_1);
    u32 r2_1 = r3_1 == 0 ? r0_1 : ea_1 + r3_1;
    if (r2_1 == 0) {
        r1_1 = 0u;
    } else {
        u32 ea_2 = r2_1 + (r1 << 4) + 0x28u;  // (from the original)
        u32 r2_2 = *gptr<u32>(ea_2);
        r1_1 = r2_2 == 0 ? r0_1 : ea_2 + r2_2;
    }
    if (r1_1 == 0) {
        return 0u;
    }
    if ((0x20000011u & ~*gptr<u32>(r1_1)) != 0) {  // (from the original)
        r1_1 = 0u;
    }
    u32 ea_3 = r1_1 + 0x38u;  // (from the original)
    u32 r2_3 = *gptr<u32>(ea_3);
    u32 ea_4 = (r2_3 == 0 ? r0_1 : ea_3 + r2_3) + 0xcu;  // (from the original)
    u32 r2_4 = *gptr<u32>(ea_4);
    if (r2_4 != 0) {
        r0_1 = r2_4 + ea_4;
    }
    return r0_1;
}

}  // namespace d_00536a28
GUEST_EXPORT(0x00536a28, d_00536a28::f_00536a28);

// f_00536cfc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00536cfc {

inline constexpr guest::Function<0x002fcb34, u32(u32, u32, u32, u32)> call_002fcb34;  // (from the original)
inline constexpr guest::Function<0x004f2c10, u32(u32, u32, u32, u32)> call_004f2c10;  // (from the original)
inline constexpr guest::Function<0x00536650, u32(u32, u32, u32)> call_00536650;  // (from the original)

void f_00536cfc(u32 r0, u32 r1, u32 r2) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 r0_1 = call_002fcb34(r1, r1, r2, guest::cpu()->r[3]);
    u32 r1_1 = guest::cpu()->r[1];
    if (r0_1 == 0x1cu) {  // (from the original)
        u32 r0_2 = *gptr<u32>(r0 + 8u);
        u32 r4_1 = 0u;
        u32 ea_1 = r0_2 + 0x20u;  // (from the original)
        r1_1 = *gptr<u32>(ea_1);
        u32 r0_3 = r1_1 == 0 ? r4_1 : ea_1 + r1_1;
        if (r0_3 != 0) {
            u32 ea_2 = r0_3 + 0x28u;  // (from the original)
            r1_1 = *gptr<u32>(ea_2);
            r0_3 = r1_1 == 0 ? r4_1 : ea_2 + r1_1;
        }
        if (r0_3 != 0) {
            u32 ea_3 = r0_3 + 0xc0u;  // (from the original)
            r1_1 = *gptr<u32>(ea_3);
            u32 r0_4 = r1_1 == 0 ? r4_1 : ea_3 + r1_1;
            if (r0_4 == 0) {
                r4_1 = 0u;
            } else {
                u32 ea_4 = r0_4 + 0x28u;  // (from the original)
                r1_1 = *gptr<u32>(ea_4);
                if (r1_1 != 0) {
                    r4_1 = r1_1 + ea_4;
                }
            }
            if (r4_1 != 0) {
                u32 r0_5 = call_00536650(r1, r1_1, guest::cpu()->r[2]);
                frame.release();
                call_004f2c10(r4_1, r0_5, 0u, guest::cpu()->r[3]);
                return;
            }
        }
    }
    guest::cpu()->r[1] = r1_1;
}

}  // namespace d_00536cfc
GUEST_EXPORT(0x00536cfc, d_00536cfc::f_00536cfc);

// f_00536da0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00536da0 {

inline constexpr guest::Function<0x002fcb34, u32(u32, u32, u32, u32)> call_002fcb34;  // (from the original)
inline constexpr guest::Function<0x005361a8, u32(u32, u32, u32, u32)> call_005361a8;  // (from the original)
inline constexpr guest::Function<0x00544f18, u32(u32, u32, u32, u32)> call_00544f18;  // (from the original)
inline constexpr guest::Function<0x00544fec, u32(u32, u32, u32, u32)> call_00544fec;  // (from the original)
inline constexpr guest::Function<0x0054a644, u32(u32, u32, u32, u32)> call_0054a644;  // (from the original)

void f_00536da0(u32 r0_unused, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x24);  // the original's stack frame
    u32 r0_6 = 0;
    u32 r0_7 = 0;
    u32 r0_8 = 0;
    u32 r0_9 = 0;
    u32 r2_5 = 0;
    u32 r3_5 = 0;
    u32 r0_10 = 0;
    u32 r2_6 = 0;
    u32 r3_6 = 0;
    u32 r0_11 = 0;
    u32 r1_3 = 0;
    u32 r2_7 = 0;
    u32 r3_7 = 0;
    u32 r0_12 = 0;
    u32 r0_13 = 0;
    u32 r2_8 = 0;
    u32 r3_8 = 0;
    u32 r0_14 = 0;
    u32 r2_9 = 0;
    u32 r3_9 = 0;
    u32 r0_15 = 0;
    u32 r1_4 = 0;
    u32 r2_10 = 0;
    u32 r3_10 = 0;
    u32 r5_1 = *frame.at<u32>(0x38);  // (from the original)
    u32 r0_1 = call_002fcb34(r2, r1, r2, r3);
    u32 r1_1 = guest::cpu()->r[1];
    u32 r2_1 = guest::cpu()->r[2];
    u32 r3_1 = guest::cpu()->r[3];
    if (r0_1 == 0x40u) {  // (from the original)
        goto L_536e10;
    }
    if (r0_1 == 0x1cu) {  // (from the original)
        goto L_536e3c;
    }
    if (r0_1 == 0x29u && r5_1 == 1u) {  // (from the original)
        u32 r0_3 = call_0054a644(frame.at(0).addr(), r1, r2_1, r3_1);
        u32 r0_4 = call_00544fec(r0_3, 0x536f08u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        u32 r0_5 = call_00544fec(r0_4, r3, guest::cpu()->r[2], guest::cpu()->r[3]);
        call_00544f18(r0_5, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    }
    return;
L_536e10:;
    r0_6 = call_005361a8(r2, r1_1, r2_1, r3_1);
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    r0_7 = *gptr<u8>(r0_6 + 0xfu);  // (from the original)
    if (r0_7 >= 0x32u) {  // (from the original)
        return;
    }
    if (r0_7 == 0x2au) {  // (from the original)
        goto L_536e80;
    }
    if (r0_7 == 1u) {
        goto L_536ec4;
    }
    if (r0_7 != 7u) {
        return;
    }
L_536e3c:;
    r0_8 = frame.at(0).addr();
    r0_9 = call_0054a644(r0_8, r1, r2_1, r3_1);
    r2_5 = guest::cpu()->r[2];
    r3_5 = guest::cpu()->r[3];
    r0_10 = call_00544fec(r0_9, 0x536f24u, r2_5, r3_5);  // (from the original)
    r2_6 = guest::cpu()->r[2];
    r3_6 = guest::cpu()->r[3];
    r0_11 = call_00544fec(r0_10, r3, r2_6, r3_6);
    r1_3 = guest::cpu()->r[1];
    r2_7 = guest::cpu()->r[2];
    r3_7 = guest::cpu()->r[3];
    call_00544f18(r0_11, r1_3, r2_7, r3_7);
    return;
L_536e80:;
    r0_12 = frame.at(0).addr();
    r0_13 = call_0054a644(r0_12, r1, r2_1, r3_1);
    r2_8 = guest::cpu()->r[2];
    r3_8 = guest::cpu()->r[3];
    r0_14 = call_00544fec(r0_13, 0x536f40u, r2_8, r3_8);  // (from the original)
    r2_9 = guest::cpu()->r[2];
    r3_9 = guest::cpu()->r[3];
    r0_15 = call_00544fec(r0_14, r3, r2_9, r3_9);
    r1_4 = guest::cpu()->r[1];
    r2_10 = guest::cpu()->r[2];
    r3_10 = guest::cpu()->r[3];
    call_00544f18(r0_15, r1_4, r2_10, r3_10);
    return;
L_536ec4:;
    u32 r0_17 = call_0054a644(frame.at(0).addr(), r1, r2_1, r3_1);
    u32 r0_18 = call_00544fec(r0_17, 0x536f58u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_19 = call_00544fec(r0_18, r3, guest::cpu()->r[2], guest::cpu()->r[3]);
    call_00544f18(r0_19, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_00536da0
GUEST_EXPORT_FRAMED(0x00536da0, d_00536da0::f_00536da0, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_00537028: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00537028 {

struct __attribute__((packed)) Object_00537028_0 {
    u8 unknown_0[0x110];  // (not used here)
    u32 word_110;
};
GUEST_OFFSET(Object_00537028_0, word_110, 0x110);  // (from the original)

inline constexpr guest::Function<0x002f73b8, u32(u32, u32, u32, u32)> call_002f73b8;  // (from the original)
inline constexpr guest::Function<0x006aac18, u32(u32, u32, u32, u32)> call_006aac18;  // (from the original)

u32 f_00537028(gptr<Object_00537028_0> arg0) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    if (arg0->word_110 == 0) {
        frame.release();
        return call_002f73b8(arg0.addr(), guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    }
    call_006aac18(arg0.addr(), guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    arg0->word_110 = 0;
    frame.release();
    return call_002f73b8(arg0.addr(), guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_00537028
GUEST_EXPORT(0x00537028, d_00537028::f_00537028);

// f_0053721c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0053721c {

inline constexpr guest::Function<0x00317e2c, u32(u32, u32, u32, u32)> call_00317e2c;  // (from the original)

u32 f_0053721c() {
    return call_00317e2c(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0053721c
GUEST_EXPORT(0x0053721c, d_0053721c::f_0053721c);

// f_00537220: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00537220 {

inline constexpr guest::Function<0x002bec28, u32(u32, u32, u32, u32)> call_002bec28;  // (from the original)
inline constexpr guest::Function<0x002becec, u32(u32)> call_002becec;  // (from the original)
inline constexpr guest::Function<0x005ca6fc, u32(u32, u32, u32, u32)> call_005ca6fc;  // (from the original)

u32 f_00537220(u32 r0) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 r0_1 = call_005ca6fc(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0_1 != 0) {
        r0_1 = call_002becec(r0_1);
    }
    u32 r0_2 = call_005ca6fc(r0_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0_2 == 0) {
        return r0_2;
    }
    frame.release();
    return call_002bec28(r0_2, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_00537220
GUEST_EXPORT(0x00537220, d_00537220::f_00537220);

// f_00537328: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00537328 {

struct __attribute__((packed)) Local_00537328_r0_1 {
    u8 unknown_0[0xa0];  // (not used here)
    u8 byte_a0;
    u8 byte_a1;
};
GUEST_OFFSET(Local_00537328_r0_1, byte_a0, 0xa0);  // (from the original)
GUEST_OFFSET(Local_00537328_r0_1, byte_a1, 0xa1);  // (from the original)

inline guest::global<u32, 0x00952620> global_00952620;  // (from the original)

u32 f_00537328(u32 r0_unused, u32 r1) {
    gptr<Local_00537328_r0_1> r0_1 = gptr<Local_00537328_r0_1>(*global_00952620);
    u32 zf_1 = r0_1.addr() == 0;
    if (!zf_1) {
        r1 = r0_1->byte_a1;
        zf_1 = r1 == 0;
    }
    if (zf_1) {
        r0_1 = gptr<Local_00537328_r0_1>(0u);
    }
    u32 r0_2 = r0_1->byte_a0 >= 0x10u ? 0u : 1u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0_2;
}

}  // namespace d_00537328
GUEST_EXPORT(0x00537328, d_00537328::f_00537328);

// f_00537358: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00537358 {

inline guest::global<u32, 0x00952620> global_00952620;  // (from the original)
inline constexpr guest::Function<0x002e0d04, u32(u32, u32, u32, u32)> call_002e0d04;  // (from the original)
inline constexpr guest::Function<0x0071fcb8, u32(u32, u32, u32, u32)> call_0071fcb8;  // (from the original)

void f_00537358(u32 r0, u32 r1) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 r0_1 = call_0071fcb8(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r1_1 = guest::cpu()->r[1];
    if (r0_1 == 0) {
        return;
    }
    *gptr<u8>(r0 + 0x7dd7u) = 4;  // (from the original)
    u32 r0_2 = *global_00952620;
    u32 zf_1 = r0_2 == 0;
    if (!zf_1) {
        r1_1 = *gptr<u8>(r0_2 + 0xa1u);  // (from the original)
        zf_1 = r1_1 == 0;
    }
    if (zf_1) {
        return;
    }
    frame.release();
    call_002e0d04(r0_2, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
    return;
}

}  // namespace d_00537358
GUEST_EXPORT(0x00537358, d_00537358::f_00537358);

// f_0053742c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0053742c {

inline constexpr guest::Function<0x001e0190, u32(u32, u32, u32, u32)> call_001e0190;  // (from the original)
inline constexpr guest::Function<0x0027a48c, u32(u32)> call_0027a48c;  // (from the original)
inline constexpr guest::Function<0x002fb918, u32(u32)> call_002fb918;  // (from the original)
inline constexpr guest::Function<0x005cfa78, u32(u32, u32, u32, u32)> call_005cfa78;  // (from the original)
inline constexpr guest::Function<0x005cfef0, u32(u32)> call_005cfef0;  // (from the original)

u32 f_0053742c(u32 r0) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 r0_1 = call_005cfa78(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0_1 != 0) {
        return r0_1;
    }
    u32 r0_2 = call_005cfef0(r0_1);
    if (r0_2 == 0) {
        return r0_2;
    }
    u32 r0_3 = call_002fb918(r0_2);
    u32 r0_5 = call_0027a48c(r0_3 + 0xcu);  // (from the original)
    u32 r0_6 = call_002fb918(r0_5);
    frame.release();
    return call_001e0190(r0_6, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0053742c
GUEST_EXPORT(0x0053742c, d_0053742c::f_0053742c);

// f_00537464: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00537464 {

inline guest::global<u32, 0x00952620> global_00952620;  // (from the original)

u32 f_00537464(u32 r0_unused, u32 r1) {
    u32 r0_1 = *global_00952620;
    u32 zf_1 = r0_1 == 0;
    if (!zf_1) {
        r1 = *gptr<u8>(r0_1 + 0xa1u);  // (from the original)
        zf_1 = r1 == 0;
    }
    if (zf_1) {
        r0_1 = 0u;
    }
    guest::cpu()->r[1] = r1;
    return r0_1;
}

}  // namespace d_00537464
GUEST_EXPORT(0x00537464, d_00537464::f_00537464);

// f_005374f0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005374f0 {

struct __attribute__((packed)) Local_005374f0_r0_4 {
    u16 half_0;
    u8 unknown_2[0x12];  // (not used here)
    u8 byte_14;
};
GUEST_OFFSET(Local_005374f0_r0_4, half_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_005374f0_r0_4, byte_14, 0x14);  // (from the original)

inline constexpr guest::Function<0x00100d2d, u32(u32, u32, u32, u32)> call_00100d2c;  // (from the original)
inline constexpr guest::Function<0x002be920, u32(u32, u32, u32, u32)> call_002be920;  // (from the original)
inline constexpr guest::Function<0x002bea00, u32(u32, u32, u32, u32)> call_002bea00;  // (from the original)
inline constexpr guest::Function<0x002beb4c, u32(u32, u32, u32, u32)> call_002beb4c;  // (from the original)
inline constexpr guest::Function<0x002beb90, u32(u32, u32, u32, u32)> call_002beb90;  // (from the original)
inline constexpr guest::Function<0x002bedd8, u32(u32, u32, u32, u32)> call_002bedd8;  // (from the original)
inline constexpr guest::Function<0x002bee04, u32(u32, u32, u32, u32)> call_002bee04;  // (from the original)
inline constexpr guest::Function<0x002fb328, u32(u32, u32, u32, u32)> call_002fb328;  // (from the original)
inline constexpr guest::Function<0x002fe940, u32(u32, u32, u32, u32)> call_002fe940;  // (from the original)
inline constexpr guest::Function<0x0030f4fc, u32(u32, u32, u32, u32)> call_0030f4fc;  // (from the original)
inline constexpr guest::Function<0x00467590, u32(u32, u32, u32, u32)> call_00467590;  // (from the original)
inline constexpr guest::Function<0x00582d34, u32(u32, u32, u32, u32)> call_00582d34;  // (from the original)
inline constexpr guest::Function<0x005ca6fc, u32(u32, u32, u32, u32)> call_005ca6fc;  // (from the original)
inline constexpr guest::Function<0x0071a23c, u32(u32, u32, u32, u32)> call_0071a23c;  // (from the original)
inline constexpr guest::Function<0x0071d5b8, u32(u32, u32, u32, u32)> call_0071d5b8;  // (from the original)
inline constexpr guest::Function<0x0071d664, u32(u32, u32, u32, u32)> call_0071d664;  // (from the original)
inline constexpr guest::Function<0x00725978, u32(u32, u32, u32, u32)> call_00725978;  // (from the original)
inline constexpr guest::Function<0x00725984, u32(u32, u32, u32, u32)> call_00725984;  // (from the original)
inline constexpr guest::Function<0x007259b4, u32(u32, u32, u32, u32)> call_007259b4;  // (from the original)

u32 f_005374f0(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x3c);  // the original's stack frame
    u32 r0_6 = 0;
    u32 r0_1 = call_00725984(r0, r1, r2, r3);
    u32 r1_1 = guest::cpu()->r[1];
    if (r0_1 != 0) {
        u32 r0_2 = call_007259b4(r0, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1_1 = *gptr<u32>(r0 + 4u);
        if (r0_2 == r1_1) {
            u32 r0_3 = call_002fb328(r0_2, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
            gptr<Local_005374f0_r0_4> r0_4 = gptr<Local_005374f0_r0_4>(r0 + 0x67f4u);  // (from the original)
            u32 r3_4 = (r0_3 + 0x62080u) + 0x138u;  // (from the original)
            u32 r1_2 = r0_4->half_0;
            u32 r2_3 = *gptr<u16>(r3_4);
            if (r2_3 == r1_2) {
                r1_2 = *gptr<u8>(r3_4 + 0x14u);  // (from the original)
                r2_3 = r0_4->byte_14;
                if (r1_2 == r2_3) {
                    r0_6 = call_00100d2c(r3_4 + 2u, r0_4.addr() + 2u, 0x12u, r3_4);  // (from the original)
                    r1_2 = guest::cpu()->r[1];
                    r2_3 = guest::cpu()->r[2];
                    r3_4 = guest::cpu()->r[3];
                    if (r0_6 == 0) {
                        return r0_6;
                    }
                }
            }
            u32 r0_7 = call_00725978(r0, r1_2, r2_3, r3_4);
            *frame.at<u32>(0) = 0;
            *frame.at<u32>(4) = 0;
            u32 r0_8 = call_00467590(r0_7, guest::cpu()->r[1], 0u, 0u);
            r1_1 = guest::cpu()->r[1];
            u32 r2_4 = guest::cpu()->r[2];
            u32 r3_5 = guest::cpu()->r[3];
            if (r0_8 != 0) {
                return 0u;
            }
            u32 r0_9 = call_002fb328(r0_8, r1_1, r2_4, r3_5);
            u32 r0_11 = call_0071a23c(r0_9 + 0xa0u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
            r1_1 = guest::cpu()->r[1];
            u32 r2_6 = guest::cpu()->r[2];
            u32 r3_7 = guest::cpu()->r[3];
            if (r0_11 != 0) {
                call_0030f4fc(r0_11, frame.at(0).addr(), r2_6, r3_7);
                u32 r0_13 = call_002fe940(r0 + 0x67deu, frame.at(0).addr(), guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
                r1_1 = guest::cpu()->r[1];
                r2_6 = guest::cpu()->r[2];
                r3_7 = guest::cpu()->r[3];
                if (r0_13 != 0) {
                    return 0u;
                }
            }
            u32 r0_15 = call_00582d34(r0 + 0x1238u, r1_1, r2_6, r3_7);  // (from the original)
            u32 r0_16 = call_005ca6fc(r0_15, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
            u32 r0_17 = call_002bee04(r0_16, r0, frame.at(0x30).addr(), frame.at(0x34).addr());  // (from the original)
            u32 r2_10 = guest::cpu()->r[2];
            u32 r3_11 = guest::cpu()->r[3];
            if (r0_17 != 0) {
                call_002beb4c(r0_16, r0_17, r0, r1);
                r1_2 = guest::cpu()->r[1];
            } else {
                u32 r0_18 = call_0071d664(r0_16, r0_17, r2_10, r3_11);
                u32 r3_12 = guest::cpu()->r[3];
                if (r0_18 >> 0x1f == (r0_18 & (r0_18 ^ r0_18)) >> 0x1f) {  // (from the original)
                    u32 r0_19 = call_002bedd8(r0_16, r0_18 & 0xffu, guest::cpu()->r[2], r3_12);  // (from the original)
                    u32 r0_20 = call_0071d5b8(r0_19, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
                    u32 r0_21 = call_002bedd8(r0_16, r0_18 & 0xffu, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
                    u32 r0_22 = call_002be920(r0_21, r0_20, guest::cpu()->r[2], guest::cpu()->r[3]);
                    r1_1 = r0_22;
                } else {
                    u32 r0_23 = call_002beb90(r0_16, frame.at(0x30).addr(), frame.at(0x34).addr(), r3_12);  // (from the original)
                    r1_1 = r0_23;
                    if (r0_23 == 0) {
                        guest::cpu()->r[1] = r1_1;
                        return 0u;
                    }
                }
                *frame.at<u32>(0) = r2;
                call_002bea00(r0_16, r1_1, r0, r1);
                r1_2 = guest::cpu()->r[1];
            }
            guest::cpu()->r[1] = r1_2;
            return 1u;
        }
    }
    guest::cpu()->r[1] = r1_1;
    return 0u;
}

}  // namespace d_005374f0
GUEST_EXPORT_FRAMED(0x005374f0, d_005374f0::f_005374f0, 0x43f0);  // pushes {r4, r5, r6, r7, r8, r9, lr} first, as the original

// f_005376d4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005376d4 {

inline constexpr guest::Function<0x005ca6fc, u32(u32, u32)> call_005ca6fc;  // (from the original)

u32 f_005376d4() {
    return call_005ca6fc(guest::cpu()->r[0], guest::cpu()->r[1]);
}

}  // namespace d_005376d4
GUEST_EXPORT(0x005376d4, d_005376d4::f_005376d4);

// f_005376d8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005376d8 {

struct __attribute__((packed)) Local_005376d8_r0_1 {
    u8 unknown_0[0xa0];  // (not used here)
    u8 byte_a0;
    u8 byte_a1;
};
GUEST_OFFSET(Local_005376d8_r0_1, byte_a0, 0xa0);  // (from the original)
GUEST_OFFSET(Local_005376d8_r0_1, byte_a1, 0xa1);  // (from the original)

inline guest::global<u32, 0x00952620> global_00952620;  // (from the original)

u32 f_005376d8() {
    gptr<Local_005376d8_r0_1> r0_1 = gptr<Local_005376d8_r0_1>(*global_00952620);
    if (r0_1.addr() == 0 || r0_1->byte_a1 == 0) {
        r0_1 = gptr<Local_005376d8_r0_1>(0u);
    }
    u32 r0_2 = r0_1->byte_a0;
    return r0_2 >= 0x10u ? 0u : 0x10u - r0_2;  // (from the original)
}

}  // namespace d_005376d8
GUEST_EXPORT(0x005376d8, d_005376d8::f_005376d8);

// f_005377fc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005377fc {

inline constexpr guest::Function<0x002fb328, u32(u32, u32, u32, u32)> call_002fb328;  // (from the original)
inline constexpr guest::Function<0x003355ac, u32(u32, u32, u32, u32)> call_003355ac;  // (from the original)
inline constexpr guest::Function<0x003506c0, u32(u32, u32, u32, u32)> call_003506c0;  // (from the original)

void f_005377fc(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 r0_1 = call_003506c0(r0, r1, r2, r3);
    u32 r1_1 = guest::cpu()->r[1];
    u32 r0_2 = call_002fb328(r0_1, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
    *frame.at<u32>(0) = r0_1;
    *frame.at<u32>(4) = r1_1;
    call_003355ac(r2, r0, r1, r0_2 + 0x6e29au);  // (from the original)
}

}  // namespace d_005377fc
GUEST_EXPORT_FRAMED(0x005377fc, d_005377fc::f_005377fc, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_0053784c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0053784c {

inline constexpr guest::Function<0x0023bc64, u32(u32, u32, u32, u32)> call_0023bc64;  // (from the original)
inline constexpr guest::Function<0x002fb918, u32(u32, u32, u32, u32)> call_002fb918;  // (from the original)
inline constexpr guest::Function<0x002ff8b0, u32(u32, u32, u32, u32)> call_002ff8b0;  // (from the original)

void f_0053784c(u32 r0, u32 r1, u32 r2, u32 r3) {
    for (;;) {
        u32 r0_1 = call_0023bc64(r0, r1, r2, r3);
        u32 r1_2 = guest::cpu()->r[1];
        u32 r2_1 = guest::cpu()->r[2];
        u32 r3_1 = guest::cpu()->r[3];
        if (r0_1 == 0) {
            return;
        }
        u32 r0_2 = call_002ff8b0(4u, r1_2, r2_1, r3_1);
        r0 = call_002fb918(r0_2, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = r0_2;
        if (!(1)) {
            break;
        }
        if (r1 >= 4u) {
            guest::cpu()->r[1] = r1;
            return;
        }
        u32 r1_1 = u32(*gptr<u16>(r0 + 0x22u)) & ~lsl_r(0x1000u, r1 & 0xff);  // (from the original)
        *gptr<u16>(r0 + 0x22u) = u16(r1_1);  // (from the original)
        guest::cpu()->r[1] = r1_1;
        return;
        guest::preempt();
    }
    guest::cpu()->r[1] = r1;
}

}  // namespace d_0053784c
GUEST_EXPORT_FRAMED(0x0053784c, d_0053784c::f_0053784c, 0x4010);  // pushes {r4, lr} first, as the original

// f_0053787c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0053787c {

struct __attribute__((packed)) Local_0053787c_r0_1 {
    u8 unknown_0[0xa0];  // (not used here)
    u8 byte_a0;
    u8 byte_a1;
};
GUEST_OFFSET(Local_0053787c_r0_1, byte_a0, 0xa0);  // (from the original)
GUEST_OFFSET(Local_0053787c_r0_1, byte_a1, 0xa1);  // (from the original)

inline guest::global<u32, 0x00952620> global_00952620;  // (from the original)
inline constexpr guest::Function<0x002e0d04, u32(u32, u32, u32)> call_002e0d04;  // (from the original)
inline constexpr guest::Function<0x002ff8b0, u32(u32, u32, u32, u32)> call_002ff8b0;  // (from the original)

void f_0053787c(u32 r0, u32 r1_unused, u32 r2) {
    gptr<Local_0053787c_r0_1> r0_1 = gptr<Local_0053787c_r0_1>(*global_00952620);
    u32 zf_1 = r0_1.addr() == 0;
    if (!zf_1) {
        r2 = r0_1->byte_a1;
        zf_1 = r2 == 0;
    }
    if (zf_1) {
        r0_1 = gptr<Local_0053787c_r0_1>(0u);
    }
    if (r0_1->byte_a0 < 0x10u) {  // (from the original)
        u32 r0_2 = call_002ff8b0(4u, 0u, r2, guest::cpu()->r[3]);
        u32 r1_1 = guest::cpu()->r[1];
        *gptr<u8>(r0 + 0x7dd7u) = u8(r0_2);  // (from the original)
        u32 r0_3 = *global_00952620;
        u32 zf_2 = r0_3 == 0;
        if (!zf_2) {
            r1_1 = *gptr<u8>(r0_3 + 0xa1u);  // (from the original)
            zf_2 = r1_1 == 0;
        }
        if (!zf_2) {
            call_002e0d04(r0_3, r1_1, guest::cpu()->r[2]);
        }
    }
}

}  // namespace d_0053787c
GUEST_EXPORT_FRAMED(0x0053787c, d_0053787c::f_0053787c, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_005378e4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005378e4 {

inline constexpr guest::Function<0x002bed24, u32(u32, u32)> call_002bed24;  // (from the original)
inline constexpr guest::Function<0x005ca6fc, u32(u32)> call_005ca6fc;  // (from the original)

void f_005378e4(u32 r0) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 r0_1 = call_005ca6fc(r0);
    if (r0_1 == 0) {
        return;
    }
    frame.release();
    call_002bed24(r0_1, guest::cpu()->r[1]);
    return;
}

}  // namespace d_005378e4
GUEST_EXPORT(0x005378e4, d_005378e4::f_005378e4);

// f_00537b6c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00537b6c {


u32 f_00537b6c(u32 r0) {
    u32 r0_1 = r0 - (0x55555555u & r0 >> 1);  // (from the original)
    u32 r0_3 = (0x33333333u & r0_1 >> 2) + (r0_1 & 0x33333333u);  // (from the original)
    u32 r0_4 = r0_3 + (r0_3 >> 4) & 0xf0f0f0fu;  // (from the original)
    u32 r0_5 = r0_4 + (r0_4 >> 8);
    guest::cpu()->r[1] = 0xf0f0f0fu;  // (from the original)
    return r0_5 + (r0_5 >> 0x10) & 0x3fu;  // (from the original)
}

}  // namespace d_00537b6c
GUEST_EXPORT(0x00537b6c, d_00537b6c::f_00537b6c);

// f_00537bb0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00537bb0 {


u32 f_00537bb0(u32 r0, u32 r1) {
    if (r0 == 0) {
        return ~0u;
    }
    do {
        r1 -= 1u;
        if (s32(r1) <= 0) {
            u32 r0_2 = (r0 & 0u - r0) - 1u;
            u32 r0_3 = r0_2 - (0x55555555u & r0_2 >> 1);  // (from the original)
            u32 r0_5 = (0x33333333u & r0_3 >> 2) + (r0_3 & 0x33333333u);  // (from the original)
            u32 r0_6 = r0_5 + (r0_5 >> 4) & 0xf0f0f0fu;  // (from the original)
            u32 r0_7 = r0_6 + (r0_6 >> 8);
            guest::cpu()->r[1] = 0xf0f0f0fu;  // (from the original)
            return r0_7 + (r0_7 >> 0x10) & 0x3fu;  // (from the original)
        }
        r0 &= r0 - 1u;
        guest::preempt();
    } while (r0 != 0);
    guest::cpu()->r[1] = r1;
    return ~0u;
}

}  // namespace d_00537bb0
GUEST_EXPORT(0x00537bb0, d_00537bb0::f_00537bb0);

// f_00537ce0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00537ce0 {

inline constexpr guest::Function<0x001435c8, u32(u32, u32, u32, u32)> call_001435c8;  // (from the original)
inline constexpr guest::Function<0x005380a8, u32(u32)> call_005380a8;  // (from the original)
inline constexpr guest::Function<0x0053814c, u32(u32)> call_0053814c;  // (from the original)

void f_00537ce0(u32 r0) {
    call_001435c8(r0 + 4u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r5_1 = *gptr<u32>(r0);
    if (r5_1 != 0) {
        call_005380a8(r5_1);
        call_0053814c(r5_1);
        *gptr<u32>(r0) = 0;
    }
}

}  // namespace d_00537ce0
GUEST_EXPORT_FRAMED(0x00537ce0, d_00537ce0::f_00537ce0, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_00537d70: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00537d70 {

struct __attribute__((packed)) Local_00537d70_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Local_00537d70_ea_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_00537d70_ea_1, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_00537d70_ea_1, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Local_00537d70_ea_1, word_c, 0xc);  // (from the original)

struct __attribute__((packed)) Local_00537d70_ea_2 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Local_00537d70_ea_2, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_00537d70_ea_2, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_00537d70_ea_2, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Local_00537d70_ea_2, word_c, 0xc);  // (from the original)

inline constexpr guest::Function<0x0013cbdc, u32(u32, u32, u32)> call_0013cbdc;  // (from the original)
inline constexpr guest::Function<0x0053ac4c, u32(u32, u32, u32, u32)> call_0053ac4c;  // (from the original)

void f_00537d70(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r14 = guest::cpu()->r[14];
    if (s32(r1) <= 0) {
        guest::cpu()->r[4] = r4;
        guest::cpu()->r[5] = r5;
        guest::cpu()->r[6] = r6;
        return;
    }
    gptr<Local_00537d70_ea_1> ea_1 = gptr<Local_00537d70_ea_1>(frame.at(0).addr());
    ea_1->word_0 = r4;
    ea_1->word_4 = r5;
    ea_1->word_8 = r6;
    ea_1->word_c = r14;
    r4 = r1;
    r5 = r0;
    r0 = call_0053ac4c(r4 << 2, r2, r2, r3);
    r3 = 0u;
    if (r0 == 0) {
        r0 = r3;
    } else {
        r1 = 0u;
        if (r4 >= 0u && r4 != 0) {
            do {
                u32 res_1 = r0 + (r1 << 2);
                r1 += 1u;
                if (res_1 != 0) {
                    *gptr<u32>(res_1) = r3;
                }
                guest::preempt();
            } while (r1 < r4);
        }
    }
    *gptr<u32>(r5) = r0;
    gptr<Local_00537d70_ea_2> ea_2 = gptr<Local_00537d70_ea_2>(frame.at(0).addr());
    u32 r4_1 = ea_2->word_0;
    u32 r5_1 = ea_2->word_4;
    u32 r6_1 = ea_2->word_8;
    r14 = ea_2->word_c;
    guest::cpu()->r[4] = r4_1;
    guest::cpu()->r[5] = r5_1;
    guest::cpu()->r[6] = r6_1;
    frame.release();
    call_0013cbdc(r5 + 4u, r0, r4);
    return;
}

}  // namespace d_00537d70
GUEST_EXPORT(0x00537d70, d_00537d70::f_00537d70);

// f_00537dd8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00537dd8 {

struct __attribute__((packed)) Object_00537dd8_0 {
    u32 word_0;
    u8 unknown_4[0x4];  // (not used here)
    u32 word_8;
    u16 half_c;
    u8 unknown_e[0x2];  // (not used here)
    u32 word_10;
    u16 half_14;
    u8 unknown_16[0x2];  // (not used here)
    u32 word_18;
    u32 word_1c;
    u32 word_20;
    u8 unknown_24[0xc];  // (not used here)
    u32 word_30;
    u32 word_34;
};
GUEST_OFFSET(Object_00537dd8_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_00537dd8_0, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_00537dd8_0, half_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_00537dd8_0, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Object_00537dd8_0, half_14, 0x14);  // (from the original)
GUEST_OFFSET(Object_00537dd8_0, word_18, 0x18);  // (from the original)
GUEST_OFFSET(Object_00537dd8_0, word_1c, 0x1c);  // (from the original)
GUEST_OFFSET(Object_00537dd8_0, word_20, 0x20);  // (from the original)
GUEST_OFFSET(Object_00537dd8_0, word_30, 0x30);  // (from the original)
GUEST_OFFSET(Object_00537dd8_0, word_34, 0x34);  // (from the original)


void f_00537dd8(gptr<Object_00537dd8_0> arg0) {
    arg0->word_0 = 0;
    arg0->word_8 = 0;
    arg0->half_c = 0;
    arg0->word_10 = 0;
    arg0->half_14 = 0;
    arg0->word_18 = 0;
    arg0->word_1c = 0;
    arg0->word_20 = ~0u;
    arg0->word_30 = 0;
    arg0->word_34 = 0;
}

}  // namespace d_00537dd8
GUEST_EXPORT(0x00537dd8, d_00537dd8::f_00537dd8);

// f_00537e0c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00537e0c {

inline constexpr guest::Function<0x001435c8, u32(u32, u32, u32, u32)> call_001435c8;  // (from the original)
inline constexpr guest::Function<0x00143604, u32(u32, u32)> call_00143604;  // (from the original)
inline constexpr guest::Function<0x005380a8, u32(u32, u32)> call_005380a8;  // (from the original)
inline constexpr guest::Function<0x0053814c, u32(u32, u32)> call_0053814c;  // (from the original)

u32 f_00537e0c(u32 r0, u32 r1) {
    call_001435c8(r0 + 4u, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r1_1 = guest::cpu()->r[1];
    u32 r5_1 = *gptr<u32>(r0);
    if (r5_1 != 0) {
        call_005380a8(r5_1, r1_1);
        call_0053814c(r5_1, guest::cpu()->r[1]);
        r1_1 = 0u;
        *gptr<u32>(r0) = r1_1;
    }
    u32 r0_2 = r0 + 4u;
    call_001435c8(r0_2, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_3 = call_00143604(r0_2, guest::cpu()->r[1]);
    return r0_3 - 4u;
}

}  // namespace d_00537e0c
GUEST_EXPORT_FRAMED(0x00537e0c, d_00537e0c::f_00537e0c, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_00537e98: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00537e98 {

inline constexpr guest::Function<0x0053ac90, u32(u32, u32, u32, u32)> call_0053ac90;  // (from the original)

u32 f_00537e98(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 res_1 = r1;
    u32 vf_1 = (r1 & (r1 ^ res_1)) >> 0x1f;  // (from the original)
    u32 r6 = res_1;
    r1 = r2;
    u32 r5 = r0;
    if (res_1 != 0 && res_1 >> 0x1f == vf_1) {  // (from the original)
        u32 r4 = r6 << 2;
        r0 = call_0053ac90(r4, r1, r3, r3);
        r1 = guest::cpu()->r[1];
        r2 = 0u;
        if (r0 == 0) {
            r0 = r2;
        } else {
            r1 = 0u;
            if (r4 >= 0u && r4 != 0) {
                do {
                    u32 res_2 = r0 + r1;
                    r1 += 1u;
                    if (res_2 != 0) {
                        *gptr<u8>(res_2) = u8(r2);
                    }
                    guest::preempt();
                } while (r1 < r4);
            }
        }
        if (s32(r6) > 0 && r0 != 0) {
            *gptr<u32>(r5 + 8u) = r0;
            *gptr<u32>(r5) = r2;
            *gptr<u32>(r5 + 4) = r6;
        }
    }
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_00537e98
GUEST_EXPORT_FRAMED(0x00537e98, d_00537e98::f_00537e98, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_00538024: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00538024 {

struct __attribute__((packed)) Object_00538024_0 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Object_00538024_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_00538024_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_00538024_0, word_8, 0x8);  // (from the original)

struct __attribute__((packed)) Local_00538024_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Local_00538024_ea_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_00538024_ea_1, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_00538024_ea_1, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Local_00538024_ea_1, word_c, 0xc);  // (from the original)

struct __attribute__((packed)) Local_00538024_ea_2 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Local_00538024_ea_2, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_00538024_ea_2, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_00538024_ea_2, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Local_00538024_ea_2, word_c, 0xc);  // (from the original)

inline constexpr guest::Function<0x001348cc, u32(u32, u32, u32, u32)> call_001348cc;  // (from the original)

void f_00538024(gptr<Object_00538024_0> arg0, u32 r1, u32 r2) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r14 = guest::cpu()->r[14];
    if (s32(r1) < 0) {
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[4] = r4;
        guest::cpu()->r[5] = r5;
        guest::cpu()->r[6] = r6;
        return;
    }
    gptr<Local_00538024_ea_1> ea_1 = gptr<Local_00538024_ea_1>(frame.at(0).addr());
    ea_1->word_0 = r4;
    ea_1->word_4 = r5;
    ea_1->word_8 = r6;
    ea_1->word_c = r14;
    u32 r0_1 = arg0->word_0;
    u32 r1_1 = arg0->word_4;
    u32 r2_1 = r0_1 + 1u;
    u32 res_1 = r1_1 - r2_1;
    u32 nf_1 = res_1 >> 0x1f;  // (from the original)
    u32 zf_1 = res_1 == 0;
    u32 vf_1 = ((r1_1 ^ r2_1) & (r1_1 ^ res_1)) >> 0x1f;  // (from the original)
    if (nf_1 == vf_1) {
        u32 res_2 = r0_1 - r1;
        nf_1 = res_2 >> 0x1f;  // (from the original)
        zf_1 = res_2 == 0;
        vf_1 = ((r0_1 ^ r1) & (r0_1 ^ res_2)) >> 0x1f;  // (from the original)
    }
    if (nf_1 == vf_1) {
        if (!zf_1 && nf_1 == vf_1) {
            u32 r1_2 = arg0->word_8;
            u32 r3_1 = r1 + 1u;
            call_001348cc(r1_2 + (r3_1 << 2), r1_2 + (r1 << 2), (r0_1 - r1) << 2, r3_1);
            r1_1 = guest::cpu()->r[1];
        }
        *gptr<u32>(arg0->word_8 + (r1 << 2)) = r2;
        arg0->word_0 = arg0->word_0 + 1u;
    }
    gptr<Local_00538024_ea_2> ea_2 = gptr<Local_00538024_ea_2>(frame.at(0).addr());
    u32 r4_1 = ea_2->word_0;
    u32 r5_1 = ea_2->word_4;
    u32 r6_1 = ea_2->word_8;
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->r[4] = r4_1;
    guest::cpu()->r[5] = r5_1;
    guest::cpu()->r[6] = r6_1;
}

}  // namespace d_00538024
GUEST_EXPORT(0x00538024, d_00538024::f_00538024);

// f_00538088: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00538088 {

struct __attribute__((packed)) Object_00538088_0 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Object_00538088_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_00538088_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_00538088_0, word_8, 0x8);  // (from the original)


void f_00538088(gptr<Object_00538088_0> arg0, u32 r1, u32 r2) {
    if (s32(r1) <= 0 || r2 == 0) {
        return;
    }
    arg0->word_0 = 0;
    arg0->word_4 = r1;
    arg0->word_8 = r2;
}

}  // namespace d_00538088
GUEST_EXPORT(0x00538088, d_00538088::f_00538088);

// f_00538188: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00538188 {

inline constexpr guest::Function<0x00135748, u32(u32, u32)> call_00135748;  // (from the original)

void f_00538188(u32 r0) {
    call_00135748(r0 + 0x10u, guest::cpu()->r[1]);  // (from the original)
}

}  // namespace d_00538188
GUEST_EXPORT(0x00538188, d_00538188::f_00538188);

// f_00538274: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00538274 {

inline constexpr guest::Function<0x001357ec, u32(u32, u32)> call_001357ec;  // (from the original)

u32 f_00538274(u32 r0) {
    return call_001357ec(r0 + 0x10u, guest::cpu()->r[1]);  // (from the original)
}

}  // namespace d_00538274
GUEST_EXPORT(0x00538274, d_00538274::f_00538274);

// f_0053827c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0053827c {

inline constexpr guest::Function<0x0012f154, u32(u32)> call_0012f154;  // (from the original)
inline constexpr guest::Function<0x0053d490, u32(u32, u32, u32, u32)> call_0053d490;  // (from the original)

u32 f_0053827c(u32 r0, u32 r1) {
    u32 r0_1 = call_0053d490(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    *gptr<u32>(r0_1) = 0x903a08;  // (from the original)
    u32 r0_2 = r0_1 + 0x10u;  // (from the original)
    *gptr<u32>(r0_2) = 0;
    call_0012f154(r0_2);
    return r0_1;
}

}  // namespace d_0053827c
GUEST_EXPORT_FRAMED(0x0053827c, d_0053827c::f_0053827c, 0x4010);  // pushes {r4, lr} first, as the original

// f_005382c4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005382c4 {

inline constexpr guest::Function<0x0053d530, u32(u32, u32)> call_0053d530;  // (from the original)

u32 f_005382c4(gptr<pead__CriticalSection> arg0) {
    arg0->word_0 = 0x903a08;  // (from the original)
    return call_0053d530(arg0.addr(), 0x903a08u);  // (from the original)
}

}  // namespace d_005382c4
GUEST_EXPORT(0x005382c4, d_005382c4::f_005382c4);

// f_0053ac4c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0053ac4c {

inline guest::global<u32, 0x0097d40c> global_0097d40c;  // (from the original)
inline constexpr guest::Function<0x00749010, u32(u32, u32, u32, u32)> call_00749010;  // (from the original)

u32 f_0053ac4c(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 r0_1 = r1;
    if (r1 == 0) {
        r0_1 = call_00749010(*global_0097d40c, r1, r2, r3);
        if (r0_1 == 0) {
            return r0_1;
        }
    }
    u32 r3_1 = *gptr<u32>(*gptr<u32>(r0_1) + 0x18u);  // (from the original)
    // virtual function 6 of r0_1
    frame.release();
    return guest::call_address<u32>(r3_1, r0_1, r0, 4u, r3_1);
}

}  // namespace d_0053ac4c
GUEST_EXPORT(0x0053ac4c, d_0053ac4c::f_0053ac4c);

// f_0053ac90: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0053ac90 {

inline guest::global<u32, 0x0097d40c> global_0097d40c;  // (from the original)
inline constexpr guest::Function<0x00749010, u32(u32, u32, u32, u32)> call_00749010;  // (from the original)

u32 f_0053ac90(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 r0_1 = r1;
    if (r1 == 0) {
        r0_1 = call_00749010(*global_0097d40c, r1, r2, r3);
        if (r0_1 == 0) {
            return r0_1;
        }
    }
    u32 r3_1 = *gptr<u32>(*gptr<u32>(r0_1) + 0x18u);  // (from the original)
    // virtual function 6 of r0_1
    frame.release();
    return guest::call_address<u32>(r3_1, r0_1, r0, r2, r3_1);
}

}  // namespace d_0053ac90
GUEST_EXPORT(0x0053ac90, d_0053ac90::f_0053ac90);

// f_0053acd8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0053acd8 {

struct __attribute__((packed)) Object_0053acd8_0 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Object_0053acd8_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_0053acd8_0, word_8, 0x8);  // (from the original)

struct __attribute__((packed)) Local_0053acd8_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Local_0053acd8_ea_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_0053acd8_ea_1, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_0053acd8_ea_1, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Local_0053acd8_ea_1, word_c, 0xc);  // (from the original)

struct __attribute__((packed)) Local_0053acd8_ea_2 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Local_0053acd8_ea_2, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_0053acd8_ea_2, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_0053acd8_ea_2, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Local_0053acd8_ea_2, word_c, 0xc);  // (from the original)

struct __attribute__((packed)) Local_0053acd8_ea_3 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_0053acd8_ea_3, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_0053acd8_ea_3, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_0053acd8_ea_3, word_8, 0x8);  // (from the original)

inline constexpr guest::Function<0x00100e5d, u32(u32, u32, u32, u32)> call_00100e5c;  // (from the original)

void f_0053acd8(gptr<Object_0053acd8_0> arg0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x20);  // the original's stack frame
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r14 = guest::cpu()->r[14];
    gptr<Local_0053acd8_ea_3> ea_3 = gptr<Local_0053acd8_ea_3>(0u);
    u32 r4_2 = 0;
    u32 r5_2 = 0;
    u32 r6_1 = 0;
    u32 v_1 = 0;
    gptr<Local_0053acd8_ea_1> ea_1 = gptr<Local_0053acd8_ea_1>(frame.at(0x10).addr());  // (from the original)
    ea_1->word_0 = arg0.addr();
    ea_1->word_4 = r1;
    ea_1->word_8 = r2;
    ea_1->word_c = r3;
    gptr<Local_0053acd8_ea_2> ea_2 = gptr<Local_0053acd8_ea_2>(frame.at(0).addr());
    ea_2->word_0 = r4;
    ea_2->word_4 = r5;
    ea_2->word_8 = r6;
    ea_2->word_c = r14;
    u32 r5_1 = arg0->word_4;
    u32 r2_1 = *frame.at<u32>(0x14);  // (from the original)
    u32 r4_1 = arg0->word_8;
    u32 r0_1 = call_00100e5c(r5_1, r4_1, r2_1, frame.at(0x18).addr());  // (from the original)
    if (r0_1 >> 0x1f == (r0_1 & (r0_1 ^ r0_1)) >> 0x1f && s32(r0_1) < s32(r4_1)) {  // (from the original)
        ea_3 = gptr<Local_0053acd8_ea_3>(frame.at(0).addr());
        r4_2 = ea_3->word_0;
        r5_2 = ea_3->word_4;
        r6_1 = ea_3->word_8;
        v_1 = *frame.at<u32>(0xc);  // (from the original)
        guest::cpu()->r[4] = r4_2;
        guest::cpu()->r[5] = r5_2;
        guest::cpu()->r[6] = r6_1;
        return;
    }
    *gptr<u8>(r5_1 + r4_1 - 1u) = 0;
    ea_3 = gptr<Local_0053acd8_ea_3>(frame.at(0).addr());
    r4_2 = ea_3->word_0;
    r5_2 = ea_3->word_4;
    r6_1 = ea_3->word_8;
    v_1 = *frame.at<u32>(0xc);  // (from the original)
    guest::cpu()->r[4] = r4_2;
    guest::cpu()->r[5] = r5_2;
    guest::cpu()->r[6] = r6_1;
}

}  // namespace d_0053acd8
GUEST_EXPORT(0x0053acd8, d_0053acd8::f_0053acd8);

// f_0053ad24: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0053ad24 {

struct __attribute__((packed)) Object_0053ad24_0 {
    u8 unknown_0[0x6c];  // (not used here)
    u32 word_6c;
};
GUEST_OFFSET(Object_0053ad24_0, word_6c, 0x6c);  // (from the original)

struct __attribute__((packed)) Local_0053ad24_r5_1 {
    u8 unknown_0[0x8];  // (not used here)
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Local_0053ad24_r5_1, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Local_0053ad24_r5_1, word_c, 0xc);  // (from the original)

inline constexpr guest::Function<0x00538188, u32(u32)> call_00538188;  // (from the original)
inline constexpr guest::Function<0x00538274, u32(u32, u32)> call_00538274;  // (from the original)
inline constexpr guest::Function<0x0053d268, u32(u32, u32)> call_0053d268;  // (from the original)

void f_0053ad24(gptr<Object_0053ad24_0> arg0, u32 r1) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 r0_1 = arg0.addr() + 0x50u;  // (from the original)
    u32 r4_1 = 0u;
    u32 r1_1 = arg0->word_6c & 1u;
    if (r1_1 != 0) {
        r1_1 = 1u;
    }
    if (r1_1 != 0) {
        r4_1 = r0_1;
        call_00538188(r0_1);
    }
    gptr<Local_0053ad24_r5_1> r5_1 = gptr<Local_0053ad24_r5_1>(arg0.addr() + 0x3cu);  // (from the original)
    u32 r1_2 = r5_1->word_c + r1;
    call_0053d268(r5_1.addr(), r1_2);
    r5_1->word_8 = r5_1->word_8 + 1u;
    if (r4_1 != 0) {
        frame.release();
        call_00538274(r4_1, r1_2);
        return;
    }
}

}  // namespace d_0053ad24
GUEST_EXPORT(0x0053ad24, d_0053ad24::f_0053ad24);

// f_0053ad94: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0053ad94 {

struct __attribute__((packed)) Object_0053ad94_0 {
    u8 unknown_0[0x44];  // (not used here)
    u32 word_44;
    u32 word_48;
    u8 unknown_4c[0x20];  // (not used here)
    u32 word_6c;
};
GUEST_OFFSET(Object_0053ad94_0, word_44, 0x44);  // (from the original)
GUEST_OFFSET(Object_0053ad94_0, word_48, 0x48);  // (from the original)
GUEST_OFFSET(Object_0053ad94_0, word_6c, 0x6c);  // (from the original)

inline constexpr guest::Function<0x00538188, u32(u32, u32)> call_00538188;  // (from the original)
inline constexpr guest::Function<0x00538274, u32(u32, u32)> call_00538274;  // (from the original)
inline constexpr guest::Function<0x0053d284, u32(u32, u32)> call_0053d284;  // (from the original)

void f_0053ad94(gptr<Object_0053ad94_0> arg0, u32 r1) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 r0_1 = arg0.addr() + 0x50u;  // (from the original)
    u32 r5_1 = 0u;
    u32 r1_1 = arg0->word_6c & 1u;
    if (r1_1 != 0) {
        r1_1 = 1u;
    }
    if (r1_1 != 0) {
        r5_1 = r0_1;
        call_00538188(r0_1, r1_1);
        r1_1 = guest::cpu()->r[1];
    }
    call_0053d284(arg0->word_48 + r1, r1_1);
    u32 r1_2 = guest::cpu()->r[1];
    arg0->word_44 = arg0->word_44 - 1u;
    if (r5_1 != 0) {
        frame.release();
        call_00538274(r5_1, r1_2);
        return;
    }
    guest::cpu()->r[1] = r1_2;
}

}  // namespace d_0053ad94
GUEST_EXPORT(0x0053ad94, d_0053ad94::f_0053ad94);

// f_0053af90: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0053af90 {

struct __attribute__((packed)) Local_0053af90_r4_1 {
    u8 unknown_0[0x2c];  // (not used here)
    u32 word_2c;
    u32 word_30;
    u8 unknown_34[0x38];  // (not used here)
    u32 word_6c;
};
GUEST_OFFSET(Local_0053af90_r4_1, word_2c, 0x2c);  // (from the original)
GUEST_OFFSET(Local_0053af90_r4_1, word_30, 0x30);  // (from the original)
GUEST_OFFSET(Local_0053af90_r4_1, word_6c, 0x6c);  // (from the original)

inline constexpr guest::Function<0x00538188, u32(u32, u32)> call_00538188;  // (from the original)
inline constexpr guest::Function<0x00538274, u32(u32, u32)> call_00538274;  // (from the original)
inline constexpr guest::Function<0x0053aef0, u32(u32, u32, u32)> call_0053aef0;  // (from the original)
inline constexpr guest::Function<0x0053d284, u32(u32, u32)> call_0053d284;  // (from the original)

void f_0053af90(gptr<pead__ExpHeap> arg0) {
    guest::StackFrame frame(0x18);  // the original's stack frame
    u32 r0_1 = arg0.addr() + 0x50u;  // (from the original)
    u32 r6_1 = 0u;
    u32 r1_1 = arg0->word_6c & 1u;
    if (r1_1 != 0) {
        r1_1 = 1u;
    }
    if (r1_1 != 0) {
        r6_1 = r0_1;
        call_00538188(r0_1, r1_1);
    }
    call_0053aef0(arg0.addr(), 0u, 0u);
    u32 r1_2 = guest::cpu()->r[1];
    gptr<Local_0053af90_r4_1> r4_1 = gptr<Local_0053af90_r4_1>(arg0->word_20);
    if (r4_1.addr() != 0) {
        u32 r0_2 = r4_1.addr() + 0x50u;  // (from the original)
        u32 r1_3 = r4_1->word_6c & 1u;
        if (r1_3 != 0) {
            r1_3 = 1u;
        }
        u32 r5_1 = 0u;
        if (r1_3 != 0) {
            r5_1 = r0_2;
            call_00538188(r0_2, r1_3);
            r1_3 = guest::cpu()->r[1];
        }
        call_0053d284(r4_1->word_30 + arg0.addr(), r1_3);
        r1_2 = guest::cpu()->r[1];
        r4_1->word_2c = r4_1->word_2c - 1u;
        if (r5_1 != 0) {
            call_00538274(r5_1, r1_2);
            r1_2 = guest::cpu()->r[1];
        }
    }
    if (r6_1 != 0) {
        frame.release();
        call_00538274(r6_1, r1_2);
        return;
    }
    guest::cpu()->r[1] = r1_2;
}

}  // namespace d_0053af90
GUEST_EXPORT(0x0053af90, d_0053af90::f_0053af90);

// f_0053b1b0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0053b1b0 {

inline constexpr guest::Function<0x005382c4, u32(u32, u32)> call_005382c4;  // (from the original)
inline constexpr guest::Function<0x0053d530, u32(u32, u32)> call_0053d530;  // (from the original)

u32 f_0053b1b0(gptr<pead__Heap> arg0) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    arg0->word_0 = 0x903bc0;  // (from the original)
    u32 r0_2 = call_005382c4(arg0.addr() + 0x50u, 0x903bc0u);  // (from the original)
    frame.release();
    return call_0053d530(r0_2 - 0x50u, guest::cpu()->r[1]);  // (from the original)
}

}  // namespace d_0053b1b0
GUEST_EXPORT(0x0053b1b0, d_0053b1b0::f_0053b1b0);

// f_0053b1d0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0053b1d0 {

struct __attribute__((packed)) Object_0053b1d0_0 {
    u32 word_0;
    u32 word_4;
    u8 byte_8;
};
GUEST_OFFSET(Object_0053b1d0_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_0053b1d0_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_0053b1d0_0, byte_8, 0x8);  // (from the original)

inline guest::global<u8, 0x0097e9fc> global_0097e9fc;  // (from the original)

void f_0053b1d0(gptr<Object_0053b1d0_0> arg0) {
    arg0->word_4 = 0;
    arg0->word_0 = 0;
    *global_0097e9fc = 0;
    arg0->byte_8 = 0;
    guest::cpu()->r[1] = 0u;
}

}  // namespace d_0053b1d0
GUEST_EXPORT(0x0053b1d0, d_0053b1d0::f_0053b1d0);

// f_0053b2e0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0053b2e0 {

struct __attribute__((packed)) Local_0053b2e0_r4_1 {
    u32 word_0;
};
GUEST_OFFSET(Local_0053b2e0_r4_1, word_0, 0x0);  // (from the original)

inline constexpr guest::Function<0x00127cf8, u32(u32, u32, u32, u32)> call_00127cf8;  // (from the original)
inline constexpr guest::Function<0x0012f204, u32(u32, u32)> call_0012f204;  // (from the original)
inline constexpr guest::Function<0x0053d490, u32(u32, u32, u32, u32)> call_0053d490;  // (from the original)

u32 f_0053b2e0(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x4);  // the original's stack frame
    *frame.at<u32>(0) = r3;
    u32 r0_1 = call_0053d490(r0, r1, r2, r3);
    gptr<Local_0053b2e0_r4_1> r4_1 = gptr<Local_0053b2e0_r4_1>(r0_1 + 0x10u);  // (from the original)
    *gptr<u32>(r0_1) = 0x903c20;  // (from the original)
    r4_1->word_0 = 0;
    *frame.at<u32>(0) = 0;
    u32 r0_3 = call_00127cf8(frame.at(0).addr(), r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    if ((r0_3 >> 0x1f) == 0) {  // (from the original)
        r0_3 = 0u;
        r4_1->word_0 = *frame.at<u32>(0);
    }
    u32 r1_1 = r0_3 >> 0x1f;  // (from the original)
    if (r1_1 != 0) {
        call_0012f204(r0_3, r1_1);
        r1_1 = guest::cpu()->r[1];
    }
    guest::cpu()->r[1] = r1_1;
    return r4_1.addr() - 0x10u;  // (from the original)
}

}  // namespace d_0053b2e0
GUEST_EXPORT_FRAMED(0x0053b2e0, d_0053b2e0::f_0053b2e0, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_0053b400: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0053b400 {

inline constexpr guest::Function<0x0012f204, u32(u32)> call_0012f204;  // (from the original)
inline constexpr guest::Function<0x0014f5dc, u32(u32, u32, u32, u32)> call_0014f5dc;  // (from the original)
inline constexpr guest::Function<0x0053d490, u32(u32, u32, u32, u32)> call_0053d490;  // (from the original)

u32 f_0053b400(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x4);  // the original's stack frame
    *frame.at<u32>(0) = r3;
    u32 r0_1 = call_0053d490(r0, r1, r2, r3);
    u32 r4_1 = r0_1 + 0x10u;  // (from the original)
    *gptr<u32>(r0_1) = 0x903c30;  // (from the original)
    *gptr<u32>(r0_1 + 0x10u) = 0;  // (from the original)
    *frame.at<u32>(0) = 0;
    u32 r0_3 = call_0014f5dc(frame.at(0).addr(), 0u, guest::cpu()->r[2], guest::cpu()->r[3]);
    if ((r0_3 >> 0x1f) == 0) {  // (from the original)
        r0_3 = 0u;
        *gptr<u32>(r4_1) = *frame.at<u32>(0);
    }
    if ((r0_3 >> 0x1f) != 0) {  // (from the original)
        call_0012f204(r0_3);
    }
    return r4_1 - 0x10u;  // (from the original)
}

}  // namespace d_0053b400
GUEST_EXPORT_FRAMED(0x0053b400, d_0053b400::f_0053b400, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_0053b4cc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0053b4cc {


void f_0053b4cc(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r7_4 = 0;
    u32 r5_2 = 0;
    u32 r12 = 0u;
    u32 r4 = r12;
    u32 r6 = *gptr<u32>(guest::cpu()->r[13] + 0x1cu);  // (from the original)
    if (r3 != 0 && r3 >> 0x1f == (r3 & (r3 ^ r3)) >> 0x1f) {  // (from the original)
        do {
            if (*gptr<s8>(r2) < 0x20) {  // (from the original)
                r4 += 1u;
                u32 res_1 = r4 - r3;
                r2 += 1u;
                if (res_1 >> 0x1f == ((r4 ^ r3) & (r4 ^ res_1)) >> 0x1f) {  // (from the original)
                    goto L_53b6e8;
                }
                if (*gptr<s8>(r2) < 0x20) {  // (from the original)
                    r4 += 1u;
                    u32 res_2 = r4 - r3;
                    r2 += 1u;
                    if (res_2 >> 0x1f == ((r4 ^ r3) & (r4 ^ res_2)) >> 0x1f) {  // (from the original)
                        goto L_53b6e8;
                    }
                }
            }
            if (s32(r3) >= s32(r4 + 4u)) {
                u32 v_1 = *gptr<s8>(r2);
                u32 r2_1 = r2 + 1u;
                u32 r7_1 = v_1 - 0x41u;  // (from the original)
                if (r7_1 > 0x19u) {  // (from the original)
                    r7_1 = v_1 - 0x61u <= 0x19u ? v_1 - 0x47u : v_1 - 0x30u <= 9u ? v_1 + 4u : (v_1 == 0x2bu || v_1 == 0x2du) ? 0x3eu : (v_1 == 0x2fu || v_1 == 0x5fu) ? 0x3fu : 0x40u;  // (from the original)
                }
                u32 v_2 = *gptr<s8>(r2_1);
                u32 r2_2 = r2_1 + 1u;
                u32 r7_2 = v_2 - 0x41u;  // (from the original)
                if (r7_2 > 0x19u) {  // (from the original)
                    r7_2 = v_2 - 0x61u <= 0x19u ? v_2 - 0x47u : v_2 - 0x30u <= 9u ? v_2 + 4u : (v_2 == 0x2bu || v_2 == 0x2du) ? 0x3eu : (v_2 == 0x2fu || v_2 == 0x5fu) ? 0x3fu : 0x40u;  // (from the original)
                }
                u32 v_3 = *gptr<s8>(r2_2);
                u32 r2_3 = r2_2 + 1u;
                u32 r9_1 = r7_2 & 0x3fu;  // (from the original)
                u32 r7_3 = v_3 - 0x41u;  // (from the original)
                if (r7_3 > 0x19u) {  // (from the original)
                    r7_3 = v_3 - 0x61u <= 0x19u ? v_3 - 0x47u : v_3 - 0x30u <= 9u ? v_3 + 4u : (v_3 == 0x2bu || v_3 == 0x2du) ? 0x3eu : (v_3 == 0x2fu || v_3 == 0x5fu) ? 0x3fu : 0x40u;  // (from the original)
                }
                u32 v_4 = *gptr<s8>(r2_3);
                r2 = r2_3 + 1u;
                r7_4 = r7_3 & 0x7fu;  // (from the original)
                u32 r5_1 = v_4 - 0x41u <= 0x19u ? v_4 - 0x41u : v_4 - 0x61u <= 0x19u ? v_4 - 0x47u : v_4 - 0x30u <= 9u ? v_4 + 4u : (v_4 == 0x2bu || v_4 == 0x2du) ? 0x3eu : (v_4 == 0x2fu || v_4 == 0x5fu) ? 0x3fu : 0x40u;  // (from the original)
                u32 res_3 = r1 - r12;
                r5_2 = r5_1 & 0x7fu;  // (from the original)
                if (res_3 != 0 && res_3 >> 0x1f == ((r1 ^ r12) & (r1 ^ res_3)) >> 0x1f) {  // (from the original)
                    *gptr<u8>(r0 + r12) = u8((r7_1 & 0x3fu) << 2 | r9_1 >> 4);  // (from the original)
                    r12 += 1u;
                    if (r7_4 >= 0x40u) {  // (from the original)
                        goto L_53b6dc;
                    }
                    if (s32(r1) > s32(r12)) {
                        *gptr<u8>(r0 + r12) = u8(r9_1 << 4 | r7_4 >> 2);
                        r12 += 1u;
                        if (r5_2 >= 0x40u) {  // (from the original)
                            goto L_53b6dc;
                        }
                        if (s32(r1) > s32(r12)) {
                            goto L_53b6d0;
                        }
                    }
                }
            }
            return;
L_53b6d0:;
            *gptr<u8>(r0 + r12) = u8(r5_2 | r7_4 << 6);
            r12 += 1u;
L_53b6dc:;
            r4 += 4u;
            guest::preempt();
        } while (s32(r4) < s32(r3));
    }
L_53b6e8:;
    if (r6 != 0) {
        *gptr<u32>(r6) = r12;
    }
}

}  // namespace d_0053b4cc
GUEST_EXPORT_FRAMED(0x0053b4cc, d_0053b4cc::f_0053b4cc, 0x7f0);  // pushes {r4, r5, r6, r7, r8, r9, r10} first, as the original

// f_0053b6fc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0053b6fc {

struct __attribute__((packed)) Local_0053b6fc_r12 {
    u8 byte_0;
    u8 byte_1;
    u8 byte_2;
};
GUEST_OFFSET(Local_0053b6fc_r12, byte_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_0053b6fc_r12, byte_1, 0x1);  // (from the original)
GUEST_OFFSET(Local_0053b6fc_r12, byte_2, 0x2);  // (from the original)


void f_0053b6fc(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 res_1 = 0;
    r3 = r3 == 0 ? 0x8c83a0u : 0x8c835cu;  // (from the original)
    u32 r12_1 = u64(s64(s32(0x55555556u)) * s32(r2)) >> 0x20;  // (from the original)
    u32 r12_2 = r12_1 - u32(s32(r12_1) >> 0x1f);  // (from the original)
    u32 r7 = r12_2 + (r12_2 << 1);
    u32 r6_1 = r7 + 2u;
    if (s32(r6_1) > 2) {
        u32 r5_1 = u64(s64(s32(0x55555556u)) * s32(r6_1)) >> 0x20;  // (from the original)
        gptr<Local_0053b6fc_r12> r12 = gptr<Local_0053b6fc_r12>(r1);
        u32 r4 = r0;
        u32 r5 = r5_1 - u32(s32(r5_1) >> 0x1f);  // (from the original)
        u32 r6 = r5;
        do {
            res_1 = r5 - 1u;
            r5 = res_1;
            *gptr<u8>(r4) = u8(u32(*gptr<u8>(r3 + (u32(r12->byte_0) >> 2))));
            *gptr<u8>(r4 + 1u) = u8(u32(*gptr<u8>(r3 + (u32(r12->byte_0) << 0x1e >> 0x1a | (u32(r12->byte_1) & 0xf0u) >> 4))));  // (from the original)
            *gptr<u8>(r4 + 2u) = u8(u32(*gptr<u8>(r3 + (u32(r12->byte_1) << 0x1c >> 0x1a | (u32(r12->byte_2) & 0xc0u) >> 6))));  // (from the original)
            u32 r8_1 = r12->byte_2;
            r12 = gptr<Local_0053b6fc_r12>(r12.addr() + 3u);
            *gptr<u8>(r4 + 3u) = u8(u32(*gptr<u8>(r3 + (r8_1 & 0x3fu))));  // (from the original)
            r4 += 4u;
            guest::preempt();
        } while (res_1 != 0);
        r0 += (r6 << 2);
        r1 += (r6 + (r6 << 1));
    }
    u32 r12_3 = r2 - r7;
    if (r12_3 != 1u) {
        if (r12_3 != 2u) {
            return;
        }
        *gptr<u8>(r0) = u8(u32(*gptr<u8>(r3 + (u32(*gptr<u8>(r1)) >> 2))));
        *gptr<u8>(r0 + 1u) = u8(u32(*gptr<u8>(r3 + (u32(*gptr<u8>(r1)) << 0x1e >> 0x1a | (u32(*gptr<u8>(r1 + 1u)) & 0xf0u) >> 4))));  // (from the original)
        *gptr<u8>(r0 + 2u) = u8(u32(*gptr<u8>(r3 + ((u32(*gptr<u8>(r1 + 1u)) & 0xfu) << 2))));  // (from the original)
    } else {
        *gptr<u8>(r0) = u8(u32(*gptr<u8>(r3 + (u32(*gptr<u8>(r1)) >> 2))));
        *gptr<u8>(r0 + 1u) = u8(u32(*gptr<u8>(r3 + ((u32(*gptr<u8>(r1)) & 3u) << 4))));
        *gptr<u8>(r0 + 2u) = 0x3d;  // (from the original)
    }
    *gptr<u8>(r0 + 3u) = 0x3d;  // (from the original)
}

}  // namespace d_0053b6fc
GUEST_EXPORT_FRAMED(0x0053b6fc, d_0053b6fc::f_0053b6fc, 0x3f0);  // pushes {r4, r5, r6, r7, r8, r9} first, as the original

// f_0053b844: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0053b844 {

inline constexpr guest::Function<0x0053d2b4, u32(u32, u32, u32, u32)> call_0053d2b4;  // (from the original)

u32 f_0053b844(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 r0_2 = call_0053d2b4(frame.at(0).addr(), r1, r2, r3);
    u32 r0_3 = *gptr<u32>(r0_2);
    u32 r0_4 = (r0_3 ^ r0_3 >> 0x1e) * 0x6c078965u + 1u;  // (from the original)
    *gptr<u32>(r0) = r0_4;
    u32 r0_5 = (r0_4 ^ r0_4 >> 0x1e) * 0x6c078965u + 2u;  // (from the original)
    *gptr<u32>(r0 + 4u) = r0_5;
    u32 r0_6 = (r0_5 ^ r0_5 >> 0x1e) * 0x6c078965u + 3u;  // (from the original)
    *gptr<u32>(r0 + 8u) = r0_6;
    u32 r0_7 = (r0_6 ^ r0_6 >> 0x1e) * 0x6c078965u + 4u;  // (from the original)
    *gptr<u32>(r0 + 0xcu) = r0_7;  // (from the original)
    guest::cpu()->r[1] = 0x6c078965u;  // (from the original)
    return r0_7;
}

}  // namespace d_0053b844
GUEST_EXPORT_FRAMED(0x0053b844, d_0053b844::f_0053b844, 0x4010);  // pushes {r4, lr} first, as the original

// f_0053bb14: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0053bb14 {

struct __attribute__((packed)) Object_0053bb14_0 {
    u8 unknown_0[0x50];  // (not used here)
    u32 word_50;
    u8 unknown_54[0x1c];  // (not used here)
    u32 word_70;
    u32 word_74;
    u32 word_78;
    u32 word_7c;
    u32 word_80;
    u32 word_84;
};
GUEST_OFFSET(Object_0053bb14_0, word_50, 0x50);  // (from the original)
GUEST_OFFSET(Object_0053bb14_0, word_70, 0x70);  // (from the original)
GUEST_OFFSET(Object_0053bb14_0, word_74, 0x74);  // (from the original)
GUEST_OFFSET(Object_0053bb14_0, word_78, 0x78);  // (from the original)
GUEST_OFFSET(Object_0053bb14_0, word_7c, 0x7c);  // (from the original)
GUEST_OFFSET(Object_0053bb14_0, word_80, 0x80);  // (from the original)
GUEST_OFFSET(Object_0053bb14_0, word_84, 0x84);  // (from the original)

struct __attribute__((packed)) Local_0053bb14_r0_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0053bb14_r0_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_0053bb14_r0_1, word_4, 0x4);  // (from the original)

inline constexpr guest::Function<0x00128e80, u32(u32, u32, u32, u32)> call_00128e80;  // (from the original)
inline constexpr guest::Function<0x0012f204, u32(u32, u32, u32, u32)> call_0012f204;  // (from the original)
inline constexpr guest::Function<0x00139504, u32(u32, u32, u32, u32)> call_00139504;  // (from the original)

u32 f_0053bb14(gptr<Object_0053bb14_0> arg0, u32 r1, float S0, float S1) {
    guest::StackFrame frame(0x34);  // the original's stack frame
    u32 r0 = arg0.addr();
    u32 r2_1 = 0;
    u32 r3_2 = 0;
    if (arg0->word_74 == 0) {
        u32 r12_1 = arg0->word_78;
        *frame.at<u32>(0x14) = r0;  // (from the original)
        float S0_1 = std::bit_cast<float>(arg0->word_80);
        float S1_1 = std::bit_cast<float>(arg0->word_84);
        *frame.at<u32>(0x20) = 4;  // (from the original)
        *frame.at<u32>(0x24) = 0x1394e4;  // (from the original)
        *frame.at<u32>(0x28) = 0x139500;  // (from the original)
        *frame.at<u32>(0x2c) = 0x1394f4;  // (from the original)
        *frame.at<u32>(0) = arg0->word_50 + arg0->word_7c;
        gptr<Local_0053bb14_r0_1> r0_1 = gptr<Local_0053bb14_r0_1>(frame.at(4).addr());
        r0_1->word_0 = std::bit_cast<u32>(S0_1);
        r0_1->word_4 = std::bit_cast<u32>(S1_1);
        *frame.at<u32>(0xc) = 0;  // (from the original)
        guest::cpu()->s[0] = S0_1;
        guest::cpu()->s[1] = S1_1;
        u32 r0_2 = call_00128e80(r12_1, frame.at(0x20).addr(), 0x53b9a0u, frame.at(0x14).addr());  // (from the original)
        r1 = guest::cpu()->r[1];
        r2_1 = guest::cpu()->r[2];
        r3_2 = guest::cpu()->r[3];
        S0 = guest::cpu()->s[0];
        S1 = guest::cpu()->s[1];
        if ((r0_2 & 0x7e00000u) != 0x600000u) {  // (from the original)
            u32 b_1 = r0_2 >> 0x1f;  // (from the original)
            r1 = b_1;
            if (b_1 != 0) {
                call_0012f204(r0_2, r1, r2_1, r3_2);
                r1 = guest::cpu()->r[1];
                r2_1 = guest::cpu()->r[2];
                r3_2 = guest::cpu()->r[3];
                S0 = guest::cpu()->s[0];
                S1 = guest::cpu()->s[1];
            }
        }
        if (!((r0_2 & 0x80000000u) >> 0x1f)) {  // (from the original)
            goto L_53bbc0;
        }
    }
    guest::cpu()->r[1] = r1;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return 0u;
L_53bbc0:;
    u32 r1_2 = *gptr<u32>(arg0->word_78);
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    u32 r0_4 = call_00139504(frame.at(0).addr(), r1_2, r2_1, r3_2);
    float S0_2 = guest::cpu()->s[0];
    float S1_2 = guest::cpu()->s[1];
    if ((r0_4 >> 0x1f) != 0) {  // (from the original)
        call_0012f204(r0_4, r1_2, r2_1, r3_2);
        S0_2 = guest::cpu()->s[0];
        S1_2 = guest::cpu()->s[1];
    }
    u32 r1_3 = arg0->word_74;
    arg0->word_70 = *frame.at<u32>(0);
    if (r1_3 == 0) {
        arg0->word_74 = 1;
    }
    guest::cpu()->r[1] = r1_3;
    guest::cpu()->s[0] = S0_2;
    guest::cpu()->s[1] = S1_2;
    return 1u;
}

}  // namespace d_0053bb14
GUEST_EXPORT_FRAMED(0x0053bb14, d_0053bb14::f_0053bb14, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_0053bc7c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0053bc7c {

struct __attribute__((packed)) Local_0053bc7c_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0053bc7c_ea_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_0053bc7c_ea_1, word_4, 0x4);  // (from the original)

struct __attribute__((packed)) Local_0053bc7c_ea_10 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0053bc7c_ea_10, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_0053bc7c_ea_10, word_4, 0x4);  // (from the original)

struct __attribute__((packed)) Local_0053bc7c_ea_11 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0053bc7c_ea_11, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_0053bc7c_ea_11, word_4, 0x4);  // (from the original)

struct __attribute__((packed)) Local_0053bc7c_r2_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0053bc7c_r2_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_0053bc7c_r2_1, word_4, 0x4);  // (from the original)

inline constexpr guest::Function<0x0012f204, u32(u32, u32, u32, u32)> call_0012f204;  // (from the original)
inline constexpr guest::Function<0x0013d00c, u32(u32, u32, u32, u32)> call_0013d00c;  // (from the original)
inline constexpr guest::Function<0x0013e164, u32(u32, u32, u32, u32)> call_0013e164;  // (from the original)
inline constexpr guest::Function<0x00537d70, u32(u32, u32, u32, u32)> call_00537d70;  // (from the original)
inline constexpr guest::Function<0x00537dd8, u32(u32, u32, u32, u32)> call_00537dd8;  // (from the original)
inline constexpr guest::Function<0x0053d490, u32(u32, u32, u32, u32)> call_0053d490;  // (from the original)

u32 f_0053bc7c(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x4);  // the original's stack frame
    *frame.at<u32>(0) = r3;
    u32 r0_1 = call_0053d490(r0, r1, r2, r3);
    gptr<Local_0053bc7c_ea_1> ea_1 = gptr<Local_0053bc7c_ea_1>(r0_1 + 0x10u);  // (from the original)
    ea_1->word_0 = 0x9039e0;  // (from the original)
    ea_1->word_4 = 0x8b06ac;  // (from the original)
    *gptr<u32>(r0_1) = 0x903c40;  // (from the original)
    u32 r0_3 = call_00537dd8(r0_1 + 0x18u, r0_1, 0x8b06acu, 0x9039e0u);  // (from the original)
    u32 r4_1 = r0_3 - 0x18u;  // (from the original)
    *gptr<u32>(r0_3 + 0x38u) = 0;  // (from the original)
    u32 ea_3 = r0_3 + 0x3cu;  // (from the original)
    *gptr<u32>(ea_3) = 0;
    *gptr<u32>(ea_3 + 4u) = 0;
    *gptr<u32>(ea_3 + 8u) = 0;
    *gptr<u32>(ea_3 + 0xcu) = 0;  // (from the original)
    gptr<Local_0053bc7c_r2_1> r2_1 = gptr<Local_0053bc7c_r2_1>(r4_1 + 0x6cu);  // (from the original)
    *gptr<u32>(r4_1 + 0x64u) = 0;  // (from the original)
    *gptr<u8>(r4_1 + 0x68u) = 1;  // (from the original)
    r2_1->word_0 = ~0x80000000u;  // (from the original)
    r2_1->word_4 = r3;
    *gptr<u32>(r4_1 + 0x74u) = 1;  // (from the original)
    gptr<Local_0053bc7c_ea_10> ea_10 = gptr<Local_0053bc7c_ea_10>(r4_1 + 0x78u);  // (from the original)
    ea_10->word_0 = r2;
    ea_10->word_4 = 0;
    u32 r0_5 = call_0013d00c(frame.at(0).addr(), *gptr<u32>(r2), r2_1.addr(), guest::cpu()->r[3]);
    u32 r2_2 = guest::cpu()->r[2];
    u32 r3_2 = guest::cpu()->r[3];
    u32 r1_2 = r0_5 >> 0x1f;  // (from the original)
    if (r1_2 != 0) {
        call_0012f204(r0_5, r1_2, r2_2, r3_2);
        r1_2 = guest::cpu()->r[1];
        r2_2 = guest::cpu()->r[2];
        r3_2 = guest::cpu()->r[3];
    }
    u32 r0_7 = call_0013e164(*frame.at<u32>(0), r1_2, r2_2, r3_2);
    gptr<Local_0053bc7c_ea_11> ea_11 = gptr<Local_0053bc7c_ea_11>(r4_1 + 0x80u);  // (from the original)
    ea_11->word_0 = r0_7;
    ea_11->word_4 = ~1u;
    *gptr<u32>(r4_1 + 0x5cu) = r4_1;  // (from the original)
    call_00537d70(r4_1 + 0x18u, 0x20u, r1, guest::cpu()->r[3]);  // (from the original)
    return r4_1;
}

}  // namespace d_0053bc7c
GUEST_EXPORT_FRAMED(0x0053bc7c, d_0053bc7c::f_0053bc7c, 0x43f0);  // pushes {r4, r5, r6, r7, r8, r9, lr} first, as the original

// f_0053c024: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0053c024 {

inline constexpr guest::Function<0x00537c28, u32(u32, u32, u32, u32)> call_00537c28;  // (from the original)

void f_0053c024(u32 r0, u32 r1) {
    guest::StackFrame frame(0xc);  // the original's stack frame
    *frame.at<u32>(0) = r0;
    *frame.at<u32>(4) = r1;
    call_00537c28(frame.at(0).addr(), r1, guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0053c024
GUEST_EXPORT_FRAMED(0x0053c024, d_0053c024::f_0053c024, 0x4000);  // pushes {lr} first, as the original

// f_0053c300: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0053c300 {

struct __attribute__((packed)) Object_0053c300_0 {
    u8 unknown_0[0x70];  // (not used here)
    u8 byte_70;
    u8 unknown_71[0xb];  // (not used here)
    u32 word_7c;
    u32 word_80;
    u8 unknown_84[0xc];  // (not used here)
    u32 word_90;
};
GUEST_OFFSET(Object_0053c300_0, byte_70, 0x70);  // (from the original)
GUEST_OFFSET(Object_0053c300_0, word_7c, 0x7c);  // (from the original)
GUEST_OFFSET(Object_0053c300_0, word_80, 0x80);  // (from the original)
GUEST_OFFSET(Object_0053c300_0, word_90, 0x90);  // (from the original)

struct __attribute__((packed)) Local_0053c300_r1_3 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Local_0053c300_r1_3, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_0053c300_r1_3, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_0053c300_r1_3, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Local_0053c300_r1_3, word_c, 0xc);  // (from the original)

struct __attribute__((packed)) Local_0053c300_r8_1 {
    u8 unknown_0[0x8];  // (not used here)
    u32 word_8;
};
GUEST_OFFSET(Local_0053c300_r8_1, word_8, 0x8);  // (from the original)

inline constexpr guest::Function<0x0053c670, u32(u32, u32)> call_0053c670;  // (from the original)
inline constexpr guest::Function<0x0053d268, u32(u32, u32)> call_0053d268;  // (from the original)
inline constexpr guest::Function<0x0053d284, u32(u32)> call_0053d284;  // (from the original)
inline constexpr guest::Function<0x00748d0c, u32(u32, u32, u32, u32)> call_00748d0c;  // (from the original)

u32 f_0053c300(gptr<Object_0053c300_0> arg0, u32 r1, u32 r2) {
    u32 r3_1 = arg0->byte_70;
    u32 r0_1 = call_00748d0c(arg0.addr(), r1, r2, r3_1);
    u32 r1_1 = guest::cpu()->r[1];
    if (r0_1 != 0) {
        u32 r0_2 = *gptr<u32>(r0_1 + 0xcu) + 0x10u + r0_1;  // (from the original)
        u32 res_1 = (r0_2 + r2 - 1u & ~(r2 - 1u)) - r0_2;
        u32 r6_1 = *gptr<u32>(r0_1 + 8u) - (r1 + res_1);
        *gptr<u32>(r0_1 + 0xcu) = res_1;  // (from the original)
        if (res_1 != 0) {
            *gptr<u32>(r0_1 + (res_1 + 0x10u) - 4u) = r0_1 + 1u;  // (from the original)
        }
        *gptr<u32>(r0_1 + 8u) = r1;
        call_0053d284(arg0->word_80 + r0_1);
        gptr<Local_0053c300_r8_1> r8_1 = gptr<Local_0053c300_r8_1>(arg0.addr() + 0x84u);  // (from the original)
        arg0->word_7c = arg0->word_7c - 1u;
        call_0053d268(r8_1.addr(), arg0->word_90 + r0_1);
        r1_1 = guest::cpu()->r[1];
        r8_1->word_8 = r8_1->word_8 + 1u;
        if (r6_1 > 0x10u) {  // (from the original)
            gptr<Local_0053c300_r1_3> r1_3 = gptr<Local_0053c300_r1_3>(*gptr<u32>(r0_1 + 0xcu) + 0x10u + r0_1 + r1);  // (from the original)
            if (r1_3.addr() != 0) {
                r1_3->word_0 = 0;
                r1_3->word_4 = 0;
                r1_3->word_8 = 0;
                r1_3->word_c = 0;
            }
            r1_3->word_8 = r6_1 - 0x10u;  // (from the original)
            call_0053c670(arg0.addr(), r1_3.addr());
            r1_1 = guest::cpu()->r[1];
        } else if (r6_1 != 0) {
            *gptr<u32>(r0_1 + 8u) = r1 + r6_1;
        }
        r0_1 = r0_1;
    }
    guest::cpu()->r[1] = r1_1;
    return r0_1;
}

}  // namespace d_0053c300
GUEST_EXPORT_FRAMED(0x0053c300, d_0053c300::f_0053c300, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_0053c568: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0053c568 {

struct __attribute__((packed)) Object_0053c568_0 {
    u8 unknown_0[0x70];  // (not used here)
    u8 byte_70;
    u8 unknown_71[0xf];  // (not used here)
    u32 word_80;
};
GUEST_OFFSET(Object_0053c568_0, byte_70, 0x70);  // (from the original)
GUEST_OFFSET(Object_0053c568_0, word_80, 0x80);  // (from the original)

struct __attribute__((packed)) Local_0053c568_r4_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Local_0053c568_r4_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_0053c568_r4_1, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_0053c568_r4_1, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Local_0053c568_r4_1, word_c, 0xc);  // (from the original)

struct __attribute__((packed)) Local_0053c568_r5_1 {
    u8 unknown_0[0x8];  // (not used here)
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Local_0053c568_r5_1, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Local_0053c568_r5_1, word_c, 0xc);  // (from the original)

struct __attribute__((packed)) Local_0053c568_r5_2 {
    u8 unknown_0[0x8];  // (not used here)
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Local_0053c568_r5_2, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Local_0053c568_r5_2, word_c, 0xc);  // (from the original)

inline constexpr guest::Function<0x0053d268, u32(u32, u32)> call_0053d268;  // (from the original)
inline constexpr guest::Function<0x0053d284, u32(u32)> call_0053d284;  // (from the original)
inline constexpr guest::Function<0x00748dd8, u32(u32, u32, u32, u32)> call_00748dd8;  // (from the original)

u32 f_0053c568(gptr<Object_0053c568_0> arg0, u32 r1, u32 r2) {
    u32 r0 = arg0.addr();
    u32 r2_2 = 0;
    u32 r1_3 = 0;
    u32 r3_1 = arg0->byte_70;
    u32 r0_1 = call_00748dd8(r0, r1, r2, r3_1);
    u32 r1_1 = guest::cpu()->r[1];
    if (r0_1 != 0) {
        u32 r1_2 = *gptr<u32>(r0_1 + 8u);
        u32 r0_2 = *gptr<u32>(r0_1 + 0xcu) + 0x10u;  // (from the original)
        u32 r2_1 = r1_2 - r1 + (r0_1 + r0_2);
        r2_2 = r2_1 - (r2_1 & ~(r2 - 1u)) + r1;
        r1_3 = r1_2 - r2_2;
        if (r1_3 <= 0x10u) {  // (from the original)
            goto L_53c610;
        }
        u32 r1_4 = r1_3 - 0x10u;  // (from the original)
        *gptr<u32>(r0_1 + 8u) = r1_4;
        gptr<Local_0053c568_r4_1> r4_1 = gptr<Local_0053c568_r4_1>(r0_2 + r0_1 + r1_4);
        if (r4_1.addr() != 0) {
            r4_1->word_0 = 0;
            r4_1->word_4 = 0;
            r4_1->word_8 = 0;
            r4_1->word_c = 0;
        }
        gptr<Local_0053c568_r5_1> r5_1 = gptr<Local_0053c568_r5_1>(r0 + 0x84u);  // (from the original)
        r4_1->word_8 = r2_2;
        call_0053d268(r5_1.addr(), r5_1->word_c + r4_1.addr());
        r1_1 = guest::cpu()->r[1];
        r5_1->word_8 = r5_1->word_8 + 1u;
        r0_1 = r4_1.addr();
    }
    guest::cpu()->r[1] = r1_1;
    return r0_1;
L_53c610:;
    *gptr<u32>(r0_1 + 0xcu) = r1_3;  // (from the original)
    if (r1_3 != 0) {
        *gptr<u32>(r0_1 + (r1_3 + 0x10u) - 4u) = r0_1 + 1u;  // (from the original)
    }
    *gptr<u32>(r0_1 + 8u) = r2_2;
    call_0053d284(arg0->word_80 + r0_1);
    u32 r0_4 = *gptr<u32>(r0 + 0x7cu) - 1u;  // (from the original)
    u32 ea_2 = r0 + 0x7cu;  // (from the original)
    *gptr<u32>(ea_2) = r0_4;
    gptr<Local_0053c568_r5_2> r5_2 = gptr<Local_0053c568_r5_2>(ea_2 + 8u);
    call_0053d268(r5_2.addr(), r5_2->word_c + r0_1);
    r5_2->word_8 = r5_2->word_8 + 1u;
    return r0_1;
}

}  // namespace d_0053c568
GUEST_EXPORT_FRAMED(0x0053c568, d_0053c568::f_0053c568, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_0053cd54: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0053cd54 {

inline constexpr guest::Function<0x00538188, u32(u32, u32, u32, u32)> call_00538188;  // (from the original)
inline constexpr guest::Function<0x00538274, u32(u32)> call_00538274;  // (from the original)
inline constexpr guest::Function<0x0053c7b8, u32(u32, u32, u32, u32)> call_0053c7b8;  // (from the original)
inline constexpr guest::Function<0x0053cef0, u32(u32, u32, u32, u32)> call_0053cef0;  // (from the original)

u32 f_0053cd54(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 r5_1 = r0;
    call_00538188(0xae70c0u, r1, r2, r3);  // (from the original)
    u32 r2_1 = guest::cpu()->r[2];
    u32 r3_1 = guest::cpu()->r[3];
    u32 r1_1 = r1 + 3u & ~3u;
    if (r1_1 <= 0xa4u) {  // (from the original)
        call_00538274(0xae70c0u);  // (from the original)
        return 0u;
    }
    if (r5_1 != 0) {
        *frame.at<u32>(0) = r1_1;
        *frame.at<u32>(4) = 1;
        *frame.at<u32>(8) = r3;
        u32 r0_1 = call_0053cef0(r5_1, r2, 0u, r5_1);
        r1_1 = guest::cpu()->r[1];
        r2_1 = guest::cpu()->r[2];
        r3_1 = guest::cpu()->r[3];
        r5_1 = r0_1;
    }
    call_0053c7b8(r5_1, r1_1, r2_1, r3_1);
    call_00538274(0xae70c0u);  // (from the original)
    return r5_1;
}

}  // namespace d_0053cd54
GUEST_EXPORT_FRAMED(0x0053cd54, d_0053cd54::f_0053cd54, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_0053cef0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0053cef0 {

struct __attribute__((packed)) Local_0053cef0_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_0053cef0_ea_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_0053cef0_ea_1, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_0053cef0_ea_1, word_8, 0x8);  // (from the original)

struct __attribute__((packed)) Local_0053cef0_ea_2 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0053cef0_ea_2, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_0053cef0_ea_2, word_4, 0x4);  // (from the original)

struct __attribute__((packed)) Local_0053cef0_ea_3 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0053cef0_ea_3, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_0053cef0_ea_3, word_4, 0x4);  // (from the original)

struct __attribute__((packed)) Local_0053cef0_r0_2 {
    u32 word_0;
    u8 unknown_4[0x8];  // (not used here)
    u32 word_c;
};
GUEST_OFFSET(Local_0053cef0_r0_2, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_0053cef0_r0_2, word_c, 0xc);  // (from the original)

inline constexpr guest::Function<0x00538188, u32(u32, u32)> call_00538188;  // (from the original)
inline constexpr guest::Function<0x00538274, u32(u32, u32)> call_00538274;  // (from the original)
inline constexpr guest::Function<0x0053b040, u32(u32, u32, u32, u32)> call_0053b040;  // (from the original)

u32 f_0053cef0(u32 r0, u32 r1) {
    guest::StackFrame frame(0xc);  // the original's stack frame
    gptr<Local_0053cef0_ea_1> ea_1 = gptr<Local_0053cef0_ea_1>(frame.at(0x18).addr());  // (from the original)
    u32 r4_1 = ea_1->word_0;
    u32 r5_1 = ea_1->word_4;
    u32 r12_1 = ea_1->word_8;
    *frame.at<u32>(0) = r4_1;
    *frame.at<u32>(4) = r5_1;
    *frame.at<u32>(8) = r12_1;
    u32 r0_1 = call_0053b040(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r5_2 = 0u;
    *gptr<u32>(r0_1) = 0x903c8c;  // (from the original)
    *gptr<u8>(r0_1 + 0x70u) = u8(r5_2);  // (from the original)
    gptr<Local_0053cef0_r0_2> r0_2 = gptr<Local_0053cef0_r0_2>(r0_1 + 0x74u);  // (from the original)
    u32 r1_1 = ~0u;
    gptr<Local_0053cef0_ea_2> ea_2 = gptr<Local_0053cef0_ea_2>(r0_2.addr() + 4u);
    ea_2->word_0 = r0_2.addr();
    ea_2->word_4 = r5_2;
    r0_2->word_c = r1_1;
    r0_2->word_0 = r0_2.addr();
    u32 r0_3 = r0_1 + 0x84u;  // (from the original)
    gptr<Local_0053cef0_ea_3> ea_3 = gptr<Local_0053cef0_ea_3>(r0_1 + 0x88u);  // (from the original)
    ea_3->word_0 = r0_3;
    ea_3->word_4 = r5_2;
    *gptr<u32>(r0_1 + 0x84u) = r0_3;  // (from the original)
    *gptr<u32>(r0_1 + 0x90u) = r1_1;  // (from the original)
    u32 r1_2 = r0_1 + 0x50u;  // (from the original)
    u32 r0_4 = *gptr<u32>(r0_1 + 0x6cu) & 1u;  // (from the original)
    if (r0_4 != 0) {
        r0_4 = 1u;
    }
    if (r0_4 != 0) {
        r5_2 = r1_2;
        call_00538188(r1_2, r1_2);
        r1_2 = guest::cpu()->r[1];
    }
    *gptr<u32>(r0_1 + 0x80u) = 0;  // (from the original)
    *gptr<u32>(r0_1 + 0x90u) = 0;  // (from the original)
    if (r5_2 != 0) {
        call_00538274(r5_2, r1_2);
        r1_2 = guest::cpu()->r[1];
    }
    guest::cpu()->r[1] = r1_2;
    return r0_1;
}

}  // namespace d_0053cef0
GUEST_EXPORT_FRAMED(0x0053cef0, d_0053cef0::f_0053cef0, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_0053cfe8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0053cfe8 {

struct __attribute__((packed)) Object_0053cfe8_0 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Object_0053cfe8_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_0053cfe8_0, word_4, 0x4);  // (from the original)

inline guest::global<u32, 0x0097d40c> global_0097d40c;  // (from the original)
inline guest::global<u32, 0x00ae70a4> global_00ae70a4;  // (from the original)
inline guest::global<u32, 0x00ae70a8> global_00ae70a8;  // (from the original)
inline guest::global<u32, 0x00ae70ac> global_00ae70ac;  // (from the original)
inline constexpr guest::Function<0x0053cd54, u32(u32, u32, u32, u32)> call_0053cd54;  // (from the original)

void f_0053cfe8(gptr<Object_0053cfe8_0> arg0) {
    guest::StackFrame frame(0xc);  // the original's stack frame
    u32 r5_1 = 0x97d414u;  // (from the original)
    *gptr<u32>(0x97d410u) = arg0.addr();  // (from the original)
    *gptr<u32>(r5_1 + 4u) = 0;
    u32 r0_1 = arg0->word_0;
    u32 r1_1 = arg0->word_4;
    *frame.at<u32>(4) = 0x8b069c;  // (from the original)
    *frame.at<u32>(0) = 0x9039e0;  // (from the original)
    u32 r0_2 = call_0053cd54(r0_1, r1_1, frame.at(0).addr(), 0u);
    u32 r2_2 = *global_00ae70a4;
    if (s32(r2_2) < s32(*global_00ae70a8)) {
        *gptr<u32>(*global_00ae70ac + (r2_2 << 2)) = r0_2;
        *global_00ae70a4 = *global_00ae70a4 + 1u;
    }
    *global_0097d40c = r5_1;
}

}  // namespace d_0053cfe8
GUEST_EXPORT_FRAMED(0x0053cfe8, d_0053cfe8::f_0053cfe8, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_0053d230: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0053d230 {

struct __attribute__((packed)) Object_0053d230_0 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Object_0053d230_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_0053d230_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_0053d230_0, word_8, 0x8);  // (from the original)

struct __attribute__((packed)) Local_0053d230_r3_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0053d230_r3_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_0053d230_r3_1, word_4, 0x4);  // (from the original)


void f_0053d230(gptr<Object_0053d230_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r1 = arg0->word_4;
    u32 r2 = 0u;
    if (r1 != r0) {
        do {
            gptr<Local_0053d230_r3_1> r3_1 = gptr<Local_0053d230_r3_1>(r1);
            r1 = *gptr<u32>(r1 + 4u);
            r3_1->word_4 = r2;
            r3_1->word_0 = r2;
            guest::preempt();
        } while (r1 != r0);
    }
    arg0->word_4 = r0;
    arg0->word_8 = r2;
    arg0->word_0 = r0;
    guest::cpu()->r[1] = r0 + 4u;
}

}  // namespace d_0053d230
GUEST_EXPORT(0x0053d230, d_0053d230::f_0053d230);

// f_0053d2cc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0053d2cc {


u32 f_0053d2cc(u32 r0, u32 r1) {
    u32 r2 = 0;
    u32 r12 = 0;
    u32 res_1 = 0;
    u32 r6 = 0x981e90u;  // (from the original)
    if (*gptr<u8>(r6) == 0) {
        u32 r5 = 0xa001u;  // (from the original)
        u32 r7 = 0xaf6bdcu;  // (from the original)
        u32 r4 = 0u;
        do {
            r2 = r4;
            r12 = 4u;
            do {
                u32 r3_1 = (r2 & 1u) == 0 ? r2 >> 1 : r5 ^ r2 >> 1;
                r2 = (r3_1 & 1u) == 0 ? r3_1 >> 1 : r5 ^ r3_1 >> 1;
                r12 -= 1u;
                guest::preempt();
            } while (r12 != 0);
            u32 r3_2 = r7 + (r4 << 1);
            r4 += 1u;
            *gptr<u16>(r3_2) = u16(r2);
            guest::preempt();
        } while (r4 < 0x100u);  // (from the original)
        *gptr<u8>(r6) = 1;
    }
    r12 = 0xaf6bdcu;  // (from the original)
    r2 = 0u;
    if (r1 != 0) {
        u32 r3 = r0 - 1u;
        if ((r1 & 1u) != 0) {
            u32 ea_1 = r3 + 1u;
            r3 = ea_1;
            r2 = *gptr<u16>(r12 + (u32(*gptr<u8>(ea_1)) << 1));
        }
        r1 >>= 1;
        if (r1 != 0) {
            do {
                u32 r0_1 = *gptr<u8>(r3 + 1u);
                u32 ea_3 = r3 + 2u;
                r3 = ea_3;
                res_1 = r1 - 1u;
                r1 = res_1;
                u32 r0_2 = u32(*gptr<u16>(r12 + (((r0_1 ^ r2) & 0xffu) << 1))) ^ r2 >> 8;  // (from the original)
                r2 = u32(*gptr<u16>(r12 + (((u32(*gptr<u8>(ea_3)) ^ r0_2) & 0xffu) << 1))) ^ r0_2 >> 8;  // (from the original)
                guest::preempt();
            } while (res_1 != 0);
        }
    }
    guest::cpu()->r[1] = r1;
    return uxth(r2);
}

}  // namespace d_0053d2cc
GUEST_EXPORT_FRAMED(0x0053d2cc, d_0053d2cc::f_0053d2cc, 0xf0);  // pushes {r4, r5, r6, r7} first, as the original

// f_0053d3b0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0053d3b0 {


u32 f_0053d3b0(u32 r0, u32 r1) {
    u32 r2 = 0;
    u32 res_1 = 0;
    u32 r6 = 0x97ea04u;  // (from the original)
    if (*gptr<u8>(r6) == 0) {
        u32 r5 = 0xedb88320u;  // (from the original)
        u32 r7 = 0xaf4990u;  // (from the original)
        u32 r12 = 0u;
        do {
            r2 = r12;
            u32 r4 = 4u;
            do {
                u32 r3_1 = (r2 & 1u) == 0 ? r2 >> 1 : r5 ^ r2 >> 1;
                r2 = (r3_1 & 1u) == 0 ? r3_1 >> 1 : r5 ^ r3_1 >> 1;
                r4 -= 1u;
                guest::preempt();
            } while (r4 != 0);
            *gptr<u32>(r7 + (r12 << 2)) = r2;
            r12 += 1u;
            guest::preempt();
        } while (r12 < 0x100u);  // (from the original)
        *gptr<u8>(r6) = 1;
    }
    u32 r3 = 0xaf4990u;  // (from the original)
    r2 = ~0u;
    if (r1 != 0) {
        r0 -= 1u;
        if ((r1 & 1u) != 0) {
            u32 ea_1 = r0 + 1u;
            r0 = ea_1;
            r2 = *gptr<u32>(r3 + (((u32(*gptr<u8>(ea_1)) ^ r2) & 0xffu) << 2)) ^ r2 >> 8;  // (from the original)
        }
        r1 >>= 1;
        if (r1 != 0) {
            do {
                res_1 = r1 - 1u;
                r1 = res_1;
                u32 r4_1 = (u32(*gptr<u8>(r0 + 1u)) ^ r2) & 0xffu;  // (from the original)
                u32 ea_3 = r0 + 2u;
                r0 = ea_3;
                u32 r2_1 = *gptr<u32>(r3 + (r4_1 << 2)) ^ r2 >> 8;
                r2 = *gptr<u32>(r3 + (((u32(*gptr<u8>(ea_3)) ^ r2_1) & 0xffu) << 2)) ^ r2_1 >> 8;  // (from the original)
                guest::preempt();
            } while (res_1 != 0);
        }
    }
    return ~r2;
}

}  // namespace d_0053d3b0
GUEST_EXPORT_FRAMED(0x0053d3b0, d_0053d3b0::f_0053d3b0, 0xf0);  // pushes {r4, r5, r6, r7} first, as the original

// f_0053d490: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0053d490 {

inline guest::global<u32, 0x0097d40c> global_0097d40c;  // (from the original)
inline constexpr guest::Function<0x0053ad24, u32(u32, u32)> call_0053ad24;  // (from the original)
inline constexpr guest::Function<0x00749030, u32(u32, u32, u32, u32)> call_00749030;  // (from the original)

u32 f_0053d490(gptr<pead__IDisposer> arg0) {
    arg0->word_0 = 0x903d1c;  // (from the original)
    arg0->word_4 = 0;
    arg0->word_8 = 0;
    arg0->word_c = 0;
    u32 r0_1 = *global_0097d40c;
    if (r0_1 == 0) {
        return arg0.addr();
    }
    u32 r0_2 = call_00749030(r0_1, arg0.addr(), guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r1_1 = guest::cpu()->r[1];
    u32 zf_1 = r0_2 == 0;
    if (!zf_1) {
        r1_1 = arg0.addr();
    }
    arg0->word_4 = r0_2;
    if (!zf_1) {
        call_0053ad24(r0_2, r1_1);
    }
    return arg0.addr();
}

}  // namespace d_0053d490
GUEST_EXPORT_FRAMED(0x0053d490, d_0053d490::f_0053d490, 0x4010);  // pushes {r4, lr} first, as the original

// f_0053d530: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0053d530 {

inline guest::global<u32, 0x0097ea00> global_0097ea00;  // (from the original)
inline constexpr guest::Function<0x0053ad94, u32(u32, u32)> call_0053ad94;  // (from the original)

u32 f_0053d530(gptr<pead__IDisposer> arg0) {
    arg0->word_0 = 0x903d1c;  // (from the original)
    u32 r0_1 = arg0->word_4;
    u32 r1_1 = *global_0097ea00;
    if (r0_1 != r1_1) {
        if (r0_1 != 0) {
            call_0053ad94(r0_1, arg0.addr());
            r1_1 = guest::cpu()->r[1];
        }
        arg0->word_4 = *global_0097ea00;
    }
    guest::cpu()->r[1] = r1_1;
    return arg0.addr();
}

}  // namespace d_0053d530
GUEST_EXPORT_FRAMED(0x0053d530, d_0053d530::f_0053d530, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0053d7c8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0053d7c8 {

inline constexpr guest::Function<0x0013a38c, u32(u32)> call_0013a38c;  // (from the original)

u32 f_0053d7c8(gptr<pead__ThreadMgr> arg0) {
    arg0->word_0 = 0x903d3c;  // (from the original)
    u32 r1_1 = arg0.addr() + 0x14u;  // (from the original)
    arg0->word_18 = r1_1;
    arg0->word_1c = 0;
    arg0->word_14 = r1_1;
    arg0->word_20 = 0;
    u32 r0_2 = call_0013a38c(((arg0.addr() + 0x14u) + 0xcu) + 4u);  // (from the original)
    return r0_2 - 0x24u;  // (from the original)
}

}  // namespace d_0053d7c8
GUEST_EXPORT_FRAMED(0x0053d7c8, d_0053d7c8::f_0053d7c8, 0x4010);  // pushes {r4, lr} first, as the original

// f_0053df24: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0053df24 {

struct __attribute__((packed)) Local_0053df24_ea_3 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0053df24_ea_3, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_0053df24_ea_3, word_4, 0x4);  // (from the original)

struct __attribute__((packed)) Local_0053df24_ea_5 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0053df24_ea_5, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_0053df24_ea_5, word_4, 0x4);  // (from the original)

inline constexpr guest::Function<0x00543c54, u32(u32, u32, u32, u32)> call_00543c54;  // (from the original)

u32 f_0053df24(u32 r0, u32 r1, u32 r2_unused, u32 r3) {
    guest::StackFrame frame(0x4);  // the original's stack frame
    *frame.at<u32>(0) = r3;
    *frame.at<u32>(0) = 0xf;  // (from the original)
    u32 r0_1 = call_00543c54(r0, 0x1cu, 0x14u, 0x18u);  // (from the original)
    *gptr<u32>(r0_1) = 0x903d64;  // (from the original)
    *gptr<u8>(r0_1 + 0x134u) = 0;  // (from the original)
    u32 r1_1 = r0_1 + 0x13cu;  // (from the original)
    *gptr<u32>(r0_1 + 0x138u) = r1;  // (from the original)
    gptr<Local_0053df24_ea_3> ea_3 = gptr<Local_0053df24_ea_3>(r0_1 + 0x140u);  // (from the original)
    ea_3->word_0 = r1_1;
    ea_3->word_4 = 0;
    *gptr<u32>(r0_1 + 0x13cu) = r1_1;  // (from the original)
    u32 r1_2 = r0_1 + 0x14cu;  // (from the original)
    gptr<Local_0053df24_ea_5> ea_5 = gptr<Local_0053df24_ea_5>(r0_1 + 0x150u);  // (from the original)
    ea_5->word_0 = r1_2;
    ea_5->word_4 = 0;
    *gptr<u32>(r0_1 + 0x14cu) = r1_2;  // (from the original)
    *gptr<u32>(r0_1 + 0x148u) = 4;  // (from the original)
    *gptr<u32>(r0_1 + 0x158u) = 0x14c;  // (from the original)
    return r0_1;
}

}  // namespace d_0053df24
GUEST_EXPORT_FRAMED(0x0053df24, d_0053df24::f_0053df24, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_0053dfa0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0053dfa0 {

struct __attribute__((packed)) Object_0053dfa0_0 {
    u32 word_0;
    u8 unknown_4[0x48];  // (not used here)
    u8 byte_4c;
};
GUEST_OFFSET(Object_0053dfa0_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_0053dfa0_0, byte_4c, 0x4c);  // (from the original)


u32 f_0053dfa0(gptr<Object_0053dfa0_0> arg0, u32 r1, u32 r2) {
    if (arg0->byte_4c == 0 || r2 == 0 || r1 == 0) {
        return 0u;
    }
    u32 r3_1 = *gptr<u32>(arg0->word_0 + 0x4cu);  // (from the original)
    // virtual function 19 of arg0.addr()
    return guest::call_address<u32>(r3_1, arg0.addr(), r1, r2, r3_1);
}

}  // namespace d_0053dfa0
GUEST_EXPORT(0x0053dfa0, d_0053dfa0::f_0053dfa0);

// f_0053dffc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0053dffc {

struct __attribute__((packed)) Object_0053dffc_0 {
    u32 word_0;
    u8 unknown_4[0x48];  // (not used here)
    u8 byte_4c;
};
GUEST_OFFSET(Object_0053dffc_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_0053dffc_0, byte_4c, 0x4c);  // (from the original)


u32 f_0053dffc(gptr<Object_0053dffc_0> arg0, u32 r1) {
    if (arg0->byte_4c == 0 || r1 == 0) {
        return 0u;
    }
    u32 r3_1 = *gptr<u32>(arg0->word_0 + 0x50u);  // (from the original)
    // virtual function 20 of arg0.addr()
    return guest::call_address<u32>(r3_1, arg0.addr(), r1, guest::cpu()->r[2], r3_1);
}

}  // namespace d_0053dffc
GUEST_EXPORT(0x0053dffc, d_0053dffc::f_0053dffc);

// f_0053e23c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0053e23c {


void f_0053e23c(gptr<sead__SafeStringBase_char_> arg0) {
    arg0->word_0 = 0x9047f8;  // (from the original)
    arg0->word_4 = 0x8c9f1c;  // (from the original)
    arg0->word_8 = 0;
    arg0->word_c = 0;
    arg0->word_10 = 0;
    arg0->word_14 = 0;
    arg0->word_18 = 0;
    arg0->byte_1c = 1;
    arg0->byte_1d = 1;
    arg0->word_20 = 0;
    arg0->word_24 = 0;
    arg0->byte_28 = 0;
}

}  // namespace d_0053e23c
GUEST_EXPORT(0x0053e23c, d_0053e23c::f_0053e23c);

// f_0053e958: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0053e958 {

inline guest::global<u32, 0x009752e0> global_009752e0;  // (from the original)
inline constexpr guest::Function<0x0013efb4, u32(u32, u32)> call_0013efb4;  // (from the original)
inline constexpr guest::Function<0x005423b8, u32(u32, u32)> call_005423b8;  // (from the original)

u32 f_0053e958(gptr<sead__FileDevice> arg0, u32 r1) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    arg0->word_0 = 0x903d90;  // (from the original)
    u32 r0_1 = *global_009752e0;
    if (r0_1 != 0) {
        call_005423b8(r0_1, arg0.addr());
        r1 = guest::cpu()->r[1];
    }
    frame.release();
    return call_0013efb4(arg0.addr(), r1);
}

}  // namespace d_0053e958
GUEST_EXPORT(0x0053e958, d_0053e958::f_0053e958);

// f_0053e990: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0053e990 {

struct __attribute__((packed)) Object_0053e990_0 {
    u8 unknown_0[0x8];  // (not used here)
    u32 word_8;
};
GUEST_OFFSET(Object_0053e990_0, word_8, 0x8);  // (from the original)

inline constexpr guest::Function<0x0013ef38, u32(u32, u32, u32, u32)> call_0013ef38;  // (from the original)

u32 f_0053e990(gptr<Object_0053e990_0> arg0, u32 r1) {
    u32 r2_1 = arg0->word_8;
    if (r2_1 == 0) {
        return 0u;
    }
    return call_0013ef38(r2_1, arg0.addr(), r2_1, guest::cpu()->r[3]);
}

}  // namespace d_0053e990
GUEST_EXPORT(0x0053e990, d_0053e990::f_0053e990);

// f_0053e9b0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0053e9b0 {

struct __attribute__((packed)) Object_0053e9b0_0 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
};
GUEST_OFFSET(Object_0053e9b0_0, word_4, 0x4);  // (from the original)

inline constexpr guest::Function<0x0053e71c, u32(u32, u32, u32, u32)> call_0053e71c;  // (from the original)

u32 f_0053e9b0(gptr<Object_0053e9b0_0> arg0, u32 r1_unused, u32 r2, u32 r3) {
    guest::StackFrame frame(0x4);  // the original's stack frame
    *frame.at<u32>(0) = r3;
    u32 r12_1 = arg0->word_4;
    if (r12_1 == 0) {
        return 0u;
    }
    *frame.at<u32>(0) = r3;
    u32 r0_1 = call_0053e71c(r12_1, guest::cpu()->r[1], arg0.addr(), r2);
    return r0_1;
}

}  // namespace d_0053e9b0
GUEST_EXPORT_FRAMED(0x0053e9b0, d_0053e9b0::f_0053e9b0, 0x4000);  // pushes {lr} first, as the original

// f_0053ecf8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0053ecf8 {

struct __attribute__((packed)) Local_0053ecf8_r4_1 {
    u8 byte_0;
    u8 byte_1;
    u8 byte_2;
};
GUEST_OFFSET(Local_0053ecf8_r4_1, byte_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_0053ecf8_r4_1, byte_1, 0x1);  // (from the original)
GUEST_OFFSET(Local_0053ecf8_r4_1, byte_2, 0x2);  // (from the original)


u32 f_0053ecf8(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r5 = guest::cpu()->r[5];
    u32 r1_1 = 0;
    u32 r6 = r0;
    if (r1 != 0) {
        u32 res_1 = r3 + 1u;
        u32 nf_1 = res_1 >> 0x1f;  // (from the original)
        u32 vf_1 = ((r3 ^ res_1) & (1u ^ res_1)) >> 0x1f;  // (from the original)
        if (nf_1 == vf_1) {
            r0 = 0u;
            r5 = r0;
        }
        if (res_1 == 0) {
            r3 = ~0x80000000u;  // (from the original)
        }
        if (nf_1 == vf_1) {
            goto L_53ed24;
        }
    }
    guest::cpu()->r[1] = r1;
    return 0u;
L_53ed24:;
    u32 r7 = 0u;
    if (r1 >= 0u && r1 != 0) {
        u32 r8 = 0xc0u;  // (from the original)
        u32 r9 = 0xe0u;  // (from the original)
        u32 r11 = 0x80u;  // (from the original)
        do {
            u32 res_2 = r3 - r5;
            u32 r12_1 = *gptr<u16>(r2 + (r5 << 1));
            gptr<Local_0053ecf8_r4_1> r4_1 = gptr<Local_0053ecf8_r4_1>(r6 + r0);
            if (res_2 == 0 || res_2 >> 0x1f != ((r3 ^ r5) & (r3 ^ res_2)) >> 0x1f) {  // (from the original)
                *gptr<u8>(r6 + r0) = u8(r7);
                guest::cpu()->r[1] = r1;
                return r0;
            }
            if (r12_1 != 0) {
                if (r12_1 <= 0x7fu) {  // (from the original)
                    r0 += 1u;
                    r4_1->byte_0 = u8(r12_1);
                    goto L_53edd8;
                }
                if (r12_1 >= 0x800u) {  // (from the original)
                    goto L_53eda8;
                }
                if (r1 <= r0 + 1u) {
                    r1_1 = r6 + r0;
                    *gptr<u8>(r1_1 - 1u) = u8(r7);
                    guest::cpu()->r[1] = r1_1;
                    return r0 - 1u;
                }
                r4_1->byte_0 = u8(r8 | r12_1 >> 6);
                r0 += 2u;
                r4_1->byte_1 = u8(r12_1 & 0x3fu | 0x80u);  // (from the original)
                goto L_53edd8;
            }
            r4_1->byte_0 = u8(r7);
            guest::cpu()->r[1] = r1;
            return r0;
L_53eda8:;
            if (r1 <= r0 + 2u) {
                r1_1 = r6 + r0;
                *gptr<u8>(r1_1 - 1u) = u8(r7);
                guest::cpu()->r[1] = r1_1;
                return r0 - 1u;
            }
            r4_1->byte_0 = u8(r9 | r12_1 >> 0xc);  // (from the original)
            r4_1->byte_1 = u8(r11 | r12_1 >> 6u & 0x3fu);  // (from the original)
            r0 += 3u;
            r4_1->byte_2 = u8(r12_1 & 0x3fu | 0x80u);  // (from the original)
L_53edd8:;
            r5 += 1u;
            guest::preempt();
        } while (r0 < r1);
    }
    r1_1 = r6 + r0;
    *gptr<u8>(r1_1 - 1u) = u8(r7);
    guest::cpu()->r[1] = r1_1;
    return r0 - 1u;
}

}  // namespace d_0053ecf8
GUEST_EXPORT_FRAMED(0x0053ecf8, d_0053ecf8::f_0053ecf8, 0x4ff0);  // pushes {r4, r5, r6, r7, r8, r9, r10, r11, lr} first, as the original

// f_0053edf4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0053edf4 {

struct __attribute__((packed)) Local_0053edf4_r6_1 {
    u8 byte_0;
    u8 byte_1;
    u8 byte_2;
};
GUEST_OFFSET(Local_0053edf4_r6_1, byte_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_0053edf4_r6_1, byte_1, 0x1);  // (from the original)
GUEST_OFFSET(Local_0053edf4_r6_1, byte_2, 0x2);  // (from the original)


u32 f_0053edf4(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r5 = guest::cpu()->r[5];
    u32 r6_2 = 0;
    u32 r4_2 = 0;
    u32 r6_3 = 0;
    u32 r8_1 = 0;
    u32 zf_1 = 0;
    u32 r9_1 = 0;
    u32 r4_3 = 0;
    u32 r1_2 = 0;
    u32 r12 = r0;
    if (r1 != 0) {
        u32 res_1 = r3 + 1u;
        u32 nf_1 = res_1 >> 0x1f;  // (from the original)
        u32 vf_1 = ((r3 ^ res_1) & (1u ^ res_1)) >> 0x1f;  // (from the original)
        if (nf_1 == vf_1) {
            r0 = 0u;
            r5 = r0;
        }
        if (res_1 == 0) {
            r3 = ~0x80000000u;  // (from the original)
        }
        if (nf_1 == vf_1) {
            goto L_53ee24;
        }
    }
    guest::cpu()->r[1] = r1;
    return 0u;
L_53ee24:;
    u32 r7 = 0u;
    if (r1 >= 0u && r1 != 0) {
        do {
            u32 res_2 = r3 - r5;
            gptr<Local_0053edf4_r6_1> r6_1 = gptr<Local_0053edf4_r6_1>(r2 + r5);
            if (res_2 == 0 || res_2 >> 0x1f != ((r3 ^ r5) & (r3 ^ res_2)) >> 0x1f) {  // (from the original)
                r1_2 = r12 + (r0 << 1);
                *gptr<u16>(r1_2) = u16(r7);
                guest::cpu()->r[1] = r1_2;
                return r0;
            }
            u32 r4_1 = r6_1->byte_0;
            if (r4_1 == 0) {
                r1_2 = r12 + (r0 << 1);
                *gptr<u16>(r1_2) = u16(r7);
                guest::cpu()->r[1] = r1_2;
                return r0;
            }
            if ((r4_1 & 0x80u) != 0) {  // (from the original)
                if ((r4_1 & 0xe0u) == 0xc0u) {  // (from the original)
                    goto L_53ee7c;
                }
                if ((r4_1 & 0xf0u) == 0xe0u) {  // (from the original)
                    goto L_53eea0;
                }
                r1_2 = r12 + (r0 << 1);
                *gptr<u16>(r1_2) = u16(r7);
                guest::cpu()->r[1] = r1_2;
                return r0;
            }
            r5 += 1u;
            *gptr<u16>(r12 + (r0 << 1)) = u16(r4_1);
            goto L_53eed4;
L_53ee7c:;
            r6_2 = r6_1->byte_1;
            if (r6_2 == 0) {
                r1_2 = r12 + (r0 << 1);
                *gptr<u16>(r1_2) = u16(r7);
                guest::cpu()->r[1] = r1_2;
                return r0;
            }
            r4_2 = r6_2 & 0x3fu | (r4_1 & 0x1fu) << 6;  // (from the original)
            r6_3 = r12 + (r0 << 1);
            r5 += 2u;
            goto L_53eed0;
L_53eea0:;
            r8_1 = r6_1->byte_1;
            zf_1 = r8_1 == 0;
            if (!zf_1) {
                r6_1 = gptr<Local_0053edf4_r6_1>(u32(r6_1->byte_2));
                zf_1 = r6_1.addr() == 0;
            }
            if (zf_1) {
                r1_2 = r12 + (r0 << 1);
                *gptr<u16>(r1_2) = u16(r7);
                guest::cpu()->r[1] = r1_2;
                return r0;
            }
            r9_1 = r4_1 << 0xc;  // (from the original)
            r4_3 = r6_1.addr() & 0x3fu;  // (from the original)
            r6_3 = r12 + (r0 << 1);
            r4_2 = r4_3 | r9_1 | (r8_1 & 0x3fu) << 6;  // (from the original)
            r5 += 3u;
L_53eed0:;
            *gptr<u16>(r6_3) = u16(r4_2);
L_53eed4:;
            r0 += 1u;
            guest::preempt();
        } while (r0 < r1);
    }
    u32 r1_1 = r12 + (r0 << 1);
    *gptr<u16>(r1_1 - 2u) = u16(r7);
    guest::cpu()->r[1] = r1_1;
    return r0 - 1u;
}

}  // namespace d_0053edf4
GUEST_EXPORT_FRAMED(0x0053edf4, d_0053edf4::f_0053edf4, 0x3f0);  // pushes {r4, r5, r6, r7, r8, r9} first, as the original

// f_0053f59c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0053f59c {

inline constexpr guest::Function<0x001210d4, u32(u32, u32, u32, u32)> call_001210d4;  // (from the original)

void f_0053f59c() {
    call_001210d4(0xaf52e8u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    return;  // (from the original)
}

}  // namespace d_0053f59c
GUEST_EXPORT(0x0053f59c, d_0053f59c::f_0053f59c);

// f_0053f608: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0053f608 {

inline guest::global<u32, 0x0053f694> global_0053f694;  // (from the original)
inline guest::global<u32, 0x0053f698> global_0053f698;  // (from the original)
inline guest::global<u32, 0x0053f69c> global_0053f69c;  // (from the original)
inline guest::global<u32, 0x00981d70> global_00981d70;  // (from the original)
inline guest::global<u32, 0x00981eb8> global_00981eb8;  // (from the original)

void f_0053f608(gptr<sead__TextWriter> arg0) {
    arg0->word_4 = 0;
    arg0->word_0 = 0x903ea0;  // (from the original)
    arg0->word_8 = 0;
    arg0->word_c = 0;
    u32 r2_1 = *global_00981d70;
    float S1_1 = std::bit_cast<float>(*global_0053f694);
    float S0_1 = std::bit_cast<float>(*global_0053f698);
    if (r2_1 == 0) {
        r2_1 = *global_00981eb8;
    }
    arg0->word_10 = r2_1;
    arg0->word_14 = std::bit_cast<u32>(S1_1);
    arg0->word_18 = std::bit_cast<u32>(S1_1);
    arg0->word_1c = std::bit_cast<u32>(S0_1);
    arg0->word_20 = std::bit_cast<u32>(S0_1);
    arg0->word_24 = std::bit_cast<u32>(S0_1);
    arg0->word_28 = std::bit_cast<u32>(S0_1);
    arg0->word_2c = std::bit_cast<u32>(S0_1);
    arg0->word_30 = std::bit_cast<u32>(S0_1);
    arg0->word_34 = std::bit_cast<u32>(S1_1);
    float S0_2 = std::bit_cast<float>(*global_0053f69c);
    arg0->word_38 = std::bit_cast<u32>(S1_1);
    arg0->word_3c = 0;
    arg0->word_40 = std::bit_cast<u32>(S0_2);
    arg0->word_44 = 0;
    arg0->word_48 = 0;
    arg0->byte_4c = 1;
    guest::cpu()->s[0] = S0_2;
    guest::cpu()->s[1] = S1_1;
}

}  // namespace d_0053f608
GUEST_EXPORT(0x0053f608, d_0053f608::f_0053f608);

// f_0053f6c4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0053f6c4 {


u32 f_0053f6c4(u32 r0) {
    u32 r0_1 = r0 - (0x55555555u & r0 >> 1);  // (from the original)
    u32 r0_3 = (0x33333333u & r0_1 >> 2) + (r0_1 & 0x33333333u);  // (from the original)
    u32 r0_4 = r0_3 + (r0_3 >> 4) & 0xf0f0f0fu;  // (from the original)
    u32 r0_5 = r0_4 + (r0_4 >> 8);
    guest::cpu()->r[1] = 0xf0f0f0fu;  // (from the original)
    return r0_5 + (r0_5 >> 0x10) & 0x3fu;  // (from the original)
}

}  // namespace d_0053f6c4
GUEST_EXPORT(0x0053f6c4, d_0053f6c4::f_0053f6c4);

// f_0053f730: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0053f730 {

inline guest::global<u32, 0x00975320> global_00975320;  // (from the original)

void f_0053f730(gptr<sead__FrameBuffer> arg0) {
    arg0->word_0 = 0x903edc;  // (from the original)
    if (arg0.addr() == *global_00975320) {
        *global_00975320 = 0;
    }
    guest::cpu()->r[1] = 0x975320u;  // (from the original)
}

}  // namespace d_0053f730
GUEST_EXPORT(0x0053f730, d_0053f730::f_0053f730);

// f_0053fda8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0053fda8 {

struct __attribute__((packed)) Object_0053fda8_0 {
    u8 unknown_0[0x34];  // (not used here)
    u32 word_34;
    u32 word_38;
    u32 word_3c;
    u32 word_40;
    u32 word_44;
    u32 word_48;
    u32 word_4c;
    u32 word_50;
    u32 word_54;
};
GUEST_OFFSET(Object_0053fda8_0, word_34, 0x34);  // (from the original)
GUEST_OFFSET(Object_0053fda8_0, word_38, 0x38);  // (from the original)
GUEST_OFFSET(Object_0053fda8_0, word_3c, 0x3c);  // (from the original)
GUEST_OFFSET(Object_0053fda8_0, word_40, 0x40);  // (from the original)
GUEST_OFFSET(Object_0053fda8_0, word_44, 0x44);  // (from the original)
GUEST_OFFSET(Object_0053fda8_0, word_48, 0x48);  // (from the original)
GUEST_OFFSET(Object_0053fda8_0, word_4c, 0x4c);  // (from the original)
GUEST_OFFSET(Object_0053fda8_0, word_50, 0x50);  // (from the original)
GUEST_OFFSET(Object_0053fda8_0, word_54, 0x54);  // (from the original)

struct __attribute__((packed)) Object_0053fda8_1 {
    u8 unknown_0[0x94];  // (not used here)
    u32 word_94;
    u8 unknown_98[0x4];  // (not used here)
    u32 word_9c;
    u32 word_a0;
    u32 word_a4;
    u32 word_a8;
};
GUEST_OFFSET(Object_0053fda8_1, word_94, 0x94);  // (from the original)
GUEST_OFFSET(Object_0053fda8_1, word_9c, 0x9c);  // (from the original)
GUEST_OFFSET(Object_0053fda8_1, word_a0, 0xa0);  // (from the original)
GUEST_OFFSET(Object_0053fda8_1, word_a4, 0xa4);  // (from the original)
GUEST_OFFSET(Object_0053fda8_1, word_a8, 0xa8);  // (from the original)

inline guest::global<u32, 0x0053fe2c> global_0053fe2c;  // (from the original)
inline guest::global<u32, 0x0053fe30> global_0053fe30;  // (from the original)
inline guest::global<u32, 0x0053fe34> global_0053fe34;  // (from the original)
inline constexpr guest::Function<0x0014f4ec, u32(u32, u32)> call_0014f4ec;  // (from the original)

void f_0053fda8(gptr<Object_0053fda8_0> arg0, gptr<Object_0053fda8_1> arg1) {
    float S2_1 = std::bit_cast<float>(arg1->word_9c) + std::bit_cast<float>(arg1->word_a0);
    float S3_1 = std::bit_cast<float>(*global_0053fe2c);
    float S1_1 = std::bit_cast<float>(arg1->word_a4) + std::bit_cast<float>(arg1->word_a8);
    arg0->word_3c = std::bit_cast<u32>(std::bit_cast<float>(arg1->word_94));
    arg0->word_34 = std::bit_cast<u32>(S1_1 * S3_1);
    arg0->word_38 = std::bit_cast<u32>(S2_1 * S3_1);
    float S2_2 = std::bit_cast<float>(arg1->word_a4) + std::bit_cast<float>(arg1->word_a8);
    float S1_2 = std::bit_cast<float>(*global_0053fe30);
    float S4_1 = std::bit_cast<float>(arg1->word_9c) + std::bit_cast<float>(arg1->word_a0);
    arg0->word_48 = std::bit_cast<u32>(std::bit_cast<float>(arg1->word_94) - S1_2);
    float S0_1 = std::bit_cast<float>(*global_0053fe34);
    arg0->word_40 = std::bit_cast<u32>(S2_2 * S3_1);
    arg0->word_44 = std::bit_cast<u32>(S4_1 * S3_1);
    arg0->word_4c = std::bit_cast<u32>(S0_1);
    arg0->word_50 = std::bit_cast<u32>(S1_2);
    arg0->word_54 = std::bit_cast<u32>(S0_1);
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_2;
    call_0014f4ec(arg0.addr() + 0x4cu, arg1.addr());  // (from the original)
}

}  // namespace d_0053fda8
GUEST_EXPORT(0x0053fda8, d_0053fda8::f_0053fda8);
