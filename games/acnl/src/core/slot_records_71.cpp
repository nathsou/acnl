// An object with sixteen big slot records (0x7dd8 bytes each); the second-to-last byte of a slot is its flags, bit 0
// of which marks the slot as used.
#include "guest/guest.hpp"

namespace {

constexpr u32 SLOT_COUNT = 16;
constexpr s32 NO_SLOT = -1;
constexpr u8 FLAG_IN_USE = 1;

struct SlotRecord {
    u8 unknown_0000[0x7dd6];
    u8 flags;
    u8 unknown_7dd7;
};
GUEST_OFFSET(SlotRecord, flags, 0x7dd6);
GUEST_SIZE(SlotRecord, 0x7dd8);

struct SlotRecords {
    SlotRecord slots[SLOT_COUNT];
};

}  // namespace

u32 count_free_slots(SlotRecords &records) {
    u32 count = 0;
    for (const SlotRecord &slot : records.slots) {
        if ((slot.flags & FLAG_IN_USE) == 0) {
            count++;
        }
    }
    return count;
}
GUEST_EXPORT(0x0071d578, count_free_slots);

// The index of the first free slot, -1 when all are in use.
s32 first_free_slot(SlotRecords &records) {
    for (u32 i = 0; i < SLOT_COUNT; i++) {
        if ((records.slots[i].flags & FLAG_IN_USE) == 0) {
            return s32(i);
        }
    }
    return NO_SLOT;
}
GUEST_EXPORT(0x0071d5b8, first_free_slot);
