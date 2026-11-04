// Functions decompiled by tools/decomp (docs/decomp.md), each proved equal to the recompiled original (prove-cpp). The
// names come from games/acnl/names (tools/decomp/names.py); the others are generated (d_<address>::f_<address>,
// Object_<address>_<argument>, word_<offset>) and still to be chosen. Hexadecimal constants are the original's
// (addresses, offsets, sizes and ids as the game has them).
#include "guest/guest.hpp"
#include "recovered/structs.hpp"

#include <bit>

using guest::gptr;

// f_002900d4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Clears the pending flag (0x950710) or, when the tour is in state 1 or 3, resets it to state 0.
namespace d_002900d4 {

inline constexpr u32 tour_state_address = 0x00950708u;
inline guest::global<u8, 0x00950708> tour_state;
inline guest::global<u8, 0x00950709> tour_state_kind;
inline guest::global<u8, 0x00950710> tour_finished;

u32 TourState__reset_finished() {
    if (*tour_finished != 0) {
        *tour_finished = 0;
        guest::cpu()->r[1] = 0u;
        return tour_state_address;
    }
    u32 r2_1 = *tour_state;
    if (r2_1 == 3u || r2_1 == 1u) {
        *tour_state_kind = 0;
        *tour_state = 0;
    }
    guest::cpu()->r[1] = 0u;
    return tour_state_address;
}

}  // namespace d_002900d4
GUEST_EXPORT(0x002900d4, d_002900d4::TourState__reset_finished);

// f_00290108: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// While the tour plays (state 2, not done), counts one in the third counter (0x950720, at most 999).
namespace d_00290108 {

inline guest::global<u8, 0x00950708> tour_state;
inline guest::global<u8, 0x0095070d> tour_state_done;
inline guest::global<u32, 0x00950720> tour_counter_c;

void TourState__count_c() {
    if (*tour_state != 2u || *tour_state_done != 0) {
        return;
    }
    u32 r1_1 = *tour_counter_c + 1u;
    *tour_counter_c = r1_1;
    if (s32(r1_1) >= 0x3e8) {
        r1_1 = 0x3e7u;
    }
    *tour_counter_c = r1_1;
}

}  // namespace d_00290108
GUEST_EXPORT(0x00290108, d_00290108::TourState__count_c);

// f_00290584: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Finishes the tour (unless a network peer is busy): selects the BGM, shares the end template entry and marks it done.
namespace d_00290584 {

inline guest::global<u8, 0x0095070d> tour_state_done;
inline guest::global<u8, 0x0095070e> tour_state_score;
inline constexpr guest::Function<0x001cddec, u32(u32, u32)> set_top_bits_8;
inline constexpr guest::Function<0x001cdf04, u32(u32, u32)> copy_16_bytes_unless_null;
inline constexpr guest::Function<0x00300904, u32(u32, u32, u32, u32)> current_net_signed_value;
inline constexpr guest::Function<0x0030b6c4, u32(u32, u32, u32)> main_object_idle;
inline constexpr guest::Function<0x0058a17c, u32(u32)> bgm_set_selected;
inline constexpr guest::Function<0x0058c19c, u32(u32, u32, u32, u32)> return_constant_0x989bc0_;
inline constexpr guest::Function<0x0062512c, u32(u32, u32, u32)> apply_entry_template;
inline constexpr guest::Function<0x006268f8, u32(u32)> entry_template_address;

void TourState__finish(u32 r0_unused, u32 r1, u32 r2) {
    guest::StackFrame frame(0x14);  // the original's stack frame
    u32 r0_1 = *tour_state_score;
    if (r0_1 == 0) {
        r0_1 = current_net_signed_value(r0_1, r1, r2, guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        if (r0_1 != 0) {
            r0_1 = main_object_idle(r0_1, r1, r2);
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            if (r0_1 == 0) {
                return;
            }
        }
    }
    u32 r0_3 = bgm_set_selected(return_constant_0x989bc0_(r0_1, r1, r2, guest::cpu()->r[3]));
    u32 r0_4 = current_net_signed_value(r0_3, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0_4 != 0) {
        if (main_object_idle(r0_4, guest::cpu()->r[1], guest::cpu()->r[2]) != 0) {
            u32 r0_6 = entry_template_address(0x90u);
            copy_16_bytes_unless_null(frame.at(0).addr(), r0_6);
            set_top_bits_8(frame.at(0).addr(), 2u);
            apply_entry_template(0x90u, frame.at(0).addr(), 1u);
        }
    }
    *tour_state_done = 1;
}

}  // namespace d_00290584
GUEST_EXPORT_FRAMED(0x00290584, d_00290584::TourState__finish, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_002915b0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// While the tour plays (state 2, not done), counts one in the first counter (0x950718, at most 999).
namespace d_002915b0 {

inline guest::global<u8, 0x00950708> tour_state;
inline guest::global<u8, 0x0095070d> tour_state_done;
inline guest::global<u32, 0x00950718> tour_counter_a;

void TourState__count_a() {
    if (*tour_state != 2u || *tour_state_done != 0) {
        return;
    }
    u32 r1_1 = *tour_counter_a + 1u;
    *tour_counter_a = r1_1;
    if (s32(r1_1) >= 0x3e8) {
        r1_1 = 0x3e7u;
    }
    *tour_counter_a = r1_1;
}

}  // namespace d_002915b0
GUEST_EXPORT(0x002915b0, d_002915b0::TourState__count_a);

// f_00291990: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Updates the window's counters (its two values, or the result count in state 3).
namespace d_00291990 {

struct __attribute__((packed)) TourWindow {
    u8 unknown_0[0x680];  // (not used here)
    u32 word_680;
    u32 word_684;
    u32 word_688;
    u32 word_68c;
    u8 unknown_690[0x41b];  // (not used here)
    u8 byte_aab;
    u8 unknown_aac[0x1];  // (not used here)
    u8 byte_aad;
};
GUEST_OFFSET(TourWindow, word_680, 0x680);
GUEST_OFFSET(TourWindow, word_684, 0x684);
GUEST_OFFSET(TourWindow, word_688, 0x688);
GUEST_OFFSET(TourWindow, word_68c, 0x68c);
GUEST_OFFSET(TourWindow, byte_aab, 0xaab);
GUEST_OFFSET(TourWindow, byte_aad, 0xaad);

inline guest::global<u8, 0x00950708> tour_state;
inline constexpr guest::Function<0x00291a18, u32(u32, u32, u32, u32)> WordNumber__set_digits;

struct __attribute__((packed)) TourWindowUpdateCountersFrame {
    u32 word_0;
};
GUEST_OFFSET(TourWindowUpdateCountersFrame, word_0, 0x0);
GUEST_SIZE(TourWindowUpdateCountersFrame, 0x4);

u32 TourWindow__update_counters(gptr<TourWindow> tour_window, u32 r1_unused, u32 r2_unused, u32 r3) {
    guest::StackFrameOf<TourWindowUpdateCountersFrame> frame;  // the original's stack frame
    frame->word_0 = r3;
    frame->word_0 = tour_window->word_68c;
    u32 r3_1 = tour_window->word_688;
    u32 r1_1 = s8(tour_window->byte_aad);
    WordNumber__set_digits(tour_window.addr(), r1_1, 6u, r3_1);
    if (*tour_state == 3u && s8(tour_window->byte_aab) > 0) {
        frame->word_0 = tour_window->word_684;
        return WordNumber__set_digits(tour_window.addr(), 0x3cu, 6u, tour_window->word_680);
    }
    frame->word_0 = tour_window->word_684;
    u32 r1_3 = *gptr<s8>((tour_window.addr() + 0xa00u) + 0xacu);
    return WordNumber__set_digits(tour_window.addr(), r1_3, 6u, tour_window->word_680);
}

}  // namespace d_00291990
GUEST_EXPORT_FRAMED(0x00291990, d_00291990::TourWindow__update_counters, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_0029223c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The tour's result kind (0x950713) when the tour object shows it; 5 otherwise.
namespace d_0029223c {

inline constexpr u32 tour_state_address = 0x00950708u;
inline constexpr u32 tour_result_kind_value_address = 0x00950714u;
inline guest::global<u8, 0x00950713> tour_result_kind;
inline guest::global<u32, 0x00950714> tour_result_kind_value;

u32 TourState__result_kind() {
    u32 r0_1 = *tour_result_kind_value;
    if (r0_1 == 0) {
        return 5u;
    }
    if (*gptr<u8>(r0_1 + 0xb90u) != 0) {
        return *tour_result_kind;
    }
    return 5u;
}

}  // namespace d_0029223c
GUEST_EXPORT(0x0029223c, d_0029223c::TourState__result_kind);

// f_00292ccc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// While the tour plays (state 2, not done), counts one in the second counter (0x95071c, at most 999).
namespace d_00292ccc {

inline guest::global<u8, 0x00950708> tour_state;
inline guest::global<u8, 0x0095070d> tour_state_done;
inline guest::global<u32, 0x0095071c> tour_counter_b;

void TourState__count_b() {
    if (*tour_state != 2u || *tour_state_done != 0) {
        return;
    }
    u32 r1_1 = *tour_counter_b + 1u;
    *tour_counter_b = r1_1;
    if (s32(r1_1) >= 0x3e8) {
        r1_1 = 0x3e7u;
    }
    *tour_counter_b = r1_1;
}

}  // namespace d_00292ccc
GUEST_EXPORT(0x00292ccc, d_00292ccc::TourState__count_b);

// f_00292d08: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Resets the tour to state 0 and marks it done.
namespace d_00292d08 {

inline constexpr u32 tour_state_address = 0x00950708u;
inline guest::global<u8, 0x00950708> tour_state;
inline guest::global<u8, 0x00950709> tour_state_kind;
inline guest::global<u8, 0x0095070d> tour_state_done;

u32 TourState__abort() {
    *tour_state_kind = 0;
    *tour_state = 0;
    *tour_state_done = 1;
    guest::cpu()->r[1] = 0u;
    return tour_state_address;
}

}  // namespace d_00292d08
GUEST_EXPORT(0x00292d08, d_00292d08::TourState__abort);

// f_00292d28: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// True when the tour ended (state 3) with points and the town's tour flags allow a reward not claimed yet.
namespace d_00292d28 {

inline guest::global<u8, 0x00950708> tour_state;
inline guest::global<u8, 0x0095070d> tour_state_done;
inline guest::global<u32, 0x00950718> tour_counter_a;
inline constexpr guest::Function<0x002fb328, u32(u32)> get_save_data;

u32 TourState__can_claim_reward(u32 r0) {
    u32 save_data = get_save_data(r0);
    u32 r1_1 = save_data + 0x6feb4u;
    if (*tour_state != 3u || s32(*tour_counter_a) <= 0 || *tour_state_done != 0) {
        guest::cpu()->r[1] = r1_1;
        return 0u;
    }
    u32 r0_2 = *gptr<u8>(r1_1);
    if ((r0_2 & 8u) == 0) {
        guest::cpu()->r[1] = r1_1;
        return 0u;
    }
    if ((r0_2 & 0x40u) == 0) {
        guest::cpu()->r[1] = r1_1;
        return 1u;
    }
    guest::cpu()->r[1] = r1_1;
    return 0u;
}

}  // namespace d_00292d28
GUEST_EXPORT_FRAMED(0x00292d28, d_00292d28::TourState__can_claim_reward, 0x4010);  // pushes {r4, lr} first, as the original

// f_00292dbc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Sets the tour's result kind (marking it set).
namespace d_00292dbc {

inline constexpr u32 tour_state_address = 0x00950708u;
inline guest::global<u8, 0x00950712> tour_result_kind_set;
inline guest::global<u8, 0x00950713> tour_result_kind;

void TourState__set_result_kind(u32 tour_state) {
    if (*tour_result_kind_set == 0) {
        *tour_result_kind_set = 1;
        *tour_result_kind = u8(tour_state);
        guest::cpu()->r[1] = tour_state_address;
        return;
    }
    if (tour_state != *tour_result_kind) {
        *tour_result_kind = u8(tour_state);
    }
    guest::cpu()->r[1] = tour_state_address;
}

}  // namespace d_00292dbc
GUEST_EXPORT(0x00292dbc, d_00292dbc::TourState__set_result_kind);

// f_00292e30: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Shows or hides the window's two panes and marks it changed.
namespace d_00292e30 {

struct __attribute__((packed)) TourWindow {
    u8 unknown_0[0x18e];  // (not used here)
    u8 byte_18e;
    u8 unknown_18f[0x14b];  // (not used here)
    u8 byte_2da;
    u8 unknown_2db[0x40d];  // (not used here)
    u32 word_6e8;
    u32 word_6ec;
};
GUEST_OFFSET(TourWindow, byte_18e, 0x18e);
GUEST_OFFSET(TourWindow, byte_2da, 0x2da);
GUEST_OFFSET(TourWindow, word_6e8, 0x6e8);
GUEST_OFFSET(TourWindow, word_6ec, 0x6ec);

inline guest::global<u8, 0x00950708> tour_state;

void TourWindow__set_visible(gptr<TourWindow> tour_window, u32 r1) {
    *gptr<u8>(tour_window->word_6e8 + 0xb4u) = u8(r1 == 0 ? 0u : 0xffu);
    *gptr<u8>(tour_window->word_6ec + 0xb4u) = u8(r1 == 0 ? 0u : 0xffu);
    if (*tour_state == 0) {
        tour_window->byte_18e = 1;
    } else {
        tour_window->byte_2da = 1;
    }
    guest::cpu()->r[1] = 1u;
}

}  // namespace d_00292e30
GUEST_EXPORT(0x00292e30, d_00292e30::TourWindow__set_visible);

// f_00292fe4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The tour's extra value (0x950724) in state 4; -1 otherwise.
namespace d_00292fe4 {

inline guest::global<u8, 0x00950708> tour_state;
inline guest::global<u32, 0x00950724> global_00950724;

u32 TourState__extra_value() {
    u32 r1_1 = *tour_state;
    u32 r0_1 = r1_1 == 4u ? *global_00950724 : ~0u;
    guest::cpu()->r[1] = r1_1;
    return r0_1;
}

}  // namespace d_00292fe4
GUEST_EXPORT(0x00292fe4, d_00292fe4::TourState__extra_value);

// f_00293000: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Ends the tour (unless a network peer is busy): shares the end template and, with a score in state 3, reports it and
// stops its sound; true when it did.
namespace d_00293000 {

inline constexpr u32 tour_state_address = 0x00950708u;
inline constexpr u32 tour_counter_a_address = 0x00950718u;
inline guest::global<u8, 0x00950708> tour_state;
inline guest::global<u8, 0x00950709> tour_state_kind;
inline guest::global<u8, 0x0095070d> tour_state_done;
inline guest::global<u8, 0x0095070e> tour_state_score;
inline guest::global<u32, 0x00950718> tour_counter_a;
inline constexpr guest::Function<0x001cddec, u32(u32, u32)> set_top_bits_8;
inline constexpr guest::Function<0x001cdf04, u32(u32, u32)> copy_16_bytes_unless_null;
inline constexpr guest::Function<0x00300904, u32(u32, u32, u32, u32)> current_net_signed_value;
inline constexpr guest::Function<0x0030b6c4, u32(u32, u32, u32)> main_object_idle;
inline constexpr guest::Function<0x0058d3b4, u32(u32)> stop_current_sound_effect;
inline constexpr guest::Function<0x0060be28, u32(u32, u32)> notify_request;
inline constexpr guest::Function<0x0062512c, u32(u32, u32, u32)> apply_entry_template;
inline constexpr guest::Function<0x006268f8, u32(u32)> entry_template_address;

u32 TourState__end_with_score(u32 r0_unused, u32 r1, u32 r2, float S0) {
    guest::StackFrame frame(0x14);  // the original's stack frame
    u32 r0_1 = *tour_state_score;
    if (r0_1 == 0) {
        r0_1 = current_net_signed_value(r0_1, r1, r2, guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        S0 = guest::cpu()->s[0];
        if (r0_1 != 0) {
            r0_1 = main_object_idle(r0_1, r1, r2);
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            S0 = guest::cpu()->s[0];
            if (r0_1 == 0) {
                return r0_1;
            }
        }
    }
    guest::cpu()->s[0] = S0;
    u32 r0_2 = current_net_signed_value(r0_1, r1, r2, guest::cpu()->r[3]);
    if (r0_2 != 0) {
        if (main_object_idle(r0_2, guest::cpu()->r[1], guest::cpu()->r[2]) != 0) {
            u32 r0_4 = entry_template_address(0x90u);
            copy_16_bytes_unless_null(frame.at(0).addr(), r0_4);
            set_top_bits_8(frame.at(0).addr(), 2u);
            apply_entry_template(0x90u, frame.at(0).addr(), 1u);
        }
    }
    u32 r1_4 = *tour_state;
    if (r1_4 == 3u) {
        r1_4 = *tour_counter_a;
        if (s32(r1_4) > 0) {
            *tour_state_kind = 0;
            notify_request(0x22u, r1_4);
            float S0_5 = 0.0f;
            guest::cpu()->s[0] = S0_5;
            stop_current_sound_effect(0x10004a3u);
            *tour_state_done = 1;
            return 1u;
        }
    }
    *tour_state_kind = 0;
    guest::cpu()->r[1] = r1_4;
    return 0u;
}

}  // namespace d_00293000
GUEST_EXPORT_FRAMED(0x00293000, d_00293000::TourState__end_with_score, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_00293258: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Applies the template entry 0x90 after updating it.
namespace d_00293258 {

inline constexpr guest::Function<0x001cdeac, u32(u32)> Material__refresh_flags;
inline constexpr guest::Function<0x001cdf04, u32(u32, u32)> copy_16_bytes_unless_null;
inline constexpr guest::Function<0x0062512c, u32(u32, u32, u32)> apply_entry_template;
inline constexpr guest::Function<0x006268f8, u32(u32, u32, u32, u32)> entry_template_address;

void apply_entry_template_90(u32 r0_unused, u32 r1, u32 r2) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 r0_1 = entry_template_address(0x90u, r1, r2, guest::cpu()->r[3]);
    copy_16_bytes_unless_null(frame.at(0).addr(), r0_1);
    Material__refresh_flags(frame.at(0).addr());
    apply_entry_template(0x90u, frame.at(0).addr(), 1u);
}

}  // namespace d_00293258
GUEST_EXPORT_FRAMED(0x00293258, d_00293258::apply_entry_template_90, 0x4010);  // pushes {r4, lr} first, as the original

// f_00293298: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Schedules the next tour (by the hour) and reports it.
namespace d_00293298 {

struct __attribute__((packed)) Now {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Now, word_0, 0x0);
GUEST_OFFSET(Now, word_4, 0x4);
GUEST_OFFSET(Now, word_8, 0x8);

inline constexpr u32 tour_counter_a_address = 0x00950718u;
inline constexpr u32 tour_schedule_address = 0x00997fbcu;
inline constexpr u32 tour_schedule_kind_address = 0x00997fc4u;
inline constexpr u32 tour_schedule_next_address = 0x00997fc8u;
inline guest::global<u8, 0x00950708> tour_state;
inline guest::global<u8, 0x00950709> tour_state_kind;
inline guest::global<u8, 0x0095070e> tour_state_score;
inline guest::global<u32, 0x00950718> tour_counter_a;
inline guest::global<u32, 0x0095071c> tour_counter_b;
inline guest::global<u32, 0x00997fbc> tour_schedule;
inline guest::global<u32, 0x00997fc0> tour_schedule_b;
inline guest::global<u32, 0x00997fc4> tour_schedule_kind;
inline guest::global<u32, 0x00997fc8> tour_schedule_next;
inline guest::global<u32, 0x00997fcc> tour_schedule_c;
inline guest::global<u32, 0x00997fd0> tour_schedule_d;
inline constexpr guest::Function<0x00114af1, u32(u32, u32, u32, u32)> read_value_105bf5;
inline constexpr guest::Function<0x002fb378, u32(u32, u32)> game_time_now;
inline constexpr guest::Function<0x00300904, u32(u32, u32, u32, u32)> current_net_signed_value;
inline constexpr guest::Function<0x0030b6c4, u32(u32, u32, u32, u32)> main_object_idle;
inline constexpr guest::Function<0x0056cc38, u32(u32, u32, u32, u32)> TimeStamp__add_hours;
inline constexpr guest::Function<0x0056cce4, u32(u32, u32)> TimeStamp__set_hour;
inline constexpr guest::Function<0x0056ce84, u32(u32, u32)> TimeStamp__set_minute;
inline constexpr guest::Function<0x0056cedc, u32(u32, u32)> TimeStamp__set_second;
inline constexpr guest::Function<0x0058d3b4, u32(u32, u32, u32, u32)> stop_current_sound_effect;
inline constexpr guest::Function<0x0060be28, u32(u32, u32, u32, u32)> notify_request;

u32 TourState__schedule_next(u32 r0_unused, u32 r1, u32 r2, u32 r3, float S0) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 r0_3 = 0;
    u32 r0_1 = *tour_state_score;
    if (r0_1 == 0) {
        u32 r0_2 = current_net_signed_value(r0_1, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        S0 = guest::cpu()->s[0];
        if (r0_2 != 0) {
            r0_3 = main_object_idle(r0_2, r1, r2, r3);
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            S0 = guest::cpu()->s[0];
            if (r0_3 == 0) {
                return r0_3;
            }
        }
    }
    r0_3 = *tour_state;
    if (r0_3 == 0 || r0_3 == 2u) {
        *tour_state_kind = 3;
        u32 r0_4 = *tour_state_score;
        if (r0_4 == 0) {
            guest::cpu()->s[0] = S0;
            u32 r0_5 = read_value_105bf5(r0_4, r1, r2, r3);
            *tour_counter_a = r0_5;
            *tour_counter_b = 0;
            gptr<Now> now_2 = gptr<Now>(game_time_now(r0_5, tour_counter_a_address));
            u32 r1_1 = now_2->word_4;
            u32 r2_2 = now_2->word_0;
            u32 r0_7 = now_2->word_8;
            *tour_schedule_b = r1_1;
            *tour_schedule = r2_2;
            *tour_schedule_c = r1_1;
            *tour_schedule_kind = r0_7;
            *tour_schedule_next = r2_2;
            *tour_schedule_d = r0_7;
            TimeStamp__add_hours(tour_schedule_address, 1u, r2_2, tour_schedule_kind_address);
            if (*tour_counter_a != 0) {
                frame.release();
                return notify_request(0x21u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
            }
            TimeStamp__set_hour(tour_schedule_address, 0u);
            TimeStamp__set_minute(tour_schedule_address, 0u);
            TimeStamp__set_second(tour_schedule_address, 0u);
            notify_request(0x23u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
            float S0_7 = 0.0f;
            guest::cpu()->s[0] = S0_7;
            frame.release();
            return stop_current_sound_effect(0x10004a3u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
        }
        u32 r1_5 = *tour_schedule_b;
        u32 r2_7 = *tour_schedule_kind;
        *tour_schedule_next = *tour_schedule;
        *tour_schedule_c = r1_5;
        *tour_schedule_d = r2_7;
        guest::cpu()->s[0] = S0;
        TimeStamp__add_hours(tour_schedule_next_address, ~0u, r2_7, r3);
        r1 = guest::cpu()->r[1];
        S0 = guest::cpu()->s[0];
        r0_3 = tour_schedule_next_address;
        *tour_counter_a = 0;
        *tour_counter_b = 0;
    }
    guest::cpu()->r[1] = r1;
    guest::cpu()->s[0] = S0;
    return r0_3;
}

}  // namespace d_00293298
GUEST_EXPORT(0x00293298, d_00293298::TourState__schedule_next);

// f_002933cc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Marks the town's tour reward claimed, resets the tour and, when idle in a session, shares the cleared template.
namespace d_002933cc {

struct __attribute__((packed)) Local_002933cc_r0_2 {
    u8 byte_0;
};
GUEST_OFFSET(Local_002933cc_r0_2, byte_0, 0x0);

inline guest::global<u8, 0x00950708> tour_state;
inline guest::global<u8, 0x00950709> tour_state_kind;
inline guest::global<u8, 0x0095070d> tour_state_done;
inline constexpr guest::Function<0x001cdf04, u32(u32, u32)> copy_16_bytes_unless_null;
inline constexpr guest::Function<0x001cdf18, u32(u32)> PackedCounts__clear_top_and_23_26;
inline constexpr guest::Function<0x002fae84, u32(u32, u32, u32, u32)> get_data_base;
inline constexpr guest::Function<0x00300904, u32(u32, u32)> current_net_signed_value;
inline constexpr guest::Function<0x0030b6c4, u32(u32)> main_object_idle;
inline constexpr guest::Function<0x0062512c, u32(u32, u32, u32)> apply_entry_template;
inline constexpr guest::Function<0x006268f8, u32(u32)> entry_template_address;

u32 TourState__claim_reward(u32 r0, u32 r1, u32 r2) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 data_base = get_data_base(r0, r1, r2, guest::cpu()->r[3]);
    gptr<Local_002933cc_r0_2> r0_2 = gptr<Local_002933cc_r0_2>(data_base - 0xfff901ccu);
    u32 r1_1 = r0_2->byte_0;
    if ((r1_1 & 8u) != 0) {
        r1_1 |= 0x40u;
        r0_2->byte_0 = u8(r1_1);
    }
    u32 r0_3 = current_net_signed_value(r0_2.addr(), r1_1);
    if (r0_3 != 0) {
        u32 r0_4 = main_object_idle(r0_3);
        if (r0_4 != 0) {
            *tour_state_kind = 0;
            *tour_state = 0;
            *tour_state_done = 1;
            u32 r0_5 = entry_template_address(0x90u);
            copy_16_bytes_unless_null(frame.at(0).addr(), r0_5);
            PackedCounts__clear_top_and_23_26(frame.at(0).addr());
            r0_4 = apply_entry_template(0x90u, frame.at(0).addr(), 1u);
        }
        return r0_4;
    }
    *tour_state_kind = 0;
    *tour_state = 0;
    *tour_state_done = 1;
    return r0_3;
}

}  // namespace d_002933cc
GUEST_EXPORT_FRAMED(0x002933cc, d_002933cc::TourState__claim_reward, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_002941f0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Updates the tour's state machine and its sounds.
namespace d_002941f0 {

struct __attribute__((packed)) TourStateUpdateArg0 {
    u8 unknown_0[0xaab];  // (not used here)
    u8 byte_aab;
    u8 byte_aac;
    u8 byte_aad;
};
GUEST_OFFSET(TourStateUpdateArg0, byte_aab, 0xaab);
GUEST_OFFSET(TourStateUpdateArg0, byte_aac, 0xaac);
GUEST_OFFSET(TourStateUpdateArg0, byte_aad, 0xaad);

inline constexpr u32 tour_state_address = 0x00950708u;
inline guest::global<u8, 0x00950708> tour_state;
inline guest::global<u8, 0x0095070f> tour_state_updated;
inline constexpr guest::Function<0x0058d3b4, u32(u32, u32, u32, u32)> stop_current_sound_effect;

void TourState__update(gptr<TourStateUpdateArg0> arg0, float S0) {
    u32 r1_2 = 0;
    u32 r0_2 = 0;
    u32 r1_3 = 0;
    u32 zf_1 = 0;
    u32 r0_1 = s8(arg0->byte_aad);
    u32 r1_1 = arg0->byte_aab == 0 ? u32(s8(arg0->byte_aac)) : 0x3cu;
    u32 r3_1 = *tour_state;
    if (r3_1 != 3u) {
        if (r1_1 != 0 || r0_1 != 0) {
            goto L_294230;
        }
        guest::cpu()->r[1] = r1_1;
        return;
    }
    if (r1_1 == 0x3cu) {
        guest::cpu()->r[1] = r1_1;
        return;
    }
L_294230:;
    if (r3_1 != 3u) {
        if (r1_1 != 0) {
            if (r1_1 == 1u && r0_1 == 0) {
                if (r3_1 == 4u) {
                    guest::cpu()->r[1] = r1_1;
                    guest::cpu()->s[0] = S0;
                    return;
                }
                *tour_state_updated = 1;
                float S0_1 = 0.0f;
                guest::cpu()->s[0] = S0_1;
                stop_current_sound_effect(0x10004a0u, 1u, tour_state_address, r3_1);
                return;
            }
        } else if (r0_1 <= 0xau) {
            float S0_2 = 0.0f;
            guest::cpu()->s[0] = S0_2;
            stop_current_sound_effect(0x10004a1u, r1_1, tour_state_address, r3_1);
            return;
        }
        if (r3_1 != 4u) {
            if (r3_1 == 3u) {
                goto L_2942b8;
            }
            goto L_2942e0;
        }
        if (r1_1 != 0 || r0_1 < 0x18u || r0_1 > 0x1du) {
            goto L_2942e0;
        }
        r1_2 = 0x856bccu;
        r0_2 = *gptr<u32>(r1_2 + (r0_1 << 2) - 0x60u);
        goto L_294314;
    }
L_2942b8:;
    if (r1_1 == 0 && r0_1 != 0 && r0_1 <= 6u) {
        r1_2 = 0x856be4u;
        r0_2 = *gptr<u32>(r1_2 + (r0_1 << 2) - 4u);
        goto L_294314;
    }
L_2942e0:;
    r1_3 = *tour_state_updated;
    if (r1_3 == 0 || r0_1 < 0x36u || r0_1 > 0x3bu) {
        guest::cpu()->r[1] = r1_3;
        guest::cpu()->s[0] = S0;
        return;
    }
    zf_1 = r0_1 == 0x36u;
    r1_2 = (r0_1 << 2) + 0x856bfcu;
    r0_2 = *gptr<u32>(r1_2 - 0xd8u);
    if (zf_1) {
        r1_2 = 0u;
        *tour_state_updated = u8(r1_2);
    }
L_294314:;
    if (r0_2 == 0) {
        guest::cpu()->r[1] = r1_2;
        guest::cpu()->s[0] = S0;
        return;
    }
    float S0_3 = 0.0f;
    guest::cpu()->s[0] = S0_3;
    stop_current_sound_effect(r0_2, r1_2, tour_state_address, r3_1);
}

}  // namespace d_002941f0
GUEST_EXPORT(0x002941f0, d_002941f0::TourState__update);

// f_00294340: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Clears the started flag (0x950709) in state 1.
namespace d_00294340 {

inline constexpr u32 tour_state_address = 0x00950708u;
inline guest::global<u8, 0x00950708> tour_state;
inline guest::global<u8, 0x00950709> tour_state_kind;

u32 TourState__clear_started() {
    u32 r1_1 = *tour_state;
    if (r1_1 == 1u) {
        r1_1 = 0u;
        *tour_state_kind = u8(r1_1);
    }
    guest::cpu()->r[1] = r1_1;
    return tour_state_address;
}

}  // namespace d_00294340
GUEST_EXPORT(0x00294340, d_00294340::TourState__clear_started);

// f_002947ac: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Starts loading the time and bells window's layout archive with the layout allocator.
namespace d_002947ac {

inline constexpr u32 vtable_sead__SafeStringBase_char__rec = 0x009047f8u;
inline constexpr u32 time_bells_window_layout_address = 0x00997fd4u;
inline constexpr guest::Function<0x00569dc4, u32(u32, u32, u32, u32)> layout_allocator_8;
inline constexpr guest::Function<0x0056a974, u32(u32, u32, u32, u32)> load_split_start;

struct __attribute__((packed)) LoadTimeBellsWindowLayoutFrame {
    u32 object_0_vtable;
    u32 word_4;
    u8 unknown_8[0x4];  // (not read or written by name)
};
GUEST_OFFSET(LoadTimeBellsWindowLayoutFrame, object_0_vtable, 0x0);
GUEST_OFFSET(LoadTimeBellsWindowLayoutFrame, word_4, 0x4);
GUEST_SIZE(LoadTimeBellsWindowLayoutFrame, 0xc);

u32 load_time_bells_window_layout(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<LoadTimeBellsWindowLayoutFrame> frame;  // the original's stack frame
    u32 r0_1 = layout_allocator_8(r0, r1, r2, r3);
    frame->word_4 = 0x2947e4;
    frame->object_0_vtable = vtable_sead__SafeStringBase_char__rec;
    return load_split_start(time_bells_window_layout_address, frame.at(0).addr(), *gptr<u32>(r0_1 + 4u), 0x80u);
}

}  // namespace d_002947ac
GUEST_EXPORT_FRAMED(0x002947ac, d_002947ac::load_time_bells_window_layout, 0x4000);  // pushes {lr} first, as the original

// f_002958ac: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Destroys the time and bells window: its money display, layouts and archive reader.
namespace d_002958ac {

inline constexpr u32 vtable_BsTimeBelWindow = 0x008f076cu;
inline constexpr u32 vtable_BsTimeBelWindow_at_14 = 0x008f07b4u;
inline constexpr u32 vtable_BsTimeBelWindow__MoneyProc = 0x008fa930u;
inline constexpr guest::Function<0x002f76ad, u32(u32, u32, u32, u32)> destroy_array_elements;
inline constexpr guest::Function<0x00521ae0, u32(u32, u32)> do_nothing_00521ae0;
inline constexpr guest::Function<0x00567ef0, u32(u32)> ssys__ma__lyt__ArcResAccReader__destructor;
inline constexpr guest::Function<0x0056988c, u32(u32, u32, u32, u32)> destroy_animation;
inline constexpr guest::Function<0x005bf744, u32(u32)> Layout__destructor;

u32 BsTimeBelWindow__destructor(gptr<BsTimeBelWindow> bs_time_bel_window, u32 r1_unused, u32 r2_unused, u32 r3) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    bs_time_bel_window->bs_time_bel_window_vtable = vtable_BsTimeBelWindow_at_14;
    bs_time_bel_window->vtable = vtable_BsTimeBelWindow;
    bs_time_bel_window->money_proc_vtable = vtable_BsTimeBelWindow__MoneyProc;
    u32 r0_1 = bs_time_bel_window.addr() + 0xbe8u;
    destroy_animation(r0_1, vtable_BsTimeBelWindow, vtable_BsTimeBelWindow__MoneyProc, r3);
    destroy_animation(r0_1 - 0x28u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    destroy_animation(r0_1 - 0x50u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    destroy_array_elements(r0_1 - 0x264u, 0x295544u, 0x48u, 4u);
    destroy_array_elements(r0_1 - 0x4ecu, 0x295544u, 0x48u, 9u);
    destroy_animation(r0_1 - 0x5acu, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    destroy_animation(r0_1 - 0x5d4u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    destroy_animation(r0_1 - 0x5fcu, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    destroy_animation(r0_1 - 0x624u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    destroy_animation(r0_1 - 0x64cu, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    destroy_animation(r0_1 - 0x674u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    destroy_animation(r0_1 - 0x69cu, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_18 = Layout__destructor(Layout__destructor(ssys__ma__lyt__ArcResAccReader__destructor(r0_1 - 0x8e4u) - 0x14cu) - 0x14cu);
    frame.release();
    return do_nothing_00521ae0(r0_18 - 0x6cu, guest::cpu()->r[1]);
}

}  // namespace d_002958ac
GUEST_EXPORT(0x002958ac, d_002958ac::BsTimeBelWindow__destructor);

// f_0029598c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Loads the cherry blossom shader (on the weather heap).
namespace d_0029598c {

inline constexpr u32 weather_heap_address = 0x00952c48u;
inline constexpr u32 cherry_shader_address = 0x009984ccu;
inline guest::global<u32, 0x00952c48> weather_heap;
inline constexpr guest::Function<0x00125b38, u32(u32, u32, u32, u32)> FileLoader__load;

u32 load_cherry_shader() {
    return FileLoader__load(cherry_shader_address, 0x2959a8u, *weather_heap, 0x80u);
}

}  // namespace d_0029598c
GUEST_EXPORT(0x0029598c, d_0029598c::load_cherry_shader);

// f_00297724: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Constructs an item stock change window: a rental change window with ten item slots and an item drag icon
// group, its layout names and the stock state.
namespace d_00297724 {

struct __attribute__((packed)) Local_00297724_r0_1 {
    u32 vtable;
    u8 unknown_4[0xa3c];  // (not used here)
    u32 cabinet_vtable;
};
GUEST_OFFSET(Local_00297724_r0_1, vtable, 0x0);
GUEST_OFFSET(Local_00297724_r0_1, cabinet_vtable, 0xa40);

struct __attribute__((packed)) Local_00297724_r0_5 {
    u32 vtable;
    u8 unknown_4[0x20];  // (not used here)
    u32 word_24;
    u8 unknown_28[0xa18];  // (not used here)
    u32 change_stock_item_vtable;
    u8 unknown_a44[0x20];  // (not used here)
    u32 word_a64;
    u32 word_a68;
    u32 word_a6c;
};
GUEST_OFFSET(Local_00297724_r0_5, vtable, 0x0);
GUEST_OFFSET(Local_00297724_r0_5, word_24, 0x24);
GUEST_OFFSET(Local_00297724_r0_5, change_stock_item_vtable, 0xa40);
GUEST_OFFSET(Local_00297724_r0_5, word_a64, 0xa64);
GUEST_OFFSET(Local_00297724_r0_5, word_a68, 0xa68);
GUEST_OFFSET(Local_00297724_r0_5, word_a6c, 0xa6c);

inline constexpr u32 vtable_ChangeStockItem = 0x008f0828u;
inline constexpr u32 vtable_ChangeStockItem_at_a40 = 0x008f0874u;
inline constexpr u32 vtable_Cabinet = 0x008f7fd4u;
inline constexpr u32 vtable_Cabinet_at_a40 = 0x008f8020u;
inline constexpr u32 stock_letter_state_address = 0x009533c4u;
inline constexpr guest::Function<0x002682ac, u32(u32, u32, u32, u32)> ChangeRentalBase__construct;
inline constexpr guest::Function<0x002cdcb0, u32(u32)> ItemDragIconGroup__ItemDragIconGroup;
inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> for_each_element;

u32 ChangeStockItem__construct(u32 cabinet, u32 r1, u32 r2, u32 r3) {
    gptr<Local_00297724_r0_1> r0_1 = gptr<Local_00297724_r0_1>(ChangeRentalBase__construct(cabinet, r1, r2, r3));
    r0_1->vtable = vtable_Cabinet;
    r0_1->cabinet_vtable = vtable_Cabinet_at_a40;
    u32 item_drag_icon_group = for_each_element(r0_1.addr() + 0x1888u, 0x2b9440u, 0x36cu, 0xau) + 0x2238u;
    ItemDragIconGroup__ItemDragIconGroup(item_drag_icon_group);
    gptr<Local_00297724_r0_5> r0_5 = gptr<Local_00297724_r0_5>(item_drag_icon_group - 0x3ac0u);
    *gptr<u8>(r0_5.addr() + 0x3ca0u) = 0;
    *gptr<u32>(r0_5.addr() + 0x3ca4u) = 0;
    r0_5->word_a64 = 0x2977c4;
    r0_5->word_a6c = 0x2977cc;
    r0_5->word_a68 = 0x9533c4;
    r0_5->word_24 = 0x2977b8;
    r0_5->change_stock_item_vtable = vtable_ChangeStockItem_at_a40;
    r0_5->vtable = vtable_ChangeStockItem;
    guest::cpu()->r[1] = 0x2977ccu;
    return r0_5.addr();
}

}  // namespace d_00297724
GUEST_EXPORT_FRAMED(0x00297724, d_00297724::ChangeStockItem__construct, 0x4010);  // pushes {r4, lr} first, as the original

// f_00297b60: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Moves the scroll bar's drag icon into `list` and remembers the scales of its bar and two arrows.
namespace d_00297b60 {

struct __attribute__((packed)) CommonScrollBarMoveDragIconArg0 {
    u8 unknown_0[0x26c];  // (not used here)
    u32 icon;
    u8 unknown_270[0x4c0];  // (not used here)
    float float_730;
    float float_734;
    float float_738;
};
GUEST_OFFSET(CommonScrollBarMoveDragIconArg0, icon, 0x26c);
GUEST_OFFSET(CommonScrollBarMoveDragIconArg0, float_730, 0x730);
GUEST_OFFSET(CommonScrollBarMoveDragIconArg0, float_734, 0x734);
GUEST_OFFSET(CommonScrollBarMoveDragIconArg0, float_738, 0x738);

inline constexpr guest::Function<0x004b6d74, u32(u32, u32, u32, u32)> DragIconList__add;
inline constexpr guest::Function<0x004b6dc8, u32(u32, u32, u32, u32)> DragIconList__remove;
inline constexpr guest::Function<0x0056878c, u32(u32, u32)> LayoutObjectWithChild__forward_to_child;
inline constexpr guest::Function<0x00568c10, u32(u32)> Layout__virtual_3;
inline constexpr guest::Function<0x006aa944, u32(u32)> scaled_value_8c;

u32 CommonScrollBar__move_drag_icon(gptr<CommonScrollBarMoveDragIconArg0> common_scroll_bar, u32 child, float S0) {
    u32 icon = common_scroll_bar->icon;
    u32 list = *gptr<u32>(icon + 0xcu);
    if (list != 0) {
        list = DragIconList__remove(list, icon, guest::cpu()->r[2], guest::cpu()->r[3]);
        icon = guest::cpu()->r[1];
        S0 = guest::cpu()->s[0];
    }
    if (child != 0) {
        u32 r1_2 = common_scroll_bar->icon;
        guest::cpu()->s[0] = S0;
        DragIconList__add(child, r1_2, guest::cpu()->r[2], guest::cpu()->r[3]);
        Layout__virtual_3(common_scroll_bar.addr() + 0x24cu);
        scaled_value_8c(child);
        float S0_3 = guest::cpu()->s[0];
        u32 r5_1 = common_scroll_bar.addr() + 0x400u;
        common_scroll_bar->float_730 = S0_3;
        guest::cpu()->s[0] = S0_3;
        u32 child_2 = LayoutObjectWithChild__forward_to_child(common_scroll_bar.addr() + 0x24cu, 0x857cb4u);
        scaled_value_8c(child_2);
        float S0_5 = guest::cpu()->s[0];
        common_scroll_bar->float_734 = S0_5;
        guest::cpu()->s[0] = S0_5;
        u32 child_5 = LayoutObjectWithChild__forward_to_child(common_scroll_bar.addr() + 0x24cu, 0x857ca8u);
        scaled_value_8c(child_5);
        icon = guest::cpu()->r[1];
        float S0_7 = guest::cpu()->s[0];
        list = child_5;
        common_scroll_bar->float_738 = S0_7;
    }
    guest::cpu()->r[1] = icon;
    return list;
}

}  // namespace d_00297b60
GUEST_EXPORT_FRAMED(0x00297b60, d_00297b60::CommonScrollBar__move_drag_icon, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_00297d54: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Shows the scroll bar when the position is past the last page start.
namespace d_00297d54 {

struct __attribute__((packed)) CommonScrollBarUpdateVisibilityArg0 {
    u8 unknown_0[0x74c];  // (not used here)
    u32 word_74c;
    u32 word_750;
    u8 unknown_754[0x34];  // (not used here)
    u32 word_788;
};
GUEST_OFFSET(CommonScrollBarUpdateVisibilityArg0, word_74c, 0x74c);
GUEST_OFFSET(CommonScrollBarUpdateVisibilityArg0, word_750, 0x750);
GUEST_OFFSET(CommonScrollBarUpdateVisibilityArg0, word_788, 0x788);

struct __attribute__((packed)) Local_00297d54_r0_1 {
    u8 unknown_0[0xb7];  // (not used here)
    u8 byte_b7;
};
GUEST_OFFSET(Local_00297d54_r0_1, byte_b7, 0xb7);


void CommonScrollBar__update_visibility(gptr<CommonScrollBarUpdateVisibilityArg0> common_scroll_bar) {
    u32 r1_1 = common_scroll_bar->word_750;
    gptr<Local_00297d54_r0_1> r0_1 = gptr<Local_00297d54_r0_1>(common_scroll_bar->word_788);
    u32 r2_1 = common_scroll_bar->word_74c - 1u;
    u32 zf_1 = r1_1 == r2_1;
    u32 cf_1 = r1_1 >= r2_1;
    if (r1_1 > r2_1) {
        r1_1 = 1u;
    }
    if (!cf_1 || zf_1) {
        r1_1 = 0u;
    }
    u32 r1_2 = r1_1 | u32(r0_1->byte_b7) & 0xfeu;
    r0_1->byte_b7 = u8(r1_2);
    guest::cpu()->r[1] = r1_2;
}

}  // namespace d_00297d54
GUEST_EXPORT(0x00297d54, d_00297d54::CommonScrollBar__update_visibility);

// f_00297f04: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Sets the scroll position (remembering the largest), its first shown entry and visibility, and moves the thumb.
namespace d_00297f04 {

struct __attribute__((packed)) CommonScrollBarSetPositionArg0 {
    u8 unknown_0[0x704];  // (not used here)
    float float_704;
    u8 unknown_708[0xc];  // (not used here)
    float float_714;
    u8 unknown_718[0x4];  // (not used here)
    u32 word_71c;
    u32 word_720;
    u8 unknown_724[0x28];  // (not used here)
    u32 word_74c;
    u32 word_750;
    u32 word_754;
    u8 unknown_758[0x10];  // (not used here)
    u32 word_768;
    u8 unknown_76c[0x1c];  // (not used here)
    u32 word_788;
};
GUEST_OFFSET(CommonScrollBarSetPositionArg0, float_704, 0x704);
GUEST_OFFSET(CommonScrollBarSetPositionArg0, float_714, 0x714);
GUEST_OFFSET(CommonScrollBarSetPositionArg0, word_71c, 0x71c);
GUEST_OFFSET(CommonScrollBarSetPositionArg0, word_720, 0x720);
GUEST_OFFSET(CommonScrollBarSetPositionArg0, word_74c, 0x74c);
GUEST_OFFSET(CommonScrollBarSetPositionArg0, word_750, 0x750);
GUEST_OFFSET(CommonScrollBarSetPositionArg0, word_754, 0x754);
GUEST_OFFSET(CommonScrollBarSetPositionArg0, word_768, 0x768);
GUEST_OFFSET(CommonScrollBarSetPositionArg0, word_788, 0x788);

struct __attribute__((packed)) Local_00297f04_r0_4 {
    u8 unknown_0[0xb7];  // (not used here)
    u8 byte_b7;
};
GUEST_OFFSET(Local_00297f04_r0_4, byte_b7, 0xb7);

inline constexpr guest::Function<0x002982f0, u32(u32, u32, u32, u32)> ScrollBar__set_position;
inline constexpr guest::Function<0x002986f0, u32(u32, u32, u32, u32)> ScrollBar__update_knob;

u32 CommonScrollBar__set_position(gptr<CommonScrollBarSetPositionArg0> common_scroll_bar, u32 r1, u32 r2, float S0, float S1, float S2) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 r0_1 = common_scroll_bar->word_754;
    if (r0_1 <= r1) {
        r0_1 = r1;
    }
    common_scroll_bar->word_754 = r0_1;
    common_scroll_bar->word_750 = r1;
    u32 r0_2 = r1 - common_scroll_bar->word_74c + 1u;
    common_scroll_bar->word_720 = r0_2;
    if (s32(r0_2) <= 0) {
        r0_2 = 0u;
    }
    common_scroll_bar->word_720 = r0_2;
    u32 r0_3 = common_scroll_bar->word_750;
    u32 r1_1 = common_scroll_bar->word_74c - 1u;
    u32 zf_1 = r0_3 == r1_1;
    u32 cf_1 = r0_3 >= r1_1;
    gptr<Local_00297f04_r0_4> r0_4 = gptr<Local_00297f04_r0_4>(common_scroll_bar->word_788);
    if (cf_1 && !zf_1) {
        r1_1 = 1u;
    }
    if (!cf_1 || zf_1) {
        r1_1 = 0u;
    }
    u32 r2_1 = u32(r0_4->byte_b7) & 0xfeu;
    u32 r1_2 = r1_1 | r2_1;
    r0_4->byte_b7 = u8(r1_2);
    ScrollBar__update_knob(common_scroll_bar.addr(), r1_2, r2_1, guest::cpu()->r[3]);
    float S1_1 = 0.5f;
    float S2_1 = std::bit_cast<float>(*gptr<u32>(common_scroll_bar->word_768 + 0x4cu));
    u32 r1_3 = 0u;
    float S0_1 = common_scroll_bar->float_704 - S2_1 * S1_1;
    common_scroll_bar->float_714 = S0_1;
    if (r2 != 0) {
        u32 r0_5 = common_scroll_bar->word_720;
        r1_3 = common_scroll_bar->word_71c;
        if ((r1_3 - r0_5) != 0 && s32(r1_3) >= s32(r0_5)) {
            r1_3 = r0_5;
        }
    }
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    guest::cpu()->s[2] = S2_1;
    frame.release();
    return ScrollBar__set_position(common_scroll_bar.addr(), r1_3, guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_00297f04
GUEST_EXPORT(0x00297f04, d_00297f04::CommonScrollBar__set_position);

// f_00298834: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// True when the bar pane (+0x784) is touched.
namespace d_00298834 {

inline constexpr guest::Function<0x004bef3c, u32(u32, u32)> ScrollBar__knob_position;

u32 CommonScrollBarWidth__bar_is_touched(gptr<CommonScrollBarWidth> common_scroll_bar_width) {
    u32 r0_2 = ScrollBar__knob_position(common_scroll_bar_width->word_784, guest::cpu()->r[1]);
    if (r0_2 != 0) {
        r0_2 = 1u;
    }
    return r0_2;
}

}  // namespace d_00298834
GUEST_EXPORT_FRAMED(0x00298834, d_00298834::CommonScrollBarWidth__bar_is_touched, 0x4010);  // pushes {r4, lr} first, as the original

// f_00298950: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Drags the thumb, scrolling the list and playing its sound.
namespace d_00298950 {

struct __attribute__((packed)) Local_00298950_r7_1 {
    u8 unknown_0[0x334];  // (not used here)
    float float_334;
    float float_338;
};
GUEST_OFFSET(Local_00298950_r7_1, float_334, 0x334);
GUEST_OFFSET(Local_00298950_r7_1, float_338, 0x338);

inline constexpr guest::Function<0x002982f0, u32(u32, u32)> ScrollBar__set_position;
inline constexpr guest::Function<0x0058d3b4, u32(u32, u32, u32, u32)> stop_current_sound_effect;
inline constexpr guest::Function<0x0072355c, u32(u32, u32, u32, u32)> ScrollBar__update_drag;

void CommonScrollBar__drag(gptr<CommonScrollBar> common_scroll_bar, u32 r1, u32 r2, float S0) {
    guest::StackFrame frame(0x18);  // the original's stack frame
    u32 r0_4 = 0;
    u32 r1_2 = 0;
    u32 r0_6 = 0;
    u32 r1_4 = 0;
    if (common_scroll_bar->byte_6fe != 1u && common_scroll_bar->word_6ec == 0) {
        u32 r0_2 = ScrollBar__update_drag(common_scroll_bar.addr() + 0x608u, r1, r2, guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        S0 = guest::cpu()->s[0];
        gptr<Local_00298950_r7_1> r7_1 = gptr<Local_00298950_r7_1>(common_scroll_bar.addr() + 0x400u);
        if (r0_2 != 0) {
            if (r0_2 != 1u) {
                return;
            }
            u32 r0_3 = common_scroll_bar->word_71c;
            r1 = common_scroll_bar->word_720;
            if (s32(r0_3) >= s32(r1)) {
                guest::cpu()->r[1] = r1;
                return;
            }
            ScrollBar__set_position(common_scroll_bar.addr(), r0_3 + 1u);
            if (common_scroll_bar->byte_6f4 == 0) {
                r0_4 = 0x10003abu;
                r1_2 = 1u;
            } else {
                r0_4 = 0x10003aau;
                r1_2 = 0u;
            }
            if (common_scroll_bar->byte_702 != 0) {
                r0_4 = r1_2 == 0 ? 0x10003acu : 0x10003adu;
            }
            float S0_1 = r7_1->float_338;
            guest::cpu()->s[0] = S0_1;
            frame.release();
            stop_current_sound_effect(r0_4, r1_2, guest::cpu()->r[2], guest::cpu()->r[3]);
            return;
        }
        u32 r0_5 = *gptr<u32>(common_scroll_bar.addr() + 0x71cu);
        if (s32(r0_5) > 0) {
            guest::cpu()->s[0] = S0;
            ScrollBar__set_position(common_scroll_bar.addr(), r0_5 - 1u);
            if (*gptr<u8>((common_scroll_bar.addr() + 0x600u) + 0xf4u) == 0) {
                r0_6 = 0x10003a9u;
                r1_4 = 1u;
            } else {
                r0_6 = 0x10003a8u;
                r1_4 = 0u;
            }
            if (*gptr<u8>((common_scroll_bar.addr() + 0x700u) + 2u) != 0) {
                r0_6 = r1_4 == 0 ? 0x10003aeu : 0x10003afu;
            }
            float S0_2 = r7_1->float_334;
            guest::cpu()->s[0] = S0_2;
            frame.release();
            stop_current_sound_effect(r0_6, r1_4, guest::cpu()->r[2], guest::cpu()->r[3]);
            return;
        }
    }
    guest::cpu()->r[1] = r1;
    guest::cpu()->s[0] = S0;
}

}  // namespace d_00298950
GUEST_EXPORT(0x00298950, d_00298950::CommonScrollBar__drag);

// f_00298a6c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Sets up the scroll bar's button control and panes.
namespace d_00298a6c {

struct __attribute__((packed)) CommonScrollBarSetupButtonArg0 {
    u8 unknown_0[0x6dc];  // (not used here)
    u32 word_6dc;
};
GUEST_OFFSET(CommonScrollBarSetupButtonArg0, word_6dc, 0x6dc);

struct __attribute__((packed)) Local_00298a6c_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_00298a6c_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_00298a6c_ea_1, word_4, 0x4);

struct __attribute__((packed)) Local_00298a6c_ea_10 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_00298a6c_ea_10, word_0, 0x0);
GUEST_OFFSET(Local_00298a6c_ea_10, word_4, 0x4);

struct __attribute__((packed)) Local_00298a6c_ea_9 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_00298a6c_ea_9, word_0, 0x0);
GUEST_OFFSET(Local_00298a6c_ea_9, word_4, 0x4);

struct __attribute__((packed)) Local_00298a6c_r6_2 {
    u8 unknown_0[0x522];  // (not used here)
    u8 byte_522;
    u8 byte_523;
};
GUEST_OFFSET(Local_00298a6c_r6_2, byte_522, 0x522);
GUEST_OFFSET(Local_00298a6c_r6_2, byte_523, 0x523);

struct __attribute__((packed)) Local_00298a6c_r9_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
};
GUEST_OFFSET(Local_00298a6c_r9_1, word_0, 0x0);
GUEST_OFFSET(Local_00298a6c_r9_1, word_4, 0x4);
GUEST_OFFSET(Local_00298a6c_r9_1, word_8, 0x8);
GUEST_OFFSET(Local_00298a6c_r9_1, word_c, 0xc);
GUEST_OFFSET(Local_00298a6c_r9_1, word_10, 0x10);
GUEST_OFFSET(Local_00298a6c_r9_1, word_14, 0x14);

inline guest::global<u32, 0x00857bc4> global_00857bc4;
inline guest::global<u32, 0x00857bc8> global_00857bc8;
inline guest::global<u32, 0x00857bcc> global_00857bcc;
inline guest::global<u32, 0x00857bd0> global_00857bd0;
inline guest::global<u32, 0x00857bdc> global_00857bdc;
inline guest::global<u32, 0x00857be0> global_00857be0;
inline guest::global<u32, 0x00857be4> global_00857be4;
inline guest::global<u32, 0x00857be8> global_00857be8;
inline guest::global<u32, 0x00857bec> global_00857bec;
inline guest::global<u32, 0x00857bf0> global_00857bf0;
inline guest::global<u32, 0x00857bf4> global_00857bf4;
inline constexpr guest::Function<0x002b6a00, u32(u32, u32)> set_node_values;
inline constexpr guest::Function<0x002f6a30, u32(u32, u32)> Model__set_flag_10;
inline constexpr guest::Function<0x002f6e98, u32(u32, u32, u32, u32)> ButtonActionControl__setup;
inline constexpr guest::Function<0x002f7508, u32(u32, u32, u32)> copy_four_animation_targets;
inline constexpr guest::Function<0x004b4fc0, u32(u32, u32, u32)> Layout__find_pane;
inline constexpr guest::Function<0x0056878c, u32(u32, u32, u32, u32)> LayoutObjectWithChild__forward_to_child;

struct __attribute__((packed)) CommonScrollBarSetupButtonFrame {
    u32 child;
    u32 pane;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u32 word_18;
    u8 unknown_1c[0x3c];  // (not read or written by name)
    u32 word_58;
    u8 unknown_5c[0x8];  // (not read or written by name)
};
GUEST_OFFSET(CommonScrollBarSetupButtonFrame, child, 0x0);
GUEST_OFFSET(CommonScrollBarSetupButtonFrame, pane, 0x4);
GUEST_OFFSET(CommonScrollBarSetupButtonFrame, word_8, 0x8);
GUEST_OFFSET(CommonScrollBarSetupButtonFrame, word_c, 0xc);
GUEST_OFFSET(CommonScrollBarSetupButtonFrame, word_10, 0x10);
GUEST_OFFSET(CommonScrollBarSetupButtonFrame, word_14, 0x14);
GUEST_OFFSET(CommonScrollBarSetupButtonFrame, word_18, 0x18);
GUEST_OFFSET(CommonScrollBarSetupButtonFrame, word_58, 0x58);
GUEST_SIZE(CommonScrollBarSetupButtonFrame, 0x64);

void CommonScrollBar__setup_button(gptr<CommonScrollBarSetupButtonArg0> common_scroll_bar, float S0) {
    guest::StackFrameOf<CommonScrollBarSetupButtonFrame> frame;  // the original's stack frame
    u32 r0 = common_scroll_bar.addr();
    u32 r5 = r0;
    gptr<Local_00298a6c_r9_1> r9_1 = gptr<Local_00298a6c_r9_1>(frame.at(0x40).addr());
    u32 r2_1 = *global_00857bdc;
    u32 r3_1 = *global_00857be0;
    u32 r6_1 = *global_00857be4;
    u32 r7_1 = *global_00857be8;
    u32 r8_1 = *global_00857bec;
    u32 r12_1 = *global_00857bf0;
    r9_1->word_0 = r2_1;
    r9_1->word_4 = r3_1;
    r9_1->word_8 = r6_1;
    r9_1->word_c = r7_1;
    r9_1->word_10 = r8_1;
    r9_1->word_14 = r12_1;
    u32 r2_2 = *global_00857bf4;
    gptr<Local_00298a6c_ea_1> ea_1 = gptr<Local_00298a6c_ea_1>(frame.at(0x38).addr());
    ea_1->word_0 = r0 + 4u;
    ea_1->word_4 = r5 + 0x24cu;
    u32 r0_1 = r5 + 0x608u;
    frame->word_58 = r2_2;
    u32 model = r0_1;
    ButtonActionControl__setup(r0_1, frame.at(0x38).addr(), 0u, r3_1);
    u32 r2 = guest::cpu()->r[2];
    u32 r3 = guest::cpu()->r[3];
    u32 r9 = 0u;
    S0 = 0.0f;
    common_scroll_bar->word_6dc = common_scroll_bar->word_6dc | 0x40u;
    frame->child = r9;
    frame->pane = r9;
    frame->word_8 = r9;
    frame->word_c = r9;
    frame->word_10 = r9;
    frame->word_14 = r9;
    frame->word_18 = r9;
    frame->word_8 = std::bit_cast<u32>(S0);
    frame->word_c = std::bit_cast<u32>(S0);
    u32 r0_2 = *global_00857bc4;
    u32 r1_2 = *global_00857bc8;
    u32 r10 = frame.at(0x28).addr();
    u32 r11 = frame.at(0x30).addr();
    gptr<Local_00298a6c_ea_9> ea_9 = gptr<Local_00298a6c_ea_9>(frame.at(0x28).addr());
    ea_9->word_0 = r0_2;
    ea_9->word_4 = r1_2;
    u32 r0_3 = *global_00857bcc;
    u32 r1_3 = *global_00857bd0;
    u32 i = r9;
    gptr<Local_00298a6c_ea_10> ea_10 = gptr<Local_00298a6c_ea_10>(frame.at(0x30).addr());
    ea_10->word_0 = r0_3;
    ea_10->word_4 = r1_3;
    do {
        u32 r1_4 = gptr<u32>(r10)[i];
        guest::cpu()->s[0] = S0;
        u32 child = LayoutObjectWithChild__forward_to_child(r5 + 0x24cu, r1_4, r2, r3);
        frame->child = child;
        u32 pane = Layout__find_pane(r5 + 0x24cu, gptr<u32>(r11)[i], 1u);
        frame->pane = pane;
        gptr<Local_00298a6c_r6_2> r6_2 = gptr<Local_00298a6c_r6_2>(r5 + i * 0xe0u);
        frame->word_14 = i;
        frame->word_10 = r9;
        set_node_values(r6_2.addr() + 0x448u, frame.at(0).addr());
        r6_2->byte_522 = u8(r9);
        r6_2->byte_523 = u8(r9);
        copy_four_animation_targets(model, r6_2.addr() + 0x448u, 1u);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        S0 = guest::cpu()->s[0];
        i += 1u;
        guest::preempt();
    } while (s32(i) < 2);
    guest::cpu()->s[0] = S0;
    Model__set_flag_10(model, 0u);
    *gptr<u32>(r5 + 0x6dcu) = *gptr<u32>(r5 + 0x6dcu) & ~8u;
    *gptr<u16>(r5 + 0x6d8u) = 0x23;
}

}  // namespace d_00298a6c
GUEST_EXPORT_FRAMED(0x00298a6c, d_00298a6c::CommonScrollBar__setup_button, 0x4ff0);  // pushes {i, r5, r6, r7, model, r9, r10, r11, lr} first, as the original

// f_00298bb0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Converts the thumb's position to the screen and hands it to the touch state.
namespace d_00298bb0 {

struct __attribute__((packed)) CommonScrollBarThumbScreenPositionArg0 {
    u8 unknown_0[0x764];  // (not used here)
    u32 word_764;
};
GUEST_OFFSET(CommonScrollBarThumbScreenPositionArg0, word_764, 0x764);

struct __attribute__((packed)) Local_00298bb0_r0_2 {
    u8 unknown_0[0x4c0];  // (not used here)
    u32 word_4c0;
    u32 word_4c4;
};
GUEST_OFFSET(Local_00298bb0_r0_2, word_4c0, 0x4c0);
GUEST_OFFSET(Local_00298bb0_r0_2, word_4c4, 0x4c4);

inline constexpr guest::Function<0x00148710, u32(u32, u32, u32, u32)> mtx34_mult_vec3;
inline constexpr guest::Function<0x001f99e4, u32(u32, u32)> LayoutWindow__set_pane_position;
inline constexpr guest::Function<0x006d1e64, u32(u32, u32)> get_state_30;

struct __attribute__((packed)) CommonScrollBarThumbScreenPositionFrame {
    u32 word_0;
    u32 word_4;
    float float_8;
};
GUEST_OFFSET(CommonScrollBarThumbScreenPositionFrame, word_0, 0x0);
GUEST_OFFSET(CommonScrollBarThumbScreenPositionFrame, word_4, 0x4);
GUEST_OFFSET(CommonScrollBarThumbScreenPositionFrame, float_8, 0x8);
GUEST_SIZE(CommonScrollBarThumbScreenPositionFrame, 0xc);

u32 CommonScrollBar__thumb_screen_position(gptr<CommonScrollBarThumbScreenPositionArg0> common_scroll_bar) {
    guest::StackFrameOf<CommonScrollBarThumbScreenPositionFrame> frame;  // the original's stack frame
    float S0_1 = 0.0f;
    u32 r2_1 = frame.at(0).addr();
    frame->word_0 = std::bit_cast<u32>(S0_1);
    frame->word_4 = std::bit_cast<u32>(S0_1);
    frame->float_8 = S0_1;
    u32 r1_1 = common_scroll_bar->word_764 + 0x80u;
    guest::cpu()->s[0] = S0_1;
    mtx34_mult_vec3(r2_1, r1_1, r2_1, guest::cpu()->r[3]);
    u32 r0_1 = get_state_30(r2_1, guest::cpu()->r[1]);
    gptr<Local_00298bb0_r0_2> r0_2 = gptr<Local_00298bb0_r0_2>(*gptr<u32>(r0_1 + 0x1f4u));
    r0_2->word_4c0 = frame->word_0;
    u32 r1_3 = frame->word_4;
    r0_2->word_4c4 = r1_3;
    u32 r0_3 = get_state_30(r0_2.addr(), r1_3);
    return LayoutWindow__set_pane_position(*gptr<u32>(r0_3 + 0x1f4u), frame.at(0).addr());
}

}  // namespace d_00298bb0
GUEST_EXPORT_FRAMED(0x00298bb0, d_00298bb0::CommonScrollBar__thumb_screen_position, 0x4000);  // pushes {lr} first, as the original

// f_00298e94: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Plays the up arrow's sound (pressed or released, by the bar's kind).
namespace d_00298e94 {

struct __attribute__((packed)) CommonScrollBarPlayUpSoundArg0 {
    u8 unknown_0[0x702];  // (not used here)
    u8 byte_702;
    u8 unknown_703[0x31];  // (not used here)
    float float_734;
};
GUEST_OFFSET(CommonScrollBarPlayUpSoundArg0, byte_702, 0x702);
GUEST_OFFSET(CommonScrollBarPlayUpSoundArg0, float_734, 0x734);

inline constexpr guest::Function<0x0058d3b4, u32(u32, u32, u32, u32)> stop_current_sound_effect;

void CommonScrollBar__play_up_sound(gptr<CommonScrollBarPlayUpSoundArg0> common_scroll_bar, u32 r1) {
    u32 r3_1 = common_scroll_bar->byte_702;
    u32 r2_1 = r1 == 0 ? 0x10003a8u : 0x10003a9u;
    if (r3_1 == 0) {
        float S0_1 = common_scroll_bar->float_734;
        guest::cpu()->s[0] = S0_1;
        stop_current_sound_effect(r2_1, r1, r2_1, r3_1);
        return;
    }
    u32 r2_2 = r1 == 0 ? 0x10003aeu : 0x10003afu;
    float S0_2 = common_scroll_bar->float_734;
    guest::cpu()->s[0] = S0_2;
    stop_current_sound_effect(r2_2, r1, r2_2, r3_1);
}

}  // namespace d_00298e94
GUEST_EXPORT(0x00298e94, d_00298e94::CommonScrollBar__play_up_sound);

// f_00298ed8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// True when one of the three buttons (top, center, bottom) is touched.
namespace d_00298ed8 {

inline constexpr guest::Function<0x004bef3c, u32(u32, u32)> ScrollBar__knob_position;

u32 CommonScrollBarWidth__button_is_touched(gptr<CommonScrollBarWidth> common_scroll_bar_width, u32 r1) {
    u32 r0_6 = 0;
    if (ScrollBar__knob_position(common_scroll_bar_width->word_77c, r1) == 0) {
        if (ScrollBar__knob_position(common_scroll_bar_width->word_778, r1) == 0) {
            r0_6 = ScrollBar__knob_position(common_scroll_bar_width->word_780, r1);
            if (r0_6 != 0) {
                r0_6 = 1u;
            }
        } else {
            r0_6 = 1u;
        }
    } else {
        r0_6 = 1u;
    }
    return r0_6;
}

}  // namespace d_00298ed8
GUEST_EXPORT_FRAMED(0x00298ed8, d_00298ed8::CommonScrollBarWidth__button_is_touched, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_00298f2c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Moves the thumb to the scroll position and plays the scroll sound.
namespace d_00298f2c {

struct __attribute__((packed)) Local_00298f2c_r4_1 {
    u8 unknown_0[0x32c];  // (not used here)
    float float_32c;
    u8 unknown_330[0x10];  // (not used here)
    float float_340;
    u8 unknown_344[0x4];  // (not used here)
    float float_348;
};
GUEST_OFFSET(Local_00298f2c_r4_1, float_32c, 0x32c);
GUEST_OFFSET(Local_00298f2c_r4_1, float_340, 0x340);
GUEST_OFFSET(Local_00298f2c_r4_1, float_348, 0x348);

struct __attribute__((packed)) Local_00298f2c_r4_2 {
    float float_0;
    float float_4;
};
GUEST_OFFSET(Local_00298f2c_r4_2, float_0, 0x0);
GUEST_OFFSET(Local_00298f2c_r4_2, float_4, 0x4);

inline constexpr guest::Function<0x005833b0, u32(u32)> sound_play_6b2104;
inline constexpr guest::Function<0x006aa944, u32(u32, u32, u32, u32)> scaled_value_8c;

void CommonScrollBar__update_thumb(gptr<CommonScrollBar> common_scroll_bar, u32 r1) {
    guest::StackFrame frame(0x18);  // the original's stack frame
    float S1_1 = 0;
    gptr<Local_00298f2c_r4_1> r4_1 = gptr<Local_00298f2c_r4_1>(common_scroll_bar.addr() + 0x400u);
    u32 r6_1 = common_scroll_bar->word_71c;
    float S0_1 = (common_scroll_bar->float_714 - std::bit_cast<float>(*gptr<u32>(common_scroll_bar->word_764 + 0x2cu))) * common_scroll_bar->float_70c;
    float S3_1 = 0.0f;
    u32 r0_1 = vcvt_sz_f((S0_1 + 1.0f) / common_scroll_bar->float_748);
    common_scroll_bar->word_71c = r0_1;
    float S2_1 = common_scroll_bar->float_748;
    float S4_1 = float(s32(r0_1));
    common_scroll_bar->float_724 = S0_1 - S4_1 * S2_1;
    if (!(common_scroll_bar->float_710 < S3_1)) {
        S1_1 = r4_1->float_340;
        if (S1_1 >= S0_1) {
            u32 r0_2 = common_scroll_bar->word_764;
            guest::cpu()->s[0] = S0_1;
            guest::cpu()->s[1] = S1_1;
            guest::cpu()->s[2] = S2_1;
            guest::cpu()->s[3] = S3_1;
            guest::cpu()->s[4] = S4_1;
            scaled_value_8c(r0_2, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
            sound_play_6b2104(0x10003a6u);
            float S1_3 = r4_1->float_32c;
            S2_1 = r4_1->float_348;
            float S0_3 = std::bit_cast<float>(common_scroll_bar->word_71c);
            gptr<Local_00298f2c_r4_2> r4_2 = gptr<Local_00298f2c_r4_2>(r4_1.addr() + 0x33cu);
            S3_1 = float(s32(std::bit_cast<u32>(S0_3)));
            S4_1 = float(s32(std::bit_cast<u32>(S0_3)));
            S1_1 = -S1_3 + S3_1 * S2_1;
            S0_1 = S1_3 + S4_1 * S2_1;
            r4_2->float_0 = S0_1;
            r4_2->float_4 = S1_1;
        }
    } else {
        S1_1 = common_scroll_bar->float_73c;
        if (S1_1 <= S0_1) {
            u32 r0_3 = common_scroll_bar->word_764;
            guest::cpu()->s[0] = S0_1;
            guest::cpu()->s[1] = S1_1;
            guest::cpu()->s[2] = S2_1;
            guest::cpu()->s[3] = S3_1;
            guest::cpu()->s[4] = S4_1;
            scaled_value_8c(r0_3, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
            sound_play_6b2104(0x10003a6u);
            float S2_4 = common_scroll_bar->float_72c;
            S1_1 = common_scroll_bar->float_748;
            float S0_5 = std::bit_cast<float>(common_scroll_bar->word_71c);
            S4_1 = float(s32(std::bit_cast<u32>(S0_5)));
            S0_1 = float(s32(std::bit_cast<u32>(S0_5)));
            S3_1 = S2_4 + S1_1 + S4_1 * S1_1;
            S2_1 = S2_4 + S0_1 * S1_1;
            common_scroll_bar->float_73c = S3_1;
            common_scroll_bar->float_740 = S2_1;
        }
    }
    u32 r1_3 = common_scroll_bar->word_758;
    if (r1_3 != 0 && common_scroll_bar->word_71c != r6_1) {
        u32 r0_4 = common_scroll_bar->word_760;
        guest::cpu()->s[0] = S0_1;
        guest::cpu()->s[1] = S1_1;
        guest::cpu()->s[2] = S2_1;
        guest::cpu()->s[3] = S3_1;
        guest::cpu()->s[4] = S4_1;
        frame.release();
        guest::call_address<u32>(r1_3, r0_4, r1_3, guest::cpu()->r[2], guest::cpu()->r[3]);
        return;
    }
    guest::cpu()->r[1] = r1_3;
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
}

}  // namespace d_00298f2c
GUEST_EXPORT(0x00298f2c, d_00298f2c::CommonScrollBar__update_thumb);

// f_00299094: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Plays the down arrow's sound (pressed or released, by the bar's kind).
namespace d_00299094 {

struct __attribute__((packed)) CommonScrollBarPlayDownSoundArg0 {
    u8 unknown_0[0x702];  // (not used here)
    u8 byte_702;
    u8 unknown_703[0x35];  // (not used here)
    float float_738;
};
GUEST_OFFSET(CommonScrollBarPlayDownSoundArg0, byte_702, 0x702);
GUEST_OFFSET(CommonScrollBarPlayDownSoundArg0, float_738, 0x738);

inline constexpr guest::Function<0x0058d3b4, u32(u32, u32, u32, u32)> stop_current_sound_effect;

void CommonScrollBar__play_down_sound(gptr<CommonScrollBarPlayDownSoundArg0> common_scroll_bar, u32 r1) {
    u32 r3_1 = common_scroll_bar->byte_702;
    u32 r2_1 = r1 == 0 ? 0x10003aau : 0x10003abu;
    if (r3_1 == 0) {
        float S0_1 = common_scroll_bar->float_738;
        guest::cpu()->s[0] = S0_1;
        stop_current_sound_effect(r2_1, r1, r2_1, r3_1);
        return;
    }
    u32 r2_2 = r1 == 0 ? 0x10003acu : 0x10003adu;
    float S0_2 = common_scroll_bar->float_738;
    guest::cpu()->s[0] = S0_2;
    stop_current_sound_effect(r2_2, r1, r2_2, r3_1);
}

}  // namespace d_00299094
GUEST_EXPORT(0x00299094, d_00299094::CommonScrollBar__play_down_sound);

// f_002990d8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Finds the scroll bar's panes: its button, shadows, three buttons, bar and arrows.
namespace d_002990d8 {

struct __attribute__((packed)) CommonScrollBarFindPanesArg0 {
    u8 unknown_0[0x764];  // (not used here)
    u32 child;
    u32 child_768;
    u32 child_76c;
    u32 child_770;
    u32 child_774;
    u32 child_778;
    u32 child_77c;
    u32 child_780;
    u32 child_784;
    u32 child_788;
    u32 pane;
    u32 pane_790;
    u32 pane_794;
};
GUEST_OFFSET(CommonScrollBarFindPanesArg0, child, 0x764);
GUEST_OFFSET(CommonScrollBarFindPanesArg0, child_768, 0x768);
GUEST_OFFSET(CommonScrollBarFindPanesArg0, child_76c, 0x76c);
GUEST_OFFSET(CommonScrollBarFindPanesArg0, child_770, 0x770);
GUEST_OFFSET(CommonScrollBarFindPanesArg0, child_774, 0x774);
GUEST_OFFSET(CommonScrollBarFindPanesArg0, child_778, 0x778);
GUEST_OFFSET(CommonScrollBarFindPanesArg0, child_77c, 0x77c);
GUEST_OFFSET(CommonScrollBarFindPanesArg0, child_780, 0x780);
GUEST_OFFSET(CommonScrollBarFindPanesArg0, child_784, 0x784);
GUEST_OFFSET(CommonScrollBarFindPanesArg0, child_788, 0x788);
GUEST_OFFSET(CommonScrollBarFindPanesArg0, pane, 0x78c);
GUEST_OFFSET(CommonScrollBarFindPanesArg0, pane_790, 0x790);
GUEST_OFFSET(CommonScrollBarFindPanesArg0, pane_794, 0x794);

inline constexpr guest::Function<0x004b4fc0, u32(u32, u32, u32)> Layout__find_pane;
inline constexpr guest::Function<0x0056878c, u32(u32, u32, u32, u32)> LayoutObjectWithChild__forward_to_child;

void CommonScrollBar__find_panes(gptr<CommonScrollBarFindPanesArg0> common_scroll_bar, u32 r1_unused, u32 r2) {
    u32 child = LayoutObjectWithChild__forward_to_child(common_scroll_bar.addr() + 0x24cu, 0x857c9cu, r2, guest::cpu()->r[3]);
    common_scroll_bar->child = child;
    u32 child_2 = LayoutObjectWithChild__forward_to_child(common_scroll_bar.addr() + 0x24cu, 0x857c90u, guest::cpu()->r[2], guest::cpu()->r[3]);
    common_scroll_bar->child_768 = child_2;
    u32 child_3 = LayoutObjectWithChild__forward_to_child(common_scroll_bar.addr() + 0x24cu, 0x857c80u, guest::cpu()->r[2], guest::cpu()->r[3]);
    common_scroll_bar->child_76c = child_3;
    u32 child_4 = LayoutObjectWithChild__forward_to_child(common_scroll_bar.addr() + 0x24cu, 0x857c70u, guest::cpu()->r[2], guest::cpu()->r[3]);
    common_scroll_bar->child_770 = child_4;
    u32 child_5 = LayoutObjectWithChild__forward_to_child(common_scroll_bar.addr() + 0x24cu, 0x857c60u, guest::cpu()->r[2], guest::cpu()->r[3]);
    common_scroll_bar->child_774 = child_5;
    u32 child_6 = LayoutObjectWithChild__forward_to_child(common_scroll_bar.addr() + 0x24cu, 0x857c54u, guest::cpu()->r[2], guest::cpu()->r[3]);
    common_scroll_bar->child_778 = child_6;
    u32 child_7 = LayoutObjectWithChild__forward_to_child(common_scroll_bar.addr() + 0x24cu, 0x857c48u, guest::cpu()->r[2], guest::cpu()->r[3]);
    common_scroll_bar->child_77c = child_7;
    u32 child_8 = LayoutObjectWithChild__forward_to_child(common_scroll_bar.addr() + 0x24cu, 0x857c3cu, guest::cpu()->r[2], guest::cpu()->r[3]);
    common_scroll_bar->child_780 = child_8;
    u32 child_9 = LayoutObjectWithChild__forward_to_child(common_scroll_bar.addr() + 0x24cu, 0x857c30u, guest::cpu()->r[2], guest::cpu()->r[3]);
    common_scroll_bar->child_784 = child_9;
    u32 child_10 = LayoutObjectWithChild__forward_to_child(common_scroll_bar.addr() + 0x24cu, 0x857c28u, guest::cpu()->r[2], guest::cpu()->r[3]);
    common_scroll_bar->child_788 = child_10;
    u32 pane = Layout__find_pane(common_scroll_bar.addr() + 0x24cu, 0x857c1cu, 1u);
    common_scroll_bar->pane = pane;
    u32 pane_2 = Layout__find_pane(common_scroll_bar.addr() + 0x24cu, 0x857c04u, 1u);
    common_scroll_bar->pane_790 = pane_2;
    u32 pane_3 = Layout__find_pane(common_scroll_bar.addr() + 0x24cu, 0x857bf8u, 1u);
    common_scroll_bar->pane_794 = pane_3;
}

}  // namespace d_002990d8
GUEST_EXPORT_FRAMED(0x002990d8, d_002990d8::CommonScrollBar__find_panes, 0x4010);  // pushes {r4, lr} first, as the original

// f_002991f4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Ends the current touch by its kind (bar, arrows or thumb) and resets it.
namespace d_002991f4 {

struct __attribute__((packed)) CommonScrollBarReleaseTouchArg0 {
    u8 unknown_0[0x3dc];  // (not used here)
    u8 byte_3dc;
    u8 unknown_3dd[0x2ff];  // (not used here)
    u32 word_6dc;
    u8 unknown_6e0[0x64];  // (not used here)
    u8 byte_744;
};
GUEST_OFFSET(CommonScrollBarReleaseTouchArg0, byte_3dc, 0x3dc);
GUEST_OFFSET(CommonScrollBarReleaseTouchArg0, word_6dc, 0x6dc);
GUEST_OFFSET(CommonScrollBarReleaseTouchArg0, byte_744, 0x744);

struct __attribute__((packed)) Local_002991f4_r0_1 {
    u8 unknown_0[0xfa];  // (not used here)
    u8 byte_fa;
};
GUEST_OFFSET(Local_002991f4_r0_1, byte_fa, 0xfa);

inline constexpr guest::Function<0x001f9b08, u32(u32, u32)> LayoutWindow__start_hide;
inline constexpr guest::Function<0x002992f8, u32(u32, u32, u32, u32)> TalkWindow__hide_now;
inline constexpr guest::Function<0x002993ac, u32(u32, u32, u32, u32)> CommonScrollBar__set_pressed;
inline constexpr guest::Function<0x002f6b14, u32(u32)> NodeTree__update_all;
inline constexpr guest::Function<0x002f6e14, u32(u32)> ButtonActionControl__virtual_3;
inline constexpr guest::Function<0x00568c10, u32(u32)> Layout__virtual_3;
inline constexpr guest::Function<0x00569420, u32(u32, u32)> Layout__refresh_pane;
inline constexpr guest::Function<0x005697e0, u32(u32, u32)> Animation__set_value;
inline constexpr guest::Function<0x006d1e64, u32(u32, u32, u32, u32)> get_state_30;

void CommonScrollBar__release_touch(gptr<CommonScrollBarReleaseTouchArg0> common_scroll_bar, float S0) {
    u32 r1_1 = common_scroll_bar->byte_744;
    if (r1_1 != 1u) {
        gptr<Local_002991f4_r0_1> r0_1 = gptr<Local_002991f4_r0_1>(common_scroll_bar.addr() + 0x600u);
        if (r1_1 != 2u) {
            if (r1_1 == 3u) {
                u32 r0_2 = r0_1->byte_fa;
                if (r0_2 == 1u) {
                    u32 r0_3 = get_state_30(r0_2, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
                    LayoutWindow__start_hide(*gptr<u32>(r0_3 + 0x1f4u), 0u);
                    common_scroll_bar->word_6dc = common_scroll_bar->word_6dc & ~8u;
                    TalkWindow__hide_now(common_scroll_bar.addr(), guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
                    S0 = guest::cpu()->s[0];
                }
                guest::cpu()->s[0] = S0;
                CommonScrollBar__set_pressed(common_scroll_bar.addr(), 0u, guest::cpu()->r[2], guest::cpu()->r[3]);
                u32 r0_5 = common_scroll_bar.addr() + 0x608u;
                ButtonActionControl__virtual_3(r0_5);
                NodeTree__update_all(r0_5);
                r1_1 = guest::cpu()->r[1];
                S0 = guest::cpu()->s[0];
                if (common_scroll_bar->byte_3dc != 0) {
                    float S0_5 = 0.0f;
                    guest::cpu()->s[0] = S0_5;
                    Animation__set_value(common_scroll_bar.addr() + 0x3c0u, r1_1);
                    Layout__virtual_3(common_scroll_bar.addr() + 0x24cu);
                    Layout__refresh_pane(common_scroll_bar.addr() + 0x24cu, common_scroll_bar.addr() + 0x3c0u);
                    r1_1 = guest::cpu()->r[1];
                    S0 = guest::cpu()->s[0];
                }
            }
        } else if (r0_1->byte_fa == 1u) {
            guest::cpu()->s[0] = S0;
            TalkWindow__hide_now(common_scroll_bar.addr(), r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
            r1_1 = guest::cpu()->r[1];
            S0 = guest::cpu()->s[0];
        }
    } else {
        u32 r0_9 = common_scroll_bar->word_6dc & ~8u;
        common_scroll_bar->word_6dc = r0_9;
        guest::cpu()->s[0] = S0;
        u32 r0_10 = get_state_30(r0_9, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1_1 = guest::cpu()->r[1];
        S0 = guest::cpu()->s[0];
        *gptr<u8>(*gptr<u32>(r0_10 + 0x1f4u) + 0x4d7u) = 0;
    }
    common_scroll_bar->byte_744 = 0;
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->s[0] = S0;
}

}  // namespace d_002991f4
GUEST_EXPORT_FRAMED(0x002991f4, d_002991f4::CommonScrollBar__release_touch, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_002993ac: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// When the thumb's pressed state changes, plays its press animation (and, while dragging, its sound).
namespace d_002993ac {

inline constexpr guest::Function<0x00568630, u32(u32, u32, u32, u32)> notify_objects_of_list;
inline constexpr guest::Function<0x00568984, u32(u32, u32, u32, u32)> notify_list_objects;
inline constexpr guest::Function<0x00568c10, u32(u32)> Layout__virtual_3;
inline constexpr guest::Function<0x005697e0, u32(u32)> Animation__set_value;
inline constexpr guest::Function<0x0058d3b4, u32(u32)> stop_current_sound_effect;
inline constexpr guest::Function<0x006aa944, u32(u32)> scaled_value_8c;

u32 CommonScrollBar__set_pressed(gptr<CommonScrollBar> common_scroll_bar, u32 r1, float S0) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 r0_1 = s8(common_scroll_bar->byte_6f9);
    if (r0_1 != r1) {
        common_scroll_bar->byte_6f9 = u8(r1);
        u32 r2_1 = common_scroll_bar->word_78c;
        notify_objects_of_list(common_scroll_bar.addr() + 0x24cu, common_scroll_bar.addr() + 0x398u, r2_1, 0u);
        if (r1 != 0) {
            float S0_1 = 1.0f;
            guest::cpu()->s[0] = S0_1;
            Animation__set_value(common_scroll_bar.addr() + 0x398u);
            if (common_scroll_bar->byte_744 == 3u) {
                scaled_value_8c(common_scroll_bar->word_764);
                stop_current_sound_effect(0x10003a5u);
                common_scroll_bar->byte_6ff = 1;
            }
        } else {
            float S0_4 = 0.0f;
            guest::cpu()->s[0] = S0_4;
            Animation__set_value(common_scroll_bar.addr() + 0x398u);
        }
        Layout__virtual_3(common_scroll_bar.addr() + 0x24cu);
        u32 r2_5 = common_scroll_bar->word_78c;
        frame.release();
        return notify_list_objects(common_scroll_bar.addr() + 0x24cu, common_scroll_bar.addr() + 0x398u, r2_5, 0u);
    }
    guest::cpu()->r[1] = r1;
    guest::cpu()->s[0] = S0;
    return r0_1;
}

}  // namespace d_002993ac
GUEST_EXPORT(0x002993ac, d_002993ac::CommonScrollBar__set_pressed);

// f_002999ac: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Sets the bar's style (+0x444) and plays it on the bar and its two arrows.
namespace d_002999ac {

struct __attribute__((packed)) CommonScrollBarSetStyleArg0 {
    u8 unknown_0[0x444];  // (not used here)
    u8 byte_444;
};
GUEST_OFFSET(CommonScrollBarSetStyleArg0, byte_444, 0x444);

inline constexpr guest::Function<0x004b4fc0, u32(u32, u32, u32, u32)> Layout__find_pane;
inline constexpr guest::Function<0x00568630, u32(u32, u32, u32, u32)> notify_objects_of_list;
inline constexpr guest::Function<0x00568984, u32(u32, u32, u32, u32)> notify_list_objects;
inline constexpr guest::Function<0x00568c10, u32(u32)> Layout__virtual_3;
inline constexpr guest::Function<0x005697e0, u32(u32)> Animation__set_value;

void CommonScrollBar__set_style(gptr<CommonScrollBarSetStyleArg0> common_scroll_bar, u32 r1, u32 r2_unused, u32 r3, float S0) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    common_scroll_bar->byte_444 = u8(r1);
    u32 r5_1 = common_scroll_bar.addr() + 0x444u;
    u32 pane = Layout__find_pane(common_scroll_bar.addr() + 0x24cu, 0x857c10u, 1u, r3);
    notify_objects_of_list(common_scroll_bar.addr() + 0x24cu, common_scroll_bar.addr() + 0x3e8u, pane, 0u);
    u32 pane_2 = Layout__find_pane(common_scroll_bar.addr() + 0x24cu, 0x857c04u, 1u, guest::cpu()->r[3]);
    notify_objects_of_list(common_scroll_bar.addr() + 0x24cu, common_scroll_bar.addr() + 0x3e8u, pane_2, 0u);
    u32 pane_3 = Layout__find_pane(common_scroll_bar.addr() + 0x24cu, 0x857bf8u, 1u, guest::cpu()->r[3]);
    notify_objects_of_list(common_scroll_bar.addr() + 0x24cu, common_scroll_bar.addr() + 0x3e8u, pane_3, 0u);
    float S0_6 = float(u32(common_scroll_bar->byte_444));
    guest::cpu()->s[0] = S0_6;
    Animation__set_value(common_scroll_bar.addr() + 0x3e8u);
    Layout__virtual_3(common_scroll_bar.addr() + 0x24cu);
    u32 pane_4 = Layout__find_pane(common_scroll_bar.addr() + 0x24cu, 0x857c10u, 1u, guest::cpu()->r[3]);
    notify_list_objects(common_scroll_bar.addr() + 0x24cu, common_scroll_bar.addr() + 0x3e8u, pane_4, 0u);
    u32 pane_5 = Layout__find_pane(common_scroll_bar.addr() + 0x24cu, 0x857c04u, 1u, guest::cpu()->r[3]);
    notify_list_objects(common_scroll_bar.addr() + 0x24cu, common_scroll_bar.addr() + 0x3e8u, pane_5, 0u);
    u32 pane_6 = Layout__find_pane(common_scroll_bar.addr() + 0x24cu, 0x857bf8u, 1u, guest::cpu()->r[3]);
    frame.release();
    notify_list_objects(pane_6, common_scroll_bar.addr() + 0x3e8u, pane_6, 0u);
    return;
}

}  // namespace d_002999ac
GUEST_EXPORT(0x002999ac, d_002999ac::CommonScrollBar__set_style);

// f_00299b30: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Constructs a common scroll bar: a layout with an archive accessor, its animations and button control.
namespace d_00299b30 {

struct __attribute__((packed)) Local_00299b30_r0_15 {
    u8 unknown_0[0x6f8];  // (not used here)
    u8 byte_6f8;
    u8 byte_6f9;
    u8 byte_6fa;
    u8 byte_6fb;
    u8 byte_6fc;
    u8 byte_6fd;
    u8 byte_6fe;
    u8 byte_6ff;
    u8 byte_700;
    u8 byte_701;
    u8 byte_702;
    u8 byte_703;
    u8 unknown_704[0x18];  // (not used here)
    u32 word_71c;
    u32 word_720;
    u8 unknown_724[0x4];  // (not used here)
    u32 word_728;
    u8 unknown_72c[0x18];  // (not used here)
    u8 byte_744;
    u8 unknown_745[0x7];  // (not used here)
    u32 word_74c;
    u32 word_750;
    u32 word_754;
    u32 word_758;
    u32 word_75c;
    u8 unknown_760[0x8];  // (not used here)
    u32 word_768;
    u32 word_76c;
    u32 word_770;
    u32 word_774;
    u32 word_778;
    u32 word_77c;
    u32 word_780;
    u32 word_784;
    u32 word_788;
    u32 word_78c;
    u32 word_790;
    u32 word_794;
};
GUEST_OFFSET(Local_00299b30_r0_15, byte_6f8, 0x6f8);
GUEST_OFFSET(Local_00299b30_r0_15, byte_6f9, 0x6f9);
GUEST_OFFSET(Local_00299b30_r0_15, byte_6fa, 0x6fa);
GUEST_OFFSET(Local_00299b30_r0_15, byte_6fb, 0x6fb);
GUEST_OFFSET(Local_00299b30_r0_15, byte_6fc, 0x6fc);
GUEST_OFFSET(Local_00299b30_r0_15, byte_6fd, 0x6fd);
GUEST_OFFSET(Local_00299b30_r0_15, byte_6fe, 0x6fe);
GUEST_OFFSET(Local_00299b30_r0_15, byte_6ff, 0x6ff);
GUEST_OFFSET(Local_00299b30_r0_15, byte_700, 0x700);
GUEST_OFFSET(Local_00299b30_r0_15, byte_701, 0x701);
GUEST_OFFSET(Local_00299b30_r0_15, byte_702, 0x702);
GUEST_OFFSET(Local_00299b30_r0_15, byte_703, 0x703);
GUEST_OFFSET(Local_00299b30_r0_15, word_71c, 0x71c);
GUEST_OFFSET(Local_00299b30_r0_15, word_720, 0x720);
GUEST_OFFSET(Local_00299b30_r0_15, word_728, 0x728);
GUEST_OFFSET(Local_00299b30_r0_15, byte_744, 0x744);
GUEST_OFFSET(Local_00299b30_r0_15, word_74c, 0x74c);
GUEST_OFFSET(Local_00299b30_r0_15, word_750, 0x750);
GUEST_OFFSET(Local_00299b30_r0_15, word_754, 0x754);
GUEST_OFFSET(Local_00299b30_r0_15, word_758, 0x758);
GUEST_OFFSET(Local_00299b30_r0_15, word_75c, 0x75c);
GUEST_OFFSET(Local_00299b30_r0_15, word_768, 0x768);
GUEST_OFFSET(Local_00299b30_r0_15, word_76c, 0x76c);
GUEST_OFFSET(Local_00299b30_r0_15, word_770, 0x770);
GUEST_OFFSET(Local_00299b30_r0_15, word_774, 0x774);
GUEST_OFFSET(Local_00299b30_r0_15, word_778, 0x778);
GUEST_OFFSET(Local_00299b30_r0_15, word_77c, 0x77c);
GUEST_OFFSET(Local_00299b30_r0_15, word_780, 0x780);
GUEST_OFFSET(Local_00299b30_r0_15, word_784, 0x784);
GUEST_OFFSET(Local_00299b30_r0_15, word_788, 0x788);
GUEST_OFFSET(Local_00299b30_r0_15, word_78c, 0x78c);
GUEST_OFFSET(Local_00299b30_r0_15, word_790, 0x790);
GUEST_OFFSET(Local_00299b30_r0_15, word_794, 0x794);

struct __attribute__((packed)) Local_00299b30_r1_8 {
    u8 unknown_0[0x304];  // (not used here)
    float float_304;
    float float_308;
    float float_30c;
    float float_310;
    float float_314;
    float float_318;
    u8 unknown_31c[0x8];  // (not used here)
    float float_324;
    u8 unknown_328[0x4];  // (not used here)
    float float_32c;
    float float_330;
    float float_334;
    float float_338;
    float float_33c;
    float float_340;
    u8 unknown_344[0x4];  // (not used here)
    float float_348;
};
GUEST_OFFSET(Local_00299b30_r1_8, float_304, 0x304);
GUEST_OFFSET(Local_00299b30_r1_8, float_308, 0x308);
GUEST_OFFSET(Local_00299b30_r1_8, float_30c, 0x30c);
GUEST_OFFSET(Local_00299b30_r1_8, float_310, 0x310);
GUEST_OFFSET(Local_00299b30_r1_8, float_314, 0x314);
GUEST_OFFSET(Local_00299b30_r1_8, float_318, 0x318);
GUEST_OFFSET(Local_00299b30_r1_8, float_324, 0x324);
GUEST_OFFSET(Local_00299b30_r1_8, float_32c, 0x32c);
GUEST_OFFSET(Local_00299b30_r1_8, float_330, 0x330);
GUEST_OFFSET(Local_00299b30_r1_8, float_334, 0x334);
GUEST_OFFSET(Local_00299b30_r1_8, float_338, 0x338);
GUEST_OFFSET(Local_00299b30_r1_8, float_33c, 0x33c);
GUEST_OFFSET(Local_00299b30_r1_8, float_340, 0x340);
GUEST_OFFSET(Local_00299b30_r1_8, float_348, 0x348);

struct __attribute__((packed)) Local_00299b30_r1_9 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_00299b30_r1_9, word_0, 0x0);
GUEST_OFFSET(Local_00299b30_r1_9, word_4, 0x4);

inline constexpr u32 vtable_CommonScrollBar = 0x008f0888u;
inline constexpr guest::Function<0x001207d8, u32(u32, u32, u32, u32)> ssys__ma__lyt__ArcResAcc__ArcResAcc_001207d8;
inline constexpr guest::Function<0x00125aec, u32(u32)> construct_layout_animation;
inline constexpr guest::Function<0x00125e08, u32(u32)> construct_layout_list;
inline constexpr guest::Function<0x00125e3c, u32(u32)> Layout__Layout;
inline constexpr guest::Function<0x002f7604, u32(u32)> construct_button_action_control;
inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> for_each_element;
inline constexpr guest::Function<0x006e5860, u32(u32)> PhaseCounter__reset;

u32 CommonScrollBar__CommonScrollBar(gptr<CommonScrollBar> common_scroll_bar, u32 r1, u32 r2, u32 r3, float S0) {
    common_scroll_bar->vtable = vtable_CommonScrollBar;
    u32 r0_5 = Layout__Layout(ssys__ma__lyt__ArcResAcc__ArcResAcc_001207d8(common_scroll_bar.addr() + 4u, vtable_CommonScrollBar, r2, r3) + 0x248u) + 0x14cu;
    construct_layout_animation(r0_5);
    u32 r0_6 = r0_5 + 0x28u;
    construct_layout_animation(r0_6);
    u32 r0_7 = r0_6 + 0x28u;
    construct_layout_animation(r0_7);
    u32 r0_8 = r0_7 + 0x28u;
    construct_layout_animation(r0_8);
    u32 r0_9 = r0_8 + 0x28u;
    construct_layout_list(r0_9);
    u32 r0_10 = r0_9 - 0x438u;
    *gptr<u8>(r0_10 + 0x444u) = 0;
    u32 r0_13 = for_each_element(r0_10 + 0x448u, 0x2b6de0u, 0xe0u, 2u) + 0x1c0u;
    construct_button_action_control(r0_13);
    u32 r0_14 = r0_13 + 0xe4u;
    PhaseCounter__reset(r0_14);
    gptr<Local_00299b30_r0_15> r0_15 = gptr<Local_00299b30_r0_15>(r0_14 - 0x6ecu);
    r0_15->byte_6f8 = 0;
    r0_15->byte_6f9 = 0;
    r0_15->byte_6fa = 0;
    r0_15->byte_6fb = 0;
    r0_15->byte_6fc = 1;
    r0_15->byte_6fd = 0;
    r0_15->byte_6fe = 0;
    r0_15->byte_6ff = 0;
    r0_15->byte_700 = 0;
    r0_15->byte_701 = 1;
    float S0_9 = 0.0f;
    gptr<Local_00299b30_r1_8> r1_8 = gptr<Local_00299b30_r1_8>(r0_15.addr() + 0x400u);
    r0_15->byte_702 = 0;
    r0_15->byte_703 = 0;
    r1_8->float_304 = S0_9;
    r1_8->float_308 = S0_9;
    r1_8->float_30c = S0_9;
    r1_8->float_310 = S0_9;
    r1_8->float_314 = S0_9;
    r1_8->float_318 = S0_9;
    r0_15->word_71c = 0;
    r0_15->word_720 = 0;
    r1_8->float_324 = S0_9;
    r0_15->word_728 = ~0u;
    r1_8->float_32c = S0_9;
    r1_8->float_330 = S0_9;
    r1_8->float_334 = S0_9;
    r1_8->float_338 = S0_9;
    r1_8->float_33c = S0_9;
    r1_8->float_340 = S0_9;
    r0_15->byte_744 = 0;
    r1_8->float_348 = S0_9;
    r0_15->word_74c = 0;
    r0_15->word_750 = 0;
    r0_15->word_754 = 0;
    gptr<Local_00299b30_r1_9> r1_9 = gptr<Local_00299b30_r1_9>(r0_15.addr() + 0x760u);
    r0_15->word_758 = 0;
    r0_15->word_75c = 0;
    r1_9->word_0 = r1;
    r1_9->word_4 = 0;
    r0_15->word_768 = 0;
    r0_15->word_76c = 0;
    r0_15->word_770 = 0;
    r0_15->word_774 = 0;
    r0_15->word_778 = 0;
    r0_15->word_77c = 0;
    r0_15->word_780 = 0;
    r0_15->word_784 = 0;
    r0_15->word_788 = 0;
    r0_15->word_78c = 0;
    r0_15->word_790 = 0;
    r0_15->word_794 = 0;
    guest::cpu()->r[1] = r1_9.addr();
    guest::cpu()->s[0] = S0_9;
    return r0_15.addr();
}

}  // namespace d_00299b30
GUEST_EXPORT_FRAMED(0x00299b30, d_00299b30::CommonScrollBar__CommonScrollBar, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0029a5f8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Starts the menu state (kind 0x20c, 0xb, 7) and tells the menu selection.
namespace d_0029a5f8 {

struct __attribute__((packed)) StartMenuState20cArg0 {
    u8 unknown_0[0xcc];  // (not used here)
    u32 word_cc;
    u16 half_d0;
    u8 unknown_d2[0x2];  // (not used here)
    u32 word_d4;
};
GUEST_OFFSET(StartMenuState20cArg0, word_cc, 0xcc);
GUEST_OFFSET(StartMenuState20cArg0, half_d0, 0xd0);
GUEST_OFFSET(StartMenuState20cArg0, word_d4, 0xd4);

struct __attribute__((packed)) Local_0029a5f8_r0_5 {
    u8 unknown_0[0x40];  // (not used here)
    u8 byte_40;
    u8 unknown_41[0x1b3];  // (not used here)
    u32 word_1f4;
};
GUEST_OFFSET(Local_0029a5f8_r0_5, byte_40, 0x40);
GUEST_OFFSET(Local_0029a5f8_r0_5, word_1f4, 0x1f4);

inline constexpr u32 menu_selection_address = 0x0094fd3cu;
inline guest::global<u32, 0x0094fd3c> menu_selection;
inline constexpr guest::Function<0x001fa354, u32(u32)> LayoutWindow__show_now;
inline constexpr guest::Function<0x006d1e64, u32(u32, u32, u32, u32)> get_state_30;

void start_menu_state_20c(gptr<StartMenuState20cArg0> arg0) {
    arg0->word_d4 = 0x20c;
    arg0->half_d0 = 0xb;
    arg0->word_cc = 7;
    u32 r0_1 = get_state_30(7u, 0xbu, guest::cpu()->r[2], guest::cpu()->r[3]);
    *gptr<u8>(r0_1 + 0x40u) = 1;
    u32 r0_2 = get_state_30(r0_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    LayoutWindow__show_now(*gptr<u32>(r0_2 + 0x1f4u));
    u32 r0_4 = arg0->word_cc;
    u32 r1_3 = *menu_selection;
    *gptr<u8>(r1_3 + 0x1fcu) = u8(r0_4);
    gptr<Local_0029a5f8_r0_5> r0_5 = gptr<Local_0029a5f8_r0_5>(get_state_30(r0_4, r1_3, guest::cpu()->r[2], guest::cpu()->r[3]));
    LayoutWindow__show_now(r0_5->word_1f4);
    r0_5->byte_40 = 0;
}

}  // namespace d_0029a5f8
GUEST_EXPORT_FRAMED(0x0029a5f8, d_0029a5f8::start_menu_state_20c, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0029b6f8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Updates a drag icon control: the button actions, then advances each shown icon's frame control.
namespace d_0029b6f8 {

inline constexpr guest::Function<0x002f71e4, u32(u32, u32, u32, u32)> ButtonActionControl__virtual_2;
inline constexpr guest::Function<0x00569544, u32(u32)> FrameControl__advance;
inline constexpr guest::Function<0x0074fdd0, u32(u32)> button_slot_check;

u32 DragIconControl__update(gptr<DragIconControl_rec> drag_icon_control_rec) {
    u32 r0 = drag_icon_control_rec.addr();
    u32 zf_2 = 0;
    u32 r4 = r0;
    ButtonActionControl__virtual_2(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_1 = drag_icon_control_rec->word_e8;
    u32 zf_1 = r0_1 == 0;
    if (!zf_1) {
        zf_1 = r0_1 - 0xcu == 0;
        r4 = r0_1 - 0xcu;
    }
    if (!zf_1) {
        u32 r5 = 1u;
        do {
            if (*gptr<u32>(r4 + 0x1cu) != 0 && *gptr<u32>(r4 + 0x38u) != 0 && *gptr<u8>(r4 + 0x3cu) != 0) {
                if (button_slot_check(r4 + 0x20u) == 0) {
                    FrameControl__advance(r4 + 0x20u);
                    *gptr<u8>(*gptr<u32>(r4 + 0x18u) + 0x122u) = u8(r5);
                }
            }
            r0_1 = *gptr<u32>(r4 + 0x14u);
            zf_2 = r0_1 == 0;
            if (!zf_2) {
                zf_2 = r0_1 - 0xcu == 0;
                r4 = r0_1 - 0xcu;
            }
            guest::preempt();
        } while (!zf_2);
    }
    return r0_1;
}

}  // namespace d_0029b6f8
GUEST_EXPORT_FRAMED(0x0029b6f8, d_0029b6f8::DragIconControl__update, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0029b840: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Sets bit `index` (below 399) of the bit set.
namespace d_0029b840 {


void BitSet399__set(u32 bit_set399, u32 r1) {
    if (r1 >= 0x18fu) {
        return;
    }
    *gptr<u8>(bit_set399 + (r1 >> 3)) = u8(u32(*gptr<u8>(bit_set399 + (r1 >> 3))) | 1u << (r1 & 7u));
}

}  // namespace d_0029b840
GUEST_EXPORT(0x0029b840, d_0029b840::BitSet399__set);

// f_0029b868: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Clears the 50-byte bit set.
namespace d_0029b868 {

inline constexpr guest::Function<0x00301444, u32(u32, u32)> clear;

void BitSet399__clear() {
    clear(guest::cpu()->r[0], 0x32u);
    return;
}

}  // namespace d_0029b868
GUEST_EXPORT(0x0029b868, d_0029b868::BitSet399__clear);

// f_0029bde8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The half-tile coordinates of the cell (two per tile, by the tile's shape).
namespace d_0029bde8 {

struct __attribute__((packed)) HalfTileOfPositionArg0 {
    u8 byte_0;
    u8 byte_1;
};
GUEST_OFFSET(HalfTileOfPositionArg0, byte_0, 0x0);
GUEST_OFFSET(HalfTileOfPositionArg0, byte_1, 0x1);

struct __attribute__((packed)) HalfTileOfPositionArg1 {
    u8 byte_0;
    u8 byte_1;
};
GUEST_OFFSET(HalfTileOfPositionArg1, byte_0, 0x0);
GUEST_OFFSET(HalfTileOfPositionArg1, byte_1, 0x1);

struct __attribute__((packed)) Local_0029bde8_r5_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_0029bde8_r5_1, word_0, 0x0);
GUEST_OFFSET(Local_0029bde8_r5_1, word_4, 0x4);
GUEST_OFFSET(Local_0029bde8_r5_1, word_8, 0x8);

inline constexpr guest::Function<0x0057bb70, u32(u32)> is_mode_0_or_2;
inline constexpr guest::Function<0x0057bb84, u32(u32)> is_mode_0_or_1;
inline constexpr guest::Function<0x006a6ec0, u32(u32, u32, u32, u32)> split_world_position;
inline constexpr guest::Function<0x006c7a9c, u32(u32, u32, u32, u32)> large_cell_value_at_block_tile;

struct __attribute__((packed)) HalfTileOfPositionFrame {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u8 unknown_10[0x4];  // (not read or written by name)
    u32 word_14;
    u8 unknown_18[0x4];  // (not read or written by name)
};
GUEST_OFFSET(HalfTileOfPositionFrame, word_0, 0x0);
GUEST_OFFSET(HalfTileOfPositionFrame, word_4, 0x4);
GUEST_OFFSET(HalfTileOfPositionFrame, word_8, 0x8);
GUEST_OFFSET(HalfTileOfPositionFrame, word_c, 0xc);
GUEST_OFFSET(HalfTileOfPositionFrame, word_14, 0x14);
GUEST_SIZE(HalfTileOfPositionFrame, 0x1c);

void half_tile_of_position(gptr<HalfTileOfPositionArg0> arg0, gptr<HalfTileOfPositionArg1> arg1) {
    guest::StackFrameOf<HalfTileOfPositionFrame> frame;  // the original's stack frame
    u32 r1_1 = arg1->byte_0;
    frame->word_4 = u32(arg1->byte_1);
    frame->word_0 = r1_1;
    split_world_position(frame.at(8).addr(), frame.at(0xc).addr(), frame.at(0x14).addr(), frame.at(0x10).addr());
    gptr<Local_0029bde8_r5_1> r5_1 = gptr<Local_0029bde8_r5_1>(frame.at(8).addr());
    frame->word_0 = 1;
    u32 r0_3 = large_cell_value_at_block_tile(r5_1->word_0, r5_1->word_4, frame->word_14, r5_1->word_8);
    arg0->byte_0 = u8(frame->word_8 << 1);
    if (is_mode_0_or_2(r0_3) == 0) {
        arg0->byte_0 = u8(u32(arg0->byte_0) + 1u);
    }
    arg0->byte_1 = u8(frame->word_c << 1);
    if (is_mode_0_or_1(r0_3) != 0) {
        return;
    }
    arg0->byte_1 = u8(u32(arg0->byte_1) + 1u);
}

}  // namespace d_0029bde8
GUEST_EXPORT_FRAMED(0x0029bde8, d_0029bde8::half_tile_of_position, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_0029bfa4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Stores the 6 items of the outfit into outfit slot `index` (+0x18) of the player (the first slot's player in a
// session) and refreshes its view.
namespace d_0029bfa4 {

inline constexpr u32 letter_item_params_address = 0x009845b8u;
inline guest::global<u32, 0x0014f928> global_0014f928;
inline constexpr guest::Function<0x0014f914, u32(u32)> import_thunk_14f914;
inline constexpr guest::Function<0x002a7190, u32(u32, u32)> PlayerOutfits4__outfit_at;
inline constexpr guest::Function<0x002fb94c, u32(u32)> get_current_player;
inline constexpr guest::Function<0x002fc8e8, u32(u32, u32)> Item__copy;
inline constexpr guest::Function<0x002fc900, u32(u32, u32, u32, u32)> mode_above_1;
inline constexpr guest::Function<0x002fe8a8, u32(u32)> player_of_slot_index;

void Player__store_outfit(u32 player, u32 r1) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 r0_2 = 0;
    u32 r5_1 = *gptr<u8>(player + 0x18u);
    u32 r0_1 = mode_above_1(player, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0_1 != 0) {
        r0_2 = player_of_slot_index(0u);
    } else {
        r0_2 = get_current_player(r0_1);
    }
    u32 outfit_2 = PlayerOutfits4__outfit_at(r0_2 + 0x5544u, r5_1);
    Item__copy(outfit_2, player);
    Item__copy(outfit_2 + 4u, player + 4u);
    Item__copy(outfit_2 + 8u, player + 8u);
    Item__copy(outfit_2 + 0xcu, player + 0xcu);
    Item__copy(outfit_2 + 0x10u, player + 0x10u);
    Item__copy(outfit_2 + 0x14u, player + 0x14u);
    u32 r4_1 = *gptr<u8>(player + 0x18u);
    u32 r0_10 = gptr<u32>(letter_item_params_address)[r4_1];
    if (r0_10 != 0) {
        import_thunk_14f914(r0_10);
        u32 r0_11 = gptr<u32>(letter_item_params_address)[r4_1];
        frame.release();
        guest::call_address<u32>(*global_0014f928, r0_11, 0x1000583u, guest::cpu()->r[2], guest::cpu()->r[3]);
        return;
    }
}

}  // namespace d_0029bfa4
GUEST_EXPORT(0x0029bfa4, d_0029bfa4::Player__store_outfit);

// f_0029c964: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Sets the state and clears its stage.
namespace d_0029c964 {

struct __attribute__((packed)) StatePair {
    u8 byte_0;
    u8 byte_1;
};
GUEST_OFFSET(StatePair, byte_0, 0x0);
GUEST_OFFSET(StatePair, byte_1, 0x1);


void StatePair__set(gptr<StatePair> state_pair, u32 r1) {
    state_pair->byte_0 = u8(r1);
    state_pair->byte_1 = 0;
}

}  // namespace d_0029c964
GUEST_EXPORT(0x0029c964, d_0029c964::StatePair__set);

// f_0029c974: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Sets state 2 with the word.
namespace d_0029c974 {

struct __attribute__((packed)) StatePair {
    u8 byte_0;
    u8 byte_1;
    u8 unknown_2[0x2];  // (not used here)
    u32 word_4;
};
GUEST_OFFSET(StatePair, byte_0, 0x0);
GUEST_OFFSET(StatePair, byte_1, 0x1);
GUEST_OFFSET(StatePair, word_4, 0x4);

struct __attribute__((packed)) StatePairSet2WithWordArg1 {
    u32 word_0;
};
GUEST_OFFSET(StatePairSet2WithWordArg1, word_0, 0x0);


void StatePair__set_2_with_word(gptr<StatePair> state_pair, gptr<StatePairSet2WithWordArg1> arg1) {
    state_pair->byte_0 = 2;
    state_pair->byte_1 = 0;
    state_pair->word_4 = arg1->word_0;
}

}  // namespace d_0029c974
GUEST_EXPORT(0x0029c974, d_0029c974::StatePair__set_2_with_word);

// f_0029cc7c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Resets the 10 network entries (kind 0x24, index 0xa5) and their sent flags.
namespace d_0029cc7c {

struct __attribute__((packed)) Local_0029cc7c_r1_1 {
    u8 unknown_0[0x4];  // (not used here)
    u8 byte_4;
    u8 byte_5;
    u8 byte_6;
};
GUEST_OFFSET(Local_0029cc7c_r1_1, byte_4, 0x4);
GUEST_OFFSET(Local_0029cc7c_r1_1, byte_5, 0x5);
GUEST_OFFSET(Local_0029cc7c_r1_1, byte_6, 0x6);

struct __attribute__((packed)) Local_0029cc7c_r3_1 {
    u8 byte_0;
};
GUEST_OFFSET(Local_0029cc7c_r3_1, byte_0, 0x0);


u32 NetEntries10__reset(u32 net_entries10) {
    u32 i = 0u;
    u32 r3 = net_entries10 + 0x10u;
    u32 r12 = 0xau;
    u32 r5 = 0xa5u;
    u32 r4 = i;
    do {
        gptr<Local_0029cc7c_r1_1> r1_1 = gptr<Local_0029cc7c_r1_1>(r3 + (i << 4));
        i += 1u;
        r1_1->byte_5 = u8(u32(r1_1->byte_5) & ~0xffu | 0x24u);
        r1_1->byte_6 = u8(r4);
        r1_1->byte_4 = u8(r5);
        guest::preempt();
    } while (i != r12);
    u32 j = 0u;
    net_entries10 += 0x400u;
    i = 0xau;
    do {
        gptr<Local_0029cc7c_r3_1> r3_1 = gptr<Local_0029cc7c_r3_1>(net_entries10 + j);
        j += 1u;
        r3_1->byte_0 = u8(u32(r3_1->byte_0) & ~1u);
        guest::preempt();
    } while (j != i);
    guest::cpu()->r[1] = j;
    return net_entries10;
}

}  // namespace d_0029cc7c
GUEST_EXPORT_FRAMED(0x0029cc7c, d_0029cc7c::NetEntries10__reset, 0x70);  // pushes {r4, r5, r6} first, as the original

// f_0029cd5c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Copies the 63 template entries (from template 9) and resets their kinds and sent flags.
namespace d_0029cd5c {

struct __attribute__((packed)) Local_0029cd5c_r0_2 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Local_0029cd5c_r0_2, word_0, 0x0);
GUEST_OFFSET(Local_0029cd5c_r0_2, word_4, 0x4);
GUEST_OFFSET(Local_0029cd5c_r0_2, word_8, 0x8);
GUEST_OFFSET(Local_0029cd5c_r0_2, word_c, 0xc);

struct __attribute__((packed)) Local_0029cd5c_r0_3 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Local_0029cd5c_r0_3, word_0, 0x0);
GUEST_OFFSET(Local_0029cd5c_r0_3, word_4, 0x4);
GUEST_OFFSET(Local_0029cd5c_r0_3, word_8, 0x8);
GUEST_OFFSET(Local_0029cd5c_r0_3, word_c, 0xc);

struct __attribute__((packed)) Local_0029cd5c_r0_4 {
    u8 unknown_0[0x5];  // (not used here)
    u8 byte_5;
    u8 byte_6;
};
GUEST_OFFSET(Local_0029cd5c_r0_4, byte_5, 0x5);
GUEST_OFFSET(Local_0029cd5c_r0_4, byte_6, 0x6);

struct __attribute__((packed)) Local_0029cd5c_r3_1 {
    u8 byte_0;
};
GUEST_OFFSET(Local_0029cd5c_r3_1, byte_0, 0x0);

inline constexpr guest::Function<0x006268f8, u32(u32, u32, u32, u32)> entry_template_address;

void NetEntries63__load_templates(u32 net_entries63, u32 j, u32 r2, u32 r3) {
    u32 r5 = net_entries63 + 0x10u;
    u32 r7 = net_entries63;
    u32 i = 0u;
    u32 r6 = 0x3fu;
    do {
        gptr<Local_0029cd5c_r0_2> r0_2 = gptr<Local_0029cd5c_r0_2>(entry_template_address(i + 9u & 0xffu, j, r2, r3));
        r3 = guest::cpu()->r[3];
        u32 r2_1 = r0_2->word_0;
        gptr<Local_0029cd5c_r0_3> r0_3 = gptr<Local_0029cd5c_r0_3>(r5 + (i << 4));
        i += 1u;
        r0_3->word_0 = r2_1;
        r0_3->word_4 = r0_2->word_4;
        r2 = r0_2->word_8;
        r0_3->word_8 = r2;
        j = r0_2->word_c;
        r0_3->word_c = j;
        guest::preempt();
    } while (i != r6);
    j = 0u;
    r2 = r7 + 0x10u;
    r3 = 0x3fu;
    u32 r12 = j;
    do {
        gptr<Local_0029cd5c_r0_4> r0_4 = gptr<Local_0029cd5c_r0_4>(r2 + (j << 4));
        j += 1u;
        r0_4->byte_5 = u8(u32(r0_4->byte_5) & ~0xffu | 0x24u);
        r0_4->byte_6 = u8(r12);
        guest::preempt();
    } while (j != r3);
    j = r7 + 0x400u;
    net_entries63 = 0u;
    r2 = 0x3fu;
    do {
        gptr<Local_0029cd5c_r3_1> r3_1 = gptr<Local_0029cd5c_r3_1>(j + net_entries63);
        net_entries63 += 1u;
        r3_1->byte_0 = u8(u32(r3_1->byte_0) & ~1u);
        guest::preempt();
    } while (net_entries63 != r2);
}

}  // namespace d_0029cd5c
GUEST_EXPORT_FRAMED(0x0029cd5c, d_0029cd5c::NetEntries63__load_templates, 0x41f0);  // pushes {i, r5, r6, r7, r8, lr} first, as the original

// f_0029ce80: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Resets the 63 entries' kinds and, when idle in a session, applies them as templates; clears their sent flags.
namespace d_0029ce80 {

struct __attribute__((packed)) Local_0029ce80_r0_2 {
    u8 unknown_0[0x5];  // (not used here)
    u8 byte_5;
    u8 byte_6;
};
GUEST_OFFSET(Local_0029ce80_r0_2, byte_5, 0x5);
GUEST_OFFSET(Local_0029ce80_r0_2, byte_6, 0x6);

struct __attribute__((packed)) Local_0029ce80_r3_1 {
    u8 byte_0;
};
GUEST_OFFSET(Local_0029ce80_r3_1, byte_0, 0x0);

inline constexpr guest::Function<0x0030b6c4, u32(u32, u32, u32, u32)> main_object_idle;
inline constexpr guest::Function<0x0062512c, u32(u32, u32, u32, u32)> apply_entry_template;

void NetEntries63__reset_and_share(u32 net_entries63, u32 r1, u32 r2, u32 r3) {
    u32 r8 = net_entries63;
    u32 r0_1 = main_object_idle(net_entries63, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    u32 i = 0u;
    u32 r7 = r0_1;
    u32 r5 = r8 + 0x10u;
    u32 r6 = 0x3fu;
    u32 r9 = i;
    do {
        gptr<Local_0029ce80_r0_2> r0_2 = gptr<Local_0029ce80_r0_2>(r5 + (i << 4));
        r0_2->byte_5 = u8(u32(r0_2->byte_5) & ~0xffu | 0x24u);
        r0_2->byte_6 = u8(r9);
        if (r7 != 0) {
            apply_entry_template(i + 9u & 0xffu, r5 + (i << 4), 1u, r3);
            r3 = guest::cpu()->r[3];
        }
        i += 1u;
        guest::preempt();
    } while (i != r6);
    r1 = r8 + 0x400u;
    net_entries63 = 0u;
    r2 = 0x3fu;
    do {
        gptr<Local_0029ce80_r3_1> r3_1 = gptr<Local_0029ce80_r3_1>(r1 + net_entries63);
        net_entries63 += 1u;
        r3_1->byte_0 = u8(u32(r3_1->byte_0) & ~1u);
        guest::preempt();
    } while (net_entries63 != r2);
    guest::cpu()->r[1] = r1;
}

}  // namespace d_0029ce80
GUEST_EXPORT_FRAMED(0x0029ce80, d_0029ce80::NetEntries63__reset_and_share, 0x47f0);  // pushes {i, r5, r6, r7, r8, r9, r10, lr} first, as the original

// f_0029cf30: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Finishes releasing an entry: applies the template of kind arg 1 + 9.
namespace d_0029cf30 {

inline constexpr guest::Function<0x0062512c, u32(u32, u32, u32)> apply_entry_template;

u32 finish_entry_release(u32 r0, u32 r1) {
    return apply_entry_template(r1 + 9u & 0xffu, r0, guest::cpu()->r[2]);
}

}  // namespace d_0029cf30
GUEST_EXPORT(0x0029cf30, d_0029cf30::finish_entry_release);

// f_0029cf7c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Creates the singleton on a heap (arg 0), with its disposer, unless it exists.
namespace d_0029cf7c {

inline constexpr u32 vtable_NpcNetShareInfo__SingletonDisposer_ = 0x008fa968u;
inline constexpr u32 npc_net_share_info_instance_address = 0x0095386cu;
inline guest::global<u32, 0x0095386c> npc_net_share_info_instance;
inline guest::global<u32, 0x00953870> npc_net_share_info_disposer;
inline constexpr guest::Function<0x00131280, u32(u32, u32, u32, u32)> allocate_on_heap_entry;
inline constexpr guest::Function<0x001320cc, u32(u32, u32, u32)> IDisposer__construct_in_heap;
inline constexpr guest::Function<0x002f9aa8, u32(u32)> NpcNetShareInfo__NpcNetShareInfo;

u32 NpcNetShareInfo__create_instance(u32 singleton_disposer) {
    u32 r0_1 = *npc_net_share_info_instance;
    if (r0_1 == 0) {
        u32 block_2 = allocate_on_heap_entry(0xc4u, singleton_disposer, 4u, guest::cpu()->r[3]);
        u32 i_disposer = block_2 + 0xb4u;
        if (i_disposer != 0) {
            i_disposer = IDisposer__construct_in_heap(i_disposer, singleton_disposer, 3u);
            *gptr<u32>(i_disposer) = vtable_NpcNetShareInfo__SingletonDisposer_;
        }
        *npc_net_share_info_disposer = i_disposer;
        if (block_2 == 0) {
            r0_1 = 0u;
        } else {
            r0_1 = NpcNetShareInfo__NpcNetShareInfo(block_2);
        }
        *npc_net_share_info_instance = r0_1;
    }
    return r0_1;
}

}  // namespace d_0029cf7c
GUEST_EXPORT_FRAMED(0x0029cf7c, d_0029cf7c::NpcNetShareInfo__create_instance, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0029d150: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Zeroes the 64 bytes at +0x10.
namespace d_0029d150 {


u32 clear_64_bytes_10(u32 i) {
    u32 r1 = i + 0x10u;
    i = 0u;
    u32 r2 = 0x40u;
    u32 r12 = i;
    do {
        *gptr<u8>(r1 + i) = u8(r12);
        i += 1u;
        guest::preempt();
    } while (i != r2);
    guest::cpu()->r[1] = r1;
    return i;
}

}  // namespace d_0029d150
GUEST_EXPORT(0x0029d150, d_0029d150::clear_64_bytes_10);

// f_0029d228: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Shares the NPCs' permits and schedules with the waited stations.
namespace d_0029d228 {

struct __attribute__((packed)) Local_0029d228_r0_8 {
    u8 byte_0;
};
GUEST_OFFSET(Local_0029d228_r0_8, byte_0, 0x0);

inline constexpr u32 npc_permit_bit_mgr_instance_address = 0x00953874u;
inline constexpr guest::Function<0x002068b8, u32(u32, u32, u32, u32)> send_npc_schedule_message;
inline constexpr guest::Function<0x00305f44, u32(u32, u32, u32, u32)> current_net_station;
inline constexpr guest::Function<0x0030b6c4, u32(u32, u32)> main_object_idle;
inline constexpr guest::Function<0x006249b0, u32(u32, u32, u32, u32)> send_message;
inline constexpr guest::Function<0x00624f00, u32(u32, u32, u32, u32)> station_is_waited_for;

struct __attribute__((packed)) NpcPermitBitMgrShareSchedulesFrame {
    u8 byte_0;
    u8 byte_1;
    u8 byte_2;
    u8 byte_3;
    u8 byte_4;
    u8 byte_5;
    u8 byte_6;
    u8 unknown_7[0x5];  // (not read or written by name)
};
GUEST_OFFSET(NpcPermitBitMgrShareSchedulesFrame, byte_0, 0x0);
GUEST_OFFSET(NpcPermitBitMgrShareSchedulesFrame, byte_1, 0x1);
GUEST_OFFSET(NpcPermitBitMgrShareSchedulesFrame, byte_2, 0x2);
GUEST_OFFSET(NpcPermitBitMgrShareSchedulesFrame, byte_3, 0x3);
GUEST_OFFSET(NpcPermitBitMgrShareSchedulesFrame, byte_4, 0x4);
GUEST_OFFSET(NpcPermitBitMgrShareSchedulesFrame, byte_5, 0x5);
GUEST_OFFSET(NpcPermitBitMgrShareSchedulesFrame, byte_6, 0x6);
GUEST_SIZE(NpcPermitBitMgrShareSchedulesFrame, 0xc);

u32 NpcPermitBitMgr__share_schedules(u32 npc_permit_bit_mgr, u32 r1_unused, u32 r2_unused, u32 r3) {
    guest::StackFrameOf<NpcPermitBitMgrShareSchedulesFrame> frame;  // the original's stack frame
    u32 r0_10 = 0;
    u32 r7 = 0u;
    u32 r2_1 = npc_permit_bit_mgr & 0xf8u;
    u32 r0_1 = 9u | npc_permit_bit_mgr << 5;
    frame->byte_2 = u8(r7);
    frame->byte_3 = u8(r7);
    frame->byte_4 = u8(r7);
    u32 r1_1 = r7 | r2_1 >> 3;
    frame->byte_5 = u8(r7);
    frame->byte_0 = u8(r0_1);
    frame->byte_6 = u8(r7);
    frame->byte_1 = u8(r1_1);
    u32 station = current_net_station(r0_1, r1_1, r2_1, r3);
    u32 r1_2 = u32(frame->byte_1) & ~0xe0u;
    u32 r0_3 = r1_2 | station << 5;
    frame->byte_1 = u8(r0_3);
    if (main_object_idle(r0_3, r1_2) != 0) {
        u32 r0_5 = npc_permit_bit_mgr_instance_address;
        u32 r1 = *gptr<u32>(r0_5);
        if (r1 != 0) {
            u32 r5 = r1 + 0x10u;
            u32 r6 = frame.at(0).addr();
            u32 r2_3 = u32(frame->byte_0) >> 5;
            u32 r0_6 = r2_3 + (u32(frame->byte_1) << 3) & 0xffu;
            if (r0_6 < 0x40u) {
                r5 += r0_6;
            }
            u32 station_2 = current_net_station(r0_6, r1, r2_3, guest::cpu()->r[3]);
            r1 = guest::cpu()->r[1];
            u32 r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            if (station_2 < 4u) {
                r3 = station_2 & 7u;
                gptr<Local_0029d228_r0_8> r0_8 = gptr<Local_0029d228_r0_8>(r5 + (station_2 >> 3));
                r2 = 1u;
                r1 = u32(r0_8->byte_0) | lsl_r(r2, r3 & 0xff);
                r0_8->byte_0 = u8(r1);
            }
            u32 i = 0u;
            do {
                u32 r0_9 = i & 0xffu;
                if (r0_9 < 4u) {
                    r1 = *gptr<u8>(r5 + (r0_9 >> 3));
                    if ((r1 >> (r0_9 & 7u) & 1u) != 0) {
                        goto L_29d310;
                    }
                }
                r0_10 = i & 0xffu;
                r0_5 = station_is_waited_for(r0_10, r1, r2, r3);
                r1 = guest::cpu()->r[1];
                r2 = guest::cpu()->r[2];
                r3 = guest::cpu()->r[3];
                if (r0_5 != 0) {
                    return r0_5;
                }
L_29d310:;
                i += 1u;
                guest::preempt();
            } while (i < 4u);
            *gptr<u8>(r5) = u8(r7);
            r0_5 = send_npc_schedule_message(r5, r6, r2, r3);
            r1 = guest::cpu()->r[1];
        }
        guest::cpu()->r[1] = r1;
        return r0_5;
    }
    return send_message(0x40u, 0u, frame.at(0).addr(), 7u);
}

}  // namespace d_0029d228
GUEST_EXPORT_FRAMED(0x0029d228, d_0029d228::NpcPermitBitMgr__share_schedules, 0x40f0);  // pushes {i, r5, r6, r7, lr} first, as the original

// f_0029d354: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Requests the permit of NPC `slot`: marks its packet sent and asks the host (message 0x40), or, as the host, grants
// it directly.
namespace d_0029d354 {

struct __attribute__((packed)) Local_0029d354_r0_3 {
    u8 byte_0;
};
GUEST_OFFSET(Local_0029d354_r0_3, byte_0, 0x0);

inline constexpr u32 npc_net_packet_mgr_instance_address = 0x00953864u;
inline constexpr u32 npc_permit_bit_mgr_instance_address = 0x00953874u;
inline guest::global<u32, 0x00953864> npc_net_packet_mgr_instance;
inline guest::global<u32, 0x00953874> npc_permit_bit_mgr_instance;
inline constexpr guest::Function<0x00206728, u32(u32, u32, u32)> apply_entry_reload;
inline constexpr guest::Function<0x00305f44, u32(u32, u32, u32, u32)> current_net_station;
inline constexpr guest::Function<0x006249b0, u32(u32, u32, u32, u32)> send_message;

struct __attribute__((packed)) NpcPermitBitMgrRequestPermitFrame {
    u8 byte_0;
    u8 byte_1;
    u8 byte_2;
    u8 byte_3;
    u8 byte_4;
    u8 byte_5;
    u8 byte_6;
    u8 unknown_7[0x1];  // (not read or written by name)
};
GUEST_OFFSET(NpcPermitBitMgrRequestPermitFrame, byte_0, 0x0);
GUEST_OFFSET(NpcPermitBitMgrRequestPermitFrame, byte_1, 0x1);
GUEST_OFFSET(NpcPermitBitMgrRequestPermitFrame, byte_2, 0x2);
GUEST_OFFSET(NpcPermitBitMgrRequestPermitFrame, byte_3, 0x3);
GUEST_OFFSET(NpcPermitBitMgrRequestPermitFrame, byte_4, 0x4);
GUEST_OFFSET(NpcPermitBitMgrRequestPermitFrame, byte_5, 0x5);
GUEST_OFFSET(NpcPermitBitMgrRequestPermitFrame, byte_6, 0x6);
GUEST_SIZE(NpcPermitBitMgrRequestPermitFrame, 0x8);

u32 NpcPermitBitMgr__request_permit(u32 r0_unused, u32 r1, u32 r2_unused, u32 r3) {
    guest::StackFrameOf<NpcPermitBitMgrRequestPermitFrame> frame;  // the original's stack frame
    frame->byte_2 = 0;
    frame->byte_4 = 0;
    u32 r2_1 = r1 & 0xf8u;
    frame->byte_3 = 0;
    frame->byte_5 = 0;
    u32 r1_1 = 7u | r1 << 5;
    frame->byte_6 = 0;
    u32 r0_1 = r2_1 >> 3;
    frame->byte_0 = u8(r1_1);
    frame->byte_1 = u8(r0_1);
    u32 station = current_net_station(r0_1, r1_1, r2_1, r3);
    u32 r1_2 = u32(frame->byte_1) & ~0xe0u;
    frame->byte_1 = u8(r1_2 | station << 5);
    gptr<Local_0029d354_r0_3> r0_3 = gptr<Local_0029d354_r0_3>(*npc_net_packet_mgr_instance);
    if (r0_3.addr() != 0) {
        r0_3 = gptr<Local_0029d354_r0_3>(r0_3.addr() + 0x400u);
        if (r1 < 0x3fu) {
            r0_3 = gptr<Local_0029d354_r0_3>(r0_3.addr() + r1);
        }
        r1_2 = u32(r0_3->byte_0) | 1u;
        r0_3->byte_0 = u8(r1_2);
    }
    u32 station_2 = current_net_station(r0_3.addr(), r1_2, guest::cpu()->r[2], guest::cpu()->r[3]);
    if (station_2 != 0) {
        return send_message(0x40u, 0u, frame.at(0).addr(), 7u);
    }
    u32 r1_4 = *npc_permit_bit_mgr_instance;
    if (r1_4 == 0) {
        guest::cpu()->r[1] = r1_4;
        return npc_permit_bit_mgr_instance_address;
    }
    u32 r4_1 = r1_4 + 0x10u;
    u32 r2_4 = u32(frame->byte_0) >> 5;
    u32 r0_6 = r2_4 + (u32(frame->byte_1) << 3) & 0xffu;
    if (r0_6 < 0x40u) {
        r4_1 += r0_6;
    }
    u32 station_3 = current_net_station(r0_6, r1_4, r2_4, guest::cpu()->r[3]);
    return apply_entry_reload(r4_1, frame.at(0).addr(), station_3);
}

}  // namespace d_0029d354
GUEST_EXPORT_FRAMED(0x0029d354, d_0029d354::NpcPermitBitMgr__request_permit, 0x4010);  // pushes {r4, lr} first, as the original

// f_0029e154: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Constructs a special NPC's talk receptor: an NPC talk receptor for an NPC (arg 2).
namespace d_0029e154 {

struct __attribute__((packed)) Local_0029e154_r0_1 {
    u32 vtable;
    u8 unknown_4[0x78];  // (not used here)
    u32 npc_sp_talk_recept_vtable;
    u8 unknown_80[0x1e0];  // (not used here)
    u32 word_260;
    u8 unknown_264[0xc];  // (not used here)
    u32 word_270;
};
GUEST_OFFSET(Local_0029e154_r0_1, vtable, 0x0);
GUEST_OFFSET(Local_0029e154_r0_1, npc_sp_talk_recept_vtable, 0x7c);
GUEST_OFFSET(Local_0029e154_r0_1, word_260, 0x260);
GUEST_OFFSET(Local_0029e154_r0_1, word_270, 0x270);

inline constexpr u32 vtable_NpcSpTalkRecept = 0x008f0c00u;
inline constexpr u32 vtable_NpcSpTalkRecept_at_7c = 0x008f0d74u;
inline constexpr guest::Function<0x0023a9dc, u32(u32, u32, u32, u32)> NpcTalkRecept__NpcTalkRecept;

u32 NpcSpTalkRecept__NpcSpTalkRecept(u32 npc_sp_talk_recept, u32 r1, u32 r2, u32 r3) {
    gptr<Local_0029e154_r0_1> r0_1 = gptr<Local_0029e154_r0_1>(NpcTalkRecept__NpcTalkRecept(npc_sp_talk_recept, r1, r2, r3));
    r0_1->npc_sp_talk_recept_vtable = vtable_NpcSpTalkRecept_at_7c;
    r0_1->word_270 = 0;
    r0_1->vtable = vtable_NpcSpTalkRecept;
    r0_1->word_260 = r2;
    guest::cpu()->r[1] = vtable_NpcSpTalkRecept_at_7c;
    return r0_1.addr();
}

}  // namespace d_0029e154
GUEST_EXPORT_FRAMED(0x0029e154, d_0029e154::NpcSpTalkRecept__NpcSpTalkRecept, 0x4010);  // pushes {r4, lr} first, as the original

// f_0029e9a8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Clears bits 2 to 5 of the first byte and sets the 3-bit mode of +3 to 4.
namespace d_0029e9a8 {

struct __attribute__((packed)) PackedRecord {
    u8 byte_0;
    u8 unknown_1[0x2];  // (not used here)
    u8 byte_3;
};
GUEST_OFFSET(PackedRecord, byte_0, 0x0);
GUEST_OFFSET(PackedRecord, byte_3, 0x3);


void PackedRecord__reset_mode_4(gptr<PackedRecord> packed_record) {
    packed_record->byte_0 = u8(u32(packed_record->byte_0) & ~0x3cu);
    u32 r1_1 = u32(packed_record->byte_3) & ~0x1cu | 0x10u;
    packed_record->byte_3 = u8(r1_1);
    guest::cpu()->r[1] = r1_1;
}

}  // namespace d_0029e9a8
GUEST_EXPORT(0x0029e9a8, d_0029e9a8::PackedRecord__reset_mode_4);
