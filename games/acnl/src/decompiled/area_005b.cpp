// Functions decompiled by tools/decomp (docs/decomp.md), each proved equal to the recompiled original (prove-cpp). The
// names come from games/acnl/names (tools/decomp/names.py); the others are generated (d_<address>::f_<address>,
// Object_<address>_<argument>, word_<offset>) and still to be chosen. Hexadecimal constants are the original's
// (addresses, offsets, sizes and ids as the game has them).
#include "guest/guest.hpp"
#include "graphics/hemisphere_light.hpp"
#include "recovered/structs.hpp"

#include <bit>

using guest::gptr;

// f_005b0120: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Clears slot `index` (+0x30 table) and its bit in bits 9-12 of +0x28.
namespace d_005b0120 {

struct __attribute__((packed)) PhotoRecord {
    u8 unknown_0[0x28];  // (not used here)
    u32 word_28;
};
GUEST_OFFSET(PhotoRecord, word_28, 0x28);


void PhotoRecord__clear_slot(gptr<PhotoRecord> photo_record, u32 r1) {
    u32 r2_1 = photo_record->word_28;
    u32 r1_1 = photo_record.addr() + (r1 << 2);
    photo_record->word_28 = r2_1 & ~0x1e00u | 0x1e00u & ((r2_1 & 0x1e00u) >> 9 & ~lsl_r(1u, r1 & 0xff)) << 9;
    *gptr<u32>(r1_1 + 0x30u) = 0;
    guest::cpu()->r[1] = r1_1;
}

}  // namespace d_005b0120
GUEST_EXPORT_FRAMED(0x005b0120, d_005b0120::PhotoRecord__clear_slot, 0x10);  // pushes {r4} first, as the original

// f_005b0164: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Writes the photo's file name (the prefix and the number + 1, four digits) into the path's name field (8 characters).
namespace d_005b0164 {

struct __attribute__((packed)) Number {
    u8 unknown_0[0x2];  // (not used here)
    u16 half_2;
};
GUEST_OFFSET(Number, half_2, 0x2);

inline constexpr u32 photo_file_name_address = 0x00981694u;
inline guest::global<u32, 0x00981694> photo_file_name;
inline constexpr guest::Function<0x00100ef9, u32(u32, u32, u32, u32)> sprintf;
inline constexpr guest::Function<0x005b01c0, u32(u32, u32, u32)> copy_name_padded;

void set_photo_file_name(u32 path, gptr<Number> number) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    sprintf(frame.at(0).addr(), 0x5b01a8u, *photo_file_name, u32(number->half_2) + 1u);
    copy_name_padded(path + 4u, 8u, frame.at(0).addr());
}

}  // namespace d_005b0164
GUEST_EXPORT_FRAMED(0x005b0164, d_005b0164::set_photo_file_name, 0x4010);  // pushes {r4, lr} first, as the original

// f_005b01c0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Copies up to `size` characters of a name into a field, padding the rest.
namespace d_005b01c0 {

inline constexpr guest::Function<0x002fa9d0, u32(u32, u32, u32, u32)> string_length;

u32 copy_name_padded(u32 r0, u32 i, u32 r2, u32 r3) {
    u32 nf_1 = 0;
    u32 zf_1 = 0;
    u32 vf_1 = 0;
    u32 r5 = r0;
    u32 r6 = i;
    u32 r4 = r2;
    string_length(r2, i, r2, r3);
    i = guest::cpu()->r[1];
    if (s32(r6) <= 0) {
        r0 = 0u;
    } else {
        r0 = r6 & 1u;
        i = 0u;
        if (s32(r0) > 0) {
            do {
                u32 r2_1 = *gptr<s8>(r4 + i);
                if (r2_1 - 0x61u <= 0x19u) {
                    r2_1 -= 0x20u;
                }
                u32 r2_2 = sxtb(r2_1);
                *gptr<u8>(r5 + i) = u8(r2_2);
                if (r2_2 == 0) {
                    guest::cpu()->r[1] = i;
                    return r0;
                }
                i += 1u;
                guest::preempt();
            } while (s32(r0) > s32(i));
        }
    }
    if (s32(r0) < s32(r6)) {
        do {
            u32 r1_1 = *gptr<s8>(r4 + r0);
            if (r1_1 - 0x61u <= 0x19u) {
                r1_1 -= 0x20u;
            }
            i = sxtb(r1_1);
            *gptr<u8>(r5 + r0) = u8(i);
            if (i == 0) {
                break;
            }
            u32 r1_2 = *gptr<s8>(r4 + r0 + 1u);
            if (r1_2 - 0x61u <= 0x19u) {
                r1_2 -= 0x20u;
            }
            u32 r2_3 = r5 + r0;
            i = sxtb(r1_2);
            nf_1 = i >> 0x1f;
            zf_1 = i == 0;
            vf_1 = (i & (i ^ i)) >> 0x1f;
            if (!zf_1) {
                r0 += 2u;
                u32 res_1 = r6 - r0;
                nf_1 = res_1 >> 0x1f;
                zf_1 = res_1 == 0;
                vf_1 = ((r6 ^ r0) & (r6 ^ res_1)) >> 0x1f;
            }
            *gptr<u8>(r2_3 + 1u) = u8(i);
            guest::preempt();
        } while (!zf_1 && nf_1 == vf_1);
    }
    guest::cpu()->r[1] = i;
    return r0;
}

}  // namespace d_005b01c0
GUEST_EXPORT_FRAMED(0x005b01c0, d_005b01c0::copy_name_padded, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_005b027c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Copies an 8-character wide folder name into the record (+4).
namespace d_005b027c {

inline constexpr guest::Function<0x005b028c, u32(u32, u32, u32, u32)> String16__copy_padded;

void PhotoRecord__set_folder_name(u32 photo_record, u32 r1) {
    String16__copy_padded(photo_record + 4u, 8u, r1, guest::cpu()->r[3]);
}

}  // namespace d_005b027c
GUEST_EXPORT(0x005b027c, d_005b027c::PhotoRecord__set_folder_name);

// f_005b034c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The index (0-3) of the wide file extension `text` (a leading '.' ignored) in the table of known extensions; 0 when
// unknown.
namespace d_005b034c {

inline constexpr u32 photo_extensions_address = 0x00981698u;
inline constexpr guest::Function<0x0010184d, u32(u32, u32, u32, u32)> compare_wide_strings;

u32 extension_index_2(u32 r0) {
    u32 text = r0;
    u32 i = 0u;
    u32 r7 = photo_extensions_address;
    do {
        u32 r5_1 = i & 0xffu;
        u32 r1_1 = gptr<u32>(r7)[r5_1];
        if (*gptr<u16>(r1_1) == 0x2eu) {
            r1_1 += 2u;
        }
        if (compare_wide_strings(text, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]) == 0) {
            return r5_1;
        }
        i += 1u;
        guest::preempt();
    } while (s32(i) < 4);
    return 0u;
}

}  // namespace d_005b034c
GUEST_EXPORT_FRAMED(0x005b034c, d_005b034c::extension_index_2, 0x41f0);  // pushes {i, r5, text, r7, r8, lr} first, as the original

// f_005b03fc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Writes `value` as three decimal digits into bytes 0xc-0xe.
namespace d_005b03fc {

struct __attribute__((packed)) Path {
    u8 unknown_0[0xc];  // (not used here)
    u8 byte_c;
    u8 byte_d;
    u8 byte_e;
};
GUEST_OFFSET(Path, byte_c, 0xc);
GUEST_OFFSET(Path, byte_d, 0xd);
GUEST_OFFSET(Path, byte_e, 0xe);

inline constexpr guest::Function<0x00100ef9, u32(u32, u32, u32, u32)> sprintf;

struct __attribute__((packed)) SetThreeDigitNumberFrame {
    u8 unknown_0[0x1];  // (not read or written by name)
    u8 byte_1;
    u8 byte_2;
    u8 unknown_3[0x1];  // (not read or written by name)
};
GUEST_OFFSET(SetThreeDigitNumberFrame, byte_1, 0x1);
GUEST_OFFSET(SetThreeDigitNumberFrame, byte_2, 0x2);
GUEST_SIZE(SetThreeDigitNumberFrame, 0x4);

u32 set_three_digit_number(gptr<Path> path, u32 value, u32 r2_unused, u32 r3) {
    guest::StackFrameOf<SetThreeDigitNumberFrame> frame;  // the original's stack frame
    *frame.at<u32>(0) = r3;
    sprintf(frame.at(0).addr(), 0x5b0430u, value, r3);
    path->byte_c = *frame.at<u8>(0);
    path->byte_d = frame->byte_1;
    u32 r0_2 = frame->byte_2;
    path->byte_e = u8(r0_2);
    return r0_2;
}

}  // namespace d_005b03fc
GUEST_EXPORT_FRAMED(0x005b03fc, d_005b03fc::set_three_digit_number, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_005b0438: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Stores a 5-bit value in bits 0-4 of +0x2c.
namespace d_005b0438 {

struct __attribute__((packed)) PhotoRecord {
    u8 unknown_0[0x2c];  // (not used here)
    u32 word_2c;
};
GUEST_OFFSET(PhotoRecord, word_2c, 0x2c);


void PhotoRecord__set_bits_0_to_4_of_2c(gptr<PhotoRecord> photo_record, u32 r1) {
    u32 r1_1 = r1 & 0x1fu | photo_record->word_2c & ~0x1fu;
    photo_record->word_2c = r1_1;
    guest::cpu()->r[1] = r1_1;
}

}  // namespace d_005b0438
GUEST_EXPORT(0x005b0438, d_005b0438::PhotoRecord__set_bits_0_to_4_of_2c);

// f_005b0468: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Copies an 8-character wide file name into the record (+0xc).
namespace d_005b0468 {

inline constexpr guest::Function<0x005b028c, u32(u32, u32, u32, u32)> String16__copy_padded;

void PhotoRecord__set_file_name(u32 photo_record, u32 r1) {
    String16__copy_padded(photo_record + 0xcu, 8u, r1, guest::cpu()->r[3]);
}

}  // namespace d_005b0468
GUEST_EXPORT(0x005b0468, d_005b0468::PhotoRecord__set_file_name);

// f_005b0478: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Writes the photo folder's name (the folder number + 100, three digits, and one of two suffixes) into the path's
// folder field (8 characters).
namespace d_005b0478 {

struct __attribute__((packed)) Number {
    u16 half_0;
};
GUEST_OFFSET(Number, half_0, 0x0);

inline constexpr u32 global_00981684_address = 0x00981684u;
inline constexpr u32 global_0098168c_address = 0x0098168cu;
inline constexpr guest::Function<0x00100ef9, u32(u32, u32, u32, u32)> sprintf;
inline constexpr guest::Function<0x005b01c0, u32(u32, u32, u32)> copy_name_padded;

u32 set_photo_folder_name(u32 path, gptr<Number> number, u32 kind) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 r3_1 = *gptr<u32>(kind == 0 ? global_00981684_address : global_0098168c_address);
    sprintf(frame.at(0).addr(), 0x5b04c8u, u32(number->half_0) + 0x64u, r3_1);
    return copy_name_padded(path + 0xcu, 8u, frame.at(0).addr());
}

}  // namespace d_005b0478
GUEST_EXPORT_FRAMED(0x005b0478, d_005b0478::set_photo_folder_name, 0x4010);  // pushes {r4, lr} first, as the original

// f_005b04d0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Stores a value in bits 1-8 of +0x28.
namespace d_005b04d0 {

struct __attribute__((packed)) PhotoRecord {
    u8 unknown_0[0x28];  // (not used here)
    u32 word_28;
};
GUEST_OFFSET(PhotoRecord, word_28, 0x28);


void PhotoRecord__set_bits_1_to_8_of_28(gptr<PhotoRecord> photo_record, u32 r1) {
    u32 r1_1 = photo_record->word_28 & ~0x100u & ~0xfeu | r1 << 1;
    photo_record->word_28 = r1_1;
    guest::cpu()->r[1] = r1_1;
}

}  // namespace d_005b04d0
GUEST_EXPORT(0x005b04d0, d_005b04d0::PhotoRecord__set_bits_1_to_8_of_28);

// f_005b04e8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Stores a 4-bit value in bits 21-24 of +0x2c.
namespace d_005b04e8 {

struct __attribute__((packed)) PhotoRecord {
    u8 unknown_0[0x2c];  // (not used here)
    u32 word_2c;
};
GUEST_OFFSET(PhotoRecord, word_2c, 0x2c);


void PhotoRecord__set_bits_21_to_24_of_2c(gptr<PhotoRecord> photo_record, u32 r1) {
    photo_record->word_2c = 0x1e00000u & r1 << 0x15 | photo_record->word_2c & ~0x1e00000u;
}

}  // namespace d_005b04e8
GUEST_EXPORT(0x005b04e8, d_005b04e8::PhotoRecord__set_bits_21_to_24_of_2c);

// f_005b0504: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Stores a value in bits 5-20 of +0x2c.
namespace d_005b0504 {

struct __attribute__((packed)) PhotoRecord {
    u8 unknown_0[0x2c];  // (not used here)
    u32 word_2c;
};
GUEST_OFFSET(PhotoRecord, word_2c, 0x2c);


void PhotoRecord__set_bits_5_to_20_of_2c(gptr<PhotoRecord> photo_record, u32 r1) {
    u32 r1_1 = photo_record->word_2c & ~0x1fffe0u | r1 << 5;
    photo_record->word_2c = r1_1;
    guest::cpu()->r[1] = r1_1;
}

}  // namespace d_005b0504
GUEST_EXPORT(0x005b0504, d_005b0504::PhotoRecord__set_bits_5_to_20_of_2c);

// f_005b0588: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Writes known extension `index` (without its '.') into the path's extension field (4 characters).
namespace d_005b0588 {

inline constexpr u32 photo_extensions_address = 0x00981698u;
inline constexpr guest::Function<0x005b028c, u32(u32, u32, u32, u32)> String16__copy_padded;

u32 set_extension_by_index(u32 r0_unused, u32 index) {
    u32 r2_1 = gptr<u32>(photo_extensions_address)[index];
    if (*gptr<u16>(r2_1) == 0x2eu) {
        r2_1 += 2u;
    }
    return String16__copy_padded(guest::cpu()->r[0], 4u, r2_1, guest::cpu()->r[3]);
}

}  // namespace d_005b0588
GUEST_EXPORT(0x005b0588, d_005b0588::set_extension_by_index);

// f_005b05a8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Copies a 4-character extension name into the record.
namespace d_005b05a8 {

inline constexpr guest::Function<0x005b01c0, u32(u32, u32, u32, u32)> copy_name_padded;

void PhotoRecord__set_extension_name(u32 r0_unused, u32 r1) {
    copy_name_padded(guest::cpu()->r[0], 4u, r1, guest::cpu()->r[3]);
}

}  // namespace d_005b05a8
GUEST_EXPORT(0x005b05a8, d_005b05a8::PhotoRecord__set_extension_name);

// f_005b05b4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Copies a 4-character wide extension into the record.
namespace d_005b05b4 {

inline constexpr guest::Function<0x005b028c, u32(u32, u32, u32, u32)> String16__copy_padded;

void PhotoRecord__set_extension_wide(u32 r0_unused, u32 r1) {
    String16__copy_padded(guest::cpu()->r[0], 4u, r1, guest::cpu()->r[3]);
}

}  // namespace d_005b05b4
GUEST_EXPORT(0x005b05b4, d_005b05b4::PhotoRecord__set_extension_wide);

// f_005b05c0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Stores slot `index` (+0x30 table) and sets its bit in bits 9-12 of +0x28.
namespace d_005b05c0 {

struct __attribute__((packed)) PhotoRecord {
    u8 unknown_0[0x28];  // (not used here)
    u32 word_28;
};
GUEST_OFFSET(PhotoRecord, word_28, 0x28);


void PhotoRecord__set_slot(gptr<PhotoRecord> photo_record, u32 r1, u32 r2) {
    u32 r3_1 = photo_record->word_28;
    photo_record->word_28 = r3_1 & ~0x1e00u | 0x1e00u & (((r3_1 & 0x1e00u) >> 9 | lsl_r(1u, r1 & 0xff)) & 0xffu) << 9;
    *gptr<u32>(photo_record.addr() + (r1 << 2) + 0x30u) = r2;
}

}  // namespace d_005b05c0
GUEST_EXPORT_FRAMED(0x005b05c0, d_005b05c0::PhotoRecord__set_slot, 0x10);  // pushes {r4} first, as the original

// f_005b0628: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether the value is at most 0x270e.
namespace d_005b0628 {


u32 at_most_270e(u32 r0) {
    guest::cpu()->r[1] = 0x270eu;
    return s32(r0) <= s32(0x270eu);
}

}  // namespace d_005b0628
GUEST_EXPORT(0x005b0628, d_005b0628::at_most_270e);

// f_005b0654: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether a photo folder number is below 900.
namespace d_005b0654 {


u32 photo_folder_number_valid(u32 number) {
    return s32(number) < 0x384;
}

}  // namespace d_005b0654
GUEST_EXPORT(0x005b0654, d_005b0654::photo_folder_number_valid);

// f_005b0664: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The next photo number: the file number counts to 99, then the folder number advances (wrapping below 900).
namespace d_005b0664 {

struct __attribute__((packed)) PhotoNumber {
    u16 half_0;
    u16 half_2;
};
GUEST_OFFSET(PhotoNumber, half_0, 0x0);
GUEST_OFFSET(PhotoNumber, half_2, 0x2);


void PhotoNumber__next(gptr<PhotoNumber> number) {
    u32 r1_1 = uxth(u32(number->half_2) + 1u);
    number->half_2 = u16(r1_1);
    if (r1_1 <= 0x63u) {
        return;
    }
    u32 r2_1 = number->half_0;
    number->half_2 = 0;
    u32 r2_2 = uxth(r2_1 + 1u);
    number->half_0 = u16(r2_2);
    if (r2_2 >= 0x384u) {
        number->half_0 = 0;
    }
}

}  // namespace d_005b0664
GUEST_EXPORT(0x005b0664, d_005b0664::PhotoNumber__next);

// f_005b06a0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Starts the next photo folder (wrapping below 900) at file 0.
namespace d_005b06a0 {

struct __attribute__((packed)) PhotoNumber {
    u16 half_0;
    u16 half_2;
};
GUEST_OFFSET(PhotoNumber, half_0, 0x0);
GUEST_OFFSET(PhotoNumber, half_2, 0x2);


void PhotoNumber__next_folder(gptr<PhotoNumber> number) {
    u32 r2_1 = number->half_0;
    number->half_2 = 0;
    u32 r2_2 = uxth(r2_1 + 1u);
    number->half_0 = u16(r2_2);
    if (r2_2 >= 0x384u) {
        number->half_0 = 0;
    }
}

}  // namespace d_005b06a0
GUEST_EXPORT(0x005b06a0, d_005b06a0::PhotoNumber__next_folder);

// f_005b0a14: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Stores the reader's three words and its flag (+0x1c to +0x28).
namespace d_005b0a14 {

struct __attribute__((packed)) PictureReader {
    u8 unknown_0[0x1c];  // (not used here)
    u32 word_1c;
    u32 word_20;
    u32 word_24;
    u8 byte_28;
};
GUEST_OFFSET(PictureReader, word_1c, 0x1c);
GUEST_OFFSET(PictureReader, word_20, 0x20);
GUEST_OFFSET(PictureReader, word_24, 0x24);
GUEST_OFFSET(PictureReader, byte_28, 0x28);


void PictureReader__set_params(gptr<PictureReader> picture_reader, u32 r1, u32 r2, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    u32 r12_1 = *gptr<u32>(r13);
    picture_reader->word_1c = r1;
    picture_reader->word_20 = r2;
    picture_reader->word_24 = r3;
    picture_reader->byte_28 = u8(r12_1);
}

}  // namespace d_005b0a14
GUEST_EXPORT(0x005b0a14, d_005b0a14::PictureReader__set_params);

// f_005b0c94: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Reads the thumbnail (or another segment) of the picture's EXIF data into a buffer when it fits; gives its size; true
// when it worked.
namespace d_005b0c94 {

struct __attribute__((packed)) ExifReader {
    u8 unknown_0[0x1c];  // (not used here)
    u32 word_1c;
    u32 word_20;
};
GUEST_OFFSET(ExifReader, word_1c, 0x1c);
GUEST_OFFSET(ExifReader, word_20, 0x20);

struct __attribute__((packed)) Local_005b0c94_ea_5 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_005b0c94_ea_5, word_0, 0x0);
GUEST_OFFSET(Local_005b0c94_ea_5, word_4, 0x4);

inline constexpr guest::Function<0x002f8574, u32(u32, u32, u32)> copy_bytes_at_any_alignment;
inline constexpr guest::Function<0x0046f8e8, u32(u32, u32, u32)> PiaPacket__read_header;
inline constexpr guest::Function<0x0046f9f8, u32(u32, u32, u32, u32)> PiaStationList__find;
inline constexpr guest::Function<0x0046fe08, u32(u32, u32, u32, u32)> PiaStationList__update;

struct __attribute__((packed)) ExifReaderReadThumbnailFrame {
    u32 word_0;
    u32 word_4;
    u8 unknown_8[0x4];  // (not read or written by name)
    u32 word_c;
    u8 unknown_10[0x22];  // (not read or written by name)
    u8 byte_32;
    u8 unknown_33[0x5];  // (not read or written by name)
    u32 word_38;
    u8 unknown_3c[0x14];  // (not read or written by name)
    u32 word_50;
    u32 word_54;
    u8 unknown_58[0x10];  // (not read or written by name)
};
GUEST_OFFSET(ExifReaderReadThumbnailFrame, word_0, 0x0);
GUEST_OFFSET(ExifReaderReadThumbnailFrame, word_4, 0x4);
GUEST_OFFSET(ExifReaderReadThumbnailFrame, word_c, 0xc);
GUEST_OFFSET(ExifReaderReadThumbnailFrame, byte_32, 0x32);
GUEST_OFFSET(ExifReaderReadThumbnailFrame, word_38, 0x38);
GUEST_OFFSET(ExifReaderReadThumbnailFrame, word_50, 0x50);
GUEST_OFFSET(ExifReaderReadThumbnailFrame, word_54, 0x54);
GUEST_SIZE(ExifReaderReadThumbnailFrame, 0x68);

u32 ExifReader__read_thumbnail(gptr<ExifReader> exif_reader, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<ExifReaderReadThumbnailFrame> frame;  // the original's stack frame
    u32 r0_4 = 0;
    u32 r5_1 = *frame.at<u32>(0x80);
    u32 r0_2 = PiaStationList__find(exif_reader.addr() + 8u, frame.at(0x10).addr(), exif_reader->word_1c, exif_reader->word_20);
    u32 r1_2 = guest::cpu()->r[1];
    if (r0_2 != 0 && frame->byte_32 != 0 && frame->word_38 >= 2u) {
        r0_4 = PiaPacket__read_header(frame.at(0x4c).addr(), frame.at(0x10).addr(), r1);
        r1_2 = guest::cpu()->r[1];
        if (r0_4 == 0) {
            return r0_4;
        }
        u32 r0_5 = frame->word_54;
        u32 r3_3 = frame->word_50;
        u32 r2_2 = exif_reader->word_1c;
        r1_2 = frame.at(0).addr();
        if ((r0_5 + r3_3) <= exif_reader->word_20) {
            u32 r0_6 = PiaStationList__update(exif_reader.addr() + 8u, r1_2, r2_2 + r0_5, r3_3);
            r1_2 = guest::cpu()->r[1];
            if (r0_6 != 0) {
                r1_2 = frame->word_c;
                u32 r0_7 = frame->word_4 + r1_2;
                *gptr<u32>(r5_1) = r0_7;
                if (r0_7 <= r3) {
                    copy_bytes_at_any_alignment(r2, frame->word_0, frame->word_4);
                    u32 r0_8 = frame->word_4;
                    gptr<Local_005b0c94_ea_5> ea_5 = gptr<Local_005b0c94_ea_5>(frame.at(8).addr());
                    copy_bytes_at_any_alignment(r0_8 + r2, ea_5->word_0, ea_5->word_4);
                    return 1u;
                }
            }
        }
    }
    guest::cpu()->r[1] = r1_2;
    return 0u;
}

}  // namespace d_005b0c94
GUEST_EXPORT_FRAMED(0x005b0c94, d_005b0c94::ExifReader__read_thumbnail, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_005b0d7c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Reads the thumbnail when the picture's EXIF data is valid.
namespace d_005b0d7c {

struct __attribute__((packed)) ExifReader {
    u8 unknown_0[0x1c];  // (not used here)
    u32 word_1c;
    u32 word_20;
};
GUEST_OFFSET(ExifReader, word_1c, 0x1c);
GUEST_OFFSET(ExifReader, word_20, 0x20);

inline constexpr guest::Function<0x0046f9f8, u32(u32, u32, u32, u32)> PiaStationList__find;
inline constexpr guest::Function<0x005b0c94, u32(u32, u32, u32, u32)> ExifReader__read_thumbnail;

struct __attribute__((packed)) ExifReaderReadThumbnailCheckedFrame {
    u32 word_0;
    u8 unknown_4[0x26];  // (not read or written by name)
    u8 byte_2a;
    u8 unknown_2b[0x5];  // (not read or written by name)
    u32 word_30;
    u8 unknown_34[0x8];  // (not read or written by name)
};
GUEST_OFFSET(ExifReaderReadThumbnailCheckedFrame, word_0, 0x0);
GUEST_OFFSET(ExifReaderReadThumbnailCheckedFrame, byte_2a, 0x2a);
GUEST_OFFSET(ExifReaderReadThumbnailCheckedFrame, word_30, 0x30);
GUEST_SIZE(ExifReaderReadThumbnailCheckedFrame, 0x3c);

u32 ExifReader__read_thumbnail_checked(gptr<ExifReader> exif_reader, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<ExifReaderReadThumbnailCheckedFrame> frame;  // the original's stack frame
    u32 r0_2 = PiaStationList__find(exif_reader.addr() + 8u, frame.at(8).addr(), exif_reader->word_1c, exif_reader->word_20);
    if (r0_2 != 0 && frame->byte_2a != 0 && frame->word_30 >= 2u) {
        frame->word_0 = r3;
        return ExifReader__read_thumbnail(exif_reader.addr(), 0u, r1, r2);
    }
    return 0u;
}

}  // namespace d_005b0d7c
GUEST_EXPORT_FRAMED(0x005b0d7c, d_005b0d7c::ExifReader__read_thumbnail_checked, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_005b0dec: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The larger of the two thumbnail segment ends of the picture's EXIF data, or 0.
namespace d_005b0dec {

struct __attribute__((packed)) ExifReader {
    u8 unknown_0[0x1c];  // (not used here)
    u32 word_1c;
    u32 word_20;
};
GUEST_OFFSET(ExifReader, word_1c, 0x1c);
GUEST_OFFSET(ExifReader, word_20, 0x20);

inline constexpr guest::Function<0x0046f8e8, u32(u32, u32, u32)> PiaPacket__read_header;
inline constexpr guest::Function<0x0046f9f8, u32(u32, u32, u32, u32)> PiaStationList__find;
inline constexpr guest::Function<0x0046fe08, u32(u32, u32, u32, u32)> PiaStationList__update;

struct __attribute__((packed)) ExifReaderThumbnailSizeFrame {
    u8 unknown_0[0x22];  // (not read or written by name)
    u8 byte_22;
    u8 unknown_23[0x5];  // (not read or written by name)
    u32 word_28;
    u8 unknown_2c[0x8];  // (not read or written by name)
    u32 word_34;
    u8 unknown_38[0x4];  // (not read or written by name)
    u32 word_3c;
    u8 unknown_40[0x4];  // (not read or written by name)
    u32 word_44;
    u8 unknown_48[0x4];  // (not read or written by name)
    u32 word_4c;
    u8 unknown_50[0x4];  // (not read or written by name)
    u32 word_54;
    u32 word_58;
    u8 unknown_5c[0x8];  // (not read or written by name)
};
GUEST_OFFSET(ExifReaderThumbnailSizeFrame, byte_22, 0x22);
GUEST_OFFSET(ExifReaderThumbnailSizeFrame, word_28, 0x28);
GUEST_OFFSET(ExifReaderThumbnailSizeFrame, word_34, 0x34);
GUEST_OFFSET(ExifReaderThumbnailSizeFrame, word_3c, 0x3c);
GUEST_OFFSET(ExifReaderThumbnailSizeFrame, word_44, 0x44);
GUEST_OFFSET(ExifReaderThumbnailSizeFrame, word_4c, 0x4c);
GUEST_OFFSET(ExifReaderThumbnailSizeFrame, word_54, 0x54);
GUEST_OFFSET(ExifReaderThumbnailSizeFrame, word_58, 0x58);
GUEST_SIZE(ExifReaderThumbnailSizeFrame, 0x64);

u32 ExifReader__thumbnail_size(gptr<ExifReader> exif_reader) {
    guest::StackFrameOf<ExifReaderThumbnailSizeFrame> frame;  // the original's stack frame
    u32 r0_2 = PiaStationList__find(exif_reader.addr() + 8u, frame.at(0).addr(), exif_reader->word_1c, exif_reader->word_20);
    u32 r1_2 = guest::cpu()->r[1];
    if (r0_2 != 0 && frame->byte_22 != 0 && frame->word_28 >= 2u) {
        u32 r0_4 = PiaPacket__read_header(frame.at(0x50).addr(), frame.at(0).addr(), 0u);
        u32 r1_4 = guest::cpu()->r[1];
        if (r0_4 != 0) {
            u32 r0_5 = frame->word_58;
            u32 r3_3 = frame->word_54;
            u32 r2_2 = exif_reader->word_1c;
            r1_2 = frame.at(0x30).addr();
            if ((r0_5 + r3_3) > exif_reader->word_20) {
                guest::cpu()->r[1] = r1_2;
                return 0u;
            }
            u32 r0_6 = PiaStationList__update(exif_reader.addr() + 8u, r1_2, r2_2 + r0_5, r3_3);
            r1_2 = guest::cpu()->r[1];
            if (r0_6 == 0) {
                return 0u;
            }
            r0_4 = PiaPacket__read_header(frame.at(0x50).addr(), frame.at(0).addr(), 1u);
            r1_4 = guest::cpu()->r[1];
            if (r0_4 != 0) {
                u32 r0_8 = frame->word_58;
                u32 r3_5 = frame->word_54;
                u32 r2_4 = exif_reader->word_1c;
                r1_2 = frame.at(0x40).addr();
                if ((r0_8 + r3_5) > exif_reader->word_20) {
                    guest::cpu()->r[1] = r1_2;
                    return 0u;
                }
                u32 r0_9 = PiaStationList__update(exif_reader.addr() + 8u, r1_2, r2_4 + r0_8, r3_5);
                r1_2 = guest::cpu()->r[1];
                if (r0_9 == 0) {
                    return 0u;
                }
                r0_4 = frame->word_34 + frame->word_3c;
                r1_4 = frame->word_44 + frame->word_4c;
                if (r0_4 <= r1_4) {
                    r0_4 = r1_4;
                }
            }
        }
        guest::cpu()->r[1] = r1_4;
        return r0_4;
    }
    guest::cpu()->r[1] = r1_2;
    return 0u;
}

}  // namespace d_005b0dec
GUEST_EXPORT_FRAMED(0x005b0dec, d_005b0dec::ExifReader__thumbnail_size, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_005b1684: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Constructs a message flow's jump node from its data (arg 1).
namespace d_005b1684 {

struct __attribute__((packed)) LibmsFlowNodeFlowNode005b1684Arg1 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
};
GUEST_OFFSET(LibmsFlowNodeFlowNode005b1684Arg1, word_4, 0x4);

inline constexpr u32 vtable_libms__FlowNodeJump = 0x00907fe4u;
inline constexpr u32 vtable_libms__FlowNode = 0x00908034u;

void libms__FlowNode__FlowNode_005b1684(gptr<libms__FlowNodeJump> flow_node_jump, gptr<LibmsFlowNodeFlowNode005b1684Arg1> arg1) {
    flow_node_jump->vtable = vtable_libms__FlowNode;
    flow_node_jump->word_4 = arg1->word_4;
    flow_node_jump->vtable = vtable_libms__FlowNodeJump;
    guest::cpu()->r[1] = vtable_libms__FlowNodeJump;
}

}  // namespace d_005b1684
GUEST_EXPORT(0x005b1684, d_005b1684::libms__FlowNode__FlowNode_005b1684);

// f_005b16b0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Constructs a message flow's entry node from its data (arg 1).
namespace d_005b16b0 {

struct __attribute__((packed)) LibmsFlowNodeFlowNode005b16b0Arg1 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
};
GUEST_OFFSET(LibmsFlowNodeFlowNode005b16b0Arg1, word_4, 0x4);

inline constexpr u32 vtable_libms__FlowNodeEntry = 0x00907ff4u;
inline constexpr u32 vtable_libms__FlowNode = 0x00908034u;

void libms__FlowNode__FlowNode_005b16b0(gptr<libms__FlowNodeEntry> flow_node_entry, gptr<LibmsFlowNodeFlowNode005b16b0Arg1> arg1) {
    flow_node_entry->vtable = vtable_libms__FlowNode;
    flow_node_entry->word_4 = arg1->word_4;
    flow_node_entry->vtable = vtable_libms__FlowNodeEntry;
    guest::cpu()->r[1] = vtable_libms__FlowNodeEntry;
}

}  // namespace d_005b16b0
GUEST_EXPORT(0x005b16b0, d_005b16b0::libms__FlowNode__FlowNode_005b16b0);

// f_005b16dc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Constructs a message flow's event node from its data (arg 1).
namespace d_005b16dc {

struct __attribute__((packed)) LibmsFlowNodeFlowNode005b16dcArg1 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
};
GUEST_OFFSET(LibmsFlowNodeFlowNode005b16dcArg1, word_4, 0x4);

inline constexpr u32 vtable_libms__FlowNodeEvent = 0x00908004u;
inline constexpr u32 vtable_libms__FlowNode = 0x00908034u;

void libms__FlowNode__FlowNode_005b16dc(gptr<libms__FlowNodeEvent> flow_node_event, gptr<LibmsFlowNodeFlowNode005b16dcArg1> arg1) {
    flow_node_event->vtable = vtable_libms__FlowNode;
    flow_node_event->word_4 = arg1->word_4;
    flow_node_event->vtable = vtable_libms__FlowNodeEvent;
    guest::cpu()->r[1] = vtable_libms__FlowNodeEvent;
}

}  // namespace d_005b16dc
GUEST_EXPORT(0x005b16dc, d_005b16dc::libms__FlowNode__FlowNode_005b16dc);

// f_005b1928: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Sets the window's three flags (+0x5c) for mode 0, 1 or 2.
namespace d_005b1928 {

struct __attribute__((packed)) Window {
    u8 unknown_0[0x5c];  // (not used here)
    u8 byte_5c;
    u8 byte_5d;
    u8 byte_5e;
};
GUEST_OFFSET(Window, byte_5c, 0x5c);
GUEST_OFFSET(Window, byte_5d, 0x5d);
GUEST_OFFSET(Window, byte_5e, 0x5e);


void Window__set_mode(gptr<Window> window, u32 r1) {
    if (r1 == 0) {
        window->byte_5c = 1;
        window->byte_5d = 0;
        window->byte_5e = 1;
        return;
    }
    if (r1 == 1u) {
        window->byte_5c = 1;
        window->byte_5d = 1;
        window->byte_5e = 1;
        return;
    }
    if (r1 == 2u) {
        window->byte_5c = 0;
    }
}

}  // namespace d_005b1928
GUEST_EXPORT(0x005b1928, d_005b1928::Window__set_mode);

// f_005b1968: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Stores three bytes at +0x82.
namespace d_005b1968 {

struct __attribute__((packed)) Window {
    u8 unknown_0[0x82];  // (not used here)
    u8 byte_82;
    u8 byte_83;
    u8 byte_84;
};
GUEST_OFFSET(Window, byte_82, 0x82);
GUEST_OFFSET(Window, byte_83, 0x83);
GUEST_OFFSET(Window, byte_84, 0x84);


void Window__set_bytes_82(gptr<Window> window, u32 r1, u32 r2, u32 r3) {
    window->byte_82 = u8(r1);
    window->byte_83 = u8(r2);
    window->byte_84 = u8(r3);
}

}  // namespace d_005b1968
GUEST_EXPORT(0x005b1968, d_005b1968::Window__set_bytes_82);

// f_005b19e8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Stores a word at +0 and clears +4.
namespace d_005b19e8 {

struct __attribute__((packed)) SetWordAndClearFlagArg0 {
    u32 crc;
    u8 byte_4;
};
GUEST_OFFSET(SetWordAndClearFlagArg0, crc, 0x0);
GUEST_OFFSET(SetWordAndClearFlagArg0, byte_4, 0x4);


void set_word_and_clear_flag(gptr<SetWordAndClearFlagArg0> arg0, u32 crc) {
    arg0->crc = crc;
    arg0->byte_4 = 0;
}

}  // namespace d_005b19e8
GUEST_EXPORT(0x005b19e8, d_005b19e8::set_word_and_clear_flag);

// f_005b2194: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Writes the GPU commands of the model's parts (the 12 slots, enabled or not) into a command buffer.
namespace d_005b2194 {

struct __attribute__((packed)) ModelParts {
    u8 unknown_0[0x584];  // (not used here)
    u32 word_584;
};
GUEST_OFFSET(ModelParts, word_584, 0x584);

inline constexpr guest::Function<0x002fbb30, u32(u32, u32, u32, u32)> copy_aligned_bytes;
inline constexpr guest::Function<0x00726e94, u32(u32, u32, u32)> Shader__write_bind_commands;
inline constexpr guest::Function<0x00726f34, u32(u32, u32, u32, u32)> Shader__write_setup_commands;

u32 ModelParts__write_commands(gptr<ModelParts> model_parts, u32 i, u32 r2, u32 r3) {
    u32 r0 = model_parts.addr();
    u32 r0_3 = 0;
    u32 r4 = r0 + 0x584u;
    if (model_parts->word_584 == 0) {
        u32 r0_1 = Shader__write_setup_commands(r4, r4 + 4u, r2, r3);
        r3 = guest::cpu()->r[3];
        model_parts->word_584 = u32(s32(r0_1 - r4 - 4u) >> 2);
    }
    copy_aligned_bytes(i, r4 + 4u, *gptr<u32>(r4) << 2, r3);
    r0 = Shader__write_bind_commands(r4, i + (*gptr<u32>(r4) << 2), r0 + 0xd14u);
    r3 = 0x803f0232u;
    i = 0u;
    r2 = i;
    do {
        u32 r12_1 = i * 3u;
        if (*gptr<u32>(r4 + i * 0x70u + 0x160u) != 0) {
            *gptr<u32>(r0) = r2;
            *gptr<u32>(r0 + 4) = r12_1 + 0x203u | 0x80000000u | 0x2f0000u;
            u32 r0_2 = r0 + 8;
            *gptr<u32>(r0_2) = r2;
            r0_3 = r0_2 + 4u;
            *gptr<u32>(r0_3) = r2;
        } else {
            *gptr<u32>(r0) = r2;
            *gptr<u32>(r0 + 4) = r12_1 + 0x205u | 0xf0000u;
            r0_3 = r0 + 4u;
        }
        r0 = r0_3 + 4u;
        if (*gptr<u8>(r4 + i * 0x14u + 0x6a0u) != 0) {
            *gptr<u32>(r0) = i;
            *gptr<u32>(r0 + 4) = r3;
            u32 r0_4 = r0 + 8;
            *gptr<u32>(r0_4) = r2;
            u32 r0_5 = r0_4 + 4u;
            *gptr<u32>(r0_5) = r2;
            u32 r0_6 = r0_5 + 4u;
            *gptr<u32>(r0_6) = r2;
            u32 r0_7 = r0_6 + 4u;
            *gptr<u32>(r0_7) = r2;
            r0 = r0_7 + 4u;
        }
        i += 1u;
        guest::preempt();
    } while (s32(i) < 0xc);
    return r0;
}

}  // namespace d_005b2194
GUEST_EXPORT_FRAMED(0x005b2194, d_005b2194::ModelParts__write_commands, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_005b22c8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Builds the GPU command list for the model's parts (the part commands and the rest).
namespace d_005b22c8 {

struct __attribute__((packed)) Local_005b22c8_ea_1 {
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
};
GUEST_OFFSET(Local_005b22c8_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_005b22c8_ea_1, word_4, 0x4);
GUEST_OFFSET(Local_005b22c8_ea_1, word_8, 0x8);
GUEST_OFFSET(Local_005b22c8_ea_1, word_c, 0xc);
GUEST_OFFSET(Local_005b22c8_ea_1, word_10, 0x10);
GUEST_OFFSET(Local_005b22c8_ea_1, word_14, 0x14);
GUEST_OFFSET(Local_005b22c8_ea_1, word_18, 0x18);
GUEST_OFFSET(Local_005b22c8_ea_1, word_1c, 0x1c);
GUEST_OFFSET(Local_005b22c8_ea_1, word_20, 0x20);
GUEST_OFFSET(Local_005b22c8_ea_1, word_24, 0x24);

struct __attribute__((packed)) Local_005b22c8_ea_2 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u32 word_18;
    u32 word_1c;
    u32 word_20;
    u32 word_24;
};
GUEST_OFFSET(Local_005b22c8_ea_2, word_4, 0x4);
GUEST_OFFSET(Local_005b22c8_ea_2, word_8, 0x8);
GUEST_OFFSET(Local_005b22c8_ea_2, word_c, 0xc);
GUEST_OFFSET(Local_005b22c8_ea_2, word_10, 0x10);
GUEST_OFFSET(Local_005b22c8_ea_2, word_14, 0x14);
GUEST_OFFSET(Local_005b22c8_ea_2, word_18, 0x18);
GUEST_OFFSET(Local_005b22c8_ea_2, word_1c, 0x1c);
GUEST_OFFSET(Local_005b22c8_ea_2, word_20, 0x20);
GUEST_OFFSET(Local_005b22c8_ea_2, word_24, 0x24);

struct __attribute__((packed)) Local_005b22c8_r0_5 {
    u8 byte_0;
    u8 byte_1;
    u32 word_2;
};
GUEST_OFFSET(Local_005b22c8_r0_5, byte_0, 0x0);
GUEST_OFFSET(Local_005b22c8_r0_5, byte_1, 0x1);
GUEST_OFFSET(Local_005b22c8_r0_5, word_2, 0x2);

struct __attribute__((packed)) Local_005b22c8_r0_8 {
    u32 word_0;
    u8 unknown_4[0x8];  // (not used here)
    u32 word_c;
};
GUEST_OFFSET(Local_005b22c8_r0_8, word_0, 0x0);
GUEST_OFFSET(Local_005b22c8_r0_8, word_c, 0xc);

struct __attribute__((packed)) Local_005b22c8_r2_6 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_005b22c8_r2_6, word_0, 0x0);
GUEST_OFFSET(Local_005b22c8_r2_6, word_4, 0x4);

struct __attribute__((packed)) Local_005b22c8_r4_6 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_005b22c8_r4_6, word_0, 0x0);
GUEST_OFFSET(Local_005b22c8_r4_6, word_4, 0x4);

struct __attribute__((packed)) Local_005b22c8_r4_8 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_005b22c8_r4_8, word_0, 0x0);
GUEST_OFFSET(Local_005b22c8_r4_8, word_4, 0x4);

inline constexpr guest::Function<0x001262dc, u32(u32, u32, u32, u32)> write_part_100;
inline constexpr guest::Function<0x001277dc, u32(u32, u32, u32, u32)> begin_command_write;
inline constexpr guest::Function<0x001279b4, u32(u32, u32)> advance_command_cursor;
inline constexpr guest::Function<0x002f825c, u32(u32, u32, u32)> clear_aligned;
inline constexpr guest::Function<0x002fbb30, u32(u32, u32, u32, u32)> copy_aligned_bytes;
inline constexpr guest::Function<0x0034943c, u32(u32, u32)> GpuCommand__write_enable_b;
inline constexpr guest::Function<0x0034abd0, u32(u32, u32)> GpuCommand__write_enable;
inline constexpr guest::Function<0x005b2194, u32(u32, u32)> ModelParts__write_commands;
inline constexpr guest::Function<0x00727c84, u32(u32, u32, u32, u32)> write_part_6c;

struct __attribute__((packed)) ModelPartsBuildCommandListFrame {
    u32 word_0;
    u8 unknown_4[0x24];  // (not read or written by name)
};
GUEST_OFFSET(ModelPartsBuildCommandListFrame, word_0, 0x0);
GUEST_SIZE(ModelPartsBuildCommandListFrame, 0x28);

u32 ModelParts__build_command_list(u32 model_parts, u32 r1_unused, u32 r2, u32 r3) {
    guest::StackFrameOf<ModelPartsBuildCommandListFrame> frame;  // the original's stack frame
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r10 = guest::cpu()->r[10];
    u32 r11 = guest::cpu()->r[11];
    u32 r14 = guest::cpu()->r[14];
    u32 res_1 = 0;
    u32 res_2 = 0;
    gptr<Local_005b22c8_ea_1> ea_1 = gptr<Local_005b22c8_ea_1>(frame.at(0).addr());
    ea_1->word_0 = r3;
    ea_1->word_4 = r4;
    ea_1->word_8 = r5;
    ea_1->word_c = r6;
    ea_1->word_10 = r7;
    ea_1->word_14 = r8;
    ea_1->word_18 = r9;
    ea_1->word_1c = r10;
    ea_1->word_20 = r11;
    ea_1->word_24 = r14;
    r5 = model_parts;
    begin_command_write(0x208u, frame.at(0).addr(), r2, r3);
    u32 r4_1 = frame->word_0;
    r7 = 0xf0201u;
    r10 = 0u;
    r6 = r4_1;
    *gptr<u32>(r4_1) = r10;
    u32 r4_2 = r4_1 + 4u;
    r8 = r7 + 1u;
    *gptr<u32>(r4_2) = r7;
    u32 r4_3 = r4_2 + 4u;
    *gptr<u32>(r4_3) = r10;
    u32 r4_4 = r4_3 + 4u;
    *gptr<u32>(r4_4) = r8;
    u32 r4_5 = r4_4 + 4u;
    clear_aligned(r4_5, 0x98u, guest::cpu()->r[2]);
    r11 = 0x823f0203u;
    r9 = 0x803f0232u;
    r3 = r4_5 + 0x98u;
    u32 r1 = 0u;
    r2 = 0xcu;
    model_parts = r3;
    *gptr<u32>(r4_5 + 4u) = r11;
    do {
        gptr<Local_005b22c8_r4_6> r4_6 = gptr<Local_005b22c8_r4_6>(model_parts + 4u);
        res_1 = r2 - 1u;
        r2 = res_1;
        r4_6->word_0 = r9;
        r4_6->word_4 = r10;
        *gptr<u32>(model_parts + 0xcu) = r10;
        *gptr<u32>(model_parts + 0x10u) = r10;
        *gptr<u32>(model_parts) = r1;
        u32 r0_1 = model_parts + 0x14u;
        r1 += 1u;
        *gptr<u32>(r0_1) = r10;
        model_parts = r0_1 + 4u;
        guest::preempt();
    } while (res_1 != 0);
    u32 r1_2 = r3 + 0x120u;
    frame->word_0 = r1_2;
    u32 r0_4 = GpuCommand__write_enable_b(write_part_6c(r5 + 0x4f0u, r1_2, r2, r3), 1u);
    u32 r2_3 = *gptr<u8>(r5 + 0x80u);
    gptr<Local_005b22c8_r0_5> r0_5 = gptr<Local_005b22c8_r0_5>(r5 + 0x80u);
    u32 r3_3 = r0_5->byte_1;
    if (r2_3 != 0) {
        r2_3 = 5u;
    }
    if (r3_3 != 0) {
        r3_3 = 1u;
    }
    *gptr<u32>(r0_4) = r2_3 | r3_3 << 0x10;
    u32 r1_3 = r0_4 + 4u;
    *gptr<u32>(r1_3) = 0x500e0;
    u32 r1_4 = r1_3 + 4u;
    u32 r3_4 = r0_5->word_2 & ~0xff000000u;
    *gptr<u32>(r1_4) = r3_4;
    u32 r1_5 = r1_4 + 4u;
    *gptr<u32>(r1_5) = 0xf00e1;
    u32 r1_6 = r1_5 + 4u;
    if (r0_5->byte_0 != 0) {
        copy_aligned_bytes(r1_6, r0_5.addr() + 8u, 0x210u, r3_4);
        r3_4 = guest::cpu()->r[3];
        r1_6 += 0x210u;
    }
    u32 r0_7 = GpuCommand__write_enable(write_part_100(r5, r1_6, 1u, r3_4), 1u);
    frame->word_0 = r0_7;
    gptr<Local_005b22c8_r0_8> r0_8 = gptr<Local_005b22c8_r0_8>(ModelParts__write_commands(r5, r0_7));
    frame->word_0 = r0_8.addr();
    r0_8->word_c = r8;
    gptr<Local_005b22c8_r2_6> r2_6 = gptr<Local_005b22c8_r2_6>(r0_8.addr() + 4u);
    r0_8->word_0 = r10;
    u32 r4_7 = r0_8.addr() + 0x10u;
    r2_6->word_0 = r7;
    r2_6->word_4 = r10;
    clear_aligned(r4_7, 0x98u, r2_6.addr());
    r3 = r4_7 + 0x98u;
    model_parts = r3;
    r1 = 0u;
    r2 = 0xcu;
    *gptr<u32>(r4_7 + 4u) = r11;
    do {
        gptr<Local_005b22c8_r4_8> r4_8 = gptr<Local_005b22c8_r4_8>(model_parts + 4u);
        res_2 = r2 - 1u;
        r2 = res_2;
        r4_8->word_0 = r9;
        r4_8->word_4 = r10;
        *gptr<u32>(model_parts + 0xcu) = r10;
        *gptr<u32>(model_parts + 0x10u) = r10;
        *gptr<u32>(model_parts) = r1;
        u32 r0_9 = model_parts + 0x14u;
        r1 += 1u;
        *gptr<u32>(r0_9) = r10;
        model_parts = r0_9 + 4u;
        guest::preempt();
    } while (res_2 != 0);
    u32 r0_10 = r3 + 0x120u;
    frame->word_0 = r0_10;
    u32 r0_12 = advance_command_cursor(r0_10 - r6 & ~3u, r1);
    gptr<Local_005b22c8_ea_2> ea_2 = gptr<Local_005b22c8_ea_2>(frame.at(0).addr());
    u32 r4_9 = ea_2->word_4;
    u32 r5_1 = ea_2->word_8;
    u32 r6_1 = ea_2->word_c;
    u32 r7_1 = ea_2->word_10;
    u32 r8_1 = ea_2->word_14;
    u32 r9_1 = ea_2->word_18;
    u32 r10_1 = ea_2->word_1c;
    u32 r11_1 = ea_2->word_20;
    guest::cpu()->r[4] = r4_9;
    guest::cpu()->r[5] = r5_1;
    guest::cpu()->r[6] = r6_1;
    guest::cpu()->r[7] = r7_1;
    guest::cpu()->r[8] = r8_1;
    guest::cpu()->r[9] = r9_1;
    guest::cpu()->r[10] = r10_1;
    guest::cpu()->r[11] = r11_1;
    return r0_12;
}

}  // namespace d_005b22c8
GUEST_EXPORT(0x005b22c8, d_005b22c8::ModelParts__build_command_list);

// f_005b25d8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Decodes the picture's thumbnail into a 0x6000-byte buffer (64 x 0x68... layout); clears it on failure; true when it
// worked.
namespace d_005b25d8 {

struct __attribute__((packed)) Local_005b25d8_ea_2 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_005b25d8_ea_2, word_0, 0x0);
GUEST_OFFSET(Local_005b25d8_ea_2, word_4, 0x4);

struct __attribute__((packed)) Local_005b25d8_ea_3 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_005b25d8_ea_3, word_0, 0x0);
GUEST_OFFSET(Local_005b25d8_ea_3, word_4, 0x4);

inline constexpr guest::Function<0x002f825c, u32(u32, u32)> clear_aligned;
inline constexpr guest::Function<0x0046fc50, u32(u32, u32, u32, u32)> PiaStationList__add;

struct __attribute__((packed)) PictureDecoderDecodeThumbnailFrame {
    u8 unknown_0[0x10];  // (not read or written by name)
    u32 word_10;
    u8 unknown_14[0x4];  // (not read or written by name)
};
GUEST_OFFSET(PictureDecoderDecodeThumbnailFrame, word_10, 0x10);
GUEST_SIZE(PictureDecoderDecodeThumbnailFrame, 0x18);

u32 PictureDecoder__decode_thumbnail(u32 picture_decoder, u32 r1, u32 r2) {
    guest::StackFrameOf<PictureDecoderDecodeThumbnailFrame> frame;  // the original's stack frame
    u32 r4_1 = 0;
    frame->word_10 = 0;
    gptr<Local_005b25d8_ea_2> ea_2 = gptr<Local_005b25d8_ea_2>(frame.at(0).addr());
    ea_2->word_0 = 0x1400;
    ea_2->word_4 = 0x40;
    gptr<Local_005b25d8_ea_3> ea_3 = gptr<Local_005b25d8_ea_3>(frame.at(8).addr());
    ea_3->word_0 = 0x68;
    ea_3->word_4 = 4;
    if (PiaStationList__add(picture_decoder + 4u, r1, 0x6000u, r2 + 4u) == 0) {
        r4_1 = 0u;
        clear_aligned(r1, 0x6000u);
    } else {
        r4_1 = 1u;
    }
    return r4_1;
}

}  // namespace d_005b25d8
GUEST_EXPORT_FRAMED(0x005b25d8, d_005b25d8::PictureDecoder__decode_thumbnail, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_005b2d10: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Clears the 0x6000-byte buffer and decodes the thumbnail when the record has one (bit 0).
namespace d_005b2d10 {

inline constexpr guest::Function<0x002f825c, u32(u32, u32, u32, u32)> clear_aligned;
inline constexpr guest::Function<0x005b25d8, u32(u32, u32, u32)> PictureDecoder__decode_thumbnail;
inline constexpr guest::Function<0x0075dbc4, u32(u32)> bit_0_of_word_0;

u32 PictureDecoder__read_thumbnail(u32 picture_decoder, u32 r1, u32 r2) {
    clear_aligned(r1, 0x6000u, r2, guest::cpu()->r[3]);
    u32 r4_1 = 0u;
    if (bit_0_of_word_0(r2) != 0) {
        if (PictureDecoder__decode_thumbnail(picture_decoder + 0x138u, r1, r2) != 0) {
            r4_1 = 1u;
        }
    }
    return r4_1;
}

}  // namespace d_005b2d10
GUEST_EXPORT_FRAMED(0x005b2d10, d_005b2d10::PictureDecoder__read_thumbnail, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_005b2e10: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Saves the captured screens as a photo: a JPEG, or a 3D MPO when the scene allows one, with the photo settings; the
// result in byte 4.
namespace d_005b2e10 {

inline constexpr u32 screenshot_state_address = 0x00953eecu;
inline constexpr u32 screenshot_buffer_a_address = 0x00953ef8u;
inline constexpr u32 screenshot_buffer_b_address = 0x00953f00u;
inline guest::global<u8, 0x00953eec> screenshot_state;
inline guest::global<u32, 0x00953ef8> screenshot_buffer_a;
inline guest::global<u32, 0x00953efc> global_00953efc;
inline guest::global<u32, 0x00953f00> screenshot_buffer_b;
inline constexpr guest::Function<0x002f74c8, u32(u32)> current_scene_id;
inline constexpr guest::Function<0x005a50e0, u32(u32, u32)> PartWord__set_kind;
inline constexpr guest::Function<0x005a90b0, u32(u32, u32)> PictureInfo__set_kind_value;
inline constexpr guest::Function<0x005a90c4, u32(u32, u32)> PictureInfo__set_flag_10;
inline constexpr guest::Function<0x005ab498, u32(u32, u32, u32, u32)> photo_storage_virtual_3;
inline constexpr guest::Function<0x005ab4b0, u32(u32, u32, u32, u32)> photo_storage_virtual_2;
inline constexpr guest::Function<0x005af9d0, u32(u32, u32)> PhotoDatabase__save_index;
inline constexpr guest::Function<0x005afd20, u32(u32, u32, u32, u32)> PictureWriter__set_params;
inline constexpr guest::Function<0x005afd3c, u32(u32)> imgdb__MpSaver__MpSaver;
inline constexpr guest::Function<0x005afe38, u32(u32)> imgdb__MpSaver__destructor;
inline constexpr guest::Function<0x005b06c4, u32(u32, u32)> PhotoDatabase__save_index_b;
inline constexpr guest::Function<0x005b0a14, u32(u32, u32, u32, u32)> PictureReader__set_params;
inline constexpr guest::Function<0x005b0a28, u32(u32)> imgdb__JpegSaver__JpegSaver;
inline constexpr guest::Function<0x005b0b14, u32(u32)> imgdb__JpegSaver__destructor;
inline constexpr guest::Function<0x007b0c08, u32(u32)> stereo_slider_value;

struct __attribute__((packed)) SaveScreenshotFrame {
    u32 word_0;
    u32 word_4;
    u8 unknown_8[0x14];  // (not read or written by name)
    u32 word_1c;
    u8 unknown_20[0x18];  // (not read or written by name)
    float float_38;
    u8 unknown_3c[0x2c];  // (not read or written by name)
};
GUEST_OFFSET(SaveScreenshotFrame, word_0, 0x0);
GUEST_OFFSET(SaveScreenshotFrame, word_4, 0x4);
GUEST_OFFSET(SaveScreenshotFrame, word_1c, 0x1c);
GUEST_OFFSET(SaveScreenshotFrame, float_38, 0x38);
GUEST_SIZE(SaveScreenshotFrame, 0x68);

void save_screenshot(u32 request, u32 r1, u32 r2, u32 r3, float S0) {
    guest::StackFrameOf<SaveScreenshotFrame> frame;  // the original's stack frame
    u32 r0_13 = 0;
    u32 r4_1 = *frame.at<u32>(0x68);
    u32 scene_4 = current_scene_id(photo_storage_virtual_2(request, r1, r2, r3));
    u32 r8_1 = scene_4 != 0xa4u;
    u32 zf_1 = (stereo_slider_value(scene_4) & r8_1) == 0;
    u32 r0_4 = frame.at(8).addr();
    if (zf_1) {
        imgdb__JpegSaver__JpegSaver(r0_4);
        u32 picture_reader = frame.at(8).addr();
        frame->word_0 = 1;
        PictureReader__set_params(picture_reader, r1, r3, r4_1);
        u32 scene_5 = current_scene_id(picture_reader);
        if (scene_5 == 0xa4u) {
            PictureInfo__set_kind_value(frame.at(8).addr(), 0x198eu);
        } else {
            PictureInfo__set_kind_value(frame.at(8).addr(), 0x863u);
        }
        PartWord__set_kind(frame.at(8).addr(), 1u);
        u32 r1_5 = s8(*screenshot_state);
        PictureInfo__set_flag_10(frame.at(8).addr(), r1_5);
        u32 r1_6 = *screenshot_buffer_b;
        frame->word_1c = r1_6;
        u32 r0_12 = PhotoDatabase__save_index_b(frame.at(8).addr(), r1_6);
        *gptr<u8>(request + 4u) = u8(r0_12);
        r0_13 = frame.at(8).addr();
        imgdb__JpegSaver__destructor(r0_13);
    } else {
        imgdb__MpSaver__MpSaver(r0_4);
        u32 picture_writer = frame.at(8).addr();
        frame->word_0 = r4_1;
        frame->word_4 = 1;
        PictureWriter__set_params(picture_writer, r1, r2, r3);
        u32 scene_6 = current_scene_id(picture_writer);
        if (scene_6 == 0xa4u) {
            PictureInfo__set_kind_value(frame.at(8).addr(), 0x198eu);
        } else {
            PictureInfo__set_kind_value(frame.at(8).addr(), 0x863u);
        }
        PartWord__set_kind(frame.at(8).addr(), 1u);
        u32 r1_10 = s8(*screenshot_state);
        PictureInfo__set_flag_10(frame.at(8).addr(), r1_10);
        u32 r1_11 = *screenshot_buffer_a;
        frame->word_1c = r1_11;
        float S0_17 = std::bit_cast<float>(*global_00953efc);
        frame->float_38 = S0_17;
        guest::cpu()->s[0] = S0_17;
        u32 r0_21 = PhotoDatabase__save_index(frame.at(8).addr(), r1_11);
        *gptr<u8>(request + 4u) = u8(r0_21);
        r0_13 = frame.at(8).addr();
        imgdb__MpSaver__destructor(r0_13);
    }
    frame.release();
    photo_storage_virtual_3(r0_13, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    return;
}

}  // namespace d_005b2e10
GUEST_EXPORT(0x005b2e10, d_005b2e10::save_screenshot);

// f_005b2fac: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Reads both screens' framebuffers (their address, format and size) and copies each into its image, rotated.
namespace d_005b2fac {

struct __attribute__((packed)) Capture {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u32 word_18;
};
GUEST_OFFSET(Capture, word_0, 0x0);
GUEST_OFFSET(Capture, word_4, 0x4);
GUEST_OFFSET(Capture, word_8, 0x8);
GUEST_OFFSET(Capture, word_c, 0xc);
GUEST_OFFSET(Capture, word_10, 0x10);
GUEST_OFFSET(Capture, word_14, 0x14);
GUEST_OFFSET(Capture, word_18, 0x18);

struct __attribute__((packed)) Local_005b2fac_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_005b2fac_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_005b2fac_ea_1, word_4, 0x4);

struct __attribute__((packed)) Local_005b2fac_ea_3 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_005b2fac_ea_3, word_0, 0x0);
GUEST_OFFSET(Local_005b2fac_ea_3, word_4, 0x4);

inline constexpr guest::Function<0x00121110, u32(u32)> set_mode_adf9e4;
inline constexpr guest::Function<0x005b30c4, u32(u32, u32, u32, u32)> copy_framebuffer_rotated;
inline constexpr guest::Function<0x007b0bb0, u32(u32, u32)> gpu_register_value;
inline constexpr guest::Function<0x007b1034, u32(u32, u32)> thunk_00136088;

struct __attribute__((packed)) CaptureFramebuffersFrame {
    u8 unknown_0[0x4];  // (not read or written by name)
    u32 word_4;
    u8 unknown_8[0x4];  // (not read or written by name)
    u32 word_c;
};
GUEST_OFFSET(CaptureFramebuffersFrame, word_4, 0x4);
GUEST_OFFSET(CaptureFramebuffersFrame, word_c, 0xc);
GUEST_SIZE(CaptureFramebuffersFrame, 0x10);

void capture_framebuffers(gptr<Capture> capture) {
    guest::StackFrameOf<CaptureFramebuffersFrame> frame;  // the original's stack frame
    u32 r5_1 = frame.at(0).addr();
    set_mode_adf9e4(0x400u);
    gpu_register_value(0x600u, r5_1 + 4u);
    gpu_register_value(0x602u, r5_1 + 8u);
    u32 r7_1 = 0x602u | u32(s32(0x602u) >> 9);
    gpu_register_value(r7_1, r5_1 + 0xcu);
    gpu_register_value(0x601u, r5_1);
    gptr<Local_005b2fac_ea_1> ea_1 = gptr<Local_005b2fac_ea_1>(frame.at(8).addr());
    thunk_00136088(frame->word_4, ea_1->word_0 * ea_1->word_4 << 1);
    capture->word_c = 0;
    u32 r1_5 = frame->word_c;
    capture->word_14 = 0xf0;
    capture->word_18 = 0x190;
    capture->word_10 = r1_5 - 0x190u;
    copy_framebuffer_rotated(capture->word_0, r1_5, frame.at(0).addr(), capture.addr() + 0xcu);
    u32 r5_2 = frame.at(0).addr();
    set_mode_adf9e4(0x410u);
    gpu_register_value(0x600u, r5_2 + 4u);
    gpu_register_value(0x602u, r5_2 + 8u);
    gpu_register_value(r7_1, r5_2 + 0xcu);
    gpu_register_value(0x601u, r5_2);
    gptr<Local_005b2fac_ea_3> ea_3 = gptr<Local_005b2fac_ea_3>(frame.at(8).addr());
    thunk_00136088(frame->word_4, ea_3->word_0 * ea_3->word_4 << 1);
    capture->word_10 = frame->word_c - 0x190u;
    copy_framebuffer_rotated(capture->word_4, capture->word_8, frame.at(0).addr(), capture.addr() + 0xcu);
}

}  // namespace d_005b2fac
GUEST_EXPORT_FRAMED(0x005b2fac, d_005b2fac::capture_framebuffers, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_005b30c4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Copies a rectangle of a 16-bit framebuffer (stored a column at a time, as the screens are) into an image stored a
// row at a time.
namespace d_005b30c4 {

struct __attribute__((packed)) Framebuffer {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Framebuffer, word_4, 0x4);
GUEST_OFFSET(Framebuffer, word_8, 0x8);

struct __attribute__((packed)) Rect {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Rect, word_0, 0x0);
GUEST_OFFSET(Rect, word_4, 0x4);
GUEST_OFFSET(Rect, word_8, 0x8);
GUEST_OFFSET(Rect, word_c, 0xc);


void copy_framebuffer_rotated(u32 image, u32 r1_unused, gptr<Framebuffer> framebuffer, gptr<Rect> rect) {
    u32 res_1 = 0;
    u32 i = 0u;
    u32 r5_1 = rect->word_c;
    u32 r1_1 = framebuffer->word_4;
    u32 r7 = image + (r5_1 * (rect->word_8 - 1u) << 1);
    u32 r4 = r1_1 + (rect->word_4 * framebuffer->word_8 + rect->word_0 << 1);
    if (s32(r5_1) > 0) {
        do {
            u32 r12_1 = r4 + (rect->word_8 << 1) - r4;
            if (s32(r12_1) >> 1 > 0) {
                u32 r5_2 = rect->word_c;
                u32 r1 = r4 - 2u;
                image = r7 + (r5_2 << 1);
                if ((r12_1 & 0x2u) != 0) {
                    image -= (r5_2 << 1);
                    u32 ea_1 = r1 + 2u;
                    r1 = ea_1;
                    *gptr<u16>(image) = *gptr<u16>(ea_1);
                }
                u32 r12 = s32(r12_1) >> 2;
                if (r12 != 0) {
                    do {
                        u32 r5_3 = *gptr<u16>(r1 + 2u);
                        res_1 = r12 - 1u;
                        r12 = res_1;
                        *gptr<u16>(image - (rect->word_c << 1)) = u16(r5_3);
                        u32 ea_4 = r1 + 4u;
                        r1 = ea_4;
                        *gptr<u16>(image + (0u - rect->word_c << 2)) = *gptr<u16>(ea_4);
                        image -= (rect->word_c << 2);
                        guest::preempt();
                    } while (res_1 != 0);
                }
            }
            r1_1 = framebuffer->word_8;
            i += 1u;
            r7 += 2u;
            r4 += (r1_1 << 1);
            guest::preempt();
        } while (s32(rect->word_c) > s32(i));
    }
    guest::cpu()->r[1] = r1_1;
}

}  // namespace d_005b30c4
GUEST_EXPORT_FRAMED(0x005b30c4, d_005b30c4::copy_framebuffer_rotated, 0x1f0);  // pushes {r4, r5, r6, r7, i} first, as the original

// f_005b3198: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Converts float samples to integers (with their absolute values).
namespace d_005b3198 {

struct __attribute__((packed)) Local_005b3198_r2_1 {
    float float_0;
    float float_4;
    float float_8;
};
GUEST_OFFSET(Local_005b3198_r2_1, float_0, 0x0);
GUEST_OFFSET(Local_005b3198_r2_1, float_4, 0x4);
GUEST_OFFSET(Local_005b3198_r2_1, float_8, 0x8);

inline guest::global<u32, 0x00a84398> global_00a84398;
inline guest::global<u32, 0x00a8439c> global_00a8439c;
inline guest::global<u32, 0x00a843a0> global_00a843a0;

void convert_float_samples(u32 r0, u32 r1) {
    float S0 = 0;
    float S1 = 0;
    float S2 = 0;
    u32 r1_3 = 0;
    gptr<Local_005b3198_r2_1> r2_1 = gptr<Local_005b3198_r2_1>(*gptr<u32>(guest::cpu()->r[13] + 8u));
    float S0_1 = std::bit_cast<float>(*global_00a84398);
    float S1_1 = std::bit_cast<float>(*global_00a8439c);
    float S2_1 = std::bit_cast<float>(*global_00a843a0);
    float S4_1 = S0_1 + S1_1 + S2_1;
    if (s32(std::bit_cast<u32>(fabsf(S0_1 * S0_1 + S1_1 * S1_1 + S2_1 * S2_1))) <= 0x34000000) {
        S0 = 0.33333334f;
        S1 = S0;
        S2 = S0;
    } else {
        float S3_1 = 1.0f / S4_1;
        S0 = S0_1 * S3_1;
        S1 = S1_1 * S3_1;
        S2 = S2_1 * S3_1;
    }
    float S4_2 = r2_1->float_0;
    float S5_1 = r2_1->float_4;
    float S6_1 = r2_1->float_8;
    u32 r2_2 = (r0 + r1) - r0;
    u32 r12 = 1u;
    if (s32(u32(s32(r2_2) >> 1) + 1u) <= 1) {
        guest::cpu()->r[1] = 1u;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        return;
    }
    u32 r4 = u32(s32(r2_2) >> 1) + 1u;
    float S3_2 = 31.0f;
    float S8 = 0.032258064f;
    float S4 = S4_2 * S3_2;
    float S9 = S5_1 * 63.0f;
    float S5 = S6_1 * S3_2;
    float S10 = 0.015873017f;
    do {
        u32 r1_1 = *gptr<u16>(r0);
        r12 += 1u;
        float S3_3 = S0 * (float(r1_1 >> 0xbu & 0x1fu) * S8) + float(r1_1 >> 5u & 0x3fu) * S10 * S1 + float(r1_1 & 0x1fu) * S8 * S2;
        u32 r1_2 = vcvt_uz_f(S4 * S3_3);
        u32 r2_3 = vcvt_uz_f(S9 * S3_3);
        u32 r3_2 = vcvt_uz_f(S5 * S3_3);
        if (r1_2 > 0x1fu) {
            r1_2 = 0x1fu;
        }
        if (r2_3 > 0x3fu) {
            r2_3 = 0x3fu;
        }
        if (r3_2 > 0x1fu) {
            r3_2 = 0x1fu;
        }
        r1_3 = r3_2 & 0x1fu | r1_2 << 0xb | (r2_3 & 0x3fu) << 5;
        *gptr<u16>(r0) = u16(r1_3);
        r0 += 2u;
        guest::preempt();
    } while (s32(r4) > s32(r12));
    guest::cpu()->r[1] = r1_3;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
}

}  // namespace d_005b3198
GUEST_EXPORT_FRAMED(0x005b3198, d_005b3198::convert_float_samples, 0x30);  // pushes {r4, r5} first, as the original

// f_005b3ed4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The current scene becomes the previous one; no current or next scene.
namespace d_005b3ed4 {

inline guest::global<u8, 0x00957321> previous_scene;
inline guest::global<u8, 0x00957322> current_scene;
inline guest::global<u8, 0x00957323> next_scene;

void leave_scene() {
    *previous_scene = *current_scene;
    *current_scene = 0xa5;
    *next_scene = 0xa5;
    guest::cpu()->r[1] = 0xa5u;
}

}  // namespace d_005b3ed4
GUEST_EXPORT(0x005b3ed4, d_005b3ed4::leave_scene);

// f_005b4088: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The next scene becomes the current one (the current one the previous); no next scene.
namespace d_005b4088 {

inline constexpr u32 scene_change_flags_address = 0x00957320u;
inline guest::global<u8, 0x00957321> previous_scene;
inline guest::global<u8, 0x00957322> current_scene;
inline guest::global<u8, 0x00957323> next_scene;

u32 advance_scene() {
    *previous_scene = *current_scene;
    *current_scene = *next_scene;
    *next_scene = 0xa5;
    guest::cpu()->r[1] = 0xa5u;
    return scene_change_flags_address;
}

}  // namespace d_005b4088
GUEST_EXPORT(0x005b4088, d_005b4088::advance_scene);

// f_005b4148: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Starts a scene change (0x95732c) and loads the current scene's resources with the first set (0x95787c).
namespace d_005b4148 {

inline constexpr u32 scene_environments_address = 0x00957344u;
inline constexpr u32 global_0095787c_address = 0x0095787cu;
inline guest::global<u8, 0x00957322> current_scene;
inline guest::global<u32, 0x00957328> scene_change_step;
inline guest::global<u32, 0x0095732c> scene_change_target;
inline guest::global<u32, 0x00957344> scene_environments;
inline constexpr guest::Function<0x005b3ef4, u32(u32, u32, u32)> SceneList__find;
inline constexpr guest::Function<0x006a6024, u32(u32, u32)> SceneEnv__apply_for_scene;
inline constexpr guest::Function<0x006e4490, u32(u32, u32, u32, u32)> PendingList__clear;

u32 SceneChange__start_a(u32 scene_change, u32 r1_unused, u32 r2) {
    *scene_change_target = scene_change;
    *scene_change_step = 0;
    PendingList__clear(scene_change, 0u, r2, guest::cpu()->r[3]);
    u32 r0_1 = *current_scene;
    u32 r4_1 = r0_1 >= 0xa5u ? *scene_environments : gptr<u32>(scene_environments_address)[r0_1];
    SceneEnv__apply_for_scene(r0_1, scene_environments_address);
    SceneList__find(r4_1, global_0095787c_address, 0u);
    return 1u;
}

}  // namespace d_005b4148
GUEST_EXPORT_FRAMED(0x005b4148, d_005b4148::SceneChange__start_a, 0x4010);  // pushes {r4, lr} first, as the original

// f_005b4198: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Starts a scene change (0x95732c) and loads the current scene's resources with the second set (0x95788c).
namespace d_005b4198 {

inline constexpr u32 scene_environments_address = 0x00957344u;
inline constexpr u32 global_0095788c_address = 0x0095788cu;
inline guest::global<u8, 0x00957322> current_scene;
inline guest::global<u32, 0x00957328> scene_change_step;
inline guest::global<u32, 0x0095732c> scene_change_target;
inline guest::global<u32, 0x00957344> scene_environments;
inline constexpr guest::Function<0x005b3ef4, u32(u32, u32, u32)> SceneList__find;
inline constexpr guest::Function<0x006a6024, u32(u32, u32)> SceneEnv__apply_for_scene;
inline constexpr guest::Function<0x006e4490, u32(u32, u32, u32, u32)> PendingList__clear;

u32 SceneChange__start_b(u32 scene_change, u32 r1_unused, u32 r2) {
    *scene_change_target = scene_change;
    *scene_change_step = 0;
    PendingList__clear(scene_change, 0u, r2, guest::cpu()->r[3]);
    u32 r0_1 = *current_scene;
    u32 r4_1 = r0_1 >= 0xa5u ? *scene_environments : gptr<u32>(scene_environments_address)[r0_1];
    SceneEnv__apply_for_scene(r0_1, scene_environments_address);
    SceneList__find(r4_1, global_0095788c_address, 0u);
    return 1u;
}

}  // namespace d_005b4198
GUEST_EXPORT_FRAMED(0x005b4198, d_005b4198::SceneChange__start_b, 0x4010);  // pushes {r4, lr} first, as the original

// f_005b41e8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The light kind (+0xc of the scene's environment) of a scene (the current one for 0xa5); without one, 2 for scenes
// with flag 0x20, else 0.
namespace d_005b41e8 {

inline constexpr u32 scene_environments_address = 0x00957344u;
inline guest::global<u8, 0x00957322> current_scene;
inline guest::global<u32, 0x00957344> scene_environments;

u32 scene_light_kind(u32 r0) {
    u32 r1_1 = r0;
    if (r0 == 0xa5u) {
        r1_1 = *current_scene;
    }
    u32 r1_2 = *gptr<u32>((r1_1 >= 0xa5u ? *scene_environments : gptr<u32>(scene_environments_address)[r1_1]) + 8u);
    if (r1_2 != 0) {
        u32 r0_1 = *gptr<u8>(r1_2 + 0xcu);
        guest::cpu()->r[1] = r1_2;
        return r0_1;
    }
    if (r0 == 0xa5u) {
        guest::cpu()->r[1] = 0x20u;
        return 2u;
    }
    u32 r0_2 = 0x20u & ~gptr<u32>(0x889074u)[r0];
    if (r0_2 == 0) {
        guest::cpu()->r[1] = 0x20u;
        return r0_2;
    }
    guest::cpu()->r[1] = 0x20u;
    return 2u;
}

}  // namespace d_005b41e8
GUEST_EXPORT(0x005b41e8, d_005b41e8::scene_light_kind);

// f_005b43b0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether a scene is one of 0x39 to 0x3c.
namespace d_005b43b0 {


u32 scene_is_39_to_3c(u32 scene) {
    if (scene == 0x39u || scene == 0x3au) {
        return 1u;
    }
    if (scene != 0x3bu && scene != 0x3cu) {
        return 0u;
    }
    return 1u;
}

}  // namespace d_005b43b0
GUEST_EXPORT(0x005b43b0, d_005b43b0::scene_is_39_to_3c);

// f_005b43d4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// How the scene starts: 1 when 005b4724 refuses, 3 in a main slot's page with mode above 1, 2 when no NPC position,
// else 0.
namespace d_005b43d4 {

inline guest::global<u8, 0x00957322> current_scene;
inline constexpr guest::Function<0x002fc900, u32(u32)> mode_above_1;
inline constexpr guest::Function<0x005b4018, u32(u32)> mode_page_player_is_main_slot;
inline constexpr guest::Function<0x005b4724, u32(u32, u32, u32, u32)> scene_allows_items;
inline constexpr guest::Function<0x006dfe10, u32(u32)> NpcPosGetCB__check;

u32 scene_start_mode(u32 r0) {
    if (scene_allows_items(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]) == 0) {
        return 1u;
    }
    u32 r0_2 = *current_scene;
    u32 npc_pos_get_cb = mode_page_player_is_main_slot(r0_2);
    if (npc_pos_get_cb != 0) {
        npc_pos_get_cb = mode_above_1(npc_pos_get_cb);
        if (npc_pos_get_cb != 0) {
            return 3u;
        }
    }
    u32 r0_4 = NpcPosGetCB__check(npc_pos_get_cb);
    return r0_4 == 0 ? 2u : 0u;
}

}  // namespace d_005b43d4
GUEST_EXPORT_FRAMED(0x005b43d4, d_005b43d4::scene_start_mode, 0x4010);  // pushes {r4, lr} first, as the original

// f_005b4428: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Sets the next scene to `scene` and asks for the change with its entrance parameters (6: the saved ones).
namespace d_005b4428 {

inline guest::global<u16, 0x00886e2a> global_00886e2a;
inline guest::global<u8, 0x009503bf> announcement_flag_a;
inline guest::global<u8, 0x009503c1> announcement_flag_c;
inline guest::global<u8, 0x00957323> next_scene;
inline guest::global<u8, 0x00ac196c> global_00ac196c;
inline guest::global<u32, 0x00ac1984> global_00ac1984;
inline guest::global<u8, 0x00ac1988> global_00ac1988;
inline constexpr guest::Function<0x00606a24, u32(u32, u32, u32, u32)> Announcement__set;

struct __attribute__((packed)) RequestSceneChange2Frame {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(RequestSceneChange2Frame, word_0, 0x0);
GUEST_OFFSET(RequestSceneChange2Frame, word_4, 0x4);
GUEST_SIZE(RequestSceneChange2Frame, 0x8);

void request_scene_change_2(u32 scene, u32 r1, u32 r2_unused, u32 r3) {
    guest::StackFrameOf<RequestSceneChange2Frame> frame;  // the original's stack frame
    u32 r12_1 = *frame.at<u32>(0x10);
    *next_scene = u8(scene);
    if (r1 == 6u) {
        r1 = *announcement_flag_a;
    }
    if (r3 == 6u) {
        r3 = *announcement_flag_c;
    }
    frame->word_4 = 0;
    frame->word_0 = r12_1;
    u32 announcement = *global_00886e2a;
    Announcement__set(announcement, r1, guest::cpu()->r[2], r3);
    *global_00ac196c = 0xa5;
    *global_00ac1984 = 0;
    *global_00ac1988 = 0;
    guest::cpu()->r[1] = 0xa5u;
}

}  // namespace d_005b4428
GUEST_EXPORT_FRAMED(0x005b4428, d_005b4428::request_scene_change_2, 0x4010);  // pushes {r4, lr} first, as the original

// f_005b449c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The index of `scene` among the scenes (of 0xa5) whose flags (the table at 0x889074) include all of `flags`; -1 when
// it has not.
namespace d_005b449c {


u32 scene_index_among_flagged(u32 flags, u32 scene) {
    if (scene != 0xa5u) {
        u32 r4 = 0x889074u;
        if ((flags & ~gptr<u32>(r4)[scene]) == 0) {
            u32 r12 = 0u;
            u32 i = r12;
            do {
                u32 r2_1 = i & 0xffu;
                if (scene == r2_1) {
                    return r12;
                }
                if (r2_1 != 0xa5u && (flags & ~gptr<u32>(r4)[r2_1]) == 0) {
                    r12 += 1u;
                }
                i += 1u;
                guest::preempt();
            } while (s32(i) < 0xa5);
        }
    }
    return ~0u;
}

}  // namespace d_005b449c
GUEST_EXPORT_FRAMED(0x005b449c, d_005b449c::scene_index_among_flagged, 0x30);  // pushes {r4, r5} first, as the original

// f_005b4520: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether the current scene has flag 0x40000, or flag 0x80000 with the object at 0x95c6d0 in state 2.
namespace d_005b4520 {

inline constexpr u32 tour_instance_address = 0x0095c6d0u;
inline guest::global<u8, 0x00957322> current_scene;
inline guest::global<u32, 0x0095c6d0> tour_instance;

u32 scene_is_indoor_lit() {
    u32 r0_1 = *current_scene;
    if (r0_1 != 0xa5u) {
        if ((0x40000u & ~gptr<u32>(0x889074u)[r0_1]) == 0) {
            return 1u;
        }
    }
    if (r0_1 == 0xa5u) {
        return 0u;
    }
    if ((0x80000u & ~gptr<u32>(0x889074u)[r0_1]) != 0) {
        return 0u;
    }
    u32 r0_2 = *tour_instance;
    if (r0_2 == 0) {
        return 0u;
    }
    if (*gptr<u8>(r0_2 + 0x10cu) == 2u) {
        return 1u;
    }
    return 0u;
}

}  // namespace d_005b4520
GUEST_EXPORT(0x005b4520, d_005b4520::scene_is_indoor_lit);

// f_005b4594: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether the current scene is a main slot's page, or one of the local player's six house rooms (0x889c80) whose
// owner's house exists (state not 0 or 8).
namespace d_005b4594 {

inline guest::global<u8, 0x00957322> current_scene;
inline constexpr guest::Function<0x0027ab40, u32(u32)> is_local_slot;
inline constexpr guest::Function<0x002fb328, u32(u32)> get_save_data;
inline constexpr guest::Function<0x002ff8b0, u32(u32, u32)> player_slot_byte;
inline constexpr guest::Function<0x0030fbb4, u32(u32, u32)> block_or_first;
inline constexpr guest::Function<0x005b4018, u32(u32, u32, u32, u32)> mode_page_player_is_main_slot;
inline constexpr guest::Function<0x006fa40c, u32(u32, u32, u32, u32)> owner_of_mode;

u32 current_scene_is_owned_house(u32 r0_unused, u32 r1, u32 r2, u32 r3) {
    u32 r4 = *current_scene;
    u32 r0_1 = mode_page_player_is_main_slot(r4, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    if (r0_1 == 0) {
        u32 slot_byte = player_slot_byte(4u, r1);
        u32 r0_3 = is_local_slot(slot_byte);
        r1 = guest::cpu()->r[1];
        if (r0_3 != 0) {
            u32 r0 = 0u;
            r1 = slot_byte * 6u + 0x889c80u;
L_5b45e8:;
            u32 r2_3 = r4;
            u32 r3_3 = *gptr<u8>(r1 + r0);
            if (r3_3 != r4) {
                r3_3 = *gptr<u8>(r1 + r0 + 1u);
                r2_3 = r4;
                if (r3_3 != r4) {
                    r0 += 2u;
                    if (s32(r0) < 6) {
                        guest::preempt();
                        goto L_5b45e8;
                    }
                    guest::cpu()->r[1] = r1;
                    return 0u;
                }
            }
            u32 owner = owner_of_mode(r2_3, r1, r2_3, r3_3);
            r1 = guest::cpu()->r[1];
            if (owner < 4u) {
                u32 save_data = get_save_data(owner);
                u32 r0_7 = block_or_first(save_data + 0x5d900u, owner);
                r1 = guest::cpu()->r[1];
                u32 r0_8 = *gptr<u8>(r0_7 + 4u);
                if (r0_8 != 0 && r0_8 != 8u) {
                    return 1u;
                }
            }
        }
        guest::cpu()->r[1] = r1;
        return 0u;
    }
    guest::cpu()->r[1] = r1;
    return 1u;
}

}  // namespace d_005b4594
GUEST_EXPORT_FRAMED(0x005b4594, d_005b4594::current_scene_is_owned_house, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_005b4678: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether a scene has the flag 0x10000 (never for the no-scene id 0xa5).
namespace d_005b4678 {


u32 scene_has_flag_10000(u32 scene) {
    if (scene == 0xa5u) {
        guest::cpu()->r[1] = 0x10000u;
        return 0u;
    }
    if ((0x10000u & ~gptr<u32>(0x889074u)[scene]) == 0) {
        guest::cpu()->r[1] = 0x10000u;
        return 1u;
    }
    guest::cpu()->r[1] = 0x10000u;
    return 0u;
}

}  // namespace d_005b4678
GUEST_EXPORT(0x005b4678, d_005b4678::scene_has_flag_10000);

// f_005b46a4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether the mode is one of the five special modes and its record (006f8c24) has byte +4 clear.
namespace d_005b46a4 {

inline guest::global<u32, 0x005b471c> global_005b471c;
inline guest::global<u32, 0x005b4720> global_005b4720;
inline constexpr guest::Function<0x006f8c24, u32(u32, u32, u32, u32)> room_record_of_mode;

struct __attribute__((packed)) ModeIsSpecialAndClearFrame {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(ModeIsSpecialAndClearFrame, word_0, 0x0);
GUEST_OFFSET(ModeIsSpecialAndClearFrame, word_4, 0x4);
GUEST_SIZE(ModeIsSpecialAndClearFrame, 0x8);

u32 mode_is_special_and_clear(u32 r0) {
    guest::StackFrameOf<ModeIsSpecialAndClearFrame> frame;  // the original's stack frame
    u32 r0_1 = 0;
    u32 r5 = r0;
    u32 r1 = *global_005b4720;
    u32 r4 = 0u;
    u32 r6 = frame.at(0).addr();
    frame->word_0 = *global_005b471c;
    frame->word_4 = r1;
    do {
        if (*gptr<u8>(r6 + r4) != r5) {
            goto L_5b470c;
        }
        r0_1 = room_record_of_mode(r5, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        if (r0_1 == 0) {
            goto L_5b470c;
        }
        return *gptr<u8>(r0_1 + 4u) == 0;
L_5b470c:;
        r4 += 1u;
        if (r4 >= 5u) {
            guest::cpu()->r[1] = r1;
            return 0u;
        }
        guest::preempt();
    } while (1);
}

}  // namespace d_005b46a4
GUEST_EXPORT_FRAMED(0x005b46a4, d_005b46a4::mode_is_special_and_clear, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_005b4724: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether items may be used in the current scene (by its kind, the slot and the house owner).
namespace d_005b4724 {

inline constexpr u32 tour_instance_address = 0x0095c6d0u;
inline guest::global<u8, 0x00957322> current_scene;
inline guest::global<u32, 0x0095c6d0> tour_instance;
inline constexpr guest::Function<0x0027ab40, u32(u32)> is_local_slot;
inline constexpr guest::Function<0x002ff8b0, u32(u32, u32, u32, u32)> player_slot_byte;
inline constexpr guest::Function<0x004e6e84, u32(u32, u32)> is_tour_area_scene_9;
inline constexpr guest::Function<0x005b4018, u32(u32, u32, u32, u32)> mode_page_player_is_main_slot;
inline constexpr guest::Function<0x006c4280, u32(u32, u32)> record_value;
inline constexpr guest::Function<0x006e0b2c, u32(u32, u32)> kind_has_flag_80000_or_100000;

u32 scene_allows_items(u32 r0_unused, u32 r1_unused, u32 r2, u32 r3) {
    u32 r0_1 = 0;
    u32 r1 = 0x10u;
    u32 r6 = 0x889074u;
    u32 scene_4 = *current_scene;
    if (scene_4 != 0xa5u) {
        r0_1 = r1 & ~gptr<u32>(r6)[scene_4];
        if (r0_1 == 0) {
            guest::cpu()->r[1] = r1;
            return r0_1;
        }
    }
    r1 = 8u;
    if (scene_4 != 0xa5u) {
        if ((r1 & ~gptr<u32>(r6)[scene_4]) == 0) {
            u32 slot_byte = player_slot_byte(4u, r1, r2, r3);
            u32 r0_3 = is_local_slot(slot_byte);
            r1 = guest::cpu()->r[1];
            u32 r2_2 = guest::cpu()->r[2];
            u32 r3_2 = guest::cpu()->r[3];
            if (r0_3 != 0) {
                u32 r0 = 0u;
                r1 = slot_byte * 6u + 0x889c80u;
                do {
                    if (*gptr<u8>(r1 + r0) == scene_4) {
                        guest::cpu()->r[1] = r1;
                        return 1u;
                    }
                    r2_2 = r1 + r0;
                    r3_2 = *gptr<u8>(r2_2 + 1u);
                    if (r3_2 == scene_4) {
                        guest::cpu()->r[1] = r1;
                        return 1u;
                    }
                    r0 += 2u;
                    guest::preempt();
                } while (s32(r0) < 6);
            }
            u32 r0_4 = mode_page_player_is_main_slot(scene_4, r1, r2_2, r3_2);
            r1 = guest::cpu()->r[1];
            if (r0_4 != 0 || scene_4 == 0xa3u) {
                return 1u;
            }
            u32 r0_5 = is_tour_area_scene_9(scene_4, r1);
            r1 = guest::cpu()->r[1];
            if (r0_5 != 0) {
                return 1u;
            }
            u32 r0_6 = kind_has_flag_80000_or_100000(r0_5, r1);
            r1 = guest::cpu()->r[1];
            u32 r2_5 = guest::cpu()->r[2];
            if (r0_6 != 0) {
                u32 r0_7 = *tour_instance;
                u32 zf_1 = r0_7 == 0;
                if (!zf_1) {
                    r2_5 = 0x100000u;
                    zf_1 = scene_4 == 0xa5u;
                }
                if (!zf_1) {
                    r1 = r2_5 & ~gptr<u32>(r6)[scene_4];
                    if (r1 == 0) {
                        u32 r0_8 = *gptr<s8>(r0_7 + 0x1cu);
                        u32 r0_9 = record_value(r0_8, r1);
                        r1 = guest::cpu()->r[1];
                        if (r0_9 == 0xbu) {
                            return 1u;
                        }
                    }
                }
            }
        }
    }
    guest::cpu()->r[1] = r1;
    return 0u;
}

}  // namespace d_005b4724
GUEST_EXPORT_FRAMED(0x005b4724, d_005b4724::scene_allows_items, 0x4070);  // pushes {scene_4, r5, r6, lr} first, as the original

// f_005b4854: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether the scene allows items, is not a main slot's page with mode above 1, and an NPC position exists.
namespace d_005b4854 {

inline guest::global<u8, 0x00957322> current_scene;
inline constexpr guest::Function<0x002fc900, u32(u32)> mode_above_1;
inline constexpr guest::Function<0x005b4018, u32(u32)> mode_page_player_is_main_slot;
inline constexpr guest::Function<0x005b4724, u32(u32, u32, u32, u32)> scene_allows_items;
inline constexpr guest::Function<0x006dfe10, u32(u32)> NpcPosGetCB__check;

u32 scene_allows_npc_start(u32 shop_talk) {
    if (scene_allows_items(shop_talk, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]) == 0) {
        return 0u;
    }
    u32 r0_2 = *current_scene;
    u32 npc_pos_get_cb = mode_page_player_is_main_slot(r0_2);
    if (npc_pos_get_cb != 0) {
        npc_pos_get_cb = mode_above_1(npc_pos_get_cb);
        if (npc_pos_get_cb != 0) {
            return 0u;
        }
    }
    return NpcPosGetCB__check(npc_pos_get_cb) != 0;
}

}  // namespace d_005b4854
GUEST_EXPORT_FRAMED(0x005b4854, d_005b4854::scene_allows_npc_start, 0x4010);  // pushes {r4, lr} first, as the original

// f_005b48b4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether the current scene's flags make it one of the kinds marked 0x20, 0x40000 or 0x80000 (and 4, without 0x10).
namespace d_005b48b4 {

inline guest::global<u8, 0x00957322> current_scene;

u32 current_scene_has_kind_flags() {
    u32 r0_1 = *current_scene;
    if (r0_1 != 0xa5u) {
        if ((0x10u & ~gptr<u32>(0x889074u)[r0_1]) == 0) {
            guest::cpu()->r[1] = 0x889074u;
            return 0u;
        }
    }
    if (r0_1 == 0xa5u) {
        guest::cpu()->r[1] = 0x889074u;
        return 0u;
    }
    u32 r0_2 = gptr<u32>(0x889074u)[r0_1];
    u32 r1_1 = 4u & ~r0_2;
    if (r1_1 != 0) {
        guest::cpu()->r[1] = r1_1;
        return 0u;
    }
    u32 r1_2 = 0x20u & ~r0_2;
    if (r1_2 == 0) {
        guest::cpu()->r[1] = r1_2;
        return 1u;
    }
    u32 r1_3 = 0x40000u & ~r0_2;
    if (r1_3 == 0) {
        guest::cpu()->r[1] = r1_3;
        return 1u;
    }
    if ((0x80000u & ~r0_2) != 0) {
        guest::cpu()->r[1] = 0x80000u;
        return 0u;
    }
    guest::cpu()->r[1] = 0x80000u;
    return 1u;
}

}  // namespace d_005b48b4
GUEST_EXPORT(0x005b48b4, d_005b48b4::current_scene_has_kind_flags);

// f_005b493c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Word `scene` of the scene table at 0x88997c; -1 for no scene (0xa5 or more).
namespace d_005b493c {


u32 scene_table_entry(u32 scene, u32 r1) {
    u32 r0_1 = 0;
    if (scene >= 0xa5u) {
        r0_1 = ~0u;
    } else {
        r1 = 0x88997cu;
        r0_1 = gptr<u32>(r1)[scene];
    }
    guest::cpu()->r[1] = r1;
    return r0_1;
}

}  // namespace d_005b493c
GUEST_EXPORT(0x005b493c, d_005b493c::scene_table_entry);

// f_005b49b4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether the scene (not 0xa5) lacks flag 0x100000 and its id is odd.
namespace d_005b49b4 {


u32 scene_is_odd_without_flag_100000(u32 r0, u32 r1) {
    if (r0 == 0xa5u) {
        return 0u;
    }
    u32 r1_1 = 0x100000u & ~gptr<u32>(0x889074u)[r0];
    if (r1_1 == 0) {
        guest::cpu()->r[1] = r1_1;
        return r0 & 1u;
    }
    guest::cpu()->r[1] = r1_1;
    return 0u;
}

}  // namespace d_005b49b4
GUEST_EXPORT(0x005b49b4, d_005b49b4::scene_is_odd_without_flag_100000);

// f_005b49e0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether the scene (not 0xa5) lacks flag 0x100000 and its id from 0x81 is odd.
namespace d_005b49e0 {


u32 scene_is_odd_after_81(u32 scene_4, u32 r1) {
    if (scene_4 == 0xa5u) {
        return 0u;
    }
    u32 r1_1 = 0x100000u & ~gptr<u32>(0x889074u)[scene_4];
    if (r1_1 != 0) {
        guest::cpu()->r[1] = r1_1;
        return 0u;
    }
    u32 r0_1 = scene_4 - 0x81u & 0x80000001u;
    if (r0_1 == 1u) {
        guest::cpu()->r[1] = r1_1;
        return r0_1;
    }
    guest::cpu()->r[1] = r1_1;
    return 0u;
}

}  // namespace d_005b49e0
GUEST_EXPORT(0x005b49e0, d_005b49e0::scene_is_odd_after_81);

// f_005b4a28: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Clears the two bytes at 0x957324.
namespace d_005b4a28 {

inline constexpr u32 scene_change_flags_address = 0x00957320u;
inline guest::global<u8, 0x00957324> global_00957324;
inline guest::global<u8, 0x00957325> global_00957325;

u32 clear_scene_change_flags() {
    *global_00957324 = 0;
    *global_00957325 = 0;
    guest::cpu()->r[1] = 0u;
    return scene_change_flags_address;
}

}  // namespace d_005b4a28
GUEST_EXPORT(0x005b4a28, d_005b4a28::clear_scene_change_flags);

// f_005b4a40: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether the current scene is flagged as a house room (8, without 0x10) and belongs to the local player (one of their
// six rooms, or a page the main slot's player owns).
namespace d_005b4a40 {

inline guest::global<u8, 0x00957322> current_scene;
inline constexpr guest::Function<0x0027ab40, u32(u32)> is_local_slot;
inline constexpr guest::Function<0x002ff8b0, u32(u32, u32, u32, u32)> player_slot_byte;
inline constexpr guest::Function<0x005b4018, u32(u32, u32)> mode_page_player_is_main_slot;

u32 current_scene_is_local_house_room(u32 r0_unused, u32 r1_unused, u32 r2_unused, u32 r3) {
    u32 r0_1 = 0;
    u32 r1 = 0x889074u;
    u32 r4 = *current_scene;
    if (r4 != 0xa5u) {
        r0_1 = 0x10u & ~gptr<u32>(r1)[r4];
        if (r0_1 == 0) {
            guest::cpu()->r[1] = r1;
            return r0_1;
        }
    }
    if (r4 == 0xa5u) {
        guest::cpu()->r[1] = r1;
        return 0u;
    }
    if ((8u & ~gptr<u32>(r1)[r4]) != 0) {
        guest::cpu()->r[1] = r1;
        return 0u;
    }
    u32 slot_byte = player_slot_byte(4u, r1, 8u, r3);
    u32 r0_3 = is_local_slot(slot_byte);
    r1 = guest::cpu()->r[1];
    if (r0_3 != 0) {
        u32 r0 = 0u;
        r1 = slot_byte * 6u + 0x889c80u;
        do {
            if (*gptr<u8>(r1 + r0) == r4 || *gptr<u8>(r1 + r0 + 1u) == r4) {
                guest::cpu()->r[1] = r1;
                return 1u;
            }
            r0 += 2u;
            guest::preempt();
        } while (s32(r0) < 6);
    }
    u32 r0_4 = mode_page_player_is_main_slot(r4, r1);
    r1 = guest::cpu()->r[1];
    return r0_4 != 0;
}

}  // namespace d_005b4a40
GUEST_EXPORT_FRAMED(0x005b4a40, d_005b4a40::current_scene_is_local_house_room, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_005b4c78: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Finishes the scene change (006a694c) and clears 0x957328.
namespace d_005b4c78 {

inline constexpr u32 scene_change_flags_address = 0x00957320u;
inline guest::global<u32, 0x00957328> scene_change_step;
inline constexpr guest::Function<0x006a694c, u32(u32, u32, u32, u32)> Map__release;

void SceneChange__finish(u32 scene_change, u32 r1) {
    Map__release(scene_change, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    *scene_change_step = 0;
    guest::cpu()->r[1] = scene_change_flags_address;
}

}  // namespace d_005b4c78
GUEST_EXPORT_FRAMED(0x005b4c78, d_005b4c78::SceneChange__finish, 0x4010);  // pushes {r4, lr} first, as the original

// f_005b4ce8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Pushes a word on the stack (+0x64, count +0x60).
namespace d_005b4ce8 {

struct __attribute__((packed)) Stack {
    u8 unknown_0[0x60];  // (not used here)
    u32 word_60;
};
GUEST_OFFSET(Stack, word_60, 0x60);


void Stack__push(gptr<Stack> stack, u32 r1) {
    *gptr<u32>(stack.addr() + (stack->word_60 << 2) + 0x64u) = r1;
    u32 r1_1 = stack->word_60 + 1u;
    stack->word_60 = r1_1;
    guest::cpu()->r[1] = r1_1;
}

}  // namespace d_005b4ce8
GUEST_EXPORT(0x005b4ce8, d_005b4ce8::Stack__push);

// f_005b4d04: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// When no scene change is pending: requests the change kept in the object (scene +0x24, position, angle) and clears
// it; true when requested.
namespace d_005b4d04 {

struct __attribute__((packed)) SceneChange {
    u8 unknown_0[0x24];  // (not used here)
    u8 byte_24;
    u8 unknown_25[0x17];  // (not used here)
    u32 word_3c;
    u8 byte_40;
};
GUEST_OFFSET(SceneChange, byte_24, 0x24);
GUEST_OFFSET(SceneChange, word_3c, 0x3c);
GUEST_OFFSET(SceneChange, byte_40, 0x40);

struct __attribute__((packed)) Local_005b4d04_ea_2 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_005b4d04_ea_2, word_0, 0x0);
GUEST_OFFSET(Local_005b4d04_ea_2, word_4, 0x4);
GUEST_OFFSET(Local_005b4d04_ea_2, word_8, 0x8);

inline guest::global<u8, 0x00957323> next_scene;
inline constexpr guest::Function<0x005b5b78, u32(u32, u32, u32, u32)> SceneChange__request;

struct __attribute__((packed)) SceneChangeRequestPendingFrame {
    u32 word_0;
    u8 unknown_4[0xc];  // (not read or written by name)
    u32 word_10;
    u8 unknown_14[0x4];  // (not read or written by name)
};
GUEST_OFFSET(SceneChangeRequestPendingFrame, word_0, 0x0);
GUEST_OFFSET(SceneChangeRequestPendingFrame, word_10, 0x10);
GUEST_SIZE(SceneChangeRequestPendingFrame, 0x18);

u32 SceneChange__request_pending(gptr<SceneChange> scene_change, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<SceneChangeRequestPendingFrame> frame;  // the original's stack frame
    u32 r0_1 = *frame.at<u32>(0x20);
    if (*next_scene < 0xa5u) {
        return 0u;
    }
    frame->word_10 = r0_1;
    gptr<Local_005b4d04_ea_2> ea_2 = gptr<Local_005b4d04_ea_2>(frame.at(4).addr());
    ea_2->word_0 = r1;
    ea_2->word_4 = r2;
    ea_2->word_8 = r3;
    frame->word_0 = scene_change->word_3c;
    u32 r1_1 = scene_change->byte_24;
    u32 r0_2 = SceneChange__request(scene_change.addr(), r1_1, scene_change.addr() + 0x28u, scene_change.addr() + 0x34u);
    if (r0_2 == 0) {
        return r0_2;
    }
    scene_change->byte_24 = 0xa5;
    scene_change->word_3c = 0;
    scene_change->byte_40 = 0;
    guest::cpu()->r[1] = 0xa5u;
    return 1u;
}

}  // namespace d_005b4d04
GUEST_EXPORT_FRAMED(0x005b4d04, d_005b4d04::SceneChange__request_pending, 0x4010);  // pushes {r4, lr} first, as the original

// f_005b4eb0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Pops the top word into the first of the four slots (+0x64 to +0x70) that holds `value`.
namespace d_005b4eb0 {

struct __attribute__((packed)) Stack {
    u8 unknown_0[0x60];  // (not used here)
    u32 word_60;
    u32 word_64;
    u32 word_68;
    u32 word_6c;
    u32 word_70;
};
GUEST_OFFSET(Stack, word_60, 0x60);
GUEST_OFFSET(Stack, word_64, 0x64);
GUEST_OFFSET(Stack, word_68, 0x68);
GUEST_OFFSET(Stack, word_6c, 0x6c);
GUEST_OFFSET(Stack, word_70, 0x70);

struct __attribute__((packed)) Local_005b4eb0_r1_1 {
    u8 unknown_0[0x60];  // (not used here)
    u32 word_60;
};
GUEST_OFFSET(Local_005b4eb0_r1_1, word_60, 0x60);

struct __attribute__((packed)) Local_005b4eb0_r1_3 {
    u8 unknown_0[0x60];  // (not used here)
    u32 word_60;
};
GUEST_OFFSET(Local_005b4eb0_r1_3, word_60, 0x60);

struct __attribute__((packed)) Local_005b4eb0_r1_5 {
    u8 unknown_0[0x60];  // (not used here)
    u32 word_60;
};
GUEST_OFFSET(Local_005b4eb0_r1_5, word_60, 0x60);

struct __attribute__((packed)) Local_005b4eb0_r1_7 {
    u8 unknown_0[0x60];  // (not used here)
    u32 word_60;
};
GUEST_OFFSET(Local_005b4eb0_r1_7, word_60, 0x60);


void Stack__remove_top_matching(gptr<Stack> stack, u32 r1) {
    u32 r2_1 = ~0u;
    if (stack->word_64 == r1) {
        gptr<Local_005b4eb0_r1_1> r1_1 = gptr<Local_005b4eb0_r1_1>(stack.addr() + (stack->word_60 << 2));
        stack->word_64 = r1_1->word_60;
        r1_1->word_60 = r2_1;
        u32 r1_2 = stack->word_60 - 1u;
        stack->word_60 = r1_2;
        guest::cpu()->r[1] = r1_2;
        return;
    }
    if (stack->word_68 == r1) {
        gptr<Local_005b4eb0_r1_3> r1_3 = gptr<Local_005b4eb0_r1_3>(stack.addr() + (stack->word_60 << 2));
        stack->word_68 = r1_3->word_60;
        r1_3->word_60 = r2_1;
        u32 r1_4 = stack->word_60 - 1u;
        stack->word_60 = r1_4;
        guest::cpu()->r[1] = r1_4;
        return;
    }
    if (stack->word_6c == r1) {
        gptr<Local_005b4eb0_r1_5> r1_5 = gptr<Local_005b4eb0_r1_5>(stack.addr() + (stack->word_60 << 2));
        stack->word_6c = r1_5->word_60;
        r1_5->word_60 = r2_1;
        u32 r1_6 = stack->word_60 - 1u;
        stack->word_60 = r1_6;
        guest::cpu()->r[1] = r1_6;
        return;
    }
    if (stack->word_70 != r1) {
        guest::cpu()->r[1] = r1;
        return;
    }
    gptr<Local_005b4eb0_r1_7> r1_7 = gptr<Local_005b4eb0_r1_7>(stack.addr() + (stack->word_60 << 2));
    stack->word_70 = r1_7->word_60;
    r1_7->word_60 = r2_1;
    u32 r1_8 = stack->word_60 - 1u;
    stack->word_60 = r1_8;
    guest::cpu()->r[1] = r1_8;
}

}  // namespace d_005b4eb0
GUEST_EXPORT(0x005b4eb0, d_005b4eb0::Stack__remove_top_matching);

// f_005b522c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Calls 005b6378 with the current scene and the arguments.
namespace d_005b522c {

struct __attribute__((packed)) Local_005b522c_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_005b522c_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_005b522c_ea_1, word_4, 0x4);

struct __attribute__((packed)) Local_005b522c_ea_3 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_005b522c_ea_3, word_0, 0x0);
GUEST_OFFSET(Local_005b522c_ea_3, word_4, 0x4);

inline guest::global<u8, 0x00957322> current_scene;
inline constexpr guest::Function<0x005b6378, u32(u32, u32, u32, u32)> Scene__change_to;

struct __attribute__((packed)) Call5b6378WithSceneFrame {
    u32 word_0;
    u8 unknown_4[0x8];  // (not read or written by name)
};
GUEST_OFFSET(Call5b6378WithSceneFrame, word_0, 0x0);
GUEST_SIZE(Call5b6378WithSceneFrame, 0xc);

u32 call_5b6378_with_scene(u32 r0_unused, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Call5b6378WithSceneFrame> frame;  // the original's stack frame
    gptr<Local_005b522c_ea_1> ea_1 = gptr<Local_005b522c_ea_1>(frame.at(0x18).addr());
    u32 r2_1 = ea_1->word_0;
    u32 r12_1 = ea_1->word_4;
    u32 r1_1 = *current_scene;
    frame->word_0 = r3;
    gptr<Local_005b522c_ea_3> ea_3 = gptr<Local_005b522c_ea_3>(frame.at(4).addr());
    ea_3->word_0 = r2_1;
    ea_3->word_4 = r12_1;
    Scene__change_to(guest::cpu()->r[0], r1_1, r1, r2);
    return guest::cpu()->r[0];
}

}  // namespace d_005b522c
GUEST_EXPORT_FRAMED(0x005b522c, d_005b522c::call_5b6378_with_scene, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_005b5b78: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// When no scene change is pending: stores the target position, angles and fade time, and requests the change
// (005b4d7c); true when it was.
namespace d_005b5b78 {

struct __attribute__((packed)) SceneChange {
    u8 unknown_0[0x44];  // (not used here)
    u8 byte_44;
    u8 unknown_45[0x3];  // (not used here)
    float float_48;
    float float_4c;
    float float_50;
    u16 half_54;
    u16 half_56;
    u16 half_58;
    u8 unknown_5a[0x2];  // (not used here)
    float float_5c;
};
GUEST_OFFSET(SceneChange, byte_44, 0x44);
GUEST_OFFSET(SceneChange, float_48, 0x48);
GUEST_OFFSET(SceneChange, float_4c, 0x4c);
GUEST_OFFSET(SceneChange, float_50, 0x50);
GUEST_OFFSET(SceneChange, half_54, 0x54);
GUEST_OFFSET(SceneChange, half_56, 0x56);
GUEST_OFFSET(SceneChange, half_58, 0x58);
GUEST_OFFSET(SceneChange, float_5c, 0x5c);

struct __attribute__((packed)) SceneChangeRequestArg3 {
    u16 half_0;
    u16 half_2;
    u16 half_4;
};
GUEST_OFFSET(SceneChangeRequestArg3, half_0, 0x0);
GUEST_OFFSET(SceneChangeRequestArg3, half_2, 0x2);
GUEST_OFFSET(SceneChangeRequestArg3, half_4, 0x4);

struct __attribute__((packed)) Local_005b5b78_r0_1 {
    float float_0;
    float float_4;
};
GUEST_OFFSET(Local_005b5b78_r0_1, float_0, 0x0);
GUEST_OFFSET(Local_005b5b78_r0_1, float_4, 0x4);

inline guest::global<u8, 0x00957323> next_scene;
inline constexpr guest::Function<0x005b4d7c, u32(u32, u32, u32, u32)> Scene__request_change;

struct __attribute__((packed)) SceneChangeRequestFrame {
    float float_0;
    float float_4;
    u8 unknown_8[0x4];  // (not read or written by name)
};
GUEST_OFFSET(SceneChangeRequestFrame, float_0, 0x0);
GUEST_OFFSET(SceneChangeRequestFrame, float_4, 0x4);
GUEST_SIZE(SceneChangeRequestFrame, 0xc);

u32 SceneChange__request(gptr<SceneChange> scene_change, u32 r1_unused, gptr<Float3> arg2, gptr<SceneChangeRequestArg3> arg3) {
    guest::StackFrameOf<SceneChangeRequestFrame> frame;  // the original's stack frame
    gptr<Local_005b5b78_r0_1> r0_1 = gptr<Local_005b5b78_r0_1>(frame.at(0x24).addr());
    u32 r5_1 = *frame.at<u32>(0x20);
    u32 r12_1 = *frame.at<u32>(0x1c);
    float S0_1 = std::bit_cast<float>(*frame.at<u32>(0x18));
    float S1_1 = r0_1->float_0;
    float S2_1 = r0_1->float_4;
    if (*next_scene < 0xa5u) {
        guest::cpu()->s[0] = S0_1;
        guest::cpu()->s[1] = S1_1;
        return 0u;
    }
    scene_change->float_48 = arg2->v[0];
    scene_change->float_4c = arg2->v[1];
    scene_change->float_50 = arg2->v[2];
    scene_change->half_54 = arg3->half_0;
    scene_change->half_56 = arg3->half_2;
    scene_change->half_58 = arg3->half_4;
    scene_change->float_5c = S0_1;
    frame->float_0 = S1_1;
    frame->float_4 = S2_1;
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    u32 r0_2 = Scene__request_change(scene_change.addr(), guest::cpu()->r[1], r12_1, r5_1);
    if (r0_2 == 0) {
        return r0_2;
    }
    scene_change->byte_44 = 0;
    return 1u;
}

}  // namespace d_005b5b78
GUEST_EXPORT_FRAMED(0x005b5b78, d_005b5b78::SceneChange__request, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_005b5d38: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Requests a scene change with a 3x4 matrix and two values (005b5d60).
namespace d_005b5d38 {

struct __attribute__((packed)) Local_005b5d38_ea_1 {
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
GUEST_OFFSET(Local_005b5d38_ea_1, float_0, 0x0);
GUEST_OFFSET(Local_005b5d38_ea_1, float_4, 0x4);
GUEST_OFFSET(Local_005b5d38_ea_1, float_8, 0x8);
GUEST_OFFSET(Local_005b5d38_ea_1, float_c, 0xc);
GUEST_OFFSET(Local_005b5d38_ea_1, float_10, 0x10);
GUEST_OFFSET(Local_005b5d38_ea_1, float_14, 0x14);
GUEST_OFFSET(Local_005b5d38_ea_1, float_18, 0x18);
GUEST_OFFSET(Local_005b5d38_ea_1, float_1c, 0x1c);
GUEST_OFFSET(Local_005b5d38_ea_1, float_20, 0x20);
GUEST_OFFSET(Local_005b5d38_ea_1, float_24, 0x24);
GUEST_OFFSET(Local_005b5d38_ea_1, float_28, 0x28);
GUEST_OFFSET(Local_005b5d38_ea_1, float_2c, 0x2c);

struct __attribute__((packed)) Local_005b5d38_r12_1 {
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
GUEST_OFFSET(Local_005b5d38_r12_1, float_0, 0x0);
GUEST_OFFSET(Local_005b5d38_r12_1, float_4, 0x4);
GUEST_OFFSET(Local_005b5d38_r12_1, float_8, 0x8);
GUEST_OFFSET(Local_005b5d38_r12_1, float_c, 0xc);
GUEST_OFFSET(Local_005b5d38_r12_1, float_10, 0x10);
GUEST_OFFSET(Local_005b5d38_r12_1, float_14, 0x14);
GUEST_OFFSET(Local_005b5d38_r12_1, float_18, 0x18);
GUEST_OFFSET(Local_005b5d38_r12_1, float_1c, 0x1c);
GUEST_OFFSET(Local_005b5d38_r12_1, float_20, 0x20);
GUEST_OFFSET(Local_005b5d38_r12_1, float_24, 0x24);
GUEST_OFFSET(Local_005b5d38_r12_1, float_28, 0x28);
GUEST_OFFSET(Local_005b5d38_r12_1, float_2c, 0x2c);

inline constexpr guest::Function<0x005b5d60, u32(u32, u32, u32, u32)> Scene__request_change_at;

struct __attribute__((packed)) SceneChangeRequestWithMatrixFrame {
    u32 word_0;
    u32 word_4;
    u8 unknown_8[0x34];  // (not read or written by name)
};
GUEST_OFFSET(SceneChangeRequestWithMatrixFrame, word_0, 0x0);
GUEST_OFFSET(SceneChangeRequestWithMatrixFrame, word_4, 0x4);
GUEST_SIZE(SceneChangeRequestWithMatrixFrame, 0x3c);

u32 SceneChange__request_with_matrix(u32 r0_unused, u32 r1_unused, u32 r2, u32 r3) {
    guest::StackFrameOf<SceneChangeRequestWithMatrixFrame> frame;  // the original's stack frame
    gptr<Local_005b5d38_r12_1> r12_1 = gptr<Local_005b5d38_r12_1>(frame.at(0x40).addr());
    float S0_1 = r12_1->float_0;
    float S1_1 = r12_1->float_4;
    float S2_1 = r12_1->float_8;
    float S3_1 = r12_1->float_c;
    float S4_1 = r12_1->float_10;
    float S5_1 = r12_1->float_14;
    float S6_1 = r12_1->float_18;
    float S7_1 = r12_1->float_1c;
    float S8_1 = r12_1->float_20;
    float S9_1 = r12_1->float_24;
    float S10_1 = r12_1->float_28;
    float S11_1 = r12_1->float_2c;
    gptr<Local_005b5d38_ea_1> ea_1 = gptr<Local_005b5d38_ea_1>(frame.at(8).addr());
    ea_1->float_0 = S0_1;
    ea_1->float_4 = S1_1;
    ea_1->float_8 = S2_1;
    ea_1->float_c = S3_1;
    ea_1->float_10 = S4_1;
    ea_1->float_14 = S5_1;
    ea_1->float_18 = S6_1;
    ea_1->float_1c = S7_1;
    ea_1->float_20 = S8_1;
    ea_1->float_24 = S9_1;
    ea_1->float_28 = S10_1;
    ea_1->float_2c = S11_1;
    frame->word_0 = r2;
    frame->word_4 = r3;
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    Scene__request_change_at(guest::cpu()->r[0], guest::cpu()->r[1], r2, r3);
    return guest::cpu()->r[0];
}

}  // namespace d_005b5d38
GUEST_EXPORT_FRAMED(0x005b5d38, d_005b5d38::SceneChange__request_with_matrix, 0x4000);  // pushes {lr} first, as the original

// f_005b6a10: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether `scene` is one of the six rooms (the table at 0x889c80, six per player) of the house of the player on this
// console.
namespace d_005b6a10 {

inline constexpr guest::Function<0x0027ab40, u32(u32)> is_local_slot;
inline constexpr guest::Function<0x002ff8b0, u32(u32, u32, u32, u32)> player_slot_byte;

u32 scene_is_local_players_house(u32 r0, u32 r1, u32 r2) {
    u32 scene = r0;
    u32 slot_byte = player_slot_byte(4u, r1, r2, guest::cpu()->r[3]);
    u32 r0_2 = is_local_slot(slot_byte);
    r1 = guest::cpu()->r[1];
    if (r0_2 != 0) {
        r0 = 0u;
        r1 = slot_byte * 6u + 0x889c80u;
        do {
            if (*gptr<u8>(r1 + r0) == scene || *gptr<u8>(r1 + r0 + 1u) == scene) {
                guest::cpu()->r[1] = r1;
                return 1u;
            }
            r0 += 2u;
            guest::preempt();
        } while (s32(r0) < 6);
    }
    guest::cpu()->r[1] = r1;
    return 0u;
}

}  // namespace d_005b6a10
GUEST_EXPORT_FRAMED(0x005b6a10, d_005b6a10::scene_is_local_players_house, 0x4070);  // pushes {scene, r5, r6, lr} first, as the original

// f_005b7418: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Stores a byte at +0x19764 of the villager part.
namespace d_005b7418 {

struct __attribute__((packed)) VillagerPart {
    u8 unknown_0[0x19764];  // (not used here)
    u8 byte_19764;
};
GUEST_OFFSET(VillagerPart, byte_19764, 0x19764);


void VillagerPart__set_byte_19764(gptr<VillagerPart> villager_part, u32 r1) {
    villager_part->byte_19764 = u8(r1);
}

}  // namespace d_005b7418
GUEST_EXPORT(0x005b7418, d_005b7418::VillagerPart__set_byte_19764);

// f_005b769c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Adds `amount` (at least 1) to the 3-bit level in bits 11-13 of +0x2510, saturating at 7.
namespace d_005b769c {

struct __attribute__((packed)) Villager {
    u8 unknown_0[0x2510];  // (not used here)
    u32 word_2510;
};
GUEST_OFFSET(Villager, word_2510, 0x2510);


void Villager__add_to_mood_level(gptr<Villager> villager, u32 r1) {
    u32 r2_1 = villager->word_2510;
    if (s32(r1) < 0) {
        r1 = 1u;
    }
    villager->word_2510 = s32(r1 + (r2_1 >> 0xbu & 7u)) < 7 ? ror32(ror32(r2_1, 0xe) + (r1 << 0x1d), 0x12) : r2_1 | 0x3800u;
}

}  // namespace d_005b769c
GUEST_EXPORT(0x005b769c, d_005b769c::Villager__add_to_mood_level);

// f_005b8188: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Clears bits 9-10 of +0x2510.
namespace d_005b8188 {

struct __attribute__((packed)) Villager {
    u8 unknown_0[0x2510];  // (not used here)
    u32 word_2510;
};
GUEST_OFFSET(Villager, word_2510, 0x2510);


void Villager__clear_flags_9_10(gptr<Villager> villager) {
    villager->word_2510 = villager->word_2510 & ~0x600u;
}

}  // namespace d_005b8188
GUEST_EXPORT(0x005b8188, d_005b8188::Villager__clear_flags_9_10);

// f_005b81b8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Sets or clears bit 15 of +0x2510.
namespace d_005b81b8 {

struct __attribute__((packed)) Villager {
    u8 unknown_0[0x2510];  // (not used here)
    u32 word_2510;
};
GUEST_OFFSET(Villager, word_2510, 0x2510);


void Villager__set_flag_15(gptr<Villager> villager, u32 r1) {
    u32 zf_1 = r1 == 0;
    u32 r1_1 = villager->word_2510;
    villager->word_2510 = zf_1 ? r1_1 & ~0x8000u : r1_1 | 0x8000u;
}

}  // namespace d_005b81b8
GUEST_EXPORT(0x005b81b8, d_005b81b8::Villager__set_flag_15);

// f_005b81fc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Clears bits 3-6 of +0x2510.
namespace d_005b81fc {

struct __attribute__((packed)) Villager {
    u8 unknown_0[0x2510];  // (not used here)
    u32 word_2510;
};
GUEST_OFFSET(Villager, word_2510, 0x2510);


void Villager__clear_slot_bits(gptr<Villager> villager) {
    u32 r1_1 = villager->word_2510 & ~0x78u;
    villager->word_2510 = r1_1;
    guest::cpu()->r[1] = r1_1;
}

}  // namespace d_005b81fc
GUEST_EXPORT(0x005b81fc, d_005b81fc::Villager__clear_slot_bits);

// f_005b96a8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Sends the villager's letter for the request (template by its id) to the player; marks the request state 9.
namespace d_005b96a8 {

struct __attribute__((packed)) ValidVillager {
    u8 unknown_0[0x2c];  // (not used here)
    u16 half_2c;
};
GUEST_OFFSET(ValidVillager, half_2c, 0x2c);

inline constexpr u32 empty_item_address = 0x0095bfdcu;
inline constexpr guest::Function<0x00118c9d, u32(u32, u32)> index_of_villager_in_town;
inline constexpr guest::Function<0x002f77e8, u32(u32)> same_pointer;
inline constexpr guest::Function<0x002fae84, u32(u32, u32, u32, u32)> get_data_base;
inline constexpr guest::Function<0x002fb310, u32(u32)> slot_records_of;
inline constexpr guest::Function<0x002fc934, u32(u32, u32)> Item__copy_b;
inline constexpr guest::Function<0x002ff368, u32(u32)> Letter__Letter;
inline constexpr guest::Function<0x003058c9, u32(u32, u32)> valid_villager_at;
inline constexpr guest::Function<0x0030d1bc, u32(u32, u32, u32, u32)> sead__FixedSafeString_32___FixedSafeString_0030d1bc;
inline constexpr guest::Function<0x0030da05, u32(u32, u32, u32, u32)> Villager__take_gift_item;
inline constexpr guest::Function<0x0030dad8, u32(u32, u32, u32, u32)> PackedKey__set_entry;
inline constexpr guest::Function<0x0030dc84, u32(u32, u32)> find_player_by_identity;

struct __attribute__((packed)) VillagerRequestSendLetterFrame {
    u32 word_0;
    u32 word_4;
    u8 unknown_8[0x284];  // (not read or written by name)
};
GUEST_OFFSET(VillagerRequestSendLetterFrame, word_0, 0x0);
GUEST_OFFSET(VillagerRequestSendLetterFrame, word_4, 0x4);
GUEST_SIZE(VillagerRequestSendLetterFrame, 0x28c);

void VillagerRequest__send_letter(u32 villager_request, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<VillagerRequestSendLetterFrame> frame;  // the original's stack frame
    u32 data_base = get_data_base(villager_request, r1, r2, r3);
    u32 records = slot_records_of(data_base);
    u32 r4_1 = records + 4u;
    u32 r0_3 = index_of_villager_in_town(r4_1, villager_request + 0xcu);
    gptr<ValidVillager> valid_villager = gptr<ValidVillager>(valid_villager_at(r4_1, r0_3));
    if (valid_villager.addr() != 0) {
        Letter__Letter(frame.at(8).addr());
        frame->word_0 = Item__copy_b(frame.at(0x288).addr(), empty_item_address);
        frame->word_4 = ~0u;
        u32 r1_4 = valid_villager->half_2c;
        sead__FixedSafeString_32___FixedSafeString_0030d1bc(frame.at(8).addr(), r1_4, r1, 0u);
        frame->word_0 = 0;
        frame->word_4 = 0;
        u32 r0_8 = Villager__take_gift_item(valid_villager.addr(), frame.at(8).addr(), r1, 6u);
        if (r0_8 == 0) {
            u32 data_base_2 = get_data_base(r0_8, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
            r0_8 = find_player_by_identity(data_base_2 + 0x20u, r1);
            if (r0_8 != 0) {
                frame->word_0 = 0;
                u32 r2_8 = valid_villager->half_2c;
                r0_8 += 0x8ebeu;
                PackedKey__set_entry(r0_8, 0u, r2_8, 0u);
            }
        }
        same_pointer(r0_8);
    }
    *gptr<u8>(villager_request + 9u) = 9;
}

}  // namespace d_005b96a8
GUEST_EXPORT_FRAMED(0x005b96a8, d_005b96a8::VillagerRequest__send_letter, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_005b9ee0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Completes a villager's request: raises the friendship with the player and records it.
namespace d_005b9ee0 {

struct __attribute__((packed)) Local_005b9ee0_r0_12 {
    u8 unknown_0[0x272];  // (not used here)
    u8 byte_272;
};
GUEST_OFFSET(Local_005b9ee0_r0_12, byte_272, 0x272);

inline constexpr guest::Function<0x0010cadd, u32(u32, u32, u32, u32)> find_valid_villager_record;
inline constexpr guest::Function<0x00112f9d, u32(u32, u32, u32, u32)> Villager__adjust_friendship_with_player;
inline constexpr guest::Function<0x002c002c, u32(u32, u32, u32, u32)> small_record_address_002c002c;
inline constexpr guest::Function<0x002fae84, u32(u32, u32, u32, u32)> get_data_base;
inline constexpr guest::Function<0x002fb310, u32(u32)> slot_records_of;
inline constexpr guest::Function<0x002fb328, u32(u32)> get_save_data;
inline constexpr guest::Function<0x002fb7e8, u32(u32, u32)> player_at;
inline constexpr guest::Function<0x005ba098, u32(u32, u32, u32, u32)> Catalog__entry_of_item;
inline constexpr guest::Function<0x0071dcdc, u32(u32, u32, u32, u32)> small_record_address_0071dcdc;
inline constexpr guest::Function<0x00756758, u32(u32, u32)> index_of_entry_40;

u32 VillagerRequest__complete(u32 villager_request, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x18);  // the original's stack frame
    u32 r0_11 = 0;
    u32 r5 = villager_request;
    u32 r4 = ~0u;
    u32 data_base = get_data_base(villager_request, r1, r2, r3);
    u32 records = slot_records_of(data_base);
    r3 = guest::cpu()->r[3];
    u32 r6 = records + 4u;
    r1 = records + 0x1744cu;
    villager_request = 0u;
L_5b9f04:;
    u32 r2_2 = r1 + (villager_request << 7);
    u32 zf_1 = r2_2 == r5;
    if (!zf_1) {
        r3 = r2_2 + 0x40u;
        zf_1 = r3 == r5;
    }
    if (zf_1) {
        r4 = villager_request;
    } else {
        villager_request += 1u;
        if (s32(villager_request) < 4) {
            guest::preempt();
            goto L_5b9f04;
        }
    }
    u32 data_base_2 = get_data_base(villager_request, r1, r2_2, r3);
    u32 player = player_at(data_base_2 + 0x20u, r4 & 0xffu);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (player == 0) {
        frame.release();
        return Catalog__entry_of_item(r5, r1, r2, r3);
    }
    u32 villager = find_valid_villager_record(r6, r5 + 0xcu, r2, r3);
    if (villager != 0) {
        villager = Villager__adjust_friendship_with_player(villager, ~3u, player, 1u);
    }
    u32 save_data = get_save_data(villager);
    u32 r0_9 = index_of_entry_40(save_data + 0x406ecu, r5);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    u32 r7 = r0_9;
    r6 = player + 0x7008u;
    r4 = 0u;
L_5b9fa4:;
    u32 r0_10 = small_record_address_0071dcdc(r6, r4, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0_10 == 0) {
        goto L_5ba01c;
    }
    r0_11 = *gptr<u8>(r0_10 + 0x272u);
    if ((r0_11 & 0x80u) == 0 || (r0_11 & 0x20u) != 0 || (r0_11 & 7u) != r7) {
        goto L_5ba01c;
    }
    r1 = r4;
    if (r4 + 1u != 0) {
        gptr<Local_005b9ee0_r0_12> r0_12 = gptr<Local_005b9ee0_r0_12>(small_record_address_002c002c(r6, r1, r2, r3));
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (r0_12.addr() != 0) {
            r1 = r0_12->byte_272;
            if ((r1 & 0x80u) != 0) {
                r1 |= 0x28u;
                r0_12->byte_272 = u8(r1);
            }
        }
    }
    frame.release();
    return Catalog__entry_of_item(r5, r1, r2, r3);
L_5ba01c:;
    r4 += 1u;
    if (r4 >= 0xau) {
        frame.release();
        return Catalog__entry_of_item(r5, r1, r2, r3);
    }
    guest::preempt();
    goto L_5b9fa4;
}

}  // namespace d_005b9ee0
GUEST_EXPORT(0x005b9ee0, d_005b9ee0::VillagerRequest__complete);

// f_005ba234: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Starts a request from a villager: today's date, state 3, the villager's 0x2f-byte identity and a random length (14,
// 21 or 30 days).
namespace d_005ba234 {

struct __attribute__((packed)) VillagerRequest {
    u8 unknown_0[0x8];  // (not used here)
    u8 byte_8;
    u8 byte_9;
    u8 byte_a;
    u8 unknown_b[0x33];  // (not used here)
    u8 byte_3e;
};
GUEST_OFFSET(VillagerRequest, byte_8, 0x8);
GUEST_OFFSET(VillagerRequest, byte_9, 0x9);
GUEST_OFFSET(VillagerRequest, byte_a, 0xa);
GUEST_OFFSET(VillagerRequest, byte_3e, 0x3e);

struct __attribute__((packed)) VillagerRequestStartArg1 {
    u8 unknown_0[0x1028];  // (not used here)
    u32 word_1028;
};
GUEST_OFFSET(VillagerRequestStartArg1, word_1028, 0x1028);

struct __attribute__((packed)) Now {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Now, word_0, 0x0);
GUEST_OFFSET(Now, word_4, 0x4);
GUEST_OFFSET(Now, word_8, 0x8);

inline constexpr guest::Function<0x002f8574, u32(u32, u32, u32)> copy_bytes_at_any_alignment;
inline constexpr guest::Function<0x002fb378, u32(u32)> game_time_now;
inline constexpr guest::Function<0x002ff6f4, u32(u32)> random_below_entry;
inline constexpr guest::Function<0x00308efc, u32(u32, u32, u32)> TimeStamp__move_to_day_start;
inline constexpr guest::Function<0x005ba098, u32(u32, u32, u32, u32)> Catalog__entry_of_item;
inline constexpr guest::Function<0x005cddb4, u32(u32, u32, u32)> GameTime__set_time_stamp;

struct __attribute__((packed)) VillagerRequestStartFrame {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u8 unknown_c[0x4];  // (not read or written by name)
};
GUEST_OFFSET(VillagerRequestStartFrame, word_0, 0x0);
GUEST_OFFSET(VillagerRequestStartFrame, word_4, 0x4);
GUEST_OFFSET(VillagerRequestStartFrame, word_8, 0x8);
GUEST_SIZE(VillagerRequestStartFrame, 0x10);

void VillagerRequest__start(gptr<VillagerRequest> villager_request, gptr<VillagerRequestStartArg1> arg1, u32 r2) {
    guest::StackFrameOf<VillagerRequestStartFrame> frame;  // the original's stack frame
    u32 entry_2 = Catalog__entry_of_item(villager_request.addr(), arg1.addr(), r2, guest::cpu()->r[3]);
    gptr<Now> now_2 = gptr<Now>(game_time_now(entry_2));
    u32 r1_2 = now_2->word_0;
    u32 r2_2 = now_2->word_4;
    frame->word_8 = now_2->word_8;
    frame->word_0 = r1_2;
    frame->word_4 = r2_2;
    TimeStamp__move_to_day_start(frame.at(0).addr(), r1_2, r2_2);
    villager_request->byte_8 = 3;
    villager_request->byte_9 = 0;
    GameTime__set_time_stamp(villager_request.addr(), frame.at(0).addr(), 3u);
    villager_request->byte_a = 7;
    copy_bytes_at_any_alignment(villager_request.addr() + 0xcu, arg1->word_1028, 0x2fu);
    u32 r0_5 = random_below_entry(3u);
    if (r0_5 == 0) {
        villager_request->byte_3e = 0xe;
    } else {
        villager_request->byte_3e = u8(r0_5 == 1u ? 0x15u : 0x1eu);
    }
}

}  // namespace d_005ba234
GUEST_EXPORT_FRAMED(0x005ba234, d_005ba234::VillagerRequest__start, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_005ba980: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Moves a request in state 4 to state 5.
namespace d_005ba980 {

struct __attribute__((packed)) VillagerRequest {
    u8 unknown_0[0x9];  // (not used here)
    u8 byte_9;
};
GUEST_OFFSET(VillagerRequest, byte_9, 0x9);


void VillagerRequest__advance_4_to_5(gptr<VillagerRequest> villager_request) {
    u32 r1_1 = villager_request->byte_9;
    if (r1_1 == 4u) {
        r1_1 = 5u;
        villager_request->byte_9 = u8(r1_1);
    }
    guest::cpu()->r[1] = r1_1;
}

}  // namespace d_005ba980
GUEST_EXPORT(0x005ba980, d_005ba980::VillagerRequest__advance_4_to_5);

// f_005bb220: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Clears the two requests of player `index` (0x40 bytes each).
namespace d_005bb220 {

inline constexpr guest::Function<0x005ba098, u32(u32, u32, u32, u32)> Catalog__entry_of_item;

void VillagerRequests__clear_for_player(u32 villager_requests, u32 r1) {
    u32 i = 0u;
    u32 r5 = villager_requests + (r1 << 7);
    do {
        Catalog__entry_of_item(r5 + (i << 6), r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        i += 1u;
        guest::preempt();
    } while (s32(i) < 2);
}

}  // namespace d_005bb220
GUEST_EXPORT_FRAMED(0x005bb220, d_005bb220::VillagerRequests__clear_for_player, 0x4070);  // pushes {i, r5, r6, lr} first, as the original

// f_005bb244: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The first of the player's two requests (by identity) with a kind of 0x21 or more, or 0.
namespace d_005bb244 {

inline constexpr guest::Function<0x002fb328, u32(u32, u32, u32, u32)> get_save_data;
inline constexpr guest::Function<0x00309fbc, u32(u32, u32)> player_index_in;

u32 VillagerRequests__active_for_player(u32 villager_requests, u32 r1, u32 r2) {
    u32 r4_1 = villager_requests;
    u32 save_data = get_save_data(villager_requests, r1, r2, guest::cpu()->r[3]);
    u32 r0_3 = player_index_in(save_data + 0xa0u, r1);
    if (!(r0_3 >= 4u)) {
        villager_requests = 0u;
        r1 = r4_1 + (r0_3 << 7);
        do {
            if (*gptr<u8>(r1 + (villager_requests << 6) + 8u) >= 0x21u) {
                return r1 + (villager_requests << 6);
            }
            villager_requests += 1u;
            guest::preempt();
        } while (s32(villager_requests) < 2);
    }
    return 0u;
}

}  // namespace d_005bb244
GUEST_EXPORT_FRAMED(0x005bb244, d_005bb244::VillagerRequests__active_for_player, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_005bb39c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// For the current player's letter `index` tied to a request: stores the two reply bytes in that request and updates
// the letter.
namespace d_005bb39c {

struct __attribute__((packed)) Local_005bb39c_r0_2 {
    u8 unknown_0[0x272];  // (not used here)
    u8 byte_272;
};
GUEST_OFFSET(Local_005bb39c_r0_2, byte_272, 0x272);

struct __attribute__((packed)) Local_005bb39c_r0_6 {
    u8 unknown_0[0x3c];  // (not used here)
    u8 byte_3c;
    u8 byte_3d;
};
GUEST_OFFSET(Local_005bb39c_r0_6, byte_3c, 0x3c);
GUEST_OFFSET(Local_005bb39c_r0_6, byte_3d, 0x3d);

inline constexpr guest::Function<0x002c002c, u32(u32, u32)> small_record_address_002c002c;
inline constexpr guest::Function<0x002c003c, u32(u32, u32, u32, u32)> Letters__clear;
inline constexpr guest::Function<0x002fae84, u32(u32)> get_data_base;
inline constexpr guest::Function<0x002fb310, u32(u32)> slot_records_of;
inline constexpr guest::Function<0x002fb94c, u32(u32, u32, u32, u32)> get_current_player;

void VillagerRequest__set_reply_for_letter(u32 villager_request, u32 r1, u32 r2) {
    guest::StackFrame frame(0x18);  // the original's stack frame
    u32 player = get_current_player(villager_request, r1, r2, guest::cpu()->r[3]);
    if (player != 0) {
        u32 r7_1 = player + 0x7008u;
        gptr<Local_005bb39c_r0_2> r0_2 = gptr<Local_005bb39c_r0_2>(small_record_address_002c002c(r7_1, villager_request));
        if (r0_2.addr() != 0) {
            u32 r0_3 = r0_2->byte_272;
            if ((r0_3 & 0x80u) != 0) {
                u32 data_base = get_data_base(r0_3);
                u32 records = slot_records_of(data_base);
                u32 r2_4 = guest::cpu()->r[2];
                gptr<Local_005bb39c_r0_6> r0_6 = gptr<Local_005bb39c_r0_6>(records + 0x1744cu);
                u32 r1_3 = u32(r0_2->byte_272) & 7u;
                if (r1_3 < 8u) {
                    r2_4 = r1_3 >> 1;
                    r0_6 = gptr<Local_005bb39c_r0_6>(r0_6.addr() + (r2_4 << 7) + ((r1_3 & 1u) << 6));
                }
                r0_6->byte_3c = u8(r1);
                r0_6->byte_3d = u8(r2);
                frame.release();
                Letters__clear(r7_1, villager_request, r2_4, guest::cpu()->r[3]);
                return;
            }
        }
    }
}

}  // namespace d_005bb39c
GUEST_EXPORT(0x005bb39c, d_005bb39c::VillagerRequest__set_reply_for_letter);

// f_005bb42c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Updates the requests for the day: expires them and adjusts friendships.
namespace d_005bb42c {

struct __attribute__((packed)) VillagerRequests {
    u8 unknown_0[0x272];  // (not used here)
    u8 byte_272;
};
GUEST_OFFSET(VillagerRequests, byte_272, 0x272);

struct __attribute__((packed)) Local_005bb42c_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_005bb42c_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_005bb42c_ea_1, word_4, 0x4);
GUEST_OFFSET(Local_005bb42c_ea_1, word_8, 0x8);

struct __attribute__((packed)) Local_005bb42c_ea_2 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_005bb42c_ea_2, word_0, 0x0);
GUEST_OFFSET(Local_005bb42c_ea_2, word_4, 0x4);

struct __attribute__((packed)) Local_005bb42c_ea_3 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_005bb42c_ea_3, word_0, 0x0);
GUEST_OFFSET(Local_005bb42c_ea_3, word_4, 0x4);

struct __attribute__((packed)) Now {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Now, word_0, 0x0);
GUEST_OFFSET(Now, word_4, 0x4);
GUEST_OFFSET(Now, word_8, 0x8);

struct __attribute__((packed)) Local_005bb42c_r3_2 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_005bb42c_r3_2, word_0, 0x0);
GUEST_OFFSET(Local_005bb42c_r3_2, word_4, 0x4);
GUEST_OFFSET(Local_005bb42c_r3_2, word_8, 0x8);

inline constexpr u32 player_state_block_address = 0x00aaef18u;
inline constexpr u32 current_player_data_address = 0x00aaf14cu;
inline guest::global<u32, 0x00aaf14c> current_player_data;
inline constexpr guest::Function<0x0010cadd, u32(u32, u32)> find_valid_villager_record;
inline constexpr guest::Function<0x00112f9d, u32(u32, u32, u32, u32)> Villager__adjust_friendship_with_player;
inline constexpr guest::Function<0x002fae84, u32(u32, u32, u32, u32)> get_data_base;
inline constexpr guest::Function<0x002fb310, u32(u32)> slot_records_of;
inline constexpr guest::Function<0x002fb328, u32(u32, u32, u32, u32)> get_save_data;
inline constexpr guest::Function<0x002fb378, u32(u32)> game_time_now;
inline constexpr guest::Function<0x002fb430, u32(u32, u32, u32, u32)> make_adjusted_words;
inline constexpr guest::Function<0x002fd41c, u32(u32, u32, u32, u32)> word_and_byte_pairs_not_less;
inline constexpr guest::Function<0x003014b4, u32(u32, u32, u32, u32)> TimeStamp__add_days;
inline constexpr guest::Function<0x00309fbc, u32(u32, u32)> player_index_in;
inline constexpr guest::Function<0x005ba098, u32(u32, u32, u32, u32)> Catalog__entry_of_item;

struct __attribute__((packed)) VillagerRequestsUpdateDailyFrame {
    u8 unknown_0[0x8];  // (not read or written by name)
    u32 word_8;
    u8 unknown_c[0x2c];  // (not read or written by name)
};
GUEST_OFFSET(VillagerRequestsUpdateDailyFrame, word_8, 0x8);
GUEST_SIZE(VillagerRequestsUpdateDailyFrame, 0x38);

void VillagerRequests__update_daily(gptr<VillagerRequests> villager_requests, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<VillagerRequestsUpdateDailyFrame> frame;  // the original's stack frame
    u32 r0 = villager_requests.addr();
    u32 r0_1 = villager_requests->byte_272;
    if ((r0_1 & 0x20u) == 0) {
        u32 data_base = get_data_base(r0_1, r1, r2, r3);
        u32 records = slot_records_of(data_base);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r1 = villager_requests->byte_272;
        u32 r7 = records + 4u;
        u32 r6 = records + 0x1744cu;
        u32 r0_4 = r1 & 7u;
        u32 r4 = r6;
        if (r0_4 < 8u) {
            r2 = r6 + (r0_4 >> 1 << 7);
            r4 = r2 + ((r0_4 & 1u) << 6);
        }
        if ((r1 & 8u) == 0 || (r1 & 0x20u) == 0) {
            u32 r0_5 = *gptr<u8>(r4 + 9u);
            if (s32(r0_5) < 3 || s32(r0_5) >= 9) {
                guest::cpu()->r[1] = r1;
                return;
            }
            if (s32(r0_5) < 4) {
                make_adjusted_words(frame.at(0x14).addr(), r4, r2, r3);
                gptr<Local_005bb42c_ea_1> ea_1 = gptr<Local_005bb42c_ea_1>(frame.at(0x14).addr());
                u32 r1_2 = ea_1->word_4;
                u32 r2_2 = ea_1->word_8;
                gptr<Local_005bb42c_r3_2> r3_2 = gptr<Local_005bb42c_r3_2>(frame.at(8).addr());
                r3_2->word_0 = ea_1->word_0;
                r3_2->word_4 = r1_2;
                r3_2->word_8 = r2_2;
                u32 r0_7 = frame.at(8).addr();
                u32 r1_3 = *gptr<s8>(r4 + 0x3eu);
                TimeStamp__add_days(r0_7, r1_3, r2_2, r3_2.addr());
                gptr<Now> now_2 = gptr<Now>(game_time_now(r0_7));
                gptr<Local_005bb42c_ea_2> ea_2 = gptr<Local_005bb42c_ea_2>(frame.at(0xc).addr());
                u32 r1_5 = ea_2->word_0;
                u32 r2_4 = ea_2->word_4;
                gptr<Local_005bb42c_ea_3> ea_3 = gptr<Local_005bb42c_ea_3>(frame.at(0).addr());
                ea_3->word_0 = r1_5;
                ea_3->word_4 = r2_4;
                u32 r0_10 = word_and_byte_pairs_not_less(now_2->word_0, now_2->word_4, now_2->word_8, frame->word_8);
                r1 = guest::cpu()->r[1];
                r2 = guest::cpu()->r[2];
                r3 = guest::cpu()->r[3];
                if (r0_10 == 0) {
                    return;
                }
            }
        }
        u32 r5 = ~0u;
        r0 = 0u;
L_5bb504:;
        u32 r1_7 = r6 + (r0 << 7);
        u32 zf_1 = r1_7 == r4;
        if (!zf_1) {
            r2 = r1_7 + 0x40u;
            zf_1 = r2 == r4;
        }
        if (zf_1) {
            r5 = r0;
        } else {
            r0 += 1u;
            if (s32(r0) < 4) {
                guest::preempt();
                goto L_5bb504;
            }
        }
        u32 r6_1 = *current_player_data;
        u32 save_data = get_save_data(player_state_block_address, r1_7, r2, r3);
        if (player_index_in(save_data + 0xa0u, r6_1) == r5) {
            u32 villager = find_valid_villager_record(r7, r4 + 0xcu);
            if (villager != 0) {
                Villager__adjust_friendship_with_player(villager, ~3u, 0u, 1u);
            }
        }
        frame.release();
        Catalog__entry_of_item(r4, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
        return;
    }
    guest::cpu()->r[1] = r1;
}

}  // namespace d_005bb42c
GUEST_EXPORT(0x005bb42c, d_005bb42c::VillagerRequests__update_daily);

// f_005bb66c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Builds the request item 0x341c with the letter's request index.
namespace d_005bb66c {

struct __attribute__((packed)) ConstructRequestLetterItemArg1 {
    u8 unknown_0[0x272];  // (not used here)
    u8 byte_272;
};
GUEST_OFFSET(ConstructRequestLetterItemArg1, byte_272, 0x272);

inline constexpr guest::Function<0x002fcbb0, u32(u32, u32, u32, u32)> construct_item;
inline constexpr guest::Function<0x006bacd8, u32(u32, u32)> Item__set_flags_keep_top;

void construct_request_letter_item(u32 r0_unused, gptr<ConstructRequestLetterItemArg1> arg1) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    construct_item(guest::cpu()->r[0], 0x341cu, guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r1_1 = u32(arg1->byte_272) & 7u;
    frame.release();
    Item__set_flags_keep_top(guest::cpu()->r[0], r1_1);
    return;
}

}  // namespace d_005bb66c
GUEST_EXPORT(0x005bb66c, d_005bb66c::construct_request_letter_item);

// f_005bb690: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// For a request item 0x341c and a free letter slot of the current player: ties the request to the player and moves it
// on (6 -> 10, else clears its replies).
namespace d_005bb690 {

struct __attribute__((packed)) Local_005bb690_r4_1 {
    u8 unknown_0[0x9];  // (not used here)
    u8 byte_9;
    u8 unknown_a[0x32];  // (not used here)
    u8 byte_3c;
    u8 byte_3d;
};
GUEST_OFFSET(Local_005bb690_r4_1, byte_9, 0x9);
GUEST_OFFSET(Local_005bb690_r4_1, byte_3c, 0x3c);
GUEST_OFFSET(Local_005bb690_r4_1, byte_3d, 0x3d);

inline constexpr guest::Function<0x002fae84, u32(u32, u32, u32, u32)> get_data_base;
inline constexpr guest::Function<0x002fb310, u32(u32)> slot_records_of;
inline constexpr guest::Function<0x002fb94c, u32(u32)> get_current_player;
inline constexpr guest::Function<0x002fcb84, u32(u32, u32)> Item__has_number;
inline constexpr guest::Function<0x005b99b8, u32(u32, u32)> sead__FixedSafeString_32___FixedSafeString_005b99b8;
inline constexpr guest::Function<0x0071dc9c, u32(u32)> first_clear_entry_of_10;
inline constexpr guest::Function<0x0076ad64, u32(u32)> Item__flag_value;

void VillagerRequest__deliver_item(u32 villager_request, u32 r1) {
    u32 data_base = get_data_base(villager_request, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 records = slot_records_of(data_base);
    gptr<Local_005bb690_r4_1> r4_1 = gptr<Local_005bb690_r4_1>(records + 0x1744cu);
    u32 r0_3 = Item__has_number(villager_request, 0x341cu);
    if (r0_3 != 0) {
        u32 player = get_current_player(r0_3);
        if (player != 0) {
            if (s32(first_clear_entry_of_10(player + 0x7008u)) >= 0) {
                u32 r0_7 = Item__flag_value(villager_request);
                if (r0_7 < 8u) {
                    r4_1 = gptr<Local_005bb690_r4_1>(r4_1.addr() + (r0_7 >> 1 << 7) + ((r0_7 & 1u) << 6));
                }
                sead__FixedSafeString_32___FixedSafeString_005b99b8(r4_1.addr(), player);
                u32 r0_8 = r4_1->byte_9;
                if (r0_8 == 6u) {
                    r4_1->byte_9 = 0xa;
                } else {
                    u32 r0_9 = ~0u;
                    r4_1->byte_3c = u8(r0_9);
                    r4_1->byte_3d = u8(r0_9);
                }
                return;
            }
        }
    }
}

}  // namespace d_005bb690
GUEST_EXPORT_FRAMED(0x005bb690, d_005bb690::VillagerRequest__deliver_item, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_005bb744: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Jumps to GameTime__set_time_stamp.
namespace d_005bb744 {

inline constexpr guest::Function<0x005cddb4, u32(u32, u32)> GameTime__set_time_stamp;

u32 GameTime__set_time_stamp_veneer() {
    return GameTime__set_time_stamp(guest::cpu()->r[0], guest::cpu()->r[1]);
}

}  // namespace d_005bb744
GUEST_EXPORT(0x005bb744, d_005bb744::GameTime__set_time_stamp_veneer);

// f_005bb748: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Picks a random villager of the town for a new request.
namespace d_005bb748 {

struct __attribute__((packed)) Local_005bb748_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_005bb748_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_005bb748_ea_1, word_4, 0x4);

inline constexpr guest::Function<0x002fb328, u32(u32, u32, u32, u32)> get_save_data;
inline constexpr guest::Function<0x002ff6f4, u32(u32, u32, u32, u32)> random_below_entry;
inline constexpr guest::Function<0x003009a9, u32(u32, u32, u32, u32)> villager_record_at;
inline constexpr guest::Function<0x0030e80d, u32(u32, u32, u32, u32)> Villagers__find_same;

struct __attribute__((packed)) VillagerRequestsPickVillagerFrame {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u8 unknown_c[0x28];  // (not read or written by name)
};
GUEST_OFFSET(VillagerRequestsPickVillagerFrame, word_0, 0x0);
GUEST_OFFSET(VillagerRequestsPickVillagerFrame, word_4, 0x4);
GUEST_OFFSET(VillagerRequestsPickVillagerFrame, word_8, 0x8);
GUEST_SIZE(VillagerRequestsPickVillagerFrame, 0x34);

u32 VillagerRequests__pick_villager(u32 villager_requests, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<VillagerRequestsPickVillagerFrame> frame;  // the original's stack frame
    u32 r6 = 0u;
    u32 r7 = ~0u;
    u32 save_data = get_save_data(villager_requests, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    u32 i = 0u;
    u32 r8 = save_data + 0x292a4u;
    u32 r9 = i;
    u32 r10 = 1u;
    do {
        u32 villager_record = villager_record_at(r8, i, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        u32 r5 = villager_record;
        if (villager_record != 0 && *gptr<u8>(r5 + 0x250eu) == 0) {
            frame->word_4 = r9;
            frame->word_0 = r10;
            frame->word_8 = r9;
            Villagers__find_same(frame.at(0x20).addr(), r8, r5, 2u);
            r3 = 1u;
            gptr<Local_005bb748_ea_1> ea_1 = gptr<Local_005bb748_ea_1>(frame.at(0x20).addr());
            u32 r2_1 = ea_1->word_4;
            r1 = frame.at(0x10).addr();
            *gptr<u32>(r1) = ea_1->word_0;
            *gptr<u32>(r1 + 4) = r2_1;
            r2 = 0u;
            villager_requests = r2;
L_5bb7e0:;
            u32 r11_1 = *gptr<u8>(r1 + (villager_requests >> 3));
            if ((r11_1 >> (villager_requests & 7u) & 1u) == r3) {
                r2 += 1u;
            }
L_5bb7f8:;
            villager_requests += 1u;
            u32 cf_1 = villager_requests >= 0x21u;
            if (!cf_1) {
                if (cf_1) {
                    guest::preempt();
                    goto L_5bb7f8;
                }
                guest::preempt();
                goto L_5bb7e0;
            }
            if (r2 == 0) {
                if (*gptr<u8>(r5 + 0x250fu) == 0) {
                    r6 += 1u;
                    u32 r0_4 = random_below_entry(r6, r1, r2, r3);
                    r1 = guest::cpu()->r[1];
                    r2 = guest::cpu()->r[2];
                    r3 = guest::cpu()->r[3];
                    if (r0_4 == 0) {
                        r7 = i;
                    }
                }
            }
        }
        i += 1u;
        guest::preempt();
    } while (s32(i) < 0xa);
    guest::cpu()->r[1] = r1;
    return r7;
}

}  // namespace d_005bb748
GUEST_EXPORT_FRAMED(0x005bb748, d_005bb748::VillagerRequests__pick_villager, 0x4ff0);  // pushes {i, r5, r6, r7, r8, r9, r10, r11, lr} first, as the original

// f_005bb9f0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Clears a request record (time unset, kind 0x21, state 0xff, length 9, replies -1).
namespace d_005bb9f0 {

struct __attribute__((packed)) VillagerRequest {
    u8 unknown_0[0x8];  // (not used here)
    u8 byte_8;
    u8 byte_9;
    u8 byte_a;
    u8 byte_b;
    u8 byte_c;
};
GUEST_OFFSET(VillagerRequest, byte_8, 0x8);
GUEST_OFFSET(VillagerRequest, byte_9, 0x9);
GUEST_OFFSET(VillagerRequest, byte_a, 0xa);
GUEST_OFFSET(VillagerRequest, byte_b, 0xb);
GUEST_OFFSET(VillagerRequest, byte_c, 0xc);

inline constexpr guest::Function<0x00303cdc, u32(u32)> clear_inner;
inline constexpr guest::Function<0x005cdf48, u32(u32, u32, u32, u32)> game_time_set;

u32 VillagerRequest__clear(gptr<VillagerRequest> villager_request) {
    game_time_set(villager_request.addr(), guest::cpu()->r[1], ~0u, ~0x80000000u);
    villager_request->byte_8 = 0x21;
    clear_inner(villager_request.addr());
    villager_request->byte_9 = 0xff;
    villager_request->byte_a = 9;
    villager_request->byte_8 = 0x21;
    clear_inner(villager_request.addr());
    villager_request->byte_9 = 0xff;
    u32 r0_1 = ~0u;
    villager_request->byte_a = 9;
    villager_request->byte_b = u8(r0_1);
    villager_request->byte_c = u8(r0_1);
    return villager_request.addr();
}

}  // namespace d_005bb9f0
GUEST_EXPORT_FRAMED(0x005bb9f0, d_005bb9f0::VillagerRequest__clear, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_005bbd70: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Sets bit `index` (below 3) of +0x5b.
namespace d_005bbd70 {

struct __attribute__((packed)) SetFlagBit5bArg0 {
    u8 unknown_0[0x5b];  // (not used here)
    u8 byte_5b;
};
GUEST_OFFSET(SetFlagBit5bArg0, byte_5b, 0x5b);


void set_flag_bit_5b(gptr<SetFlagBit5bArg0> arg0, u32 r1) {
    if (r1 >= 3u) {
        guest::cpu()->r[1] = r1;
        return;
    }
    u32 r1_1 = u32(arg0->byte_5b) | lsl_r(1u, r1 & 0xff);
    arg0->byte_5b = u8(r1_1);
    guest::cpu()->r[1] = r1_1;
}

}  // namespace d_005bbd70
GUEST_EXPORT(0x005bbd70, d_005bbd70::set_flag_bit_5b);

// f_005bbdf8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Clears a timed record and starts it today in state 2.
namespace d_005bbdf8 {

struct __attribute__((packed)) TimedRecord {
    u8 unknown_0[0x8];  // (not used here)
    u8 byte_8;
    u8 byte_9;
    u8 byte_a;
    u8 byte_b;
};
GUEST_OFFSET(TimedRecord, byte_8, 0x8);
GUEST_OFFSET(TimedRecord, byte_9, 0x9);
GUEST_OFFSET(TimedRecord, byte_a, 0xa);
GUEST_OFFSET(TimedRecord, byte_b, 0xb);

inline constexpr guest::Function<0x002fb378, u32(u32)> game_time_now;
inline constexpr guest::Function<0x00303cdc, u32(u32)> clear_inner;
inline constexpr guest::Function<0x005cddb4, u32(u32, u32)> GameTime__set_time_stamp;

void TimedRecord__init_state_2(gptr<TimedRecord> timed_record) {
    timed_record->byte_8 = 0x21;
    clear_inner(timed_record.addr());
    timed_record->byte_9 = 0xff;
    timed_record->byte_a = 9;
    u32 now_2 = game_time_now(9u);
    GameTime__set_time_stamp(timed_record.addr(), now_2);
    timed_record->byte_8 = 0x21;
    timed_record->byte_b = 0xff;
    timed_record->byte_9 = 2;
}

}  // namespace d_005bbdf8
GUEST_EXPORT_FRAMED(0x005bbdf8, d_005bbdf8::TimedRecord__init_state_2, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_005bcaa8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Adds a value to the signed level at +0xa8, clamped between -4 and 60 (40 for kinds other than 3, 6, 9 and 0xb).
namespace d_005bcaa8 {

struct __attribute__((packed)) AddClampedLevelA8Arg0 {
    u8 unknown_0[0xa8];  // (not used here)
    u8 byte_a8;
};
GUEST_OFFSET(AddClampedLevelA8Arg0, byte_a8, 0xa8);


void add_clamped_level_a8(gptr<AddClampedLevelA8Arg0> arg0, u32 r1, u32 r2) {
    r1 += u32(s8(arg0->byte_a8));
    u32 res_1 = r1 + 4u;
    if (res_1 >> 0x1f != ((r1 ^ res_1) & (4u ^ res_1)) >> 0x1f) {
        u32 r1_1 = ~3u;
        arg0->byte_a8 = u8(r1_1);
        guest::cpu()->r[1] = r1_1;
        return;
    }
    if (r2 == 3u || r2 == 6u) {
        r2 = 0x3cu;
        goto L_5bcad8;
    }
    if (r2 == 9u || r2 == 0xbu) {
        r2 = 0x3cu;
    } else {
        r2 = 0x28u;
    }
L_5bcad8:;
    if ((r1 - r2) != 0 && s32(r1) >= s32(r2)) {
        r1 = r2;
    }
    arg0->byte_a8 = u8(r1);
    guest::cpu()->r[1] = r1;
}

}  // namespace d_005bcaa8
GUEST_EXPORT(0x005bcaa8, d_005bcaa8::add_clamped_level_a8);

// f_005bcaf0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Counts +0xa9 up; at 3 sets +0xa7.
namespace d_005bcaf0 {

struct __attribute__((packed)) CountUpTo3A9Arg0 {
    u8 unknown_0[0xa7];  // (not used here)
    u8 byte_a7;
    u8 unknown_a8[0x1];  // (not used here)
    u8 byte_a9;
};
GUEST_OFFSET(CountUpTo3A9Arg0, byte_a7, 0xa7);
GUEST_OFFSET(CountUpTo3A9Arg0, byte_a9, 0xa9);


void count_up_to_3_a9(gptr<CountUpTo3A9Arg0> arg0) {
    u32 r1_1 = u32(arg0->byte_a9) + 1u & 0xffu;
    arg0->byte_a9 = u8(r1_1);
    if (r1_1 < 3u) {
        guest::cpu()->r[1] = r1_1;
        return;
    }
    arg0->byte_a7 = 1;
    arg0->byte_a9 = 3;
    guest::cpu()->r[1] = 3u;
}

}  // namespace d_005bcaf0
GUEST_EXPORT(0x005bcaf0, d_005bcaf0::count_up_to_3_a9);

// f_005bcbfc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Clears a timed record, starts it today, finishes its event and sets state 4.
namespace d_005bcbfc {

struct __attribute__((packed)) TimedRecord {
    u8 unknown_0[0x8];  // (not used here)
    u8 byte_8;
    u8 byte_9;
    u8 byte_a;
};
GUEST_OFFSET(TimedRecord, byte_8, 0x8);
GUEST_OFFSET(TimedRecord, byte_9, 0x9);
GUEST_OFFSET(TimedRecord, byte_a, 0xa);

inline constexpr guest::Function<0x002fb378, u32(u32, u32)> game_time_now;
inline constexpr guest::Function<0x00303cdc, u32(u32, u32, u32, u32)> clear_inner;
inline constexpr guest::Function<0x005bce04, u32(u32, u32)> finish_event;
inline constexpr guest::Function<0x005cddb4, u32(u32, u32)> GameTime__set_time_stamp;

void TimedRecord__init_state_4(gptr<TimedRecord> timed_record, u32 player) {
    timed_record->byte_8 = 0x21;
    clear_inner(timed_record.addr(), player, guest::cpu()->r[2], guest::cpu()->r[3]);
    timed_record->byte_9 = 0xff;
    timed_record->byte_a = 9;
    u32 now_2 = game_time_now(9u, 0xffu);
    GameTime__set_time_stamp(timed_record.addr(), now_2);
    finish_event(timed_record.addr(), player);
    timed_record->byte_9 = 4;
}

}  // namespace d_005bcbfc
GUEST_EXPORT_FRAMED(0x005bcbfc, d_005bcbfc::TimedRecord__init_state_4, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_005bcc50: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether the player (with flag bits 6/7 of +0x570c and the town's level 2) may receive the gift of the record at
// +0x8e08: a free pocket and more than 3 days since it.
namespace d_005bcc50 {

struct __attribute__((packed)) Player {
    u8 unknown_0[0x570c];  // (not used here)
    u8 byte_570c;
};
GUEST_OFFSET(Player, byte_570c, 0x570c);

struct __attribute__((packed)) Local_005bcc50_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_005bcc50_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_005bcc50_ea_1, word_4, 0x4);
GUEST_OFFSET(Local_005bcc50_ea_1, word_8, 0x8);

struct __attribute__((packed)) Local_005bcc50_r5_1 {
    u8 unknown_0[0x8];  // (not used here)
    u8 byte_8;
    u8 byte_9;
};
GUEST_OFFSET(Local_005bcc50_r5_1, byte_8, 0x8);
GUEST_OFFSET(Local_005bcc50_r5_1, byte_9, 0x9);

inline constexpr guest::Function<0x002fb328, u32(u32, u32, u32, u32)> get_save_data;
inline constexpr guest::Function<0x002fb338, u32(u32, u32)> is_not_sentinel;
inline constexpr guest::Function<0x002fb378, u32(u32, u32)> game_time_now;
inline constexpr guest::Function<0x002fb430, u32(u32, u32)> make_adjusted_words;
inline constexpr guest::Function<0x002fd4b4, u32(u32, u32, u32)> days_between;
inline constexpr guest::Function<0x007241b0, u32(u32, u32)> Pockets__find_empty_slot;

struct __attribute__((packed)) PlayerCanReceiveGiftRecordFrame {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u8 unknown_c[0x10];  // (not read or written by name)
};
GUEST_OFFSET(PlayerCanReceiveGiftRecordFrame, word_0, 0x0);
GUEST_OFFSET(PlayerCanReceiveGiftRecordFrame, word_4, 0x4);
GUEST_OFFSET(PlayerCanReceiveGiftRecordFrame, word_8, 0x8);
GUEST_SIZE(PlayerCanReceiveGiftRecordFrame, 0x1c);

u32 Player__can_receive_gift_record(gptr<Player> player, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<PlayerCanReceiveGiftRecordFrame> frame;  // the original's stack frame
    u32 save_data = get_save_data(player.addr(), r1, r2, r3);
    u32 r1_1 = guest::cpu()->r[1];
    u32 r0_2 = save_data + 0x6ad82u;
    if (r0_2 != 0 && *gptr<u8>(r0_2) >= 2u && player.addr() != 0) {
        u32 r0_3 = player->byte_570c;
        r1_1 = r0_3 << 0x19;
        if (s32(r1_1) >= 0) {
            if ((r0_3 >> 7) == 0) {
                guest::cpu()->r[1] = r1_1;
                return 0u;
            }
        }
        gptr<Local_005bcc50_r5_1> r5_1 = gptr<Local_005bcc50_r5_1>(player.addr() + 0x8e08u);
        if (r5_1->byte_8 >= 0x21u || r5_1->byte_9 >= 3u) {
            u32 slot = Pockets__find_empty_slot(player.addr() + 0x6bd0u, r1_1);
            r1_1 = guest::cpu()->r[1];
            if (s32(slot) >= 0) {
                u32 r0_6 = is_not_sentinel(r5_1.addr(), r1_1);
                r1_1 = guest::cpu()->r[1];
                u32 zf_1 = r0_6 == 0;
                if (!zf_1) {
                    r0_6 = r5_1->byte_9;
                    zf_1 = r0_6 == 4u;
                }
                if (!zf_1) {
                    u32 now_2 = game_time_now(r0_6, r1_1);
                    make_adjusted_words(frame.at(0xc).addr(), r5_1.addr());
                    gptr<Local_005bcc50_ea_1> ea_1 = gptr<Local_005bcc50_ea_1>(frame.at(0xc).addr());
                    u32 r1_2 = ea_1->word_4;
                    u32 r2_5 = ea_1->word_8;
                    frame->word_0 = ea_1->word_0;
                    frame->word_4 = r1_2;
                    frame->word_8 = r2_5;
                    u32 r0_10 = days_between(frame.at(0).addr(), now_2, 1u);
                    r1_1 = guest::cpu()->r[1];
                    if (s32(r0_10) < 0) {
                        r0_10 = 0u - r0_10;
                    }
                    if (s32(r0_10) <= 3) {
                        return 0u;
                    }
                }
                guest::cpu()->r[1] = r1_1;
                return 1u;
            }
        }
    }
    guest::cpu()->r[1] = r1_1;
    return 0u;
}

}  // namespace d_005bcc50
GUEST_EXPORT_FRAMED(0x005bcc50, d_005bcc50::Player__can_receive_gift_record, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_005bcf24: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Finishes the record's event and starts it for the villager (kind from its data, today, length 3, its name and id).
namespace d_005bcf24 {

struct __attribute__((packed)) TimedRecord {
    u8 unknown_0[0x8];  // (not used here)
    u8 byte_8;
    u8 byte_9;
    u8 byte_a;
    u8 unknown_b[0xa9];  // (not used here)
    u8 byte_b4;
};
GUEST_OFFSET(TimedRecord, byte_8, 0x8);
GUEST_OFFSET(TimedRecord, byte_9, 0x9);
GUEST_OFFSET(TimedRecord, byte_a, 0xa);
GUEST_OFFSET(TimedRecord, byte_b4, 0xb4);

struct __attribute__((packed)) TimedRecordStartForVillagerArg2 {
    u8 unknown_0[0x1028];  // (not used here)
    u32 word_1028;
    u32 word_102c;
};
GUEST_OFFSET(TimedRecordStartForVillagerArg2, word_1028, 0x1028);
GUEST_OFFSET(TimedRecordStartForVillagerArg2, word_102c, 0x102c);

inline constexpr guest::Function<0x002fb378, u32(u32)> game_time_now;
inline constexpr guest::Function<0x0030f52c, u32(u32, u32)> copy_22_bytes;
inline constexpr guest::Function<0x0051d77c, u32(u32)> current_record_byte_or_global;
inline constexpr guest::Function<0x005bce04, u32(u32, u32, u32, u32)> finish_event;
inline constexpr guest::Function<0x005cddb4, u32(u32, u32)> GameTime__set_time_stamp;

void TimedRecord__start_for_villager(gptr<TimedRecord> timed_record, u32 r1, gptr<TimedRecordStartForVillagerArg2> arg2) {
    u32 r0_2 = current_record_byte_or_global(finish_event(timed_record.addr(), r1, arg2.addr(), guest::cpu()->r[3]));
    timed_record->byte_b4 = u8(r0_2);
    u32 r1_1 = arg2.addr() + 0x1028u;
    u32 r5_1 = arg2->word_1028;
    u32 r0_3 = arg2->word_102c;
    if (r0_3 != 0 && r5_1 != 0) {
        u32 r6_1 = *gptr<u8>(r0_3 + 0x24u);
        u32 now_2 = game_time_now(r0_3);
        timed_record->byte_8 = u8(r6_1);
        timed_record->byte_9 = 0;
        if (now_2 != 0) {
            GameTime__set_time_stamp(timed_record.addr(), now_2);
        }
        timed_record->byte_a = 3;
        u32 r4_1 = timed_record.addr() + 0xcu;
        copy_22_bytes(r4_1, r5_1);
        r1_1 = guest::cpu()->r[1];
        *gptr<u16>(r4_1 + 0x16u) = *gptr<u16>(r5_1 + 0x2cu);
    }
    guest::cpu()->r[1] = r1_1;
}

}  // namespace d_005bcf24
GUEST_EXPORT_FRAMED(0x005bcf24, d_005bcf24::TimedRecord__start_for_villager, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_005bcfa0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Stores the villager's name and id in the first free of the six entries (+0x24, 0x18 bytes each).
namespace d_005bcfa0 {

struct __attribute__((packed)) AddVillagerNameEntryArg1 {
    u8 unknown_0[0x1028];  // (not used here)
    u32 word_1028;
};
GUEST_OFFSET(AddVillagerNameEntryArg1, word_1028, 0x1028);

inline constexpr guest::Function<0x00301e20, u32(u32, u32, u32, u32)> is_villager_record;
inline constexpr guest::Function<0x0030f52c, u32(u32, u32)> copy_22_bytes;
inline constexpr guest::Function<0x0076c6d4, u32(u32, u32)> halfword_is_nonzero_0076c6d4;

void add_villager_name_entry(u32 r0, gptr<AddVillagerNameEntryArg1> arg1) {
    u32 r1 = arg1.addr();
    u32 r6 = r1 + 0x1000u;
    u32 r5 = r0;
    u32 r0_1 = arg1->word_1028;
    if (r0_1 != 0) {
        u32 is_villager = is_villager_record(r0_1, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        if (is_villager != 0) {
            u32 i = 0u;
            do {
                u32 r0_4 = halfword_is_nonzero_0076c6d4(r5 + i * 0x18u + 0x24u, r1);
                r1 = guest::cpu()->r[1];
                if (r0_4 == 0) {
                    u32 r4_1 = *gptr<u32>(r6 + 0x28u);
                    u32 r5_1 = r5 + ((i * 3u) << 3) + 0x24u;
                    copy_22_bytes(r5_1, r4_1);
                    *gptr<u16>(r5_1 + 0x16u) = *gptr<u16>(r4_1 + 0x2cu);
                    return;
                }
                i += 1u;
                guest::preempt();
            } while (i < 6u);
        }
    }
    guest::cpu()->r[1] = r1;
}

}  // namespace d_005bcfa0
GUEST_EXPORT_FRAMED(0x005bcfa0, d_005bcfa0::add_villager_name_entry, 0x4070);  // pushes {i, r5, r6, lr} first, as the original

// f_005bd01c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Clears a timed record (time unset, kind 0x21, state 0xff, length 9).
namespace d_005bd01c {

struct __attribute__((packed)) TimedRecord {
    u8 unknown_0[0x8];  // (not used here)
    u8 byte_8;
    u8 byte_9;
    u8 byte_a;
};
GUEST_OFFSET(TimedRecord, byte_8, 0x8);
GUEST_OFFSET(TimedRecord, byte_9, 0x9);
GUEST_OFFSET(TimedRecord, byte_a, 0xa);

inline constexpr guest::Function<0x00303cdc, u32(u32)> clear_inner;
inline constexpr guest::Function<0x005cdf48, u32(u32, u32, u32, u32)> game_time_set;

u32 TimedRecord__clear(gptr<TimedRecord> timed_record, u32 r1) {
    game_time_set(timed_record.addr(), r1, ~0u, ~0x80000000u);
    timed_record->byte_8 = 0x21;
    clear_inner(timed_record.addr());
    timed_record->byte_9 = 0xff;
    timed_record->byte_a = 9;
    guest::cpu()->r[1] = 0xffu;
    return timed_record.addr();
}

}  // namespace d_005bd01c
GUEST_EXPORT_FRAMED(0x005bd01c, d_005bd01c::TimedRecord__clear, 0x4010);  // pushes {r4, lr} first, as the original

// f_005bd0a0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Updates a timed record for the day.
namespace d_005bd0a0 {

struct __attribute__((packed)) TimedRecord {
    u8 unknown_0[0x8];  // (not used here)
    u8 byte_8;
    u8 byte_9;
    u8 byte_a;
    u8 unknown_b[0x1];  // (not used here)
    u16 half_c;
    u8 byte_e;
    u8 byte_f;
};
GUEST_OFFSET(TimedRecord, byte_8, 0x8);
GUEST_OFFSET(TimedRecord, byte_9, 0x9);
GUEST_OFFSET(TimedRecord, byte_a, 0xa);
GUEST_OFFSET(TimedRecord, half_c, 0xc);
GUEST_OFFSET(TimedRecord, byte_e, 0xe);
GUEST_OFFSET(TimedRecord, byte_f, 0xf);

struct __attribute__((packed)) Local_005bd0a0_ea_1 {
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
    u32 word_34;
};
GUEST_OFFSET(Local_005bd0a0_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_005bd0a0_ea_1, word_4, 0x4);
GUEST_OFFSET(Local_005bd0a0_ea_1, word_8, 0x8);
GUEST_OFFSET(Local_005bd0a0_ea_1, word_c, 0xc);
GUEST_OFFSET(Local_005bd0a0_ea_1, word_10, 0x10);
GUEST_OFFSET(Local_005bd0a0_ea_1, word_14, 0x14);
GUEST_OFFSET(Local_005bd0a0_ea_1, word_18, 0x18);
GUEST_OFFSET(Local_005bd0a0_ea_1, word_1c, 0x1c);
GUEST_OFFSET(Local_005bd0a0_ea_1, word_20, 0x20);
GUEST_OFFSET(Local_005bd0a0_ea_1, word_24, 0x24);
GUEST_OFFSET(Local_005bd0a0_ea_1, word_28, 0x28);
GUEST_OFFSET(Local_005bd0a0_ea_1, word_2c, 0x2c);
GUEST_OFFSET(Local_005bd0a0_ea_1, word_30, 0x30);
GUEST_OFFSET(Local_005bd0a0_ea_1, word_34, 0x34);

struct __attribute__((packed)) Local_005bd0a0_ea_7 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u32 word_18;
    u32 word_1c;
    u8 unknown_20[0x4];  // (not used here)
    u32 word_24;
};
GUEST_OFFSET(Local_005bd0a0_ea_7, word_0, 0x0);
GUEST_OFFSET(Local_005bd0a0_ea_7, word_4, 0x4);
GUEST_OFFSET(Local_005bd0a0_ea_7, word_8, 0x8);
GUEST_OFFSET(Local_005bd0a0_ea_7, word_c, 0xc);
GUEST_OFFSET(Local_005bd0a0_ea_7, word_10, 0x10);
GUEST_OFFSET(Local_005bd0a0_ea_7, word_14, 0x14);
GUEST_OFFSET(Local_005bd0a0_ea_7, word_18, 0x18);
GUEST_OFFSET(Local_005bd0a0_ea_7, word_1c, 0x1c);
GUEST_OFFSET(Local_005bd0a0_ea_7, word_24, 0x24);

struct __attribute__((packed)) Local_005bd0a0_ea_9 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u32 word_18;
    u32 word_1c;
    u8 unknown_20[0x4];  // (not used here)
    u32 word_24;
};
GUEST_OFFSET(Local_005bd0a0_ea_9, word_0, 0x0);
GUEST_OFFSET(Local_005bd0a0_ea_9, word_4, 0x4);
GUEST_OFFSET(Local_005bd0a0_ea_9, word_8, 0x8);
GUEST_OFFSET(Local_005bd0a0_ea_9, word_c, 0xc);
GUEST_OFFSET(Local_005bd0a0_ea_9, word_10, 0x10);
GUEST_OFFSET(Local_005bd0a0_ea_9, word_14, 0x14);
GUEST_OFFSET(Local_005bd0a0_ea_9, word_18, 0x18);
GUEST_OFFSET(Local_005bd0a0_ea_9, word_1c, 0x1c);
GUEST_OFFSET(Local_005bd0a0_ea_9, word_24, 0x24);

inline constexpr guest::Function<0x002fb378, u32(u32, u32)> game_time_now;
inline constexpr guest::Function<0x00303cdc, u32(u32)> clear_inner;
inline constexpr guest::Function<0x005cddb4, u32(u32, u32)> GameTime__set_time_stamp;

struct __attribute__((packed)) TimedRecordUpdateFrame {
    u8 unknown_0[0xc];  // (not read or written by name)
    u32 word_c;
    u8 unknown_10[0x28];  // (not read or written by name)
};
GUEST_OFFSET(TimedRecordUpdateFrame, word_c, 0xc);
GUEST_SIZE(TimedRecordUpdateFrame, 0x38);

void TimedRecord__update(gptr<TimedRecord> timed_record, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<TimedRecordUpdateFrame> frame;  // the original's stack frame
    u32 r0 = timed_record.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r10 = guest::cpu()->r[10];
    u32 r11 = guest::cpu()->r[11];
    u32 r12 = guest::cpu()->r[12];
    u32 r14 = guest::cpu()->r[14];
    u32 ea_2 = 0;
    u32 ea_3 = 0;
    u32 ea_4 = 0;
    u32 ea_5 = 0;
    u32 ea_6 = 0;
    gptr<Local_005bd0a0_ea_7> ea_7 = gptr<Local_005bd0a0_ea_7>(0u);
    u32 r4_1 = 0;
    u32 r5_1 = 0;
    u32 r6_1 = 0;
    u32 r7_1 = 0;
    u32 r8_1 = 0;
    u32 r9_1 = 0;
    u32 r10_1 = 0;
    u32 r11_1 = 0;
    if (r1 >= 6u) {
        guest::cpu()->r[1] = r1;
        return;
    }
    gptr<Local_005bd0a0_ea_1> ea_1 = gptr<Local_005bd0a0_ea_1>(frame.at(0).addr());
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
    ea_1->word_30 = r12;
    ea_1->word_34 = r14;
    timed_record->byte_8 = 0x21;
    clear_inner(r0);
    timed_record->byte_9 = 0xff;
    timed_record->byte_a = 9;
    timed_record->half_c = 0;
    timed_record->byte_e = 6;
    timed_record->byte_f = 0xff;
    u32 now_2 = game_time_now(0xffu, 0xffu);
    timed_record->byte_8 = 1;
    timed_record->byte_9 = 0;
    if (now_2 != 0) {
        GameTime__set_time_stamp(r0, now_2);
    }
    timed_record->byte_a = 3;
    u32 r0_2 = frame->word_c;
    timed_record->byte_e = u8(r1);
    timed_record->byte_f = u8(r0_2);
    u32 r0_3 = uxth(r2);
    if (r1 != 2u) {
        if (r1 != 5u || r2 < 2u) {
            goto L_5bd180;
        }
    } else if (r2 < 5u) {
        goto L_5bd180;
    }
    timed_record->byte_8 = 0x21;
    clear_inner(r0);
    ea_2 = r0 + 9u;
    *gptr<u8>(ea_2) = 0xff;
    ea_3 = r0 + 0xau;
    *gptr<u8>(ea_3) = 9;
    ea_4 = r0 + 0xcu;
    *gptr<u16>(ea_4) = 0;
    ea_5 = r0 + 0xeu;
    *gptr<u8>(ea_5) = 6;
    ea_6 = r0 + 0xfu;
    *gptr<u8>(ea_6) = 0xff;
    ea_7 = gptr<Local_005bd0a0_ea_7>(frame.at(0x10).addr());
    r4_1 = ea_7->word_0;
    r5_1 = ea_7->word_4;
    r6_1 = ea_7->word_8;
    r7_1 = ea_7->word_c;
    r8_1 = ea_7->word_10;
    r9_1 = ea_7->word_14;
    r10_1 = ea_7->word_18;
    r11_1 = ea_7->word_1c;
    guest::cpu()->r[1] = 9u;
    guest::cpu()->r[4] = r4_1;
    guest::cpu()->r[5] = r5_1;
    guest::cpu()->r[6] = r6_1;
    guest::cpu()->r[7] = r7_1;
    guest::cpu()->r[8] = r8_1;
    guest::cpu()->r[9] = r9_1;
    guest::cpu()->r[10] = r10_1;
    guest::cpu()->r[11] = r11_1;
    return;
L_5bd180:;
    *gptr<u16>(r0 + 0xcu) = u16(r0_3);
    gptr<Local_005bd0a0_ea_9> ea_9 = gptr<Local_005bd0a0_ea_9>(frame.at(0x10).addr());
    u32 r4_2 = ea_9->word_0;
    u32 r5_2 = ea_9->word_4;
    u32 r6_2 = ea_9->word_8;
    u32 r7_2 = ea_9->word_c;
    u32 r8_2 = ea_9->word_10;
    u32 r9_2 = ea_9->word_14;
    u32 r10_2 = ea_9->word_18;
    u32 r11_2 = ea_9->word_1c;
    guest::cpu()->r[4] = r4_2;
    guest::cpu()->r[5] = r5_2;
    guest::cpu()->r[6] = r6_2;
    guest::cpu()->r[7] = r7_2;
    guest::cpu()->r[8] = r8_2;
    guest::cpu()->r[9] = r9_2;
    guest::cpu()->r[10] = r10_2;
    guest::cpu()->r[11] = r11_2;
}

}  // namespace d_005bd0a0
GUEST_EXPORT(0x005bd0a0, d_005bd0a0::TimedRecord__update);

// f_005bd234: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Clears a 16-byte timed record (kind 0x21, state 0xff, length 9, id 0, value 6, flag 0xff).
namespace d_005bd234 {

struct __attribute__((packed)) TimedRecord16 {
    u8 unknown_0[0x8];  // (not used here)
    u8 byte_8;
    u8 byte_9;
    u8 byte_a;
    u8 unknown_b[0x1];  // (not used here)
    u16 half_c;
    u8 byte_e;
    u8 byte_f;
};
GUEST_OFFSET(TimedRecord16, byte_8, 0x8);
GUEST_OFFSET(TimedRecord16, byte_9, 0x9);
GUEST_OFFSET(TimedRecord16, byte_a, 0xa);
GUEST_OFFSET(TimedRecord16, half_c, 0xc);
GUEST_OFFSET(TimedRecord16, byte_e, 0xe);
GUEST_OFFSET(TimedRecord16, byte_f, 0xf);

inline constexpr guest::Function<0x00303cdc, u32(u32)> clear_inner;
inline constexpr guest::Function<0x005cdf48, u32(u32, u32, u32, u32)> game_time_set;

u32 TimedRecord16__clear(gptr<TimedRecord16> timed_record16, u32 r1) {
    game_time_set(timed_record16.addr(), r1, ~0u, ~0x80000000u);
    timed_record16->byte_8 = 0x21;
    clear_inner(timed_record16.addr());
    timed_record16->byte_9 = 0xff;
    timed_record16->byte_a = 9;
    timed_record16->byte_8 = 0x21;
    clear_inner(timed_record16.addr());
    timed_record16->byte_9 = 0xff;
    timed_record16->byte_a = 9;
    timed_record16->half_c = 0;
    timed_record16->byte_e = 6;
    timed_record16->byte_f = 0xff;
    guest::cpu()->r[1] = 6u;
    return timed_record16.addr();
}

}  // namespace d_005bd234
GUEST_EXPORT_FRAMED(0x005bd234, d_005bd234::TimedRecord16__clear, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_005bd2e8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Starts a 16-byte item record for player `slot` (below 4): kind 2, today, length 3, the item's id and an option byte.
namespace d_005bd2e8 {

struct __attribute__((packed)) ItemRecord16 {
    u8 unknown_0[0x8];  // (not used here)
    u8 byte_8;
    u8 byte_9;
    u8 byte_a;
    u8 unknown_b[0x1];  // (not used here)
    u16 number;
    u8 byte_e;
    u8 byte_f;
};
GUEST_OFFSET(ItemRecord16, byte_8, 0x8);
GUEST_OFFSET(ItemRecord16, byte_9, 0x9);
GUEST_OFFSET(ItemRecord16, byte_a, 0xa);
GUEST_OFFSET(ItemRecord16, number, 0xc);
GUEST_OFFSET(ItemRecord16, byte_e, 0xe);
GUEST_OFFSET(ItemRecord16, byte_f, 0xf);

inline constexpr guest::Function<0x002fb378, u32(u32)> game_time_now;
inline constexpr guest::Function<0x00303cdc, u32(u32)> clear_inner;
inline constexpr guest::Function<0x0030b6b8, u32(u32)> Item__number;
inline constexpr guest::Function<0x005cddb4, u32(u32, u32)> GameTime__set_time_stamp;

void ItemRecord16__start(gptr<ItemRecord16> item_record16, u32 r1, u32 r2, u32 r3) {
    if (r1 >= 4u) {
        return;
    }
    item_record16->byte_8 = 0x21;
    clear_inner(item_record16.addr());
    item_record16->byte_9 = 0xff;
    item_record16->byte_a = 9;
    item_record16->number = 0x7ffe;
    item_record16->byte_e = 4;
    item_record16->byte_f = 0xff;
    u32 now_2 = game_time_now(0xffu);
    item_record16->byte_8 = 2;
    item_record16->byte_9 = 0;
    if (now_2 != 0) {
        GameTime__set_time_stamp(item_record16.addr(), now_2);
    }
    item_record16->byte_a = 3;
    u32 number = Item__number(r2);
    item_record16->number = u16(number);
    item_record16->byte_e = u8(r1);
    item_record16->byte_f = u8(r3);
}

}  // namespace d_005bd2e8
GUEST_EXPORT_FRAMED(0x005bd2e8, d_005bd2e8::ItemRecord16__start, 0x47f0);  // pushes {r4, r5, r6, r7, r8, r9, r10, lr} first, as the original

// f_005bd3fc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Clears a 16-byte item record (kind 0x21, state 0xff, length 9, item 0x7ffe, slot 4, option 0xff).
namespace d_005bd3fc {

struct __attribute__((packed)) ItemRecord16 {
    u8 unknown_0[0x8];  // (not used here)
    u8 byte_8;
    u8 byte_9;
    u8 byte_a;
    u8 unknown_b[0x1];  // (not used here)
    u16 half_c;
    u8 byte_e;
    u8 byte_f;
};
GUEST_OFFSET(ItemRecord16, byte_8, 0x8);
GUEST_OFFSET(ItemRecord16, byte_9, 0x9);
GUEST_OFFSET(ItemRecord16, byte_a, 0xa);
GUEST_OFFSET(ItemRecord16, half_c, 0xc);
GUEST_OFFSET(ItemRecord16, byte_e, 0xe);
GUEST_OFFSET(ItemRecord16, byte_f, 0xf);

inline constexpr guest::Function<0x00303cdc, u32(u32)> clear_inner;
inline constexpr guest::Function<0x005cdf48, u32(u32, u32, u32, u32)> game_time_set;

u32 ItemRecord16__clear(gptr<ItemRecord16> item_record16, u32 r1) {
    game_time_set(item_record16.addr(), r1, ~0u, ~0x80000000u);
    item_record16->byte_8 = 0x21;
    clear_inner(item_record16.addr());
    item_record16->byte_9 = 0xff;
    item_record16->byte_a = 9;
    item_record16->byte_8 = 0x21;
    clear_inner(item_record16.addr());
    item_record16->byte_9 = 0xff;
    item_record16->byte_a = 9;
    item_record16->half_c = 0x7ffe;
    item_record16->byte_e = 4;
    item_record16->byte_f = 0xff;
    guest::cpu()->r[1] = 4u;
    return item_record16.addr();
}

}  // namespace d_005bd3fc
GUEST_EXPORT_FRAMED(0x005bd3fc, d_005bd3fc::ItemRecord16__clear, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_005bd750: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Sends the record's item id with the answer (event 4) and sets its state (1 for yes, 2 for no).
namespace d_005bd750 {

struct __attribute__((packed)) ItemRecord {
    u8 unknown_0[0x9];  // (not used here)
    u8 byte_9;
};
GUEST_OFFSET(ItemRecord, byte_9, 0x9);

inline constexpr guest::Function<0x0030b6b8, u32(u32, u32, u32, u32)> Item__number;
inline constexpr guest::Function<0x007d0fc8, u32(u32, u32)> NetPresence__send_12;

struct __attribute__((packed)) ItemRecordSendAnswerFrame {
    u8 unknown_0[0x2];  // (not read or written by name)
    u8 byte_2;
    u8 unknown_3[0x1];  // (not read or written by name)
};
GUEST_OFFSET(ItemRecordSendAnswerFrame, byte_2, 0x2);
GUEST_SIZE(ItemRecordSendAnswerFrame, 0x4);

void ItemRecord__send_answer(gptr<ItemRecord> item_record, u32 r1, u32 r2_unused, u32 r3) {
    guest::StackFrameOf<ItemRecordSendAnswerFrame> frame;  // the original's stack frame
    *frame.at<u32>(0) = r3;
    u32 number = Item__number(item_record.addr() + 0xcu, r1, guest::cpu()->r[2], r3);
    *frame.at<u16>(0) = u16(number);
    frame->byte_2 = u8(r1);
    NetPresence__send_12(4u, frame.at(0).addr());
    item_record->byte_9 = u8(r1 == 0 ? 2u : 1u);
}

}  // namespace d_005bd750
GUEST_EXPORT_FRAMED(0x005bd750, d_005bd750::ItemRecord__send_answer, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_005bdaa0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Clears a timed record with two empty items (+0xc, +0x10) and its three bytes (-1, 7, -1).
namespace d_005bdaa0 {

struct __attribute__((packed)) TwoItemTimedRecord {
    u8 unknown_0[0x8];  // (not used here)
    u8 byte_8;
    u8 byte_9;
    u8 byte_a;
    u8 unknown_b[0x9];  // (not used here)
    u8 byte_14;
    u8 byte_15;
    u8 byte_16;
};
GUEST_OFFSET(TwoItemTimedRecord, byte_8, 0x8);
GUEST_OFFSET(TwoItemTimedRecord, byte_9, 0x9);
GUEST_OFFSET(TwoItemTimedRecord, byte_a, 0xa);
GUEST_OFFSET(TwoItemTimedRecord, byte_14, 0x14);
GUEST_OFFSET(TwoItemTimedRecord, byte_15, 0x15);
GUEST_OFFSET(TwoItemTimedRecord, byte_16, 0x16);

inline constexpr u32 empty_item_address = 0x0095bfdcu;
inline constexpr guest::Function<0x002fc20c, u32(u32)> construct_empty_item;
inline constexpr guest::Function<0x002fc8e8, u32(u32, u32)> Item__copy;
inline constexpr guest::Function<0x00303cdc, u32(u32)> clear_inner;
inline constexpr guest::Function<0x005cdf48, u32(u32, u32, u32, u32)> game_time_set;

u32 TwoItemTimedRecord__clear(gptr<TwoItemTimedRecord> two_item_timed_record, u32 r1) {
    game_time_set(two_item_timed_record.addr(), r1, ~0u, ~0x80000000u);
    two_item_timed_record->byte_8 = 0x21;
    clear_inner(two_item_timed_record.addr());
    two_item_timed_record->byte_9 = 0xff;
    two_item_timed_record->byte_a = 9;
    construct_empty_item(two_item_timed_record.addr() + 0xcu);
    construct_empty_item(two_item_timed_record.addr() + 0x10u);
    two_item_timed_record->byte_8 = 0x21;
    clear_inner(two_item_timed_record.addr());
    two_item_timed_record->byte_9 = 0xff;
    two_item_timed_record->byte_a = 9;
    Item__copy(two_item_timed_record.addr() + 0x10u, empty_item_address);
    Item__copy(two_item_timed_record.addr() + 0xcu, two_item_timed_record.addr() + 0x10u);
    u32 r0_5 = ~0u;
    two_item_timed_record->byte_14 = u8(r0_5);
    two_item_timed_record->byte_15 = 7;
    two_item_timed_record->byte_16 = u8(r0_5);
    guest::cpu()->r[1] = 7u;
    return two_item_timed_record.addr();
}

}  // namespace d_005bdaa0
GUEST_EXPORT_FRAMED(0x005bdaa0, d_005bdaa0::TwoItemTimedRecord__clear, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_005bdb6c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Picks a random request kind (6 and up) for a villager of the town, leaving out kinds it cannot ask today.
namespace d_005bdb6c {

struct __attribute__((packed)) Now {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Now, word_0, 0x0);
GUEST_OFFSET(Now, word_4, 0x4);
GUEST_OFFSET(Now, word_8, 0x8);

inline constexpr guest::Function<0x00116e4f, u32(u32, u32)> BitSet32__clear;
inline constexpr guest::Function<0x00116ea5, u32(u32, u32, u32)> init_bit_mask;
inline constexpr guest::Function<0x002fb328, u32(u32, u32, u32, u32)> get_save_data;
inline constexpr guest::Function<0x002fb378, u32(u32)> game_time_now;
inline constexpr guest::Function<0x002fe419, u32(u32)> pick_random_set_bit;
inline constexpr guest::Function<0x003009a9, u32(u32, u32)> villager_record_at;
inline constexpr guest::Function<0x003015ec, u32(u32, u32, u32, u32)> any_day_handler_accepts;

struct __attribute__((packed)) PickVillagerRequestKindFrame {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u8 unknown_c[0xc];  // (not read or written by name)
};
GUEST_OFFSET(PickVillagerRequestKindFrame, word_0, 0x0);
GUEST_OFFSET(PickVillagerRequestKindFrame, word_4, 0x4);
GUEST_OFFSET(PickVillagerRequestKindFrame, word_8, 0x8);
GUEST_SIZE(PickVillagerRequestKindFrame, 0x18);

u32 pick_villager_request_kind(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<PickVillagerRequestKindFrame> frame;  // the original's stack frame
    u32 save_data = get_save_data(r0, r1, r2, r3);
    u32 villager_record = villager_record_at(save_data + 0x292a4u, r0);
    if (villager_record == 0) {
        return 0x21u;
    }
    init_bit_mask(frame.at(0xc).addr(), 7u, 1u);
    BitSet32__clear(frame.at(0xc).addr(), 0u);
    u32 r0_6 = *gptr<s8>(villager_record + 0x2516u);
    if (r0_6 + 1u == 0) {
        r0_6 = BitSet32__clear(frame.at(0xc).addr(), 2u);
    }
    gptr<Now> now_2 = gptr<Now>(game_time_now(r0_6));
    frame->word_0 = ~0u;
    frame->word_4 = 0;
    frame->word_8 = 1;
    if (any_day_handler_accepts(0x23u, now_2->word_0, now_2->word_4, now_2->word_8) != 0) {
        BitSet32__clear(frame.at(0xc).addr(), 5u);
        BitSet32__clear(frame.at(0xc).addr(), 6u);
    }
    return pick_random_set_bit(frame.at(0xc).addr()) + 6u & 0xffu;
}

}  // namespace d_005bdb6c
GUEST_EXPORT_FRAMED(0x005bdb6c, d_005bdb6c::pick_villager_request_kind, 0x4010);  // pushes {r4, lr} first, as the original

// f_005bdc34: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Picks a random request kind for a villager, by its NPC state.
namespace d_005bdc34 {

struct __attribute__((packed)) Local_005bdc34_r4_1 {
    u8 unknown_0[0x28];  // (not used here)
    u32 word_28;
    u8 unknown_2c[0x4];  // (not used here)
    u32 word_30;
};
GUEST_OFFSET(Local_005bdc34_r4_1, word_28, 0x28);
GUEST_OFFSET(Local_005bdc34_r4_1, word_30, 0x30);

inline constexpr guest::Function<0x00116e4f, u32(u32, u32, u32, u32)> BitSet32__clear;
inline constexpr guest::Function<0x00116ea5, u32(u32, u32, u32, u32)> init_bit_mask;
inline constexpr guest::Function<0x002fae84, u32(u32)> get_data_base;
inline constexpr guest::Function<0x002fb310, u32(u32)> slot_records_of;
inline constexpr guest::Function<0x002fe419, u32(u32, u32, u32, u32)> pick_random_set_bit;
inline constexpr guest::Function<0x00309865, u32(u32, u32)> villager_slot_index;
inline constexpr guest::Function<0x0051ce84, u32(u32, u32, u32, u32)> BsNpcMgr__SearchFunction__SearchFunction_0051ce84;

struct __attribute__((packed)) PickVillagerRequestKind2Frame {
    u8 unknown_0[0x8];  // (not read or written by name)
    u32 word_8;
    u8 unknown_c[0x4];  // (not read or written by name)
};
GUEST_OFFSET(PickVillagerRequestKind2Frame, word_8, 0x8);
GUEST_SIZE(PickVillagerRequestKind2Frame, 0x10);

u32 pick_villager_request_kind_2(u32 r0, u32 r1) {
    guest::StackFrameOf<PickVillagerRequestKind2Frame> frame;  // the original's stack frame
    u32 r12 = 0;
    u32 r0_2 = 0;
    u32 r3 = 0x88f364u;
    u32 i = 0u;
    do {
        r12 = r0;
        if (s32(r0) < s32(gptr<u32>(r3)[i])) {
            if ((i & 0xffu) == 5u) {
                i = 0u;
            } else {
                return ~0u;
            }
            goto L_5bdc78;
        }
        i += 1u;
        guest::preempt();
    } while (s32(i) < 0xc);
    return ~0u;
L_5bdc78:;
    if (s32(r0) >= s32(gptr<u32>(r3)[i])) {
        i += 1u;
        if (s32(i) < 0xc) {
            guest::preempt();
            goto L_5bdc78;
        }
    } else if ((i & 0xffu) < 0xcu) {
        gptr<Local_005bdc34_r4_1> r4_1 = gptr<Local_005bdc34_r4_1>(r1 + 0x1000u);
        if (r12 == 8u) {
            u32 r0_1 = r4_1->word_28;
            if (r0_1 == 0) {
                return ~0u;
            }
            r0_2 = *gptr<s8>(r0_1 + 0x2516u);
            if (r0_2 < 0xau) {
                return r0_2;
            }
            return ~0u;
        }
        u32 r0_3 = frame.at(0).addr();
        init_bit_mask(r0_3, 0xau, 1u, r3);
        u32 data_base = get_data_base(r0_3);
        u32 records = slot_records_of(data_base);
        u32 r0_7 = villager_slot_index(records + 4u, 0u);
        r3 = guest::cpu()->r[3];
        u32 r5 = r4_1->word_30;
        u32 r6 = r0_7;
        u32 j = 0u;
        do {
            u32 r0_8 = BsNpcMgr__SearchFunction__SearchFunction_0051ce84(j, r6, r5, r3);
            r3 = guest::cpu()->r[3];
            if (r0_8 == 0) {
                BitSet32__clear(frame.at(0).addr(), j, guest::cpu()->r[2], r3);
                r3 = guest::cpu()->r[3];
            }
            j += 1u;
            guest::preempt();
        } while (s32(j) < 0xa);
        if (frame->word_8 == 0) {
            return ~0u;
        }
        r0_2 = pick_random_set_bit(frame.at(0).addr(), guest::cpu()->r[1], guest::cpu()->r[2], r3);
        return r0_2;
    }
    return ~0u;
}

}  // namespace d_005bdc34
GUEST_EXPORT_FRAMED(0x005bdc34, d_005bdc34::pick_villager_request_kind_2, 0x4070);  // pushes {j, r5, r6, lr} first, as the original

// f_005be0fc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Clears a timed record with two 0x30-byte identities, an item and two flags.
namespace d_005be0fc {

struct __attribute__((packed)) NamePairRecord {
    u8 unknown_0[0x8];  // (not used here)
    u8 byte_8;
    u8 byte_9;
    u8 byte_a;
};
GUEST_OFFSET(NamePairRecord, byte_8, 0x8);
GUEST_OFFSET(NamePairRecord, byte_9, 0x9);
GUEST_OFFSET(NamePairRecord, byte_a, 0xa);

inline constexpr u32 empty_item_address = 0x0095bfdcu;
inline constexpr guest::Function<0x002fc8e8, u32(u32, u32)> Item__copy;
inline constexpr guest::Function<0x00303cdc, u32(u32, u32, u32, u32)> clear_inner;
inline constexpr guest::Function<0x003084d0, u32(u32, u32)> clear_identity_with_value;

u32 NamePairRecord__clear(gptr<NamePairRecord> name_pair_record, u32 r1) {
    u32 r0 = name_pair_record.addr();
    u32 r5 = r0;
    name_pair_record->byte_8 = 0x21;
    clear_inner(r5, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = 0xffu;
    name_pair_record->byte_9 = u8(r1);
    u32 i = 0u;
    name_pair_record->byte_a = 9;
    do {
        clear_identity_with_value(r5 + i * 0x30u + 0xcu, r1);
        r1 = guest::cpu()->r[1];
        i += 1u;
        guest::preempt();
    } while (s32(i) < 2);
    Item__copy(r5 + 0x6cu, empty_item_address);
    *gptr<u8>(r5 + 0x74u) = 0;
    *gptr<u8>(r5 + 0x75u) = 0;
    return 0u;
}

}  // namespace d_005be0fc
GUEST_EXPORT_FRAMED(0x005be0fc, d_005be0fc::NamePairRecord__clear, 0x4070);  // pushes {i, r5, r6, lr} first, as the original

// f_005be19c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Builds and clears a timed record with two identities and two items.
namespace d_005be19c {

struct __attribute__((packed)) NamePairRecord {
    u8 unknown_0[0x8];  // (not used here)
    u8 byte_8;
    u8 byte_9;
    u8 byte_a;
};
GUEST_OFFSET(NamePairRecord, byte_8, 0x8);
GUEST_OFFSET(NamePairRecord, byte_9, 0x9);
GUEST_OFFSET(NamePairRecord, byte_a, 0xa);

inline constexpr guest::Function<0x002fc20c, u32(u32, u32)> construct_empty_item;
inline constexpr guest::Function<0x00303cdc, u32(u32)> clear_inner;
inline constexpr guest::Function<0x005be0fc, u32(u32)> NamePairRecord__clear;
inline constexpr guest::Function<0x005cdf48, u32(u32, u32, u32, u32)> game_time_set;

u32 NamePairRecord__construct(gptr<NamePairRecord> name_pair_record, u32 r1) {
    game_time_set(name_pair_record.addr(), r1, ~0u, ~0x80000000u);
    name_pair_record->byte_8 = 0x21;
    clear_inner(name_pair_record.addr());
    name_pair_record->byte_9 = 0xff;
    name_pair_record->byte_a = 9;
    construct_empty_item(name_pair_record.addr() + 0x6cu, 0xffu);
    construct_empty_item(name_pair_record.addr() + 0x70u, guest::cpu()->r[1]);
    NamePairRecord__clear(name_pair_record.addr());
    return name_pair_record.addr();
}

}  // namespace d_005be19c
GUEST_EXPORT_FRAMED(0x005be19c, d_005be19c::NamePairRecord__construct, 0x4010);  // pushes {r4, lr} first, as the original

// f_005be844: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Clears (0xffff) every entry of the 11-entry 16-bit id list equal to `id`.
namespace d_005be844 {

struct __attribute__((packed)) Local_005be844_r12_1 {
    u16 half_0;
};
GUEST_OFFSET(Local_005be844_r12_1, half_0, 0x0);


void IdList11__remove(u32 id_list11, u32 r1) {
    u32 r4 = 0xffffu;
    u32 r2 = 0u;
    u32 r3 = 0xbu;
    do {
        gptr<Local_005be844_r12_1> r12_1 = gptr<Local_005be844_r12_1>(id_list11 + (r2 << 1));
        r2 += 1u;
        if (r12_1->half_0 == r1) {
            r12_1->half_0 = u16(r4);
        }
        r3 -= 1u;
        guest::preempt();
    } while (r3 != 0);
}

}  // namespace d_005be844
GUEST_EXPORT_FRAMED(0x005be844, d_005be844::IdList11__remove, 0x30);  // pushes {r4, r5} first, as the original

// f_005be87c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Clears the 11-entry 16-bit id list (0xffff).
namespace d_005be87c {

struct __attribute__((packed)) IdList11 {
    u16 half_0;
};
GUEST_OFFSET(IdList11, half_0, 0x0);


void IdList11__clear(gptr<IdList11> id_list11) {
    u32 r0 = id_list11.addr();
    u32 r1 = 0xffffu;
    u32 r3 = 1u;
    u32 r2 = r3;
    id_list11->half_0 = u16(r1);
    do {
        u32 r3_1 = r3 + 1u;
        r2 += 2u;
        *gptr<u16>(r0 + (r3 << 1)) = u16(r1);
        r3 = r3_1 + 1u;
        *gptr<u16>(r0 + (r3_1 << 1)) = u16(r1);
        guest::preempt();
    } while (s32(r2) < 0xb);
    guest::cpu()->r[1] = r1;
}

}  // namespace d_005be87c
GUEST_EXPORT_FRAMED(0x005be87c, d_005be87c::IdList11__clear, 0x10);  // pushes {r4} first, as the original

// f_005be8c0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Clears the 11-entry 16-bit id list (0xffff).
namespace d_005be8c0 {

struct __attribute__((packed)) IdList11 {
    u16 half_0;
};
GUEST_OFFSET(IdList11, half_0, 0x0);


void IdList11__clear_2(gptr<IdList11> id_list11) {
    u32 r0 = id_list11.addr();
    u32 r1 = 0xffffu;
    u32 r3 = 1u;
    u32 r2 = r3;
    id_list11->half_0 = u16(r1);
    do {
        u32 r3_1 = r3 + 1u;
        r2 += 2u;
        *gptr<u16>(r0 + (r3 << 1)) = u16(r1);
        r3 = r3_1 + 1u;
        *gptr<u16>(r0 + (r3_1 << 1)) = u16(r1);
        guest::preempt();
    } while (s32(r2) < 0xb);
    guest::cpu()->r[1] = r1;
}

}  // namespace d_005be8c0
GUEST_EXPORT_FRAMED(0x005be8c0, d_005be8c0::IdList11__clear_2, 0x10);  // pushes {r4} first, as the original

// f_005bf518: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Initializes the view of the texture resource's image (or none when it is not a texture).
namespace d_005bf518 {

struct __attribute__((packed)) TextureView {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(TextureView, word_0, 0x0);
GUEST_OFFSET(TextureView, word_4, 0x4);
GUEST_OFFSET(TextureView, word_8, 0x8);

struct __attribute__((packed)) TextureViewFromResourceArg1 {
    u32 word_0;
};
GUEST_OFFSET(TextureViewFromResourceArg1, word_0, 0x0);


void TextureView__from_resource(gptr<TextureView> texture_view, gptr<TextureViewFromResourceArg1> arg1) {
    u32 r1 = arg1.addr();
    u32 r3_1 = 0u;
    texture_view->word_0 = r3_1;
    texture_view->word_4 = r3_1;
    texture_view->word_8 = r3_1;
    if (r1 != 0) {
        if ((0x20000011u & ~arg1->word_0) != 0) {
            r1 = 0u;
        }
    }
    u32 r12_1 = *gptr<u32>(r1 + 0x38u);
    u32 ea_2 = (r12_1 == 0 ? r3_1 : r1 + 0x38u + r12_1) + 0xcu;
    u32 r12_2 = *gptr<u32>(ea_2);
    if (r12_2 != 0) {
        r3_1 = r12_2 + ea_2;
    }
    texture_view->word_0 = r3_1;
    texture_view->word_4 = *gptr<u32>(r1 + 0x1cu);
    u32 r1_1 = *gptr<u32>(r1 + 0x18u);
    texture_view->word_8 = r1_1;
    guest::cpu()->r[1] = r1_1;
}

}  // namespace d_005bf518
GUEST_EXPORT(0x005bf518, d_005bf518::TextureView__from_resource);

// f_005bf744: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Jumps to ssys__ma__lyt__Layout__destructor.
namespace d_005bf744 {

inline constexpr guest::Function<0x00569480, u32(u32, u32, u32, u32)> ssys__ma__lyt__Layout__destructor;

u32 Layout__destructor() {
    return ssys__ma__lyt__Layout__destructor(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_005bf744
GUEST_EXPORT(0x005bf744, d_005bf744::Layout__destructor);

// f_005bf748: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Appends an entry to a queue.
namespace d_005bf748 {

inline constexpr guest::Function<0x0013f134, u32(u32, u32)> queue_append;

void queue_append_veneer(u32 pending_list_address) {
    queue_append(pending_list_address, guest::cpu()->r[1]);
}

}  // namespace d_005bf748
GUEST_EXPORT_FRAMED(0x005bf748, d_005bf748::queue_append_veneer, 0x4010);  // pushes {r4, lr} first, as the original

// f_005bf758: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The first node of the list (+4, next +8) whose +0xc is `key`, or 0.
namespace d_005bf758 {

struct __attribute__((packed)) ListObject {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
};
GUEST_OFFSET(ListObject, word_4, 0x4);


u32 List__find_by_word_c(gptr<ListObject> list_object, u32 pending_list) {
    u32 r0 = list_object.addr();
    u32 zf_1 = pending_list == 0;
    if (!zf_1) {
        r0 = list_object->word_4;
        zf_1 = r0 == 0;
    }
    if (zf_1) {
        return 0u;
    }
    do {
        if (*gptr<u32>(r0 + 0xcu) == pending_list) {
            return r0;
        }
        r0 = *gptr<u32>(r0 + 8u);
        guest::preempt();
    } while (r0 != 0);
    return 0u;
}

}  // namespace d_005bf758
GUEST_EXPORT(0x005bf758, d_005bf758::List__find_by_word_c);

// f_005bf7cc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Stores a position and an angle (and clears +0x10) in a spawn point.
namespace d_005bf7cc {

struct __attribute__((packed)) SpawnPoint {
    float float_0;
    float float_4;
    float float_8;
    u16 half_c;
    u8 unknown_e[0x2];  // (not used here)
    u32 word_10;
};
GUEST_OFFSET(SpawnPoint, float_0, 0x0);
GUEST_OFFSET(SpawnPoint, float_4, 0x4);
GUEST_OFFSET(SpawnPoint, float_8, 0x8);
GUEST_OFFSET(SpawnPoint, half_c, 0xc);
GUEST_OFFSET(SpawnPoint, word_10, 0x10);

struct __attribute__((packed)) SpawnPointSetArg2 {
    u16 half_0;
};
GUEST_OFFSET(SpawnPointSetArg2, half_0, 0x0);


void SpawnPoint__set(gptr<SpawnPoint> spawn_point, gptr<Float3> arg1, gptr<SpawnPointSetArg2> arg2) {
    spawn_point->half_c = 0;
    spawn_point->float_0 = arg1->v[0];
    spawn_point->float_4 = arg1->v[1];
    spawn_point->float_8 = arg1->v[2];
    spawn_point->half_c = arg2->half_0;
    spawn_point->word_10 = 0;
}

}  // namespace d_005bf7cc
GUEST_EXPORT(0x005bf7cc, d_005bf7cc::SpawnPoint__set);

// f_005bf82c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Stores the spawn set: a kind byte, two words and four spawn points (position, angle, word).
namespace d_005bf82c {

struct __attribute__((packed)) SpawnSet {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u16 half_c;
    u8 unknown_e[0x2];  // (not used here)
    u32 word_10;
    u32 word_14;
    u32 word_18;
    u32 word_1c;
    u16 half_20;
    u8 unknown_22[0x2];  // (not used here)
    u32 word_24;
    u32 word_28;
    u32 word_2c;
    u32 word_30;
    u16 half_34;
    u8 unknown_36[0x2];  // (not used here)
    u32 word_38;
    u32 word_3c;
    u32 word_40;
    u32 word_44;
    u16 half_48;
    u8 unknown_4a[0x2];  // (not used here)
    u32 word_4c;
    u8 byte_50;
    u8 unknown_51[0x3];  // (not used here)
    u32 word_54;
    u32 word_58;
};
GUEST_OFFSET(SpawnSet, word_0, 0x0);
GUEST_OFFSET(SpawnSet, word_4, 0x4);
GUEST_OFFSET(SpawnSet, word_8, 0x8);
GUEST_OFFSET(SpawnSet, half_c, 0xc);
GUEST_OFFSET(SpawnSet, word_10, 0x10);
GUEST_OFFSET(SpawnSet, word_14, 0x14);
GUEST_OFFSET(SpawnSet, word_18, 0x18);
GUEST_OFFSET(SpawnSet, word_1c, 0x1c);
GUEST_OFFSET(SpawnSet, half_20, 0x20);
GUEST_OFFSET(SpawnSet, word_24, 0x24);
GUEST_OFFSET(SpawnSet, word_28, 0x28);
GUEST_OFFSET(SpawnSet, word_2c, 0x2c);
GUEST_OFFSET(SpawnSet, word_30, 0x30);
GUEST_OFFSET(SpawnSet, half_34, 0x34);
GUEST_OFFSET(SpawnSet, word_38, 0x38);
GUEST_OFFSET(SpawnSet, word_3c, 0x3c);
GUEST_OFFSET(SpawnSet, word_40, 0x40);
GUEST_OFFSET(SpawnSet, word_44, 0x44);
GUEST_OFFSET(SpawnSet, half_48, 0x48);
GUEST_OFFSET(SpawnSet, word_4c, 0x4c);
GUEST_OFFSET(SpawnSet, byte_50, 0x50);
GUEST_OFFSET(SpawnSet, word_54, 0x54);
GUEST_OFFSET(SpawnSet, word_58, 0x58);

struct __attribute__((packed)) Local_005bf82c_r12_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u16 half_c;
    u8 unknown_e[0x2];  // (not used here)
    u32 word_10;
};
GUEST_OFFSET(Local_005bf82c_r12_1, word_0, 0x0);
GUEST_OFFSET(Local_005bf82c_r12_1, word_4, 0x4);
GUEST_OFFSET(Local_005bf82c_r12_1, word_8, 0x8);
GUEST_OFFSET(Local_005bf82c_r12_1, half_c, 0xc);
GUEST_OFFSET(Local_005bf82c_r12_1, word_10, 0x10);


void SpawnSet__set(gptr<SpawnSet> spawn_set, u32 r1, u32 r2, u32 r3) {
    u32 r6_1 = *gptr<u32>(guest::cpu()->r[13] + 0xcu);
    u32 r4_1 = *gptr<u32>(guest::cpu()->r[13] + 0x14u);
    gptr<Local_005bf82c_r12_1> r12_1 = gptr<Local_005bf82c_r12_1>(*gptr<u32>(guest::cpu()->r[13] + 0x18u));
    u32 r5_1 = *gptr<u32>(guest::cpu()->r[13] + 0x10u);
    spawn_set->byte_50 = u8(r1);
    spawn_set->word_54 = r2;
    spawn_set->word_58 = r3;
    spawn_set->word_0 = *gptr<u32>(r6_1);
    spawn_set->word_4 = *gptr<u32>(r6_1 + 4u);
    spawn_set->word_8 = *gptr<u32>(r6_1 + 8u);
    spawn_set->half_c = *gptr<u16>(r6_1 + 0xcu);
    spawn_set->word_10 = *gptr<u32>(r6_1 + 0x10u);
    spawn_set->word_14 = *gptr<u32>(r5_1);
    spawn_set->word_18 = *gptr<u32>(r5_1 + 4u);
    spawn_set->word_1c = *gptr<u32>(r5_1 + 8u);
    spawn_set->half_20 = *gptr<u16>(r5_1 + 0xcu);
    spawn_set->word_24 = *gptr<u32>(r5_1 + 0x10u);
    spawn_set->word_28 = *gptr<u32>(r4_1);
    spawn_set->word_2c = *gptr<u32>(r4_1 + 4u);
    spawn_set->word_30 = *gptr<u32>(r4_1 + 8u);
    spawn_set->half_34 = *gptr<u16>(r4_1 + 0xcu);
    spawn_set->word_38 = *gptr<u32>(r4_1 + 0x10u);
    spawn_set->word_3c = r12_1->word_0;
    spawn_set->word_40 = r12_1->word_4;
    spawn_set->word_44 = r12_1->word_8;
    spawn_set->half_48 = r12_1->half_c;
    u32 r1_1 = r12_1->word_10;
    spawn_set->word_4c = r1_1;
    guest::cpu()->r[1] = r1_1;
}

}  // namespace d_005bf82c
GUEST_EXPORT_FRAMED(0x005bf82c, d_005bf82c::SpawnSet__set, 0x70);  // pushes {r4, r5, r6} first, as the original

// f_005bf8f0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Clears the four spawn points (the default position) and the set's kind (0xa5) and words (6).
namespace d_005bf8f0 {

struct __attribute__((packed)) SpawnSet {
    u8 unknown_0[0x50];  // (not used here)
    u8 byte_50;
    u8 unknown_51[0x3];  // (not used here)
    u32 word_54;
    u32 word_58;
};
GUEST_OFFSET(SpawnSet, byte_50, 0x50);
GUEST_OFFSET(SpawnSet, word_54, 0x54);
GUEST_OFFSET(SpawnSet, word_58, 0x58);

struct __attribute__((packed)) Local_005bf8f0_r1_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u16 half_c;
    u8 unknown_e[0x2];  // (not used here)
    u32 word_10;
};
GUEST_OFFSET(Local_005bf8f0_r1_1, word_0, 0x0);
GUEST_OFFSET(Local_005bf8f0_r1_1, word_4, 0x4);
GUEST_OFFSET(Local_005bf8f0_r1_1, word_8, 0x8);
GUEST_OFFSET(Local_005bf8f0_r1_1, half_c, 0xc);
GUEST_OFFSET(Local_005bf8f0_r1_1, word_10, 0x10);

inline constexpr u32 origin_x_address = 0x00ae5658u;

void SpawnSet__clear(gptr<SpawnSet> spawn_set) {
    u32 r0 = spawn_set.addr();
    u32 r3 = origin_x_address;
    u32 i = 0u;
    u32 r12 = i;
    do {
        gptr<Local_005bf8f0_r1_1> r1_1 = gptr<Local_005bf8f0_r1_1>(r0 + i * 0x14u);
        i += 1u;
        r1_1->word_0 = *gptr<u32>(r3);
        r1_1->word_4 = *gptr<u32>(r3 + 4u);
        r1_1->word_8 = *gptr<u32>(r3 + 8u);
        r1_1->half_c = u16(r12);
        r1_1->word_10 = r12;
        guest::preempt();
    } while (i < 4u);
    spawn_set->byte_50 = 0xa5;
    spawn_set->word_58 = 6;
    spawn_set->word_54 = 6;
    guest::cpu()->r[1] = 6u;
}

}  // namespace d_005bf8f0
GUEST_EXPORT_FRAMED(0x005bf8f0, d_005bf8f0::SpawnSet__clear, 0x10);  // pushes {r4} first, as the original

// f_005bfbd4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Clears the player slots (all 8), the player records and the four slot identities, and resets the player state block.
namespace d_005bfbd4 {

inline constexpr u32 player_records_address = 0x00a84790u;
inline constexpr u32 player_slots_address = 0x00aad990u;
inline constexpr u32 player_state_block_address = 0x00aaef18u;
inline guest::global<u32, 0x00aad994> player_slot_a;
inline guest::global<u32, 0x00aad998> player_slot_b;
inline guest::global<u32, 0x00aad99c> player_slot_c;
inline guest::global<u32, 0x00aad9a0> player_slot_d;
inline guest::global<u16, 0x00aaef14> player_slot_flags;
inline constexpr guest::Function<0x0013fac4, u32(u32, u32, u32, u32)> set_bytes;
inline constexpr guest::Function<0x002f825c, u32(u32, u32)> clear_aligned;
inline constexpr guest::Function<0x002f8574, u32(u32, u32, u32)> copy_bytes_at_any_alignment;
inline constexpr guest::Function<0x00301444, u32(u32, u32, u32)> clear;
inline constexpr guest::Function<0x005bf954, u32(u32, u32, u32)> PlayerState__clear_inputs;
inline constexpr guest::Function<0x005bfb94, u32(u32, u32, u32, u32)> PlayerInput__reset;

u32 reset_player_slots_2() {
    guest::StackFrame frame(0x18);  // the original's stack frame
    set_bytes(player_slots_address, 4u, 8u, guest::cpu()->r[3]);
    u32 r7 = 0u;
    *player_slot_a = r7;
    *player_slot_b = r7;
    *player_slot_c = r7;
    *player_slot_d = r7;
    clear_aligned(player_records_address, 0x29200u);
    u32 r2 = guest::cpu()->r[2];
    u32 r8 = player_records_address;
    u32 i = 0u;
    do {
        u32 r6_1 = r8 + (i * 3u + (i << 4) << 1);
        u32 r5_1 = r6_1 + 0x29214u;
        clear(r5_1, 0x26u, r2);
        *gptr<u8>(r5_1) = 0xa5;
        copy_bytes_at_any_alignment(r6_1 + 0x292acu, r5_1, 0x26u);
        r2 = guest::cpu()->r[2];
        i += 1u;
        guest::preempt();
    } while (i < 4u);
    *player_slot_flags = u16(r7);
    u32 r0_2 = PlayerState__clear_inputs(player_state_block_address, guest::cpu()->r[1], r2);
    frame.release();
    return PlayerInput__reset(r0_2, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_005bfbd4
GUEST_EXPORT(0x005bfbd4, d_005bfbd4::reset_player_slots_2);

// f_005bfc8c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether the player is in state 0x29 or 0x2a with slot 0 of its four (+0x1b4) in use.
namespace d_005bfc8c {

inline constexpr guest::Function<0x005c33d0, u32(u32, u32, u32, u32)> look_up_object;
inline constexpr guest::Function<0x0070ab24, u32(u32, u32)> slot_of_4_at_e0;

u32 player_in_states_29_2a_with_slot() {
    u32 object = look_up_object(4u, 0u, guest::cpu()->r[2], guest::cpu()->r[3]);
    if (object == 0) {
        return object;
    }
    u32 r1_2 = *gptr<u16>(object + 0x224u);
    if (r1_2 != 0x29u && r1_2 != 0x2au) {
        guest::cpu()->r[1] = r1_2;
        return 0u;
    }
    u32 r0_3 = slot_of_4_at_e0(object + 0x1b4u, 0u);
    if (r0_3 != 0) {
        r0_3 = 1u;
    }
    return r0_3;
}

}  // namespace d_005bfc8c
GUEST_EXPORT_FRAMED(0x005bfc8c, d_005bfc8c::player_in_states_29_2a_with_slot, 0x4010);  // pushes {r4, lr} first, as the original

// f_005bff24: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Unless the player is locked: whether 006503b0 accepts the arguments.
namespace d_005bff24 {

inline constexpr guest::Function<0x005c33d0, u32(u32, u32, u32, u32)> look_up_object;
inline constexpr guest::Function<0x006503b0, u32(u32, u32, u32, u32)> AcPlayer__start_action_with_target;

u32 player_call_6503b0(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 object = look_up_object(4u, 0u, r2, r3);
    u32 r1_1 = guest::cpu()->r[1];
    if (object != 0) {
        r1_1 = u32(*gptr<u8>(object + 0x8c5u)) >> 5u & 1u;
        if (r1_1 != 0) {
            object = 0u;
        } else {
            object = AcPlayer__start_action_with_target(object, r0, r1, r2);
            r1_1 = guest::cpu()->r[1];
            if (object != 0) {
                object = 1u;
            }
        }
    }
    guest::cpu()->r[1] = r1_1;
    return object;
}

}  // namespace d_005bff24
GUEST_EXPORT_FRAMED(0x005bff24, d_005bff24::player_call_6503b0, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_005bff78: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Unless the player is locked: requests state 0xc4 with the reaction id of the slot (table 0x881b98) and sound
// 0x100056d.
namespace d_005bff78 {

inline constexpr guest::Function<0x005c33d0, u32(u32, u32, u32, u32)> look_up_object;
inline constexpr guest::Function<0x00678278, u32(u32, u32, u32, u32)> AcPlayer_rec__request_state_196;

struct __attribute__((packed)) PlayerPlayReactionForSlotFrame {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u8 unknown_c[0x4];  // (not read or written by name)
};
GUEST_OFFSET(PlayerPlayReactionForSlotFrame, word_0, 0x0);
GUEST_OFFSET(PlayerPlayReactionForSlotFrame, word_4, 0x4);
GUEST_OFFSET(PlayerPlayReactionForSlotFrame, word_8, 0x8);
GUEST_SIZE(PlayerPlayReactionForSlotFrame, 0x10);

void player_play_reaction_for_slot(u32 r0, u32 r1_unused, u32 r2, u32 r3, float S0) {
    guest::StackFrameOf<PlayerPlayReactionForSlotFrame> frame;  // the original's stack frame
    u32 object = look_up_object(4u, 0u, r2, r3);
    if (object == 0) {
        return;
    }
    u32 r1_2 = u32(*gptr<u8>(object + 0x8c5u)) >> 5u & 1u;
    if (r1_2 != 0) {
        guest::cpu()->r[1] = r1_2;
        return;
    }
    frame->word_0 = 0;
    frame->word_4 = ~0u;
    frame->word_8 = 0x100056d;
    float S0_2 = 0.0f;
    u32 r1_3 = gptr<u16>(0x881b98u)[r0 & 3u];
    guest::cpu()->s[0] = S0_2;
    AcPlayer_rec__request_state_196(object, r1_3, 0u, 0u);
}

}  // namespace d_005bff78
GUEST_EXPORT_FRAMED(0x005bff78, d_005bff78::player_play_reaction_for_slot, 0x4010);  // pushes {r4, lr} first, as the original
