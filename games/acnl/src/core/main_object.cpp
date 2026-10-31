// Small accessors of the local-play session (NetSession) and helpers next to them.
#include "guest/guest.hpp"
#include "net/net_session.hpp"

namespace {

// Still recompiled (or rewritten elsewhere and called through the game's ABI):
inline constexpr guest::Function<0x00624c78, u32(u32 index)> bit_for_index;
inline constexpr guest::Function<0x00300904, u32(gptr<void> object)> villager_check_300904;
inline constexpr guest::Function<0x00305f2c, u32()> read_global_object_byte;
inline constexpr guest::Function<0x00305f44, u32()> current_station;

constexpr u32 READY_GLOBAL_BYTE = 2;  // the value read_global_object_byte must give (meaning not known yet)

}  // namespace

// station_bits when both flags are set, else 0.
u8 NetSession::station() const {
    if (flag_132ac == 0 || flag_132ae == 0) {
        return 0;
    }
    return station_bits;
}
GUEST_EXPORT(0x0075dfe8, NetSession::station);

// Whether the index's bit is set in station_mask; always false for buffer.own_station.
bool NetSession::has_station_bit(u32 index) const {
    if (buffer.own_station == index) {
        return false;
    }
    return (bit_for_index(index) & station_mask) != 0;
}
GUEST_EXPORT(0x0075e010, NetSession::has_station_bit);

s8 NetSession::signed_value() const {
    return value_132ad;
}
GUEST_EXPORT(0x0075e048, NetSession::signed_value);

// An object with a slot index and a state byte (what it is, is not known yet).
struct SlotState {
    static constexpr u32 SLOTS = 8;
    static constexpr u8 STATE_2 = 2;  // the state matches_slot looks for (meaning not known yet)

    u8 unknown_00[0x12];
    u8 state;
    u8 unknown_13[5];
    u8 slot;

    bool matches_slot(u32 index) const;
};
GUEST_OFFSET(SlotState, state, 0x12);
GUEST_OFFSET(SlotState, slot, 0x18);

// True when index is a valid slot, is this object's slot, and the state is STATE_2.
bool SlotState::matches_slot(u32 index) const {
    if (index >= SLOTS) {
        return false;
    }
    return slot == index && state == STATE_2;
}
GUEST_EXPORT(0x0075e058, SlotState::matches_slot);

// An object with a byte of per-station bits at 5 (passed to villager_check_300904 first).
struct StationMaskAt5 {
    u8 unknown_00[5];
    u8 station_mask;
};
GUEST_OFFSET(StationMaskAt5, station_mask, 5);

// Whether the object passes villager_check_300904, the global byte is READY_GLOBAL_BYTE and the bit of the
// current station is set in the object's bits.
bool has_current_station_bit(gptr<StationMaskAt5> object) {
    if (villager_check_300904(object) == 0) {
        return false;
    }
    if (read_global_object_byte() != READY_GLOBAL_BYTE) {
        return false;
    }
    u32 index = current_station();
    u8 bits = object->station_mask;
    return (bit_for_index(index) & bits) != 0;
}
GUEST_EXPORT(0x0075e0e8, has_current_station_bit);
