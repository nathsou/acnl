// A table of sixteen resource slots (with the handle each slot holds) followed by a buffer, and two small tables of the
// game's data.
#include "guest/guest.hpp"

namespace {

inline constexpr guest::Function<0x00160c10, void(gptr<void> handle)> release_handle;
inline constexpr guest::Function<0x002f825c, void(gptr<void> buffer, u32 size)> clear_buffer;
inline constexpr guest::Function<0x00159158, void()> unknown_159158;

struct ResourceSlot {
    u32 word_00;
    gptr<void> handle;  // released and cleared when present
    u32 word_08;
    u32 word_0c;
    u32 word_10;
    u32 word_14;
};
GUEST_SIZE(ResourceSlot, 24);

struct Entry20 {
    u8 unknown[20];
};
struct Entry16 {
    u8 unknown[16];
};

inline guest::global<Entry20[1], 0x00950c24> entries_20;  // (indexed without a bound check)
inline guest::global<Entry16[1], 0x00857328> entries_16;

}  // namespace

struct ResourceSlots {
    static constexpr u32 SLOT_COUNT = 16;
    static constexpr u32 BUFFER_SIZE = 0x100;

    ResourceSlot slots[SLOT_COUNT];
    u8 buffer[BUFFER_SIZE];
    u32 word_280;
    u32 word_284;
    u32 word_288;
    u8 byte_28c;

    void release_all();
    ResourceSlots &initialize();
};
GUEST_OFFSET(ResourceSlots, buffer, 0x180);
GUEST_OFFSET(ResourceSlots, word_280, 0x280);
GUEST_OFFSET(ResourceSlots, byte_28c, 0x28c);

// Releases every handle and clears the slots.
void ResourceSlots::release_all() {
    for (ResourceSlot &slot : slots) {
        if (slot.handle) {
            release_handle(slot.handle);
            slot.handle = nullptr;
        }
        slot.word_00 = 0;
        slot.word_08 = 0;
        slot.word_0c = 0;
        slot.word_10 = 0;
        slot.word_14 = 0;
    }
}
GUEST_EXPORT(0x006e1924, ResourceSlots::release_all);

// Sets the slots (without releasing anything), the buffer and the counters to their initial values.
ResourceSlots &ResourceSlots::initialize() {
    word_284 = 0;
    word_280 = 1;
    word_288 = 0;
    byte_28c = 0;
    for (ResourceSlot &slot : slots) {
        slot.word_00 = 0;
        slot.handle = nullptr;
        slot.word_08 = 0;
        slot.word_0c = 0;
        slot.word_10 = 0;
        slot.word_14 = 0;
    }
    clear_buffer(guest::addr_of(buffer[0]), BUFFER_SIZE);
    unknown_159158();
    return *this;
}
GUEST_EXPORT(0x006e2198, ResourceSlots::initialize);

static gptr<Entry20> entry_20(u32 index) {
    return guest::addr_of(entries_20[index]);
}
GUEST_EXPORT(0x006e225c, entry_20);

static gptr<Entry16> entry_16(u32 index) {
    return guest::addr_of(entries_16[index]);
}
GUEST_EXPORT(0x006e2270, entry_16);
