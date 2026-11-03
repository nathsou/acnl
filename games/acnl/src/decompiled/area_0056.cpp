// Functions decompiled by tools/decomp (docs/decomp.md), each proved equal to the recompiled original (prove-cpp). The
// names come from games/acnl/names (tools/decomp/names.py); the others are generated (d_<address>::f_<address>,
// Object_<address>_<argument>, word_<offset>) and still to be chosen.
#include "guest/guest.hpp"
#include "graphics/hemisphere_light.hpp"
#include "recovered/structs.hpp"

#include <bit>

using guest::gptr;

// f_005601b8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Sets the 8-bit color channels from the four floats, each clamped to 0 to 1 (stored in reverse order).
namespace d_005601b8 {

struct __attribute__((packed)) Color8 {
    u8 byte_0;
    u8 byte_1;
    u8 byte_2;
    u8 byte_3;
};
GUEST_OFFSET(Color8, byte_0, 0x0);
GUEST_OFFSET(Color8, byte_1, 0x1);
GUEST_OFFSET(Color8, byte_2, 0x2);
GUEST_OFFSET(Color8, byte_3, 0x3);


void Color8__from_floats(gptr<Color8> color8, float S0, float S1, float S2, float S3) {
    u32 fpsr = guest::cpu()->fpscr;
    float S5_1 = 0.0f;
    float S4_1 = 1.0f;
    u32 fpsr_1 = fpsr & 0xfffffffu | vfp_cmpf(S0, S5_1);  // (from the original)
    if (!(S0 < S5_1)) {
        fpsr_1 = fpsr_1 & 0xfffffffu | vfp_cmpf(S0, S4_1);  // (from the original)
        if (S0 > S4_1) {
            S0 = S4_1;
        }
    } else {
        S0 = S5_1;
    }
    float S6_1 = 255.0f;
    float S0_1 = S1;
    color8->byte_3 = u8(vcvt_uz_f(S0 * S6_1));
    u32 fpsr_2 = fpsr_1 & 0xfffffffu | vfp_cmpf(S0_1, S5_1);  // (from the original)
    if (!(S0_1 < S5_1)) {
        S1 = S4_1;
        fpsr_2 = fpsr_2 & 0xfffffffu | vfp_cmpf(S0_1, S1);  // (from the original)
        if (S0_1 > S1) {
            S0_1 = S4_1;
        }
    } else {
        S0_1 = S5_1;
    }
    float S0_2 = S2;
    color8->byte_2 = u8(vcvt_uz_f(S0_1 * S6_1));
    u32 fpsr_3 = fpsr_2 & 0xfffffffu | vfp_cmpf(S0_2, S5_1);  // (from the original)
    if (!(S0_2 < S5_1)) {
        S1 = S4_1;
        fpsr_3 = fpsr_3 & 0xfffffffu | vfp_cmpf(S0_2, S1);  // (from the original)
        if (S0_2 > S1) {
            S0_2 = S4_1;
        }
    } else {
        S0_2 = S5_1;
    }
    float S0_3 = S3;
    color8->byte_1 = u8(vcvt_uz_f(S0_2 * S6_1));
    if (S0_3 < S5_1) {
        float S0_4 = std::bit_cast<float>(vcvt_uz_f(S5_1 * S6_1));
        u32 r1_4 = std::bit_cast<u32>(S0_4);
        color8->byte_0 = u8(r1_4);
        guest::cpu()->r[1] = r1_4;
        guest::cpu()->s[0] = S0_4;
        guest::cpu()->s[1] = S1;
        return;
    }
    if (S0_3 > S4_1) {
        S0_3 = S4_1;
    }
    float S0_5 = std::bit_cast<float>(vcvt_uz_f(S0_3 * S6_1));
    u32 r1_5 = std::bit_cast<u32>(S0_5);
    color8->byte_0 = u8(r1_5);
    guest::cpu()->r[1] = r1_5;
    guest::cpu()->s[0] = S0_5;
    guest::cpu()->s[1] = S1;
}

}  // namespace d_005601b8
GUEST_EXPORT(0x005601b8, d_005601b8::Color8__from_floats);

// f_0056029c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Builds the shared name table from the source entries for the kind.
namespace d_0056029c {

struct __attribute__((packed)) Object_0056029c_1 {
    u8 byte_0;
};
GUEST_OFFSET(Object_0056029c_1, byte_0, 0x0);


void NameTable__build(u32 name_table, gptr<Object_0056029c_1> arg1, u32 r2) {
    u32 r1 = arg1.addr();
    u32 r5 = 0;
    u32 r4 = 0u;
    if (arg1->byte_0 != 0) {
        r5 = 0u;
        goto L_5602c0;
    }
    guest::cpu()->r[1] = r1;
    return;
L_5602c0:;
    u32 r3_1 = *gptr<s8>(r1);
    if (r3_1 != 0x2cu && r3_1 != 0x20u && r3_1 != 9u && r3_1 != 0xau) {  // (from the original)
        u32 r12 = r1;
        r1 = *gptr<u8>(r1);
        if (r1 == 0) {
            guest::cpu()->r[1] = r1;
            return;
        }
        *gptr<u32>(name_table + (r4 << 2)) = r12;
        r4 += 1u;
        r1 = r12;
        do {
            u32 r3_2 = *gptr<s8>(r1);
            if (r3_2 == 0x2cu || r3_2 == 0x3du || r3_2 == 0) {  // (from the original)
                u32 r3 = r1 - 1u;
L_560318:;
                u32 r6_1 = *gptr<s8>(r3);
                if (r6_1 == 0x20u || r6_1 == 9u || r6_1 == 0xau) {  // (from the original)
                    u32 r6_2 = 0ull + ~0u + u32(r3 >= r12);
                    u32 res_1 = 0ull + ~r6_2 + u32(0u >= r3 - r12);
                    if (res_1 >> 0x1f != (r6_2 & res_1) >> 0x1f) {  // (from the original)
                        r3 -= 1u;
                        guest::preempt();
                        goto L_560318;
                    }
                }
                u32 r12_1 = *gptr<s8>(r1);
                *gptr<u8>(r3 + 1u) = u8(r5);
                if (r12_1 == 0) {
                    guest::cpu()->r[1] = r1;
                    return;
                }
                if (r12_1 == 0x3du) {  // (from the original)
                    r12 = r1 + 1u;
                    r1 = r12;
L_560370:;
                    u32 r3_3 = *gptr<s8>(r1);
                    if (r3_3 != 0x2cu && r3_3 != 0x3du && r3_3 != 0) {  // (from the original)
                        r1 += 1u;
                        guest::preempt();
                        goto L_560370;
                    }
                    r3 = r1 - 1u;
L_560390:;
                    u32 r6_3 = *gptr<s8>(r3);
                    if (r6_3 == 0x20u || r6_3 == 9u || r6_3 == 0xau) {  // (from the original)
                        u32 r6_4 = 0ull + ~0u + u32(r3 >= r12);
                        u32 res_2 = 0ull + ~r6_4 + u32(0u >= r3 - r12);
                        if (res_2 >> 0x1f != (r6_4 & res_2) >> 0x1f) {  // (from the original)
                            r3 -= 1u;
                            guest::preempt();
                            goto L_560390;
                        }
                    }
                    if (*gptr<u8>(r1) == 0) {
                        guest::cpu()->r[1] = r1;
                        return;
                    }
                }
                if (s32(r2) <= s32(r4)) {
                    guest::cpu()->r[1] = r1;
                    return;
                }
                r1 += 1u;
                if (*gptr<u8>(r1) != 0) {
                    guest::preempt();
                    goto L_5602c0;
                }
                guest::cpu()->r[1] = r1;
                return;
            }
            r1 += 1u;
            guest::preempt();
        } while (1);
    }
    r1 += 1u;
    guest::preempt();
    goto L_5602c0;
}

}  // namespace d_0056029c
GUEST_EXPORT_FRAMED(0x0056029c, d_0056029c::NameTable__build, 0x7f0);  // pushes {r4, r5, r6, r7, r8, r9, r10} first, as the original

// f_005603f0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The shared critical section at 0xae544c, constructed once.
namespace d_005603f0 {

inline constexpr u32 shared_critical_section_pointer_address = 0x009753a8u;
inline constexpr u32 shared_critical_section_address = 0x00ae544cu;
inline guest::global<u32, 0x009753a8> shared_critical_section_pointer;
inline constexpr guest::Function<0x0012bfec, u32(u32)> sead__CriticalSection__CriticalSection_0012bfec;
inline constexpr guest::Function<0x002fe7dd, u32(u32, u32, u32, u32)> static_guard_acquire;

u32 get_shared_critical_section(u32 r0_unused, u32 r1, u32 r2) {
    if ((*shared_critical_section_pointer & 1u) != 0) {
        return shared_critical_section_address;
    }
    u32 first_time = static_guard_acquire(shared_critical_section_pointer_address, r1, r2, guest::cpu()->r[3]);
    if (first_time == 0) {
        return shared_critical_section_address;
    }
    sead__CriticalSection__CriticalSection_0012bfec(shared_critical_section_address);
    guest::cpu()->r[1] = 0x137e8cu;  // (from the original)
    return shared_critical_section_address;
}

}  // namespace d_005603f0
GUEST_EXPORT_FRAMED(0x005603f0, d_005603f0::get_shared_critical_section, 0x4010);  // pushes {r4, lr} first, as the original

// f_00560650: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Unlinks every node of the list and empties it.
namespace d_00560650 {

struct __attribute__((packed)) IntrusiveList {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(IntrusiveList, word_0, 0x0);
GUEST_OFFSET(IntrusiveList, word_4, 0x4);
GUEST_OFFSET(IntrusiveList, word_8, 0x8);

struct __attribute__((packed)) Local_00560650_r3_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_00560650_r3_1, word_0, 0x0);
GUEST_OFFSET(Local_00560650_r3_1, word_4, 0x4);


void IntrusiveList__clear(gptr<IntrusiveList> intrusive_list) {
    u32 r0 = intrusive_list.addr();
    u32 r1 = intrusive_list->word_4;
    u32 r2 = 0u;
    if (r1 != r0) {
        do {
            gptr<Local_00560650_r3_1> r3_1 = gptr<Local_00560650_r3_1>(r1);
            r1 = *gptr<u32>(r1 + 4u);
            r3_1->word_4 = r2;
            r3_1->word_0 = r2;
            guest::preempt();
        } while (r1 != r0);
    }
    intrusive_list->word_4 = r0;
    intrusive_list->word_8 = r2;
    intrusive_list->word_0 = r0;
    guest::cpu()->r[1] = r0 + 4u;
}

}  // namespace d_00560650
GUEST_EXPORT(0x00560650, d_00560650::IntrusiveList__clear);

// f_00560688: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Links the node at the front of the list.
namespace d_00560688 {

struct __attribute__((packed)) IntrusiveList {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
};
GUEST_OFFSET(IntrusiveList, word_4, 0x4);

struct __attribute__((packed)) Object_00560688_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Object_00560688_1, word_0, 0x0);
GUEST_OFFSET(Object_00560688_1, word_4, 0x4);


void IntrusiveList__push_front(gptr<IntrusiveList> intrusive_list, gptr<Object_00560688_1> arg1) {
    u32 r2_1 = intrusive_list->word_4;
    intrusive_list->word_4 = arg1.addr();
    arg1->word_0 = intrusive_list.addr();
    arg1->word_4 = r2_1;
    if (r2_1 != 0) {
        *gptr<u32>(r2_1) = arg1.addr();
    }
}

}  // namespace d_00560688
GUEST_EXPORT(0x00560688, d_00560688::IntrusiveList__push_front);

// f_00560868: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Calls virtual 4 of the task's root object.
namespace d_00560868 {


void TaskBase__call_virtual_4_of_root(gptr<sead__TaskBase> task_base) {
    u32 r0_1 = *gptr<u32>(*gptr<u32>(task_base->task_mgr + 0x20u) + 0x20u);  // (from the original)
    u32 r3_1 = *gptr<u32>(*gptr<u32>(r0_1) + 0x10u);  // (from the original)
    // virtual function 4 of r0_1
    guest::call_address<u32>(r3_1, r0_1, guest::cpu()->r[1], guest::cpu()->r[2], r3_1);
}

}  // namespace d_00560868
GUEST_EXPORT(0x00560868, d_00560868::TaskBase__call_virtual_4_of_root);

// f_00560930: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Constructs the task entry: its 4 sub entries, cleared words and index -1, enabled.
namespace d_00560930 {

struct __attribute__((packed)) TaskEntry {
    u8 byte_0;
    u8 unknown_1[0x3];  // (not used here)
    u32 word_4;
};
GUEST_OFFSET(TaskEntry, byte_0, 0x0);
GUEST_OFFSET(TaskEntry, word_4, 0x4);

struct __attribute__((packed)) Local_00560930_r0_3 {
    u8 unknown_0[0x78];  // (not used here)
    u8 byte_78;
    u8 unknown_79[0x3];  // (not used here)
    u32 word_7c;
};
GUEST_OFFSET(Local_00560930_r0_3, byte_78, 0x78);
GUEST_OFFSET(Local_00560930_r0_3, word_7c, 0x7c);

inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> for_each_element;

u32 TaskEntry__construct(gptr<TaskEntry> task_entry) {
    task_entry->byte_0 = 0;
    task_entry->word_4 = 0;
    u32 r0_2 = for_each_element((task_entry.addr() + 4u) + 4u, 0x11e460u, 0x14u, 4u);  // (from the original)
    *gptr<u32>(r0_2 + 0x50u) = 0;  // (from the original)
    *gptr<u32>(r0_2 + 0x54u) = 0;  // (from the original)
    *gptr<u32>(r0_2 + 0x58u) = 0;  // (from the original)
    *gptr<u32>(r0_2 + 0x5cu) = 0;  // (from the original)
    *gptr<u32>(r0_2 + 0x60u) = 0;  // (from the original)
    *gptr<u32>(r0_2 + 0x64u) = 0;  // (from the original)
    u32 ea_8 = r0_2 + 0x68u;  // (from the original)
    *gptr<u32>(ea_8) = 0;
    u32 ea_9 = ea_8 + 4u;
    *gptr<u32>(ea_9) = ~0u;
    gptr<Local_00560930_r0_3> r0_3 = gptr<Local_00560930_r0_3>(ea_9 - 0x74u);  // (from the original)
    r0_3->byte_78 = 1;
    r0_3->word_7c = 0;
    guest::cpu()->r[1] = 1u;
    return r0_3.addr();
}

}  // namespace d_00560930
GUEST_EXPORT_FRAMED(0x00560930, d_00560930::TaskEntry__construct, 0x4010);  // pushes {r4, lr} first, as the original

// f_00560a20: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00560a20 {

struct __attribute__((packed)) Local_00560a20_r5_1 {
    u8 unknown_0[0x8];  // (not used here)
    u32 word_8;
};
GUEST_OFFSET(Local_00560a20_r5_1, word_8, 0x8);

inline constexpr u32 vtable_sead__TaskBase = 0x00905c88u;
inline constexpr guest::Function<0x0013bb00, u32(u32, u32)> unlink_node_0013bb00;
inline constexpr guest::Function<0x0013efb4, u32(u32, u32, u32, u32)> destroy_disposer;
inline constexpr guest::Function<0x0055f1ac, u32(u32, u32, u32, u32)> ResourceTask__try_finish;
inline constexpr guest::Function<0x00560bec, u32(u32, u32, u32, u32)> TreeNode__clear;

u32 sead__TaskBase__destructor(gptr<sead__TaskBase> task_base) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 r0 = task_base.addr();
    u32 i_disposer = r0;
    u32 r1 = vtable_sead__TaskBase;
    u32 zf_1 = task_base->task_mgr == 0;
    task_base->vtable = r1;
    if (!zf_1) {
        do {
            u32 r0_1 = *gptr<u32>(i_disposer + 0x14u);  // (from the original)
            if (r0_1 == 0) {
                break;
            }
            ResourceTask__try_finish(*gptr<u32>(i_disposer + 0x5cu), *gptr<u32>(r0_1 + 0x10u), guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
            r1 = guest::cpu()->r[1];
            guest::preempt();
        } while (1);
    }
    *gptr<u8>(i_disposer + 0x60u) = 7;  // (from the original)
    TreeNode__clear(i_disposer + 0x10u, r1, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    gptr<Local_00560a20_r5_1> r5_1 = gptr<Local_00560a20_r5_1>(*gptr<u32>(i_disposer + 0x40u));  // (from the original)
    u32 r0_4 = i_disposer + 0x34u;  // (from the original)
    if (r5_1.addr() != 0) {
        *gptr<u32>(r0_4 + 0xcu) = 0;  // (from the original)
        unlink_node_0013bb00(r0_4, 0u);
        r5_1->word_8 = r5_1->word_8 - 1u;
    }
    frame.release();
    return destroy_disposer(i_disposer, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_00560a20
GUEST_EXPORT(0x00560a20, d_00560a20::sead__TaskBase__destructor);

// f_00560aa8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Unlinks the node from its parent and siblings.
namespace d_00560aa8 {

struct __attribute__((packed)) TreeNode {
    u32 word_0;
    u8 unknown_4[0x4];  // (not used here)
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(TreeNode, word_0, 0x0);
GUEST_OFFSET(TreeNode, word_8, 0x8);
GUEST_OFFSET(TreeNode, word_c, 0xc);


void TreeNode__unlink(gptr<TreeNode> tree_node) {
    u32 r2_1 = tree_node->word_8;
    u32 r3_1 = tree_node->word_c;
    if (r3_1 != 0) {
        *gptr<u32>(r3_1 + 8u) = r2_1;
        u32 r2_2 = tree_node->word_8;
        if (r2_2 == 0) {
            tree_node->word_c = 0;
            tree_node->word_0 = 0;
            guest::cpu()->r[1] = 0u;
            return;
        }
        *gptr<u32>(r2_2 + 0xcu) = tree_node->word_c;  // (from the original)
        tree_node->word_8 = 0;
        tree_node->word_c = 0;
        tree_node->word_0 = 0;
        guest::cpu()->r[1] = 0u;
        return;
    }
    u32 r3_2 = tree_node->word_0;
    if (r3_2 != 0) {
        *gptr<u32>(r3_2 + 4u) = r2_1;
        tree_node->word_0 = 0;
    }
    u32 r2_3 = tree_node->word_8;
    if (r2_3 == 0) {
        guest::cpu()->r[1] = 0u;
        return;
    }
    *gptr<u32>(r2_3 + 0xcu) = tree_node->word_c;  // (from the original)
    tree_node->word_8 = 0;
    guest::cpu()->r[1] = 0u;
}

}  // namespace d_00560aa8
GUEST_EXPORT(0x00560aa8, d_00560aa8::TreeNode__unlink);

// f_00560b6c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Unlinks the child, then appends it as the last child of the node.
namespace d_00560b6c {

struct __attribute__((packed)) TreeNode {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
};
GUEST_OFFSET(TreeNode, word_4, 0x4);

struct __attribute__((packed)) Object_00560b6c_1 {
    u32 word_0;
    u8 unknown_4[0x4];  // (not used here)
    u32 word_8;
};
GUEST_OFFSET(Object_00560b6c_1, word_0, 0x0);
GUEST_OFFSET(Object_00560b6c_1, word_8, 0x8);

inline constexpr guest::Function<0x00560aa8, u32(u32, u32)> TreeNode__unlink;

void TreeNode__append_child_2(gptr<TreeNode> tree_node, gptr<Object_00560b6c_1> arg1) {
    TreeNode__unlink(arg1.addr(), arg1.addr());
    u32 r0_1 = tree_node->word_4;
    if (r0_1 == 0) {
        tree_node->word_4 = arg1.addr();
        arg1->word_0 = tree_node.addr();
        return;
    }
    arg1->word_8 = r0_1;
    *gptr<u32>(tree_node->word_4 + 0xcu) = arg1.addr();  // (from the original)
    tree_node->word_4 = arg1.addr();
    arg1->word_0 = tree_node.addr();
}

}  // namespace d_00560b6c
GUEST_EXPORT_FRAMED(0x00560b6c, d_00560b6c::TreeNode__append_child_2, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_00560bec: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Unlinks the node and detaches all its children.
namespace d_00560bec {

struct __attribute__((packed)) TreeNode {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
};
GUEST_OFFSET(TreeNode, word_4, 0x4);

struct __attribute__((packed)) Local_00560bec_r4_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Local_00560bec_r4_1, word_0, 0x0);
GUEST_OFFSET(Local_00560bec_r4_1, word_4, 0x4);
GUEST_OFFSET(Local_00560bec_r4_1, word_8, 0x8);
GUEST_OFFSET(Local_00560bec_r4_1, word_c, 0xc);

inline constexpr guest::Function<0x00560aa8, u32(u32, u32, u32, u32)> TreeNode__unlink;
inline constexpr guest::Function<0x00560bac, u32(u32)> TreeNode__unlink_children;

void TreeNode__clear(gptr<TreeNode> tree_node) {
    u32 r0 = tree_node.addr();
    u32 r6 = r0;
    TreeNode__unlink(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r5 = tree_node->word_4;
    u32 r7 = 0u;
    if (r5 != 0) {
        do {
            gptr<Local_00560bec_r4_1> r4_1 = gptr<Local_00560bec_r4_1>(r5);
            r5 = *gptr<u32>(r5 + 8u);
            TreeNode__unlink_children(r4_1.addr());
            r4_1->word_c = r7;
            r4_1->word_8 = r7;
            r4_1->word_4 = r7;
            r4_1->word_0 = r7;
            guest::preempt();
        } while (r5 != 0);
    }
    *gptr<u32>(r6 + 0xcu) = r7;  // (from the original)
    *gptr<u32>(r6 + 8u) = r7;
    *gptr<u32>(r6 + 4u) = r7;
    *gptr<u32>(r6) = r7;
}

}  // namespace d_00560bec
GUEST_EXPORT_FRAMED(0x00560bec, d_00560bec::TreeNode__clear, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_00560e80: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00560e80 {

inline constexpr u32 vtable_sead__DualScreenTask = 0x009046a0u;
inline constexpr u32 vtable_sead__MethodTreeNode = 0x009047b0u;
inline constexpr u32 vtable_sead__UlcdTask = 0x00905ce8u;
inline constexpr guest::Function<0x0013efb4, u32(u32)> destroy_disposer;
inline constexpr guest::Function<0x0054488c, u32(u32, u32, u32, u32)> sead__Task__destroy;
inline constexpr guest::Function<0x00560a20, u32(u32, u32, u32, u32)> sead__TaskBase__destructor;

u32 sead__UlcdTask__destructor(gptr<sead__DualScreenTask> dual_screen_task) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 i_disposer = dual_screen_task.addr() + 0x15cu;  // (from the original)
    dual_screen_task->vtable = vtable_sead__UlcdTask;
    dual_screen_task->method_tree_node_vtable_15c = vtable_sead__MethodTreeNode;
    sead__Task__destroy(i_disposer, vtable_sead__UlcdTask, guest::cpu()->r[2], guest::cpu()->r[3]);
    destroy_disposer(i_disposer);
    dual_screen_task->vtable = vtable_sead__DualScreenTask;
    dual_screen_task->method_tree_node_vtable_10c = vtable_sead__MethodTreeNode;
    sead__Task__destroy(i_disposer - 0x50u, vtable_sead__DualScreenTask, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    destroy_disposer(i_disposer - 0x50u);  // (from the original)
    dual_screen_task->method_tree_node_vtable_bc = vtable_sead__MethodTreeNode;
    sead__Task__destroy(i_disposer - 0xa0u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    destroy_disposer(i_disposer - 0xa0u);  // (from the original)
    dual_screen_task->method_tree_node_vtable = vtable_sead__MethodTreeNode;
    sead__Task__destroy(i_disposer - 0xf0u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    destroy_disposer(i_disposer - 0xf0u);  // (from the original)
    frame.release();
    return sead__TaskBase__destructor(i_disposer - 0x15cu, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
}

}  // namespace d_00560e80
GUEST_EXPORT(0x00560e80, d_00560e80::sead__UlcdTask__destructor);

// f_00561310: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00561310 {

inline constexpr u32 vtable_sead__Viewport = 0x00905dd4u;
inline guest::global<u8, 0x00975328> global_00975328;
inline constexpr guest::Function<0x00561264, u32(u32, u32, u32, u32)> Viewport__apply_rotation;

void sead__Viewport__Viewport_00561310(gptr<sead__Viewport> viewport) {
    float S0_1 = 3.4028235e38f;
    viewport->float_4 = S0_1;
    viewport->float_8 = S0_1;
    float S0_2 = -3.4028235e38f;
    viewport->float_c = S0_2;
    viewport->float_10 = S0_2;
    viewport->vtable = vtable_sead__Viewport;
    viewport->byte_14 = *global_00975328;
    guest::cpu()->s[0] = S0_2;
    Viewport__apply_rotation(viewport.addr(), guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_00561310
GUEST_EXPORT_FRAMED(0x00561310, d_00561310::sead__Viewport__Viewport_00561310, 0x4010);  // pushes {r4, lr} first, as the original

// f_005615e4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Calls the function at 0x561900 with the stacked word.
namespace d_005615e4 {

inline constexpr guest::Function<0x00561900, u32(u32, u32, u32, u32)> Viewport__set;

struct __attribute__((packed)) Frame_005615e4 {
    u32 word_0;
};
GUEST_OFFSET(Frame_005615e4, word_0, 0x0);
GUEST_SIZE(Frame_005615e4, 0x4);

u32 call_561900_with_stack_word(u32 r0_unused, u32 r1_unused, u32 r2_unused, u32 r3) {
    guest::StackFrameOf<Frame_005615e4> frame;  // the original's stack frame
    frame->word_0 = r3;
    frame->word_0 = *frame.at<u32>(8);
    Viewport__set(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], r3);
    return guest::cpu()->r[0];
}

}  // namespace d_005615e4
GUEST_EXPORT_FRAMED(0x005615e4, d_005615e4::call_561900_with_stack_word, 0x4000);  // pushes {lr} first, as the original

// f_00561ba4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Zeroes the record with its last word at 0x1000.
namespace d_00561ba4 {

struct __attribute__((packed)) Record14 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
};
GUEST_OFFSET(Record14, word_0, 0x0);
GUEST_OFFSET(Record14, word_4, 0x4);
GUEST_OFFSET(Record14, word_8, 0x8);
GUEST_OFFSET(Record14, word_c, 0xc);
GUEST_OFFSET(Record14, word_10, 0x10);


void Record14__init_4096(gptr<Record14> record14) {
    record14->word_0 = 0;
    record14->word_4 = 0;
    record14->word_8 = 0;
    record14->word_c = 0;
    record14->word_10 = 0x1000;  // (from the original)
}

}  // namespace d_00561ba4
GUEST_EXPORT(0x00561ba4, d_00561ba4::Record14__init_4096);

// f_00564804: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The index of acre (x, y) among the acres of the same kind in the 16 x 16 grid; -1 when it is not of the kind.
namespace d_00564804 {

inline constexpr guest::Function<0x002f74c8, u32(u32, u32)> current_scene_id;
inline constexpr guest::Function<0x0056549c, u32(u32)> category_display_kind;
inline constexpr guest::Function<0x006a5e34, u32(u32, u32, u32, u32)> get_map_table;

u32 acre_kind_index_among_same(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = r0;
    u32 r5 = r1;
    u32 r6 = r2;
    u32 map_table_2 = get_map_table(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    if (map_table_2 != 0) {
        u32 scene = current_scene_id(map_table_2, r1);
        u32 r0_3 = category_display_kind(scene);
        r1 = guest::cpu()->r[1];
        u32 r7 = r0_3;
        if (*gptr<u8>(r0_3 + (r6 << 4) + r5) == r4) {
            r2 = 0u;
            r1 = r2;
            do {
                r0 = 0u;
                r3 = r7 + (r1 << 4);
                do {
                    if (*gptr<u8>(r3 + r0) == r4) {
                        if (r5 != r0 || r6 != r1) {
                            r2 += 1u;
                        } else {
                            guest::cpu()->r[1] = r1;
                            return r2;
                        }
                    }
                    r0 += 1u;
                    guest::preempt();
                } while (s32(r0) < 0x10);  // (from the original)
                r1 += 1u;
                guest::preempt();
            } while (s32(r1) < 0x10);  // (from the original)
        }
    }
    guest::cpu()->r[1] = r1;
    return ~0u;
}

}  // namespace d_00564804
GUEST_EXPORT_FRAMED(0x00564804, d_00564804::acre_kind_index_among_same, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_00565668: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Turns the direction toward the target in the xz plane, at most the step.
namespace d_00565668 {

struct __attribute__((packed)) Vec3 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Vec3, word_0, 0x0);
GUEST_OFFSET(Vec3, word_4, 0x4);
GUEST_OFFSET(Vec3, word_8, 0x8);

struct __attribute__((packed)) Object_00565668_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Object_00565668_1, word_0, 0x0);
GUEST_OFFSET(Object_00565668_1, word_4, 0x4);
GUEST_OFFSET(Object_00565668_1, word_8, 0x8);


void Vec3__turn_toward_xz(gptr<Vec3> vec3, gptr<Object_00565668_1> arg1, float S0, float S1, float S2) {
    u32 fpsr = guest::cpu()->fpscr;
    float S1_2 = 0;
    float S2_3 = 0;
    float S0_2 = 0;
    float S1_3 = 0;
    float S0_3 = 0;
    float S6_1 = std::bit_cast<float>(vec3->word_0);
    float S5_1 = std::bit_cast<float>(arg1->word_0);
    u32 fpsr_1 = fpsr & 0xfffffffu | vfp_cmpf(S6_1, S5_1);  // (from the original)
    if (S6_1 == S5_1) {
        fpsr_1 = fpsr_1 & 0xfffffffu | vfp_cmpf(std::bit_cast<float>(vec3->word_4), std::bit_cast<float>(arg1->word_4));  // (from the original)
        if (std::bit_cast<float>(vec3->word_4) == std::bit_cast<float>(arg1->word_4)) {
            fpsr_1 = fpsr_1 & 0xfffffffu | vfp_cmpf(std::bit_cast<float>(vec3->word_8), std::bit_cast<float>(arg1->word_8));  // (from the original)
            if (std::bit_cast<float>(vec3->word_8) == std::bit_cast<float>(arg1->word_8)) {
                S1_2 = std::bit_cast<float>(vec3->word_0) - std::bit_cast<float>(arg1->word_0);
                S2_3 = std::bit_cast<float>(vec3->word_4) - std::bit_cast<float>(arg1->word_4);
                S0_2 = std::bit_cast<float>(vec3->word_8) - std::bit_cast<float>(arg1->word_8);
                S1_3 = S1_2 * S1_2 + S2_3 * S2_3 + S0_2 * S0_2;
                S0_3 = sqrtf(S1_3);
                guest::cpu()->s[0] = S0_3;
                guest::cpu()->s[1] = S1_3;
                return;
            }
        }
    }
    float S5_2 = S6_1 - S5_1;
    float S3_1 = std::bit_cast<float>(vec3->word_4) - std::bit_cast<float>(arg1->word_4);
    float S4_1 = std::bit_cast<float>(vec3->word_8) - std::bit_cast<float>(arg1->word_8);
    float S7_1 = sqrtf(S5_2 * S5_2 + S3_1 * S3_1 + S4_1 * S4_1);
    if (!(S7_1 < S2)) {
        float S6_2 = S7_1 * S0;
        float S5_3 = S5_2 * S0;
        float S3_2 = S3_1 * S0;
        float S0_1 = S4_1 * S0;
        if (s32(std::bit_cast<u32>(fabsf(S6_2))) > 0x34000000) {  // (from the original)
            u32 fpsr_3 = (fpsr_1 & 0xfffffffu | vfp_cmpf(S7_1, S2)) & 0xfffffffu | vfp_cmpf(S6_2, S1);  // (from the original)
            if (S6_2 > S1) {
                float S2_1 = S1 / S6_2;
                S5_3 = S5_3 * S2_1;
                S3_2 = S3_2 * S2_1;
                S0_1 = S0_1 * S2_1;
            } else if (!((fpsr_3 & 0xfffffffu | vfp_cmpf(S6_2, S2)) >> 0x1d & 1)) {  // (from the original)
                float S1_1 = S2 / S6_2;
                S5_3 = S5_3 * S1_1;
                S3_2 = S3_2 * S1_1;
                S0_1 = S0_1 * S1_1;
            }
            float S2_2 = std::bit_cast<float>(vec3->word_0) - S5_3;
            float S3_3 = std::bit_cast<float>(vec3->word_4) - S3_2;
            vec3->word_8 = std::bit_cast<u32>(std::bit_cast<float>(vec3->word_8) - S0_1);
            vec3->word_0 = std::bit_cast<u32>(S2_2);
            vec3->word_4 = std::bit_cast<u32>(S3_3);
        } else {
            vec3->word_0 = arg1->word_0;
            vec3->word_4 = arg1->word_4;
            vec3->word_8 = arg1->word_8;
        }
    } else {
        vec3->word_0 = arg1->word_0;
        vec3->word_4 = arg1->word_4;
        vec3->word_8 = arg1->word_8;
    }
    S1_2 = std::bit_cast<float>(vec3->word_0) - std::bit_cast<float>(arg1->word_0);
    S2_3 = std::bit_cast<float>(vec3->word_4) - std::bit_cast<float>(arg1->word_4);
    S0_2 = std::bit_cast<float>(vec3->word_8) - std::bit_cast<float>(arg1->word_8);
    S1_3 = S1_2 * S1_2 + S2_3 * S2_3 + S0_2 * S0_2;
    S0_3 = sqrtf(S1_3);
    guest::cpu()->s[0] = S0_3;
    guest::cpu()->s[1] = S1_3;
}

}  // namespace d_00565668
GUEST_EXPORT(0x00565668, d_00565668::Vec3__turn_toward_xz);

// f_005657ac: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Moves the point toward the target in the xz plane by at most the step (all the way for 0); true when it arrived.
namespace d_005657ac {

struct __attribute__((packed)) Vec3 {
    u32 word_0;
    u8 unknown_4[0x4];  // (not used here)
    u32 word_8;
};
GUEST_OFFSET(Vec3, word_0, 0x0);
GUEST_OFFSET(Vec3, word_8, 0x8);

struct __attribute__((packed)) Object_005657ac_1 {
    u32 word_0;
    u8 unknown_4[0x4];  // (not used here)
    u32 word_8;
};
GUEST_OFFSET(Object_005657ac_1, word_0, 0x0);
GUEST_OFFSET(Object_005657ac_1, word_8, 0x8);


u32 Vec3__move_toward_xz(gptr<Vec3> vec3, gptr<Object_005657ac_1> arg1, float S0) {
    float S1_1 = std::bit_cast<float>(vec3->word_0) - std::bit_cast<float>(arg1->word_0);
    float S2_1 = std::bit_cast<float>(vec3->word_8) - std::bit_cast<float>(arg1->word_8);
    float S3_1 = sqrtf(S1_1 * S1_1 + S2_1 * S2_1);
    if (S0 != 0.0f) {
        if (s32(std::bit_cast<u32>(fabsf(S3_1))) > 0x34000000) {  // (from the original)
            if (!(S3_1 <= S0)) {
                float S4_1 = S0 / S3_1;
                float S0_1 = std::bit_cast<float>(vec3->word_8) - S2_1 * S4_1;
                vec3->word_0 = std::bit_cast<u32>(std::bit_cast<float>(vec3->word_0) - S1_1 * S4_1);
                vec3->word_8 = std::bit_cast<u32>(S0_1);
                guest::cpu()->r[1] = arg1.addr();
                guest::cpu()->s[0] = S0_1;
                guest::cpu()->s[1] = S1_1;
                return 0u;
            }
        }
        vec3->word_0 = arg1->word_0;
        u32 r1_1 = arg1->word_8;
        vec3->word_8 = r1_1;
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1_1;
        return 1u;
    }
    float S0_2 = fabsf(S3_1);
    if (s32(std::bit_cast<u32>(S0_2)) <= 0x34000000) {  // (from the original)
        guest::cpu()->r[1] = arg1.addr();
        guest::cpu()->s[0] = S0_2;
        guest::cpu()->s[1] = S1_1;
        return 1u;
    }
    guest::cpu()->r[1] = arg1.addr();
    guest::cpu()->s[0] = S0_2;
    guest::cpu()->s[1] = S1_1;
    return 0u;
}

}  // namespace d_005657ac
GUEST_EXPORT(0x005657ac, d_005657ac::Vec3__move_toward_xz);

// f_00565958: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Moves the point a fraction of the way toward the target in the xz plane, the move clamped between the minimum and
// maximum; the distance left.
namespace d_00565958 {

struct __attribute__((packed)) Vec3 {
    u32 word_0;
    u8 unknown_4[0x4];  // (not used here)
    u32 word_8;
};
GUEST_OFFSET(Vec3, word_0, 0x0);
GUEST_OFFSET(Vec3, word_8, 0x8);

struct __attribute__((packed)) Object_00565958_1 {
    u32 word_0;
    u8 unknown_4[0x4];  // (not used here)
    u32 word_8;
};
GUEST_OFFSET(Object_00565958_1, word_0, 0x0);
GUEST_OFFSET(Object_00565958_1, word_8, 0x8);


void Vec3__ease_toward_xz(gptr<Vec3> vec3, gptr<Object_00565958_1> arg1, float S0, float S1, float S2) {
    u32 fpsr = guest::cpu()->fpscr;
    float S3_1 = std::bit_cast<float>(vec3->word_0);
    float S4_1 = std::bit_cast<float>(arg1->word_0);
    u32 fpsr_1 = fpsr & 0xfffffffu | vfp_cmpf(S3_1, S4_1);  // (from the original)
    if (S3_1 == S4_1) {
        fpsr_1 = fpsr_1 & 0xfffffffu | vfp_cmpf(std::bit_cast<float>(vec3->word_8), std::bit_cast<float>(arg1->word_8));  // (from the original)
        if (std::bit_cast<float>(vec3->word_8) == std::bit_cast<float>(arg1->word_8)) {
            float S1_1 = std::bit_cast<float>(vec3->word_0) - std::bit_cast<float>(arg1->word_0);
            float S0_1 = std::bit_cast<float>(vec3->word_8) - std::bit_cast<float>(arg1->word_8);
            float S0_2 = sqrtf(S1_1 * S1_1 + S0_1 * S0_1);
            guest::cpu()->s[0] = S0_2;
            return;
        }
    }
    float S3_2 = S3_1 - S4_1;
    float S5_1 = std::bit_cast<float>(vec3->word_8) - std::bit_cast<float>(arg1->word_8);
    float S6_1 = sqrtf(S3_2 * S3_2 + S5_1 * S5_1);
    if (!(S6_1 < S2)) {
        float S4_2 = S6_1 * S0;
        float S3_3 = S3_2 * S0;
        float S0_3 = S5_1 * S0;
        if (s32(std::bit_cast<u32>(fabsf(S4_2))) > 0x34000000) {  // (from the original)
            u32 fpsr_3 = (fpsr_1 & 0xfffffffu | vfp_cmpf(S6_1, S2)) & 0xfffffffu | vfp_cmpf(S4_2, S1);  // (from the original)
            if (S4_2 > S1) {
                float S2_1 = S1 / S4_2;
                S3_3 = S3_3 * S2_1;
                S0_3 = S0_3 * S2_1;
            } else if (!((fpsr_3 & 0xfffffffu | vfp_cmpf(S4_2, S2)) >> 0x1d & 1)) {  // (from the original)
                float S1_2 = S2 / S4_2;
                S3_3 = S3_3 * S1_2;
                S0_3 = S0_3 * S1_2;
            }
            float S0_4 = std::bit_cast<float>(vec3->word_8) - S0_3;
            vec3->word_0 = std::bit_cast<u32>(std::bit_cast<float>(vec3->word_0) - S3_3);
            vec3->word_8 = std::bit_cast<u32>(S0_4);
            float S1_3 = std::bit_cast<float>(vec3->word_0) - std::bit_cast<float>(arg1->word_0);
            float S0_5 = std::bit_cast<float>(vec3->word_8) - std::bit_cast<float>(arg1->word_8);
            float S0_6 = sqrtf(S1_3 * S1_3 + S0_5 * S0_5);
            guest::cpu()->s[0] = S0_6;
            return;
        }
    }
    vec3->word_0 = arg1->word_0;
    vec3->word_8 = arg1->word_8;
    float S1_4 = std::bit_cast<float>(vec3->word_0) - std::bit_cast<float>(arg1->word_0);
    float S0_7 = std::bit_cast<float>(vec3->word_8) - std::bit_cast<float>(arg1->word_8);
    float S0_8 = sqrtf(S1_4 * S1_4 + S0_7 * S0_7);
    guest::cpu()->s[0] = S0_8;
}

}  // namespace d_00565958
GUEST_EXPORT(0x00565958, d_00565958::Vec3__ease_toward_xz);

// f_00565a68: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Moves the point a fraction of the way toward the target in the xz plane, by at most the cap.
namespace d_00565a68 {

struct __attribute__((packed)) Vec3 {
    float float_0;
    u8 unknown_4[0x4];  // (not used here)
    float float_8;
};
GUEST_OFFSET(Vec3, float_0, 0x0);
GUEST_OFFSET(Vec3, float_8, 0x8);

struct __attribute__((packed)) Object_00565a68_1 {
    float float_0;
    u8 unknown_4[0x4];  // (not used here)
    float float_8;
};
GUEST_OFFSET(Object_00565a68_1, float_0, 0x0);
GUEST_OFFSET(Object_00565a68_1, float_8, 0x8);


void Vec3__ease_toward_xz_capped(gptr<Vec3> vec3, gptr<Object_00565a68_1> arg1, float S0, float S1) {
    u32 fpsr = guest::cpu()->fpscr;
    float S3_1 = vec3->float_0;
    float S2_1 = arg1->float_0;
    u32 fpsr_1 = fpsr & 0xfffffffu | vfp_cmpf(S3_1, S2_1);  // (from the original)
    if (S3_1 == S2_1) {
        fpsr_1 = fpsr_1 & 0xfffffffu | vfp_cmpf(vec3->float_8, arg1->float_8);  // (from the original)
        if (vec3->float_8 == arg1->float_8) {
            guest::cpu()->r[1] = arg1.addr();
            return;
        }
    }
    float S2_2 = (S3_1 - S2_1) * S0;
    float S0_1 = (vec3->float_8 - arg1->float_8) * S0;
    float S3_2 = sqrtf(S2_2 * S2_2 + S0_1 * S0_1);
    u32 r1_1 = std::bit_cast<u32>(fabsf(S3_2));
    if (s32(r1_1) <= 0x34000000) {  // (from the original)
        guest::cpu()->r[1] = r1_1;
        return;
    }
    if (!(S3_2 > S1)) {
        float S0_2 = vec3->float_8 - S0_1;
        vec3->float_0 = vec3->float_0 - S2_2;
        vec3->float_8 = S0_2;
        guest::cpu()->r[1] = r1_1;
        return;
    }
    float S4_1 = S1 / S3_2;
    float S2_3 = S2_2 * S4_1;
    float S0_3 = S0_1 * S4_1;
    float S0_4 = vec3->float_8 - S0_3;
    vec3->float_0 = vec3->float_0 - S2_3;
    vec3->float_8 = S0_4;
    guest::cpu()->r[1] = r1_1;
}

}  // namespace d_00565a68
GUEST_EXPORT(0x00565a68, d_00565a68::Vec3__ease_toward_xz_capped);

// f_00565c00: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00565c00 {

inline constexpr u32 global_009753e8_address = 0x009753e8u;
inline constexpr guest::Function<0x0013bb30, u32(u32, u32)> Random__next_float;

u32 random_float_565c00() {
    return Random__next_float(global_009753e8_address, guest::cpu()->r[1]);
}

}  // namespace d_00565c00
GUEST_EXPORT(0x00565c00, d_00565c00::random_float_565c00);

// f_0056677c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Under the lock, flushes the pending GPU commands (the queued ones or the buffer's range) and counts the flush.
namespace d_0056677c {

struct __attribute__((packed)) Object_0056677c_0 {
    u8 unknown_0[0x10];  // (not used here)
    u32 word_10;
    u32 word_14;
    u32 word_18;
    u8 unknown_1c[0x10];  // (not used here)
    u8 byte_2c;
};
GUEST_OFFSET(Object_0056677c_0, word_10, 0x10);
GUEST_OFFSET(Object_0056677c_0, word_14, 0x14);
GUEST_OFFSET(Object_0056677c_0, word_18, 0x18);
GUEST_OFFSET(Object_0056677c_0, byte_2c, 0x2c);

struct __attribute__((packed)) Local_0056677c_ea_3 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0056677c_ea_3, word_0, 0x0);
GUEST_OFFSET(Local_0056677c_ea_3, word_4, 0x4);

inline constexpr u32 command_buffer_address = 0x00ae5484u;
inline constexpr u32 command_buffer_end_address = 0x00ae548cu;
inline guest::global<u32, 0x00ae5484> command_buffer;
inline guest::global<u32, 0x00ae548c> command_buffer_end;
inline constexpr guest::Function<0x00135740, u32(u32, u32, u32, u32)> lock_member_lock;
inline constexpr guest::Function<0x00137e84, u32(u32, u32)> unlock_member_lock;
inline constexpr guest::Function<0x002f825c, u32(u32, u32)> clear_aligned;
inline constexpr guest::Function<0x007b1034, u32(u32, u32)> thunk_00136088;

u32 CommandBuffer__flush(gptr<Object_0056677c_0> arg0, u32 r1_unused, u32 r2) {
    guest::StackFrame frame(0x18);  // the original's stack frame
    u32 r1 = 0;
    u32 r5_1 = arg0.addr() + 0x30u;  // (from the original)
    lock_member_lock(r5_1, r1, r2, guest::cpu()->r[3]);
    if (arg0->byte_2c != 0) {
        r1 = *command_buffer;
        if (r1 != 0) {
            u32 r0_1 = *command_buffer_end;
            thunk_00136088(r0_1, *gptr<u32>((r1 - 1u << 3) + command_buffer_address + 0xcu) - r0_1);  // (from the original)
            r1 = 0x100u;  // (from the original)
            arg0->word_18 = arg0->word_18 + 1u;
            *command_buffer = 0;
            clear_aligned(command_buffer_end_address, r1);
        }
    } else {
        u32 r0_2 = arg0->word_10;
        if (r0_2 != 0) {
            r1 = arg0->word_14 - r0_2;
            thunk_00136088(r0_2, r1);
            u32 r0_3 = *gptr<u32>(arg0.addr() + 0x18u);  // (from the original)
            *gptr<u32>(arg0.addr() + 0x10u) = 0;  // (from the original)
            gptr<Local_0056677c_ea_3> ea_3 = gptr<Local_0056677c_ea_3>(arg0.addr() + 0x14u);  // (from the original)
            ea_3->word_0 = 0;
            ea_3->word_4 = r0_3 + 1u;
        }
    }
    frame.release();
    return unlock_member_lock(r5_1, r1);
}

}  // namespace d_0056677c
GUEST_EXPORT(0x0056677c, d_0056677c::CommandBuffer__flush);

// f_00567224: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Unless busy, starts the loader's load (virtual 3) once when everything it needs is ready.
namespace d_00567224 {

inline constexpr u32 loader_started_address = 0x00975c30u;
inline constexpr u32 loader_started_b_address = 0x00975c3cu;
inline guest::global<u8, 0x00975c30> loader_started;
inline guest::global<u8, 0x00975c31> global_00975c31;
inline guest::global<u32, 0x00975c3c> loader_started_b;
inline guest::global<u32, 0x00975c44> global_00975c44;
inline guest::global<u32, 0x00ae55cc> global_00ae55cc;

void Loader__start_load_once() {
    if (s8(*global_00975c31) > 0) {
        guest::cpu()->r[1] = loader_started_address;
        return;
    }
    *global_00975c44 = 0;
    u32 r0_1 = *loader_started_b;
    if (r0_1 == 0 || *global_00ae55cc == 0 || *loader_started != 0) {
        guest::cpu()->r[1] = loader_started_address;
        return;
    }
    *loader_started = 1;
    u32 r3_1 = *gptr<u32>(*gptr<u32>(r0_1) + 0xcu);  // (from the original)
    // virtual function 3 of r0_1
    guest::call_address<u32>(r3_1, r0_1, 0x6c6f6164u, 0u, r3_1);  // (from the original)
}

}  // namespace d_00567224
GUEST_EXPORT(0x00567224, d_00567224::Loader__start_load_once);

// f_00567cc8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Formats the string with the shared pair at 0x975c14.
namespace d_00567cc8 {

inline constexpr u32 layout_allocator_address = 0x00975c14u;
inline guest::global<u32, 0x00975c14> layout_allocator;
inline guest::global<u32, 0x00975c18> layout_allocator_arg;
inline constexpr guest::Function<0x00567ce4, u32(u32, u32, u32, u32)> sead__SafeStringBase_char___SafeStringBase_00567ce4;

struct __attribute__((packed)) Frame_00567cc8 {
    u32 word_0;
};
GUEST_OFFSET(Frame_00567cc8, word_0, 0x0);
GUEST_SIZE(Frame_00567cc8, 0x4);

u32 format_with_shared_pair(u32 r0_unused, u32 r1_unused, u32 r2_unused, u32 r3) {
    guest::StackFrameOf<Frame_00567cc8> frame;  // the original's stack frame
    frame->word_0 = r3;
    u32 r3_1 = *layout_allocator;
    frame->word_0 = *layout_allocator_arg;
    sead__SafeStringBase_char___SafeStringBase_00567ce4(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], r3_1);
    return guest::cpu()->r[0];
}

}  // namespace d_00567cc8
GUEST_EXPORT_FRAMED(0x00567cc8, d_00567cc8::format_with_shared_pair, 0x4000);  // pushes {lr} first, as the original

// f_00567ce4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00567ce4 {

struct __attribute__((packed)) sead__SafeStringBase_char_ {
    u8 unknown_0[0x8];  // (not used here)
    u32 word_8;
    u8 unknown_c[0x14c];  // (not used here)
    u32 word_158;
    u8 unknown_15c[0xd0];  // (not used here)
    u32 word_22c;
};
GUEST_OFFSET(sead__SafeStringBase_char_, word_8, 0x8);
GUEST_OFFSET(sead__SafeStringBase_char_, word_158, 0x158);
GUEST_OFFSET(sead__SafeStringBase_char_, word_22c, 0x22c);

inline constexpr u32 vtable_sead__SafeStringBase_char_ = 0x009047f8u;
inline constexpr guest::Function<0x004b6598, u32(u32, u32, u32)> Pane__set_text;
inline constexpr guest::Function<0x0056a99c, u32(u32, u32, u32, u32)> LoadSplit__start_compressed_with_heap;

struct __attribute__((packed)) Frame_00567ce4 {
    u32 word_0;
    u8 unknown_4[0x4];  // (not read or written by name)
    u32 object_8_vtable;
    u32 word_c;
    u8 unknown_10[0x4];  // (not read or written by name)
};
GUEST_OFFSET(Frame_00567ce4, word_0, 0x0);
GUEST_OFFSET(Frame_00567ce4, object_8_vtable, 0x8);
GUEST_OFFSET(Frame_00567ce4, word_c, 0xc);
GUEST_SIZE(Frame_00567ce4, 0x14);

u32 sead__SafeStringBase_char___SafeStringBase_00567ce4(gptr<sead__SafeStringBase_char_> safe_string_base_char, u32 r1, u32 r2) {
    guest::StackFrameOf<Frame_00567ce4> frame;  // the original's stack frame
    u32 r12_1 = *frame.at<u32>(0x20);  // (from the original)
    frame->word_c = r1;
    frame->object_8_vtable = vtable_sead__SafeStringBase_char_;
    frame->word_0 = r12_1;
    u32 r0_2 = LoadSplit__start_compressed_with_heap(safe_string_base_char.addr() + 0x15cu, frame.at(8).addr(), r2, guest::cpu()->r[3]);  // (from the original)
    u32 r1_2 = guest::cpu()->r[1];
    if (r0_2 != 0 && safe_string_base_char->word_158 == 0) {
        r1_2 = safe_string_base_char->word_22c;
        safe_string_base_char->word_158 = r1_2;
        if (safe_string_base_char->word_8 == 0) {
            safe_string_base_char->word_8 = r1_2;
            Pane__set_text(safe_string_base_char.addr() + 0xcu, r1_2, 0x567d5cu);  // (from the original)
            r1_2 = guest::cpu()->r[1];
        }
    }
    guest::cpu()->r[1] = r1_2;
    return r0_2;
}

}  // namespace d_00567ce4
GUEST_EXPORT_FRAMED(0x00567ce4, d_00567ce4::sead__SafeStringBase_char___SafeStringBase_00567ce4, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_00567d60: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Binds the source's resource (+0x22c) once, with its callback.
namespace d_00567d60 {

struct __attribute__((packed)) Object_00567d60_0 {
    u8 unknown_0[0x8];  // (not used here)
    u32 word_8;
};
GUEST_OFFSET(Object_00567d60_0, word_8, 0x8);

struct __attribute__((packed)) Object_00567d60_1 {
    u8 unknown_0[0x22c];  // (not used here)
    u32 word_22c;
};
GUEST_OFFSET(Object_00567d60_1, word_22c, 0x22c);

inline constexpr guest::Function<0x004b6598, u32(u32, u32, u32, u32)> Pane__set_text;

void bind_resource_once(gptr<Object_00567d60_0> arg0, gptr<Object_00567d60_1> arg1) {
    u32 r1_1 = arg1->word_22c;
    u32 r3_1 = arg0->word_8;
    if (r3_1 != 0) {
        guest::cpu()->r[1] = r1_1;
        return;
    }
    arg0->word_8 = r1_1;
    Pane__set_text((arg0.addr() + 8u) + 4u, r1_1, 0x567d98u, r3_1);  // (from the original)
}

}  // namespace d_00567d60
GUEST_EXPORT_FRAMED(0x00567d60, d_00567d60::bind_resource_once, 0x4010);  // pushes {r4, lr} first, as the original

// f_00567d9c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Forwards to sead__SafeStringBase_char___SafeStringBase_00567dac.
namespace d_00567d9c {

inline constexpr u32 layout_allocator_address = 0x00975c14u;
inline guest::global<u32, 0x00975c14> layout_allocator;
inline constexpr guest::Function<0x00567dac, u32(u32, u32, u32, u32)> sead__SafeStringBase_char___SafeStringBase_00567dac;

void sead__SafeStringBase_char___SafeStringBase_00567dac_veneer() {
    sead__SafeStringBase_char___SafeStringBase_00567dac(guest::cpu()->r[0], guest::cpu()->r[1], *layout_allocator, guest::cpu()->r[3]);
}

}  // namespace d_00567d9c
GUEST_EXPORT(0x00567d9c, d_00567d9c::sead__SafeStringBase_char___SafeStringBase_00567dac_veneer);

// f_00567dac: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00567dac {

struct __attribute__((packed)) sead__SafeStringBase_char_ {
    u8 unknown_0[0x8];  // (not used here)
    u32 word_8;
    u8 unknown_c[0x14c];  // (not used here)
    u32 word_158;
    u8 unknown_15c[0xd0];  // (not used here)
    u32 word_22c;
};
GUEST_OFFSET(sead__SafeStringBase_char_, word_8, 0x8);
GUEST_OFFSET(sead__SafeStringBase_char_, word_158, 0x158);
GUEST_OFFSET(sead__SafeStringBase_char_, word_22c, 0x22c);

inline constexpr u32 vtable_sead__SafeStringBase_char_ = 0x009047f8u;
inline constexpr guest::Function<0x004b6598, u32(u32, u32, u32)> Pane__set_text;
inline constexpr guest::Function<0x00569dc4, u32(u32, u32, u32, u32)> layout_allocator_8;
inline constexpr guest::Function<0x0056aa98, u32(u32, u32, u32, u32)> LoadSplit__start;

struct __attribute__((packed)) Frame_00567dac {
    u32 object_0_vtable;
    u32 word_4;
};
GUEST_OFFSET(Frame_00567dac, object_0_vtable, 0x0);
GUEST_OFFSET(Frame_00567dac, word_4, 0x4);
GUEST_SIZE(Frame_00567dac, 0x8);

void sead__SafeStringBase_char___SafeStringBase_00567dac(gptr<sead__SafeStringBase_char_> safe_string_base_char, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_00567dac> frame;  // the original's stack frame
    u32 r0_1 = layout_allocator_8(safe_string_base_char.addr(), r1, r2, r3);
    frame->object_0_vtable = vtable_sead__SafeStringBase_char_;
    frame->word_4 = r1;
    LoadSplit__start(safe_string_base_char.addr() + 0x15cu, frame.at(0).addr(), *gptr<u32>(r0_1 + 4u), r2);  // (from the original)
    u32 r1_2 = safe_string_base_char->word_22c;
    safe_string_base_char->word_158 = r1_2;
    if (safe_string_base_char->word_8 == 0) {
        safe_string_base_char->word_8 = r1_2;
        Pane__set_text(safe_string_base_char.addr() + 0xcu, r1_2, 0x567e20u);  // (from the original)
    }
}

}  // namespace d_00567dac
GUEST_EXPORT_FRAMED(0x00567dac, d_00567dac::sead__SafeStringBase_char___SafeStringBase_00567dac, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_00567e24: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00567e24 {

inline constexpr u32 layout_allocator_address = 0x00975c14u;
inline guest::global<u32, 0x00975c14> layout_allocator;
inline guest::global<u32, 0x00975c18> layout_allocator_arg;
inline constexpr guest::Function<0x00567e34, u32(u32, u32, u32, u32)> Layout__build;

u32 load_layout_archive() {
    return Layout__build(guest::cpu()->r[0], guest::cpu()->r[1], *layout_allocator, *layout_allocator_arg);
}

}  // namespace d_00567e24
GUEST_EXPORT(0x00567e24, d_00567e24::load_layout_archive);

// f_00567ef0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00567ef0 {

inline constexpr u32 vtable_ssys__ma__lyt__ArcResAccReader = 0x009061b8u;
inline constexpr u32 vtable_ssys__ma__lyt__ArcResAcc = 0x00906224u;
inline constexpr guest::Function<0x0013bc00, u32(u32, u32, u32, u32)> destroy_load_split;
inline constexpr guest::Function<0x0056853c, u32(u32, u32)> ssys__ma__lyt__ArcResourceAccessorVRAM__destructor;

u32 ssys__ma__lyt__ArcResAccReader__destructor(gptr<ssys__ma__lyt__ArcResAcc> arc_res_acc) {
    arc_res_acc->vtable = vtable_ssys__ma__lyt__ArcResAccReader;
    u32 r0_1 = arc_res_acc.addr() + 0x15cu;  // (from the original)
    destroy_load_split(r0_1, vtable_ssys__ma__lyt__ArcResAccReader, guest::cpu()->r[2], guest::cpu()->r[3]);
    arc_res_acc->vtable = vtable_ssys__ma__lyt__ArcResAcc;
    u32 r0_3 = ssys__ma__lyt__ArcResourceAccessorVRAM__destructor(r0_1 - 0x150u, vtable_ssys__ma__lyt__ArcResAcc);  // (from the original)
    return r0_3 - 0xcu;  // (from the original)
}

}  // namespace d_00567ef0
GUEST_EXPORT_FRAMED(0x00567ef0, d_00567ef0::ssys__ma__lyt__ArcResAccReader__destructor, 0x4010);  // pushes {r4, lr} first, as the original

// f_00567f20: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Calls virtual 2 of the object at +4.
namespace d_00567f20 {

struct __attribute__((packed)) Object_00567f20_0 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
};
GUEST_OFFSET(Object_00567f20_0, word_4, 0x4);


u32 call_virtual_2_of_word_4(gptr<Object_00567f20_0> arg0) {
    u32 r0_1 = arg0->word_4;
    // virtual function 2 of r0_1
    return guest::call_address<u32>(*gptr<u32>(*gptr<u32>(r0_1) + 8u), r0_1, guest::cpu()->r[1], guest::cpu()->r[2], 0u);
}

}  // namespace d_00567f20
GUEST_EXPORT(0x00567f20, d_00567f20::call_virtual_2_of_word_4);

// f_00567f34: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Stops the flight (frames left -1).
namespace d_00567f34 {

struct __attribute__((packed)) Flight {
    u8 unknown_0[0x1c];  // (not used here)
    u32 word_1c;
};
GUEST_OFFSET(Flight, word_1c, 0x1c);


void Flight__stop(gptr<Flight> flight) {
    flight->word_1c = ~0u;
}

}  // namespace d_00567f34
GUEST_EXPORT(0x00567f34, d_00567f34::Flight__stop);

// f_00567f40: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Moves the point one frame along its flight, slowing down over its last frames; true when the flight is over.
namespace d_00567f40 {

struct __attribute__((packed)) Flight {
    float float_0;
    float float_4;
    float float_8;
    float float_c;
    float float_10;
    float float_14;
    u32 word_18;
    u32 word_1c;
};
GUEST_OFFSET(Flight, float_0, 0x0);
GUEST_OFFSET(Flight, float_4, 0x4);
GUEST_OFFSET(Flight, float_8, 0x8);
GUEST_OFFSET(Flight, float_c, 0xc);
GUEST_OFFSET(Flight, float_10, 0x10);
GUEST_OFFSET(Flight, float_14, 0x14);
GUEST_OFFSET(Flight, word_18, 0x18);
GUEST_OFFSET(Flight, word_1c, 0x1c);

struct __attribute__((packed)) Local_00567f40_r1_2 {
    float float_0;
    float float_4;
};
GUEST_OFFSET(Local_00567f40_r1_2, float_0, 0x0);
GUEST_OFFSET(Local_00567f40_r1_2, float_4, 0x4);


u32 Flight__step(gptr<Flight> flight, float S0, float S1) {
    u32 r1_1 = flight->word_1c;
    if (s32(r1_1) <= 0) {
        flight->word_1c = ~0u;
        return 1u;
    }
    if (s32(r1_1) <= s32(flight->word_18)) {
        float S0_1 = std::bit_cast<float>(r1_1);
        float S1_1 = std::bit_cast<float>(r1_1 + 1u);
        gptr<Local_00567f40_r1_2> r1_2 = gptr<Local_00567f40_r1_2>(flight.addr() + 0xcu);  // (from the original)
        float S0_2 = float(s32(std::bit_cast<u32>(S0_1))) / float(s32(std::bit_cast<u32>(S1_1)));
        float S2_1 = r1_2->float_0 * S0_2;
        float S3_1 = r1_2->float_4 * S0_2;
        flight->float_14 = flight->float_14 * S0_2;
        r1_2->float_0 = S2_1;
        r1_2->float_4 = S3_1;
    }
    flight->float_0 = flight->float_0 + flight->float_c;
    flight->float_4 = flight->float_4 + flight->float_10;
    float S1_2 = flight->float_14;
    float S0_3 = flight->float_8 + S1_2;
    flight->float_8 = S0_3;
    flight->word_1c = flight->word_1c - 1u;
    guest::cpu()->s[0] = S0_3;
    guest::cpu()->s[1] = S1_2;
    return 0u;
}

}  // namespace d_00567f40
GUEST_EXPORT(0x00567f40, d_00567f40::Flight__step);

// f_00567fe4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Starts the flight from the start to the target at the speed (frames clamped), with its slowing frames, and computes
// its step.
namespace d_00567fe4 {

struct __attribute__((packed)) Flight {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u8 unknown_c[0xc];  // (not used here)
    u32 word_18;
    u32 word_1c;
};
GUEST_OFFSET(Flight, word_0, 0x0);
GUEST_OFFSET(Flight, word_4, 0x4);
GUEST_OFFSET(Flight, word_8, 0x8);
GUEST_OFFSET(Flight, word_18, 0x18);
GUEST_OFFSET(Flight, word_1c, 0x1c);

struct __attribute__((packed)) Object_00567fe4_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Object_00567fe4_1, word_0, 0x0);
GUEST_OFFSET(Object_00567fe4_1, word_4, 0x4);
GUEST_OFFSET(Object_00567fe4_1, word_8, 0x8);

struct __attribute__((packed)) Object_00567fe4_2 {
    float float_0;
    float float_4;
    float float_8;
};
GUEST_OFFSET(Object_00567fe4_2, float_0, 0x0);
GUEST_OFFSET(Object_00567fe4_2, float_4, 0x4);
GUEST_OFFSET(Object_00567fe4_2, float_8, 0x8);

struct __attribute__((packed)) Local_00567fe4_r0_1 {
    float float_0;
    float float_4;
    float float_8;
};
GUEST_OFFSET(Local_00567fe4_r0_1, float_0, 0x0);
GUEST_OFFSET(Local_00567fe4_r0_1, float_4, 0x4);
GUEST_OFFSET(Local_00567fe4_r0_1, float_8, 0x8);


void Flight__start(gptr<Flight> flight, gptr<Object_00567fe4_1> arg1, gptr<Object_00567fe4_2> arg2, u32 r3, float S0) {
    u32 r0 = flight.addr();
    u32 r1 = arg1.addr();
    u32 r2 = arg2.addr();
    u32 res_2 = 0;
    u32 r4 = *gptr<u32>(guest::cpu()->r[13] + 0xcu);  // (from the original)
    u32 r5_1 = *gptr<u32>(guest::cpu()->r[13] + 8u);
    flight->word_0 = arg1->word_0;
    flight->word_4 = arg1->word_4;
    u32 r12_1 = arg1->word_8;
    flight->word_18 = r4;
    flight->word_8 = r12_1;
    float S7 = arg2->float_0 - std::bit_cast<float>(arg1->word_0);
    float S5 = arg2->float_4 - std::bit_cast<float>(arg1->word_4);
    float S6 = arg2->float_8 - std::bit_cast<float>(arg1->word_8);
    float S1 = 0.0f;
    u32 r12 = vcvt_sz_f(sqrtf(S7 * S7 + S5 * S5 + S6 * S6) / S0);
    S0 = S1;
    if ((r12 - r3) != 0 && s32(r12) >= s32(r3)) {
        r12 = r3;
    }
    if (s32(r12) < s32(r5_1)) {
        r12 = r5_1;
    }
    flight->word_1c = r12;
    if (s32(r4) > 0) {
        r1 = 0u;
        if ((r4 & 1u) != 0) {
            r1 = 1u;
            S0 = float(s32(r4)) + S0;
        }
        r2 = s32(r4) >> 1;
        if (r2 != 0) {
            do {
                u32 r3_1 = r4 - r1;
                res_2 = r2 - 1u;
                r2 = res_2;
                r1 += 2u;
                S0 = float(s32(r3_1)) + S0;
                S1 = float(s32(r3_1 - 1u)) + S1;
                guest::preempt();
            } while (res_2 != 0);
        }
        S0 = S0 + S1;
    }
    gptr<Local_00567fe4_r0_1> r0_1 = gptr<Local_00567fe4_r0_1>(r0 + 0xcu);  // (from the original)
    float S1_1 = 1.0f / (float(s32(r12 - r4)) + S0 / float(s32(r4 + 1u)));
    float S0_1 = S7 * S1_1;
    float S2_1 = S5 * S1_1;
    float S1_2 = S6 * S1_1;
    r0_1->float_0 = S0_1;
    r0_1->float_4 = S2_1;
    r0_1->float_8 = S1_2;
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_2;
}

}  // namespace d_00567fe4
GUEST_EXPORT_FRAMED(0x00567fe4, d_00567fe4::Flight__start, 0x30);  // pushes {r4, r5} first, as the original

// f_00568b38: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Takes the entry out of the layout list (when found) and returns it.
namespace d_00568b38 {

inline constexpr guest::Function<0x001408d4, u32(u32, u32)> list_remove;
inline constexpr guest::Function<0x004b9f68, u32(u32, u32, u32, u32)> nw__lyt__Layout__virtual_4;

u32 LayoutList__take(u32 layout_list, u32 r1) {
    u32 r5_1 = layout_list + 0x10u;  // (from the original)
    u32 r0_1 = nw__lyt__Layout__virtual_4(r5_1, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0_1 != 0) {
        list_remove(r5_1 + 4u, r0_1 + 4u);
    }
    return r0_1;
}

}  // namespace d_00568b38
GUEST_EXPORT_FRAMED(0x00568b38, d_00568b38::LayoutList__take, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_00569544: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Advances the frame by the rate; at the end it loops (flag 1 clamps instead), backwards with flag 2.
namespace d_00569544 {

struct __attribute__((packed)) FrameControl {
    u8 unknown_0[0x4];  // (not used here)
    float end;
    float frame;
    float previous;
    float rate;
    u8 flags;
    u8 unknown_15[0x3];  // (not used here)
    u32 target;
};
GUEST_OFFSET(FrameControl, end, 0x4);
GUEST_OFFSET(FrameControl, frame, 0x8);
GUEST_OFFSET(FrameControl, previous, 0xc);
GUEST_OFFSET(FrameControl, rate, 0x10);
GUEST_OFFSET(FrameControl, flags, 0x14);
GUEST_OFFSET(FrameControl, target, 0x18);


u32 FrameControl__advance(gptr<FrameControl> control) {
    u32 fpsr = guest::cpu()->fpscr;
    u32 flags = control->flags;
    float frame = control->frame;
    float rate = control->rate;
    control->previous = frame;
    if ((flags & 2u) != 0) {
        if (rate <= frame) {
            goto L_5695bc;
        }
        if ((flags & 1u) != 0) {
            frame = 0.0f;
            goto L_5695c0;
        }
        rate = control->end - rate;
        frame = rate + frame;
        goto L_5695c0;
    }
    frame = rate + frame;
    if ((flags & 1u) != 0) {
        rate = control->end - 1.0f;
        if (!((fpsr & 0xfffffffu | vfp_cmpf(rate, frame)) >> 0x1d & 1)) {  // (from the original)
            frame = rate;
        }
        goto L_5695c0;
    }
    rate = control->end;
    if (!(rate <= frame)) {
        goto L_5695c0;
    }
L_5695bc:;
    frame = frame - rate;
L_5695c0:;
    control->frame = frame;
    u32 target = control->target;
    if (target != 0) {
        *gptr<u32>(target + 0x10u) = std::bit_cast<u32>(frame);  // (from the original)
    }
    guest::cpu()->r[1] = flags;
    guest::cpu()->s[0] = frame;
    guest::cpu()->s[1] = rate;
    return target;
}

}  // namespace d_00569544
GUEST_EXPORT(0x00569544, d_00569544::FrameControl__advance);

// f_00569774: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00569774 {

struct __attribute__((packed)) Object_00569774_0 {
    u8 unknown_0[0x4];  // (not used here)
    float float_4;
    u32 word_8;
    float float_c;
    float float_10;
    u8 byte_14;
    u8 unknown_15[0x3];  // (not used here)
    u32 word_18;
};
GUEST_OFFSET(Object_00569774_0, float_4, 0x4);
GUEST_OFFSET(Object_00569774_0, word_8, 0x8);
GUEST_OFFSET(Object_00569774_0, float_c, 0xc);
GUEST_OFFSET(Object_00569774_0, float_10, 0x10);
GUEST_OFFSET(Object_00569774_0, byte_14, 0x14);
GUEST_OFFSET(Object_00569774_0, word_18, 0x18);

inline constexpr guest::Function<0x0073bf80, u32(u32, u32, u32, u32)> ResTexture__has_mipmaps;
inline constexpr guest::Function<0x0073bf94, u32(u32)> ResTexture__format;

u32 copy_animation_target(gptr<Object_00569774_0> arg0, u32 r1, float S0, float S1, float S2) {
    u32 r0_1 = r1;
    arg0->word_18 = r1;
    if (r1 != 0) {
        u32 r5_1 = 1u;
        u32 r0_2 = ResTexture__has_mipmaps(r0_1, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        u32 r0_3 = arg0->word_18;
        if (r0_2 != 0) {
            r5_1 = 0u;
        }
        u32 r0_4 = ResTexture__format(r0_3);
        r1 = guest::cpu()->r[1];
        S0 = 1.0f;
        float S2_1 = 0.0f;
        arg0->float_10 = S0;
        S1 = float(r0_4);
        arg0->float_4 = S1;
        arg0->word_8 = std::bit_cast<u32>(S2_1);
        arg0->byte_14 = u8(r5_1);
        arg0->float_c = S2_1;
        r0_1 = arg0->word_18;
        if (r0_1 != 0) {
            r1 = arg0->word_8;
            *gptr<u32>(r0_1 + 0x10u) = r1;  // (from the original)
        }
    }
    guest::cpu()->r[1] = r1;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return r0_1;
}

}  // namespace d_00569774
GUEST_EXPORT_FRAMED(0x00569774, d_00569774::copy_animation_target, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_00569ab8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00569ab8 {

inline constexpr u32 vtable_ssys__ma__lyt__TexBufList = 0x0090614cu;
inline constexpr u32 vtable_ssys__ma__lyt__ArcResourceAccessorVRAM = 0x009061c8u;
inline constexpr u32 vtable_ssys__ma__lyt__ArcResAcc = 0x00906224u;
inline constexpr guest::Function<0x00125e08, u32(u32)> construct_layout_list;
inline constexpr guest::Function<0x0012b394, u32(u32)> nw__lyt__ArcResourceAccessor__ArcResourceAccessor;

u32 ssys__ma__lyt__ArcResAcc__ArcResAcc_00569ab8(gptr<ssys__ma__lyt__ArcResAcc> arc_res_acc) {
    arc_res_acc->word_4 = arc_res_acc.addr() + 0xcu;  // (from the original)
    arc_res_acc->word_8 = 0;
    arc_res_acc->vtable = vtable_ssys__ma__lyt__ArcResAcc;
    u32 arc_resource_accessor = arc_res_acc.addr() + 0xcu;  // (from the original)
    nw__lyt__ArcResourceAccessor__ArcResourceAccessor(arc_resource_accessor);
    arc_res_acc->arc_resource_accessor_vram_vtable = vtable_ssys__ma__lyt__ArcResourceAccessorVRAM;
    arc_res_acc->word_148 = 0x2010000;  // (from the original)
    construct_layout_list(arc_resource_accessor + 0x140u);  // (from the original)
    arc_res_acc->tex_buf_list_vtable = vtable_ssys__ma__lyt__TexBufList;
    guest::cpu()->r[1] = vtable_ssys__ma__lyt__TexBufList;
    return arc_resource_accessor - 0xcu;  // (from the original)
}

}  // namespace d_00569ab8
GUEST_EXPORT_FRAMED(0x00569ab8, d_00569ab8::ssys__ma__lyt__ArcResAcc__ArcResAcc_00569ab8, 0x4010);  // pushes {r4, lr} first, as the original

// f_00569b28: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00569b28 {

inline constexpr u32 vtable_ssys__ma__lyt__ArcResAcc = 0x00906224u;
inline constexpr guest::Function<0x0056853c, u32(u32, u32, u32, u32)> ssys__ma__lyt__ArcResourceAccessorVRAM__destructor;

u32 ssys__ma__lyt__ArcResAcc__destructor(gptr<ssys__ma__lyt__ArcResAcc> arc_res_acc) {
    arc_res_acc->vtable = vtable_ssys__ma__lyt__ArcResAcc;
    u32 r0_2 = ssys__ma__lyt__ArcResourceAccessorVRAM__destructor(arc_res_acc.addr() + 0xcu, vtable_ssys__ma__lyt__ArcResAcc, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    return r0_2 - 0xcu;  // (from the original)
}

}  // namespace d_00569b28
GUEST_EXPORT_FRAMED(0x00569b28, d_00569b28::ssys__ma__lyt__ArcResAcc__destructor, 0x4010);  // pushes {r4, lr} first, as the original

// f_00569b44: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Sets the fade's start, target (at least 0), speed and mode.
namespace d_00569b44 {

struct __attribute__((packed)) FadeParams {
    u8 unknown_0[0x4];  // (not used here)
    float float_4;
    float float_8;
    float float_c;
    float float_10;
    u8 byte_14;
};
GUEST_OFFSET(FadeParams, float_4, 0x4);
GUEST_OFFSET(FadeParams, float_8, 0x8);
GUEST_OFFSET(FadeParams, float_c, 0xc);
GUEST_OFFSET(FadeParams, float_10, 0x10);
GUEST_OFFSET(FadeParams, byte_14, 0x14);


void FadeParams__set(gptr<FadeParams> fade_params, u32 r1, float S0, float S1, float S2) {
    u32 fpsr = guest::cpu()->fpscr;
    float S3_1 = 0.0f;
    fade_params->float_4 = S0;
    if (!((fpsr & 0xfffffffu | vfp_cmpf(S2, S3_1)) >> 0x1d & 1)) {  // (from the original)
        S2 = S3_1;
    }
    fade_params->float_8 = S2;
    fade_params->float_10 = S1;
    fade_params->byte_14 = u8(r1);
    fade_params->float_c = S2;
}

}  // namespace d_00569b44
GUEST_EXPORT(0x00569b44, d_00569b44::FadeParams__set);

// f_00569e90: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Sets up the screen for 400 x 240 and resets its list.
namespace d_00569e90 {

inline constexpr guest::Function<0x00132478, u32(u32, u32)> clear_list;
inline constexpr guest::Function<0x00567a10, u32(u32, u32)> Layout__set_priority;
inline constexpr guest::Function<0x00569ebc, u32(u32, u32, u32, u32)> Screen__setup_viewport;

void Screen__init_400x240(u32 screen) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    Screen__setup_viewport(screen, 0x190u, 0xf0u, guest::cpu()->r[3]);  // (from the original)
    Layout__set_priority(screen + 4u, 0x410u);  // (from the original)
    frame.release();
    clear_list(screen + 4u, guest::cpu()->r[1]);
    return;
}

}  // namespace d_00569e90
GUEST_EXPORT(0x00569e90, d_00569e90::Screen__init_400x240);

// f_00569ebc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Sets up the screen's viewport and projection for the size.
namespace d_00569ebc {

struct __attribute__((packed)) Local_00569ebc_r0_1 {
    float float_0;
    float float_4;
    float float_8;
    float float_c;
    float float_10;
    float float_14;
};
GUEST_OFFSET(Local_00569ebc_r0_1, float_0, 0x0);
GUEST_OFFSET(Local_00569ebc_r0_1, float_4, 0x4);
GUEST_OFFSET(Local_00569ebc_r0_1, float_8, 0x8);
GUEST_OFFSET(Local_00569ebc_r0_1, float_c, 0xc);
GUEST_OFFSET(Local_00569ebc_r0_1, float_10, 0x10);
GUEST_OFFSET(Local_00569ebc_r0_1, float_14, 0x14);

inline guest::global<u32, 0x008ae294> global_008ae294;
inline guest::global<u32, 0x008ae3d8> global_008ae3d8;
inline guest::global<u32, 0x008ae3dc> global_008ae3dc;
inline guest::global<u32, 0x008ae3e0> global_008ae3e0;
inline guest::global<u32, 0x008ae3e4> global_008ae3e4;
inline guest::global<u32, 0x008ae3e8> global_008ae3e8;
inline guest::global<u32, 0x008ae3ec> global_008ae3ec;
inline guest::global<u32, 0x008ae3f0> global_008ae3f0;
inline guest::global<u32, 0x008ae3f4> global_008ae3f4;
inline guest::global<u32, 0x008ae3fc> global_008ae3fc;
inline guest::global<u32, 0x008ae400> global_008ae400;
inline guest::global<u32, 0x008ae404> global_008ae404;
inline guest::global<u32, 0x008ae408> global_008ae408;
inline guest::global<u32, 0x008ae40c> global_008ae40c;
inline constexpr guest::Function<0x007b0530, u32(u32, u32, u32, u32)> CommandList__write_block;

struct __attribute__((packed)) Frame_00569ebc {
    u32 word_0;
    float float_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    float float_14;
    float float_18;
    float float_1c;
    u8 unknown_20[0x8];  // (not read or written by name)
    u32 word_28;
    u8 unknown_2c[0x4];  // (not read or written by name)
    u32 word_30;
    u8 unknown_34[0x4];  // (not read or written by name)
};
GUEST_OFFSET(Frame_00569ebc, word_0, 0x0);
GUEST_OFFSET(Frame_00569ebc, float_4, 0x4);
GUEST_OFFSET(Frame_00569ebc, word_8, 0x8);
GUEST_OFFSET(Frame_00569ebc, word_c, 0xc);
GUEST_OFFSET(Frame_00569ebc, word_10, 0x10);
GUEST_OFFSET(Frame_00569ebc, float_14, 0x14);
GUEST_OFFSET(Frame_00569ebc, float_18, 0x18);
GUEST_OFFSET(Frame_00569ebc, float_1c, 0x1c);
GUEST_OFFSET(Frame_00569ebc, word_28, 0x28);
GUEST_OFFSET(Frame_00569ebc, word_30, 0x30);
GUEST_SIZE(Frame_00569ebc, 0x38);

void Screen__setup_viewport(u32 r0_unused, u32 r1, u32 r2) {
    guest::StackFrameOf<Frame_00569ebc> frame;  // the original's stack frame
    u32 r3_1 = uxth(r2);
    u32 r2_1 = uxth(r1);
    float S1_1 = std::bit_cast<float>(*global_008ae3dc);
    float S2_1 = std::bit_cast<float>(*global_008ae3e0);
    float S3_1 = std::bit_cast<float>(*global_008ae3e4);
    float S4_1 = std::bit_cast<float>(*global_008ae3e8);
    float S5_1 = std::bit_cast<float>(*global_008ae3ec);
    float S6_1 = std::bit_cast<float>(*global_008ae3f0);
    float S7_1 = std::bit_cast<float>(*global_008ae3f4);
    u32 r1_1 = *global_008ae294;
    frame->word_0 = *global_008ae3d8;
    frame->float_4 = S1_1;
    frame->word_8 = std::bit_cast<u32>(S2_1);
    frame->word_c = std::bit_cast<u32>(S3_1);
    frame->word_10 = std::bit_cast<u32>(S4_1);
    frame->float_14 = S5_1;
    frame->float_18 = S6_1;
    frame->float_1c = S7_1;
    float S0_1 = 1e-45f;
    float S1_2 = std::bit_cast<float>(*global_008ae3fc);
    float S2_2 = std::bit_cast<float>(*global_008ae400);
    float S3_2 = std::bit_cast<float>(*global_008ae404);
    float S4_2 = std::bit_cast<float>(*global_008ae408);
    float S5_2 = std::bit_cast<float>(*global_008ae40c);
    gptr<Local_00569ebc_r0_1> r0_1 = gptr<Local_00569ebc_r0_1>(frame.at(0x20).addr());  // (from the original)
    r0_1->float_0 = S0_1;
    r0_1->float_4 = S1_2;
    r0_1->float_8 = S2_2;
    r0_1->float_c = S3_2;
    r0_1->float_10 = S4_2;
    r0_1->float_14 = S5_2;
    float S1_3 = 0.5f;
    u32 r0_2 = std::bit_cast<u32>(float(r3_1) * S1_3);
    u32 r12_1 = r0_2 & 0x80000000u;  // (from the original)
    if (r12_1 != 0) {
        r12_1 = 0x800000u;  // (from the original)
    }
    u32 r14 = r0_2 << 9;
    u32 res_2 = r0_2 & ~0x80000000u;  // (from the original)
    r14 >>= 9;
    if (res_2 == 0) {
        r14 >>= 7;
        r12_1 = r14 | r12_1 | (res_2 & 0x7fu) << 0x10;  // (from the original)
    } else {
        u32 res_3 = (r0_2 >> 0x17u & 0xffu) - 0x40u;  // (from the original)
        r14 >>= 7;
        if (s32(res_3) >= 0) {
            if (s32(res_3) > 0x7f) {  // (from the original)
                r12_1 = 0x7f0000u;  // (from the original)
            } else {
                r12_1 = r14 | r12_1 | (res_3 & 0x7fu) << 0x10;  // (from the original)
            }
        }
    }
    float S2_3 = 2.0f;
    frame->word_0 = r12_1;
    float S3_3 = float(r3_1);
    u32 r0_3 = std::bit_cast<u32>(S2_3 / S3_3);
    u32 res_4 = r0_3 & 0x80000000u;  // (from the original)
    u32 r3_2 = res_4;
    r14 = r0_3 << 1;
    if (res_4 != 0) {
        r3_2 = 0x40000000u;  // (from the original)
    }
    u32 res_5 = r0_3 & ~0x80000000u;  // (from the original)
    u32 r12_3 = (r0_3 << 9) >> 9;
    r14 >>= 0x18;  // (from the original)
    if (res_5 != 0) {
        u32 r0_4 = r14 - 0x40u;  // (from the original)
        if (s32(r0_4) >= 0) {
            r3_2 = s32(r0_4) > 0x7f ? 0x3f800000u : r12_3 | r3_2 | (r0_4 & 0x7fu) << 0x17;  // (from the original)
        }
    } else {
        r3_2 = r12_3 | r3_2 | (res_5 & 0x7fu) << 0x17;  // (from the original)
    }
    frame->word_8 = r3_2 << 1;
    u32 r0_5 = std::bit_cast<u32>(float(r2_1) * S1_3);
    u32 r3_3 = r0_5 & 0x80000000u;  // (from the original)
    if (r3_3 != 0) {
        r3_3 = 0x800000u;  // (from the original)
    }
    r14 = r0_5 >> 0x17u & 0xffu;  // (from the original)
    u32 res_7 = r0_5 & ~0x80000000u;  // (from the original)
    u32 r12_5 = (r0_5 << 9) >> 9;
    if (res_7 == 0) {
        r3_3 = (r12_5 >> 7) | r3_3 | (res_7 & 0x7fu) << 0x10;  // (from the original)
    } else {
        u32 res_8 = r14 - 0x40u;  // (from the original)
        if (s32(res_8) >= 0) {
            r3_3 = s32(res_8) > 0x7f ? 0x7f0000u : (r12_5 >> 7) | r3_3 | (res_8 & 0x7fu) << 0x10;  // (from the original)
        }
    }
    frame->word_c = r3_3;
    u32 r0_6 = std::bit_cast<u32>(S2_3 / float(r2_1));
    u32 res_9 = r0_6 & 0x80000000u;  // (from the original)
    u32 r2_2 = res_9;
    if (res_9 != 0) {
        r2_2 = 0x40000000u;  // (from the original)
    }
    u32 res_10 = r0_6 & ~0x80000000u;  // (from the original)
    u32 r3_5 = (r0_6 << 9) >> 9;
    if (res_10 != 0) {
        u32 r0_7 = ((r0_6 << 1) >> 0x18) - 0x40u;  // (from the original)
        if (s32(r0_7) >= 0) {
            r2_2 = s32(r0_7) > 0x7f ? 0x3f800000u : r3_5 | r2_2 | (r0_7 & 0x7fu) << 0x17;  // (from the original)
        }
    } else {
        r2_2 = r3_5 | r2_2 | (res_10 & 0x7fu) << 0x17;  // (from the original)
    }
    frame->word_10 = r2_2 << 1;
    frame->word_28 = 0xbf0000;  // (from the original)
    float S1_4 = 0.0f;
    float S2_4 = float(s32(lsl_r(1u, ((r1_1 & 0xffu) == 0 ? 0x10u : 0x18u) & 0xff) - 1u));  // (from the original)
    float S0_2 = S1_4 / S2_4;
    u32 r0_8 = std::bit_cast<u32>(S0_2);
    u32 res_11 = r0_8 & 0x80000000u;  // (from the original)
    u32 r1_2 = res_11;
    u32 r2_3 = r0_8 & 0x7fffffu;  // (from the original)
    if (res_11 != 0) {
        r1_2 = 0x800000u;  // (from the original)
    }
    u32 res_12 = r0_8 & ~0x80000000u;  // (from the original)
    u32 r3_7 = (r0_8 << 1) >> 0x18;  // (from the original)
    if (res_12 == 0) {
        r3_7 = res_12 & 0x7fu;  // (from the original)
        r1_2 = (r2_3 >> 7) | r1_2 | r3_7 << 0x10;  // (from the original)
    } else {
        u32 res_13 = r3_7 - 0x40u;  // (from the original)
        if (s32(res_13) >= 0) {
            if (s32(res_13) > 0x7f) {  // (from the original)
                r1_2 = 0x7f0000u;  // (from the original)
            } else {
                r3_7 = res_13 & 0x7fu;  // (from the original)
                r1_2 = (r2_3 >> 7) | r1_2 | r3_7 << 0x10;  // (from the original)
            }
        }
    }
    frame->word_30 = r1_2;
    guest::cpu()->s[0] = S0_2;
    guest::cpu()->s[1] = S1_4;
    guest::cpu()->s[2] = S2_4;
    guest::cpu()->s[3] = S3_3;
    guest::cpu()->s[4] = S4_2;
    guest::cpu()->s[5] = S5_2;
    guest::cpu()->s[6] = S6_1;
    guest::cpu()->s[7] = S7_1;
    CommandList__write_block(frame.at(0).addr(), 0x38u, 1u, r3_7);  // (from the original)
    CommandList__write_block(0x8ae398u, 0x40u, 1u, guest::cpu()->r[3]);  // (from the original)
}

}  // namespace d_00569ebc
GUEST_EXPORT_FRAMED(0x00569ebc, d_00569ebc::Screen__setup_viewport, 0x4010);  // pushes {r4, lr} first, as the original

// f_0056a178: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Scales the vector to length 1; 0 (the vector unchanged) when its length is too small to divide by.
namespace d_0056a178 {


u32 Float3__normalize(gptr<Float3> vector) {
    float x = vector->v[0];
    float y = vector->v[1];
    float z = vector->v[2];
    float length = sqrtf(x * x + y * y + z * z);
    float S0_1 = fabsf(length);
    u32 r1_1 = std::bit_cast<u32>(S0_1);
    if (s32(r1_1) <= 0x34000000) {  // (from the original)
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->s[0] = S0_1;
        guest::cpu()->s[1] = y;
        return 0u;
    }
    float inverse = 1.0f / length;
    float S3_2 = x * inverse;
    float S1_2 = y * inverse;
    float S0_3 = z * inverse;
    vector->v[0] = S3_2;
    vector->v[1] = S1_2;
    vector->v[2] = S0_3;
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->s[0] = S0_3;
    guest::cpu()->s[1] = S1_2;
    return 1u;
}

}  // namespace d_0056a178
GUEST_EXPORT(0x0056a178, d_0056a178::Float3__normalize);

// f_0056a3fc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0056a3fc {

struct __attribute__((packed)) Local_0056a3fc_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0056a3fc_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_0056a3fc_ea_1, word_4, 0x4);

inline constexpr u32 vtable_sead__FixedSafeString_256_ = 0x009048b0u;
inline constexpr u32 file_device_mgr_instance_address = 0x009752e0u;
inline guest::global<u8, 0x008c9f1c> empty_string;
inline guest::global<u32, 0x009752e0> file_device_mgr_instance;
inline constexpr guest::Function<0x00133580, u32(u32, u32, u32, u32)> sead__FixedSafeString_32___FixedSafeString_00133580;
inline constexpr guest::Function<0x0053dffc, u32(u32, u32, u32)> FileDevice__get_size;

struct __attribute__((packed)) Frame_0056a3fc {
    u8 byte_0;
    u8 unknown_1[0x3];  // (not read or written by name)
    u32 object_4_vtable;
    u32 word_8;
    u8 unknown_c[0x4];  // (not read or written by name)
    u8 byte_10;
    u8 unknown_11[0xff];  // (not read or written by name)
};
GUEST_OFFSET(Frame_0056a3fc, byte_0, 0x0);
GUEST_OFFSET(Frame_0056a3fc, object_4_vtable, 0x4);
GUEST_OFFSET(Frame_0056a3fc, word_8, 0x8);
GUEST_OFFSET(Frame_0056a3fc, byte_10, 0x10);
GUEST_SIZE(Frame_0056a3fc, 0x110);

u32 sead__FixedSafeString_256___FixedSafeString_0056a3fc(u32 r0) {
    guest::StackFrameOf<Frame_0056a3fc> frame;  // the original's stack frame
    gptr<Local_0056a3fc_ea_1> ea_1 = gptr<Local_0056a3fc_ea_1>(frame.at(8).addr());
    ea_1->word_0 = frame.at(0x10).addr();  // (from the original)
    ea_1->word_4 = 0x100;  // (from the original)
    *gptr<u8>(frame->word_8 + 0xffu) = *empty_string;  // (from the original)
    frame->byte_10 = *empty_string;
    frame->object_4_vtable = vtable_sead__FixedSafeString_256_;
    u32 file_device = sead__FixedSafeString_32___FixedSafeString_00133580(*file_device_mgr_instance, r0, frame.at(4).addr(), 0x100u);  // (from the original)
    if (file_device == 0) {
        return 0u;
    }
    frame->byte_0 = 0;
    FileDevice__get_size(file_device, frame.at(0).addr(), frame.at(4).addr());
    return s8(frame->byte_0);
}

}  // namespace d_0056a3fc
GUEST_EXPORT_FRAMED(0x0056a3fc, d_0056a3fc::sead__FixedSafeString_256___FixedSafeString_0056a3fc, 0x4010);  // pushes {r4, lr} first, as the original

// f_0056a4a4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0056a4a4 {

struct __attribute__((packed)) Local_0056a4a4_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0056a4a4_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_0056a4a4_ea_1, word_4, 0x4);

inline constexpr u32 vtable_sead__FixedSafeString_256_ = 0x009048b0u;
inline constexpr u32 file_device_mgr_instance_address = 0x009752e0u;
inline guest::global<u8, 0x008c9f1c> empty_string;
inline guest::global<u32, 0x009752e0> file_device_mgr_instance;
inline constexpr guest::Function<0x00133580, u32(u32, u32, u32, u32)> sead__FixedSafeString_32___FixedSafeString_00133580;
inline constexpr guest::Function<0x0053dffc, u32(u32, u32, u32)> FileDevice__get_size;

struct __attribute__((packed)) Frame_0056a4a4 {
    u8 byte_0;
    u8 unknown_1[0x3];  // (not read or written by name)
    u32 object_4_vtable;
    u32 word_8;
    u8 unknown_c[0x4];  // (not read or written by name)
    u8 byte_10;
    u8 unknown_11[0xff];  // (not read or written by name)
};
GUEST_OFFSET(Frame_0056a4a4, byte_0, 0x0);
GUEST_OFFSET(Frame_0056a4a4, object_4_vtable, 0x4);
GUEST_OFFSET(Frame_0056a4a4, word_8, 0x8);
GUEST_OFFSET(Frame_0056a4a4, byte_10, 0x10);
GUEST_SIZE(Frame_0056a4a4, 0x110);

u32 sead__FixedSafeString_256___FixedSafeString_0056a4a4(u32 r0) {
    guest::StackFrameOf<Frame_0056a4a4> frame;  // the original's stack frame
    gptr<Local_0056a4a4_ea_1> ea_1 = gptr<Local_0056a4a4_ea_1>(frame.at(8).addr());
    ea_1->word_0 = frame.at(0x10).addr();  // (from the original)
    ea_1->word_4 = 0x100;  // (from the original)
    *gptr<u8>(frame->word_8 + 0xffu) = *empty_string;  // (from the original)
    frame->byte_10 = *empty_string;
    frame->object_4_vtable = vtable_sead__FixedSafeString_256_;
    u32 file_device = sead__FixedSafeString_32___FixedSafeString_00133580(*file_device_mgr_instance, r0, frame.at(4).addr(), 0x100u);  // (from the original)
    if (file_device == 0) {
        return 0u;
    }
    frame->byte_0 = 0;
    FileDevice__get_size(file_device, frame.at(0).addr(), frame.at(4).addr());
    return s8(frame->byte_0);
}

}  // namespace d_0056a4a4
GUEST_EXPORT_FRAMED(0x0056a4a4, d_0056a4a4::sead__FixedSafeString_256___FixedSafeString_0056a4a4, 0x4010);  // pushes {r4, lr} first, as the original

// f_0056a534: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Binds the object to the source's second word.
namespace d_0056a534 {

struct __attribute__((packed)) Object_0056a534_2 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
};
GUEST_OFFSET(Object_0056a534_2, word_4, 0x4);

inline constexpr guest::Function<0x00125b3c, u32(u32, u32, u32, u32)> ObjectBinding__bind;

void ObjectBinding__bind_from_word_4(u32 r0_unused, u32 r1_unused, gptr<Object_0056a534_2> arg2) {
    ObjectBinding__bind(guest::cpu()->r[0], guest::cpu()->r[1], arg2->word_4, guest::cpu()->r[3]);
}

}  // namespace d_0056a534
GUEST_EXPORT(0x0056a534, d_0056a534::ObjectBinding__bind_from_word_4);

// f_0056a53c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Queries the file request's state (under the file lock); 0 without a request.
namespace d_0056a53c {

struct __attribute__((packed)) FileRequest {
    u8 unknown_0[0x30];  // (not used here)
    u32 file_device;
};
GUEST_OFFSET(FileRequest, file_device, 0x30);

struct __attribute__((packed)) Local_0056a53c_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Local_0056a53c_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_0056a53c_ea_1, word_4, 0x4);
GUEST_OFFSET(Local_0056a53c_ea_1, word_8, 0x8);
GUEST_OFFSET(Local_0056a53c_ea_1, word_c, 0xc);

struct __attribute__((packed)) Local_0056a53c_ea_2 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Local_0056a53c_ea_2, word_4, 0x4);
GUEST_OFFSET(Local_0056a53c_ea_2, word_8, 0x8);
GUEST_OFFSET(Local_0056a53c_ea_2, word_c, 0xc);

inline constexpr u32 file_request_lock_address = 0x00ae563cu;
inline constexpr guest::Function<0x00135740, u32(u32, u32, u32, u32)> lock_member_lock;
inline constexpr guest::Function<0x00137e84, u32(u32)> unlock_member_lock;
inline constexpr guest::Function<0x0053dfa0, u32(u32, u32, u32)> FileDevice__read;

struct __attribute__((packed)) Frame_0056a53c {
    u32 word_0;
    u8 unknown_4[0xc];  // (not read or written by name)
};
GUEST_OFFSET(Frame_0056a53c, word_0, 0x0);
GUEST_SIZE(Frame_0056a53c, 0x10);

u32 FileRequest__query(gptr<FileRequest> file_request, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_0056a53c> frame;  // the original's stack frame
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r14 = guest::cpu()->r[14];
    gptr<Local_0056a53c_ea_1> ea_1 = gptr<Local_0056a53c_ea_1>(frame.at(0).addr());
    ea_1->word_0 = r3;
    ea_1->word_4 = r4;
    ea_1->word_8 = r5;
    ea_1->word_c = r14;
    u32 r0_1 = file_request->file_device;
    if (r0_1 != 0) {
        lock_member_lock(file_request_lock_address, r1, r2, r3);
        u32 file_device = file_request->file_device;
        frame->word_0 = 0;
        FileDevice__read(file_device, frame.at(0).addr(), file_request.addr());
        u32 r5_1 = frame->word_0;
        unlock_member_lock(file_request_lock_address);
        r1 = guest::cpu()->r[1];
        r0_1 = r5_1;
    }
    gptr<Local_0056a53c_ea_2> ea_2 = gptr<Local_0056a53c_ea_2>(frame.at(0).addr());
    u32 r4_1 = ea_2->word_4;
    u32 r5_2 = ea_2->word_8;
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[4] = r4_1;
    guest::cpu()->r[5] = r5_2;
    return r0_1;
}

}  // namespace d_0056a53c
GUEST_EXPORT(0x0056a53c, d_0056a53c::FileRequest__query);

// f_0056a58c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Opens the file request through the file device manager once (under the file lock); true when it did.
namespace d_0056a58c {

struct __attribute__((packed)) FileRequest {
    u8 unknown_0[0x30];  // (not used here)
    u32 word_30;
};
GUEST_OFFSET(FileRequest, word_30, 0x30);

inline constexpr u32 file_device_mgr_instance_address = 0x009752e0u;
inline constexpr u32 file_request_lock_address = 0x00ae563cu;
inline guest::global<u32, 0x009752e0> file_device_mgr_instance;
inline constexpr guest::Function<0x00135740, u32(u32, u32, u32, u32)> lock_member_lock;
inline constexpr guest::Function<0x00137e84, u32(u32)> unlock_member_lock;
inline constexpr guest::Function<0x00542358, u32(u32, u32, u32, u32)> FileDevice__open;

struct __attribute__((packed)) Frame_0056a58c {
    u32 word_0;
};
GUEST_OFFSET(Frame_0056a58c, word_0, 0x0);
GUEST_SIZE(Frame_0056a58c, 0x4);

u32 FileRequest__open(gptr<FileRequest> file_request, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_0056a58c> frame;  // the original's stack frame
    u32 r0_1 = 0;
    frame->word_0 = r3;
    if (file_request->word_30 != 0) {
        r0_1 = 0u;
    } else {
        lock_member_lock(file_request_lock_address, r1, r2, r3);
        u32 r0_2 = *file_device_mgr_instance;
        frame->word_0 = 0;
        u32 r0_3 = FileDevice__open(r0_2, file_request.addr(), r1, 0u);
        file_request->word_30 = r0_3;
        u32 r5_1 = r0_3 != 0;
        unlock_member_lock(file_request_lock_address);
        r1 = guest::cpu()->r[1];
        r0_1 = r5_1;
    }
    guest::cpu()->r[1] = r1;
    return r0_1;
}

}  // namespace d_0056a58c
GUEST_EXPORT_FRAMED(0x0056a58c, d_0056a58c::FileRequest__open, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_0056a5fc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Reads from the file request (under the file lock); the amount read.
namespace d_0056a5fc {

struct __attribute__((packed)) FileRequest {
    u8 unknown_0[0x30];  // (not used here)
    u32 word_30;
};
GUEST_OFFSET(FileRequest, word_30, 0x30);

inline constexpr u32 file_request_lock_address = 0x00ae563cu;
inline constexpr guest::Function<0x00135740, u32(u32, u32, u32, u32)> lock_member_lock;
inline constexpr guest::Function<0x00137e84, u32(u32)> unlock_member_lock;
inline constexpr guest::Function<0x0053e71c, u32(u32, u32, u32, u32)> TouchPanel__hit_test;

struct __attribute__((packed)) Frame_0056a5fc {
    u32 word_0;
    u32 word_4;
    u8 unknown_8[0x4];  // (not read or written by name)
};
GUEST_OFFSET(Frame_0056a5fc, word_0, 0x0);
GUEST_OFFSET(Frame_0056a5fc, word_4, 0x4);
GUEST_SIZE(Frame_0056a5fc, 0xc);

u32 FileRequest__read(gptr<FileRequest> file_request, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_0056a5fc> frame;  // the original's stack frame
    u32 r0_1 = file_request->word_30;
    if (r0_1 != 0) {
        lock_member_lock(file_request_lock_address, r1, r2, r3);
        u32 r0_2 = file_request->word_30;
        frame->word_4 = 0;
        frame->word_0 = r2;
        TouchPanel__hit_test(r0_2, frame.at(4).addr(), file_request.addr(), r1);
        u32 r5_1 = frame->word_4;
        unlock_member_lock(file_request_lock_address);
        r1 = guest::cpu()->r[1];
        r0_1 = r5_1;
    }
    guest::cpu()->r[1] = r1;
    return r0_1;
}

}  // namespace d_0056a5fc
GUEST_EXPORT_FRAMED(0x0056a5fc, d_0056a5fc::FileRequest__read, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_0056a664: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Scales the color down so its largest channel is at most 1.
namespace d_0056a664 {

struct __attribute__((packed)) Color3 {
    float float_0;
    float float_4;
    float float_8;
};
GUEST_OFFSET(Color3, float_0, 0x0);
GUEST_OFFSET(Color3, float_4, 0x4);
GUEST_OFFSET(Color3, float_8, 0x8);


void Color3__normalize_max(gptr<Color3> color3) {
    float S0_1 = color3->float_0;
    float S1_1 = color3->float_4;
    float S2_1 = S0_1;
    float S3_1 = color3->float_8;
    if (S1_1 > S0_1) {
        S0_1 = S1_1;
    }
    if (S3_1 > S0_1) {
        S0_1 = S3_1;
    }
    u32 r1_1 = std::bit_cast<u32>(S0_1);
    if (s32(r1_1) <= 0x3f800000) {  // (from the original)
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->s[0] = S0_1;
        guest::cpu()->s[1] = S1_1;
        return;
    }
    color3->float_0 = S2_1 / S0_1;
    color3->float_4 = S1_1 / S0_1;
    float S1_2 = S3_1 / S0_1;
    color3->float_8 = S1_2;
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_2;
}

}  // namespace d_0056a664
GUEST_EXPORT(0x0056a664, d_0056a664::Color3__normalize_max);

// f_0056a724: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0056a724 {


u32 ssys__ma__Allocator__virtual_3(gptr<ssys__ma__Allocator> allocator) {
    u32 r0_1 = allocator->word_4;
    u32 r2_1 = *gptr<u32>(*gptr<u32>(r0_1) + 0x1cu);  // (from the original)
    // virtual function 7 of r0_1
    return guest::call_address<u32>(r2_1, r0_1, guest::cpu()->r[1], r2_1, guest::cpu()->r[3]);
}

}  // namespace d_0056a724
GUEST_EXPORT(0x0056a724, d_0056a724::ssys__ma__Allocator__virtual_3);

// f_0056a734: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0056a734 {


u32 ssys__ma__Allocator__virtual_2(gptr<ssys__ma__Allocator> allocator, u32 r1, u32 r2) {
    u32 r0_1 = allocator->word_4;
    if (r2 == 0) {
        r2 = 1u;
    }
    u32 r3_1 = *gptr<u32>(*gptr<u32>(r0_1) + 0x18u);  // (from the original)
    // virtual function 6 of r0_1
    return guest::call_address<u32>(r3_1, r0_1, r1 + r2, r2, r3_1);
}

}  // namespace d_0056a734
GUEST_EXPORT(0x0056a734, d_0056a734::ssys__ma__Allocator__virtual_2);

// f_0056a758: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Starts the split load with the default heap (0x975c38), not compressed.
namespace d_0056a758 {

inline constexpr u32 load_split_default_heap_address = 0x00975c38u;
inline guest::global<u32, 0x00975c38> load_split_default_heap;
inline constexpr guest::Function<0x0056a780, u32(u32, u32, u32, u32)> LayoutAnim__bind_target;

struct __attribute__((packed)) Frame_0056a758 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Frame_0056a758, word_0, 0x0);
GUEST_OFFSET(Frame_0056a758, word_4, 0x4);
GUEST_SIZE(Frame_0056a758, 0x8);

u32 LoadSplit__start_default() {
    guest::StackFrameOf<Frame_0056a758> frame;  // the original's stack frame
    u32 r12_1 = *load_split_default_heap;
    frame->word_0 = 0;
    frame->word_4 = r12_1;
    LayoutAnim__bind_target(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    return guest::cpu()->r[0];
}

}  // namespace d_0056a758
GUEST_EXPORT_FRAMED(0x0056a758, d_0056a758::LoadSplit__start_default, 0x4010);  // pushes {r4, lr} first, as the original

// f_0056a94c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Starts the compressed split load with the default heaps.
namespace d_0056a94c {

inline constexpr u32 load_split_compressed_state_address = 0x00975c34u;
inline guest::global<u32, 0x00975c34> load_split_compressed_state;
inline guest::global<u32, 0x00975c38> load_split_default_heap;
inline constexpr guest::Function<0x0056a780, u32(u32, u32, u32, u32)> LayoutAnim__bind_target;

struct __attribute__((packed)) Frame_0056a94c {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Frame_0056a94c, word_0, 0x0);
GUEST_OFFSET(Frame_0056a94c, word_4, 0x4);
GUEST_SIZE(Frame_0056a94c, 0x8);

u32 LoadSplit__start_compressed() {
    guest::StackFrameOf<Frame_0056a94c> frame;  // the original's stack frame
    u32 r3_1 = *load_split_compressed_state;
    u32 r12_1 = *load_split_default_heap;
    frame->word_0 = 1;
    frame->word_4 = r12_1;
    LayoutAnim__bind_target(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], r3_1);
    return guest::cpu()->r[0];
}

}  // namespace d_0056a94c
GUEST_EXPORT_FRAMED(0x0056a94c, d_0056a94c::LoadSplit__start_compressed, 0x4010);  // pushes {r4, lr} first, as the original

// f_0056a974: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0056a974 {

inline constexpr u32 load_split_default_heap_address = 0x00975c38u;
inline guest::global<u32, 0x00975c38> load_split_default_heap;
inline constexpr guest::Function<0x0056a780, u32(u32, u32, u32, u32)> LayoutAnim__bind_target;

struct __attribute__((packed)) Frame_0056a974 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Frame_0056a974, word_0, 0x0);
GUEST_OFFSET(Frame_0056a974, word_4, 0x4);
GUEST_SIZE(Frame_0056a974, 0x8);

u32 load_split_start() {
    guest::StackFrameOf<Frame_0056a974> frame;  // the original's stack frame
    u32 r12_1 = *load_split_default_heap;
    frame->word_0 = 1;
    frame->word_4 = r12_1;
    LayoutAnim__bind_target(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    return guest::cpu()->r[0];
}

}  // namespace d_0056a974
GUEST_EXPORT_FRAMED(0x0056a974, d_0056a974::load_split_start, 0x4010);  // pushes {r4, lr} first, as the original

// f_0056a99c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Starts the compressed split load with the given heap.
namespace d_0056a99c {

inline constexpr guest::Function<0x0056a780, u32(u32, u32, u32, u32)> LayoutAnim__bind_target;

struct __attribute__((packed)) Frame_0056a99c {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Frame_0056a99c, word_0, 0x0);
GUEST_OFFSET(Frame_0056a99c, word_4, 0x4);
GUEST_SIZE(Frame_0056a99c, 0x8);

u32 LoadSplit__start_compressed_with_heap() {
    guest::StackFrameOf<Frame_0056a99c> frame;  // the original's stack frame
    u32 r12_1 = *frame.at<u32>(0x10);  // (from the original)
    frame->word_0 = 1;
    frame->word_4 = r12_1;
    LayoutAnim__bind_target(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    return guest::cpu()->r[0];
}

}  // namespace d_0056a99c
GUEST_EXPORT_FRAMED(0x0056a99c, d_0056a99c::LoadSplit__start_compressed_with_heap, 0x4010);  // pushes {r4, lr} first, as the original

// f_0056a9bc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Cancels the split load: queues it for release (state 6) or, while it reads, marks it to cancel; true when it is
// already idle.
namespace d_0056a9bc {

struct __attribute__((packed)) LoadSplit {
    u8 unknown_0[0xe8];  // (not used here)
    u8 byte_e8;
    u8 byte_e9;
    u8 byte_ea;
};
GUEST_OFFSET(LoadSplit, byte_e8, 0xe8);
GUEST_OFFSET(LoadSplit, byte_e9, 0xe9);
GUEST_OFFSET(LoadSplit, byte_ea, 0xea);

inline constexpr u32 load_split_cancel_a_address = 0x00ae55c8u;
inline constexpr u32 load_split_cancel_b_address = 0x00ae55d4u;
inline constexpr guest::Function<0x00135740, u32(u32, u32)> lock_member_lock;
inline constexpr guest::Function<0x00137e84, u32(u32)> unlock_member_lock;
inline constexpr guest::Function<0x00138920, u32(u32, u32, u32, u32)> list_contains_node;
inline constexpr guest::Function<0x0013f134, u32(u32, u32)> queue_append;

u32 LoadSplit__cancel(gptr<LoadSplit> load_split) {
    u32 r0 = load_split.addr();
    u32 r0_1 = load_split->byte_e8;
    u32 r1 = load_split->byte_e8;
    if (r1 != 0) {
        if (r0_1 != 6u) {
            if (load_split->byte_e8 != 1u && load_split->byte_e8 != 3u && load_split->byte_e8 != 4u && load_split->byte_e8 != 5u) {
                if (load_split->byte_e8 == 2u) {
                    goto L_56aa64;
                }
                guest::cpu()->r[1] = r1;
                return 1u;
            }
            load_split->byte_e8 = 6;
            u32 r0_2 = list_contains_node(load_split_cancel_a_address, r0, guest::cpu()->r[2], guest::cpu()->r[3]);
            r1 = guest::cpu()->r[1];
            if (r0_2 == 0) {
                lock_member_lock(load_split_cancel_b_address, r1);
                queue_append(load_split_cancel_a_address, r0);
                unlock_member_lock(load_split_cancel_b_address);
                r1 = guest::cpu()->r[1];
            }
        }
        guest::cpu()->r[1] = r1;
        return 0u;
L_56aa64:;
        if (load_split->byte_e9 != 0) {
            load_split->byte_ea = 1;
            guest::cpu()->r[1] = r1;
            return 0u;
        }
    }
    guest::cpu()->r[1] = r1;
    return 1u;
}

}  // namespace d_0056a9bc
GUEST_EXPORT_FRAMED(0x0056a9bc, d_0056a9bc::LoadSplit__cancel, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0056aa98: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Starts the split load without a heap.
namespace d_0056aa98 {

inline constexpr guest::Function<0x0056a780, u32(u32, u32, u32, u32)> LayoutAnim__bind_target;

struct __attribute__((packed)) Frame_0056aa98 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Frame_0056aa98, word_0, 0x0);
GUEST_OFFSET(Frame_0056aa98, word_4, 0x4);
GUEST_SIZE(Frame_0056aa98, 0x8);

u32 LoadSplit__start() {
    guest::StackFrameOf<Frame_0056aa98> frame;  // the original's stack frame
    frame->word_0 = 0;
    frame->word_4 = 0;
    LayoutAnim__bind_target(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    return guest::cpu()->r[0];
}

}  // namespace d_0056aa98
GUEST_EXPORT_FRAMED(0x0056aa98, d_0056aa98::LoadSplit__start, 0x4010);  // pushes {r4, lr} first, as the original

// f_0056aab8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// True when the split load is in state 3, 4 or 5.
namespace d_0056aab8 {

struct __attribute__((packed)) LoadSplit {
    u8 unknown_0[0xe8];  // (not used here)
    u8 byte_e8;
};
GUEST_OFFSET(LoadSplit, byte_e8, 0xe8);


u32 LoadSplit__is_done(gptr<LoadSplit> load_split) {
    u32 r0_1 = load_split->byte_e8;
    if (r0_1 == 3u || r0_1 == 4u) {
        return 1u;
    }
    return r0_1 == 5u;
}

}  // namespace d_0056aab8
GUEST_EXPORT(0x0056aab8, d_0056aab8::LoadSplit__is_done);

// f_0056ae38: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Moves the angle toward the target by a fraction (1 / divisor), at least the minimum and at most the maximum step.
namespace d_0056ae38 {

struct __attribute__((packed)) Angle {
    u32 word_0;
};
GUEST_OFFSET(Angle, word_0, 0x0);

inline constexpr guest::Function<0x002f9e1c, u32(u32, u32, u32, u32)> divide_with_remainder;

void Angle__approach(gptr<Angle> angle, u32 r1, u32 r2, u32 r3) {
    u32 r7_1 = angle->word_0;
    u32 r6_1 = *gptr<u32>(guest::cpu()->r[13] + 0x20u);  // (from the original)
    u32 r9_1 = r1 - r7_1;
    if (r7_1 != r1) {
        u32 r0_1 = divide_with_remainder(r9_1, r2, r2, r3);
        u32 res_1 = r0_1 - r6_1;
        u32 nf_1 = res_1 >> 0x1f;  // (from the original)
        u32 zf_1 = res_1 == 0;
        u32 vf_1 = ((r0_1 ^ r6_1) & (r0_1 ^ res_1)) >> 0x1f;  // (from the original)
        if (zf_1 || nf_1 != vf_1) {
            u32 r1_1 = 0u - r6_1;
            u32 res_2 = r1_1 - r0_1;
            nf_1 = res_2 >> 0x1f;  // (from the original)
            zf_1 = res_2 == 0;
            vf_1 = ((r1_1 ^ r0_1) & (r1_1 ^ res_2)) >> 0x1f;  // (from the original)
        }
        if (!zf_1 && nf_1 == vf_1) {
            if (s32(r0_1) > s32(r3)) {
                r0_1 = r3;
            } else {
                u32 r1_2 = 0u - r3;
                if ((r1_2 - r0_1) != 0 && s32(r1_2) >= s32(r0_1)) {
                    r0_1 = r1_2;
                }
            }
            *gptr<u32>(angle.addr()) = r0_1 + r7_1;
        } else {
            if (s32(r9_1) >= 0) {
                u32 r0_2 = r7_1 + r6_1;
                *gptr<u32>(angle.addr()) = r0_2;
                if (s32(r1 - r0_2) > 0) {
                    return;
                }
            } else {
                u32 r0_3 = r7_1 - r6_1;
                *gptr<u32>(angle.addr()) = r0_3;
                if (s32(r1 - r0_3) < 0) {
                    return;
                }
            }
            *gptr<u32>(angle.addr()) = r1;
        }
    }
}

}  // namespace d_0056ae38
GUEST_EXPORT_FRAMED(0x0056ae38, d_0056ae38::Angle__approach, 0x47f0);  // pushes {r4, r5, r6, r7, r8, r9, r10, lr} first, as the original

// f_0056aedc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Moves the 16-bit angle toward the target by a fraction (1 / divisor), at most the maximum step.
namespace d_0056aedc {

struct __attribute__((packed)) AngleS16 {
    u16 half_0;
};
GUEST_OFFSET(AngleS16, half_0, 0x0);

inline constexpr guest::Function<0x002f9e1c, u32(u32, u32, u32, u32)> divide_with_remainder;

u32 AngleS16__approach(gptr<AngleS16> angle_s16, u32 r1, u32 r2, u32 r3) {
    u32 r0_5 = 0;
    u32 r6_1 = s16(angle_s16->half_0);
    u32 r0_3 = divide_with_remainder(sxth(r1 - r6_1), r2, r2, r3);
    u32 r1_1 = guest::cpu()->r[1];
    u32 r0_4 = sxth(r0_3);
    if (s32(r0_4) > s32(r3)) {
        r0_5 = r6_1 + r3;
        angle_s16->half_0 = u16(r0_5);
    } else {
        r1_1 = 0u - r3;
        if (s32(r0_4) >= s32(r1_1)) {
            r0_5 = r0_4 + r6_1;
            angle_s16->half_0 = u16(r0_5);
        } else {
            r0_5 = r6_1 - r3;
            angle_s16->half_0 = u16(r0_5);
        }
    }
    guest::cpu()->r[1] = r1_1;
    return r0_5;
}

}  // namespace d_0056aedc
GUEST_EXPORT_FRAMED(0x0056aedc, d_0056aedc::AngleS16__approach, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0056af2c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Moves the 16-bit angle toward the target by a fraction, at least the minimum and at most the maximum step; the
// difference left.
namespace d_0056af2c {

struct __attribute__((packed)) AngleS16 {
    u16 half_0;
};
GUEST_OFFSET(AngleS16, half_0, 0x0);

inline constexpr guest::Function<0x002f9e1c, u32(u32, u32, u32, u32)> divide_with_remainder;

u32 AngleS16__approach_min(gptr<AngleS16> angle_s16, u32 r1, u32 r2, u32 r3) {
    u32 r0_5 = 0;
    u32 r5_1 = r1;
    u32 r7_1 = s16(angle_s16->half_0);
    u32 r6_1 = *gptr<u32>(guest::cpu()->r[13] + 0x20u);  // (from the original)
    u32 r9_1 = sxth(r1 - r7_1);
    if (r7_1 != r5_1) {
        u32 r0_1 = divide_with_remainder(r9_1, r2, r2, r3);
        r1 = guest::cpu()->r[1];
        u32 r0_2 = sxth(r0_1);
        u32 res_1 = r0_2 - r6_1;
        u32 nf_1 = res_1 >> 0x1f;  // (from the original)
        u32 zf_1 = res_1 == 0;
        u32 vf_1 = ((r0_2 ^ r6_1) & (r0_2 ^ res_1)) >> 0x1f;  // (from the original)
        if (zf_1 || nf_1 != vf_1) {
            r1 = 0u - r6_1;
            u32 res_2 = r1 - r0_2;
            nf_1 = res_2 >> 0x1f;  // (from the original)
            zf_1 = res_2 == 0;
            vf_1 = ((r1 ^ r0_2) & (r1 ^ res_2)) >> 0x1f;  // (from the original)
        }
        if (!zf_1 && nf_1 == vf_1) {
            if (s32(r0_2) > s32(r3)) {
                r0_2 = r3;
            } else {
                r1 = 0u - r3;
                if ((r1 - r0_2) != 0 && s32(r1) >= s32(r0_2)) {
                    r0_2 = sxth(r1);
                }
            }
            angle_s16->half_0 = u16(r0_2 + r7_1);
        } else {
            if (s32(r9_1) >= 0) {
                u32 r0_3 = r7_1 + r6_1;
                r1 = r5_1 - r0_3;
                angle_s16->half_0 = u16(r0_3);
                if (s32(sxth(r1)) > 0) {
                    r0_5 = sxth(r5_1 - u32(angle_s16->half_0));
                    guest::cpu()->r[1] = r1;
                    return r0_5;
                }
            } else {
                u32 r0_4 = r7_1 - r6_1;
                r1 = r5_1 - r0_4;
                angle_s16->half_0 = u16(r0_4);
                if (s32(sxth(r1)) < 0) {
                    r0_5 = sxth(r5_1 - u32(angle_s16->half_0));
                    guest::cpu()->r[1] = r1;
                    return r0_5;
                }
            }
            angle_s16->half_0 = u16(r5_1);
        }
    }
    r0_5 = sxth(r5_1 - u32(angle_s16->half_0));
    guest::cpu()->r[1] = r1;
    return r0_5;
}

}  // namespace d_0056af2c
GUEST_EXPORT_FRAMED(0x0056af2c, d_0056af2c::AngleS16__approach_min, 0x47f0);  // pushes {r4, r5, r6, r7, r8, r9, r10, lr} first, as the original

// f_0056b288: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Blends the color toward the target, clamped.
namespace d_0056b288 {

struct __attribute__((packed)) Color4 {
    float float_0;
};
GUEST_OFFSET(Color4, float_0, 0x0);


void Color4__lerp_clamped(gptr<Color4> color4, float S0, float S1, float S2, float S3) {
    u32 fpsr = guest::cpu()->fpscr;
    u32 fpsr_3 = 0;
    float S1_2 = 0;
    float S5_1 = color4->float_0;
    float S6 = 0.0f;
    fpsr = fpsr & 0xfffffffu | vfp_cmpf(S5_1, S0);  // (from the original)
    if (!(fpsr >> 0x1e & 1)) {  // (from the original)
        float S4_1 = (S0 - S5_1) * S1;
        u32 fpsr_1 = fpsr & 0xfffffffu | vfp_cmpf(S4_1, S3);  // (from the original)
        if (!(S4_1 >= S3)) {
            float S1_1 = -S3;
            fpsr_1 = fpsr_1 & 0xfffffffu | vfp_cmpf(S4_1, S1_1);  // (from the original)
            if (!(S4_1 <= S1_1)) {
                u32 fpsr_2 = fpsr_1 & 0xfffffffu | vfp_cmpf(S4_1, S6);  // (from the original)
                if (!(S4_1 > S6)) {
                    fpsr = fpsr_2 & 0xfffffffu | vfp_cmpf(S4_1, S1_1);  // (from the original)
                    if (fpsr >> 0x1e & 1 || fpsr >> 0x1f != (fpsr >> 0x1c & 1)) {  // (from the original)
                        goto L_56b344;
                    }
                    S1 = S5_1 - S3;
                    color4->float_0 = S1;
                    fpsr = fpsr & 0xfffffffu | vfp_cmpf(S1, S0);  // (from the original)
                    if (!(fpsr >> 0x1e & 1) && fpsr >> 0x1f == (fpsr >> 0x1c & 1)) {  // (from the original)
                        color4->float_0 = S1;
                        goto L_56b344;
                    }
                    goto L_56b33c;
                }
                fpsr = fpsr_2 & 0xfffffffu | vfp_cmpf(S4_1, S3);  // (from the original)
                if (fpsr >> 0x1d & 1) {  // (from the original)
                    goto L_56b344;
                }
                S1 = S5_1 + S3;
                color4->float_0 = S1;
                fpsr = fpsr & 0xfffffffu | vfp_cmpf(S1, S0);  // (from the original)
                if (!(fpsr >> 0x1e & 1) && fpsr >> 0x1f == (fpsr >> 0x1c & 1)) {  // (from the original)
                    goto L_56b33c;
                }
                color4->float_0 = S1;
                goto L_56b344;
            }
        }
        fpsr_3 = fpsr_1 & 0xfffffffu | vfp_cmpf(S4_1, S2);  // (from the original)
        S1_2 = -S2;
        if (S4_1 > S2) {
            S4_1 = S2;
        }
        fpsr = fpsr_3 & 0xfffffffu | vfp_cmpf(S4_1, S1_2);  // (from the original)
        if (!(fpsr >> 0x1d & 1)) {  // (from the original)
            S4_1 = S1_2;
        }
        color4->float_0 = S5_1 + S4_1;
        goto L_56b344;
L_56b33c:;
        S1 = S0;
        color4->float_0 = S1;
    }
L_56b344:;
    float S1_3 = color4->float_0;
    float S0_1 = S0 - S1_3;
    if (!(S0_1 > S6)) {
        S0_1 = -S0_1;
    }
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_3;
}

}  // namespace d_0056b288
GUEST_EXPORT(0x0056b288, d_0056b288::Color4__lerp_clamped);

// f_0056b5a4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Stores the clock offset (0x95c4e8) in the save (+0x62120), marking it when flagged, and clears the change flag.
namespace d_0056b5a4 {

struct __attribute__((packed)) Local_0056b5a4_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0056b5a4_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_0056b5a4_ea_1, word_4, 0x4);

inline constexpr u32 clock_state_flags_address = 0x0095c4d2u;
inline constexpr u32 game_clock_offset_lo_address = 0x0095c4e8u;
inline guest::global<u8, 0x0095c4d2> clock_state_flags;
inline guest::global<u32, 0x0095c4e8> game_clock_offset_lo;
inline guest::global<u32, 0x0095c4ec> game_clock_offset_hi;
inline constexpr guest::Function<0x0020d914, u32(u32)> set_byte_bits_20d914;
inline constexpr guest::Function<0x002fae84, u32(u32)> get_data_base;

u32 GameClock__save_offset(u32 game_clock) {
    u32 data_base_3 = get_data_base(game_clock);
    u32 r1_1 = *game_clock_offset_lo;
    u32 r2_1 = *game_clock_offset_hi;
    gptr<Local_0056b5a4_ea_1> ea_1 = gptr<Local_0056b5a4_ea_1>(data_base_3 + 0x62120u);  // (from the original)
    ea_1->word_0 = r1_1;
    ea_1->word_4 = r2_1;
    u32 r0_2 = *clock_state_flags;
    if ((r0_2 & 1u) != 0) {
        u32 data_base_4 = get_data_base(r0_2);
        set_byte_bits_20d914(data_base_4 + 0x62120u);  // (from the original)
    }
    u32 r1_2 = u32(*clock_state_flags) & ~0x10u;  // (from the original)
    *clock_state_flags = u8(r1_2);
    guest::cpu()->r[1] = r1_2;
    return clock_state_flags_address;
}

}  // namespace d_0056b5a4
GUEST_EXPORT_FRAMED(0x0056b5a4, d_0056b5a4::GameClock__save_offset, 0x4010);  // pushes {r4, lr} first, as the original

// f_0056bd04: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Restores the clock offset from its saved copy (0x95c4f0) and applies it.
namespace d_0056bd04 {

inline constexpr u32 game_clock_offset_lo_address = 0x0095c4e8u;
inline constexpr u32 game_clock_offset_address = 0x0095c4f0u;
inline guest::global<u32, 0x0095c4e8> game_clock_offset_lo;
inline guest::global<u32, 0x0095c4ec> game_clock_offset_hi;
inline guest::global<u32, 0x0095c4f0> game_clock_offset;
inline guest::global<u32, 0x0095c4f4> global_0095c4f4;
inline constexpr guest::Function<0x0056c7c8, u32(u32, u32, u32, u32)> TimeLimit__check_clock;

u32 GameClock__restore_offset() {
    u32 r1_1 = *game_clock_offset;
    u32 r2_1 = *global_0095c4f4;
    *game_clock_offset_lo = r1_1;
    *game_clock_offset_hi = r2_1;
    return TimeLimit__check_clock(game_clock_offset_lo_address, r1_1, r2_1, guest::cpu()->r[3]);
}

}  // namespace d_0056bd04
GUEST_EXPORT(0x0056bd04, d_0056bd04::GameClock__restore_offset);

// f_0056bdec: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Reads the system time into 0x95c518.
namespace d_0056bdec {

inline constexpr u32 system_time_cache_address = 0x0095c518u;
inline guest::global<u32, 0x0095c518> system_time_cache;
inline guest::global<u32, 0x0095c51c> global_0095c51c;
inline constexpr guest::Function<0x00124130, u32(u32, u32)> Friends__wait_event;

struct __attribute__((packed)) Frame_0056bdec {
    u32 word_0;
    u32 word_4;
    u8 unknown_8[0x4];  // (not read or written by name)
};
GUEST_OFFSET(Frame_0056bdec, word_0, 0x0);
GUEST_OFFSET(Frame_0056bdec, word_4, 0x4);
GUEST_SIZE(Frame_0056bdec, 0xc);

u32 GameClock__read_system_time(u32 r0_unused, u32 r1) {
    guest::StackFrameOf<Frame_0056bdec> frame;  // the original's stack frame
    Friends__wait_event(frame.at(0).addr(), r1);
    u32 r1_1 = frame->word_0;
    u32 r2_1 = frame->word_4;
    *system_time_cache = r1_1;
    *global_0095c51c = r2_1;
    guest::cpu()->r[1] = r1_1;
    return system_time_cache_address;
}

}  // namespace d_0056bdec
GUEST_EXPORT_FRAMED(0x0056bdec, d_0056bdec::GameClock__read_system_time, 0x4000);  // pushes {lr} first, as the original

// f_0056be90: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The index (below 12) of the first sign period (month and day pairs at 0x8902b6) that starts after the date.
namespace d_0056be90 {


u32 zodiac_index_of_date(u32 r0, u32 r1) {
    u32 r2 = 0x8902b6u;  // (from the original)
    u32 r3 = r0;
    u32 r12 = 0u;
    r0 = r12;
    do {
        u32 r4_1 = *gptr<u8>(r2);
        u32 zf_1 = r4_1 == r3;
        if (!zf_1 && s32(r4_1) >= s32(r3) || zf_1 && s32(u32(*gptr<u8>(r2 + 1u))) >= s32(r1)) {
            return r0;
        }
        r0 = r0 + 1u & 0xffu;  // (from the original)
        r2 += 2u;
        guest::preempt();
    } while (r0 < 0xcu);  // (from the original)
    return r12;
}

}  // namespace d_0056be90
GUEST_EXPORT_FRAMED(0x0056be90, d_0056be90::zodiac_index_of_date, 0x10);  // pushes {r4} first, as the original

// f_0056c3d4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Bit 4 of the clock flags (0x95c4d2).
namespace d_0056c3d4 {

inline guest::global<u8, 0x0095c4d2> clock_state_flags;

u32 GameClock__changed() {
    return (u32(*clock_state_flags) & 0x10u) >> 4;  // (from the original)
}

}  // namespace d_0056c3d4
GUEST_EXPORT(0x0056c3d4, d_0056c3d4::GameClock__changed);

// f_0056c6d8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Sets bit 1 of the clock flags.
namespace d_0056c6d8 {

inline constexpr u32 clock_state_flags_address = 0x0095c4d2u;
inline guest::global<u8, 0x0095c4d2> clock_state_flags;

u32 GameClock__set_flag_2() {
    u32 r1_1 = u32(*clock_state_flags) | 2u;
    *clock_state_flags = u8(r1_1);
    guest::cpu()->r[1] = r1_1;
    return clock_state_flags_address;
}

}  // namespace d_0056c6d8
GUEST_EXPORT(0x0056c6d8, d_0056c6d8::GameClock__set_flag_2);

// f_0056c6f0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Bit 2 of the byte at 0x95c4d2.
namespace d_0056c6f0 {

inline guest::global<u8, 0x0095c4d2> clock_state_flags;

u32 clock_state_flag_bit_2() {
    return (u32(*clock_state_flags) & 4u) >> 2;
}

}  // namespace d_0056c6f0
GUEST_EXPORT(0x0056c6f0, d_0056c6f0::clock_state_flag_bit_2);

// f_0056c76c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// (year - 2008) mod 12.
namespace d_0056c76c {


u32 year_cycle_index(u32 r0) {
    u32 r0_1 = r0 - 0x7d8u;  // (from the original)
    u32 r1_1 = u64(s64(s32(0x2aaaaaabu)) * s32(r0_1)) >> 0x20;  // (from the original)
    u32 r1_2 = u32(s32(r1_1) >> 1) - u32(s32(r1_1) >> 0x1f);  // (from the original)
    u32 r1_3 = r1_2 - (r1_2 << 2);
    guest::cpu()->r[1] = r1_3;
    return r0_1 + (r1_3 << 2) & 0xffu;  // (from the original)
}

}  // namespace d_0056c76c
GUEST_EXPORT(0x0056c76c, d_0056c76c::year_cycle_index);

// f_0056c7b0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Sets bit 2 of the clock flags.
namespace d_0056c7b0 {

inline guest::global<u8, 0x0095c4d2> clock_state_flags;

void GameClock__set_flag_4() {
    *clock_state_flags = u8(u32(*clock_state_flags) | 4u);
}

}  // namespace d_0056c7b0
GUEST_EXPORT(0x0056c7b0, d_0056c7b0::GameClock__set_flag_4);

// f_0056cf34: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0056cf34 {

inline guest::global<u8, 0x0095c4d2> clock_state_flags;

u32 record_is_active() {
    return (u32(*clock_state_flags) & 8u) >> 3;
}

}  // namespace d_0056cf34
GUEST_EXPORT(0x0056cf34, d_0056cf34::record_is_active);

// f_0056cf7c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Flags the clock (bit 0, and the save's bit) while the date is before January 6, 2012; clears both otherwise.
namespace d_0056cf7c {

struct __attribute__((packed)) Local_0056cf7c_r0_6 {
    u8 unknown_0[0x8];  // (not used here)
    u8 byte_8;
};
GUEST_OFFSET(Local_0056cf7c_r0_6, byte_8, 0x8);

inline constexpr u32 clock_state_flags_address = 0x0095c4d2u;
inline constexpr u32 game_time_address = 0x00ad56b0u;
inline constexpr u32 early_date_check_address = 0x00ad56b4u;
inline guest::global<u8, 0x0095c4d2> clock_state_flags;
inline guest::global<u32, 0x00ad56b0> game_time;
inline guest::global<u32, 0x00ad56b4> early_date_check;
inline constexpr guest::Function<0x0020d914, u32(u32, u32)> set_byte_bits_20d914;
inline constexpr guest::Function<0x002fae84, u32(u32, u32)> get_data_base;

void GameClock__check_early_date() {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 r2_1 = *game_time;
    u32 r0_1 = *early_date_check;
    u32 r1_1 = *clock_state_flags;
    u32 res_1 = r2_1 - 0x7dcu;  // (from the original)
    u32 nf_1 = res_1 >> 0x1f;  // (from the original)
    u32 zf_1 = res_1 == 0;
    u32 vf_1 = ((r2_1 ^ 0x7dcu) & (r2_1 ^ res_1)) >> 0x1f;  // (from the original)
    if (zf_1 || nf_1 != vf_1) {
        u32 r2_2 = sxtb(r0_1);
        nf_1 = r2_2 - 1u >> 0x1f;  // (from the original)
        zf_1 = r2_2 - 1u == 0;
        vf_1 = ((r2_2 ^ 1u) & (r2_2 ^ r2_2 - 1u)) >> 0x1f;  // (from the original)
    }
    if (zf_1 || nf_1 != vf_1) {
        u32 r2_3 = s32(r0_1 << 0x10) >> 0x18;  // (from the original)
        u32 nf_2 = r2_3 - 1u >> 0x1f;  // (from the original)
        u32 vf_2 = ((r2_3 ^ 1u) & (r2_3 ^ r2_3 - 1u)) >> 0x1f;  // (from the original)
        if (r2_3 - 1u == 0 || nf_2 != vf_2) {
            u32 r0_2 = s32(r0_1) >> 0x18;  // (from the original)
            nf_2 = r0_2 - 6u >> 0x1f;  // (from the original)
            vf_2 = ((r0_2 ^ 6u) & (r0_2 ^ r0_2 - 6u)) >> 0x1f;  // (from the original)
        }
        if (nf_2 != vf_2) {
            u32 r1_2 = r1_1 | 1u;
            *clock_state_flags = u8(r1_2);
            u32 data_base_3 = get_data_base(clock_state_flags_address, r1_2);
            frame.release();
            set_byte_bits_20d914(data_base_3 + 0x62120u, guest::cpu()->r[1]);  // (from the original)
            return;
        }
    }
    u32 r1_4 = r1_1 & ~1u;
    *clock_state_flags = u8(r1_4);
    u32 data_base_4 = get_data_base(clock_state_flags_address, r1_4);
    gptr<Local_0056cf7c_r0_6> r0_6 = gptr<Local_0056cf7c_r0_6>(data_base_4 + 0x62120u);  // (from the original)
    u32 r1_5 = u32(r0_6->byte_8) & ~1u;
    r0_6->byte_8 = u8(r1_5);
    guest::cpu()->r[1] = r1_5;
}

}  // namespace d_0056cf7c
GUEST_EXPORT(0x0056cf7c, d_0056cf7c::GameClock__check_early_date);

// f_0056d828: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Sets the message word to the villager of the record (by its table id), or runs the default.
namespace d_0056d828 {

struct __attribute__((packed)) Object_0056d828_1 {
    u8 unknown_0[0x2c];  // (not used here)
    u16 half_2c;
};
GUEST_OFFSET(Object_0056d828_1, half_2c, 0x2c);

struct __attribute__((packed)) Local_0056d828_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Local_0056d828_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_0056d828_ea_1, word_4, 0x4);
GUEST_OFFSET(Local_0056d828_ea_1, word_8, 0x8);
GUEST_OFFSET(Local_0056d828_ea_1, word_c, 0xc);

struct __attribute__((packed)) Local_0056d828_ea_2 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Local_0056d828_ea_2, word_4, 0x4);
GUEST_OFFSET(Local_0056d828_ea_2, word_8, 0x8);
GUEST_OFFSET(Local_0056d828_ea_2, word_c, 0xc);

struct __attribute__((packed)) Local_0056d828_ea_3 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_0056d828_ea_3, word_0, 0x0);
GUEST_OFFSET(Local_0056d828_ea_3, word_4, 0x4);
GUEST_OFFSET(Local_0056d828_ea_3, word_8, 0x8);

inline constexpr guest::Function<0x00301e20, u32(u32, u32, u32, u32)> is_villager_record;
inline constexpr guest::Function<0x0056d874, u32(u32, u32)> set_villager_entry_word;

struct __attribute__((packed)) Frame_0056d828 {
    u16 half_0;
    u8 unknown_2[0xe];  // (not read or written by name)
};
GUEST_OFFSET(Frame_0056d828, half_0, 0x0);
GUEST_SIZE(Frame_0056d828, 0x10);

void Message__set_villager_word(u32 message, gptr<Object_0056d828_1> arg1, u32 r2_unused, u32 r3) {
    guest::StackFrameOf<Frame_0056d828> frame;  // the original's stack frame
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r14 = guest::cpu()->r[14];
    gptr<Local_0056d828_ea_1> ea_1 = gptr<Local_0056d828_ea_1>(frame.at(0).addr());
    ea_1->word_0 = r3;
    ea_1->word_4 = r4;
    ea_1->word_8 = r5;
    ea_1->word_c = r14;
    u32 is_villager_2 = is_villager_record(arg1.addr(), arg1.addr(), guest::cpu()->r[2], r3);
    if (is_villager_2 != 0) {
        frame->half_0 = arg1->half_2c;
        set_villager_entry_word(message, frame.at(0).addr());
        gptr<Local_0056d828_ea_2> ea_2 = gptr<Local_0056d828_ea_2>(frame.at(0).addr());
        u32 r4_1 = ea_2->word_4;
        u32 r5_1 = ea_2->word_8;
        guest::cpu()->r[4] = r4_1;
        guest::cpu()->r[5] = r5_1;
        return;
    }
    u32 r1_2 = *gptr<u32>(*gptr<u32>(message) + 0x1cu);  // (from the original)
    gptr<Local_0056d828_ea_3> ea_3 = gptr<Local_0056d828_ea_3>(frame.at(4).addr());
    u32 r4_2 = ea_3->word_0;
    u32 r5_2 = ea_3->word_4;
    r14 = ea_3->word_8;
    // virtual function 7 of message
    guest::cpu()->r[4] = r4_2;
    guest::cpu()->r[5] = r5_2;
    frame.release();
    guest::call_address<u32>(r1_2, message, r1_2, guest::cpu()->r[2], guest::cpu()->r[3]);
    return;
}

}  // namespace d_0056d828
GUEST_EXPORT(0x0056d828, d_0056d828::Message__set_villager_word);

// f_0056d9cc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Sets the message word to the name of the field object of the kind, or runs the default.
namespace d_0056d9cc {

inline constexpr u32 word_resources_address = 0x0095debcu;
inline guest::global<u32, 0x0095debc> word_resources;
inline constexpr guest::Function<0x005ca3b0, u32(u32, u32, u32, u32)> signed_byte_88d8e0;
inline constexpr guest::Function<0x0075c0ec, u32(u32, u32, u32, u32)> script__WordRes__WordRes_0075c0ec;

void Message__set_field_object_name(u32 message, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 r0_1 = signed_byte_88d8e0(r1, r1, r2, r3);
    if (r0_1 + 1u != 0) {
        u32 r0_2 = *word_resources;
        frame.release();
        script__WordRes__WordRes_0075c0ec(r0_2, message, 0x56da14u, r0_1);
        return;  // (from the original)
    }
    u32 r1_1 = *gptr<u32>(*gptr<u32>(message) + 0x1cu);  // (from the original)
    // virtual function 7 of message
    frame.release();
    guest::call_address<u32>(r1_1, message, r1_1, guest::cpu()->r[2], r0_1);
    return;
}

}  // namespace d_0056d9cc
GUEST_EXPORT(0x0056d9cc, d_0056d9cc::Message__set_field_object_name);

// f_0056daa8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Sets the message word to the special NPC's name.
namespace d_0056daa8 {

inline constexpr u32 word_resources_address = 0x0095debcu;
inline guest::global<u32, 0x0095debc> word_resources;
inline constexpr guest::Function<0x0075c0ec, u32(u32, u32, u32, u32)> script__WordRes__WordRes_0075c0ec;

u32 Message__set_special_npc_name(u32 message, u32 r1) {
    return script__WordRes__WordRes_0075c0ec(*word_resources, message, 0x56dac0u, r1);  // (from the original)
}

}  // namespace d_0056daa8
GUEST_EXPORT(0x0056daa8, d_0056daa8::Message__set_special_npc_name);

// f_0056e5c4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// For furniture not being carried, aims the camera at it (wall furniture by its angle) when it allows it.
namespace d_0056e5c4 {

inline guest::global<u32, 0x0094edd8> camera_manager;
inline guest::global<u32, 0x00952a18> camera_focus_state;
inline constexpr guest::Function<0x0068eaf0, u32(u32, u32)> CameraController__request_veneer;
inline constexpr guest::Function<0x0068ec3c, u32(u32, u32)> CameraController__set_veneer;
inline constexpr guest::Function<0x00748534, u32(u32, u32)> FurnitureRef__has_byte_19_class_4_or_5;

u32 AcFtr__update_camera_focus(gptr<AcFtr> ac_ftr, u32 r1, float S0) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 r5_1 = r1;
    if (ac_ftr->byte_5ec != 2u && *camera_manager != 0) {
        u32 r0_1 = ac_ftr->word_5f0;
        if (r0_1 != 0) {
            u32 r0_2 = FurnitureRef__has_byte_19_class_4_or_5(r0_1, r1);
            r1 = guest::cpu()->r[1];
            S0 = guest::cpu()->s[0];
            if (r0_2 != 0) {
                if (ac_ftr->byte_7fd == 1u) {
                    return 0u;
                }
                u32 r1_1 = s16(ac_ftr->rotation_y);
                u32 r0_3 = CameraController__set_veneer(r5_1, r1_1);
                float S0_1 = std::bit_cast<float>(*camera_focus_state);
                guest::cpu()->s[0] = S0_1;
                u32 r0_4 = CameraController__request_veneer(r5_1, guest::cpu()->r[1]);
                return r0_4 | r0_3;
            }
        }
        u32 r0_6 = ac_ftr->word_5f0;
        if (r0_6 != 0) {
            if ((u32(*gptr<u8>(r0_6 + 0x1cu)) >> 2u & 1u) == 0) {  // (from the original)
                guest::cpu()->r[1] = r1;
                guest::cpu()->s[0] = S0;
                return 0u;
            }
        }
        float S0_3 = std::bit_cast<float>(*camera_focus_state);
        guest::cpu()->s[0] = S0_3;
        frame.release();
        return CameraController__request_veneer(r5_1, r1);
    }
    guest::cpu()->r[1] = r1;
    guest::cpu()->s[0] = S0;
    return 0u;
}

}  // namespace d_0056e5c4
GUEST_EXPORT(0x0056e5c4, d_0056e5c4::AcFtr__update_camera_focus);

// f_0056e6a8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Calls virtual 15 of the object at +0x300 when it exists.
namespace d_0056e6a8 {

struct __attribute__((packed)) Object_0056e6a8_0 {
    u8 unknown_0[0x300];  // (not used here)
    u32 word_300;
};
GUEST_OFFSET(Object_0056e6a8_0, word_300, 0x300);


void call_virtual_15_of_300(gptr<Object_0056e6a8_0> ac_ftr_audio) {
    u32 r0_1 = ac_ftr_audio->word_300;
    if (r0_1 == 0) {
        return;
    }
    u32 r2_1 = *gptr<u32>(*gptr<u32>(r0_1) + 0x3cu);  // (from the original)
    // virtual function 15 of r0_1
    guest::call_address<u32>(r2_1, r0_1, guest::cpu()->r[1], r2_1, guest::cpu()->r[3]);
}

}  // namespace d_0056e6a8
GUEST_EXPORT(0x0056e6a8, d_0056e6a8::call_virtual_15_of_300);

// f_0056f1b8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Updates the furniture's shadow from its position and size.
namespace d_0056f1b8 {

struct __attribute__((packed)) Local_0056f1b8_r0_4 {
    u8 unknown_0[0x1b8];  // (not used here)
    float float_1b8;
    u8 unknown_1bc[0x4];  // (not used here)
    float float_1c0;
};
GUEST_OFFSET(Local_0056f1b8_r0_4, float_1b8, 0x1b8);
GUEST_OFFSET(Local_0056f1b8_r0_4, float_1c0, 0x1c0);

inline constexpr guest::Function<0x006ef0a0, u32(u32, u32)> ShadowPool__queue;
inline constexpr guest::Function<0x006ef108, u32(u32, u32, u32, u32)> Shadow__set;

struct __attribute__((packed)) Frame_0056f1b8 {
    u32 word_0;
    u8 unknown_4[0xc];  // (not read or written by name)
};
GUEST_OFFSET(Frame_0056f1b8, word_0, 0x0);
GUEST_SIZE(Frame_0056f1b8, 0x10);

void AcFtr__update_shadow(gptr<AcFtr> ac_ftr, u32 r1, u32 r2_unused, u32 r3, float S0, float S1) {
    guest::StackFrameOf<Frame_0056f1b8> frame;  // the original's stack frame
    u32 r0 = ac_ftr.addr();
    u32 r12_1 = 0;
    u32 r3_2 = 0;
    u32 r0_2 = 0;
    gptr<Local_0056f1b8_r0_4> r0_4 = gptr<Local_0056f1b8_r0_4>(0u);
    u32 r2_2 = 0;
    float S1_1 = 0;
    float S0_1 = 0;
    float S2_1 = 0;
    frame->word_0 = r3;
    u32 r0_1 = ac_ftr->half_764;
    if ((r0_1 >> 4u & 1u) == 0 || (r0_1 >> 3u & 1u) == 0 || ac_ftr->byte_7fd == 1u) {
        return;
    }
    u32 r3_1 = ac_ftr->byte_5f8;
    if (r3_1 != 3u && r3_1 != 4u && r3_1 != 5u) {
        if ((r0_1 >> 0xdu & 1u) == 0) {  // (from the original)
            if ((r0_1 >> 0xeu & 1u) == 0) {  // (from the original)
                goto L_56f28c;
            }
        }
    }
    *gptr<u16>((r0 + 0x700u) + 0x64u) = u16(r0_1 & ~0x4000u);  // (from the original)
    r12_1 = ac_ftr->word_5c4;
    r3_2 = 1u;
    if (r12_1 == 0) {
        return;
    }
    r0_2 = ac_ftr->word_5f0;
    if (r0_2 != 0) {
        u32 r0_3 = u32(*gptr<u8>(r0_2 + 0x1bu)) >> 2u & 3u;  // (from the original)
        if (r0_3 >= 4u || r0_3 == 0) {
            r3_2 = 0x1bu;  // (from the original)
            goto L_56f268;
        }
        if (r0_3 == 2u) {
            goto L_56f268;
        }
    }
    r3_2 = 0u;
L_56f268:;
    frame->word_0 = r3_2;
    r0_4 = gptr<Local_0056f1b8_r0_4>(r0 + 0x400u);  // (from the original)
    r2_2 = s16(ac_ftr->rotation_y);
    S1_1 = r0_4->float_1c0;
    S0_1 = r0_4->float_1b8;
    S2_1 = std::bit_cast<float>(*gptr<u32>(r1 + 4u));
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    guest::cpu()->s[2] = S2_1;
    Shadow__set(r12_1, r1, r2_2, 0u);
    r1 = guest::cpu()->r[1];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
L_56f28c:;
    u32 shadow_pool = ac_ftr->word_5c4;
    if (shadow_pool == 0) {
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        return;
    }
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    frame.release();
    ShadowPool__queue(shadow_pool, r1);
    return;
}

}  // namespace d_0056f1b8
GUEST_EXPORT(0x0056f1b8, d_0056f1b8::AcFtr__update_shadow);

// f_0056f34c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Packs the furniture's location: its scene in the high bits, then its room furniture index, or its cell and layer (or
// the carried marker).
namespace d_0056f34c {

struct __attribute__((packed)) Local_0056f34c_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0056f34c_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_0056f34c_ea_1, word_4, 0x4);

inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> current_scene_id;
inline constexpr guest::Function<0x002f74e0, u32(u32, u32)> scene_has_flags;
inline constexpr guest::Function<0x004ea048, u32(u32)> room_furniture_address;
inline constexpr guest::Function<0x007455cc, u32(u32, u32)> RoomFurniture__index_of;
inline constexpr guest::Function<0x0075127c, u32(u32, u32, u32, u32)> AcFtr__seat_slots;

struct __attribute__((packed)) Frame_0056f34c {
    u32 word_0;
    u8 unknown_4[0x8];  // (not read or written by name)
};
GUEST_OFFSET(Frame_0056f34c, word_0, 0x0);
GUEST_SIZE(Frame_0056f34c, 0xc);

u32 AcFtr__packed_location(u32 ac_ftr, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_0056f34c> frame;  // the original's stack frame
    u32 r0_6 = 0;
    u32 r1_2 = 0;
    u32 r0_8 = 0;
    u32 scene = current_scene_id(ac_ftr, r1, r2, r3);
    u32 scene_flagged = scene_has_flags(0x20u, scene);  // (from the original)
    if (scene_flagged == 0) {
        scene_flagged = scene_has_flags(0x200u, scene);  // (from the original)
        if (scene_flagged == 0) {
            scene_flagged = scene_has_flags(0x40000000u, scene);  // (from the original)
            if (scene_flagged == 0) {
                scene_flagged = scene_has_flags(0x800000u, scene);  // (from the original)
                if (scene_flagged == 0) {
                    scene_flagged = scene_has_flags(0x10000000u, scene);  // (from the original)
                    if (scene_flagged == 0) {
                        u32 r0_3 = *gptr<u8>(ac_ftr + 0x5ecu);  // (from the original)
                        if (r0_3 == 2u) {
                            return 0x31u | scene << 9 | 0x20000u;  // (from the original)
                        }
                        u32 scene_2 = current_scene_id(r0_3, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
                        r0_6 = scene_has_flags(8u, scene_2);
                        r1_2 = guest::cpu()->r[1];
                        if (r0_6 == 0) {
                            return r0_6;
                        }
                        frame->word_0 = r2;
                        u32 r0_7 = AcFtr__seat_slots(ac_ftr, frame.at(4).addr(), frame.at(8).addr(), r1);
                        r1_2 = guest::cpu()->r[1];
                        if (r0_7 == 0) {
                            return scene;
                        }
                        gptr<Local_0056f34c_ea_1> ea_1 = gptr<Local_0056f34c_ea_1>(frame.at(4).addr());
                        u32 r8_1 = *gptr<u8>(ac_ftr + 0x7b4u);  // (from the original)
                        if (r8_1 >= 2u) {
                            r8_1 = 0u;
                        }
                        r1_2 = (ea_1->word_0 & 0xfu | 0xf0u & ea_1->word_4 << 4) & ~0x100u;  // (from the original)
                        r0_8 = (0x100u & r8_1 << 8 | r1_2) & ~0x10000u & ~0xfe00u;  // (from the original)
                        guest::cpu()->r[1] = r1_2;
                        return r0_8 | scene << 9;
                    }
                }
            }
        }
    }
    u32 room_furniture = room_furniture_address(scene_flagged);
    u32 index_2 = RoomFurniture__index_of(room_furniture, ac_ftr);
    r1_2 = guest::cpu()->r[1];
    r0_8 = index_2 & 0x1ffu;  // (from the original)
    return r0_8 | scene << 9;
}

}  // namespace d_0056f34c
GUEST_EXPORT_FRAMED(0x0056f34c, d_0056f34c::AcFtr__packed_location, 0x43f0);  // pushes {r4, r5, r6, r7, r8, r9, lr} first, as the original

// f_0056f8b4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0056f8b4 {

struct __attribute__((packed)) Object_0056f8b4_1 {
    u32 word_0;
};
GUEST_OFFSET(Object_0056f8b4_1, word_0, 0x0);

inline constexpr u32 empty_item_address = 0x0095bfdcu;
inline guest::global<u16, 0x008870a0> global_008870a0;
inline constexpr guest::Function<0x0023b900, u32(u32, u32, u32)> script__WordFix_33u___WordFix_0023b900;
inline constexpr guest::Function<0x002fc8e8, u32(u32, u32)> Item__copy;
inline constexpr guest::Function<0x002fc934, u32(u32, u32)> Item__copy_b;
inline constexpr guest::Function<0x002fcaf4, u32(u32)> Item__is_empty;
inline constexpr guest::Function<0x005d97a0, u32(u32, u32, u32, u32)> AcAutoCampEntrySignboard__virtual_68;
inline constexpr guest::Function<0x00692ad4, u32(u32, u32)> copy_global_items;
inline constexpr guest::Function<0x007559ac, u32(u32, u32)> RecordHolder__first_id;
inline constexpr guest::Function<0x00755a98, u32(u32, u32)> handle_value;

u32 AcFtr__virtual_65(u32 ac_ftr, gptr<Object_0056f8b4_1> arg1, u32 r2) {
    guest::StackFrame frame(0xc);  // the original's stack frame
    u32 r0_2 = AcAutoCampEntrySignboard__virtual_68(ac_ftr + 0xb0u, arg1.addr(), r2, guest::cpu()->r[3]);  // (from the original)
    u32 r1_1 = guest::cpu()->r[1];
    u32 r6_1 = r0_2;
    if (r0_2 == 0) {
        u32 r0_3 = RecordHolder__first_id(r2, r1_1);
        r1_1 = guest::cpu()->r[1];
        if (r0_3 == 0x60u) {  // (from the original)
            u32 r0_4 = handle_value(r2, r1_1);
            r1_1 = guest::cpu()->r[1];
            if (r0_4 == 0) {
                Item__copy_b(frame.at(4).addr(), empty_item_address);
                Item__copy_b(frame.at(8).addr(), empty_item_address);
                copy_global_items(frame.at(4).addr(), frame.at(8).addr());
                Item__copy_b(frame.at(0).addr(), frame.at(8).addr());
                u32 is_empty_3 = Item__is_empty(frame.at(0).addr());
                if (is_empty_3 != 0) {
                    Item__copy(frame.at(0).addr(), frame.at(4).addr());
                }
                r1_1 = *global_008870a0;
                u32 res_1 = (*gptr<u16>(ac_ftr + 0xcu) == r1_1 ? u32(*gptr<s8>(ac_ftr + 0x7a3u)) : 0u) ^ 1u;  // (from the original)
                arg1->word_0 = res_1;
                if (res_1 == 0) {
                    script__WordFix_33u___WordFix_0023b900(ac_ftr + 0xb0u, frame.at(0).addr(), 0u);  // (from the original)
                    r1_1 = guest::cpu()->r[1];
                }
                r6_1 = 1u;
            } else if (r0_4 == 1u) {
                Item__copy_b(frame.at(4).addr(), empty_item_address);
                Item__copy_b(frame.at(0).addr(), empty_item_address);
                copy_global_items(frame.at(4).addr(), frame.at(0).addr());
                u32 is_empty_4 = Item__is_empty(frame.at(0).addr());
                arg1->word_0 = is_empty_4;
                script__WordFix_33u___WordFix_0023b900(ac_ftr + 0xb0u, frame.at(4).addr(), 0u);  // (from the original)
                r1_1 = guest::cpu()->r[1];
                if (arg1->word_0 == 0) {
                    script__WordFix_33u___WordFix_0023b900(ac_ftr + 0xb0u, frame.at(0).addr(), 1u);  // (from the original)
                    r1_1 = guest::cpu()->r[1];
                }
                r6_1 = 1u;
            } else {
                r6_1 = 1u;
                arg1->word_0 = 0;
            }
        }
        r0_2 = r6_1;
    }
    guest::cpu()->r[1] = r1_1;
    return r0_2;
}

}  // namespace d_0056f8b4
GUEST_EXPORT_FRAMED(0x0056f8b4, d_0056f8b4::AcFtr__virtual_65, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_0056fd94: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Finds the furniture's slot in the room grid and furniture list.
namespace d_0056fd94 {

struct __attribute__((packed)) Local_0056fd94_r0_2 {
    u8 unknown_0[0x4];  // (not used here)
    u8 byte_4;
    u8 byte_5;
    u8 byte_6;
    u8 byte_7;
    u8 byte_8;
};
GUEST_OFFSET(Local_0056fd94_r0_2, byte_4, 0x4);
GUEST_OFFSET(Local_0056fd94_r0_2, byte_5, 0x5);
GUEST_OFFSET(Local_0056fd94_r0_2, byte_6, 0x6);
GUEST_OFFSET(Local_0056fd94_r0_2, byte_7, 0x7);
GUEST_OFFSET(Local_0056fd94_r0_2, byte_8, 0x8);

inline constexpr guest::Function<0x002fc934, u32(u32, u32, u32, u32)> Item__copy_b;
inline constexpr guest::Function<0x004e0cb0, u32(u32, u32)> room_grid_address;
inline constexpr guest::Function<0x004e9a28, u32(u32, u32, u32, u32)> RoomGrid__furniture_at;
inline constexpr guest::Function<0x004ea048, u32(u32, u32, u32, u32)> room_furniture_address;
inline constexpr guest::Function<0x007455cc, u32(u32, u32)> RoomFurniture__index_of;

struct __attribute__((packed)) Frame_0056fd94 {
    u8 unknown_0[0x4];  // (not read or written by name)
    u8 byte_4;
    u8 byte_5;
    u8 unknown_6[0xa];  // (not read or written by name)
};
GUEST_OFFSET(Frame_0056fd94, byte_4, 0x4);
GUEST_OFFSET(Frame_0056fd94, byte_5, 0x5);
GUEST_SIZE(Frame_0056fd94, 0x10);

void AcFtr__find_room_slot(gptr<AcFtr> ac_ftr, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_0056fd94> frame;  // the original's stack frame
    u32 r0 = ac_ftr.addr();
    u32 r6 = r0;
    u32 r0_1 = ac_ftr->byte_7b4;
    if (r0_1 < 2u && r0_1 == 1u) {
        gptr<Local_0056fd94_r0_2> r0_2 = gptr<Local_0056fd94_r0_2>(frame.at(0).addr());
        Item__copy_b(r0_2.addr(), r6 + 0x5e4u, r2, r3);  // (from the original)
        r0_2->byte_4 = ac_ftr->byte_5e8;
        r0_2->byte_5 = ac_ftr->byte_5e9;
        r0_2->byte_6 = ac_ftr->byte_5ea;
        r0_2->byte_7 = ac_ftr->byte_5eb;
        u32 r1_1 = ac_ftr->byte_5ec;
        r0_2->byte_8 = u8(r1_1);
        u32 grid = room_grid_address(r0_2.addr(), r1_1);
        u32 r2_2 = frame->byte_5;
        u32 r1_2 = frame->byte_4;
        u32 furniture_2 = RoomGrid__furniture_at(grid, r1_2, r2_2, 0u);
        r1 = guest::cpu()->r[1];
        u32 r4 = furniture_2;
        if (furniture_2 != 0) {
            u32 r0_5 = *gptr<u8>(r4 + 0x7b4u);  // (from the original)
            if (r0_5 >= 2u || r0_5 == 0) {
                u32 r0_6 = room_furniture_address(r0_5, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
                u32 index_3 = RoomFurniture__index_of(r0_6, r4);
                r1 = *gptr<s16>(r6 + 0x60cu);  // (from the original)
                if (index_3 == r1) {
                    u32 r5 = r4 + 0x61cu;  // (from the original)
                    u32 r0_8 = room_furniture_address(index_3, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
                    r0 = RoomFurniture__index_of(r0_8, r6);
                    r3 = guest::cpu()->r[3];
                    r2 = r5 + 0x10u;  // (from the original)
                    r1 = r5;
                    if (r5 < r2) {
                        do {
                            r3 = *gptr<u32>(r1);
                            if (r3 == r0) {
                                goto L_56fed4;
                            }
                            r1 += 4u;
                            guest::preempt();
                        } while (r2 > r1);
                    }
                    u32 cf_1 = *gptr<u32>(r5 + 0x10u) >= 4u;  // (from the original)
                    if (!cf_1) {
                        r4 = r5;
                        cf_1 = r5 >= r2;
                    }
                    if (!cf_1) {
                        do {
                            u32 r0_9 = *gptr<u32>(r4);
                            if (s32(r0_9) < 0) {
                                u32 room_furniture = room_furniture_address(r0_9, r1, r2, r3);
                                u32 index_4 = RoomFurniture__index_of(room_furniture, r6);
                                r1 = guest::cpu()->r[1];
                                *gptr<u32>(r4) = index_4;
                                *gptr<u32>(r5 + 0x10u) = *gptr<u32>(r5 + 0x10u) + 1u;  // (from the original)
                                break;
                            }
                            r4 += 4u;
                            guest::preempt();
                        } while (r4 < r2);
                    }
                }
            }
        }
L_56fed4:;
    }
    guest::cpu()->r[1] = r1;
}

}  // namespace d_0056fd94
GUEST_EXPORT_FRAMED(0x0056fd94, d_0056fd94::AcFtr__find_room_slot, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original
