// Functions decompiled by tools/decomp (docs/decomp.md), each proved equal to the recompiled original (prove-cpp). The
// names come from games/acnl/names (tools/decomp/names.py); the others are generated (d_<address>::f_<address>,
// Object_<address>_<argument>, word_<offset>) and still to be chosen. Hexadecimal constants are the original's
// (addresses, offsets, sizes and ids as the game has them).
#include "guest/guest.hpp"
#include "core/state_a22020.hpp"
#include "recovered/structs.hpp"

#include <bit>

using guest::gptr;

// f_007400f8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The word at the adjusted +0x2c part of the resource file (+0x3c of +4).
namespace d_007400f8 {

struct __attribute__((packed)) ResFile {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
};
GUEST_OFFSET(ResFile, word_4, 0x4);

inline constexpr guest::Function<0x0073f4b4, u32(u32)> adjusted_this_0x2c_;

u32 ResFile__word_at_2c(gptr<ResFile> res_file) {
    u32 r0_2 = adjusted_this_0x2c_(*gptr<u32>(res_file->word_4 + 0x3cu));
    return *gptr<u32>(r0_2);
}

}  // namespace d_007400f8
GUEST_EXPORT_FRAMED(0x007400f8, d_007400f8::ResFile__word_at_2c, 0x4010);  // pushes {r4, lr} first, as the original

// f_00740114: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Finds an entry of the resource (+0x3c) and gives its id and value; true when found.
namespace d_00740114 {

struct __attribute__((packed)) ResFile {
    u8 unknown_0[0x3c];  // (not used here)
    u32 word_3c;
};
GUEST_OFFSET(ResFile, word_3c, 0x3c);

struct __attribute__((packed)) ResFileFindEntryArg2 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(ResFileFindEntryArg2, word_0, 0x0);
GUEST_OFFSET(ResFileFindEntryArg2, word_4, 0x4);

inline constexpr guest::Function<0x0073f1ac, u32(u32, u32, u32)> ResFile__entry_1;
inline constexpr guest::Function<0x0073f208, u32(u32, u32, u32, u32)> ResFile__find_by_id;

u32 ResFile__find_entry(gptr<ResFile> res_file, u32 r1, gptr<ResFileFindEntryArg2> arg2) {
    u32 entry_3 = ResFile__find_by_id(res_file->word_3c, r1, arg2.addr(), guest::cpu()->r[3]);
    if (entry_3 == 0) {
        return entry_3;
    }
    u32 r1_2 = *gptr<u32>(entry_3);
    arg2->word_0 = r1_2;
    arg2->word_4 = ResFile__entry_1(entry_3, r1_2, arg2.addr());
    return 1u;
}

}  // namespace d_00740114
GUEST_EXPORT_FRAMED(0x00740114, d_00740114::ResFile__find_entry, 0x4010);  // pushes {r4, lr} first, as the original

// f_00740144: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Resolves an entry handle of the resource and copies its two words and two bytes; true when found.
namespace d_00740144 {

struct __attribute__((packed)) ResFile {
    u8 unknown_0[0x3c];  // (not used here)
    u32 word_3c;
};
GUEST_OFFSET(ResFile, word_3c, 0x3c);

struct __attribute__((packed)) ResFileResolveEntryInfoArg2 {
    u32 word_0;
    u32 word_4;
    u8 byte_8;
    u8 byte_9;
};
GUEST_OFFSET(ResFileResolveEntryInfoArg2, word_0, 0x0);
GUEST_OFFSET(ResFileResolveEntryInfoArg2, word_4, 0x4);
GUEST_OFFSET(ResFileResolveEntryInfoArg2, byte_8, 0x8);
GUEST_OFFSET(ResFileResolveEntryInfoArg2, byte_9, 0x9);

struct __attribute__((packed)) Local_00740144_r0_3 {
    u32 word_0;
    u32 word_4;
    u8 byte_8;
    u8 byte_9;
};
GUEST_OFFSET(Local_00740144_r0_3, word_0, 0x0);
GUEST_OFFSET(Local_00740144_r0_3, word_4, 0x4);
GUEST_OFFSET(Local_00740144_r0_3, byte_8, 0x8);
GUEST_OFFSET(Local_00740144_r0_3, byte_9, 0x9);

inline constexpr guest::Function<0x00141728, u32(u32, u32, u32, u32)> HandleTable__resolve;
inline constexpr guest::Function<0x0073f70c, u32(u32, u32, u32)> SoundArchive__sound_entry;

u32 ResFile__resolve_entry_info(gptr<ResFile> res_file, u32 handle, gptr<ResFileResolveEntryInfoArg2> arg2) {
    u32 entry_2 = HandleTable__resolve(res_file->word_3c, handle, arg2.addr(), guest::cpu()->r[3]);
    if (entry_2 == 0) {
        return entry_2;
    }
    gptr<Local_00740144_r0_3> r0_3 = gptr<Local_00740144_r0_3>(SoundArchive__sound_entry(entry_2, handle, arg2.addr()));
    if (r0_3.addr() == 0) {
        return r0_3.addr();
    }
    arg2->word_0 = r0_3->word_0;
    arg2->word_4 = r0_3->word_4;
    arg2->byte_8 = r0_3->byte_8;
    arg2->byte_9 = r0_3->byte_9;
    return 1u;
}

}  // namespace d_00740144
GUEST_EXPORT_FRAMED(0x00740144, d_00740144::ResFile__resolve_entry_info, 0x4010);  // pushes {r4, lr} first, as the original

// f_007401c0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The word at the adjusted +0x1c part of the resource file (+0x3c of +4).
namespace d_007401c0 {

struct __attribute__((packed)) ResFile {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
};
GUEST_OFFSET(ResFile, word_4, 0x4);

inline constexpr guest::Function<0x0073f4c0, u32(u32)> adjusted_this_0x1c_;

u32 ResFile__word_at_1c(gptr<ResFile> res_file) {
    u32 r0_2 = adjusted_this_0x1c_(*gptr<u32>(res_file->word_4 + 0x3cu));
    return *gptr<u32>(r0_2);
}

}  // namespace d_007401c0
GUEST_EXPORT_FRAMED(0x007401c0, d_007401c0::ResFile__word_at_1c, 0x4010);  // pushes {r4, lr} first, as the original

// f_0074046c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// For an entry of type 2: its format flag, size and offset (by the file version, before or from 2.3.1.0); true when
// found.
namespace d_0074046c {

struct __attribute__((packed)) ResFile {
    u8 unknown_0[0x8];  // (not used here)
    u32 word_8;
    u8 unknown_c[0x30];  // (not used here)
    u32 table;
};
GUEST_OFFSET(ResFile, word_8, 0x8);
GUEST_OFFSET(ResFile, table, 0x3c);

struct __attribute__((packed)) ResFileEntryFormatArg2 {
    u8 byte_0;
    u8 unknown_1[0x3];  // (not used here)
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(ResFileEntryFormatArg2, byte_0, 0x0);
GUEST_OFFSET(ResFileEntryFormatArg2, word_4, 0x4);
GUEST_OFFSET(ResFileEntryFormatArg2, word_8, 0x8);

struct __attribute__((packed)) Entry {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Entry, word_0, 0x0);
GUEST_OFFSET(Entry, word_4, 0x4);
GUEST_OFFSET(Entry, word_8, 0x8);

inline constexpr guest::Function<0x0013f718, u32(u32)> ResSoundEntry__type;
inline constexpr guest::Function<0x00141728, u32(u32, u32, u32, u32)> HandleTable__resolve;
inline constexpr guest::Function<0x0073f4f4, u32(u32)> ResFile__block_2210;
inline constexpr guest::Function<0x0073f630, u32(u32)> SoundArchive__entry_2;
inline constexpr guest::Function<0x0073f650, u32(u32)> SoundArchive__entry_1;
inline constexpr guest::Function<0x0073f6b4, u32(u32)> SoundArchive__first_entry;
inline constexpr guest::Function<0x0073f734, u32(u32)> adjusted_this_0x10__0073f734;
inline constexpr guest::Function<0x0073f740, u32(u32, u32)> adjusted_this_0x10__0073f740;

u32 ResFile__entry_format(gptr<ResFile> res_file, u32 handle, gptr<ResFileEntryFormatArg2> arg2) {
    u32 r0_7 = 0;
    u32 table = res_file->table;
    gptr<Entry> entry_2 = gptr<Entry>(HandleTable__resolve(table, handle, arg2.addr(), guest::cpu()->r[3]));
    if (entry_2.addr() != 0) {
        if (ResSoundEntry__type(entry_2.addr()) != 2u) {
            entry_2 = gptr<Entry>(0u);
        } else {
            if (res_file->word_8 < 0x2030100u) {
                u32 r0_4 = adjusted_this_0x10__0073f740(entry_2.addr(), 0x2030100u);
                u32 r0_5 = SoundArchive__first_entry(r0_4);
                arg2->byte_0 = u8(r0_5);
                arg2->word_4 = SoundArchive__entry_1(r0_4);
                r0_7 = SoundArchive__entry_2(r0_4);
            } else {
                entry_2 = gptr<Entry>(ResFile__block_2210(adjusted_this_0x10__0073f734(entry_2.addr())));
                if (entry_2.addr() == 0) {
                    return entry_2.addr();
                }
                u32 r1_4 = entry_2->word_0 >> 8u & 0xffu;
                if (r1_4 != 1u) {
                    r1_4 = 0u;
                }
                arg2->byte_0 = u8(r1_4);
                arg2->word_4 = entry_2->word_4;
                r0_7 = entry_2->word_8;
            }
            arg2->word_8 = r0_7;
            entry_2 = gptr<Entry>(1u);
        }
    }
    return entry_2.addr();
}

}  // namespace d_0074046c
GUEST_EXPORT_FRAMED(0x0074046c, d_0074046c::ResFile__entry_format, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_00740528: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Copies the resource header's seven 16-bit values (and the eighth from version 2.3.2.0, else 1); true when it has
// one.
namespace d_00740528 {

struct __attribute__((packed)) ResFile {
    u8 unknown_0[0x8];  // (not used here)
    u32 word_8;
    u8 unknown_c[0x30];  // (not used here)
    u32 word_3c;
};
GUEST_OFFSET(ResFile, word_8, 0x8);
GUEST_OFFSET(ResFile, word_3c, 0x3c);

struct __attribute__((packed)) ResFileHeaderInfoArg1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u32 word_18;
    u32 word_1c;
};
GUEST_OFFSET(ResFileHeaderInfoArg1, word_0, 0x0);
GUEST_OFFSET(ResFileHeaderInfoArg1, word_4, 0x4);
GUEST_OFFSET(ResFileHeaderInfoArg1, word_8, 0x8);
GUEST_OFFSET(ResFileHeaderInfoArg1, word_c, 0xc);
GUEST_OFFSET(ResFileHeaderInfoArg1, word_10, 0x10);
GUEST_OFFSET(ResFileHeaderInfoArg1, word_14, 0x14);
GUEST_OFFSET(ResFileHeaderInfoArg1, word_18, 0x18);
GUEST_OFFSET(ResFileHeaderInfoArg1, word_1c, 0x1c);

struct __attribute__((packed)) Local_00740528_r0_2 {
    u16 half_0;
    u16 half_2;
    u16 half_4;
    u16 half_6;
    u16 half_8;
    u16 half_a;
    u16 half_c;
    u8 byte_e;
};
GUEST_OFFSET(Local_00740528_r0_2, half_0, 0x0);
GUEST_OFFSET(Local_00740528_r0_2, half_2, 0x2);
GUEST_OFFSET(Local_00740528_r0_2, half_4, 0x4);
GUEST_OFFSET(Local_00740528_r0_2, half_6, 0x6);
GUEST_OFFSET(Local_00740528_r0_2, half_8, 0x8);
GUEST_OFFSET(Local_00740528_r0_2, half_a, 0xa);
GUEST_OFFSET(Local_00740528_r0_2, half_c, 0xc);
GUEST_OFFSET(Local_00740528_r0_2, byte_e, 0xe);

inline constexpr guest::Function<0x0073f490, u32(u32, u32)> adjusted_this_0x3c_;

u32 ResFile__header_info(gptr<ResFile> res_file, gptr<ResFileHeaderInfoArg1> arg1) {
    gptr<Local_00740528_r0_2> r0_2 = gptr<Local_00740528_r0_2>(adjusted_this_0x3c_(res_file->word_3c, arg1.addr()));
    u32 r1_1 = guest::cpu()->r[1];
    if (r0_2.addr() != 0) {
        arg1->word_0 = u32(r0_2->half_0);
        arg1->word_4 = u32(r0_2->half_2);
        arg1->word_8 = u32(r0_2->half_4);
        arg1->word_c = u32(r0_2->half_6);
        arg1->word_10 = u32(r0_2->half_8);
        arg1->word_14 = u32(r0_2->half_a);
        arg1->word_18 = u32(r0_2->half_c);
        u32 r3_1 = res_file->word_8;
        r1_1 = 1u;
        if (0x2030200u <= r3_1) {
            arg1->word_1c = u32(r0_2->byte_e);
        }
        r0_2 = gptr<Local_00740528_r0_2>(1u);
        if (0x2030200u > r3_1) {
            arg1->word_1c = r1_1;
        }
    }
    guest::cpu()->r[1] = r1_1;
    return r0_2.addr();
}

}  // namespace d_00740528
GUEST_EXPORT_FRAMED(0x00740528, d_00740528::ResFile__header_info, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_007405c4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The section of kind 0x4000 in the header's table (12-byte entries from +0x14, count +0x10); null when none.
namespace d_007405c4 {

struct __attribute__((packed)) Section4000Arg0 {
    u8 unknown_0[0x10];  // (not used here)
    u16 half_10;
};
GUEST_OFFSET(Section4000Arg0, half_10, 0x10);


u32 section_4000(gptr<Section4000Arg0> arg0) {
    u32 r0 = arg0.addr();
    u32 r0_1 = 0;
    u32 r12 = arg0->half_10;
    u32 r3 = r0 + 0x14u;
    u32 header = r0;
    r0 = 0u;
    u32 r2 = 0x4000u;
    u32 i = r0;
    if (s32(r12) <= 0) {
        return r0;
    }
    do {
        if (*gptr<u16>(r3 + i * 0xcu) == r2) {
            u32 res_1 = r3 + i * 0xcu;
            u32 zf_1 = res_1 == 0;
            u32 r1_1 = res_1;
            if (!zf_1) {
                r1_1 = *gptr<u32>(r1_1 + 4u);
                zf_1 = r1_1 == 0;
            }
            if (zf_1) {
                return r0;
            } else {
                r0_1 = r1_1 + header;
            }
            return r0_1;
        }
        i += 1u;
        guest::preempt();
    } while (s32(r12) > s32(i));
    return r0;
}

}  // namespace d_007405c4
GUEST_EXPORT_FRAMED(0x007405c4, d_007405c4::section_4000, 0x30);  // pushes {r4, header} first, as the original

// f_00740630: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The section of kind 0x4004 in the header's table (12-byte entries from +0x14, count +0x10); null when none.
namespace d_00740630 {

struct __attribute__((packed)) Section4004Arg0 {
    u8 unknown_0[0x10];  // (not used here)
    u16 half_10;
};
GUEST_OFFSET(Section4004Arg0, half_10, 0x10);


u32 section_4004(gptr<Section4004Arg0> arg0) {
    u32 header = arg0.addr();
    u32 res_1 = 0;
    u32 zf_1 = 0;
    u32 r1_1 = 0;
    u32 r3 = arg0->half_10;
    u32 r12 = 0x4004u;
    u32 r5 = 0u;
    u32 r2 = header + 0x14u;
    u32 r1 = r5;
    if (s32(r3) <= 0) {
        return r5;
    }
L_740650:;
    if (*gptr<u16>(r2 + r1 * 0xcu) != r12) {
        goto L_740684;
    }
    res_1 = r2 + r1 * 0xcu;
    zf_1 = res_1 == 0;
    r1_1 = res_1;
    if (!zf_1) {
        r1_1 = *gptr<u32>(r1_1 + 4u);
        zf_1 = r1_1 == 0;
    }
    if (!zf_1) {
        r5 = r1_1 + header;
    }
    return r5;
L_740684:;
    r1 += 1u;
    if (s32(r3) > s32(r1)) {
        guest::preempt();
        goto L_740650;
    }
    return r5;
}

}  // namespace d_00740630
GUEST_EXPORT_FRAMED(0x00740630, d_00740630::section_4004, 0x30);  // pushes {r4, r5} first, as the original

// f_007406a4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Copies the 0x4c-byte information of an entry.
namespace d_007406a4 {

struct __attribute__((packed)) ResFile {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
};
GUEST_OFFSET(ResFile, word_4, 0x4);

inline constexpr guest::Function<0x002fbb30, u32(u32, u32, u32)> copy_aligned_bytes;
inline constexpr guest::Function<0x0073ef1c, u32(u32, u32, u32, u32)> ResRef__block_4100;

void ResFile__copy_info_4c(gptr<ResFile> res_file, u32 r1, u32 r2) {
    copy_aligned_bytes(r1, ResRef__block_4100(res_file->word_4, r1, r2, guest::cpu()->r[3]), 0x4cu);
}

}  // namespace d_007406a4
GUEST_EXPORT_FRAMED(0x007406a4, d_007406a4::ResFile__copy_info_4c, 0x4010);  // pushes {r4, lr} first, as the original

// f_007406cc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Copies the two words and the adjusted data of entry `index` (0x14 bytes from +8 +4); true.
namespace d_007406cc {

struct __attribute__((packed)) ResTable {
    u8 unknown_0[0x8];  // (not used here)
    u32 word_8;
};
GUEST_OFFSET(ResTable, word_8, 0x8);

struct __attribute__((packed)) ResTableEntryInfoArg1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(ResTableEntryInfoArg1, word_0, 0x0);
GUEST_OFFSET(ResTableEntryInfoArg1, word_4, 0x4);
GUEST_OFFSET(ResTableEntryInfoArg1, word_8, 0x8);

struct __attribute__((packed)) Local_007406cc_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_007406cc_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_007406cc_ea_1, word_4, 0x4);

inline constexpr guest::Function<0x00740698, u32(u32, u32)> adjusted_this_0x10__00740698;

u32 ResTable__entry_info(gptr<ResTable> res_table, gptr<ResTableEntryInfoArg1> arg1, u32 r2) {
    gptr<Local_007406cc_ea_1> ea_1 = gptr<Local_007406cc_ea_1>(res_table->word_8 + (r2 * 0x14u + 4u));
    arg1->word_0 = ea_1->word_0;
    u32 r1_1 = ea_1->word_4;
    arg1->word_4 = r1_1;
    arg1->word_8 = adjusted_this_0x10__00740698(ea_1.addr(), r1_1);
    return 1u;
}

}  // namespace d_007406cc
GUEST_EXPORT_FRAMED(0x007406cc, d_007406cc::ResTable__entry_info, 0x4010);  // pushes {r4, lr} first, as the original

// f_00740708: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Copies the 0x26-byte identity and the record of an entry when found; true when it is.
namespace d_00740708 {

struct __attribute__((packed)) ResFile {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
};
GUEST_OFFSET(ResFile, word_4, 0x4);

inline constexpr guest::Function<0x002f8574, u32(u32, u32, u32)> copy_bytes_at_any_alignment;
inline constexpr guest::Function<0x0073eee8, u32(u32)> ResRef__block_300;
inline constexpr guest::Function<0x0073ef34, u32(u32, u32, u32, u32)> ResFile__block_101;
inline constexpr guest::Function<0x0073ef84, u32(u32, u32)> ResTable__entry_4102;
inline constexpr guest::Function<0x007795ec, u32(u32, u32)> copy_record;

u32 ResFile__copy_identity(gptr<ResFile> res_file, u32 r1, u32 r2, u32 r3) {
    u32 r0_4 = ResRef__block_300(ResTable__entry_4102(ResFile__block_101(res_file->word_4, r1, r2, r3), r3));
    if (r0_4 != 0) {
        copy_bytes_at_any_alignment(r1, r0_4, 0x26u);
        copy_record(r2, r0_4 + 0x26u);
        r0_4 = 1u;
    }
    return r0_4;
}

}  // namespace d_00740708
GUEST_EXPORT_FRAMED(0x00740708, d_00740708::ResFile__copy_identity, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_00740758: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The word +8 of the part at +0x68 of the object (+0), or 0.
namespace d_00740758 {


u32 Res__word_8_of_68(u32 res) {
    u32 r0_1 = *gptr<u32>(res);
    if (r0_1 == 0) {
        return r0_1;
    }
    return *gptr<u32>(*gptr<u32>(r0_1 + 0x68u) + 8u);
}

}  // namespace d_00740758
GUEST_EXPORT(0x00740758, d_00740758::Res__word_8_of_68);

// f_0074076c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether byte +4 of the object (+0) is clear (false without one).
namespace d_0074076c {

struct __attribute__((packed)) Res {
    u32 word_0;
};
GUEST_OFFSET(Res, word_0, 0x0);


u32 Res__byte_4_is_clear(gptr<Res> res) {
    u32 r0_1 = res->word_0;
    if (r0_1 == 0) {
        return r0_1;
    }
    return *gptr<u8>(r0_1 + 4u) == 0;
}

}  // namespace d_0074076c
GUEST_EXPORT(0x0074076c, d_0074076c::Res__byte_4_is_clear);

// f_0074078c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Byte +0x50, or 1 when there is no object (+0).
namespace d_0074078c {

struct __attribute__((packed)) Res {
    u32 word_0;
    u8 unknown_4[0x4c];  // (not used here)
    u8 byte_50;
};
GUEST_OFFSET(Res, word_0, 0x0);
GUEST_OFFSET(Res, byte_50, 0x50);


u32 Res__byte_50_or_1(gptr<Res> res) {
    return res->word_0 == 0 ? 1u : u32(res->byte_50);
}

}  // namespace d_0074078c
GUEST_EXPORT(0x0074078c, d_0074078c::Res__byte_50_or_1);

// f_007407a0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The ramp's value: from +4 to +8 in proportion to step +0x10 of +0xc steps (the end value once reached).
namespace d_007407a0 {

struct __attribute__((packed)) Ramp {
    u8 unknown_0[0x4];  // (not used here)
    float float_4;
    float float_8;
    u32 word_c;
    u32 word_10;
};
GUEST_OFFSET(Ramp, float_4, 0x4);
GUEST_OFFSET(Ramp, float_8, 0x8);
GUEST_OFFSET(Ramp, word_c, 0xc);
GUEST_OFFSET(Ramp, word_10, 0x10);


void Ramp__value(gptr<Ramp> ramp, float S0_unused, float S1) {
    u32 r1_1 = ramp->word_10;
    u32 r2_1 = ramp->word_c;
    float S0_1 = ramp->float_8;
    if (s32(r1_1) >= s32(r2_1)) {
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->s[0] = S0_1;
        return;
    }
    float S1_1 = ramp->float_4;
    float S0_2 = (S0_1 - S1_1) * float(s32(r1_1)) / float(s32(r2_1)) + S1_1;
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->s[0] = S0_2;
    guest::cpu()->s[1] = S1_1;
}

}  // namespace d_007407a0
GUEST_EXPORT(0x007407a0, d_007407a0::Ramp__value);

// f_00740814: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The float `index` of the table at +0x38.
namespace d_00740814 {


void float_38_at(u32 r0, u32 r1) {
    float S0_1 = std::bit_cast<float>(*gptr<u32>(r0 + (r1 << 2) + 0x38u));
    guest::cpu()->s[0] = S0_1;
}

}  // namespace d_00740814
GUEST_EXPORT(0x00740814, d_00740814::float_38_at);

// f_00740820: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The sum of the sizes of the list's nodes (each 0x50 bytes before its link), under the owner's lock.
namespace d_00740820 {

struct __attribute__((packed)) ListTotalSizeArg0 {
    u8 unknown_0[0x8];  // (not used here)
    u32 word_8;
};
GUEST_OFFSET(ListTotalSizeArg0, word_8, 0x8);

inline constexpr guest::Function<0x00135748, u32(u32)> RecursiveLock__lock;
inline constexpr guest::Function<0x001357ec, u32(u32)> RecursiveLock__unlock;
inline constexpr guest::Function<0x004cad5c, u32(u32, u32, u32, u32)> default_texture_instance;

u32 list_total_size(gptr<ListTotalSizeArg0> arg0, u32 r1) {
    u32 r0 = arg0.addr();
    u32 list = r0;
    RecursiveLock__lock(default_texture_instance(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]) + 0x1c4u);
    r0 = arg0->word_8;
    u32 r1_2 = list + 8u;
    u32 total = 0u;
    if (r0 != r1_2) {
        do {
            u32 r1_3 = *gptr<u32>(r0 - 0x50u);
            r0 = *gptr<u32>(r0);
            total += r1_3;
            r1_2 = list + 8u;
            guest::preempt();
        } while (r0 != r1_2);
    }
    RecursiveLock__unlock(default_texture_instance(r0, r1_2, guest::cpu()->r[2], guest::cpu()->r[3]) + 0x1c4u);
    return total;
}

}  // namespace d_00740820
GUEST_EXPORT_FRAMED(0x00740820, d_00740820::list_total_size, 0x4070);  // pushes {list, total, r6, lr} first, as the original

// f_0074087c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether +0x84 is set, unless +0x51 is set.
namespace d_0074087c {

struct __attribute__((packed)) Res {
    u8 unknown_0[0x51];  // (not used here)
    u8 byte_51;
    u8 unknown_52[0x32];  // (not used here)
    u32 word_84;
};
GUEST_OFFSET(Res, byte_51, 0x51);
GUEST_OFFSET(Res, word_84, 0x84);


u32 Res__has_84_unless_51(gptr<Res> res) {
    u32 r1_1 = res->byte_51;
    if (r1_1 != 0) {
        guest::cpu()->r[1] = r1_1;
        return 0u;
    }
    u32 r0_1 = res->word_84;
    if (r0_1 != 0) {
        r0_1 = 1u;
    }
    guest::cpu()->r[1] = r1_1;
    return r0_1;
}

}  // namespace d_0074087c
GUEST_EXPORT(0x0074087c, d_0074087c::Res__has_84_unless_51);

// f_007409c8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The signed 16-bit value `index` of the table at +0xd0.
namespace d_007409c8 {


u32 half_d0_at(u32 r0, u32 r1) {
    return *gptr<s16>(r0 + (r1 << 1) + 0xd0u);
}

}  // namespace d_007409c8
GUEST_EXPORT(0x007409c8, d_007409c8::half_d0_at);

// f_00741fcc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The entry for `id` in a table that is one entry (0x6000), a list of ranges (0x6001, by their first id) or a dense
// range (0x6002, from its first to its last id); null when none.
namespace d_00741fcc {

struct __attribute__((packed)) IdTable {
    u16 half_0;
    u8 unknown_2[0x2];  // (not used here)
    u32 word_4;
};
GUEST_OFFSET(IdTable, half_0, 0x0);
GUEST_OFFSET(IdTable, word_4, 0x4);


u32 IdTable__find(gptr<IdTable> table, u32 id) {
    u32 i = table.addr();
    u32 r12_1 = table->half_0;
    u32 data = i + table->word_4;
    if (r12_1 == 0x6000u) {
        return *gptr<u32>(data + 4u) + data;
    }
    if (r12_1 - 0x6001u != 0) {
        if (r12_1 - 0x6001u != 1u) {
            return 0u;
        }
        u32 r0_2 = *gptr<u8>(data);
        u32 zf_1 = r0_2 == id;
        u32 cf_1 = r0_2 >= id;
        if (!cf_1 || zf_1) {
            u32 r3_2 = *gptr<u8>(data + 1u);
            zf_1 = id == r3_2;
            cf_1 = id >= r3_2;
        }
        if (cf_1 && !zf_1) {
            return 0u;
        }
        return *gptr<u32>(data + (id - r0_2 << 3) + 8u) + data;
    }
    u32 r12 = *gptr<u32>(data);
    i = 0u;
    if (r12 < 0u || r12 == 0) {
        return 0u;
    }
    do {
        if (*gptr<u8>(data + i + 4u) >= id) {
            return *gptr<u32>((r12 + 3u & ~3u) + (i << 3) + 4u + data + 4u) + data;
        }
        i += 1u;
        guest::preempt();
    } while (i < r12);
    return 0u;
}

}  // namespace d_00741fcc
GUEST_EXPORT(0x00741fcc, d_00741fcc::IdTable__find);

// f_00742080: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The data of section `index` when its kind is 0x5900 and the index is in range; 0 otherwise.
namespace d_00742080 {

struct __attribute__((packed)) ResBlock {
    u8 unknown_0[0xc];  // (not used here)
    u32 word_c;
};
GUEST_OFFSET(ResBlock, word_c, 0xc);

struct __attribute__((packed)) Local_00742080_r3_1 {
    u8 unknown_0[0x4];  // (not used here)
    u16 half_4;
    u8 unknown_6[0x2];  // (not used here)
    u32 word_8;
};
GUEST_OFFSET(Local_00742080_r3_1, half_4, 0x4);
GUEST_OFFSET(Local_00742080_r3_1, word_8, 0x8);


u32 ResBlock__section_data(gptr<ResBlock> res_block, u32 r1) {
    u32 r2_1 = res_block->word_c + res_block.addr();
    gptr<Local_00742080_r3_1> r3_1 = gptr<Local_00742080_r3_1>(r2_1 + (r1 << 3));
    u32 r0_1 = r3_1->half_4;
    if (r0_1 != 0x5900u) {
        if (r0_1 - 0x5903u == 0) {
            return r0_1 - 0x5903u;
        }
        return 0u;
    }
    if (*gptr<u32>(r2_1) > r1) {
        return r3_1->word_8 + r2_1;
    }
    return 0u;
}

}  // namespace d_00742080
GUEST_EXPORT(0x00742080, d_00742080::ResBlock__section_data);

// f_007420d0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Bits 8-15 of the value of key 4 of the sparse array at +4, or 0.
namespace d_007420d0 {

inline constexpr guest::Function<0x00141a9c, u32(u32, u32, u32)> SparseArray__get;

struct __attribute__((packed)) SparseArrayByte1Of4Frame {
    u32 word_0;
};
GUEST_OFFSET(SparseArrayByte1Of4Frame, word_0, 0x0);
GUEST_SIZE(SparseArrayByte1Of4Frame, 0x4);

u32 SparseArray__byte_1_of_4(u32 sparse_array, u32 r1_unused, u32 r2_unused, u32 r3) {
    guest::StackFrameOf<SparseArrayByte1Of4Frame> frame;  // the original's stack frame
    frame->word_0 = r3;
    u32 found = SparseArray__get(sparse_array + 4u, frame.at(0).addr(), 4u);
    if (found == 0) {
        return found;
    }
    return frame->word_0 >> 8u & 0xffu;
}

}  // namespace d_007420d0
GUEST_EXPORT_FRAMED(0x007420d0, d_007420d0::SparseArray__byte_1_of_4, 0x4000);  // pushes {lr} first, as the original

// f_007420fc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The data of key 9 of the sparse array at +4 (an offset from the object), or the empty data.
namespace d_007420fc {

inline constexpr u32 global_00981874_address = 0x00981874u;
inline constexpr guest::Function<0x00141a9c, u32(u32, u32, u32)> SparseArray__get;

struct __attribute__((packed)) SparseArrayDataOf9Frame {
    u32 word_0;
};
GUEST_OFFSET(SparseArrayDataOf9Frame, word_0, 0x0);
GUEST_SIZE(SparseArrayDataOf9Frame, 0x4);

u32 SparseArray__data_of_9(u32 sparse_array, u32 r1_unused, u32 r2_unused, u32 r3) {
    guest::StackFrameOf<SparseArrayDataOf9Frame> frame;  // the original's stack frame
    frame->word_0 = r3;
    u32 found = SparseArray__get(sparse_array + 4u, frame.at(0).addr(), 9u);
    if (found == 0) {
        return global_00981874_address;
    }
    u32 r0_3 = frame->word_0 + sparse_array;
    return r0_3 + *gptr<u32>(r0_3 + 4u);
}

}  // namespace d_007420fc
GUEST_EXPORT_FRAMED(0x007420fc, d_007420fc::SparseArray__data_of_9, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_00742138: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The low byte of the value of key 0 of the sparse array at +4, or 0x3c.
namespace d_00742138 {

inline constexpr guest::Function<0x00141a9c, u32(u32, u32, u32)> SparseArray__get;

struct __attribute__((packed)) SparseArrayByte0Of0Or3cFrame {
    u32 word_0;
};
GUEST_OFFSET(SparseArrayByte0Of0Or3cFrame, word_0, 0x0);
GUEST_SIZE(SparseArrayByte0Of0Or3cFrame, 0x4);

u32 SparseArray__byte_0_of_0_or_3c(u32 sparse_array, u32 r1_unused, u32 r2_unused, u32 r3) {
    guest::StackFrameOf<SparseArrayByte0Of0Or3cFrame> frame;  // the original's stack frame
    frame->word_0 = r3;
    u32 found = SparseArray__get(sparse_array + 4u, frame.at(0).addr(), 0u);
    return found == 0 ? 0x3cu : frame->word_0 & 0xffu;
}

}  // namespace d_00742138
GUEST_EXPORT_FRAMED(0x00742138, d_00742138::SparseArray__byte_0_of_0_or_3c, 0x4000);  // pushes {lr} first, as the original

// f_00742160: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether the low byte of the value of key 4 of the sparse array at +4 is set.
namespace d_00742160 {

inline constexpr guest::Function<0x00141a9c, u32(u32, u32, u32)> SparseArray__get;

struct __attribute__((packed)) SparseArrayByte0Of4IsSetFrame {
    u32 word_0;
};
GUEST_OFFSET(SparseArrayByte0Of4IsSetFrame, word_0, 0x0);
GUEST_SIZE(SparseArrayByte0Of4IsSetFrame, 0x4);

u32 SparseArray__byte_0_of_4_is_set(u32 sparse_array, u32 r1_unused, u32 r2_unused, u32 r3) {
    guest::StackFrameOf<SparseArrayByte0Of4IsSetFrame> frame;  // the original's stack frame
    frame->word_0 = r3;
    u32 found = SparseArray__get(sparse_array + 4u, frame.at(0).addr(), 4u);
    if (found == 0) {
        return found;
    }
    u32 r0_3 = frame->word_0 & 0xffu;
    if (r0_3 != 0) {
        r0_3 = 1u;
    }
    return r0_3;
}

}  // namespace d_00742160
GUEST_EXPORT_FRAMED(0x00742160, d_00742160::SparseArray__byte_0_of_4_is_set, 0x4000);  // pushes {lr} first, as the original

// f_0074218c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The data at +8 when the kind (+4) is 0x21f, else 0.
namespace d_0074218c {

struct __attribute__((packed)) DataIfKind21fArg0 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
};
GUEST_OFFSET(DataIfKind21fArg0, word_4, 0x4);


u32 data_if_kind_21f(gptr<DataIfKind21fArg0> arg0) {
    u32 r1_1 = arg0->word_4;
    guest::cpu()->r[1] = r1_1;
    return r1_1 == 0x21fu ? arg0.addr() + 8u : 0u;
}

}  // namespace d_0074218c
GUEST_EXPORT(0x0074218c, d_0074218c::data_if_kind_21f);

// f_007421a4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Bits 16-23 of the value of key 4 of the sparse array at +4, or 0.
namespace d_007421a4 {

inline constexpr guest::Function<0x00141a9c, u32(u32, u32, u32)> SparseArray__get;

struct __attribute__((packed)) SparseArrayByte2Of4Frame {
    u32 word_0;
};
GUEST_OFFSET(SparseArrayByte2Of4Frame, word_0, 0x0);
GUEST_SIZE(SparseArrayByte2Of4Frame, 0x4);

u32 SparseArray__byte_2_of_4(u32 sparse_array, u32 r1_unused, u32 r2_unused, u32 r3) {
    guest::StackFrameOf<SparseArrayByte2Of4Frame> frame;  // the original's stack frame
    frame->word_0 = r3;
    u32 found = SparseArray__get(sparse_array + 4u, frame.at(0).addr(), 4u);
    if (found == 0) {
        return found;
    }
    return frame->word_0 >> 0x10u & 0xffu;
}

}  // namespace d_007421a4
GUEST_EXPORT_FRAMED(0x007421a4, d_007421a4::SparseArray__byte_2_of_4, 0x4000);  // pushes {lr} first, as the original

// f_007421d0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The low byte of the value of key 2 of the sparse array at +4, or 0x40.
namespace d_007421d0 {

inline constexpr guest::Function<0x00141a9c, u32(u32, u32, u32)> SparseArray__get;

struct __attribute__((packed)) SparseArrayByte0Of2Or40Frame {
    u32 word_0;
};
GUEST_OFFSET(SparseArrayByte0Of2Or40Frame, word_0, 0x0);
GUEST_SIZE(SparseArrayByte0Of2Or40Frame, 0x4);

u32 SparseArray__byte_0_of_2_or_40(u32 sparse_array, u32 r1_unused, u32 r2_unused, u32 r3) {
    guest::StackFrameOf<SparseArrayByte0Of2Or40Frame> frame;  // the original's stack frame
    frame->word_0 = r3;
    u32 found = SparseArray__get(sparse_array + 4u, frame.at(0).addr(), 2u);
    return found == 0 ? 0x40u : frame->word_0 & 0xffu;
}

}  // namespace d_007421d0
GUEST_EXPORT_FRAMED(0x007421d0, d_007421d0::SparseArray__byte_0_of_2_or_40, 0x4000);  // pushes {lr} first, as the original

// f_007421f8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The float of key 3 of the packed float set (mask +4), or 1.0 when absent.
namespace d_007421f8 {

struct __attribute__((packed)) SparseFloats {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
};
GUEST_OFFSET(SparseFloats, word_4, 0x4);


void SparseFloats__value_3(gptr<SparseFloats> sparse_floats) {
    u32 r0 = sparse_floats.addr();
    u32 res_1 = 0;
    u32 r6 = r0 + 4u;
    u32 r12 = 0u;
    u32 r4 = sparse_floats->word_4;
    u32 r2 = 3u;
    r0 = r12;
    u32 r1 = r12;
    u32 r3 = 4u;
    u32 r5 = 1u;
    do {
        if ((r4 & lsl_r(r5, r1 & 0xff)) != 0) {
            r0 += 1u;
            if (r1 == r2) {
                r12 = 1u;
            }
        }
        res_1 = r3 - 1u;
        r3 = res_1;
        r1 += 1u;
        guest::preempt();
    } while (res_1 != 0);
    if (r12 != 0 && r0 != 0) {
        float S0_1 = std::bit_cast<float>(gptr<u32>(r6)[r0]);
        guest::cpu()->r[1] = r1;
        guest::cpu()->s[0] = S0_1;
        return;
    }
    float S0_2 = 1.0f;
    guest::cpu()->r[1] = r1;
    guest::cpu()->s[0] = S0_2;
}

}  // namespace d_007421f8
GUEST_EXPORT_FRAMED(0x007421f8, d_007421f8::SparseFloats__value_3, 0xf0);  // pushes {r4, r5, r6, r7} first, as the original

// f_0074226c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The low byte of the value of key 1 of the sparse array at +4, or 0x7f.
namespace d_0074226c {

inline constexpr guest::Function<0x00141a9c, u32(u32, u32, u32)> SparseArray__get;

struct __attribute__((packed)) SparseArrayByte0Of1Or7fFrame {
    u32 word_0;
};
GUEST_OFFSET(SparseArrayByte0Of1Or7fFrame, word_0, 0x0);
GUEST_SIZE(SparseArrayByte0Of1Or7fFrame, 0x4);

u32 SparseArray__byte_0_of_1_or_7f(u32 sparse_array, u32 r1_unused, u32 r2_unused, u32 r3) {
    guest::StackFrameOf<SparseArrayByte0Of1Or7fFrame> frame;  // the original's stack frame
    frame->word_0 = r3;
    u32 found = SparseArray__get(sparse_array + 4u, frame.at(0).addr(), 1u);
    return found == 0 ? 0x7fu : frame->word_0 & 0xffu;
}

}  // namespace d_0074226c
GUEST_EXPORT_FRAMED(0x0074226c, d_0074226c::SparseArray__byte_0_of_1_or_7f, 0x4000);  // pushes {lr} first, as the original

// f_00742294: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The entry for `id` in a table that is one entry (0x6000), a list of ranges (0x6001) or a dense range (0x6002); null
// when none.
namespace d_00742294 {

struct __attribute__((packed)) IdTable {
    u16 half_0;
    u8 unknown_2[0x2];  // (not used here)
    u32 word_4;
};
GUEST_OFFSET(IdTable, half_0, 0x0);
GUEST_OFFSET(IdTable, word_4, 0x4);


u32 IdTable__find_2(gptr<IdTable> table, u32 id) {
    u32 i = table.addr();
    u32 r12_1 = table->half_0;
    u32 data = i + table->word_4;
    if (r12_1 == 0x6000u) {
        return *gptr<u32>(data + 4u) + data;
    }
    if (r12_1 - 0x6001u != 0) {
        if (r12_1 - 0x6001u != 1u) {
            return 0u;
        }
        u32 r0_2 = *gptr<u8>(data);
        u32 zf_1 = r0_2 == id;
        u32 cf_1 = r0_2 >= id;
        if (!cf_1 || zf_1) {
            u32 r3_2 = *gptr<u8>(data + 1u);
            zf_1 = id == r3_2;
            cf_1 = id >= r3_2;
        }
        if (cf_1 && !zf_1) {
            guest::cpu()->r[1] = id;
            return 0u;
        }
        guest::cpu()->r[1] = id;
        return *gptr<u32>(data + (id - r0_2 << 3) + 8u) + data;
    }
    u32 r12 = *gptr<u32>(data);
    i = 0u;
    if (r12 < 0u || r12 == 0) {
        guest::cpu()->r[1] = id;
        return 0u;
    }
    do {
        if (*gptr<u8>(data + i + 4u) >= id) {
            u32 r1_1 = r12 + 3u & ~3u;
            guest::cpu()->r[1] = r1_1;
            return *gptr<u32>(r1_1 + (i << 3) + 4u + data + 4u) + data;
        }
        i += 1u;
        guest::preempt();
    } while (i < r12);
    guest::cpu()->r[1] = id;
    return 0u;
}

}  // namespace d_00742294
GUEST_EXPORT(0x00742294, d_00742294::IdTable__find_2);

// f_00742414: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The section of kind 0x7001 in the header's table (12-byte entries from +0x14, count +0x10); null when none.
namespace d_00742414 {

struct __attribute__((packed)) Section7001Arg0 {
    u8 unknown_0[0x10];  // (not used here)
    u16 half_10;
};
GUEST_OFFSET(Section7001Arg0, half_10, 0x10);


u32 section_7001(gptr<Section7001Arg0> arg0) {
    u32 header = arg0.addr();
    u32 res_1 = 0;
    u32 zf_1 = 0;
    u32 r1_1 = 0;
    u32 r3 = arg0->half_10;
    u32 r12 = 0x7001u;
    u32 r5 = 0u;
    u32 r2 = header + 0x14u;
    u32 r1 = r5;
    if (s32(r3) <= 0) {
        return r5;
    }
L_742434:;
    if (*gptr<u16>(r2 + r1 * 0xcu) != r12) {
        goto L_742468;
    }
    res_1 = r2 + r1 * 0xcu;
    zf_1 = res_1 == 0;
    r1_1 = res_1;
    if (!zf_1) {
        r1_1 = *gptr<u32>(r1_1 + 4u);
        zf_1 = r1_1 == 0;
    }
    if (!zf_1) {
        r5 = r1_1 + header;
    }
    return r5;
L_742468:;
    r1 += 1u;
    if (s32(r3) > s32(r1)) {
        guest::preempt();
        goto L_742434;
    }
    return r5;
}

}  // namespace d_00742414
GUEST_EXPORT_FRAMED(0x00742414, d_00742414::section_7001, 0x30);  // pushes {r4, r5} first, as the original

// f_0074247c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The data of the first section of kind 0x7000 (12-byte entries from +0x14, count +0x10), or 0.
namespace d_0074247c {

struct __attribute__((packed)) ResBlock {
    u8 unknown_0[0x10];  // (not used here)
    u16 half_10;
};
GUEST_OFFSET(ResBlock, half_10, 0x10);


u32 ResBlock__find_section_7000(gptr<ResBlock> res_block) {
    u32 r0 = res_block.addr();
    u32 r0_1 = 0;
    u32 r12 = res_block->half_10;
    u32 r3 = r0 + 0x14u;
    u32 r5 = r0;
    r0 = 0u;
    u32 r2 = 0x7000u;
    u32 i = r0;
    if (s32(r12) <= 0) {
        return r0;
    }
    do {
        if (*gptr<u16>(r3 + i * 0xcu) == r2) {
            u32 res_1 = r3 + i * 0xcu;
            u32 zf_1 = res_1 == 0;
            u32 r1_1 = res_1;
            if (!zf_1) {
                r1_1 = *gptr<u32>(r1_1 + 4u);
                zf_1 = r1_1 == 0;
            }
            if (zf_1) {
                return r0;
            } else {
                r0_1 = r1_1 + r5;
            }
            return r0_1;
        }
        i += 1u;
        guest::preempt();
    } while (s32(r12) > s32(i));
    return r0;
}

}  // namespace d_0074247c
GUEST_EXPORT_FRAMED(0x0074247c, d_0074247c::ResBlock__find_section_7000, 0x30);  // pushes {r4, r5} first, as the original

// f_007424f4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The word at +4 plus an offset.
namespace d_007424f4 {

struct __attribute__((packed)) OffsetFromWord4Arg0 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
};
GUEST_OFFSET(OffsetFromWord4Arg0, word_4, 0x4);


u32 offset_from_word_4(gptr<OffsetFromWord4Arg0> arg0, u32 r1) {
    return arg0->word_4 + r1;
}

}  // namespace d_007424f4
GUEST_EXPORT(0x007424f4, d_007424f4::offset_from_word_4);

// f_00742500: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The data of entry `index` (8-byte entries after the count at +0x14), or 0 when out of range.
namespace d_00742500 {

struct __attribute__((packed)) ResTable {
    u8 unknown_0[0x14];  // (not used here)
    u32 word_14;
};
GUEST_OFFSET(ResTable, word_14, 0x14);


u32 ResTable__entry_data(gptr<ResTable> res_table, u32 r1) {
    u32 r0_1 = res_table.addr() + 0x14u;
    if (res_table->word_14 <= r1) {
        guest::cpu()->r[1] = r1;
        return 0u;
    }
    u32 r1_1 = *gptr<u32>(r0_1 + (r1 << 3) + 8u);
    guest::cpu()->r[1] = r1_1;
    return r0_1 + r1_1;
}

}  // namespace d_00742500
GUEST_EXPORT(0x00742500, d_00742500::ResTable__entry_data);

// f_00742640: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Copies into the target the words the source has (by its mask) that the target lacks, and whether the target now has
// all the required ones.
namespace d_00742640 {

struct __attribute__((packed)) SparseWordsMergeArg1 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(SparseWordsMergeArg1, word_4, 0x4);
GUEST_OFFSET(SparseWordsMergeArg1, word_8, 0x8);

struct __attribute__((packed)) SparseWordsMergeArg2 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(SparseWordsMergeArg2, word_4, 0x4);
GUEST_OFFSET(SparseWordsMergeArg2, word_8, 0x8);

struct __attribute__((packed)) Local_00742640_r12 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_00742640_r12, word_4, 0x4);
GUEST_OFFSET(Local_00742640_r12, word_8, 0x8);


u32 SparseWords__merge(u32 r0_unused, gptr<SparseWordsMergeArg1> arg1, gptr<SparseWordsMergeArg2> arg2, u32 r3) {
    u32 r1 = arg1.addr();
    u32 r2 = arg2.addr();
    u32 res_1 = 0;
    u32 r4 = 1u;
    u32 r6 = *gptr<u32>(guest::cpu()->r[13] + 0x14u);
    u32 r0 = arg1->word_4;
    u32 r5 = arg2->word_4;
    if (s32(r3) > 0) {
        r2 = (r2 + 8u) - 4u;
        gptr<Local_00742640_r12> r12 = gptr<Local_00742640_r12>((r1 + 8u) - 4u);
        if ((r3 & 1u) != 0) {
            if ((r5 & ~r0 & 1u) != 0) {
                r0 |= 1u;
                arg1->word_8 = arg2->word_8;
            }
            r4 = 2u;
            r2 += 4u;
            r12 = gptr<Local_00742640_r12>(r12.addr() + 4u);
        }
        r3 = s32(r3) >> 1;
        if (r3 != 0) {
            do {
                if ((r5 & ~r0 & r4) != 0) {
                    r0 |= r4;
                    r12->word_4 = *gptr<u32>(r2 + 4u);
                }
                u32 r4_1 = r4 << 1;
                if ((r5 & ~r0 & r4_1) != 0) {
                    r0 |= r4_1;
                    r12->word_8 = *gptr<u32>(r2 + 8u);
                }
                res_1 = r3 - 1u;
                r3 = res_1;
                r4 = r4_1 << 1;
                r2 += 8u;
                r12 = gptr<Local_00742640_r12>(r12.addr() + 8u);
                guest::preempt();
            } while (res_1 != 0);
        }
    }
    arg1->word_4 = r0;
    return (r6 & ~r0) == 0;
}

}  // namespace d_00742640
GUEST_EXPORT_FRAMED(0x00742640, d_00742640::SparseWords__merge, 0x1f0);  // pushes {r4, r5, r6, r7, r8} first, as the original

// f_00743f28: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Sets a light parameter by kind: two colours (+0xb8, +0xc8), the normalized direction (+0xd8) or a word (+0xe4).
namespace d_00743f28 {

struct __attribute__((packed)) Light {
    u32 word_0;
};
GUEST_OFFSET(Light, word_0, 0x0);

struct __attribute__((packed)) LightSetParameterArg1 {
    u8 unknown_0[0xd8];  // (not used here)
    float float_d8;
    float float_dc;
    float float_e0;
    u32 word_e4;
};
GUEST_OFFSET(LightSetParameterArg1, float_d8, 0xd8);
GUEST_OFFSET(LightSetParameterArg1, float_dc, 0xdc);
GUEST_OFFSET(LightSetParameterArg1, float_e0, 0xe0);
GUEST_OFFSET(LightSetParameterArg1, word_e4, 0xe4);

struct __attribute__((packed)) LightSetParameterArg2 {
    u32 word_0;
    float float_4;
    float float_8;
    float float_c;
};
GUEST_OFFSET(LightSetParameterArg2, word_0, 0x0);
GUEST_OFFSET(LightSetParameterArg2, float_4, 0x4);
GUEST_OFFSET(LightSetParameterArg2, float_8, 0x8);
GUEST_OFFSET(LightSetParameterArg2, float_c, 0xc);

struct __attribute__((packed)) Local_00743f28_r1_1 {
    float float_0;
    float float_4;
    float float_8;
    float float_c;
};
GUEST_OFFSET(Local_00743f28_r1_1, float_0, 0x0);
GUEST_OFFSET(Local_00743f28_r1_1, float_4, 0x4);
GUEST_OFFSET(Local_00743f28_r1_1, float_8, 0x8);
GUEST_OFFSET(Local_00743f28_r1_1, float_c, 0xc);


u32 Light__set_parameter(gptr<Light> light, gptr<LightSetParameterArg1> arg1, gptr<LightSetParameterArg2> arg2, float S0, float S1) {
    float S0_1 = 0;
    float S1_1 = 0;
    float S2_1 = 0;
    float S3_1 = 0;
    gptr<Local_00743f28_r1_1> r1_1 = gptr<Local_00743f28_r1_1>(0u);
    u32 r0_1 = *gptr<u32>(light->word_0 + 0x14u);
    if (r0_1 == 0) {
        S0_1 = std::bit_cast<float>(arg2->word_0);
        S1_1 = arg2->float_4;
        S2_1 = arg2->float_8;
        S3_1 = arg2->float_c;
        r1_1 = gptr<Local_00743f28_r1_1>(arg1.addr() + 0xb8u);
    } else if (r0_1 == 1u) {
        S0_1 = std::bit_cast<float>(arg2->word_0);
        S1_1 = arg2->float_4;
        S2_1 = arg2->float_8;
        S3_1 = arg2->float_c;
        r1_1 = gptr<Local_00743f28_r1_1>(arg1.addr() + 0xc8u);
    } else {
        if (r0_1 == 2u) {
            float S2_2 = std::bit_cast<float>(arg2->word_0);
            float S1_2 = arg2->float_4;
            float S0_2 = arg2->float_8;
            float S3_2 = 1.0f / sqrtf(S2_2 * S2_2 + S1_2 * S1_2 + S0_2 * S0_2);
            float S1_3 = S1_2 * S3_2;
            float S0_3 = S0_2 * S3_2;
            arg1->float_d8 = S2_2 * S3_2;
            arg1->float_dc = S1_3;
            arg1->float_e0 = S0_3;
            guest::cpu()->r[1] = arg1.addr();
            guest::cpu()->s[0] = S0_3;
            guest::cpu()->s[1] = S1_3;
            return r0_1;
        }
        if (r0_1 == 3u) {
            r0_1 = arg2->word_0;
            arg1->word_e4 = r0_1;
        }
        guest::cpu()->r[1] = arg1.addr();
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        return r0_1;
    }
    r1_1->float_0 = S0_1;
    r1_1->float_4 = S1_1;
    r1_1->float_8 = S2_1;
    r1_1->float_c = S3_1;
    guest::cpu()->r[1] = r1_1.addr();
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    return r0_1;
}

}  // namespace d_00743f28
GUEST_EXPORT(0x00743f28, d_00743f28::Light__set_parameter);

// f_007440a4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Sets a light parameter by kind (the variant with more kinds).
namespace d_007440a4 {

struct __attribute__((packed)) Light {
    u32 word_0;
};
GUEST_OFFSET(Light, word_0, 0x0);

struct __attribute__((packed)) LightSetParameter2Arg1 {
    u8 unknown_0[0x10];  // (not used here)
    float float_10;
    float float_14;
    float float_18;
    float float_1c;
    float float_20;
    u8 byte_24;
};
GUEST_OFFSET(LightSetParameter2Arg1, float_10, 0x10);
GUEST_OFFSET(LightSetParameter2Arg1, float_14, 0x14);
GUEST_OFFSET(LightSetParameter2Arg1, float_18, 0x18);
GUEST_OFFSET(LightSetParameter2Arg1, float_1c, 0x1c);
GUEST_OFFSET(LightSetParameter2Arg1, float_20, 0x20);
GUEST_OFFSET(LightSetParameter2Arg1, byte_24, 0x24);

struct __attribute__((packed)) LightSetParameter2Arg2 {
    float float_0;
    float float_4;
};
GUEST_OFFSET(LightSetParameter2Arg2, float_0, 0x0);
GUEST_OFFSET(LightSetParameter2Arg2, float_4, 0x4);


u32 Light__set_parameter_2(gptr<Light> light, gptr<LightSetParameter2Arg1> arg1, gptr<LightSetParameter2Arg2> arg2, float S0, float S1) {
    u32 r0_1 = *gptr<u32>(light->word_0 + 0x14u);
    if (r0_1 != 0) {
        if (r0_1 == 1u) {
            float S0_1 = arg2->float_0;
            float S1_1 = arg1->float_18;
            if (u32(S1_1 == S0_1)) {
                arg1->byte_24 = 1;
                guest::cpu()->s[0] = S0_1;
                guest::cpu()->s[1] = S1_1;
                return 1u;
            }
            arg1->float_18 = S0_1;
            arg1->byte_24 = 1;
            arg1->byte_24 = 1;
            guest::cpu()->s[0] = S0_1;
            guest::cpu()->s[1] = S1_1;
            return 1u;
        }
        if (r0_1 != 2u) {
            arg1->byte_24 = 1;
            guest::cpu()->s[0] = S0;
            guest::cpu()->s[1] = S1;
            return 1u;
        }
    } else {
        float S0_2 = arg2->float_0;
        if (arg1->float_10 == S0_2) {
            float S1_2 = arg1->float_14;
            if (u32(S1_2 == arg2->float_4)) {
                arg1->byte_24 = 1;
                guest::cpu()->s[0] = S0_2;
                guest::cpu()->s[1] = S1_2;
                return 1u;
            }
        }
        float S1_3 = arg2->float_4;
        arg1->float_10 = S0_2;
        arg1->float_14 = S1_3;
        arg1->byte_24 = 1;
        arg1->byte_24 = 1;
        guest::cpu()->s[0] = S0_2;
        guest::cpu()->s[1] = S1_3;
        return 1u;
    }
    float S0_3 = arg2->float_0;
    if (arg1->float_1c == S0_3) {
        float S1_4 = arg1->float_20;
        if (u32(S1_4 == arg2->float_4)) {
            arg1->byte_24 = 1;
            guest::cpu()->s[0] = S0_3;
            guest::cpu()->s[1] = S1_4;
            return 1u;
        }
    }
    float S1_5 = arg2->float_4;
    arg1->float_1c = S0_3;
    arg1->float_20 = S1_5;
    arg1->byte_24 = 1;
    arg1->byte_24 = 1;
    guest::cpu()->s[0] = S0_3;
    guest::cpu()->s[1] = S1_5;
    return 1u;
}

}  // namespace d_007440a4
GUEST_EXPORT(0x007440a4, d_007440a4::Light__set_parameter_2);

// f_0074420c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The padding (0 or 0x20) needed so a command of `size` does not cross the 4 KiB boundary of the command buffer
// (+0x680).
namespace d_0074420c {


u32 Drawer__padding_before_command(gptr<nw__lyt__Drawer> drawer, u32 r1) {
    u32 zf_1 = r1 == 0x10u;
    u32 cf_1 = r1 >= 0x10u;
    if (r1 > 0x10u) {
        r1 = (r1 << 1) - 0x20u;
    }
    if (!cf_1 || zf_1) {
        r1 = 0u;
    }
    return (drawer->word_680 + r1 & 0xfffu) >= 0xfe0u ? 0x20u : 0u;
}

}  // namespace d_0074420c
GUEST_EXPORT(0x0074420c, d_0074420c::Drawer__padding_before_command);

// f_00744310: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The glyph index of a character code in the font's code maps.
namespace d_00744310 {

struct __attribute__((packed)) Local_00744310_r4_2 {
    u16 half_0;
    u16 half_2;
};
GUEST_OFFSET(Local_00744310_r4_2, half_0, 0x0);
GUEST_OFFSET(Local_00744310_r4_2, half_2, 0x2);


u32 ResFontBase__find_glyph_index(gptr<nw__font__ResFontBase> res_font_base, u32 r1) {
    u32 r0 = res_font_base.addr();
    u32 r12 = r0;
    if (res_font_base->half_14 == r1) {
        return res_font_base->half_16;
    }
    res_font_base->half_14 = u16(r1);
    r0 = 0xffffu;
    u32 r2 = *gptr<u32>(res_font_base->word_8 + 0x10u);
    if (r2 != 0) {
        do {
            u32 r3_1 = *gptr<u16>(r2);
            u32 zf_1 = r3_1 == r1;
            u32 cf_1 = r3_1 >= r1;
            if (!cf_1 || zf_1) {
                u32 r3_2 = *gptr<u16>(r2 + 2u);
                zf_1 = r1 == r3_2;
                cf_1 = r1 >= r3_2;
            }
            if (!cf_1 || zf_1) {
                u32 r3_3 = *gptr<u16>(r2 + 4u);
                if (r3_3 != 0) {
                    if (r3_3 == 1u) {
                        r0 = *gptr<u16>(r2 + (r1 - u32(*gptr<u16>(r2)) << 1) + 0xcu);
                        break;
                    }
                    if (r3_3 != 2u) {
                        break;
                    }
                } else {
                    r0 = uxth(u32(*gptr<u16>(r2 + 0xcu)) + (r1 - u32(*gptr<u16>(r2))));
                    break;
                }
                u32 ea_1 = r2 + 0xcu;
                u32 r3 = ea_1 + 2u;
                r2 = ea_1 + (u32(*gptr<u16>(ea_1)) << 2) - 2u;
                if (r3 > r2) {
                    break;
                }
                do {
                    u32 r4_1 = s32(r2 - r3) >> 2;
                    gptr<Local_00744310_r4_2> r4_2 = gptr<Local_00744310_r4_2>(r3 + (u32(s32(r4_1 + (r4_1 >> 0x1f)) >> 1) << 2));
                    u32 r5_1 = r4_2->half_0;
                    if (r5_1 > r1) {
                        r2 = r4_2.addr() - 4u;
                    }
                    if (r5_1 < r1) {
                        r3 = r4_2.addr() + 4u;
                    }
                    if (r5_1 == r1) {
                        r0 = r4_2->half_2;
                        *gptr<u16>(r12 + 0x16u) = u16(r0);
                        return r0;
                    }
                    guest::preempt();
                } while (r3 <= r2);
                break;
            }
            r2 = *gptr<u32>(r2 + 8u);
            guest::preempt();
        } while (r2 != 0);
    }
    *gptr<u16>(r12 + 0x16u) = u16(r0);
    return r0;
}

}  // namespace d_00744310
GUEST_EXPORT_FRAMED(0x00744310, d_00744310::ResFontBase__find_glyph_index, 0x30);  // pushes {r4, r5} first, as the original

// f_00744be4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether a box intersects the view frustum.
namespace d_00744be4 {

struct __attribute__((packed)) Frustum {
    u8 unknown_0[0x78];  // (not used here)
    float float_78;
    float float_7c;
    float float_80;
    float float_84;
    float float_88;
    float float_8c;
};
GUEST_OFFSET(Frustum, float_78, 0x78);
GUEST_OFFSET(Frustum, float_7c, 0x7c);
GUEST_OFFSET(Frustum, float_80, 0x80);
GUEST_OFFSET(Frustum, float_84, 0x84);
GUEST_OFFSET(Frustum, float_88, 0x88);
GUEST_OFFSET(Frustum, float_8c, 0x8c);

struct __attribute__((packed)) FrustumIntersectsBoxArg1 {
    float float_0;
    float float_4;
    float float_8;
    float float_c;
    float float_10;
    float float_14;
};
GUEST_OFFSET(FrustumIntersectsBoxArg1, float_0, 0x0);
GUEST_OFFSET(FrustumIntersectsBoxArg1, float_4, 0x4);
GUEST_OFFSET(FrustumIntersectsBoxArg1, float_8, 0x8);
GUEST_OFFSET(FrustumIntersectsBoxArg1, float_c, 0xc);
GUEST_OFFSET(FrustumIntersectsBoxArg1, float_10, 0x10);
GUEST_OFFSET(FrustumIntersectsBoxArg1, float_14, 0x14);

struct __attribute__((packed)) Local_00744be4_r1_1 {
    u8 unknown_0[0x90];  // (not used here)
    float float_90;
    float float_94;
    float float_98;
    float float_9c;
};
GUEST_OFFSET(Local_00744be4_r1_1, float_90, 0x90);
GUEST_OFFSET(Local_00744be4_r1_1, float_94, 0x94);
GUEST_OFFSET(Local_00744be4_r1_1, float_98, 0x98);
GUEST_OFFSET(Local_00744be4_r1_1, float_9c, 0x9c);


u32 Frustum__intersects_box(gptr<Frustum> frustum, gptr<FrustumIntersectsBoxArg1> arg1, float S0_unused, float S1) {
    u32 r0 = frustum.addr();
    u32 r1 = arg1.addr();
    u32 i = 0;
    u32 fpsr = guest::cpu()->fpscr;
    float S9 = 0;
    gptr<Local_00744be4_r1_1> r1_1 = gptr<Local_00744be4_r1_1>(0u);
    float S1_2 = 0;
    float S0_8 = 0;
    float S0_1 = frustum->float_84;
    float S3 = arg1->float_0;
    if (S3 > S0_1) {
        guest::cpu()->r[1] = r1;
        guest::cpu()->s[0] = S0_1;
        return 0u;
    }
    float S0_2 = frustum->float_78;
    float S4 = arg1->float_c;
    u32 fpsr_2 = (fpsr & 0xfffffffu | vfp_cmpf(S3, S0_1)) & 0xfffffffu | vfp_cmpf(S0_2, S4);
    if (S0_2 > S4) {
        guest::cpu()->r[1] = r1;
        guest::cpu()->s[0] = S0_2;
        return 0u;
    }
    float S0_3 = frustum->float_88;
    float S5 = arg1->float_4;
    if (S5 > S0_3) {
        guest::cpu()->r[1] = r1;
        guest::cpu()->s[0] = S0_3;
        return 0u;
    }
    float S0_4 = frustum->float_7c;
    float S6 = arg1->float_10;
    u32 fpsr_4 = (fpsr_2 & 0xfffffffu | vfp_cmpf(S5, S0_3)) & 0xfffffffu | vfp_cmpf(S0_4, S6);
    if (S0_4 > S6) {
        guest::cpu()->r[1] = r1;
        guest::cpu()->s[0] = S0_4;
        return 0u;
    }
    float S0_5 = frustum->float_8c;
    float S7 = arg1->float_8;
    if (S7 > S0_5) {
        guest::cpu()->r[1] = r1;
        guest::cpu()->s[0] = S0_5;
        return 0u;
    }
    float S0_6 = frustum->float_80;
    float S8 = arg1->float_14;
    fpsr = (fpsr_4 & 0xfffffffu | vfp_cmpf(S7, S0_5)) & 0xfffffffu | vfp_cmpf(S0_6, S8);
    if (fpsr >> 0x1e & 1 || fpsr >> 0x1f != (fpsr >> 0x1c & 1)) {
        S9 = 0.0f;
        i = 0u;
    } else {
        guest::cpu()->r[1] = r1;
        guest::cpu()->s[0] = S0_6;
        return 0u;
    }
    do {
        r1_1 = gptr<Local_00744be4_r1_1>(r0 + (i << 4));
        float S10_1 = r1_1->float_90;
        u32 fpsr_6 = fpsr & 0xfffffffu | vfp_cmpf(S10_1, S9);
        float S11_1 = r1_1->float_94;
        float S0_7 = fpsr_6 >> 0x1f == (fpsr_6 >> 0x1c & 1) ? S3 : S4;
        u32 fpsr_7 = fpsr_6 & 0xfffffffu | vfp_cmpf(S11_1, S9);
        float S12_1 = r1_1->float_98;
        float S1_1 = fpsr_7 >> 0x1f == (fpsr_7 >> 0x1c & 1) ? S5 : S6;
        u32 fpsr_8 = fpsr_7 & 0xfffffffu | vfp_cmpf(S12_1, S9);
        S1_2 = S11_1 * S1_1 + S12_1 * (fpsr_8 >> 0x1f == (fpsr_8 >> 0x1c & 1) ? S7 : S8);
        S0_8 = S1_2 + (r1_1->float_9c + S10_1 * S0_7);
        fpsr = fpsr_8 & 0xfffffffu | vfp_cmpf(S9, S0_8);
        if (!(fpsr >> 0x1d & 1)) {
            guest::cpu()->r[1] = r1_1.addr();
            guest::cpu()->s[0] = S0_8;
            guest::cpu()->s[1] = S1_2;
            return 0u;
        }
        i += 1u;
        guest::preempt();
    } while (s32(i) < 6);
    guest::cpu()->r[1] = r1_1.addr();
    guest::cpu()->s[0] = S0_8;
    guest::cpu()->s[1] = S1_2;
    return 1u;
}

}  // namespace d_00744be4
GUEST_EXPORT(0x00744be4, d_00744be4::Frustum__intersects_box);

// f_00744ce4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether a sphere (center, radius) intersects the view frustum (near and far planes, then the four sides).
namespace d_00744ce4 {

struct __attribute__((packed)) Frustum {
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
    float float_30;
    u8 unknown_34[0x4];  // (not used here)
    float float_38;
    u8 unknown_3c[0x4];  // (not used here)
    float float_40;
    u8 unknown_44[0x4];  // (not used here)
    float float_48;
    u8 unknown_4c[0x8];  // (not used here)
    float float_54;
    float float_58;
    u8 unknown_5c[0x8];  // (not used here)
    float float_64;
    float float_68;
    u8 unknown_6c[0x4];  // (not used here)
    float float_70;
    float float_74;
};
GUEST_OFFSET(Frustum, float_0, 0x0);
GUEST_OFFSET(Frustum, float_4, 0x4);
GUEST_OFFSET(Frustum, float_8, 0x8);
GUEST_OFFSET(Frustum, float_c, 0xc);
GUEST_OFFSET(Frustum, float_10, 0x10);
GUEST_OFFSET(Frustum, float_14, 0x14);
GUEST_OFFSET(Frustum, float_18, 0x18);
GUEST_OFFSET(Frustum, float_1c, 0x1c);
GUEST_OFFSET(Frustum, float_20, 0x20);
GUEST_OFFSET(Frustum, float_24, 0x24);
GUEST_OFFSET(Frustum, float_28, 0x28);
GUEST_OFFSET(Frustum, float_2c, 0x2c);
GUEST_OFFSET(Frustum, float_30, 0x30);
GUEST_OFFSET(Frustum, float_38, 0x38);
GUEST_OFFSET(Frustum, float_40, 0x40);
GUEST_OFFSET(Frustum, float_48, 0x48);
GUEST_OFFSET(Frustum, float_54, 0x54);
GUEST_OFFSET(Frustum, float_58, 0x58);
GUEST_OFFSET(Frustum, float_64, 0x64);
GUEST_OFFSET(Frustum, float_68, 0x68);
GUEST_OFFSET(Frustum, float_70, 0x70);
GUEST_OFFSET(Frustum, float_74, 0x74);

struct __attribute__((packed)) FrustumIntersectsSphereArg1 {
    float float_0;
    float float_4;
    float float_8;
    float float_c;
};
GUEST_OFFSET(FrustumIntersectsSphereArg1, float_0, 0x0);
GUEST_OFFSET(FrustumIntersectsSphereArg1, float_4, 0x4);
GUEST_OFFSET(FrustumIntersectsSphereArg1, float_8, 0x8);
GUEST_OFFSET(FrustumIntersectsSphereArg1, float_c, 0xc);


u32 Frustum__intersects_sphere(gptr<Frustum> frustum, gptr<FrustumIntersectsSphereArg1> arg1) {
    float S4_1 = arg1->float_0;
    float S1_1 = arg1->float_c;
    u32 r1_1 = arg1.addr() + 4u;
    float S2_1 = arg1->float_4;
    float S3_1 = arg1->float_8;
    float S0_1 = frustum->float_24 * S2_1 + frustum->float_28 * S3_1 + (frustum->float_2c + frustum->float_20 * S4_1);
    if (S0_1 - S1_1 > frustum->float_70) {
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->s[0] = S0_1;
        guest::cpu()->s[1] = S1_1;
        return 0u;
    }
    if (S0_1 + S1_1 < frustum->float_74) {
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->s[0] = S0_1;
        guest::cpu()->s[1] = S1_1;
        return 0u;
    }
    float S5_1 = frustum->float_4 * S2_1 + frustum->float_8 * S3_1 + (frustum->float_c + frustum->float_0 * S4_1);
    if (S1_1 < S5_1 * frustum->float_30 + S0_1 * frustum->float_38) {
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->s[0] = S0_1;
        guest::cpu()->s[1] = S1_1;
        return 0u;
    }
    if (S1_1 < S5_1 * frustum->float_40 + S0_1 * frustum->float_48) {
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->s[0] = S0_1;
        guest::cpu()->s[1] = S1_1;
        return 0u;
    }
    u32 r1_2 = frustum.addr() + 0x54u;
    float S2_2 = frustum->float_14 * S2_1 + frustum->float_18 * S3_1 + (frustum->float_1c + frustum->float_10 * S4_1);
    if (S1_1 < S2_2 * frustum->float_54 + S0_1 * frustum->float_58) {
        guest::cpu()->r[1] = r1_2;
        guest::cpu()->s[0] = S0_1;
        guest::cpu()->s[1] = S1_1;
        return 0u;
    }
    if (!(S2_2 * frustum->float_64 + S0_1 * frustum->float_68 > S1_1)) {
        guest::cpu()->r[1] = r1_2;
        guest::cpu()->s[0] = S0_1;
        guest::cpu()->s[1] = S1_1;
        return 1u;
    }
    guest::cpu()->r[1] = r1_2;
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    return 0u;
}

}  // namespace d_00744ce4
GUEST_EXPORT(0x00744ce4, d_00744ce4::Frustum__intersects_sphere);

// f_007453a4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether the record passes the two checks (00744df8, 00744f60) and the slot value (007450c4) is 0.
namespace d_007453a4 {

inline constexpr guest::Function<0x00744df8, u32(u32, u32, u32, u32)> FurnitureSlot__kind_size;
inline constexpr guest::Function<0x00744f60, u32(u32, u32, u32, u32)> FurnitureSlot__kind_offset;
inline constexpr guest::Function<0x007450c4, u32(u32, u32, u32, u32)> FurnitureSlot__kind_value;

u32 FurnitureRecord__is_open_slot(u32 furniture_record, u32 r1) {
    u32 r0_1 = FurnitureSlot__kind_size(furniture_record, r1, furniture_record, r1);
    u32 r2_1 = guest::cpu()->r[2];
    u32 r3_1 = guest::cpu()->r[3];
    if (r0_1 == 0) {
        return 0u;
    }
    u32 r0_2 = FurnitureSlot__kind_offset(r2_1, r3_1, r2_1, r3_1);
    u32 r2_2 = guest::cpu()->r[2];
    u32 r3_2 = guest::cpu()->r[3];
    if (r0_2 == 0) {
        return 0u;
    }
    return FurnitureSlot__kind_value(r2_2, r3_2, r2_2, r3_2) == 0;
}

}  // namespace d_007453a4
GUEST_EXPORT_FRAMED(0x007453a4, d_007453a4::FurnitureRecord__is_open_slot, 0x4000);  // pushes {lr} first, as the original

// f_007453f0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether the record has a slot of the kind (007452e8).
namespace d_007453f0 {

inline constexpr guest::Function<0x007452e8, u32(u32, u32, u32, u32)> FurnitureSlot__kind_flags;

u32 FurnitureRecord__has_slot_kind(u32 furniture_record) {
    u32 r0_1 = FurnitureSlot__kind_flags(furniture_record, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0_1 != 0) {
        r0_1 = 1u;
    }
    return r0_1;
}

}  // namespace d_007453f0
GUEST_EXPORT_FRAMED(0x007453f0, d_007453f0::FurnitureRecord__has_slot_kind, 0x4000);  // pushes {lr} first, as the original

// f_00745404: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether one of the slots 1-13 has `value`.
namespace d_00745404 {

inline constexpr guest::Function<0x007450c4, u32(u32, u32, u32, u32)> FurnitureSlot__kind_value;

u32 FurnitureRecord__has_slot_value(u32 furniture_record, u32 r1) {
    u32 r4 = furniture_record;
    u32 r3 = r1;
    u32 r2 = 1u;
    do {
        u32 r0_1 = FurnitureSlot__kind_value(r4, r2, r2, r3);
        r3 = guest::cpu()->r[3];
        if (r0_1 == r3) {
            return 1u;
        }
        r2 = guest::cpu()->r[2] + 1u;
        guest::preempt();
    } while (r2 <= 0xdu);
    return 0u;
}

}  // namespace d_00745404
GUEST_EXPORT_FRAMED(0x00745404, d_00745404::FurnitureRecord__has_slot_value, 0x4010);  // pushes {r4, lr} first, as the original

// f_00745448: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Which of the two entries (+0 or +0x40) refers to the room furniture slot holding `furniture`, or 0.
namespace d_00745448 {

inline constexpr u32 room_furniture_address = 0x009c7a14u;
inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> current_scene_id;
inline constexpr guest::Function<0x005b42fc, u32(u32)> capped_count_for_kind;

u32 RoomFurniture__pair_entry_for(u32 room_furniture, u32 r1, u32 r2, u32 r3) {
    u32 r6 = room_furniture;
    u32 r5 = room_furniture_address;
    u32 r4 = r1;
    u32 scene_2 = current_scene_id(room_furniture, r1, r2, r3);
    u32 count = capped_count_for_kind(scene_2);
    r1 = count;
    if (count == 0) {
        guest::cpu()->r[1] = r1;
        return 0u;
    }
    r2 = r1 & 1u;
    room_furniture = 0u;
    if (r2 >= 0u && r2 != 0) {
        do {
            if (gptr<u32>(r5)[room_furniture] == r4) {
                goto L_7454bc;
            }
            room_furniture += 1u;
            guest::preempt();
        } while (r2 > room_furniture);
    }
    room_furniture = r2;
    if (r1 <= room_furniture) {
        guest::cpu()->r[1] = r1;
        return 0u;
    }
L_74549c:;
    if (gptr<u32>(r5)[room_furniture] != r4) {
        if (*gptr<u32>(r5 + (room_furniture << 2) + 4u) != r4) {
            goto L_7454ec;
        }
        room_furniture += 1u;
    }
L_7454bc:;
    if (room_furniture + 1u != 0) {
        r1 = *gptr<u32>(r6);
        if (r1 == room_furniture) {
            guest::cpu()->r[1] = r1;
            return r6;
        }
        r1 = *gptr<u32>(r6 + 0x40u);
        if (r1 == room_furniture) {
            guest::cpu()->r[1] = r1;
            return r6 + 0x40u;
        }
    }
    guest::cpu()->r[1] = r1;
    return 0u;
L_7454ec:;
    room_furniture += 2u;
    if (r1 > room_furniture) {
        guest::preempt();
        goto L_74549c;
    }
    guest::cpu()->r[1] = r1;
    return 0u;
}

}  // namespace d_00745448
GUEST_EXPORT_FRAMED(0x00745448, d_00745448::RoomFurniture__pair_entry_for, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_007455cc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The index of `furniture` among the room's furniture (within the capped count), or -1.
namespace d_007455cc {

inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> current_scene_id;
inline constexpr guest::Function<0x005b42fc, u32(u32)> capped_count_for_kind;

u32 RoomFurniture__index_of(u32 room_furniture, u32 r1, u32 r2, u32 r3) {
    u32 r4 = room_furniture;
    u32 r5 = r1;
    u32 scene_2 = current_scene_id(room_furniture, r1, r2, r3);
    u32 count = capped_count_for_kind(scene_2);
    r1 = count;
    if (count != 0) {
        room_furniture = r1 & 1u;
        r2 = 0u;
        if (room_furniture < 0u || room_furniture == 0) {
            goto L_745618;
        }
L_7455f8:;
        if (gptr<u32>(r4)[r2] != r5) {
            r2 += 1u;
            if (room_furniture > r2) {
                guest::preempt();
                goto L_7455f8;
            }
            goto L_745618;
        }
        guest::cpu()->r[1] = r1;
        return r2;
L_745618:;
        if (room_furniture < r1) {
            do {
                if (gptr<u32>(r4)[room_furniture] == r5) {
                    guest::cpu()->r[1] = r1;
                    return room_furniture;
                }
                if (*gptr<u32>(r4 + (room_furniture << 2) + 4u) == r5) {
                    guest::cpu()->r[1] = r1;
                    return room_furniture + 1u;
                }
                room_furniture += 2u;
                guest::preempt();
            } while (r1 > room_furniture);
        }
    }
    guest::cpu()->r[1] = r1;
    return ~0u;
}

}  // namespace d_007455cc
GUEST_EXPORT_FRAMED(0x007455cc, d_007455cc::RoomFurniture__index_of, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_00745784: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Byte +0x10 of the object of the entry's owner (table at 0x9529fc, below 5), or 0.
namespace d_00745784 {

struct __attribute__((packed)) EntryOwnerByte10Arg0 {
    u8 byte_0;
};
GUEST_OFFSET(EntryOwnerByte10Arg0, byte_0, 0x0);

inline constexpr u32 room_item_owner_address = 0x009529fcu;

u32 entry_owner_byte_10(gptr<EntryOwnerByte10Arg0> arg0, u32 r1) {
    u32 r0_2 = 0;
    u32 r0_1 = arg0->byte_0;
    if (r0_1 >= 5u) {
        r0_2 = 0u;
    } else {
        r1 = room_item_owner_address;
        r0_2 = *gptr<u8>(gptr<u32>(r1)[r0_1] + 0x10u);
    }
    guest::cpu()->r[1] = r1;
    return r0_2;
}

}  // namespace d_00745784
GUEST_EXPORT(0x00745784, d_00745784::entry_owner_byte_10);

// f_007457e8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The index of the furniture at cell (x, z) of the room grid's layer (0: the floor, 0x50 per row; 1: the 16 x 16 upper
// layer); -1 when none or out of range.
namespace d_007457e8 {

inline constexpr guest::Function<0x002f74c8, u32(u32, u32)> current_scene_id;
inline constexpr guest::Function<0x004e960c, u32(u32, u32, u32, u32)> cell_is_lit;
inline constexpr guest::Function<0x005b41e8, u32(u32)> scene_light_kind;

struct __attribute__((packed)) RoomGridCellFrame {
    u32 layer;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(RoomGridCellFrame, layer, 0x0);
GUEST_OFFSET(RoomGridCellFrame, word_4, 0x4);
GUEST_OFFSET(RoomGridCellFrame, word_8, 0x8);
GUEST_SIZE(RoomGridCellFrame, 0xc);

u32 RoomGrid__cell(u32 grid, u32 x, u32 z, u32 layer) {
    guest::StackFrameOf<RoomGridCellFrame> frame;  // the original's stack frame
    u32 scene_2 = current_scene_id(grid, x);
    u32 r0_2 = scene_light_kind(scene_2);
    if (r0_2 < 2u && r0_2 >= layer) {
        frame->word_4 = 0;
        frame->word_8 = 0;
        frame->layer = layer;
        if (cell_is_lit(frame.at(4).addr(), frame.at(8).addr(), x, z) != 0) {
            u32 r0_5 = frame->word_4;
            if (layer != 1u) {
                u32 r1_4 = frame->word_8;
                u32 r0_6 = *gptr<s8>(grid + r0_5 * 0x50u + r1_4);
                guest::cpu()->r[1] = r1_4;
                return r0_6;
            }
            u32 r1_5 = frame->word_8;
            u32 r0_7 = *gptr<s8>(grid + (r0_5 << 4) + r1_5 + 0x1400u);
            guest::cpu()->r[1] = r1_5;
            return r0_7;
        }
    }
    return ~0u;
}

}  // namespace d_007457e8
GUEST_EXPORT_FRAMED(0x007457e8, d_007457e8::RoomGrid__cell, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_00745890: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether the eight slot bytes at +0xa are all -1.
namespace d_00745890 {


u32 first_eight_slots_empty(u32 r0) {
    u32 i = r0 + 0xau;
    r0 += 0x12u;
    if (i >= r0) {
        guest::cpu()->r[1] = i;
        return 1u;
    }
    do {
        if (u32(*gptr<s8>(i)) + 1u != 0) {
            guest::cpu()->r[1] = i;
            return 0u;
        }
        i += 1u;
        guest::preempt();
    } while (i < r0);
    guest::cpu()->r[1] = i;
    return 1u;
}

}  // namespace d_00745890
GUEST_EXPORT(0x00745890, d_00745890::first_eight_slots_empty);

// f_007458c8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether the eight slot bytes at +0x12 are all -1.
namespace d_007458c8 {


u32 second_eight_slots_empty(u32 r0) {
    u32 i = r0 + 0x12u;
    r0 += 0x1au;
    if (i >= r0) {
        guest::cpu()->r[1] = i;
        return 1u;
    }
    do {
        if (u32(*gptr<s8>(i)) + 1u != 0) {
            guest::cpu()->r[1] = i;
            return 0u;
        }
        i += 1u;
        guest::preempt();
    } while (i < r0);
    guest::cpu()->r[1] = i;
    return 1u;
}

}  // namespace d_007458c8
GUEST_EXPORT(0x007458c8, d_007458c8::second_eight_slots_empty);

// f_00745900: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The position (below 8) of the slot byte (+0xa) equal to `value` (the current one, +8, for -1), or -1.
namespace d_00745900 {

struct __attribute__((packed)) SlotPositionOfValueArg0 {
    u8 unknown_0[0x8];  // (not used here)
    u8 byte_8;
};
GUEST_OFFSET(SlotPositionOfValueArg0, byte_8, 0x8);

struct __attribute__((packed)) Local_00745900_r3_1 {
    u8 unknown_0[0xa];  // (not used here)
    u8 byte_a;
    u8 byte_b;
};
GUEST_OFFSET(Local_00745900_r3_1, byte_a, 0xa);
GUEST_OFFSET(Local_00745900_r3_1, byte_b, 0xb);


u32 slot_position_of_value(gptr<SlotPositionOfValueArg0> arg0, u32 r1) {
    u32 r0 = arg0.addr();
    u32 r2 = r0;
    if (r1 + 1u == 0) {
        r1 = s8(arg0->byte_8);
    }
    r0 = 0u;
    do {
        gptr<Local_00745900_r3_1> r3_1 = gptr<Local_00745900_r3_1>(r2 + r0);
        if (u32(s8(r3_1->byte_a)) == r1) {
            guest::cpu()->r[1] = r1;
            return r0;
        }
        if (u32(s8(r3_1->byte_b)) == r1) {
            guest::cpu()->r[1] = r1;
            return r0 + 1u;
        }
        r0 += 2u;
        guest::preempt();
    } while (r0 < 8u);
    guest::cpu()->r[1] = r1;
    return ~0u;
}

}  // namespace d_00745900
GUEST_EXPORT(0x00745900, d_00745900::slot_position_of_value);

// f_00745948: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Slot byte `index` (below 8) of the first (+0xa) or, without `first`, second (+0x12) set; -1 when out of range.
namespace d_00745948 {

struct __attribute__((packed)) Local_00745948_r0_2 {
    u8 unknown_0[0xa];  // (not used here)
    u8 byte_a;
    u8 unknown_b[0x7];  // (not used here)
    u8 byte_12;
};
GUEST_OFFSET(Local_00745948_r0_2, byte_a, 0xa);
GUEST_OFFSET(Local_00745948_r0_2, byte_12, 0x12);


u32 slot_value_at_2(u32 r0, u32 r1, u32 r2) {
    if (u32((0ull + ~0u + u32(r1 >= 8u)) >> 0x20)) {
        return ~0u;
    }
    gptr<Local_00745948_r0_2> r0_2 = gptr<Local_00745948_r0_2>(r0 + r1);
    return r2 == 0 ? u32(s8(r0_2->byte_12)) : u32(s8(r0_2->byte_a));
}

}  // namespace d_00745948
GUEST_EXPORT(0x00745948, d_00745948::slot_value_at_2);

// f_00745970: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Frees the slot with the record's key (+4, +8) in the table at 0x95009c, when there is one.
namespace d_00745970 {

struct __attribute__((packed)) EffectSlotRef {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(EffectSlotRef, word_4, 0x4);
GUEST_OFFSET(EffectSlotRef, word_8, 0x8);

inline constexpr guest::Function<0x002b5fc4, u32(u32, u32)> read_u32_0x0095009c_;
inline constexpr guest::Function<0x0071cc4c, u32(u32, u32, u32)> free_slot_with_key;

u32 free_keyed_slot(gptr<EffectSlotRef> effect_slot_ref, u32 r1) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 r0_1 = read_u32_0x0095009c_(effect_slot_ref.addr(), r1);
    if (r0_1 == 0) {
        return r0_1;
    }
    u32 r0_2 = read_u32_0x0095009c_(r0_1, guest::cpu()->r[1]);
    u32 r1_2 = effect_slot_ref->word_4;
    u32 r2_1 = effect_slot_ref->word_8;
    frame.release();
    return free_slot_with_key(r0_2, r1_2, r2_1);
}

}  // namespace d_00745970
GUEST_EXPORT(0x00745970, d_00745970::free_keyed_slot);

// f_0074599c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether one of the six objects (+0xc to +0x20) is in state 1 (+4).
namespace d_0074599c {

struct __attribute__((packed)) AnyOfSixInState1Arg0 {
    u8 unknown_0[0xc];  // (not used here)
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u32 word_18;
    u32 word_1c;
    u32 word_20;
};
GUEST_OFFSET(AnyOfSixInState1Arg0, word_c, 0xc);
GUEST_OFFSET(AnyOfSixInState1Arg0, word_10, 0x10);
GUEST_OFFSET(AnyOfSixInState1Arg0, word_14, 0x14);
GUEST_OFFSET(AnyOfSixInState1Arg0, word_18, 0x18);
GUEST_OFFSET(AnyOfSixInState1Arg0, word_1c, 0x1c);
GUEST_OFFSET(AnyOfSixInState1Arg0, word_20, 0x20);


u32 any_of_six_in_state_1(gptr<AnyOfSixInState1Arg0> arg0) {
    u32 r1_1 = arg0->word_c;
    if (r1_1 != 0) {
        u32 r1_2 = *gptr<u8>(r1_1 + 4u);
        if (r1_2 == 1u) {
            guest::cpu()->r[1] = r1_2;
            return 1u;
        }
    }
    u32 r1_3 = arg0->word_10;
    if (r1_3 != 0) {
        u32 r1_4 = *gptr<u8>(r1_3 + 4u);
        if (r1_4 == 1u) {
            guest::cpu()->r[1] = r1_4;
            return 1u;
        }
    }
    u32 r1_5 = arg0->word_14;
    if (r1_5 != 0) {
        u32 r1_6 = *gptr<u8>(r1_5 + 4u);
        if (r1_6 == 1u) {
            guest::cpu()->r[1] = r1_6;
            return 1u;
        }
    }
    u32 r1_7 = arg0->word_18;
    if (r1_7 != 0) {
        u32 r1_8 = *gptr<u8>(r1_7 + 4u);
        if (r1_8 == 1u) {
            guest::cpu()->r[1] = r1_8;
            return 1u;
        }
    }
    u32 r1_9 = arg0->word_1c;
    if (r1_9 != 0) {
        r1_9 = *gptr<u8>(r1_9 + 4u);
        if (r1_9 == 1u) {
            guest::cpu()->r[1] = r1_9;
            return 1u;
        }
    }
    u32 r0_1 = arg0->word_20;
    if (r0_1 == 0) {
        guest::cpu()->r[1] = r1_9;
        return 0u;
    }
    u32 r0_2 = *gptr<u8>(r0_1 + 4u);
    if (r0_2 == 1u) {
        guest::cpu()->r[1] = r1_9;
        return r0_2;
    }
    guest::cpu()->r[1] = r1_9;
    return 0u;
}

}  // namespace d_0074599c
GUEST_EXPORT(0x0074599c, d_0074599c::any_of_six_in_state_1);

// f_00745f74: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The address of +0xbc of the model (+4).
namespace d_00745f74 {

struct __attribute__((packed)) ModelPartBcArg0 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
};
GUEST_OFFSET(ModelPartBcArg0, word_4, 0x4);


u32 model_part_bc(gptr<ModelPartBcArg0> arg0) {
    return arg0->word_4 + 0xbcu;
}

}  // namespace d_00745f74
GUEST_EXPORT(0x00745f74, d_00745f74::model_part_bc);

// f_00745f80: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The address of the model's matrix (+0x4c of +4).
namespace d_00745f80 {

struct __attribute__((packed)) ModelMatrixArg0 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
};
GUEST_OFFSET(ModelMatrixArg0, word_4, 0x4);


u32 model_matrix(gptr<ModelMatrixArg0> arg0) {
    return arg0->word_4 + 0x4cu;
}

}  // namespace d_00745f80
GUEST_EXPORT(0x00745f80, d_00745f80::model_matrix);

// f_00746854: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether the object's float at 4 is zero or negative.
namespace d_00746854 {

struct __attribute__((packed)) ObjectTest70Arg0 {
    u8 unknown_0[0x4];  // (not used here)
    float float_4;
};
GUEST_OFFSET(ObjectTest70Arg0, float_4, 0x4);


u32 value_4_not_positive(gptr<ObjectTest70Arg0> arg0) {
    u32 r0 = arg0.addr();
    u32 fpsr = guest::cpu()->fpscr;
    float S0_1 = arg0->float_4;
    float S1_1 = 0.0f;
    u32 fpsr_1 = fpsr & 0xfffffffu | vfp_cmpf(S0_1, S1_1);
    if (S0_1 <= S1_1) {
        r0 = 1u;
    }
    if (fpsr_1 >> 0x1d & 1 && !(fpsr_1 >> 0x1e & 1)) {
        r0 = 0u;
    }
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    return r0;
}

}  // namespace d_00746854
GUEST_EXPORT(0x00746854, d_00746854::value_4_not_positive);

// f_00746d20: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Removes the icon from its list (+0x174), clears its 16-byte name and its link, and removes it from the drag-icon
// list.
namespace d_00746d20 {

struct __attribute__((packed)) DragIcon {
    u8 unknown_0[0x174];  // (not used here)
    u32 word_174;
};
GUEST_OFFSET(DragIcon, word_174, 0x174);

struct __attribute__((packed)) DragIconReleaseArg1 {
    u8 unknown_0[0x48];  // (not used here)
    u32 icon;
    u8 unknown_4c[0x12c];  // (not used here)
    u32 word_178;
};
GUEST_OFFSET(DragIconReleaseArg1, icon, 0x48);
GUEST_OFFSET(DragIconReleaseArg1, word_178, 0x178);

inline constexpr guest::Function<0x001408d4, u32(u32, u32)> list_remove;
inline constexpr guest::Function<0x00150bc0, u32(u32, u32, u32)> strncpy;
inline constexpr guest::Function<0x004b6dc8, u32(u32, u32)> DragIconList__remove;

struct __attribute__((packed)) DragIconReleaseFrame {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u8 unknown_10[0x4];  // (not read or written by name)
};
GUEST_OFFSET(DragIconReleaseFrame, word_0, 0x0);
GUEST_OFFSET(DragIconReleaseFrame, word_4, 0x4);
GUEST_OFFSET(DragIconReleaseFrame, word_8, 0x8);
GUEST_OFFSET(DragIconReleaseFrame, word_c, 0xc);
GUEST_SIZE(DragIconReleaseFrame, 0x14);

void DragIcon__release(gptr<DragIcon> drag_icon, gptr<DragIconReleaseArg1> arg1) {
    guest::StackFrameOf<DragIconReleaseFrame> frame;  // the original's stack frame
    list_remove(drag_icon->word_174, arg1.addr() + 0xcu);
    frame->word_0 = 0;
    frame->word_4 = 0;
    frame->word_8 = 0;
    frame->word_c = 0;
    strncpy(arg1.addr() + 0x18bu, frame.at(0).addr(), 0x10u);
    arg1->word_178 = 0;
    u32 icon = arg1->icon;
    DragIconList__remove(*gptr<u32>(icon + 0xcu), icon);
}

}  // namespace d_00746d20
GUEST_EXPORT_FRAMED(0x00746d20, d_00746d20::DragIcon__release, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_00746d78: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Calls virtual 11 of the icon's owner (+0x48) with 1.
namespace d_00746d78 {

struct __attribute__((packed)) DragIcon {
    u8 unknown_0[0x48];  // (not used here)
    u32 word_48;
};
GUEST_OFFSET(DragIcon, word_48, 0x48);


u32 DragIcon__owner_virtual_11(gptr<DragIcon> drag_icon) {
    u32 r0_1 = drag_icon->word_48;
    u32 r3_1 = *gptr<u32>(*gptr<u32>(r0_1) + 0x2cu);
    // virtual function 11 of r0_1
    return guest::call_address<u32>(r3_1, r0_1, guest::cpu()->r[1], 1u, r3_1);
}

}  // namespace d_00746d78
GUEST_EXPORT(0x00746d78, d_00746d78::DragIcon__owner_virtual_11);

// f_00746e2c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The object when its 16-bit +0 is set, else 0.
namespace d_00746e2c {

struct __attribute__((packed)) SelfIfHalf0SetArg0 {
    u16 half_0;
};
GUEST_OFFSET(SelfIfHalf0SetArg0, half_0, 0x0);


u32 self_if_half_0_set(gptr<SelfIfHalf0SetArg0> arg0) {
    u32 r0 = arg0.addr();
    u32 r1_1 = arg0->half_0;
    if (r1_1 == 0) {
        r0 = 0u;
    }
    guest::cpu()->r[1] = r1_1;
    return r0;
}

}  // namespace d_00746e2c
GUEST_EXPORT(0x00746e2c, d_00746e2c::self_if_half_0_set);

// f_00746e4c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Word `index` of the array when below the count (+0x190), else 0.
namespace d_00746e4c {

struct __attribute__((packed)) WordArrayEntry190Arg0 {
    u8 unknown_0[0x190];  // (not used here)
    u32 word_190;
};
GUEST_OFFSET(WordArrayEntry190Arg0, word_190, 0x190);


u32 word_array_entry_190(gptr<WordArrayEntry190Arg0> arg0, u32 r1) {
    return arg0->word_190 > r1 ? gptr<u32>(arg0.addr())[r1] : 0u;
}

}  // namespace d_00746e4c
GUEST_EXPORT(0x00746e4c, d_00746e4c::word_array_entry_190);

// f_00746f10: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Calls 00747438 on the link state's sub object, or 0 without one.
namespace d_00746f10 {

inline constexpr guest::Function<0x00747438, u32(u32, u32)> LinkSub__is_connected;

u32 UnknownStateA22020__sub_check(gptr<UnknownStateA22020> unknown_state_a22020) {
    u32 link_sub = unknown_state_a22020->sub.addr();
    if (link_sub == 0) {
        return link_sub;
    }
    return LinkSub__is_connected(link_sub, guest::cpu()->r[1]);
}

}  // namespace d_00746f10
GUEST_EXPORT(0x00746f10, d_00746f10::UnknownStateA22020__sub_check);

// f_00746fec: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether the wireless manager (0x974a58) exists and passes 0072f380.
namespace d_00746fec {

inline constexpr u32 pia_local_state_address = 0x00974a58u;
inline guest::global<u32, 0x00974a58> pia_local_state;
inline constexpr guest::Function<0x0072f380, u32(u32)> NexClient__is_connected;

u32 wireless_manager_check_a() {
    u32 r0_1 = *pia_local_state;
    if (r0_1 == 0) {
        return 0u;
    }
    return NexClient__is_connected(r0_1) != 0;
}

}  // namespace d_00746fec
GUEST_EXPORT_FRAMED(0x00746fec, d_00746fec::wireless_manager_check_a, 0x4010);  // pushes {r4, lr} first, as the original

// f_0074701c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether the wireless manager (0x974a58) exists and passes 0072f380 or 0072f3a4.
namespace d_0074701c {

inline constexpr u32 pia_local_state_address = 0x00974a58u;
inline guest::global<u32, 0x00974a58> pia_local_state;
inline constexpr guest::Function<0x0072f380, u32(u32)> NexClient__is_connected;
inline constexpr guest::Function<0x0072f3a4, u32(u32)> NexClient__is_logged_in;

u32 wireless_manager_check_any() {
    u32 r4_1 = *pia_local_state;
    if (r4_1 == 0) {
        return 0u;
    }
    if (NexClient__is_connected(r4_1) != 0) {
        return 1u;
    }
    return NexClient__is_logged_in(r4_1) != 0;
}

}  // namespace d_0074701c
GUEST_EXPORT_FRAMED(0x0074701c, d_0074701c::wireless_manager_check_any, 0x4010);  // pushes {r4, lr} first, as the original

// f_00747094: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// When the network clock (0x974a64) is synchronized: the value from 00733680 for the time at 0x97d428 (within range);
// else 0.
namespace d_00747094 {

inline constexpr u32 online_facade_address = 0x00974a64u;
inline constexpr u32 network_time_address = 0x0097d428u;
inline guest::global<u32, 0x00974a64> online_facade;
inline guest::global<u32, 0x0097d428> network_time;
inline constexpr guest::Function<0x00733680, u32(u32, u32, u32, u32)> PiaTransport__send_if_ready;
inline constexpr guest::Function<0x00733e00, u32(u32, u32, u32, u32)> NexConnection__status;

u32 network_time_value(u32 r0_unused, u32 r1, u32 r2) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    for (;;) {
        u32 r0_2 = *online_facade;
        if (r0_2 != 0) {
            if (NexConnection__status(r0_2, r1, r2, guest::cpu()->r[3]) == 1u) {
                goto L_7470c0;
            }
        }
        guest::cpu()->r[1] = 0u;
        return 0u;
L_7470c0:;
        if (!1) {
            break;
        }
        u32 r0_1 = *network_time;
        if (r0_1 + 0xfff00000u >= 0x3ff00000u) {
            guest::cpu()->r[1] = 0u;
            return 0u;
        }
        frame.release();
        return PiaTransport__send_if_ready(r0_1, 0x3ff00000u, r0_1 + 0xfff00000u, guest::cpu()->r[3]);
        guest::preempt();
    }
}

}  // namespace d_00747094
GUEST_EXPORT(0x00747094, d_00747094::network_time_value);

// f_0074724c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether the record is active (+0x18) and the network clock (0x974a64) is ready.
namespace d_0074724c {

struct __attribute__((packed)) NetworkClockReadyArg0 {
    u8 unknown_0[0x18];  // (not used here)
    u32 word_18;
};
GUEST_OFFSET(NetworkClockReadyArg0, word_18, 0x18);

inline constexpr u32 online_facade_address = 0x00974a64u;
inline guest::global<u32, 0x00974a64> online_facade;
inline constexpr guest::Function<0x00733cf0, u32(u32, u32, u32, u32)> NexSession__is_current;

u32 network_clock_ready(gptr<NetworkClockReadyArg0> arg0) {
    if (arg0->word_18 == 0) {
        return 0u;
    }
    u32 r0_1 = *online_facade;
    if (r0_1 == 0) {
        return 0u;
    }
    return NexSession__is_current(r0_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]) != 0;
}

}  // namespace d_0074724c
GUEST_EXPORT_FRAMED(0x0074724c, d_0074724c::network_clock_ready, 0x4010);  // pushes {r4, lr} first, as the original

// f_007472b0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Copies the network clock's time (+0x7c of 0x974a64, or the default at 0x953678).
namespace d_007472b0 {

struct __attribute__((packed)) NetworkClockTimeArg0 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(NetworkClockTimeArg0, word_0, 0x0);
GUEST_OFFSET(NetworkClockTimeArg0, word_4, 0x4);

struct __attribute__((packed)) Local_007472b0_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_007472b0_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_007472b0_ea_1, word_4, 0x4);

inline constexpr u32 net_clock_b_address = 0x00953678u;
inline constexpr u32 online_facade_address = 0x00974a64u;
inline guest::global<u32, 0x00974a64> online_facade;

void network_clock_time(gptr<NetworkClockTimeArg0> arg0) {
    u32 r2_1 = *online_facade;
    gptr<Local_007472b0_ea_1> ea_1 = gptr<Local_007472b0_ea_1>(r2_1 == 0 ? net_clock_b_address : r2_1 + 0x7cu);
    u32 r2_2 = ea_1->word_4;
    arg0->word_0 = ea_1->word_0;
    arg0->word_4 = r2_2;
}

}  // namespace d_007472b0
GUEST_EXPORT(0x007472b0, d_007472b0::network_clock_time);

// f_00747438: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether the link is connected (+0x28), unless it is closing (+0x155) and `force` is clear.
namespace d_00747438 {

struct __attribute__((packed)) LinkSub {
    u8 unknown_0[0x28];  // (not used here)
    u8 byte_28;
    u8 unknown_29[0x12c];  // (not used here)
    u8 byte_155;
};
GUEST_OFFSET(LinkSub, byte_28, 0x28);
GUEST_OFFSET(LinkSub, byte_155, 0x155);


u32 LinkSub__is_connected(gptr<LinkSub> link_sub, u32 r1) {
    if (link_sub->byte_155 != 0 && r1 == 0) {
        return 0u;
    }
    u32 r0_1 = link_sub->byte_28;
    if (r0_1 != 0) {
        r0_1 = 1u;
    }
    return r0_1;
}

}  // namespace d_00747438
GUEST_EXPORT(0x00747438, d_00747438::LinkSub__is_connected);

// f_00747548: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether the object's byte 0x28 is above 1.
namespace d_00747548 {

struct __attribute__((packed)) SubStateCheck747548Arg0 {
    u8 unknown_0[0x28];  // (not used here)
    u8 byte_28;
};
GUEST_OFFSET(SubStateCheck747548Arg0, byte_28, 0x28);


u32 sub_state_check_747548(gptr<SubStateCheck747548Arg0> arg0) {
    return arg0->byte_28 > 1u;
}

}  // namespace d_00747548
GUEST_EXPORT(0x00747548, d_00747548::sub_state_check_747548);

// f_007475e0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The link state (+0x28), read under its lock.
namespace d_007475e0 {

struct __attribute__((packed)) LinkSub {
    u8 unknown_0[0x28];  // (not used here)
    u8 byte_28;
};
GUEST_OFFSET(LinkSub, byte_28, 0x28);

inline constexpr guest::Function<0x00135748, u32(u32, u32, u32, u32)> RecursiveLock__lock;
inline constexpr guest::Function<0x001357ec, u32(u32)> RecursiveLock__unlock;

u32 LinkSub__state_locked(gptr<LinkSub> link_sub) {
    u32 lock = link_sub.addr() + 0xcu;
    RecursiveLock__lock(lock, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r4_1 = s8(link_sub->byte_28);
    RecursiveLock__unlock(lock);
    return r4_1;
}

}  // namespace d_007475e0
GUEST_EXPORT_FRAMED(0x007475e0, d_007475e0::LinkSub__state_locked, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_00747608: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether two addresses match: by their ids when both have one, else by the two words.
namespace d_00747608 {

struct __attribute__((packed)) NetAddress {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(NetAddress, word_0, 0x0);
GUEST_OFFSET(NetAddress, word_4, 0x4);
GUEST_OFFSET(NetAddress, word_8, 0x8);

struct __attribute__((packed)) NetAddressEqualsArg1 {
    u32 word_0;
};
GUEST_OFFSET(NetAddressEqualsArg1, word_0, 0x0);

struct __attribute__((packed)) Local_00747608_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_00747608_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_00747608_ea_1, word_4, 0x4);


u32 NetAddress__equals(gptr<NetAddress> net_address, gptr<NetAddressEqualsArg1> arg1, u32 r2_unused, u32 r3) {
    u32 r2_1 = net_address->word_0;
    u32 zf_1 = r2_1 == 0;
    if (!zf_1) {
        r3 = arg1->word_0;
        zf_1 = r3 == 0;
    }
    if (!zf_1) {
        if (r3 == r2_1) {
            guest::cpu()->r[1] = arg1.addr();
            return 1u;
        }
        guest::cpu()->r[1] = arg1.addr();
        return 0u;
    }
    gptr<Local_00747608_ea_1> ea_1 = gptr<Local_00747608_ea_1>(arg1.addr() + 4u);
    u32 r1_1 = ea_1->word_0;
    u32 r2_2 = ea_1->word_4;
    if ((r1_1 | r2_2) == 0 || net_address->word_4 != r1_1 || net_address->word_8 != r2_2) {
        guest::cpu()->r[1] = r1_1;
        return 0u;
    }
    guest::cpu()->r[1] = r1_1;
    return 1u;
}

}  // namespace d_00747608
GUEST_EXPORT(0x00747608, d_00747608::NetAddress__equals);

// f_00747660: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether two addresses differ: by their ids when both have one, else by the two words.
namespace d_00747660 {

struct __attribute__((packed)) NetAddress {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(NetAddress, word_0, 0x0);
GUEST_OFFSET(NetAddress, word_4, 0x4);
GUEST_OFFSET(NetAddress, word_8, 0x8);

struct __attribute__((packed)) NetAddressDiffersArg1 {
    u32 word_0;
};
GUEST_OFFSET(NetAddressDiffersArg1, word_0, 0x0);

struct __attribute__((packed)) Local_00747660_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_00747660_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_00747660_ea_1, word_4, 0x4);


u32 NetAddress__differs(gptr<NetAddress> net_address, gptr<NetAddressDiffersArg1> arg1, u32 r2_unused, u32 r3) {
    u32 r2_1 = net_address->word_0;
    u32 zf_1 = r2_1 == 0;
    if (!zf_1) {
        r3 = arg1->word_0;
        zf_1 = r3 == 0;
    }
    if (!zf_1) {
        if (r3 == r2_1) {
            guest::cpu()->r[1] = arg1.addr();
            return 0u;
        }
        guest::cpu()->r[1] = arg1.addr();
        return 1u;
    }
    gptr<Local_00747660_ea_1> ea_1 = gptr<Local_00747660_ea_1>(arg1.addr() + 4u);
    u32 r1_1 = ea_1->word_0;
    u32 r2_2 = ea_1->word_4;
    if ((r1_1 | r2_2) == 0 || net_address->word_4 != r1_1 || net_address->word_8 != r2_2) {
        guest::cpu()->r[1] = r1_1;
        return 1u;
    }
    guest::cpu()->r[1] = r1_1;
    return 0u;
}

}  // namespace d_00747660
GUEST_EXPORT(0x00747660, d_00747660::NetAddress__differs);

// f_007479b4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether the bucket of the key (folded to 1024 entries) holds a live entry before its end.
namespace d_007479b4 {

struct __attribute__((packed)) BsScene {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
};
GUEST_OFFSET(BsScene, word_4, 0x4);

inline constexpr guest::Function<0x00747c24, u32(u32, u32)> TreeNode__next_live;
inline constexpr guest::Function<0x00747c70, u32(u32, u32, u32, u32)> TreeNode__end;

u32 HashTable__contains_live(u32 hash_table, gptr<BsScene> bs_scene) {
    u32 r1 = bs_scene.addr();
    u32 r0_2 = 0;
    u32 r0_6 = 0;
    u32 r6 = r1;
    u32 r0_1 = bs_scene->word_4;
    if (r0_1 >= 0x400u) {
        u32 r1_1 = r0_1 & 0x3ffu;
        r0_2 = s32(r1_1) < 0x200 ? r1_1 + 0x200u : r0_1 & 0x3ffu;
    } else {
        r0_2 = r0_1 & 0x3ffu;
    }
    u32 r1_2 = r0_2 * 5u;
    u32 r0_4 = TreeNode__end(hash_table + (r1_2 << 2), r1_2, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    u32 r5 = r0_4;
    u32 r0_5 = *gptr<u32>(r6 + 4u);
    if (r0_5 >= 0x400u) {
        r1 = r0_5 & 0x3ffu;
        r0_6 = s32(r1) < 0x200 ? r1 + 0x200u : r0_5 & 0x3ffu;
    } else {
        r0_6 = r0_5 & 0x3ffu;
    }
    hash_table = *gptr<u32>(hash_table + r0_6 * 0x14u + 8u);
    for (;;) {
        u32 zf_1 = hash_table == 0;
        u32 tree_node = hash_table;
        if (!zf_1) {
            zf_1 = tree_node == r5;
        }
        if (zf_1) {
            guest::cpu()->r[1] = r1;
            return 0u;
        }
        if (!1) {
            break;
        }
        u32 r0_7 = *gptr<u32>(hash_table);
        r6 = r0_7;
        if (*gptr<u8>(r0_7 + 0xeu) == 0) {
            break;
        }
        hash_table = TreeNode__next_live(tree_node, r1);
        r1 = guest::cpu()->r[1];
        guest::preempt();
    }
    if (r6 != 0) {
        guest::cpu()->r[1] = r1;
        return 1u;
    }
    guest::cpu()->r[1] = r1;
    return 0u;
}

}  // namespace d_007479b4
GUEST_EXPORT_FRAMED(0x007479b4, d_007479b4::HashTable__contains_live, 0x4070);  // pushes {tree_node, r5, r6, lr} first, as the original

// f_00747a90: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Bit 0 of the flag byte (+0x1102c) of the bucket of the key (folded to 1024 entries).
namespace d_00747a90 {


u32 HashTable__bucket_flag(u32 hash_table, u32 r1) {
    u32 r1_1 = r1 & 0x3ffu;
    if (!(r1 >= 0x400u)) {
        u32 r0_1 = u32(*gptr<u8>(hash_table + r1_1 + 0x1102cu)) & 1u;
        guest::cpu()->r[1] = r1_1;
        return r0_1;
    }
    if (s32(r1_1) < 0x200) {
        r1_1 += 0x200u;
    }
    u32 r0_2 = u32(*gptr<u8>(hash_table + r1_1 + 0x1102cu)) & 1u;
    guest::cpu()->r[1] = r1_1;
    return r0_2;
}

}  // namespace d_00747a90
GUEST_EXPORT(0x00747a90, d_00747a90::HashTable__bucket_flag);

// f_00747c04: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether the 16-bit values at +0xe and +0xc differ.
namespace d_00747c04 {

struct __attribute__((packed)) HalfEDiffersFromCArg0 {
    u8 unknown_0[0xc];  // (not used here)
    u16 half_c;
    u16 half_e;
};
GUEST_OFFSET(HalfEDiffersFromCArg0, half_c, 0xc);
GUEST_OFFSET(HalfEDiffersFromCArg0, half_e, 0xe);


u32 half_e_differs_from_c(gptr<HalfEDiffersFromCArg0> arg0) {
    u32 r1_1 = arg0->half_e;
    u32 r0_1 = r1_1 != arg0->half_c;
    guest::cpu()->r[1] = r1_1;
    return r0_1;
}

}  // namespace d_00747c04
GUEST_EXPORT(0x00747c04, d_00747c04::half_e_differs_from_c);

// f_00747c24: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The next live node: +8 or +0x10, else the first +0x10 up the parent chain (+4).
namespace d_00747c24 {

struct __attribute__((packed)) TreeNode {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
    u32 word_8;
    u8 unknown_c[0x4];  // (not used here)
    u32 word_10;
};
GUEST_OFFSET(TreeNode, word_4, 0x4);
GUEST_OFFSET(TreeNode, word_8, 0x8);
GUEST_OFFSET(TreeNode, word_10, 0x10);


u32 TreeNode__next_live(gptr<TreeNode> tree_node) {
    u32 r0 = tree_node.addr();
    u32 r1_2 = 0;
    u32 r1_1 = r0;
    u32 r0_1 = tree_node->word_8;
    u32 zf_1 = r0_1 == 0;
    if (zf_1) {
        r0_1 = tree_node->word_10;
        zf_1 = r0_1 == 0;
    }
    if (!zf_1) {
        guest::cpu()->r[1] = r1_1;
        return r0_1;
    }
    r0 = tree_node->word_4;
    if (r0 == 0) {
        guest::cpu()->r[1] = r1_1;
        return 0u;
    }
    do {
        r1_2 = *gptr<u32>(r0 + 0x10u);
        if (r1_2 != 0) {
            guest::cpu()->r[1] = r1_2;
            return r1_2;
        }
        r0 = *gptr<u32>(r0 + 4u);
        guest::preempt();
    } while (r0 != 0);
    guest::cpu()->r[1] = r1_2;
    return 0u;
}

}  // namespace d_00747c24
GUEST_EXPORT(0x00747c24, d_00747c24::TreeNode__next_live);

// f_00747c70: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The end node: +0x10, else the first +0x10 up the parent chain (+4).
namespace d_00747c70 {

struct __attribute__((packed)) TreeNode {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
    u8 unknown_8[0x8];  // (not used here)
    u32 word_10;
};
GUEST_OFFSET(TreeNode, word_4, 0x4);
GUEST_OFFSET(TreeNode, word_10, 0x10);


u32 TreeNode__end(gptr<TreeNode> tree_node) {
    u32 r0 = tree_node.addr();
    u32 r1_2 = 0;
    u32 r1_1 = tree_node->word_10;
    if (r1_1 != 0) {
        guest::cpu()->r[1] = r1_1;
        return r1_1;
    }
    r0 = tree_node->word_4;
    if (r0 == 0) {
        guest::cpu()->r[1] = r1_1;
        return 0u;
    }
    do {
        r1_2 = *gptr<u32>(r0 + 0x10u);
        if (r1_2 != 0) {
            guest::cpu()->r[1] = r1_2;
            return r1_2;
        }
        r0 = *gptr<u32>(r0 + 4u);
        guest::preempt();
    } while (r0 != 0);
    guest::cpu()->r[1] = r1_2;
    return 0u;
}

}  // namespace d_00747c70
GUEST_EXPORT(0x00747c70, d_00747c70::TreeNode__end);

// f_00747cb0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The character at `index` of the text (+0x10), shown as a mask character in hidden ranges (a password field).
namespace d_00747cb0 {

struct __attribute__((packed)) TextBuffer {
    u8 unknown_0[0x8];  // (not used here)
    u32 word_8;
    u8 unknown_c[0x4];  // (not used here)
    u32 word_10;
    u32 word_14;
    u8 unknown_18[0x6c];  // (not used here)
    u32 word_84;
    u8 unknown_88[0x4];  // (not used here)
    u32 word_8c;
};
GUEST_OFFSET(TextBuffer, word_8, 0x8);
GUEST_OFFSET(TextBuffer, word_10, 0x10);
GUEST_OFFSET(TextBuffer, word_14, 0x14);
GUEST_OFFSET(TextBuffer, word_84, 0x84);
GUEST_OFFSET(TextBuffer, word_8c, 0x8c);

inline guest::global<u32, 0x00ad614c> global_00ad614c;
inline guest::global<u8, 0x00ad6254> global_00ad6254;
inline constexpr guest::Function<0x00747d70, u32(u32, u32)> TextBuffer__is_visible_at;

u32 TextBuffer__char_at(gptr<TextBuffer> text_buffer, u32 r1) {
    u32 r0_1 = 0;
    u32 r5_1 = r1;
    if (text_buffer->word_8 == r5_1) {
        r0_1 = text_buffer->word_10 + (r1 << 1);
    } else {
        if (*global_00ad614c != 0) {
            u32 is_visible_2 = TextBuffer__is_visible_at(text_buffer.addr(), r1);
            r1 = guest::cpu()->r[1];
            if (is_visible_2 != 0) {
                u32 r0_3 = text_buffer->word_84;
                u32 nf_1 = r0_3 >> 0x1f;
                u32 zf_1 = r0_3 == 0;
                if (!zf_1) {
                    r0_3 = text_buffer->word_14;
                    nf_1 = r0_3 >> 0x1f;
                    zf_1 = r0_3 == 0;
                }
                if (((zf_1 || nf_1 != 0u) ? ~0u : r0_3 - 1u) != r5_1) {
                    u32 r0_4 = gptr<u16>(text_buffer->word_10)[r5_1];
                    if (r0_4 != 0xau) {
                        u32 r1_1 = text_buffer->word_8c;
                        if (s32(r1_1) > 0) {
                            r1_1 = text_buffer->word_14 - 1u;
                            if (r1_1 == r5_1) {
                                guest::cpu()->r[1] = r1_1;
                                return r0_4;
                            }
                        }
                        u32 r0_5 = *global_00ad6254 == 0 ? 0x2au : 0xff0au;
                        guest::cpu()->r[1] = r1_1;
                        return r0_5;
                    }
                }
            }
        }
        r0_1 = text_buffer->word_10 + (r5_1 << 1);
    }
    u32 r0_6 = *gptr<u16>(r0_1);
    guest::cpu()->r[1] = r1;
    return r0_6;
}

}  // namespace d_00747cb0
GUEST_EXPORT_FRAMED(0x00747cb0, d_00747cb0::TextBuffer__char_at, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_00747d70: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether `index` is outside the two hidden ranges at the end of the text (+0x24, +0x28).
namespace d_00747d70 {

struct __attribute__((packed)) TextBuffer {
    u8 unknown_0[0x14];  // (not used here)
    u32 word_14;
    u8 unknown_18[0xc];  // (not used here)
    u32 word_24;
    u32 word_28;
};
GUEST_OFFSET(TextBuffer, word_14, 0x14);
GUEST_OFFSET(TextBuffer, word_24, 0x24);
GUEST_OFFSET(TextBuffer, word_28, 0x28);


u32 TextBuffer__is_visible_at(gptr<TextBuffer> text_buffer, u32 r1) {
    u32 r3_1 = text_buffer->word_24;
    u32 r2_1 = 1u;
    if (s32(r3_1) > 0) {
        u32 r12_1 = text_buffer->word_14 - r3_1;
        if (s32(r12_1) <= s32(r1)) {
            u32 r12_2 = r12_1 + r3_1;
            if (r12_2 != r1 && s32(r12_2) >= s32(r1)) {
                r2_1 = 0u;
            }
        }
    }
    u32 r12_3 = text_buffer->word_28;
    if (s32(r12_3) <= 0) {
        return r2_1;
    }
    u32 r0_1 = text_buffer->word_14 - r3_1 - r12_3;
    if (s32(r0_1) > s32(r1)) {
        return r2_1;
    }
    if (s32(r1) < s32(r0_1 + r12_3)) {
        r2_1 = 0u;
    }
    return r2_1;
}

}  // namespace d_00747d70
GUEST_EXPORT(0x00747d70, d_00747d70::TextBuffer__is_visible_at);

// f_00748070: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether the range found for a key (0013c9b8) overlaps the given range.
namespace d_00748070 {

struct __attribute__((packed)) RangeTableOverlapsArg1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(RangeTableOverlapsArg1, word_0, 0x0);
GUEST_OFFSET(RangeTableOverlapsArg1, word_4, 0x4);

struct __attribute__((packed)) Local_00748070_r0_2 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_00748070_r0_2, word_0, 0x0);
GUEST_OFFSET(Local_00748070_r0_2, word_4, 0x4);

inline constexpr guest::Function<0x0013c9b4, u32(u32, u32)> do_nothing_0013c9b4;
inline constexpr guest::Function<0x0013c9b8, u32(u32, u32)> RangeTable__find_overlapping;

u32 RangeTable__overlaps(u32 range_table, gptr<RangeTableOverlapsArg1> arg1) {
    u32 overlapping = RangeTable__find_overlapping(range_table, arg1.addr());
    gptr<Local_00748070_r0_2> r0_2 = gptr<Local_00748070_r0_2>(range_table + (overlapping << 3) + 8u);
    u32 r1_1 = r0_2->word_4 >= arg1->word_0 ? r0_2->word_0 <= arg1->word_4 : 0u;
    if (*gptr<u8>(range_table + 4u) != 0) {
        do_nothing_0013c9b4(r0_2.addr(), r1_1);
        r1_1 = guest::cpu()->r[1];
    }
    return r1_1 != 0;
}

}  // namespace d_00748070
GUEST_EXPORT_FRAMED(0x00748070, d_00748070::RangeTable__overlaps, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_0074862c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Byte +8 (or +9 when `alternate` is clear) of the entry of kind +0xb (below 0xaa) of the table at 0x878198.
namespace d_0074862c {

struct __attribute__((packed)) KindTable878198ByteArg0 {
    u8 unknown_0[0xb];  // (not used here)
    u8 byte_b;
};
GUEST_OFFSET(KindTable878198ByteArg0, byte_b, 0xb);

struct __attribute__((packed)) Local_0074862c_r0_2 {
    u8 unknown_0[0x8];  // (not used here)
    u8 byte_8;
    u8 byte_9;
};
GUEST_OFFSET(Local_0074862c_r0_2, byte_8, 0x8);
GUEST_OFFSET(Local_0074862c_r0_2, byte_9, 0x9);


u32 kind_table_878198_byte(gptr<KindTable878198ByteArg0> arg0, u32 r1) {
    u32 r0_1 = arg0->byte_b;
    if (r0_1 >= 0xaau) {
        r0_1 = 0u;
    }
    gptr<Local_0074862c_r0_2> r0_2 = gptr<Local_0074862c_r0_2>(r0_1 * 0xcu + 0x878198u);
    return r1 == 0 ? u32(r0_2->byte_9) : u32(r0_2->byte_8);
}

}  // namespace d_0074862c
GUEST_EXPORT(0x0074862c, d_0074862c::kind_table_878198_byte);

// f_00748914: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Walks the heap's block list (under its lock when it is thread-safe).
namespace d_00748914 {

inline constexpr guest::Function<0x00538188, u32(u32, u32, u32, u32)> lock_lock_at_10;
inline constexpr guest::Function<0x00538274, u32(u32, u32)> unlock_lock_at_10;

void ExpHeap__walk_blocks(gptr<pead__ExpHeap> exp_heap, u32 r1_unused, u32 r2, u32 r3) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 r0 = exp_heap.addr();
    u32 r4 = r0;
    u32 r0_1 = r0 + 0x50u;
    u32 r5 = 0u;
    u32 r1_1 = exp_heap->flags & 1u;
    if (r1_1 != 0) {
        r1_1 = 1u;
    }
    if (r1_1 != 0) {
        r5 = r0_1;
        lock_lock_at_10(r0_1, r1_1, r2, r3);
    }
    r0 = *gptr<u32>(r4 + 0x90u);
    u32 r1 = *gptr<u32>(r4 + 0x88u);
    do {
        u32 r1_2 = r1 - r0;
        if (r1_2 == r4 + 0x84u - *gptr<u32>(r4 + 0x90u)) {
            if (r5 != 0) {
                frame.release();
                unlock_lock_at_10(r5, r1_2);
                return;
            }
            guest::cpu()->r[1] = r1_2;
            return;
        }
        r1 = *gptr<u32>(r1_2 + r0 + 4u);
        guest::preempt();
    } while (1);
}

}  // namespace d_00748914
GUEST_EXPORT(0x00748914, d_00748914::ExpHeap__walk_blocks);

// f_00748a00: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Walks the heap's free block list (under its lock when it is thread-safe).
namespace d_00748a00 {

inline constexpr guest::Function<0x00538188, u32(u32, u32, u32, u32)> lock_lock_at_10;
inline constexpr guest::Function<0x00538274, u32(u32, u32)> unlock_lock_at_10;

u32 ExpHeap__walk_free_blocks(gptr<pead__ExpHeap> exp_heap, u32 r1_unused, u32 r2, u32 r3) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 r0 = exp_heap.addr();
    u32 r4 = r0;
    u32 r0_1 = r0 + 0x50u;
    u32 r5 = 0u;
    u32 r1_1 = exp_heap->flags & 1u;
    if (r1_1 != 0) {
        r1_1 = 1u;
    }
    if (r1_1 != 0) {
        r5 = r0_1;
        lock_lock_at_10(r0_1, r1_1, r2, r3);
    }
    r0 = *gptr<u32>(r4 + 0x80u);
    u32 r1 = *gptr<u32>(r4 + 0x78u);
    do {
        u32 r1_2 = r1 - r0;
        if (r1_2 == r4 + 0x74u - *gptr<u32>(r4 + 0x80u)) {
            if (r5 != 0) {
                frame.release();
                return unlock_lock_at_10(r5, r1_2);
            }
            guest::cpu()->r[1] = r1_2;
            return r0;
        }
        r1 = *gptr<u32>(r1_2 + r0 + 4u);
        guest::preempt();
    } while (1);
}

}  // namespace d_00748a00
GUEST_EXPORT(0x00748a00, d_00748a00::ExpHeap__walk_free_blocks);

// f_00748c70: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The free block of at least `size` bytes: the first one (mode 0), the smallest (mode 1) or the largest (mode 2).
namespace d_00748c70 {


u32 ExpHeap__find_free_block(gptr<pead__ExpHeap> exp_heap, u32 r1, u32 r2) {
    u32 r0 = exp_heap.addr();
    u32 r5 = r0;
    r0 = 0u;
    u32 r3 = exp_heap->word_78;
    u32 r12 = exp_heap->word_80;
    for (;;) {
        r3 -= r12;
        if (r3 == r5 + 0x74u - *gptr<u32>(r5 + 0x80u)) {
            break;
        }
        u32 r4_1 = *gptr<u32>(r3 + 8u);
        if (r1 <= r4_1) {
            if (r2 != 0) {
                if (r0 == 0) {
                    goto L_748ce0;
                }
                if (r2 == 1u) {
                    if (*gptr<u32>(r0 + 8u) <= r4_1) {
                        goto L_748ce4;
                    }
                    goto L_748ce0;
                }
                if (r2 == 2u) {
                    if (*gptr<u32>(r0 + 8u) >= r4_1) {
                        goto L_748ce4;
                    }
                    goto L_748ce0;
                }
                goto L_748ce4;
            }
            return r3;
L_748ce0:;
            r0 = r3;
        }
L_748ce4:;
        r3 = *gptr<u32>(r3 + r12 + 4u);
        guest::preempt();
    }
    return r0;
}

}  // namespace d_00748c70
GUEST_EXPORT_FRAMED(0x00748c70, d_00748c70::ExpHeap__find_free_block, 0x70);  // pushes {r4, r5, r6} first, as the original

// f_00748dd8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Allocates from a free block of the heap.
namespace d_00748dd8 {

struct __attribute__((packed)) ExpHeap {
    u8 unknown_0[0x74];  // (not used here)
    u32 word_74;
    u8 unknown_78[0x4];  // (not used here)
    u32 word_7c;
    u32 word_80;
};
GUEST_OFFSET(ExpHeap, word_74, 0x74);
GUEST_OFFSET(ExpHeap, word_7c, 0x7c);
GUEST_OFFSET(ExpHeap, word_80, 0x80);

struct __attribute__((packed)) Local_00748dd8_r12 {
    u8 unknown_0[0x8];  // (not used here)
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Local_00748dd8_r12, word_8, 0x8);
GUEST_OFFSET(Local_00748dd8_r12, word_c, 0xc);


u32 ExpHeap__allocate_from_block(gptr<ExpHeap> exp_heap, u32 r1, u32 r2, u32 r3) {
    u32 r0 = exp_heap.addr();
    u32 r7 = 0;
    gptr<Local_00748dd8_r12> r12 = gptr<Local_00748dd8_r12>(0u);
    u32 r2_1 = 0;
    u32 r6 = r0;
    r0 = 0u;
    if (s32(exp_heap->word_7c) <= 0) {
        r12 = gptr<Local_00748dd8_r12>(0u);
    } else {
        u32 r12_1 = exp_heap->word_74;
        if (r12_1 == 0) {
            return r0;
        } else {
            r12 = gptr<Local_00748dd8_r12>(r12_1 - exp_heap->word_80);
        }
    }
    if (r12.addr() == 0) {
        return r0;
    } else {
        r7 = r2 - 1u;
    }
L_748e14:;
    u32 r4_1 = r12->word_8;
    if (r4_1 < r1) {
        goto L_748e98;
    }
    r2_1 = r12->word_c + 0x10u + r12.addr() + (r4_1 - r1);
    if (r2_1 - (r2_1 & ~r7) + r1 > r4_1) {
        goto L_748e98;
    }
    if (r3 != 0) {
        if (r0 == 0) {
            goto L_748e94;
        }
        if (r3 == 1u) {
            if (*gptr<u32>(r0 + 8u) <= r4_1) {
                goto L_748e98;
            }
            goto L_748e94;
        }
        if (r3 == 2u) {
            if (*gptr<u32>(r0 + 8u) >= r4_1) {
                goto L_748e98;
            }
            goto L_748e94;
        }
        goto L_748e98;
    }
    return r12.addr();
L_748e94:;
    r0 = r12.addr();
L_748e98:;
    u32 r4_2 = *gptr<u32>(r6 + 0x80u);
    r12 = gptr<Local_00748dd8_r12>(*gptr<u32>(r4_2 + r12.addr()));
    u32 zf_1 = (r12.addr() - (r6 + 0x74u)) == 0;
    if (!zf_1) {
        u32 res_2 = r12.addr() - r4_2;
        zf_1 = res_2 == 0;
        r12 = gptr<Local_00748dd8_r12>(res_2);
    }
    if (zf_1) {
        return r0;
    }
    guest::preempt();
    goto L_748e14;
}

}  // namespace d_00748dd8
GUEST_EXPORT_FRAMED(0x00748dd8, d_00748dd8::ExpHeap__allocate_from_block, 0xf0);  // pushes {r4, r5, r6, r7} first, as the original

// f_00749010: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Word +0x64 of the current thread's object (thread-local).
namespace d_00749010 {

inline guest::global<u32, 0x0097d41c> pead_thread_mgr_instance;
inline constexpr guest::Function<0x00138c78, u32(u32)> ThreadLocal__get;

u32 current_thread_word_64() {
    u32 r0_2 = ThreadLocal__get(*pead_thread_mgr_instance + 0x24u);
    return *gptr<u32>(r0_2 + 0x64u);
}

}  // namespace d_00749010
GUEST_EXPORT_FRAMED(0x00749010, d_00749010::current_thread_word_64, 0x4010);  // pushes {r4, lr} first, as the original

// f_00749030: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The heap that contains an address, among the resource cache's heaps (under its lock).
namespace d_00749030 {

struct __attribute__((packed)) Local_00749030_r0_1 {
    u32 word_0;
    u8 unknown_4[0x4];  // (not used here)
    u32 word_8;
};
GUEST_OFFSET(Local_00749030_r0_1, word_0, 0x0);
GUEST_OFFSET(Local_00749030_r0_1, word_8, 0x8);

inline constexpr u32 exp_heap_list_address = 0x00ae70c0u;
inline constexpr u32 heap_list_address = 0x00ae70dcu;
inline constexpr u32 heap_list_end_address = 0x00ae70e4u;
inline guest::global<u32, 0x00ae70dc> heap_list;
inline guest::global<u32, 0x00ae70e4> heap_list_end;
inline constexpr guest::Function<0x00538188, u32(u32, u32, u32, u32)> lock_lock_at_10;
inline constexpr guest::Function<0x00538274, u32(u32, u32)> unlock_lock_at_10;
inline constexpr guest::Function<0x0053adf4, u32(u32, u32)> ResourceCache__find;

u32 find_heap_containing(u32 r0_unused, u32 i_disposer) {
    u32 r0_3 = 0;
    u32 r1_1 = 0;
    u32 r0_4 = 0;
    u32 r8 = i_disposer;
    u32 r5 = exp_heap_list_address;
    lock_lock_at_10(r5, i_disposer, guest::cpu()->r[2], guest::cpu()->r[3]);
    gptr<Local_00749030_r0_1> r0_1 = gptr<Local_00749030_r0_1>(r5 - 0x1cu);
    u32 r4 = r0_1->word_8;
    u32 r6 = r4 + (r0_1->word_0 << 2);
    if (r4 != r6) {
        do {
            r0_3 = ResourceCache__find(*gptr<u32>(r4), r8);
            r1_1 = guest::cpu()->r[1];
            if (r0_3 != 0) {
                goto L_7490b0;
            }
            r4 += 4u;
            guest::preempt();
        } while (r4 != r6);
    }
    r1_1 = *heap_list;
    r4 = *heap_list_end;
    r6 = r4 + (r1_1 << 2);
    if (r4 == r6) {
        goto L_7490d0;
    }
L_749098:;
    r0_4 = *gptr<u32>(r4);
    r0_3 = ResourceCache__find(r0_4, r8);
    r1_1 = guest::cpu()->r[1];
    if (r0_3 == 0) {
        r4 += 4u;
        if (r4 != r6) {
            guest::preempt();
            goto L_749098;
        }
        goto L_7490d0;
    }
L_7490b0:;
    unlock_lock_at_10(r5, r1_1);
    return r0_3;
L_7490d0:;
    unlock_lock_at_10(r5, r1_1);
    return 0u;
}

}  // namespace d_00749030
GUEST_EXPORT_FRAMED(0x00749030, d_00749030::find_heap_containing, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_00749134: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether the state (+0x1c) is not 3, 4, 5 or 6.
namespace d_00749134 {

struct __attribute__((packed)) StateNot3To6Arg0 {
    u8 unknown_0[0x1c];  // (not used here)
    u8 byte_1c;
};
GUEST_OFFSET(StateNot3To6Arg0, byte_1c, 0x1c);


u32 state_not_3_to_6(gptr<StateNot3To6Arg0> arg0) {
    u32 r0_1 = arg0->byte_1c;
    if (r0_1 == 3u || r0_1 == 4u) {
        return 0u;
    }
    return r0_1 != 5u && r0_1 != 6u;
}

}  // namespace d_00749134
GUEST_EXPORT(0x00749134, d_00749134::state_not_3_to_6);

// f_0074a3e8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The first node of the list (+0xc0) whose byte +0xc is `key`, or 0.
namespace d_0074a3e8 {

struct __attribute__((packed)) ListObject {
    u8 unknown_0[0xc4];  // (not used here)
    u32 word_c4;
    u8 unknown_c8[0x4];  // (not used here)
    u32 word_cc;
};
GUEST_OFFSET(ListObject, word_c4, 0xc4);
GUEST_OFFSET(ListObject, word_cc, 0xcc);


u32 List__find_by_byte_c(gptr<ListObject> list_object, u32 r1) {
    u32 r0 = list_object.addr();
    u32 r12 = r0;
    r0 = list_object->word_c4;
    u32 r2 = list_object->word_cc;
    do {
        u32 r0_1 = r0 - r2;
        if (r0_1 == r12 + 0xc0u - *gptr<u32>(r12 + 0xccu)) {
            return 0u;
        }
        if (*gptr<u8>(r0_1 + 0xcu) == r1) {
            return r0_1;
        }
        r0 = *gptr<u32>(r0_1 + r2 + 4u);
        guest::preempt();
    } while (1);
}

}  // namespace d_0074a3e8
GUEST_EXPORT_FRAMED(0x0074a3e8, d_0074a3e8::List__find_by_byte_c, 0x10);  // pushes {r4} first, as the original

// f_0074b2bc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Stores a value at +0x3c of the node and of every descendant (children +0x14, siblings +0x18).
namespace d_0074b2bc {

inline constexpr guest::Function<0x0074b2bc, u32(u32, u32, u32, u32)> call_Tree__set_word_3c_recursive;

void Tree__set_word_3c_recursive(u32 tree, u32 r1) {
    do {
        *gptr<u32>(tree + 0x3cu) = r1;
        u32 r0_1 = *gptr<u32>(tree + 0x14u);
        u32 r5_1 = r1;
        u32 zf_1 = r0_1 == 0;
        if (!zf_1) {
            r0_1 = *gptr<u32>(r0_1 + 0x10u);
            zf_1 = r0_1 == 0;
        }
        if (!zf_1) {
            call_Tree__set_word_3c_recursive(r0_1, r5_1, guest::cpu()->r[2], guest::cpu()->r[3]);
            r1 = guest::cpu()->r[1];
        }
        tree = *gptr<u32>(tree + 0x18u);
        u32 zf_2 = tree == 0;
        if (!zf_2) {
            tree = *gptr<u32>(tree + 0x10u);
            zf_2 = tree == 0;
        }
        if (zf_2) {
            guest::cpu()->r[1] = r1;
            return;
        }
        r1 = r5_1;
        guest::preempt();
    } while (1);
}

}  // namespace d_0074b2bc
GUEST_EXPORT_FRAMED(0x0074b2bc, d_0074b2bc::Tree__set_word_3c_recursive, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_0074baa4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Word `index` (below 2; else the first) of the table at +0x20.
namespace d_0074baa4 {


u32 word_20_at_of_2(u32 r0, u32 r1) {
    u32 r0_1 = r0 + 0x20u;
    if (r1 < 2u) {
        r0_1 += (r1 << 2);
    }
    return *gptr<u32>(r0_1);
}

}  // namespace d_0074baa4
GUEST_EXPORT(0x0074baa4, d_0074baa4::word_20_at_of_2);

// f_0074ca5c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The top of the view at the near plane (from the near +0x94, the scale +0xa8 and the offset +0xb4).
namespace d_0074ca5c {

struct __attribute__((packed)) Camera {
    u8 unknown_0[0x94];  // (not used here)
    float float_94;
    u8 unknown_98[0x10];  // (not used here)
    float float_a8;
    u8 unknown_ac[0x8];  // (not used here)
    float float_b4;
};
GUEST_OFFSET(Camera, float_94, 0x94);
GUEST_OFFSET(Camera, float_a8, 0xa8);
GUEST_OFFSET(Camera, float_b4, 0xb4);


void Camera__frustum_top(gptr<Camera> camera) {
    float S1_1 = camera->float_94 * camera->float_a8 * 2.0f;
    float S0_1 = camera->float_b4 * S1_1 + S1_1 * 0.5f;
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
}

}  // namespace d_0074ca5c
GUEST_EXPORT(0x0074ca5c, d_0074ca5c::Camera__frustum_top);

// f_0074ca8c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The left of the view at the near plane (with the aspect +0xac and the offset +0xb0).
namespace d_0074ca8c {

struct __attribute__((packed)) Camera {
    u8 unknown_0[0x94];  // (not used here)
    float float_94;
    u8 unknown_98[0x10];  // (not used here)
    float float_a8;
    float float_ac;
    float float_b0;
};
GUEST_OFFSET(Camera, float_94, 0x94);
GUEST_OFFSET(Camera, float_a8, 0xa8);
GUEST_OFFSET(Camera, float_ac, 0xac);
GUEST_OFFSET(Camera, float_b0, 0xb0);


void Camera__frustum_left(gptr<Camera> camera) {
    float S1_1 = camera->float_94 * camera->float_a8 * 2.0f * camera->float_ac;
    float S0_1 = camera->float_b0 * S1_1 - S1_1 * 0.5f;
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
}

}  // namespace d_0074ca8c
GUEST_EXPORT(0x0074ca8c, d_0074ca8c::Camera__frustum_left);

// f_0074cac4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The right of the view at the near plane (with the aspect +0xac and the offset +0xb0).
namespace d_0074cac4 {

struct __attribute__((packed)) Camera {
    u8 unknown_0[0x94];  // (not used here)
    float float_94;
    u8 unknown_98[0x10];  // (not used here)
    float float_a8;
    float float_ac;
    float float_b0;
};
GUEST_OFFSET(Camera, float_94, 0x94);
GUEST_OFFSET(Camera, float_a8, 0xa8);
GUEST_OFFSET(Camera, float_ac, 0xac);
GUEST_OFFSET(Camera, float_b0, 0xb0);


void Camera__frustum_right(gptr<Camera> camera) {
    float S1_1 = camera->float_94 * camera->float_a8 * 2.0f * camera->float_ac;
    float S0_1 = camera->float_b0 * S1_1 + S1_1 * 0.5f;
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
}

}  // namespace d_0074cac4
GUEST_EXPORT(0x0074cac4, d_0074cac4::Camera__frustum_right);

// f_0074cafc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The bottom of the view at the near plane (from the near +0x94, the scale +0xa8 and the offset +0xb4).
namespace d_0074cafc {

struct __attribute__((packed)) Camera {
    u8 unknown_0[0x94];  // (not used here)
    float float_94;
    u8 unknown_98[0x10];  // (not used here)
    float float_a8;
    u8 unknown_ac[0x8];  // (not used here)
    float float_b4;
};
GUEST_OFFSET(Camera, float_94, 0x94);
GUEST_OFFSET(Camera, float_a8, 0xa8);
GUEST_OFFSET(Camera, float_b4, 0xb4);


void Camera__frustum_bottom(gptr<Camera> camera) {
    float S1_1 = camera->float_94 * camera->float_a8 * 2.0f;
    float S0_1 = camera->float_b4 * S1_1 - S1_1 * 0.5f;
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
}

}  // namespace d_0074cafc
GUEST_EXPORT(0x0074cafc, d_0074cafc::Camera__frustum_bottom);

// f_0074dcac: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether the owner (+0xc) has +0x88 or +0x8c set.
namespace d_0074dcac {

struct __attribute__((packed)) OwnerHas88Or8cArg0 {
    u8 unknown_0[0xc];  // (not used here)
    u32 word_c;
};
GUEST_OFFSET(OwnerHas88Or8cArg0, word_c, 0xc);

struct __attribute__((packed)) Local_0074dcac_r0_1 {
    u8 unknown_0[0x88];  // (not used here)
    u32 word_88;
    u32 word_8c;
};
GUEST_OFFSET(Local_0074dcac_r0_1, word_88, 0x88);
GUEST_OFFSET(Local_0074dcac_r0_1, word_8c, 0x8c);


u32 owner_has_88_or_8c(gptr<OwnerHas88Or8cArg0> arg0) {
    gptr<Local_0074dcac_r0_1> r0_1 = gptr<Local_0074dcac_r0_1>(arg0->word_c);
    u32 r1_1 = r0_1->word_88;
    u32 zf_1 = r1_1 == 0;
    if (zf_1) {
        r0_1 = gptr<Local_0074dcac_r0_1>(r0_1->word_8c);
        zf_1 = r0_1.addr() == 0;
    }
    if (!zf_1) {
        r0_1 = gptr<Local_0074dcac_r0_1>(1u);
    }
    guest::cpu()->r[1] = r1_1;
    return r0_1.addr();
}

}  // namespace d_0074dcac
GUEST_EXPORT(0x0074dcac, d_0074dcac::owner_has_88_or_8c);

// f_0074df14: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Walks the heap's block list (under its lock when it is thread-safe).
namespace d_0074df14 {

inline constexpr guest::Function<0x00135740, u32(u32, u32, u32, u32)> lock_member_lock;
inline constexpr guest::Function<0x00137e84, u32(u32, u32)> unlock_member_lock;

void sead__ExpHeap__walk_blocks(gptr<sead__ExpHeap> exp_heap, u32 r1_unused, u32 r2) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 r0 = exp_heap.addr();
    u32 r0_1 = r0 + 0x54u;
    u32 r5 = 0u;
    u32 r1_1 = u32(exp_heap->half_70) & 1u;
    if (r1_1 != 0) {
        r1_1 = 1u;
    }
    if (r1_1 != 0) {
        r5 = r0_1;
        lock_member_lock(r0_1, r1_1, r2, guest::cpu()->r[3]);
    }
    u32 r1 = *gptr<u32>(r0 + 0x94u);
    r2 = r0 + 0x88u - r1;
    r0 = *gptr<u32>(r0 + 0x8cu) - r1;
    if (r0 != r2) {
        do {
            r0 = *gptr<u32>(r0 + r1 + 4u) - r1;
            guest::preempt();
        } while (r0 != r2);
    }
    if (r5 != 0) {
        frame.release();
        unlock_member_lock(r5, r1);
        return;
    }
    guest::cpu()->r[1] = r1;
}

}  // namespace d_0074df14
GUEST_EXPORT(0x0074df14, d_0074df14::sead__ExpHeap__walk_blocks);

// f_0074e00c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Walks the heap's free block list (under its lock when it is thread-safe).
namespace d_0074e00c {

inline constexpr guest::Function<0x00135740, u32(u32, u32, u32, u32)> lock_member_lock;
inline constexpr guest::Function<0x00137e84, u32(u32, u32)> unlock_member_lock;

u32 sead__ExpHeap__walk_free_blocks(gptr<sead__ExpHeap> exp_heap, u32 r1_unused, u32 r2) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 r0 = exp_heap.addr();
    u32 r0_1 = r0 + 0x54u;
    u32 r5 = 0u;
    u32 r1_1 = u32(exp_heap->half_70) & 1u;
    if (r1_1 != 0) {
        r1_1 = 1u;
    }
    if (r1_1 != 0) {
        r5 = r0_1;
        lock_member_lock(r0_1, r1_1, r2, guest::cpu()->r[3]);
    }
    u32 r1 = *gptr<u32>(r0 + 0x84u);
    r2 = r0 + 0x78u - r1;
    r0 = *gptr<u32>(r0 + 0x7cu) - r1;
    if (r0 != r2) {
        do {
            r0 = *gptr<u32>(r0 + r1 + 4u) - r1;
            guest::preempt();
        } while (r0 != r2);
    }
    if (r5 != 0) {
        frame.release();
        return unlock_member_lock(r5, r1);
    }
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0074e00c
GUEST_EXPORT(0x0074e00c, d_0074e00c::sead__ExpHeap__walk_free_blocks);

// f_0074e2e8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The free block of at least `size` bytes: the first one (mode 0), the smallest (mode 1) or the largest (mode 2).
namespace d_0074e2e8 {

struct __attribute__((packed)) ExpHeap {
    u8 unknown_0[0x7c];  // (not used here)
    u32 word_7c;
    u8 unknown_80[0x4];  // (not used here)
    u32 word_84;
};
GUEST_OFFSET(ExpHeap, word_7c, 0x7c);
GUEST_OFFSET(ExpHeap, word_84, 0x84);


u32 sead__ExpHeap__find_free_block(gptr<ExpHeap> exp_heap, u32 r1, u32 r2) {
    u32 r0 = exp_heap.addr();
    u32 r4_1 = r0;
    r0 = 0u;
    u32 r12 = exp_heap->word_84;
    u32 r3 = exp_heap->word_7c - r12;
    u32 r4 = r4_1 + 0x78u - exp_heap->word_84;
    if (r3 == r4) {
        return r0;
    }
L_74e314:;
    u32 r5_1 = *gptr<u32>(r3 + 0xcu);
    if (r1 > r5_1) {
        goto L_74e370;
    }
    if (r2 != 0) {
        if (r0 == 0) {
            goto L_74e36c;
        }
        if (r2 == 1u) {
            if (*gptr<u32>(r0 + 0xcu) <= r5_1) {
                goto L_74e370;
            }
            goto L_74e36c;
        }
        if (r2 == 2u) {
            if (*gptr<u32>(r0 + 0xcu) >= r5_1) {
                goto L_74e370;
            }
            goto L_74e36c;
        }
        goto L_74e370;
    }
    return r3;
L_74e36c:;
    r0 = r3;
L_74e370:;
    r3 = *gptr<u32>(r3 + r12 + 4u) - r12;
    if (r3 == r4) {
        return r0;
    }
    guest::preempt();
    goto L_74e314;
}

}  // namespace d_0074e2e8
GUEST_EXPORT_FRAMED(0x0074e2e8, d_0074e2e8::sead__ExpHeap__find_free_block, 0x70);  // pushes {r4, r5, r6} first, as the original

// f_0074e45c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Allocates from a free block of the heap.
namespace d_0074e45c {

struct __attribute__((packed)) ExpHeap {
    u8 unknown_0[0x78];  // (not used here)
    u32 word_78;
    u8 unknown_7c[0x4];  // (not used here)
    u32 word_80;
    u32 word_84;
};
GUEST_OFFSET(ExpHeap, word_78, 0x78);
GUEST_OFFSET(ExpHeap, word_80, 0x80);
GUEST_OFFSET(ExpHeap, word_84, 0x84);

struct __attribute__((packed)) Local_0074e45c_r12 {
    u8 unknown_0[0xa];  // (not used here)
    u16 half_a;
    u32 word_c;
};
GUEST_OFFSET(Local_0074e45c_r12, half_a, 0xa);
GUEST_OFFSET(Local_0074e45c_r12, word_c, 0xc);


u32 sead__ExpHeap__allocate_from_block(gptr<ExpHeap> exp_heap, u32 r1, u32 r2, u32 r3) {
    u32 r0 = exp_heap.addr();
    u32 r7 = 0;
    gptr<Local_0074e45c_r12> r12 = gptr<Local_0074e45c_r12>(0u);
    u32 r2_1 = 0;
    u32 r6 = r0;
    r0 = 0u;
    if (s32(exp_heap->word_80) <= 0) {
        r12 = gptr<Local_0074e45c_r12>(0u);
    } else {
        u32 r12_1 = exp_heap->word_78;
        if (r12_1 == 0) {
            return r0;
        } else {
            r12 = gptr<Local_0074e45c_r12>(r12_1 - exp_heap->word_84);
        }
    }
    if (r12.addr() == 0) {
        return r0;
    } else {
        r7 = r2 - 1u;
    }
L_74e498:;
    u32 r4_1 = r12->word_c;
    if (r4_1 < r1) {
        goto L_74e51c;
    }
    r2_1 = u32(r12->half_a) + 0x10u + r12.addr() + (r4_1 - r1);
    if (r2_1 - (r2_1 & ~r7) + r1 > r4_1) {
        goto L_74e51c;
    }
    if (r3 != 0) {
        if (r0 == 0) {
            goto L_74e518;
        }
        if (r3 == 1u) {
            if (*gptr<u32>(r0 + 0xcu) <= r4_1) {
                goto L_74e51c;
            }
            goto L_74e518;
        }
        if (r3 == 2u) {
            if (*gptr<u32>(r0 + 0xcu) >= r4_1) {
                goto L_74e51c;
            }
            goto L_74e518;
        }
        goto L_74e51c;
    }
    return r12.addr();
L_74e518:;
    r0 = r12.addr();
L_74e51c:;
    u32 r4_2 = *gptr<u32>(r6 + 0x84u);
    r12 = gptr<Local_0074e45c_r12>(*gptr<u32>(r4_2 + r12.addr()));
    u32 zf_1 = (r12.addr() - (r6 + 0x78u)) == 0;
    if (!zf_1) {
        u32 res_2 = r12.addr() - r4_2;
        zf_1 = res_2 == 0;
        r12 = gptr<Local_0074e45c_r12>(res_2);
    }
    if (zf_1) {
        return r0;
    }
    guest::preempt();
    goto L_74e498;
}

}  // namespace d_0074e45c
GUEST_EXPORT_FRAMED(0x0074e45c, d_0074e45c::sead__ExpHeap__allocate_from_block, 0xf0);  // pushes {r4, r5, r6, r7} first, as the original

// f_0074e928: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The position of `node` in the circular list, or -1.
namespace d_0074e928 {

struct __attribute__((packed)) ListObject {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
};
GUEST_OFFSET(ListObject, word_4, 0x4);


u32 List__index_of(gptr<ListObject> list_object, u32 r1) {
    u32 r0 = list_object.addr();
    u32 r2 = list_object->word_4;
    u32 r3 = 0u;
    if (r2 == r0) {
        return ~0u;
    }
    do {
        if (r2 == r1) {
            return r3;
        }
        r2 = *gptr<u32>(r2 + 4u);
        r3 += 1u;
        guest::preempt();
    } while (r2 != r0);
    return ~0u;
}

}  // namespace d_0074e928
GUEST_EXPORT(0x0074e928, d_0074e928::List__index_of);

// f_0074e960: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Word +0x20 of +0x20 of the task's manager (+0x5c).
namespace d_0074e960 {


u32 TaskBase__root_word_20(gptr<sead__TaskBase> task_base) {
    return *gptr<u32>(*gptr<u32>(task_base->task_mgr + 0x20u) + 0x20u);
}

}  // namespace d_0074e960
GUEST_EXPORT(0x0074e960, d_0074e960::TaskBase__root_word_20);

// f_0074fbbc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Extracts the rotation angles (x, y, z, in 1/65536 turns) of a matrix, handling the gimbal-lock case.
namespace d_0074fbbc {

struct __attribute__((packed)) Matrix34 {
    float float_0;
    u8 unknown_4[0x4];  // (not used here)
    float float_8;
    u8 unknown_c[0x4];  // (not used here)
    float float_10;
    float float_14;
    float float_18;
    u8 unknown_1c[0x4];  // (not used here)
    float float_20;
    u8 unknown_24[0x4];  // (not used here)
    float float_28;
};
GUEST_OFFSET(Matrix34, float_0, 0x0);
GUEST_OFFSET(Matrix34, float_8, 0x8);
GUEST_OFFSET(Matrix34, float_10, 0x10);
GUEST_OFFSET(Matrix34, float_14, 0x14);
GUEST_OFFSET(Matrix34, float_18, 0x18);
GUEST_OFFSET(Matrix34, float_20, 0x20);
GUEST_OFFSET(Matrix34, float_28, 0x28);

struct __attribute__((packed)) Matrix34ToEulerAnglesArg1 {
    u16 half_0;
    u16 half_2;
    u16 half_4;
};
GUEST_OFFSET(Matrix34ToEulerAnglesArg1, half_0, 0x0);
GUEST_OFFSET(Matrix34ToEulerAnglesArg1, half_2, 0x2);
GUEST_OFFSET(Matrix34ToEulerAnglesArg1, half_4, 0x4);

inline constexpr guest::Function<0x00565cc0, u32(u32, u32)> atan2_angle;

u32 Matrix34__to_euler_angles(gptr<Matrix34> matrix34, gptr<Matrix34ToEulerAnglesArg1> arg1) {
    float S0_1 = matrix34->float_8;
    float S1_1 = matrix34->float_28;
    float S1_2 = sqrtf(S0_1 * S0_1 + S1_1 * S1_1);
    float S0_2 = -matrix34->float_18;
    guest::cpu()->s[0] = S0_2;
    guest::cpu()->s[1] = S1_2;
    u32 r0_1 = atan2_angle(matrix34.addr(), arg1.addr());
    arg1->half_0 = u16(r0_1);
    if (r0_1 != 0x4000u && r0_1 + 0x4000u != 0) {
        u32 r6_1 = arg1.addr() + 2u;
        float S1_3 = matrix34->float_28;
        float S0_3 = matrix34->float_8;
        guest::cpu()->s[0] = S0_3;
        guest::cpu()->s[1] = S1_3;
        u32 r0_2 = atan2_angle(r0_1, guest::cpu()->r[1]);
        u32 r4_1 = matrix34.addr() + 0x10u;
        arg1->half_2 = u16(r0_2);
        float S0_4 = matrix34->float_10;
        float S1_4 = matrix34->float_14;
        guest::cpu()->s[0] = S0_4;
        guest::cpu()->s[1] = S1_4;
        u32 r0_3 = atan2_angle(r0_2, guest::cpu()->r[1]);
        arg1->half_4 = u16(r0_3);
        return r0_3;
    }
    arg1->half_4 = 0;
    float S1_6 = matrix34->float_0;
    float S0_6 = -matrix34->float_20;
    guest::cpu()->s[0] = S0_6;
    guest::cpu()->s[1] = S1_6;
    u32 r0_4 = atan2_angle(r0_1, 0u);
    arg1->half_2 = u16(r0_4);
    return r0_4;
}

}  // namespace d_0074fbbc
GUEST_EXPORT_FRAMED(0x0074fbbc, d_0074fbbc::Matrix34__to_euler_angles, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0074fc40: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Converts a point from the pane's local space (relative to its rectangle) through its matrix (+0x74).
namespace d_0074fc40 {

struct __attribute__((packed)) PaneLocalToWorldPointArg1 {
    float float_0;
    float float_4;
};
GUEST_OFFSET(PaneLocalToWorldPointArg1, float_0, 0x0);
GUEST_OFFSET(PaneLocalToWorldPointArg1, float_4, 0x4);

struct __attribute__((packed)) PaneLocalToWorldPointArg2 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(PaneLocalToWorldPointArg2, word_0, 0x0);
GUEST_OFFSET(PaneLocalToWorldPointArg2, word_4, 0x4);

struct __attribute__((packed)) Local_0074fc40_r0_2 {
    float float_0;
    float float_4;
};
GUEST_OFFSET(Local_0074fc40_r0_2, float_0, 0x0);
GUEST_OFFSET(Local_0074fc40_r0_2, float_4, 0x4);

inline constexpr guest::Function<0x00148710, u32(u32, u32, u32)> mtx34_mult_vec3;
inline constexpr guest::Function<0x0073c668, u32(u32, u32)> Rect__from_center_size;

struct __attribute__((packed)) PaneLocalToWorldPointFrame {
    u32 word_0;
    u32 word_4;
    float float_8;
    u8 unknown_c[0x8];  // (not read or written by name)
    float float_14;
    float float_18;
    float float_1c;
};
GUEST_OFFSET(PaneLocalToWorldPointFrame, word_0, 0x0);
GUEST_OFFSET(PaneLocalToWorldPointFrame, word_4, 0x4);
GUEST_OFFSET(PaneLocalToWorldPointFrame, float_8, 0x8);
GUEST_OFFSET(PaneLocalToWorldPointFrame, float_14, 0x14);
GUEST_OFFSET(PaneLocalToWorldPointFrame, float_18, 0x18);
GUEST_OFFSET(PaneLocalToWorldPointFrame, float_1c, 0x1c);
GUEST_SIZE(PaneLocalToWorldPointFrame, 0x20);

u32 Pane__local_to_world_point(u32 pane, gptr<PaneLocalToWorldPointArg1> arg1, gptr<PaneLocalToWorldPointArg2> arg2) {
    guest::StackFrameOf<PaneLocalToWorldPointFrame> frame;  // the original's stack frame
    Rect__from_center_size(frame.at(0x10).addr(), pane + 0x10u);
    gptr<Local_0074fc40_r0_2> r0_2 = gptr<Local_0074fc40_r0_2>(frame.at(0x10).addr());
    float S1_1 = 0.5f;
    u32 r2_1 = frame.at(0).addr();
    float S2_1 = r0_2->float_0;
    float S3_1 = r0_2->float_4;
    float S0_1 = (S2_1 + frame->float_18) * S1_1;
    float S1_2 = (S3_1 + frame->float_1c) * S1_1;
    float S0_2 = arg1->float_0 - S0_1 + S2_1;
    arg2->word_0 = std::bit_cast<u32>(S0_2);
    float S1_3 = frame->float_14 - (arg1->float_4 - S1_2);
    float S2_2 = 0.0f;
    arg2->word_4 = std::bit_cast<u32>(S1_3);
    frame->word_0 = std::bit_cast<u32>(S0_2);
    frame->word_4 = std::bit_cast<u32>(S1_3);
    frame->float_8 = S2_2;
    guest::cpu()->s[0] = S0_2;
    guest::cpu()->s[1] = S1_3;
    mtx34_mult_vec3(r2_1, pane + 0x74u, r2_1);
    u32 r0_3 = frame->word_0;
    u32 r1_3 = frame->word_4;
    arg2->word_0 = r0_3;
    arg2->word_4 = r1_3;
    guest::cpu()->r[1] = r1_3;
    return r0_3;
}

}  // namespace d_0074fc40
GUEST_EXPORT_FRAMED(0x0074fc40, d_0074fc40::Pane__local_to_world_point, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0074fcd8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The frame of the animation at a time (looping or clamped).
namespace d_0074fcd8 {

struct __attribute__((packed)) Animation {
    u8 unknown_0[0x8];  // (not used here)
    float float_8;
    float float_c;
    u8 unknown_10[0x4];  // (not used here)
    u8 byte_14;
};
GUEST_OFFSET(Animation, float_8, 0x8);
GUEST_OFFSET(Animation, float_c, 0xc);
GUEST_OFFSET(Animation, byte_14, 0x14);


u32 Animation__frame_at(gptr<Animation> animation, float S0) {
    u32 fpsr = guest::cpu()->fpscr;
    u32 r1_1 = animation.addr() + 8u;
    float S1_1 = animation->float_8;
    float S2_1 = animation->float_c;
    u32 fpsr_1 = fpsr & 0xfffffffu | vfp_cmpf(S2_1, S1_1);
    if (S2_1 == S1_1) {
        if (!u32(S1_1 == S0)) {
            guest::cpu()->r[1] = r1_1;
            guest::cpu()->s[1] = S1_1;
            return 0u;
        }
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->s[1] = S1_1;
        return 1u;
    }
    if ((u32(animation->byte_14) & 2u) != 0) {
        if (S2_1 > S1_1) {
            if (!(S2_1 > S0)) {
                guest::cpu()->r[1] = r1_1;
                guest::cpu()->s[1] = S1_1;
                return 0u;
            }
            if (!(S1_1 <= S0)) {
                guest::cpu()->r[1] = r1_1;
                guest::cpu()->s[1] = S1_1;
                return 0u;
            }
            guest::cpu()->r[1] = r1_1;
            guest::cpu()->s[1] = S1_1;
            return 1u;
        }
        if (S1_1 <= S0) {
            guest::cpu()->r[1] = r1_1;
            guest::cpu()->s[1] = S1_1;
            return 1u;
        }
        if (!(S2_1 > S0)) {
            guest::cpu()->r[1] = r1_1;
            guest::cpu()->s[1] = S1_1;
            return 0u;
        }
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->s[1] = S1_1;
        return 1u;
    }
    u32 fpsr_7 = fpsr_1 & 0xfffffffu | vfp_cmpf(S2_1, S1_1);
    if (S2_1 < S1_1) {
        if (!(S2_1 < S0)) {
            guest::cpu()->r[1] = r1_1;
            guest::cpu()->s[1] = S1_1;
            return 0u;
        }
        if (!(S1_1 >= S0)) {
            guest::cpu()->r[1] = r1_1;
            guest::cpu()->s[1] = S1_1;
            return 0u;
        }
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->s[1] = S1_1;
        return 1u;
    }
    if (S1_1 >= S0) {
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->s[1] = S1_1;
        return 1u;
    }
    if (((fpsr_7 & 0xfffffffu | vfp_cmpf(S1_1, S0)) & 0xfffffffu | vfp_cmpf(S2_1, S0)) >> 0x1d & 1) {
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->s[1] = S1_1;
        return 0u;
    }
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->s[1] = S1_1;
    return 1u;
}

}  // namespace d_0074fcd8
GUEST_EXPORT(0x0074fcd8, d_0074fcd8::Animation__frame_at);

// f_0074fd9c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The last frame of the animation (+4, less 1 when looping), or 0 when it has none.
namespace d_0074fd9c {

struct __attribute__((packed)) Animation {
    u8 unknown_0[0x4];  // (not used here)
    float float_4;
    u8 unknown_8[0xc];  // (not used here)
    u8 byte_14;
};
GUEST_OFFSET(Animation, float_4, 0x4);
GUEST_OFFSET(Animation, byte_14, 0x14);


void Animation__last_frame(gptr<Animation> animation, float S0_unused, float S1) {
    u32 r1_1 = animation->byte_14;
    if ((r1_1 & 2u) == 0) {
        float S0_1 = 0.0f;
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->s[0] = S0_1;
        return;
    }
    float S0_2 = animation->float_4;
    if ((r1_1 & 1u) != 0) {
        S1 = 1.0f;
        S0_2 = S0_2 - S1;
    }
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->s[0] = S0_2;
    guest::cpu()->s[1] = S1;
}

}  // namespace d_0074fd9c
GUEST_EXPORT(0x0074fd9c, d_0074fd9c::Animation__last_frame);
