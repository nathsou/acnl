// Helpers around the local-play session (the global at 0x0095362c) and station masks.
#include "guest/guest.hpp"
#include "net/station_mask.hpp"

namespace {

using guest::gptr;

constexpr u32 SLOT_COUNT = 4;

inline guest::global<gptr<void>, 0x0095362c> main_object_pointer;

inline constexpr guest::Function<0x0075dfb4, u32(gptr<void> object, u32 station)> main_object_station_check;

// The object that owns four per-slot byte pairs (what it is, is not known yet).
struct SlotBlocks {
    u8 unknown_00[2];
    u8 flags_02[SLOT_COUNT];
    StationMask mask_06;
    u8 unknown_08[6];
    u8 flags_0e[SLOT_COUNT];
    u8 unknown_12[0x24 - 0x12];
    StationMask mask_24;

    void clear_slot(u32 slot);
};
GUEST_OFFSET(SlotBlocks, flags_02, 2);
GUEST_OFFSET(SlotBlocks, mask_06, 6);
GUEST_OFFSET(SlotBlocks, flags_0e, 0xe);
GUEST_OFFSET(SlotBlocks, mask_24, 0x24);

}  // namespace

// Adds the slot's bit (slots below 4 only); the counter only moves when the bits changed and it is below 4.
void StationMask::add(u32 slot) {
    u8 bit = slot < STATION_COUNT ? u8(1u << slot) : 0;
    u8 updated = bits | bit;
    if (updated == bits) {
        return;
    }
    if (count >= MAX_COUNT) {
        return;
    }
    bits = updated;
    count = count + 1;
}
GUEST_EXPORT(0x00624aa4, StationMask::add);

// Clears the slot's two flag bytes and removes the station from both masks.
void SlotBlocks::clear_slot(u32 slot) {
    if (slot >= SLOT_COUNT) {
        return;
    }
    flags_02[slot] = 0;
    flags_0e[slot] = 0;
    mask_06.remove(slot);
    mask_24.remove(slot);
}
GUEST_EXPORT(0x00624ae4, SlotBlocks::clear_slot);

// Asks the main object about a station.
static u32 station_is_waited_for(u32 station) {
    return main_object_station_check(*main_object_pointer, station);
}
GUEST_EXPORT(0x00624f00, station_is_waited_for);

namespace {

}  // namespace
