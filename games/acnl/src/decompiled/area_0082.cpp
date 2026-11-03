// Functions decompiled by tools/decomp (docs/decomp.md), each proved equal to the recompiled original (prove-cpp). The
// names come from games/acnl/names (tools/decomp/names.py); the others are generated (d_<address>::f_<address>,
// Object_<address>_<argument>, word_<offset>) and still to be chosen.
#include "guest/guest.hpp"
#include "recovered/structs.hpp"

#include <bit>

using guest::gptr;

// f_00825aa4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Unlinks the node from its owner's list and clears its owner.
namespace d_00825aa4 {

struct __attribute__((packed)) ListLink {
    u32 list70;
};
GUEST_OFFSET(ListLink, list70, 0x0);

inline constexpr guest::Function<0x00578018, u32(u32, u32)> List70__remove;

u32 ListLink__unlink(gptr<ListLink> list_link, u32 r1) {
    u32 list70 = list_link->list70;
    if (list70 == 0) {
        return list70;
    }
    List70__remove(list70, list_link.addr());
    list_link->list70 = 0;
    return 0u;
}

}  // namespace d_00825aa4
GUEST_EXPORT_FRAMED(0x00825aa4, d_00825aa4::ListLink__unlink, 0x4010);  // pushes {r4, lr} first, as the original

// f_00825acc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Unlinks the node and links it into the new owner's list (+0x70).
namespace d_00825acc {

inline constexpr guest::Function<0x00578018, u32(u32, u32, u32, u32)> List70__remove;

u32 ListLink__relink(u32 list_link, u32 r1, u32 r2) {
    for (;;) {
        u32 list70 = *gptr<u32>(list_link);
        u32 r5_1 = r1;
        if (list70 != 0) {
            list70 = List70__remove(list70, list_link, r2, guest::cpu()->r[3]);
            r1 = guest::cpu()->r[1];
        }
        if (r5_1 == 0) {
            guest::cpu()->r[1] = r1;
            return list70;
        }
        r1 = list_link;
        list_link = r5_1;
        if (!1) {
            break;
        }
        if (r1 == 0) {
            guest::cpu()->r[1] = r1;
            return list_link;
        }
        *gptr<u32>(r1 + 4u) = *gptr<u32>(list_link + 0x70u);  // (from the original)
        *gptr<u32>(list_link + 0x70u) = r1;  // (from the original)
        u32 r0_1 = *gptr<u32>(list_link + 0x74u);  // (from the original)
        *gptr<u32>(r1) = r0_1;
        guest::cpu()->r[1] = r1;
        return r0_1;
        guest::preempt();
    }
}

}  // namespace d_00825acc
GUEST_EXPORT_FRAMED(0x00825acc, d_00825acc::ListLink__relink, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_00825b04: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Unlinks the node from its owner's list and clears its owner; the node.
namespace d_00825b04 {

struct __attribute__((packed)) ListLink {
    u32 list70;
};
GUEST_OFFSET(ListLink, list70, 0x0);

inline constexpr guest::Function<0x00578018, u32(u32, u32)> List70__remove;

u32 ListLink__destroy(gptr<ListLink> list_link, u32 r1) {
    u32 list70 = list_link->list70;
    if (list70 == 0) {
        return list_link.addr();
    }
    List70__remove(list70, list_link.addr());
    list_link->list70 = 0;
    return list_link.addr();
}

}  // namespace d_00825b04
GUEST_EXPORT_FRAMED(0x00825b04, d_00825b04::ListLink__destroy, 0x4010);  // pushes {r4, lr} first, as the original

// f_00825c64: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether one of the 8 slots holds an object whose id (+0xb0) is `id`.
namespace d_00825c64 {


u32 slots_hold_id(u32 slots, u32 id) {
    u32 slot = 0u;
    do {
        u32 r3_1 = *gptr<u32>(slot >= 8u ? slots : slots + (slot << 2));
        if ((r3_1 == 0 ? ~0u : *gptr<u32>(r3_1 + 0xb0u)) == id) {  // (from the original)
            return 1u;
        }
        slot += 1u;
        guest::preempt();
    } while (s32(slot) < 8);
    return 0u;
}

}  // namespace d_00825c64
GUEST_EXPORT(0x00825c64, d_00825c64::slots_hold_id);

// f_00825d6c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00825d6c {


u32 false___virtual_9_00825d6c(gptr<ExchangeModelBank_24448u__BankVramConfig_736u__4u__3824u__4u__false___ExchangeBankKeywordMyDesignFgNameEx__SvFgName__Name_32766___item__ResLoader__2u__false_> the_false) {
    u32 r1_1 = u32(the_false->byte_24) & 1u;
    if (r1_1 >= 2u) {
        guest::cpu()->r[1] = r1_1;
        return 0u;
    }
    u32 r0_1 = the_false.addr() + r1_1 * 0xcu;  // (from the original)
    u32 r1_2 = *gptr<u32>(r0_1 + 0x4bcu);  // (from the original)
    if (r1_2 != 0) {
        guest::cpu()->r[1] = r1_2;
        return r0_1 + 0x4b8u;  // (from the original)
    }
    guest::cpu()->r[1] = r1_2;
    return 0u;
}

}  // namespace d_00825d6c
GUEST_EXPORT(0x00825d6c, d_00825d6c::false___virtual_9_00825d6c);

// f_00826038: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Reads the entry's header (0x18 bytes) and, when asked, its extra data; the result.
namespace d_00826038 {

struct __attribute__((packed)) ArchiveFile {
    u8 unknown_0[0x10];  // (not used here)
    u32 word_10;
    u32 word_14;
    u8 unknown_18[0x4];  // (not used here)
    u32 word_1c;
};
GUEST_OFFSET(ArchiveFile, word_10, 0x10);
GUEST_OFFSET(ArchiveFile, word_14, 0x14);
GUEST_OFFSET(ArchiveFile, word_1c, 0x1c);

struct __attribute__((packed)) Local_00826038_ea_2 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_00826038_ea_2, word_0, 0x0);
GUEST_OFFSET(Local_00826038_ea_2, word_4, 0x4);
GUEST_OFFSET(Local_00826038_ea_2, word_8, 0x8);

inline constexpr guest::Function<0x00346720, u32(u32, u32, u32, u32)> DataStore__read;

struct __attribute__((packed)) Frame_00826038 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u8 unknown_c[0x10];  // (not read or written by name)
    u32 word_1c;
};
GUEST_OFFSET(Frame_00826038, word_0, 0x0);
GUEST_OFFSET(Frame_00826038, word_4, 0x4);
GUEST_OFFSET(Frame_00826038, word_8, 0x8);
GUEST_OFFSET(Frame_00826038, word_1c, 0x1c);
GUEST_SIZE(Frame_00826038, 0x20);

u32 ArchiveFile__read_entry_header(gptr<ArchiveFile> archive_file, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_00826038> frame;  // the original's stack frame
    u32 r4_1 = archive_file->word_10;
    u32 res_1 = r4_1 + *frame.at<u32>(0x44);  // (from the original)
    u32 cf_1 = res_1 < r4_1;
    u32 r10_1 = *frame.at<u32>(0x40);  // (from the original)
    u32 r1_1 = frame.at(8).addr();
    u32 r3_1 = u64(archive_file->word_14) + cf_1;
    frame->word_0 = r1_1;
    frame->word_4 = 0x18;  // (from the original)
    u32 r0_2 = DataStore__read(archive_file->word_1c, r1_1, res_1, r3_1);
    if (s32(r0_2) >= 0) {
        if (r3 != 0 && r10_1 != 0) {
            *gptr<u32>(r10_1) = frame->word_1c;
            u32 r0_3 = frame->word_1c;
            if (r0_3 != 0) {
                frame->word_4 = r0_3;
                frame->word_0 = r3;
                r0_2 = DataStore__read(archive_file->word_1c, r1_1, res_1 + 0x18u, r3_1);  // (from the original)
                if (s32(r0_2) < 0) {
                    goto L_8260d0;
                }
            }
        }
        r0_2 = 0u;
    }
L_8260d0:;
    if (s32(r0_2) >= 0) {
        *gptr<u32>(r1) = frame->word_8;
        gptr<Local_00826038_ea_2> ea_2 = gptr<Local_00826038_ea_2>(frame.at(0xc).addr());  // (from the original)
        u32 r1_2 = ea_2->word_4;
        u32 r2_2 = ea_2->word_8;
        *gptr<u32>(r2) = ea_2->word_0;
        *gptr<u32>(r2 + 4) = r1_2;
        *gptr<u32>(r2 + 8) = r2_2;
        r0_2 = 0u;
    }
    return r0_2;
}

}  // namespace d_00826038
GUEST_EXPORT_FRAMED(0x00826038, d_00826038::ArchiveFile__read_entry_header, 0x47f0);  // pushes {r4, r5, r6, r7, r8, r9, r10, lr} first, as the original

// f_00826270: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Reads the entry's header, its name and its data; the result.
namespace d_00826270 {

struct __attribute__((packed)) Object_00826270_2 {
    u32 word_0;
};
GUEST_OFFSET(Object_00826270_2, word_0, 0x0);

inline constexpr guest::Function<0x00350b88, u32(u32, u32, u32)> NexBuffer__read_string;
inline constexpr guest::Function<0x00826038, u32(u32, u32, u32, u32)> ArchiveFile__read_entry_header;
inline constexpr guest::Function<0x008266bc, u32(u32, u32, u32, u32)> ArchiveFile__read_entry_data;

struct __attribute__((packed)) Frame_00826270 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u8 unknown_c[0xc];  // (not read or written by name)
};
GUEST_OFFSET(Frame_00826270, word_0, 0x0);
GUEST_OFFSET(Frame_00826270, word_4, 0x4);
GUEST_OFFSET(Frame_00826270, word_8, 0x8);
GUEST_SIZE(Frame_00826270, 0x18);

u32 ArchiveFile__read_entry(u32 archive_file, u32 r1, gptr<Object_00826270_2> arg2, u32 r3) {
    guest::StackFrameOf<Frame_00826270> frame;  // the original's stack frame
    u32 r1_1 = *frame.at<u32>(0x30);  // (from the original)
    u32 r8_1 = *frame.at<u32>(0x3c);  // (from the original)
    frame->word_0 = 0;
    frame->word_4 = r1_1;
    u32 r0_1 = ArchiveFile__read_entry_header(archive_file, frame.at(8).addr(), frame.at(0xc).addr(), 0u);  // (from the original)
    if (s32(r0_1) >= 0) {
        arg2->word_0 = frame->word_8;
        r0_1 = NexBuffer__read_string(arg2.addr() + 4u, frame.at(0x34).addr(), r8_1);  // (from the original)
        if (s32(r0_1) >= 0) {
            r0_1 = ArchiveFile__read_entry_data(archive_file, r1, r3, arg2.addr());
            if (s32(r0_1) >= 0) {
                r0_1 = 0u;
            }
        }
    }
    return r0_1;
}

}  // namespace d_00826270
GUEST_EXPORT_FRAMED(0x00826270, d_00826270::ArchiveFile__read_entry, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_008266bc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Reads the entry's data by its blocks.
namespace d_008266bc {

struct __attribute__((packed)) Object_008266bc_3 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Object_008266bc_3, word_0, 0x0);
GUEST_OFFSET(Object_008266bc_3, word_4, 0x4);
GUEST_OFFSET(Object_008266bc_3, word_8, 0x8);

inline constexpr guest::Function<0x00825ecc, u32(u32, u32, u32, u32)> ArchiveFile__read_index;
inline constexpr guest::Function<0x008260f8, u32(u32, u32, u32, u32)> ArchiveFile__read_block;

struct __attribute__((packed)) Frame_008266bc {
    u32 archive_file;
    u32 word_4;
    u32 word_8;
    u8 unknown_c[0x18];  // (not read or written by name)
};
GUEST_OFFSET(Frame_008266bc, archive_file, 0x0);
GUEST_OFFSET(Frame_008266bc, word_4, 0x4);
GUEST_OFFSET(Frame_008266bc, word_8, 0x8);
GUEST_SIZE(Frame_008266bc, 0x24);

u32 ArchiveFile__read_entry_data(u32 archive_file, u32 r1, u32 r2, gptr<Object_008266bc_3> arg3) {
    guest::StackFrameOf<Frame_008266bc> frame;  // the original's stack frame
    u32 r3 = arg3.addr();
    u32 r5 = 0;
    u32 res_2 = 0;
    u32 res_4 = 0;
    u32 r7 = r3;
    u32 r10 = archive_file;
    u32 r8 = ~0u;
    u32 r6 = arg3->word_8;
    u32 r14 = arg3->word_4;
    u32 r9 = 0x75bcd15u;  // (from the original)
    u32 r11 = r6 + (r14 << 1) - r6;
    u32 r12 = arg3->word_0 ^ r9;
    u32 r0_1 = r8 + u32(s32(r11) >> 1);
    if (s32(r0_1) > 0) {
        u32 r4 = r6 - 2u;
        if ((r11 & 0x2u) == 0) {  // (from the original)
            u32 ea_1 = r4 + 2u;
            r4 = ea_1;
            r12 = u32(*gptr<u16>(ea_1)) ^ ror32(r12, 5);
        }
        u32 res_1 = s32(r0_1) >> 1;
        r5 = res_1;
        archive_file = *gptr<u16>(r4 + 2u);
        if (res_1 != 0) {
            do {
                u32 ea_2 = r4 + 4u;
                r4 = ea_2;
                u32 r12_1 = archive_file ^ ror32(r12, 5);
                archive_file = *gptr<u16>(r4 + 2u);
                res_2 = r5 - 1u;
                r5 = res_2;
                r12 = u32(*gptr<u16>(ea_2)) ^ ror32(r12_1, 5);
                guest::preempt();
            } while (res_2 != 0);
        }
    }
    u32 r0_2 = r8 + u32(s32(r11) >> 1);
    if (s32(r0_2) >= 0) {
        r12 = u32(gptr<u16>(r6)[r0_2]) ^ ror32(r12, 5);
    }
    frame->word_8 = r14 << 1;
    frame->word_4 = r6;
    frame->archive_file = r12;
    u32 r0_3 = ArchiveFile__read_index(r10, r1, r2, r7);
    if (s32(r0_3) < 0 && (r0_3 & 0x3fc00u) >> 0xa == 0x11u && (r0_3 & 0x3ffu) == 0x6fu) {  // (from the original)
        r5 = *gptr<u32>(r7 + 4);
        r3 = *gptr<u32>(r7 + 8u);
        archive_file = *gptr<u32>(r7) ^ r9;
        r6 = r3 + (r5 << 1) - r3;
        u32 r2_1 = r8 + u32(s32(r6) >> 1);
        if (s32(r2_1) > 0) {
            r1 = r3 - 2u;
            if ((r6 & 0x2u) == 0) {  // (from the original)
                u32 ea_3 = r1 + 2u;
                r1 = ea_3;
                archive_file = u32(*gptr<u16>(ea_3)) ^ ror32(archive_file, 5);
            }
            r12 = *gptr<u16>(r1 + 2u);
            r2 = s32(r2_1) >> 1;
            if (r2 != 0) {
                do {
                    u32 ea_4 = r1 + 4u;
                    r1 = ea_4;
                    u32 r4_1 = *gptr<u16>(ea_4);
                    u32 r0_4 = r12 ^ ror32(archive_file, 5);
                    r12 = *gptr<u16>(r1 + 2u);
                    res_4 = r2 - 1u;
                    r2 = res_4;
                    archive_file = r4_1 ^ ror32(r0_4, 5);
                    guest::preempt();
                } while (res_4 != 0);
            }
        }
        u32 r1_1 = r8 + u32(s32(r6) >> 1);
        if (s32(r1_1) >= 0) {
            archive_file = u32(gptr<u16>(r3)[r1_1]) ^ ror32(archive_file, 5);
        }
        frame->word_8 = r5 << 1;
        frame->archive_file = archive_file;
        frame->word_4 = r3;
        r0_3 = ArchiveFile__read_block(r10 + 0x28u, frame.at(0x20).addr(), frame.at(0xc).addr(), r7);  // (from the original)
        if (s32(r0_3) >= 0) {
            r0_3 = 0xe0c04702u;  // (from the original)
        } else if ((r0_3 & 0x3fc00u) >> 0xa == 0x11u && (r0_3 & 0x3ffu) == 0x6fu) {  // (from the original)
            r0_3 = 0xc8804471u;  // (from the original)
        }
    }
    return r0_3;
}

}  // namespace d_008266bc
GUEST_EXPORT_FRAMED(0x008266bc, d_008266bc::ArchiveFile__read_entry_data, 0x4ff0);  // pushes {r4, r5, r6, r7, r8, r9, r10, r11, lr} first, as the original

// f_00826c34: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether the id passes the filter: equal to it (kind 2) or in one of its ranges (kind 3).
namespace d_00826c34 {

struct __attribute__((packed)) IdFilter {
    u8 unknown_0[0x4];  // (not used here)
    u8 byte_4;
};
GUEST_OFFSET(IdFilter, byte_4, 0x4);


u32 IdFilter__matches(gptr<IdFilter> id_filter, u32 r1) {
    u32 r0 = id_filter.addr();
    u32 r2_1 = id_filter->byte_4;
    if (r2_1 != 2u) {
        if (r2_1 != 3u) {
            return 0u;
        }
    } else {
        return *gptr<u16>(r0 + 6u) == r1;
    }
    u32 r2 = r0 + 8u;
    r0 = *gptr<u32>(r0 + 0xcu);  // (from the original)
    if (r0 == r2) {
        return 0u;
    }
    do {
        u32 r12_1 = *gptr<u16>(r0 + 8u);
        u32 zf_1 = r12_1 == r1;
        u32 cf_1 = r12_1 >= r1;
        if (!cf_1 || zf_1) {
            u32 r12_2 = *gptr<u16>((r0 + 8u) + 2u);
            zf_1 = r1 == r12_2;
            cf_1 = r1 >= r12_2;
        }
        if (!cf_1 || zf_1) {
            return 1u;
        }
        r0 = *gptr<u32>(r0 + 4u);
        guest::preempt();
    } while (r0 != r2);
    return 0u;
}

}  // namespace d_00826c34
GUEST_EXPORT(0x00826c34, d_00826c34::IdFilter__matches);

// f_00827060: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The width of the text's bounds (in s0) in the font.
namespace d_00827060 {

inline constexpr guest::Function<0x002fbb30, u32(u32, u32, u32, u32)> copy_aligned_bytes;
inline constexpr guest::Function<0x007e85c0, u32(u32, u32, u32, u32)> Font__text_bounds;

struct __attribute__((packed)) Frame_00827060 {
    u8 unknown_0[0x68];  // (not read or written by name)
    float float_68;
    float float_6c;
    float float_70;
    float float_74;
};
GUEST_OFFSET(Frame_00827060, float_68, 0x68);
GUEST_OFFSET(Frame_00827060, float_6c, 0x6c);
GUEST_OFFSET(Frame_00827060, float_70, 0x70);
GUEST_OFFSET(Frame_00827060, float_74, 0x74);
GUEST_SIZE(Frame_00827060, 0x78);

void Font__measure_width(u32 font, u32 r1, u32 r2, u32 r3, float S0_unused, float S1) {
    guest::StackFrameOf<Frame_00827060> frame;  // the original's stack frame
    float S0_1 = 0.0f;
    frame->float_68 = S0_1;
    frame->float_6c = S0_1;
    frame->float_70 = S0_1;
    frame->float_74 = S0_1;
    guest::cpu()->s[0] = S0_1;
    copy_aligned_bytes(frame.at(0).addr(), font, 0x64u, r3);  // (from the original)
    Font__text_bounds(frame.at(0).addr(), frame.at(0x68).addr(), r1, r2);  // (from the original)
    float S1_2 = frame->float_68;
    float S0_3 = frame->float_70 - S1_2;
    guest::cpu()->s[0] = S0_3;
    guest::cpu()->s[1] = S1_2;
}

}  // namespace d_00827060
GUEST_EXPORT_FRAMED(0x00827060, d_00827060::Font__measure_width, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_008270cc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The height of the text's bounds (in s0) in the font.
namespace d_008270cc {

inline constexpr guest::Function<0x002fbb30, u32(u32, u32, u32, u32)> copy_aligned_bytes;
inline constexpr guest::Function<0x007e85c0, u32(u32, u32, u32, u32)> Font__text_bounds;

struct __attribute__((packed)) Frame_008270cc {
    u8 unknown_0[0x68];  // (not read or written by name)
    float float_68;
    float float_6c;
    float float_70;
    float float_74;
};
GUEST_OFFSET(Frame_008270cc, float_68, 0x68);
GUEST_OFFSET(Frame_008270cc, float_6c, 0x6c);
GUEST_OFFSET(Frame_008270cc, float_70, 0x70);
GUEST_OFFSET(Frame_008270cc, float_74, 0x74);
GUEST_SIZE(Frame_008270cc, 0x78);

void Font__measure_height(u32 font, u32 r1, u32 r2, u32 r3, float S0_unused, float S1) {
    guest::StackFrameOf<Frame_008270cc> frame;  // the original's stack frame
    float S0_1 = 0.0f;
    frame->float_68 = S0_1;
    frame->float_6c = S0_1;
    frame->float_70 = S0_1;
    frame->float_74 = S0_1;
    guest::cpu()->s[0] = S0_1;
    copy_aligned_bytes(frame.at(0).addr(), font, 0x64u, r3);  // (from the original)
    Font__text_bounds(frame.at(0).addr(), frame.at(0x68).addr(), r1, r2);  // (from the original)
    float S1_2 = frame->float_6c;
    float S0_3 = frame->float_74 - S1_2;
    guest::cpu()->s[0] = S0_3;
    guest::cpu()->s[1] = S1_2;
}

}  // namespace d_008270cc
GUEST_EXPORT_FRAMED(0x008270cc, d_008270cc::Font__measure_height, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0082d508: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0082d508 {

struct __attribute__((packed)) nn__nex__String {
    u8 unknown_0[0x10];  // (not used here)
    u32 word_10;
};
GUEST_OFFSET(nn__nex__String, word_10, 0x10);

struct __attribute__((packed)) Object_0082d508_1 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
};
GUEST_OFFSET(Object_0082d508_1, word_4, 0x4);

inline constexpr u32 vtable_nn__nex__String = 0x008fe9d0u;
inline constexpr guest::Function<0x003548f0, u32(u32, u32, u32, u32)> NexString__assign_wide;
inline constexpr guest::Function<0x003d0d6c, u32(u32)> nn__nex__String__virtual_0;
inline constexpr guest::Function<0x0072d6bc, u32(u32, u32, u32, u32)> nn__nex__String__String_0072d6bc;
inline constexpr guest::Function<0x007fe104, u32(u32, u32, u32, u32)> nn__nex__String__String_007fe104;

struct __attribute__((packed)) Frame_0082d508 {
    u32 word_0;
    u8 unknown_4[0xc];  // (not read or written by name)
    u32 object_10_vtable;
    u32 word_14;
    u8 unknown_18[0x4];  // (not read or written by name)
    u32 word_1c;
    u32 object_20_vtable;
    u8 unknown_24[0x4];  // (not read or written by name)
    u32 object_28_vtable;
    u8 unknown_2c[0x4];  // (not read or written by name)
    u32 word_30;
    u8 unknown_34[0x10];  // (not read or written by name)
};
GUEST_OFFSET(Frame_0082d508, word_0, 0x0);
GUEST_OFFSET(Frame_0082d508, object_10_vtable, 0x10);
GUEST_OFFSET(Frame_0082d508, word_14, 0x14);
GUEST_OFFSET(Frame_0082d508, word_1c, 0x1c);
GUEST_OFFSET(Frame_0082d508, object_20_vtable, 0x20);
GUEST_OFFSET(Frame_0082d508, object_28_vtable, 0x28);
GUEST_OFFSET(Frame_0082d508, word_30, 0x30);
GUEST_SIZE(Frame_0082d508, 0x44);

u32 nn__nex__String__String_0082d508(gptr<nn__nex__String> string, gptr<Object_0082d508_1> arg1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_0082d508> frame;  // the original's stack frame
    u32 r0 = string.addr();
    u32 r0_6 = 0;
    u32 r0_9 = 0;
    u32 r9 = r0;
    u32 r7 = frame.at(0x30).addr();  // (from the original)
    u32 r8 = frame.at(0x20).addr();  // (from the original)
    frame->object_10_vtable = vtable_nn__nex__String;
    NexString__assign_wide(frame.at(0x14).addr(), 0x89a14cu, r2, r3);  // (from the original)
    frame->object_20_vtable = vtable_nn__nex__String;
    NexString__assign_wide(r8 + 4u, arg1->word_4, guest::cpu()->r[2], guest::cpu()->r[3]);
    frame->object_28_vtable = vtable_nn__nex__String;
    NexString__assign_wide(r8 + 0xcu, frame->word_14, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    u32 r5 = string->word_10;
    u32 r0_4 = 1u;
    u32 r4 = *gptr<u32>(r5 + 4u);
    if (r4 != 0) {
        do {
            r5 = r4;
            r0_4 = nn__nex__String__String_0072d6bc(r8, r4 + 0x10u, r2, r3);  // (from the original)
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            r4 = r0_4 == 0 ? *gptr<u32>(r4 + 0xcu) : *gptr<u32>(r4 + 8u);  // (from the original)
            guest::preempt();
        } while (r4 != 0);
    }
    u32 r10 = 1u;
    u32 r11 = 0u;
    if (*gptr<u8>(r9 + 0x18u) == 0) {  // (from the original)
        u32 r6 = r5;
        if (r0_4 != 0) {
            if (r5 == *gptr<u32>(*gptr<u32>(r9 + 0x10u) + 8u)) {  // (from the original)
                frame->word_0 = r8;
                nn__nex__String__String_007fe104(frame.at(0x1c).addr(), r9, r4, r6);  // (from the original)
                frame->word_30 = frame->word_1c;
                *gptr<u8>(r7 + 4u) = u8(r10);
                goto L_82d69c;
            }
            if (*gptr<u8>(r6) == 0 && *gptr<u32>(*gptr<u32>(r5 + 4u) + 4u) == r5) {
                r6 = *gptr<u32>(r5 + 0xcu);  // (from the original)
            } else {
                r6 = *gptr<u32>(r5 + 8u);
                if (r6 != 0) {
                    r0 = *gptr<u32>(r6 + 0xcu);  // (from the original)
                    if (r0 != 0) {
                        do {
                            r6 = r0;
                            r0 = *gptr<u32>(r0 + 0xcu);  // (from the original)
                            guest::preempt();
                        } while (r0 != 0);
                    }
                } else {
                    r6 = *gptr<u32>(r5 + 4u);
                    if (r5 == *gptr<u32>(r6 + 8u)) {
                        do {
                            r0_6 = r6;
                            r6 = *gptr<u32>(r6 + 4u);
                            guest::preempt();
                        } while (r0_6 == *gptr<u32>(r6 + 8u));
                    }
                }
            }
        }
        u32 r0_8 = nn__nex__String__String_0072d6bc(r6 + 0x10u, r8, r2, r3);  // (from the original)
        if (r0_8 == 0) {
            frame->word_30 = r6;
            *gptr<u8>(r7 + 4u) = u8(r11);
            goto L_82d69c;
        }
    }
    r0_9 = frame.at(0x1c).addr();  // (from the original)
    frame->word_0 = r8;
    nn__nex__String__String_007fe104(r0_9, r9, r4, r5);
    frame->word_30 = frame->word_1c;
    *gptr<u8>(r7 + 4u) = u8(r10);
L_82d69c:;
    u32 r4_1 = frame->word_30;
    u32 r0_10 = frame.at(0x28).addr();  // (from the original)
    nn__nex__String__virtual_0(r0_10);
    nn__nex__String__virtual_0(r0_10 - 8u);
    nn__nex__String__virtual_0(frame.at(0x10).addr());  // (from the original)
    return r4_1 + 0x18u;  // (from the original)
}

}  // namespace d_0082d508
GUEST_EXPORT_FRAMED(0x0082d508, d_0082d508::nn__nex__String__String_0082d508, 0x4ff0);  // pushes {r4, r5, r6, r7, r8, r9, r10, r11, lr} first, as the original

// f_0082d6d4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Copies the map's security contexts into the other's nodes.
namespace d_0082d6d4 {

struct __attribute__((packed)) NexMap {
    u8 unknown_0[0x10];  // (not used here)
    u32 word_10;
};
GUEST_OFFSET(NexMap, word_10, 0x10);

struct __attribute__((packed)) Object_0082d6d4_1 {
    u32 word_0;
};
GUEST_OFFSET(Object_0082d6d4_1, word_0, 0x0);

struct __attribute__((packed)) Local_0082d6d4_r0_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_0082d6d4_r0_1, word_0, 0x0);
GUEST_OFFSET(Local_0082d6d4_r0_1, word_4, 0x4);
GUEST_OFFSET(Local_0082d6d4_r0_1, word_8, 0x8);

struct __attribute__((packed)) Local_0082d6d4_r12 {
    u32 word_0;
};
GUEST_OFFSET(Local_0082d6d4_r12, word_0, 0x0);

inline constexpr guest::Function<0x003619b0, u32(u32, u32, u32, u32)> allocate_with_header;
inline constexpr guest::Function<0x003cef28, u32(u32, u32)> nn__nex__SecurityContext__SecurityContext_003cef28;
inline constexpr guest::Function<0x003cf0b8, u32(u32, u32, u32, u32)> NexList__clear_nodes;
inline constexpr guest::Function<0x008048c4, u32(u32, u32, u32, u32)> NexTree__copy_nodes_804;

struct __attribute__((packed)) Frame_0082d6d4 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u32 word_18;
    u32 word_1c;
    u32 word_20;
    u8 unknown_24[0x1c];  // (not read or written by name)
    u32 word_40;
    u8 unknown_44[0x4];  // (not read or written by name)
};
GUEST_OFFSET(Frame_0082d6d4, word_0, 0x0);
GUEST_OFFSET(Frame_0082d6d4, word_4, 0x4);
GUEST_OFFSET(Frame_0082d6d4, word_8, 0x8);
GUEST_OFFSET(Frame_0082d6d4, word_c, 0xc);
GUEST_OFFSET(Frame_0082d6d4, word_10, 0x10);
GUEST_OFFSET(Frame_0082d6d4, word_14, 0x14);
GUEST_OFFSET(Frame_0082d6d4, word_18, 0x18);
GUEST_OFFSET(Frame_0082d6d4, word_1c, 0x1c);
GUEST_OFFSET(Frame_0082d6d4, word_20, 0x20);
GUEST_OFFSET(Frame_0082d6d4, word_40, 0x40);
GUEST_SIZE(Frame_0082d6d4, 0x48);

u32 NexMap__copy_security_contexts(gptr<NexMap> nex_map, gptr<Object_0082d6d4_1> arg1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_0082d6d4> frame;  // the original's stack frame
    u32 r0 = nex_map.addr();
    u32 r1 = arg1.addr();
    u32 r6_2 = 0;
    u32 r0_8 = 0;
    u32 r10 = 0u;
    frame->word_8 = r10;
    u32 r5 = frame.at(0x40).addr();  // (from the original)
    frame->word_c = r10;
    frame->word_10 = r10;
    frame->word_14 = r10;
    frame->word_18 = r10;
    frame->word_1c = r10;
    gptr<Local_0082d6d4_r0_1> r0_1 = gptr<Local_0082d6d4_r0_1>(allocate_with_header(0xcu, r1, r2, r3));  // (from the original)
    u32 r0_2 = allocate_with_header(0x18u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    r0_1->word_8 = r0_2;
    r0_1->word_0 = frame->word_8;
    r0_1->word_4 = 1;
    frame->word_8 = r0_1.addr();
    u32 r0_3 = r0_1->word_8;
    frame->word_10 = r0_3;
    u32 r1_2 = frame->word_10;
    u32 r0_4 = r0_3 + 0x18u;  // (from the original)
    frame->word_14 = r0_4;
    frame->word_10 = r0_4;
    frame->word_18 = r1_2;
    *gptr<u32>(r1_2) = r1_2;
    u32 r0_5 = frame->word_18;
    *gptr<u32>(r0_5 + 4u) = r0_5;
    frame->word_20 = arg1->word_0;
    u32 r0_7 = nn__nex__SecurityContext__SecurityContext_003cef28(frame.at(0x20).addr() + 4u, frame.at(8).addr());  // (from the original)
    r3 = nex_map->word_10;
    gptr<Local_0082d6d4_r12> r12 = gptr<Local_0082d6d4_r12>(r0_7 - 4u);
    r1 = r0;
    u32 r7 = r3;
    r2 = *gptr<u32>(r3 + 4u);
    u32 r6_1 = 1u;
    if (r2 != 0) {
        r0 = r12->word_0;
        do {
            r3 = r2;
            if (r0 >= *gptr<u32>(r2 + 0x10u)) {  // (from the original)
                r2 = *gptr<u32>(r3 + 0xcu);  // (from the original)
                r6_1 = 0u;
            } else {
                r2 = *gptr<u32>(r3 + 8u);
                r6_1 = 1u;
            }
            guest::preempt();
        } while (r2 != 0);
    }
    u32 r4 = 1u;
    if (*gptr<u8>(r1 + 0x18u) == 0) {  // (from the original)
        r0 = r3;
        if (r6_1 != 0) {
            if (r3 == *gptr<u32>(r7 + 8u)) {
                goto L_82d864;
            }
            if (*gptr<u8>(r3) == 0 && *gptr<u32>(*gptr<u32>(r3 + 4u) + 4u) == r3) {
                r0 = *gptr<u32>(r3 + 0xcu);  // (from the original)
            } else {
                r0 = *gptr<u32>(r3 + 8u);
                if (r0 != 0) {
                    u32 r6 = *gptr<u32>(r0 + 0xcu);  // (from the original)
                    if (r6 != 0) {
                        do {
                            r0 = r6;
                            r6 = *gptr<u32>(r6 + 0xcu);  // (from the original)
                            guest::preempt();
                        } while (r6 != 0);
                    }
                } else {
                    r0 = *gptr<u32>(r3 + 4u);
                    if (r3 == *gptr<u32>(r0 + 8u)) {
                        do {
                            r6_2 = r0;
                            r0 = *gptr<u32>(r0 + 4u);
                            guest::preempt();
                        } while (r6_2 == *gptr<u32>(r0 + 8u));
                    }
                }
            }
        }
        if (*gptr<u32>(r0 + 0x10u) >= r12->word_0) {  // (from the original)
            frame->word_40 = r0;
            *gptr<u8>(r5 + 4u) = u8(r10);
            goto L_82d87c;
        }
    }
L_82d864:;
    r0_8 = frame.at(4).addr();
    frame->word_0 = r12.addr();
    NexTree__copy_nodes_804(r0_8, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    frame->word_40 = frame->word_4;
    *gptr<u8>(r5 + 4u) = u8(r4);
L_82d87c:;
    u32 r4_1 = frame->word_40;
    NexList__clear_nodes(frame.at(0x24).addr(), r1, r2, r3);  // (from the original)
    NexList__clear_nodes(frame.at(8).addr(), r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    return r4_1 + 0x14u;  // (from the original)
}

}  // namespace d_0082d6d4
GUEST_EXPORT_FRAMED(0x0082d6d4, d_0082d6d4::NexMap__copy_security_contexts, 0x47f0);  // pushes {r4, r5, r6, r7, r8, r9, r10, lr} first, as the original

// f_0082d8a0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Copies the tree into the other, reusing its nodes.
namespace d_0082d8a0 {

struct __attribute__((packed)) NexTree {
    u8 unknown_0[0x10];  // (not used here)
    u32 word_10;
};
GUEST_OFFSET(NexTree, word_10, 0x10);

struct __attribute__((packed)) Object_0082d8a0_1 {
    u32 word_0;
};
GUEST_OFFSET(Object_0082d8a0_1, word_0, 0x0);

struct __attribute__((packed)) Local_0082d8a0_r12 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
};
GUEST_OFFSET(Local_0082d8a0_r12, word_4, 0x4);
GUEST_OFFSET(Local_0082d8a0_r12, word_8, 0x8);
GUEST_OFFSET(Local_0082d8a0_r12, word_c, 0xc);
GUEST_OFFSET(Local_0082d8a0_r12, word_10, 0x10);

inline constexpr guest::Function<0x0080606c, u32(u32, u32, u32, u32)> NexTree__copy_nodes_806;

struct __attribute__((packed)) Frame_0082d8a0 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u8 unknown_c[0x4];  // (not read or written by name)
    u32 word_10;
    u32 word_14;
    u8 unknown_18[0x4];  // (not read or written by name)
};
GUEST_OFFSET(Frame_0082d8a0, word_0, 0x0);
GUEST_OFFSET(Frame_0082d8a0, word_4, 0x4);
GUEST_OFFSET(Frame_0082d8a0, word_8, 0x8);
GUEST_OFFSET(Frame_0082d8a0, word_10, 0x10);
GUEST_OFFSET(Frame_0082d8a0, word_14, 0x14);
GUEST_SIZE(Frame_0082d8a0, 0x1c);

u32 NexTree__copy_806(gptr<NexTree> nex_tree, gptr<Object_0082d8a0_1> arg1) {
    guest::StackFrameOf<Frame_0082d8a0> frame;  // the original's stack frame
    u32 r0 = nex_tree.addr();
    u32 r1 = arg1.addr();
    gptr<Local_0082d8a0_r12> r12 = gptr<Local_0082d8a0_r12>(0u);
    u32 r0_2 = 0;
    u32 r0_4 = 0;
    u32 r4 = frame.at(8).addr();
    u32 r2_1 = arg1->word_0;
    frame->word_14 = 0;
    frame->word_10 = r2_1;
    u32 r3 = nex_tree->word_10;
    r1 = r0;
    u32 r6 = frame.at(0x10).addr();  // (from the original)
    u32 r7 = r3;
    u32 r2 = *gptr<u32>(r3 + 4u);
    u32 r0_1 = 1u;
    if (r2 != 0) {
        r12 = gptr<Local_0082d8a0_r12>(frame->word_10);
        do {
            r3 = r2;
            if (r12.addr() >= *gptr<u32>(r2 + 0x10u)) {  // (from the original)
                r2 = *gptr<u32>(r3 + 0xcu);  // (from the original)
                r0_1 = 0u;
            } else {
                r2 = *gptr<u32>(r3 + 8u);
                r0_1 = 1u;
            }
            guest::preempt();
        } while (r2 != 0);
    }
    u32 r5 = 1u;
    if (*gptr<u8>(r1 + 0x18u) == 0) {  // (from the original)
        r12 = gptr<Local_0082d8a0_r12>(r3);
        if (r0_1 != 0) {
            if (r3 == *gptr<u32>(r7 + 8u)) {
                goto L_82d9b0;
            }
            if (*gptr<u8>(r3) == 0 && *gptr<u32>(*gptr<u32>(r3 + 4u) + 4u) == r3) {
                r12 = gptr<Local_0082d8a0_r12>(*gptr<u32>(r3 + 0xcu));  // (from the original)
            } else {
                r12 = gptr<Local_0082d8a0_r12>(*gptr<u32>(r3 + 8u));
                if (r12.addr() != 0) {
                    r0 = r12->word_c;
                    if (r0 != 0) {
                        do {
                            r12 = gptr<Local_0082d8a0_r12>(r0);
                            r0 = *gptr<u32>(r0 + 0xcu);  // (from the original)
                            guest::preempt();
                        } while (r0 != 0);
                    }
                } else {
                    r12 = gptr<Local_0082d8a0_r12>(*gptr<u32>(r3 + 4u));
                    if (r3 == r12->word_8) {
                        do {
                            r0_2 = r12.addr();
                            r12 = gptr<Local_0082d8a0_r12>(r12->word_4);
                            guest::preempt();
                        } while (r0_2 == r12->word_8);
                    }
                }
            }
        }
        if (r12->word_10 >= frame->word_10) {
            frame->word_8 = r12.addr();
            *gptr<u8>(r4 + 4u) = 0;
            r0_4 = frame->word_8 + 0x14u;  // (from the original)
            guest::cpu()->r[1] = r1;
            return r0_4;
        }
    }
L_82d9b0:;
    frame->word_0 = r6;
    NexTree__copy_nodes_806(frame.at(4).addr(), r1, r2, r3);
    r1 = guest::cpu()->r[1];
    frame->word_8 = frame->word_4;
    *gptr<u8>(r4 + 4u) = u8(r5);
    return frame->word_8 + 0x14u;  // (from the original)
}

}  // namespace d_0082d8a0
GUEST_EXPORT_FRAMED(0x0082d8a0, d_0082d8a0::NexTree__copy_806, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_0082d9e8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Copies the tree into the other, reusing its nodes.
namespace d_0082d9e8 {

struct __attribute__((packed)) NexTree {
    u8 unknown_0[0x10];  // (not used here)
    u32 word_10;
};
GUEST_OFFSET(NexTree, word_10, 0x10);

struct __attribute__((packed)) Object_0082d9e8_1 {
    u32 word_0;
};
GUEST_OFFSET(Object_0082d9e8_1, word_0, 0x0);

struct __attribute__((packed)) Local_0082d9e8_r12 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
};
GUEST_OFFSET(Local_0082d9e8_r12, word_4, 0x4);
GUEST_OFFSET(Local_0082d9e8_r12, word_8, 0x8);
GUEST_OFFSET(Local_0082d9e8_r12, word_c, 0xc);
GUEST_OFFSET(Local_0082d9e8_r12, word_10, 0x10);

inline constexpr guest::Function<0x008098d4, u32(u32, u32, u32, u32)> NexTree__copy_nodes_809;

struct __attribute__((packed)) Frame_0082d9e8 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u8 unknown_c[0x4];  // (not read or written by name)
    u32 word_10;
    u32 word_14;
    u8 unknown_18[0x4];  // (not read or written by name)
};
GUEST_OFFSET(Frame_0082d9e8, word_0, 0x0);
GUEST_OFFSET(Frame_0082d9e8, word_4, 0x4);
GUEST_OFFSET(Frame_0082d9e8, word_8, 0x8);
GUEST_OFFSET(Frame_0082d9e8, word_10, 0x10);
GUEST_OFFSET(Frame_0082d9e8, word_14, 0x14);
GUEST_SIZE(Frame_0082d9e8, 0x1c);

u32 NexTree__copy_809(gptr<NexTree> nex_tree, gptr<Object_0082d9e8_1> arg1) {
    guest::StackFrameOf<Frame_0082d9e8> frame;  // the original's stack frame
    u32 r0 = nex_tree.addr();
    u32 r1 = arg1.addr();
    gptr<Local_0082d9e8_r12> r12 = gptr<Local_0082d9e8_r12>(0u);
    u32 r0_2 = 0;
    u32 r4 = frame.at(8).addr();
    u32 r2_1 = arg1->word_0;
    frame->word_14 = 0;
    frame->word_10 = r2_1;
    u32 r3 = nex_tree->word_10;
    r1 = r0;
    u32 r6 = frame.at(0x10).addr();  // (from the original)
    u32 r7 = r3;
    u32 r2 = *gptr<u32>(r3 + 4u);
    u32 r0_1 = 1u;
    if (r2 != 0) {
        r12 = gptr<Local_0082d9e8_r12>(frame->word_10);
        do {
            r3 = r2;
            if (r12.addr() >= *gptr<u32>(r2 + 0x10u)) {  // (from the original)
                r2 = *gptr<u32>(r3 + 0xcu);  // (from the original)
                r0_1 = 0u;
            } else {
                r2 = *gptr<u32>(r3 + 8u);
                r0_1 = 1u;
            }
            guest::preempt();
        } while (r2 != 0);
    }
    u32 r5 = 1u;
    if (*gptr<u8>(r1 + 0x18u) == 0) {  // (from the original)
        r12 = gptr<Local_0082d9e8_r12>(r3);
        if (r0_1 != 0) {
            if (r3 == *gptr<u32>(r7 + 8u)) {
                goto L_82daf8;
            }
            if (*gptr<u8>(r3) == 0 && *gptr<u32>(*gptr<u32>(r3 + 4u) + 4u) == r3) {
                r12 = gptr<Local_0082d9e8_r12>(*gptr<u32>(r3 + 0xcu));  // (from the original)
            } else {
                r12 = gptr<Local_0082d9e8_r12>(*gptr<u32>(r3 + 8u));
                if (r12.addr() != 0) {
                    r0 = r12->word_c;
                    if (r0 != 0) {
                        do {
                            r12 = gptr<Local_0082d9e8_r12>(r0);
                            r0 = *gptr<u32>(r0 + 0xcu);  // (from the original)
                            guest::preempt();
                        } while (r0 != 0);
                    }
                } else {
                    r12 = gptr<Local_0082d9e8_r12>(*gptr<u32>(r3 + 4u));
                    if (r3 == r12->word_8) {
                        do {
                            r0_2 = r12.addr();
                            r12 = gptr<Local_0082d9e8_r12>(r12->word_4);
                            guest::preempt();
                        } while (r0_2 == r12->word_8);
                    }
                }
            }
        }
        if (r12->word_10 >= frame->word_10) {
            frame->word_8 = r12.addr();
            *gptr<u8>(r4 + 4u) = 0;
            return frame->word_8 + 0x14u;  // (from the original)
        }
    }
L_82daf8:;
    frame->word_0 = r6;
    NexTree__copy_nodes_809(frame.at(4).addr(), r1, r2, r3);
    frame->word_8 = frame->word_4;
    *gptr<u8>(r4 + 4u) = u8(r5);
    return frame->word_8 + 0x14u;  // (from the original)
}

}  // namespace d_0082d9e8
GUEST_EXPORT_FRAMED(0x0082d9e8, d_0082d9e8::NexTree__copy_809, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_0082db30: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Copies the tree into the other, reusing its nodes.
namespace d_0082db30 {

struct __attribute__((packed)) NexTree {
    u8 unknown_0[0x10];  // (not used here)
    u32 word_10;
};
GUEST_OFFSET(NexTree, word_10, 0x10);

struct __attribute__((packed)) Object_0082db30_1 {
    u16 half_0;
};
GUEST_OFFSET(Object_0082db30_1, half_0, 0x0);

struct __attribute__((packed)) Local_0082db30_r12 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u16 half_10;
};
GUEST_OFFSET(Local_0082db30_r12, word_4, 0x4);
GUEST_OFFSET(Local_0082db30_r12, word_8, 0x8);
GUEST_OFFSET(Local_0082db30_r12, word_c, 0xc);
GUEST_OFFSET(Local_0082db30_r12, half_10, 0x10);

inline constexpr guest::Function<0x0080aac4, u32(u32, u32, u32, u32)> NexTree__copy_nodes_80a;

struct __attribute__((packed)) Frame_0082db30 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u8 unknown_c[0x4];  // (not read or written by name)
    u16 half_10;
    u8 unknown_12[0x2];  // (not read or written by name)
    u32 word_14;
    u8 unknown_18[0x4];  // (not read or written by name)
};
GUEST_OFFSET(Frame_0082db30, word_0, 0x0);
GUEST_OFFSET(Frame_0082db30, word_4, 0x4);
GUEST_OFFSET(Frame_0082db30, word_8, 0x8);
GUEST_OFFSET(Frame_0082db30, half_10, 0x10);
GUEST_OFFSET(Frame_0082db30, word_14, 0x14);
GUEST_SIZE(Frame_0082db30, 0x1c);

u32 NexTree__copy_80a(gptr<NexTree> nex_tree, gptr<Object_0082db30_1> arg1) {
    guest::StackFrameOf<Frame_0082db30> frame;  // the original's stack frame
    u32 r0 = nex_tree.addr();
    u32 r1 = arg1.addr();
    gptr<Local_0082db30_r12> r12 = gptr<Local_0082db30_r12>(0u);
    u32 r0_2 = 0;
    u32 r6 = frame.at(0x10).addr();  // (from the original)
    u32 r2_1 = arg1->half_0;
    frame->word_14 = 0;
    frame->half_10 = u16(r2_1);
    u32 r3 = nex_tree->word_10;
    r1 = r0;
    u32 r4 = frame.at(8).addr();
    u32 r7 = r3;
    u32 r2 = *gptr<u32>(r3 + 4u);
    u32 r0_1 = 1u;
    if (r2 != 0) {
        r12 = gptr<Local_0082db30_r12>(u32(*gptr<u16>(r6)));
        do {
            r3 = r2;
            if (r12.addr() >= *gptr<u16>(r2 + 0x10u)) {  // (from the original)
                r2 = *gptr<u32>(r3 + 0xcu);  // (from the original)
                r0_1 = 0u;
            } else {
                r2 = *gptr<u32>(r3 + 8u);
                r0_1 = 1u;
            }
            guest::preempt();
        } while (r2 != 0);
    }
    u32 r5 = 1u;
    if (*gptr<u8>(r1 + 0x18u) == 0) {  // (from the original)
        r12 = gptr<Local_0082db30_r12>(r3);
        if (r0_1 != 0) {
            if (r3 == *gptr<u32>(r7 + 8u)) {
                goto L_82dc40;
            }
            if (*gptr<u8>(r3) == 0 && *gptr<u32>(*gptr<u32>(r3 + 4u) + 4u) == r3) {
                r12 = gptr<Local_0082db30_r12>(*gptr<u32>(r3 + 0xcu));  // (from the original)
            } else {
                r12 = gptr<Local_0082db30_r12>(*gptr<u32>(r3 + 8u));
                if (r12.addr() != 0) {
                    r0 = r12->word_c;
                    if (r0 != 0) {
                        do {
                            r12 = gptr<Local_0082db30_r12>(r0);
                            r0 = *gptr<u32>(r0 + 0xcu);  // (from the original)
                            guest::preempt();
                        } while (r0 != 0);
                    }
                } else {
                    r12 = gptr<Local_0082db30_r12>(*gptr<u32>(r3 + 4u));
                    if (r3 == r12->word_8) {
                        do {
                            r0_2 = r12.addr();
                            r12 = gptr<Local_0082db30_r12>(r12->word_4);
                            guest::preempt();
                        } while (r0_2 == r12->word_8);
                    }
                }
            }
        }
        u32 r7_1 = *gptr<u16>(r6);
        if (r12->half_10 >= r7_1) {
            frame->word_8 = r12.addr();
            *gptr<u8>(r4 + 4u) = 0;
            return frame->word_8 + 0x14u;  // (from the original)
        }
    }
L_82dc40:;
    frame->word_0 = r6;
    NexTree__copy_nodes_80a(frame.at(4).addr(), r1, r2, r3);
    frame->word_8 = frame->word_4;
    *gptr<u8>(r4 + 4u) = u8(r5);
    return frame->word_8 + 0x14u;  // (from the original)
}

}  // namespace d_0082db30
GUEST_EXPORT_FRAMED(0x0082db30, d_0082db30::NexTree__copy_80a, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_0082dc78: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Copies the tree into the other, reusing its nodes.
namespace d_0082dc78 {

struct __attribute__((packed)) NexTree {
    u8 unknown_0[0x10];  // (not used here)
    u32 word_10;
};
GUEST_OFFSET(NexTree, word_10, 0x10);

struct __attribute__((packed)) Object_0082dc78_1 {
    u16 half_0;
};
GUEST_OFFSET(Object_0082dc78_1, half_0, 0x0);

struct __attribute__((packed)) Local_0082dc78_r12 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u16 half_10;
};
GUEST_OFFSET(Local_0082dc78_r12, word_4, 0x4);
GUEST_OFFSET(Local_0082dc78_r12, word_8, 0x8);
GUEST_OFFSET(Local_0082dc78_r12, word_c, 0xc);
GUEST_OFFSET(Local_0082dc78_r12, half_10, 0x10);

inline constexpr guest::Function<0x0080c000, u32(u32, u32, u32, u32)> NexTree__copy_nodes_80c;

struct __attribute__((packed)) Frame_0082dc78 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u8 unknown_c[0x4];  // (not read or written by name)
    u16 half_10;
    u8 unknown_12[0x2];  // (not read or written by name)
    u32 word_14;
    u8 unknown_18[0x4];  // (not read or written by name)
};
GUEST_OFFSET(Frame_0082dc78, word_0, 0x0);
GUEST_OFFSET(Frame_0082dc78, word_4, 0x4);
GUEST_OFFSET(Frame_0082dc78, word_8, 0x8);
GUEST_OFFSET(Frame_0082dc78, half_10, 0x10);
GUEST_OFFSET(Frame_0082dc78, word_14, 0x14);
GUEST_SIZE(Frame_0082dc78, 0x1c);

u32 NexTree__copy_80c(gptr<NexTree> nex_tree, gptr<Object_0082dc78_1> arg1) {
    guest::StackFrameOf<Frame_0082dc78> frame;  // the original's stack frame
    u32 r0 = nex_tree.addr();
    u32 r1 = arg1.addr();
    gptr<Local_0082dc78_r12> r12 = gptr<Local_0082dc78_r12>(0u);
    u32 r0_2 = 0;
    u32 r0_4 = 0;
    u32 r6 = frame.at(0x10).addr();  // (from the original)
    u32 r2_1 = arg1->half_0;
    frame->word_14 = 0;
    frame->half_10 = u16(r2_1);
    u32 r3 = nex_tree->word_10;
    r1 = r0;
    u32 r4 = frame.at(8).addr();
    u32 r7 = r3;
    u32 r2 = *gptr<u32>(r3 + 4u);
    u32 r0_1 = 1u;
    if (r2 != 0) {
        r12 = gptr<Local_0082dc78_r12>(u32(*gptr<u16>(r6)));
        do {
            r3 = r2;
            if (r12.addr() >= *gptr<u16>(r2 + 0x10u)) {  // (from the original)
                r2 = *gptr<u32>(r3 + 0xcu);  // (from the original)
                r0_1 = 0u;
            } else {
                r2 = *gptr<u32>(r3 + 8u);
                r0_1 = 1u;
            }
            guest::preempt();
        } while (r2 != 0);
    }
    u32 r5 = 1u;
    if (*gptr<u8>(r1 + 0x18u) == 0) {  // (from the original)
        r12 = gptr<Local_0082dc78_r12>(r3);
        if (r0_1 != 0) {
            if (r3 == *gptr<u32>(r7 + 8u)) {
                goto L_82dd88;
            }
            if (*gptr<u8>(r3) == 0 && *gptr<u32>(*gptr<u32>(r3 + 4u) + 4u) == r3) {
                r12 = gptr<Local_0082dc78_r12>(*gptr<u32>(r3 + 0xcu));  // (from the original)
            } else {
                r12 = gptr<Local_0082dc78_r12>(*gptr<u32>(r3 + 8u));
                if (r12.addr() != 0) {
                    r0 = r12->word_c;
                    if (r0 != 0) {
                        do {
                            r12 = gptr<Local_0082dc78_r12>(r0);
                            r0 = *gptr<u32>(r0 + 0xcu);  // (from the original)
                            guest::preempt();
                        } while (r0 != 0);
                    }
                } else {
                    r12 = gptr<Local_0082dc78_r12>(*gptr<u32>(r3 + 4u));
                    if (r3 == r12->word_8) {
                        do {
                            r0_2 = r12.addr();
                            r12 = gptr<Local_0082dc78_r12>(r12->word_4);
                            guest::preempt();
                        } while (r0_2 == r12->word_8);
                    }
                }
            }
        }
        u32 r7_1 = *gptr<u16>(r6);
        if (r12->half_10 >= r7_1) {
            frame->word_8 = r12.addr();
            *gptr<u8>(r4 + 4u) = 0;
            r0_4 = frame->word_8 + 0x14u;  // (from the original)
            guest::cpu()->r[1] = r1;
            return r0_4;
        }
    }
L_82dd88:;
    frame->word_0 = r6;
    NexTree__copy_nodes_80c(frame.at(4).addr(), r1, r2, r3);
    r1 = guest::cpu()->r[1];
    frame->word_8 = frame->word_4;
    *gptr<u8>(r4 + 4u) = u8(r5);
    return frame->word_8 + 0x14u;  // (from the original)
}

}  // namespace d_0082dc78
GUEST_EXPORT_FRAMED(0x0082dc78, d_0082dc78::NexTree__copy_80c, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_0082ddc0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Adds a block of nodes (0x70 bytes each) to the pool: 32 at first, then half again, or one when asked.
namespace d_0082ddc0 {

struct __attribute__((packed)) NexPool70 {
    u32 word_0;
};
GUEST_OFFSET(NexPool70, word_0, 0x0);

struct __attribute__((packed)) Local_0082ddc0_ea_3 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0082ddc0_ea_3, word_0, 0x0);
GUEST_OFFSET(Local_0082ddc0_ea_3, word_4, 0x4);

struct __attribute__((packed)) Local_0082ddc0_r0_4 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0082ddc0_r0_4, word_0, 0x0);
GUEST_OFFSET(Local_0082ddc0_r0_4, word_4, 0x4);

inline constexpr guest::Function<0x003619b0, u32(u32, u32, u32, u32)> allocate_with_header;

void NexPool70__grow(gptr<NexPool70> nex_pool70, u32 r1) {
    u32 r0_1 = nex_pool70->word_0;
    u32 r4_1 = 1u;
    if (r1 == 0) {
        if (r0_1 == 0) {
            r4_1 = 0x20u;  // (from the original)
        } else {
            u32 r0_2 = *gptr<u32>(r0_1 + 4u);
            r1 = r0_2 + (r0_2 >> 1);
            r4_1 = r1 + (r0_2 >> 3);
            u32 r0_3 = r0_2 + 0x20u;  // (from the original)
            if (r0_3 > r4_1) {
                r4_1 = r0_3;
            }
        }
    }
    gptr<Local_0082ddc0_r0_4> r0_4 = gptr<Local_0082ddc0_r0_4>(allocate_with_header(0xcu, r1, guest::cpu()->r[2], guest::cpu()->r[3]));  // (from the original)
    u32 r0_6 = allocate_with_header(r4_1 * 0x70u, r1, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    *gptr<u32>(r0_4.addr() + 8u) = r0_6;
    r0_4->word_0 = *gptr<u32>(nex_pool70.addr());
    r0_4->word_4 = r4_1;
    *gptr<u32>(nex_pool70.addr()) = r0_4.addr();
    u32 r0_8 = *gptr<u32>(r0_4.addr() + 8u);
    u32 r1_1 = r0_8 + r4_1 * 0x70u;  // (from the original)
    gptr<Local_0082ddc0_ea_3> ea_3 = gptr<Local_0082ddc0_ea_3>(nex_pool70.addr() + 8u);
    ea_3->word_0 = r0_8;
    ea_3->word_4 = r1_1;
    guest::cpu()->r[1] = r1_1;
}

}  // namespace d_0082ddc0
GUEST_EXPORT_FRAMED(0x0082ddc0, d_0082ddc0::NexPool70__grow, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0082e454: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Adds a block of nodes (0x10 bytes each) to the pool: 32 at first, then half again, or one when asked.
namespace d_0082e454 {

struct __attribute__((packed)) NexPool10 {
    u32 word_0;
};
GUEST_OFFSET(NexPool10, word_0, 0x0);

struct __attribute__((packed)) Local_0082e454_ea_3 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0082e454_ea_3, word_0, 0x0);
GUEST_OFFSET(Local_0082e454_ea_3, word_4, 0x4);

struct __attribute__((packed)) Local_0082e454_r0_4 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0082e454_r0_4, word_0, 0x0);
GUEST_OFFSET(Local_0082e454_r0_4, word_4, 0x4);

inline constexpr guest::Function<0x003619b0, u32(u32, u32, u32, u32)> allocate_with_header;

void NexPool10__grow(gptr<NexPool10> nex_pool10, u32 r1) {
    u32 r0_1 = nex_pool10->word_0;
    u32 r4_1 = 1u;
    if (r1 == 0) {
        if (r0_1 == 0) {
            r4_1 = 0x20u;  // (from the original)
        } else {
            u32 r0_2 = *gptr<u32>(r0_1 + 4u);
            r1 = r0_2 + (r0_2 >> 1);
            r4_1 = r1 + (r0_2 >> 3);
            u32 r0_3 = r0_2 + 0x20u;  // (from the original)
            if (r0_3 > r4_1) {
                r4_1 = r0_3;
            }
        }
    }
    gptr<Local_0082e454_r0_4> r0_4 = gptr<Local_0082e454_r0_4>(allocate_with_header(0xcu, r1, guest::cpu()->r[2], guest::cpu()->r[3]));  // (from the original)
    u32 r0_6 = allocate_with_header(r4_1 << 4, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    *gptr<u32>(r0_4.addr() + 8u) = r0_6;
    r0_4->word_0 = *gptr<u32>(nex_pool10.addr());
    r0_4->word_4 = r4_1;
    *gptr<u32>(nex_pool10.addr()) = r0_4.addr();
    u32 r0_8 = *gptr<u32>(r0_4.addr() + 8u);
    u32 r1_1 = r0_8 + (r4_1 << 4);
    gptr<Local_0082e454_ea_3> ea_3 = gptr<Local_0082e454_ea_3>(nex_pool10.addr() + 8u);
    ea_3->word_0 = r0_8;
    ea_3->word_4 = r1_1;
    guest::cpu()->r[1] = r1_1;
}

}  // namespace d_0082e454
GUEST_EXPORT_FRAMED(0x0082e454, d_0082e454::NexPool10__grow, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0082f1e0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Adds a block of nodes (0xa0 bytes each) to the pool: 32 at first, then half again, or one when asked.
namespace d_0082f1e0 {

struct __attribute__((packed)) NexPoolA0 {
    u32 word_0;
};
GUEST_OFFSET(NexPoolA0, word_0, 0x0);

struct __attribute__((packed)) Local_0082f1e0_ea_3 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0082f1e0_ea_3, word_0, 0x0);
GUEST_OFFSET(Local_0082f1e0_ea_3, word_4, 0x4);

struct __attribute__((packed)) Local_0082f1e0_r0_4 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0082f1e0_r0_4, word_0, 0x0);
GUEST_OFFSET(Local_0082f1e0_r0_4, word_4, 0x4);

inline constexpr guest::Function<0x003619b0, u32(u32, u32, u32, u32)> allocate_with_header;

void NexPoolA0__grow(gptr<NexPoolA0> nex_pool_a0, u32 r1) {
    u32 r0_1 = nex_pool_a0->word_0;
    u32 r4_1 = 1u;
    if (r1 == 0) {
        if (r0_1 == 0) {
            r4_1 = 0x20u;  // (from the original)
        } else {
            u32 r0_2 = *gptr<u32>(r0_1 + 4u);
            r1 = r0_2 + (r0_2 >> 1);
            r4_1 = r1 + (r0_2 >> 3);
            u32 r0_3 = r0_2 + 0x20u;  // (from the original)
            if (r0_3 > r4_1) {
                r4_1 = r0_3;
            }
        }
    }
    gptr<Local_0082f1e0_r0_4> r0_4 = gptr<Local_0082f1e0_r0_4>(allocate_with_header(0xcu, r1, guest::cpu()->r[2], guest::cpu()->r[3]));  // (from the original)
    u32 r0_6 = allocate_with_header(r4_1 * 0xa0u, r1, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    *gptr<u32>(r0_4.addr() + 8u) = r0_6;
    r0_4->word_0 = *gptr<u32>(nex_pool_a0.addr());
    r0_4->word_4 = r4_1;
    *gptr<u32>(nex_pool_a0.addr()) = r0_4.addr();
    u32 r0_8 = *gptr<u32>(r0_4.addr() + 8u);
    gptr<Local_0082f1e0_ea_3> ea_3 = gptr<Local_0082f1e0_ea_3>(nex_pool_a0.addr() + 8u);
    ea_3->word_0 = r0_8;
    ea_3->word_4 = r0_8 + r4_1 * 0xa0u;  // (from the original)
}

}  // namespace d_0082f1e0
GUEST_EXPORT_FRAMED(0x0082f1e0, d_0082f1e0::NexPoolA0__grow, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0082f424: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Adds a block of nodes (0xc bytes each) to the pool: 32 at first, then half again, or one when asked.
namespace d_0082f424 {

struct __attribute__((packed)) NexPoolC {
    u32 word_0;
};
GUEST_OFFSET(NexPoolC, word_0, 0x0);

struct __attribute__((packed)) Local_0082f424_ea_3 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0082f424_ea_3, word_0, 0x0);
GUEST_OFFSET(Local_0082f424_ea_3, word_4, 0x4);

struct __attribute__((packed)) Local_0082f424_r0_4 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0082f424_r0_4, word_0, 0x0);
GUEST_OFFSET(Local_0082f424_r0_4, word_4, 0x4);

inline constexpr guest::Function<0x003619b0, u32(u32, u32, u32, u32)> allocate_with_header;

void NexPoolC__grow(gptr<NexPoolC> nex_pool_c, u32 r1) {
    u32 r0_1 = nex_pool_c->word_0;
    u32 r4_1 = 1u;
    if (r1 == 0) {
        if (r0_1 == 0) {
            r4_1 = 0x20u;  // (from the original)
        } else {
            u32 r0_2 = *gptr<u32>(r0_1 + 4u);
            r1 = r0_2 + (r0_2 >> 1);
            r4_1 = r1 + (r0_2 >> 3);
            u32 r0_3 = r0_2 + 0x20u;  // (from the original)
            if (r0_3 > r4_1) {
                r4_1 = r0_3;
            }
        }
    }
    gptr<Local_0082f424_r0_4> r0_4 = gptr<Local_0082f424_r0_4>(allocate_with_header(0xcu, r1, guest::cpu()->r[2], guest::cpu()->r[3]));  // (from the original)
    u32 r0_6 = allocate_with_header(r4_1 * 0xcu, r1, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    *gptr<u32>(r0_4.addr() + 8u) = r0_6;
    r0_4->word_0 = *gptr<u32>(nex_pool_c.addr());
    r0_4->word_4 = r4_1;
    *gptr<u32>(nex_pool_c.addr()) = r0_4.addr();
    u32 r0_8 = *gptr<u32>(r0_4.addr() + 8u);
    u32 r1_1 = r0_8 + r4_1 * 0xcu;  // (from the original)
    gptr<Local_0082f424_ea_3> ea_3 = gptr<Local_0082f424_ea_3>(nex_pool_c.addr() + 8u);
    ea_3->word_0 = r0_8;
    ea_3->word_4 = r1_1;
    guest::cpu()->r[1] = r1_1;
}

}  // namespace d_0082f424
GUEST_EXPORT_FRAMED(0x0082f424, d_0082f424::NexPoolC__grow, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0082f49c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Unlinks every node of the list and returns it to the free list.
namespace d_0082f49c {

struct __attribute__((packed)) NexList {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
    u8 unknown_8[0x8];  // (not used here)
    u32 word_10;
    u32 word_14;
};
GUEST_OFFSET(NexList, word_4, 0x4);
GUEST_OFFSET(NexList, word_10, 0x10);
GUEST_OFFSET(NexList, word_14, 0x14);

struct __attribute__((packed)) Local_0082f49c_r2_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0082f49c_r2_1, word_0, 0x0);
GUEST_OFFSET(Local_0082f49c_r2_1, word_4, 0x4);


void NexList__clear(gptr<NexList> nex_list, float S0) {
    u32 r3 = nex_list->word_10;
    u32 r1 = *gptr<u32>(r3);
    if (r1 == r3) {
        guest::cpu()->r[1] = r1;
        return;
    }
    do {
        u32 r12_1 = nex_list->word_10;
        gptr<Local_0082f49c_r2_1> r2_1 = gptr<Local_0082f49c_r2_1>(r1);
        if (r1 == r12_1) {
            r1 = r12_1;
        } else {
            S0 = std::bit_cast<float>(r2_1->word_0);
            r1 = r2_1->word_0;
            *gptr<u32>(r2_1->word_4) = std::bit_cast<u32>(S0);
            *gptr<u32>(r2_1->word_0 + 4u) = r2_1->word_4;
            nex_list->word_14 = nex_list->word_14 - 1u;
            r2_1->word_0 = nex_list->word_4;
            nex_list->word_4 = r2_1.addr();
        }
        guest::preempt();
    } while (r1 != r3);
    guest::cpu()->r[1] = r1;
    guest::cpu()->s[0] = S0;
}

}  // namespace d_0082f49c
GUEST_EXPORT_FRAMED(0x0082f49c, d_0082f49c::NexList__clear, 0x10);  // pushes {r4} first, as the original

// f_0082f504: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Clears the list, returns its sentinel and frees the pool's blocks.
namespace d_0082f504 {

struct __attribute__((packed)) NexList {
    u32 word_0;
    u32 word_4;
    u8 unknown_8[0x8];  // (not used here)
    u32 word_10;
};
GUEST_OFFSET(NexList, word_0, 0x0);
GUEST_OFFSET(NexList, word_4, 0x4);
GUEST_OFFSET(NexList, word_10, 0x10);

inline constexpr guest::Function<0x00361988, u32(u32, u32)> nex_free;
inline constexpr guest::Function<0x0082f49c, u32(u32, u32, u32, u32)> NexList__clear;

u32 NexList__destroy(gptr<NexList> nex_list, u32 r1) {
    u32 r0 = nex_list.addr();
    u32 r4 = r0;
    if (nex_list->word_10 != 0) {
        NexList__clear(r4, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        u32 r0_1 = nex_list->word_10;
        r1 = nex_list->word_4;
        *gptr<u32>(r0_1) = r1;
        nex_list->word_4 = r0_1;
        r0 = nex_list->word_0;
        if (r0 != 0) {
            do {
                *gptr<u32>(r4) = *gptr<u32>(r0);
                nex_free(*gptr<u32>(r0 + 8u), r1);
                nex_free(r0, guest::cpu()->r[1]);
                r1 = guest::cpu()->r[1];
                r0 = *gptr<u32>(r4);
                guest::preempt();
            } while (r0 != 0);
        }
        *gptr<u32>(r4 + 4u) = 0;
        *gptr<u32>(r4 + 8u) = 0;
        *gptr<u32>(r4 + 0xcu) = 0;  // (from the original)
    }
    guest::cpu()->r[1] = r1;
    return r4;
}

}  // namespace d_0082f504
GUEST_EXPORT_FRAMED(0x0082f504, d_0082f504::NexList__destroy, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original
