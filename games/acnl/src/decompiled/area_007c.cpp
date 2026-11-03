// Functions decompiled by tools/decomp (docs/decomp.md), each proved equal to the recompiled original (prove-cpp). The
// names come from games/acnl/names (tools/decomp/names.py); the others are generated (d_<address>::f_<address>,
// Object_<address>_<argument>, word_<offset>) and still to be chosen.
#include "guest/guest.hpp"

#include <bit>

using guest::gptr;

// f_007c28f0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Runs the flagged segment hooks.
namespace d_007c28f0 {

struct __attribute__((packed)) SegmentHooks {
    u8 unknown_0[0x18];  // (not used here)
    u32 word_18;
    u8 unknown_1c[0x4];  // (not used here)
    u32 word_20;
};
GUEST_OFFSET(SegmentHooks, word_18, 0x18);
GUEST_OFFSET(SegmentHooks, word_20, 0x20);

struct __attribute__((packed)) Local_007c28f0_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_007c28f0_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_007c28f0_ea_1, word_4, 0x4);
GUEST_OFFSET(Local_007c28f0_ea_1, word_8, 0x8);

struct __attribute__((packed)) Local_007c28f0_ea_2 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_007c28f0_ea_2, word_0, 0x0);
GUEST_OFFSET(Local_007c28f0_ea_2, word_4, 0x4);

struct __attribute__((packed)) Local_007c28f0_r0_5 {
    u8 unknown_0[0x11];  // (not used here)
    u8 byte_11;
    u8 byte_12;
    u8 unknown_13[0x8d];  // (not used here)
    u32 word_a0;
};
GUEST_OFFSET(Local_007c28f0_r0_5, byte_11, 0x11);
GUEST_OFFSET(Local_007c28f0_r0_5, byte_12, 0x12);
GUEST_OFFSET(Local_007c28f0_r0_5, word_a0, 0xa0);

struct __attribute__((packed)) Local_007c28f0_r2_1 {
    u8 byte_0;
    u8 unknown_1[0xb];  // (not used here)
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u32 word_18;
};
GUEST_OFFSET(Local_007c28f0_r2_1, byte_0, 0x0);
GUEST_OFFSET(Local_007c28f0_r2_1, word_c, 0xc);
GUEST_OFFSET(Local_007c28f0_r2_1, word_10, 0x10);
GUEST_OFFSET(Local_007c28f0_r2_1, word_14, 0x14);
GUEST_OFFSET(Local_007c28f0_r2_1, word_18, 0x18);

struct __attribute__((packed)) Local_007c28f0_r8_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_007c28f0_r8_1, word_0, 0x0);
GUEST_OFFSET(Local_007c28f0_r8_1, word_4, 0x4);

inline constexpr u32 segment_hooks_address = 0x00adf8c0u;
inline constexpr guest::Function<0x0012de78, u32(u32, u32, u32)> start_flagged_list;
inline constexpr guest::Function<0x0012ffcc, u32(u32, u32, u32, u32)> segment_hook_begin;
inline constexpr guest::Function<0x0012ffdc, u32(u32, u32)> segment_hook_end;

u32 SegmentHooks__run(gptr<SegmentHooks> segment_hooks, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x20);  // the original's stack frame
    u32 r0 = segment_hooks.addr();
    u32 r0_3 = 0;
    gptr<Local_007c28f0_ea_1> ea_1 = gptr<Local_007c28f0_ea_1>(frame.at(0x28).addr());  // (from the original)
    u32 r5_1 = ea_1->word_0;
    u32 r6_1 = ea_1->word_4;
    u32 r12_1 = ea_1->word_8;
    u32 r9_1 = segment_hooks->word_20;
    gptr<Local_007c28f0_ea_2> ea_2 = gptr<Local_007c28f0_ea_2>(frame.at(0x20).addr());  // (from the original)
    u32 r7_1 = ea_2->word_0;
    u32 r14 = ea_2->word_4;
    gptr<Local_007c28f0_r2_1> r2_1 = gptr<Local_007c28f0_r2_1>(segment_hooks->word_18 + ((r9_1 << 3) - r9_1 << 2));
    r2_1->byte_0 = 2;
    gptr<Local_007c28f0_r8_1> r8_1 = gptr<Local_007c28f0_r8_1>(r2_1.addr() + 4u);
    r8_1->word_0 = r1;
    r8_1->word_4 = r3;
    u32 r0_2 = (r2 & 0x7fffffu) | r2_1->word_c >> 0x17 << 0x17;  // (from the original)
    r2_1->word_c = r0_2;
    if (r7_1 == 0x10u) {  // (from the original)
        r2_1->word_c = r0_2 & ~0x1800000u;  // (from the original)
    } else {
        if (r7_1 == 0x18u) {  // (from the original)
            r0_3 = r0_2 & ~0x1800000u | 0x800000u;  // (from the original)
        } else if (r7_1 == 0x20u) {  // (from the original)
            r0_3 = r0_2 & ~0x1800000u | 0x1000000u;  // (from the original)
        } else {
            goto L_7c2978;
        }
        r2_1->word_c = r0_3;
    }
L_7c2978:;
    u32 r1_1 = r5_1 & 0x7fffffu;  // (from the original)
    u32 r0_4 = r2_1->word_18 >> 0x17 << 0x17 | r1_1;  // (from the original)
    r2_1->word_18 = r0_4;
    r2_1->word_14 = r6_1;
    if (r12_1 == 0x10u) {  // (from the original)
        r0_4 &= ~0x1800000u;  // (from the original)
    }
    r2_1->word_10 = r14;
    if (r12_1 == 0x10u) {  // (from the original)
        r2_1->word_18 = r0_4;
    } else {
        if (r12_1 == 0x18u) {  // (from the original)
            r0_4 = r0_4 & ~0x1800000u | 0x800000u;  // (from the original)
        } else if (r12_1 == 0x20u) {  // (from the original)
            r0_4 = r0_4 & ~0x1800000u | 0x1000000u;  // (from the original)
        } else {
            goto L_7c29d0;
        }
        r2_1->word_18 = r0_4;
    }
L_7c29d0:;
    segment_hook_begin(r0_4, r1_1, r2_1.addr(), r3);
    gptr<Local_007c28f0_r0_5> r0_5 = gptr<Local_007c28f0_r0_5>(segment_hooks_address);
    segment_hooks->word_20 = segment_hooks->word_20 + 1u;
    u32 r1_2 = r0_5->word_a0;
    if (r1_2 == r0) {
        r1_2 = r0_5->byte_12;
        if (r1_2 != 0) {
            r1_2 = r0_5->byte_11;
            if (r1_2 == 0) {
                r0_5->byte_11 = 1;
                r0_5 = gptr<Local_007c28f0_r0_5>(start_flagged_list(r0_5.addr(), 1u, r2_1.addr()));
                r1_2 = guest::cpu()->r[1];
            }
        }
    }
    frame.release();
    return segment_hook_end(r0_5.addr(), r1_2);
}

}  // namespace d_007c28f0
GUEST_EXPORT(0x007c28f0, d_007c28f0::SegmentHooks__run);

// f_007c3094: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Inserts the node into its bucket (of 512) keeping the bucket sorted by key.
namespace d_007c3094 {

struct __attribute__((packed)) HashBuckets512 {
    u8 unknown_0[0xc];  // (not used here)
    u32 word_c;
};
GUEST_OFFSET(HashBuckets512, word_c, 0xc);

struct __attribute__((packed)) Local_007c3094_r2_1 {
    u8 unknown_0[0x10];  // (not used here)
    u32 word_10;
};
GUEST_OFFSET(Local_007c3094_r2_1, word_10, 0x10);

inline guest::global<u32, 0x0097d7ac> global_0097d7ac;

void HashBuckets512__insert_sorted(gptr<HashBuckets512> hash_buckets512, u32 r1) {
    u32 r0 = hash_buckets512.addr();
    gptr<Local_007c3094_r2_1> r2_1 = gptr<Local_007c3094_r2_1>(*global_0097d7ac + ((r1 & 0x1ffu) << 2));  // (from the original)
    u32 r3 = r2_1->word_10;
    if (r3 == 0) {
        r2_1->word_10 = r0;
        return;
    }
    if (*gptr<u32>(r3 + 8u) > r1) {
        hash_buckets512->word_c = r3;
        r2_1->word_10 = r0;
        return;
    }
    u32 r2 = *gptr<u32>(r3 + 0xcu);  // (from the original)
    if (r2 == 0) {
        *gptr<u32>(r3 + 0xcu) = r0;  // (from the original)
        return;
    }
    do {
        if (*gptr<u32>(r2 + 8u) > r1) {
            *gptr<u32>(r3 + 0xcu) = r0;  // (from the original)
            hash_buckets512->word_c = r2;
            if (r2 != 0) {
                return;
            }
            *gptr<u32>(r3 + 0xcu) = r0;  // (from the original)
            return;
        }
        r3 = r2;
        r2 = *gptr<u32>(r2 + 0xcu);  // (from the original)
        guest::preempt();
    } while (r2 != 0);
    *gptr<u32>(r3 + 0xcu) = r0;  // (from the original)
}

}  // namespace d_007c3094
GUEST_EXPORT(0x007c3094, d_007c3094::HashBuckets512__insert_sorted);

// f_007c513c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The length of the 16-bit string.
namespace d_007c513c {

struct __attribute__((packed)) Object_007c513c_0 {
    u16 half_0;
};
GUEST_OFFSET(Object_007c513c_0, half_0, 0x0);


u32 wcslen16(gptr<Object_007c513c_0> arg0) {
    u32 r0 = arg0.addr();
    u32 ea_1 = 0;
    u32 r1 = 0u;
    if (arg0->half_0 == 0) {
        guest::cpu()->r[1] = r1;
        return r1;
    }
    do {
        ea_1 = r0 + 2u;
        r0 = ea_1;
        r1 += 1u;
        guest::preempt();
    } while (*gptr<u16>(ea_1) != 0);
    guest::cpu()->r[1] = r1;
    return r1;
}

}  // namespace d_007c513c
GUEST_EXPORT(0x007c513c, d_007c513c::wcslen16);

// f_007c5518: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Sets the light's color and its packed 24-bit float commands, and marks the lights dirty.
namespace d_007c5518 {

struct __attribute__((packed)) Object_007c5518_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Object_007c5518_1, word_0, 0x0);
GUEST_OFFSET(Object_007c5518_1, word_4, 0x4);
GUEST_OFFSET(Object_007c5518_1, word_8, 0x8);
GUEST_OFFSET(Object_007c5518_1, word_c, 0xc);

struct __attribute__((packed)) Local_007c5518_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_007c5518_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_007c5518_ea_1, word_4, 0x4);
GUEST_OFFSET(Local_007c5518_ea_1, word_8, 0x8);

struct __attribute__((packed)) Local_007c5518_r2_1 {
    u8 unknown_0[0x298];  // (not used here)
    u32 word_298;
    u32 word_29c;
    u32 word_2a0;
    u32 word_2a4;
};
GUEST_OFFSET(Local_007c5518_r2_1, word_298, 0x298);
GUEST_OFFSET(Local_007c5518_r2_1, word_29c, 0x29c);
GUEST_OFFSET(Local_007c5518_r2_1, word_2a0, 0x2a0);
GUEST_OFFSET(Local_007c5518_r2_1, word_2a4, 0x2a4);

struct __attribute__((packed)) Local_007c5518_r3_1 {
    u32 word_0;
};
GUEST_OFFSET(Local_007c5518_r3_1, word_0, 0x0);

inline constexpr u32 gpu_state_address = 0x0097d784u;
inline guest::global<u32, 0x0097d784> gpu_state;

void GpuLights__set_color(u32 gpu_lights, gptr<Object_007c5518_1> arg1) {
    gptr<Local_007c5518_r3_1> r3_1 = gptr<Local_007c5518_r3_1>(*gpu_state);
    gptr<Local_007c5518_r2_1> r2_1 = gptr<Local_007c5518_r2_1>(r3_1.addr() + (gpu_lights << 4));
    r2_1->word_298 = arg1->word_0;
    r2_1->word_29c = arg1->word_4;
    r2_1->word_2a0 = arg1->word_8;
    r2_1->word_2a4 = arg1->word_c;
    u32 r2_2 = arg1->word_0;
    u32 r12_1 = r2_2 & ~0x80000000u;  // (from the original)
    if (r12_1 != 0) {
        r12_1 = (r2_2 >> 0x17u & 0xffu) - 0x40u;  // (from the original)
    }
    u32 r2_3 = r2_2 >> 0x1f;  // (from the original)
    u32 r4_2 = s32(r12_1) >= 0 ? (r2_2 >> 7u & 0xffffu) | r12_1 << 0x10 | r2_3 << 0x17 : r2_3 << 0x17;  // (from the original)
    u32 r2_4 = arg1->word_4;
    u32 r12_2 = r2_4 & ~0x80000000u;  // (from the original)
    if (r12_2 != 0) {
        r12_2 = (r2_4 >> 0x17u & 0xffu) - 0x40u;  // (from the original)
    }
    u32 r2_5 = r2_4 >> 0x1f;  // (from the original)
    u32 r12_3 = s32(r12_2) >= 0 ? (r2_4 >> 7u & 0xffffu) | r12_2 << 0x10 | r2_5 << 0x17 : r2_5 << 0x17;  // (from the original)
    u32 r2_6 = arg1->word_8;
    u32 r5_2 = r2_6 & ~0x80000000u;  // (from the original)
    if (r5_2 != 0) {
        r5_2 = (r2_6 >> 0x17u & 0xffu) - 0x40u;  // (from the original)
    }
    u32 r2_7 = r2_6 >> 0x1f;  // (from the original)
    float S0_1 = std::bit_cast<float>(arg1->word_c);
    u32 r1_1 = std::bit_cast<u32>(S0_1);
    u32 r2_8 = s32(r5_2) >= 0 ? (r2_6 >> 7u & 0xffffu) | r5_2 << 0x10 | r2_7 << 0x17 : r2_7 << 0x17;  // (from the original)
    u32 r5_3 = r1_1 & ~0x80000000u;  // (from the original)
    if (r5_3 != 0) {
        r5_3 = (r1_1 >> 0x17u & 0xffu) - 0x40u;  // (from the original)
    }
    u32 r6_2 = r1_1 >> 7u & 0xffffu;  // (from the original)
    u32 r1_2 = r1_1 >> 0x1f;  // (from the original)
    u32 r1_3 = r2_8 >> 0x10 | (s32(r5_3) >= 0 ? r6_2 | r5_3 << 0x10 | r1_2 << 0x17 : r1_2 << 0x17) << 8;  // (from the original)
    gptr<Local_007c5518_ea_1> ea_1 = gptr<Local_007c5518_ea_1>(r3_1.addr() + gpu_lights * 0xcu + 0x398u);  // (from the original)
    ea_1->word_0 = r1_3;
    ea_1->word_4 = r12_3 >> 8u & 0xffffu | r2_8 << 0x10;  // (from the original)
    ea_1->word_8 = r4_2 | r12_3 << 0x18;  // (from the original)
    r3_1->word_0 = r3_1->word_0 | 0x80u;  // (from the original)
    guest::cpu()->r[1] = r1_3;
    guest::cpu()->s[0] = S0_1;
}

}  // namespace d_007c5518
GUEST_EXPORT_FRAMED(0x007c5518, d_007c5518::GpuLights__set_color, 0x70);  // pushes {r4, r5, r6} first, as the original

// f_007c5cd0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Negates and permutes the vector's axes by the global axis setup.
namespace d_007c5cd0 {

struct __attribute__((packed)) Vec3 {
    float float_0;
    float float_4;
    float float_8;
};
GUEST_OFFSET(Vec3, float_0, 0x0);
GUEST_OFFSET(Vec3, float_4, 0x4);
GUEST_OFFSET(Vec3, float_8, 0x8);

inline guest::global<u8, 0x009751b8> global_009751b8;
inline guest::global<u8, 0x009751b9> global_009751b9;
inline guest::global<u8, 0x009751ba> global_009751ba;
inline guest::global<u8, 0x009751bb> global_009751bb;
inline guest::global<u8, 0x009751bc> global_009751bc;
inline guest::global<u8, 0x009751bd> global_009751bd;

void Vec3__apply_axis_swap(gptr<Vec3> vec3) {
    float S2_1 = vec3->float_0;
    float S0_1 = vec3->float_4;
    float S1_1 = vec3->float_8;
    if (*global_009751ba != 0) {
        S2_1 = -S2_1;
    }
    if (*global_009751b8 != 0) {
        S0_1 = -S0_1;
    }
    if (*global_009751b9 != 0) {
        S1_1 = -S1_1;
    }
    *gptr<u32>(vec3.addr() + (u32(*global_009751bd) << 2)) = std::bit_cast<u32>(S2_1);
    *gptr<u32>(vec3.addr() + (u32(*global_009751bb) << 2)) = std::bit_cast<u32>(S0_1);
    u32 r1_1 = *global_009751bc;
    *gptr<u32>(vec3.addr() + (r1_1 << 2)) = std::bit_cast<u32>(S1_1);
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
}

}  // namespace d_007c5cd0
GUEST_EXPORT(0x007c5cd0, d_007c5cd0::Vec3__apply_axis_swap);

// f_007c7610: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_007c7610 {

struct __attribute__((packed)) Local_007c7610_r0_6 {
    u8 unknown_0[0x220];  // (not used here)
    u32 word_220;
    u8 unknown_224[0x79c];  // (not used here)
    u32 word_9c0;
    u8 unknown_9c4[0x38];  // (not used here)
    u32 word_9fc;
};
GUEST_OFFSET(Local_007c7610_r0_6, word_220, 0x220);
GUEST_OFFSET(Local_007c7610_r0_6, word_9c0, 0x9c0);
GUEST_OFFSET(Local_007c7610_r0_6, word_9fc, 0x9fc);

inline constexpr u32 vtable_InstSelect_8_ = 0x008eb1a8u;
inline constexpr guest::Function<0x001b02c0, u32(u32, u32, u32, u32)> SelectBase__SelectBase;
inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> for_each_element;

u32 InstSelect_8___InstSelect(u32 select_base, u32 r1, u32 r2, u32 r3) {
    u32 r0_1 = SelectBase__SelectBase(select_base, r1, r2, r3);
    *gptr<u32>(r0_1) = vtable_InstSelect_8_;
    u32 r0_3 = for_each_element(r0_1 + 0xaecu, 0x1c81a8u, 0x1cu, 8u);  // (from the original)
    u32 r0_5 = for_each_element(r0_3 + 0xe0u, 0x2b6de0u, 0xe0u, 8u);  // (from the original)
    gptr<Local_007c7610_r0_6> r0_6 = gptr<Local_007c7610_r0_6>(r0_5 - 0xbccu);  // (from the original)
    r0_6->word_9c0 = 8;
    r0_6->word_220 = r0_6.addr() + 0xaecu;  // (from the original)
    r0_6->word_9fc = r0_6.addr() + 0xbccu;  // (from the original)
    return r0_6.addr();
}

}  // namespace d_007c7610
GUEST_EXPORT_FRAMED(0x007c7610, d_007c7610::InstSelect_8___InstSelect, 0x4010);  // pushes {r4, lr} first, as the original

// f_007c769c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Finds the list's record with the key.
namespace d_007c769c {

struct __attribute__((packed)) Local_007c769c_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 cursor;
    u32 word_10;
};
GUEST_OFFSET(Local_007c769c_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_007c769c_ea_1, word_4, 0x4);
GUEST_OFFSET(Local_007c769c_ea_1, word_8, 0x8);
GUEST_OFFSET(Local_007c769c_ea_1, cursor, 0xc);
GUEST_OFFSET(Local_007c769c_ea_1, word_10, 0x10);

struct __attribute__((packed)) Local_007c769c_ea_2 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
};
GUEST_OFFSET(Local_007c769c_ea_2, word_0, 0x0);
GUEST_OFFSET(Local_007c769c_ea_2, word_4, 0x4);
GUEST_OFFSET(Local_007c769c_ea_2, word_8, 0x8);
GUEST_OFFSET(Local_007c769c_ea_2, word_c, 0xc);
GUEST_OFFSET(Local_007c769c_ea_2, word_10, 0x10);
GUEST_OFFSET(Local_007c769c_ea_2, word_14, 0x14);

struct __attribute__((packed)) Local_007c769c_ea_3 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
};
GUEST_OFFSET(Local_007c769c_ea_3, word_0, 0x0);
GUEST_OFFSET(Local_007c769c_ea_3, word_4, 0x4);
GUEST_OFFSET(Local_007c769c_ea_3, word_8, 0x8);
GUEST_OFFSET(Local_007c769c_ea_3, word_c, 0xc);
GUEST_OFFSET(Local_007c769c_ea_3, word_10, 0x10);

inline constexpr guest::Function<0x00314a1c, u32(u32, u32)> ListCursor__end;
inline constexpr guest::Function<0x00314a9c, u32(u32, u32, u32, u32)> ListCursor__begin;
inline constexpr guest::Function<0x00314b04, u32(u32, u32)> handles_differ;
inline constexpr guest::Function<0x00314b58, u32(u32, u32, u32, u32)> ListCursor__next;

struct __attribute__((packed)) Frame_007c769c {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u8 unknown_18[0x40];  // (not read or written by name)
};
GUEST_OFFSET(Frame_007c769c, word_0, 0x0);
GUEST_OFFSET(Frame_007c769c, word_4, 0x4);
GUEST_OFFSET(Frame_007c769c, word_8, 0x8);
GUEST_OFFSET(Frame_007c769c, word_c, 0xc);
GUEST_OFFSET(Frame_007c769c, word_10, 0x10);
GUEST_OFFSET(Frame_007c769c, word_14, 0x14);
GUEST_SIZE(Frame_007c769c, 0x58);

void List24__find_by_key(u32 list24, u32 list, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_007c769c> frame;  // the original's stack frame
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 cursor = guest::cpu()->r[7];
    u32 r14 = guest::cpu()->r[14];
    u32 r0_4 = 0;
    u32 r1_1 = 0;
    u32 r2_3 = 0;
    u32 r3_3 = 0;
    u32 r4_1 = 0;
    u32 r12_1 = 0;
    u32 r0_5 = 0;
    gptr<Local_007c769c_ea_1> ea_1 = gptr<Local_007c769c_ea_1>(frame.at(0x44).addr());  // (from the original)
    ea_1->word_0 = r4;
    ea_1->word_4 = r5;
    ea_1->word_8 = r6;
    ea_1->cursor = cursor;
    ea_1->word_10 = r14;
    r5 = list24;
    r4 = r2;
    ListCursor__begin(frame.at(0x20).addr(), list, r2, r3);  // (from the original)
    cursor = frame.at(0x20).addr();  // (from the original)
    ListCursor__end(frame.at(0).addr(), list);
    r6 = frame.at(0).addr();
    u32 r0_3 = handles_differ(cursor, r6);
    list = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0_3 != 0) {
        do {
            if (r4 == *gptr<u32>(cursor + 0x14u)) {  // (from the original)
                gptr<Local_007c769c_ea_2> ea_2 = gptr<Local_007c769c_ea_2>(frame.at(0x20).addr());  // (from the original)
                r0_4 = ea_2->word_0;
                r1_1 = ea_2->word_4;
                r2_3 = ea_2->word_8;
                r3_3 = ea_2->word_c;
                r4_1 = ea_2->word_10;
                r12_1 = ea_2->word_14;
                goto L_7c7724;
            }
            ListCursor__next(cursor, list, r2, r3);
            r0_5 = handles_differ(cursor, r6);
            list = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            guest::preempt();
        } while (r0_5 != 0);
    }
    r0_4 = frame->word_0;
    r1_1 = frame->word_4;
    r2_3 = frame->word_8;
    r3_3 = frame->word_c;
    r4_1 = frame->word_10;
    r12_1 = frame->word_14;
L_7c7724:;
    *gptr<u32>(r5) = r0_4;
    *gptr<u32>(r5 + 4) = r1_1;
    *gptr<u32>(r5 + 8) = r2_3;
    *gptr<u32>(r5 + 0xc) = r3_3;  // (from the original)
    *gptr<u32>(r5 + 0x10) = r4_1;  // (from the original)
    *gptr<u32>(r5 + 0x14) = r12_1;  // (from the original)
    gptr<Local_007c769c_ea_3> ea_3 = gptr<Local_007c769c_ea_3>(frame.at(0x44).addr());  // (from the original)
    u32 r4_2 = ea_3->word_0;
    u32 r5_1 = ea_3->word_4;
    u32 r6_1 = ea_3->word_8;
    u32 r7_1 = ea_3->word_c;
    guest::cpu()->r[4] = r4_2;
    guest::cpu()->r[5] = r5_1;
    guest::cpu()->r[6] = r6_1;
    guest::cpu()->r[7] = r7_1;
}

}  // namespace d_007c769c
GUEST_EXPORT(0x007c769c, d_007c769c::List24__find_by_key);

// f_007c7740: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Copies the first record (0x18 bytes) of the kind in the range, or the end record.
namespace d_007c7740 {

inline constexpr guest::Function<0x00314b04, u32(u32, u32, u32, u32)> handles_differ;
inline constexpr guest::Function<0x00314b58, u32(u32, u32, u32, u32)> ListCursor__next;

void List24__find_kind_or_default(u32 list24, u32 r1, u32 r2, u32 structure_list) {
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r4_2 = 0;
    u32 r12_1 = 0;
    u32 r0_3 = 0;
    u32 cursor = r1;
    u32 r5 = list24;
    u32 r4_1 = structure_list;
    u32 r7 = r2;
    u32 r0_1 = handles_differ(cursor, r2, r2, structure_list);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    structure_list = guest::cpu()->r[3];
    if (r0_1 != 0) {
        u32 r4 = r4_1 & 0xffu;  // (from the original)
        do {
            if (r4 == *gptr<u8>(cursor + 0x10u)) {  // (from the original)
                r0_2 = *gptr<u32>(cursor);
                r1_1 = *gptr<u32>(cursor + 4);
                r2_1 = *gptr<u32>(cursor + 8);
                r3_1 = *gptr<u32>(cursor + 0xc);  // (from the original)
                r4_2 = *gptr<u32>(cursor + 0x10);  // (from the original)
                r12_1 = *gptr<u32>(cursor + 0x14);  // (from the original)
                *gptr<u32>(r5) = r0_2;
                *gptr<u32>(r5 + 4) = r1_1;
                *gptr<u32>(r5 + 8) = r2_1;
                *gptr<u32>(r5 + 0xc) = r3_1;  // (from the original)
                *gptr<u32>(r5 + 0x10) = r4_2;  // (from the original)
                *gptr<u32>(r5 + 0x14) = r12_1;  // (from the original)
                return;
            }
            ListCursor__next(cursor, r1, r2, structure_list);
            r0_3 = handles_differ(cursor, r7, guest::cpu()->r[2], guest::cpu()->r[3]);
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            structure_list = guest::cpu()->r[3];
            guest::preempt();
        } while (r0_3 != 0);
    }
    r0_2 = *gptr<u32>(r7);
    r1_1 = *gptr<u32>(r7 + 4);
    r2_1 = *gptr<u32>(r7 + 8);
    r3_1 = *gptr<u32>(r7 + 0xc);  // (from the original)
    r4_2 = *gptr<u32>(r7 + 0x10);  // (from the original)
    r12_1 = *gptr<u32>(r7 + 0x14);  // (from the original)
    *gptr<u32>(r5) = r0_2;
    *gptr<u32>(r5 + 4) = r1_1;
    *gptr<u32>(r5 + 8) = r2_1;
    *gptr<u32>(r5 + 0xc) = r3_1;  // (from the original)
    *gptr<u32>(r5 + 0x10) = r4_2;  // (from the original)
    *gptr<u32>(r5 + 0x14) = r12_1;  // (from the original)
}

}  // namespace d_007c7740
GUEST_EXPORT_FRAMED(0x007c7740, d_007c7740::List24__find_kind_or_default, 0x41f0);  // pushes {r4, r5, cursor, r7, r8, lr} first, as the original

// f_007c77b4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Releases the nodes of each flagged list (of 3) and clears the lists.
namespace d_007c77b4 {

inline constexpr guest::Function<0x004ee364, u32(u32, u32, u32, u32)> TransformNode__call_node_slot_4;

void NodeLists3__release(u32 node_lists3, u32 r1) {
    u32 r5 = node_lists3;
    u32 r7 = r1;
    u32 r6 = 0u;
    do {
        if ((lsr_r(r7, r6 & 0xff) & 1u) != 0) {  // (from the original)
            u32 r0_1 = *gptr<u32>(r5 + 0x1cu);  // (from the original)
            u32 r4 = 0u;
            if (r0_1 >= 0u && r0_1 != 0) {
                do {
                    u32 r0_2 = gptr<u32>(r5)[r4];
                    if (r0_2 != 0) {
                        TransformNode__call_node_slot_4(r0_2, r6, guest::cpu()->r[2], guest::cpu()->r[3]);
                        r1 = guest::cpu()->r[1];
                    }
                    r4 += 1u;
                    guest::preempt();
                } while (*gptr<u32>(r5 + 0x1cu) > r4);  // (from the original)
            }
        }
        r6 += 1u;
        guest::preempt();
    } while (r6 < 3u);
    *gptr<u32>(r5) = 0;
    *gptr<u32>(r5 + 4u) = 0;
    *gptr<u32>(r5 + 8u) = 0;
    *gptr<u32>(r5 + 0xcu) = 0;  // (from the original)
    *gptr<u32>(r5 + 0x10u) = 0;  // (from the original)
    *gptr<u32>(r5 + 0x14u) = 0;  // (from the original)
    *gptr<u32>(r5 + 0x18u) = 0;  // (from the original)
    *gptr<u32>(r5 + 0x1cu) = 0;  // (from the original)
    guest::cpu()->r[1] = r1;
}

}  // namespace d_007c77b4
GUEST_EXPORT_FRAMED(0x007c77b4, d_007c77b4::NodeLists3__release, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_007ce068: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Marks the cell (x, y) of a grid of 20-byte cells with state 3.
namespace d_007ce068 {

struct __attribute__((packed)) Grid {
    u32 word_0;
    u8 unknown_4[0x8];  // (not used here)
    u32 word_c;
};
GUEST_OFFSET(Grid, word_0, 0x0);
GUEST_OFFSET(Grid, word_c, 0xc);

inline constexpr guest::Function<0x007ce1bc, u32(u32, u32, u32, u32)> PathGrid__neighbor_if_open;
inline constexpr guest::Function<0x00813bd0, u32(u32, u32, u32, u32)> set_flag_below_8_00813bd0;

u32 Grid__mark_cell_3(gptr<Grid> grid, u32 r1, u32 r2) {
    u32 r0 = grid.addr();
    u32 r0_12 = 0;
    u32 r4 = 0u;
    u32 r8 = r0;
    u32 r3 = grid->word_c;
    u32 r6 = r3 + (grid->word_0 * r2 + r1) * 0x14u;  // (from the original)
    *gptr<u8>(r6 + 3u) = 3;
    do {
        u32 r0_1 = PathGrid__neighbor_if_open(r8, r6, r4, r3);
        r3 = guest::cpu()->r[3];
        if (r0_1 != 0) {
            set_flag_below_8_00813bd0(r6 + 2u, r4, 0u, r3);
            set_flag_below_8_00813bd0(r0_1 + 2u, ((r4 & 1u) == 0 ? r4 + 1u : r4 - 1u) & 0xffu, 0u, guest::cpu()->r[3]);  // (from the original)
            r3 = guest::cpu()->r[3];
            if (r4 != 0) {
                if (r4 == 1u) {
                    set_flag_below_8_00813bd0(r0_1 + 2u, 4u, 0u, r3);
                    set_flag_below_8_00813bd0(r0_1 + 2u, 7u, 0u, guest::cpu()->r[3]);
                    r3 = guest::cpu()->r[3];
                } else if (r4 == 2u) {
                    set_flag_below_8_00813bd0(r0_1 + 2u, 7u, 0u, r3);
                    set_flag_below_8_00813bd0(r0_1 + 2u, 5u, 0u, guest::cpu()->r[3]);
                    r3 = guest::cpu()->r[3];
                } else if (r4 == 3u) {
                    set_flag_below_8_00813bd0(r0_1 + 2u, 4u, 0u, r3);
                    set_flag_below_8_00813bd0(r0_1 + 2u, 6u, 0u, guest::cpu()->r[3]);
                    r3 = guest::cpu()->r[3];
                }
            } else {
                set_flag_below_8_00813bd0(r0_1 + 2u, 6u, 0u, r3);
                set_flag_below_8_00813bd0(r0_1 + 2u, 5u, 0u, guest::cpu()->r[3]);
                r3 = guest::cpu()->r[3];
            }
        }
        r0_12 = r4 + 1u;
        r4 = r0_12 & 0xffu;  // (from the original)
        guest::preempt();
    } while (r4 < 8u);
    return r0_12;
}

}  // namespace d_007ce068
GUEST_EXPORT_FRAMED(0x007ce068, d_007ce068::Grid__mark_cell_3, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_007ce358: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Inserts the node into the open list, sorted by its cost (+0x8), and marks it open.
namespace d_007ce358 {

struct __attribute__((packed)) PathGrid {
    u8 unknown_0[0x10];  // (not used here)
    u32 word_10;
};
GUEST_OFFSET(PathGrid, word_10, 0x10);

struct __attribute__((packed)) Object_007ce358_1 {
    u8 unknown_0[0x3];  // (not used here)
    u8 byte_3;
    u8 unknown_4[0x4];  // (not used here)
    float float_8;
    u8 unknown_c[0x4];  // (not used here)
    u32 word_10;
};
GUEST_OFFSET(Object_007ce358_1, byte_3, 0x3);
GUEST_OFFSET(Object_007ce358_1, float_8, 0x8);
GUEST_OFFSET(Object_007ce358_1, word_10, 0x10);


void PathGrid__open_insert(gptr<PathGrid> path_grid, gptr<Object_007ce358_1> arg1, float S0, float S1) {
    u32 r0 = path_grid.addr();
    u32 r1 = arg1.addr();
    u32 fpsr = guest::cpu()->fpscr;
    float S1_1 = 0;
    r0 = r0 + 0x10u;  // (from the original)
    u32 r2 = path_grid->word_10;
    if (r2 == 0) {
        arg1->word_10 = 0;
        *gptr<u32>(r0) = r1;
        return;
    } else {
        S0 = arg1->float_8;
    }
    do {
        S1_1 = std::bit_cast<float>(*gptr<u32>(r2 + 8u));
        fpsr = fpsr & 0xfffffffu | vfp_cmpf(S1_1, S0);  // (from the original)
        if (!(fpsr >> 0x1e & 1) && fpsr >> 0x1f == (fpsr >> 0x1c & 1)) {  // (from the original)
            arg1->word_10 = r2;
            arg1->byte_3 = 1;
            *gptr<u32>(r0) = r1;
            guest::cpu()->s[0] = S0;
            guest::cpu()->s[1] = S1_1;
            return;
        }
        r0 = r2 + 0x10u;  // (from the original)
        r2 = *gptr<u32>(r2 + 0x10u);  // (from the original)
        guest::preempt();
    } while (r2 != 0);
    arg1->word_10 = 0;
    *gptr<u32>(r0) = r1;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1_1;
}

}  // namespace d_007ce358
GUEST_EXPORT(0x007ce358, d_007ce358::PathGrid__open_insert);

// f_007ce860: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Resets every node that is not blocked (state 3) and empties the lists.
namespace d_007ce860 {

struct __attribute__((packed)) PathGrid {
    u32 word_0;
    u8 unknown_4[0x4];  // (not used here)
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
};
GUEST_OFFSET(PathGrid, word_0, 0x0);
GUEST_OFFSET(PathGrid, word_8, 0x8);
GUEST_OFFSET(PathGrid, word_c, 0xc);
GUEST_OFFSET(PathGrid, word_10, 0x10);
GUEST_OFFSET(PathGrid, word_14, 0x14);

struct __attribute__((packed)) Local_007ce860_r1_3 {
    u8 unknown_0[0x3];  // (not used here)
    u8 byte_3;
    float float_4;
    float float_8;
    u32 word_c;
    u32 word_10;
};
GUEST_OFFSET(Local_007ce860_r1_3, byte_3, 0x3);
GUEST_OFFSET(Local_007ce860_r1_3, float_4, 0x4);
GUEST_OFFSET(Local_007ce860_r1_3, float_8, 0x8);
GUEST_OFFSET(Local_007ce860_r1_3, word_c, 0xc);
GUEST_OFFSET(Local_007ce860_r1_3, word_10, 0x10);


void PathGrid__reset(gptr<PathGrid> path_grid, float S0) {
    u32 r4 = 0u;
    path_grid->word_10 = r4;
    path_grid->word_14 = r4;
    u32 r1_1 = path_grid->word_8;
    u32 r5 = path_grid->word_0;
    u32 r2 = r4;
    if (r1_1 >= 0u && r1_1 != 0) {
        S0 = 0.0f;
    }
    u32 r3 = r4;
    u32 r12 = r4;
    if (r1_1 >= 0u && r1_1 != 0) {
        do {
            u32 r1_2 = path_grid->word_0 * r3 + r2;
            gptr<Local_007ce860_r1_3> r1_3 = gptr<Local_007ce860_r1_3>(path_grid->word_c + (r1_2 + (r1_2 << 2) << 2));
            if (r1_3->byte_3 != 3u) {
                r1_3->byte_3 = u8(r4);
                r1_3->float_4 = S0;
                r1_3->float_8 = S0;
                r1_3->word_c = r4;
                r1_3->word_10 = r4;
            }
            r2 += 1u;
            r1_1 = path_grid->word_8;
            if (r2 == r5) {
                r2 = 0u;
                r3 += 1u;
            }
            r12 += 1u;
            guest::preempt();
        } while (r1_1 > r12);
    }
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->s[0] = S0;
}

}  // namespace d_007ce860
GUEST_EXPORT_FRAMED(0x007ce860, d_007ce860::PathGrid__reset, 0x70);  // pushes {r4, r5, r6} first, as the original

// f_007cee58: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Blocks the cell (state 3) and clears the links of its 8 neighbors toward it (and the diagonals beside).
namespace d_007cee58 {

struct __attribute__((packed)) PathGrid {
    u8 byte_0;
    u8 byte_1;
    u8 unknown_2[0x6];  // (not used here)
    u32 word_8;
    u8 unknown_c[0x8];  // (not used here)
    u32 word_14;
};
GUEST_OFFSET(PathGrid, byte_0, 0x0);
GUEST_OFFSET(PathGrid, byte_1, 0x1);
GUEST_OFFSET(PathGrid, word_8, 0x8);
GUEST_OFFSET(PathGrid, word_14, 0x14);

inline constexpr guest::Function<0x007cefbc, u32(u32, u32, u32, u32)> PathGrid__neighbor;
inline constexpr guest::Function<0x00813bd0, u32(u32, u32, u32, u32)> set_flag_below_8_00813bd0;

u32 PathGrid__block_cell(gptr<PathGrid> path_grid, u32 r1, u32 r2) {
    u32 r0 = path_grid.addr();
    u32 r0_13 = 0;
    u32 r7 = r0;
    u32 r3 = path_grid->word_8;
    u32 r0_1 = r3 * (r2 - u32(path_grid->byte_1)) + (r1 - u32(path_grid->byte_0));
    u32 r4 = 0u;
    u32 r6 = path_grid->word_14 + (r0_1 + (r0_1 << 2) << 2);
    *gptr<u8>(r6 + 3u) = 3;
    do {
        u32 r0_2 = PathGrid__neighbor(r7, r6, r4, r3);
        r3 = guest::cpu()->r[3];
        if (r0_2 != 0) {
            set_flag_below_8_00813bd0(r6 + 2u, r4, 0u, r3);
            set_flag_below_8_00813bd0(r0_2 + 2u, ((r4 & 1u) == 0 ? r4 + 1u : r4 - 1u) & 0xffu, 0u, guest::cpu()->r[3]);  // (from the original)
            r3 = guest::cpu()->r[3];
            if (r4 != 0) {
                if (r4 == 1u) {
                    set_flag_below_8_00813bd0(r0_2 + 2u, 4u, 0u, r3);
                    set_flag_below_8_00813bd0(r0_2 + 2u, 7u, 0u, guest::cpu()->r[3]);
                    r3 = guest::cpu()->r[3];
                } else if (r4 == 2u) {
                    set_flag_below_8_00813bd0(r0_2 + 2u, 7u, 0u, r3);
                    set_flag_below_8_00813bd0(r0_2 + 2u, 5u, 0u, guest::cpu()->r[3]);
                    r3 = guest::cpu()->r[3];
                } else if (r4 == 3u) {
                    set_flag_below_8_00813bd0(r0_2 + 2u, 4u, 0u, r3);
                    set_flag_below_8_00813bd0(r0_2 + 2u, 6u, 0u, guest::cpu()->r[3]);
                    r3 = guest::cpu()->r[3];
                }
            } else {
                set_flag_below_8_00813bd0(r0_2 + 2u, 6u, 0u, r3);
                set_flag_below_8_00813bd0(r0_2 + 2u, 5u, 0u, guest::cpu()->r[3]);
                r3 = guest::cpu()->r[3];
            }
        }
        r0_13 = r4 + 1u;
        r4 = r0_13 & 0xffu;  // (from the original)
        guest::preempt();
    } while (r4 < 8u);
    return r0_13;
}

}  // namespace d_007cee58
GUEST_EXPORT_FRAMED(0x007cee58, d_007cee58::PathGrid__block_cell, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_007cf170: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Inserts the node into the open list of the rectangle grid, sorted by its cost, and marks it open.
namespace d_007cf170 {

struct __attribute__((packed)) PathGridRect {
    u8 unknown_0[0x18];  // (not used here)
    u32 word_18;
};
GUEST_OFFSET(PathGridRect, word_18, 0x18);

struct __attribute__((packed)) Object_007cf170_1 {
    u8 unknown_0[0x3];  // (not used here)
    u8 byte_3;
    u8 unknown_4[0x4];  // (not used here)
    float float_8;
    u8 unknown_c[0x4];  // (not used here)
    u32 word_10;
};
GUEST_OFFSET(Object_007cf170_1, byte_3, 0x3);
GUEST_OFFSET(Object_007cf170_1, float_8, 0x8);
GUEST_OFFSET(Object_007cf170_1, word_10, 0x10);


void PathGridRect__open_insert(gptr<PathGridRect> path_grid_rect, gptr<Object_007cf170_1> arg1, float S0, float S1) {
    u32 r0 = path_grid_rect.addr();
    u32 r1 = arg1.addr();
    u32 fpsr = guest::cpu()->fpscr;
    float S1_1 = 0;
    r0 = r0 + 0x18u;  // (from the original)
    u32 r2 = path_grid_rect->word_18;
    if (r2 == 0) {
        arg1->word_10 = 0;
        *gptr<u32>(r0) = r1;
        return;
    } else {
        S0 = arg1->float_8;
    }
    do {
        S1_1 = std::bit_cast<float>(*gptr<u32>(r2 + 8u));
        fpsr = fpsr & 0xfffffffu | vfp_cmpf(S1_1, S0);  // (from the original)
        if (!(fpsr >> 0x1e & 1) && fpsr >> 0x1f == (fpsr >> 0x1c & 1)) {  // (from the original)
            arg1->word_10 = r2;
            arg1->byte_3 = 1;
            *gptr<u32>(r0) = r1;
            guest::cpu()->s[0] = S0;
            guest::cpu()->s[1] = S1_1;
            return;
        }
        r0 = r2 + 0x10u;  // (from the original)
        r2 = *gptr<u32>(r2 + 0x10u);  // (from the original)
        guest::preempt();
    } while (r2 != 0);
    arg1->word_10 = 0;
    *gptr<u32>(r0) = r1;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1_1;
}

}  // namespace d_007cf170
GUEST_EXPORT(0x007cf170, d_007cf170::PathGridRect__open_insert);

// f_007cf434: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Resets every node of the rectangle grid that is not blocked and empties the lists.
namespace d_007cf434 {

struct __attribute__((packed)) PathGridRect {
    u8 byte_0;
    u8 byte_1;
    u8 unknown_2[0x6];  // (not used here)
    u32 word_8;
    u8 unknown_c[0x4];  // (not used here)
    u32 word_10;
    u32 word_14;
    u32 word_18;
    u32 word_1c;
};
GUEST_OFFSET(PathGridRect, byte_0, 0x0);
GUEST_OFFSET(PathGridRect, byte_1, 0x1);
GUEST_OFFSET(PathGridRect, word_8, 0x8);
GUEST_OFFSET(PathGridRect, word_10, 0x10);
GUEST_OFFSET(PathGridRect, word_14, 0x14);
GUEST_OFFSET(PathGridRect, word_18, 0x18);
GUEST_OFFSET(PathGridRect, word_1c, 0x1c);

struct __attribute__((packed)) Local_007cf434_r2_2 {
    u8 unknown_0[0x3];  // (not used here)
    u8 byte_3;
    float float_4;
    float float_8;
    u32 word_c;
    u32 word_10;
};
GUEST_OFFSET(Local_007cf434_r2_2, byte_3, 0x3);
GUEST_OFFSET(Local_007cf434_r2_2, float_4, 0x4);
GUEST_OFFSET(Local_007cf434_r2_2, float_8, 0x8);
GUEST_OFFSET(Local_007cf434_r2_2, word_c, 0xc);
GUEST_OFFSET(Local_007cf434_r2_2, word_10, 0x10);


void PathGridRect__reset(gptr<PathGridRect> path_grid_rect, float S0) {
    u32 r12 = 0u;
    u32 r5 = r12;
    path_grid_rect->word_18 = r12;
    path_grid_rect->word_1c = r12;
    u32 r1_1 = path_grid_rect->word_10;
    u32 r4 = path_grid_rect->byte_0;
    u32 r3 = path_grid_rect->byte_1;
    if (r1_1 >= 0u && r1_1 != 0) {
        S0 = 0.0f;
    }
    u32 r1 = r4;
    u32 r6 = path_grid_rect->word_8 + r4;
    if ((r1_1 >= 0u) && r1_1 != 0) {
        do {
            u32 r2_1 = path_grid_rect->word_8 * (r3 - u32(path_grid_rect->byte_1)) + (r1 - u32(path_grid_rect->byte_0));
            gptr<Local_007cf434_r2_2> r2_2 = gptr<Local_007cf434_r2_2>(path_grid_rect->word_14 + (r2_1 + (r2_1 << 2) << 2));
            if (r2_2->byte_3 != 3u) {
                r2_2->byte_3 = u8(r12);
                r2_2->float_4 = S0;
                r2_2->float_8 = S0;
                r2_2->word_c = r12;
                r2_2->word_10 = r12;
            }
            r1 += 1u;
            if (r1 == r6) {
                r1 = r4;
                r3 += 1u;
            }
            r5 += 1u;
            guest::preempt();
        } while (path_grid_rect->word_10 > r5);
    }
    guest::cpu()->s[0] = S0;
}

}  // namespace d_007cf434
GUEST_EXPORT_FRAMED(0x007cf434, d_007cf434::PathGridRect__reset, 0x3f0);  // pushes {r4, r5, r6, r7, r8, r9} first, as the original

// f_007cfab8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Checks the sound handle against the system's count (below 128); 0 when valid, -1 otherwise.
namespace d_007cfab8 {

struct __attribute__((packed)) SoundSystem {
    u32 word_0;
    u32 word_4;
    u8 unknown_8[0x4];  // (not used here)
    u32 word_c;
};
GUEST_OFFSET(SoundSystem, word_0, 0x0);
GUEST_OFFSET(SoundSystem, word_4, 0x4);
GUEST_OFFSET(SoundSystem, word_c, 0xc);

inline constexpr u32 sound_system_b_address = 0x0098288cu;
inline constexpr u32 sound_handle_count_address = 0x00982898u;
inline guest::global<u32, 0x00982898> sound_handle_count;
inline constexpr guest::Function<0x00321af8, u32(u32, u32, u32, u32)> SoundSystem__call_13c1d4;

u32 SoundSystem__check_handle(gptr<SoundSystem> sound_system, u32 r1) {
    u32 r0 = sound_system.addr();
    u32 r5 = 0u;
    if (sound_system->word_0 != 0) {
        u32 r4 = sound_system->word_c;
        if (s32(r4) >= 0x80) {  // (from the original)
            return ~0u;
        }
        if (r1 + 1u == 0) {
            guest::cpu()->r[1] = r1;
            return r5;
        }
        u32 r3_1 = sound_system->word_4;
        if (r3_1 != r1) {
            goto L_7cfb0c;
        }
        r3_1 = r0 + 4u;
        if (r3_1 == 0) {
            goto L_7cfb0c;
        } else {
            r0 = r4;
        }
L_7cfafc:;
        if (s32(r0) >= s32(r4)) {
            guest::cpu()->r[1] = r1;
            return r5;
        }
        guest::cpu()->r[1] = r1;
        return ~0u;
L_7cfb0c:;
        SoundSystem__call_13c1d4(r0, sound_system_b_address, r1, r3_1);
        r1 = guest::cpu()->r[1];
        r0 = *sound_handle_count;
        guest::preempt();
        goto L_7cfafc;
    }
    guest::cpu()->r[1] = r1;
    return r5;
}

}  // namespace d_007cfab8
GUEST_EXPORT_FRAMED(0x007cfab8, d_007cfab8::SoundSystem__check_handle, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_007cfb30: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Checks the sound handle against the system's count; 0 when valid, -1 otherwise.
namespace d_007cfb30 {

inline constexpr u32 sound_system_b_address = 0x0098288cu;
inline constexpr u32 sound_handle_count_address = 0x00982898u;
inline guest::global<u32, 0x00982898> sound_handle_count;
inline constexpr guest::Function<0x00321af8, u32(u32, u32, u32, u32)> SoundSystem__call_13c1d4;

u32 SoundSystem__check_handle_7cfb30(u32 sound_system, u32 r1) {
    u32 r2_1 = 0;
    u32 r3 = sound_system;
    u32 r5 = ~0u;
    u32 r4 = 0x80u;  // (from the original)
    sound_system = 0u;
    do {
        if (*gptr<u32>(sound_system >= 2u ? r3 : r3 + (sound_system << 2)) == 0) {
            guest::cpu()->r[1] = r1;
            return sound_system;
        }
        u32 r12_1 = r3 + 8u;
        if (sound_system < 2u) {
            r12_1 += sound_system * 0x14u;  // (from the original)
        }
        if (s32(*gptr<u32>(r12_1 + 8u)) < s32(r4)) {
            u32 r12_2 = r3 + 8u;
            if (sound_system < 2u) {
                r12_2 += sound_system * 0x14u;  // (from the original)
            }
            r5 = sound_system;
            r4 = *gptr<u32>(r12_2 + 8u);
        }
        sound_system += 1u;
        guest::preempt();
    } while (s32(sound_system) < 2);
    if (s32(r5) < 0) {
        guest::cpu()->r[1] = r1;
        return ~0u;
    }
    if (r1 + 1u == 0) {
        guest::cpu()->r[1] = r1;
        return r5;
    } else {
        sound_system = 0u;
    }
L_7cfbb0:;
    u32 r12_3 = r3 + 8u;
    if (sound_system < 2u) {
        r12_3 += sound_system * 0x14u;  // (from the original)
    }
    if (*gptr<u32>(r12_3) != r1) {
        sound_system += 1u;
        if (s32(sound_system) < 2) {
            guest::preempt();
            goto L_7cfbb0;
        }
        goto L_7cfc04;
    }
    r2_1 = r3 + 8u;
    if (sound_system < 2u) {
        r2_1 += sound_system * 0x14u;  // (from the original)
    }
    if (r2_1 == 0) {
        goto L_7cfc04;
    } else {
        sound_system = *gptr<u32>(r2_1 + 8u);
    }
L_7cfbe8:;
    if (s32(sound_system) >= s32(r4)) {
        guest::cpu()->r[1] = r1;
        return r5;
    }
    guest::cpu()->r[1] = r1;
    return ~0u;
L_7cfc04:;
    SoundSystem__call_13c1d4(r3, sound_system_b_address, r1, r3);
    r1 = guest::cpu()->r[1];
    sound_system = *sound_handle_count;
    guest::preempt();
    goto L_7cfbe8;
}

}  // namespace d_007cfb30
GUEST_EXPORT_FRAMED(0x007cfb30, d_007cfb30::SoundSystem__check_handle_7cfb30, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_007cfd98: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Checks the sound handle against the system's count; 0 when valid, -1 otherwise.
namespace d_007cfd98 {

inline constexpr u32 sound_system_b_address = 0x0098288cu;
inline constexpr u32 sound_handle_count_address = 0x00982898u;
inline guest::global<u32, 0x00982898> sound_handle_count;
inline constexpr guest::Function<0x00321af8, u32(u32, u32, u32, u32)> SoundSystem__call_13c1d4;

u32 SoundSystem__check_handle_7cfd98(u32 sound_system, u32 r1) {
    u32 r2_1 = 0;
    u32 r3 = sound_system;
    u32 r5 = ~0u;
    u32 r4 = 0x80u;  // (from the original)
    sound_system = 0u;
    do {
        if (*gptr<u32>(sound_system >= 3u ? r3 : r3 + (sound_system << 2)) == 0) {
            guest::cpu()->r[1] = r1;
            return sound_system;
        }
        u32 r12_1 = r3 + 0xcu;  // (from the original)
        if (sound_system < 3u) {
            r12_1 += sound_system * 0x14u;  // (from the original)
        }
        if (s32(*gptr<u32>(r12_1 + 8u)) < s32(r4)) {
            u32 r12_2 = r3 + 0xcu;  // (from the original)
            if (sound_system < 3u) {
                r12_2 += sound_system * 0x14u;  // (from the original)
            }
            r5 = sound_system;
            r4 = *gptr<u32>(r12_2 + 8u);
        }
        sound_system += 1u;
        guest::preempt();
    } while (s32(sound_system) < 3);
    if (s32(r5) < 0) {
        guest::cpu()->r[1] = r1;
        return ~0u;
    }
    if (r1 + 1u == 0) {
        guest::cpu()->r[1] = r1;
        return r5;
    } else {
        sound_system = 0u;
    }
L_7cfe18:;
    u32 r12_3 = r3 + 0xcu;  // (from the original)
    if (sound_system < 3u) {
        r12_3 += sound_system * 0x14u;  // (from the original)
    }
    if (*gptr<u32>(r12_3) != r1) {
        sound_system += 1u;
        if (s32(sound_system) < 3) {
            guest::preempt();
            goto L_7cfe18;
        }
        goto L_7cfe6c;
    }
    r2_1 = r3 + 0xcu;  // (from the original)
    if (sound_system < 3u) {
        r2_1 += sound_system * 0x14u;  // (from the original)
    }
    if (r2_1 == 0) {
        goto L_7cfe6c;
    } else {
        sound_system = *gptr<u32>(r2_1 + 8u);
    }
L_7cfe50:;
    if (s32(sound_system) >= s32(r4)) {
        guest::cpu()->r[1] = r1;
        return r5;
    }
    guest::cpu()->r[1] = r1;
    return ~0u;
L_7cfe6c:;
    SoundSystem__call_13c1d4(r3, sound_system_b_address, r1, r3);
    r1 = guest::cpu()->r[1];
    sound_system = *sound_handle_count;
    guest::preempt();
    goto L_7cfe50;
}

}  // namespace d_007cfd98
GUEST_EXPORT_FRAMED(0x007cfd98, d_007cfd98::SoundSystem__check_handle_7cfd98, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_007cfe94: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Checks the sound handle against the system's count; 0 when valid, -1 otherwise.
namespace d_007cfe94 {

inline constexpr u32 sound_system_b_address = 0x0098288cu;
inline constexpr u32 sound_handle_count_address = 0x00982898u;
inline guest::global<u32, 0x00982898> sound_handle_count;
inline constexpr guest::Function<0x00321af8, u32(u32, u32, u32, u32)> SoundSystem__call_13c1d4;

u32 SoundSystem__check_handle_7cfe94(u32 sound_system, u32 r1) {
    u32 r2_1 = 0;
    u32 r3 = sound_system;
    u32 r5 = ~0u;
    u32 r4 = 0x80u;  // (from the original)
    sound_system = 0u;
    do {
        if (*gptr<u32>(sound_system >= 4u ? r3 : r3 + (sound_system << 2)) == 0) {
            guest::cpu()->r[1] = r1;
            return sound_system;
        }
        u32 r12_1 = r3 + 0x10u;  // (from the original)
        if (sound_system < 4u) {
            r12_1 += sound_system * 0x14u;  // (from the original)
        }
        if (s32(*gptr<u32>(r12_1 + 8u)) < s32(r4)) {
            u32 r12_2 = r3 + 0x10u;  // (from the original)
            if (sound_system < 4u) {
                r12_2 += sound_system * 0x14u;  // (from the original)
            }
            r5 = sound_system;
            r4 = *gptr<u32>(r12_2 + 8u);
        }
        sound_system += 1u;
        guest::preempt();
    } while (s32(sound_system) < 4);
    if (s32(r5) < 0) {
        guest::cpu()->r[1] = r1;
        return ~0u;
    }
    if (r1 + 1u == 0) {
        guest::cpu()->r[1] = r1;
        return r5;
    } else {
        sound_system = 0u;
    }
L_7cff14:;
    u32 r12_3 = r3 + 0x10u;  // (from the original)
    if (sound_system < 4u) {
        r12_3 += sound_system * 0x14u;  // (from the original)
    }
    if (*gptr<u32>(r12_3) != r1) {
        sound_system += 1u;
        if (s32(sound_system) < 4) {
            guest::preempt();
            goto L_7cff14;
        }
        goto L_7cff68;
    }
    r2_1 = r3 + 0x10u;  // (from the original)
    if (sound_system < 4u) {
        r2_1 += sound_system * 0x14u;  // (from the original)
    }
    if (r2_1 == 0) {
        goto L_7cff68;
    } else {
        sound_system = *gptr<u32>(r2_1 + 8u);
    }
L_7cff4c:;
    if (s32(sound_system) >= s32(r4)) {
        guest::cpu()->r[1] = r1;
        return r5;
    }
    guest::cpu()->r[1] = r1;
    return ~0u;
L_7cff68:;
    SoundSystem__call_13c1d4(r3, sound_system_b_address, r1, r3);
    r1 = guest::cpu()->r[1];
    sound_system = *sound_handle_count;
    guest::preempt();
    goto L_7cff4c;
}

}  // namespace d_007cfe94
GUEST_EXPORT_FRAMED(0x007cfe94, d_007cfe94::SoundSystem__check_handle_7cfe94, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original
