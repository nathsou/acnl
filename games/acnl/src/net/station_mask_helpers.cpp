// Helpers on the station masks of the session: removing a station from the masks of an object, copies of the
// session's mask that are removed from and dropped, and the starting state of the confirm machine.
#include "net/net_session.hpp"
#include "net/station_mask.hpp"

using guest::gptr;

namespace {

constexpr u32 FLAG_BYTE_OFFSET = 0x253e;
constexpr u32 CONFIRM_MACHINE_VTABLE = 0x0090ac18;

inline constexpr guest::Function<0x00624c68, void(gptr<void> pair)> clear_flag_pair;
inline constexpr guest::Function<0x00624c90, void(gptr<void> pair)> clear_flag_pair_b;
inline constexpr guest::Function<0x0075e7f8, bool(gptr<void> object)> all_entries_flagged;
inline guest::global<u16, 0x00953600> recorded_value;
inline constexpr guest::Function<0x0075e758, bool(gptr<void> object, u32 index)> mask_bit_set;

// An object with three masks (at 8, 0x10 and 0x18) and a flag byte far after them.
struct ThreeMasks {
    u8 unknown_00[8];
    StationMask mask_08;
    u8 unknown_0a[6];
    StationMask mask_10;
    u8 unknown_12[6];
    StationMask mask_18;
    u8 unknown_1a[FLAG_BYTE_OFFSET - 0x1a];
    u8 flag_253e;
};
GUEST_OFFSET(ThreeMasks, mask_08, 8);
GUEST_OFFSET(ThreeMasks, mask_10, 0x10);
GUEST_OFFSET(ThreeMasks, mask_18, 0x18);
GUEST_OFFSET(ThreeMasks, flag_253e, FLAG_BYTE_OFFSET);

struct OneMask {
    u8 unknown_00[8];
    StationMask mask_08;
};
GUEST_OFFSET(OneMask, mask_08, 8);

// Objects with a state byte, flag pairs from 8 and two trailing bytes.
struct PairHolder {
    u8 state_00;
    u8 unknown_01[7];
    u8 pair_08[2];
    u8 unknown_0a[4];
    u8 byte_0e;
    u8 byte_0f;
};
GUEST_OFFSET(PairHolder, pair_08, 8);
GUEST_OFFSET(PairHolder, byte_0e, 0xe);

struct ConfirmMachine {
    u8 state_00;
    u8 unknown_01[3];
    u32 vtable;
    u8 pair_08[2];
    u8 unknown_0a[2];
    u8 pair_0c[2];
    u8 byte_0e;
    u8 byte_0f;
};
GUEST_OFFSET(ConfirmMachine, vtable, 4);
GUEST_OFFSET(ConfirmMachine, pair_08, 8);
GUEST_OFFSET(ConfirmMachine, pair_0c, 0xc);
GUEST_OFFSET(ConfirmMachine, byte_0e, 0xe);

// The session's mask copied, with the station removed from the copy (which is then dropped).
void remove_from_session_mask_copy(u32 station) {
    StationMask copy;
    copy.bits = (*net_session)->station_mask;
    copy.count = (*net_session)->mode_1326f;
    guest::StackObject<StationMask> temporary;
    *temporary = copy;
    temporary->remove(station);
}

}  // namespace

// Removes the station from the three masks and clears the flag byte (stations of 4 and more are ignored).
void remove_station_from_three_masks(ThreeMasks &object, u32 station) {
    if (station >= StationMask::STATION_COUNT) {
        return;
    }
    object.mask_08.remove(station);
    object.mask_10.remove(station);
    object.mask_18.remove(station);
    object.flag_253e = 0;
}
GUEST_EXPORT(0x006237a4, remove_station_from_three_masks);

void remove_station_from_first_mask(OneMask &object, u32 station) {
    if (station < StationMask::STATION_COUNT) {
        object.mask_08.remove(station);
    }
}
GUEST_EXPORT(0x006245ec, remove_station_from_first_mask);

// Four functions that drop a copy of the session's mask after removing a station from it and answer true; and two
// that answer the station.
bool drop_session_mask_copy_a(u32 unused, u32 station) { remove_from_session_mask_copy(station); return true; }
bool drop_session_mask_copy_b(u32 unused, u32 station) { remove_from_session_mask_copy(station); return true; }
bool drop_session_mask_copy_c(u32 unused, u32 station) { remove_from_session_mask_copy(station); return true; }
u32 drop_session_mask_copy_station_a(u32 unused, u32 station) { remove_from_session_mask_copy(station); return station; }
u32 drop_session_mask_copy_station_b(u32 unused, u32 station) { remove_from_session_mask_copy(station); return station; }
GUEST_EXPORT(0x00623858, drop_session_mask_copy_a);
GUEST_EXPORT(0x00623894, drop_session_mask_copy_b);
GUEST_EXPORT(0x0062390c, drop_session_mask_copy_c);
GUEST_EXPORT(0x00623984, drop_session_mask_copy_station_a);
GUEST_EXPORT(0x006239c0, drop_session_mask_copy_station_b);

void reset_pair_holder(PairHolder &holder) {
    holder.state_00 = 0;
    clear_flag_pair(guest::addr_of(holder.pair_08[0]).cast<void>());
    holder.byte_0e = 0;
    holder.byte_0f = 0;
}
GUEST_EXPORT(0x0062478c, reset_pair_holder);

ConfirmMachine &construct_confirm_machine(ConfirmMachine &machine) {
    machine.state_00 = 0;
    clear_flag_pair_b(guest::addr_of(machine.pair_08[0]).cast<void>());
    machine.vtable = CONFIRM_MACHINE_VTABLE;
    clear_flag_pair_b(guest::addr_of(machine.pair_0c[0]).cast<void>());
    machine.byte_0e = 0;
    machine.byte_0f = 0;
    return machine;
}
GUEST_EXPORT(0x00624920, construct_confirm_machine);

// Whether every entry of the session's part at 0x230 is flagged.
bool session_entries_all_flagged() {
    return all_entries_flagged(guest::addr_of((*net_session)->part_230).cast<void>());
}
GUEST_EXPORT(0x00625960, session_entries_all_flagged);

// Checks the first bit of the session's mask (the result is dropped) and records the value.
void record_value_after_mask_check(u32 value) {
    mask_bit_set(guest::addr_of((*net_session)->part_7880).cast<void>(), 0);
    *recorded_value = u16(value);
}
GUEST_EXPORT(0x00628cb0, record_value_after_mask_check);
