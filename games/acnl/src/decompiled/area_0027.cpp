// Functions decompiled by tools/decomp (docs/decomp.md), each proved equal to the recompiled original (prove-cpp). The
// names come from games/acnl/names (tools/decomp/names.py); the others are generated (d_<address>::f_<address>,
// Object_<address>_<argument>, word_<offset>) and still to be chosen.
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
GUEST_OFFSET(Object_0027041c_0, word_100, 0x100);
GUEST_OFFSET(Object_0027041c_0, word_104, 0x104);
GUEST_OFFSET(Object_0027041c_0, word_108, 0x108);
GUEST_OFFSET(Object_0027041c_0, byte_10c, 0x10c);
GUEST_OFFSET(Object_0027041c_0, byte_10e, 0x10e);


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

inline constexpr u32 vtable_HumanModel = 0x008eb174u;
inline constexpr u32 vtable_NpcModelBase = 0x008ed6acu;
inline constexpr u32 vtable_NpcModel = 0x008f8c1cu;
inline constexpr guest::Function<0x001abcd4, u32(u32, u32)> call_001abcd4;
inline constexpr guest::Function<0x00317e2c, u32(u32, u32)> g3d__ResourceLoader__destructor;
inline constexpr guest::Function<0x0031e204, u32(u32, u32)> HumanFaceAnimControl__destructor;
inline constexpr guest::Function<0x004edd6c, u32(u32, u32, u32, u32)> call_004edd6c;
inline constexpr guest::Function<0x004edd84, u32(u32)> set_base_vtable_004edd84;
inline constexpr guest::Function<0x004ef50c, u32(u32)> g3d__GroupSkeletalAnim__destructor;

u32 NpcSimpleModel__destructor(gptr<HumanModel> human_model) {
    human_model->word_0 = vtable_NpcModel;
    u32 r0_1 = human_model.addr() + 0x384u;  // (from the original)
    call_004edd6c(r0_1, vtable_NpcModel, guest::cpu()->r[2], guest::cpu()->r[3]);
    human_model->word_0 = vtable_NpcModelBase;
    HumanFaceAnimControl__destructor(r0_1 - 0xd4u, vtable_NpcModelBase);  // (from the original)
    u32 r5_1 = ~0u;
    human_model->word_274 = 0;
    human_model->word_278 = r5_1;
    human_model->word_26c = 0;
    human_model->word_270 = r5_1;
    human_model->word_264 = 0;
    human_model->word_268 = r5_1;
    g3d__ResourceLoader__destructor(r0_1 - 0x228u, r0_1 - 0x120u);  // (from the original)
    human_model->word_154 = 0;
    human_model->word_158 = r5_1;
    human_model->word_14c = 0;
    human_model->word_150 = r5_1;
    human_model->word_144 = 0;
    human_model->word_148 = r5_1;
    human_model->word_0 = vtable_HumanModel;
    call_001abcd4(r0_1 - 0x384u, r0_1 - 0x238u);  // (from the original)
    g3d__GroupSkeletalAnim__destructor(r0_1 - 0x2b8u);  // (from the original)
    set_base_vtable_004edd84(r0_1 - 0x30cu);  // (from the original)
    return r0_1 - 0x384u;  // (from the original)
}

}  // namespace d_00270550
GUEST_EXPORT_FRAMED(0x00270550, d_00270550::NpcSimpleModel__destructor, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_002706ec: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002706ec {

inline constexpr u32 vtable_ObjectResource = 0x008ef578u;
inline constexpr guest::Function<0x002f747c, u32(u32, u32, u32, u32)> ObjectOwner__release_object;
inline constexpr guest::Function<0x00317dec, u32(u32, u32, u32, u32)> ssys__ma__HeapAllocator__destructor;

u32 ObjectResource__destructor(gptr<ObjectResource> object_resource) {
    object_resource->word_0 = vtable_ObjectResource;
    if (object_resource->word_8 != 0) {
        ObjectOwner__release_object(object_resource.addr() + 4u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    }
    ssys__ma__HeapAllocator__destructor(object_resource.addr() + 4u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    return object_resource.addr();
}

}  // namespace d_002706ec
GUEST_EXPORT_FRAMED(0x002706ec, d_002706ec::ObjectResource__destructor, 0x4010);  // pushes {r4, lr} first, as the original

// f_00270ce0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00270ce0 {

inline constexpr guest::Function<0x002f73b8, u32(u32, u32, u32, u32)> unload_split_part;

u32 f_00270ce0(u32 r0) {
    return unload_split_part(r0 + 0x14u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
}

}  // namespace d_00270ce0
GUEST_EXPORT(0x00270ce0, d_00270ce0::f_00270ce0);

// f_00270ce8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00270ce8 {

struct __attribute__((packed)) sead__FixedSafeString_64_ {
    u8 unknown_0[0x8];  // (not used here)
    u32 word_8;
    u8 unknown_c[0x10];  // (not used here)
    u32 word_1c;
    u32 word_20;
};
GUEST_OFFSET(sead__FixedSafeString_64_, word_8, 0x8);
GUEST_OFFSET(sead__FixedSafeString_64_, word_1c, 0x1c);
GUEST_OFFSET(sead__FixedSafeString_64_, word_20, 0x20);

struct __attribute__((packed)) Local_00270ce8_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_00270ce8_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_00270ce8_ea_1, word_4, 0x4);

inline constexpr u32 vtable_sead__FixedSafeString_64_ = 0x00904950u;
inline guest::global<u8, 0x008c9f1c> empty_string;
inline constexpr guest::Function<0x00317a50, u32(u32, u32, u32, u32)> call_00317a50;
inline constexpr guest::Function<0x00317a88, u32(u32, u32, u32, u32)> call_00317a88;
inline constexpr guest::Function<0x00544a20, u32(u32, u32)> call_00544a20;
inline constexpr guest::Function<0x00544d8c, u32(u32, u32, u32)> call_00544d8c;
inline constexpr guest::Function<0x00544f18, u32(u32)> print_finish;
inline constexpr guest::Function<0x00544fec, u32(u32, u32)> print_append;
inline constexpr guest::Function<0x0054a644, u32(u32, u32)> construct_print_output;
inline constexpr guest::Function<0x00712c08, u32(u32, u32, u32, u32)> byte_2_below_12;

struct __attribute__((packed)) Frame_00270ce8 {
    u8 byte_0;
    u8 unknown_1[0x1f];  // (not read or written by name)
    u32 word_20;
    u32 word_24;
    u8 unknown_28[0x4];  // (not read or written by name)
    u8 byte_2c;
    u8 unknown_2d[0x6f];  // (not read or written by name)
    u32 word_9c;
    u8 unknown_a0[0x8];  // (not read or written by name)
};
GUEST_OFFSET(Frame_00270ce8, byte_0, 0x0);
GUEST_OFFSET(Frame_00270ce8, word_20, 0x20);
GUEST_OFFSET(Frame_00270ce8, word_24, 0x24);
GUEST_OFFSET(Frame_00270ce8, byte_2c, 0x2c);
GUEST_OFFSET(Frame_00270ce8, word_9c, 0x9c);
GUEST_SIZE(Frame_00270ce8, 0xa8);

u32 sead__FixedSafeString_64___FixedSafeString_00270ce8(gptr<sead__FixedSafeString_64_> fixed_safe_string, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_00270ce8> frame;  // the original's stack frame
    u32 r0_1 = 0;
    u32 r5_1 = fixed_safe_string.addr() + 0x14u;  // (from the original)
    if (fixed_safe_string->word_20 + 1u != 0 && fixed_safe_string->word_1c != 0) {
        r0_1 = 1u;
    } else {
        u32 r10_1 = fixed_safe_string->word_8;
        gptr<Local_00270ce8_ea_1> ea_1 = gptr<Local_00270ce8_ea_1>(frame.at(0x24).addr());  // (from the original)
        ea_1->word_0 = frame.at(0x2c).addr();  // (from the original)
        ea_1->word_4 = 0x40;  // (from the original)
        u32 r2_1 = frame->word_24 - 1u;
        *gptr<u8>(r2_1 + 0x40u) = *empty_string;  // (from the original)
        frame->byte_2c = *empty_string;
        frame->word_20 = vtable_sead__FixedSafeString_64_;
        u32 r0_2 = byte_2_below_12(r1, r1, r2_1, 0x40u);  // (from the original)
        u32 r0_3 = frame.at(0x70).addr();  // (from the original)
        construct_print_output(r0_3, frame.at(0x20).addr());  // (from the original)
        print_append(r0_3, 0x881bb8u);  // (from the original)
        print_append(r0_3, r2 == 0 ? 0x881ba8u : 0x881ba4u);  // (from the original)
        frame->word_9c = r0_2;
        u32 r0_4 = call_00544a20(r0_3, frame.at(0).addr());
        if (r0_4 != 0) {
            call_00544d8c(frame.at(0x9c).addr(), frame->byte_0 == 0 ? 0u : frame.at(0).addr(), *gptr<u32>(r0_3 + 4u));  // (from the original)
        }
        print_append(r0_3, r3 == 0 ? 0x881bb4u : 0x881bb0u);  // (from the original)
        print_finish(r0_3);
        r0_1 = call_00317a50(r5_1, frame.at(0x20).addr(), r10_1, 0x80u);  // (from the original)
        r1 = guest::cpu()->r[1];
        if (r0_1 != 0) {
            call_00317a88(r5_1, fixed_safe_string.addr() + 4u, 0u, 1u);
            r1 = guest::cpu()->r[1];
            r0_1 = 1u;
        }
    }
    guest::cpu()->r[1] = r1;
    return r0_1;
}

}  // namespace d_00270ce8
GUEST_EXPORT_FRAMED(0x00270ce8, d_00270ce8::sead__FixedSafeString_64___FixedSafeString_00270ce8, 0x47f0);  // pushes {r4, r5, r6, r7, r8, r9, r10, lr} first, as the original

// f_00271290: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00271290 {

struct __attribute__((packed)) Object_00271290_0 {
    u8 unknown_0[0x24];  // (not used here)
    u8 byte_24;
    u8 unknown_25[0x27f];  // (not used here)
    u32 word_2a4;
};
GUEST_OFFSET(Object_00271290_0, byte_24, 0x24);
GUEST_OFFSET(Object_00271290_0, word_2a4, 0x2a4);

struct __attribute__((packed)) Local_00271290_ea_4 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_00271290_ea_4, word_0, 0x0);
GUEST_OFFSET(Local_00271290_ea_4, word_4, 0x4);

struct __attribute__((packed)) Local_00271290_r2_2 {
    u8 unknown_0[0x8];  // (not used here)
    u32 word_8;
    u32 word_c;
    u8 unknown_10[0xc];  // (not used here)
    u32 word_1c;
};
GUEST_OFFSET(Local_00271290_r2_2, word_8, 0x8);
GUEST_OFFSET(Local_00271290_r2_2, word_c, 0xc);
GUEST_OFFSET(Local_00271290_r2_2, word_1c, 0x1c);

inline constexpr guest::Function<0x001ce934, u32(u32, u32, u32, u32)> call_001ce934;

struct __attribute__((packed)) Frame_00271290 {
    u32 word_0;
};
GUEST_OFFSET(Frame_00271290, word_0, 0x0);
GUEST_SIZE(Frame_00271290, 0x4);

u32 f_00271290(gptr<Object_00271290_0> arg0, u32 r1, u32 r2_unused, u32 r3) {
    guest::StackFrameOf<Frame_00271290> frame;  // the original's stack frame
    frame->word_0 = r3;
    u32 r0_1 = arg0->word_2a4;
    if (r0_1 == 0) {
        return r0_1;
    }
    u32 r3_1 = arg0->byte_24;
    u32 r0_2 = 0u;
    u32 r2_1 = r3_1 & 1u;
    gptr<Local_00271290_r2_2> r2_2 = gptr<Local_00271290_r2_2>(r2_1 >= 2u ? arg0.addr() + 0x6cu : arg0.addr() + r2_1 * 0x108u + 0x6cu);  // (from the original)
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
    frame->word_0 = 7;
    gptr<Local_00271290_ea_4> ea_4 = gptr<Local_00271290_ea_4>(arg0.addr() + (r3_1 & 1u) * 0x14u + 0x44u);  // (from the original)
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
GUEST_OFFSET(Object_00271c78_0, byte_24, 0x24);

struct __attribute__((packed)) Local_00271c78_r0_3 {
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
GUEST_OFFSET(Local_00271c78_r0_3, float_0, 0x0);
GUEST_OFFSET(Local_00271c78_r0_3, float_4, 0x4);
GUEST_OFFSET(Local_00271c78_r0_3, float_8, 0x8);
GUEST_OFFSET(Local_00271c78_r0_3, float_c, 0xc);
GUEST_OFFSET(Local_00271c78_r0_3, float_10, 0x10);
GUEST_OFFSET(Local_00271c78_r0_3, float_14, 0x14);
GUEST_OFFSET(Local_00271c78_r0_3, float_18, 0x18);
GUEST_OFFSET(Local_00271c78_r0_3, float_1c, 0x1c);
GUEST_OFFSET(Local_00271c78_r0_3, float_20, 0x20);
GUEST_OFFSET(Local_00271c78_r0_3, float_24, 0x24);
GUEST_OFFSET(Local_00271c78_r0_3, float_28, 0x28);
GUEST_OFFSET(Local_00271c78_r0_3, float_2c, 0x2c);

struct __attribute__((packed)) Local_00271c78_r2_1 {
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
GUEST_OFFSET(Local_00271c78_r2_1, float_0, 0x0);
GUEST_OFFSET(Local_00271c78_r2_1, float_4, 0x4);
GUEST_OFFSET(Local_00271c78_r2_1, float_8, 0x8);
GUEST_OFFSET(Local_00271c78_r2_1, float_c, 0xc);
GUEST_OFFSET(Local_00271c78_r2_1, float_10, 0x10);
GUEST_OFFSET(Local_00271c78_r2_1, float_14, 0x14);
GUEST_OFFSET(Local_00271c78_r2_1, float_18, 0x18);
GUEST_OFFSET(Local_00271c78_r2_1, float_1c, 0x1c);
GUEST_OFFSET(Local_00271c78_r2_1, float_20, 0x20);
GUEST_OFFSET(Local_00271c78_r2_1, float_24, 0x24);
GUEST_OFFSET(Local_00271c78_r2_1, float_28, 0x28);
GUEST_OFFSET(Local_00271c78_r2_1, float_2c, 0x2c);

inline constexpr guest::Function<0x0013451c, u32(u32, u32)> Matrix34__copy_from;
inline constexpr guest::Function<0x003280e0, u32(u32, u32, u32, u32)> call_003280e0;
inline constexpr guest::Function<0x004df3e4, u32(u32, u32)> call_004df3e4;
inline constexpr guest::Function<0x005676b8, u32(u32, u32)> Matrix34__rotate_z;
inline constexpr guest::Function<0x00724bf8, u32(u32, u32, u32, u32)> call_00724bf8;

u32 f_00271c78(gptr<Object_00271c78_0> arg0, u32 r1, u32 r2, float S0, float S1, float S2, float S3, float S4, float S5, float S6, float S7, float S8, float S9, float S10, float S11) {
    guest::StackFrame frame(0x70);  // the original's stack frame
    u32 r4 = guest::cpu()->r[4];
    u32 r3_1 = u32(arg0->byte_24) & 1u;
    u32 r3_2 = arg0.addr() + (r3_1 * 5u + (r3_1 << 5) << 2);
    u32 res_1 = *gptr<u8>(r3_2 + 0x2a8u);  // (from the original)
    u32 zf_1 = res_1 == 0;
    if (!zf_1) {
        zf_1 = r3_2 + 0x2acu == 0;  // (from the original)
        r4 = r3_2 + 0x2acu;  // (from the original)
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
    gptr<Local_00271c78_r0_3> r0_3 = gptr<Local_00271c78_r0_3>(call_00724bf8(arg0.addr() + 0x27cu, r1, r2, 0u));  // (from the original)
    if (r0_3.addr() == 0) {
        return r0_3.addr();
    }
    float S0_2 = r0_3->float_0;
    float S1_2 = r0_3->float_4;
    float S2_1 = r0_3->float_8;
    float S3_1 = r0_3->float_c;
    float S4_1 = r0_3->float_10;
    float S5_1 = r0_3->float_14;
    float S6_1 = r0_3->float_18;
    float S7_1 = r0_3->float_1c;
    float S8_1 = r0_3->float_20;
    float S9_1 = r0_3->float_24;
    float S10_1 = r0_3->float_28;
    float S11_1 = r0_3->float_2c;
    gptr<Local_00271c78_r2_1> r2_1 = gptr<Local_00271c78_r2_1>(frame.at(0x30).addr());  // (from the original)
    r2_1->float_0 = S0_2;
    r2_1->float_4 = S1_2;
    r2_1->float_8 = S2_1;
    r2_1->float_c = S3_1;
    r2_1->float_10 = S4_1;
    r2_1->float_14 = S5_1;
    r2_1->float_18 = S6_1;
    r2_1->float_1c = S7_1;
    r2_1->float_20 = S8_1;
    r2_1->float_24 = S9_1;
    r2_1->float_28 = S10_1;
    r2_1->float_2c = S11_1;
    guest::cpu()->s[0] = S0_2;
    guest::cpu()->s[1] = S1_2;
    Matrix34__copy_from(frame.at(0).addr(), frame.at(0x30).addr());  // (from the original)
    *frame.at<u16>(0x60) = u16(0xffffc000u);  // (from the original)
    Matrix34__rotate_z(frame.at(0).addr(), *frame.at<u32>(0x60));  // (from the original)
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
GUEST_OFFSET(Object_00271d0c_0, byte_24, 0x24);

inline constexpr guest::Function<0x0032821c, u32(u32, u32, u32, u32)> call_0032821c;
inline constexpr guest::Function<0x004df2c8, u32(u32)> call_004df2c8;

u32 f_00271d0c(gptr<Object_00271d0c_0> arg0, float S0, float S1, float S2, float S3) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 r2_1 = u32(arg0->byte_24) & 1u;
    u32 r2_2 = arg0.addr() + (r2_1 * 5u + (r2_1 << 5) << 2);
    u32 r3_1 = *gptr<u8>(r2_2 + 0x2a8u);  // (from the original)
    u32 zf_1 = r3_1 == 0;
    if (!zf_1) {
        zf_1 = r2_2 + 0x2acu == 0;  // (from the original)
        r2_2 = r2_2 + 0x2acu;  // (from the original)
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
    float float_3d0;
    float float_3d4;
    float float_3d8;
    float float_3dc;
};
GUEST_OFFSET(Object_00271e30_0, word_29c, 0x29c);
GUEST_OFFSET(Object_00271e30_0, word_2a0, 0x2a0);
GUEST_OFFSET(Object_00271e30_0, word_2a4, 0x2a4);
GUEST_OFFSET(Object_00271e30_0, float_3d0, 0x3d0);
GUEST_OFFSET(Object_00271e30_0, float_3d4, 0x3d4);
GUEST_OFFSET(Object_00271e30_0, float_3d8, 0x3d8);
GUEST_OFFSET(Object_00271e30_0, float_3dc, 0x3dc);


u32 f_00271e30(gptr<Object_00271e30_0> arg0, u32 r1, u32 r2, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    float S0_1 = std::bit_cast<float>(*gptr<u32>(r13));
    float S1_1 = std::bit_cast<float>(*gptr<u32>(r13 + 4));
    float S2_1 = std::bit_cast<float>(*gptr<u32>(r13 + 8));
    float S3_1 = std::bit_cast<float>(*gptr<u32>(r13 + 0xc));  // (from the original)
    arg0->word_29c = r1;
    arg0->word_2a0 = r2;
    arg0->word_2a4 = r3;
    arg0->float_3d0 = S0_1;
    arg0->float_3d4 = S1_1;
    arg0->float_3d8 = S2_1;
    arg0->float_3dc = S3_1;
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
GUEST_OFFSET(Object_00272300_0, byte_24, 0x24);
GUEST_OFFSET(Object_00272300_0, word_4d0, 0x4d0);

struct __attribute__((packed)) Local_00272300_r0_1 {
    u8 unknown_0[0x8];  // (not used here)
    u32 word_8;
    u32 word_c;
    u8 unknown_10[0xc];  // (not used here)
    u32 word_1c;
};
GUEST_OFFSET(Local_00272300_r0_1, word_8, 0x8);
GUEST_OFFSET(Local_00272300_r0_1, word_c, 0xc);
GUEST_OFFSET(Local_00272300_r0_1, word_1c, 0x1c);

inline constexpr guest::Function<0x001ce934, u32(u32, u32, u32, u32)> call_001ce934;
inline constexpr guest::Function<0x00712c28, u32(u32, u32, u32, u32)> byte_3_below_6;
inline constexpr guest::Function<0x00712c38, u32(u32)> byte_1_below_16;

struct __attribute__((packed)) Frame_00272300 {
    u32 word_0;
};
GUEST_OFFSET(Frame_00272300, word_0, 0x0);
GUEST_SIZE(Frame_00272300, 0x4);

u32 f_00272300(gptr<Object_00272300_0> arg0, u32 r1, u32 r2_unused, u32 r3) {
    guest::StackFrameOf<Frame_00272300> frame;  // the original's stack frame
    gptr<Local_00272300_r0_1> r0_1 = gptr<Local_00272300_r0_1>(0u);
    frame->word_0 = r3;
    u32 r1_1 = arg0->word_4d0;
    if (r1_1 != 0) {
        u32 r5_1 = 0u;
        u32 r2_1 = u32(arg0->byte_24) & 1u;
        if (r2_1 >= 2u) {
            r0_1 = gptr<Local_00272300_r0_1>(arg0.addr() + 0x60u);  // (from the original)
        } else {
            r3 = r2_1 * 5u;
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
            u32 r0_3 = byte_3_below_6(r1_1, r1_1, r2_2, r3);
            u32 r0_5 = byte_1_below_16(*gptr<u32>(arg0.addr() + 0x4d0u));  // (from the original)
            frame->word_0 = 0x10;  // (from the original)
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

inline guest::global<u32, 0x00886d68> global_00886d68;
inline guest::global<u32, 0x00886d6c> global_00886d6c;
inline constexpr guest::Function<0x00817cd8, u32(u32, u32, u32)> call_00817cd8;

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
GUEST_OFFSET(Object_00273a9c_0, word_2be8, 0x2be8);


u32 f_00273a9c(gptr<Object_00273a9c_0> arg0, u32 r1) {
    u32 ea_1 = arg0.addr() + (r1 - arg0->word_2be8) * 0x2b4u + 0xfa0u;  // (from the original)
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
GUEST_OFFSET(Object_00273b30_0, word_2be8, 0x2be8);

inline constexpr guest::Function<0x001df3d4, u32(u32)> main_slot_entry_001df3d4;
inline constexpr guest::Function<0x002e3568, u32(u32, u32, u32, u32)> call_002e3568;
inline constexpr guest::Function<0x002fb918, u32(u32, u32, u32, u32)> data_block_71900;
inline constexpr guest::Function<0x006f51f8, u32(u32, u32, u32, u32)> call_006f51f8;

void f_00273b30(gptr<Object_00273b30_0> arg0, u32 r1) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 r3_1 = 0x2bf1u;  // (from the original)
    u32 r2_1 = arg0->word_2be8;
    u32 r0_1 = *gptr<u8>(r3_1 + arg0.addr());
    u32 r5_1 = r1 - r2_1;
    if (r0_1 != 0) {
        u32 r0_2 = data_block_71900(r0_1, r1, r2_1, r3_1);
        u32 r0_3 = main_slot_entry_001df3d4(r0_2);
        r1 = guest::cpu()->r[1];
        r2_1 = guest::cpu()->r[2];
        r3_1 = guest::cpu()->r[3];
        if (r0_3 != 0) {
            u32 r0_4 = call_006f51f8(r0_3, r5_1, r2_1, r3_1);
            r3_1 = guest::cpu()->r[3];
            r2_1 = arg0.addr() + r5_1 * 0x2b4u + 0xfa0u;  // (from the original)
            r1 = r0_4;
            *gptr<u32>(r2_1 + 0x2b0u) = r1;  // (from the original)
        }
    }
    frame.release();
    call_002e3568((arg0.addr() + r5_1 * 0x2b4u) + 0xfa0u, r1, r2_1, r3_1);  // (from the original)
    return;  // (from the original)
}

}  // namespace d_00273b30
GUEST_EXPORT(0x00273b30, d_00273b30::f_00273b30);

// f_00273ba8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00273ba8 {

inline constexpr guest::Function<0x001323bc, u32(u32)> read_global_975c20;
inline constexpr guest::Function<0x00568c10, u32(u32, u32, u32, u32)> Layout__virtual_3;
inline constexpr guest::Function<0x00569e6c, u32(u32, u32, u32)> call_00569e6c;

void f_00273ba8(u32 r0, u32 r1_unused, u32 r2) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 r1 = 0;
    u32 r0_2 = Layout__virtual_3(r0 + 0x26cu, r1, r2, guest::cpu()->r[3]);  // (from the original)
    u32 r0_3 = read_global_975c20(r0_2);
    frame.release();
    call_00569e6c(r0_3, r0 + 0x26cu, 1u);
    return;  // (from the original)
}

}  // namespace d_00273ba8
GUEST_EXPORT(0x00273ba8, d_00273ba8::f_00273ba8);

// f_0027430c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0027430c {

struct __attribute__((packed)) Object_0027430c_0 {
    u8 unknown_0[0x2be8];  // (not used here)
    u32 word_2be8;
};
GUEST_OFFSET(Object_0027430c_0, word_2be8, 0x2be8);


u32 f_0027430c(gptr<Object_0027430c_0> arg0, u32 r1) {
    u32 r2_1 = arg0->word_2be8;
    if (s32(r2_1) > s32(r1)) {
        return arg0.addr() + 0xfa0u;  // (from the original)
    }
    if (r2_1 + 0xau <= r1) {  // (from the original)
        return arg0.addr() + 0xfa0u;  // (from the original)
    }
    return arg0.addr() + (r1 - r2_1) * 0x2b4u + 0xfa0u;  // (from the original)
}

}  // namespace d_0027430c
GUEST_EXPORT(0x0027430c, d_0027430c::f_0027430c);

// f_00274384: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00274384 {

inline constexpr guest::Function<0x00567e24, u32(u32, u32)> load_layout_archive;

u32 f_00274384(u32 r0) {
    return load_layout_archive(r0 + 0x24u, 0x886e00u);  // (from the original)
}

}  // namespace d_00274384
GUEST_EXPORT(0x00274384, d_00274384::f_00274384);

// f_00274394: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00274394 {

struct __attribute__((packed)) Object_00274394_0 {
    u8 unknown_0[0x2be8];  // (not used here)
    u32 word_2be8;
};
GUEST_OFFSET(Object_00274394_0, word_2be8, 0x2be8);


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

inline guest::global<u8, 0x009506b0> global_009506b0;
inline guest::global<u32, 0x009506b4> global_009506b4;
inline constexpr guest::Function<0x002ff8b0, u32(u32, u32, u32, u32)> slot_value;
inline constexpr guest::Function<0x005697e0, u32(u32, u32)> Animation__set_value;
inline constexpr guest::Function<0x006dce18, u32(u32, u32, u32)> call_006dce18;

void f_00274478(u32 r0, u32 r1, u32 r2, float S0) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    if (*global_009506b0 == 0xffu) {  // (from the original)
        if (*global_009506b4 != 0) {
            u32 r0_1 = slot_value(4u, r1, r2, guest::cpu()->r[3]);
            u32 r2_1 = *global_009506b0 == 0xffu ? *global_009506b4 : 0u;  // (from the original)
            call_006dce18(r2_1, r0_1, r2_1);
            float S0_2 = guest::cpu()->s[0];
            u32 r1_1 = std::bit_cast<u32>(S0_2) + 0x40800000u;  // (from the original)
            if (r1_1 != 0) {
                guest::cpu()->s[0] = S0_2;
                frame.release();
                Animation__set_value(r0 + 0x430u, r1_1);
                return;  // (from the original)
            }
            float S0_3 = 4.0f;
            guest::cpu()->s[0] = S0_3;
            frame.release();
            Animation__set_value(r0 + 0x430u, r1_1);
            return;  // (from the original)
        }
    }
    guest::cpu()->r[1] = r1;
    guest::cpu()->s[0] = S0;
}

}  // namespace d_00274478
GUEST_EXPORT(0x00274478, d_00274478::f_00274478);

// f_00274500: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00274500 {

struct __attribute__((packed)) Local_00274500_r0_9 {
    u32 word_0;
    u8 unknown_4[0xe0];  // (not used here)
    u32 word_e4;
};
GUEST_OFFSET(Local_00274500_r0_9, word_0, 0x0);
GUEST_OFFSET(Local_00274500_r0_9, word_e4, 0xe4);

inline constexpr u32 vtable_Control2Button = 0x008ef284u;
inline constexpr u32 vtable_Control2Button_at_e4 = 0x008ef2c8u;
inline constexpr u32 vtable_PostDragWindow = 0x008ef6e0u;
inline guest::global<u32, 0x00886d80> global_00886d80;
inline guest::global<u32, 0x00886d84> global_00886d84;
inline constexpr guest::Function<0x001207d8, u32(u32, u32, u32, u32)> ssys__ma__lyt__ArcResAcc__ArcResAcc_001207d8;
inline constexpr guest::Function<0x00125aec, u32(u32)> construct_layout_animation;
inline constexpr guest::Function<0x00125e3c, u32(u32)> Layout__Layout;
inline constexpr guest::Function<0x002cd444, u32(u32, u32, u32)> construct_control_button_base;
inline constexpr guest::Function<0x002f915c, u32(u32)> LetterDragIconGroup__LetterDragIconGroup;
inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> for_each_element;

u32 PostDragWindow__PostDragWindow(gptr<PostDragWindow> post_drag_window) {
    post_drag_window->word_4 = 0;
    post_drag_window->byte_8 = 0;
    u32 r2_1 = *global_00886d84;
    post_drag_window->word_c = *global_00886d80;
    post_drag_window->word_10 = r2_1;
    post_drag_window->word_14 = 0;
    post_drag_window->byte_18 = 0;
    post_drag_window->word_1c = 0;
    post_drag_window->word_0 = vtable_PostDragWindow;
    post_drag_window->word_20 = 0;
    u32 r0_2 = ssys__ma__lyt__ArcResAcc__ArcResAcc_001207d8(post_drag_window.addr() + 0x24u, vtable_PostDragWindow, r2_1, post_drag_window.addr() + 0xcu);  // (from the original)
    u32 r0_4 = Layout__Layout(r0_2 + 0x248u);  // (from the original)
    u32 r0_5 = r0_4 + 0x14cu;  // (from the original)
    construct_layout_animation(r0_5);
    u32 r0_6 = r0_5 + 0x28u;  // (from the original)
    construct_layout_animation(r0_6);
    u32 r0_7 = r0_6 + 0x28u;  // (from the original)
    construct_layout_animation(r0_7);
    u32 r0_8 = r0_7 + 0x28u;  // (from the original)
    construct_layout_animation(r0_8);
    gptr<Local_00274500_r0_9> r0_9 = gptr<Local_00274500_r0_9>(r0_8 + 0x28u);  // (from the original)
    construct_control_button_base(r0_9.addr(), r0_9.addr() + 0x118u, 2u);  // (from the original)
    r0_9->word_0 = vtable_Control2Button;
    r0_9->word_e4 = vtable_Control2Button_at_e4;
    u32 r0_11 = for_each_element(r0_9.addr() + 0x118u, 0x2e0994u, 0x518u, 2u);  // (from the original)
    u32 r0_13 = for_each_element(r0_11 + 0xa30u, 0x2e37acu, 0x2b4u, 0xau);  // (from the original)
    u32 r0_14 = r0_13 + 0x1b08u;  // (from the original)
    LetterDragIconGroup__LetterDragIconGroup(r0_14);
    u32 r0_15 = r0_14 - 0x2aa8u;  // (from the original)
    *gptr<u32>(r0_15 + 0x2be8u) = 0;  // (from the original)
    *gptr<u32>(r0_15 + 0x2becu) = 0;  // (from the original)
    *gptr<u8>(r0_15 + 0x2bf0u) = 0;  // (from the original)
    *gptr<u8>(r0_15 + 0x2bf1u) = 0;  // (from the original)
    guest::cpu()->r[1] = 0x2be8u;  // (from the original)
    return r0_15;
}

}  // namespace d_00274500
GUEST_EXPORT_FRAMED(0x00274500, d_00274500::PostDragWindow__PostDragWindow, 0x4010);  // pushes {r4, lr} first, as the original

// f_0027460c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0027460c {

inline constexpr u32 vtable_DragIconGroup = 0x008ee248u;
inline constexpr u32 vtable_DragIconGroup_at_c = 0x008ee258u;
inline constexpr u32 vtable_Control2Button = 0x008ef284u;
inline constexpr u32 vtable_Control2Button_at_e4 = 0x008ef2c8u;
inline constexpr u32 vtable_PostDragWindow = 0x008ef6e0u;
inline constexpr guest::Function<0x002f76ad, u32(u32, u32, u32, u32)> destroy_array_elements;
inline constexpr guest::Function<0x002f770c, u32(u32)> ControlButtonBase__virtual_0_002f770c;
inline constexpr guest::Function<0x00567ef0, u32(u32)> ssys__ma__lyt__ArcResAccReader__destructor;
inline constexpr guest::Function<0x0056988c, u32(u32, u32, u32, u32)> destroy_animation;
inline constexpr guest::Function<0x005bf744, u32(u32)> Layout__destructor;

u32 PostDragWindow__destructor(gptr<PostDragWindow> post_drag_window, u32 r1_unused, u32 r2_unused, u32 r3) {
    post_drag_window->word_0 = vtable_PostDragWindow;
    post_drag_window->word_2aa8 = vtable_DragIconGroup;
    post_drag_window->word_2ab4 = vtable_DragIconGroup_at_c;
    u32 r0_1 = post_drag_window.addr() + 0x2bbcu;  // (from the original)
    destroy_animation(r0_1, vtable_DragIconGroup_at_c, vtable_DragIconGroup, r3);
    destroy_animation(r0_1 - 0x28u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    destroy_animation(r0_1 - 0x50u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    destroy_animation(r0_1 - 0x78u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    destroy_animation(r0_1 - 0xa0u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    destroy_animation(r0_1 - 0xc8u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    destroy_animation(r0_1 - 0xf4u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    destroy_array_elements(r0_1 - 0x1c1cu, 0x2e3854u, 0x2b4u, 0xau);  // (from the original)
    post_drag_window->word_458 = vtable_Control2Button;
    post_drag_window->word_53c = vtable_Control2Button_at_e4;
    destroy_array_elements(r0_1 - 0x264cu, 0x2e0b3cu, 0x518u, 2u);  // (from the original)
    ControlButtonBase__virtual_0_002f770c(r0_1 - 0x2764u);  // (from the original)
    destroy_animation(r0_1 - 0x278cu, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    destroy_animation(r0_1 - 0x27b4u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    destroy_animation(r0_1 - 0x27dcu, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    destroy_animation(r0_1 - 0x2804u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_15 = Layout__destructor(r0_1 - 0x2950u);  // (from the original)
    u32 r0_17 = ssys__ma__lyt__ArcResAccReader__destructor(r0_15 - 0x248u);  // (from the original)
    return r0_17 - 0x24u;  // (from the original)
}

}  // namespace d_0027460c
GUEST_EXPORT_FRAMED(0x0027460c, d_0027460c::PostDragWindow__destructor, 0x4010);  // pushes {r4, lr} first, as the original

// f_00274754: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00274754 {

struct __attribute__((packed)) Object_00274754_0 {
    u8 unknown_0[0x654];  // (not used here)
    u32 word_654;
    u8 unknown_658[0x264d];  // (not used here)
    u8 byte_2ca5;
};
GUEST_OFFSET(Object_00274754_0, word_654, 0x654);
GUEST_OFFSET(Object_00274754_0, byte_2ca5, 0x2ca5);

inline constexpr u32 global_0094fd4c_address = 0x0094fd4cu;
inline guest::global<u32, 0x0094fd4c> global_0094fd4c;
inline constexpr guest::Function<0x0031ec78, u32(u32, u32, u32, u32)> ItemSelectWindow__load_layout;
inline constexpr guest::Function<0x00567e24, u32(u32, u32, u32, u32)> load_layout_archive;

u32 f_00274754(gptr<Object_00274754_0> arg0, u32 r1, u32 r2) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    ItemSelectWindow__load_layout(arg0.addr() + 0x2788u, r1, r2, guest::cpu()->r[3]);  // (from the original)
    u32 r1_1 = *global_0094fd4c;
    if (r1_1 == 0) {
        *gptr<u8>(arg0.addr() + 0x2ca5u) = 0;  // (from the original)
        load_layout_archive(arg0.addr() + 0x40cu, 0x2747e4u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    } else {
        arg0->byte_2ca5 = 1;
        arg0->word_654 = r1_1;
    }
    frame.release();
    return load_layout_archive(arg0.addr() + 0x170u, 0x2747c4u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
}

}  // namespace d_00274754
GUEST_EXPORT(0x00274754, d_00274754::f_00274754);

// f_0027480c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0027480c {

struct __attribute__((packed)) Local_0027480c_r3_2 {
    u8 unknown_0[0xd4];  // (not used here)
    u32 word_d4;
};
GUEST_OFFSET(Local_0027480c_r3_2, word_d4, 0xd4);


void f_0027480c(u32 r0, u32 r1) {
    u32 r2 = 0u;
    do {
        u32 r3_1 = r2 * 0xfu;  // (from the original)
        r2 += 1u;
        gptr<Local_0027480c_r3_2> r3_2 = gptr<Local_0027480c_r3_2>(r0 + r3_1 * 0x38u + 0x8e0u);  // (from the original)
        u32 r12_1 = r3_2->word_d4;
        r3_2->word_d4 = r1 == 0 ? r12_1 & ~8u : r12_1 | 8u;
        guest::preempt();
    } while (s32(r2) < 0xa);  // (from the original)
}

}  // namespace d_0027480c
GUEST_EXPORT(0x0027480c, d_0027480c::f_0027480c);

// f_00275798: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00275798 {

struct __attribute__((packed)) Object_00275798_0 {
    u8 unknown_0[0x2ca5];  // (not used here)
    u8 byte_2ca5;
};
GUEST_OFFSET(Object_00275798_0, byte_2ca5, 0x2ca5);

inline constexpr guest::Function<0x00132364, u32(u32, u32, u32, u32)> release_layout_parts;
inline constexpr guest::Function<0x001323b4, u32(u32)> layout_at_10_virtual_8;
inline constexpr guest::Function<0x002f6d18, u32(u32)> call_002f6d18;
inline constexpr guest::Function<0x0031eb20, u32(u32, u32, u32, u32)> call_0031eb20;

void f_00275798(gptr<Object_00275798_0> arg0) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 r0 = arg0.addr();
    u32 r5 = r0;
    release_layout_parts(r0 + 0x170u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    if (arg0->byte_2ca5 == 0) {
        release_layout_parts(r5 + 0x40cu, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    }
    u32 r0_4 = layout_at_10_virtual_8(r5 + 0x24u);  // (from the original)
    call_002f6d18(r0_4);
    u32 r4 = 0u;
    do {
        layout_at_10_virtual_8(r5 + r4 * 0xfu * 0x38u + 0x684u);  // (from the original)
        r4 += 1u;
        guest::preempt();
    } while (s32(r4) < 0xa);  // (from the original)
    frame.release();
    call_0031eb20((r5 + 0x2400u) + 0x388u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    return;  // (from the original)
}

}  // namespace d_00275798
GUEST_EXPORT(0x00275798, d_00275798::f_00275798);

// f_00275808: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00275808 {

inline constexpr u32 vtable_SantaBagWindow = 0x008ef6f4u;
inline guest::global<u32, 0x008874f8> global_008874f8;
inline guest::global<u32, 0x008874fc> global_008874fc;
inline constexpr guest::Function<0x001207d8, u32(u32)> ssys__ma__lyt__ArcResAcc__ArcResAcc_001207d8;
inline constexpr guest::Function<0x00125aec, u32(u32)> construct_layout_animation;
inline constexpr guest::Function<0x00125e3c, u32(u32, u32, u32, u32)> Layout__Layout;
inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> for_each_element;
inline constexpr guest::Function<0x0031ecbc, u32(u32)> ItemSelectNameWindow__ItemSelectNameWindow;

u32 SantaBagWindow__SantaBagWindow(gptr<SantaBagWindow> santa_bag_window) {
    santa_bag_window->word_4 = 0;
    santa_bag_window->byte_8 = 0;
    u32 r2_1 = *global_008874fc;
    santa_bag_window->word_c = *global_008874f8;
    santa_bag_window->word_10 = r2_1;
    santa_bag_window->word_14 = 0;
    santa_bag_window->byte_18 = 0;
    santa_bag_window->word_1c = 0;
    santa_bag_window->word_0 = vtable_SantaBagWindow;
    santa_bag_window->word_20 = 0;
    u32 r0_2 = Layout__Layout(santa_bag_window.addr() + 0x24u, vtable_SantaBagWindow, r2_1, santa_bag_window.addr() + 0xcu);  // (from the original)
    u32 r0_4 = ssys__ma__lyt__ArcResAcc__ArcResAcc_001207d8(r0_2 + 0x14cu);  // (from the original)
    construct_layout_animation(r0_4 + 0x248u);  // (from the original)
    construct_layout_animation(r0_4 + 0x270u);  // (from the original)
    u32 ea_1 = r0_4 + 0x298u;  // (from the original)
    *gptr<u32>(ea_1) = 0;
    u32 r0_8 = ssys__ma__lyt__ArcResAcc__ArcResAcc_001207d8(ea_1 + 4u);
    u32 ea_2 = r0_8 + 0x248u;  // (from the original)
    *gptr<u32>(ea_2) = 0;
    construct_layout_animation(ea_2 + 4u);
    u32 r0_11 = for_each_element(ea_2 + 0x2cu, 0x20708cu, 0x348u, 0xau);  // (from the original)
    u32 r1_6 = ~0u;
    *gptr<u32>(r0_11 + 0x2100u) = r1_6;  // (from the original)
    *gptr<u32>(0x2780u - (r1_6 << 2) + (r0_11 - 0x680u)) = r1_6;  // (from the original)
    u32 r0_14 = ItemSelectNameWindow__ItemSelectNameWindow(r0_11 + 0x2108u);  // (from the original)
    *gptr<u8>(r0_14 + 0x4f0u) = 0;  // (from the original)
    *gptr<u8>(r0_14 - 0x2788u + 0x2ca4u) = 0;  // (from the original)
    *gptr<u8>(r0_14 - 0x2788u + 0x2ca5u) = 0;  // (from the original)
    return r0_14 - 0x2788u;  // (from the original)
}

}  // namespace d_00275808
GUEST_EXPORT_FRAMED(0x00275808, d_00275808::SantaBagWindow__SantaBagWindow, 0x4010);  // pushes {r4, lr} first, as the original

// f_002762c4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002762c4 {

inline constexpr u32 vtable_SoundConductor = 0x008ef714u;
inline constexpr u32 vtable_SoundHandleBindSeq = 0x008f3a54u;

void SoundConductor__SoundConductor_002762c4(gptr<SoundConductor> sound_conductor) {
    u32 r12_1 = ~0u;
    sound_conductor->word_0 = vtable_SoundConductor;
    sound_conductor->word_4 = 0;
    sound_conductor->byte_8 = 0;
    sound_conductor->word_10 = 0;
    sound_conductor->word_c = r12_1;
    sound_conductor->word_14 = 0;
    sound_conductor->word_1c = 0;
    sound_conductor->word_18 = vtable_SoundHandleBindSeq;
    sound_conductor->word_20 = 0;
    sound_conductor->word_24 = 0;
    float S0_1 = 120.0f;
    float S1_1 = 1.0f;
    sound_conductor->word_28 = 0;
    sound_conductor->float_2c = S0_1;
    sound_conductor->float_30 = S1_1;
    sound_conductor->half_34 = u16(r12_1);
    sound_conductor->half_36 = u16(r12_1);
    sound_conductor->word_38 = 0;
    sound_conductor->word_3c = 0;
    sound_conductor->word_40 = r12_1;
    sound_conductor->byte_44 = 0;
    sound_conductor->word_48 = 0;
    sound_conductor->word_4c = 0;
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
}

}  // namespace d_002762c4
GUEST_EXPORT(0x002762c4, d_002762c4::SoundConductor__SoundConductor_002762c4);

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
GUEST_OFFSET(Object_002763bc_0, word_10, 0x10);
GUEST_OFFSET(Object_002763bc_0, word_118, 0x118);
GUEST_OFFSET(Object_002763bc_0, word_11c, 0x11c);
GUEST_OFFSET(Object_002763bc_0, byte_124, 0x124);

inline constexpr u32 global_0094d548_address = 0x0094d548u;
inline guest::global<u32, 0x0094d548> global_0094d548;

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
GUEST_OFFSET(Object_0027643c_0, word_114, 0x114);

struct __attribute__((packed)) Local_0027643c_r1_1 {
    u8 unknown_0[0x14];  // (not used here)
    u32 word_14;
};
GUEST_OFFSET(Local_0027643c_r1_1, word_14, 0x14);


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

inline constexpr u32 vtable_SoundHaniwaMgr__SingletonDisposer_ = 0x008fa3e4u;
inline constexpr u32 global_0094cff4_address = 0x0094cff4u;
inline constexpr guest::Function<0x00131280, u32(u32, u32, u32, u32)> allocate_from_heap_00131280;
inline constexpr guest::Function<0x001320cc, u32(u32, u32, u32)> sead__IDisposer__IDisposer_001320cc;
inline constexpr guest::Function<0x00301444, u32(u32, u32)> clear;

void SoundHaniwaMgr__SingletonDisposer___SingletonDisposer_(u32 r0, u32 r1_unused, u32 r2_unused, u32 r3, float S0) {
    u32 r6 = global_0094cff4_address;
    if (*gptr<u32>(r6) == 0) {
        u32 block_2 = allocate_from_heap_00131280(0x1c4u, r0, 4u, r3);  // (from the original)
        S0 = guest::cpu()->s[0];
        u32 r4 = block_2;
        if (block_2 == 0) {
            *gptr<u32>(r6 + 4u) = r4;
            r4 = 0u;
        } else {
            sead__IDisposer__IDisposer_001320cc(block_2, r0, 3u);
            S0 = 1.0f;
            *gptr<u32>(block_2) = vtable_SoundHaniwaMgr__SingletonDisposer_;
            *gptr<u32>(r6 + 4u) = block_2;
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
            clear(r4 + 0x125u, 0x96u);  // (from the original)
            S0 = guest::cpu()->s[0];
        }
        *gptr<u32>(r6) = r4;
    }
    guest::cpu()->s[0] = S0;
}

}  // namespace d_0027646c
GUEST_EXPORT_FRAMED(0x0027646c, d_0027646c::SoundHaniwaMgr__SingletonDisposer___SingletonDisposer_, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_002767bc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002767bc {

struct __attribute__((packed)) Object_002767bc_0 {
    u8 unknown_0[0x114];  // (not used here)
    u32 word_114;
};
GUEST_OFFSET(Object_002767bc_0, word_114, 0x114);


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
GUEST_OFFSET(Object_0027680c_0, byte_54, 0x54);
GUEST_OFFSET(Object_0027680c_0, byte_68, 0x68);
GUEST_OFFSET(Object_0027680c_0, word_c0, 0xc0);
GUEST_OFFSET(Object_0027680c_0, word_c4, 0xc4);

inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> read_global_byte_2;
inline constexpr guest::Function<0x0032ba1c, u32(u32, u32, u32, u32)> call_0032ba1c;
inline constexpr guest::Function<0x00342ce4, u32(u32, u32, u32, u32)> call_00342ce4;

u32 f_0027680c(gptr<Object_0027680c_0> arg0, u32 r1, u32 r2) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 r0_1 = 0;
    u32 r3_1 = 0x1000f83u;  // (from the original)
    if (r1 != r3_1) {
        r0_1 = 0u;
        if (arg0->byte_68 == 0) {
            arg0->byte_54 = u8(r0_1);
            if (r1 == 0x1000f23u) {  // (from the original)
                u32 r0_2 = read_global_byte_2(r0_1, r1, 0x1000f23u, r3_1);  // (from the original)
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
GUEST_OFFSET(Object_0027689c_0, word_bc, 0xbc);

struct __attribute__((packed)) Object_0027689c_2 {
    u8 byte_0;
};
GUEST_OFFSET(Object_0027689c_2, byte_0, 0x0);

inline constexpr u32 sound_system_address = 0x0094d080u;
inline guest::global<u32, 0x0094d080> sound_system;
inline constexpr guest::Function<0x00130ed8, u32(u32, u32)> SoundHandle__detach;
inline constexpr guest::Function<0x00136e58, u32(u32, u32, u32, u32)> BasicSound__stop;
inline constexpr guest::Function<0x004c331c, u32(u32, u32)> call_004c331c;
inline constexpr guest::Function<0x004c7500, u32(u32, u32, u32, u32)> call_004c7500;
inline constexpr guest::Function<0x006b1d88, u32(u32, u32, u32, u32)> call_006b1d88;

struct __attribute__((packed)) Frame_0027689c {
    u32 word_0;
    u8 unknown_4[0x14];  // (not read or written by name)
};
GUEST_OFFSET(Frame_0027689c, word_0, 0x0);
GUEST_SIZE(Frame_0027689c, 0x18);

void f_0027689c(gptr<Object_0027689c_0> arg0, u32 r1, gptr<Object_0027689c_2> arg2, u32 r3) {
    guest::StackFrameOf<Frame_0027689c> frame;  // the original's stack frame
    frame->word_0 = r3;
    if (arg2->byte_0 <= 0xdu) {  // (from the original)
        u32 r0_1 = arg0->word_bc;
        if (r0_1 != 0) {
            BasicSound__stop(r0_1, 0u, arg2.addr(), r3);
        }
        if (arg2->byte_0 == 0xdu) {  // (from the original)
            u32 r0_2 = *sound_system;
            frame.release();
            call_006b1d88(r0_2, arg0.addr() + 0xbcu, 0x1000476u, sound_system_address);
            return;
        }
        u32 r2_1 = r1;
        if (r1 != 0x1000475u) {  // (from the original)
            r2_1 = 0x1000475u;  // (from the original)
        }
        call_006b1d88(*sound_system, arg0.addr() + 0xbcu, r2_1, sound_system_address);  // (from the original)
        call_004c331c(frame.at(0).addr(), arg0.addr() + 0xbcu);  // (from the original)
        u32 r0_5 = frame->word_0;
        u32 r1_4 = 0u;
        u32 r2_3 = *gptr<s16>((u32(arg2->byte_0) << 1) + 0x83b196u);  // (from the original)
        if (r0_5 != 0) {
            call_004c7500(r0_5, r1_4, r2_3, 0x83b196u);  // (from the original)
            r1_4 = guest::cpu()->r[1];
        }
        SoundHandle__detach(frame.at(0).addr(), r1_4);
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
GUEST_OFFSET(Object_00276c98_0, byte_34, 0x34);
GUEST_OFFSET(Object_00276c98_0, word_74, 0x74);

inline constexpr guest::Function<0x0020a4cc, u32(u32, u32, u32, u32)> SoundObjBase__virtual_2;

void f_00276c98(gptr<Object_00276c98_0> arg0, u32 r1, u32 r2, u32 r3) {
    if (arg0->byte_34 != 0 || r1 >= 0x83u) {  // (from the original)
        guest::cpu()->r[1] = r1;
        return;
    }
    arg0->word_74 = r1 + 0x1000a96u;  // (from the original)
    SoundObjBase__virtual_2(arg0.addr(), r2, r3, r3);
}

}  // namespace d_00276c98
GUEST_EXPORT(0x00276c98, d_00276c98::f_00276c98);

// f_00276cdc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00276cdc {

struct __attribute__((packed)) Object_00276cdc_0 {
    u8 unknown_0[0x74];  // (not used here)
    u32 word_74;
};
GUEST_OFFSET(Object_00276cdc_0, word_74, 0x74);

inline constexpr guest::Function<0x00130ed8, u32(u32, u32)> SoundHandle__detach;
inline constexpr guest::Function<0x004c331c, u32(u32, u32, u32, u32)> call_004c331c;
inline constexpr guest::Function<0x004c74b0, u32(u32, u32)> call_004c74b0;

struct __attribute__((packed)) Frame_00276cdc {
    u32 word_0;
};
GUEST_OFFSET(Frame_00276cdc, word_0, 0x0);
GUEST_SIZE(Frame_00276cdc, 0x4);

void f_00276cdc(gptr<Object_00276cdc_0> arg0, u32 r1_unused, u32 r2_unused, u32 r3, float S0) {
    guest::StackFrameOf<Frame_00276cdc> frame;  // the original's stack frame
    u32 r0 = arg0.addr();
    frame->word_0 = r3;
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
            u32 r1_1 = *gptr<u32>(r4 + 0x7cu);  // (from the original)
            u32 r0_3 = frame->word_0;
            float S0_1 = std::bit_cast<float>(*gptr<u32>(r1_1 + 0x120u));  // (from the original)
            if (r0_3 != 0) {
                guest::cpu()->s[0] = S0_1;
                call_004c74b0(r0_3, r1_1);
                r1_1 = guest::cpu()->r[1];
                S0_1 = guest::cpu()->s[0];
            }
            guest::cpu()->s[0] = S0_1;
            SoundHandle__detach(frame.at(0).addr(), r1_1);
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
    float float_94;
    u8 byte_98;
    u8 unknown_99[0x3];  // (not used here)
    float float_9c;
    u16 half_a0;
    u16 half_a2;
    u16 half_a4;
    u16 half_a6;
    u16 half_a8;
};
GUEST_OFFSET(Local_00277b4c_ea_2, word_0, 0x0);
GUEST_OFFSET(Local_00277b4c_ea_2, word_4, 0x4);
GUEST_OFFSET(Local_00277b4c_ea_2, word_78, 0x78);
GUEST_OFFSET(Local_00277b4c_ea_2, word_7c, 0x7c);
GUEST_OFFSET(Local_00277b4c_ea_2, word_80, 0x80);
GUEST_OFFSET(Local_00277b4c_ea_2, byte_84, 0x84);
GUEST_OFFSET(Local_00277b4c_ea_2, half_86, 0x86);
GUEST_OFFSET(Local_00277b4c_ea_2, half_88, 0x88);
GUEST_OFFSET(Local_00277b4c_ea_2, half_8a, 0x8a);
GUEST_OFFSET(Local_00277b4c_ea_2, half_8c, 0x8c);
GUEST_OFFSET(Local_00277b4c_ea_2, half_8e, 0x8e);
GUEST_OFFSET(Local_00277b4c_ea_2, half_90, 0x90);
GUEST_OFFSET(Local_00277b4c_ea_2, float_94, 0x94);
GUEST_OFFSET(Local_00277b4c_ea_2, byte_98, 0x98);
GUEST_OFFSET(Local_00277b4c_ea_2, float_9c, 0x9c);
GUEST_OFFSET(Local_00277b4c_ea_2, half_a0, 0xa0);
GUEST_OFFSET(Local_00277b4c_ea_2, half_a2, 0xa2);
GUEST_OFFSET(Local_00277b4c_ea_2, half_a4, 0xa4);
GUEST_OFFSET(Local_00277b4c_ea_2, half_a6, 0xa6);
GUEST_OFFSET(Local_00277b4c_ea_2, half_a8, 0xa8);

inline constexpr u32 vtable_SoundObjHaniwa = 0x008ef798u;
inline constexpr u32 vtable_SoundObj_2_ = 0x008f8dc8u;
inline constexpr guest::Function<0x0020af18, u32(u32, u32, u32, u32)> SoundObjBase__SoundObjBase;
inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> for_each_element;

u32 SoundObj_2___SoundObj_00277b4c(gptr<SoundObj_2_> sound_obj, u32 r1, u32 r2, u32 r3, float S0, float S1) {
    SoundObjBase__SoundObjBase(sound_obj.addr(), r1, r2, r3);
    sound_obj->word_0 = vtable_SoundObj_2_;
    u32 r0_2 = for_each_element(sound_obj.addr() + 0x44u, 0x131800u, 4u, 2u);  // (from the original)
    u32 r0_4 = for_each_element(r0_2 + 8u, 0x1287a8u, 0x14u, 2u);  // (from the original)
    u32 r2_1 = ~0u;
    *gptr<u32>(r0_4 + 0x28u) = r2_1;  // (from the original)
    gptr<Local_00277b4c_ea_2> ea_2 = gptr<Local_00277b4c_ea_2>(r0_4 - 0x4cu);  // (from the original)
    ea_2->word_0 = vtable_SoundObjHaniwa;
    ea_2->word_7c = 0;
    ea_2->word_78 = r2_1;
    ea_2->word_80 = 0;
    ea_2->byte_84 = 0;
    ea_2->half_86 = u16(r2_1);
    ea_2->half_88 = u16(r2_1);
    ea_2->half_8a = 0;
    ea_2->half_8c = u16(r2_1);
    float S0_3 = 1.0f;
    ea_2->half_8e = u16(r2_1);
    ea_2->half_90 = 0;
    float S1_3 = -1.0f;
    ea_2->float_94 = S0_3;
    ea_2->byte_98 = 0;
    ea_2->float_9c = S1_3;
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
GUEST_EXPORT_FRAMED(0x00277b4c, d_00277b4c::SoundObj_2___SoundObj_00277b4c, 0x4010);  // pushes {r4, lr} first, as the original

// f_00277c1c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00277c1c {

inline constexpr u32 vtable_SoundObjHaniwa = 0x008ef798u;
inline constexpr u32 vtable_SoundObj_2_ = 0x008f8dc8u;
inline constexpr guest::Function<0x00136cc8, u32(u32, u32, u32, u32)> detach_from_parent;
inline constexpr guest::Function<0x00136e58, u32(u32, u32, u32, u32)> BasicSound__stop;
inline constexpr guest::Function<0x0020aedc, u32(u32, u32, u32, u32)> stop_base;
inline constexpr guest::Function<0x0027643c, u32(u32, u32, u32, u32)> call_0027643c;
inline constexpr guest::Function<0x002f76ad, u32(u32, u32, u32, u32)> destroy_array_elements;

u32 SoundObjHaniwa__destructor(gptr<SoundObjHaniwa> sound_obj_haniwa, u32 r1, u32 r2, u32 r3) {
    u32 r0 = sound_obj_haniwa.addr();
    u32 r5 = 0;
    u32 cf_3 = 0;
    u32 r6 = r0;
    u32 r4 = r6;
    u32 r7 = ~0u;
    sound_obj_haniwa->word_0 = vtable_SoundObjHaniwa;
    if (sound_obj_haniwa->word_78 < 0x40u) {  // (from the original)
        r1 = 0u;
        r2 = sound_obj_haniwa->word_74;
        r3 = r4 + 0x44u;  // (from the original)
        r5 = r1;
L_277c5c:;
        r0 = r3 + (r1 << 2);
L_277c60:;
        u32 r0_1 = *gptr<u32>(r0);
        if ((r0_1 == 0 ? ~0u : *gptr<u32>(r0_1 + 0xb0u)) != r2) {  // (from the original)
            r1 += 1u;
            if (s32(r1) < 2) {
                r0 = r3;
                if (r1 >= 2u) {
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
                    BasicSound__stop(r0_2, 0u, r2, r3);
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
        detach_from_parent(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r4 += 1u;
        if (s32(r4) < 2) {
            if (r4 >= 2u) {
                r0 = r5;
                guest::preempt();
                goto L_277cf0;
            }
            guest::preempt();
            goto L_277cec;
        }
        stop_base(r7, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
    }
    r5 = r6 + 0x44u;  // (from the original)
    r4 = 0u;
    *gptr<u32>(r6) = vtable_SoundObj_2_;
    do {
        u32 r0_4 = r5;
        if (r4 < 2u) {
            r0_4 = r5 + (r4 << 2);
        }
        detach_from_parent(r0_4, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r4 += 1u;
        guest::preempt();
    } while (s32(r4) < 2);
    stop_base(r6, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r5 = r6 + 0x44u;  // (from the original)
    r4 = 0u;
    r0 = r5;
    do {
        r0 += (r4 << 2);
        do {
            detach_from_parent(r0, r1, r2, r3);
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            r4 += 1u;
            cf_3 = r4 >= 2u;
            r0 = r5;
            if (s32(r4) >= 2) {
                destroy_array_elements(r0, 0x137d74u, 4u, 2u);  // (from the original)
                return r5 - 0x44u;  // (from the original)
            }
            guest::preempt();
        } while (cf_3);
        guest::preempt();
    } while (1);
}

}  // namespace d_00277c1c
GUEST_EXPORT_FRAMED(0x00277c1c, d_00277c1c::SoundObjHaniwa__destructor, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_00277d98: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00277d98 {

inline constexpr guest::Function<0x0020a4cc, u32(u32, u32, u32, u32)> SoundObjBase__virtual_2;
inline constexpr guest::Function<0x002a5fa8, u32(u32, u32, u32, u32)> call_002a5fa8;

u32 SoundObjPlayer__virtual_2(gptr<SoundObjPlayer> sound_obj_player, u32 r1, u32 r2) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 r0_1 = sound_obj_player->byte_34;
    if (r0_1 == 0) {
        call_002a5fa8(sound_obj_player.addr() + 0xa4u, sound_obj_player.addr(), r2, guest::cpu()->r[3]);  // (from the original)
        frame.release();
        return SoundObjBase__virtual_2(sound_obj_player.addr(), r1, r2, guest::cpu()->r[3]);
    }
    guest::cpu()->r[1] = r1;
    return r0_1;
}

}  // namespace d_00277d98
GUEST_EXPORT(0x00277d98, d_00277d98::SoundObjPlayer__virtual_2);

// f_00277f80: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00277f80 {

inline constexpr guest::Function<0x00136cc8, u32(u32)> detach_from_parent;
inline constexpr guest::Function<0x0020aedc, u32(u32, u32)> stop_base;
inline constexpr guest::Function<0x002a6594, u32(u32, u32, u32, u32)> call_002a6594;

u32 stop_player(gptr<SoundObjPlayer> sound_obj_player) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 r0 = sound_obj_player.addr();
    u32 cf_1 = 0;
    u32 r4_1 = r0;
    r0 = sound_obj_player->byte_34;
    if (r0 != 0) {
        call_002a6594(r4_1 + 0xa4u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        u32 r5 = r4_1 + 0x44u;  // (from the original)
        u32 r6 = r4_1;
        u32 r4 = 0u;
        r0 = r5;
        do {
            r0 += (r4 << 2);
            do {
                detach_from_parent(r0);
                r4 += 1u;
                cf_1 = r4 >= 4u;
                if (s32(r4) >= 4) {
                    frame.release();
                    return stop_base(r6, guest::cpu()->r[1]);
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
GUEST_EXPORT(0x00277f80, d_00277f80::stop_player);

// f_00277fe4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00277fe4 {

struct __attribute__((packed)) Local_00277fe4_r0_6 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
    u8 unknown_8[0xb4];  // (not used here)
    u8 byte_bc;
};
GUEST_OFFSET(Local_00277fe4_r0_6, word_4, 0x4);
GUEST_OFFSET(Local_00277fe4_r0_6, byte_bc, 0xbc);

inline constexpr u32 vtable_SoundObjPlayer = 0x008ef7d8u;
inline constexpr u32 vtable_SoundObj_4_ = 0x008f8e48u;
inline constexpr guest::Function<0x0020af18, u32(u32, u32, u32, u32)> SoundObjBase__SoundObjBase;
inline constexpr guest::Function<0x002a65d0, u32(u32)> call_002a65d0;
inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> for_each_element;

u32 SoundObj_4___SoundObj(gptr<SoundObj_4_> sound_obj, u32 r1, u32 r2, u32 r3) {
    SoundObjBase__SoundObjBase(sound_obj.addr(), r1, r2, r3);
    sound_obj->word_0 = vtable_SoundObj_4_;
    u32 r0_2 = for_each_element(sound_obj.addr() + 0x44u, 0x131800u, 4u, 4u);  // (from the original)
    u32 r0_4 = for_each_element(r0_2 + 0x10u, 0x1287a8u, 0x14u, 4u);  // (from the original)
    *gptr<u32>(r0_4 - 0x54u) = vtable_SoundObjPlayer;  // (from the original)
    u32 r0_5 = r0_4 + 0x50u;  // (from the original)
    call_002a65d0(r0_5);
    gptr<Local_00277fe4_r0_6> r0_6 = gptr<Local_00277fe4_r0_6>(r0_5 - 0xa4u);  // (from the original)
    r0_6->byte_bc = 0;
    r0_6->word_4 = 0;
    return r0_6.addr();
}

}  // namespace d_00277fe4
GUEST_EXPORT_FRAMED(0x00277fe4, d_00277fe4::SoundObj_4___SoundObj, 0x4010);  // pushes {r4, lr} first, as the original

// f_002783c4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002783c4 {

struct __attribute__((packed)) Object_002783c4_0 {
    u8 unknown_0[0x10];  // (not used here)
    u32 word_10;
    u32 word_14;
    u32 word_18;
};
GUEST_OFFSET(Object_002783c4_0, word_10, 0x10);
GUEST_OFFSET(Object_002783c4_0, word_14, 0x14);
GUEST_OFFSET(Object_002783c4_0, word_18, 0x18);

inline constexpr u32 sound_system_address = 0x0094d080u;
inline guest::global<u32, 0x0094d080> sound_system;
inline constexpr guest::Function<0x0013c1e8, u32(u32, u32, u32)> call_0013c1e8;
inline constexpr guest::Function<0x0013c240, u32(u32, u32, u32, u32)> call_0013c240;
inline constexpr guest::Function<0x004c9310, u32(u32, u32)> call_004c9310;
inline constexpr guest::Function<0x0073e1c0, u32(u32, u32, u32)> call_0073e1c0;

struct __attribute__((packed)) Frame_002783c4 {
    u32 word_0;
    u8 unknown_4[0x14];  // (not read or written by name)
    u32 word_18;
    u32 word_1c;
    u32 word_20;
    u32 word_24;
    u32 word_28;
    u32 word_2c;
    u8 byte_30;
    u8 byte_31;
    u8 unknown_32[0x6];  // (not read or written by name)
    u32 word_38;
    u8 unknown_3c[0x8];  // (not read or written by name)
};
GUEST_OFFSET(Frame_002783c4, word_0, 0x0);
GUEST_OFFSET(Frame_002783c4, word_18, 0x18);
GUEST_OFFSET(Frame_002783c4, word_1c, 0x1c);
GUEST_OFFSET(Frame_002783c4, word_20, 0x20);
GUEST_OFFSET(Frame_002783c4, word_24, 0x24);
GUEST_OFFSET(Frame_002783c4, word_28, 0x28);
GUEST_OFFSET(Frame_002783c4, word_2c, 0x2c);
GUEST_OFFSET(Frame_002783c4, byte_30, 0x30);
GUEST_OFFSET(Frame_002783c4, byte_31, 0x31);
GUEST_OFFSET(Frame_002783c4, word_38, 0x38);
GUEST_SIZE(Frame_002783c4, 0x44);

void f_002783c4(gptr<Object_002783c4_0> arg0, u32 r1) {
    guest::StackFrameOf<Frame_002783c4> frame;  // the original's stack frame
    u32 r6_1 = *gptr<u32>(*gptr<u32>(*sound_system + 0xc0cu) + 0x144u);  // (from the original)
    u32 r7_1 = *gptr<u32>(*sound_system + 0xc10u);  // (from the original)
    frame->word_18 = 0;
    frame->byte_30 = 0;
    frame->word_2c = 0;
    frame->byte_31 = 0;
    u32 r0_1 = ~0u;
    frame->word_1c = r0_1;
    frame->word_20 = r0_1;
    frame->word_24 = r0_1;
    frame->word_28 = r0_1;
    u32 r0_2 = call_0013c240(r7_1, r1, frame.at(0x18).addr(), guest::cpu()->r[3]);  // (from the original)
    if (r0_2 != 0) {
        u32 r2_2 = frame.at(0).addr();
        arg0->word_14 = frame->word_18;
        u32 r0_3 = call_0013c1e8(r7_1, r1, r2_2);
        if (r0_3 != 0) {
            u32 r0_4 = call_0073e1c0(r6_1, frame->word_0, r2_2);
            call_004c9310(frame.at(0x34).addr(), r0_4);  // (from the original)
            u32 r0_6 = frame->word_38;
            arg0->word_10 = r1;
            arg0->word_18 = r0_6;
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
GUEST_OFFSET(Object_00278484_0, byte_1c, 0x1c);

inline constexpr guest::Function<0x002782dc, u32(u32, u32, u32, u32)> call_002782dc;

struct __attribute__((packed)) Frame_00278484 {
    u32 word_0;
};
GUEST_OFFSET(Frame_00278484, word_0, 0x0);
GUEST_SIZE(Frame_00278484, 0x4);

void f_00278484(gptr<Object_00278484_0> arg0, u32 r1_unused, u32 r2_unused, u32 r3) {
    guest::StackFrameOf<Frame_00278484> frame;  // the original's stack frame
    frame->word_0 = r3;
    u32 r12_1 = *frame.at<u32>(8);
    arg0->byte_1c = u8(r3);
    frame->word_0 = r12_1;
    call_002782dc(arg0.addr(), guest::cpu()->r[1], guest::cpu()->r[2], 3u);
}

}  // namespace d_00278484
GUEST_EXPORT_FRAMED(0x00278484, d_00278484::f_00278484, 0x4000);  // pushes {lr} first, as the original

// f_002796a0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002796a0 {

struct __attribute__((packed)) Object_002796a0_1 {
    u32 word_0;
};
GUEST_OFFSET(Object_002796a0_1, word_0, 0x0);

struct __attribute__((packed)) Local_002796a0_r0_1 {
    u8 unknown_0[0x146];  // (not used here)
    u8 byte_146;
    u8 byte_147;
};
GUEST_OFFSET(Local_002796a0_r0_1, byte_146, 0x146);
GUEST_OFFSET(Local_002796a0_r0_1, byte_147, 0x147);

inline constexpr guest::Function<0x0012e8e8, u32(u32, u32)> DuckingFader__virtual_2;
inline constexpr guest::Function<0x0020a474, u32(u32, u32, u32)> call_0020a474;

u32 f_002796a0(u32 r0, gptr<Object_002796a0_1> arg1, u32 r2, float S0) {
    u32 r1_1 = arg1->word_0;
    u32 r3_1 = r0 + r1_1 * 0x1cu;  // (from the original)
    u32 r12_1 = *gptr<u32>(r3_1 + 0x24u);  // (from the original)
    if (r12_1 == 4u || r12_1 == 5u) {
        guest::cpu()->r[1] = r1_1;
        return r0;
    }
    float S0_1 = 1.0f;
    if (r2 == 0) {
        gptr<Local_002796a0_r0_1> r0_1 = gptr<Local_002796a0_r0_1>(r0 + r1_1 * 0xcu);  // (from the original)
        u32 r2_1 = r0_1->byte_146;
        u32 r1_2 = r0_1->byte_147;
        guest::cpu()->s[0] = S0_1;
        return call_0020a474(r3_1 + 0xcu, r1_2, r2_1);  // (from the original)
    }
    guest::cpu()->s[0] = S0_1;
    return DuckingFader__virtual_2(r3_1 + 0xcu, r1_1);  // (from the original)
}

}  // namespace d_002796a0
GUEST_EXPORT(0x002796a0, d_002796a0::f_002796a0);

// f_00279984: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00279984 {

struct __attribute__((packed)) Object_00279984_1 {
    u8 unknown_0[0x83de92];  // (not used here)
    u8 byte_83de92;
};
GUEST_OFFSET(Object_00279984_1, byte_83de92, 0x83de92);

struct __attribute__((packed)) Local_00279984_r4_1 {
    u8 unknown_0[0x434];  // (not used here)
    u8 byte_434;
};
GUEST_OFFSET(Local_00279984_r4_1, byte_434, 0x434);

inline constexpr u32 sound_system_address = 0x0094d080u;
inline guest::global<u32, 0x0094d080> sound_system;
inline constexpr guest::Function<0x002bcd40, u32(u32, u32)> call_002bcd40;
inline constexpr guest::Function<0x004bf06c, u32(u32, u32, u32, u32)> call_004bf06c;
inline constexpr guest::Function<0x00766f04, u32(u32, u32, u32, u32)> list_value_c14;

void f_00279984(u32 r0, gptr<Object_00279984_1> arg1, float S0) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    if (arg1.addr() >= 0x12u) {  // (from the original)
        return;
    }
    u32 r2_1 = arg1->byte_83de92;
    if (r2_1 != 1u) {
        u32 r0_1 = *sound_system;
        u32 r0_2 = list_value_c14(r0_1, arg1.addr(), r2_1, guest::cpu()->r[3]);
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
    float S0_2 = 0.0f;
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
GUEST_OFFSET(Object_00279a08_1, byte_83de92, 0x83de92);

inline constexpr u32 sound_system_address = 0x0094d080u;
inline guest::global<u32, 0x0094d080> sound_system;
inline constexpr guest::Function<0x002bcd40, u32(u32, u32)> call_002bcd40;
inline constexpr guest::Function<0x004bf06c, u32(u32, u32, u32, u32)> call_004bf06c;
inline constexpr guest::Function<0x00766f04, u32(u32, u32, u32, u32)> list_value_c14;

void f_00279a08(u32 r0, gptr<Object_00279a08_1> arg1, u32 r2, float S0) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    if (arg1.addr() >= 0x12u) {  // (from the original)
        return;
    }
    if (arg1->byte_83de92 != 1u) {
        u32 r0_1 = *sound_system;
        u32 r0_2 = list_value_c14(r0_1, arg1.addr(), r2, guest::cpu()->r[3]);
        frame.release();
        call_004bf06c(r0_2, 0u, r2, guest::cpu()->r[3]);
        return;
    }
    float S0_2 = std::bit_cast<float>(*gptr<u32>(r0 + (arg1.addr() << 2) + 0x3ecu));  // (from the original)
    guest::cpu()->s[0] = S0_2;
    call_002bcd40(r0 + arg1.addr() * 0x1cu + 0x1f4u, r2);  // (from the original)
    *gptr<u8>(r0 + arg1.addr() + 0x434u) = 0;  // (from the original)
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
GUEST_OFFSET(Local_00279e9c_r4_1, byte_26, 0x26);
GUEST_OFFSET(Local_00279e9c_r4_1, byte_27, 0x27);
GUEST_OFFSET(Local_00279e9c_r4_1, word_28, 0x28);

inline constexpr guest::Function<0x002e9d28, u32(u32, u32, u32, u32)> call_002e9d28;
inline constexpr guest::Function<0x00615508, u32(u32, u32)> store_constants_615508;
inline constexpr guest::Function<0x00615534, u32(u32)> call_00615534;

void f_00279e9c(u32 r0, u32 r1) {
    u32 r6 = r0;
    call_002e9d28(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r5 = 0u;
    u32 r7 = r5;
    do {
        u32 r1_1 = r5 * 3u + (r5 << 3);
        gptr<Local_00279e9c_r4_1> r4_1 = gptr<Local_00279e9c_r4_1>(r6 + (r1_1 << 2) + 0xca8u);  // (from the original)
        store_constants_615508(r4_1.addr(), r1_1);
        call_00615534(r4_1.addr() + 0x10u);  // (from the original)
        r4_1->byte_26 = u8(r7);
        r5 += 1u;
        r4_1->byte_27 = u8(r7);
        r4_1->word_28 = r7;
        guest::preempt();
    } while (r5 < 4u);
    *gptr<u32>(r6 + 0xd58u) = r7;  // (from the original)
    *gptr<u32>(r6 + 0xd5cu) = r7;  // (from the original)
    *gptr<u32>(r6 + 0xd60u) = r7;  // (from the original)
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
GUEST_OFFSET(Local_00279f00_r0_4, word_d58, 0xd58);
GUEST_OFFSET(Local_00279f00_r0_4, word_d5c, 0xd5c);
GUEST_OFFSET(Local_00279f00_r0_4, word_d60, 0xd60);

inline constexpr guest::Function<0x002e9dcc, u32(u32, u32, u32, u32)> call_002e9dcc;
inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> for_each_element;

void f_00279f00(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r0_1 = call_002e9dcc(r0, r1, r2, r3);
    u32 r0_3 = for_each_element(r0_1 + 0xca8u, 0x2a7044u, 0x2cu, 4u);  // (from the original)
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
GUEST_OFFSET(Local_00279f40_r5_1, word_870, 0x870);
GUEST_OFFSET(Local_00279f40_r5_1, word_874, 0x874);

inline constexpr guest::Function<0x001b3f24, u32(u32, u32, u32, u32)> sead__FixedSafeString_30___FixedSafeString_001b3f24;

u32 f_00279f40(u32 r0, u32 r1, u32 r2) {
    u32 r0_1 = 0;
    u32 r6 = r0;
    u32 r7 = r1;
    u32 r8 = r2;
    u32 r4 = 0u;
    u32 r9 = ~0u;
    do {
        gptr<Local_00279f40_r5_1> r5_1 = gptr<Local_00279f40_r5_1>(r6 + (r4 * 0xfu + (r4 << 8) << 3));  // (from the original)
        r0_1 = r5_1->word_870;
        u32 zf_1 = r0_1 == r7;
        if (zf_1) {
            r0_1 = r5_1->word_874;
            zf_1 = r0_1 == r8;
        }
        if (zf_1) {
            r0_1 = sead__FixedSafeString_30___FixedSafeString_001b3f24(r5_1.addr(), 0x16u, r2, guest::cpu()->r[3]);  // (from the original)
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
GUEST_OFFSET(Local_0027a004_r1_1, word_870, 0x870);
GUEST_OFFSET(Local_0027a004_r1_1, word_874, 0x874);

struct __attribute__((packed)) Local_0027a004_r1_2 {
    u8 unknown_0[0xe8];  // (not used here)
    u32 word_e8;
    u32 word_ec;
};
GUEST_OFFSET(Local_0027a004_r1_2, word_e8, 0xe8);
GUEST_OFFSET(Local_0027a004_r1_2, word_ec, 0xec);


u32 f_0027a004(u32 r0) {
    gptr<Local_0027a004_r1_2> r1_2 = gptr<Local_0027a004_r1_2>(0u);
    u32 r2 = r0;
    r0 = 0u;
    do {
        gptr<Local_0027a004_r1_1> r1_1 = gptr<Local_0027a004_r1_1>(r2 + (r0 * 0xfu + (r0 << 8) << 3));  // (from the original)
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
GUEST_OFFSET(Local_0027a060_r5_1, word_870, 0x870);
GUEST_OFFSET(Local_0027a060_r5_1, word_874, 0x874);

inline constexpr guest::Function<0x001b3f24, u32(u32, u32, u32, u32)> sead__FixedSafeString_30___FixedSafeString_001b3f24;

void f_0027a060(u32 r0) {
    u32 r6 = r0;
    u32 r4 = 0u;
    u32 r7 = ~0u;
    do {
        gptr<Local_0027a060_r5_1> r5_1 = gptr<Local_0027a060_r5_1>(r6 + (r4 * 0xfu + (r4 << 8) << 3));  // (from the original)
        sead__FixedSafeString_30___FixedSafeString_001b3f24(r5_1.addr(), 0x16u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
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
GUEST_OFFSET(Local_0027a0a0_r5_1, word_870, 0x870);
GUEST_OFFSET(Local_0027a0a0_r5_1, word_874, 0x874);

inline constexpr guest::Function<0x003059f8, u32(u32, u32, u32, u32)> Pattern__clear;

void f_0027a0a0(u32 r0) {
    u32 r6 = r0;
    u32 r4 = 0u;
    u32 r7 = ~0u;
    do {
        gptr<Local_0027a0a0_r5_1> r5_1 = gptr<Local_0027a0a0_r5_1>(r6 + (r4 * 0xfu + (r4 << 8) << 3));  // (from the original)
        Pattern__clear(r5_1.addr(), guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
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
GUEST_OFFSET(Local_0027a2bc_r12_1, word_870, 0x870);
GUEST_OFFSET(Local_0027a2bc_r12_1, word_874, 0x874);


u32 f_0027a2bc(u32 r0, u32 r1, u32 r2) {
    u32 r3 = 0u;
    do {
        gptr<Local_0027a2bc_r12_1> r12_1 = gptr<Local_0027a2bc_r12_1>(r0 + (r3 * 0xfu + (r3 << 8) << 3));  // (from the original)
        if (r12_1->word_870 + 1u == 0 && r12_1->word_874 + 1u == 0) {
            *gptr<u32>(r0 + (r3 * 0xfu + (r3 << 8) << 3) + 0x870u) = r1;  // (from the original)
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
GUEST_OFFSET(Local_0027a31c_r5_1, word_870, 0x870);
GUEST_OFFSET(Local_0027a31c_r5_1, word_874, 0x874);

inline constexpr guest::Function<0x001b3f24, u32(u32, u32, u32, u32)> sead__FixedSafeString_30___FixedSafeString_001b3f24;
inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> for_each_element;

u32 f_0027a31c(u32 r0) {
    u32 r0_1 = for_each_element(r0, 0x1b497cu, 0x878u, 8u);  // (from the original)
    u32 r2 = guest::cpu()->r[2];
    u32 r3 = guest::cpu()->r[3];
    u32 r6 = r0_1;
    u32 r4 = 0u;
    u32 r7 = ~0u;
    do {
        gptr<Local_0027a31c_r5_1> r5_1 = gptr<Local_0027a31c_r5_1>(r6 + (r4 * 0xfu + (r4 << 8) << 3));  // (from the original)
        sead__FixedSafeString_30___FixedSafeString_001b3f24(r5_1.addr(), 0x16u, r2, r3);  // (from the original)
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r4 += 1u;
        r5_1->word_870 = r7;
        r5_1->word_874 = r7;
        guest::preempt();
    } while (r4 < 8u);
    return r6;
}

}  // namespace d_0027a31c
GUEST_EXPORT_FRAMED(0x0027a31c, d_0027a31c::f_0027a31c, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_0027a4f4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0027a4f4 {

inline constexpr guest::Function<0x002fbd54, u32(u32, u32, u32, u32)> PersonalId__is_set;
inline constexpr guest::Function<0x005c6760, u32(u32, u32, u32, u32)> call_005c6760;
inline constexpr guest::Function<0x006bca58, u32(u32, u32, u32, u32)> namespace___TakumiImportPhrase__TakumiImportPhrase;

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
        u32 r5_1 = r6 + r4 * 0xa480u;  // (from the original)
        r0_2 = PersonalId__is_set(r5_1 + 0x55a6u, r1, r2, r3);  // (from the original)
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (r0_2 != 0) {
            r0_2 = namespace___TakumiImportPhrase__TakumiImportPhrase(r5_1, r7, r8, r4 & 0xffu);  // (from the original)
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

inline constexpr guest::Function<0x00301e20, u32(u32, u32, u32, u32)> is_villager_record;
inline constexpr guest::Function<0x00309ef0, u32(u32, u32)> SavedRecordInner__has_value;
inline constexpr guest::Function<0x0030e56c, u32(u32, u32)> entry_matches_identity;

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
    u32 is_villager_2 = is_villager_record(r1, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (is_villager_2 == 0) {
        return is_villager_2;
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
    r0_3 = is_villager_record(r8, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0_3 == 0) {
        goto L_27a768;
    }
    r7_1 = r5_1 + 0x8e08u;  // (from the original)
    r0_4 = SavedRecordInner__has_value(r7_1, r1);
    r1 = guest::cpu()->r[1];
    if (r0_4 == 0 || *gptr<u8>(r7_1 + 9u) >= 3u) {
        goto L_27a768;
    }
    r0_5 = entry_matches_identity(r7_1, r8);
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

inline constexpr guest::Function<0x00118c9d, u32(u32, u32)> index_of_villager_in_town;
inline constexpr guest::Function<0x002fb328, u32(u32, u32)> get_save_data;
inline constexpr guest::Function<0x00301e20, u32(u32, u32, u32, u32)> is_villager_record;
inline constexpr guest::Function<0x00309ef0, u32(u32)> SavedRecordInner__has_value;

u32 f_0027a780(u32 r0, u32 r1) {
    u32 r4 = 0;
    u32 r9 = 0;
    u32 r5_1 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r0_6 = 0;
    u32 r8_1 = 0;
    u32 r0_7 = 0;
    u32 r6 = r0;
    u32 r7 = r1;
    u32 is_villager_2 = is_villager_record(r1, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (is_villager_2 == 0) {
        return is_villager_2;
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
    r0_3 = is_villager_record(r7, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0_3 == 0) {
        goto L_27a83c;
    }
    r0_4 = get_save_data(r0_3, r1);
    r0_6 = index_of_villager_in_town(r0_4 + 0x292a4u, r7);  // (from the original)
    r8_1 = r5_1 + 0x8d4cu;  // (from the original)
    r0_7 = SavedRecordInner__has_value(r8_1);
    r1 = guest::cpu()->r[1];
    if (r0_7 == 0 || *gptr<u8>(r8_1 + 9u) != 0 || u32(*gptr<s8>(r5_1 + 0x8d5bu)) != r0_6 || r8_1 == 0) {  // (from the original)
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

inline constexpr guest::Function<0x00118c9d, u32(u32, u32)> index_of_villager_in_town;
inline constexpr guest::Function<0x002fb328, u32(u32, u32)> get_save_data;
inline constexpr guest::Function<0x00301e20, u32(u32, u32, u32, u32)> is_villager_record;
inline constexpr guest::Function<0x00309ef0, u32(u32)> SavedRecordInner__has_value;

u32 f_0027a858(u32 r0, u32 r1) {
    u32 r4 = 0;
    u32 r9 = 0;
    u32 r5_1 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r0_6 = 0;
    u32 r8_1 = 0;
    u32 r0_7 = 0;
    u32 r6 = r0;
    u32 r7 = r1;
    u32 is_villager_2 = is_villager_record(r1, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (is_villager_2 == 0) {
        return is_villager_2;
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
    r0_3 = is_villager_record(r7, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0_3 == 0) {
        goto L_27a914;
    }
    r0_4 = get_save_data(r0_3, r1);
    r0_6 = index_of_villager_in_town(r0_4 + 0x292a4u, r7);  // (from the original)
    r8_1 = r5_1 + 0x8d5cu;  // (from the original)
    r0_7 = SavedRecordInner__has_value(r8_1);
    r1 = guest::cpu()->r[1];
    if (r0_7 == 0 || *gptr<u8>(r8_1 + 9u) >= 2u || u32(*gptr<s8>(r5_1 + 0x8d6bu)) != r0_6 || r8_1 == 0) {  // (from the original)
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

inline constexpr guest::Function<0x00118c9d, u32(u32, u32)> index_of_villager_in_town;
inline constexpr guest::Function<0x002fb328, u32(u32, u32)> get_save_data;
inline constexpr guest::Function<0x00301e20, u32(u32, u32, u32, u32)> is_villager_record;
inline constexpr guest::Function<0x00309ef0, u32(u32)> SavedRecordInner__has_value;

u32 f_0027a930(u32 r0, u32 r1) {
    u32 r4 = 0;
    u32 r9 = 0;
    u32 r5_1 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r0_6 = 0;
    u32 r8_1 = 0;
    u32 r6 = r0;
    u32 r7 = r1;
    u32 is_villager_2 = is_villager_record(r1, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (is_villager_2 == 0) {
        return is_villager_2;
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
    r0_3 = is_villager_record(r7, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0_3 == 0) {
        goto L_27a9e0;
    }
    r0_4 = get_save_data(r0_3, r1);
    r0_6 = index_of_villager_in_town(r0_4 + 0x292a4u, r7);  // (from the original)
    r8_1 = r5_1 + 0x8d6cu;  // (from the original)
    SavedRecordInner__has_value(r8_1);
    r1 = guest::cpu()->r[1];
    if (*gptr<u8>(r8_1 + 9u) == 1u || u32(*gptr<s8>(r5_1 + 0x8d80u)) != r0_6 || r8_1 == 0) {  // (from the original)
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

inline constexpr guest::Function<0x00301e20, u32(u32, u32, u32, u32)> is_villager_record;
inline constexpr guest::Function<0x0076de78, u32(u32, u32, u32)> call_0076de78;

u32 f_0027a9fc(u32 r0, u32 r1, u32 r2) {
    u32 r4 = 0;
    u32 r9 = 0;
    u32 r5_1 = 0;
    u32 r0_3 = 0;
    u32 r6 = r0;
    u32 r8 = r2;
    u32 r7 = r1;
    u32 is_villager_2 = is_villager_record(r1, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (is_villager_2 == 0) {
        return is_villager_2;
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

inline constexpr guest::Function<0x001187cd, u32(u32, u32, u32, u32)> call_001187cc;
inline constexpr guest::Function<0x002fbd54, u32(u32, u32, u32, u32)> PersonalId__is_set;
inline constexpr guest::Function<0x005c6760, u32(u32, u32, u32, u32)> call_005c6760;

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
        u32 r5_1 = r6 + r4 * 0xa480u;  // (from the original)
        u32 r0_2 = PersonalId__is_set(r5_1 + 0x55a6u, r1, r2, r3);  // (from the original)
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

struct __attribute__((packed)) Object_0027b3a8_0 {
    u8 unknown_0[0x20];  // (not used here)
    u8 byte_20;
};
GUEST_OFFSET(Object_0027b3a8_0, byte_20, 0x20);

struct __attribute__((packed)) Local_0027b3a8_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Local_0027b3a8_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_0027b3a8_ea_1, word_4, 0x4);
GUEST_OFFSET(Local_0027b3a8_ea_1, word_8, 0x8);
GUEST_OFFSET(Local_0027b3a8_ea_1, word_c, 0xc);

inline constexpr u32 empty_item_address = 0x0095bfdcu;
inline constexpr guest::Function<0x002fc934, u32(u32, u32)> copy_item_002fc934;

u32 f_0027b3a8(gptr<Object_0027b3a8_0> arg0, u32 r1, u32 r2, u32 r3) {
    gptr<Local_0027b3a8_ea_1> ea_1 = gptr<Local_0027b3a8_ea_1>(guest::cpu()->r[13] + 0x20u);  // (from the original)
    u32 r4_1 = ea_1->word_0;
    u32 r5_1 = ea_1->word_4;
    u32 r6_1 = ea_1->word_8;
    u32 r7_1 = ea_1->word_c;
    copy_item_002fc934(arg0.addr(), r1);
    copy_item_002fc934(arg0.addr() + 4u, r2);
    copy_item_002fc934(arg0.addr() + 8u, r3);
    copy_item_002fc934(arg0.addr() + 0xcu, empty_item_address);  // (from the original)
    copy_item_002fc934(arg0.addr() + 0x10u, r4_1);  // (from the original)
    copy_item_002fc934(arg0.addr() + 0x14u, r5_1);  // (from the original)
    copy_item_002fc934(arg0.addr() + 0x18u, r6_1);  // (from the original)
    copy_item_002fc934(arg0.addr() + 0x1cu, r7_1);  // (from the original)
    arg0->byte_20 = 1;
    guest::cpu()->r[1] = 1u;
    return arg0.addr();
}

}  // namespace d_0027b3a8
GUEST_EXPORT_FRAMED(0x0027b3a8, d_0027b3a8::f_0027b3a8, 0x47f0);  // pushes {r4, r5, r6, r7, r8, r9, r10, lr} first, as the original

// f_0027b528: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0027b528 {

struct __attribute__((packed)) Local_0027b528_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0027b528_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_0027b528_ea_1, word_4, 0x4);

struct __attribute__((packed)) Local_0027b528_r4_1 {
    u8 unknown_0[0xe];  // (not used here)
    u8 byte_e;
};
GUEST_OFFSET(Local_0027b528_r4_1, byte_e, 0xe);

inline constexpr guest::Function<0x002f74c8, u32(u32)> read_global_byte_2;
inline constexpr guest::Function<0x002fc934, u32(u32, u32, u32, u32)> copy_item_002fc934;
inline constexpr guest::Function<0x002fc994, u32(u32, u32, u32, u32)> GridMap__place_item_at_world;
inline constexpr guest::Function<0x002fcbb0, u32(u32, u32, u32, u32)> construct_item;
inline constexpr guest::Function<0x0030b654, u32(u32)> item_has_valid_data;
inline constexpr guest::Function<0x004e9a78, u32(u32, u32, u32, u32)> RoomGrid__furniture_at_layer;
inline constexpr guest::Function<0x0059e65c, u32(u32, u32, u32)> clear_field_tile;
inline constexpr guest::Function<0x006a5e34, u32(u32)> get_object_009b4a24;

struct __attribute__((packed)) Frame_0027b528 {
    u32 word_0;
    u8 unknown_4[0x8];  // (not read or written by name)
};
GUEST_OFFSET(Frame_0027b528, word_0, 0x0);
GUEST_SIZE(Frame_0027b528, 0xc);

u32 f_0027b528(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_0027b528> frame;  // the original's stack frame
    if (r2 >= 3u) {
        return r0;
    }
    gptr<Local_0027b528_r4_1> r4_1 = gptr<Local_0027b528_r4_1>(r0 + r2);
    gptr<Local_0027b528_ea_1> ea_1 = gptr<Local_0027b528_ea_1>(frame.at(0x28).addr());  // (from the original)
    u32 r6_1 = ea_1->word_0;
    u32 r7_1 = ea_1->word_4;
    u32 r3_1 = frame.at(4).addr();
    if (r4_1->byte_e != 0) {
        construct_item(r3_1, 0x2083u, r2, r3_1);  // (from the original)
    } else {
        copy_item_002fc934(r3_1, r0 + (r2 << 2) + 2u, r2, r3_1);
    }
    if (r4_1->byte_e == 0) {
        r4_1->byte_e = 1;
        u32 r0_1 = read_global_byte_2(1u);
        if (r0_1 == r1) {
            u32 r0_3 = item_has_valid_data(frame.at(4).addr());
            if (r0_3 != 0) {
                RoomGrid__furniture_at_layer(r3, r6_1, 1u, r7_1);
            } else {
                u32 r0_4 = get_object_009b4a24(r0_3);
                if (r0_4 != 0) {
                    u32 r0_5 = frame.at(8).addr();
                    construct_item(r0_5, 0x2083u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
                    frame->word_0 = 0;
                    GridMap__place_item_at_world(r0_4, r0_5, r3, r6_1);
                    clear_field_tile(r3, r6_1, 1u);
                }
            }
        }
    }
    return frame.at(4).addr();
}

}  // namespace d_0027b528
GUEST_EXPORT_FRAMED(0x0027b528, d_0027b528::f_0027b528, 0x43f0);  // pushes {r4, r5, r6, r7, r8, r9, lr} first, as the original

// f_0027c060: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0027c060 {

struct __attribute__((packed)) Local_0027c060_r0_10 {
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
GUEST_OFFSET(Local_0027c060_r0_10, word_1c, 0x1c);
GUEST_OFFSET(Local_0027c060_r0_10, word_e54, 0xe54);
GUEST_OFFSET(Local_0027c060_r0_10, word_e58, 0xe58);
GUEST_OFFSET(Local_0027c060_r0_10, byte_e5c, 0xe5c);
GUEST_OFFSET(Local_0027c060_r0_10, byte_e5d, 0xe5d);
GUEST_OFFSET(Local_0027c060_r0_10, byte_e5e, 0xe5e);
GUEST_OFFSET(Local_0027c060_r0_10, byte_e5f, 0xe5f);

struct __attribute__((packed)) Local_0027c060_r0_8 {
    u8 unknown_0[0xe04];  // (not used here)
    u32 word_e04;
    u32 word_e08;
};
GUEST_OFFSET(Local_0027c060_r0_8, word_e04, 0xe04);
GUEST_OFFSET(Local_0027c060_r0_8, word_e08, 0xe08);

struct __attribute__((packed)) Local_0027c060_r1_5 {
    float float_0;
    float float_4;
};
GUEST_OFFSET(Local_0027c060_r1_5, float_0, 0x0);
GUEST_OFFSET(Local_0027c060_r1_5, float_4, 0x4);

inline constexpr u32 vtable_ToolButtonNode = 0x008ef958u;
inline constexpr u32 vtable_ToolButtonNode_at_e0 = 0x008ef9a0u;
inline guest::global<u32, 0x008490c8> global_008490c8;
inline guest::global<u32, 0x008490cc> global_008490cc;
inline constexpr guest::Function<0x00125aec, u32(u32)> construct_layout_animation;
inline constexpr guest::Function<0x00125e3c, u32(u32)> Layout__Layout;
inline constexpr guest::Function<0x002b6de0, u32(u32, u32, u32, u32)> construct_button_node;
inline constexpr guest::Function<0x002f7604, u32(u32)> construct_button_action_control;
inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> for_each_element;
inline constexpr guest::Function<0x004ba6c8, u32(u32, u32)> call_004ba6c8;

u32 ToolButtonNode__ToolButtonNode(gptr<ToolButtonNode> tool_button_node, u32 r1, u32 r2, u32 r3, float S0) {
    construct_button_node(tool_button_node.addr(), r1, r2, r3);
    tool_button_node->word_e4 = 0;
    tool_button_node->byte_e8 = 0;
    u32 r3_1 = *global_008490cc;
    tool_button_node->word_ec = *global_008490c8;
    tool_button_node->word_f0 = r3_1;
    tool_button_node->word_f4 = 0;
    tool_button_node->byte_f8 = 0;
    tool_button_node->word_fc = 0;
    tool_button_node->word_e0 = vtable_ToolButtonNode_at_e0;
    tool_button_node->word_0 = vtable_ToolButtonNode;
    tool_button_node->word_100 = 0;
    u32 r0_2 = for_each_element((tool_button_node.addr() + 0x100u) + 4u, 0x2b6de0u, 0xe0u, 0xcu);  // (from the original)
    u32 r0_3 = r0_2 + 0xa80u;  // (from the original)
    construct_button_action_control(r0_3);
    u32 r0_5 = Layout__Layout(r0_3 + 0xe4u);  // (from the original)
    u32 r0_6 = r0_5 + 0x14cu;  // (from the original)
    construct_layout_animation(r0_6);
    u32 r0_7 = r0_6 + 0x28u;  // (from the original)
    construct_layout_animation(r0_7);
    gptr<Local_0027c060_r0_8> r0_8 = gptr<Local_0027c060_r0_8>(r0_7 - 0xddcu);  // (from the original)
    r0_8->word_e04 = 0;
    float S0_6 = 0.0f;
    gptr<Local_0027c060_r1_5> r1_5 = gptr<Local_0027c060_r1_5>(r0_8.addr() + 0xe0cu);  // (from the original)
    r0_8->word_e08 = 0;
    r1_5->float_0 = S0_6;
    r1_5->float_4 = S0_6;
    u32 r0_9 = r0_8.addr() + 0xe20u;  // (from the original)
    guest::cpu()->s[0] = S0_6;
    call_004ba6c8(r0_9, r1_5.addr());
    gptr<Local_0027c060_r0_10> r0_10 = gptr<Local_0027c060_r0_10>(r0_9 - 0xe20u);  // (from the original)
    r0_10->word_e54 = ~0u;
    r0_10->word_e58 = 0;
    r0_10->byte_e5c = 0;
    r0_10->byte_e5d = 0;
    r0_10->byte_e5e = 0;
    u32 r1_6 = r0_10.addr() + 0xc68u;  // (from the original)
    r0_10->byte_e5f = 0;
    r0_10->word_1c = r1_6;
    guest::cpu()->r[1] = r1_6;
    return r0_10.addr();
}

}  // namespace d_0027c060
GUEST_EXPORT_FRAMED(0x0027c060, d_0027c060::ToolButtonNode__ToolButtonNode, 0x4010);  // pushes {r4, lr} first, as the original

// f_0027c2c8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0027c2c8 {

inline constexpr u32 global_0095df58_address = 0x0095df58u;
inline constexpr u32 global_00975338_address = 0x00975338u;
inline constexpr u32 global_00ad5ba0_address = 0x00ad5ba0u;
inline constexpr u32 global_00ad5ce8_address = 0x00ad5ce8u;
inline constexpr u32 global_00ad5dd8_address = 0x00ad5dd8u;
inline guest::global<u32, 0x00975338> global_00975338;
inline guest::global<u32, 0x00ad5ba4> global_00ad5ba4;
inline constexpr guest::Function<0x00132478, u32(u32, u32, u32, u32)> clear_list;
inline constexpr guest::Function<0x0013f134, u32(u32, u32)> queue_append;
inline constexpr guest::Function<0x0027c8f8, u32(u32, u32, u32, u32)> call_0027c8f8;
inline constexpr guest::Function<0x002ee898, u32(u32, u32, u32)> sead__SafeStringBase_char___SafeStringBase_002ee898;
inline constexpr guest::Function<0x002ee91c, u32(u32, u32, u32, u32)> call_002ee91c;
inline constexpr guest::Function<0x002f73b8, u32(u32)> unload_split_part;
inline constexpr guest::Function<0x002f747c, u32(u32)> ObjectOwner__release_object;
inline constexpr guest::Function<0x003045a8, u32(u32, u32, u32, u32)> call_3045a8;
inline constexpr guest::Function<0x005b19f8, u32(u32, u32, u32, u32)> WordAndFlag__clear;
inline constexpr guest::Function<0x005b1a2c, u32(u32, u32)> ClearableSlot__copy_from;
inline constexpr guest::Function<0x00755ac4, u32(u32)> word_is_set;
inline constexpr guest::Function<0x0081533c, u32(u32, u32, u32, u32)> sead__SafeStringBase_char___SafeStringBase_0081533c;
inline constexpr guest::Function<0x00815500, u32(u32, u32, u32)> sead__SafeStringBase_char___SafeStringBase_00815500;

u32 f_0027c2c8(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x18);  // the original's stack frame
    u32 r0_4 = 0;
    u32 r4 = r0;
    u32 r5 = r1;
    u32 r0_2 = call_3045a8(*global_00975338, r1, r2, r3);
    if (*global_00ad5ba4 == 0) {
        sead__SafeStringBase_char___SafeStringBase_00815500(global_00ad5ba0_address, r0_2, 0x32000u);  // (from the original)
    }
    sead__SafeStringBase_char___SafeStringBase_0081533c(frame.at(0).addr(), global_00ad5ba0_address, 0x894fc4u, 0u);  // (from the original)
    ClearableSlot__copy_from(global_0095df58_address, frame.at(0).addr());
    word_is_set(global_0095df58_address);
    sead__SafeStringBase_char___SafeStringBase_002ee898(global_00ad5ce8_address, 0x894f9cu, r0_2);  // (from the original)
    sead__SafeStringBase_char___SafeStringBase_002ee898(global_00ad5dd8_address, 0x894f74u, r0_2);  // (from the original)
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    do {
        r0_4 = call_0027c8f8(r4, r5, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        guest::preempt();
    } while (r0_4 == 0);
    r5 = global_00ad5ba0_address;
    r4 = *gptr<u32>(r5 + 0x128u);  // (from the original)
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
    r4 = *gptr<u32>(r5 + 0x140u);  // (from the original)
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
    clear_list(r5 + 0x124u, r1, r2, r3);  // (from the original)
    clear_list(r5 + 0x130u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    clear_list(r5 + 0x13cu, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    queue_append(r5 + 0x130u, r5 + 8u);  // (from the original)
    ObjectOwner__release_object(r5);
    call_002ee91c(global_00ad5ce8_address, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    frame.release();
    return call_002ee91c(global_00ad5dd8_address, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0027c2c8
GUEST_EXPORT(0x0027c2c8, d_0027c2c8::f_0027c2c8);

// f_0027c554: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0027c554 {

inline constexpr u32 global_0095df50_address = 0x0095df50u;
inline guest::global<u32, 0x0095df50> global_0095df50;

u32 f_0027c554() {
    *global_0095df50 = 0;
    guest::cpu()->r[1] = global_0095df50_address;
    return 0u;
}

}  // namespace d_0027c554
GUEST_EXPORT(0x0027c554, d_0027c554::f_0027c554);

// f_0027d310: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0027d310 {

inline constexpr u32 global_00ad5b90_address = 0x00ad5b90u;
inline guest::global<u8, 0x0095df54> global_0095df54;
inline guest::global<u8, 0x0095df55> global_0095df55;
inline guest::global<u8, 0x0095df56> global_0095df56;
inline guest::global<u8, 0x0095df57> global_0095df57;
inline constexpr guest::Function<0x002ff6f8, u32(u32, u32, u32, u32)> random_below;

u32 f_0027d310(u32 r0_unused, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0u;
    u32 r6 = global_00ad5b90_address;
    do {
        u32 r5_1 = r4 >= 4u ? global_00ad5b90_address : r6 + (r4 << 2);
        u32 random_3 = random_below(~0x80000000u, r1, r2, r3);  // (from the original)
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r4 += 1u;
        *gptr<u32>(r5_1) = random_3;
        guest::preempt();
    } while (r4 < 4u);
    u32 random_4 = random_below(0x64u, r1, r2, r3);  // (from the original)
    if (random_4 - 0x32u != 0 && random_4 - 0x32u >> 0x1f == (((random_4 ^ 0x32u) & (random_4 ^ random_4 - 0x32u)) >> 0x1f)) {  // (from the original)
        *global_0095df54 = 0;
        *global_0095df55 = 1;
        *global_0095df56 = 0;
        *global_0095df57 = 1;
    } else {
        *global_0095df54 = 1;
        *global_0095df55 = 0;
        *global_0095df56 = 1;
        *global_0095df57 = 0;
    }
    guest::cpu()->r[1] = 0u;
    return 1u;
}

}  // namespace d_0027d310
GUEST_EXPORT_FRAMED(0x0027d310, d_0027d310::f_0027d310, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0027d394: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0027d394 {

inline constexpr u32 global_0094f268_address = 0x0094f268u;
inline guest::global<u32, 0x0094f268> global_0094f268;
inline constexpr guest::Function<0x00251c24, u32(u32, u32)> call_00251c24;
inline constexpr guest::Function<0x00300900, u32(u32, u32)> call_00300900;

u32 f_0027d394(gptr<AcFsFdShadow> ac_fs_fd_shadow, u32 r1) {
    u32 r0_1 = call_00300900(ac_fs_fd_shadow.addr(), r1);
    if (r0_1 == 0) {
        return 1u;
    }
    u32 r1_2 = ac_fs_fd_shadow->byte_116;
    u32 r0_3 = call_00251c24(*global_0094f268, r1_2);
    return r0_3 == 0 ? r0_3 : 1u;
}

}  // namespace d_0027d394
GUEST_EXPORT_FRAMED(0x0027d394, d_0027d394::f_0027d394, 0x4010);  // pushes {r4, lr} first, as the original

// f_0027d44c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0027d44c {

inline constexpr guest::Function<0x00599c6c, u32(u32)> call_00599c6c;

u32 f_0027d44c(gptr<AcFsFdShadow> ac_fs_fd_shadow) {
    u32 r0_1 = ac_fs_fd_shadow->byte_c9;
    if (r0_1 != 0x48u && r0_1 != 0x49u && r0_1 != 0x4au) {  // (from the original)
        return 1u;
    }
    u32 r0_2 = call_00599c6c(r0_1);
    return r0_2 == 0 ? r0_2 : 1u;
}

}  // namespace d_0027d44c
GUEST_EXPORT_FRAMED(0x0027d44c, d_0027d44c::f_0027d44c, 0x4010);  // pushes {r4, lr} first, as the original

// f_0027d490: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0027d490 {

struct __attribute__((packed)) Object_0027d490_0 {
    u8 unknown_0[0x119];  // (not used here)
    u8 byte_119;
};
GUEST_OFFSET(Object_0027d490_0, byte_119, 0x119);

struct __attribute__((packed)) Local_0027d490_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Local_0027d490_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_0027d490_ea_1, word_4, 0x4);
GUEST_OFFSET(Local_0027d490_ea_1, word_8, 0x8);
GUEST_OFFSET(Local_0027d490_ea_1, word_c, 0xc);

struct __attribute__((packed)) Local_0027d490_ea_3 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Local_0027d490_ea_3, word_4, 0x4);
GUEST_OFFSET(Local_0027d490_ea_3, word_8, 0x8);
GUEST_OFFSET(Local_0027d490_ea_3, word_c, 0xc);

struct __attribute__((packed)) Local_0027d490_r0_2 {
    u32 word_0;
};
GUEST_OFFSET(Local_0027d490_r0_2, word_0, 0x0);

inline constexpr guest::Function<0x002d0998, u32(u32, u32, u32, u32)> call_002d0998;

struct __attribute__((packed)) Frame_0027d490 {
    u8 byte_0;
    u8 unknown_1[0xf];  // (not read or written by name)
};
GUEST_OFFSET(Frame_0027d490, byte_0, 0x0);
GUEST_SIZE(Frame_0027d490, 0x10);

u32 f_0027d490(gptr<Object_0027d490_0> arg0, u32 r1_unused, u32 r2_unused, u32 r3) {
    guest::StackFrameOf<Frame_0027d490> frame;  // the original's stack frame
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r14 = guest::cpu()->r[14];
    u32 r1_1 = arg0->byte_119;
    if (r1_1 >= 4u) {
        guest::cpu()->r[1] = r1_1;
        return arg0.addr();
    }
    gptr<Local_0027d490_ea_1> ea_1 = gptr<Local_0027d490_ea_1>(frame.at(0).addr());
    ea_1->word_0 = r3;
    ea_1->word_4 = r4;
    ea_1->word_8 = r5;
    ea_1->word_c = r14;
    frame->byte_0 = u8(r1_1);
    u32 r0_1 = frame.at(0).addr();
    gptr<Local_0027d490_r0_2> r0_2 = gptr<Local_0027d490_r0_2>(call_002d0998(r0_1, r1_1, guest::cpu()->r[2], r3));
    u32 r1_2 = guest::cpu()->r[1];
    u32 zf_1 = r0_2.addr() == 0;
    if (!zf_1) {
        r1_2 = r0_2->word_0;
        zf_1 = r1_2 == 0;
    }
    if (!zf_1 && r1_2 == arg0.addr()) {
        r1_2 = 0u;
        r0_2->word_0 = r1_2;
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
    float float_48;
    u8 unknown_4c[0x4];  // (not used here)
    float float_50;
    u8 unknown_54[0xc2];  // (not used here)
    u8 byte_116;
    u8 byte_117;
    u8 byte_118;
    u8 unknown_119[0x6f];  // (not used here)
    u32 word_188;
};
GUEST_OFFSET(Object_0027d790_0, float_48, 0x48);
GUEST_OFFSET(Object_0027d790_0, float_50, 0x50);
GUEST_OFFSET(Object_0027d790_0, byte_116, 0x116);
GUEST_OFFSET(Object_0027d790_0, byte_117, 0x117);
GUEST_OFFSET(Object_0027d790_0, byte_118, 0x118);
GUEST_OFFSET(Object_0027d790_0, word_188, 0x188);

struct __attribute__((packed)) Local_0027d790_r0_3 {
    u8 byte_0;
    u8 byte_1;
    u8 byte_2;
    u8 byte_3;
    u8 unknown_4[0x1];  // (not used here)
    u8 byte_5;
};
GUEST_OFFSET(Local_0027d790_r0_3, byte_0, 0x0);
GUEST_OFFSET(Local_0027d790_r0_3, byte_1, 0x1);
GUEST_OFFSET(Local_0027d790_r0_3, byte_2, 0x2);
GUEST_OFFSET(Local_0027d790_r0_3, byte_3, 0x3);
GUEST_OFFSET(Local_0027d790_r0_3, byte_5, 0x5);

inline constexpr u32 global_0094f268_address = 0x0094f268u;
inline guest::global<u32, 0x0094f268> global_0094f268;
inline constexpr guest::Function<0x00251c24, u32(u32, u32, u32, u32)> call_00251c24;
inline constexpr guest::Function<0x00255968, u32(u32, u32)> element_address_255968;

u32 f_0027d790(gptr<Object_0027d790_0> arg0, u32 r1, u32 r2, u32 r3, float S0) {
    u32 r1_1 = arg0->byte_116;
    u32 r0_1 = *global_0094f268;
    u32 r0_2 = call_00251c24(r0_1, r1_1, r2, r3);
    u32 r1_2 = guest::cpu()->r[1];
    float S0_1 = guest::cpu()->s[0];
    if (r0_2 != 0) {
        gptr<Local_0027d790_r0_3> r0_3 = gptr<Local_0027d790_r0_3>(arg0->word_188);
        if (r0_3.addr() == 0) {
            u32 r0_4 = *global_0094f268;
            u32 r1_3 = arg0->byte_116;
            r0_3 = gptr<Local_0027d790_r0_3>(element_address_255968(r0_4, r1_3));
            arg0->word_188 = r0_3.addr();
        }
        u32 r1_4 = vcvt_uz_f(arg0->float_48);
        r0_3->byte_1 = u8(u32(r0_3->byte_1) & ~0xf8u | 0xf8u & r1_4 << 1);  // (from the original)
        u32 r1_5 = u32(r0_3->byte_2) & ~0x1fu | (0x3e0u & r1_4 >> 2) >> 5;  // (from the original)
        r0_3->byte_2 = u8(r1_5);
        S0_1 = std::bit_cast<float>(vcvt_uz_f(arg0->float_50));
        u32 r1_6 = std::bit_cast<u32>(S0_1);
        r0_3->byte_2 = u8((r1_5 & ~0xe0u) | 0xe0u & r1_6 << 3);  // (from the original)
        r0_3->byte_3 = u8(u32(r0_3->byte_3) & ~0x7fu | (0x3f8u & r1_6 >> 2) >> 3);  // (from the original)
        r0_3->byte_0 = u8(u32(r0_3->byte_0) & ~0x80u | r1 << 7);  // (from the original)
        r0_3->byte_1 = u8(u32(r0_3->byte_1) & ~7u | (r1 & 0xeu) >> 1);  // (from the original)
        r1_2 = u32(r0_3->byte_5) & ~0x3cu | (u32(arg0->byte_117) & 0xfu) << 2;  // (from the original)
        r0_3->byte_5 = u8(r1_2);
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

inline constexpr u32 global_009841ec_address = 0x009841ecu;
inline constexpr u32 global_00984204_address = 0x00984204u;

u32 f_0027d8a8(u32 r0) {
    return r0 >= 8u ? global_00984204_address : r0 * 0xcu + global_009841ec_address;  // (from the original)
}

}  // namespace d_0027d8a8
GUEST_EXPORT(0x0027d8a8, d_0027d8a8::f_0027d8a8);

// f_0027d93c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0027d93c {

inline constexpr u32 global_009841ec_address = 0x009841ecu;
inline guest::global<u32, 0x0098420c> global_0098420c;

void f_0027d93c(u32 r0) {
    if (r0 >= 8u) {
        float S0_1 = std::bit_cast<float>(*global_0098420c);
        guest::cpu()->r[1] = global_009841ec_address;
        guest::cpu()->s[0] = S0_1;
        return;
    }
    float S0_2 = std::bit_cast<float>(*gptr<u32>(r0 * 0xcu + global_009841ec_address + 8u));  // (from the original)
    guest::cpu()->r[1] = global_009841ec_address;
    guest::cpu()->s[0] = S0_2;
}

}  // namespace d_0027d93c
GUEST_EXPORT(0x0027d93c, d_0027d93c::f_0027d93c);

// f_0027d9a8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0027d9a8 {

inline constexpr u32 global_0094f268_address = 0x0094f268u;
inline guest::global<u32, 0x0094f268> global_0094f268;
inline constexpr guest::Function<0x00251c24, u32(u32, u32, u32, u32)> call_00251c24;
inline constexpr guest::Function<0x0025222c, u32(u32, u32, u32, u32)> call_0025222c;

void f_0027d9a8(u32 r0_unused, u32 r1, u32 r2) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 r4_1 = *global_0094f268;
    u32 r0_1 = call_00251c24(r4_1, r2, r2, guest::cpu()->r[3]);
    if (r0_1 != 0) {
        frame.release();
        call_0025222c(r4_1, r1, r2, guest::cpu()->r[3]);
        return;
    }
}

}  // namespace d_0027d9a8
GUEST_EXPORT(0x0027d9a8, d_0027d9a8::f_0027d9a8);

// f_0027d9ec: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0027d9ec {

inline constexpr u32 global_0094f268_address = 0x0094f268u;
inline guest::global<u32, 0x0094f268> global_0094f268;
inline constexpr guest::Function<0x00251c24, u32(u32, u32, u32, u32)> call_00251c24;
inline constexpr guest::Function<0x00252338, u32(u32, u32, u32, u32)> call_00252338;

u32 f_0027d9ec(u32 r0_unused, u32 r1) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 r4_1 = *global_0094f268;
    u32 r0_1 = call_00251c24(r4_1, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0_1 != 0) {
        frame.release();
        return call_00252338(r4_1, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    }
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
GUEST_OFFSET(Object_0027da24_0, byte_116, 0x116);

inline constexpr u32 global_0094f268_address = 0x0094f268u;
inline guest::global<u32, 0x0094f268> global_0094f268;
inline constexpr guest::Function<0x0025286c, u32(u32, u32, u32)> call_0025286c;

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
GUEST_OFFSET(Local_0027da40_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_0027da40_ea_1, word_4, 0x4);
GUEST_OFFSET(Local_0027da40_ea_1, word_8, 0x8);
GUEST_OFFSET(Local_0027da40_ea_1, word_c, 0xc);

struct __attribute__((packed)) Local_0027da40_ea_2 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Local_0027da40_ea_2, word_4, 0x4);
GUEST_OFFSET(Local_0027da40_ea_2, word_8, 0x8);
GUEST_OFFSET(Local_0027da40_ea_2, word_c, 0xc);

struct __attribute__((packed)) Local_0027da40_r0_2 {
    u32 word_0;
};
GUEST_OFFSET(Local_0027da40_r0_2, word_0, 0x0);

inline constexpr guest::Function<0x002d0998, u32(u32, u32, u32, u32)> call_002d0998;

struct __attribute__((packed)) Frame_0027da40 {
    u8 byte_0;
    u8 unknown_1[0xf];  // (not read or written by name)
};
GUEST_OFFSET(Frame_0027da40, byte_0, 0x0);
GUEST_SIZE(Frame_0027da40, 0x10);

u32 f_0027da40(u32 r0, u32 r1, u32 r2_unused, u32 r3) {
    guest::StackFrameOf<Frame_0027da40> frame;  // the original's stack frame
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r14 = guest::cpu()->r[14];
    if (r1 >= 4u) {
        guest::cpu()->r[1] = r1;
        return r0;
    }
    gptr<Local_0027da40_ea_1> ea_1 = gptr<Local_0027da40_ea_1>(frame.at(0).addr());
    ea_1->word_0 = r3;
    ea_1->word_4 = r4;
    ea_1->word_8 = r5;
    ea_1->word_c = r14;
    frame->byte_0 = u8(r1);
    u32 r0_1 = frame.at(0).addr();
    gptr<Local_0027da40_r0_2> r0_2 = gptr<Local_0027da40_r0_2>(call_002d0998(r0_1, r1, guest::cpu()->r[2], r3));
    u32 r1_1 = guest::cpu()->r[1];
    u32 zf_1 = r0_2.addr() == 0;
    if (!zf_1) {
        r1_1 = r0_2->word_0;
        zf_1 = r1_1 == 0;
    }
    if (!zf_1 && r1_1 == r0) {
        r1_1 = 0u;
        r0_2->word_0 = r1_1;
    }
    gptr<Local_0027da40_ea_2> ea_2 = gptr<Local_0027da40_ea_2>(frame.at(0).addr());
    u32 r4_1 = ea_2->word_4;
    u32 r5_1 = ea_2->word_8;
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->r[4] = r4_1;
    guest::cpu()->r[5] = r5_1;
    return r0_2.addr();
}

}  // namespace d_0027da40
GUEST_EXPORT(0x0027da40, d_0027da40::f_0027da40);

// f_0027da80: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0027da80 {

struct __attribute__((packed)) Object_0027da80_0 {
    u8 unknown_0[0x40];  // (not used here)
    float float_40;
    u8 unknown_44[0xd2];  // (not used here)
    u8 byte_116;
    u8 unknown_117[0x71];  // (not used here)
    u32 word_188;
};
GUEST_OFFSET(Object_0027da80_0, float_40, 0x40);
GUEST_OFFSET(Object_0027da80_0, byte_116, 0x116);
GUEST_OFFSET(Object_0027da80_0, word_188, 0x188);

struct __attribute__((packed)) Local_0027da80_r0_2 {
    u8 unknown_0[0x3];  // (not used here)
    u8 byte_3;
    u8 byte_4;
};
GUEST_OFFSET(Local_0027da80_r0_2, byte_3, 0x3);
GUEST_OFFSET(Local_0027da80_r0_2, byte_4, 0x4);

inline constexpr u32 global_0094f268_address = 0x0094f268u;
inline guest::global<u32, 0x0094f268> global_0094f268;
inline constexpr guest::Function<0x00255968, u32(u32, u32)> element_address_255968;
inline constexpr guest::Function<0x00300900, u32(u32, u32, u32, u32)> call_00300900;
inline constexpr guest::Function<0x005210a8, u32(u32, u32, u32, u32)> call_005210a8;
inline constexpr guest::Function<0x0061a79c, u32(u32, u32, u32)> call_0061a79c;

void f_0027da80(gptr<Object_0027da80_0> arg0, u32 r1, u32 r2) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    float S0_1 = 0.0f;
    arg0->float_40 = S0_1;
    guest::cpu()->s[0] = S0_1;
    u32 r0_1 = call_00300900(arg0.addr(), r1, r2, guest::cpu()->r[3]);
    if (r0_1 == 0) {
        frame.release();
        call_005210a8(arg0.addr(), guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
        return;
    }
    gptr<Local_0027da80_r0_2> r0_2 = gptr<Local_0027da80_r0_2>(arg0->word_188);
    if (r0_2.addr() == 0) {
        u32 r1_2 = arg0->byte_116;
        r0_2 = gptr<Local_0027da80_r0_2>(element_address_255968(*global_0094f268, r1_2));
        arg0->word_188 = r0_2.addr();
    }
    u32 r2_2 = r0_2->byte_4;
    u32 r1_3 = r2_2 & 3u;
    if ((u32(r0_2->byte_3) >> 7) + (r1_3 << 1) != 4u) {
        return;
    }
    u32 r0_4 = call_0061a79c(arg0.addr(), r1_3, r2_2);
    if (r0_4 == 0) {
        return;
    }
    frame.release();
    call_005210a8(arg0.addr(), guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    return;
}

}  // namespace d_0027da80
GUEST_EXPORT(0x0027da80, d_0027da80::f_0027da80);

// f_0027dc10: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0027dc10 {


u32 f_0027dc10(u32 r0_unused, u32 r1, u32 r2) {
    u32 r0_2 = *gptr<s16>(((r1 * 5u) << 3) + 0x83e168u + (r2 << 3) - 4u);  // (from the original)
    guest::cpu()->r[1] = 0x83e168u;  // (from the original)
    return r0_2;
}

}  // namespace d_0027dc10
GUEST_EXPORT(0x0027dc10, d_0027dc10::f_0027dc10);

// f_0027dc2c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0027dc2c {


void f_0027dc2c(u32 r0_unused, u32 r1, u32 r2) {
    float S0_1 = std::bit_cast<float>(*gptr<u32>(((r1 * 5u) << 3) + 0x83e168u + (r2 << 3) - 8u));  // (from the original)
    guest::cpu()->r[1] = 0x83e168u;  // (from the original)
    guest::cpu()->s[0] = S0_1;
}

}  // namespace d_0027dc2c
GUEST_EXPORT(0x0027dc2c, d_0027dc2c::f_0027dc2c);

// f_0027dc48: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0027dc48 {


u32 f_0027dc48(u32 r0_unused, u32 r1, u32 r2) {
    return *gptr<u16>(r1 * 0x28u + 0x83e168u + (r2 << 3) + 6u);  // (from the original)
}

}  // namespace d_0027dc48
GUEST_EXPORT(0x0027dc48, d_0027dc48::f_0027dc48);

// f_0027dc64: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0027dc64 {

struct __attribute__((packed)) Object_0027dc64_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_0027dc64_0, word_0, 0x0);


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

struct __attribute__((packed)) Object_0027dc88_0 {
    u32 word_0;
    u8 unknown_4[0xcc];  // (not used here)
    u32 word_d0;
    u8 unknown_d4[0x44];  // (not used here)
    u8 byte_118;
};
GUEST_OFFSET(Object_0027dc88_0, word_0, 0x0);
GUEST_OFFSET(Object_0027dc88_0, word_d0, 0xd0);
GUEST_OFFSET(Object_0027dc88_0, byte_118, 0x118);

struct __attribute__((packed)) Object_0027dc88_1 {
    u32 word_0;
    u8 unknown_4[0x18];  // (not used here)
    u32 word_1c;
    u32 word_20;
};
GUEST_OFFSET(Object_0027dc88_1, word_0, 0x0);
GUEST_OFFSET(Object_0027dc88_1, word_1c, 0x1c);
GUEST_OFFSET(Object_0027dc88_1, word_20, 0x20);

inline constexpr guest::Function<0x001e90e4, u32(u32, u32, u32, u32)> call_001e90e4;
inline constexpr guest::Function<0x002d59d4, u32(u32, u32, u32)> call_002d59d4;
inline constexpr guest::Function<0x002fd0c4, u32(u32, u32)> call_002fd0c4;

u32 f_0027dc88(gptr<Object_0027dc88_0> arg0, gptr<Object_0027dc88_1> arg1, u32 r2) {
    call_001e90e4(arg0.addr(), arg1.addr() + 4u, r2, guest::cpu()->r[3]);
    u32 r0_1 = arg0.addr() + 0xd0u;  // (from the original)
    call_002fd0c4(r0_1, arg1.addr() + 0x14u);  // (from the original)
    u32 r1_3 = arg1->word_0;
    u32 ea_1 = r0_1 - 0xd0u;  // (from the original)
    arg0->word_0 = r1_3;
    u32 r2_2 = arg1->word_1c;
    *gptr<u32>(ea_1 + *gptr<u32>(r1_3 - 0xcu)) = r2_2;  // (from the original)
    u32 r1_4 = arg1->word_20;
    arg0->word_d0 = r1_4;
    arg0->byte_118 = 0;
    u32 r0_3 = call_002d59d4(ea_1 + 0x11cu, r1_4, r2_2);  // (from the original)
    u32 r0_4 = r0_3 - 0x11cu;  // (from the original)
    *gptr<u32>(r0_4 + 0x188u) = 0;  // (from the original)
    return r0_4;
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
GUEST_OFFSET(Object_0027dd00_0, word_0, 0x0);
GUEST_OFFSET(Object_0027dd00_0, word_d0, 0xd0);

struct __attribute__((packed)) Local_0027dd00_r1_3 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0027dd00_r1_3, word_0, 0x0);
GUEST_OFFSET(Local_0027dd00_r1_3, word_4, 0x4);

inline constexpr guest::Function<0x002d59e8, u32(u32, u32, u32, u32)> SoundObj_1___SoundObj_002d59e8;
inline constexpr guest::Function<0x004ecf70, u32(u32, u32, u32)> g3d__SkeletalAnim__destructor;
inline constexpr guest::Function<0x004edd84, u32(u32)> set_base_vtable_004edd84;
inline constexpr guest::Function<0x0057bb6c, u32(u32, u32)> Actor__destructor;

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
    u32 ea_3 = arg0.addr() + 0xd0u;  // (from the original)
    arg0->word_d0 = r1_2;
    SoundObj_1___SoundObj_002d59e8(ea_3 + 0x4cu, r1_2, r2_1, guest::cpu()->r[3]);  // (from the original)
    gptr<Local_0027dd00_r1_3> r1_3 = gptr<Local_0027dd00_r1_3>(r4_1 + 0x14u);  // (from the original)
    if (r1_3.addr() == 0) {
        r1_3 = gptr<Local_0027dd00_r1_3>(0x8f427cu);  // (from the original)
    }
    u32 r2_2 = r1_3->word_0;
    arg0->word_d0 = r2_2;
    u32 r2_3 = *gptr<u32>(r2_2 - 0xcu);  // (from the original)
    u32 r1_4 = r1_3->word_4;
    *gptr<u32>(ea_3 + r2_3) = r1_4;
    g3d__SkeletalAnim__destructor(ea_3 + 0x10u, r1_4, r2_3);  // (from the original)
    set_base_vtable_004edd84(ea_3 + 4u);
    frame.release();
    return Actor__destructor(ea_3 - 0xd0u, guest::cpu()->r[1]);  // (from the original)
}

}  // namespace d_0027dd00
GUEST_EXPORT(0x0027dd00, d_0027dd00::f_0027dd00);

// f_0027e08c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0027e08c {

struct __attribute__((packed)) Object_0027e08c_1 {
    u8 unknown_0[0x5700];  // (not used here)
    u8 byte_5700;
};
GUEST_OFFSET(Object_0027e08c_1, byte_5700, 0x5700);

inline constexpr guest::Function<0x002fcbb0, u32(u32, u32, u32, u32)> construct_item;
inline constexpr guest::Function<0x002ff6f8, u32(u32)> random_below;
inline constexpr guest::Function<0x00306354, u32(u32, u32, u32, u32)> load_mail_with_adapter;
inline constexpr guest::Function<0x00768138, u32(u32, u32, u32)> set_held_item;

struct __attribute__((packed)) Frame_0027e08c {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u8 unknown_c[0x8];  // (not read or written by name)
};
GUEST_OFFSET(Frame_0027e08c, word_0, 0x0);
GUEST_OFFSET(Frame_0027e08c, word_4, 0x4);
GUEST_OFFSET(Frame_0027e08c, word_8, 0x8);
GUEST_SIZE(Frame_0027e08c, 0x14);

void f_0027e08c(u32 r0, gptr<Object_0027e08c_1> arg1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_0027e08c> frame;  // the original's stack frame
    construct_item(frame.at(0xc).addr(), 0x2242u, r2, r3);  // (from the original)
    construct_item(frame.at(0x10).addr(), 0x2e59u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 random_2 = random_below(3u);
    u32 r2_3 = (u32(arg1->byte_5700) & 0x10u) != 0u ? random_2 + 1u : random_2 + 4u;  // (from the original)
    frame->word_0 = frame.at(0xc).addr();  // (from the original)
    frame->word_4 = 5;
    frame->word_8 = 0;
    load_mail_with_adapter(r0, 0x27e128u, r2_3, arg1.addr() + 0x55a6u);  // (from the original)
    set_held_item(r0, frame.at(0x10).addr(), 0u);  // (from the original)
}

}  // namespace d_0027e08c
GUEST_EXPORT_FRAMED(0x0027e08c, d_0027e08c::f_0027e08c, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_0027e13c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0027e13c {

inline constexpr u32 npc_manager_address = 0x00950148u;
inline guest::global<u16, 0x00887290> global_00887290;
inline guest::global<u32, 0x00950148> npc_manager;
inline constexpr guest::Function<0x0056b5a4, u32(u32)> call_0056b5a4;
inline constexpr guest::Function<0x0056c7b0, u32(u32)> call_0056c7b0;
inline constexpr guest::Function<0x0056d230, u32(u32, u32)> set_clock_from_span;
inline constexpr guest::Function<0x00695ed8, u32(u32, u32, u32, u32)> BsNpcMgr__SearchFunction__SearchFunction_00695ed8;
inline constexpr guest::Function<0x006f0130, u32(u32, u32, u32, u32)> call_006f0130;

u32 f_0027e13c(u32 r0_unused, u32 r1) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 r0_1 = *npc_manager;
    if (r0_1 == 0) {
        return r0_1;
    }
    u32 r0_2 = BsNpcMgr__SearchFunction__SearchFunction_00695ed8(r0_1, 0x27e1b0u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    if (r0_2 == 0) {
        return r0_2;
    }
    u32 r0_3 = *gptr<u16>(r0_2 + 0xcu);  // (from the original)
    u32 r1_2 = *global_00887290;
    if (r0_3 != r1_2) {
        guest::cpu()->r[1] = r1_2;
        return r0_3;
    }
    u32 r0_4 = *gptr<u8>(r0_2 + 0x2885u);  // (from the original)
    if (r0_4 == 0) {
        guest::cpu()->r[1] = r1_2;
        return r0_4;
    }
    u32 r0_6 = set_clock_from_span(r0_2 + 0x2870u, r1_2);  // (from the original)
    u32 r0_7 = call_0056b5a4(r0_6);
    call_0056c7b0(r0_7);
    frame.release();
    return call_006f0130(0xeu, 1u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
}

}  // namespace d_0027e13c
GUEST_EXPORT(0x0027e13c, d_0027e13c::f_0027e13c);

// f_0027e634: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0027e634 {

struct __attribute__((packed)) Object_0027e634_0 {
    u8 unknown_0[0x8];  // (not used here)
    u32 word_8;
    u32 word_c;
    u8 unknown_10[0x10];  // (not used here)
    u32 word_20;
    u32 word_24;
    u32 word_28;
};
GUEST_OFFSET(Object_0027e634_0, word_8, 0x8);
GUEST_OFFSET(Object_0027e634_0, word_c, 0xc);
GUEST_OFFSET(Object_0027e634_0, word_20, 0x20);
GUEST_OFFSET(Object_0027e634_0, word_24, 0x24);
GUEST_OFFSET(Object_0027e634_0, word_28, 0x28);

inline constexpr guest::Function<0x005cd270, u32(u32, u32, u32, u32)> call_005cd270;

u32 f_0027e634(gptr<Object_0027e634_0> arg0, u32 r1_unused, u32 r2, u32 r3) {
    u32 r1 = 0;
    call_005cd270(arg0.addr(), r1, r2, r3);
    arg0->word_20 = 0;
    arg0->word_8 = 0x1800181;  // (from the original)
    arg0->word_c = 0;
    arg0->word_24 = 0;
    arg0->word_28 = 0x5264c0;  // (from the original)
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
GUEST_OFFSET(Local_0027e670_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_0027e670_ea_1, word_4, 0x4);

inline constexpr u32 global_0095386c_address = 0x0095386cu;
inline guest::global<u32, 0x0095386c> global_0095386c;
inline constexpr guest::Function<0x0010f9fd, u32(u32, u32)> call_0010f9fc;
inline constexpr guest::Function<0x002f98a8, u32(u32, u32, u32, u32)> call_002f98a8;
inline constexpr guest::Function<0x005cd270, u32(u32, u32)> call_005cd270;

u32 f_0027e670(u32 r0, u32 r1) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    call_002f98a8(*global_0095386c, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    call_005cd270(r0, r1);
    gptr<Local_0027e670_ea_1> ea_1 = gptr<Local_0027e670_ea_1>(r0 + 8u);
    ea_1->word_0 = 0x24000942;  // (from the original)
    ea_1->word_4 = 0;
    *gptr<u32>(r0 + 0x20u) = 0x5264e0;  // (from the original)
    *gptr<u32>(r0 + 0x24u) = 0x526474;  // (from the original)
    *gptr<u32>(r0 + 0x28u) = 0x526484;  // (from the original)
    frame.release();
    return call_0010f9fc(0x526484u, 0u);  // (from the original)
}

}  // namespace d_0027e670
GUEST_EXPORT(0x0027e670, d_0027e670::f_0027e670);

// f_0027eeac: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0027eeac {

struct __attribute__((packed)) RoadSearchDefaultAgent {
    u8 unknown_0[0x2520];  // (not used here)
    u8 byte_2520;
    u8 byte_2521;
    u8 unknown_2522[0x22];  // (not used here)
    u32 word_2544;
};
GUEST_OFFSET(RoadSearchDefaultAgent, byte_2520, 0x2520);
GUEST_OFFSET(RoadSearchDefaultAgent, byte_2521, 0x2521);
GUEST_OFFSET(RoadSearchDefaultAgent, word_2544, 0x2544);

inline constexpr u32 vtable_RoadSearchDefaultAgent = 0x008f5b94u;
inline constexpr guest::Function<0x0027ec34, u32(u32, u32, u32, u32)> AStarForeachPreSisyoCB__AStarForeachPreSisyoCB;
inline constexpr guest::Function<0x002f9e1c, u32(u32, u32)> divide_with_remainder;
inline constexpr guest::Function<0x00306f60, u32(u32)> SearchCandCore__pick_random_marked;
inline constexpr guest::Function<0x003171b4, u32(u32, u32, u32)> position_to_cell;
inline constexpr guest::Function<0x007ceb80, u32(u32, u32, u32, u32)> call_007ceb80;
inline constexpr guest::Function<0x007d1fd4, u32(u32, u32, u32, u32)> call_007d1fd4;

struct __attribute__((packed)) Frame_0027eeac {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u8 unknown_c[0x4];  // (not read or written by name)
};
GUEST_OFFSET(Frame_0027eeac, word_0, 0x0);
GUEST_OFFSET(Frame_0027eeac, word_4, 0x4);
GUEST_OFFSET(Frame_0027eeac, word_8, 0x8);
GUEST_SIZE(Frame_0027eeac, 0x10);

u32 RoadSearchDefaultAgent__RoadSearchDefaultAgent_0027eeac(gptr<RoadSearchDefaultAgent> road_search_default_agent, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_0027eeac> frame;  // the original's stack frame
    AStarForeachPreSisyoCB__AStarForeachPreSisyoCB(road_search_default_agent.addr(), r1, r2, r3);
    position_to_cell(frame.at(0).addr(), frame.at(4).addr(), road_search_default_agent.addr() + 0x14u);  // (from the original)
    call_007d1fd4(road_search_default_agent.addr() + 0x2520u, frame->word_0, frame->word_4, 0u);  // (from the original)
    u32 r5_1 = road_search_default_agent->word_2544;
    u32 r0_3 = SearchCandCore__pick_random_marked(r5_1);
    u32 r1_4 = guest::cpu()->r[1];
    if (s32(r0_3) >= 0) {
        u32 r0_4 = divide_with_remainder(r0_3, *gptr<u32>(r5_1 + 0x14u));  // (from the original)
        u32 r3_4 = road_search_default_agent->byte_2521;
        r1_4 = guest::cpu()->r[1] + u32(road_search_default_agent->byte_2520);
        r0_3 = r0_4 + r3_4;
        if (1) {
            u32 r1_7 = 1u & ~0xffu | frame->word_0 & 0xffu;  // (from the original)
            u32 r2_5 = (r0_3 << 8) & 0xff00u | ((r3_4 & ~0xffu) | r1_4 & 0xffu) & ~0xff00u;  // (from the original)
            u32 r1_8 = r1_7 & ~0xff00u | frame->word_4 << 8 & 0xff00u;  // (from the original)
            frame->word_8 = vtable_RoadSearchDefaultAgent;
            r0_3 = call_007ceb80(road_search_default_agent.addr() + 0x2520u, r1_8, r2_5, frame.at(8).addr());  // (from the original)
            r1_4 = guest::cpu()->r[1];
        }
    }
    guest::cpu()->r[1] = r1_4;
    return r0_3;
}

}  // namespace d_0027eeac
GUEST_EXPORT_FRAMED(0x0027eeac, d_0027eeac::RoadSearchDefaultAgent__RoadSearchDefaultAgent_0027eeac, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original
