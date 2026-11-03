// Functions decompiled by tools/decomp (docs/decomp.md), each proved equal to the recompiled original (prove-cpp). The
// names come from games/acnl/names (tools/decomp/names.py); the others are generated (d_<address>::f_<address>,
// Object_<address>_<argument>, word_<offset>) and still to be chosen.
#include "guest/guest.hpp"
#include "core/grid_rect.hpp"
#include "math/matrix34.hpp"
#include "recovered/structs.hpp"

#include <bit>

using guest::gptr;

// f_00520bec: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Builds the global string pool (0x97528c): its three 1024-entry tables, its four buckets and the 1024 bucket flags.
namespace d_00520bec {

inline constexpr u32 string_pool_instance_address = 0x0097528cu;
inline guest::global<u32, 0x0097528c> string_pool_instance;
inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> for_each_element;
inline constexpr guest::Function<0x00520f54, u32(u32)> store_constants_520f54;
inline constexpr guest::Function<0x00521bec, u32(u32)> ProcessState__clear_first_word;

u32 StringPool__construct(u32 string_pool) {
    u32 r2_9 = 0;
    u32 r0_1 = for_each_element(string_pool, 0x521c2cu, 0x14u, 0x400u);  // (from the original)
    u32 r0_3 = for_each_element(r0_1 + 0x5000u, 0x521c10u, 0x10u, 0x400u);  // (from the original)
    u32 r0_5 = for_each_element(r0_3 + 0x4000u, 0x521c10u, 0x10u, 0x400u);  // (from the original)
    ProcessState__clear_first_word(r0_5 + 0x4000u);  // (from the original)
    store_constants_520f54(r0_5 + 0x4004u);  // (from the original)
    store_constants_520f54(r0_5 + 0x400cu);  // (from the original)
    store_constants_520f54(r0_5 + 0x4014u);  // (from the original)
    store_constants_520f54(r0_5 + 0x401cu);  // (from the original)
    u32 r0_12 = for_each_element(r0_5 + 0x4024u, 0x521c10u, 0x10u, 0x400u);  // (from the original)
    store_constants_520f54(r0_12 + 0x4000u);  // (from the original)
    string_pool = r0_12 - 0xd024u;  // (from the original)
    u32 r3 = 0u;
    *gptr<u8>(string_pool + 0x1142cu) = 1;  // (from the original)
    u32 r1 = r3;
    *gptr<u8>((0x1142cu | u32(s32(0x1142cu) >> 0x10)) + string_pool) = u8(r3);  // (from the original)
    do {
        if (r1 >= 0x400u) {  // (from the original)
            u32 r2_8 = r1 & 0x3ffu;  // (from the original)
            if (s32(r2_8) < 0x200) {  // (from the original)
                r2_9 = r2_8 + 0x200u;  // (from the original)
                goto L_520cb4;
            }
        }
        r2_9 = r1 & 0x3ffu;  // (from the original)
L_520cb4:;
        r1 += 1u;
        *gptr<u8>(r2_9 + string_pool + 0x1102cu) = u8(r3);  // (from the original)
        guest::preempt();
    } while (s32(r1) < 0x400);  // (from the original)
    *string_pool_instance = string_pool;
    guest::cpu()->r[1] = string_pool_instance_address;
    return string_pool;
}

}  // namespace d_00520bec
GUEST_EXPORT_FRAMED(0x00520bec, d_00520bec::StringPool__construct, 0x4010);  // pushes {r4, lr} first, as the original

// f_00520ce8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The address of 12-byte entry `index` of the table at 0x975294 (count 0x97529c), or 0.
namespace d_00520ce8 {

inline constexpr u32 resource_table_a_address = 0x00975294u;
inline constexpr u32 resource_table_b_address = 0x0097529cu;
inline guest::global<u32, 0x00975294> resource_table_a;
inline guest::global<u32, 0x0097529c> resource_table_b;

u32 ResourceTable__entry(u32 resource_table) {
    u32 r1_1 = *resource_table_b;
    if (s32(r1_1) <= 0 || resource_table >= r1_1) {
        return 0u;
    }
    return *resource_table_a + resource_table * 0xcu;  // (from the original)
}

}  // namespace d_00520ce8
GUEST_EXPORT(0x00520ce8, d_00520ce8::ResourceTable__entry);

// f_00520d1c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Calls the first handler of entry `index` of the handler table at 0x975298.
namespace d_00520d1c {

inline constexpr u32 handler_table_address = 0x00975298u;
inline guest::global<u32, 0x00975298> handler_table;

u32 HandlerTable__call_first(u32 r0) {
    u32 r1_1 = *handler_table;
    u32 r0_1 = *gptr<u32>(r1_1 + (r0 << 3));
    return guest::call_address<u32>(r0_1, r0_1, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_00520d1c
GUEST_EXPORT(0x00520d1c, d_00520d1c::HandlerTable__call_first);

// f_00520d30: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Calls the second handler of entry `index` of the handler table at 0x975298 with an argument.
namespace d_00520d30 {

inline guest::global<u32, 0x00975298> handler_table;

void HandlerTable__call_second(u32 r0, u32 r1) {
    u32 r2_1 = *gptr<u32>(*handler_table + (r0 << 3) + 4u);
    guest::call_address<u32>(r2_1, r1, r1, r2_1, guest::cpu()->r[3]);
}

}  // namespace d_00520d30
GUEST_EXPORT(0x00520d30, d_00520d30::HandlerTable__call_second);

// f_00520d5c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Puts `node` (links: next +0, previous +4) at the front of the list (head +0, tail +4).
namespace d_00520d5c {

struct __attribute__((packed)) DList {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(DList, word_0, 0x0);
GUEST_OFFSET(DList, word_4, 0x4);

struct __attribute__((packed)) Object_00520d5c_1 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
};
GUEST_OFFSET(Object_00520d5c_1, word_4, 0x4);


void DList__push_front(gptr<DList> list, gptr<Object_00520d5c_1> node) {
    if (node.addr() == 0) {
        return;
    }
    u32 r2_1 = list->word_0;
    if (r2_1 == 0) {
        list->word_4 = node.addr();
    } else {
        *gptr<u32>(r2_1) = node.addr();
        node->word_4 = list->word_0;
    }
    list->word_0 = node.addr();
}

}  // namespace d_00520d5c
GUEST_EXPORT(0x00520d5c, d_00520d5c::DList__push_front);

// f_00520df4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Puts `node` (links: next +0, previous +4) at the back of the list (head +0, tail +4).
namespace d_00520df4 {

struct __attribute__((packed)) DList {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(DList, word_0, 0x0);
GUEST_OFFSET(DList, word_4, 0x4);

struct __attribute__((packed)) Object_00520df4_1 {
    u32 word_0;
};
GUEST_OFFSET(Object_00520df4_1, word_0, 0x0);


void DList__push_back(gptr<DList> list, gptr<Object_00520df4_1> node) {
    if (node.addr() == 0) {
        return;
    }
    u32 r2_1 = list->word_4;
    if (r2_1 == 0) {
        list->word_0 = node.addr();
    } else {
        *gptr<u32>(r2_1 + 4u) = node.addr();
        node->word_0 = list->word_4;
    }
    list->word_4 = node.addr();
}

}  // namespace d_00520df4
GUEST_EXPORT(0x00520df4, d_00520df4::DList__push_back);

// f_00520e24: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Copies the entries of one string pool table to another.
namespace d_00520e24 {

struct __attribute__((packed)) StringPool {
    u32 word_0;
};
GUEST_OFFSET(StringPool, word_0, 0x0);

struct __attribute__((packed)) Object_00520e24_1 {
    u8 unknown_0[0xc];  // (not used here)
    u16 half_c;
};
GUEST_OFFSET(Object_00520e24_1, half_c, 0xc);


void StringPool__copy_entries(gptr<StringPool> string_pool, gptr<Object_00520e24_1> arg1) {
    u32 r0 = string_pool.addr();
    u32 r1 = arg1.addr();
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r5 = r1;
    u32 r4 = r0;
    u32 r6 = string_pool->word_0;
    if (r1 != 0) {
        if (r6 != 0) {
            if (*gptr<u16>(r6 + 0xcu) <= arg1->half_c) {  // (from the original)
                goto L_520e98;
            }
            r0_1 = string_pool->word_0;
            if (r0_1 != 0) {
                *gptr<u32>(r0_1) = r5;
                *gptr<u32>(r5 + 4u) = *gptr<u32>(r4);
                *gptr<u32>(r4) = r5;
                return;
            }
            *gptr<u32>(r4 + 4u) = r5;
            *gptr<u32>(r4) = r5;
            return;
        }
        r0_2 = *gptr<u32>(r4 + 4u);
        if (r0_2 == 0) {
            *gptr<u32>(r4) = r5;
        } else {
            *gptr<u32>(r0_2 + 4u) = r5;
            *gptr<u32>(r5) = *gptr<u32>(r4 + 4u);
        }
        *gptr<u32>(r4 + 4u) = r5;
        return;
L_520e98:;
        if (*gptr<u32>(r6 + 4u) != 0 && *gptr<u16>(*gptr<u32>(r6 + 4u) + 0xcu) <= *gptr<u16>(r5 + 0xcu)) {  // (from the original)
            r6 = *gptr<u32>(r6 + 4u);
            guest::preempt();
            goto L_520e98;
        }
        if (r6 != 0) {
            if (r5 == 0) {
                return;
            }
            *gptr<u32>(r5 + 4u) = *gptr<u32>(r6 + 4u);
            *gptr<u32>(r5) = r6;
            *gptr<u32>(r6 + 4u) = r5;
            u32 r0_3 = *gptr<u32>(r5 + 4u);
            if (r0_3 != 0) {
                *gptr<u32>(r0_3) = r5;
                return;
            }
            *gptr<u32>(r4 + 4u) = r5;
            return;
        }
        if (r5 == 0) {
            return;
        }
        r0_1 = *gptr<u32>(r4);
        if (r0_1 == 0) {
            *gptr<u32>(r4 + 4u) = r5;
            *gptr<u32>(r4) = r5;
            return;
        }
        *gptr<u32>(r0_1) = r5;
        *gptr<u32>(r5 + 4u) = *gptr<u32>(r4);
        *gptr<u32>(r4) = r5;
        return;
    }
}

}  // namespace d_00520e24
GUEST_EXPORT_FRAMED(0x00520e24, d_00520e24::StringPool__copy_entries, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_00521000: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Builds an object with the parameter set at 0x8a3af8 (00520f7c).
namespace d_00521000 {

struct __attribute__((packed)) Local_00521000_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_00521000_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_00521000_ea_1, word_4, 0x4);

inline guest::global<u32, 0x008a3af8> global_008a3af8;
inline guest::global<u32, 0x008a3afc> global_008a3afc;
inline guest::global<u32, 0x008a3b00> global_008a3b00;
inline guest::global<u32, 0x008a3b04> global_008a3b04;
inline guest::global<u32, 0x008a3b08> global_008a3b08;
inline guest::global<u32, 0x008a3b0c> global_008a3b0c;
inline constexpr guest::Function<0x00520f7c, u32(u32, u32, u32, u32)> call_member_function;

struct __attribute__((packed)) Frame_00521000 {
    u32 word_0;
    u8 unknown_4[0x8];  // (not read or written by name)
};
GUEST_OFFSET(Frame_00521000, word_0, 0x0);
GUEST_SIZE(Frame_00521000, 0xc);

u32 construct_with_params_8a3af8() {
    guest::StackFrameOf<Frame_00521000> frame;  // the original's stack frame
    u32 r2_1 = *global_008a3b08;
    u32 r3_1 = *global_008a3b0c;
    gptr<Local_00521000_ea_1> ea_1 = gptr<Local_00521000_ea_1>(frame.at(4).addr());
    ea_1->word_0 = r2_1;
    ea_1->word_4 = r3_1;
    frame->word_0 = *global_008a3b04;
    call_member_function(guest::cpu()->r[0], *global_008a3af8, *global_008a3afc, *global_008a3b00);
    return guest::cpu()->r[0];
}

}  // namespace d_00521000
GUEST_EXPORT_FRAMED(0x00521000, d_00521000::construct_with_params_8a3af8, 0x4000);  // pushes {lr} first, as the original

// f_00521030: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Builds an object with the parameter set at 0x8a3b10 (00520f7c).
namespace d_00521030 {

struct __attribute__((packed)) Local_00521030_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_00521030_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_00521030_ea_1, word_4, 0x4);

inline guest::global<u32, 0x008a3b10> global_008a3b10;
inline guest::global<u32, 0x008a3b14> global_008a3b14;
inline guest::global<u32, 0x008a3b18> global_008a3b18;
inline guest::global<u32, 0x008a3b1c> global_008a3b1c;
inline guest::global<u32, 0x008a3b20> global_008a3b20;
inline guest::global<u32, 0x008a3b24> global_008a3b24;
inline constexpr guest::Function<0x00520f7c, u32(u32, u32, u32, u32)> call_member_function;

struct __attribute__((packed)) Frame_00521030 {
    u32 word_0;
    u8 unknown_4[0x8];  // (not read or written by name)
};
GUEST_OFFSET(Frame_00521030, word_0, 0x0);
GUEST_SIZE(Frame_00521030, 0xc);

u32 construct_with_params_8a3b10() {
    guest::StackFrameOf<Frame_00521030> frame;  // the original's stack frame
    u32 r2_1 = *global_008a3b20;
    u32 r3_1 = *global_008a3b24;
    gptr<Local_00521030_ea_1> ea_1 = gptr<Local_00521030_ea_1>(frame.at(4).addr());
    ea_1->word_0 = r2_1;
    ea_1->word_4 = r3_1;
    frame->word_0 = *global_008a3b1c;
    call_member_function(guest::cpu()->r[0], *global_008a3b10, *global_008a3b14, *global_008a3b18);
    return guest::cpu()->r[0];
}

}  // namespace d_00521030
GUEST_EXPORT_FRAMED(0x00521030, d_00521030::construct_with_params_8a3b10, 0x4000);  // pushes {lr} first, as the original

// f_00521070: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Builds an object with the parameter set at 0x8a3b28 (00520f7c).
namespace d_00521070 {

struct __attribute__((packed)) Local_00521070_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_00521070_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_00521070_ea_1, word_4, 0x4);

inline guest::global<u32, 0x008a3b28> global_008a3b28;
inline guest::global<u32, 0x008a3b2c> global_008a3b2c;
inline guest::global<u32, 0x008a3b30> global_008a3b30;
inline guest::global<u32, 0x008a3b34> global_008a3b34;
inline guest::global<u32, 0x008a3b38> global_008a3b38;
inline guest::global<u32, 0x008a3b3c> global_008a3b3c;
inline constexpr guest::Function<0x00520f7c, u32(u32, u32, u32, u32)> call_member_function;

struct __attribute__((packed)) Frame_00521070 {
    u32 word_0;
    u8 unknown_4[0x8];  // (not read or written by name)
};
GUEST_OFFSET(Frame_00521070, word_0, 0x0);
GUEST_SIZE(Frame_00521070, 0xc);

void construct_with_params_8a3b28() {
    guest::StackFrameOf<Frame_00521070> frame;  // the original's stack frame
    u32 r2_1 = *global_008a3b38;
    u32 r3_1 = *global_008a3b3c;
    gptr<Local_00521070_ea_1> ea_1 = gptr<Local_00521070_ea_1>(frame.at(4).addr());
    ea_1->word_0 = r2_1;
    ea_1->word_4 = r3_1;
    frame->word_0 = *global_008a3b34;
    call_member_function(guest::cpu()->r[0], *global_008a3b28, *global_008a3b2c, *global_008a3b30);
}

}  // namespace d_00521070
GUEST_EXPORT_FRAMED(0x00521070, d_00521070::construct_with_params_8a3b28, 0x4000);  // pushes {lr} first, as the original

// f_005210a8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Releases a string from the global string pool.
namespace d_005210a8 {

inline constexpr guest::Function<0x0051fe30, u32(u32, u32, u32, u32)> read_u32_0x0097528c_;
inline constexpr guest::Function<0x005204c8, u32(u32, u32, u32, u32)> MessageHandle__close_if_open;

u32 StringPool__release(u32 string_pool, u32 r1) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 r0_1 = read_u32_0x0097528c_(string_pool, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    frame.release();
    return MessageHandle__close_if_open(r0_1, string_pool, guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_005210a8
GUEST_EXPORT(0x005210a8, d_005210a8::StringPool__release);

// f_00521a48: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Builds an object with the parameter set at 0x8a3b40 (00520f7c).
namespace d_00521a48 {

struct __attribute__((packed)) Local_00521a48_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_00521a48_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_00521a48_ea_1, word_4, 0x4);

inline guest::global<u32, 0x008a3b40> global_008a3b40;
inline guest::global<u32, 0x008a3b44> global_008a3b44;
inline guest::global<u32, 0x008a3b48> global_008a3b48;
inline guest::global<u32, 0x008a3b4c> global_008a3b4c;
inline guest::global<u32, 0x008a3b50> global_008a3b50;
inline guest::global<u32, 0x008a3b54> global_008a3b54;
inline constexpr guest::Function<0x00520f7c, u32(u32, u32, u32, u32)> call_member_function;

struct __attribute__((packed)) Frame_00521a48 {
    u32 word_0;
    u8 unknown_4[0x8];  // (not read or written by name)
};
GUEST_OFFSET(Frame_00521a48, word_0, 0x0);
GUEST_SIZE(Frame_00521a48, 0xc);

void construct_with_params_8a3b40() {
    guest::StackFrameOf<Frame_00521a48> frame;  // the original's stack frame
    u32 r2_1 = *global_008a3b50;
    u32 r3_1 = *global_008a3b54;
    gptr<Local_00521a48_ea_1> ea_1 = gptr<Local_00521a48_ea_1>(frame.at(4).addr());
    ea_1->word_0 = r2_1;
    ea_1->word_4 = r3_1;
    frame->word_0 = *global_008a3b4c;
    call_member_function(guest::cpu()->r[0], *global_008a3b40, *global_008a3b44, *global_008a3b48);
}

}  // namespace d_00521a48
GUEST_EXPORT_FRAMED(0x00521a48, d_00521a48::construct_with_params_8a3b40, 0x4000);  // pushes {lr} first, as the original

// f_00521a8c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00521a8c {

inline constexpr u32 vtable_oml__framework__Process = 0x009036c4u;
inline constexpr guest::Function<0x0051fe30, u32(u32, u32)> read_u32_0x0097528c_;
inline constexpr guest::Function<0x00747944, u32(u32)> HashTable__next_id;

u32 construct_process(gptr<oml__framework__Process> process) {
    process->word_8 = 0;
    process->vtable = vtable_oml__framework__Process;
    process->word_4 = ~0u;
    process->half_c = 0;
    process->byte_e = 0;
    process->byte_f = 0;
    process->byte_10 = 0;
    process->byte_11 = 0;
    process->byte_12 = 0;
    u32 r0_1 = read_u32_0x0097528c_(0u, vtable_oml__framework__Process);
    u32 r0_2 = HashTable__next_id(r0_1);
    process->word_4 = r0_2;
    return process.addr();
}

}  // namespace d_00521a8c
GUEST_EXPORT_FRAMED(0x00521a8c, d_00521a8c::construct_process, 0x4010);  // pushes {r4, lr} first, as the original

// f_00521ae4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Appends `node` to `parent`'s children (first child +8, next sibling +0x10, previous +0xc), or to the roots (`roots`)
// without a parent.
namespace d_00521ae4 {

struct __attribute__((packed)) Object_00521ae4_1 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
    u8 unknown_8[0x4];  // (not used here)
    u32 word_c;
};
GUEST_OFFSET(Object_00521ae4_1, word_4, 0x4);
GUEST_OFFSET(Object_00521ae4_1, word_c, 0xc);

struct __attribute__((packed)) Parent {
    u8 unknown_0[0x8];  // (not used here)
    u32 word_8;
};
GUEST_OFFSET(Parent, word_8, 0x8);

struct __attribute__((packed)) Local_00521ae4_r0_1 {
    u8 unknown_0[0x10];  // (not used here)
    u32 word_10;
};
GUEST_OFFSET(Local_00521ae4_r0_1, word_10, 0x10);

struct __attribute__((packed)) Local_00521ae4_r2_1 {
    u8 unknown_0[0x10];  // (not used here)
    u32 word_10;
};
GUEST_OFFSET(Local_00521ae4_r2_1, word_10, 0x10);


void Tree__append_child(u32 tree, gptr<Object_00521ae4_1> node, gptr<Parent> parent) {
    u32 r1 = node.addr();
    u32 r2 = parent.addr();
    u32 r0_2 = 0;
    u32 r2_2 = 0;
    if (r1 == 0) {
        return;
    }
    if (r2 != 0) {
        node->word_4 = r2;
        gptr<Local_00521ae4_r0_1> r0_1 = gptr<Local_00521ae4_r0_1>(parent->word_8);
        if (r0_1.addr() == 0) {
            parent->word_8 = r1;
            return;
        }
        r2 = r0_1->word_10;
        if (r2 == 0) {
            r0_1->word_10 = r1;
            node->word_c = r0_1.addr();
            return;
        }
        do {
            r0_2 = r2;
            r2 = *gptr<u32>(r2 + 0x10u);  // (from the original)
            guest::preempt();
        } while (r2 != 0);
        *gptr<u32>(r0_2 + 0x10u) = r1;  // (from the original)
        node->word_c = r0_2;
        return;
    }
    gptr<Local_00521ae4_r2_1> r2_1 = gptr<Local_00521ae4_r2_1>(*gptr<u32>(tree));
    if (r2_1.addr() == 0) {
        *gptr<u32>(tree) = r1;
        return;
    }
    tree = r2_1->word_10;
    if (tree == 0) {
        r2_1->word_10 = r1;
        node->word_c = r2_1.addr();
        return;
    }
    do {
        r2_2 = tree;
        tree = *gptr<u32>(tree + 0x10u);  // (from the original)
        guest::preempt();
    } while (tree != 0);
    *gptr<u32>(r2_2 + 0x10u) = r1;  // (from the original)
    node->word_c = r2_2;
}

}  // namespace d_00521ae4
GUEST_EXPORT(0x00521ae4, d_00521ae4::Tree__append_child);

// f_00521ddc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The current viewport's rectangle (of the first render target when it has one), or a static empty one when the
// error/EULA screen is up.
namespace d_00521ddc {

struct __attribute__((packed)) Local_00521ddc_r0_3 {
    u8 unknown_0[0xd0];  // (not used here)
    u32 word_d0;
    u8 unknown_d4[0x4];  // (not used here)
    u32 word_d8;
};
GUEST_OFFSET(Local_00521ddc_r0_3, word_d0, 0xd0);
GUEST_OFFSET(Local_00521ddc_r0_3, word_d8, 0xd8);

inline constexpr u32 viewport_rect_guard_address = 0x00953af4u;
inline constexpr u32 viewport_rect_address = 0x00953b04u;
inline constexpr u32 global_009752c4_address = 0x009752c4u;
inline constexpr u32 current_viewport_address = 0x009752d4u;
inline guest::global<u32, 0x00953af4> viewport_rect_guard;
inline guest::global<u32, 0x00953b04> viewport_rect;
inline guest::global<u32, 0x00953b08> global_00953b08;
inline guest::global<u32, 0x009752d4> current_viewport;
inline constexpr guest::Function<0x002fe7dd, u32(u32)> static_guard_acquire;
inline constexpr guest::Function<0x005ce6dc, u32(u32, u32)> err_eula_is_idle_with_byte_fac;

u32 current_viewport_rect(u32 r0, u32 r1, float S0) {
    u32 r0_1 = err_eula_is_idle_with_byte_fac(r0, r1);
    if (r0_1 != 0) {
        if ((*viewport_rect_guard & 1u) != 0) {
            return viewport_rect_address;
        }
        u32 first_time = static_guard_acquire(viewport_rect_guard_address);
        if (first_time == 0) {
            return viewport_rect_address;
        }
        float S0_3 = -3.4028235e38f;
        *viewport_rect = std::bit_cast<u32>(S0_3);
        *global_00953b08 = std::bit_cast<u32>(S0_3);
        guest::cpu()->s[0] = S0_3;
        return viewport_rect_address;
    }
    gptr<Local_00521ddc_r0_3> r0_3 = gptr<Local_00521ddc_r0_3>(*current_viewport);
    u32 r1_3 = r0_3->word_d0;
    u32 r0_4 = r1_3 >= 0u && r1_3 != 0 ? *gptr<u32>(r0_3->word_d8) : 0u;
    u32 r1_4 = *gptr<u32>(r0_4 + 0x10u);  // (from the original)
    guest::cpu()->r[1] = r1_4;
    return (r1_4 & 1u) == 0 ? global_009752c4_address : r0_4 + 0x114u;  // (from the original)
}

}  // namespace d_00521ddc
GUEST_EXPORT_FRAMED(0x00521ddc, d_00521ddc::current_viewport_rect, 0x4010);  // pushes {r4, lr} first, as the original

// f_00521e74: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The current render target's scale (+0x11c), or a static zero when the error/EULA screen is up.
namespace d_00521e74 {

struct __attribute__((packed)) Local_00521e74_r0_3 {
    u8 unknown_0[0xd0];  // (not used here)
    u32 word_d0;
    u8 unknown_d4[0x4];  // (not used here)
    u32 word_d8;
};
GUEST_OFFSET(Local_00521e74_r0_3, word_d0, 0xd0);
GUEST_OFFSET(Local_00521e74_r0_3, word_d8, 0xd8);

inline constexpr u32 viewport_scale_guard_address = 0x00953af0u;
inline constexpr u32 viewport_scale_address = 0x00953afcu;
inline constexpr u32 current_viewport_address = 0x009752d4u;
inline guest::global<u32, 0x00953af0> viewport_scale_guard;
inline guest::global<u32, 0x00953afc> viewport_scale;
inline guest::global<u32, 0x00953b00> global_00953b00;
inline guest::global<u32, 0x009752d4> current_viewport;
inline constexpr guest::Function<0x002fe7dd, u32(u32)> static_guard_acquire;
inline constexpr guest::Function<0x005ce6dc, u32(u32, u32)> err_eula_is_idle_with_byte_fac;

u32 current_viewport_scale(u32 r0, u32 r1, float S0) {
    u32 r0_1 = err_eula_is_idle_with_byte_fac(r0, r1);
    if (r0_1 != 0) {
        if ((*viewport_scale_guard & 1u) != 0) {
            return viewport_scale_address;
        }
        u32 first_time = static_guard_acquire(viewport_scale_guard_address);
        if (first_time == 0) {
            return viewport_scale_address;
        }
        float S0_3 = 0.0f;
        *viewport_scale = std::bit_cast<u32>(S0_3);
        *global_00953b00 = std::bit_cast<u32>(S0_3);
        guest::cpu()->s[0] = S0_3;
        return viewport_scale_address;
    }
    gptr<Local_00521e74_r0_3> r0_3 = gptr<Local_00521e74_r0_3>(*current_viewport);
    u32 r1_3 = r0_3->word_d0;
    u32 r0_4 = (r1_3 >= 0u && r1_3 != 0 ? *gptr<u32>(r0_3->word_d8) : 0u) + 0x11cu;  // (from the original)
    guest::cpu()->r[1] = r1_3;
    return r0_4;
}

}  // namespace d_00521e74
GUEST_EXPORT_FRAMED(0x00521e74, d_00521e74::current_viewport_scale, 0x4010);  // pushes {r4, lr} first, as the original

// f_00521ef8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The current render target's size (+0x14 when set), or a static default when the error/EULA screen is up.
namespace d_00521ef8 {

struct __attribute__((packed)) Local_00521ef8_r0_3 {
    u8 unknown_0[0xd0];  // (not used here)
    u32 word_d0;
    u8 unknown_d4[0x4];  // (not used here)
    u32 word_d8;
};
GUEST_OFFSET(Local_00521ef8_r0_3, word_d0, 0xd0);
GUEST_OFFSET(Local_00521ef8_r0_3, word_d8, 0xd8);

inline constexpr u32 viewport_size_guard_address = 0x00953af8u;
inline constexpr u32 viewport_size_address = 0x00953b0cu;
inline constexpr u32 global_009752cc_address = 0x009752ccu;
inline constexpr u32 current_viewport_address = 0x009752d4u;
inline guest::global<u32, 0x00953af8> viewport_size_guard;
inline guest::global<u32, 0x00953b0c> viewport_size;
inline guest::global<u32, 0x00953b10> global_00953b10;
inline guest::global<u32, 0x009752d4> current_viewport;
inline constexpr guest::Function<0x002fe7dd, u32(u32)> static_guard_acquire;
inline constexpr guest::Function<0x005ce6dc, u32(u32)> err_eula_is_idle_with_byte_fac;

u32 current_viewport_size(u32 r0) {
    u32 r0_1 = err_eula_is_idle_with_byte_fac(r0);
    if (r0_1 != 0) {
        if ((*viewport_size_guard & 1u) != 0) {
            return viewport_size_address;
        }
        u32 first_time = static_guard_acquire(viewport_size_guard_address);
        if (first_time == 0) {
            return viewport_size_address;
        }
        *viewport_size = 0x80000000;  // (from the original)
        *global_00953b10 = 0x80000000;  // (from the original)
        return viewport_size_address;
    }
    gptr<Local_00521ef8_r0_3> r0_3 = gptr<Local_00521ef8_r0_3>(*current_viewport);
    u32 r1_1 = r0_3->word_d0;
    u32 r0_4 = r1_1 >= 0u && r1_1 != 0 ? *gptr<u32>(r0_3->word_d8) : 0u;
    return (*gptr<u32>(r0_4 + 0x10u) & 1u) == 0 ? global_009752cc_address : r0_4 + 0x14u;  // (from the original)
}

}  // namespace d_00521ef8
GUEST_EXPORT_FRAMED(0x00521ef8, d_00521ef8::current_viewport_size, 0x4010);  // pushes {r4, lr} first, as the original

// f_00522168: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The number of characters of line `index` (from its start to the next line's, without the final one).
namespace d_00522168 {

struct __attribute__((packed)) LineTable {
    u8 unknown_0[0x8];  // (not used here)
    u32 word_8;
};
GUEST_OFFSET(LineTable, word_8, 0x8);

inline constexpr guest::Function<0x005221d8, u32(u32, u32, u32, u32)> u16_table_entry;

u32 LineTable__line_length(gptr<LineTable> line_table, u32 r1, u32 r2, u32 r3) {
    u32 r1_2 = 0;
    u32 r0_4 = 0;
    u32 r0_1 = u16_table_entry(line_table.addr(), r1, r2, r3);
    u32 r0_2 = u16_table_entry(line_table.addr(), r1 + 1u, guest::cpu()->r[2], guest::cpu()->r[3]);
    if (s32(r0_2) >= 0) {
        r1_2 = r0_2 - 1u;
    } else {
        u32 r0_3 = u16_table_entry(line_table.addr(), r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1_2 = s32(r0_3) >= 0 ? *gptr<u32>(line_table->word_8 + 8u) : ~0u;
    }
    if (r0_1 + 1u == 0) {
        r0_4 = ~0u;
    } else {
        r0_4 = r1_2 - r0_1 + 1u;
        if (*gptr<u32>(line_table->word_8 + 8u) == r1_2) {
            r0_4 -= 1u;
        }
    }
    guest::cpu()->r[1] = r1_2;
    return r0_4;
}

}  // namespace d_00522168
GUEST_EXPORT_FRAMED(0x00522168, d_00522168::LineTable__line_length, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_005221d8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Entry `index` of the 16-bit table at +word_c (filled up to it first when it lies past +word_10); -1 for an index out
// of range or an empty entry past the first.
namespace d_005221d8 {

struct __attribute__((packed)) Object_005221d8_0 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
    u8 unknown_8[0x4];  // (not used here)
    u32 word_c;
    u32 word_10;
};
GUEST_OFFSET(Object_005221d8_0, word_4, 0x4);
GUEST_OFFSET(Object_005221d8_0, word_c, 0xc);
GUEST_OFFSET(Object_005221d8_0, word_10, 0x10);

inline constexpr guest::Function<0x005224e8, u32(u32, u32, u32, u32)> TextEdit__layout_from;

u32 u16_table_entry(gptr<Object_005221d8_0> table, u32 r1) {
    u32 r0_1 = 0;
    u32 index = r1;
    if (s32(r1) >= 0) {
        r1 = table->word_4 - 1u;
        if (s32(r1) >= s32(index)) {
            if (s32(index) >= s32(table->word_10)) {
                TextEdit__layout_from(table.addr(), index, guest::cpu()->r[2], guest::cpu()->r[3]);
            }
            r1 = table->word_c;
            r0_1 = gptr<u16>(r1)[index];
            if (!(index == 0 || s32(r0_1) > 0)) {
                r0_1 = ~0u;
            }
        } else {
            r0_1 = ~0u;
        }
    } else {
        r0_1 = ~0u;
    }
    guest::cpu()->r[1] = r1;
    return r0_1;
}

}  // namespace d_005221d8
GUEST_EXPORT_FRAMED(0x005221d8, d_005221d8::u16_table_entry, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_005224bc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Entry `index` of the 16-bit table at +word_c (filled up to it first when it lies past +word_10).
namespace d_005224bc {

struct __attribute__((packed)) Object_005224bc_0 {
    u8 unknown_0[0xc];  // (not used here)
    u32 word_c;
    u32 word_10;
};
GUEST_OFFSET(Object_005224bc_0, word_c, 0xc);
GUEST_OFFSET(Object_005224bc_0, word_10, 0x10);

inline constexpr guest::Function<0x005224e8, u32(u32, u32, u32, u32)> TextEdit__layout_from;

u32 u16_table_entry_2(gptr<Object_005224bc_0> table, u32 index) {
    if (s32(table->word_10) <= s32(index)) {
        TextEdit__layout_from(table.addr(), index, guest::cpu()->r[2], guest::cpu()->r[3]);
    }
    return gptr<u16>(table->word_c)[index];
}

}  // namespace d_005224bc
GUEST_EXPORT_FRAMED(0x005224bc, d_005224bc::u16_table_entry_2, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_00522ae0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00522ae0 {

struct __attribute__((packed)) TextEdit {
    u8 unknown_0[0x14];  // (not used here)
    u32 position;
    u8 unknown_18[0x4];  // (not used here)
    u32 position_1c;
    u8 byte_20;
    u8 unknown_21[0x6f];  // (not used here)
    u32 word_90;
};
GUEST_OFFSET(TextEdit, position, 0x14);
GUEST_OFFSET(TextEdit, position_1c, 0x1c);
GUEST_OFFSET(TextEdit, byte_20, 0x20);
GUEST_OFFSET(TextEdit, word_90, 0x90);

inline constexpr guest::Function<0x0052296c, u32(u32, u32)> TextEdit__commit_input;
inline constexpr guest::Function<0x005234d8, u32(u32, u32, u32, u32)> TextEdit__finish;

u32 TextEdit__clear_selection(gptr<TextEdit> edit, u32 collapse, u32 r2, u32 r3) {
    TextEdit__finish(edit.addr(), 1u, r2, r3);
    u32 r0_1 = TextEdit__commit_input(edit.addr(), 0u);
    u32 r1_1 = guest::cpu()->r[1];
    if (collapse != 0) {
        r1_1 = edit->position;
        edit->byte_20 = 0;
        edit->position_1c = r1_1;
        edit->word_90 = ~0u;
    }
    guest::cpu()->r[1] = r1_1;
    return r0_1;
}

}  // namespace d_00522ae0
GUEST_EXPORT_FRAMED(0x00522ae0, d_00522ae0::TextEdit__clear_selection, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_00523020: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Moves the cursor to `position` (kept within the text); with `keep` the selection starts there too.
namespace d_00523020 {

struct __attribute__((packed)) TextEdit {
    u8 unknown_0[0x8];  // (not used here)
    u32 word_8;
    u8 unknown_c[0x8];  // (not used here)
    u32 word_14;
    u32 word_18;
    u32 word_1c;
    u8 byte_20;
    u8 unknown_21[0x6f];  // (not used here)
    u32 word_90;
};
GUEST_OFFSET(TextEdit, word_8, 0x8);
GUEST_OFFSET(TextEdit, word_14, 0x14);
GUEST_OFFSET(TextEdit, word_18, 0x18);
GUEST_OFFSET(TextEdit, word_1c, 0x1c);
GUEST_OFFSET(TextEdit, byte_20, 0x20);
GUEST_OFFSET(TextEdit, word_90, 0x90);

inline constexpr guest::Function<0x0052296c, u32(u32, u32)> TextEdit__commit_input;
inline constexpr guest::Function<0x005234d8, u32(u32, u32, u32, u32)> TextEdit__finish;

u32 TextEdit__set_cursor(gptr<TextEdit> edit, u32 r1, u32 r2, u32 keep) {
    u32 position = r1;
    u32 r7_1 = ~0u;
    if (r2 != 0) {
        edit->word_18 = r7_1;
    }
    TextEdit__finish(edit.addr(), 1u, r2, keep);
    TextEdit__finish(edit.addr(), 1u, guest::cpu()->r[2], guest::cpu()->r[3]);
    TextEdit__commit_input(edit.addr(), 0u);
    u32 r0_1 = edit->word_8;
    if (s32(position) < 0) {
        position = 0u;
    }
    if (s32(r0_1) < s32(position)) {
        position = r0_1;
    }
    u32 r0_2 = keep == 0;
    edit->word_14 = position;
    edit->byte_20 = u8(r0_2);
    if (keep != 0) {
        edit->word_1c = position;
        edit->word_90 = r7_1;
    }
    return r0_2;
}

}  // namespace d_00523020
GUEST_EXPORT_FRAMED(0x00523020, d_00523020::TextEdit__set_cursor, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_005235e8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Deletes the selected text (between the cursor and the anchor) and collapses the selection.
namespace d_005235e8 {

struct __attribute__((packed)) TextEdit {
    u8 unknown_0[0x14];  // (not used here)
    u32 word_14;
    u8 unknown_18[0x4];  // (not used here)
    u32 word_1c;
};
GUEST_OFFSET(TextEdit, word_14, 0x14);
GUEST_OFFSET(TextEdit, word_1c, 0x1c);

struct __attribute__((packed)) Local_005235e8_ea_3 {
    u32 word_0;
    u8 unknown_4[0x70];  // (not used here)
    u32 word_74;
};
GUEST_OFFSET(Local_005235e8_ea_3, word_0, 0x0);
GUEST_OFFSET(Local_005235e8_ea_3, word_74, 0x74);

inline constexpr guest::Function<0x005230d4, u32(u32, u32, u32, u32)> TextEdit__delete_range;

void TextEdit__delete_selection(gptr<TextEdit> edit) {
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r3_2 = 0;
    u32 r1_1 = edit->word_1c;
    u32 r0_1 = edit->word_14;
    if (s32(r1_1) <= s32(r0_1)) {
        r2_1 = r0_1;
        r3_1 = r1_1;
    } else {
        r2_1 = r1_1;
        r3_1 = r0_1;
    }
    u32 r2_2 = r2_1 - r3_1;
    if (s32(r2_2) > 0) {
        if (r1_1 != r0_1 && s32(r1_1) >= s32(r0_1)) {
            r2_2 = r1_1;
        }
        if (s32(r1_1) <= s32(r0_1)) {
            r3_2 = r1_1;
            r2_2 = r0_1;
        } else {
            r3_2 = r0_1;
            r1_1 = r0_1;
        }
        TextEdit__delete_range(edit.addr(), r1_1, r2_2 - r3_2, r3_2);
    }
    u32 r0_2 = *gptr<u32>(edit.addr() + 0x14u);  // (from the original)
    *gptr<u8>(edit.addr() + 0x20u) = 0;  // (from the original)
    gptr<Local_005235e8_ea_3> ea_3 = gptr<Local_005235e8_ea_3>(edit.addr() + 0x1cu);  // (from the original)
    ea_3->word_0 = r0_2;
    u32 r1_2 = ~0u;
    ea_3->word_74 = r1_2;
    guest::cpu()->r[1] = r1_2;
}

}  // namespace d_005235e8
GUEST_EXPORT_FRAMED(0x005235e8, d_005235e8::TextEdit__delete_selection, 0x4010);  // pushes {r4, lr} first, as the original

// f_00523658: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Replaces the edit's text with `text` (`length` characters, all of it when negative, at most the capacity), the
// cursor and selection at 0.
namespace d_00523658 {

struct __attribute__((packed)) TextEdit {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u32 word_18;
    u32 word_1c;
    u8 unknown_20[0x4];  // (not used here)
    u32 word_24;
    u32 word_28;
    u8 unknown_2c[0x6a];  // (not used here)
    u8 byte_96;
};
GUEST_OFFSET(TextEdit, word_4, 0x4);
GUEST_OFFSET(TextEdit, word_8, 0x8);
GUEST_OFFSET(TextEdit, word_c, 0xc);
GUEST_OFFSET(TextEdit, word_10, 0x10);
GUEST_OFFSET(TextEdit, word_14, 0x14);
GUEST_OFFSET(TextEdit, word_18, 0x18);
GUEST_OFFSET(TextEdit, word_1c, 0x1c);
GUEST_OFFSET(TextEdit, word_24, 0x24);
GUEST_OFFSET(TextEdit, word_28, 0x28);
GUEST_OFFSET(TextEdit, byte_96, 0x96);

inline constexpr guest::Function<0x00100835, u32(u32)> string16_length;
inline constexpr guest::Function<0x0010181d, u32(u32, u32, u32)> wmemcpy;
inline constexpr guest::Function<0x00522074, u32(u32, u32, u32)> TextEdit__line_of;
inline constexpr guest::Function<0x005234d8, u32(u32, u32, u32, u32)> TextEdit__finish;

void TextEdit__set_text(gptr<TextEdit> edit, u32 text, u32 r2) {
    edit->word_18 = ~0u;
    u32 length = r2;
    TextEdit__finish(edit.addr(), 1u, r2, guest::cpu()->r[3]);
    if (text != 0) {
        if (s32(length) < 0) {
            u32 r0_1 = string16_length(text);
            length = r0_1;
        }
        u32 r0_2 = edit->word_c;
        if (s32(r0_2) < s32(length)) {
            length = r0_2;
        }
        wmemcpy(edit->word_10, text, length);
        *gptr<u16>(edit->word_10 + (length << 1)) = 0;
        edit->word_8 = length;
    } else {
        *gptr<u16>(edit->word_10) = 0;
        edit->word_8 = 0;
    }
    edit->word_24 = 0;
    edit->word_28 = 0;
    edit->word_14 = 0;
    edit->word_1c = 0;
    u32 r5_2 = edit->word_4;
    u32 line_2 = TextEdit__line_of(r5_2, 0u, 0u);
    *gptr<u32>(r5_2 + 0x10u) = line_2;  // (from the original)
    edit->byte_96 = 1;
}

}  // namespace d_00523658
GUEST_EXPORT_FRAMED(0x00523658, d_00523658::TextEdit__set_text, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_0052370c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Handles the delete key in a text edit: deletes the selection or the character, with its sound.
namespace d_0052370c {

struct __attribute__((packed)) TextEdit {
    u8 unknown_0[0x14];  // (not used here)
    u32 word_14;
    u32 word_18;
    u32 word_1c;
    u8 byte_20;
    u8 unknown_21[0x73];  // (not used here)
    u8 byte_94;
};
GUEST_OFFSET(TextEdit, word_14, 0x14);
GUEST_OFFSET(TextEdit, word_18, 0x18);
GUEST_OFFSET(TextEdit, word_1c, 0x1c);
GUEST_OFFSET(TextEdit, byte_20, 0x20);
GUEST_OFFSET(TextEdit, byte_94, 0x94);

inline constexpr guest::Function<0x004dac10, u32(u32, u32, u32, u32)> Pane__set_size_by_scale;
inline constexpr guest::Function<0x005230d4, u32(u32, u32, u32)> TextEdit__delete_range;
inline constexpr guest::Function<0x005234d8, u32(u32, u32, u32, u32)> TextEdit__finish;
inline constexpr guest::Function<0x005235e8, u32(u32, u32, u32)> TextEdit__delete_selection;
inline constexpr guest::Function<0x0058d3b4, u32(u32, u32, u32)> stop_current_sound_effect;

u32 TextEdit__handle_delete(gptr<TextEdit> text_edit, u32 r1, u32 r2) {
    u32 r0 = text_edit.addr();
    u32 r7_1 = 0;
    u32 r0_2 = 0;
    u32 edit = r0;
    u32 r5_1 = r1;
    u32 r8 = 0x10003dbu;  // (from the original)
    if (text_edit->byte_94 != 1u || text_edit->byte_20 != 0) {
        r7_1 = ~0u;
        text_edit->word_18 = r7_1;
        TextEdit__finish(edit, 0u, r2, guest::cpu()->r[3]);
        r2 = guest::cpu()->r[2];
        if (text_edit->byte_20 == 0) {
            goto L_5237ac;
        }
        u32 r0_1 = text_edit->word_1c;
        u32 r1_1 = text_edit->word_14;
        if (r0_1 != r1_1 && s32(r0_1) >= s32(r1_1)) {
            r2 = r0_1;
        }
        if (s32(r0_1) <= s32(r1_1)) {
            r2 = r1_1;
        } else {
            r0_1 = r1_1;
        }
        if (s32(r2 - r0_1) <= 0) {
            goto L_5237ac;
        }
        TextEdit__delete_selection(edit, r1_1, r2);
        goto L_5237e4;
    }
    if (r1 != 0) {
        guest::cpu()->r[1] = r1;
        return 0u;
    }
L_52378c:;
    r0_2 = *gptr<u32>(edit + 0x9cu);  // (from the original)
    Pane__set_size_by_scale(r0_2, r1, r2, guest::cpu()->r[3]);
    stop_current_sound_effect(r8, guest::cpu()->r[1], r2);
    r1 = guest::cpu()->r[1];
    return 0u;
L_5237ac:;
    r1 = *gptr<u32>(edit + 0x14u);  // (from the original)
    if (s32(r1) > 0) {
        TextEdit__delete_range(edit, r1 - 1u, 1u);
        goto L_5237e4;
    }
    *gptr<u8>(edit + 0x20u) = 0;  // (from the original)
    *gptr<u32>(edit + 0x1cu) = r1;  // (from the original)
    *gptr<u32>(edit + 0x90u) = r7_1;  // (from the original)
    if (r5_1 == 0) {
        guest::preempt();
        goto L_52378c;
    }
    guest::cpu()->r[1] = r1;
    return 0u;
L_5237e4:;
    *gptr<u32>(edit + 0x1cu) = *gptr<u32>(edit + 0x14u);  // (from the original)
    *gptr<u32>(edit + 0x90u) = r7_1;  // (from the original)
    *gptr<u8>(edit + 0x20u) = 0;  // (from the original)
    Pane__set_size_by_scale(*gptr<u32>(edit + 0x9cu), guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    stop_current_sound_effect(0x10003dau, guest::cpu()->r[1], guest::cpu()->r[2]);  // (from the original)
    *gptr<u8>(edit + 0x95u) = 0;  // (from the original)
    return 1u;
}

}  // namespace d_0052370c
GUEST_EXPORT_FRAMED(0x0052370c, d_0052370c::TextEdit__handle_delete, 0x41f0);  // pushes {edit, r5, r6, r7, r8, lr} first, as the original

// f_0052389c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Word +4 of the keyboard object (0x95e0fc), or 0.
namespace d_0052389c {

inline constexpr u32 letter_list_instance_address = 0x0095e0fcu;
inline guest::global<u32, 0x0095e0fc> letter_list_instance;

u32 keyboard_word_4() {
    u32 r0_1 = *letter_list_instance;
    if (r0_1 != 0) {
        r0_1 = *gptr<u32>(r0_1 + 4u);
    }
    return r0_1;
}

}  // namespace d_0052389c
GUEST_EXPORT(0x0052389c, d_0052389c::keyboard_word_4);

// f_005238b4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Builds the keyboard's first key table (0xad6140).
namespace d_005238b4 {

inline constexpr u32 global_00ad6140_address = 0x00ad6140u;
inline guest::global<u32, 0x00ad6158> global_00ad6158;
inline guest::global<u16, 0x00ad6164> global_00ad6164;

u32 Keyboard__build_key_table_a(u32 keyboard) {
    if ((*global_00ad6158 & 1u) == 0) {
        guest::cpu()->r[1] = global_00ad6140_address;
        return 0u;
    }
    u32 r1_1 = *global_00ad6164;
    if (r1_1 != 0) {
        guest::cpu()->r[1] = r1_1;
        return 0u;
    }
    u32 r1_2 = keyboard - 0x30u;  // (from the original)
    u32 zf_1 = r1_2 == 9u;
    u32 cf_1 = r1_2 >= 9u;
    if (cf_1 && !zf_1) {
        r1_2 = keyboard - 0xff10u;  // (from the original)
        zf_1 = r1_2 == 9u;
        cf_1 = r1_2 >= 9u;
    }
    if (!cf_1 || zf_1) {
        guest::cpu()->r[1] = r1_2;
        return 1u;
    }
    u32 r1_3 = keyboard - 0x2070u;  // (from the original)
    u32 zf_2 = r1_3 == 9u;
    u32 cf_2 = r1_3 >= 9u;
    if (cf_2 && !zf_2) {
        r1_3 = keyboard - 0x2080u;  // (from the original)
        zf_2 = r1_3 == 9u;
        cf_2 = r1_3 >= 9u;
    }
    if (!cf_2 || zf_2) {
        guest::cpu()->r[1] = r1_3;
        return 1u;
    }
    u32 r1_4 = keyboard - 0x2160u;  // (from the original)
    u32 zf_3 = r1_4 == 0xbu;  // (from the original)
    u32 cf_3 = r1_4 >= 0xbu;  // (from the original)
    if (cf_3 && !zf_3) {
        r1_4 = keyboard - 0x2170u;  // (from the original)
        zf_3 = r1_4 == 0xbu;  // (from the original)
        cf_3 = r1_4 >= 0xbu;  // (from the original)
    }
    if (!cf_3 || zf_3) {
        guest::cpu()->r[1] = r1_4;
        return 1u;
    }
    u32 r1_5 = keyboard - 0x2460u;  // (from the original)
    u32 zf_4 = r1_5 == 0x13u;  // (from the original)
    u32 cf_4 = r1_5 >= 0x13u;  // (from the original)
    if (cf_4 && !zf_4) {
        r1_5 = keyboard - 0x2474u;  // (from the original)
        zf_4 = r1_5 == 0x13u;  // (from the original)
        cf_4 = r1_5 >= 0x13u;  // (from the original)
    }
    if (!cf_4 || zf_4) {
        guest::cpu()->r[1] = r1_5;
        return 1u;
    }
    u32 r1_6 = keyboard - 0x2488u;  // (from the original)
    u32 zf_5 = r1_6 == 0x13u;  // (from the original)
    u32 cf_5 = r1_6 >= 0x13u;  // (from the original)
    if (cf_5 && !zf_5) {
        r1_6 = keyboard - 0x2776u;  // (from the original)
        zf_5 = r1_6 == 9u;
        cf_5 = r1_6 >= 9u;
    }
    if (!cf_5 || zf_5) {
        guest::cpu()->r[1] = r1_6;
        return 1u;
    }
    u32 r1_7 = keyboard - 0x2780u;  // (from the original)
    u32 zf_6 = r1_7 == 9u;
    u32 cf_6 = r1_7 >= 9u;
    if (cf_6 && !zf_6) {
        u32 r0_1 = keyboard - 0x278au;  // (from the original)
        zf_6 = r0_1 == 9u;
        cf_6 = r0_1 >= 9u;
    }
    if (cf_6 && !zf_6) {
        guest::cpu()->r[1] = r1_7;
        return 0u;
    }
    guest::cpu()->r[1] = r1_7;
    return 1u;
}

}  // namespace d_005238b4
GUEST_EXPORT(0x005238b4, d_005238b4::Keyboard__build_key_table_a);

// f_00523b6c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Builds the keyboard's second key table (0xad6540) for the current mode.
namespace d_00523b6c {

inline constexpr u32 keyboard_key_table_c_address = 0x00ad6540u;
inline constexpr u32 keyboard_key_table_base_address = 0x00ad6544u;
inline constexpr u32 keyboard_key_table_a2_address = 0x00ad655cu;
inline constexpr u32 keyboard_key_table_b2_address = 0x00ad6560u;
inline constexpr u32 keyboard_key_table_h_address = 0x00ad6580u;
inline constexpr u32 keyboard_key_table_g_address = 0x00ad6590u;
inline constexpr u32 keyboard_key_table_f_address = 0x00ad659cu;
inline constexpr u32 keyboard_key_table_c2_address = 0x00ad65a0u;
inline guest::global<u32, 0x00ad6540> keyboard_key_table_c;
inline guest::global<u32, 0x00ad6544> keyboard_key_table_base;
inline guest::global<u32, 0x00ad6548> keyboard_key_table_d;
inline guest::global<u32, 0x00ad654c> global_00ad654c;
inline guest::global<u32, 0x00ad6550> keyboard_key_table_e;
inline guest::global<u32, 0x00ad6554> keyboard_key_table_a;
inline guest::global<u32, 0x00ad6558> keyboard_key_table_b;
inline guest::global<u32, 0x00ad655c> keyboard_key_table_a2;
inline guest::global<u32, 0x00ad6560> keyboard_key_table_b2;
inline guest::global<u32, 0x00ad6564> global_00ad6564;
inline guest::global<u32, 0x00ad6568> global_00ad6568;
inline guest::global<u32, 0x00ad656c> global_00ad656c;
inline guest::global<u32, 0x00ad6570> global_00ad6570;
inline guest::global<u32, 0x00ad6574> global_00ad6574;
inline guest::global<u32, 0x00ad6578> global_00ad6578;
inline guest::global<u32, 0x00ad657c> global_00ad657c;
inline guest::global<u32, 0x00ad6580> keyboard_key_table_h;
inline guest::global<u32, 0x00ad6584> global_00ad6584;
inline guest::global<u32, 0x00ad6588> global_00ad6588;
inline guest::global<u32, 0x00ad6590> keyboard_key_table_g;
inline guest::global<u32, 0x00ad659c> keyboard_key_table_f;
inline guest::global<u32, 0x00ad65a0> keyboard_key_table_c2;
inline guest::global<u32, 0x00ad65a4> global_00ad65a4;
inline guest::global<u32, 0x00ad65a8> global_00ad65a8;
inline guest::global<u32, 0x00ad65ac> global_00ad65ac;
inline guest::global<u32, 0x00ad65b0> global_00ad65b0;
inline guest::global<u32, 0x00ad65b4> global_00ad65b4;
inline guest::global<u32, 0x00ad65b8> global_00ad65b8;
inline guest::global<u32, 0x00ad65bc> global_00ad65bc;
inline constexpr guest::Function<0x005d46dc, u32(u32, u32, u32, u32)> value_for_mode;

u32 Keyboard__build_key_table_b() {
    u32 r4_1 = *keyboard_key_table_f;
    u32 r12_1 = *keyboard_key_table_g;
    u32 r1_1 = *keyboard_key_table_h;
    u32 r2_1 = *global_00ad6584;
    u32 r3_1 = *global_00ad6588;
    *keyboard_key_table_a2 = r4_1;
    *keyboard_key_table_e = r12_1;
    *keyboard_key_table_c = r1_1;
    *keyboard_key_table_base = r2_1;
    *keyboard_key_table_d = r3_1;
    float S0_1 = std::bit_cast<float>(*keyboard_key_table_c2);
    float S1_1 = std::bit_cast<float>(*global_00ad65a4);
    float S2_1 = std::bit_cast<float>(*global_00ad65a8);
    float S3_1 = std::bit_cast<float>(*global_00ad65ac);
    float S4_1 = std::bit_cast<float>(*global_00ad65b0);
    float S5_1 = std::bit_cast<float>(*global_00ad65b4);
    float S6_1 = std::bit_cast<float>(*global_00ad65b8);
    float S7_1 = std::bit_cast<float>(*global_00ad65bc);
    *keyboard_key_table_b2 = std::bit_cast<u32>(S0_1);
    *global_00ad6564 = std::bit_cast<u32>(S1_1);
    *global_00ad6568 = std::bit_cast<u32>(S2_1);
    *global_00ad656c = std::bit_cast<u32>(S3_1);
    *global_00ad6570 = std::bit_cast<u32>(S4_1);
    *global_00ad6574 = std::bit_cast<u32>(S5_1);
    *global_00ad6578 = std::bit_cast<u32>(S6_1);
    *global_00ad657c = std::bit_cast<u32>(S7_1);
    *global_00ad654c = 0;
    *keyboard_key_table_a = 0;
    *keyboard_key_table_b = 0;
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    guest::cpu()->s[2] = S2_1;
    guest::cpu()->s[3] = S3_1;
    guest::cpu()->s[4] = S4_1;
    guest::cpu()->s[5] = S5_1;
    guest::cpu()->s[6] = S6_1;
    guest::cpu()->s[7] = S7_1;
    u32 value_2 = value_for_mode(keyboard_key_table_b2_address, keyboard_key_table_c2_address, r2_1, r3_1);
    if (value_2 == 0) {
        *keyboard_key_table_e = 0;
    } else {
        *keyboard_key_table_e = 2;
    }
    if (*keyboard_key_table_d == 2u) {
        *keyboard_key_table_d = 1;
    }
    u32 r0_2 = *keyboard_key_table_base;
    if (r0_2 == 2u) {
        r0_2 = *keyboard_key_table_a2;
        *keyboard_key_table_base = r0_2;
    }
    return r0_2;
}

}  // namespace d_00523b6c
GUEST_EXPORT_FRAMED(0x00523b6c, d_00523b6c::Keyboard__build_key_table_b, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_00523d60: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Stores the keyboard mode (0x95e0c9) and, for a mode with a value, the value (0xad6278).
namespace d_00523d60 {

inline guest::global<u8, 0x0095e0c9> global_0095e0c9;
inline guest::global<u32, 0x00ad6278> global_00ad6278;

void Keyboard__set_mode(u32 keyboard, u32 r1) {
    *global_0095e0c9 = u8(keyboard);
    if (keyboard == 0 || r1 + 1u == 0) {
        return;
    } else {
        *global_00ad6278 = r1;
    }
}

}  // namespace d_00523d60
GUEST_EXPORT(0x00523d60, d_00523d60::Keyboard__set_mode);

// f_005242b8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Clears +0x99 of the keyboard object (0x95e0fc) when there is one.
namespace d_005242b8 {

inline constexpr u32 letter_list_instance_address = 0x0095e0fcu;
inline guest::global<u32, 0x0095e0fc> letter_list_instance;

void Keyboard__clear_flag_99(u32 r0_unused, u32 r1) {
    u32 r0_1 = *letter_list_instance;
    if (r0_1 != 0) {
        r1 = 0u;
        *gptr<u8>(r0_1 + 0x99u) = u8(r1);  // (from the original)
    }
    guest::cpu()->r[1] = r1;
}

}  // namespace d_005242b8
GUEST_EXPORT(0x005242b8, d_005242b8::Keyboard__clear_flag_99);

// f_00524320: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00524320 {

struct __attribute__((packed)) Local_00524320_ea_1 {
    float float_0;
    float float_4;
    float float_8;
    float float_c;
    float float_10;
    float float_14;
    float float_18;
    float float_1c;
};
GUEST_OFFSET(Local_00524320_ea_1, float_0, 0x0);
GUEST_OFFSET(Local_00524320_ea_1, float_4, 0x4);
GUEST_OFFSET(Local_00524320_ea_1, float_8, 0x8);
GUEST_OFFSET(Local_00524320_ea_1, float_c, 0xc);
GUEST_OFFSET(Local_00524320_ea_1, float_10, 0x10);
GUEST_OFFSET(Local_00524320_ea_1, float_14, 0x14);
GUEST_OFFSET(Local_00524320_ea_1, float_18, 0x18);
GUEST_OFFSET(Local_00524320_ea_1, float_1c, 0x1c);

struct __attribute__((packed)) Local_00524320_r0_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Local_00524320_r0_1, word_0, 0x0);
GUEST_OFFSET(Local_00524320_r0_1, word_4, 0x4);
GUEST_OFFSET(Local_00524320_r0_1, word_8, 0x8);
GUEST_OFFSET(Local_00524320_r0_1, word_c, 0xc);

inline constexpr u32 vtable_sead__SafeStringBase_char_ = 0x009047f8u;
inline constexpr u32 global_0095e0c8_address = 0x0095e0c8u;
inline constexpr u32 keyboard_resources_address = 0x0095e0e0u;
inline constexpr u32 keyboard_resources_a_address = 0x00ad5f68u;
inline constexpr u32 keyboard_messages_a_address = 0x00ad6038u;
inline constexpr u32 keyboard_resources_b2_address = 0x00ad6054u;
inline constexpr u32 keyboard_messages_b_address = 0x00ad6124u;
inline guest::global<u32, 0x0089723c> global_0089723c;
inline guest::global<u32, 0x00897240> global_00897240;
inline guest::global<u32, 0x00897244> global_00897244;
inline guest::global<u32, 0x00897248> global_00897248;
inline guest::global<u32, 0x0089724c> global_0089724c;
inline guest::global<u32, 0x00897250> global_00897250;
inline guest::global<u32, 0x00897254> global_00897254;
inline guest::global<u32, 0x00897258> global_00897258;
inline guest::global<u32, 0x0089725c> global_0089725c;
inline guest::global<u32, 0x00897260> global_00897260;
inline guest::global<u32, 0x00897264> global_00897264;
inline guest::global<u32, 0x00897268> global_00897268;
inline guest::global<u32, 0x0095e0e0> keyboard_resources;
inline guest::global<u32, 0x0095e0e4> keyboard_resources_b;
inline guest::global<u32, 0x00ad6038> keyboard_messages_a;
inline guest::global<u32, 0x00ad6124> keyboard_messages_b;
inline constexpr guest::Function<0x00100ef9, u32(u32, u32, u32)> sprintf;
inline constexpr guest::Function<0x00159a0c, u32(u32, u32)> acquire_handle_kind_b;
inline constexpr guest::Function<0x00569d50, u32(u32)> layout_allocator_4;
inline constexpr guest::Function<0x0056a974, u32(u32, u32, u32, u32)> load_split_start;
inline constexpr guest::Function<0x005d46dc, u32(u32, u32, u32, u32)> value_for_mode;

struct __attribute__((packed)) Frame_00524320 {
    u8 unknown_0[0x30];  // (not read or written by name)
    u32 word_30;
    u8 unknown_34[0x4];  // (not read or written by name)
    u32 object_38_vtable;
    u32 word_3c;
    u8 unknown_40[0x88];  // (not read or written by name)
};
GUEST_OFFSET(Frame_00524320, word_30, 0x30);
GUEST_OFFSET(Frame_00524320, object_38_vtable, 0x38);
GUEST_OFFSET(Frame_00524320, word_3c, 0x3c);
GUEST_SIZE(Frame_00524320, 0xc8);

u32 load_software_keyboard_messages() {
    guest::StackFrameOf<Frame_00524320> frame;  // the original's stack frame
    float S0_1 = 1.3513055e-38f;
    float S1_1 = std::bit_cast<float>(*global_0089723c);
    float S2_1 = std::bit_cast<float>(*global_00897240);
    float S3_1 = std::bit_cast<float>(*global_00897244);
    float S4_1 = std::bit_cast<float>(*global_00897248);
    float S5_1 = std::bit_cast<float>(*global_0089724c);
    float S6_1 = std::bit_cast<float>(*global_00897250);
    float S7_1 = std::bit_cast<float>(*global_00897254);
    gptr<Local_00524320_ea_1> ea_1 = gptr<Local_00524320_ea_1>(frame.at(0).addr());
    ea_1->float_0 = S0_1;
    ea_1->float_4 = S1_1;
    ea_1->float_8 = S2_1;
    ea_1->float_c = S3_1;
    ea_1->float_10 = S4_1;
    ea_1->float_14 = S5_1;
    ea_1->float_18 = S6_1;
    ea_1->float_1c = S7_1;
    u32 r1_1 = *global_00897258;
    u32 r2_1 = *global_0089725c;
    u32 r3_1 = *global_00897260;
    u32 r12_1 = *global_00897264;
    frame->word_30 = *global_00897268;
    gptr<Local_00524320_r0_1> r0_1 = gptr<Local_00524320_r0_1>(frame.at(0x20).addr());  // (from the original)
    r0_1->word_0 = r1_1;
    r0_1->word_4 = r2_1;
    r0_1->word_8 = r3_1;
    r0_1->word_c = r12_1;
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    guest::cpu()->s[2] = S2_1;
    guest::cpu()->s[3] = S3_1;
    guest::cpu()->s[4] = S4_1;
    guest::cpu()->s[5] = S5_1;
    guest::cpu()->s[6] = S6_1;
    guest::cpu()->s[7] = S7_1;
    u32 value_2 = value_for_mode(r0_1.addr(), r1_1, r2_1, r3_1);
    *keyboard_resources_b = 0;
    sprintf(frame.at(0x40).addr(), 0x524428u, gptr<u32>(frame.at(0).addr())[value_2]);  // (from the original)
    u32 r0_5 = sprintf(frame.at(0x80).addr(), 0x52444cu, gptr<u32>(frame.at(0).addr())[value_2]);  // (from the original)
    u32 r0_6 = layout_allocator_4(r0_5);
    u32 r5_2 = *gptr<u32>(r0_6 + 4u);
    frame->word_3c = frame.at(0x40).addr();  // (from the original)
    frame->object_38_vtable = vtable_sead__SafeStringBase_char_;
    u32 r0_7 = load_split_start(keyboard_resources_a_address, frame.at(0x38).addr(), r5_2, 0x80u);  // (from the original)
    u32 r1_4 = guest::cpu()->r[1];
    if (r0_7 != 0) {
        frame->word_3c = frame.at(0x80).addr();  // (from the original)
        frame->object_38_vtable = vtable_sead__SafeStringBase_char_;
        r0_7 = load_split_start(keyboard_resources_b2_address, frame.at(0x38).addr(), r5_2, 0x80u);  // (from the original)
        r1_4 = guest::cpu()->r[1];
        if (r0_7 != 0) {
            u32 r0_8 = *keyboard_messages_a;
            r1_4 = *keyboard_messages_b;
            *keyboard_resources_b = r1_4;
            if (r0_8 != 0) {
                r1_4 = *keyboard_resources;
                if (r1_4 == 0) {
                    u32 r0_9 = acquire_handle_kind_b(r0_8, r1_4);
                    r1_4 = guest::cpu()->r[1];
                    *keyboard_resources = r0_9;
                }
            }
            r0_7 = 1u;
        }
    }
    guest::cpu()->r[1] = r1_4;
    return r0_7;
}

}  // namespace d_00524320
GUEST_EXPORT_FRAMED(0x00524320, d_00524320::load_software_keyboard_messages, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_00524478: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Frees the keyboard's buffer (0x95e0e0) and its two layout parts, and clears 0x95e0e4.
namespace d_00524478 {

inline constexpr u32 global_0095e0c8_address = 0x0095e0c8u;
inline constexpr u32 keyboard_resources_address = 0x0095e0e0u;
inline constexpr u32 keyboard_resources_a_address = 0x00ad5f68u;
inline constexpr u32 keyboard_resources_b2_address = 0x00ad6054u;
inline guest::global<u32, 0x0095e0e0> keyboard_resources;
inline guest::global<u32, 0x0095e0e4> keyboard_resources_b;
inline constexpr guest::Function<0x00138744, u32(u32, u32, u32, u32)> destroy_load_split_base_part;
inline constexpr guest::Function<0x00139724, u32(u32, u32, u32, u32)> free_object_and_buffer;

u32 Keyboard__destroy_resources() {
    u32 r0_1 = *keyboard_resources;
    if (r0_1 != 0) {
        free_object_and_buffer(r0_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
        *keyboard_resources = 0;
    }
    destroy_load_split_base_part(keyboard_resources_a_address, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_2 = destroy_load_split_base_part(keyboard_resources_b2_address, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    *keyboard_resources_b = 0;
    return r0_2;
}

}  // namespace d_00524478
GUEST_EXPORT_FRAMED(0x00524478, d_00524478::Keyboard__destroy_resources, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_005244c0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The glyph of a character in the keyboard's font (0x95e0e0).
namespace d_005244c0 {

inline constexpr u32 keyboard_resources_address = 0x0095e0e0u;
inline guest::global<u32, 0x0095e0e0> keyboard_resources;
inline constexpr guest::Function<0x0015982c, u32(u32, u32, u32, u32)> ItemOffsetTable__value_at_veneer;

u32 Keyboard__glyph_of(u32 keyboard) {
    return ItemOffsetTable__value_at_veneer(*keyboard_resources, keyboard, guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_005244c0
GUEST_EXPORT(0x005244c0, d_005244c0::Keyboard__glyph_of);

// f_00524528: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Initializes a key event for a character (kind 0).
namespace d_00524528 {

struct __attribute__((packed)) KeyEvent {
    u32 word_0;
    u32 word_4;
    u8 byte_8;
    u8 byte_9;
    u8 byte_a;
    u8 unknown_b[0x1];  // (not used here)
    u32 word_c;
};
GUEST_OFFSET(KeyEvent, word_0, 0x0);
GUEST_OFFSET(KeyEvent, word_4, 0x4);
GUEST_OFFSET(KeyEvent, byte_8, 0x8);
GUEST_OFFSET(KeyEvent, byte_9, 0x9);
GUEST_OFFSET(KeyEvent, byte_a, 0xa);
GUEST_OFFSET(KeyEvent, word_c, 0xc);


void KeyEvent__init_char(gptr<KeyEvent> key_event, u32 r1) {
    key_event->word_0 = r1;
    key_event->word_4 = 0;
    key_event->byte_8 = 0;
    key_event->byte_9 = 0;
    key_event->byte_a = 0;
    key_event->word_c = 0;
}

}  // namespace d_00524528
GUEST_EXPORT(0x00524528, d_00524528::KeyEvent__init_char);

// f_00524598: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Initializes a key event for a command (kind 1).
namespace d_00524598 {

struct __attribute__((packed)) KeyEvent {
    u32 word_0;
    u32 word_4;
    u8 byte_8;
    u8 byte_9;
    u8 byte_a;
    u8 unknown_b[0x1];  // (not used here)
    u32 word_c;
};
GUEST_OFFSET(KeyEvent, word_0, 0x0);
GUEST_OFFSET(KeyEvent, word_4, 0x4);
GUEST_OFFSET(KeyEvent, byte_8, 0x8);
GUEST_OFFSET(KeyEvent, byte_9, 0x9);
GUEST_OFFSET(KeyEvent, byte_a, 0xa);
GUEST_OFFSET(KeyEvent, word_c, 0xc);


void KeyEvent__init_command(gptr<KeyEvent> key_event, u32 r1) {
    key_event->word_0 = 0;
    key_event->byte_8 = 1;
    key_event->byte_9 = 0;
    key_event->byte_a = 0;
    key_event->word_c = 0;
    key_event->word_4 = r1;
}

}  // namespace d_00524598
GUEST_EXPORT(0x00524598, d_00524598::KeyEvent__init_command);

// f_00524838: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Sets the keyboard layout pair (+0x4c) from the language table (0x890530), with the regional variants for languages 4
// and 1.
namespace d_00524838 {

struct __attribute__((packed)) Keyboard {
    u8 unknown_0[0x4c];  // (not used here)
    u8 byte_4c;
    u8 byte_4d;
};
GUEST_OFFSET(Keyboard, byte_4c, 0x4c);
GUEST_OFFSET(Keyboard, byte_4d, 0x4d);

struct __attribute__((packed)) Local_00524838_ea_1 {
    u8 byte_0;
    u8 byte_1;
};
GUEST_OFFSET(Local_00524838_ea_1, byte_0, 0x0);
GUEST_OFFSET(Local_00524838_ea_1, byte_1, 0x1);

inline constexpr guest::Function<0x0011dc88, u32(u32, u32, u32)> Cfg__get_region;
inline constexpr guest::Function<0x005d46dc, u32(u32, u32, u32, u32)> value_for_mode;

void Keyboard__set_layout_for_language(gptr<Keyboard> keyboard, u32 r1, u32 r2) {
    u32 value_2 = value_for_mode(keyboard.addr(), r1, r2, guest::cpu()->r[3]);
    if (value_2 < 0xau) {  // (from the original)
        gptr<Local_00524838_ea_1> ea_1 = gptr<Local_00524838_ea_1>((value_2 << 1) + 0x890530u);  // (from the original)
        u32 r2_1 = ea_1->byte_0;
        keyboard->byte_4c = u8(r2_1);
        u32 r1_1 = ea_1->byte_1;
        keyboard->byte_4d = u8(r1_1);
        if (value_2 == 4u) {
            u32 region_3 = Cfg__get_region(value_2, r1_1, r2_1);
            if (region_3 != 8u) {
                if (region_3 == 9u) {
                    keyboard->byte_4c = 0xc;  // (from the original)
                    keyboard->byte_4d = 4;
                    return;
                }
                if (region_3 != 0xau) {  // (from the original)
                    return;
                }
                keyboard->byte_4c = 0xd;  // (from the original)
                keyboard->byte_4d = 4;
                return;
            }
            keyboard->byte_4c = 9;
            keyboard->byte_4d = 4;
            return;
        }
        if (value_2 == 1u) {
            u32 region_4 = Cfg__get_region(value_2, r1_1, r2_1);
            if (region_4 == 9u) {
                keyboard->byte_4c = 0xe;  // (from the original)
                keyboard->byte_4d = 1;
            }
        }
        return;
    }
    keyboard->byte_4c = 0;
    keyboard->byte_4d = 1;
}

}  // namespace d_00524838
GUEST_EXPORT_FRAMED(0x00524838, d_00524838::Keyboard__set_layout_for_language, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_00524a54: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00524a54 {

struct __attribute__((packed)) Object_00524a54_0 {
    u32 word_0;
    u32 int_vtable;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u8 unknown_14[0x34];  // (not used here)
    u32 word_48;
    u16 half_4c;
    u8 unknown_4e[0x2];  // (not used here)
    u32 word_fix_256u_vtable;
};
GUEST_OFFSET(Object_00524a54_0, word_0, 0x0);
GUEST_OFFSET(Object_00524a54_0, int_vtable, 0x4);
GUEST_OFFSET(Object_00524a54_0, word_8, 0x8);
GUEST_OFFSET(Object_00524a54_0, word_c, 0xc);
GUEST_OFFSET(Object_00524a54_0, word_10, 0x10);
GUEST_OFFSET(Object_00524a54_0, word_48, 0x48);
GUEST_OFFSET(Object_00524a54_0, half_4c, 0x4c);
GUEST_OFFSET(Object_00524a54_0, word_fix_256u_vtable, 0x50);

inline constexpr u32 vtable_sead__Delegate2_ugc__Text__sead__Thread___int_ = 0x00905eb4u;
inline constexpr u32 vtable_script__WordFix_256u_ = 0x00909dc8u;
inline guest::global<u32, 0x00890528> global_00890528;
inline guest::global<u32, 0x0089052c> global_0089052c;
inline constexpr guest::Function<0x002f825c, u32(u32, u32)> clear_aligned;
inline constexpr guest::Function<0x003083bc, u32(u32, u32, u32)> script__construct_word_ptr;
inline constexpr guest::Function<0x003e0f14, u32(u32, u32, u32, u32)> nn__ngc__CTR__ProfanityFilter__ProfanityFilter_003e0f14;
inline constexpr guest::Function<0x005f4bfc, u32(u32, u32)> construct_script_word;

u32 int__00524a54(gptr<Object_00524a54_0> arg0) {
    u32 r0 = arg0.addr();
    u32 res_1 = 0;
    arg0->word_0 = 0;
    u32 r3_1 = *global_00890528;
    arg0->word_10 = *global_0089052c;
    arg0->int_vtable = vtable_sead__Delegate2_ugc__Text__sead__Thread___int_;
    arg0->word_8 = r0;
    arg0->word_c = r3_1;
    u32 r0_1 = r0 + 0x14u;  // (from the original)
    nn__ngc__CTR__ProfanityFilter__ProfanityFilter_003e0f14(r0_1, vtable_sead__Delegate2_ugc__Text__sead__Thread___int_, r0 + 8u, r3_1);
    arg0->word_48 = 0;
    arg0->half_4c = 0;
    script__construct_word_ptr(r0_1 + 0x3cu, r0_1 + 0x54u, 0x100u);  // (from the original)
    arg0->word_fix_256u_vtable = vtable_script__WordFix_256u_;
    construct_script_word(r0_1 + 0x48u, vtable_script__WordFix_256u_);  // (from the original)
    u32 r4 = r0_1 + 0x3cu;  // (from the original)
    clear_aligned(r0_1 + 0x54u, 0x200u);  // (from the original)
    u32 r2 = 0x8906ecu;  // (from the original)
    u32 r1 = r4 + 0x16u;  // (from the original)
    r0 = 0x80u;  // (from the original)
    do {
        res_1 = r0 - 1u;
        r0 = res_1;
        u32 r3_5 = *gptr<u16>(r2);
        *gptr<u16>(r1 + 2u) = u16(r3_5);
        u32 r3_6 = *gptr<u16>(r2);
        u32 ea_2 = r1 + 4u;
        *gptr<u16>(ea_2) = u16(r3_6);
        r1 = ea_2;
        guest::preempt();
    } while (res_1 != 0);
    *gptr<u8>(r4 - 4u) = 0x11;  // (from the original)
    *gptr<u8>(r4 - 3u) = 0x11;  // (from the original)
    return r4 - 0x50u;  // (from the original)
}

}  // namespace d_00524a54
GUEST_EXPORT_FRAMED(0x00524a54, d_00524a54::int__00524a54, 0x4010);  // pushes {r4, lr} first, as the original

// f_00524b80: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Finds the key under a point in the key table.
namespace d_00524b80 {

inline guest::global<u32, 0x008906f4> keyboard_filter_table;

u32 Keyboard__find_key(u32 keyboard, u32 r1, u32 r2_unused, u32 r3) {
    guest::StackFrame frame(0x4);  // the original's stack frame
    u32 r6 = 0;
    u32 r10 = 0;
    u32 r2_1 = 0;
    *frame.at<u32>(0) = r3;
    u32 r8 = 1u;
    u32 r7 = 0u;
    u32 r9 = r8 + u32(s32(*keyboard_filter_table - 0x890754u) >> 2);  // (from the original)
    do {
        u32 r5 = *gptr<u16>(keyboard);
        u32 r2 = *gptr<u16>(r1);
        if (r5 != 0xau && r5 != 0) {  // (from the original)
            *frame.at<u16>(0) = u16(r2);
            if (r2 - 0x3041u <= 0x55u || r2 >= 0x61u && r2 <= 0x7au) {  // (from the original)
                goto L_524ce0;
            }
            if (r2 - 0x30a1u <= 0x55u) {  // (from the original)
                *frame.at<u16>(0) = u16(r2 - 0x60u);  // (from the original)
                goto L_524ce0;
            }
            r10 = frame.at(0).addr();
            r6 = 0u;
            if (r2 >= 0x41u && r2 <= 0x5au || r2 - 0xff21u <= 0x19u || r2 != 0xd7u && r2 - 0xc0u <= 0x1eu) {  // (from the original)
                goto L_524c70;
            }
            u32 r3_1 = r2 - 0x391u;  // (from the original)
            u32 zf_1 = r3_1 == 0x18u;  // (from the original)
            u32 cf_1 = r3_1 >= 0x18u;  // (from the original)
            if (cf_1 && !zf_1) {
                u32 r3_2 = r2 - 0x410u;  // (from the original)
                zf_1 = r3_2 == 0x1fu;  // (from the original)
                cf_1 = r3_2 >= 0x1fu;  // (from the original)
            }
            if (!cf_1 || zf_1) {
                goto L_524c70;
            }
            if (r2 - 0x100u > 0x77u) {  // (from the original)
                r3 = 0x890754u;  // (from the original)
                u32 r12 = 1u;
                if (s32(r9) > 1) {
                    do {
                        if (*gptr<u16>(r3 + 2u) == r2) {
                            r6 = *gptr<u16>(r3);
                            goto L_524cd8;
                        }
                        if (*gptr<u16>(r3) == r2) {
                            goto L_524cd8;
                        }
                        r12 += 1u;
                        r3 += 4u;
                        guest::preempt();
                    } while (s32(r9) > s32(r12));
                }
                if (r2 - 0x179u <= 5u && (r2 & 1u) != 0) {  // (from the original)
                    r6 = uxth(r2 + 1u);
                }
                goto L_524cd8;
            }
            if ((r2 & 1u) == 0) {
                r2_1 = r2 + 1u;
                goto L_524c74;
            }
            goto L_524ce0;
        }
        if (r7 != 0) {
            break;
        }
        r8 = 0u;
        break;
L_524c70:;
        r2_1 = r2 + 0x20u;  // (from the original)
L_524c74:;
        r6 = uxth(r2_1);
L_524cd8:;
        if (r6 != 0) {
            *gptr<u16>(r10) = u16(r6);
        }
L_524ce0:;
        if (r5 != *frame.at<u16>(0)) {
            r8 = 0u;
            break;
        }
        r7 += 1u;
        keyboard += 2u;
        r1 += 2u;
        guest::preempt();
    } while (s32(r7) < 3);
    guest::cpu()->r[1] = r1;
    return r8;
}

}  // namespace d_00524b80
GUEST_EXPORT_FRAMED(0x00524b80, d_00524b80::Keyboard__find_key, 0x7f0);  // pushes {r4, r5, r6, r7, r8, r9, r10} first, as the original

// f_00524d58: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The button's value (+8) when its key is in the pressed mask, else its current entry (or 0).
namespace d_00524d58 {

struct __attribute__((packed)) Button {
    u8 unknown_0[0x8];  // (not used here)
    u32 word_8;
    u8 unknown_c[0x4];  // (not used here)
    u32 word_10;
    u8 unknown_14[0x8];  // (not used here)
    u32 word_1c;
    u8 unknown_20[0x4];  // (not used here)
    u32 word_24;
};
GUEST_OFFSET(Button, word_8, 0x8);
GUEST_OFFSET(Button, word_10, 0x10);
GUEST_OFFSET(Button, word_1c, 0x1c);
GUEST_OFFSET(Button, word_24, 0x24);

struct __attribute__((packed)) Local_00524d58_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_00524d58_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_00524d58_ea_1, word_4, 0x4);


struct __attribute__((packed)) Frame_00524d58 {
    u8 unknown_0[0x4];  // (not read or written by name)
    u16 half_4;
    u8 unknown_6[0x2];  // (not read or written by name)
};
GUEST_OFFSET(Frame_00524d58, half_4, 0x4);
GUEST_SIZE(Frame_00524d58, 0x8);

u32 Button__value_if_pressed(gptr<Button> button, u32 r1) {
    guest::StackFrameOf<Frame_00524d58> frame;  // the original's stack frame
    u32 r0 = button.addr();
    gptr<Local_00524d58_ea_1> ea_1 = gptr<Local_00524d58_ea_1>(frame.at(0).addr());
    ea_1->word_0 = r0;
    ea_1->word_4 = r1;
    if ((u32(frame->half_4) & ~*gptr<u32>(button->word_1c + 0x188u)) != 0) {  // (from the original)
        return button->word_8;
    }
    u32 r1_1 = button->word_24;
    if (r1_1 != 0 && s32(r1_1) >= 0) {
        r0 = *gptr<u32>(button->word_10);
    }
    if (s32(r1_1) <= 0) {
        r0 = 0u;
    }
    return r0;
}

}  // namespace d_00524d58
GUEST_EXPORT(0x00524d58, d_00524d58::Button__value_if_pressed);

// f_00525ae4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Creates a cell grid and fills every cell with the 16-bit ids of the source array, then finishes it.
namespace d_00525ae4 {

struct __attribute__((packed)) Object_00525ae4_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u8 byte_c;
};
GUEST_OFFSET(Object_00525ae4_1, word_0, 0x0);
GUEST_OFFSET(Object_00525ae4_1, word_4, 0x4);
GUEST_OFFSET(Object_00525ae4_1, word_8, 0x8);
GUEST_OFFSET(Object_00525ae4_1, byte_c, 0xc);

struct __attribute__((packed)) Local_00525ae4_r5_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_00525ae4_r5_1, word_0, 0x0);
GUEST_OFFSET(Local_00525ae4_r5_1, word_4, 0x4);

inline constexpr guest::Function<0x002026e4, u32(u32, u32, u32, u32)> create_grid_map_5810ac;
inline constexpr guest::Function<0x00317148, u32(u32, u32, u32)> CellGrid__cell_at;
inline constexpr guest::Function<0x0052f144, u32(u32, u32, u32, u32)> WrappingCursor__advance;
inline constexpr guest::Function<0x007481ec, u32(u32, u32)> key_records_differ;
inline constexpr guest::Function<0x0074824c, u32(u32, u32)> make_end_grid_rect_iterator;
inline constexpr guest::Function<0x00748284, u32(u32, u32)> construct_grid_rect_iterator;
inline constexpr guest::Function<0x007482bc, u32(u32, u32, u32, u32)> GridRect__width;
inline constexpr guest::Function<0x0080d59c, u32(u32, u32, u32, u32)> GridMap__load_shared_blocks_in_rect;

u32 GridMap__fill_from_ids(u32 grid_map, gptr<Object_00525ae4_1> arg1) {
    guest::StackFrame frame(0x24);  // the original's stack frame
    u32 r1 = arg1.addr();
    u32 r0_10 = 0;
    u32 r3_1 = arg1->byte_c;
    u32 r0_1 = create_grid_map_5810ac(grid_map, arg1->word_4, arg1->word_8, r3_1);
    u32 r4 = r0_1;
    if (r0_1 != 0) {
        u32 r7 = arg1->word_0;
        make_end_grid_rect_iterator(frame.at(0x10).addr(), r0_1);  // (from the original)
        construct_grid_rect_iterator(frame.at(0).addr(), r0_1);
        u32 r0_5 = key_records_differ(frame.at(0).addr(), frame.at(0x10).addr());  // (from the original)
        r1 = guest::cpu()->r[1];
        u32 r2 = guest::cpu()->r[2];
        u32 r3 = guest::cpu()->r[3];
        if (r0_5 != 0) {
            do {
                gptr<Local_00525ae4_r5_1> r5_1 = gptr<Local_00525ae4_r5_1>(frame.at(8).addr());
                if (r4 != 0) {
                    u32 r0_6 = GridRect__width(r4, r1, r2, r3);
                    u32 cell_2 = CellGrid__cell_at(r4, r5_1->word_0, r5_1->word_4);
                    r1 = guest::cpu()->r[1];
                    r2 = guest::cpu()->r[2];
                    r3 = guest::cpu()->r[3];
                    if (cell_2 != 0) {
                        r2 = r5_1->word_4;
                        r1 = gptr<u16>(r7)[r2 * r0_6 + r5_1->word_0];
                        *gptr<u16>(cell_2) = u16(r1);
                    }
                }
                WrappingCursor__advance(frame.at(0).addr(), r1, r2, r3);
                r0_10 = key_records_differ(frame.at(0).addr(), frame.at(0x10).addr());  // (from the original)
                r1 = guest::cpu()->r[1];
                r2 = guest::cpu()->r[2];
                r3 = guest::cpu()->r[3];
                guest::preempt();
            } while (r0_10 != 0);
        }
        GridMap__load_shared_blocks_in_rect(r4, r4, r2, r3);
        r0_1 = r4;
    }
    return r0_1;
}

}  // namespace d_00525ae4
GUEST_EXPORT_FRAMED(0x00525ae4, d_00525ae4::GridMap__fill_from_ids, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_005269e8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Places items on the map by the terrain of each cell (a long routine over the map rectangle).
namespace d_005269e8 {

struct __attribute__((packed)) Object_005269e8_0 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Object_005269e8_0, word_0, 0x0);
GUEST_OFFSET(Object_005269e8_0, word_4, 0x4);

struct __attribute__((packed)) Local_005269e8_ea_1 {
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
GUEST_OFFSET(Local_005269e8_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_005269e8_ea_1, word_4, 0x4);
GUEST_OFFSET(Local_005269e8_ea_1, word_8, 0x8);
GUEST_OFFSET(Local_005269e8_ea_1, word_c, 0xc);
GUEST_OFFSET(Local_005269e8_ea_1, word_10, 0x10);
GUEST_OFFSET(Local_005269e8_ea_1, word_14, 0x14);
GUEST_OFFSET(Local_005269e8_ea_1, word_18, 0x18);
GUEST_OFFSET(Local_005269e8_ea_1, word_1c, 0x1c);
GUEST_OFFSET(Local_005269e8_ea_1, word_20, 0x20);
GUEST_OFFSET(Local_005269e8_ea_1, word_24, 0x24);
GUEST_OFFSET(Local_005269e8_ea_1, word_28, 0x28);
GUEST_OFFSET(Local_005269e8_ea_1, word_2c, 0x2c);
GUEST_OFFSET(Local_005269e8_ea_1, word_30, 0x30);

struct __attribute__((packed)) Local_005269e8_ea_4 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_005269e8_ea_4, word_0, 0x0);
GUEST_OFFSET(Local_005269e8_ea_4, word_4, 0x4);

struct __attribute__((packed)) Local_005269e8_ea_5 {
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
GUEST_OFFSET(Local_005269e8_ea_5, word_0, 0x0);
GUEST_OFFSET(Local_005269e8_ea_5, word_4, 0x4);
GUEST_OFFSET(Local_005269e8_ea_5, word_8, 0x8);
GUEST_OFFSET(Local_005269e8_ea_5, word_c, 0xc);
GUEST_OFFSET(Local_005269e8_ea_5, word_10, 0x10);
GUEST_OFFSET(Local_005269e8_ea_5, word_14, 0x14);
GUEST_OFFSET(Local_005269e8_ea_5, word_18, 0x18);
GUEST_OFFSET(Local_005269e8_ea_5, word_1c, 0x1c);
GUEST_OFFSET(Local_005269e8_ea_5, word_20, 0x20);

struct __attribute__((packed)) Local_005269e8_r0_13 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_005269e8_r0_13, word_0, 0x0);
GUEST_OFFSET(Local_005269e8_r0_13, word_4, 0x4);

struct __attribute__((packed)) Local_005269e8_r0_14 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_005269e8_r0_14, word_0, 0x0);
GUEST_OFFSET(Local_005269e8_r0_14, word_4, 0x4);

struct __attribute__((packed)) Local_005269e8_r3_13 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_005269e8_r3_13, word_0, 0x0);
GUEST_OFFSET(Local_005269e8_r3_13, word_4, 0x4);

struct __attribute__((packed)) Local_005269e8_r3_14 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_005269e8_r3_14, word_0, 0x0);
GUEST_OFFSET(Local_005269e8_r3_14, word_4, 0x4);

struct __attribute__((packed)) Local_005269e8_r4_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_005269e8_r4_1, word_0, 0x0);
GUEST_OFFSET(Local_005269e8_r4_1, word_4, 0x4);

struct __attribute__((packed)) Local_005269e8_r4_3 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_005269e8_r4_3, word_0, 0x0);
GUEST_OFFSET(Local_005269e8_r4_3, word_4, 0x4);

inline constexpr guest::Function<0x002fc994, u32(u32, u32, u32, u32)> GridMap__place_item_at_world;
inline constexpr guest::Function<0x002fcaf4, u32(u32, u32, u32, u32)> Item__is_empty;
inline constexpr guest::Function<0x002feb00, u32(u32, u32, u32, u32)> GridMap__process_world_position;
inline constexpr guest::Function<0x00526ea0, u32(u32, u32)> cell_below_is_free_shore;
inline constexpr guest::Function<0x0052ed04, u32(u32, u32, u32, u32)> GridPoint__set_tile_in_block;
inline constexpr guest::Function<0x0052edfc, u32(u32, u32, u32, u32)> block_of_cell;
inline constexpr guest::Function<0x0052f0c0, u32(u32, u32)> copy_construct_word_pair;
inline constexpr guest::Function<0x0052f0dc, u32(u32, u32, u32, u32)> construct_word_pair;
inline constexpr guest::Function<0x0052f0f0, u32(u32, u32)> assign_word_pair;
inline constexpr guest::Function<0x0052f144, u32(u32, u32, u32, u32)> WrappingCursor__advance;
inline constexpr guest::Function<0x0052f200, u32(u32, u32, u32, u32)> construct_word_quad_from_pairs;
inline constexpr guest::Function<0x0052f2a8, u32(u32, u32)> add_pair_to_both_halves;
inline constexpr guest::Function<0x0055cb58, u32(u32, u32)> Xorshift128__next_0055cb58;
inline constexpr guest::Function<0x006fa1fc, u32(u32, u32)> find_free_cell_in_rect;
inline constexpr guest::Function<0x0074818c, u32(u32, u32)> grid_points_differ;
inline constexpr guest::Function<0x007481ec, u32(u32, u32)> key_records_differ;
inline constexpr guest::Function<0x0074824c, u32(u32, u32, u32, u32)> make_end_grid_rect_iterator;
inline constexpr guest::Function<0x00748284, u32(u32, u32)> construct_grid_rect_iterator;
inline constexpr guest::Function<0x007482bc, u32(u32, u32, u32, u32)> GridRect__width;
inline constexpr guest::Function<0x00748310, u32(u32)> GridRect__height_2;
inline constexpr guest::Function<0x0075291c, u32(u32, u32, u32, u32)> GridMap__large_cell_at;
inline constexpr guest::Function<0x0075d608, u32(u32, u32, u32, u32)> GridCellLarge__terrain_at;

struct __attribute__((packed)) Frame_005269e8 {
    u8 unknown_0[0x64];  // (not read or written by name)
    u32 word_64;
    u8 unknown_68[0x24];  // (not read or written by name)
    u32 word_8c;
    u32 word_90;
    u8 unknown_94[0x4];  // (not read or written by name)
    u32 word_98;
    u8 unknown_9c[0x24];  // (not read or written by name)
};
GUEST_OFFSET(Frame_005269e8, word_64, 0x64);
GUEST_OFFSET(Frame_005269e8, word_8c, 0x8c);
GUEST_OFFSET(Frame_005269e8, word_90, 0x90);
GUEST_OFFSET(Frame_005269e8, word_98, 0x98);
GUEST_SIZE(Frame_005269e8, 0xc0);

void place_items_by_terrain(gptr<Object_005269e8_0> arg0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_005269e8> frame;  // the original's stack frame
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r10 = guest::cpu()->r[10];
    u32 r11 = guest::cpu()->r[11];
    u32 r14 = guest::cpu()->r[14];
    u32 r0_28 = 0;
    u32 r4_2 = 0;
    u32 r0_29 = 0;
    u32 r0_30 = 0;
    u32 r1_14 = 0;
    u32 r0_31 = 0;
    u32 r0_32 = 0;
    gptr<Local_005269e8_r4_3> r4_3 = gptr<Local_005269e8_r4_3>(0u);
    u32 r6_1 = 0;
    u32 r1_15 = 0;
    u32 r2_19 = 0;
    u32 r7_1 = 0;
    u32 r0_33 = 0;
    u32 r1_16 = 0;
    u32 r2_20 = 0;
    u32 r0_34 = 0;
    u32 res_1 = 0;
    u32 r0_37 = 0;
    u32 r1_17 = 0;
    u32 r0_38 = 0;
    u32 r0_39 = 0;
    u32 ea_2 = 0;
    u32 ea_3 = 0;
    gptr<Local_005269e8_ea_4> ea_4 = gptr<Local_005269e8_ea_4>(0u);
    u32 r2_22 = 0;
    u32 r3_19 = 0;
    u32 r0_40 = 0;
    u32 r1_18 = 0;
    u32 zf_1 = 0;
    gptr<Local_005269e8_ea_1> ea_1 = gptr<Local_005269e8_ea_1>(frame.at(0x8c).addr());  // (from the original)
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
    r11 = r2;
    r10 = *frame.at<u32>(0xc0);  // (from the original)
    arg0->word_0 = 0;
    arg0->word_4 = 0;
    frame->word_8c = r0;
    frame->word_64 = 0;
    construct_word_pair(frame.at(0x40).addr(), 0u, 0u, r3);  // (from the original)
    find_free_cell_in_rect(frame.at(0x40).addr(), frame.at(0x44).addr());  // (from the original)
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r9 = 0u;
    do {
        gptr<Local_005269e8_r4_1> r4_1 = gptr<Local_005269e8_r4_1>(frame.at(0x18).addr());  // (from the original)
        u32 r0_3 = GridRect__width(r11, r1, r2, r3);
        u32 r0_4 = GridRect__height_2(r11);
        copy_construct_word_pair(r4_1.addr(), r11);
        u32 r0_5 = Xorshift128__next_0055cb58(r10, guest::cpu()->r[1]);
        u32 r1_4 = u64(r0_5) * r0_3 >> 0x20;  // (from the original)
        r4_1->word_0 = r4_1->word_0 + r1_4;
        u32 r0_6 = Xorshift128__next_0055cb58(r10, r1_4);
        r4_1->word_4 = r4_1->word_4 + u32(u64(r0_6) * r0_4 >> 0x20);  // (from the original)
        assign_word_pair(frame->word_8c, frame.at(0x18).addr());  // (from the original)
        u32 r0_9 = cell_below_is_free_shore(frame->word_90, frame->word_8c);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (r0_9 == 0) {
            block_of_cell(frame.at(0x48).addr(), frame->word_8c, r2, r3);  // (from the original)
            u32 r0_12 = grid_points_differ(frame.at(0x48).addr(), frame.at(0x40).addr());  // (from the original)
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            if (r0_12 != 0) {
                gptr<Local_005269e8_r0_13> r0_13 = gptr<Local_005269e8_r0_13>(frame.at(0x80).addr());  // (from the original)
                r0_13->word_0 = 1;
                r0_13->word_4 = 1;
                u32 r2_9 = ~0u;
                gptr<Local_005269e8_r0_14> r0_14 = gptr<Local_005269e8_r0_14>(frame.at(0x78).addr());  // (from the original)
                r0_14->word_0 = r2_9;
                r0_14->word_4 = r2_9;
                construct_word_quad_from_pairs(frame.at(0x50).addr(), r0_14.addr(), r0_13.addr(), r3);  // (from the original)
                add_pair_to_both_halves(frame.at(0x50).addr(), frame->word_8c);  // (from the original)
                u32 r5_1 = frame.at(0x50).addr();  // (from the original)
                r4 = frame->word_90;
                make_end_grid_rect_iterator(frame.at(0x68).addr(), r5_1, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
                construct_grid_rect_iterator(frame.at(0).addr(), r5_1);
                u32 r0_20 = key_records_differ(frame.at(0).addr(), frame.at(0x68).addr());  // (from the original)
                r1 = guest::cpu()->r[1];
                r2 = guest::cpu()->r[2];
                r3 = guest::cpu()->r[3];
                if (r0_20 != 0) {
                    do {
                        u32 tile = frame.at(8).addr();
                        if (r4 != 0) {
                            block_of_cell(frame.at(0x30).addr(), tile, r2, r3);  // (from the original)
                            gptr<Local_005269e8_r3_13> r3_13 = gptr<Local_005269e8_r3_13>(frame.at(0x30).addr());  // (from the original)
                            u32 large_cell_2 = GridMap__large_cell_at(r4, r3_13->word_0, r3_13->word_4, r3_13.addr());
                            r1 = guest::cpu()->r[1];
                            r2 = guest::cpu()->r[2];
                            r3 = guest::cpu()->r[3];
                            if (large_cell_2 != 0) {
                                GridPoint__set_tile_in_block(frame.at(0x20).addr(), tile, r2, r3);  // (from the original)
                                gptr<Local_005269e8_r3_14> r3_14 = gptr<Local_005269e8_r3_14>(frame.at(0x20).addr());  // (from the original)
                                u32 terrain_2 = GridCellLarge__terrain_at(large_cell_2, r3_14->word_0, r3_14->word_4, r3_14.addr());
                                r1 = guest::cpu()->r[1];
                                r2 = guest::cpu()->r[2];
                                r3 = guest::cpu()->r[3];
                                if (terrain_2 == 0x14u || terrain_2 == 0x31u || terrain_2 == 0x32u || terrain_2 == 0x33u) {  // (from the original)
                                    goto L_526c10;
                                }
                            }
                        }
                        goto L_526d78;
L_526c10:;
                        WrappingCursor__advance(frame.at(0).addr(), r1, r2, r3);
                        r0_28 = key_records_differ(frame.at(0).addr(), frame.at(0x68).addr());  // (from the original)
                        r1 = guest::cpu()->r[1];
                        r2 = guest::cpu()->r[2];
                        r3 = guest::cpu()->r[3];
                        guest::preempt();
                    } while (r0_28 != 0);
                }
                r4_2 = frame.at(0x50).addr();  // (from the original)
                r5 = frame->word_90;
                r0_29 = frame.at(0x30).addr();  // (from the original)
                make_end_grid_rect_iterator(r0_29, r4_2, r2, r3);
                r0_30 = frame.at(0x20).addr();  // (from the original)
                construct_grid_rect_iterator(r0_30, r4_2);
                r1_14 = frame.at(0x30).addr();  // (from the original)
                r0_31 = frame.at(0x20).addr();  // (from the original)
                r0_32 = key_records_differ(r0_31, r1_14);
                r1 = guest::cpu()->r[1];
                r2 = guest::cpu()->r[2];
                r3 = guest::cpu()->r[3];
                if (r0_32 == 0) {
                    goto L_526d40;
                }
L_526c94:;
                r4_3 = gptr<Local_005269e8_r4_3>(frame.at(0x28).addr());  // (from the original)
                if (r5 == 0) {
                    goto L_526d20;
                }
                r6_1 = 0u;
                r1_15 = r4_3->word_0;
                r2_19 = r4_3->word_4;
                r7_1 = r6_1;
                r0_33 = GridMap__process_world_position(r5, r1_15, r2_19, r6_1);
                r1_16 = r4_3->word_0;
                r2_20 = r4_3->word_4;
                r0_34 = GridMap__process_world_position(r5, r1_16, r2_20, 1u);
                r1 = guest::cpu()->r[1];
                r2 = guest::cpu()->r[2];
                r3 = guest::cpu()->r[3];
                if (r0_33 != 0) {
                    u32 is_empty_3 = Item__is_empty(r0_33, r1, r2, r3);
                    r1 = guest::cpu()->r[1];
                    r2 = guest::cpu()->r[2];
                    r3 = guest::cpu()->r[3];
                    if (is_empty_3 == 0) {
                        r6_1 = 1u;
                    }
                }
                if (r0_34 != 0) {
                    u32 is_empty_4 = Item__is_empty(r0_34, r1, r2, r3);
                    r1 = guest::cpu()->r[1];
                    r2 = guest::cpu()->r[2];
                    r3 = guest::cpu()->r[3];
                    if (is_empty_4 == 0) {
                        r7_1 = 1u;
                    }
                }
                res_1 = r6_1 | r7_1;
                if (res_1 == 0) {
                    goto L_526d20;
                }
                goto L_526d78;
L_526d20:;
                r0_37 = frame.at(0x20).addr();  // (from the original)
                WrappingCursor__advance(r0_37, r1, r2, r3);
                r1_17 = frame.at(0x30).addr();  // (from the original)
                r0_38 = frame.at(0x20).addr();  // (from the original)
                r0_39 = key_records_differ(r0_38, r1_17);
                r1 = guest::cpu()->r[1];
                r2 = guest::cpu()->r[2];
                r3 = guest::cpu()->r[3];
                if (r0_39 != 0) {
                    guest::preempt();
                    goto L_526c94;
                }
L_526d40:;
                ea_2 = frame.at(0).addr();
                *gptr<u32>(ea_2) = 0;
                ea_3 = frame.at(0x8c).addr();  // (from the original)
                ea_4 = gptr<Local_005269e8_ea_4>(*gptr<u32>(ea_3));
                r2_22 = ea_4->word_0;
                r3_19 = ea_4->word_4;
                r0_40 = frame->word_90;
                r1_18 = frame->word_98;
                GridMap__place_item_at_world(r0_40, r1_18, r2_22, r3_19);
                r1 = guest::cpu()->r[1];
                r2 = guest::cpu()->r[2];
                r3 = guest::cpu()->r[3];
                frame->word_64 = 1;
L_526d78:;
            }
        }
        r9 += 1u;
        zf_1 = r9 == 0x1388u;  // (from the original)
        if (r9 < 0x1388u || zf_1) {  // (from the original)
            zf_1 = frame->word_64 == 0;
        }
        guest::preempt();
    } while (zf_1);
    gptr<Local_005269e8_ea_5> ea_5 = gptr<Local_005269e8_ea_5>(frame.at(0x9c).addr());  // (from the original)
    u32 r4_4 = ea_5->word_0;
    u32 r5_2 = ea_5->word_4;
    u32 r6_2 = ea_5->word_8;
    u32 r7_2 = ea_5->word_c;
    u32 r8_1 = ea_5->word_10;
    u32 r9_1 = ea_5->word_14;
    u32 r10_1 = ea_5->word_18;
    u32 r11_1 = ea_5->word_1c;
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[4] = r4_4;
    guest::cpu()->r[5] = r5_2;
    guest::cpu()->r[6] = r6_2;
    guest::cpu()->r[7] = r7_2;
    guest::cpu()->r[8] = r8_1;
    guest::cpu()->r[9] = r9_1;
    guest::cpu()->r[10] = r10_1;
    guest::cpu()->r[11] = r11_1;
}

}  // namespace d_005269e8
GUEST_EXPORT(0x005269e8, d_005269e8::place_items_by_terrain);

// f_00526ea0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether the two cells below a point are not shore (terrains 0x14, 0x31-0x33) holding a tree-like item (types 4, 6 or
// 8).
namespace d_00526ea0 {

struct __attribute__((packed)) Local_00526ea0_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_00526ea0_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_00526ea0_ea_1, word_4, 0x4);

struct __attribute__((packed)) Local_00526ea0_ea_2 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_00526ea0_ea_2, word_0, 0x0);
GUEST_OFFSET(Local_00526ea0_ea_2, word_4, 0x4);

struct __attribute__((packed)) Local_00526ea0_r3_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_00526ea0_r3_1, word_0, 0x0);
GUEST_OFFSET(Local_00526ea0_r3_1, word_4, 0x4);

struct __attribute__((packed)) Local_00526ea0_r3_3 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_00526ea0_r3_3, word_0, 0x0);
GUEST_OFFSET(Local_00526ea0_r3_3, word_4, 0x4);

struct __attribute__((packed)) Local_00526ea0_r3_5 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_00526ea0_r3_5, word_0, 0x0);
GUEST_OFFSET(Local_00526ea0_r3_5, word_4, 0x4);

struct __attribute__((packed)) Local_00526ea0_r3_6 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_00526ea0_r3_6, word_0, 0x0);
GUEST_OFFSET(Local_00526ea0_r3_6, word_4, 0x4);

struct __attribute__((packed)) Local_00526ea0_r4_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_00526ea0_r4_1, word_0, 0x0);
GUEST_OFFSET(Local_00526ea0_r4_1, word_4, 0x4);

inline constexpr guest::Function<0x002fccdc, u32(u32, u32, u32, u32)> indexed_item_type;
inline constexpr guest::Function<0x002feb00, u32(u32, u32, u32, u32)> GridMap__process_world_position;
inline constexpr guest::Function<0x0052ed04, u32(u32, u32, u32, u32)> GridPoint__set_tile_in_block;
inline constexpr guest::Function<0x0052edfc, u32(u32, u32, u32, u32)> block_of_cell;
inline constexpr guest::Function<0x0075291c, u32(u32, u32, u32, u32)> GridMap__large_cell_at;
inline constexpr guest::Function<0x0075d608, u32(u32, u32, u32, u32)> GridCellLarge__terrain_at;

struct __attribute__((packed)) Frame_00526ea0 {
    u32 word_0;
    u32 word_4;
    u8 unknown_8[0x1c];  // (not read or written by name)
};
GUEST_OFFSET(Frame_00526ea0, word_0, 0x0);
GUEST_OFFSET(Frame_00526ea0, word_4, 0x4);
GUEST_SIZE(Frame_00526ea0, 0x24);

u32 cell_below_is_free_shore(u32 r0, gptr<GridPoint> grid_point, u32 r2_unused, u32 r3) {
    guest::StackFrameOf<Frame_00526ea0> frame;  // the original's stack frame
    u32 r2_1 = u32(grid_point->y) + 1u;
    gptr<Local_00526ea0_ea_1> ea_1 = gptr<Local_00526ea0_ea_1>(frame.at(0).addr());
    ea_1->word_0 = u32(grid_point->x);
    ea_1->word_4 = r2_1;
    u32 r2_2 = u32(grid_point->y) + 2u;
    gptr<Local_00526ea0_ea_2> ea_2 = gptr<Local_00526ea0_ea_2>(frame.at(8).addr());
    ea_2->word_0 = u32(grid_point->x);
    ea_2->word_4 = r2_2;
    u32 r7_1 = frame.at(0).addr();
    block_of_cell(frame.at(0x10).addr(), r7_1, r2_2, r3);  // (from the original)
    gptr<Local_00526ea0_r3_1> r3_1 = gptr<Local_00526ea0_r3_1>(frame.at(0x10).addr());  // (from the original)
    u32 large_cell_3 = GridMap__large_cell_at(r0, r3_1->word_0, r3_1->word_4, r3_1.addr());
    if (large_cell_3 != 0) {
        GridPoint__set_tile_in_block(frame.at(0x18).addr(), r7_1, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        gptr<Local_00526ea0_r3_3> r3_3 = gptr<Local_00526ea0_r3_3>(frame.at(0x18).addr());  // (from the original)
        u32 terrain_3 = GridCellLarge__terrain_at(large_cell_3, r3_3->word_0, r3_3->word_4, r3_3.addr());
        if (terrain_3 == 0x14u || terrain_3 == 0x31u || terrain_3 == 0x32u || terrain_3 == 0x33u) {  // (from the original)
            u32 item_3 = GridMap__process_world_position(r0, frame->word_0, frame->word_4, 0u);
            if (item_3 != 0) {
                u32 r0_6 = indexed_item_type(item_3, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
                if (r0_6 == 4u || r0_6 == 8u || r0_6 == 6u) {
                    return 1u;
                }
            }
            u32 tile = frame.at(8).addr();
            if (r0 != 0) {
                block_of_cell(frame.at(0x10).addr(), tile, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
                gptr<Local_00526ea0_r3_5> r3_5 = gptr<Local_00526ea0_r3_5>(frame.at(0x10).addr());  // (from the original)
                u32 r1_5 = r3_5->word_0;
                u32 r2_8 = r3_5->word_4;
                u32 large_cell_4 = GridMap__large_cell_at(r0, r1_5, r2_8, r3_5.addr());
                if (large_cell_4 == 0) {
                    return 1u;
                }
                GridPoint__set_tile_in_block(frame.at(0x18).addr(), tile, r2_8, r3_5.addr());  // (from the original)
                gptr<Local_00526ea0_r3_6> r3_6 = gptr<Local_00526ea0_r3_6>(frame.at(0x18).addr());  // (from the original)
                u32 terrain_4 = GridCellLarge__terrain_at(large_cell_4, r3_6->word_0, r3_6->word_4, r3_6.addr());
                if (terrain_4 != 0x14u && terrain_4 != 0x31u && terrain_4 != 0x32u && terrain_4 != 0x33u) {  // (from the original)
                    goto L_526f38;
                }
                gptr<Local_00526ea0_r4_1> r4_1 = gptr<Local_00526ea0_r4_1>(frame.at(8).addr());
                u32 r1_7 = r4_1->word_0;
                u32 r2_10 = r4_1->word_4;
                u32 item_4 = GridMap__process_world_position(r0, r1_7, r2_10, 0u);
                if (item_4 != 0) {
                    u32 r0_12 = indexed_item_type(item_4, guest::cpu()->r[1], r2_10, 0u);
                    if (r0_12 == 4u || r0_12 == 8u || r0_12 == 6u) {
                        return 1u;
                    }
                }
                return 0u;
            }
            return 1u;
        }
L_526f38:;
    }
    return 1u;
}

}  // namespace d_00526ea0
GUEST_EXPORT_FRAMED(0x00526ea0, d_00526ea0::cell_below_is_free_shore, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_00527088: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Places items on the map by the terrain of each cell (the second routine).
namespace d_00527088 {

struct __attribute__((packed)) Local_00527088_ea_1 {
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
GUEST_OFFSET(Local_00527088_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_00527088_ea_1, word_4, 0x4);
GUEST_OFFSET(Local_00527088_ea_1, word_8, 0x8);
GUEST_OFFSET(Local_00527088_ea_1, word_c, 0xc);
GUEST_OFFSET(Local_00527088_ea_1, word_10, 0x10);
GUEST_OFFSET(Local_00527088_ea_1, word_14, 0x14);
GUEST_OFFSET(Local_00527088_ea_1, word_18, 0x18);
GUEST_OFFSET(Local_00527088_ea_1, word_1c, 0x1c);
GUEST_OFFSET(Local_00527088_ea_1, word_20, 0x20);
GUEST_OFFSET(Local_00527088_ea_1, word_24, 0x24);
GUEST_OFFSET(Local_00527088_ea_1, word_28, 0x28);
GUEST_OFFSET(Local_00527088_ea_1, word_2c, 0x2c);
GUEST_OFFSET(Local_00527088_ea_1, word_30, 0x30);

struct __attribute__((packed)) Local_00527088_ea_5 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_00527088_ea_5, word_0, 0x0);
GUEST_OFFSET(Local_00527088_ea_5, word_4, 0x4);

struct __attribute__((packed)) Local_00527088_ea_6 {
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
GUEST_OFFSET(Local_00527088_ea_6, word_0, 0x0);
GUEST_OFFSET(Local_00527088_ea_6, word_4, 0x4);
GUEST_OFFSET(Local_00527088_ea_6, word_8, 0x8);
GUEST_OFFSET(Local_00527088_ea_6, word_c, 0xc);
GUEST_OFFSET(Local_00527088_ea_6, word_10, 0x10);
GUEST_OFFSET(Local_00527088_ea_6, word_14, 0x14);
GUEST_OFFSET(Local_00527088_ea_6, word_18, 0x18);
GUEST_OFFSET(Local_00527088_ea_6, word_1c, 0x1c);
GUEST_OFFSET(Local_00527088_ea_6, word_20, 0x20);

struct __attribute__((packed)) Local_00527088_r3_8 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_00527088_r3_8, word_0, 0x0);
GUEST_OFFSET(Local_00527088_r3_8, word_4, 0x4);

struct __attribute__((packed)) Local_00527088_r3_9 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_00527088_r3_9, word_0, 0x0);
GUEST_OFFSET(Local_00527088_r3_9, word_4, 0x4);

struct __attribute__((packed)) Local_00527088_r4_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_00527088_r4_1, word_0, 0x0);
GUEST_OFFSET(Local_00527088_r4_1, word_4, 0x4);

struct __attribute__((packed)) Local_00527088_r9_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_00527088_r9_1, word_0, 0x0);
GUEST_OFFSET(Local_00527088_r9_1, word_4, 0x4);

inline constexpr guest::Function<0x002fc994, u32(u32, u32, u32, u32)> GridMap__place_item_at_world;
inline constexpr guest::Function<0x002fcaf4, u32(u32, u32, u32, u32)> Item__is_empty;
inline constexpr guest::Function<0x002feb00, u32(u32, u32, u32, u32)> GridMap__process_world_position;
inline constexpr guest::Function<0x00526ea0, u32(u32, u32)> cell_below_is_free_shore;
inline constexpr guest::Function<0x0052ed04, u32(u32, u32, u32, u32)> GridPoint__set_tile_in_block;
inline constexpr guest::Function<0x0052edfc, u32(u32, u32, u32, u32)> block_of_cell;
inline constexpr guest::Function<0x0052f0c0, u32(u32, u32)> copy_construct_word_pair;
inline constexpr guest::Function<0x0052f0dc, u32(u32, u32, u32, u32)> construct_word_pair;
inline constexpr guest::Function<0x0055cb58, u32(u32, u32)> Xorshift128__next_0055cb58;
inline constexpr guest::Function<0x006fa1fc, u32(u32, u32)> find_free_cell_in_rect;
inline constexpr guest::Function<0x0074818c, u32(u32, u32)> grid_points_differ;
inline constexpr guest::Function<0x007482bc, u32(u32, u32, u32, u32)> GridRect__width;
inline constexpr guest::Function<0x00748310, u32(u32)> GridRect__height_2;
inline constexpr guest::Function<0x0075291c, u32(u32, u32, u32, u32)> GridMap__large_cell_at;
inline constexpr guest::Function<0x0075d608, u32(u32, u32, u32, u32)> GridCellLarge__terrain_at;

struct __attribute__((packed)) Frame_00527088 {
    u32 word_0;
    u8 unknown_4[0x20];  // (not read or written by name)
    u32 word_24;
    u32 word_28;
    u8 unknown_2c[0x20];  // (not read or written by name)
    u32 word_4c;
    u8 unknown_50[0x4];  // (not read or written by name)
    u32 word_54;
    u8 unknown_58[0x28];  // (not read or written by name)
};
GUEST_OFFSET(Frame_00527088, word_0, 0x0);
GUEST_OFFSET(Frame_00527088, word_24, 0x24);
GUEST_OFFSET(Frame_00527088, word_28, 0x28);
GUEST_OFFSET(Frame_00527088, word_4c, 0x4c);
GUEST_OFFSET(Frame_00527088, word_54, 0x54);
GUEST_SIZE(Frame_00527088, 0x80);

void place_items_by_terrain_2(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_00527088> frame;  // the original's stack frame
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r10 = guest::cpu()->r[10];
    u32 r11 = guest::cpu()->r[11];
    u32 r14 = guest::cpu()->r[14];
    gptr<Local_00527088_ea_1> ea_1 = gptr<Local_00527088_ea_1>(frame.at(0x4c).addr());  // (from the original)
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
    r6 = r3;
    r8 = r1;
    r11 = 0u;
    u32 r0_1 = frame->word_4c;
    frame->word_28 = r0_1;
    frame->word_24 = r0_1;
    construct_word_pair(frame.at(0x30).addr(), r1, r2, r3);  // (from the original)
    find_free_cell_in_rect(frame.at(0x30).addr(), frame.at(0x34).addr());  // (from the original)
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r5 = 0u;
L_5270c0:;
    gptr<Local_00527088_r4_1> r4_1 = gptr<Local_00527088_r4_1>(frame.at(8).addr());
    u32 r0_4 = GridRect__width(r8, r1, r2, r3);
    u32 r0_5 = GridRect__height_2(r8);
    copy_construct_word_pair(r4_1.addr(), r8);
    u32 r0_6 = Xorshift128__next_0055cb58(r6, guest::cpu()->r[1]);
    u32 r1_4 = u64(r0_6) * r0_4 >> 0x20;  // (from the original)
    r4_1->word_0 = r4_1->word_0 + r1_4;
    u32 r0_7 = Xorshift128__next_0055cb58(r6, r1_4);
    r4_1->word_4 = u32(u64(r0_7) * r0_5 >> 0x20) + r4_1->word_4;  // (from the original)
    u32 r0_9 = cell_below_is_free_shore(frame->word_4c, frame.at(8).addr());
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0_9 == 0) {
        block_of_cell(frame.at(0x40).addr(), frame.at(8).addr(), r2, r3);  // (from the original)
        u32 r0_12 = grid_points_differ(frame.at(0x40).addr(), frame.at(0x30).addr());  // (from the original)
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (r0_12 != 0) {
            u32 tile = frame.at(8).addr();
            if (frame->word_28 != 0) {
                block_of_cell(frame.at(0x38).addr(), tile, r2, r3);  // (from the original)
                gptr<Local_00527088_r3_8> r3_8 = gptr<Local_00527088_r3_8>(frame.at(0x38).addr());  // (from the original)
                u32 large_cell_2 = GridMap__large_cell_at(frame->word_28, r3_8->word_0, r3_8->word_4, r3_8.addr());
                r1 = guest::cpu()->r[1];
                r2 = guest::cpu()->r[2];
                r3 = guest::cpu()->r[3];
                if (large_cell_2 != 0) {
                    GridPoint__set_tile_in_block(frame.at(0x10).addr(), tile, r2, r3);  // (from the original)
                    gptr<Local_00527088_r3_9> r3_9 = gptr<Local_00527088_r3_9>(frame.at(0x10).addr());  // (from the original)
                    u32 terrain_2 = GridCellLarge__terrain_at(large_cell_2, r3_9->word_0, r3_9->word_4, r3_9.addr());
                    r1 = guest::cpu()->r[1];
                    r2 = guest::cpu()->r[2];
                    r3 = guest::cpu()->r[3];
                    if (terrain_2 == 0x14u || terrain_2 == 0x31u || terrain_2 == 0x32u || terrain_2 == 0x33u) {  // (from the original)
                        goto L_5271f0;
                    }
                }
                goto L_527294;
L_5271f0:;
                u32 r0_18 = frame->word_24;
                if (r0_18 != 0) {
                    gptr<Local_00527088_r9_1> r9_1 = gptr<Local_00527088_r9_1>(frame.at(8).addr());
                    u32 r4_3 = 0u;
                    u32 r1_10 = r9_1->word_0;
                    u32 r2_10 = r9_1->word_4;
                    u32 r7_1 = r4_3;
                    u32 item_3 = GridMap__process_world_position(r0_18, r1_10, r2_10, r4_3);
                    u32 item_4 = GridMap__process_world_position(frame->word_24, r9_1->word_0, r9_1->word_4, 1u);
                    r1 = guest::cpu()->r[1];
                    r2 = guest::cpu()->r[2];
                    r3 = guest::cpu()->r[3];
                    if (item_3 != 0) {
                        u32 is_empty_3 = Item__is_empty(item_3, r1, r2, r3);
                        r1 = guest::cpu()->r[1];
                        r2 = guest::cpu()->r[2];
                        r3 = guest::cpu()->r[3];
                        if (is_empty_3 == 0) {
                            r4_3 = 1u;
                        }
                    }
                    if (item_4 != 0) {
                        u32 is_empty_4 = Item__is_empty(item_4, r1, r2, r3);
                        r1 = guest::cpu()->r[1];
                        r2 = guest::cpu()->r[2];
                        r3 = guest::cpu()->r[3];
                        if (is_empty_4 == 0) {
                            r7_1 = 1u;
                        }
                    }
                    if ((r4_3 | r7_1) != 0) {
                        goto L_527294;
                    }
                }
                frame->word_0 = 0;
                u32 r0_24 = frame->word_4c;
                u32 r1_12 = frame->word_54;
                gptr<Local_00527088_ea_5> ea_5 = gptr<Local_00527088_ea_5>(frame.at(8).addr());
                GridMap__place_item_at_world(r0_24, r1_12, ea_5->word_0, ea_5->word_4);
                r1 = guest::cpu()->r[1];
                r2 = guest::cpu()->r[2];
                r3 = guest::cpu()->r[3];
                r11 = 1u;
            }
        }
L_527294:;
    }
    r5 += 1u;
    if (!(r5 > 0x1388u)) {  // (from the original)
        if (r11 == 0) {
            guest::preempt();
            goto L_5270c0;
        }
    }
    gptr<Local_00527088_ea_6> ea_6 = gptr<Local_00527088_ea_6>(frame.at(0x5c).addr());  // (from the original)
    u32 r4_4 = ea_6->word_0;
    u32 r5_1 = ea_6->word_4;
    u32 r6_1 = ea_6->word_8;
    u32 r7_2 = ea_6->word_c;
    u32 r8_1 = ea_6->word_10;
    u32 r9_2 = ea_6->word_14;
    u32 r10_1 = ea_6->word_18;
    u32 r11_1 = ea_6->word_1c;
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[4] = r4_4;
    guest::cpu()->r[5] = r5_1;
    guest::cpu()->r[6] = r6_1;
    guest::cpu()->r[7] = r7_2;
    guest::cpu()->r[8] = r8_1;
    guest::cpu()->r[9] = r9_2;
    guest::cpu()->r[10] = r10_1;
    guest::cpu()->r[11] = r11_1;
}

}  // namespace d_00527088
GUEST_EXPORT(0x00527088, d_00527088::place_items_by_terrain_2);

// f_00527528: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00527528 {

struct __attribute__((packed)) Local_00527528_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
};
GUEST_OFFSET(Local_00527528_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_00527528_ea_1, word_4, 0x4);
GUEST_OFFSET(Local_00527528_ea_1, word_8, 0x8);
GUEST_OFFSET(Local_00527528_ea_1, word_c, 0xc);
GUEST_OFFSET(Local_00527528_ea_1, word_10, 0x10);
GUEST_OFFSET(Local_00527528_ea_1, word_14, 0x14);

struct __attribute__((packed)) Local_00527528_ea_2 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
};
GUEST_OFFSET(Local_00527528_ea_2, word_0, 0x0);
GUEST_OFFSET(Local_00527528_ea_2, word_4, 0x4);
GUEST_OFFSET(Local_00527528_ea_2, word_8, 0x8);
GUEST_OFFSET(Local_00527528_ea_2, word_c, 0xc);
GUEST_OFFSET(Local_00527528_ea_2, word_10, 0x10);
GUEST_OFFSET(Local_00527528_ea_2, word_14, 0x14);

struct __attribute__((packed)) Local_00527528_r0_4 {
    float float_0;
    float float_4;
    float float_8;
    float float_c;
    float float_10;
    float float_14;
};
GUEST_OFFSET(Local_00527528_r0_4, float_0, 0x0);
GUEST_OFFSET(Local_00527528_r0_4, float_4, 0x4);
GUEST_OFFSET(Local_00527528_r0_4, float_8, 0x8);
GUEST_OFFSET(Local_00527528_r0_4, float_c, 0xc);
GUEST_OFFSET(Local_00527528_r0_4, float_10, 0x10);
GUEST_OFFSET(Local_00527528_r0_4, float_14, 0x14);

struct __attribute__((packed)) Local_00527528_r7_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
};
GUEST_OFFSET(Local_00527528_r7_1, word_0, 0x0);
GUEST_OFFSET(Local_00527528_r7_1, word_4, 0x4);
GUEST_OFFSET(Local_00527528_r7_1, word_8, 0x8);
GUEST_OFFSET(Local_00527528_r7_1, word_c, 0xc);
GUEST_OFFSET(Local_00527528_r7_1, word_10, 0x10);
GUEST_OFFSET(Local_00527528_r7_1, word_14, 0x14);

struct __attribute__((packed)) Local_00527528_r7_2 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
};
GUEST_OFFSET(Local_00527528_r7_2, word_0, 0x0);
GUEST_OFFSET(Local_00527528_r7_2, word_4, 0x4);
GUEST_OFFSET(Local_00527528_r7_2, word_8, 0x8);
GUEST_OFFSET(Local_00527528_r7_2, word_c, 0xc);
GUEST_OFFSET(Local_00527528_r7_2, word_10, 0x10);
GUEST_OFFSET(Local_00527528_r7_2, word_14, 0x14);

inline constexpr u32 structure_lists_b_address = 0x00ab7df4u;
inline constexpr guest::Function<0x00314a1c, u32(u32, u32, u32, u32)> ListCursor__end;
inline constexpr guest::Function<0x00314a9c, u32(u32, u32)> ListCursor__begin;
inline constexpr guest::Function<0x00314b04, u32(u32, u32, u32, u32)> handles_differ;
inline constexpr guest::Function<0x00314b58, u32(u32, u32, u32, u32)> ListCursor__next;

struct __attribute__((packed)) Frame_00527528 {
    u8 unknown_0[0x3c];  // (not read or written by name)
    u32 word_3c;
    u8 unknown_40[0x3c];  // (not read or written by name)
};
GUEST_OFFSET(Frame_00527528, word_3c, 0x3c);
GUEST_SIZE(Frame_00527528, 0x7c);

u32 find_cell_of_id(u32 r0, u32 r1, u32 r2, u32 r3, float S0, float S1, float S2, float S3, float S4, float S5) {
    guest::StackFrameOf<Frame_00527528> frame;  // the original's stack frame
    u32 r2_3 = 0;
    u32 r3_3 = 0;
    u32 r0_6 = 0;
    gptr<Local_00527528_ea_2> ea_2 = gptr<Local_00527528_ea_2>(0u);
    u32 r1_4 = 0;
    u32 r6_3 = 0;
    u32 r12_2 = 0;
    gptr<Local_00527528_r7_2> r7_2 = gptr<Local_00527528_r7_2>(0u);
    u32 r8 = r0;
    u32 r9 = r1;
    u32 r4 = r2;
    u32 r5 = 0u;
    do {
        u32 r1_1 = structure_lists_b_address;
        u32 r0_1 = r5 & 0xffu;  // (from the original)
        if (r0_1 < 0xeu) {  // (from the original)
            r1_1 += (r0_1 << 2);
        }
        u32 list = *gptr<u32>(r1_1);
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        guest::cpu()->s[2] = S2;
        guest::cpu()->s[3] = S3;
        guest::cpu()->s[4] = S4;
        guest::cpu()->s[5] = S5;
        ListCursor__end(frame.at(0x60).addr(), list, r2, r3);  // (from the original)
        ListCursor__begin(frame.at(0x48).addr(), list);  // (from the original)
        gptr<Local_00527528_r0_4> r0_4 = gptr<Local_00527528_r0_4>(frame.at(0x60).addr());  // (from the original)
        u32 r7 = frame.at(0x18).addr();  // (from the original)
        float S0_2 = r0_4->float_0;
        float S1_2 = r0_4->float_4;
        float S2_2 = r0_4->float_8;
        float S3_2 = r0_4->float_c;
        float S4_2 = r0_4->float_10;
        float S5_2 = r0_4->float_14;
        u32 cursor = frame.at(0x48).addr();  // (from the original)
        *gptr<u32>(r7) = std::bit_cast<u32>(S0_2);
        *gptr<u32>(r7 + 4) = std::bit_cast<u32>(S1_2);
        *gptr<u32>(r7 + 8) = std::bit_cast<u32>(S2_2);
        *gptr<u32>(r7 + 0xc) = std::bit_cast<u32>(S3_2);  // (from the original)
        *gptr<u32>(r7 + 0x10) = std::bit_cast<u32>(S4_2);  // (from the original)
        *gptr<u32>(r7 + 0x14) = std::bit_cast<u32>(S5_2);  // (from the original)
        guest::cpu()->s[0] = S0_2;
        guest::cpu()->s[1] = S1_2;
        guest::cpu()->s[2] = S2_2;
        guest::cpu()->s[3] = S3_2;
        guest::cpu()->s[4] = S4_2;
        guest::cpu()->s[5] = S5_2;
        u32 r0_5 = handles_differ(cursor, r7, guest::cpu()->r[2], guest::cpu()->r[3]);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        S0 = guest::cpu()->s[0];
        S1 = guest::cpu()->s[1];
        S2 = guest::cpu()->s[2];
        S3 = guest::cpu()->s[3];
        S4 = guest::cpu()->s[4];
        S5 = guest::cpu()->s[5];
        if (r0_5 != 0) {
            do {
                u32 r1_2 = *gptr<u8>(cursor + 0x10u);  // (from the original)
                if (r4 == r1_2) {
                    gptr<Local_00527528_ea_1> ea_1 = gptr<Local_00527528_ea_1>(frame.at(0x48).addr());  // (from the original)
                    u32 r1_3 = ea_1->word_4;
                    r2_3 = ea_1->word_8;
                    r3_3 = ea_1->word_c;
                    u32 r6_2 = ea_1->word_10;
                    u32 r12_1 = ea_1->word_14;
                    gptr<Local_00527528_r7_1> r7_1 = gptr<Local_00527528_r7_1>(frame.at(0x30).addr());  // (from the original)
                    r7_1->word_0 = ea_1->word_0;
                    r7_1->word_4 = r1_3;
                    r7_1->word_8 = r2_3;
                    r7_1->word_c = r3_3;
                    r7_1->word_10 = r6_2;
                    r7_1->word_14 = r12_1;
                    goto L_5275f0;
                }
                guest::cpu()->s[0] = S0;
                guest::cpu()->s[1] = S1;
                guest::cpu()->s[2] = S2;
                guest::cpu()->s[3] = S3;
                guest::cpu()->s[4] = S4;
                guest::cpu()->s[5] = S5;
                ListCursor__next(cursor, r1_2, r2, r3);
                r0_6 = handles_differ(cursor, r7, guest::cpu()->r[2], guest::cpu()->r[3]);
                r2 = guest::cpu()->r[2];
                r3 = guest::cpu()->r[3];
                S0 = guest::cpu()->s[0];
                S1 = guest::cpu()->s[1];
                S2 = guest::cpu()->s[2];
                S3 = guest::cpu()->s[3];
                S4 = guest::cpu()->s[4];
                S5 = guest::cpu()->s[5];
                guest::preempt();
            } while (r0_6 != 0);
        }
        ea_2 = gptr<Local_00527528_ea_2>(frame.at(0x18).addr());  // (from the original)
        r1_4 = ea_2->word_4;
        r2_3 = ea_2->word_8;
        r3_3 = ea_2->word_c;
        r6_3 = ea_2->word_10;
        r12_2 = ea_2->word_14;
        r7_2 = gptr<Local_00527528_r7_2>(frame.at(0x30).addr());  // (from the original)
        r7_2->word_0 = ea_2->word_0;
        r7_2->word_4 = r1_4;
        r7_2->word_8 = r2_3;
        r7_2->word_c = r3_3;
        r7_2->word_10 = r6_3;
        r7_2->word_14 = r12_2;
L_5275f0:;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        guest::cpu()->s[2] = S2;
        guest::cpu()->s[3] = S3;
        guest::cpu()->s[4] = S4;
        guest::cpu()->s[5] = S5;
        u32 r0_8 = handles_differ(frame.at(0x30).addr(), frame.at(0x60).addr(), r2_3, r3_3);  // (from the original)
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        S0 = guest::cpu()->s[0];
        S1 = guest::cpu()->s[1];
        S2 = guest::cpu()->s[2];
        S3 = guest::cpu()->s[3];
        S4 = guest::cpu()->s[4];
        S5 = guest::cpu()->s[5];
        if (r0_8 != 0) {
            *gptr<u32>(r8) = *gptr<u32>(frame.at(0x30).addr() + 8u);  // (from the original)
            *gptr<u32>(r9) = frame->word_3c;
            return 1u;
        }
        r5 += 1u;
        guest::preempt();
    } while (r5 < 0xeu);  // (from the original)
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return 0u;
}

}  // namespace d_00527528
GUEST_EXPORT_FRAMED(0x00527528, d_00527528::find_cell_of_id, 0x43f0);  // pushes {r4, r5, cursor, r7, r8, r9, lr} first, as the original

// f_00527a2c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Marks the cells of the structures in a block (first pass).
namespace d_00527a2c {

struct __attribute__((packed)) Local_00527a2c_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_00527a2c_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_00527a2c_ea_1, word_4, 0x4);

struct __attribute__((packed)) Local_00527a2c_r0_3 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_00527a2c_r0_3, word_0, 0x0);
GUEST_OFFSET(Local_00527a2c_r0_3, word_4, 0x4);

inline constexpr u32 structure_lists_address = 0x00ab7de4u;
inline constexpr guest::Function<0x001b1208, u32(u32, u32, u32, u32)> Town__find_spot;
inline constexpr guest::Function<0x002e5a4c, u32(u32, u32, u32, u32)> ByteGrid__set;
inline constexpr guest::Function<0x0052f144, u32(u32, u32, u32, u32)> WrappingCursor__advance;
inline constexpr guest::Function<0x0052f224, u32(u32, u32)> copy_word_quad;
inline constexpr guest::Function<0x0057bb98, u32(u32, u32, u32)> block_cell_rect;
inline constexpr guest::Function<0x006cc934, u32(u32, u32, u32, u32)> byte_88bd38_is_f;
inline constexpr guest::Function<0x007481ec, u32(u32, u32)> key_records_differ;
inline constexpr guest::Function<0x0074824c, u32(u32, u32)> make_end_grid_rect_iterator;
inline constexpr guest::Function<0x00748284, u32(u32, u32)> construct_grid_rect_iterator;
inline constexpr guest::Function<0x00748324, u32(u32, u32, u32)> grid_rect_relative_to;
inline constexpr guest::Function<0x0074836c, u32(u32, u32, u32)> grid_rect_translated;

struct __attribute__((packed)) Frame_00527a2c {
    u8 unknown_0[0x8];  // (not read or written by name)
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u8 unknown_18[0x38];  // (not read or written by name)
};
GUEST_OFFSET(Frame_00527a2c, word_8, 0x8);
GUEST_OFFSET(Frame_00527a2c, word_c, 0xc);
GUEST_OFFSET(Frame_00527a2c, word_10, 0x10);
GUEST_OFFSET(Frame_00527a2c, word_14, 0x14);
GUEST_SIZE(Frame_00527a2c, 0x50);

void MapStructures__mark_block_cells_a(u32 map_structures, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_00527a2c> frame;  // the original's stack frame
    u32 r0_16 = 0;
    if (r3 >= 0xfcu) {  // (from the original)
        return;
    }
    u32 r9_1 = r1;
    u32 r8 = *frame.at<u32>(0x70);  // (from the original)
    u32 r6 = r3;
    u32 spot_2 = Town__find_spot(r9_1, r2, r3, r3);
    r1 = guest::cpu()->r[1];
    u32 r5 = spot_2;
    if (spot_2 != 0) {
        u32 r0_2 = structure_lists_address;
        if (map_structures < 4u) {
            r0_2 += (map_structures << 2);
        }
        u32 byte_grid = *gptr<u32>(r0_2);
        gptr<Local_00527a2c_r0_3> r0_3 = gptr<Local_00527a2c_r0_3>(frame.at(0x40).addr());  // (from the original)
        r0_3->word_0 = r9_1;
        r0_3->word_4 = r2;
        u32 r0_4 = block_cell_rect(r0_3.addr(), r9_1, r2);
        copy_word_quad(frame.at(0).addr(), r0_4);
        gptr<Local_00527a2c_ea_1> ea_1 = gptr<Local_00527a2c_ea_1>(frame.at(0x48).addr());  // (from the original)
        ea_1->word_0 = 7;
        ea_1->word_4 = 7;
        grid_rect_relative_to(frame.at(0x30).addr(), frame.at(0).addr(), frame.at(0x48).addr());  // (from the original)
        grid_rect_translated(frame.at(0x10).addr(), frame.at(0x30).addr(), r0_3.addr());  // (from the original)
        make_end_grid_rect_iterator(frame.at(0x20).addr(), frame.at(0x10).addr());  // (from the original)
        construct_grid_rect_iterator(frame.at(0).addr(), frame.at(0x10).addr());  // (from the original)
        u32 r0_10 = key_records_differ(frame.at(0).addr(), frame.at(0x20).addr());  // (from the original)
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (r0_10 != 0) {
            do {
                if (s32(frame->word_8) >= 0 && s32(frame->word_c) >= 0) {
                    u32 r0_11 = frame->word_c - frame->word_14;
                    u32 r0_12 = frame->word_8 - frame->word_10;
                    u32 r4_3 = *gptr<u8>((r5 + (r0_11 + (r0_11 << 2) << 5)) + (r0_12 + (r0_12 << 2) << 1) + 8u);
                    u32 r0_13 = byte_88bd38_is_f(r6, r1, r2, r3);
                    r1 = guest::cpu()->r[1];
                    r2 = guest::cpu()->r[2];
                    r3 = guest::cpu()->r[3];
                    if (r0_13 != 0) {
                        if (r4_3 == 0 || r4_3 == 0xa1u) {  // (from the original)
                            goto L_527be8;
                        }
                    } else if (r4_3 == 0) {
                        goto L_527be8;
                    }
                    ByteGrid__set(byte_grid, frame->word_8, frame->word_c, r8);
                    r1 = guest::cpu()->r[1];
                    r2 = guest::cpu()->r[2];
                    r3 = guest::cpu()->r[3];
                }
L_527be8:;
                WrappingCursor__advance(frame.at(0).addr(), r1, r2, r3);
                r0_16 = key_records_differ(frame.at(0).addr(), frame.at(0x20).addr());  // (from the original)
                r1 = guest::cpu()->r[1];
                r2 = guest::cpu()->r[2];
                r3 = guest::cpu()->r[3];
                guest::preempt();
            } while (r0_16 != 0);
        }
    }
    guest::cpu()->r[1] = r1;
}

}  // namespace d_00527a2c
GUEST_EXPORT_FRAMED(0x00527a2c, d_00527a2c::MapStructures__mark_block_cells_a, 0x47f0);  // pushes {r4, r5, r6, byte_grid, r8, r9, r10, lr} first, as the original

// f_005284b8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Marks the cells of the structures in a block (second pass).
namespace d_005284b8 {

struct __attribute__((packed)) Local_005284b8_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_005284b8_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_005284b8_ea_1, word_4, 0x4);

struct __attribute__((packed)) Local_005284b8_r0_3 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_005284b8_r0_3, word_0, 0x0);
GUEST_OFFSET(Local_005284b8_r0_3, word_4, 0x4);

inline constexpr u32 structure_lists_address = 0x00ab7de4u;
inline constexpr guest::Function<0x001b1208, u32(u32, u32, u32, u32)> Town__find_spot;
inline constexpr guest::Function<0x002e5a4c, u32(u32, u32, u32, u32)> ByteGrid__set;
inline constexpr guest::Function<0x0052f144, u32(u32, u32, u32, u32)> WrappingCursor__advance;
inline constexpr guest::Function<0x0052f224, u32(u32, u32)> copy_word_quad;
inline constexpr guest::Function<0x0057bb98, u32(u32, u32, u32)> block_cell_rect;
inline constexpr guest::Function<0x006cc934, u32(u32, u32, u32, u32)> byte_88bd38_is_f;
inline constexpr guest::Function<0x007481ec, u32(u32, u32)> key_records_differ;
inline constexpr guest::Function<0x0074824c, u32(u32, u32)> make_end_grid_rect_iterator;
inline constexpr guest::Function<0x00748284, u32(u32, u32)> construct_grid_rect_iterator;
inline constexpr guest::Function<0x00748324, u32(u32, u32, u32)> grid_rect_relative_to;
inline constexpr guest::Function<0x0074836c, u32(u32, u32, u32)> grid_rect_translated;

struct __attribute__((packed)) Frame_005284b8 {
    u8 unknown_0[0x8];  // (not read or written by name)
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u8 unknown_18[0x3c];  // (not read or written by name)
};
GUEST_OFFSET(Frame_005284b8, word_8, 0x8);
GUEST_OFFSET(Frame_005284b8, word_c, 0xc);
GUEST_OFFSET(Frame_005284b8, word_10, 0x10);
GUEST_OFFSET(Frame_005284b8, word_14, 0x14);
GUEST_SIZE(Frame_005284b8, 0x54);

u32 MapStructures__mark_block_cells_b(u32 map_structures, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_005284b8> frame;  // the original's stack frame
    u32 r4_4 = 0;
    u32 r1_6 = 0;
    u32 r3_8 = 0;
    u32 r0_16 = 0;
    u32 r8_1 = r1;
    u32 r7 = r3;
    u32 spot_2 = Town__find_spot(r8_1, r2, r3, r3);
    r1 = guest::cpu()->r[1];
    u32 r5 = spot_2;
    if (spot_2 != 0) {
        u32 r0_2 = structure_lists_address;
        if (map_structures < 4u) {
            r0_2 += (map_structures << 2);
        }
        u32 byte_grid = *gptr<u32>(r0_2);
        gptr<Local_005284b8_r0_3> r0_3 = gptr<Local_005284b8_r0_3>(frame.at(0x40).addr());  // (from the original)
        r0_3->word_0 = r8_1;
        r0_3->word_4 = r2;
        u32 r0_4 = block_cell_rect(r0_3.addr(), r8_1, r2);
        copy_word_quad(frame.at(0).addr(), r0_4);
        gptr<Local_005284b8_ea_1> ea_1 = gptr<Local_005284b8_ea_1>(frame.at(0x48).addr());  // (from the original)
        ea_1->word_0 = 7;
        ea_1->word_4 = 7;
        grid_rect_relative_to(frame.at(0x30).addr(), frame.at(0).addr(), frame.at(0x48).addr());  // (from the original)
        grid_rect_translated(frame.at(0x10).addr(), frame.at(0x30).addr(), r0_3.addr());  // (from the original)
        make_end_grid_rect_iterator(frame.at(0x20).addr(), frame.at(0x10).addr());  // (from the original)
        construct_grid_rect_iterator(frame.at(0).addr(), frame.at(0x10).addr());  // (from the original)
        u32 r0_10 = key_records_differ(frame.at(0).addr(), frame.at(0x20).addr());  // (from the original)
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (r0_10 != 0) {
            do {
                if (s32(frame->word_8) >= 0 && s32(frame->word_c) >= 0) {
                    u32 r0_11 = frame->word_c - frame->word_14;
                    u32 r0_12 = frame->word_8 - frame->word_10;
                    u32 r4_3 = *gptr<u8>((r5 + (r0_11 + (r0_11 << 2) << 5)) + (r0_12 + (r0_12 << 2) << 1) + 8u);
                    u32 r0_13 = byte_88bd38_is_f(r7, r1, r2, r3);
                    r1 = guest::cpu()->r[1];
                    r2 = guest::cpu()->r[2];
                    r3 = guest::cpu()->r[3];
                    if (r0_13 == 0) {
                        goto L_528664;
                    }
                    if (r4_3 != 0xa1u) {  // (from the original)
                        goto L_52866c;
                    }
L_528630:;
                    r4_4 = frame->word_c;
                    r1_6 = frame->word_8;
                    r3_8 = ~0u;
                    ByteGrid__set(byte_grid, r1_6, r4_4, r3_8);
                    r1 = guest::cpu()->r[1];
                    r2 = guest::cpu()->r[2];
                    r3 = guest::cpu()->r[3];
                    goto L_52866c;
L_528664:;
                    if (r4_3 != 0) {
                        guest::preempt();
                        goto L_528630;
                    }
                }
L_52866c:;
                WrappingCursor__advance(frame.at(0).addr(), r1, r2, r3);
                r0_16 = key_records_differ(frame.at(0).addr(), frame.at(0x20).addr());  // (from the original)
                r1 = guest::cpu()->r[1];
                r2 = guest::cpu()->r[2];
                r3 = guest::cpu()->r[3];
                guest::preempt();
            } while (r0_16 != 0);
        }
        spot_2 = frame.at(0x10).addr();  // (from the original)
    }
    guest::cpu()->r[1] = r1;
    return spot_2;
}

}  // namespace d_005284b8
GUEST_EXPORT_FRAMED(0x005284b8, d_005284b8::MapStructures__mark_block_cells_b, 0x43f0);  // pushes {r4, r5, byte_grid, r7, r8, r9, lr} first, as the original

// f_00528860: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Converts a UTF-16 string (up to the BMP) to UTF-8 within the buffer size; the number of bytes written.
namespace d_00528860 {


u32 utf16_to_utf8(u32 r0, u32 r1, u32 r2) {
    u32 r12 = r0;
    r0 = 0u;
    u32 r4 = r0;
    u32 r3 = r2 - 1u;
    u32 r5 = 0xc0u;  // (from the original)
    u32 r6 = 0xe0u;  // (from the original)
    u32 r7 = 0x80u;  // (from the original)
    do {
        u32 r2_1 = *gptr<u16>(r12);
        if (r2_1 == 0 || r3 == 0 || r4 != 0) {
            *gptr<u8>(r1) = 0;
            guest::cpu()->r[1] = r1;
            return r0;
        }
        if (r2_1 < 0x80u) {  // (from the original)
            r3 -= 1u;
            r0 += 1u;
            *gptr<u8>(r1) = u8(r2_1);
            r1 += 1u;
        } else if (s32(r2_1) < 0x800) {  // (from the original)
            *gptr<u8>(r1) = u8(r5 | u32(s32(r2_1) >> 6));
            u32 r1_1 = r1 + 1u;
            r3 -= 2u;
            r0 += 2u;
            *gptr<u8>(r1_1) = u8(r2_1 & 0x3fu | 0x80u);  // (from the original)
            r1 = r1_1 + 1u;
        } else if (s32(r2_1) >= 0x10000) {  // (from the original)
            r4 = 1u;
        } else {
            *gptr<u8>(r1) = u8(r6 | u32(s32(r2_1) >> 0xc));  // (from the original)
            u32 r1_2 = r1 + 1u;
            *gptr<u8>(r1_2) = u8(r7 | r2_1 >> 6u & 0x3fu);  // (from the original)
            u32 r1_3 = r1_2 + 1u;
            r3 -= 3u;
            r0 += 3u;
            *gptr<u8>(r1_3) = u8(r2_1 & 0x3fu | 0x80u);  // (from the original)
            r1 = r1_3 + 1u;
        }
        r12 += 2u;
        guest::preempt();
    } while (1);
}

}  // namespace d_00528860
GUEST_EXPORT_FRAMED(0x00528860, d_00528860::utf16_to_utf8, 0x3f0);  // pushes {r4, r5, r6, r7, r8, r9} first, as the original

// f_00528924: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Converts a UTF-8 string of one- to three-byte characters into at most `capacity - 1` UTF-16 units and a terminator;
// an invalid lead byte leaves the output empty.
namespace d_00528924 {


void utf8_to_utf16(u32 src, u32 dst, u32 capacity) {
    u32 r13 = guest::cpu()->r[13];
    r13 -= 0x14;  // (from the original)
    u32 count = 0u;
    u32 out = dst;
    u32 invalid = count;
    capacity -= 1u;
    goto L_5289cc;
L_5289c8:;
    src += 1u;
L_5289cc:;
    u32 lead = *gptr<s8>(src);
    if (lead != 0 && capacity != 0) {
        if (invalid == 0) {
            u32 r12_1 = lead & 0xffu;  // (from the original)
            if (r12_1 < 0x80u) {  // (from the original)
                capacity -= 1u;
                *gptr<u16>(out) = u16(sxtb(r12_1));
                out += 2u;
            } else if (r12_1 - 0xc2u <= 0x1du) {  // (from the original)
                u32 ea_1 = src + 1u;
                src = ea_1;
                capacity -= 1u;
                *gptr<u16>(out) = u16((u32(*gptr<u8>(ea_1)) & 0xffu) + ((lead << 0x18 >> 0x12) - 0x3000u) - 0x80u);  // (from the original)
                out += 2u;
            } else {
                if (r12_1 - 0xe0u > 0xfu) {  // (from the original)
                    invalid = 1u;
                    guest::preempt();
                    goto L_5289c8;
                }
                u32 r12_2 = *gptr<u8>(src + 1u);
                u32 ea_3 = src + 2u;
                src = ea_3;
                capacity -= 1u;
                *gptr<u16>(out) = u16((u32(*gptr<u8>(ea_3)) & 0xffu) + ((lead << 0xc) - 0xe0000u + ((r12_2 & 0xffu) << 6)) - 0x2080u);  // (from the original)
                out += 2u;
            }
            count += 1u;
            guest::preempt();
            goto L_5289c8;
        } else {
            out = dst;
        }
    } else if (invalid == 0) {
    } else {
        out = dst;
    }
    *gptr<u16>(out) = 0;
    r13 += 0x14;  // (from the original)
    guest::cpu()->r[1] = 0u;
    guest::cpu()->r[13] = r13;
}

}  // namespace d_00528924
GUEST_EXPORT(0x00528924, d_00528924::utf8_to_utf16);

// f_00528b00: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Finds the scene entry (0x950464 table) whose name matches, for the current mode.
namespace d_00528b00 {

struct __attribute__((packed)) Object_00528b00_0 {
    u8 unknown_0[0xc];  // (not used here)
    u32 word_c;
};
GUEST_OFFSET(Object_00528b00_0, word_c, 0xc);

inline constexpr u32 scene_entry_a_address = 0x00950464u;
inline constexpr u32 scene_entry_b_address = 0x00950468u;
inline constexpr u32 scene_entry_c_address = 0x0095046cu;
inline constexpr u32 global_00950474_address = 0x00950474u;
inline constexpr u32 global_009504b0_address = 0x009504b0u;
inline guest::global<u32, 0x00950464> scene_entry_a;
inline guest::global<u32, 0x00950468> scene_entry_b;
inline guest::global<u32, 0x0095046c> scene_entry_c;
inline constexpr guest::Function<0x001509dc, u32(u32, u32, u32)> compare_entry;
inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> current_scene_id;
inline constexpr guest::Function<0x002f74e0, u32(u32, u32)> scene_has_flags;
inline constexpr guest::Function<0x002fa90c, u32(u32, u32, u32)> strcmp;

u32 find_scene_entry_by_name(gptr<Object_00528b00_0> arg0, u32 r1, u32 r2) {
    u32 r0 = arg0.addr();
    u32 r4 = 0;
    u32 r6 = 0;
    u32 r0_4 = 0;
    u32 scene = current_scene_id(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    u32 r5 = 0u;
    if (scene == 0x9du) {  // (from the original)
        u32 ea_1 = r0 + 0xcu;  // (from the original)
        u32 r0_2 = *gptr<u32>(ea_1);
        r6 = global_00950474_address;
        if (r0_2 != 0) {
            r5 = r0_2 + ea_1;
        }
        r4 = 0u;
        do {
            r0_4 = strcmp(gptr<u32>(r6)[r4], r5, r2);
            r2 = guest::cpu()->r[2];
            if (r0_4 == 0) {
                return r0_4;
            }
            r4 += 1u;
            guest::preempt();
        } while (r4 < 0xfu);  // (from the original)
        return 1u;
    }
    u32 scene_2 = current_scene_id(scene, guest::cpu()->r[1], r2, guest::cpu()->r[3]);
    if (scene_2 == 0x9eu) {  // (from the original)
        u32 ea_2 = r0 + 0xcu;  // (from the original)
        u32 r0_6 = *gptr<u32>(ea_2);
        if (r0_6 != 0) {
            r5 = r0_6 + ea_2;
        }
        r0_4 = strcmp(*scene_entry_a, r5, guest::cpu()->r[2]);
        return r0_4 == 0 ? r0_4 : 1u;
    }
    u32 scene_3 = current_scene_id(scene_2, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 scene_flagged = scene_has_flags(8u, scene_3);
    r2 = guest::cpu()->r[2];
    u32 ea_3 = r0 + 0xcu;  // (from the original)
    u32 r0_10 = arg0->word_c;
    if (scene_flagged == 0) {
        r6 = global_009504b0_address;
        if (r0_10 != 0) {
            r5 = r0_10 + ea_3;
        }
        r4 = 0u;
        do {
            r0_4 = strcmp(gptr<u32>(r6)[r4], r5, r2);
            r2 = guest::cpu()->r[2];
            if (r0_4 == 0) {
                return r0_4;
            }
            r4 += 1u;
            guest::preempt();
        } while (s32(r4) < 0x3e);  // (from the original)
        u32 scene_4 = current_scene_id(r0_4, guest::cpu()->r[1], r2, guest::cpu()->r[3]);
        if (scene_4 == 1u) {
            r0_4 = strcmp(*scene_entry_c, r5, r2);
            if (r0_4 == 0) {
                return r0_4;
            }
        }
        return 1u;
    }
    u32 r4_1 = r0_10 == 0 ? r5 : ea_3 + r0_10;
    u32 r0_14 = compare_entry(0x528c54u, r4_1, 2u);  // (from the original)
    if (r0_14 == 0) {
        return 1u;
    }
    u32 r0_16 = strcmp(*scene_entry_b, r4_1, 2u);
    if (r0_16 == 0) {
        return 1u;
    } else {
        r0_4 = 0u;
    }
    return r0_4;
}

}  // namespace d_00528b00
GUEST_EXPORT_FRAMED(0x00528b00, d_00528b00::find_scene_entry_by_name, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_00528c6c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The size in bytes of a vertex data type (0x1400-0x1406, from the table at 0x854107).
namespace d_00528c6c {

struct __attribute__((packed)) Object_00528c6c_1 {
    u8 unknown_0[0x854107];  // (not used here)
    u8 byte_854107;
    u8 unknown_854108[0x3];  // (not used here)
    u8 byte_85410b;
    u8 unknown_85410c[0x3];  // (not used here)
    u8 byte_85410f;
    u8 unknown_854110[0x3];  // (not used here)
    u8 byte_854113;
};
GUEST_OFFSET(Object_00528c6c_1, byte_854107, 0x854107);
GUEST_OFFSET(Object_00528c6c_1, byte_85410b, 0x85410b);
GUEST_OFFSET(Object_00528c6c_1, byte_85410f, 0x85410f);
GUEST_OFFSET(Object_00528c6c_1, byte_854113, 0x854113);


u32 gl_type_size(u32 r0, gptr<Object_00528c6c_1> arg1) {
    if (r0 == 0x1400u) {  // (from the original)
        return arg1->byte_854107;
    }
    u32 r0_2 = r0 - 0x1401u;  // (from the original)
    if (r0_2 == 0) {
        return arg1->byte_85410b;
    }
    if (r0_2 == 1u) {
        return arg1->byte_85410f;
    }
    return r0_2 == 5u ? u32(arg1->byte_854113) : 0u;
}

}  // namespace d_00528c6c
GUEST_EXPORT(0x00528c6c, d_00528c6c::gl_type_size);

// f_00528ce0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Writes a GPU command (register 0xf004e) with the depth offset in 24-bit float format.
namespace d_00528ce0 {


u32 write_depth_offset_command(u32 r0_unused, u32 r1_unused, u32 r2, float S0, float S1, float S2) {
    u32 r0_2 = 0;
    float S1_1 = (S2 + S0 * S1) * 128.0f;
    float S0_1 = S1_1 * 5.960465e-8f;
    u32 r0_1 = std::bit_cast<u32>(S0_1);
    u32 r1_1 = r0_1 & ~0x80000000u;  // (from the original)
    if (r1_1 != 0) {
        u32 r1_2 = (r0_1 >> 0x17u & 0xffu) - 0x40u;  // (from the original)
        r0_2 = s32(r1_2) < 0 ? r0_1 >> 0x1f << 0x17 : r0_1 >> 7u & 0xffffu | r1_2 << 0x10 | r0_1 >> 0x1f << 0x17;  // (from the original)
    } else {
        r0_2 = r0_1 >> 7u & 0xffffu | r1_1 << 0x10 | r0_1 >> 0x1f << 0x17;  // (from the original)
    }
    *gptr<u32>(r2) = r0_2;
    u32 r2_1 = r2 + 4u;
    *gptr<u32>(r2_1) = 0xf004e;  // (from the original)
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    return r2_1 + 4u;
}

}  // namespace d_00528ce0
GUEST_EXPORT(0x00528ce0, d_00528ce0::write_depth_offset_command);

// f_00528d60: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Generates the town map: picks the layout pieces at random and fills the grid.
namespace d_00528d60 {

struct __attribute__((packed)) Object_00528d60_0 {
    u8 byte_0;
};
GUEST_OFFSET(Object_00528d60_0, byte_0, 0x0);

struct __attribute__((packed)) Object_00528d60_3 {
    u8 unknown_0[0xec];  // (not used here)
    u32 word_ec;
};
GUEST_OFFSET(Object_00528d60_3, word_ec, 0xec);

struct __attribute__((packed)) Local_00528d60_r0_12 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_00528d60_r0_12, word_0, 0x0);
GUEST_OFFSET(Local_00528d60_r0_12, word_4, 0x4);

inline constexpr u32 tile_tables_ready_address = 0x009825ecu;
inline constexpr u32 town_generator_grid_address = 0x00af8484u;
inline guest::global<u32, 0x009825ec> tile_tables_ready;
inline constexpr guest::Function<0x00201ff4, u32(u32, u32)> Grid2x2__count_items;
inline constexpr guest::Function<0x00202078, u32(u32, u32, u32)> ResourceName__format;
inline constexpr guest::Function<0x002021d4, u32(u32)> mark_cliff_edges;
inline constexpr guest::Function<0x00202370, u32(u32, u32, u32, u32)> place_random_tiles_in_grid;
inline constexpr guest::Function<0x00202740, u32(u32, u32)> ResourceName__load_d;
inline constexpr guest::Function<0x002029fc, u32(u32, u32)> ResourceName__load_b;
inline constexpr guest::Function<0x00202c78, u32(u32, u32)> ResourceName__load_c;
inline constexpr guest::Function<0x00202ef4, u32(u32, u32)> ResourceName__load_a;
inline constexpr guest::Function<0x002ee864, u32(u32, u32, u32)> copy_table_entry;
inline constexpr guest::Function<0x002fe7dd, u32(u32, u32, u32)> static_guard_acquire;
inline constexpr guest::Function<0x0052f074, u32(u32, u32, u32)> zero_word_pair;
inline constexpr guest::Function<0x0052f144, u32(u32, u32)> WrappingCursor__advance;
inline constexpr guest::Function<0x0052f200, u32(u32, u32, u32)> construct_word_quad_from_pairs;
inline constexpr guest::Function<0x0055cb58, u32(u32, u32, u32, u32)> Xorshift128__next_0055cb58;
inline constexpr guest::Function<0x00613734, u32(u32, u32, u32, u32)> tile_address_00613734;
inline constexpr guest::Function<0x007481ec, u32(u32, u32)> key_records_differ;
inline constexpr guest::Function<0x0074824c, u32(u32, u32, u32)> make_end_grid_rect_iterator;
inline constexpr guest::Function<0x00748284, u32(u32, u32)> construct_grid_rect_iterator;

struct __attribute__((packed)) Frame_00528d60 {
    u8 unknown_0[0xa];  // (not read or written by name)
    u8 byte_a;
    u8 unknown_b[0x2d];  // (not read or written by name)
    u32 word_38;
    u32 word_3c;
    u8 unknown_40[0x38];  // (not read or written by name)
};
GUEST_OFFSET(Frame_00528d60, byte_a, 0xa);
GUEST_OFFSET(Frame_00528d60, word_38, 0x38);
GUEST_OFFSET(Frame_00528d60, word_3c, 0x3c);
GUEST_SIZE(Frame_00528d60, 0x78);

void generate_town_map(gptr<Object_00528d60_0> arg0, u32 r1, u32 r2, gptr<Object_00528d60_3> arg3) {
    guest::StackFrameOf<Frame_00528d60> frame;  // the original's stack frame
    u32 r0 = arg0.addr();
    u32 r3 = arg3.addr();
    u32 r0_24 = 0;
    u32 r6 = r1;
    u32 r8 = r0;
    arg0->byte_0 = u8(r2);
    u32 r5_1 = arg3->word_ec;
    u32 r0_1 = Xorshift128__next_0055cb58(r6, r2, r2, r3);
    u32 r2_1 = u64(r0_1) * r5_1 >> 0x20;  // (from the original)
    copy_table_entry(r3, frame.at(0x50).addr(), r2_1);  // (from the original)
    if (r2 == 0) {
        ResourceName__format(frame.at(0).addr(), frame.at(0x50).addr(), 0x894eccu);  // (from the original)
    } else {
        ResourceName__format(frame.at(0).addr(), frame.at(0x50).addr(), 0x894ef6u);  // (from the original)
    }
    frame->byte_a = 4;
    place_random_tiles_in_grid(frame.at(0).addr(), 0u, 1u, r6);
    place_random_tiles_in_grid(frame.at(0).addr(), 0u, 2u, r6);
    place_random_tiles_in_grid(frame.at(0).addr(), 0u, 3u, r6);
    ResourceName__load_d(frame.at(0).addr(), r6);
    ResourceName__load_c(frame.at(0).addr(), r6);
    u32 r0_9 = frame.at(0).addr();
    if (r2 == 0) {
        ResourceName__load_a(r0_9, r6);
    } else {
        ResourceName__load_b(r0_9, r6);
    }
    mark_cliff_edges(frame.at(0).addr());
    u32 r2_6 = guest::cpu()->r[2];
    if ((*tile_tables_ready & 1u) == 0) {
        u32 first_time = static_guard_acquire(tile_tables_ready_address, guest::cpu()->r[1], r2_6);
        r2_6 = guest::cpu()->r[2];
        if (first_time != 0) {
            gptr<Local_00528d60_r0_12> r0_12 = gptr<Local_00528d60_r0_12>(frame.at(0x30).addr());  // (from the original)
            r0_12->word_0 = 6;
            r0_12->word_4 = 5;
            u32 r0_13 = zero_word_pair(r0_12.addr(), 6u, 5u);
            construct_word_quad_from_pairs(town_generator_grid_address, r0_13, r0_12.addr());
            r2_6 = 0x100000u;  // (from the original)
        }
    }
    make_end_grid_rect_iterator(frame.at(0x40).addr(), town_generator_grid_address, r2_6);  // (from the original)
    construct_grid_rect_iterator(frame.at(0x30).addr(), town_generator_grid_address);  // (from the original)
    u32 r0_17 = key_records_differ(frame.at(0x30).addr(), frame.at(0x40).addr());  // (from the original)
    r3 = guest::cpu()->r[3];
    if (r0_17 != 0) {
        u32 r5 = frame.at(0).addr();
        do {
            u32 r0_18 = tile_address_00613734(r8, frame->word_38, frame->word_3c, r3);
            u32 r7_1 = frame->word_38;
            u32 r0_19 = frame->word_3c;
            u32 r0_20 = *gptr<u8>(r7_1 + ((r0_19 << 3) - r0_19 + r5));
            u32 item_count = Grid2x2__count_items(r0_20, r6);
            *gptr<u16>(r0_18) = u16(item_count);
            WrappingCursor__advance(frame.at(0x30).addr(), item_count);  // (from the original)
            r0_24 = key_records_differ(frame.at(0x30).addr(), frame.at(0x40).addr());  // (from the original)
            r3 = guest::cpu()->r[3];
            guest::preempt();
        } while (r0_24 != 0);
    }
}

}  // namespace d_00528d60
GUEST_EXPORT_FRAMED(0x00528d60, d_00528d60::generate_town_map, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_00529334: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The wallpaper of the current room (the default 0x23eb, or the house room's, the villager's, the exhibit's) and its
// flag.
namespace d_00529334 {

struct __attribute__((packed)) Object_00529334_0 {
    u8 unknown_0[0x4];  // (not used here)
    u8 byte_4;
};
GUEST_OFFSET(Object_00529334_0, byte_4, 0x4);

inline constexpr guest::Function<0x002f74c8, u32(u32)> current_scene_id;
inline constexpr guest::Function<0x002f74e0, u32(u32, u32)> scene_has_flags;
inline constexpr guest::Function<0x002fae84, u32(u32)> get_data_base;
inline constexpr guest::Function<0x002fb310, u32(u32)> slot_records_of;
inline constexpr guest::Function<0x002fb328, u32(u32)> get_save_data;
inline constexpr guest::Function<0x002fc20c, u32(u32, u32, u32, u32)> construct_empty_item;
inline constexpr guest::Function<0x002fc8e8, u32(u32, u32)> Item__copy;
inline constexpr guest::Function<0x002fc934, u32(u32, u32)> Item__copy_b;
inline constexpr guest::Function<0x002fcbb0, u32(u32, u32)> construct_item;
inline constexpr guest::Function<0x003058c9, u32(u32, u32)> valid_villager_at;
inline constexpr guest::Function<0x00313440, u32(u32)> flagged_mode_ordinal;
inline constexpr guest::Function<0x006f9c08, u32(u32)> map_record_of_mode;
inline constexpr guest::Function<0x007203f0, u32(u32)> member_address_0x2f6_;
inline constexpr guest::Function<0x0076ce3c, u32(u32, u32)> record_173_address;

void room_wallpaper(gptr<Object_00529334_0> arg0, u32 r1, u32 r2) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 r0_5 = 0;
    u32 r5_1 = 0;
    construct_empty_item(arg0.addr(), r1, r2, guest::cpu()->r[3]);
    construct_item(frame.at(0).addr(), 0x23ebu);  // (from the original)
    Item__copy(arg0.addr(), frame.at(0).addr());
    arg0->byte_4 = 0;
    u32 scene = current_scene_id(0u);
    u32 scene_flagged = scene_has_flags(0x80u, scene);  // (from the original)
    if (scene_flagged != 0) {
        u32 scene_2 = current_scene_id(scene_flagged);
        r0_5 = map_record_of_mode(scene_2);
        r5_1 = r0_5;
        if (r0_5 == 0) {
            return;
        }
    } else {
        u32 scene_3 = current_scene_id(scene_flagged);
        u32 scene_flagged_2 = scene_has_flags(0x40u, scene_3);  // (from the original)
        if (scene_flagged_2 != 0) {
            u32 scene_4 = current_scene_id(scene_flagged_2);
            u32 r0_9 = flagged_mode_ordinal(scene_4);
            u32 data_base_2 = get_data_base(r0_9);
            u32 records_2 = slot_records_of(data_base_2);
            u32 valid_villager_2 = valid_villager_at(records_2 + 4u, r0_9);
            Item__copy_b(frame.at(4).addr(), valid_villager_2 + 0x24a6u);  // (from the original)
            Item__copy(arg0.addr(), frame.at(4).addr());
            return;
        }
        u32 scene_5 = current_scene_id(scene_flagged_2);
        u32 scene_flagged_3 = scene_has_flags(0x2000u, scene_5);  // (from the original)
        if (scene_flagged_3 != 0) {
            u32 scene_6 = current_scene_id(scene_flagged_3);
            u32 r0_18 = scene_6 - 0x56u;  // (from the original)
            u32 r5_2 = r0_18 & 0xffu;  // (from the original)
            u32 save_data_3 = get_save_data(r0_18);
            u32 r0_21 = record_173_address(save_data_3 + 0x6aeb8u, r5_2);  // (from the original)
            u32 r0_23 = member_address_0x2f6_(r0_21 + 2u);
            Item__copy(arg0.addr(), r0_23);
            u32 save_data_4 = get_save_data(arg0.addr());
            u32 r0_26 = record_173_address(save_data_4 + 0x6aeb8u, r5_2);  // (from the original)
            *gptr<u8>(arg0.addr() + 4u) = *gptr<u8>(r0_26 + 0x23u);  // (from the original)
            return;
        }
        u32 scene_7 = current_scene_id(scene_flagged_3);
        u32 scene_flagged_4 = scene_has_flags(0x4000u, scene_7);  // (from the original)
        if (scene_flagged_4 == 0) {
            return;
        }
        u32 scene_8 = current_scene_id(scene_flagged_4);
        r0_5 = map_record_of_mode(scene_8);
        r5_1 = r0_5;
        if (r0_5 == 0) {
            return;
        }
    }
    u32 r0_30 = member_address_0x2f6_(r0_5);
    Item__copy(arg0.addr(), r0_30);
    *gptr<u8>(arg0.addr() + 4u) = *gptr<u8>(r5_1 + 0x21u);  // (from the original)
}

}  // namespace d_00529334
GUEST_EXPORT_FRAMED(0x00529334, d_00529334::room_wallpaper, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0052953c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The flooring of the current room (the default 0x234c, or the house room's, the villager's, the exhibit's) and its
// flag.
namespace d_0052953c {

struct __attribute__((packed)) Object_0052953c_0 {
    u8 unknown_0[0x4];  // (not used here)
    u8 byte_4;
};
GUEST_OFFSET(Object_0052953c_0, byte_4, 0x4);

inline constexpr guest::Function<0x002f74c8, u32(u32)> current_scene_id;
inline constexpr guest::Function<0x002f74e0, u32(u32, u32)> scene_has_flags;
inline constexpr guest::Function<0x002fae84, u32(u32)> get_data_base;
inline constexpr guest::Function<0x002fb310, u32(u32)> slot_records_of;
inline constexpr guest::Function<0x002fb328, u32(u32)> get_save_data;
inline constexpr guest::Function<0x002fc20c, u32(u32, u32, u32, u32)> construct_empty_item;
inline constexpr guest::Function<0x002fc8e8, u32(u32, u32)> Item__copy;
inline constexpr guest::Function<0x002fc934, u32(u32, u32)> Item__copy_b;
inline constexpr guest::Function<0x002fcbb0, u32(u32, u32)> construct_item;
inline constexpr guest::Function<0x003058c9, u32(u32, u32)> valid_villager_at;
inline constexpr guest::Function<0x00313440, u32(u32)> flagged_mode_ordinal;
inline constexpr guest::Function<0x006f9c08, u32(u32)> map_record_of_mode;
inline constexpr guest::Function<0x0072031c, u32(u32)> member_address_0x2f2_;
inline constexpr guest::Function<0x0076ce3c, u32(u32, u32)> record_173_address;

void room_flooring(gptr<Object_0052953c_0> arg0, u32 r1, u32 r2) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 r0_5 = 0;
    u32 r5_1 = 0;
    construct_empty_item(arg0.addr(), r1, r2, guest::cpu()->r[3]);
    construct_item(frame.at(0).addr(), 0x234cu);  // (from the original)
    Item__copy(arg0.addr(), frame.at(0).addr());
    arg0->byte_4 = 0;
    u32 scene = current_scene_id(arg0.addr());
    u32 scene_flagged = scene_has_flags(0x80u, scene);  // (from the original)
    if (scene_flagged != 0) {
        u32 scene_2 = current_scene_id(scene_flagged);
        r0_5 = map_record_of_mode(scene_2);
        r5_1 = r0_5;
        if (r0_5 == 0) {
            return;
        }
    } else {
        u32 scene_3 = current_scene_id(scene_flagged);
        u32 scene_flagged_2 = scene_has_flags(0x40u, scene_3);  // (from the original)
        if (scene_flagged_2 != 0) {
            u32 scene_4 = current_scene_id(scene_flagged_2);
            u32 r0_9 = flagged_mode_ordinal(scene_4);
            u32 data_base_2 = get_data_base(r0_9);
            u32 records_2 = slot_records_of(data_base_2);
            u32 valid_villager_2 = valid_villager_at(records_2 + 4u, r0_9);
            Item__copy_b(frame.at(4).addr(), valid_villager_2 + 0x24a2u);  // (from the original)
            Item__copy(arg0.addr(), frame.at(4).addr());
            *gptr<u8>(arg0.addr() + 4u) = 0;
            return;
        }
        u32 scene_5 = current_scene_id(scene_flagged_2);
        u32 scene_flagged_3 = scene_has_flags(0x2000u, scene_5);  // (from the original)
        if (scene_flagged_3 != 0) {
            u32 scene_6 = current_scene_id(scene_flagged_3);
            u32 save_data_2 = get_save_data(scene_6 - 0x56u);  // (from the original)
            u32 r0_21 = record_173_address(save_data_2 + 0x6aeb8u, scene_6 - 0x56u & 0xffu);  // (from the original)
            r5_1 = r0_21 + 2u;
            u32 r0_23 = member_address_0x2f2_(r0_21 + 2u);
            Item__copy(frame.at(0).addr(), r0_23);
            r0_5 = r5_1;
        } else {
            u32 scene_7 = current_scene_id(scene_flagged_3);
            u32 scene_flagged_4 = scene_has_flags(0x4000u, scene_7);  // (from the original)
            if (scene_flagged_4 == 0) {
                return;
            }
            u32 scene_8 = current_scene_id(scene_flagged_4);
            r0_5 = map_record_of_mode(scene_8);
            r5_1 = r0_5;
            if (r0_5 == 0) {
                return;
            }
        }
    }
    u32 r0_28 = member_address_0x2f2_(r0_5);
    Item__copy(arg0.addr(), r0_28);
    *gptr<u8>(arg0.addr() + 4u) = *gptr<u8>(r5_1 + 0x20u);  // (from the original)
}

}  // namespace d_0052953c
GUEST_EXPORT_FRAMED(0x0052953c, d_0052953c::room_flooring, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_00529c80: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The pool entry of message `id` (below the count at 0x887402) through 0051fc48, unless it is hidden (+0xf); 0
// otherwise.
namespace d_00529c80 {

inline guest::global<u16, 0x00887402> message_label_table;
inline guest::global<u16, 0x0094e476> last_message_id;
inline constexpr guest::Function<0x0051fc48, u32(u32, u32, u32, u32)> VillagerRecords__find_nearest;
inline constexpr guest::Function<0x0051fe30, u32(u32, u32, u32, u32)> read_u32_0x0097528c_;

struct __attribute__((packed)) Frame_00529c80 {
    u32 word_0;
};
GUEST_OFFSET(Frame_00529c80, word_0, 0x0);
GUEST_SIZE(Frame_00529c80, 0x4);

u32 StringPool__find_message(u32 string_pool, u32 talk, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_00529c80> frame;  // the original's stack frame
    u32 r0_2 = 0;
    frame->word_0 = r3;
    u32 r0_1 = *message_label_table;
    if (string_pool >= r0_1) {
        r0_2 = 0u;
    } else {
        *last_message_id = u16(string_pool);
        u32 r0_3 = read_u32_0x0097528c_(r0_1, talk, r2, r3);
        frame->word_0 = r3;
        u32 nearest_2 = VillagerRecords__find_nearest(r0_3, string_pool, talk, r2);
        talk = ~0u;
        u32 r4_1 = nearest_2;
        *last_message_id = u16(talk);
        if (nearest_2 != 0 && u32(*gptr<s8>(nearest_2 + 0xfu)) != 0) {  // (from the original)
            r4_1 = 0u;
        }
        r0_2 = r4_1;
    }
    guest::cpu()->r[1] = talk;
    return r0_2;
}

}  // namespace d_00529c80
GUEST_EXPORT_FRAMED(0x00529c80, d_00529c80::StringPool__find_message, 0x43f0);  // pushes {r4, r5, r6, r7, r8, r9, lr} first, as the original

// f_00529cf4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00529cf4 {


u32 Base__pre_execute() {
    if (1) {
    }
    return 1u;
}

}  // namespace d_00529cf4
GUEST_EXPORT_FRAMED(0x00529cf4, d_00529cf4::Base__pre_execute, 0x4010);  // pushes {r4, lr} first, as the original

// f_00529d08: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The pool entry of message `id` (below the count at 0x887402) through 0051fc14, unless it is hidden (+0xf); 0
// otherwise.
namespace d_00529d08 {

inline guest::global<u16, 0x00887402> message_label_table;
inline guest::global<u16, 0x0094e476> last_message_id;
inline constexpr guest::Function<0x0051fc14, u32(u32, u32, u32, u32)> ResourceTable__load_entry;
inline constexpr guest::Function<0x0051fe30, u32(u32, u32, u32, u32)> read_u32_0x0097528c_;

u32 StringPool__find_message_2(u32 string_pool, u32 notice, u32 r2, u32 r3) {
    u32 r0_1 = *message_label_table;
    if (string_pool < r0_1) {
        *last_message_id = u16(string_pool);
        u32 resource_table = read_u32_0x0097528c_(r0_1, notice, r2, r3);
        u32 r0_3 = ResourceTable__load_entry(resource_table, string_pool, notice, r2);
        notice = ~0u;
        *last_message_id = u16(notice);
        if (r0_3 == 0 || u32(*gptr<s8>(r0_3 + 0xfu)) == 0) {  // (from the original)
            guest::cpu()->r[1] = notice;
            return r0_3;
        }
    }
    guest::cpu()->r[1] = notice;
    return 0u;
}

}  // namespace d_00529d08
GUEST_EXPORT_FRAMED(0x00529d08, d_00529d08::StringPool__find_message_2, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_00529d78: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00529d78 {


u32 base_virtual_11() {
    if (1) {
    }
    return 1u;
}

}  // namespace d_00529d78
GUEST_EXPORT_FRAMED(0x00529d78, d_00529d78::base_virtual_11, 0x4010);  // pushes {r4, lr} first, as the original

// f_00529d8c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00529d8c {


u32 base_virtual_2() {
    if (1) {
    }
    return 1u;
}

}  // namespace d_00529d8c
GUEST_EXPORT_FRAMED(0x00529d8c, d_00529d8c::base_virtual_2, 0x4010);  // pushes {r4, lr} first, as the original

// f_00529da0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00529da0 {


u32 base_virtual_5() {
    if (1) {
    }
    return 1u;
}

}  // namespace d_00529da0
GUEST_EXPORT_FRAMED(0x00529da0, d_00529da0::base_virtual_5, 0x4010);  // pushes {r4, lr} first, as the original

// f_00529ddc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Allocates and zeroes `size` bytes (null when the allocation fails).
namespace d_00529ddc {

inline constexpr guest::Function<0x00301444, u32(u32, u32)> clear;
inline constexpr guest::Function<0x00779500, u32(u32, u32)> allocate_default;

u32 allocate_cleared(u32 size, u32 heap) {
    u32 block = allocate_default(size, heap);
    if (block != 0) {
        clear(block, size);
    }
    return block;
}

}  // namespace d_00529ddc
GUEST_EXPORT_FRAMED(0x00529ddc, d_00529ddc::allocate_cleared, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0052a3b8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0052a3b8 {

struct __attribute__((packed)) Local_0052a3b8_r0_1 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
};
GUEST_OFFSET(Local_0052a3b8_r0_1, word_4, 0x4);

struct __attribute__((packed)) Block {
    u32 vtable;
    u32 word_4;
    u8 byte_8;
    u8 unknown_9[0xf];  // (not used here)
    u8 byte_18;
    u8 unknown_19[0x3];  // (not used here)
    u32 word_1c;
    u32 word_20;
};
GUEST_OFFSET(Block, vtable, 0x0);
GUEST_OFFSET(Block, word_4, 0x4);
GUEST_OFFSET(Block, byte_8, 0x8);
GUEST_OFFSET(Block, byte_18, 0x18);
GUEST_OFFSET(Block, word_1c, 0x1c);
GUEST_OFFSET(Block, word_20, 0x20);

struct __attribute__((packed)) Local_0052a3b8_r0_2 {
    u32 vtable;
    u8 unknown_4[0x14];  // (not used here)
    u8 byte_18;
    u8 unknown_19[0x3];  // (not used here)
    u32 word_1c;
    u32 word_20;
};
GUEST_OFFSET(Local_0052a3b8_r0_2, vtable, 0x0);
GUEST_OFFSET(Local_0052a3b8_r0_2, byte_18, 0x18);
GUEST_OFFSET(Local_0052a3b8_r0_2, word_1c, 0x1c);
GUEST_OFFSET(Local_0052a3b8_r0_2, word_20, 0x20);

struct __attribute__((packed)) Local_0052a3b8_r3_13 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_0052a3b8_r3_13, word_0, 0x0);
GUEST_OFFSET(Local_0052a3b8_r3_13, word_4, 0x4);
GUEST_OFFSET(Local_0052a3b8_r3_13, word_8, 0x8);

struct __attribute__((packed)) Local_0052a3b8_r3_3 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_0052a3b8_r3_3, word_0, 0x0);
GUEST_OFFSET(Local_0052a3b8_r3_3, word_4, 0x4);
GUEST_OFFSET(Local_0052a3b8_r3_3, word_8, 0x8);

inline constexpr u32 vtable_Fade = 0x008f74e0u;
inline guest::global<u32, 0x0085edcc> fade_params_a;
inline guest::global<u32, 0x0085edd0> fade_params_b;
inline guest::global<u32, 0x00952638> global_00952638;
inline guest::global<u32, 0x0095263c> global_0095263c;
inline constexpr guest::Function<0x001207d8, u32(u32)> ssys__ma__lyt__ArcResAcc__ArcResAcc_001207d8;
inline constexpr guest::Function<0x00125aec, u32(u32)> construct_layout_animation;
inline constexpr guest::Function<0x00125e3c, u32(u32, u32, u32, u32)> Layout__Layout;
inline constexpr guest::Function<0x002f825c, u32(u32, u32)> clear_aligned;
inline constexpr guest::Function<0x002fd108, u32(u32, u32, u32)> allocate_on_heap;
inline constexpr guest::Function<0x0052a5ac, u32(u32, u32, u32, u32)> MapView__load_layout;
inline constexpr guest::Function<0x00569d50, u32(u32, u32, u32, u32)> layout_allocator_4;

u32 Fade__Fade(u32 fade, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x20);  // the original's stack frame
    gptr<Local_0052a3b8_r0_1> r0_1 = gptr<Local_0052a3b8_r0_1>(layout_allocator_4(fade, r1, r2, r3));
    gptr<Local_0052a3b8_r0_2> block = gptr<Local_0052a3b8_r0_2>(allocate_on_heap(0x484u, r0_1->word_4, 4u));  // (from the original)
    clear_aligned(block.addr(), 0x484u);  // (from the original)
    *gptr<u32>(block.addr() + 4u) = 0;
    *gptr<u8>(block.addr() + 8u) = 0;
    u32 r1_2 = *fade_params_a;
    u32 r2_2 = *fade_params_b;
    gptr<Local_0052a3b8_r3_3> r3_3 = gptr<Local_0052a3b8_r3_3>(block.addr() + 0xcu);  // (from the original)
    r3_3->word_0 = r1_2;
    r3_3->word_4 = r2_2;
    r3_3->word_8 = 0;
    block->byte_18 = 0;
    block->word_1c = 0;
    block->vtable = vtable_Fade;
    block->word_20 = 0;
    u32 r0_4 = Layout__Layout(block.addr() + 0x24u, r1_2, r2_2, r3_3.addr());  // (from the original)
    u32 r0_6 = ssys__ma__lyt__ArcResAcc__ArcResAcc_001207d8(r0_4 + 0x14cu);  // (from the original)
    u32 r0_7 = r0_6 + 0x248u;  // (from the original)
    construct_layout_animation(r0_7);
    u32 r0_8 = r0_7 + 0x28u;  // (from the original)
    construct_layout_animation(r0_8);
    u32 r0_9 = r0_8 + 0x28u;  // (from the original)
    construct_layout_animation(r0_9);
    u32 r0_10 = r0_9 + 0x28u;  // (from the original)
    construct_layout_animation(r0_10);
    u32 r0_11 = r0_10 + 0x28u;  // (from the original)
    construct_layout_animation(r0_11);
    u32 r0_12 = r0_11 - 0x458u;  // (from the original)
    *global_00952638 = r0_12;
    MapView__load_layout(r0_12, 0u, guest::cpu()->r[2], guest::cpu()->r[3]);
    gptr<Block> block_2 = gptr<Block>(allocate_on_heap(0x484u, r0_1->word_4, 4u));  // (from the original)
    clear_aligned(block_2.addr(), 0x484u);  // (from the original)
    block_2->word_4 = 0;
    block_2->byte_8 = 0;
    u32 r1_10 = *fade_params_a;
    u32 r2_11 = *fade_params_b;
    gptr<Local_0052a3b8_r3_13> r3_13 = gptr<Local_0052a3b8_r3_13>(block_2.addr() + 0xcu);  // (from the original)
    r3_13->word_0 = r1_10;
    r3_13->word_4 = r2_11;
    r3_13->word_8 = 0;
    block_2->byte_18 = 0;
    block_2->word_1c = 0;
    block_2->vtable = vtable_Fade;
    block_2->word_20 = 0;
    u32 r0_15 = Layout__Layout(block_2.addr() + 0x24u, r1_10, r2_11, r3_13.addr());  // (from the original)
    u32 r0_17 = ssys__ma__lyt__ArcResAcc__ArcResAcc_001207d8(r0_15 + 0x14cu);  // (from the original)
    u32 r0_18 = r0_17 + 0x248u;  // (from the original)
    construct_layout_animation(r0_18);
    u32 r0_19 = r0_18 + 0x28u;  // (from the original)
    construct_layout_animation(r0_19);
    u32 r0_20 = r0_19 + 0x28u;  // (from the original)
    construct_layout_animation(r0_20);
    u32 r0_21 = r0_20 + 0x28u;  // (from the original)
    construct_layout_animation(r0_21);
    u32 r0_22 = r0_21 + 0x28u;  // (from the original)
    construct_layout_animation(r0_22);
    u32 r0_23 = r0_22 - 0x458u;  // (from the original)
    *global_0095263c = r0_23;
    frame.release();
    return MapView__load_layout(r0_23, 1u, guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0052a3b8
GUEST_EXPORT(0x0052a3b8, d_0052a3b8::Fade__Fade);

// f_0052a508: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Resets the fade layout: rewinds its fade animation to 0 and hides the fade pane.
namespace d_0052a508 {

struct __attribute__((packed)) Child {
    u8 unknown_0[0xb7];  // (not used here)
    u8 byte_b7;
};
GUEST_OFFSET(Child, byte_b7, 0xb7);

inline constexpr guest::Function<0x004b4fc0, u32(u32, u32, u32, u32)> Layout__find_pane;
inline constexpr guest::Function<0x00568630, u32(u32, u32, u32, u32)> notify_objects_of_list;
inline constexpr guest::Function<0x0056878c, u32(u32, u32)> LayoutObjectWithChild__forward_to_child;
inline constexpr guest::Function<0x00568984, u32(u32, u32, u32, u32)> notify_list_objects;
inline constexpr guest::Function<0x00568c10, u32(u32, u32, u32, u32)> Layout__virtual_3;
inline constexpr guest::Function<0x005697e0, u32(u32)> Animation__set_value;

void FadeLayout__reset(u32 fade_layout, u32 r1_unused, u32 r2_unused, u32 r3, float S0) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 pane_3 = Layout__find_pane(fade_layout + 0x24u, 0x52a590u, 1u, r3);  // (from the original)
    notify_objects_of_list(fade_layout + 0x24u, fade_layout + 0x3b8u, pane_3, 0u);  // (from the original)
    float S0_2 = 0.0f;
    guest::cpu()->s[0] = S0_2;
    Animation__set_value(fade_layout + 0x3b8u);  // (from the original)
    Layout__virtual_3(fade_layout + 0x24u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 pane_4 = Layout__find_pane(fade_layout + 0x24u, 0x52a590u, 1u, guest::cpu()->r[3]);  // (from the original)
    notify_list_objects(fade_layout + 0x24u, fade_layout + 0x3b8u, pane_4, 0u);  // (from the original)
    gptr<Child> child_2 = gptr<Child>(LayoutObjectWithChild__forward_to_child(fade_layout + 0x24u, 0x52a5a0u));  // (from the original)
    u32 r1_5 = u32(child_2->byte_b7) & 0xfeu;  // (from the original)
    child_2->byte_b7 = u8(r1_5);
    frame.release();
    Layout__virtual_3(fade_layout + 0x24u, r1_5, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    return;
}

}  // namespace d_0052a508
GUEST_EXPORT(0x0052a508, d_0052a508::FadeLayout__reset);

// f_0052a870: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Bit 0 when the member handler (+0xc, +0x10) is the one at 0x85edc4, bit 1 when it is the one at 0x85edb4.
namespace d_0052a870 {

struct __attribute__((packed)) Object_0052a870_0 {
    u8 unknown_0[0xc];  // (not used here)
    u32 word_c;
    u32 word_10;
};
GUEST_OFFSET(Object_0052a870_0, word_c, 0xc);
GUEST_OFFSET(Object_0052a870_0, word_10, 0x10);

inline guest::global<u32, 0x0085edb4> global_0085edb4;
inline guest::global<u32, 0x0085edb8> global_0085edb8;
inline guest::global<u32, 0x0085edc4> global_0085edc4;
inline guest::global<u32, 0x0085edc8> global_0085edc8;

u32 handler_is_85edb4_or_85edc4(gptr<Object_0052a870_0> arg0) {
    u32 r4_1 = 0;
    u32 r3_1 = arg0->word_c;
    u32 r1_1 = *global_0085edc8;
    if (r3_1 == *global_0085edc4) {
        if ((r3_1 != 0 || ((arg0->word_10 | r1_1) & 1u) != 0) && arg0->word_10 != r1_1) {
            goto L_52a8b8;
        }
        r4_1 = 1u;
        goto L_52a8bc;
    }
L_52a8b8:;
    r4_1 = 0u;
L_52a8bc:;
    u32 r1_2 = *global_0085edb8;
    if (r3_1 == *global_0085edb4) {
        if ((r3_1 != 0 || ((arg0->word_10 | r1_2) & 1u) != 0) && arg0->word_10 != r1_2) {
            return r4_1;
        }
        return 1u | r4_1;
    }
    return r4_1;
}

}  // namespace d_0052a870
GUEST_EXPORT_FRAMED(0x0052a870, d_0052a870::handler_is_85edb4_or_85edc4, 0x10);  // pushes {r4} first, as the original

// f_0052ab60: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Clears the record and gives it a random item of category 0x33 (of the first five).
namespace d_0052ab60 {

struct __attribute__((packed)) TimedRecord18 {
    u8 unknown_0[0xe];  // (not used here)
    u16 half_e;
    u8 unknown_10[0x6];  // (not used here)
    u8 byte_16;
    u8 byte_17;
    u8 byte_18;
};
GUEST_OFFSET(TimedRecord18, half_e, 0xe);
GUEST_OFFSET(TimedRecord18, byte_16, 0x16);
GUEST_OFFSET(TimedRecord18, byte_17, 0x17);
GUEST_OFFSET(TimedRecord18, byte_18, 0x18);

inline constexpr guest::Function<0x0011493d, u32(u32)> Town__check_special_item;
inline constexpr guest::Function<0x002fc8e8, u32(u32, u32)> Item__copy;
inline constexpr guest::Function<0x002ff6f8, u32(u32)> random_below;
inline constexpr guest::Function<0x00303cdc, u32(u32, u32, u32, u32)> clear_inner;
inline constexpr guest::Function<0x006bbd54, u32(u32, u32, u32)> Item__from_category_index;

struct __attribute__((packed)) Frame_0052ab60 {
    u32 word_0;
};
GUEST_OFFSET(Frame_0052ab60, word_0, 0x0);
GUEST_SIZE(Frame_0052ab60, 0x4);

void TimedRecord18__init_new(gptr<TimedRecord18> timed_record18, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_0052ab60> frame;  // the original's stack frame
    frame->word_0 = r3;
    clear_inner(timed_record18.addr(), r1, r2, r3);
    timed_record18->byte_16 = 0;
    timed_record18->byte_17 = 0;
    timed_record18->byte_18 = 0;
    timed_record18->half_e = 0;
    u32 random_2 = random_below(5u);
    u32 item = frame.at(0).addr();
    Item__from_category_index(item, 0x33u, random_2);  // (from the original)
    Item__copy(timed_record18.addr() + 8u, item);
    Town__check_special_item(frame.at(0).addr());
}

}  // namespace d_0052ab60
GUEST_EXPORT_FRAMED(0x0052ab60, d_0052ab60::TimedRecord18__init_new, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_0052abd8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Sets the room's wall textures from its wallpaper (three wall materials).
namespace d_0052abd8 {

struct __attribute__((packed)) Local_0052abd8_r0_1 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
    u32 word_8;
    u8 byte_c;
    u8 byte_d;
    u8 byte_e;
};
GUEST_OFFSET(Local_0052abd8_r0_1, word_4, 0x4);
GUEST_OFFSET(Local_0052abd8_r0_1, word_8, 0x8);
GUEST_OFFSET(Local_0052abd8_r0_1, byte_c, 0xc);
GUEST_OFFSET(Local_0052abd8_r0_1, byte_d, 0xd);
GUEST_OFFSET(Local_0052abd8_r0_1, byte_e, 0xe);

inline constexpr guest::Function<0x002fc934, u32(u32, u32, u32, u32)> Item__copy_b;
inline constexpr guest::Function<0x005291b0, u32(u32, u32, u32, u32)> Model__bind_animation_at;
inline constexpr guest::Function<0x0052984c, u32(u32, u32, u32, u32)> Model__bind_animation;
inline constexpr guest::Function<0x007ca090, u32(u32, u32, u32, u32)> PathAgent__update;

struct __attribute__((packed)) Frame_0052abd8 {
    u32 word_0;
    u8 unknown_4[0x14];  // (not read or written by name)
};
GUEST_OFFSET(Frame_0052abd8, word_0, 0x0);
GUEST_SIZE(Frame_0052abd8, 0x18);

u32 set_room_wall_textures(u32 r0, u32 r1, u32 r2) {
    guest::StackFrameOf<Frame_0052abd8> frame;  // the original's stack frame
    u32 r4 = 0;
    u32 r7 = 0;
    u32 r1_1 = 0;
    u32 r8 = 0u;
    u32 r6 = r0;
    u32 r3_1 = r8 << 0x10 & 0xff0000u;  // (from the original)
    u32 r2_1 = (0xc8u << 8 & 0xff00u | (0xc8u | r2 & ~0xffu) & ~0xff00u) & ~0xff0000u;  // (from the original)
    u32 r5 = r1;
    gptr<Local_0052abd8_r0_1> r0_1 = gptr<Local_0052abd8_r0_1>(frame.at(8).addr());
    u32 r4_1 = r2_1 | r3_1;
    Item__copy_b(r0_1.addr(), r1, r2_1, r3_1);
    r0_1->word_4 = 0;
    r0_1->word_8 = 0;
    u32 r2_2 = r4_1 >> 8u & 0xffu;  // (from the original)
    u32 r3_2 = r4_1 >> 0x10u & 0xffu;  // (from the original)
    r0_1->byte_c = u8(r4_1);
    r0_1->byte_d = u8(r2_2);
    r0_1->byte_e = u8(r3_2);
    u32 r0_2 = PathAgent__update(r6, r0_1.addr(), r2_2, r3_2);
    if (r0_2 != 2u) {
        if (r0_2 == 1u) {
            r7 = 4u;
            r4 = 0u;
            goto L_52ad14;
        }
        return r8;
    }
    r1_1 = u32(*gptr<u8>(r6 + 0x24u)) & 1u;  // (from the original)
    r8 = r1_1 >= 2u ? r6 + 0x60u : r6 + (r1_1 * 5u + (r1_1 << 6) << 2) + 0x60u;  // (from the original)
    r7 = 4u;
    r4 = 0u;
    do {
        u32 r0_3 = r6 + 0x28cu;  // (from the original)
        if (r4 < 4u) {
            r0_3 += (r4 << 6);
        }
        frame->word_0 = r0_3 + 0x34u;  // (from the original)
        Model__bind_animation_at(r0_3 + 0xcu, r8, r5, 0x8464b4u);  // (from the original)
        u32 r0_5 = r6 + 0x28cu;  // (from the original)
        if (r4 < 4u) {
            r0_5 += (r4 << 6);
        }
        u32 r1_2 = *gptr<u8>(r5 + 4u);
        Model__bind_animation(r0_5 + 0xcu, r1_2, 0x8464b4u, r5);  // (from the original)
        r4 += 1u;
        if (r4 != 4u && s32(r4) >= 4) {
            r4 = 4u;
        }
        guest::preempt();
    } while (r4 != r7);
    return 1u;
L_52ad14:;
    u32 r0_7 = r6 + 0x28cu;  // (from the original)
    if (r4 < 4u) {
        r0_7 += (r4 << 6);
    }
    u32 r1_3 = *gptr<u8>(r5 + 4u);
    Model__bind_animation(r0_7 + 0xcu, r1_3, 0x8464b4u, r5);  // (from the original)
    r4 += 1u;
    if (r4 != 4u && s32(r4) >= 4) {
        r4 = 4u;
    }
    if (r4 != r7) {
        guest::preempt();
        goto L_52ad14;
    }
    return r8;
}

}  // namespace d_0052abd8
GUEST_EXPORT_FRAMED(0x0052abd8, d_0052abd8::set_room_wall_textures, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_0052b818: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0052b818 {

struct __attribute__((packed)) Local_0052b818_r0_1 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
};
GUEST_OFFSET(Local_0052b818_r0_1, word_4, 0x4);

struct __attribute__((packed)) Block {
    u32 vtable;
    u32 word_4;
    u8 byte_8;
    u8 unknown_9[0xf];  // (not used here)
    u8 byte_18;
    u8 unknown_19[0x3];  // (not used here)
    u32 word_1c;
    u32 word_20;
};
GUEST_OFFSET(Block, vtable, 0x0);
GUEST_OFFSET(Block, word_4, 0x4);
GUEST_OFFSET(Block, byte_8, 0x8);
GUEST_OFFSET(Block, byte_18, 0x18);
GUEST_OFFSET(Block, word_1c, 0x1c);
GUEST_OFFSET(Block, word_20, 0x20);

struct __attribute__((packed)) Local_0052b818_r0_2 {
    u32 vtable;
    u8 unknown_4[0x14];  // (not used here)
    u8 byte_18;
    u8 unknown_19[0x3];  // (not used here)
    u32 word_1c;
    u32 word_20;
};
GUEST_OFFSET(Local_0052b818_r0_2, vtable, 0x0);
GUEST_OFFSET(Local_0052b818_r0_2, byte_18, 0x18);
GUEST_OFFSET(Local_0052b818_r0_2, word_1c, 0x1c);
GUEST_OFFSET(Local_0052b818_r0_2, word_20, 0x20);

struct __attribute__((packed)) Local_0052b818_r3_11 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_0052b818_r3_11, word_0, 0x0);
GUEST_OFFSET(Local_0052b818_r3_11, word_4, 0x4);
GUEST_OFFSET(Local_0052b818_r3_11, word_8, 0x8);

struct __attribute__((packed)) Local_0052b818_r3_3 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_0052b818_r3_3, word_0, 0x0);
GUEST_OFFSET(Local_0052b818_r3_3, word_4, 0x4);
GUEST_OFFSET(Local_0052b818_r3_3, word_8, 0x8);

inline constexpr u32 vtable_Wipe = 0x008f74f4u;
inline guest::global<u32, 0x00895bb8> wipe_params_a;
inline guest::global<u32, 0x00895bbc> wipe_params_b;
inline guest::global<u32, 0x0095e0b4> global_0095e0b4;
inline guest::global<u32, 0x0095e0b8> global_0095e0b8;
inline constexpr guest::Function<0x001207d8, u32(u32)> ssys__ma__lyt__ArcResAcc__ArcResAcc_001207d8;
inline constexpr guest::Function<0x00125aec, u32(u32)> construct_layout_animation;
inline constexpr guest::Function<0x00125e3c, u32(u32, u32, u32, u32)> Layout__Layout;
inline constexpr guest::Function<0x002f825c, u32(u32, u32)> clear_aligned;
inline constexpr guest::Function<0x002fd108, u32(u32, u32, u32)> allocate_on_heap;
inline constexpr guest::Function<0x0052b9ec, u32(u32, u32, u32, u32)> MapView__load_layout_b;
inline constexpr guest::Function<0x00569d50, u32(u32, u32, u32, u32)> layout_allocator_4;

u32 Wipe__Wipe(u32 wipe, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x20);  // the original's stack frame
    gptr<Local_0052b818_r0_1> r0_1 = gptr<Local_0052b818_r0_1>(layout_allocator_4(wipe, r1, r2, r3));
    gptr<Local_0052b818_r0_2> block = gptr<Local_0052b818_r0_2>(allocate_on_heap(0x434u, r0_1->word_4, 4u));  // (from the original)
    clear_aligned(block.addr(), 0x434u);  // (from the original)
    *gptr<u32>(block.addr() + 4u) = 0;
    *gptr<u8>(block.addr() + 8u) = 0;
    u32 r1_2 = *wipe_params_a;
    u32 r2_2 = *wipe_params_b;
    gptr<Local_0052b818_r3_3> r3_3 = gptr<Local_0052b818_r3_3>(block.addr() + 0xcu);  // (from the original)
    r3_3->word_0 = r1_2;
    r3_3->word_4 = r2_2;
    r3_3->word_8 = 0;
    block->byte_18 = 0;
    block->word_1c = 0;
    block->vtable = vtable_Wipe;
    block->word_20 = 0;
    u32 r0_4 = Layout__Layout(block.addr() + 0x24u, r1_2, r2_2, r3_3.addr());  // (from the original)
    u32 r0_6 = ssys__ma__lyt__ArcResAcc__ArcResAcc_001207d8(r0_4 + 0x14cu);  // (from the original)
    u32 r0_7 = r0_6 + 0x248u;  // (from the original)
    construct_layout_animation(r0_7);
    u32 r0_8 = r0_7 + 0x28u;  // (from the original)
    construct_layout_animation(r0_8);
    u32 r0_9 = r0_8 + 0x28u;  // (from the original)
    construct_layout_animation(r0_9);
    u32 r0_10 = r0_9 - 0x408u;  // (from the original)
    *global_0095e0b4 = r0_10;
    MapView__load_layout_b(r0_10, 0u, guest::cpu()->r[2], guest::cpu()->r[3]);
    gptr<Block> block_2 = gptr<Block>(allocate_on_heap(0x434u, r0_1->word_4, 4u));  // (from the original)
    clear_aligned(block_2.addr(), 0x434u);  // (from the original)
    block_2->word_4 = 0;
    block_2->byte_8 = 0;
    u32 r1_8 = *wipe_params_a;
    u32 r2_9 = *wipe_params_b;
    gptr<Local_0052b818_r3_11> r3_11 = gptr<Local_0052b818_r3_11>(block_2.addr() + 0xcu);  // (from the original)
    r3_11->word_0 = r1_8;
    r3_11->word_4 = r2_9;
    r3_11->word_8 = 0;
    block_2->byte_18 = 0;
    block_2->word_1c = 0;
    block_2->vtable = vtable_Wipe;
    block_2->word_20 = 0;
    u32 r0_13 = Layout__Layout(block_2.addr() + 0x24u, r1_8, r2_9, r3_11.addr());  // (from the original)
    u32 r0_15 = ssys__ma__lyt__ArcResAcc__ArcResAcc_001207d8(r0_13 + 0x14cu);  // (from the original)
    u32 r0_16 = r0_15 + 0x248u;  // (from the original)
    construct_layout_animation(r0_16);
    u32 r0_17 = r0_16 + 0x28u;  // (from the original)
    construct_layout_animation(r0_17);
    u32 r0_18 = r0_17 + 0x28u;  // (from the original)
    construct_layout_animation(r0_18);
    u32 r0_19 = r0_18 - 0x408u;  // (from the original)
    *global_0095e0b8 = r0_19;
    frame.release();
    return MapView__load_layout_b(r0_19, 1u, guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0052b818
GUEST_EXPORT(0x0052b818, d_0052b818::Wipe__Wipe);

// f_0052b948: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Resets the wipe layout: rewinds its wipe animation to 0 and hides the wipe pane.
namespace d_0052b948 {

struct __attribute__((packed)) Child {
    u8 unknown_0[0xb7];  // (not used here)
    u8 byte_b7;
};
GUEST_OFFSET(Child, byte_b7, 0xb7);

inline constexpr guest::Function<0x004b4fc0, u32(u32, u32, u32, u32)> Layout__find_pane;
inline constexpr guest::Function<0x00568630, u32(u32, u32, u32, u32)> notify_objects_of_list;
inline constexpr guest::Function<0x0056878c, u32(u32, u32)> LayoutObjectWithChild__forward_to_child;
inline constexpr guest::Function<0x00568984, u32(u32, u32, u32, u32)> notify_list_objects;
inline constexpr guest::Function<0x00568c10, u32(u32, u32, u32, u32)> Layout__virtual_3;
inline constexpr guest::Function<0x005697e0, u32(u32)> Animation__set_value;

void WipeLayout__reset(u32 wipe_layout, u32 r1_unused, u32 r2_unused, u32 r3, float S0) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 pane_3 = Layout__find_pane(wipe_layout + 0x24u, 0x52b9d0u, 1u, r3);  // (from the original)
    notify_objects_of_list(wipe_layout + 0x24u, wipe_layout + 0x3b8u, pane_3, 0u);  // (from the original)
    float S0_2 = 0.0f;
    guest::cpu()->s[0] = S0_2;
    Animation__set_value(wipe_layout + 0x3b8u);  // (from the original)
    Layout__virtual_3(wipe_layout + 0x24u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 pane_4 = Layout__find_pane(wipe_layout + 0x24u, 0x52b9d0u, 1u, guest::cpu()->r[3]);  // (from the original)
    notify_list_objects(wipe_layout + 0x24u, wipe_layout + 0x3b8u, pane_4, 0u);  // (from the original)
    gptr<Child> child_2 = gptr<Child>(LayoutObjectWithChild__forward_to_child(wipe_layout + 0x24u, 0x52b9e0u));  // (from the original)
    u32 r1_5 = u32(child_2->byte_b7) & 0xfeu;  // (from the original)
    child_2->byte_b7 = u8(r1_5);
    frame.release();
    Layout__virtual_3(wipe_layout + 0x24u, r1_5, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    return;
}

}  // namespace d_0052b948
GUEST_EXPORT(0x0052b948, d_0052b948::WipeLayout__reset);

// f_0052bb0c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Bit 0 when the member handler (+0xc, +0x10) is the one at 0x895bb0, bit 1 when it is the one at 0x895ba8.
namespace d_0052bb0c {

struct __attribute__((packed)) Object_0052bb0c_0 {
    u8 unknown_0[0xc];  // (not used here)
    u32 word_c;
    u32 word_10;
};
GUEST_OFFSET(Object_0052bb0c_0, word_c, 0xc);
GUEST_OFFSET(Object_0052bb0c_0, word_10, 0x10);

inline guest::global<u32, 0x00895ba8> global_00895ba8;
inline guest::global<u32, 0x00895bac> global_00895bac;
inline guest::global<u32, 0x00895bb0> global_00895bb0;
inline guest::global<u32, 0x00895bb4> global_00895bb4;

u32 handler_is_895ba8_or_895bb0(gptr<Object_0052bb0c_0> arg0) {
    u32 r4_1 = 0;
    u32 r3_1 = arg0->word_c;
    u32 r1_1 = *global_00895bb4;
    if (r3_1 == *global_00895bb0) {
        if ((r3_1 != 0 || ((arg0->word_10 | r1_1) & 1u) != 0) && arg0->word_10 != r1_1) {
            goto L_52bb54;
        }
        r4_1 = 1u;
        goto L_52bb58;
    }
L_52bb54:;
    r4_1 = 0u;
L_52bb58:;
    u32 r1_2 = *global_00895bac;
    if (r3_1 == *global_00895ba8) {
        if ((r3_1 != 0 || ((arg0->word_10 | r1_2) & 1u) != 0) && arg0->word_10 != r1_2) {
            return r4_1;
        }
        return 1u | r4_1;
    }
    return r4_1;
}

}  // namespace d_0052bb0c
GUEST_EXPORT_FRAMED(0x0052bb0c, d_0052bb0c::handler_is_895ba8_or_895bb0, 0x10);  // pushes {r4} first, as the original

// f_0052be5c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Resets the entry list at 0x9ab170 and the counters at 0x9516a0.
namespace d_0052be5c {

inline constexpr u32 town_event_flags_address = 0x009516a0u;
inline constexpr u32 talk_queue_address = 0x009ab170u;
inline guest::global<u8, 0x009516a0> town_event_flags;
inline guest::global<u32, 0x009516a4> town_event_flags_b;
inline guest::global<u32, 0x009516a8> town_event_flags_c;
inline guest::global<u32, 0x009516ac> current_talk_entry;
inline guest::global<u32, 0x009516b0> talk_queue_count;
inline guest::global<u32, 0x009516b4> talk_listener;
inline constexpr guest::Function<0x0052c32c, u32(u32, u32, u32, u32)> reset_entry_list;

u32 reset_talk_queue_lists(u32 r0, u32 r1, u32 r2) {
    reset_entry_list(talk_queue_address, r1, r2, guest::cpu()->r[3]);
    *current_talk_entry = 0;
    *town_event_flags_b = 0;
    *town_event_flags_c = 0;
    *talk_queue_count = 0;
    if (r0 == 0) {
        guest::cpu()->r[1] = 0u;
        return town_event_flags_address;
    }
    *town_event_flags = 0;
    *talk_listener = 0;
    guest::cpu()->r[1] = 0u;
    return town_event_flags_address;
}

}  // namespace d_0052be5c
GUEST_EXPORT_FRAMED(0x0052be5c, d_0052be5c::reset_talk_queue_lists, 0x4010);  // pushes {r4, lr} first, as the original

// f_0052bf90: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Sets bit 2 of 0x9516a0.
namespace d_0052bf90 {

inline constexpr u32 town_event_flags_address = 0x009516a0u;
inline guest::global<u8, 0x009516a0> town_event_flags;

u32 set_town_event_flag_4() {
    u32 r1_1 = u32(*town_event_flags) | 4u;
    *town_event_flags = u8(r1_1);
    guest::cpu()->r[1] = r1_1;
    return town_event_flags_address;
}

}  // namespace d_0052bf90
GUEST_EXPORT(0x0052bf90, d_0052bf90::set_town_event_flag_4);

// f_0052bfa8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Queues an entry of kind 0xd for the player (its id +0x54) in the list at 0x9ab170; true when it did.
namespace d_0052bfa8 {

struct __attribute__((packed)) Local_0052bfa8_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0052bfa8_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_0052bfa8_ea_1, word_4, 0x4);

struct __attribute__((packed)) Local_0052bfa8_r1_1 {
    u8 unknown_0[0xc];  // (not used here)
    u8 byte_c;
    u8 unknown_d[0xb];  // (not used here)
    u8 byte_18;
    u8 byte_19;
    u8 unknown_1a[0x1];  // (not used here)
    u8 byte_1b;
};
GUEST_OFFSET(Local_0052bfa8_r1_1, byte_c, 0xc);
GUEST_OFFSET(Local_0052bfa8_r1_1, byte_18, 0x18);
GUEST_OFFSET(Local_0052bfa8_r1_1, byte_19, 0x19);
GUEST_OFFSET(Local_0052bfa8_r1_1, byte_1b, 0x1b);

inline constexpr u32 talk_queue_address = 0x009ab170u;
inline constexpr guest::Function<0x00125ca4, u32(u32, u32)> TalkQueue__remove;
inline constexpr guest::Function<0x0052c2d8, u32(u32, u32)> claim_table_entry_32;
inline constexpr guest::Function<0x005c33cc, u32(u32, u32, u32, u32)> find_object;

u32 TalkQueue__push_player_d() {
    u32 object_2 = find_object(4u, 0u, guest::cpu()->r[2], guest::cpu()->r[3]);
    gptr<Local_0052bfa8_r1_1> r1_1 = gptr<Local_0052bfa8_r1_1>(guest::cpu()->r[1]);
    u32 r9_1 = 0u;
    if (object_2 != 0) {
        u32 r8_1 = *gptr<u32>(object_2 + 0x54u);  // (from the original)
        u32 r0_2 = claim_table_entry_32(talk_queue_address, r1_1.addr());
        r1_1 = gptr<Local_0052bfa8_r1_1>(r0_2);
        if (r0_2 != 0) {
            r9_1 = 1u;
            gptr<Local_0052bfa8_ea_1> ea_1 = gptr<Local_0052bfa8_ea_1>(r1_1.addr() + 0x10u);  // (from the original)
            ea_1->word_0 = 0;
            ea_1->word_4 = r8_1;
            r1_1->byte_18 = u8(r9_1);
            r1_1->byte_19 = 0xd;  // (from the original)
            r1_1->byte_c = 4;
            r1_1->byte_1b = 0;
            TalkQueue__remove(talk_queue_address, r1_1.addr());
            r1_1 = gptr<Local_0052bfa8_r1_1>(guest::cpu()->r[1]);
        }
    }
    guest::cpu()->r[1] = r1_1.addr();
    return r9_1;
}

}  // namespace d_0052bfa8
GUEST_EXPORT_FRAMED(0x0052bfa8, d_0052bfa8::TalkQueue__push_player_d, 0x47f0);  // pushes {r4, r5, r6, r7, r8, r9, r10, lr} first, as the original

// f_0052c01c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Unless in talk state 0xe: queues an entry of kind 7 with a value for the player in the list at 0x9ab170; true when
// it did.
namespace d_0052c01c {

struct __attribute__((packed)) Local_0052c01c_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0052c01c_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_0052c01c_ea_1, word_4, 0x4);

struct __attribute__((packed)) Local_0052c01c_r1_1 {
    u8 unknown_0[0xc];  // (not used here)
    u8 byte_c;
    u8 unknown_d[0xb];  // (not used here)
    u8 byte_18;
    u8 byte_19;
    u8 unknown_1a[0x1];  // (not used here)
    u8 talk_queue;
};
GUEST_OFFSET(Local_0052c01c_r1_1, byte_c, 0xc);
GUEST_OFFSET(Local_0052c01c_r1_1, byte_18, 0x18);
GUEST_OFFSET(Local_0052c01c_r1_1, byte_19, 0x19);
GUEST_OFFSET(Local_0052c01c_r1_1, talk_queue, 0x1b);

inline constexpr u32 talk_queue_address = 0x009ab170u;
inline constexpr guest::Function<0x00125ca4, u32(u32, u32)> TalkQueue__remove;
inline constexpr guest::Function<0x003170f8, u32(u32, u32, u32, u32)> talk_state_matches;
inline constexpr guest::Function<0x0052c2d8, u32(u32, u32)> claim_table_entry_32;
inline constexpr guest::Function<0x005c33cc, u32(u32, u32)> find_object;

u32 TalkQueue__push_player_7(u32 talk_queue) {
    u32 r0_2 = 0;
    u32 r0_1 = talk_state_matches(0xeu, 0u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    gptr<Local_0052c01c_r1_1> r1_1 = gptr<Local_0052c01c_r1_1>(guest::cpu()->r[1]);
    if (r0_1 != 0) {
        r0_2 = 0u;
    } else {
        r0_2 = find_object(4u, 0u);
        r1_1 = gptr<Local_0052c01c_r1_1>(guest::cpu()->r[1]);
        if (r0_2 != 0) {
            u32 r8_1 = *gptr<u32>(r0_2 + 0x54u);  // (from the original)
            r0_2 = claim_table_entry_32(talk_queue_address, r1_1.addr());
            r1_1 = gptr<Local_0052c01c_r1_1>(r0_2);
            if (r0_2 != 0) {
                gptr<Local_0052c01c_ea_1> ea_1 = gptr<Local_0052c01c_ea_1>(r1_1.addr() + 0x10u);  // (from the original)
                ea_1->word_0 = 0;
                ea_1->word_4 = r8_1;
                r1_1->byte_18 = 1;
                r1_1->byte_19 = 7;
                r1_1->byte_c = 4;
                r1_1->talk_queue = u8(talk_queue);
                TalkQueue__remove(talk_queue_address, r1_1.addr());
                r1_1 = gptr<Local_0052c01c_r1_1>(guest::cpu()->r[1]);
                r0_2 = 1u;
            }
        }
    }
    guest::cpu()->r[1] = r1_1.addr();
    return r0_2;
}

}  // namespace d_0052c01c
GUEST_EXPORT_FRAMED(0x0052c01c, d_0052c01c::TalkQueue__push_player_7, 0x47f0);  // pushes {r4, r5, r6, r7, r8, r9, r10, lr} first, as the original

// f_0052c0a4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Unless in talk state 0xe: queues a talk entry of kind 4 for the player (its id +0x54) in the talk queue (0x9ab170);
// true when it did.
namespace d_0052c0a4 {

struct __attribute__((packed)) Local_0052c0a4_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0052c0a4_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_0052c0a4_ea_1, word_4, 0x4);

struct __attribute__((packed)) Local_0052c0a4_r1_1 {
    u8 unknown_0[0xc];  // (not used here)
    u8 byte_c;
    u8 unknown_d[0xb];  // (not used here)
    u8 byte_18;
    u8 byte_19;
    u8 unknown_1a[0x1];  // (not used here)
    u8 byte_1b;
};
GUEST_OFFSET(Local_0052c0a4_r1_1, byte_c, 0xc);
GUEST_OFFSET(Local_0052c0a4_r1_1, byte_18, 0x18);
GUEST_OFFSET(Local_0052c0a4_r1_1, byte_19, 0x19);
GUEST_OFFSET(Local_0052c0a4_r1_1, byte_1b, 0x1b);

inline constexpr u32 talk_queue_address = 0x009ab170u;
inline constexpr guest::Function<0x00125ca4, u32(u32, u32)> TalkQueue__remove;
inline constexpr guest::Function<0x003170f8, u32(u32, u32, u32, u32)> talk_state_matches;
inline constexpr guest::Function<0x0052c2d8, u32(u32, u32)> claim_table_entry_32;
inline constexpr guest::Function<0x005c33cc, u32(u32, u32)> find_object;

u32 TalkQueue__push_player_4() {
    u32 r0_2 = 0;
    u32 r0_1 = talk_state_matches(0xeu, 0u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    gptr<Local_0052c0a4_r1_1> r1_1 = gptr<Local_0052c0a4_r1_1>(guest::cpu()->r[1]);
    if (r0_1 != 0) {
        r0_2 = 0u;
    } else {
        r0_2 = find_object(4u, 0u);
        r1_1 = gptr<Local_0052c0a4_r1_1>(guest::cpu()->r[1]);
        if (r0_2 != 0) {
            u32 r8_1 = *gptr<u32>(r0_2 + 0x54u);  // (from the original)
            r0_2 = claim_table_entry_32(talk_queue_address, r1_1.addr());
            r1_1 = gptr<Local_0052c0a4_r1_1>(r0_2);
            if (r0_2 != 0) {
                gptr<Local_0052c0a4_ea_1> ea_1 = gptr<Local_0052c0a4_ea_1>(r1_1.addr() + 0x10u);  // (from the original)
                ea_1->word_0 = 0;
                ea_1->word_4 = r8_1;
                r1_1->byte_18 = 1;
                r1_1->byte_19 = 4;
                r1_1->byte_c = 0;
                r1_1->byte_1b = 0;
                TalkQueue__remove(talk_queue_address, r1_1.addr());
                r1_1 = gptr<Local_0052c0a4_r1_1>(guest::cpu()->r[1]);
                r0_2 = 1u;
            }
        }
    }
    guest::cpu()->r[1] = r1_1.addr();
    return r0_2;
}

}  // namespace d_0052c0a4
GUEST_EXPORT_FRAMED(0x0052c0a4, d_0052c0a4::TalkQueue__push_player_4, 0x47f0);  // pushes {r4, r5, r6, r7, r8, r9, r10, lr} first, as the original

// f_0052c1a0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Queues a talk entry of kind 1 (option 3) for an NPC (its id +0x54); true when it did.
namespace d_0052c1a0 {

struct __attribute__((packed)) TalkQueue {
    u8 unknown_0[0x54];  // (not used here)
    u32 word_54;
};
GUEST_OFFSET(TalkQueue, word_54, 0x54);

struct __attribute__((packed)) Local_0052c1a0_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0052c1a0_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_0052c1a0_ea_1, word_4, 0x4);

struct __attribute__((packed)) Local_0052c1a0_r1_1 {
    u8 unknown_0[0xc];  // (not used here)
    u8 byte_c;
    u8 unknown_d[0xb];  // (not used here)
    u8 byte_18;
    u8 byte_19;
    u8 unknown_1a[0x1];  // (not used here)
    u8 byte_1b;
};
GUEST_OFFSET(Local_0052c1a0_r1_1, byte_c, 0xc);
GUEST_OFFSET(Local_0052c1a0_r1_1, byte_18, 0x18);
GUEST_OFFSET(Local_0052c1a0_r1_1, byte_19, 0x19);
GUEST_OFFSET(Local_0052c1a0_r1_1, byte_1b, 0x1b);

inline constexpr u32 talk_queue_address = 0x009ab170u;
inline constexpr guest::Function<0x00125ca4, u32(u32, u32)> TalkQueue__remove;
inline constexpr guest::Function<0x0052c2d8, u32(u32, u32, u32, u32)> claim_table_entry_32;

u32 TalkQueue__push_npc_1(gptr<TalkQueue> talk_queue, u32 r1) {
    u32 r4_1 = talk_queue->word_54;
    u32 r0_1 = claim_table_entry_32(talk_queue_address, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    gptr<Local_0052c1a0_r1_1> r1_1 = gptr<Local_0052c1a0_r1_1>(r0_1);
    if (r0_1 != 0) {
        gptr<Local_0052c1a0_ea_1> ea_1 = gptr<Local_0052c1a0_ea_1>(r1_1.addr() + 0x10u);  // (from the original)
        ea_1->word_0 = r4_1;
        ea_1->word_4 = 0;
        r1_1->byte_18 = 1;
        r1_1->byte_19 = 1;
        r1_1->byte_c = 3;
        r1_1->byte_1b = 0;
        TalkQueue__remove(talk_queue_address, r1_1.addr());
        r1_1 = gptr<Local_0052c1a0_r1_1>(guest::cpu()->r[1]);
        r0_1 = 1u;
    }
    guest::cpu()->r[1] = r1_1.addr();
    return r0_1;
}

}  // namespace d_0052c1a0
GUEST_EXPORT_FRAMED(0x0052c1a0, d_0052c1a0::TalkQueue__push_npc_1, 0x47f0);  // pushes {r4, r5, r6, r7, r8, r9, r10, lr} first, as the original

// f_0052c268: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// In talk state 1 or 2: notifies the current talk partner (0x9516a8, else 0x9516a4).
namespace d_0052c268 {

inline constexpr u32 town_event_flags_address = 0x009516a0u;
inline constexpr u32 town_event_flags_b_address = 0x009516a4u;
inline constexpr u32 town_event_flags_c_address = 0x009516a8u;
inline guest::global<u32, 0x009516a4> town_event_flags_b;
inline guest::global<u32, 0x009516a8> town_event_flags_c;
inline constexpr guest::Function<0x003170f8, u32(u32, u32)> talk_state_matches;
inline constexpr guest::Function<0x006e46c8, u32(u32, u32)> PendingList__find_value;

u32 TalkQueue__notify_current() {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 r0_1 = talk_state_matches(1u, 0u);
    if (r0_1 == 0) {
        u32 r0_2 = talk_state_matches(2u, 0u);
        if (r0_2 == 0) {
            return r0_2;
        }
    }
    u32 pending_list = *town_event_flags_c;
    if (pending_list == 0) {
        u32 r0_4 = *town_event_flags_b;
        frame.release();
        return PendingList__find_value(r0_4, town_event_flags_address);
    }
    frame.release();
    return PendingList__find_value(pending_list, town_event_flags_address);
}

}  // namespace d_0052c268
GUEST_EXPORT(0x0052c268, d_0052c268::TalkQueue__notify_current);

// f_0052c2c0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Clears bit 2 of 0x9516a0.
namespace d_0052c2c0 {

inline constexpr u32 town_event_flags_address = 0x009516a0u;
inline guest::global<u8, 0x009516a0> town_event_flags;

u32 clear_town_event_flag_4() {
    u32 r1_1 = u32(*town_event_flags) & ~4u;
    *town_event_flags = u8(r1_1);
    guest::cpu()->r[1] = r1_1;
    return town_event_flags_address;
}

}  // namespace d_0052c2c0
GUEST_EXPORT(0x0052c2c0, d_0052c2c0::clear_town_event_flag_4);

// f_0052c3e0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Queues a talk entry of kind 0xb for the player; true when it did.
namespace d_0052c3e0 {

struct __attribute__((packed)) Local_0052c3e0_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0052c3e0_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_0052c3e0_ea_1, word_4, 0x4);

struct __attribute__((packed)) Local_0052c3e0_r1_1 {
    u8 unknown_0[0xc];  // (not used here)
    u8 byte_c;
    u8 unknown_d[0xb];  // (not used here)
    u8 byte_18;
    u8 byte_19;
    u8 unknown_1a[0x1];  // (not used here)
    u8 byte_1b;
};
GUEST_OFFSET(Local_0052c3e0_r1_1, byte_c, 0xc);
GUEST_OFFSET(Local_0052c3e0_r1_1, byte_18, 0x18);
GUEST_OFFSET(Local_0052c3e0_r1_1, byte_19, 0x19);
GUEST_OFFSET(Local_0052c3e0_r1_1, byte_1b, 0x1b);

inline constexpr u32 talk_queue_address = 0x009ab170u;
inline constexpr guest::Function<0x00125ca4, u32(u32, u32)> TalkQueue__remove;
inline constexpr guest::Function<0x0052c2d8, u32(u32, u32)> claim_table_entry_32;
inline constexpr guest::Function<0x005c33cc, u32(u32, u32, u32, u32)> find_object;

u32 TalkQueue__push_player_b() {
    u32 object_2 = find_object(4u, 0u, guest::cpu()->r[2], guest::cpu()->r[3]);
    gptr<Local_0052c3e0_r1_1> r1_1 = gptr<Local_0052c3e0_r1_1>(guest::cpu()->r[1]);
    u32 r9_1 = 0u;
    if (object_2 != 0) {
        u32 r8_1 = *gptr<u32>(object_2 + 0x54u);  // (from the original)
        u32 r0_2 = claim_table_entry_32(talk_queue_address, r1_1.addr());
        r1_1 = gptr<Local_0052c3e0_r1_1>(r0_2);
        if (r0_2 != 0) {
            r9_1 = 1u;
            gptr<Local_0052c3e0_ea_1> ea_1 = gptr<Local_0052c3e0_ea_1>(r1_1.addr() + 0x10u);  // (from the original)
            ea_1->word_0 = 0;
            ea_1->word_4 = r8_1;
            r1_1->byte_18 = u8(r9_1);
            r1_1->byte_19 = 0xb;  // (from the original)
            r1_1->byte_c = 4;
            r1_1->byte_1b = 0;
            TalkQueue__remove(talk_queue_address, r1_1.addr());
            r1_1 = gptr<Local_0052c3e0_r1_1>(guest::cpu()->r[1]);
        }
    }
    guest::cpu()->r[1] = r1_1.addr();
    return r9_1;
}

}  // namespace d_0052c3e0
GUEST_EXPORT_FRAMED(0x0052c3e0, d_0052c3e0::TalkQueue__push_player_b, 0x47f0);  // pushes {r4, r5, r6, r7, r8, r9, r10, lr} first, as the original

// f_0052c454: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Resets the talk queue and its partners, and queues the first entry (kind 3: state 3 with a partner, else 0).
namespace d_0052c454 {

struct __attribute__((packed)) Local_0052c454_r0_1 {
    u8 unknown_0[0xc];  // (not used here)
    u8 byte_c;
    u8 unknown_d[0x3];  // (not used here)
    u32 word_10;
    u32 word_14;
    u8 byte_18;
    u8 byte_19;
    u8 byte_1a;
};
GUEST_OFFSET(Local_0052c454_r0_1, byte_c, 0xc);
GUEST_OFFSET(Local_0052c454_r0_1, word_10, 0x10);
GUEST_OFFSET(Local_0052c454_r0_1, word_14, 0x14);
GUEST_OFFSET(Local_0052c454_r0_1, byte_18, 0x18);
GUEST_OFFSET(Local_0052c454_r0_1, byte_19, 0x19);
GUEST_OFFSET(Local_0052c454_r0_1, byte_1a, 0x1a);

inline constexpr u32 talk_queue_address = 0x009ab170u;
inline guest::global<u32, 0x009516a4> town_event_flags_b;
inline guest::global<u32, 0x009516a8> town_event_flags_c;
inline guest::global<u32, 0x009516ac> current_talk_entry;
inline guest::global<u32, 0x009516b0> talk_queue_count;
inline constexpr guest::Function<0x00240fdc, u32(u32)> RealEstate__state_kind;
inline constexpr guest::Function<0x0052c2d8, u32(u32)> claim_table_entry_32;
inline constexpr guest::Function<0x0052c32c, u32(u32)> reset_entry_list;
inline constexpr guest::Function<0x0052ce18, u32(u32, u32, u32, u32)> TalkQueue__reset_slots;

void TalkQueue__reset(u32 talk_queue, u32 r1, u32 r2, u32 r3) {
    u32 r0_3 = 0;
    TalkQueue__reset_slots(talk_queue, r1, r2, r3);
    reset_entry_list(talk_queue_address);
    *current_talk_entry = 0;
    *town_event_flags_b = 0;
    *town_event_flags_c = 0;
    *talk_queue_count = 0;
    gptr<Local_0052c454_r0_1> r0_1 = gptr<Local_0052c454_r0_1>(claim_table_entry_32(talk_queue_address));
    u32 r0_2 = RealEstate__state_kind(r0_1.addr());
    r0_1->word_14 = 0;
    r0_1->byte_18 = 3;
    r0_1->byte_1a = 4;
    r0_1->byte_c = 2;
    r0_1->word_10 = r0_2;
    if (r0_2 == 0) {
        r0_3 = 5u;
        r0_1->byte_19 = 0;
    } else {
        r0_1->byte_19 = 3;
        r0_3 = 8u;
    }
    r0_1->byte_1a = u8(r0_3);
    *current_talk_entry = r0_1.addr();
}

}  // namespace d_0052c454
GUEST_EXPORT_FRAMED(0x0052c454, d_0052c454::TalkQueue__reset, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0052c4d8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Queues a talk entry of kind 2 (option 3) between an NPC and the player; true when it did.
namespace d_0052c4d8 {

struct __attribute__((packed)) Local_0052c4d8_r1_1 {
    u8 unknown_0[0xc];  // (not used here)
    u8 byte_c;
    u8 unknown_d[0x3];  // (not used here)
    u32 word_10;
    u32 word_14;
    u8 byte_18;
    u8 byte_19;
    u8 unknown_1a[0x1];  // (not used here)
    u8 byte_1b;
};
GUEST_OFFSET(Local_0052c4d8_r1_1, byte_c, 0xc);
GUEST_OFFSET(Local_0052c4d8_r1_1, word_10, 0x10);
GUEST_OFFSET(Local_0052c4d8_r1_1, word_14, 0x14);
GUEST_OFFSET(Local_0052c4d8_r1_1, byte_18, 0x18);
GUEST_OFFSET(Local_0052c4d8_r1_1, byte_19, 0x19);
GUEST_OFFSET(Local_0052c4d8_r1_1, byte_1b, 0x1b);

inline constexpr u32 talk_queue_address = 0x009ab170u;
inline constexpr guest::Function<0x00125ca4, u32(u32, u32)> TalkQueue__remove;
inline constexpr guest::Function<0x0052c2d8, u32(u32, u32)> claim_table_entry_32;
inline constexpr guest::Function<0x005c33cc, u32(u32, u32, u32, u32)> find_object;

u32 TalkQueue__push_npc_and_player(gptr<AcNpc_rec> ac_npc_rec) {
    u32 object_2 = find_object(4u, 0u, guest::cpu()->r[2], guest::cpu()->r[3]);
    gptr<Local_0052c4d8_r1_1> r1_1 = gptr<Local_0052c4d8_r1_1>(guest::cpu()->r[1]);
    if (object_2 != 0) {
        u32 r8_1 = *gptr<u32>(object_2 + 0x54u);  // (from the original)
        u32 r7_1 = ac_npc_rec->word_54;
        object_2 = claim_table_entry_32(talk_queue_address, r1_1.addr());
        r1_1 = gptr<Local_0052c4d8_r1_1>(object_2);
        if (object_2 != 0) {
            r1_1->word_14 = r7_1;
            r1_1->word_10 = r8_1;
            r1_1->byte_18 = 1;
            r1_1->byte_19 = 2;
            r1_1->byte_c = 3;
            r1_1->byte_1b = 0;
            TalkQueue__remove(talk_queue_address, r1_1.addr());
            r1_1 = gptr<Local_0052c4d8_r1_1>(guest::cpu()->r[1]);
            object_2 = 1u;
        }
    }
    guest::cpu()->r[1] = r1_1.addr();
    return object_2;
}

}  // namespace d_0052c4d8
GUEST_EXPORT_FRAMED(0x0052c4d8, d_0052c4d8::TalkQueue__push_npc_and_player, 0x47f0);  // pushes {r4, r5, r6, r7, r8, r9, r10, lr} first, as the original

// f_0052c584: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// In talk state 6: marks the current entry finished (+0x1a); true.
namespace d_0052c584 {

inline constexpr u32 current_talk_entry_address = 0x009516acu;
inline guest::global<u32, 0x009516ac> current_talk_entry;
inline constexpr guest::Function<0x003170f8, u32(u32, u32)> talk_state_matches;

u32 TalkQueue__finish_in_state_6() {
    u32 r0_1 = talk_state_matches(6u, 0u);
    if (r0_1 == 0) {
        return r0_1;
    }
    u32 r1_2 = *current_talk_entry;
    *gptr<u8>(r1_2 + 0x1au) = 1;  // (from the original)
    guest::cpu()->r[1] = r1_2;
    return 1u;
}

}  // namespace d_0052c584
GUEST_EXPORT_FRAMED(0x0052c584, d_0052c584::TalkQueue__finish_in_state_6, 0x4000);  // pushes {lr} first, as the original

// f_0052c648: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether the counter at 0x9516b0 is above 0.
namespace d_0052c648 {

inline constexpr u32 talk_queue_count_address = 0x009516b0u;
inline guest::global<u32, 0x009516b0> talk_queue_count;

u32 talk_queue_count_positive() {
    u32 r0_1 = *talk_queue_count;
    u32 res_1 = r0_1;
    u32 vf_1 = (r0_1 & (r0_1 ^ res_1)) >> 0x1f;  // (from the original)
    if (res_1 != 0 && s32(r0_1) >= 0) {
        r0_1 = 1u;
    }
    if (res_1 == 0 || res_1 >> 0x1f != vf_1) {  // (from the original)
        r0_1 = 0u;
    }
    return r0_1;
}

}  // namespace d_0052c648
GUEST_EXPORT(0x0052c648, d_0052c648::talk_queue_count_positive);

// f_0052c790: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether the object may talk now: always in scenes with bits 0x10 or 0x8000000; in talk states 1-2 when it is the
// current entry's partner (marking it).
namespace d_0052c790 {

struct __attribute__((packed)) Local_0052c790_r1_4 {
    u8 unknown_0[0x14];  // (not used here)
    u32 word_14;
    u8 unknown_18[0x2];  // (not used here)
    u8 byte_1a;
};
GUEST_OFFSET(Local_0052c790_r1_4, word_14, 0x14);
GUEST_OFFSET(Local_0052c790_r1_4, byte_1a, 0x1a);

inline constexpr u32 current_talk_entry_address = 0x009516acu;
inline guest::global<u32, 0x009516ac> current_talk_entry;
inline constexpr guest::Function<0x002f74c8, u32(u32)> current_scene_id;
inline constexpr guest::Function<0x002f74e0, u32(u32, u32)> scene_has_flags;
inline constexpr guest::Function<0x003170f8, u32(u32, u32)> talk_state_matches;

u32 TalkQueue__is_partner(u32 talk_queue) {
    u32 r0_8 = 0;
    u32 scene = current_scene_id(talk_queue);
    u32 scene_flagged = scene_has_flags(0x10u, scene);  // (from the original)
    if (scene_flagged != 0) {
        return 1u;
    }
    u32 scene_2 = current_scene_id(scene_flagged);
    u32 scene_flagged_2 = scene_has_flags(0x8000000u, scene_2);  // (from the original)
    if (scene_flagged_2 != 0) {
        return 1u;
    }
    u32 r0_5 = talk_state_matches(1u, 0u);
    if (r0_5 == 0) {
        u32 r0_6 = talk_state_matches(2u, 0u);
        if (r0_6 == 0) {
            return r0_6;
        }
    }
    u32 r0_7 = *gptr<u32>(talk_queue + 0x54u);  // (from the original)
    gptr<Local_0052c790_r1_4> r1_4 = gptr<Local_0052c790_r1_4>(*current_talk_entry);
    if (r0_7 == r1_4->word_14) {
        r0_8 = 1u;
        r1_4->byte_1a = u8(r0_8);
    } else {
        r0_8 = 0u;
    }
    guest::cpu()->r[1] = r1_4.addr();
    return r0_8;
}

}  // namespace d_0052c790
GUEST_EXPORT_FRAMED(0x0052c790, d_0052c790::TalkQueue__is_partner, 0x4010);  // pushes {r4, lr} first, as the original

// f_0052c82c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Keeps the object's id (+0x54) as the second talk partner (0x9516a8).
namespace d_0052c82c {

struct __attribute__((packed)) Talk {
    u8 unknown_0[0x54];  // (not used here)
    u32 word_54;
};
GUEST_OFFSET(Talk, word_54, 0x54);

inline constexpr u32 town_event_flags_address = 0x009516a0u;
inline guest::global<u32, 0x009516a8> town_event_flags_c;

u32 Talk__set_second_partner(gptr<Talk> talk) {
    u32 r0_1 = talk->word_54;
    *town_event_flags_c = r0_1;
    guest::cpu()->r[1] = town_event_flags_address;
    return r0_1;
}

}  // namespace d_0052c82c
GUEST_EXPORT_FRAMED(0x0052c82c, d_0052c82c::Talk__set_second_partner, 0x4010);  // pushes {r4, lr} first, as the original

// f_0052c844: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The odd kind paired with an even kind (2 -> 1, 4 -> 3, 6 -> 5, 8 -> 7; else 1).
namespace d_0052c844 {


u32 talk_kind_pair(u32 r0) {
    if (r0 == 2u) {
        return 1u;
    }
    if (r0 == 4u) {
        return 3u;
    }
    if (r0 == 6u) {
        return 5u;
    }
    return r0 == 8u ? 7u : 1u;
}

}  // namespace d_0052c844
GUEST_EXPORT(0x0052c844, d_0052c844::talk_kind_pair);

// f_0052c878: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// In talk state 1 or 2: notifies the first talk partner (0x9516a4) when there is one.
namespace d_0052c878 {

inline constexpr u32 town_event_flags_b_address = 0x009516a4u;
inline guest::global<u32, 0x009516a4> town_event_flags_b;
inline constexpr guest::Function<0x003170f8, u32(u32, u32)> talk_state_matches;
inline constexpr guest::Function<0x006e46c8, u32(u32, u32)> PendingList__find_value;

u32 Talk__notify_first_partner() {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 r0_1 = talk_state_matches(1u, 0u);
    if (r0_1 == 0) {
        u32 r0_2 = talk_state_matches(2u, 0u);
        if (r0_2 == 0) {
            return r0_2;
        }
    }
    u32 pending_list = *town_event_flags_b;
    if (pending_list == 0) {
        return pending_list;
    }
    frame.release();
    return PendingList__find_value(pending_list, guest::cpu()->r[1]);
}

}  // namespace d_0052c878
GUEST_EXPORT(0x0052c878, d_0052c878::Talk__notify_first_partner);

// f_0052c8c4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Queues a talk entry of kind 2 (option 3, value 3) between an NPC and the player; true when it did.
namespace d_0052c8c4 {

struct __attribute__((packed)) TalkQueue {
    u8 unknown_0[0x54];  // (not used here)
    u32 word_54;
};
GUEST_OFFSET(TalkQueue, word_54, 0x54);

struct __attribute__((packed)) Local_0052c8c4_r1_1 {
    u8 unknown_0[0xc];  // (not used here)
    u8 byte_c;
    u8 unknown_d[0x3];  // (not used here)
    u32 word_10;
    u32 word_14;
    u8 byte_18;
    u8 byte_19;
    u8 unknown_1a[0x1];  // (not used here)
    u8 byte_1b;
};
GUEST_OFFSET(Local_0052c8c4_r1_1, byte_c, 0xc);
GUEST_OFFSET(Local_0052c8c4_r1_1, word_10, 0x10);
GUEST_OFFSET(Local_0052c8c4_r1_1, word_14, 0x14);
GUEST_OFFSET(Local_0052c8c4_r1_1, byte_18, 0x18);
GUEST_OFFSET(Local_0052c8c4_r1_1, byte_19, 0x19);
GUEST_OFFSET(Local_0052c8c4_r1_1, byte_1b, 0x1b);

inline constexpr u32 talk_queue_address = 0x009ab170u;
inline constexpr guest::Function<0x00125ca4, u32(u32, u32)> TalkQueue__remove;
inline constexpr guest::Function<0x0052c2d8, u32(u32, u32)> claim_table_entry_32;
inline constexpr guest::Function<0x005c33cc, u32(u32, u32, u32, u32)> find_object;

u32 TalkQueue__push_npc_and_player_3(gptr<TalkQueue> talk_queue) {
    u32 object_2 = find_object(4u, 0u, guest::cpu()->r[2], guest::cpu()->r[3]);
    gptr<Local_0052c8c4_r1_1> r1_1 = gptr<Local_0052c8c4_r1_1>(guest::cpu()->r[1]);
    if (object_2 != 0) {
        u32 r8_1 = *gptr<u32>(object_2 + 0x54u);  // (from the original)
        u32 r7_1 = talk_queue->word_54;
        object_2 = claim_table_entry_32(talk_queue_address, r1_1.addr());
        r1_1 = gptr<Local_0052c8c4_r1_1>(object_2);
        if (object_2 != 0) {
            r1_1->word_14 = r7_1;
            r1_1->word_10 = r8_1;
            r1_1->byte_18 = 1;
            r1_1->byte_19 = 2;
            r1_1->byte_c = 3;
            r1_1->byte_1b = 3;
            TalkQueue__remove(talk_queue_address, r1_1.addr());
            r1_1 = gptr<Local_0052c8c4_r1_1>(guest::cpu()->r[1]);
            object_2 = 1u;
        }
    }
    guest::cpu()->r[1] = r1_1.addr();
    return object_2;
}

}  // namespace d_0052c8c4
GUEST_EXPORT_FRAMED(0x0052c8c4, d_0052c8c4::TalkQueue__push_npc_and_player_3, 0x47f0);  // pushes {r4, r5, r6, r7, r8, r9, r10, lr} first, as the original

// f_0052c974: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Unless in talk state 0xe: queues a talk entry of kind 8 for the player; true when it did.
namespace d_0052c974 {

struct __attribute__((packed)) Local_0052c974_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0052c974_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_0052c974_ea_1, word_4, 0x4);

struct __attribute__((packed)) Local_0052c974_r1_1 {
    u8 unknown_0[0xc];  // (not used here)
    u8 byte_c;
    u8 unknown_d[0xb];  // (not used here)
    u8 byte_18;
    u8 byte_19;
    u8 unknown_1a[0x1];  // (not used here)
    u8 byte_1b;
};
GUEST_OFFSET(Local_0052c974_r1_1, byte_c, 0xc);
GUEST_OFFSET(Local_0052c974_r1_1, byte_18, 0x18);
GUEST_OFFSET(Local_0052c974_r1_1, byte_19, 0x19);
GUEST_OFFSET(Local_0052c974_r1_1, byte_1b, 0x1b);

inline constexpr u32 talk_queue_address = 0x009ab170u;
inline constexpr guest::Function<0x00125ca4, u32(u32, u32)> TalkQueue__remove;
inline constexpr guest::Function<0x003170f8, u32(u32, u32, u32, u32)> talk_state_matches;
inline constexpr guest::Function<0x0052c2d8, u32(u32, u32)> claim_table_entry_32;
inline constexpr guest::Function<0x005c33cc, u32(u32, u32)> find_object;

u32 TalkQueue__push_player_8() {
    u32 r0_2 = 0;
    u32 r0_1 = talk_state_matches(0xeu, 0u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    gptr<Local_0052c974_r1_1> r1_1 = gptr<Local_0052c974_r1_1>(guest::cpu()->r[1]);
    if (r0_1 != 0) {
        r0_2 = 0u;
    } else {
        r0_2 = find_object(4u, 0u);
        r1_1 = gptr<Local_0052c974_r1_1>(guest::cpu()->r[1]);
        if (r0_2 != 0) {
            u32 r8_1 = *gptr<u32>(r0_2 + 0x54u);  // (from the original)
            r0_2 = claim_table_entry_32(talk_queue_address, r1_1.addr());
            r1_1 = gptr<Local_0052c974_r1_1>(r0_2);
            if (r0_2 != 0) {
                gptr<Local_0052c974_ea_1> ea_1 = gptr<Local_0052c974_ea_1>(r1_1.addr() + 0x10u);  // (from the original)
                ea_1->word_0 = 0;
                ea_1->word_4 = r8_1;
                r1_1->byte_18 = 1;
                r1_1->byte_19 = 8;
                r1_1->byte_c = 4;
                r1_1->byte_1b = 0;
                TalkQueue__remove(talk_queue_address, r1_1.addr());
                r1_1 = gptr<Local_0052c974_r1_1>(guest::cpu()->r[1]);
                r0_2 = 1u;
            }
        }
    }
    guest::cpu()->r[1] = r1_1.addr();
    return r0_2;
}

}  // namespace d_0052c974
GUEST_EXPORT_FRAMED(0x0052c974, d_0052c974::TalkQueue__push_player_8, 0x47f0);  // pushes {r4, r5, r6, r7, r8, r9, r10, lr} first, as the original

// f_0052cc5c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Bit 1 of the talk flags (0x9516a0).
namespace d_0052cc5c {

inline guest::global<u8, 0x009516a0> town_event_flags;

u32 talk_flag_bit_1() {
    return u32(*town_event_flags) >> 1u & 1u;
}

}  // namespace d_0052cc5c
GUEST_EXPORT(0x0052cc5c, d_0052cc5c::talk_flag_bit_1);

// f_0052cc74: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Unless in talk state 0xe: queues a talk entry of kind 6 (option 1) for the player; true when it did.
namespace d_0052cc74 {

struct __attribute__((packed)) Local_0052cc74_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0052cc74_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_0052cc74_ea_1, word_4, 0x4);

struct __attribute__((packed)) Local_0052cc74_r1_1 {
    u8 unknown_0[0xc];  // (not used here)
    u8 byte_c;
    u8 unknown_d[0xb];  // (not used here)
    u8 byte_18;
    u8 byte_19;
    u8 unknown_1a[0x1];  // (not used here)
    u8 byte_1b;
};
GUEST_OFFSET(Local_0052cc74_r1_1, byte_c, 0xc);
GUEST_OFFSET(Local_0052cc74_r1_1, byte_18, 0x18);
GUEST_OFFSET(Local_0052cc74_r1_1, byte_19, 0x19);
GUEST_OFFSET(Local_0052cc74_r1_1, byte_1b, 0x1b);

inline constexpr u32 talk_queue_address = 0x009ab170u;
inline constexpr guest::Function<0x00125ca4, u32(u32, u32)> TalkQueue__remove;
inline constexpr guest::Function<0x003170f8, u32(u32, u32, u32, u32)> talk_state_matches;
inline constexpr guest::Function<0x0052c2d8, u32(u32, u32)> claim_table_entry_32;
inline constexpr guest::Function<0x005c33cc, u32(u32, u32)> find_object;

u32 TalkQueue__push_player_6() {
    u32 r0_2 = 0;
    u32 r0_1 = talk_state_matches(0xeu, 0u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    gptr<Local_0052cc74_r1_1> r1_1 = gptr<Local_0052cc74_r1_1>(guest::cpu()->r[1]);
    if (r0_1 != 0) {
        r0_2 = 0u;
    } else {
        r0_2 = find_object(4u, 0u);
        r1_1 = gptr<Local_0052cc74_r1_1>(guest::cpu()->r[1]);
        if (r0_2 != 0) {
            u32 r8_1 = *gptr<u32>(r0_2 + 0x54u);  // (from the original)
            r0_2 = claim_table_entry_32(talk_queue_address, r1_1.addr());
            r1_1 = gptr<Local_0052cc74_r1_1>(r0_2);
            if (r0_2 != 0) {
                gptr<Local_0052cc74_ea_1> ea_1 = gptr<Local_0052cc74_ea_1>(r1_1.addr() + 0x10u);  // (from the original)
                ea_1->word_0 = 0;
                ea_1->word_4 = r8_1;
                r1_1->byte_18 = 1;
                r1_1->byte_19 = 6;
                r1_1->byte_c = 1;
                r1_1->byte_1b = 0;
                TalkQueue__remove(talk_queue_address, r1_1.addr());
                r1_1 = gptr<Local_0052cc74_r1_1>(guest::cpu()->r[1]);
                r0_2 = 1u;
            }
        }
    }
    guest::cpu()->r[1] = r1_1.addr();
    return r0_2;
}

}  // namespace d_0052cc74
GUEST_EXPORT_FRAMED(0x0052cc74, d_0052cc74::TalkQueue__push_player_6, 0x47f0);  // pushes {r4, r5, r6, r7, r8, r9, r10, lr} first, as the original

// f_0052ccfc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Keeps an object as the listener (0x9516b4) when there is none; true when it did.
namespace d_0052ccfc {

inline constexpr u32 town_event_flags_address = 0x009516a0u;
inline guest::global<u32, 0x009516b4> talk_listener;

u32 Talk__claim_listener(u32 talk) {
    u32 r0_1 = 0;
    if (*talk_listener == 0) {
        *talk_listener = talk;
        r0_1 = 1u;
    } else {
        r0_1 = 0u;
    }
    guest::cpu()->r[1] = town_event_flags_address;
    return r0_1;
}

}  // namespace d_0052ccfc
GUEST_EXPORT(0x0052ccfc, d_0052ccfc::Talk__claim_listener);

// f_0052cd58: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Outside scenes with bit 0x10, in talk state 1-2: marks the current entry cancelled (3) when the object is its
// partner and there is no main-object value.
namespace d_0052cd58 {

inline constexpr u32 town_event_flags_address = 0x009516a0u;
inline constexpr u32 current_talk_entry_address = 0x009516acu;
inline guest::global<u32, 0x009516ac> current_talk_entry;
inline constexpr guest::Function<0x002f74c8, u32(u32)> current_scene_id;
inline constexpr guest::Function<0x002f74e0, u32(u32, u32)> scene_has_flags;
inline constexpr guest::Function<0x00300904, u32(u32, u32)> current_net_signed_value;
inline constexpr guest::Function<0x003170f8, u32(u32, u32)> talk_state_matches;

void TalkQueue__cancel_for_partner(u32 talk_queue) {
    u32 scene = current_scene_id(talk_queue);
    u32 scene_flagged = scene_has_flags(0x10u, scene);  // (from the original)
    if (scene_flagged != 0) {
        return;
    }
    u32 r0_3 = talk_state_matches(1u, 0u);
    if (r0_3 == 0) {
        u32 r0_4 = talk_state_matches(2u, 0u);
        if (r0_4 == 0) {
            return;
        }
    }
    u32 r0_5 = *gptr<u32>(talk_queue + 0x54u);  // (from the original)
    u32 r1_3 = *gptr<u32>(*current_talk_entry + 0x14u);  // (from the original)
    if (r0_5 != r1_3) {
        guest::cpu()->r[1] = r1_3;
        return;
    }
    u32 r0_6 = current_net_signed_value(r0_5, r1_3);
    if (r0_6 != 0) {
        return;
    }
    u32 r1_5 = *current_talk_entry;
    *gptr<u8>(r1_5 + 0x1au) = 3;  // (from the original)
    guest::cpu()->r[1] = r1_5;
}

}  // namespace d_0052cd58
GUEST_EXPORT_FRAMED(0x0052cd58, d_0052cd58::TalkQueue__cancel_for_partner, 0x4010);  // pushes {r4, lr} first, as the original

// f_0052ce18: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Clears the six talk slots (0x9ab598) and, in multiplayer, tells the others (message 0x39) when the main object is
// busy; else clears 0x9ab588.
namespace d_0052ce18 {

struct __attribute__((packed)) Local_0052ce18_r1_1 {
    u8 unknown_0[0x30];  // (not used here)
    u32 word_30;
    u32 word_34;
};
GUEST_OFFSET(Local_0052ce18_r1_1, word_30, 0x30);
GUEST_OFFSET(Local_0052ce18_r1_1, word_34, 0x34);

inline constexpr u32 talk_slot_pairs_address = 0x009ab598u;
inline guest::global<u32, 0x009ab588> talk_slots;
inline constexpr guest::Function<0x002fc900, u32(u32, u32, u32, u32)> mode_above_1;
inline constexpr guest::Function<0x0030b6c4, u32(u32)> main_object_idle;
inline constexpr guest::Function<0x006249b0, u32(u32, u32, u32, u32)> send_message;

void TalkQueue__reset_slots(u32 r0_unused, u32 r1_unused, u32 r2_unused, u32 r3) {
    guest::StackFrame frame(0x4);  // the original's stack frame
    gptr<Local_0052ce18_r1_1> r1_1 = gptr<Local_0052ce18_r1_1>(0u);
    u32 r2 = talk_slot_pairs_address;
    u32 r0 = 0u;
    *frame.at<u32>(0) = r3;
    u32 r4 = r0;
    do {
        r1_1 = gptr<Local_0052ce18_r1_1>(r2 + (r0 << 3));
        r0 += 1u;
        r1_1->word_30 = r4;
        r1_1->word_34 = r4;
        guest::preempt();
    } while (r0 < 6u);
    u32 r0_1 = mode_above_1(r0, r1_1.addr(), r2, r3);
    if (r0_1 != 0) {
        u32 r0_2 = main_object_idle(r0_1);
        if (r0_2 == 0) {
            u32 r0_3 = mode_above_1(r0_2, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
            if (r0_3 == 0) {
                return;
            }
            u32 r0_4 = main_object_idle(r0_3);
            if (r0_4 != 0) {
                return;
            }
            *frame.at<u8>(0) = 1;
            send_message(0x39u, 0u, frame.at(0).addr(), 1u);  // (from the original)
            return;
        }
    }
    *talk_slots = r4;
}

}  // namespace d_0052ce18
GUEST_EXPORT_FRAMED(0x0052ce18, d_0052ce18::TalkQueue__reset_slots, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_0052ceb8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Claims talk slot 0 for an object id: in multiplayer with a busy main object asks the others (message 0x39) and
// returns 0; else 1 when it was claimed, 2 when taken.
namespace d_0052ceb8 {

inline guest::global<u8, 0x009516b8> talk_slot_claim;
inline constexpr guest::Function<0x002fc900, u32(u32, u32, u32, u32)> mode_above_1;
inline constexpr guest::Function<0x0030b6c4, u32(u32)> main_object_idle;
inline constexpr guest::Function<0x0052d420, u32(u32, u32)> TalkSlots__try_claim;
inline constexpr guest::Function<0x006249b0, u32(u32, u32, u32, u32)> send_message;

struct __attribute__((packed)) Frame_0052ceb8 {
    u8 byte_0;
    u8 talk_slots;
    u8 byte_2;
    u8 byte_3;
    u8 byte_4;
    u8 unknown_5[0x3];  // (not read or written by name)
};
GUEST_OFFSET(Frame_0052ceb8, byte_0, 0x0);
GUEST_OFFSET(Frame_0052ceb8, talk_slots, 0x1);
GUEST_OFFSET(Frame_0052ceb8, byte_2, 0x2);
GUEST_OFFSET(Frame_0052ceb8, byte_3, 0x3);
GUEST_OFFSET(Frame_0052ceb8, byte_4, 0x4);
GUEST_SIZE(Frame_0052ceb8, 0x8);

u32 TalkSlots__claim(u32 talk_slots, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_0052ceb8> frame;  // the original's stack frame
    u32 r0_1 = mode_above_1(talk_slots, r1, r2, r3);
    if (r0_1 != 0) {
        u32 r0_2 = main_object_idle(r0_1);
        if (r0_2 == 0) {
            u32 r0_3 = mode_above_1(r0_2, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
            if (r0_3 == 0) {
                return 0u;
            }
            u32 r0_4 = main_object_idle(r0_3);
            if (r0_4 != 0) {
                return 0u;
            }
            *talk_slot_claim = 0;
            frame->byte_0 = 0;
            frame->talk_slots = u8(talk_slots);
            frame->byte_2 = u8(talk_slots >> 8);
            frame->byte_3 = u8(talk_slots >> 0x10);  // (from the original)
            frame->byte_4 = u8(talk_slots >> 0x18);  // (from the original)
            send_message(0x39u, 0u, frame.at(0).addr(), 5u);  // (from the original)
            return 0u;
        }
    }
    u32 r0_5 = TalkSlots__try_claim(0u, talk_slots);
    return r0_5 == 0 ? 2u : 1u;
}

}  // namespace d_0052ceb8
GUEST_EXPORT_FRAMED(0x0052ceb8, d_0052ceb8::TalkSlots__claim, 0x4010);  // pushes {r4, lr} first, as the original

// f_0052d0b8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether in multiplayer the guest entry is not ready.
namespace d_0052d0b8 {

inline constexpr guest::Function<0x002fc900, u32(u32)> mode_above_1;
inline constexpr guest::Function<0x0061a7a0, u32(u32)> net_guest_entry_is_ready;

u32 multiplayer_guest_not_ready(u32 r0) {
    u32 r0_1 = mode_above_1(r0);
    if (r0_1 == 0) {
        return r0_1;
    }
    u32 r0_2 = net_guest_entry_is_ready(r0_1);
    return r0_2 == 0;
}

}  // namespace d_0052d0b8
GUEST_EXPORT_FRAMED(0x0052d0b8, d_0052d0b8::multiplayer_guest_not_ready, 0x4010);  // pushes {r4, lr} first, as the original

// f_0052d0dc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Releases talk slot 0: directly offline or with an idle main object, else tells the others (message 0x39).
namespace d_0052d0dc {

inline constexpr u32 talk_slots_address = 0x009ab588u;
inline guest::global<u32, 0x009ab588> talk_slots;
inline constexpr guest::Function<0x002fc900, u32(u32, u32, u32, u32)> mode_above_1;
inline constexpr guest::Function<0x0030b6c4, u32(u32)> main_object_idle;
inline constexpr guest::Function<0x006249b0, u32(u32, u32, u32, u32)> send_message;

void TalkSlots__release(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x4);  // the original's stack frame
    *frame.at<u32>(0) = r3;
    u32 r0_1 = mode_above_1(r0, r1, r2, r3);
    if (r0_1 == 0) {
        *talk_slots = 0;
        guest::cpu()->r[1] = talk_slots_address;
        return;
    }
    u32 r0_2 = main_object_idle(r0_1);
    if (r0_2 != 0) {
        *talk_slots = 0;
        guest::cpu()->r[1] = talk_slots_address;
        return;
    }
    u32 r0_3 = mode_above_1(r0_2, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0_3 == 0) {
        return;
    }
    u32 r0_4 = main_object_idle(r0_3);
    if (r0_4 != 0) {
        return;
    }
    *frame.at<u8>(0) = 1;
    send_message(0x39u, 0u, frame.at(0).addr(), 1u);  // (from the original)
}

}  // namespace d_0052d0dc
GUEST_EXPORT_FRAMED(0x0052d0dc, d_0052d0dc::TalkSlots__release, 0x4000);  // pushes {lr} first, as the original

// f_0052d150: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// In multiplayer: sends a talk-slot request (message 0x39, kind 5) with the object id and two bytes.
namespace d_0052d150 {

inline guest::global<u8, 0x009516b8> talk_slot_claim;
inline constexpr guest::Function<0x002fc900, u32(u32, u32, u32, u32)> mode_above_1;
inline constexpr guest::Function<0x006249b0, u32(u32, u32, u32, u32)> send_message;

struct __attribute__((packed)) Frame_0052d150 {
    u8 byte_0;
    u8 talk_slots;
    u8 byte_2;
    u8 byte_3;
    u8 byte_4;
    u8 byte_5;
    u8 unknown_6[0x2];  // (not read or written by name)
};
GUEST_OFFSET(Frame_0052d150, byte_0, 0x0);
GUEST_OFFSET(Frame_0052d150, talk_slots, 0x1);
GUEST_OFFSET(Frame_0052d150, byte_2, 0x2);
GUEST_OFFSET(Frame_0052d150, byte_3, 0x3);
GUEST_OFFSET(Frame_0052d150, byte_4, 0x4);
GUEST_OFFSET(Frame_0052d150, byte_5, 0x5);
GUEST_SIZE(Frame_0052d150, 0x8);

void TalkSlots__send_claim(u32 talk_slots, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_0052d150> frame;  // the original's stack frame
    u32 r0_1 = mode_above_1(talk_slots, r1, r2, r3);
    if (r0_1 != 0) {
        *talk_slot_claim = 0;
        frame->byte_0 = u8(r2);
        frame->talk_slots = u8(talk_slots);
        frame->byte_2 = u8(talk_slots >> 8);
        frame->byte_4 = u8(talk_slots >> 0x18);  // (from the original)
        frame->byte_3 = u8(talk_slots >> 0x10);  // (from the original)
        frame->byte_5 = u8(r1);
        send_message(0x39u, 5u, frame.at(0).addr(), 6u);  // (from the original)
    }
}

}  // namespace d_0052d150
GUEST_EXPORT_FRAMED(0x0052d150, d_0052d150::TalkSlots__send_claim, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0052d220: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The partner of `id` in the six talk slot pairs (0x9ab598), or 0.
namespace d_0052d220 {

struct __attribute__((packed)) Local_0052d220_r3_1 {
    u32 word_0;
    u8 unknown_4[0x4];  // (not used here)
    u32 word_8;
};
GUEST_OFFSET(Local_0052d220_r3_1, word_0, 0x0);
GUEST_OFFSET(Local_0052d220_r3_1, word_8, 0x8);

inline constexpr u32 talk_slot_pairs_address = 0x009ab598u;

u32 TalkSlots__partner_of(u32 talk_slots) {
    u32 r2 = talk_slot_pairs_address;
    u32 r1 = 0u;
    do {
        gptr<Local_0052d220_r3_1> r3_1 = gptr<Local_0052d220_r3_1>(r2 + (r1 << 3));
        if (r3_1->word_0 == talk_slots) {
            u32 r0_1 = *gptr<u32>(r2 + (r1 << 3) + 4u);
            guest::cpu()->r[1] = r1;
            return r0_1;
        }
        if (r3_1->word_8 == talk_slots) {
            u32 r0_2 = *gptr<u32>(r2 + (r1 << 3) + 0xcu);  // (from the original)
            guest::cpu()->r[1] = r1;
            return r0_2;
        }
        r1 += 2u;
        guest::preempt();
    } while (s32(r1) < 6);
    guest::cpu()->r[1] = r1;
    return 0u;
}

}  // namespace d_0052d220
GUEST_EXPORT(0x0052d220, d_0052d220::TalkSlots__partner_of);

// f_0052d420: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Claims talk slot `index` for `id` when it is free and `id` is not in another slot or pair; true when it did.
namespace d_0052d420 {

struct __attribute__((packed)) Local_0052d420_r12_1 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
    u8 unknown_8[0x4];  // (not used here)
    u32 word_c;
};
GUEST_OFFSET(Local_0052d420_r12_1, word_4, 0x4);
GUEST_OFFSET(Local_0052d420_r12_1, word_c, 0xc);

inline constexpr u32 talk_slots_address = 0x009ab588u;
inline constexpr u32 talk_slot_pairs_address = 0x009ab598u;

u32 TalkSlots__try_claim(u32 talk_slots, u32 r1) {
    u32 r6 = talk_slots_address;
    if (gptr<u32>(r6)[talk_slots] == 0 && *gptr<u32>(r6) != r1 && *gptr<u32>(r6 + 4u) != r1 && *gptr<u32>(r6 + 8u) != r1) {
        if (*gptr<u32>(r6 + 0xcu) != r1) {  // (from the original)
            u32 r3 = talk_slot_pairs_address;
            u32 r2 = 0u;
L_52d468:;
            gptr<Local_0052d420_r12_1> r12_1 = gptr<Local_0052d420_r12_1>(r3 + (r2 << 3));
            if (r12_1->word_4 != r1) {
                if (r12_1->word_c != r1) {
                    r2 += 2u;
                    if (s32(r2) < 6) {
                        guest::preempt();
                        goto L_52d468;
                    }
                    *gptr<u32>(r6 + (talk_slots << 2)) = r1;
                    return 1u;
                }
                r2 += 1u;
            }
            if (r2 + 1u == 0) {
                *gptr<u32>(r6 + (talk_slots << 2)) = r1;
                return 1u;
            }
        }
    }
    return 0u;
}

}  // namespace d_0052d420
GUEST_EXPORT_FRAMED(0x0052d420, d_0052d420::TalkSlots__try_claim, 0x70);  // pushes {r4, r5, r6} first, as the original

// f_0052d550: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Clears a talk entry (kind 0xe).
namespace d_0052d550 {

struct __attribute__((packed)) TalkEntry {
    u8 unknown_0[0x10];  // (not used here)
    u32 word_10;
    u32 word_14;
    u8 byte_18;
    u8 byte_19;
    u8 byte_1a;
    u8 byte_1b;
    u8 byte_1c;
};
GUEST_OFFSET(TalkEntry, word_10, 0x10);
GUEST_OFFSET(TalkEntry, word_14, 0x14);
GUEST_OFFSET(TalkEntry, byte_18, 0x18);
GUEST_OFFSET(TalkEntry, byte_19, 0x19);
GUEST_OFFSET(TalkEntry, byte_1a, 0x1a);
GUEST_OFFSET(TalkEntry, byte_1b, 0x1b);
GUEST_OFFSET(TalkEntry, byte_1c, 0x1c);


void TalkEntry__clear(gptr<TalkEntry> talk_entry) {
    talk_entry->word_10 = 0;
    talk_entry->word_14 = 0;
    talk_entry->byte_18 = 0;
    talk_entry->byte_19 = 0xe;  // (from the original)
    talk_entry->byte_1a = 0;
    talk_entry->byte_1b = 0;
    talk_entry->byte_1c = 0;
    guest::cpu()->r[1] = 0u;
}

}  // namespace d_0052d550
GUEST_EXPORT(0x0052d550, d_0052d550::TalkEntry__clear);

// f_0052db0c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Copies entry `index` (three words, and the matching words at +0x3c) of the table at 0x9516c0.
namespace d_0052db0c {

struct __attribute__((packed)) Local_0052db0c_r0_2 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_0052db0c_r0_2, word_0, 0x0);
GUEST_OFFSET(Local_0052db0c_r0_2, word_4, 0x4);
GUEST_OFFSET(Local_0052db0c_r0_2, word_8, 0x8);

struct __attribute__((packed)) Local_0052db0c_r1_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_0052db0c_r1_1, word_0, 0x0);
GUEST_OFFSET(Local_0052db0c_r1_1, word_4, 0x4);
GUEST_OFFSET(Local_0052db0c_r1_1, word_8, 0x8);

inline constexpr u32 global_009516c0_address = 0x009516c0u;
inline constexpr u32 global_009516fc_address = 0x009516fcu;
inline constexpr guest::Function<0x0060c560, u32(u32, u32, u32)> Spiral__init;
inline constexpr guest::Function<0x0060c5c4, u32(u32)> static_zero_vector;

struct __attribute__((packed)) Frame_0052db0c {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u8 unknown_18[0x4];  // (not read or written by name)
};
GUEST_OFFSET(Frame_0052db0c, word_0, 0x0);
GUEST_OFFSET(Frame_0052db0c, word_4, 0x4);
GUEST_OFFSET(Frame_0052db0c, word_8, 0x8);
GUEST_OFFSET(Frame_0052db0c, word_c, 0xc);
GUEST_OFFSET(Frame_0052db0c, word_10, 0x10);
GUEST_OFFSET(Frame_0052db0c, word_14, 0x14);
GUEST_SIZE(Frame_0052db0c, 0x1c);

u32 copy_table_9516c0_entry(u32 r0) {
    guest::StackFrameOf<Frame_0052db0c> frame;  // the original's stack frame
    u32 r0_1 = r0 + (r0 << 1);
    gptr<Local_0052db0c_r1_1> r1_1 = gptr<Local_0052db0c_r1_1>((r0_1 << 2) + global_009516c0_address);
    gptr<Local_0052db0c_r0_2> r0_2 = gptr<Local_0052db0c_r0_2>((r0_1 << 2) + global_009516fc_address);
    frame->word_0 = r1_1->word_0;
    frame->word_4 = r1_1->word_4;
    frame->word_8 = r1_1->word_8;
    frame->word_c = r0_2->word_0;
    frame->word_10 = r0_2->word_4;
    u32 r0_3 = r0_2->word_8;
    frame->word_14 = r0_3;
    u32 zero_2 = static_zero_vector(r0_3);
    float S0_1 = 1.0f;
    guest::cpu()->s[0] = S0_1;
    u32 r0_5 = Spiral__init(zero_2, frame.at(0).addr(), frame.at(0xc).addr());  // (from the original)
    return r0_5;
}

}  // namespace d_0052db0c
GUEST_EXPORT_FRAMED(0x0052db0c, d_0052db0c::copy_table_9516c0_entry, 0x4000);  // pushes {lr} first, as the original

// f_0052ddf8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Copies a position, or (in modes with flag 2) moves it through 0075d2f8 and returns its angle.
namespace d_0052ddf8 {

inline constexpr guest::Function<0x002f74c8, u32(u32)> current_scene_id;
inline constexpr guest::Function<0x005b4c94, u32(u32)> mode_has_flag_2;
inline constexpr guest::Function<0x0060c5c4, u32(u32)> static_zero_vector;
inline constexpr guest::Function<0x0075d2f8, u32(u32, u32, u32)> SceneCurve__tilt_at;

u32 adjust_position_for_mode(u32 r0, u32 r1, u32 r2_unused, u32 r3) {
    guest::StackFrame frame(0x4);  // the original's stack frame
    *frame.at<u32>(0) = r3;
    u32 scene = current_scene_id(r0);
    u32 r0_2 = mode_has_flag_2(scene);
    if (r0_2 != 0) {
        u32 zero_2 = static_zero_vector(0u);
        u32 tilt = SceneCurve__tilt_at(zero_2, r0, r1);
        *frame.at<u32>(0) = tilt;
        return *frame.at<u16>(0);
    }
    *gptr<u32>(r0) = *gptr<u32>(r1);
    *gptr<u32>(r0 + 4u) = *gptr<u32>(r1 + 4u);
    u32 r1_2 = *gptr<u32>(r1 + 8u);
    *gptr<u32>(r0 + 8u) = r1_2;
    guest::cpu()->r[1] = r1_2;
    return 0u;
}

}  // namespace d_0052ddf8
GUEST_EXPORT_FRAMED(0x0052ddf8, d_0052ddf8::adjust_position_for_mode, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_0052de50: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Builds a matrix at the (mode-adjusted) position, rotated by the angle about x and by `angle_y` about y.
namespace d_0052de50 {

inline constexpr guest::Function<0x0052ddf8, u32(u32, u32, u32, u32)> adjust_position_for_mode;
inline constexpr guest::Function<0x0056747c, u32(u32, u32)> Matrix34__rotate_x;
inline constexpr guest::Function<0x00567580, u32(u32, u32)> Matrix34__rotate_y;

struct __attribute__((packed)) Frame_0052de50 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Frame_0052de50, word_0, 0x0);
GUEST_OFFSET(Frame_0052de50, word_4, 0x4);
GUEST_OFFSET(Frame_0052de50, word_8, 0x8);
GUEST_SIZE(Frame_0052de50, 0xc);

u32 Matrix34__from_adjusted_position(gptr<Matrix34> matrix34, u32 r1, u32 r2) {
    guest::StackFrameOf<Frame_0052de50> frame;  // the original's stack frame
    u32 adjust_position_2 = adjust_position_for_mode(frame.at(0).addr(), r1, r2, guest::cpu()->r[3]);
    float S1_1 = 1.0f;
    float S0_1 = 0.0f;
    matrix34->m[0] = S1_1;
    u32 r1_1 = adjust_position_2;
    matrix34->m[1] = S0_1;
    matrix34->m[2] = S0_1;
    matrix34->m[4] = S0_1;
    matrix34->m[5] = S1_1;
    matrix34->m[6] = S0_1;
    matrix34->m[8] = S0_1;
    matrix34->m[9] = S0_1;
    matrix34->m[10] = S1_1;
    matrix34->m[3] = std::bit_cast<float>(u32(frame->word_0));
    matrix34->m[7] = std::bit_cast<float>(u32(frame->word_4));
    matrix34->m[11] = std::bit_cast<float>(u32(frame->word_8));
    if (sxth(r1_1) != 0) {
        guest::cpu()->s[0] = S0_1;
        guest::cpu()->s[1] = S1_1;
        Matrix34__rotate_x(matrix34.addr(), r1_1);
        r1_1 = guest::cpu()->r[1];
        S0_1 = guest::cpu()->s[0];
        S1_1 = guest::cpu()->s[1];
    }
    u32 r0_3 = sxth(r2);
    if (r0_3 == 0) {
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->s[0] = S0_1;
        guest::cpu()->s[1] = S1_1;
        return r0_3;
    }
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    u32 r0_4 = Matrix34__rotate_y(matrix34.addr(), r2);
    return r0_4;
}

}  // namespace d_0052de50
GUEST_EXPORT_FRAMED(0x0052de50, d_0052de50::Matrix34__from_adjusted_position, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_0052e038: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Converts the position to world space when the scene is curved (flag 2), else copies it.
namespace d_0052e038 {

struct __attribute__((packed)) Object_0052e038_0 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Object_0052e038_0, word_0, 0x0);
GUEST_OFFSET(Object_0052e038_0, word_4, 0x4);
GUEST_OFFSET(Object_0052e038_0, word_8, 0x8);

inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> current_scene_id;
inline constexpr guest::Function<0x002f74e0, u32(u32, u32)> scene_has_flags;
inline constexpr guest::Function<0x0060c5c4, u32(u32)> static_zero_vector;
inline constexpr guest::Function<0x0075d378, u32(u32, u32, u32)> SceneCurve__bend_point;

struct __attribute__((packed)) Frame_0052e038 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Frame_0052e038, word_0, 0x0);
GUEST_OFFSET(Frame_0052e038, word_4, 0x4);
GUEST_OFFSET(Frame_0052e038, word_8, 0x8);
GUEST_SIZE(Frame_0052e038, 0xc);

u32 scene_position_to_world(gptr<Object_0052e038_0> arg0, u32 r1, u32 r2) {
    guest::StackFrameOf<Frame_0052e038> frame;  // the original's stack frame
    u32 r0_3 = 0;
    u32 scene = current_scene_id(arg0.addr(), r1, r2, guest::cpu()->r[3]);
    u32 scene_flagged = scene_has_flags(2u, scene);
    if (scene_flagged == 0) {
        arg0->word_0 = *gptr<u32>(r1);
        arg0->word_4 = *gptr<u32>(r1 + 4u);
        r0_3 = *gptr<u32>(r1 + 8u);
    } else {
        if (arg0.addr() == 0) {
            return scene_flagged;
        }
        u32 zero_2 = static_zero_vector(scene_flagged);
        SceneCurve__bend_point(frame.at(0).addr(), zero_2, r1);
        arg0->word_0 = frame->word_0;
        arg0->word_4 = frame->word_4;
        r0_3 = frame->word_8;
    }
    arg0->word_8 = r0_3;
    return r0_3;
}

}  // namespace d_0052e038
GUEST_EXPORT_FRAMED(0x0052e038, d_0052e038::scene_position_to_world, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_0052e0b4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The tilt angle of the curved scene at the position, or 0 when flat.
namespace d_0052e0b4 {

inline constexpr guest::Function<0x002f74c8, u32(u32)> current_scene_id;
inline constexpr guest::Function<0x005b4c94, u32(u32)> mode_has_flag_2;
inline constexpr guest::Function<0x0060c5c4, u32(u32)> static_zero_vector;
inline constexpr guest::Function<0x0075d4b0, u32(u32, u32)> angle_units_of_scaled_z;

u32 scene_tilt_angle_at(u32 r0, u32 r1_unused, u32 r2_unused, u32 r3) {
    guest::StackFrame frame(0x4);  // the original's stack frame
    *frame.at<u32>(0) = r3;
    u32 scene = current_scene_id(r0);
    u32 r0_2 = mode_has_flag_2(scene);
    if (r0_2 == 0) {
        guest::cpu()->r[1] = r0_2;
        return 0u;
    }
    u32 zero_2 = static_zero_vector(0u);
    u32 r0_4 = angle_units_of_scaled_z(zero_2, r0);
    *frame.at<u32>(0) = r0_4;
    return *frame.at<u16>(0);
}

}  // namespace d_0052e0b4
GUEST_EXPORT_FRAMED(0x0052e0b4, d_0052e0b4::scene_tilt_angle_at, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_0052e1ec: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The position bent by the scene's curve (by the camera or the mode) and its tilt angle; else the position unchanged.
namespace d_0052e1ec {

inline constexpr u32 camera_manager_address = 0x0094edd8u;
inline guest::global<u32, 0x0094edd8> camera_manager;
inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> current_scene_id;
inline constexpr guest::Function<0x002f74e0, u32(u32, u32)> scene_has_flags;
inline constexpr guest::Function<0x0052ddf8, u32(u32, u32)> adjust_position_for_mode;
inline constexpr guest::Function<0x005b4c94, u32(u32)> mode_has_flag_2;
inline constexpr guest::Function<0x0060c5c4, u32(u32)> static_zero_vector;
inline constexpr guest::Function<0x0075d178, u32(u32, u32, u32, u32)> SceneCurve__bend_by_camera;

u32 scene_curve_point(u32 r0, u32 r1, u32 angle_y, u32 r3) {
    guest::StackFrame frame(0x4);  // the original's stack frame
    *frame.at<u32>(0) = r3;
    u32 scene = current_scene_id(r0, r1, angle_y, r3);
    u32 r0_2 = mode_has_flag_2(scene);
    if (r0_2 != 0) {
        u32 scene_2 = current_scene_id(r0_2, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
        u32 scene_flagged = scene_has_flags(0x10000000u, scene_2);  // (from the original)
        if (scene_flagged != 0) {
            u32 adjust_position_2 = adjust_position_for_mode(r0, r1);
            *frame.at<u32>(0) = adjust_position_2;
            return *frame.at<u16>(0);
        }
        u32 r5_1 = *camera_manager;
        if (r5_1 != 0) {
            u32 zero_2 = static_zero_vector(camera_manager_address);
            u32 r0_8 = SceneCurve__bend_by_camera(zero_2, r0, r1, *gptr<u32>(r5_1 + 0x1a4u) + 0x24u);  // (from the original)
            *frame.at<u32>(0) = r0_8;
            return *frame.at<u16>(0);
        }
    }
    *gptr<u32>(r0) = *gptr<u32>(r1);
    *gptr<u32>(r0 + 4u) = *gptr<u32>(r1 + 4u);
    *gptr<u32>(r0 + 8u) = *gptr<u32>(r1 + 8u);
    return 0u;
}

}  // namespace d_0052e1ec
GUEST_EXPORT_FRAMED(0x0052e1ec, d_0052e1ec::scene_curve_point, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_0052e294: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0052e294 {

inline constexpr guest::Function<0x0052e1ec, u32(u32, u32, u32, u32)> scene_curve_point;
inline constexpr guest::Function<0x0056747c, u32(u32, u32)> Matrix34__rotate_x;
inline constexpr guest::Function<0x00567580, u32(u32, u32)> Matrix34__rotate_y;

struct __attribute__((packed)) Frame_0052e294 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Frame_0052e294, word_0, 0x0);
GUEST_OFFSET(Frame_0052e294, word_4, 0x4);
GUEST_OFFSET(Frame_0052e294, word_8, 0x8);
GUEST_SIZE(Frame_0052e294, 0xc);

u32 Matrix34__from_position_and_angles(gptr<Matrix34> matrix34, u32 r1, u32 angle_y, float S0, float S1) {
    guest::StackFrameOf<Frame_0052e294> frame;  // the original's stack frame
    u32 r0_2 = scene_curve_point(frame.at(0).addr(), r1, angle_y, guest::cpu()->r[3]);
    float S1_1 = 1.0f;
    float S0_1 = 0.0f;
    matrix34->m[0] = S1_1;
    u32 angle_x = r0_2;
    matrix34->m[1] = S0_1;
    matrix34->m[2] = S0_1;
    matrix34->m[4] = S0_1;
    matrix34->m[5] = S1_1;
    matrix34->m[6] = S0_1;
    matrix34->m[8] = S0_1;
    matrix34->m[9] = S0_1;
    matrix34->m[10] = S1_1;
    matrix34->m[3] = std::bit_cast<float>(u32(frame->word_0));
    matrix34->m[7] = std::bit_cast<float>(u32(frame->word_4));
    matrix34->m[11] = std::bit_cast<float>(u32(frame->word_8));
    if (sxth(angle_x) != 0) {
        guest::cpu()->s[0] = S0_1;
        guest::cpu()->s[1] = S1_1;
        Matrix34__rotate_x(matrix34.addr(), angle_x);
        angle_x = guest::cpu()->r[1];
        S0_1 = guest::cpu()->s[0];
        S1_1 = guest::cpu()->s[1];
    }
    u32 r0_3 = sxth(angle_y);
    if (r0_3 == 0) {
        guest::cpu()->r[1] = angle_x;
        guest::cpu()->s[0] = S0_1;
        guest::cpu()->s[1] = S1_1;
        return r0_3;
    }
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    u32 r0_4 = Matrix34__rotate_y(matrix34.addr(), angle_y);
    return r0_4;
}

}  // namespace d_0052e294
GUEST_EXPORT_FRAMED(0x0052e294, d_0052e294::Matrix34__from_position_and_angles, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_0052e32c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The matrix placing an object at the position on the scene's curve, with its rotation.
namespace d_0052e32c {

struct __attribute__((packed)) AngleY {
    u16 half_0;
    u16 half_2;
};
GUEST_OFFSET(AngleY, half_0, 0x0);
GUEST_OFFSET(AngleY, half_2, 0x2);

inline constexpr guest::Function<0x0052e1ec, u32(u32, u32, u32, u32)> scene_curve_point;
inline constexpr guest::Function<0x0056747c, u32(u32, u32)> Matrix34__rotate_x;
inline constexpr guest::Function<0x00567580, u32(u32, u32)> Matrix34__rotate_y;

struct __attribute__((packed)) Frame_0052e32c {
    u8 unknown_0[0x4];  // (not read or written by name)
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u8 unknown_10[0x4];  // (not read or written by name)
};
GUEST_OFFSET(Frame_0052e32c, word_4, 0x4);
GUEST_OFFSET(Frame_0052e32c, word_8, 0x8);
GUEST_OFFSET(Frame_0052e32c, word_c, 0xc);
GUEST_SIZE(Frame_0052e32c, 0x14);

u32 scene_curve_matrix(gptr<Matrix34> matrix34, u32 r1, gptr<AngleY> angle_y, float S0, float S1) {
    guest::StackFrameOf<Frame_0052e32c> frame;  // the original's stack frame
    u32 r0_2 = scene_curve_point(frame.at(4).addr(), r1, angle_y.addr(), guest::cpu()->r[3]);
    float S1_1 = 1.0f;
    float S0_1 = 0.0f;
    matrix34->m[0] = S1_1;
    u32 r1_1 = r0_2;
    matrix34->m[1] = S0_1;
    matrix34->m[2] = S0_1;
    matrix34->m[4] = S0_1;
    matrix34->m[5] = S1_1;
    matrix34->m[6] = S0_1;
    matrix34->m[8] = S0_1;
    matrix34->m[9] = S0_1;
    matrix34->m[10] = S1_1;
    matrix34->m[3] = std::bit_cast<float>(u32(frame->word_4));
    matrix34->m[7] = std::bit_cast<float>(u32(frame->word_8));
    matrix34->m[11] = std::bit_cast<float>(u32(frame->word_c));
    if (sxth(r1_1) != 0) {
        guest::cpu()->s[0] = S0_1;
        guest::cpu()->s[1] = S1_1;
        Matrix34__rotate_x(matrix34.addr(), r1_1);
        r1_1 = guest::cpu()->r[1];
        S0_1 = guest::cpu()->s[0];
        S1_1 = guest::cpu()->s[1];
    }
    if (angle_y->half_2 != 0) {
        *frame.at<u16>(0) = angle_y->half_2;
        u32 r1_2 = *frame.at<u32>(0);
        guest::cpu()->s[0] = S0_1;
        guest::cpu()->s[1] = S1_1;
        Matrix34__rotate_y(matrix34.addr(), r1_2);
        r1_1 = guest::cpu()->r[1];
        S0_1 = guest::cpu()->s[0];
        S1_1 = guest::cpu()->s[1];
    }
    u32 r0_3 = angle_y->half_0;
    if (r0_3 == 0) {
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->s[0] = S0_1;
        guest::cpu()->s[1] = S1_1;
        return r0_3;
    }
    *frame.at<u16>(0) = angle_y->half_0;
    u32 r1_3 = *frame.at<u32>(0);
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    u32 r0_4 = Matrix34__rotate_x(matrix34.addr(), r1_3);
    return r0_4;
}

}  // namespace d_0052e32c
GUEST_EXPORT_FRAMED(0x0052e32c, d_0052e32c::scene_curve_matrix, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_0052e5ac: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Calls the handler of the NPC's state (a member function pointer).
namespace d_0052e5ac {

struct __attribute__((packed)) Object_0052e5ac_0 {
    u8 unknown_0[0x808];  // (not used here)
    u8 byte_808;
};
GUEST_OFFSET(Object_0052e5ac_0, byte_808, 0x808);

struct __attribute__((packed)) Local_0052e5ac_r1_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0052e5ac_r1_1, word_0, 0x0);
GUEST_OFFSET(Local_0052e5ac_r1_1, word_4, 0x4);


void NpcAction__call_state_handler(gptr<Object_0052e5ac_0> npc_action) {
    u32 r2_1 = npc_action.addr() + 0x670u;  // (from the original)
    gptr<Local_0052e5ac_r1_1> r1_1 = gptr<Local_0052e5ac_r1_1>((u32(npc_action->byte_808) << 3) + 0x86537cu);  // (from the original)
    u32 r0_1 = r1_1->word_4;
    u32 r1_2 = r1_1->word_0;
    if (r1_2 == 0 && ((r0_1 & 1u) == 0 || r0_1 == 0)) {
        guest::cpu()->r[1] = r1_2;
        return;
    }
    u32 r0_2 = r2_1 + u32(s32(r0_1) >> 1);
    if ((r0_1 & 1u) == 0) {
        guest::call_address<u32>(r1_2, r0_2, r1_2, r2_1, guest::cpu()->r[3]);
        return;
    }
    u32 r2_2 = *gptr<u32>(r0_2);
    u32 r1_3 = *gptr<u32>(r2_2 + r1_2);
    guest::call_address<u32>(r1_3, r0_2, r1_3, r2_2, guest::cpu()->r[3]);
}

}  // namespace d_0052e5ac
GUEST_EXPORT(0x0052e5ac, d_0052e5ac::NpcAction__call_state_handler);

// f_0052ed04: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The tile's coordinates within its 16x16 block (wrapping below zero as the game does).
namespace d_0052ed04 {

struct __attribute__((packed)) Tile {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Tile, word_0, 0x0);
GUEST_OFFSET(Tile, word_4, 0x4);


void GridPoint__set_tile_in_block(gptr<GridPoint> grid_point, gptr<Tile> tile) {
    u32 r2_2 = 0;
    u32 r2_1 = tile->word_0;
    if (s32(r2_1) >= 0) {
        r2_2 = r2_1 - (r2_1 + (u32(s32(r2_1) >> 0x1f) >> 0x1c) & ~0xfu);  // (from the original)
    } else {
        r2_2 = r2_1 + 1u - (r2_1 + 1u + (u32(s32(r2_1 + 1u) >> 0x1f) >> 0x1c) & ~0xfu) + 0xfu;  // (from the original)
    }
    u32 r1_1 = tile->word_4;
    if (s32(r1_1) >= 0) {
        u32 r1_2 = r1_1 - (r1_1 + (u32(s32(r1_1) >> 0x1f) >> 0x1c) & ~0xfu);  // (from the original)
        grid_point->y = s32(u32(r1_2));
        grid_point->x = s32(u32(r2_2));
        guest::cpu()->r[1] = r1_2;
        return;
    }
    u32 r1_4 = r1_1 + 1u - (r1_1 + 1u + (u32(s32(r1_1 + 1u) >> 0x1f) >> 0x1c) & ~0xfu) + 0xfu;  // (from the original)
    grid_point->y = s32(u32(r1_4));
    grid_point->x = s32(u32(r2_2));
    guest::cpu()->r[1] = r1_4;
}

}  // namespace d_0052ed04
GUEST_EXPORT(0x0052ed04, d_0052ed04::GridPoint__set_tile_in_block);

// f_0052ef44: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The world position of the cell's corner.
namespace d_0052ef44 {

struct __attribute__((packed)) Object_0052ef44_0 {
    float float_0;
    float float_4;
    float float_8;
};
GUEST_OFFSET(Object_0052ef44_0, float_0, 0x0);
GUEST_OFFSET(Object_0052ef44_0, float_4, 0x4);
GUEST_OFFSET(Object_0052ef44_0, float_8, 0x8);

struct __attribute__((packed)) Object_0052ef44_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Object_0052ef44_1, word_0, 0x0);
GUEST_OFFSET(Object_0052ef44_1, word_4, 0x4);

inline guest::global<u32, 0x0085f2c4> block_cell_size_a;
inline guest::global<u32, 0x0085f2c8> block_cell_size_b;

u32 cell_to_world_corner(gptr<Object_0052ef44_0> arg0, gptr<Object_0052ef44_1> arg1) {
    float S0_1 = 0.0f;
    u32 r1_1 = arg1->word_0 * *block_cell_size_a;
    float S1_1 = float(s32(arg1->word_4 * *block_cell_size_b));
    arg0->float_0 = float(s32(r1_1));
    arg0->float_4 = S0_1;
    arg0->float_8 = S1_1;
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    return arg0.addr() + 4u;
}

}  // namespace d_0052ef44
GUEST_EXPORT(0x0052ef44, d_0052ef44::cell_to_world_corner);

// f_0052ef8c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The world position of the cell's center.
namespace d_0052ef8c {

struct __attribute__((packed)) Object_0052ef8c_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Object_0052ef8c_1, word_0, 0x0);
GUEST_OFFSET(Object_0052ef8c_1, word_4, 0x4);

inline guest::global<u32, 0x0085f2e0> cell_size_x;
inline guest::global<u32, 0x0085f2e4> cell_size_z;
inline guest::global<u32, 0x0085f2e8> half_cell_x;
inline guest::global<u32, 0x0085f2ec> half_cell_z;

void cell_to_world_center(gptr<GridRect> grid_rect, gptr<Object_0052ef8c_1> arg1) {
    float S0_1 = 0.0f;
    u32 r1_1 = arg1->word_0 * *cell_size_x + *half_cell_x;
    float S1_1 = float(s32(r1_1));
    float S2_1 = float(s32(arg1->word_4 * *cell_size_z + *half_cell_z));
    grid_rect->min.x = s32(u32(std::bit_cast<u32>(S1_1)));
    grid_rect->min.y = s32(u32(std::bit_cast<u32>(S0_1)));
    grid_rect->max.x = s32(u32(std::bit_cast<u32>(S2_1)));
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
}

}  // namespace d_0052ef8c
GUEST_EXPORT_FRAMED(0x0052ef8c, d_0052ef8c::cell_to_world_center, 0x30);  // pushes {r4, r5} first, as the original
