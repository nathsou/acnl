// Helpers around the main object (the global pointer at 0x0095362c) and a small bit/counter pair.
#include "guest/guest.hpp"

namespace {

using guest::gptr;

constexpr u32 SLOT_COUNT = 4;

inline guest::global<gptr<void>, 0x0095362c> main_object_pointer;

inline constexpr guest::Function<0x00624b24, void(gptr<void> block, u32 index)> clear_slot_in_block;
inline constexpr guest::Function<0x0075dfb4, u32(gptr<void> object, u32 station)> main_object_station_check;

// A byte of slot bits and a counter of how many times new bits were added.
struct SlotBitCounter {
    u8 bits;
    u8 count;  // stops growing at SLOT_COUNT

    void add_slot(u32 slot);
};

// The object that owns four per-slot byte pairs (what it is, is not known yet).
struct SlotBlocks {
    static constexpr u32 BLOCK_6_SIZE = 8;
    static constexpr u32 BLOCK_24_SIZE = 0x10;  // extent not known; what the sub-block helper may touch

    u8 unknown_00[2];
    u8 flags_02[SLOT_COUNT];
    u8 block_06[BLOCK_6_SIZE];
    u8 flags_0e[SLOT_COUNT];
    u8 unknown_12[0x24 - 0x12];
    u8 block_24[BLOCK_24_SIZE];

    void clear_slot(u32 slot);
};
GUEST_OFFSET(SlotBlocks, flags_02, 2);
GUEST_OFFSET(SlotBlocks, block_06, 6);
GUEST_OFFSET(SlotBlocks, flags_0e, 0xe);
GUEST_OFFSET(SlotBlocks, block_24, 0x24);

}  // namespace

// Adds the slot's bit (slots below 4 only); the counter only moves when the bits changed and it is below 4.
void SlotBitCounter::add_slot(u32 slot) {
    u8 bit = slot < SLOT_COUNT ? u8(1u << slot) : 0;
    u8 updated = bits | bit;
    if (updated == bits) {
        return;
    }
    if (count >= SLOT_COUNT) {
        return;
    }
    bits = updated;
    count = count + 1;
}
GUEST_EXPORT(0x00624aa4, SlotBitCounter::add_slot);

// Clears the slot's two flag bytes and lets the two sub-blocks drop their entry for the slot.
void SlotBlocks::clear_slot(u32 slot) {
    if (slot >= SLOT_COUNT) {
        return;
    }
    flags_02[slot] = 0;
    flags_0e[slot] = 0;
    clear_slot_in_block(guest::addr_of(block_06).cast<void>(), slot);
    clear_slot_in_block(guest::addr_of(block_24).cast<void>(), slot);
}
GUEST_EXPORT(0x00624ae4, SlotBlocks::clear_slot);

// Asks the main object about a station.
static u32 station_is_waited_for(u32 station) {
    return main_object_station_check(*main_object_pointer, station);
}
GUEST_EXPORT(0x00624f00, station_is_waited_for);

// ---- inputs for the shadow checker's fuzzing (GUEST_FUZZ=1)

namespace {

constexpr u32 FUZZ_SCRATCH_SIZE = 0x100;  // room for a SlotBlocks and what its sub-block helper touches
constexpr u32 FUZZ_MAX_COUNT = 5;         // counters just past SLOT_COUNT

// A slot index: valid ones, the first invalid ones, and extremes.
u32 some_slot(guest::Fuzz &f) {
    return f.pick<u32>({0, 1, 2, 3, SLOT_COUNT, SLOT_COUNT + 1, 0xffffffff, f.below(SLOT_COUNT), f.number()});
}

}  // namespace

GUEST_FUZZ(0x00624aa4, 300, [](guest::Fuzz &f) {
    auto object = f.object<SlotBitCounter>();
    if (f.below(2) != 0) {
        object->count = u8(f.below(FUZZ_MAX_COUNT + 1));
    }
    f.arguments(object, some_slot(f));
});
GUEST_FUZZ(0x00624ae4, 300, [](guest::Fuzz &f) {
    gptr<void> block = f.allocate(FUZZ_SCRATCH_SIZE);
    std::memset(block.get(), 0, FUZZ_SCRATCH_SIZE);
    f.arguments(block.cast<SlotBlocks>(), some_slot(f));
});
GUEST_FUZZ(0x00624f00, 200, [](guest::Fuzz &f) { f.arguments(f.below(SLOT_COUNT + 1)); });
