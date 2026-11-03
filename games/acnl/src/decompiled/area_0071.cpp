// Functions decompiled by tools/decomp (docs/decomp.md), each proved equal to the recompiled original (prove-cpp). The
// names come from games/acnl/names (tools/decomp/names.py); the others are generated (d_<address>::f_<address>,
// Object_<address>_<argument>, word_<offset>) and still to be chosen.
#include "guest/guest.hpp"
#include "graphics/hemisphere_light.hpp"
#include "recovered/structs.hpp"
#include "search/search_cand_core.hpp"

#include <bit>

using guest::gptr;

// f_00710614: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Letter `index` of an array of letters (0x280 bytes each).
namespace d_00710614 {


u32 letter_at(u32 letters, u32 index) {
    u32 r1_1 = index * 5u;
    guest::cpu()->r[1] = r1_1;
    return letters + (r1_1 << 7);
}

}  // namespace d_00710614
GUEST_EXPORT(0x00710614, d_00710614::letter_at);

// f_007108c4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether the town flag (bit 0 of +0x621d0) is set, the town event (+0x62264) is in state 3 and its stamp (+0x62250)
// is not today.
namespace d_007108c4 {

inline constexpr guest::Function<0x002fb328, u32(u32, u32, u32, u32)> get_save_data;
inline constexpr guest::Function<0x007111b4, u32(u32)> Stamp__is_today;

u32 town_event_3_pending(u32 r0, u32 r1) {
    u32 save_data_4 = get_save_data(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_2 = u32(*gptr<u8>(save_data_4 + 0x621d0u)) & 1u;  // (from the original)
    if (r0_2 == 0) {
        guest::cpu()->r[1] = 0x6214fu;  // (from the original)
        return r0_2;
    }
    u32 save_data_5 = get_save_data(r0_2, 0x6214fu, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_4 = *gptr<u8>(save_data_5 + 0x62264u);  // (from the original)
    if (r0_4 != 3u) {
        return 0u;
    }
    u32 save_data_6 = get_save_data(r0_4, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 is_today = Stamp__is_today(save_data_6 + 0x62250u);  // (from the original)
    return is_today == 0;
}

}  // namespace d_007108c4
GUEST_EXPORT_FRAMED(0x007108c4, d_007108c4::town_event_3_pending, 0x4010);  // pushes {r4, lr} first, as the original

// f_0071109c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Checks the record (00710d50) unless the day has changed.
namespace d_0071109c {

inline constexpr guest::Function<0x0056c0e4, u32(u32, u32, u32, u32)> day_has_changed;
inline constexpr guest::Function<0x00710d50, u32(u32, u32, u32, u32)> TimeWindow__contains_now;

u32 record_check_same_day(u32 r0) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 r0_1 = day_has_changed(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0_1 != 0) {
        return 0u;
    }
    frame.release();
    return TimeWindow__contains_now(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0071109c
GUEST_EXPORT(0x0071109c, d_0071109c::record_check_same_day);

// f_007110c4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether the time stamp is set and lies after today's start (by the clock mode).
namespace d_007110c4 {

struct __attribute__((packed)) Stamp {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Stamp, word_0, 0x0);
GUEST_OFFSET(Stamp, word_4, 0x4);

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

inline constexpr guest::Function<0x002fb338, u32(u32, u32, u32, u32)> is_not_sentinel;
inline constexpr guest::Function<0x00300650, u32(u32)> day_start_by_clock_mode;
inline constexpr guest::Function<0x003036dc, u32(u32, u32, u32, u32)> compare_stamp;

struct __attribute__((packed)) Frame_007110c4 {
    u32 word_0;
    u32 word_4;
    u8 unknown_8[0x18];  // (not read or written by name)
};
GUEST_OFFSET(Frame_007110c4, word_0, 0x0);
GUEST_OFFSET(Frame_007110c4, word_4, 0x4);
GUEST_SIZE(Frame_007110c4, 0x20);

u32 Stamp__is_after_today(gptr<Stamp> stamp, u32 r1_unused, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_007110c4> frame;  // the original's stack frame
    u32 r1_1 = stamp->word_4;
    frame->word_0 = stamp->word_0;
    frame->word_4 = r1_1;
    u32 r0_2 = is_not_sentinel(frame.at(0).addr(), r1_1, r2, r3);
    if (r0_2 == 0) {
        return r0_2;
    }
    day_start_by_clock_mode(frame.at(0x14).addr());  // (from the original)
    gptr<Local_007110c4_ea_1> ea_1 = gptr<Local_007110c4_ea_1>(frame.at(0x14).addr());  // (from the original)
    u32 r0_4 = ea_1->word_0;
    u32 r1_3 = ea_1->word_4;
    u32 r2_2 = ea_1->word_8;
    gptr<Local_007110c4_ea_2> ea_2 = gptr<Local_007110c4_ea_2>(frame.at(8).addr());
    ea_2->word_0 = r0_4;
    ea_2->word_4 = r1_3;
    ea_2->word_8 = r2_2;
    u32 r1_4 = stamp->word_4;
    frame->word_0 = stamp->word_0;
    frame->word_4 = r1_4;
    u32 r0_6 = compare_stamp(frame.at(0).addr(), frame.at(8).addr(), 1u, 1u);
    if (r0_6 != 1u) {
        r0_6 = 0u;
    }
    return r0_6;
}

}  // namespace d_007110c4
GUEST_EXPORT_FRAMED(0x007110c4, d_007110c4::Stamp__is_after_today, 0x4010);  // pushes {r4, lr} first, as the original

// f_0071112c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether the time stamp is set and lies before today's start (by the clock mode).
namespace d_0071112c {

struct __attribute__((packed)) Stamp {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Stamp, word_0, 0x0);
GUEST_OFFSET(Stamp, word_4, 0x4);

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

inline constexpr guest::Function<0x002fb338, u32(u32, u32, u32, u32)> is_not_sentinel;
inline constexpr guest::Function<0x00300650, u32(u32)> day_start_by_clock_mode;
inline constexpr guest::Function<0x003036dc, u32(u32, u32, u32, u32)> compare_stamp;

struct __attribute__((packed)) Frame_0071112c {
    u32 word_0;
    u32 word_4;
    u8 unknown_8[0x18];  // (not read or written by name)
};
GUEST_OFFSET(Frame_0071112c, word_0, 0x0);
GUEST_OFFSET(Frame_0071112c, word_4, 0x4);
GUEST_SIZE(Frame_0071112c, 0x20);

u32 Stamp__is_before_today(gptr<Stamp> stamp, u32 r1_unused, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_0071112c> frame;  // the original's stack frame
    u32 r1_1 = stamp->word_4;
    frame->word_0 = stamp->word_0;
    frame->word_4 = r1_1;
    u32 r0_2 = is_not_sentinel(frame.at(0).addr(), r1_1, r2, r3);
    if (r0_2 == 0) {
        return r0_2;
    }
    day_start_by_clock_mode(frame.at(0x14).addr());  // (from the original)
    gptr<Local_0071112c_ea_1> ea_1 = gptr<Local_0071112c_ea_1>(frame.at(0x14).addr());  // (from the original)
    u32 r0_4 = ea_1->word_0;
    u32 r1_3 = ea_1->word_4;
    u32 r2_2 = ea_1->word_8;
    gptr<Local_0071112c_ea_2> ea_2 = gptr<Local_0071112c_ea_2>(frame.at(8).addr());
    ea_2->word_0 = r0_4;
    ea_2->word_4 = r1_3;
    ea_2->word_8 = r2_2;
    u32 r1_4 = stamp->word_4;
    frame->word_0 = stamp->word_0;
    frame->word_4 = r1_4;
    u32 r0_6 = compare_stamp(frame.at(0).addr(), frame.at(8).addr(), 1u, 1u);
    return r0_6 + 1u == 0;
}

}  // namespace d_0071112c
GUEST_EXPORT_FRAMED(0x0071112c, d_0071112c::Stamp__is_before_today, 0x4010);  // pushes {r4, lr} first, as the original

// f_007111b4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether the time stamp is set and falls on today (by the clock mode).
namespace d_007111b4 {

struct __attribute__((packed)) Stamp {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Stamp, word_0, 0x0);
GUEST_OFFSET(Stamp, word_4, 0x4);

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

inline constexpr guest::Function<0x002fb338, u32(u32, u32, u32, u32)> is_not_sentinel;
inline constexpr guest::Function<0x00300650, u32(u32)> day_start_by_clock_mode;
inline constexpr guest::Function<0x003036dc, u32(u32, u32, u32, u32)> compare_stamp;

struct __attribute__((packed)) Frame_007111b4 {
    u32 word_0;
    u32 word_4;
    u8 unknown_8[0x18];  // (not read or written by name)
};
GUEST_OFFSET(Frame_007111b4, word_0, 0x0);
GUEST_OFFSET(Frame_007111b4, word_4, 0x4);
GUEST_SIZE(Frame_007111b4, 0x20);

u32 Stamp__is_today(gptr<Stamp> stamp, u32 r1_unused, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_007111b4> frame;  // the original's stack frame
    u32 r1_1 = stamp->word_4;
    frame->word_0 = stamp->word_0;
    frame->word_4 = r1_1;
    u32 r0_2 = is_not_sentinel(frame.at(0).addr(), r1_1, r2, r3);
    if (r0_2 == 0) {
        return r0_2;
    }
    day_start_by_clock_mode(frame.at(0x14).addr());  // (from the original)
    gptr<Local_007111b4_ea_1> ea_1 = gptr<Local_007111b4_ea_1>(frame.at(0x14).addr());  // (from the original)
    u32 r0_4 = ea_1->word_0;
    u32 r1_3 = ea_1->word_4;
    u32 r2_2 = ea_1->word_8;
    gptr<Local_007111b4_ea_2> ea_2 = gptr<Local_007111b4_ea_2>(frame.at(8).addr());
    ea_2->word_0 = r0_4;
    ea_2->word_4 = r1_3;
    ea_2->word_8 = r2_2;
    u32 r1_4 = stamp->word_4;
    frame->word_0 = stamp->word_0;
    frame->word_4 = r1_4;
    u32 r0_6 = compare_stamp(frame.at(0).addr(), frame.at(8).addr(), 1u, 1u);
    return r0_6 == 0;
}

}  // namespace d_007111b4
GUEST_EXPORT_FRAMED(0x007111b4, d_007111b4::Stamp__is_today, 0x4010);  // pushes {r4, lr} first, as the original

// f_007112c8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether a record not stamped today is due now: same day, it passes its check, the current player has flag 2 of
// +0x5701 (or there is none) and its time (+8) has come.
namespace d_007112c8 {

inline constexpr u32 current_player_data_address = 0x00aaf14cu;
inline guest::global<u32, 0x00aaf14c> current_player_data;
inline constexpr guest::Function<0x002fb338, u32(u32)> is_not_sentinel;
inline constexpr guest::Function<0x0031703c, u32(u32)> compare_with_current_time;
inline constexpr guest::Function<0x0056c0e4, u32(u32)> day_has_changed;
inline constexpr guest::Function<0x00710d50, u32(u32)> TimeWindow__contains_now;
inline constexpr guest::Function<0x007111b4, u32(u32, u32, u32, u32)> Stamp__is_today;
inline constexpr guest::Function<0x007596ac, u32(u32, u32)> check_stamp_time;

u32 record_due_now(u32 stamp, u32 r1) {
    u32 r0_10 = 0;
    u32 is_today = Stamp__is_today(stamp, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    if (is_today == 0) {
        u32 r0_2 = day_has_changed(is_today);
        if (r0_2 == 0) {
            u32 r0_3 = TimeWindow__contains_now(stamp);
            if (r0_3 != 0) {
                u32 r0_4 = *current_player_data;
                if (r0_4 != 0) {
                    if (s32(u32(*gptr<u8>(r0_4 + 0x5701u)) << 0x1e) >= 0) {  // (from the original)
                        return 0u;
                    }
                }
                u32 r0_6 = is_not_sentinel(stamp + 8u);
                if (r0_6 != 0) {
                    u32 r0_8 = check_stamp_time(stamp + 8u, 1u);
                    if (r0_8 != 0) {
                        r0_10 = compare_with_current_time(stamp + 8u);
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
GUEST_EXPORT_FRAMED(0x007112c8, d_007112c8::record_due_now, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_00711858: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether a record not stamped today passes its check on the same day and the current player has flag 2 of +0x5701 (or
// there is none).
namespace d_00711858 {

inline constexpr u32 current_player_data_address = 0x00aaf14cu;
inline guest::global<u32, 0x00aaf14c> current_player_data;
inline constexpr guest::Function<0x0056c0e4, u32(u32)> day_has_changed;
inline constexpr guest::Function<0x00710d50, u32(u32)> TimeWindow__contains_now;
inline constexpr guest::Function<0x007111b4, u32(u32, u32, u32, u32)> Stamp__is_today;

u32 record_is_ready(u32 stamp) {
    u32 is_today = Stamp__is_today(stamp, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    if (is_today != 0) {
        return 0u;
    }
    u32 r0_2 = day_has_changed(is_today);
    if (r0_2 != 0) {
        return 0u;
    }
    u32 r0_3 = TimeWindow__contains_now(stamp);
    if (r0_3 == 0) {
        return 0u;
    }
    u32 r0_4 = *current_player_data;
    if (r0_4 == 0) {
        return 1u;
    }
    if (s32(u32(*gptr<u8>(r0_4 + 0x5701u)) << 0x1e) < 0) {  // (from the original)
        return 1u;
    }
    return 0u;
}

}  // namespace d_00711858
GUEST_EXPORT_FRAMED(0x00711858, d_00711858::record_is_ready, 0x4010);  // pushes {r4, lr} first, as the original

// f_00711bdc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The ground height at the position at +0x6c.
namespace d_00711bdc {

inline constexpr guest::Function<0x006c5c60, u32(u32, u32, u32, u32)> ground_height_at;

u32 ground_height_at_6c(u32 r0) {
    return ground_height_at(r0 + 0x6cu, 0u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
}

}  // namespace d_00711bdc
GUEST_EXPORT(0x00711bdc, d_00711bdc::ground_height_at_6c);

// f_00711d9c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The address of 16-byte entry `index` (below 5; else the first) of the table at 0x986a10.
namespace d_00711d9c {

inline constexpr u32 auto_camp_book_entries_address = 0x00986a10u;

u32 entry_16_986a10(u32 r0_unused, u32 r1) {
    u32 r0_1 = auto_camp_book_entries_address;
    if (r1 < 5u) {
        r0_1 += (r1 << 4);
    }
    return r0_1;
}

}  // namespace d_00711d9c
GUEST_EXPORT(0x00711d9c, d_00711d9c::entry_16_986a10);

// f_0071262c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether the entry (+5: owner in bits 0-2, state in bits 6-7) belongs to this station: state 2 or this owner, or the
// guest owner (4) when the guest entry is ready.
namespace d_0071262c {

struct __attribute__((packed)) Object_0071262c_0 {
    u8 unknown_0[0x5];  // (not used here)
    u8 byte_5;
};
GUEST_OFFSET(Object_0071262c_0, byte_5, 0x5);

inline constexpr guest::Function<0x00305f44, u32(u32)> current_net_station;
inline constexpr guest::Function<0x0061a7a0, u32(u32, u32)> net_guest_entry_is_ready;

u32 entry_owned_here(gptr<Object_0071262c_0> arg0) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 r0_1 = current_net_station(arg0.addr());
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
        return net_guest_entry_is_ready(r0_2, r0_1);
    }
    guest::cpu()->r[1] = r0_1;
    return 0u;
}

}  // namespace d_0071262c
GUEST_EXPORT(0x0071262c, d_0071262c::entry_owned_here);

// f_0071268c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether the member handler (+0xc, +0x10) is the one at 0x887784.
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

u32 handler_is_887784(gptr<Object_0071268c_0> arg0) {
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
GUEST_EXPORT(0x0071268c, d_0071268c::handler_is_887784);

// f_007126dc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Bit 0 when the member handler (+0xc, +0x10) is the one at 0x8877a4, bit 1 when it is the one at 0x887794.
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

u32 handler_is_887794_or_8877a4(gptr<Object_007126dc_0> arg0) {
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
GUEST_EXPORT_FRAMED(0x007126dc, d_007126dc::handler_is_887794_or_8877a4, 0x10);  // pushes {r4} first, as the original

// f_00712788: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The part at +0xa4 for kind 0x400, else at +0x144.
namespace d_00712788 {


u32 part_for_kind_a4(u32 r0, u32 r1) {
    return r1 == 0x400u ? r0 + 0xa4u : r0 + 0x144u;  // (from the original)
}

}  // namespace d_00712788
GUEST_EXPORT(0x00712788, d_00712788::part_for_kind_a4);

// f_00712798: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// A value (0073682c) times 400 plus 0.5, passed to 0077a650 and truncated.
namespace d_00712798 {

inline constexpr guest::Function<0x0073682c, u32(u32)> Resolution__aspect;
inline constexpr guest::Function<0x0077a650, u32(u32)> floorf;

u32 scaled_rounded_value(u32 r0, float S0) {
    Resolution__aspect(r0);
    float S0_1 = guest::cpu()->s[0];
    float S0_2 = 0.5f + S0_1 * 400.0f;
    guest::cpu()->s[0] = S0_2;
    guest::cpu()->s[1] = S0_1;
    floorf(r0);
    float S0_3 = guest::cpu()->s[0];
    float S0_4 = std::bit_cast<float>(vcvt_sz_f(S0_3));
    guest::cpu()->s[0] = S0_4;
    return std::bit_cast<u32>(S0_4);
}

}  // namespace d_00712798
GUEST_EXPORT_FRAMED(0x00712798, d_00712798::scaled_rounded_value, 0x4010);  // pushes {r4, lr} first, as the original

// f_007127c8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The part at +0x64 for kind 0x400, else at +0x104.
namespace d_007127c8 {


u32 part_for_kind_64(u32 r0, u32 r1) {
    return r1 == 0x400u ? r0 + 0x64u : r0 + 0x104u;  // (from the original)
}

}  // namespace d_007127c8
GUEST_EXPORT(0x007127c8, d_007127c8::part_for_kind_64);

// f_007127d8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The part at +0xd4 for kind 0x400, else at +0x174.
namespace d_007127d8 {


u32 part_for_kind_d4(u32 r0, u32 r1) {
    return r1 == 0x400u ? r0 + 0xd4u : r0 + 0x174u;  // (from the original)
}

}  // namespace d_007127d8
GUEST_EXPORT(0x007127d8, d_007127d8::part_for_kind_d4);

// f_00712800: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether the 16-bit value is below 0xfc.
namespace d_00712800 {

inline constexpr guest::Function<0x00718378, u32(u32)> halfword_is_fc_or_more;

u32 halfword_below_fc(u32 r0) {
    u32 r0_1 = halfword_is_fc_or_more(r0);
    return r0_1 ^ 1u;
}

}  // namespace d_00712800
GUEST_EXPORT_FRAMED(0x00712800, d_00712800::halfword_below_fc, 0x4010);  // pushes {r4, lr} first, as the original

// f_00712810: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether bit `index` (below 6) of the bits at +0x28 is set.
namespace d_00712810 {


u32 flag_bit_below_6_at_28(u32 r0, u32 r1) {
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
GUEST_EXPORT(0x00712810, d_00712810::flag_bit_below_6_at_28);

// f_0071287c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether one of the 10 design patterns (0x870 bytes each) has a type set.
namespace d_0071287c {


u32 any_pattern_in_use(u32 pattern) {
    u32 r1 = pattern + 0x5460u;  // (from the original)
    if (pattern >= r1) {
        guest::cpu()->r[1] = r1;
        return 0u;
    }
    do {
        if (*gptr<u8>(pattern + 0x86cu) != 0) {  // (from the original)
            guest::cpu()->r[1] = r1;
            return 1u;
        }
        pattern += 0x870u;  // (from the original)
        guest::preempt();
    } while (pattern < r1);
    guest::cpu()->r[1] = r1;
    return 0u;
}

}  // namespace d_0071287c
GUEST_EXPORT(0x0071287c, d_0071287c::any_pattern_in_use);

// f_00712c88: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00712c88 {

inline constexpr u32 vtable_script__WordFix_9u_ = 0x0090a3e8u;
inline constexpr guest::Function<0x002f825c, u32(u32, u32)> clear_aligned;
inline constexpr guest::Function<0x003083bc, u32(u32, u32, u32, u32)> script__construct_word_ptr;
inline constexpr guest::Function<0x0056d488, u32(u32, u32, u32)> TextBox__set_word_9;
inline constexpr guest::Function<0x005f4bfc, u32(u32)> construct_script_word;
inline constexpr guest::Function<0x0075b8b0, u32(u32, u32)> script__CmpEngine__CmpEngine_0075b8b0;

struct __attribute__((packed)) Frame_00712c88 {
    u32 word_0;
    u8 unknown_4[0x28];  // (not read or written by name)
    u32 word_2c;
    u8 unknown_30[0x2c];  // (not read or written by name)
};
GUEST_OFFSET(Frame_00712c88, word_0, 0x0);
GUEST_OFFSET(Frame_00712c88, word_2c, 0x2c);
GUEST_SIZE(Frame_00712c88, 0x5c);

u32 compare_strings(u32 r0, u32 r1) {
    guest::StackFrameOf<Frame_00712c88> frame;  // the original's stack frame
    u32 res_1 = 0;
    u32 res_2 = 0;
    u32 r7 = r0;
    u32 r6 = r1;
    u32 r0_1 = frame.at(0).addr();
    u32 r9 = 0u;
    script__construct_word_ptr(r0_1, frame.at(0x18).addr(), 9u, guest::cpu()->r[3]);  // (from the original)
    u32 r5 = vtable_script__WordFix_9u_;
    *gptr<u32>(r0_1) = r5;
    u32 r0_2 = r0_1 + 0xcu;  // (from the original)
    construct_script_word(r0_2);
    u32 r4 = r0_2 - 0xcu;  // (from the original)
    clear_aligned(r0_2 + 0xcu, 0x12u);  // (from the original)
    u32 r8 = 0x8906ecu;  // (from the original)
    r0 = r4 + 0x18u;  // (from the original)
    *gptr<u16>(r4 + 0x18u) = *gptr<u16>(r8);  // (from the original)
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
    TextBox__set_word_9(r4, r7, r9);
    u32 r0_4 = frame.at(0x2c).addr();  // (from the original)
    r7 = 0u;
    script__construct_word_ptr(r0_4, frame.at(0x44).addr(), 9u, guest::cpu()->r[3]);  // (from the original)
    *gptr<u32>(r0_4) = r5;
    u32 r0_5 = r0_4 + 0xcu;  // (from the original)
    construct_script_word(r0_5);
    r4 = r0_5 - 0xcu;  // (from the original)
    clear_aligned(r0_5 + 0xcu, 0x12u);  // (from the original)
    r0 = r4 + 0x18u;  // (from the original)
    *gptr<u16>(r4 + 0x18u) = *gptr<u16>(r8);  // (from the original)
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
    TextBox__set_word_9(r4, r6, r7);
    u32 r0_8 = script__CmpEngine__CmpEngine_0075b8b0(frame.at(0).addr(), frame.at(0x2c).addr());  // (from the original)
    frame->word_2c = r5;
    frame->word_0 = r5;
    return r0_8;
}

}  // namespace d_00712c88
GUEST_EXPORT_FRAMED(0x00712c88, d_00712c88::compare_strings, 0x43f0);  // pushes {r4, r5, r6, r7, r8, r9, lr} first, as the original

// f_007132e4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// On the same day: whether the hour is within the opening hours (7-20 with town flag 1, 10-23 with flag 2, else
// 10-20).
namespace d_007132e4 {

inline constexpr guest::Function<0x002fb328, u32(u32)> get_save_data;
inline constexpr guest::Function<0x002fb378, u32(u32)> game_time_now;
inline constexpr guest::Function<0x0056c0e4, u32(u32, u32, u32, u32)> day_has_changed;
inline constexpr guest::Function<0x00758de4, u32(u32)> save_data_flag_621cf_bit_1;
inline constexpr guest::Function<0x00758e08, u32(u32)> save_data_flag_621cf_bit_2;

u32 shop_is_open_now(u32 r0) {
    u32 r0_1 = day_has_changed(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0_1 != 0) {
        return 0u;
    }
    u32 now = game_time_now(r0_1);
    u32 r4_1 = *gptr<u32>(now + 4u);
    u32 save_data_3 = get_save_data(now);
    u32 r0_5 = save_data_flag_621cf_bit_1(save_data_3 + 0x62250u);  // (from the original)
    if (r0_5 != 0) {
        if (u32(s32(r4_1) >> 0x18) - 7u < 0xeu) {  // (from the original)
            return 1u;
        }
        return 0u;
    }
    u32 save_data_4 = get_save_data(r0_5);
    u32 r0_8 = save_data_flag_621cf_bit_2(save_data_4 + 0x62250u);  // (from the original)
    u32 r0_9 = u32(s32(r4_1) >> 0x18) - 0xau;  // (from the original)
    if (r0_8 != 0) {
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
GUEST_EXPORT_FRAMED(0x007132e4, d_007132e4::shop_is_open_now, 0x4010);  // pushes {r4, lr} first, as the original

// f_0071348c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The item `index` of the recent stock (+0x4c) while it is within its age window, else of the slots at +0x3cf4; empty
// when out of range.
namespace d_0071348c {

inline constexpr u32 empty_item_address = 0x0095bfdcu;
inline constexpr guest::Function<0x00718c0c, u32(u32, u32)> slot_index_is_valid;
inline constexpr guest::Function<0x0071ecc4, u32(u32, u32, u32, u32)> within_age_window;
inline constexpr guest::Function<0x0071ecf0, u32(u32, u32)> recent_stock_item;
inline constexpr guest::Function<0x00724400, u32(u32, u32, u32, u32)> Pockets__current_item;

u32 stock_item_at(u32 r0, u32 r1) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 r0_2 = within_age_window(r0 + 0x4cu, r1, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    if (r0_2 != 0) {
        frame.release();
        return recent_stock_item(r0 + 0x4cu, r1);  // (from the original)
    }
    u32 r0_5 = slot_index_is_valid(r0 + 0x3cf4u, r1);  // (from the original)
    if (r0_5 == 0) {
    } else {
        frame.release();
        return Pockets__current_item(r0 + 0x3cf4u, r1, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    }
    return empty_item_address;
}

}  // namespace d_0071348c
GUEST_EXPORT(0x0071348c, d_0071348c::stock_item_at);

// f_00713bf0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The byte after the current one (+0x54) in the ring buffer (data +0x20, size +0x24, start +0x28, count +0x2c); 0xff
// past the end.
namespace d_00713bf0 {

struct __attribute__((packed)) RingBuffer {
    u8 unknown_0[0x20];  // (not used here)
    u32 word_20;
    u32 word_24;
    u32 word_28;
    u32 word_2c;
    u8 unknown_30[0x24];  // (not used here)
    u8 byte_54;
};
GUEST_OFFSET(RingBuffer, word_20, 0x20);
GUEST_OFFSET(RingBuffer, word_24, 0x24);
GUEST_OFFSET(RingBuffer, word_28, 0x28);
GUEST_OFFSET(RingBuffer, word_2c, 0x2c);
GUEST_OFFSET(RingBuffer, byte_54, 0x54);


u32 RingBuffer__peek_next(gptr<RingBuffer> ring) {
    u32 r1_1 = ring->byte_54;
    u32 r2_1 = ring->word_2c;
    if (s32(r1_1 + 1u) >= s32(r2_1)) {
        guest::cpu()->r[1] = r1_1;
        return 0xffu;  // (from the original)
    }
    if (r2_1 <= r1_1 + 1u) {
        u32 r0_2 = *gptr<u8>(ring->word_20);
        guest::cpu()->r[1] = r1_1 + 1u;
        return r0_2;
    }
    u32 r2_2 = ring->word_24;
    u32 r1_3 = r1_1 + 1u + ring->word_28;
    if (s32(r2_2) <= s32(r1_3)) {
        r1_3 -= r2_2;
    }
    u32 r0_4 = *gptr<u8>(ring->word_20 + r1_3);
    guest::cpu()->r[1] = r1_3;
    return r0_4;
}

}  // namespace d_00713bf0
GUEST_EXPORT(0x00713bf0, d_00713bf0::RingBuffer__peek_next);

// f_00713d94: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The value of a song request kind (1-3 from the KK information by song, 0x20 for kinds 4-5, 0 otherwise).
namespace d_00713d94 {

inline constexpr u32 sound_kk_info_instance_address = 0x0094d004u;
inline guest::global<u32, 0x0094d004> sound_kk_info_instance;
inline constexpr guest::Function<0x0070eb60, u32(u32, u32)> table_83a980_byte_11;
inline constexpr guest::Function<0x0070eb8c, u32(u32, u32)> table_83a980_byte_10;
inline constexpr guest::Function<0x0070ebb8, u32(u32, u32)> table_83a980_byte_12;

u32 kk_song_value(u32 r0_unused, u32 r1, u32 r2) {
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
    u32 r0_1 = *sound_kk_info_instance;
    if (r1 == 1u) {
        return table_83a980_byte_10(r0_1, r3_1);
    }
    if (r1 == 2u) {
        return table_83a980_byte_11(r0_1, r3_1);
    }
    if (r1 == 3u) {
        return table_83a980_byte_12(r0_1, r3_1);
    }
    guest::cpu()->r[1] = r1;
    return 0u;
}

}  // namespace d_00713d94
GUEST_EXPORT(0x00713d94, d_00713d94::kk_song_value);

// f_00714934: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether a cell of the rectangle has a terrain of the first kind (by its large cell).
namespace d_00714934 {

struct __attribute__((packed)) MapRect {
    u8 unknown_0[0x11];  // (not used here)
    u8 byte_11;
};
GUEST_OFFSET(MapRect, byte_11, 0x11);

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

inline constexpr guest::Function<0x002fe7cc, u32(u32, u32, u32, u32)> read_map_table;
inline constexpr guest::Function<0x0052ed04, u32(u32, u32, u32, u32)> GridPoint__set_tile_in_block;
inline constexpr guest::Function<0x0052edfc, u32(u32, u32, u32, u32)> block_of_cell;
inline constexpr guest::Function<0x0052f144, u32(u32, u32, u32, u32)> WrappingCursor__advance;
inline constexpr guest::Function<0x005cdfe8, u32(u32, u32)> terrain_record;
inline constexpr guest::Function<0x005ce13c, u32(u32, u32, u32, u32)> byte_95d91e;
inline constexpr guest::Function<0x0060d20c, u32(u32, u32, u32)> Cell__copy_from;
inline constexpr guest::Function<0x00748164, u32(u32, u32, u32, u32)> grid_point_subtract;
inline constexpr guest::Function<0x007481ec, u32(u32, u32)> key_records_differ;
inline constexpr guest::Function<0x0074824c, u32(u32, u32)> make_end_grid_rect_iterator;
inline constexpr guest::Function<0x00748284, u32(u32, u32)> construct_grid_rect_iterator;
inline constexpr guest::Function<0x0075291c, u32(u32, u32, u32, u32)> GridMap__large_cell_at;
inline constexpr guest::Function<0x0075d608, u32(u32, u32, u32, u32)> GridCellLarge__terrain_at;

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
    u32 map;
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
GUEST_OFFSET(Frame_00714934, map, 0x44);
GUEST_OFFSET(Frame_00714934, byte_58, 0x58);
GUEST_SIZE(Frame_00714934, 0x60);

u32 MapRect__has_terrain_kind_a(gptr<MapRect> map_rect, u32 r1_unused, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_00714934> frame;  // the original's stack frame
    u32 r0 = map_rect.addr();
    u32 r0_18 = 0;
    u32 r6 = r0;
    u32 r1_1 = map_rect->byte_11;
    frame->byte_40 = 2;
    u32 map_2 = read_map_table(r1_1, r1_1, r2, r3);
    frame->map = map_2;
    construct_grid_rect_iterator(frame.at(0x28).addr(), r6);  // (from the original)
    make_end_grid_rect_iterator(frame.at(0x10).addr(), r6);  // (from the original)
    u32 r0_5 = key_records_differ(frame.at(0x28).addr(), frame.at(0x10).addr());  // (from the original)
    u32 r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0_5 != 0) {
        u32 r8 = frame.at(0).addr();
        do {
            u32 r5 = frame.at(0x40).addr();  // (from the original)
            u32 tile = frame.at(0x30).addr();  // (from the original)
            if (frame->map != 0) {
                block_of_cell(frame.at(0x38).addr(), tile, r2, r3);  // (from the original)
                gptr<Local_00714934_r3_4> r3_4 = gptr<Local_00714934_r3_4>(frame.at(0x38).addr());  // (from the original)
                u32 large_cell_2 = GridMap__large_cell_at(frame->map, r3_4->word_0, r3_4->word_4, r3_4.addr());
                r1 = guest::cpu()->r[1];
                r2 = guest::cpu()->r[2];
                r3 = guest::cpu()->r[3];
                if (large_cell_2 != 0) {
                    GridPoint__set_tile_in_block(frame.at(0x20).addr(), tile, r2, r3);  // (from the original)
                    gptr<Local_00714934_r3_5> r3_5 = gptr<Local_00714934_r3_5>(frame.at(0x20).addr());  // (from the original)
                    u32 terrain_2 = GridCellLarge__terrain_at(large_cell_2, r3_5->word_0, r3_5->word_4, r3_5.addr());
                    terrain_record(frame.at(8).addr(), terrain_2);
                    r1 = guest::cpu()->r[1];
                    r2 = guest::cpu()->r[2];
                    r3 = guest::cpu()->r[3];
                    u32 r4 = 0u;
                    frame->byte_0 = frame->byte_8;
                    frame->byte_1 = frame->byte_a;
                    frame->byte_2 = frame->byte_9;
                    frame->byte_3 = frame->byte_b;
                    do {
                        u32 r0_12 = *gptr<u8>(r8 + r4);
                        u32 r0_13 = byte_95d91e(r0_12, r1, r2, r3);
                        r2 = guest::cpu()->r[2];
                        r3 = guest::cpu()->r[3];
                        r1 = *gptr<u8>(r5);
                        if (r1 == r0_13) {
                            if (*gptr<u32>(r6 + 0x20u) != 0) {  // (from the original)
                                grid_point_subtract(frame.at(0x48).addr(), frame.at(0x30).addr(), r6 + 0x24u, r3);  // (from the original)
                                gptr<Local_00714934_ea_1> ea_1 = gptr<Local_00714934_ea_1>(frame.at(0x48).addr());  // (from the original)
                                u32 r2_8 = *gptr<u32>(r6 + 0x20u);  // (from the original)
                                Cell__copy_from(frame.at(0x50).addr(), ea_1->word_4 * 0xa0u + ea_1->word_0 * 0xau + r2_8, r2_8);  // (from the original)
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
            WrappingCursor__advance(frame.at(0x28).addr(), r1, r2, r3);  // (from the original)
            r0_18 = key_records_differ(frame.at(0x28).addr(), frame.at(0x10).addr());  // (from the original)
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
GUEST_EXPORT_FRAMED(0x00714934, d_00714934::MapRect__has_terrain_kind_a, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_00714b40: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether a cell of the rectangle has a terrain of the second kind (by its large cell).
namespace d_00714b40 {

struct __attribute__((packed)) MapRect {
    u8 unknown_0[0x11];  // (not used here)
    u8 byte_11;
};
GUEST_OFFSET(MapRect, byte_11, 0x11);

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

inline constexpr guest::Function<0x002fe7cc, u32(u32, u32, u32, u32)> read_map_table;
inline constexpr guest::Function<0x0052ed04, u32(u32, u32, u32, u32)> GridPoint__set_tile_in_block;
inline constexpr guest::Function<0x0052edfc, u32(u32, u32, u32, u32)> block_of_cell;
inline constexpr guest::Function<0x0052f144, u32(u32, u32, u32, u32)> WrappingCursor__advance;
inline constexpr guest::Function<0x005cdfe8, u32(u32, u32)> terrain_record;
inline constexpr guest::Function<0x005ce13c, u32(u32, u32, u32, u32)> byte_95d91e;
inline constexpr guest::Function<0x0060d20c, u32(u32, u32, u32)> Cell__copy_from;
inline constexpr guest::Function<0x00748164, u32(u32, u32, u32, u32)> grid_point_subtract;
inline constexpr guest::Function<0x007481ec, u32(u32, u32)> key_records_differ;
inline constexpr guest::Function<0x0074824c, u32(u32, u32)> make_end_grid_rect_iterator;
inline constexpr guest::Function<0x00748284, u32(u32, u32)> construct_grid_rect_iterator;
inline constexpr guest::Function<0x0075291c, u32(u32, u32, u32, u32)> GridMap__large_cell_at;
inline constexpr guest::Function<0x0075d608, u32(u32, u32, u32, u32)> GridCellLarge__terrain_at;

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
    u32 map;
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
GUEST_OFFSET(Frame_00714b40, map, 0x44);
GUEST_OFFSET(Frame_00714b40, byte_58, 0x58);
GUEST_SIZE(Frame_00714b40, 0x60);

u32 MapRect__has_terrain_kind_b(gptr<MapRect> map_rect, u32 r1_unused, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_00714b40> frame;  // the original's stack frame
    u32 r0 = map_rect.addr();
    u32 r0_18 = 0;
    u32 r6 = r0;
    u32 r1_1 = map_rect->byte_11;
    frame->byte_40 = 3;
    u32 map_2 = read_map_table(r1_1, r1_1, r2, r3);
    frame->map = map_2;
    construct_grid_rect_iterator(frame.at(0x28).addr(), r6);  // (from the original)
    make_end_grid_rect_iterator(frame.at(0x10).addr(), r6);  // (from the original)
    u32 r0_5 = key_records_differ(frame.at(0x28).addr(), frame.at(0x10).addr());  // (from the original)
    u32 r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0_5 != 0) {
        u32 r8 = frame.at(0).addr();
        do {
            u32 r5 = frame.at(0x40).addr();  // (from the original)
            u32 tile = frame.at(0x30).addr();  // (from the original)
            if (frame->map != 0) {
                block_of_cell(frame.at(0x38).addr(), tile, r2, r3);  // (from the original)
                gptr<Local_00714b40_r3_4> r3_4 = gptr<Local_00714b40_r3_4>(frame.at(0x38).addr());  // (from the original)
                u32 large_cell_2 = GridMap__large_cell_at(frame->map, r3_4->word_0, r3_4->word_4, r3_4.addr());
                r1 = guest::cpu()->r[1];
                r2 = guest::cpu()->r[2];
                r3 = guest::cpu()->r[3];
                if (large_cell_2 != 0) {
                    GridPoint__set_tile_in_block(frame.at(0x20).addr(), tile, r2, r3);  // (from the original)
                    gptr<Local_00714b40_r3_5> r3_5 = gptr<Local_00714b40_r3_5>(frame.at(0x20).addr());  // (from the original)
                    u32 terrain_2 = GridCellLarge__terrain_at(large_cell_2, r3_5->word_0, r3_5->word_4, r3_5.addr());
                    terrain_record(frame.at(8).addr(), terrain_2);
                    r1 = guest::cpu()->r[1];
                    r2 = guest::cpu()->r[2];
                    r3 = guest::cpu()->r[3];
                    u32 r4 = 0u;
                    frame->byte_0 = frame->byte_8;
                    frame->byte_1 = frame->byte_a;
                    frame->byte_2 = frame->byte_9;
                    frame->byte_3 = frame->byte_b;
                    do {
                        u32 r0_12 = *gptr<u8>(r8 + r4);
                        u32 r0_13 = byte_95d91e(r0_12, r1, r2, r3);
                        r2 = guest::cpu()->r[2];
                        r3 = guest::cpu()->r[3];
                        r1 = *gptr<u8>(r5);
                        if (r1 == r0_13) {
                            if (*gptr<u32>(r6 + 0x20u) != 0) {  // (from the original)
                                grid_point_subtract(frame.at(0x48).addr(), frame.at(0x30).addr(), r6 + 0x24u, r3);  // (from the original)
                                gptr<Local_00714b40_ea_1> ea_1 = gptr<Local_00714b40_ea_1>(frame.at(0x48).addr());  // (from the original)
                                u32 r2_8 = *gptr<u32>(r6 + 0x20u);  // (from the original)
                                Cell__copy_from(frame.at(0x50).addr(), ea_1->word_4 * 0xa0u + ea_1->word_0 * 0xau + r2_8, r2_8);  // (from the original)
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
            WrappingCursor__advance(frame.at(0x28).addr(), r1, r2, r3);  // (from the original)
            r0_18 = key_records_differ(frame.at(0x28).addr(), frame.at(0x10).addr());  // (from the original)
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
GUEST_EXPORT_FRAMED(0x00714b40, d_00714b40::MapRect__has_terrain_kind_b, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_00715074: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether a cell of the rectangle has a terrain of the third kind (by its large cell).
namespace d_00715074 {

struct __attribute__((packed)) MapRect {
    u8 unknown_0[0x11];  // (not used here)
    u8 byte_11;
};
GUEST_OFFSET(MapRect, byte_11, 0x11);

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

inline constexpr guest::Function<0x002fe7cc, u32(u32, u32, u32, u32)> read_map_table;
inline constexpr guest::Function<0x0052ed04, u32(u32, u32, u32, u32)> GridPoint__set_tile_in_block;
inline constexpr guest::Function<0x0052edfc, u32(u32, u32, u32, u32)> block_of_cell;
inline constexpr guest::Function<0x0052f144, u32(u32, u32, u32, u32)> WrappingCursor__advance;
inline constexpr guest::Function<0x005cdfe8, u32(u32, u32)> terrain_record;
inline constexpr guest::Function<0x005ce13c, u32(u32, u32, u32, u32)> byte_95d91e;
inline constexpr guest::Function<0x0060d20c, u32(u32, u32, u32)> Cell__copy_from;
inline constexpr guest::Function<0x00748164, u32(u32, u32, u32, u32)> grid_point_subtract;
inline constexpr guest::Function<0x007481ec, u32(u32, u32)> key_records_differ;
inline constexpr guest::Function<0x0074824c, u32(u32, u32)> make_end_grid_rect_iterator;
inline constexpr guest::Function<0x00748284, u32(u32, u32)> construct_grid_rect_iterator;
inline constexpr guest::Function<0x0075291c, u32(u32, u32, u32, u32)> GridMap__large_cell_at;
inline constexpr guest::Function<0x0075d608, u32(u32, u32, u32, u32)> GridCellLarge__terrain_at;

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
    u32 map;
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
GUEST_OFFSET(Frame_00715074, map, 0x44);
GUEST_OFFSET(Frame_00715074, byte_58, 0x58);
GUEST_SIZE(Frame_00715074, 0x60);

u32 MapRect__has_terrain_kind_c(gptr<MapRect> map_rect, u32 r1_unused, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_00715074> frame;  // the original's stack frame
    u32 r0 = map_rect.addr();
    u32 r0_18 = 0;
    u32 r6 = r0;
    u32 r1_1 = map_rect->byte_11;
    frame->byte_40 = 1;
    u32 map_2 = read_map_table(r1_1, r1_1, r2, r3);
    frame->map = map_2;
    construct_grid_rect_iterator(frame.at(0x28).addr(), r6);  // (from the original)
    make_end_grid_rect_iterator(frame.at(0x10).addr(), r6);  // (from the original)
    u32 r0_5 = key_records_differ(frame.at(0x28).addr(), frame.at(0x10).addr());  // (from the original)
    u32 r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0_5 != 0) {
        u32 r8 = frame.at(0).addr();
        do {
            u32 r5 = frame.at(0x40).addr();  // (from the original)
            u32 tile = frame.at(0x30).addr();  // (from the original)
            if (frame->map != 0) {
                block_of_cell(frame.at(0x38).addr(), tile, r2, r3);  // (from the original)
                gptr<Local_00715074_r3_4> r3_4 = gptr<Local_00715074_r3_4>(frame.at(0x38).addr());  // (from the original)
                u32 large_cell_2 = GridMap__large_cell_at(frame->map, r3_4->word_0, r3_4->word_4, r3_4.addr());
                r1 = guest::cpu()->r[1];
                r2 = guest::cpu()->r[2];
                r3 = guest::cpu()->r[3];
                if (large_cell_2 != 0) {
                    GridPoint__set_tile_in_block(frame.at(0x20).addr(), tile, r2, r3);  // (from the original)
                    gptr<Local_00715074_r3_5> r3_5 = gptr<Local_00715074_r3_5>(frame.at(0x20).addr());  // (from the original)
                    u32 terrain_2 = GridCellLarge__terrain_at(large_cell_2, r3_5->word_0, r3_5->word_4, r3_5.addr());
                    terrain_record(frame.at(8).addr(), terrain_2);
                    r1 = guest::cpu()->r[1];
                    r2 = guest::cpu()->r[2];
                    r3 = guest::cpu()->r[3];
                    u32 r4 = 0u;
                    frame->byte_0 = frame->byte_8;
                    frame->byte_1 = frame->byte_a;
                    frame->byte_2 = frame->byte_9;
                    frame->byte_3 = frame->byte_b;
                    do {
                        u32 r0_12 = *gptr<u8>(r8 + r4);
                        u32 r0_13 = byte_95d91e(r0_12, r1, r2, r3);
                        r2 = guest::cpu()->r[2];
                        r3 = guest::cpu()->r[3];
                        r1 = *gptr<u8>(r5);
                        if (r1 == r0_13) {
                            if (*gptr<u32>(r6 + 0x20u) != 0) {  // (from the original)
                                grid_point_subtract(frame.at(0x48).addr(), frame.at(0x30).addr(), r6 + 0x24u, r3);  // (from the original)
                                gptr<Local_00715074_ea_1> ea_1 = gptr<Local_00715074_ea_1>(frame.at(0x48).addr());  // (from the original)
                                u32 r2_8 = *gptr<u32>(r6 + 0x20u);  // (from the original)
                                Cell__copy_from(frame.at(0x50).addr(), ea_1->word_4 * 0xa0u + ea_1->word_0 * 0xau + r2_8, r2_8);  // (from the original)
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
            WrappingCursor__advance(frame.at(0x28).addr(), r1, r2, r3);  // (from the original)
            r0_18 = key_records_differ(frame.at(0x28).addr(), frame.at(0x10).addr());  // (from the original)
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
GUEST_EXPORT_FRAMED(0x00715074, d_00715074::MapRect__has_terrain_kind_c, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_00715280: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether a cell of the rectangle holds an item of indexed type 0xa that is not covered (by the rectangle's own cell
// data when it has some).
namespace d_00715280 {

struct __attribute__((packed)) MapRect {
    u8 unknown_0[0x11];  // (not used here)
    u8 byte_11;
};
GUEST_OFFSET(MapRect, byte_11, 0x11);

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

inline constexpr guest::Function<0x002fccdc, u32(u32, u32, u32, u32)> indexed_item_type;
inline constexpr guest::Function<0x002fe7cc, u32(u32, u32, u32, u32)> read_map_table;
inline constexpr guest::Function<0x002feb00, u32(u32, u32, u32, u32)> GridMap__process_world_position;
inline constexpr guest::Function<0x0052f144, u32(u32, u32, u32, u32)> WrappingCursor__advance;
inline constexpr guest::Function<0x0060d20c, u32(u32, u32, u32)> Cell__copy_from;
inline constexpr guest::Function<0x00748164, u32(u32, u32, u32, u32)> grid_point_subtract;
inline constexpr guest::Function<0x007481ec, u32(u32, u32)> key_records_differ;
inline constexpr guest::Function<0x0074824c, u32(u32, u32)> make_end_grid_rect_iterator;
inline constexpr guest::Function<0x00748284, u32(u32, u32)> construct_grid_rect_iterator;

struct __attribute__((packed)) Frame_00715280 {
    u8 unknown_0[0x38];  // (not read or written by name)
    u8 byte_38;
    u8 unknown_39[0x3];  // (not read or written by name)
};
GUEST_OFFSET(Frame_00715280, byte_38, 0x38);
GUEST_SIZE(Frame_00715280, 0x3c);

u32 MapRect__has_indexed_item_a(gptr<MapRect> map_rect, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_00715280> frame;  // the original's stack frame
    u32 r0 = map_rect.addr();
    u32 r0_14 = 0;
    u32 r5 = r0;
    u32 r0_1 = map_rect->byte_11;
    u32 map_2 = read_map_table(r0_1, r1, r2, r3);
    u32 r4 = map_2;
    construct_grid_rect_iterator(frame.at(0x10).addr(), r5);  // (from the original)
    make_end_grid_rect_iterator(frame.at(0x20).addr(), r5);  // (from the original)
    u32 r0_6 = key_records_differ(frame.at(0x10).addr(), frame.at(0x20).addr());  // (from the original)
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0_6 != 0) {
        do {
            gptr<Local_00715280_r0_7> r0_7 = gptr<Local_00715280_r0_7>(frame.at(0x18).addr());  // (from the original)
            if (r4 != 0) {
                u32 item_2 = GridMap__process_world_position(r4, r0_7->word_0, r0_7->word_4, 0u);
                r1 = guest::cpu()->r[1];
                r2 = guest::cpu()->r[2];
                r3 = guest::cpu()->r[3];
                if (item_2 != 0) {
                    u32 r0_9 = indexed_item_type(item_2, r1, r2, r3);
                    r1 = guest::cpu()->r[1];
                    r2 = guest::cpu()->r[2];
                    r3 = guest::cpu()->r[3];
                    if (r0_9 == 0xau) {  // (from the original)
                        if (*gptr<u32>(r5 + 0x20u) != 0) {  // (from the original)
                            grid_point_subtract(frame.at(8).addr(), frame.at(0x18).addr(), r5 + 0x24u, r3);  // (from the original)
                            gptr<Local_00715280_ea_1> ea_1 = gptr<Local_00715280_ea_1>(frame.at(8).addr());
                            u32 r2_6 = ea_1->word_4 * 0xa0u;  // (from the original)
                            Cell__copy_from(frame.at(0x30).addr(), *gptr<u32>(r5 + 0x20u) + (r2_6 + ea_1->word_0 * 0xau), r2_6);  // (from the original)
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
            WrappingCursor__advance(frame.at(0x10).addr(), r1, r2, r3);  // (from the original)
            r0_14 = key_records_differ(frame.at(0x10).addr(), frame.at(0x20).addr());  // (from the original)
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
GUEST_EXPORT_FRAMED(0x00715280, d_00715280::MapRect__has_indexed_item_a, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_007153ec: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether a cell of the rectangle blocks placement (terrain or items).
namespace d_007153ec {

struct __attribute__((packed)) MapRect {
    u8 unknown_0[0x1c];  // (not used here)
    u8 byte_1c;
};
GUEST_OFFSET(MapRect, byte_1c, 0x1c);

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

inline constexpr guest::Function<0x0023fc84, u32(u32, u32, u32, u32)> GridLayer__query_cell;
inline constexpr guest::Function<0x002fe7cc, u32(u32)> read_map_table;
inline constexpr guest::Function<0x0052ed04, u32(u32, u32, u32, u32)> GridPoint__set_tile_in_block;
inline constexpr guest::Function<0x0052edfc, u32(u32, u32, u32, u32)> block_of_cell;
inline constexpr guest::Function<0x0052f144, u32(u32, u32, u32, u32)> WrappingCursor__advance;
inline constexpr guest::Function<0x0060d20c, u32(u32, u32, u32)> Cell__copy_from;
inline constexpr guest::Function<0x006cacdc, u32(u32, u32, u32, u32)> value_is_0_to_3;
inline constexpr guest::Function<0x006cc304, u32(u32, u32, u32, u32)> structure_blocks_cell;
inline constexpr guest::Function<0x00748164, u32(u32, u32, u32, u32)> grid_point_subtract;
inline constexpr guest::Function<0x007481ec, u32(u32, u32)> key_records_differ;
inline constexpr guest::Function<0x0074824c, u32(u32, u32)> make_end_grid_rect_iterator;
inline constexpr guest::Function<0x00748284, u32(u32, u32)> construct_grid_rect_iterator;
inline constexpr guest::Function<0x0075291c, u32(u32, u32, u32, u32)> GridMap__large_cell_at;
inline constexpr guest::Function<0x0075d608, u32(u32, u32, u32, u32)> GridCellLarge__terrain_at;

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

u32 MapRect__has_blocking_cell(gptr<MapRect> map_rect, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_007153ec> frame;  // the original's stack frame
    u32 r0 = map_rect.addr();
    u32 r5 = 0;
    u32 r0_20 = 0;
    u32 r0_36 = 0;
    u32 r4 = r0;
    u32 r0_1 = map_rect->byte_1c;
    u32 r0_2 = value_is_0_to_3(r0_1, r1, r2, r3);
    if (r0_2 != 0) {
        u32 map_3 = read_map_table(1u);
        r5 = map_3;
        construct_grid_rect_iterator(frame.at(0).addr(), r4);
        make_end_grid_rect_iterator(frame.at(0x50).addr(), r4);  // (from the original)
        u32 r0_7 = key_records_differ(frame.at(0).addr(), frame.at(0x50).addr());  // (from the original)
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (r0_7 != 0) {
            do {
                gptr<Local_007153ec_r0_8> r0_8 = gptr<Local_007153ec_r0_8>(frame.at(8).addr());
                if (r5 != 0) {
                    block_of_cell(frame.at(0x18).addr(), r0_8.addr(), r2, r3);  // (from the original)
                    gptr<Local_007153ec_r3_5> r3_5 = gptr<Local_007153ec_r3_5>(frame.at(0x18).addr());  // (from the original)
                    u32 large_cell_3 = GridMap__large_cell_at(r5, r3_5->word_0, r3_5->word_4, r3_5.addr());
                    r1 = guest::cpu()->r[1];
                    r3 = guest::cpu()->r[3];
                    if (large_cell_3 != 0) {
                        GridPoint__set_tile_in_block(frame.at(0x20).addr(), r0_8.addr(), guest::cpu()->r[2], r3);  // (from the original)
                        gptr<Local_007153ec_r3_6> r3_6 = gptr<Local_007153ec_r3_6>(frame.at(0x20).addr());  // (from the original)
                        u32 terrain_3 = GridCellLarge__terrain_at(large_cell_3, r3_6->word_0, r3_6->word_4, r3_6.addr());
                        r1 = guest::cpu()->r[1];
                        r3 = guest::cpu()->r[3];
                        if (terrain_3 != 0x14u && terrain_3 != 0x31u && terrain_3 != 0x32u && terrain_3 != 0x33u) {  // (from the original)
                            GridLayer__query_cell(frame.at(0x40).addr(), r0_8->word_0, r0_8->word_4, 1u);  // (from the original)
                            r3 = frame.at(0x40).addr();  // (from the original)
                            u32 r0_14 = *gptr<u32>(r3);
                            r1 = *gptr<u32>(r3 + 4);
                            u32 r2_10 = *gptr<u32>(r3 + 8) & 0xffu;  // (from the original)
                            if (r2_10 >= 0xfcu) {  // (from the original)
                                goto L_7154f8;
                            }
                            u32 r0_15 = structure_blocks_cell(r0_14, r1, r2_10, r3);
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
                    grid_point_subtract(frame.at(0x38).addr(), frame.at(8).addr(), r4 + 0x24u, r3);  // (from the original)
                    gptr<Local_007153ec_ea_1> ea_1 = gptr<Local_007153ec_ea_1>(frame.at(0x38).addr());  // (from the original)
                    u32 r2_12 = *gptr<u32>(r4 + 0x20u);  // (from the original)
                    Cell__copy_from(frame.at(0x40).addr(), ea_1->word_4 * 0xa0u + ea_1->word_0 * 0xau + r2_12, r2_12);  // (from the original)
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
                WrappingCursor__advance(frame.at(0).addr(), r1, guest::cpu()->r[2], r3);
                r0_20 = key_records_differ(frame.at(0).addr(), frame.at(0x50).addr());  // (from the original)
                r1 = guest::cpu()->r[1];
                r2 = guest::cpu()->r[2];
                r3 = guest::cpu()->r[3];
                guest::preempt();
            } while (r0_20 != 0);
        }
    } else {
        u32 r0_21 = *gptr<u8>(r4 + 0x11u);  // (from the original)
        u32 map_4 = read_map_table(r0_21);
        r5 = map_4;
        construct_grid_rect_iterator(frame.at(8).addr(), r4);
        make_end_grid_rect_iterator(frame.at(0x38).addr(), r4);  // (from the original)
        u32 r0_26 = key_records_differ(frame.at(8).addr(), frame.at(0x38).addr());  // (from the original)
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (r0_26 != 0) {
            do {
                u32 tile = frame.at(0x10).addr();  // (from the original)
                if (r5 != 0) {
                    block_of_cell(frame.at(0x28).addr(), tile, r2, r3);  // (from the original)
                    gptr<Local_007153ec_r3_12> r3_12 = gptr<Local_007153ec_r3_12>(frame.at(0x28).addr());  // (from the original)
                    u32 large_cell_4 = GridMap__large_cell_at(r5, r3_12->word_0, r3_12->word_4, r3_12.addr());
                    r1 = guest::cpu()->r[1];
                    r3 = guest::cpu()->r[3];
                    if (large_cell_4 != 0) {
                        GridPoint__set_tile_in_block(frame.at(0x30).addr(), tile, guest::cpu()->r[2], r3);  // (from the original)
                        gptr<Local_007153ec_r3_13> r3_13 = gptr<Local_007153ec_r3_13>(frame.at(0x30).addr());  // (from the original)
                        u32 terrain_4 = GridCellLarge__terrain_at(large_cell_4, r3_13->word_0, r3_13->word_4, r3_13.addr());
                        r1 = guest::cpu()->r[1];
                        r3 = guest::cpu()->r[3];
                        if (terrain_4 == 0x14u || terrain_4 == 0x31u || terrain_4 == 0x32u || terrain_4 == 0x33u) {  // (from the original)
                            goto L_715744;
                        }
                    }
                }
                if (*gptr<u32>(r4 + 0x20u) != 0) {  // (from the original)
                    grid_point_subtract(frame.at(0x48).addr(), frame.at(0x10).addr(), r4 + 0x24u, r3);  // (from the original)
                    gptr<Local_007153ec_ea_2> ea_2 = gptr<Local_007153ec_ea_2>(frame.at(0x48).addr());  // (from the original)
                    u32 r2_22 = *gptr<u32>(r4 + 0x20u);  // (from the original)
                    Cell__copy_from(frame.at(0x50).addr(), ea_2->word_4 * 0xa0u + ea_2->word_0 * 0xau + r2_22, r2_22);  // (from the original)
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
                WrappingCursor__advance(frame.at(8).addr(), r1, guest::cpu()->r[2], r3);
                r0_36 = key_records_differ(frame.at(8).addr(), frame.at(0x38).addr());  // (from the original)
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
GUEST_EXPORT_FRAMED(0x007153ec, d_007153ec::MapRect__has_blocking_cell, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_00715780: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether a block of the rectangle has a cell kind that 00605618 maps to 1 and that is not covered.
namespace d_00715780 {

struct __attribute__((packed)) MapRect {
    u8 unknown_0[0x11];  // (not used here)
    u8 byte_11;
};
GUEST_OFFSET(MapRect, byte_11, 0x11);

struct __attribute__((packed)) Local_00715780_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_00715780_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_00715780_ea_1, word_4, 0x4);

inline constexpr guest::Function<0x002fe7cc, u32(u32)> read_map_table;
inline constexpr guest::Function<0x00317148, u32(u32, u32, u32)> CellGrid__cell_at;
inline constexpr guest::Function<0x0052edfc, u32(u32, u32, u32)> block_of_cell;
inline constexpr guest::Function<0x0052f144, u32(u32)> WrappingCursor__advance;
inline constexpr guest::Function<0x00605618, u32(u32)> table_94ea68_at;
inline constexpr guest::Function<0x0060d20c, u32(u32, u32, u32)> Cell__copy_from;
inline constexpr guest::Function<0x00748164, u32(u32, u32, u32)> grid_point_subtract;
inline constexpr guest::Function<0x007481ec, u32(u32, u32)> key_records_differ;
inline constexpr guest::Function<0x0074824c, u32(u32, u32)> make_end_grid_rect_iterator;
inline constexpr guest::Function<0x00748284, u32(u32, u32, u32, u32)> construct_grid_rect_iterator;

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

u32 MapRect__has_block_kind_1(gptr<MapRect> map_rect, u32 r1_unused, u32 r2) {
    guest::StackFrameOf<Frame_00715780> frame;  // the original's stack frame
    u32 r0 = map_rect.addr();
    u32 r0_15 = 0;
    u32 r4 = map_rect->byte_11;
    u32 r6 = r0;
    construct_grid_rect_iterator(frame.at(0x10).addr(), r0, r2, guest::cpu()->r[3]);  // (from the original)
    make_end_grid_rect_iterator(frame.at(0x20).addr(), r6);  // (from the original)
    u32 r0_4 = key_records_differ(frame.at(0x10).addr(), frame.at(0x20).addr());  // (from the original)
    r2 = guest::cpu()->r[2];
    if (r0_4 != 0) {
        do {
            block_of_cell(frame.at(0).addr(), frame.at(0x18).addr(), r2);  // (from the original)
            u32 map_2 = read_map_table(r4 & 0xffu);  // (from the original)
            if (map_2 != 0) {
                u32 cell_2 = CellGrid__cell_at(map_2, frame->word_0, frame->word_4);
                if (cell_2 != 0) {
                    u32 r0_9 = *gptr<u16>(cell_2);
                    u32 r0_10 = table_94ea68_at(r0_9);
                    if ((r0_10 == 1u) == 0) {
                        goto L_7158d8;
                    }
                    if (*gptr<u32>(r6 + 0x20u) != 0) {  // (from the original)
                        grid_point_subtract(frame.at(8).addr(), frame.at(0x18).addr(), r6 + 0x24u);  // (from the original)
                        gptr<Local_00715780_ea_1> ea_1 = gptr<Local_00715780_ea_1>(frame.at(8).addr());
                        u32 r2_7 = ea_1->word_4 * 0xa0u;  // (from the original)
                        Cell__copy_from(frame.at(0x30).addr(), *gptr<u32>(r6 + 0x20u) + (r2_7 + ea_1->word_0 * 0xau), r2_7);  // (from the original)
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
            WrappingCursor__advance(frame.at(0x10).addr());  // (from the original)
            r0_15 = key_records_differ(frame.at(0x10).addr(), frame.at(0x20).addr());  // (from the original)
            r2 = guest::cpu()->r[2];
            guest::preempt();
        } while (r0_15 != 0);
    }
    return 0u;
}

}  // namespace d_00715780
GUEST_EXPORT_FRAMED(0x00715780, d_00715780::MapRect__has_block_kind_1, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_00715918: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether the 64-bit id (r2, r3; not zero) is among the first 100 entries of the list, which ends at the first zero
// entry.
namespace d_00715918 {

struct __attribute__((packed)) Local_00715918_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_00715918_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_00715918_ea_1, word_4, 0x4);


u32 id64_list_has(u32 list, u32 r1_unused, u32 r2, u32 r3) {
    u32 res_1 = r2 | r3;
    u32 r1_1 = res_1;
    if (res_1 != 0) {
        u32 index = 0u;
        do {
            gptr<Local_00715918_ea_1> ea_1 = gptr<Local_00715918_ea_1>(list + (index << 3));
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
            index += 1u;
            guest::preempt();
        } while (index < 0x64u);  // (from the original)
    }
    guest::cpu()->r[1] = r1_1;
    return 0u;
}

}  // namespace d_00715918
GUEST_EXPORT_FRAMED(0x00715918, d_00715918::id64_list_has, 0x70);  // pushes {index, r5, r6} first, as the original

// f_0071596c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The index of the first zero entry of a list of 100 64-bit ids; 100 when it is full.
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


u32 id64_list_first_empty(u32 list) {
    u32 index = 0u;
    do {
        gptr<Local_0071596c_r12_1> r12_1 = gptr<Local_0071596c_r12_1>(list + (index << 3));
        if ((r12_1->word_4 | r12_1->word_0) == 0) {
            guest::cpu()->r[1] = index;
            return index;
        }
        gptr<Local_0071596c_ea_1> ea_1 = gptr<Local_0071596c_ea_1>(r12_1.addr() + 8u);
        if ((ea_1->word_0 | ea_1->word_4) == 0) {
            guest::cpu()->r[1] = index;
            return index + 1u;
        }
        index += 2u;
        guest::preempt();
    } while (s32(index) < 0x64);  // (from the original)
    guest::cpu()->r[1] = index;
    return index;
}

}  // namespace d_0071596c
GUEST_EXPORT(0x0071596c, d_0071596c::id64_list_first_empty);

// f_007159b0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// A counter value of the slot player for the weekday of a game time.
namespace d_007159b0 {

inline constexpr guest::Function<0x0029b88c, u32(u32, u32)> counter_kind_info;
inline constexpr guest::Function<0x002fb338, u32(u32, u32)> is_not_sentinel;
inline constexpr guest::Function<0x002fb96c, u32(u32, u32, u32, u32)> player_for_slot;
inline constexpr guest::Function<0x002fbd54, u32(u32, u32)> PersonalId__is_set;
inline constexpr guest::Function<0x007592f4, u32(u32, u32)> weekday_of_game_time;

u32 player_counter_for_weekday(u32 r0, u32 r1) {
    u32 r6_1 = 0;
    u32 res_2 = 0;
    u32 r6 = 0u;
    u32 r5 = r0;
    u32 r7 = r1;
    u32 r4 = r6;
    do {
        u32 player_2 = player_for_slot(r4 & 0xffu, r1, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        r1 = guest::cpu()->r[1];
        if (player_2 != 0) {
            r1 = player_2 + 0x8ae0u;  // (from the original)
            if (r1 == r5) {
                r6 = player_2;
            }
        }
        r4 += 1u;
        guest::preempt();
    } while (s32(r4) < 8);
    if (r6 != 0) {
        r0 = PersonalId__is_set(r6 + 0x55a6u, r1);  // (from the original)
        r1 = guest::cpu()->r[1];
        if (r0 != 0) {
            r0 = is_not_sentinel(r5, r1);
            r1 = guest::cpu()->r[1];
            if (r0 != 0) {
                u32 r0_4 = counter_kind_info(2u, r1);
                r1 = *gptr<u32>(r5 + 0x24u);  // (from the original)
                if (*gptr<u32>(r0_4 + 0xcu) > r1) {  // (from the original)
                    if (s32(u32(*gptr<u8>(r6 + 0x5730u)) << 0x1e) >= 0) {  // (from the original)
                        if (r7 == 0) {
                            goto L_715a88;
                        }
                        guest::cpu()->r[1] = r1;
                        return 0u;
                    }
                }
                r6_1 = r6 + 0x5730u;  // (from the original)
                res_2 = u32(*gptr<u8>(r6_1)) << 0x1d;  // (from the original)
                if (s32(res_2) < 0) {
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
            u32 r0_5 = weekday_of_game_time(r5, r1);
            return *gptr<u8>(r0_5 + r5 + 0x11u);  // (from the original)
        }
        if (r7 == 1u) {
            u32 r0_7 = weekday_of_game_time(r5, r1);
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
GUEST_EXPORT_FRAMED(0x007159b0, d_007159b0::player_counter_for_weekday, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_00715aec: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The points of the badges earned (counters 1-0x65 past their threshold, not hidden by +0x1b4): 2, 3 or 1 by the
// badge's tier.
namespace d_00715aec {

inline constexpr guest::Function<0x0029b88c, u32(u32, u32, u32, u32)> counter_kind_info;

u32 CounterTable__earned_badge_points(u32 counter_table, u32 r1) {
    u32 r6 = counter_table;
    u32 r9 = 0u;
    u32 r4 = r9;
    do {
        u32 r5_1 = r4 & 0xffu;  // (from the original)
        if (r5_1 != 0) {
            u32 r0_1 = counter_kind_info(r5_1, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
            r1 = *gptr<u32>(r6 + (r5_1 << 2) + 0x1cu);  // (from the original)
            if (*gptr<u32>(r0_1 + 0xcu) <= r1) {  // (from the original)
                r1 = r5_1;
                if ((u32(*gptr<u8>(r6 + r5_1 + 0x1b4u)) & 1u) == 0) {  // (from the original)
                    u32 r0_2 = counter_kind_info(r1, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
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
GUEST_EXPORT_FRAMED(0x00715aec, d_00715aec::CounterTable__earned_badge_points, 0x47f0);  // pushes {r4, r5, r6, r7, r8, r9, r10, lr} first, as the original

// f_00715b88: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The points of badge `index` by its tier (0 -> 2, 1 -> 3, 2 -> 2, 3 -> 1).
namespace d_00715b88 {

inline constexpr guest::Function<0x0029b88c, u32(u32)> counter_kind_info;

u32 badge_tier_points(u32 r0_unused, u32 player_counter_2) {
    u32 r0_1 = counter_kind_info(player_counter_2);
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
GUEST_EXPORT_FRAMED(0x00715b88, d_00715b88::badge_tier_points, 0x4010);  // pushes {r4, lr} first, as the original

// f_00715bc4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// How many counters of tier 0 are past their threshold.
namespace d_00715bc4 {

inline constexpr guest::Function<0x0029b88c, u32(u32, u32, u32, u32)> counter_kind_info;

u32 CounterTable__count_earned_tier_0(u32 counter_table, u32 r1) {
    u32 r6 = counter_table;
    u32 r7 = 0u;
    u32 r4 = r7;
    do {
        u32 r5_1 = r4 & 0xffu;  // (from the original)
        u32 r0_1 = counter_kind_info(r5_1, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        if (*gptr<u32>(r0_1 + 4u) == 0) {
            u32 r0_2 = counter_kind_info(r5_1, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
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
GUEST_EXPORT_FRAMED(0x00715bc4, d_00715bc4::CounterTable__count_earned_tier_0, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_00715c98: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether badge `kind`'s counter (+0x1c) has reached its threshold.
namespace d_00715c98 {

inline constexpr guest::Function<0x0029b88c, u32(u32)> counter_kind_info;

u32 badge_counter_reached(u32 record, u32 kind) {
    u32 r0_1 = counter_kind_info(kind);
    u32 r0_2 = *gptr<u32>(r0_1 + 0xcu);  // (from the original)
    u32 r1_1 = *gptr<u32>(record + (kind << 2) + 0x1cu);  // (from the original)
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
GUEST_EXPORT_FRAMED(0x00715c98, d_00715c98::badge_counter_reached, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_00715cc8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The level of badge `index` earned by its counter (against the badge's thresholds).
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

inline constexpr guest::Function<0x0029b88c, u32(u32, u32, u32, u32)> counter_kind_info;

u32 CounterTable__earned_badge_level(u32 counter_table, u32 r1, u32 r2) {
    u32 r5 = counter_table;
    u32 r4 = r1;
    u32 r0_1 = counter_kind_info(r1, r1, r2, guest::cpu()->r[3]);
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
                counter_table = 1u;
            }
            do {
                r1_1 = gptr<Local_00715cc8_r1_1>(r5 + counter_table);
                u32 zf_1 = r1_1->byte_a == r4;
                if (!zf_1) {
                    r1_1 = gptr<Local_00715cc8_r1_1>(u32(r1_1->byte_b));
                    zf_1 = r1_1.addr() == r4;
                }
                if (zf_1) {
                    guest::cpu()->r[1] = r1_1.addr();
                    return 1u;
                }
                counter_table += 2u;
                guest::preempt();
            } while (s32(counter_table) < 7);
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
            counter_table = 1u;
        }
        do {
            r1_1 = gptr<Local_00715cc8_r1_1>(r5 + counter_table);
            u32 zf_2 = r1_1->byte_11 == r4;
            if (!zf_2) {
                r1_1 = gptr<Local_00715cc8_r1_1>(u32(r1_1->byte_12));
                zf_2 = r1_1.addr() == r4;
            }
            if (zf_2) {
                guest::cpu()->r[1] = r1_1.addr();
                return 1u;
            }
            counter_table += 2u;
            guest::preempt();
        } while (s32(counter_table) < 7);
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
GUEST_EXPORT_FRAMED(0x00715cc8, d_00715cc8::CounterTable__earned_badge_level, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_00715ffc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The sum of the levels (1-3) of the 24 badges (+0xc0).
namespace d_00715ffc {


u32 badge_level_total(u32 total) {
    u32 record = total;
    total = 0u;
    u32 index = total;
    do {
        u32 r3_1 = *gptr<u8>((index & 0xffu) + record + 0xc0u);  // (from the original)
        if (r3_1 == 1u) {
            total += 1u;
        } else if (r3_1 == 2u) {
            total += 2u;
        } else if (r3_1 == 3u) {
            total += 3u;
        }
        index += 1u;
        guest::preempt();
    } while (s32(index) < 0x18);  // (from the original)
    guest::cpu()->r[1] = index;
    return total;
}

}  // namespace d_00715ffc
GUEST_EXPORT(0x00715ffc, d_00715ffc::badge_level_total);

// f_00716044: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Word +0x28 of entry `index` (0x28 bytes) of the table from global_word_0c.
namespace d_00716044 {

inline constexpr guest::Function<0x006158d4, u32(u32)> global_word_0c;

u32 table_0c_entry_word(u32 r0, u32 r1) {
    u32 r0_1 = global_word_0c(r0);
    return *gptr<u32>(r0_1 + r1 * 0x28u + 0x28u);  // (from the original)
}

}  // namespace d_00716044
GUEST_EXPORT_FRAMED(0x00716044, d_00716044::table_0c_entry_word, 0x4010);  // pushes {r4, lr} first, as the original

// f_00716060: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The value of the 24 badges by level (50,000, 150,000, 350,000), and the counts of each level stored with the catalog
// state.
namespace d_00716060 {

struct __attribute__((packed)) Local_00716060_ea_1 {
    u32 level;
    u32 level_4;
    u32 level_8;
};
GUEST_OFFSET(Local_00716060_ea_1, level, 0x0);
GUEST_OFFSET(Local_00716060_ea_1, level_4, 0x4);
GUEST_OFFSET(Local_00716060_ea_1, level_8, 0x8);

inline constexpr guest::Function<0x006c91d0, u32(u32)> catalog_state;

u32 badge_value_total(u32 r0) {
    u32 total = 0u;
    u32 record = r0;
    u32 level_3 = total;
    u32 level_2 = total;
    u32 level_1 = total;
    r0 = total;
    do {
        u32 r2_1 = *gptr<u8>((r0 & 0xffu) + record + 0xc0u);  // (from the original)
        if (r2_1 != 1u) {
            if (r2_1 != 2u) {
                if (r2_1 == 3u) {
                    total += 0x30d40u;  // (from the original)
                    level_3 += 1u;
                } else {
                    goto L_7160c4;
                }
            }
            total += 0x186a0u;  // (from the original)
            level_2 += 1u;
        }
        total += 0xc350u;  // (from the original)
        level_1 += 1u;
L_7160c4:;
        r0 += 1u;
        guest::preempt();
    } while (s32(r0) < 0x18);  // (from the original)
    u32 r0_1 = catalog_state(r0);
    gptr<Local_00716060_ea_1> ea_1 = gptr<Local_00716060_ea_1>(r0_1 + 0x14u);  // (from the original)
    ea_1->level = level_3;
    ea_1->level_4 = level_2;
    ea_1->level_8 = level_1;
    return total;
}

}  // namespace d_00716060
GUEST_EXPORT_FRAMED(0x00716060, d_00716060::badge_value_total, 0x41f0);  // pushes {total, level_1, level_2, level_3, r8, lr} first, as the original

// f_00716128: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00716128 {

inline constexpr guest::Function<0x00715dac, u32(u32, u32, u32, u32)> PlayerRecord__update_kind;

u32 any_badge_ready(u32 r0) {
    u32 record = r0;
    u32 kind = 0u;
    do {
        u32 r0_1 = PlayerRecord__update_kind(record, kind & 0xffu, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        if (r0_1 != 0) {
            return 1u;
        }
        kind += 1u;
        guest::preempt();
    } while (s32(kind) < 0x18);  // (from the original)
    return 0u;
}

}  // namespace d_00716128
GUEST_EXPORT_FRAMED(0x00716128, d_00716128::any_badge_ready, 0x4070);  // pushes {kind, record, r6, lr} first, as the original

// f_00716168: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Word `column` from +0x18 of entry `index` (0x28 bytes) of the table from global_word_0c.
namespace d_00716168 {

inline constexpr guest::Function<0x006158d4, u32(u32)> global_word_0c;

u32 table_0c_entry_word_18(u32 r0, u32 r1, u32 r2) {
    u32 r0_1 = global_word_0c(r0);
    u32 r1_1 = r1 * 5u;
    u32 r0_2 = *gptr<u32>(r0_1 + (r1_1 << 3) + (r2 << 2) + 0x18u);  // (from the original)
    guest::cpu()->r[1] = r1_1;
    return r0_2;
}

}  // namespace d_00716168
GUEST_EXPORT_FRAMED(0x00716168, d_00716168::table_0c_entry_word_18, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0071618c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Word `column` from +0x28 of entry `index` (0x28 bytes) of the table from global_word_0c.
namespace d_0071618c {

inline constexpr guest::Function<0x006158d4, u32(u32)> global_word_0c;

u32 table_0c_entry_word_28(u32 r0, u32 r1, u32 r2) {
    u32 r0_1 = global_word_0c(r0);
    return *gptr<u32>(r0_1 + r1 * 0x28u + (r2 << 2) + 0x28u);  // (from the original)
}

}  // namespace d_0071618c
GUEST_EXPORT_FRAMED(0x0071618c, d_0071618c::table_0c_entry_word_28, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

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
inline constexpr guest::Function<0x002fb94c, u32(u32)> get_current_player;
inline constexpr guest::Function<0x002fc934, u32(u32, u32)> Item__copy_b;
inline constexpr guest::Function<0x002fcaf4, u32(u32, u32, u32)> Item__is_empty;
inline constexpr guest::Function<0x002fcb34, u32(u32)> Item__category;
inline constexpr guest::Function<0x002fcb84, u32(u32, u32, u32)> Item__has_number;
inline constexpr guest::Function<0x002fcbb0, u32(u32, u32, u32)> construct_item;
inline constexpr guest::Function<0x00306e7c, u32(u32, u32)> SearchCandCore__mark_all;
inline constexpr guest::Function<0x00306f60, u32(u32, u32, u32)> SearchCandCore__pick_random_marked;
inline constexpr guest::Function<0x00307040, u32(u32, u32, u32, u32)> construct_search_cand_core;
inline constexpr guest::Function<0x0030716c, u32(u32, u32, u32)> SearchCandCore__unmark;
inline constexpr guest::Function<0x00724424, u32(u32, u32, u32)> Pockets__item_with_lock;

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

void SearchCand_4___SearchCand(u32 r0, gptr<Object_00716260_1> arg1, u32 r2) {
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
    construct_search_cand_core(r0_4, 4u, frame.at(0x14).addr(), guest::cpu()->r[3]);  // (from the original)
    *gptr<u32>(r0_4) = vtable_SearchCand_4_;
    u32 r0_6 = SearchCandCore__mark_all(frame.at(0).addr(), vtable_SearchCand_4_);
    u32 player_2 = get_current_player(r0_6);
    r2 = guest::cpu()->r[2];
    r9 = player_2;
    r6 = 0u;
    r10 = r9 + 0x6bd0u;  // (from the original)
    r8 = ((zf_1 ? r0_3 + r1_2 - 5u : r0_3 + r1_2) << 3) + 0x88ef84u;  // (from the original)
    do {
        r5 = r8 + (r6 << 1);
        u32 r1_4 = *gptr<u16>(r5);
        u32 r0_8 = frame.at(0x20).addr();  // (from the original)
        construct_item(r0_8, r1_4, r2);
        u32 category_3 = Item__category(r0_8);
        r2 = guest::cpu()->r[2];
        if (category_3 != 0x27u) {  // (from the original)
            u32 r1_7 = *gptr<u16>(r5);
            construct_item(frame.at(0x1c).addr(), r1_7, r2);  // (from the original)
            u32 category_4 = Item__category(frame.at(0x1c).addr());  // (from the original)
            r2 = guest::cpu()->r[2];
            if (category_4 != 0x28u) {  // (from the original)
                u32 is_empty_2 = Item__is_empty(r11, guest::cpu()->r[1], r2);
                r2 = guest::cpu()->r[2];
                if (is_empty_2 != 0) {
                    goto L_716350;
                }
                u32 r1_9 = *gptr<u16>(r5);
                u32 r0_14 = Item__has_number(r11, r1_9, r2);
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
            u32 r0_15 = Pockets__item_with_lock(r10, r4, 0u);
            u32 r1_10 = *gptr<u16>(r5);
            u32 r0_16 = Item__has_number(r0_15, r1_10, guest::cpu()->r[2]);
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
        SearchCandCore__unmark(r0_17, r6, r2);
        r2 = guest::cpu()->r[2];
L_7163d0:;
        r6 += 1u;
        guest::preempt();
    } while (r6 < 4u);
    if (frame->word_10 != 0) {
        u32 r0_19 = SearchCandCore__pick_random_marked(frame.at(0).addr(), guest::cpu()->r[1], r2);
        u32 r1_11 = gptr<u16>(r8)[r0_19];
        construct_item(frame.at(0x18).addr(), r1_11, r2);  // (from the original)
        Item__copy_b(frame->word_28, frame.at(0x18).addr());  // (from the original)
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
    construct_item(frame->word_28, 0x7ffeu, r2);  // (from the original)
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
GUEST_EXPORT(0x00716260, d_00716260::SearchCand_4___SearchCand);

// f_007164c0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The house loan still to pay: the cost of each built room and its upgrades (table 0x88f040) plus the bonus for flag 7
// of +0x5727, less 10000 without flag 4 of +0x5704, less the amount at +0x6b94; kept in the catalog state.
namespace d_007164c0 {

struct __attribute__((packed)) Local_007164c0_ea_2 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_007164c0_ea_2, word_0, 0x0);
GUEST_OFFSET(Local_007164c0_ea_2, word_4, 0x4);

inline constexpr guest::Function<0x006c91d0, u32(u32)> catalog_state;
inline constexpr guest::Function<0x007203bc, u32(u32, u32, u32, u32)> Record__state_is_active;
inline constexpr guest::Function<0x0076d7a4, u32(u32)> Player__encrypted_6b94;

u32 Player__house_loan_left(u32 player, u32 r1, u32 r2, u32 r3) {
    u32 res_1 = 0;
    u32 r4 = 0u;
    u32 r7 = player;
    u32 r8 = r1;
    u32 r9 = 0x88f040u;  // (from the original)
    u32 r5 = r4;
    do {
        u32 r6_1 = r7 + (r5 * 0x81u + (r5 << 8) << 1);  // (from the original)
        u32 r0_2 = Record__state_is_active(r6_1 + 0x18u, r1, r2, r3);  // (from the original)
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (r0_2 != 0) {
            u32 r1_1 = *gptr<u8>(r6_1 + 0x36u);  // (from the original)
            player = r9 + r5 * 0x14u - 4u;  // (from the original)
            if ((r1_1 & 1u) == 0) {
                u32 ea_1 = player + 4u;
                player = ea_1;
                r4 += *gptr<u32>(ea_1);
            }
            r2 = 0u;
            r1 = r1_1 + 1u >> 1;
            if (r1 != 0) {
                do {
                    res_1 = r1 - 1u;
                    r1 = res_1;
                    gptr<Local_007164c0_ea_2> ea_2 = gptr<Local_007164c0_ea_2>(player + 4u);
                    r3 = ea_2->word_0;
                    player += 8u;
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
    if ((u32(*gptr<u8>(r8 + 0x5727u)) >> 7) != 0) {  // (from the original)
        r4 += 0x26930u;  // (from the original)
    }
    if (s32(u32(*gptr<u8>(r8 + 0x5704u)) << 0x1b) >= 0) {  // (from the original)
        if (r4 >= 0x2710u) {  // (from the original)
            r4 -= 0x2710u;  // (from the original)
        }
    }
    u32 r0_3 = Player__encrypted_6b94(r8);
    if (r0_3 <= r4) {
        r0_3 = Player__encrypted_6b94(r8);
        r4 -= r0_3;
    }
    u32 r0_4 = catalog_state(r0_3);
    *gptr<u32>(r0_4 + 0xcu) = r4;  // (from the original)
    return r4;
}

}  // namespace d_007164c0
GUEST_EXPORT_FRAMED(0x007164c0, d_007164c0::Player__house_loan_left, 0x47f0);  // pushes {r4, r5, r6, r7, r8, r9, r10, lr} first, as the original

// f_007165d0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The house's level (+0x36): 1 for 0, 2-3 as they are, 4 with +0x338 = 1, else 5 plus the number of upgraded rooms.
namespace d_007165d0 {

struct __attribute__((packed)) House {
    u8 unknown_0[0x36];  // (not used here)
    u8 byte_36;
    u8 unknown_37[0x301];  // (not used here)
    u8 byte_338;
};
GUEST_OFFSET(House, byte_36, 0x36);
GUEST_OFFSET(House, byte_338, 0x338);

inline constexpr guest::Function<0x00305158, u32(u32)> field_differs_1e_u8_0x1_305158;

u32 House__exterior_level(gptr<House> house) {
    u32 r0_1 = house->byte_36;
    if (r0_1 != 1u) {
        if (r0_1 == 0) {
            return 1u;
        }
        if (r0_1 == 2u || r0_1 == 3u) {
            return r0_1;
        }
        if (r0_1 == 4u) {
            if (house->byte_338 != 1u) {
                u32 r4_1 = 0u;
                u32 r0_3 = field_differs_1e_u8_0x1_305158(house.addr() + 0x61cu);  // (from the original)
                if (r0_3 != 0) {
                    r4_1 = 1u;
                }
                u32 r0_5 = field_differs_1e_u8_0x1_305158(house.addr() + 0xc20u);  // (from the original)
                if (r0_5 != 0) {
                    r4_1 += 1u;
                }
                u32 r0_7 = field_differs_1e_u8_0x1_305158(house.addr() + 0x91eu);  // (from the original)
                if (r0_7 != 0) {
                    r4_1 += 1u;
                }
                u32 r0_9 = field_differs_1e_u8_0x1_305158(house.addr() + 0xf22u);  // (from the original)
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
GUEST_EXPORT_FRAMED(0x007165d0, d_007165d0::House__exterior_level, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_00716764: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether every id (below 0x2f) of the reference table at 0x88f29c is in the 40-byte list.
namespace d_00716764 {


u32 has_all_required_ids(u32 r0, u32 r1) {
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
GUEST_EXPORT_FRAMED(0x00716764, d_00716764::has_all_required_ids, 0x10);  // pushes {r4} first, as the original

// f_00716804: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// `id` - 1 when it is in the reference table at 0x88f29c, else -1.
namespace d_00716804 {


u32 required_id_index(u32 r0_unused, u32 r1) {
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
GUEST_EXPORT(0x00716804, d_00716804::required_id_index);

// f_00716848: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether `id` (below 0x2f) is in the reference table at 0x88f29c.
namespace d_00716848 {


u32 is_required_id(u32 r0_unused, u32 r1) {
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
GUEST_EXPORT(0x00716848, d_00716848::is_required_id);

// f_00716894: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The position in the reference table at 0x88f29c of the id at `index` of the list; -1 when absent.
namespace d_00716894 {


u32 required_id_position(u32 r0, u32 r1) {
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
GUEST_EXPORT(0x00716894, d_00716894::required_id_position);

// f_007168dc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether byte `index` of the list is set.
namespace d_007168dc {


u32 list_byte_is_set(u32 r0, u32 r1) {
    u32 r0_1 = *gptr<u8>(r0 + r1);
    if (r0_1 != 0) {
        r0_1 = 1u;
    }
    return r0_1;
}

}  // namespace d_007168dc
GUEST_EXPORT(0x007168dc, d_007168dc::list_byte_is_set);

// f_00716928: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether any of the 40 bytes of the list is set.
namespace d_00716928 {


u32 list_has_any_id(u32 r0) {
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
GUEST_EXPORT(0x00716928, d_00716928::list_has_any_id);

// f_00716b74: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00716b74 {

inline constexpr guest::Function<0x002fae84, u32(u32, u32, u32, u32)> get_data_base;
inline constexpr guest::Function<0x002fb328, u32(u32, u32)> get_save_data;
inline constexpr guest::Function<0x002fb378, u32(u32)> game_time_now;
inline constexpr guest::Function<0x00300650, u32(u32)> day_start_by_clock_mode;
inline constexpr guest::Function<0x0056c0e4, u32(u32, u32)> day_has_changed;
inline constexpr guest::Function<0x00758de4, u32(u32)> save_data_flag_621cf_bit_1;
inline constexpr guest::Function<0x00758e08, u32(u32)> save_data_flag_621cf_bit_2;

struct __attribute__((packed)) Frame_00716b74 {
    u8 unknown_0[0x4];  // (not read or written by name)
    u32 word_4;
    u8 unknown_8[0x8];  // (not read or written by name)
};
GUEST_OFFSET(Frame_00716b74, word_4, 0x4);
GUEST_SIZE(Frame_00716b74, 0x10);

u32 object_check_c(u32 r0, u32 r1) {
    guest::StackFrameOf<Frame_00716b74> frame;  // the original's stack frame
    u32 data_base_2 = get_data_base(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r1_1 = 0x6add4u;  // (from the original)
    u32 r0_2 = data_base_2 + r1_1;
    if (r0_2 != 0) {
        r0_2 = *gptr<u16>(r0_2 + 0xeu);  // (from the original)
        r1_1 = r0_2 - 0x2007u;  // (from the original)
        if (r1_1 == 0) {
            guest::cpu()->r[1] = r1_1;
            return 0u;
        }
    }
    u32 r0_3 = day_has_changed(r0_2, r1_1);
    if (r0_3 != 0) {
        return 0u;
    }
    u32 r0_5 = day_start_by_clock_mode(frame.at(0).addr());
    u32 r4_1 = frame->word_4;
    u32 now = game_time_now(r0_5);
    u32 r4_2 = *gptr<u32>(now + 4u);
    u32 r1_4 = (r4_1 << 8) >> 0x18;  // (from the original)
    if (r1_4 == 6u) {
        guest::cpu()->r[1] = r1_4;
        return 0u;
    }
    u32 save_data_3 = get_save_data(now, r1_4);
    u32 r0_9 = save_data_flag_621cf_bit_1(save_data_3 + 0x62250u);  // (from the original)
    if (r0_9 != 0) {
        if (u32(s32(r4_2) >> 0x18) - 2u < 0x12u) {  // (from the original)
            return 0u;
        }
        return 1u;
    }
    u32 save_data_4 = get_save_data(r0_9, guest::cpu()->r[1]);
    u32 r0_12 = save_data_flag_621cf_bit_2(save_data_4 + 0x62250u);  // (from the original)
    u32 r0_13 = s32(r4_2) >> 0x18;  // (from the original)
    if (r0_12 != 0) {
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
GUEST_EXPORT_FRAMED(0x00716b74, d_00716b74::object_check_c, 0x4010);  // pushes {r4, lr} first, as the original

// f_00716c60: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether the shop is closed at this hour (opening hours by weekday 6 and the town flags 1 and 2).
namespace d_00716c60 {

struct __attribute__((packed)) Now {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Now, word_0, 0x0);
GUEST_OFFSET(Now, word_4, 0x4);
GUEST_OFFSET(Now, word_8, 0x8);

inline constexpr guest::Function<0x002fb328, u32(u32)> get_save_data;
inline constexpr guest::Function<0x002fb378, u32(u32, u32, u32, u32)> game_time_now;
inline constexpr guest::Function<0x00308efc, u32(u32, u32)> TimeStamp__move_to_day_start;
inline constexpr guest::Function<0x00758de4, u32(u32)> save_data_flag_621cf_bit_1;
inline constexpr guest::Function<0x00758e08, u32(u32)> save_data_flag_621cf_bit_2;

struct __attribute__((packed)) Frame_00716c60 {
    u32 word_0;
    u8 unknown_4[0x4];  // (not read or written by name)
    u32 word_8;
    u8 unknown_c[0x4];  // (not read or written by name)
};
GUEST_OFFSET(Frame_00716c60, word_0, 0x0);
GUEST_OFFSET(Frame_00716c60, word_8, 0x8);
GUEST_SIZE(Frame_00716c60, 0x10);

u32 is_shop_closed_now(u32 r0, u32 r1) {
    guest::StackFrameOf<Frame_00716c60> frame;  // the original's stack frame
    gptr<Now> now = gptr<Now>(game_time_now(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]));
    u32 r1_1 = now->word_0;
    u32 r4_1 = now->word_4;
    frame->word_8 = now->word_8;
    frame->word_0 = r1_1;
    *frame.at<u32>(4) = r4_1;
    TimeStamp__move_to_day_start(frame.at(0).addr(), r1_1);
    u32 r0_3 = *frame.at<u8>(6);
    if (r0_3 != 6u) {
        u32 save_data_4 = get_save_data(r0_3);
        u32 r0_6 = save_data_flag_621cf_bit_1(save_data_4 + 0x62250u);  // (from the original)
        if (r0_6 == 0) {
            u32 save_data_5 = get_save_data(r0_6);
            u32 r0_9 = save_data_flag_621cf_bit_2(save_data_5 + 0x62250u);  // (from the original)
            u32 r0_10 = s32(r4_1) >> 0x18;  // (from the original)
            if (r0_9 != 0) {
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
    u32 save_data_6 = get_save_data(r0_3);
    u32 r0_13 = save_data_flag_621cf_bit_1(save_data_6 + 0x62250u);  // (from the original)
    if (r0_13 != 0) {
        if (u32(s32(r4_1) >> 0x18) - 0xau < 0xeu) {  // (from the original)
            return 1u;
        }
        return 0u;
    }
    get_save_data(r0_13);
    save_data_flag_621cf_bit_2(r0_13);
    if ((u32(s32(r4_1) >> 0x18) - 0xcu) < 0xcu) {  // (from the original)
        return 1u;
    }
    return 0u;
}

}  // namespace d_00716c60
GUEST_EXPORT_FRAMED(0x00716c60, d_00716c60::is_shop_closed_now, 0x4010);  // pushes {r4, lr} first, as the original

// f_00716d80: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// How many of the six 16-bit slots (+4 to +0xe) are used (not 0xffff).
namespace d_00716d80 {

struct __attribute__((packed)) SlotSet6 {
    u8 unknown_0[0x4];  // (not used here)
    u16 half_4;
    u16 half_6;
};
GUEST_OFFSET(SlotSet6, half_4, 0x4);
GUEST_OFFSET(SlotSet6, half_6, 0x6);


u32 SlotSet6__count_used(gptr<SlotSet6> slot_set6) {
    u32 r0 = slot_set6.addr();
    u32 r1 = r0 + 4u;
    u32 r2 = 0xffffu;  // (from the original)
    u32 r4 = slot_set6->half_6;
    u32 r3 = 0u;
    if (slot_set6->half_4 != r2) {
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
GUEST_EXPORT_FRAMED(0x00716d80, d_00716d80::SlotSet6__count_used, 0x70);  // pushes {r4, r5, r6} first, as the original

// f_00716de4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00716de4 {

inline constexpr guest::Function<0x002fae84, u32(u32, u32, u32, u32)> get_data_base;
inline constexpr guest::Function<0x002fb378, u32(u32)> game_time_now;
inline constexpr guest::Function<0x00300650, u32(u32)> day_start_by_clock_mode;
inline constexpr guest::Function<0x0056c0e4, u32(u32, u32)> day_has_changed;

struct __attribute__((packed)) Frame_00716de4 {
    u8 unknown_0[0x4];  // (not read or written by name)
    u32 word_4;
    u8 unknown_8[0x8];  // (not read or written by name)
};
GUEST_OFFSET(Frame_00716de4, word_4, 0x4);
GUEST_SIZE(Frame_00716de4, 0x10);

u32 object_check_b(u32 r0, u32 r1) {
    guest::StackFrameOf<Frame_00716de4> frame;  // the original's stack frame
    u32 data_base_2 = get_data_base(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r1_1 = 0x6add4u;  // (from the original)
    u32 r0_2 = data_base_2 + r1_1;
    if (r0_2 != 0) {
        r0_2 = *gptr<u16>(r0_2 + 0xeu);  // (from the original)
        r1_1 = r0_2 - 0x2007u;  // (from the original)
        if (r1_1 == 0) {
            guest::cpu()->r[1] = r1_1;
            return 0u;
        }
    }
    u32 r0_3 = day_has_changed(r0_2, r1_1);
    if (r0_3 != 0) {
        return 0u;
    }
    u32 r0_5 = day_start_by_clock_mode(frame.at(0).addr());
    u32 r4_1 = frame->word_4;
    u32 now = game_time_now(r0_5);
    u32 r0_7 = *gptr<u32>(now + 4u);
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
GUEST_EXPORT_FRAMED(0x00716de4, d_00716de4::object_check_b, 0x4010);  // pushes {r4, lr} first, as the original

// f_00716e68: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// When the main object is idle and the current player has flags bit 4 of +0x5700 and bit 7 of +0x5713: whether the set
// (state below 2) has fewer than 6 used slots.
namespace d_00716e68 {

struct __attribute__((packed)) SlotSet6 {
    u8 byte_0;
    u8 unknown_1[0x3];  // (not used here)
    u16 half_4;
    u16 half_6;
};
GUEST_OFFSET(SlotSet6, byte_0, 0x0);
GUEST_OFFSET(SlotSet6, half_4, 0x4);
GUEST_OFFSET(SlotSet6, half_6, 0x6);

struct __attribute__((packed)) Local_00716e68_r0_2 {
    u8 byte_0;
    u8 unknown_1[0x12];  // (not used here)
    u8 byte_13;
};
GUEST_OFFSET(Local_00716e68_r0_2, byte_0, 0x0);
GUEST_OFFSET(Local_00716e68_r0_2, byte_13, 0x13);

inline constexpr u32 current_player_data_address = 0x00aaf14cu;
inline guest::global<u32, 0x00aaf14c> current_player_data;
inline constexpr guest::Function<0x0030b6c4, u32(u32, u32, u32, u32)> main_object_idle;

u32 SlotSet6__has_room_for_player(gptr<SlotSet6> slot_set6, u32 r1, u32 r2, u32 r3) {
    u32 r0 = slot_set6.addr();
    u32 r4 = r0;
    u32 r0_1 = main_object_idle(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    if (r0_1 != 0) {
        r0_1 = *current_player_data;
        if (r0_1 != 0) {
            gptr<Local_00716e68_r0_2> r0_2 = gptr<Local_00716e68_r0_2>(r0_1 + 0x5700u);  // (from the original)
            r1 = u32(r0_2->byte_0) << 0x1b;  // (from the original)
            if (s32(r1) < 0) {
                if ((u32(r0_2->byte_13) >> 7) != 0 && slot_set6->byte_0 < 2u) {
                    r1 = 0xffffu;  // (from the original)
                    r0 = r4 + 4u;
                    r2 = 0u;
                    u32 r12 = slot_set6->half_6;
                    if (slot_set6->half_4 != r1) {
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
GUEST_EXPORT_FRAMED(0x00716e68, d_00716e68::SlotSet6__has_room_for_player, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_00717254: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether one of the six 16-bit slots (+4 to +0xe) holds `id`.
namespace d_00717254 {

struct __attribute__((packed)) Local_00717254_r3_1 {
    u8 unknown_0[0x4];  // (not used here)
    u16 half_4;
    u16 half_6;
};
GUEST_OFFSET(Local_00717254_r3_1, half_4, 0x4);
GUEST_OFFSET(Local_00717254_r3_1, half_6, 0x6);


u32 SlotSet6__contains(u32 slot_set6, u32 r1) {
    u32 r2 = 0u;
    do {
        gptr<Local_00717254_r3_1> r3_1 = gptr<Local_00717254_r3_1>(slot_set6 + (r2 << 1));
        if (r3_1->half_4 == r1 || r3_1->half_6 == r1) {
            return 1u;
        }
        r2 += 2u;
        guest::preempt();
    } while (s32(r2) < 6);
    return 0u;
}

}  // namespace d_00717254
GUEST_EXPORT(0x00717254, d_00717254::SlotSet6__contains);

// f_007179a0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Finds the `n`-th map cell with value 0x28 and calls 00535ab0 there with the entry; 0 when there is none.
namespace d_007179a0 {

inline constexpr guest::Function<0x00300888, u32(u32, u32, u32, u32)> find_nth_cell_with_value;
inline constexpr guest::Function<0x00535ab0, u32(u32, u32, u32)> Map__place_structure_at;
inline constexpr guest::Function<0x006a5e34, u32(u32, u32, u32, u32)> get_map_table;

struct __attribute__((packed)) Frame_007179a0 {
    u32 word_0;
    u32 word_4;
    u8 unknown_8[0x4];  // (not read or written by name)
};
GUEST_OFFSET(Frame_007179a0, word_0, 0x0);
GUEST_OFFSET(Frame_007179a0, word_4, 0x4);
GUEST_SIZE(Frame_007179a0, 0xc);

u32 place_on_nth_cell_with_value_28(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_007179a0> frame;  // the original's stack frame
    u32 map_table_2 = get_map_table(r0, r1, r2, r3);
    if (map_table_2 == 0) {
        return map_table_2;
    }
    u32 r0_3 = find_nth_cell_with_value(frame.at(0).addr(), frame.at(4).addr(), 0x28u, r2);  // (from the original)
    if (r0_3 == 0) {
        return r0_3;
    }
    u32 place_structure = Map__place_structure_at(r1, frame->word_0, frame->word_4);
    return place_structure;
}

}  // namespace d_007179a0
GUEST_EXPORT_FRAMED(0x007179a0, d_007179a0::place_on_nth_cell_with_value_28, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_007179ec: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The value of slot `index` (below 8; +0x34) minus 4 when it is at least 4, else -1.
namespace d_007179ec {


u32 slot_value_minus_4(u32 r0, u32 r1) {
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
GUEST_EXPORT(0x007179ec, d_007179ec::slot_value_minus_4);

// f_00717aac: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The kind of slot `index` (below 8; +0x34): 1 for values 0-3, 2 for 4 and above, 0 otherwise.
namespace d_00717aac {


u32 slot_value_kind(u32 r0, u32 r1) {
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
GUEST_EXPORT(0x00717aac, d_00717aac::slot_value_kind);

// f_00718364: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether the 16-bit value is at most 0xfc.
namespace d_00718364 {

struct __attribute__((packed)) Object_00718364_0 {
    u16 half_0;
};
GUEST_OFFSET(Object_00718364_0, half_0, 0x0);


u32 halfword_at_most_fc(gptr<Object_00718364_0> arg0) {
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
GUEST_EXPORT(0x00718364, d_00718364::halfword_at_most_fc);

// f_007186c4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Applies the template of kind (table 0x846bcb) to the 6-byte entry of `index` (below 8) at +0xe4.
namespace d_007186c4 {

struct __attribute__((packed)) Object_007186c4_1 {
    u8 unknown_0[0x846bcb];  // (not used here)
    u8 byte_846bcb;
};
GUEST_OFFSET(Object_007186c4_1, byte_846bcb, 0x846bcb);

inline constexpr guest::Function<0x0062512c, u32(u32, u32, u32)> apply_entry_template;

void apply_slot_template(u32 r0, gptr<Object_007186c4_1> arg1) {
    if (s32(arg1.addr()) >= 8) {
        return;
    }
    u32 r0_1 = arg1->byte_846bcb;
    apply_entry_template(r0_1, r0 + arg1.addr() * 6u + 0xe4u, 1u);  // (from the original)
}

}  // namespace d_007186c4
GUEST_EXPORT(0x007186c4, d_007186c4::apply_slot_template);

// f_007187e8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Builds the character set used for passwords in the current mode.
namespace d_007187e8 {

struct __attribute__((packed)) Local_007187e8_r0_2 {
    u16 half_0;
    u8 unknown_2[0x2];  // (not used here)
    u32 word_4;
};
GUEST_OFFSET(Local_007187e8_r0_2, half_0, 0x0);
GUEST_OFFSET(Local_007187e8_r0_2, word_4, 0x4);

inline constexpr u32 password_charset_a_address = 0x0094dfbcu;
inline constexpr u32 password_charset_b_address = 0x0094dfd4u;
inline constexpr u32 camera_manager_address = 0x0094edd8u;
inline constexpr u32 cell_kinds_address = 0x00950800u;
inline guest::global<u16, 0x00886eda> global_00886eda;
inline guest::global<u16, 0x00886f00> global_00886f00;
inline guest::global<u32, 0x0094dfbc> password_charset_a;
inline guest::global<u32, 0x0094dfd4> password_charset_b;
inline guest::global<u32, 0x0094edd8> camera_manager;
inline guest::global<u8, 0x009506b0> event_npc_mode;
inline guest::global<u32, 0x009506b4> event_npc_source;
inline constexpr guest::Function<0x00284b48, u32(u32, u32, u32, u32)> read_u32_0x00950808_;
inline constexpr guest::Function<0x005b4cc0, u32(u32, u32, u32, u32)> scene_environment_mode;

u32 build_password_charset(u32 r0_unused, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x4);  // the original's stack frame
    u32 r12 = guest::cpu()->r[12];
    *frame.at<u32>(0x20) = r12;  // (from the original)
    u32 r0_1 = *camera_manager;
    if (r0_1 != 0) {
        u32 r5 = 0u;
        u32 r7 = r5;
        u32 r6 = r5;
        u32 r8 = r5;
        gptr<Local_007187e8_r0_2> r0_2 = gptr<Local_007187e8_r0_2>(scene_environment_mode(0xa5u, r1, r2, r3));  // (from the original)
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
                    u32 r10 = cell_kinds_address;
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
                                r0_1 = *password_charset_b;
                                if (r0_1 == 0) {
                                    guest::cpu()->r[1] = r1;
                                    return r0_1;
                                }
                            } else {
                                u32 r1_1 = *global_00886eda;
                                if (r0_3 == r1_1) {
                                    r0_1 = read_u32_0x00950808_(r0_3, r1_1, r2, r3);
                                    r1 = guest::cpu()->r[1];
                                    r2 = guest::cpu()->r[2];
                                    r3 = guest::cpu()->r[3];
                                    if (r0_1 == 0) {
                                        return r0_1;
                                    }
                                } else {
                                    r1 = *global_00886f00;
                                    if (r0_3 == r1 && (*event_npc_mode != 0xffu || *event_npc_source == 0)) {  // (from the original)
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
                    r1 = *password_charset_a;
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
GUEST_EXPORT_FRAMED(0x007187e8, d_007187e8::build_password_charset, 0x4ff0);  // pushes {r4, r5, r6, r7, r8, r9, r10, r11, lr} first, as the original

// f_00718c1c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether the member handler (+0xc, +0x10) is the one at 0x87919c.
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

u32 handler_is_87919c(gptr<Object_00718c1c_0> arg0) {
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
GUEST_EXPORT(0x00718c1c, d_00718c1c::handler_is_87919c);

// f_00718c6c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Bit 0 when the member handler (+0xc, +0x10) is the one at 0x8791bc, bit 1 when it is the one at 0x8791b4.
namespace d_00718c6c {

struct __attribute__((packed)) Object_00718c6c_0 {
    u8 unknown_0[0xc];  // (not used here)
    u32 word_c;
    u32 word_10;
};
GUEST_OFFSET(Object_00718c6c_0, word_c, 0xc);
GUEST_OFFSET(Object_00718c6c_0, word_10, 0x10);

inline guest::global<u32, 0x008791b4> pockets_close_handler_a;
inline guest::global<u32, 0x008791b8> pockets_close_handler_b;
inline guest::global<u32, 0x008791bc> global_008791bc;
inline guest::global<u32, 0x008791c0> global_008791c0;

u32 handler_is_8791b4_or_8791bc(gptr<Object_00718c6c_0> arg0) {
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
    u32 r1_2 = *pockets_close_handler_b;
    if (r3_1 == *pockets_close_handler_a) {
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
GUEST_EXPORT_FRAMED(0x00718c6c, d_00718c6c::handler_is_8791b4_or_8791bc, 0x10);  // pushes {r4} first, as the original

// f_00718d38: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether the target is ready: the state object (+4) when +0x10e is set, else the object at +0x84.
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

inline constexpr guest::Function<0x0075cd14, u32(u32, u32)> empty_check_is_clear;
inline constexpr guest::Function<0x0075d0f0, u32(u32, u32)> StateObject360__check_pointer_when_state_0;

u32 target_is_ready(gptr<Object_00718d38_0> arg0) {
    u32 r1_1 = arg0->byte_10e;
    if (r1_1 != 0) {
        u32 r0_1 = arg0->word_4;
        if (r0_1 == 0) {
            guest::cpu()->r[1] = r1_1;
            return 0u;
        }
        u32 r0_2 = StateObject360__check_pointer_when_state_0(r0_1, r1_1);
        return r0_2 != 0;
    }
    u32 r0_3 = arg0->word_84;
    if (r0_3 == 0) {
        guest::cpu()->r[1] = r1_1;
        return 0u;
    }
    u32 r0_4 = empty_check_is_clear(r0_3, r1_1);
    return r0_4 != 0;
}

}  // namespace d_00718d38
GUEST_EXPORT_FRAMED(0x00718d38, d_00718d38::target_is_ready, 0x4010);  // pushes {r4, lr} first, as the original

// f_00718dd8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether the value of the owner at +0x458 is 0.
namespace d_00718dd8 {

inline constexpr guest::Function<0x0071ef10, u32(u32)> SubValueOwner__query_value;

u32 sub_value_is_clear(u32 r0) {
    u32 r0_2 = SubValueOwner__query_value(r0 + 0x458u);  // (from the original)
    return r0_2 == 0;
}

}  // namespace d_00718dd8
GUEST_EXPORT_FRAMED(0x00718dd8, d_00718dd8::sub_value_is_clear, 0x4010);  // pushes {r4, lr} first, as the original

// f_00718e20: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The index of the `n`-th set bit of the candidate bits, or -1.
namespace d_00718e20 {


u32 SearchCandCore__nth_candidate(gptr<SearchCandCore> search_cand_core, u32 r1) {
    u32 r0 = search_cand_core.addr();
    u32 r5 = guest::cpu()->r[5];
    u32 r2 = r0;
    u32 count = u32(search_cand_core->count);
    r0 = 0u;
    if (count != 0 && s32(count) >= 0) {
        r2 = search_cand_core->bits.addr();
        r5 = 1u;
    }
    if (s32(count) > 0) {
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
        } while (s32(count) > s32(r0));
    }
    guest::cpu()->r[1] = r1;
    return ~0u;
}

}  // namespace d_00718e20
GUEST_EXPORT_FRAMED(0x00718e20, d_00718e20::SearchCandCore__nth_candidate, 0x70);  // pushes {r4, r5, r6} first, as the original

// f_00718f9c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// How many of the children (64 slots from +0x14, count +0x114) have +0x80 set.
namespace d_00718f9c {

struct __attribute__((packed)) Object_00718f9c_0 {
    u8 unknown_0[0x114];  // (not used here)
    u32 word_114;
};
GUEST_OFFSET(Object_00718f9c_0, word_114, 0x114);


u32 count_children_with_80(gptr<Object_00718f9c_0> arg0) {
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
GUEST_EXPORT_FRAMED(0x00718f9c, d_00718f9c::count_children_with_80, 0x10);  // pushes {r4} first, as the original

// f_0071900c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Calls virtual 4 of the handler at +0x118, or 0x18 without one.
namespace d_0071900c {

struct __attribute__((packed)) Object_0071900c_0 {
    u8 unknown_0[0x118];  // (not used here)
    u32 word_118;
};
GUEST_OFFSET(Object_0071900c_0, word_118, 0x118);


u32 handler_118_virtual_4(gptr<Object_0071900c_0> arg0, u32 r1) {
    u32 r0_1 = arg0->word_118;
    if (r0_1 == 0) {
        return 0x18u;  // (from the original)
    }
    u32 r1_1 = *gptr<u32>(*gptr<u32>(r0_1) + 0x10u);  // (from the original)
    // virtual function 4 of r0_1
    return guest::call_address<u32>(r1_1, r0_1, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0071900c
GUEST_EXPORT(0x0071900c, d_0071900c::handler_118_virtual_4);

// f_0071902c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Calls virtual 5 of the handler at +0x118, or 0x18 without one.
namespace d_0071902c {

struct __attribute__((packed)) Object_0071902c_0 {
    u8 unknown_0[0x118];  // (not used here)
    u32 word_118;
};
GUEST_OFFSET(Object_0071902c_0, word_118, 0x118);


u32 handler_118_virtual_5(gptr<Object_0071902c_0> arg0) {
    u32 r0_1 = arg0->word_118;
    if (r0_1 == 0) {
        return 0x18u;  // (from the original)
    }
    u32 r1_1 = *gptr<u32>(*gptr<u32>(r0_1) + 0x14u);  // (from the original)
    // virtual function 5 of r0_1
    return guest::call_address<u32>(r1_1, r0_1, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0071902c
GUEST_EXPORT(0x0071902c, d_0071902c::handler_118_virtual_5);

// f_0071904c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Calls virtual 7 of the handler at +0x118, or 0x18 without one.
namespace d_0071904c {

struct __attribute__((packed)) Object_0071904c_0 {
    u8 unknown_0[0x118];  // (not used here)
    u32 word_118;
};
GUEST_OFFSET(Object_0071904c_0, word_118, 0x118);


u32 handler_118_virtual_7(gptr<Object_0071904c_0> arg0, u32 r1) {
    u32 r0_1 = arg0->word_118;
    if (r0_1 == 0) {
        return 0x18u;  // (from the original)
    }
    u32 r1_1 = *gptr<u32>(*gptr<u32>(r0_1) + 0x1cu);  // (from the original)
    // virtual function 7 of r0_1
    return guest::call_address<u32>(r1_1, r0_1, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0071904c
GUEST_EXPORT(0x0071904c, d_0071904c::handler_118_virtual_7);

// f_0071906c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Calls virtual 6 of the handler at +0x118, or 0 without one.
namespace d_0071906c {

struct __attribute__((packed)) Object_0071906c_0 {
    u8 unknown_0[0x118];  // (not used here)
    u32 word_118;
};
GUEST_OFFSET(Object_0071906c_0, word_118, 0x118);


u32 handler_118_virtual_6(gptr<Object_0071906c_0> arg0, u32 r1) {
    u32 r0_1 = arg0->word_118;
    if (r0_1 == 0) {
        return r0_1;
    }
    u32 r1_1 = *gptr<u32>(*gptr<u32>(r0_1) + 0x18u);  // (from the original)
    // virtual function 6 of r0_1
    return guest::call_address<u32>(r1_1, r0_1, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0071906c
GUEST_EXPORT(0x0071906c, d_0071906c::handler_118_virtual_6);

// f_0071a040: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The address of 16-byte entry `index` (below 4; else the first) of the table at 0x83b146.
namespace d_0071a040 {


u32 entry_16_83b146(u32 r0_unused, u32 r1) {
    u32 r0_1 = 0x83b146u;  // (from the original)
    if (r1 < 4u) {
        r0_1 += (r1 << 4);
    }
    return r0_1;
}

}  // namespace d_0071a040
GUEST_EXPORT(0x0071a040, d_0071a040::entry_16_83b146);

// f_0071a054: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The float of slot `index` (below 0x12): from +0x1f8 (by 7 words) or +0x3ec by the slot's flag (+0x434); 0 when out
// of range.
namespace d_0071a054 {

struct __attribute__((packed)) Local_0071a054_r0_1 {
    u8 unknown_0[0x1f8];  // (not used here)
    float float_1f8;
    u8 unknown_1fc[0x1f0];  // (not used here)
    float float_3ec;
};
GUEST_OFFSET(Local_0071a054_r0_1, float_1f8, 0x1f8);
GUEST_OFFSET(Local_0071a054_r0_1, float_3ec, 0x3ec);


void slot_float_of_18(u32 r0, u32 r1) {
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
GUEST_EXPORT(0x0071a054, d_0071a054::slot_float_of_18);

// f_0071a310: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether the four player records pass their stored CRC check and the CRC of their part at +0x6b8c (0x38f4 bytes).
namespace d_0071a310 {

inline constexpr guest::Function<0x003193e8, u32(u32, u32, u32, u32)> crc32;
inline constexpr guest::Function<0x00712bd4, u32(u32, u32, u32, u32)> stored_crc_matches;

u32 Players__are_sealed(u32 players, u32 r1, u32 r2_unused, u32 r3) {
    guest::StackFrame frame(0x4);  // the original's stack frame
    u32 r12 = guest::cpu()->r[12];
    u32 r1_1 = 0;
    u32 r0_4 = 0;
    *frame.at<u32>(0x20) = r12;  // (from the original)
    u32 r5 = 1u;
    u32 r4 = 0u;
    u32 r8 = players;
    u32 r7 = r1;
    u32 r9 = 0x38f4u;  // (from the original)
    u32 r11 = r5;
    u32 r10 = r4;
    do {
        u32 r6_1 = r8 + r4 * 0xa480u;  // (from the original)
        u32 r0_1 = stored_crc_matches(r6_1, r4, r7, r3);
        r1_1 = guest::cpu()->r[1];
        r3 = guest::cpu()->r[3];
        if (r0_1 != 0) {
            u32 r6_2 = r6_1 + 0x6b88u;  // (from the original)
            u32 r3_1 = ~0u;
            u32 crc_2 = crc32(r6_2 + 4u, r9, r3_1, r3_1);
            r3 = guest::cpu()->r[3];
            r1_1 = *gptr<u32>(r6_2);
            if (r1_1 == crc_2) {
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
GUEST_EXPORT_FRAMED(0x0071a310, d_0071a310::Players__are_sealed, 0x4ff0);  // pushes {r4, r5, r6, r7, r8, r9, r10, r11, lr} first, as the original

// f_0071aa1c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The item of the child (+0) through its virtual 41, or the empty item without a child.
namespace d_0071aa1c {

struct __attribute__((packed)) Object_0071aa1c_1 {
    u32 word_0;
};
GUEST_OFFSET(Object_0071aa1c_1, word_0, 0x0);

inline constexpr u32 empty_item_address = 0x0095bfdcu;
inline constexpr guest::Function<0x002fc934, u32(u32, u32)> Item__copy_b;

void child_item_or_empty(u32 r0_unused, gptr<Object_0071aa1c_1> arg1) {
    u32 r1_1 = arg1->word_0;
    if (r1_1 == 0) {
        Item__copy_b(guest::cpu()->r[0], empty_item_address);
        return;
    }
    u32 r2_1 = *gptr<u32>(*gptr<u32>(r1_1) + 0xa4u);  // (from the original)
    // virtual function 41 of r1_1
    guest::call_address<u32>(r2_1, guest::cpu()->r[0], r1_1, r2_1, guest::cpu()->r[3]);
}

}  // namespace d_0071aa1c
GUEST_EXPORT(0x0071aa1c, d_0071aa1c::child_item_or_empty);

// f_0071ad3c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether the count (+0x1c) is at most the limit (+0x18).
namespace d_0071ad3c {

struct __attribute__((packed)) Object_0071ad3c_0 {
    u8 unknown_0[0x18];  // (not used here)
    u32 word_18;
    u32 word_1c;
};
GUEST_OFFSET(Object_0071ad3c_0, word_18, 0x18);
GUEST_OFFSET(Object_0071ad3c_0, word_1c, 0x1c);


u32 count_within_limit(gptr<Object_0071ad3c_0> arg0) {
    u32 r1_1 = arg0->word_1c;
    u32 r0_1 = s32(r1_1) <= s32(arg0->word_18);
    guest::cpu()->r[1] = r1_1;
    return r0_1;
}

}  // namespace d_0071ad3c
GUEST_EXPORT(0x0071ad3c, d_0071ad3c::count_within_limit);

// f_0071ae0c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The translation of the matrix at +0x80 of the object (the origin moved by it).
namespace d_0071ae0c {

struct __attribute__((packed)) Object_0071ae0c_0 {
    float float_0;
    float float_4;
    float float_8;
};
GUEST_OFFSET(Object_0071ae0c_0, float_0, 0x0);
GUEST_OFFSET(Object_0071ae0c_0, float_4, 0x4);
GUEST_OFFSET(Object_0071ae0c_0, float_8, 0x8);

inline constexpr guest::Function<0x00148710, u32(u32, u32, u32)> mtx34_mult_vec3;

void matrix_translation(gptr<Object_0071ae0c_0> arg0, u32 r1_unused, u32 r2) {
    float S0_1 = 0.0f;
    arg0->float_0 = S0_1;
    arg0->float_4 = S0_1;
    arg0->float_8 = S0_1;
    guest::cpu()->s[0] = S0_1;
    mtx34_mult_vec3(arg0.addr(), r2 + 0x80u, arg0.addr());
    return;  // (from the original)
}

}  // namespace d_0071ae0c
GUEST_EXPORT(0x0071ae0c, d_0071ae0c::matrix_translation);

// f_0071ae30: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether a menu may open now: no blocking flag, the error/EULA manager idle (or allowing it), the object free (+0xf8)
// and its handler not the idle one.
namespace d_0071ae30 {

struct __attribute__((packed)) Local_0071ae30_r4_1 {
    u8 unknown_0[0x154];  // (not used here)
    u32 word_154;
    u8 unknown_158[0xb0];  // (not used here)
    u8 byte_208;
};
GUEST_OFFSET(Local_0071ae30_r4_1, word_154, 0x154);
GUEST_OFFSET(Local_0071ae30_r4_1, byte_208, 0x208);

inline constexpr u32 menu_selection_address = 0x0094fd3cu;
inline guest::global<u32, 0x0094fd3c> menu_selection;
inline guest::global<u8, 0x00ad56e0> menu_entry_state;
inline constexpr guest::Function<0x005ce6dc, u32(u32, u32)> err_eula_is_idle_with_byte_fac;
inline constexpr guest::Function<0x007237e0, u32(u32, u32)> sub_is_ready;

u32 can_open_menu_now(u32 r0, u32 r1) {
    if (*menu_entry_state == 0) {
        gptr<Local_0071ae30_r4_1> r4_1 = gptr<Local_0071ae30_r4_1>(*menu_selection);
        u32 r0_1 = err_eula_is_idle_with_byte_fac(menu_selection_address, r1);
        r1 = guest::cpu()->r[1];
        if ((r0_1 != 0 || r4_1->byte_208 != 0 || (r4_1->word_154 & 4u) == 0) && *gptr<u8>(r0 + 0xf8u) == 0) {  // (from the original)
            u32 r0_2 = sub_is_ready(r0, r1);
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
GUEST_EXPORT_FRAMED(0x0071ae30, d_0071ae30::can_open_menu_now, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0071b2a8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The id (+0xc8 of +0x104) of the current menu, or -1 when none or idle.
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

inline constexpr guest::Function<0x007237e0, u32(u32)> sub_is_ready;

u32 current_menu_id(gptr<Object_0071b2a8_0> arg0) {
    u32 r0_5 = 0;
    if (arg0->word_104 == 0) {
        return ~0u;
    }
    u32 r0_2 = sub_is_ready(arg0.addr());
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
GUEST_EXPORT_FRAMED(0x0071b2a8, d_0071b2a8::current_menu_id, 0x4010);  // pushes {r4, lr} first, as the original

// f_0071b708: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The word of the villager's habit (the habit table entry of its id, from 0xa83afc).
namespace d_0071b708 {

struct __attribute__((packed)) Object_0071b708_0 {
    u16 half_0;
};
GUEST_OFFSET(Object_0071b708_0, half_0, 0x0);

inline constexpr u32 word_resources_address = 0x0095debcu;
inline constexpr u32 npc_text_table_address = 0x00a83afcu;
inline guest::global<u32, 0x0095debc> word_resources;
inline constexpr guest::Function<0x002fbb30, u32(u32, u32, u32, u32)> copy_aligned_bytes;
inline constexpr guest::Function<0x003083e4, u32(u32, u32, u32, u32)> script__WordRes__WordRes_003083e4;

u32 npc_habit_word(gptr<Object_0071b708_0> arg0, u32 r1, u32 r2_unused, u32 r3) {
    guest::StackFrame frame(0x650);  // the original's stack frame
    u32 r6_1 = frame.at(0).addr();
    copy_aligned_bytes(r6_1, npc_text_table_address, 0x63cu, r3);  // (from the original)
    u32 r0_1 = gptr<u32>(r6_1)[u32(arg0->half_0)];
    *gptr<u8>(r0_1 + 0xfu) = 0;  // (from the original)
    u32 r0_2 = *word_resources;
    frame.release();
    return script__WordRes__WordRes_003083e4(r0_2, r1, 0x8810b4u, r0_1 + 0xau);  // (from the original)
}

}  // namespace d_0071b708
GUEST_EXPORT(0x0071b708, d_0071b708::npc_habit_word);

// f_0071b83c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0071b83c {

struct __attribute__((packed)) Object_0071b83c_0 {
    u16 half_0;
};
GUEST_OFFSET(Object_0071b83c_0, half_0, 0x0);

inline constexpr u32 npc_text_table_address = 0x00a83afcu;
inline constexpr guest::Function<0x002fbb30, u32(u32, u32, u32, u32)> copy_aligned_bytes;

u32 query_0071b83c(gptr<Object_0071b83c_0> arg0) {
    guest::StackFrame frame(0x640);  // the original's stack frame
    u32 r5_1 = frame.at(0).addr();
    copy_aligned_bytes(r5_1, npc_text_table_address, 0x63cu, guest::cpu()->r[3]);  // (from the original)
    return *gptr<s8>(gptr<u32>(r5_1)[u32(arg0->half_0)] + 2u);
}

}  // namespace d_0071b83c
GUEST_EXPORT_FRAMED(0x0071b83c, d_0071b83c::query_0071b83c, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0071b88c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The text (+0xa) of the villager's entry in the habit table at 0xa83afc.
namespace d_0071b88c {

struct __attribute__((packed)) Object_0071b88c_0 {
    u16 half_0;
};
GUEST_OFFSET(Object_0071b88c_0, half_0, 0x0);

inline constexpr u32 npc_text_table_address = 0x00a83afcu;
inline constexpr guest::Function<0x002fbb30, u32(u32, u32, u32, u32)> copy_aligned_bytes;

u32 npc_habit_entry_text(gptr<Object_0071b88c_0> arg0) {
    guest::StackFrame frame(0x640);  // the original's stack frame
    u32 r5_1 = frame.at(0).addr();
    copy_aligned_bytes(r5_1, npc_text_table_address, 0x63cu, guest::cpu()->r[3]);  // (from the original)
    u32 r1_1 = gptr<u32>(r5_1)[u32(arg0->half_0)];
    *gptr<u8>(r1_1 + 0xfu) = 0;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    return r1_1 + 0xau;  // (from the original)
}

}  // namespace d_0071b88c
GUEST_EXPORT_FRAMED(0x0071b88c, d_0071b88c::npc_habit_entry_text, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0071b8d0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0071b8d0 {

struct __attribute__((packed)) Object_0071b8d0_0 {
    u16 half_0;
};
GUEST_OFFSET(Object_0071b8d0_0, half_0, 0x0);

inline constexpr u32 npc_text_table_address = 0x00a83afcu;
inline constexpr guest::Function<0x002fbb30, u32(u32, u32, u32, u32)> copy_aligned_bytes;

u32 query_state_0071b8d0(gptr<Object_0071b8d0_0> arg0) {
    guest::StackFrame frame(0x640);  // the original's stack frame
    u32 r5_1 = frame.at(0).addr();
    copy_aligned_bytes(r5_1, npc_text_table_address, 0x63cu, guest::cpu()->r[3]);  // (from the original)
    return u32(*gptr<u8>(gptr<u32>(r5_1)[u32(arg0->half_0)] + 0x1cu)) >> 4;  // (from the original)
}

}  // namespace d_0071b8d0
GUEST_EXPORT_FRAMED(0x0071b8d0, d_0071b8d0::query_state_0071b8d0, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0071bf58: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// How many of the ten 8-byte entries (+0x10) have `id` (0 when +0x60 is clear).
namespace d_0071bf58 {

struct __attribute__((packed)) Object_0071bf58_0 {
    u8 unknown_0[0x60];  // (not used here)
    u32 word_60;
};
GUEST_OFFSET(Object_0071bf58_0, word_60, 0x60);


u32 count_entries_with_id(gptr<Object_0071bf58_0> arg0, u32 r1) {
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
GUEST_EXPORT_FRAMED(0x0071bf58, d_0071bf58::count_entries_with_id, 0x10);  // pushes {r4} first, as the original

// f_0071bfa0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether one of the ten 8-byte history entries (+0x10) has `id` (false when +0x60 is clear).
namespace d_0071bfa0 {

struct __attribute__((packed)) Object_0071bfa0_0 {
    u8 unknown_0[0x60];  // (not used here)
    u32 word_60;
};
GUEST_OFFSET(Object_0071bfa0_0, word_60, 0x60);


u32 history_has_id(gptr<Object_0071bfa0_0> arg0, u32 r1) {
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
GUEST_EXPORT(0x0071bfa0, d_0071bfa0::history_has_id);

// f_0071c0d0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Stores the CRC-32 (MSB first) of the 0x1444 bytes after the checksum word.
namespace d_0071c0d0 {

struct __attribute__((packed)) Block1448 {
    u32 crc;
};
GUEST_OFFSET(Block1448, crc, 0x0);

inline constexpr guest::Function<0x0047ea68, u32(u32, u32, u32)> crc32_msb_first;

u32 Block1448__seal(gptr<Block1448> block1448) {
    u32 crc_2 = crc32_msb_first(block1448.addr() + 4u, 0x1444u, 0u);  // (from the original)
    block1448->crc = crc_2;
    return crc_2;
}

}  // namespace d_0071c0d0
GUEST_EXPORT_FRAMED(0x0071c0d0, d_0071c0d0::Block1448__seal, 0x4010);  // pushes {r4, lr} first, as the original

// f_0071c0f4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether the stored CRC-32 (MSB first) matches the 0x1444 bytes after it.
namespace d_0071c0f4 {

struct __attribute__((packed)) Block1448 {
    u32 word_0;
};
GUEST_OFFSET(Block1448, word_0, 0x0);

inline constexpr guest::Function<0x0047ea68, u32(u32, u32, u32)> crc32_msb_first;

u32 Block1448__is_sealed(gptr<Block1448> block1448) {
    u32 crc_2 = crc32_msb_first(block1448.addr() + 4u, 0x1444u, 0u);  // (from the original)
    u32 r1_1 = block1448->word_0;
    guest::cpu()->r[1] = r1_1;
    return crc_2 == r1_1;
}

}  // namespace d_0071c0f4
GUEST_EXPORT_FRAMED(0x0071c0f4, d_0071c0f4::Block1448__is_sealed, 0x4010);  // pushes {r4, lr} first, as the original

// f_0071c124: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The address of 24-byte entry `index` (below 4; else the first).
namespace d_0071c124 {


u32 entry_24_at(u32 r0, u32 r1) {
    if (r1 < 4u) {
        r1 = r1 * 3u;
        r0 += (r1 << 3);
    }
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0071c124
GUEST_EXPORT(0x0071c124, d_0071c124::entry_24_at);

// f_0071c2f8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Checks the town event (00710fcc) unless the day has changed.
namespace d_0071c2f8 {

inline constexpr guest::Function<0x002fb328, u32(u32, u32, u32, u32)> get_save_data;
inline constexpr guest::Function<0x0056c0e4, u32(u32)> day_has_changed;
inline constexpr guest::Function<0x00710fcc, u32(u32, u32, u32, u32)> TownTime__is_within;

u32 town_event_check_same_day(u32 r0) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 save_data_2 = get_save_data(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    if (save_data_2 + 0x62250u == 0) {  // (from the original)
        return save_data_2 + 0x62250u;  // (from the original)
    }
    u32 r0_3 = day_has_changed(save_data_2 + 0x62250u);  // (from the original)
    if (r0_3 != 0) {
        return 0u;
    }
    frame.release();
    return TownTime__is_within(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0071c2f8
GUEST_EXPORT(0x0071c2f8, d_0071c2f8::town_event_check_same_day);

// f_0071c358: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether the town event (state 2 and up) was stamped today, or (below 2) whether the object's +0x10 is 1.
namespace d_0071c358 {

inline constexpr guest::Function<0x002fb328, u32(u32, u32, u32, u32)> get_save_data;
inline constexpr guest::Function<0x007111b4, u32(u32, u32, u32, u32)> Stamp__is_today;

u32 town_event_done_today(u32 r0) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 save_data_4 = get_save_data(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_2 = save_data_4 + 0x62250u;  // (from the original)
    if (r0_2 == 0) {
        return r0_2;
    }
    u32 save_data_5 = get_save_data(r0_2, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_4 = *gptr<u8>(save_data_5 + 0x62264u);  // (from the original)
    if (r0_4 >= 2u) {
        u32 save_data_6 = get_save_data(r0_4, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
        frame.release();
        return Stamp__is_today(save_data_6 + 0x62250u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    }
    u32 r0_7 = *gptr<u8>(r0 + 0x10u);  // (from the original)
    if (r0_7 != 1u) {
        r0_7 = 0u;
    }
    return r0_7;
}

}  // namespace d_0071c358
GUEST_EXPORT(0x0071c358, d_0071c358::town_event_done_today);

// f_0071c620: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether the town event passes its check on the same day, the current player has flag 2 of +0x5701 (or there is none)
// and town flag bit 6 of +0x621d9 is clear.
namespace d_0071c620 {

inline constexpr u32 current_player_data_address = 0x00aaf14cu;
inline guest::global<u32, 0x00aaf14c> current_player_data;
inline constexpr guest::Function<0x002fb328, u32(u32, u32, u32, u32)> get_save_data;
inline constexpr guest::Function<0x0056c0e4, u32(u32)> day_has_changed;
inline constexpr guest::Function<0x00710fcc, u32(u32)> TownTime__is_within;

u32 town_event_ready_for_player(u32 r0, u32 r1) {
    u32 save_data_3 = get_save_data(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_2 = save_data_3 + 0x62250u;  // (from the original)
    if (r0_2 == 0) {
        return 0u;
    }
    u32 r0_3 = day_has_changed(r0_2);
    if (r0_3 != 0) {
        return 0u;
    }
    u32 r0_4 = TownTime__is_within(r0);
    if (r0_4 == 0) {
        return 0u;
    }
    u32 r0_5 = *current_player_data;
    if (r0_5 != 0) {
        r0_5 = u32(*gptr<u8>(r0_5 + 0x5701u)) << 0x1e;  // (from the original)
        if (s32(r0_5) >= 0) {
            return 0u;
        }
    }
    u32 save_data_4 = get_save_data(r0_5, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    if (s32(u32(*gptr<u8>(save_data_4 + 0x621d9u)) << 0x19) >= 0) {  // (from the original)
        guest::cpu()->r[1] = 0x6214fu;  // (from the original)
        return 1u;
    }
    guest::cpu()->r[1] = 0x6214fu;  // (from the original)
    return 0u;
}

}  // namespace d_0071c620
GUEST_EXPORT_FRAMED(0x0071c620, d_0071c620::town_event_ready_for_player, 0x4010);  // pushes {r4, lr} first, as the original

// f_0071cba4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Applies the template of kind (table 0x846fb6) to the 6-byte entry of `index` (below 12) at +0x1370.
namespace d_0071cba4 {

struct __attribute__((packed)) Object_0071cba4_1 {
    u8 unknown_0[0x846fb6];  // (not used here)
    u8 byte_846fb6;
};
GUEST_OFFSET(Object_0071cba4_1, byte_846fb6, 0x846fb6);

inline constexpr guest::Function<0x0062512c, u32(u32, u32, u32)> apply_entry_template;

u32 apply_slot_template_12(u32 r0, gptr<Object_0071cba4_1> arg1) {
    if (s32(arg1.addr()) >= 0xc) {  // (from the original)
        guest::cpu()->r[1] = arg1.addr();
        return r0;
    }
    u32 r0_1 = arg1->byte_846fb6;
    return apply_entry_template(r0_1, r0 + arg1.addr() * 6u + 0x1370u, 1u);  // (from the original)
}

}  // namespace d_0071cba4
GUEST_EXPORT(0x0071cba4, d_0071cba4::apply_slot_template_12);

// f_0071cff8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Pushes a point out of the plane (a, c, d in x-z) when it crossed it from the side of the reference point.
namespace d_0071cff8 {

struct __attribute__((packed)) Plane {
    float float_0;
    u8 unknown_4[0x4];  // (not used here)
    float float_8;
    float float_c;
};
GUEST_OFFSET(Plane, float_0, 0x0);
GUEST_OFFSET(Plane, float_8, 0x8);
GUEST_OFFSET(Plane, float_c, 0xc);

struct __attribute__((packed)) Object_0071cff8_2 {
    float float_0;
    u8 unknown_4[0x4];  // (not used here)
    float float_8;
};
GUEST_OFFSET(Object_0071cff8_2, float_0, 0x0);
GUEST_OFFSET(Object_0071cff8_2, float_8, 0x8);

inline constexpr guest::Function<0x0014f4d0, u32(u32, u32, u32)> Vec3__multiply_add;

void Plane__push_out(gptr<Plane> plane, gptr<Float3> arg1, gptr<Object_0071cff8_2> arg2) {
    u32 fpsr = guest::cpu()->fpscr;
    float S1_1 = plane->float_0;
    float S3_1 = plane->float_8;
    float S0_1 = plane->float_c;
    float S2_1 = 0.0f;
    float S5_1 = S1_1 * arg1->v[0] + S3_1 * arg1->v[2];
    float S1_2 = S1_1 * arg2->float_0 + S3_1 * arg2->float_8 + S0_1;
    float S0_2 = S5_1 + S0_1;
    u32 fpsr_1 = fpsr & 0xfffffffu | vfp_cmpf(S1_2, S2_1);  // (from the original)
    if (S1_2 > S2_1) {
        fpsr_1 = fpsr_1 & 0xfffffffu | vfp_cmpf(S0_2, S2_1);  // (from the original)
        if (S0_2 < S2_1) {
            float S0_3 = -S0_2;
            guest::cpu()->s[0] = S0_3;
            guest::cpu()->s[1] = S1_2;
            Vec3__multiply_add(arg1.addr(), plane.addr(), arg1.addr());
            return;
        }
    }
    if (!(S1_2 < S2_1)) {
        guest::cpu()->r[1] = arg1.addr();
        guest::cpu()->s[0] = S0_2;
        guest::cpu()->s[1] = S1_2;
        return;
    }
    if (!(S0_2 > S2_1)) {
        guest::cpu()->r[1] = arg1.addr();
        guest::cpu()->s[0] = S0_2;
        guest::cpu()->s[1] = S1_2;
        return;
    }
    float S0_4 = -S0_2;
    guest::cpu()->s[0] = S0_4;
    guest::cpu()->s[1] = S1_2;
    Vec3__multiply_add(arg1.addr(), plane.addr(), arg1.addr());
}

}  // namespace d_0071cff8
GUEST_EXPORT(0x0071cff8, d_0071cff8::Plane__push_out);

// f_0071d0b8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether the member handler (+0xc, +0x10) is the one at 0x8793f4.
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

u32 handler_is_8793f4(gptr<Object_0071d0b8_0> arg0) {
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
GUEST_EXPORT(0x0071d0b8, d_0071d0b8::handler_is_8793f4);

// f_0071d108: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Bit 0 when the member handler (+0xc, +0x10) is the one at 0x879414, bit 1 when it is the one at 0x87940c.
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

u32 handler_is_87940c_or_879414(gptr<Object_0071d108_0> arg0) {
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
GUEST_EXPORT_FRAMED(0x0071d108, d_0071d108::handler_is_87940c_or_879414, 0x10);  // pushes {r4} first, as the original

// f_0071d1a4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether the member handler (+0xc, +0x10) is the one at 0x879404.
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

u32 handler_is_879404(gptr<Object_0071d1a4_0> arg0) {
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
GUEST_EXPORT(0x0071d1a4, d_0071d1a4::handler_is_879404);

// f_0071d2b0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether the low nibble of byte +1 is 1.
namespace d_0071d2b0 {

struct __attribute__((packed)) Object_0071d2b0_0 {
    u8 unknown_0[0x1];  // (not used here)
    u8 byte_1;
};
GUEST_OFFSET(Object_0071d2b0_0, byte_1, 0x1);


u32 low_nibble_of_byte_1_is_1(gptr<Object_0071d2b0_0> arg0) {
    u32 r0_1 = u32(arg0->byte_1) & 0xfu;  // (from the original)
    if (r0_1 != 1u) {
        r0_1 = 0u;
    }
    return r0_1;
}

}  // namespace d_0071d2b0
GUEST_EXPORT(0x0071d2b0, d_0071d2b0::low_nibble_of_byte_1_is_1);

// f_0071d2d4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Calls 001332d4 on the sound archive (+0xc of +0x144 of +0x10) with the arguments.
namespace d_0071d2d4 {

struct __attribute__((packed)) Object_0071d2d4_0 {
    u8 unknown_0[0x10];  // (not used here)
    u32 word_10;
};
GUEST_OFFSET(Object_0071d2d4_0, word_10, 0x10);

inline constexpr guest::Function<0x001332d4, u32(u32, u32, u32, u32)> Archive__read_file;

u32 sound_archive_call_1332d4(gptr<Object_0071d2d4_0> arg0) {
    u32 r0_1 = *gptr<u32>(arg0->word_10 + 0x144u) + 0xcu;  // (from the original)
    return Archive__read_file(r0_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0071d2d4
GUEST_EXPORT(0x0071d2d4, d_0071d2d4::sound_archive_call_1332d4);

// f_0071d2e4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether slot `index` (below 6) is set and its state (+0x2c, 24 bytes per slot) is 1 or 2.
namespace d_0071d2e4 {

inline constexpr guest::Function<0x0013c0e8, u32(u32, u32)> state_is_1_or_2;

u32 slot_of_6_is_active(u32 r0, u32 r1) {
    if (r1 >= 6u || *gptr<u32>(r0 + (r1 << 2) + 0x14u) == 0) {  // (from the original)
        guest::cpu()->r[1] = r1;
        return 0u;
    }
    u32 r1_1 = r1 * 3u;
    return state_is_1_or_2(r0 + (r1_1 << 3) + 0x2cu, r1_1);  // (from the original)
}

}  // namespace d_0071d2e4
GUEST_EXPORT(0x0071d2e4, d_0071d2e4::slot_of_6_is_active);

// f_0071d314: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether slot `index` (below 6; +0x14) is set.
namespace d_0071d314 {


u32 slot_of_6_is_set(u32 r0, u32 r1) {
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
GUEST_EXPORT(0x0071d314, d_0071d314::slot_of_6_is_set);

// f_0071d474: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The CRC-32 of the 0x29604 bytes after the checksum word.
namespace d_0071d474 {

inline constexpr guest::Function<0x003193e8, u32(u32, u32, u32, u32)> crc32;

u32 Block29608__crc(u32 block29608) {
    u32 r3_1 = ~0u;
    return crc32(block29608 + 4u, 0x29604u, r3_1, r3_1);  // (from the original)
}

}  // namespace d_0071d474
GUEST_EXPORT(0x0071d474, d_0071d474::Block29608__crc);

// f_0071d528: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether one of the 16 entries (0x7dd8 bytes) matches through 0071fce4.
namespace d_0071d528 {

inline constexpr guest::Function<0x0071fce4, u32(u32, u32, u32, u32)> DesignEntry__slot_flag_3;

u32 DesignBlock__has_entry(u32 design_block, u32 r1) {
    u32 r5 = design_block;
    u32 r6 = r1;
    u32 r4 = 0u;
    do {
        u32 r0_2 = DesignEntry__slot_flag_3(r5 + r4 * 0x7dd8u, r6, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        if (r0_2 != 0) {
            return 1u;
        }
        r4 += 1u;
        guest::preempt();
    } while (r4 < 0x10u);  // (from the original)
    return 0u;
}

}  // namespace d_0071d528
GUEST_EXPORT_FRAMED(0x0071d528, d_0071d528::DesignBlock__has_entry, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0071d5f8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether one of the 16 entries (0x7dd8 bytes) matches through 0071fc90.
namespace d_0071d5f8 {

inline constexpr guest::Function<0x0071fc90, u32(u32, u32, u32, u32)> DesignEntry__slot_flag_2;

u32 DesignBlock__has_entry_2(u32 design_block, u32 r1) {
    u32 r5 = design_block;
    u32 r6 = r1;
    u32 r4 = 0u;
    do {
        u32 r0_2 = DesignEntry__slot_flag_2(r5 + r4 * 0x7dd8u, r6, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        if (r0_2 != 0) {
            return 1u;
        }
        r4 += 1u;
        guest::preempt();
    } while (r4 < 0x10u);  // (from the original)
    return 0u;
}

}  // namespace d_0071d5f8
GUEST_EXPORT_FRAMED(0x0071d5f8, d_0071d5f8::DesignBlock__has_entry_2, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0071d664: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The block (1, 2 or 0) with the most free slots, by steps of 4; -1 when all are full.
namespace d_0071d664 {

inline constexpr guest::Function<0x0071d578, u32(u32, u32, u32, u32)> count_free_slots;

u32 DesignBlocks__least_full(u32 design_blocks, u32 park_entry) {
    u32 r0_2 = count_free_slots(design_blocks + 0x80308u, park_entry, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r4 = r0_2;
    u32 r0_4 = count_free_slots(design_blocks + 0xfe088u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r5 = r0_4;
    u32 r0_6 = count_free_slots(design_blocks + 0x2588u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    park_entry = r0_6;
    design_blocks = 0x10u;  // (from the original)
    do {
        design_blocks -= 4u;
        if (r4 > design_blocks) {
            return 1u;
        }
        if (r5 > design_blocks) {
            return 2u;
        }
        if (park_entry > design_blocks) {
            return 0u;
        }
        guest::preempt();
    } while (design_blocks != 0);
    return ~0u;
}

}  // namespace d_0071d664
GUEST_EXPORT_FRAMED(0x0071d664, d_0071d664::DesignBlocks__least_full, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0071d6e4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether one of the three blocks has an entry for the current slot (below 4).
namespace d_0071d6e4 {

inline constexpr guest::Function<0x002ff8b0, u32(u32, u32, u32, u32)> player_slot_byte;
inline constexpr guest::Function<0x0071d528, u32(u32, u32)> DesignBlock__has_entry;

u32 DesignBlocks__has_entry_for_slot(u32 design_blocks, u32 r1) {
    u32 r5 = design_blocks;
    u32 r0_1 = player_slot_byte(4u, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r6 = r0_1;
    if (!(r0_1 >= 4u)) {
        u32 r4 = 0u;
        do {
            u32 r0_3 = DesignBlock__has_entry(r5 + r4 * 0x7dd80u + 0x2588u, r6);  // (from the original)
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
GUEST_EXPORT_FRAMED(0x0071d6e4, d_0071d6e4::DesignBlocks__has_entry_for_slot, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0071d7b4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The CRC-32 of the 0x17be0c bytes after the checksum word.
namespace d_0071d7b4 {

inline constexpr guest::Function<0x003193e8, u32(u32, u32, u32, u32)> crc32;

u32 Block17be10__crc(u32 block17be10) {
    u32 r3_1 = ~0u;
    return crc32(block17be10 + 4u, 0x17be0cu, r3_1, r3_1);  // (from the original)
}

}  // namespace d_0071d7b4
GUEST_EXPORT(0x0071d7b4, d_0071d7b4::Block17be10__crc);

// f_0071d9c4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Stores the CRC-32 (MSB first) of the 0x28f0 bytes after the checksum word.
namespace d_0071d9c4 {

struct __attribute__((packed)) Block28f4 {
    u32 crc;
};
GUEST_OFFSET(Block28f4, crc, 0x0);

inline constexpr guest::Function<0x0047ea68, u32(u32, u32, u32)> crc32_msb_first;

u32 Block28f4__seal(gptr<Block28f4> block28f4) {
    u32 crc_2 = crc32_msb_first(block28f4.addr() + 4u, 0x28f0u, 0u);  // (from the original)
    block28f4->crc = crc_2;
    return crc_2;
}

}  // namespace d_0071d9c4
GUEST_EXPORT_FRAMED(0x0071d9c4, d_0071d9c4::Block28f4__seal, 0x4010);  // pushes {r4, lr} first, as the original

// f_0071d9e8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether the stored CRC-32 (MSB first) matches the 0x28f0 bytes after it.
namespace d_0071d9e8 {

struct __attribute__((packed)) Block28f4 {
    u32 word_0;
};
GUEST_OFFSET(Block28f4, word_0, 0x0);

inline constexpr guest::Function<0x0047ea68, u32(u32, u32, u32)> crc32_msb_first;

u32 Block28f4__is_sealed(gptr<Block28f4> block28f4) {
    u32 crc_2 = crc32_msb_first(block28f4.addr() + 4u, 0x28f0u, 0u);  // (from the original)
    u32 r1_1 = block28f4->word_0;
    guest::cpu()->r[1] = r1_1;
    return crc_2 == r1_1;
}

}  // namespace d_0071d9e8
GUEST_EXPORT_FRAMED(0x0071d9e8, d_0071d9e8::Block28f4__is_sealed, 0x4010);  // pushes {r4, lr} first, as the original

// f_0071e6a8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The slot value used when the save entry at +0x6ae54 has id 0x2004 (else slot 0).
namespace d_0071e6a8 {

inline constexpr guest::Function<0x002fb328, u32(u32, u32)> get_save_data;
inline constexpr guest::Function<0x002ff8b0, u32(u32, u32)> player_slot_byte;
inline constexpr guest::Function<0x00300904, u32(u32)> current_net_signed_value;
inline constexpr guest::Function<0x00303770, u32(u32)> player_record_for_slot;
inline constexpr guest::Function<0x003041c8, u32(u32)> kind_state_byte_1;

u32 special_slot_value(u32 r0, u32 r1) {
    u32 save_data_2 = get_save_data(r0, r1);
    u32 r1_1 = guest::cpu()->r[1];
    u32 r0_2 = save_data_2 + 0x6ae54u;  // (from the original)
    if (r0_2 != 0) {
        r1_1 = u32(*gptr<u16>(r0_2 + 0xeu)) - 0x2004u;  // (from the original)
        if (r1_1 == 0) {
            guest::cpu()->r[1] = r1_1;
            return 0u;
        }
    }
    u32 r0_3 = player_slot_byte(0u, r1_1);
    u32 player_record_2 = player_record_for_slot(r0_3);
    if (player_record_2 == 0) {
        return 0u;
    }
    if (s32(u32(*gptr<u8>(player_record_2 + 0x5701u)) << 0x1e) >= 0) {  // (from the original)
        return 0u;
    }
    u32 r0_5 = u32(*gptr<u8>(player_record_2 + 0x5712u)) << 0x1a;  // (from the original)
    if (s32(r0_5) >= 0) {
        return 0u;
    }
    u32 r0_6 = current_net_signed_value(r0_5);
    if (r0_6 == 0) {
        u32 r0_7 = kind_state_byte_1(r0_6);
        if (r0_7 != 0x60u) {  // (from the original)
            return 1u;
        }
    }
    if ((u32(*gptr<u8>(player_record_2 + 0x5713u)) & 1u) == 0) {  // (from the original)
        return 0u;
    }
    return 1u;
}

}  // namespace d_0071e6a8
GUEST_EXPORT_FRAMED(0x0071e6a8, d_0071e6a8::special_slot_value, 0x4010);  // pushes {r4, lr} first, as the original

// f_0071ec70: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether one of the four entries has a count above 0 (+0x210) or passes 007207d8.
namespace d_0071ec70 {

inline constexpr guest::Function<0x007207d8, u32(u32, u32, u32, u32)> EffectHandle__is_alive;

u32 has_pending_entry_of_4(u32 r0) {
    u32 r5 = r0;
    u32 r4 = 0u;
    do {
        if (s32(*gptr<u32>(r5 + (r4 << 2) + 0x210u)) <= 0) {  // (from the original)
            u32 r0_2 = EffectHandle__is_alive(r5 + r4 * 0x18u + 0x14u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
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
GUEST_EXPORT_FRAMED(0x0071ec70, d_0071ec70::has_pending_entry_of_4, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0071ecf0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The item of the recent stock at `index` (within 10 of its start +0x3ca0) from the current player's list (+0x6f10).
namespace d_0071ecf0 {

struct __attribute__((packed)) Object_0071ecf0_0 {
    u8 unknown_0[0x3ca0];  // (not used here)
    u32 word_3ca0;
};
GUEST_OFFSET(Object_0071ecf0_0, word_3ca0, 0x3ca0);

inline constexpr u32 current_player_data_address = 0x00aaf14cu;
inline guest::global<u32, 0x00aaf14c> current_player_data;
inline constexpr guest::Function<0x007201d0, u32(u32, u32)> ItemList40__is_set;

u32 recent_stock_item(gptr<Object_0071ecf0_0> arg0, u32 r1) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 r1_1 = 0;
    u32 r3_1 = arg0->word_3ca0;
    u32 r2_1 = *current_player_data;
    if (s32(r3_1) <= s32(r1)) {
        r1_1 = r3_1 + 0xau > r1 ? r1 - r3_1 : ~0u;  // (from the original)
    } else {
        r1_1 = ~0u;
    }
    u32 r1_2 = r1_1 + (*gptr<u32>(arg0.addr() + (*gptr<u32>(arg0.addr() + 0x185cu) << 2) + 0x1860u) - 1u) * 0xau;  // (from the original)
    frame.release();
    return ItemList40__is_set(r2_1 + 0x6f10u, r1_2);  // (from the original)
}

}  // namespace d_0071ecf0
GUEST_EXPORT(0x0071ecf0, d_0071ecf0::recent_stock_item);

// f_0071ed64: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether `index` is within the 10 entries from the window start (+0x3520).
namespace d_0071ed64 {

struct __attribute__((packed)) Object_0071ed64_0 {
    u8 unknown_0[0x3520];  // (not used here)
    u32 word_3520;
};
GUEST_OFFSET(Object_0071ed64_0, word_3520, 0x3520);


u32 index_in_window_10(gptr<Object_0071ed64_0> arg0, u32 r1) {
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
GUEST_EXPORT(0x0071ed64, d_0071ed64::index_in_window_10);

// f_0071ed90: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether `index` is within the 8 entries from the window start (+0x2780).
namespace d_0071ed90 {

struct __attribute__((packed)) Object_0071ed90_0 {
    u8 unknown_0[0x2780];  // (not used here)
    u32 word_2780;
};
GUEST_OFFSET(Object_0071ed90_0, word_2780, 0x2780);


u32 index_in_window_8(gptr<Object_0071ed90_0> arg0, u32 r1) {
    u32 r0_1 = arg0->word_2780;
    if (s32(r0_1) > s32(r1)) {
        return 0u;
    }
    return r0_1 + 8u > r1;
}

}  // namespace d_0071ed90
GUEST_EXPORT(0x0071ed90, d_0071ed90::index_in_window_8);

// f_0071edb8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The entry of `index` within the 8-entry window (+0x2780): from the object at 0x95c6d0 in ordinary scenes, else
// through 002d5770.
namespace d_0071edb8 {

struct __attribute__((packed)) Local_0071edb8_r4_1 {
    u32 word_0;
};
GUEST_OFFSET(Local_0071edb8_r4_1, word_0, 0x0);

inline constexpr u32 tour_instance_address = 0x0095c6d0u;
inline guest::global<u32, 0x0095c6d0> tour_instance;
inline constexpr guest::Function<0x002d5770, u32(u32, u32)> default_room_item;
inline constexpr guest::Function<0x002f74c8, u32(u32)> current_scene_id;
inline constexpr guest::Function<0x002f74e0, u32(u32, u32)> scene_has_flags;
inline constexpr guest::Function<0x00305f2c, u32(u32, u32)> read_global_object_byte;
inline constexpr guest::Function<0x0076e62c, u32(u32, u32)> word_ec_at;

u32 window_8_entry(u32 r0, u32 r1) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 r1_2 = 0;
    u32 r0_6 = 0;
    u32 r0_7 = 0;
    u32 r0_1 = read_global_object_byte(r0, r1);
    u32 r1_1 = guest::cpu()->r[1];
    gptr<Local_0071edb8_r4_1> r4_1 = gptr<Local_0071edb8_r4_1>(r0 + 0x2780u);  // (from the original)
    if (r0_1 != 3u) {
        u32 scene = current_scene_id(r0_1);
        u32 scene_flagged = scene_has_flags(0x40000u, scene);  // (from the original)
        r1_1 = guest::cpu()->r[1];
        if (scene_flagged == 0) {
            u32 r0_4 = r4_1->word_0;
            if (s32(r0_4) <= s32(r1)) {
                if (r0_4 + 8u > r1) {
                    r1_2 = r1 - r0_4;
                    r0_7 = *tour_instance;
                    frame.release();
                    return word_ec_at(r0_7, r1_2);
                }
            }
            r1_2 = ~0u;
            r0_7 = *tour_instance;
            frame.release();
            return word_ec_at(r0_7, r1_2);
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
    return default_room_item(r0_6, r1_1);
}

}  // namespace d_0071edb8
GUEST_EXPORT(0x0071edb8, d_0071edb8::window_8_entry);

// f_0071f27c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether the link object at 0xa22020 is idle (true) or, when busy, ready (00746ee4).
namespace d_0071f27c {

inline constexpr u32 request_pool_address = 0x00a22020u;
inline constexpr guest::Function<0x00746ee4, u32(u32, u32, u32, u32)> RequestPool__connection_state;
inline constexpr guest::Function<0x00746f8c, u32(u32, u32, u32, u32)> UnknownStateA22020__flag_144_without_flag_30;

u32 link_is_idle_or_ready() {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 r0_1 = UnknownStateA22020__flag_144_without_flag_30(request_pool_address, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0_1 == 0) {
        return 1u;
    }
    frame.release();
    return RequestPool__connection_state(request_pool_address, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0071f27c
GUEST_EXPORT(0x0071f27c, d_0071f27c::link_is_idle_or_ready);

// f_0071f2a8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The part at +0x28c when the state (+0x2e4) is 2, else 0.
namespace d_0071f2a8 {

struct __attribute__((packed)) Object_0071f2a8_0 {
    u8 unknown_0[0x2e4];  // (not used here)
    u8 byte_2e4;
};
GUEST_OFFSET(Object_0071f2a8_0, byte_2e4, 0x2e4);


u32 part_28c_if_state_2(gptr<Object_0071f2a8_0> arg0) {
    u32 r1_1 = arg0->byte_2e4;
    guest::cpu()->r[1] = r1_1;
    return r1_1 == 2u ? arg0.addr() + 0x28cu : 0u;  // (from the original)
}

}  // namespace d_0071f2a8
GUEST_EXPORT(0x0071f2a8, d_0071f2a8::part_28c_if_state_2);

// f_0071f2c4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The camping car's state (+0x88) when below 2, else 0.
namespace d_0071f2c4 {


u32 AcStrcCampingCar__state(gptr<AcStrcCampingCar> ac_strc_camping_car) {
    u32 r0_1 = ac_strc_camping_car->byte_88;
    if (r0_1 >= 2u) {
        r0_1 = 0u;
    }
    return r0_1;
}

}  // namespace d_0071f2c4
GUEST_EXPORT(0x0071f2c4, d_0071f2c4::AcStrcCampingCar__state);

// f_0071f644: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Builds the item whose id is at +4 of the record.
namespace d_0071f644 {

struct __attribute__((packed)) Object_0071f644_1 {
    u8 unknown_0[0x4];  // (not used here)
    u16 half_4;
};
GUEST_OFFSET(Object_0071f644_1, half_4, 0x4);

inline constexpr guest::Function<0x002fcbb0, u32(u32, u32, u32, u32)> construct_item;

u32 construct_item_from_half_4(u32 r0_unused, gptr<Object_0071f644_1> arg1) {
    u32 r1_1 = arg1->half_4;
    return construct_item(guest::cpu()->r[0], r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0071f644
GUEST_EXPORT(0x0071f644, d_0071f644::construct_item_from_half_4);

// f_0071f66c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Builds the item whose id is at +0x86 of the record.
namespace d_0071f66c {

struct __attribute__((packed)) Object_0071f66c_1 {
    u8 unknown_0[0x86];  // (not used here)
    u16 half_86;
};
GUEST_OFFSET(Object_0071f66c_1, half_86, 0x86);

inline constexpr guest::Function<0x002fcbb0, u32(u32, u32, u32, u32)> construct_item;

void construct_item_from_half_86(u32 r0_unused, gptr<Object_0071f66c_1> arg1) {
    u32 r1_1 = arg1->half_86;
    construct_item(guest::cpu()->r[0], r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0071f66c
GUEST_EXPORT(0x0071f66c, d_0071f66c::construct_item_from_half_86);

// f_0071f69c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// 1 or 2 when the slot's held object carries item 0x3356 or 0x3357, else 0.
namespace d_0071f69c {

struct __attribute__((packed)) Object_0071f69c_0 {
    u8 byte_0;
};
GUEST_OFFSET(Object_0071f69c_0, byte_0, 0x0);

inline constexpr guest::Function<0x002d0920, u32(u32, u32, u32, u32)> held_object_of_slot;
inline constexpr guest::Function<0x0030b6b8, u32(u32)> Item__number;

u32 held_object_item_kind(gptr<Object_0071f69c_0> arg0) {
    u32 r1 = 0;
    u32 r0_1 = arg0->byte_0;
    u32 held_object_2 = held_object_of_slot(r0_1, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    if (held_object_2 == 0) {
        return held_object_2;
    }
    u32 number_2 = Item__number(held_object_2 + ((u32(*gptr<u8>(held_object_2 + 0x24u)) & 1u) << 4) + 0x3cu);  // (from the original)
    u32 r0_5 = number_2 - 0x3356u;  // (from the original)
    if (r0_5 == 0) {
        return 1u;
    }
    return r0_5 == 1u ? 2u : 0u;
}

}  // namespace d_0071f69c
GUEST_EXPORT_FRAMED(0x0071f69c, d_0071f69c::held_object_item_kind, 0x4010);  // pushes {r4, lr} first, as the original

// f_0071f6e4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Attaches the slot's held object to its owner's hand (the owner's bone matrix); true when it did.
namespace d_0071f6e4 {

struct __attribute__((packed)) Object_0071f6e4_0 {
    u8 byte_0;
};
GUEST_OFFSET(Object_0071f6e4_0, byte_0, 0x0);

inline constexpr guest::Function<0x002d0920, u32(u32, u32, u32, u32)> held_object_of_slot;
inline constexpr guest::Function<0x005c132c, u32(u32, u32)> look_up_object_veneer;
inline constexpr guest::Function<0x006c1678, u32(u32, u32, u32)> HeldObject__attach_to_hand;
inline constexpr guest::Function<0x0070ab44, u32(u32, u32, u32, u32)> Model__joint_position;

u32 held_object_attach_to_hand(gptr<Object_0071f6e4_0> arg0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x34);  // the original's stack frame
    u32 r0_1 = arg0->byte_0;
    u32 held_object_2 = held_object_of_slot(r0_1, r1, r2, r3);
    if (held_object_2 != 0) {
        u32 r0_3 = arg0->byte_0;
        u32 object_veneer_2 = look_up_object_veneer(r0_3, 0u);
        if (object_veneer_2 != 0) {
            Model__joint_position(object_veneer_2 + 0x1b4u, frame.at(0).addr(), *gptr<u32>(object_veneer_2 + 0x25cu), 0u);  // (from the original)
            HeldObject__attach_to_hand(held_object_2, object_veneer_2, frame.at(0).addr());
            return 1u;
        }
    }
    return 0u;
}

}  // namespace d_0071f6e4
GUEST_EXPORT_FRAMED(0x0071f6e4, d_0071f6e4::held_object_attach_to_hand, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_0071f750: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Calls 006bead8 on the slot's held object; 0 without one.
namespace d_0071f750 {

struct __attribute__((packed)) Object_0071f750_0 {
    u8 byte_0;
};
GUEST_OFFSET(Object_0071f750_0, byte_0, 0x0);

inline constexpr guest::Function<0x002d0920, u32(u32, u32, u32, u32)> held_object_of_slot;
inline constexpr guest::Function<0x006bead8, u32(u32, u32)> set_position_73c;

u32 held_object_call_6bead8(gptr<Object_0071f750_0> arg0, u32 r1) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 r0_1 = arg0->byte_0;
    u32 held_object_2 = held_object_of_slot(r0_1, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    if (held_object_2 == 0) {
        return held_object_2;
    }
    frame.release();
    return set_position_73c(held_object_2, r1);
}

}  // namespace d_0071f750
GUEST_EXPORT(0x0071f750, d_0071f750::held_object_call_6bead8);

// f_0071f778: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Calls 006be888 on the slot's held object; 0 without one.
namespace d_0071f778 {

struct __attribute__((packed)) Object_0071f778_0 {
    u8 byte_0;
};
GUEST_OFFSET(Object_0071f778_0, byte_0, 0x0);

inline constexpr guest::Function<0x002d0920, u32(u32, u32, u32, u32)> held_object_of_slot;
inline constexpr guest::Function<0x006be888, u32(u32, u32, u32, u32)> FieldObject__has_item_kind;

u32 held_object_call_6be888(gptr<Object_0071f778_0> arg0) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 r0_1 = arg0->byte_0;
    u32 held_object_2 = held_object_of_slot(r0_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    if (held_object_2 == 0) {
        return held_object_2;
    }
    frame.release();
    return FieldObject__has_item_kind(held_object_2, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0071f778
GUEST_EXPORT(0x0071f778, d_0071f778::held_object_call_6be888);

// f_0071f798: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Copies the position (+0x644) of the slot's held object when asked; true when there is one.
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

struct __attribute__((packed)) HeldObject {
    u8 unknown_0[0x644];  // (not used here)
    u32 word_644;
    u32 word_648;
    u32 word_64c;
};
GUEST_OFFSET(HeldObject, word_644, 0x644);
GUEST_OFFSET(HeldObject, word_648, 0x648);
GUEST_OFFSET(HeldObject, word_64c, 0x64c);

inline constexpr guest::Function<0x002d0920, u32(u32, u32, u32, u32)> held_object_of_slot;

u32 held_object_position(gptr<Object_0071f798_0> arg0, gptr<Object_0071f798_1> arg1) {
    u32 r0_1 = arg0->byte_0;
    gptr<HeldObject> held_object_2 = gptr<HeldObject>(held_object_of_slot(r0_1, arg1.addr(), guest::cpu()->r[2], guest::cpu()->r[3]));
    if (held_object_2.addr() == 0) {
        return held_object_2.addr();
    }
    if (arg1.addr() == 0) {
        return 1u;
    }
    arg1->word_0 = held_object_2->word_644;
    u32 r1_2 = held_object_2->word_648;
    arg1->word_4 = r1_2;
    arg1->word_8 = held_object_2->word_64c;
    guest::cpu()->r[1] = r1_2;
    return 1u;
}

}  // namespace d_0071f798
GUEST_EXPORT_FRAMED(0x0071f798, d_0071f798::held_object_position, 0x4010);  // pushes {r4, lr} first, as the original

// f_0071f7d8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Copies the position of the slot's held object when asked; whether it is in state 4 (+0x640) with nothing attached
// (+0x668).
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

struct __attribute__((packed)) HeldObject {
    u8 unknown_0[0x640];  // (not used here)
    u8 byte_640;
    u8 unknown_641[0x3];  // (not used here)
    u32 word_644;
    u32 word_648;
    u32 word_64c;
};
GUEST_OFFSET(HeldObject, byte_640, 0x640);
GUEST_OFFSET(HeldObject, word_644, 0x644);
GUEST_OFFSET(HeldObject, word_648, 0x648);
GUEST_OFFSET(HeldObject, word_64c, 0x64c);

inline constexpr guest::Function<0x002d0920, u32(u32, u32, u32, u32)> held_object_of_slot;

u32 held_object_is_resting(gptr<Object_0071f7d8_0> arg0, gptr<Object_0071f7d8_1> arg1) {
    u32 r0_1 = arg0->byte_0;
    gptr<HeldObject> held_object_3 = gptr<HeldObject>(held_object_of_slot(r0_1, arg1.addr(), guest::cpu()->r[2], guest::cpu()->r[3]));
    u32 r1_1 = guest::cpu()->r[1];
    if (held_object_3.addr() != 0) {
        if (arg1.addr() != 0) {
            arg1->word_0 = held_object_3->word_644;
            r1_1 = held_object_3->word_648;
            arg1->word_4 = r1_1;
            arg1->word_8 = held_object_3->word_64c;
        }
        u32 r0_3 = arg0->byte_0;
        u32 held_object_4 = held_object_of_slot(r0_3, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1_1 = guest::cpu()->r[1];
        u32 zf_1 = held_object_4 == 0;
        if (!zf_1) {
            zf_1 = held_object_4 + 0x668u == 0;  // (from the original)
            held_object_4 = held_object_4 + 0x668u;  // (from the original)
        }
        if (!zf_1) {
            zf_1 = *gptr<u32>(held_object_4) == 0;
        }
        held_object_3 = gptr<HeldObject>(zf_1 && held_object_3->byte_640 == 4u);
    }
    guest::cpu()->r[1] = r1_1;
    return held_object_3.addr();
}

}  // namespace d_0071f7d8
GUEST_EXPORT_FRAMED(0x0071f7d8, d_0071f7d8::held_object_is_resting, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0071fc78: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Bit 2 of +0x7dd6.
namespace d_0071fc78 {

struct __attribute__((packed)) DesignEntry {
    u8 unknown_0[0x7dd6];  // (not used here)
    u8 byte_7dd6;
};
GUEST_OFFSET(DesignEntry, byte_7dd6, 0x7dd6);


u32 DesignEntry__flag_2(gptr<DesignEntry> design_entry) {
    return (u32(design_entry->byte_7dd6) & 4u) >> 2;
}

}  // namespace d_0071fc78
GUEST_EXPORT(0x0071fc78, d_0071fc78::DesignEntry__flag_2);

// f_0071fc90: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Bit 2 of slot `index` (below 4; +0x7dd2).
namespace d_0071fc90 {


u32 DesignEntry__slot_flag_2(u32 design_entry, u32 r1) {
    if (r1 >= 4u) {
        return 0u;
    }
    return (u32(*gptr<u8>(design_entry + r1 + 0x7dd2u)) & 4u) >> 2;  // (from the original)
}

}  // namespace d_0071fc90
GUEST_EXPORT(0x0071fc90, d_0071fc90::DesignEntry__slot_flag_2);

// f_0071fce4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Bit 3 of slot `index` (below 4; +0x7dd2).
namespace d_0071fce4 {


u32 DesignEntry__slot_flag_3(u32 design_entry, u32 r1) {
    if (r1 >= 4u) {
        return 0u;
    }
    return (u32(*gptr<u8>(design_entry + r1 + 0x7dd2u)) & 8u) >> 3;  // (from the original)
}

}  // namespace d_0071fce4
GUEST_EXPORT(0x0071fce4, d_0071fce4::DesignEntry__slot_flag_3);

// f_0071fd0c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether the entry's stamp (+0x7dc8) is before the other's.
namespace d_0071fd0c {

struct __attribute__((packed)) DesignEntry {
    u8 unknown_0[0x7dc8];  // (not used here)
    u32 word_7dc8;
};
GUEST_OFFSET(DesignEntry, word_7dc8, 0x7dc8);

struct __attribute__((packed)) Object_0071fd0c_1 {
    u8 unknown_0[0x7dc8];  // (not used here)
    u32 word_7dc8;
};
GUEST_OFFSET(Object_0071fd0c_1, word_7dc8, 0x7dc8);


u32 DesignEntry__is_older(gptr<DesignEntry> design_entry, gptr<Object_0071fd0c_1> arg1) {
    return !(design_entry->word_7dc8 >= arg1->word_7dc8);
}

}  // namespace d_0071fd0c
GUEST_EXPORT(0x0071fd0c, d_0071fd0c::DesignEntry__is_older);

// f_0071fe48: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Stores the CRC-32 (MSB first) of the 0x7f0 bytes after the checksum word.
namespace d_0071fe48 {

struct __attribute__((packed)) Block7f4 {
    u32 crc;
};
GUEST_OFFSET(Block7f4, crc, 0x0);

inline constexpr guest::Function<0x0047ea68, u32(u32, u32, u32)> crc32_msb_first;

u32 Block7f4__seal(gptr<Block7f4> block7f4) {
    u32 crc_2 = crc32_msb_first(block7f4.addr() + 4u, 0x7f0u, 0u);  // (from the original)
    block7f4->crc = crc_2;
    return crc_2;
}

}  // namespace d_0071fe48
GUEST_EXPORT_FRAMED(0x0071fe48, d_0071fe48::Block7f4__seal, 0x4010);  // pushes {r4, lr} first, as the original

// f_0071fe68: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether the stored CRC-32 (MSB first) matches the 0x7f0 bytes after it.
namespace d_0071fe68 {

struct __attribute__((packed)) Block7f4 {
    u32 word_0;
};
GUEST_OFFSET(Block7f4, word_0, 0x0);

inline constexpr guest::Function<0x0047ea68, u32(u32, u32, u32)> crc32_msb_first;

u32 Block7f4__is_sealed(gptr<Block7f4> block7f4) {
    u32 crc_2 = crc32_msb_first(block7f4.addr() + 4u, 0x7f0u, 0u);  // (from the original)
    u32 r1_1 = block7f4->word_0;
    guest::cpu()->r[1] = r1_1;
    return crc_2 == r1_1;
}

}  // namespace d_0071fe68
GUEST_EXPORT_FRAMED(0x0071fe68, d_0071fe68::Block7f4__is_sealed, 0x4010);  // pushes {r4, lr} first, as the original
