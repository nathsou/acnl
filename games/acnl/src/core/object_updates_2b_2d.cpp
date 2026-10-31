// Small functions of objects of the 0x002b0000..0x002e0000 area (their classes are not known yet): packed fields, a
// table of counters, a capped counter, pointers into the save data and an empty record.
#include "core/encrypted_int.hpp"
#include "guest/guest.hpp"
#include "item/item.hpp"
#include "save/save_data.hpp"

using guest::gptr;

u32 query_current_main_object();
Item &construct_item(Item &self, u16 id);

namespace {

constexpr u32 SLOT_MASK = 3;
constexpr u8 LOW_NIBBLE = 0x0f;
constexpr u8 SLOT_FIELD = 0x30;
constexpr u32 SLOT_SHIFT = 4;
constexpr u32 COUNTER_CAP = 99'999;
constexpr u32 COUNTERS = 6;
constexpr u32 ENTRY_COUNT = 4;
constexpr u32 SAVE_BLOCK_OFFSET = 0x71900;
constexpr u32 SAVE_BLOCK_FIELD = 0x24;

inline constexpr guest::Function<0x002fb328, gptr<u8>()> get_save_data;
inline constexpr guest::Function<0x0020ad4c, void(gptr<void> object)> update_flag_and_state;

struct PackedBytes {
    u8 byte_0;
    u8 byte_1;
};

struct CounterSet {
    EncryptedInt counters[COUNTERS];
};
GUEST_SIZE(CounterSet, 0x30);

struct CappedCounter {
    u8 unknown_000[0x338];
    EncryptedInt counter;
};
GUEST_OFFSET(CappedCounter, counter, 0x338);

struct BlockHolder {
    u8 unknown_00[0x10];
    u8 own_block[0x20];
    u8 selector_30;
};
GUEST_OFFSET(BlockHolder, own_block, 0x10);
GUEST_OFFSET(BlockHolder, selector_30, 0x30);

struct EmptyRecord {
    Item item;
    u32 unknown_04;
    u32 unknown_08;
    u8 unknown_0c;
};
GUEST_OFFSET(EmptyRecord, unknown_04, 4);
GUEST_OFFSET(EmptyRecord, unknown_0c, 0xc);

struct EntrySlot {
    gptr<void> object;
    u32 unknown_04;
    u32 unknown_08;
};
GUEST_SIZE(EntrySlot, 12);

struct EntryHolder {
    u8 unknown_00[0xd];
    u8 flag_0d;
    u8 unknown_0e[2];
    EntrySlot slots[ENTRY_COUNT];
};
GUEST_OFFSET(EntryHolder, flag_0d, 0xd);
GUEST_OFFSET(EntryHolder, slots, 0x10);

}  // namespace

// Stores the byte, sets the low nibble of the second byte to 1 and puts the main object's slot (0-3) in bits 4-5.
void init_packed_bytes(PackedBytes &bytes, u32 /*unused*/, u32 value) {
    bytes.byte_0 = u8(value);
    bytes.byte_1 = u8((bytes.byte_1 & ~LOW_NIBBLE) | 1);
    u32 slot = query_current_main_object() & SLOT_MASK;
    bytes.byte_1 = u8((bytes.byte_1 & ~SLOT_FIELD) | (slot << SLOT_SHIFT));
}
GUEST_EXPORT(0x002bb454, init_packed_bytes);

void clear_counter_set(CounterSet &set) {
    for (EncryptedInt &counter : set.counters) {
        counter.set(0);
    }
}
GUEST_EXPORT(0x002beff0, clear_counter_set);

// Stores the value in the counter, capped at 99999; returns how much of it was cut off.
u32 set_capped_counter(CappedCounter &object, u32 value) {
    if (value > COUNTER_CAP) {
        object.counter.set(COUNTER_CAP);
        return value - COUNTER_CAP;
    }
    object.counter.set(value);
    return 0;
}
GUEST_EXPORT(0x002bfcb8, set_capped_counter);

// The holder's own block while its selector is set, else the save data's flags byte.
gptr<u8> block_or_save_flags(BlockHolder &holder) {
    if (holder.selector_30 != 0) {
        return guest::addr_of(holder.own_block[0]);
    }
    return gptr<u8>(get_save_data().addr() + offsetof(SaveData, flags_621cf));
}
GUEST_EXPORT(0x002c2198, block_or_save_flags);

// Builds an empty item and clears the three fields after it.
EmptyRecord &construct_empty_record(EmptyRecord &record) {
    construct_item(record.item, Item::EMPTY);
    record.unknown_04 = 0;
    record.unknown_08 = 0;
    record.unknown_0c = 0;
    return record;
}
GUEST_EXPORT(0x002cf8bc, construct_empty_record);

gptr<u8> save_block_field() {
    return gptr<u8>(get_save_data().addr() + SAVE_BLOCK_OFFSET + SAVE_BLOCK_FIELD);
}
GUEST_EXPORT(0x002d3e18, save_block_field);

// The field's offset from the save data (the original computes it as a difference of two addresses).
u32 save_block_field_offset() {
    return SAVE_BLOCK_OFFSET + SAVE_BLOCK_FIELD;
}
GUEST_EXPORT(0x002d3f4c, save_block_field_offset);

// Runs update_flag_and_state on every entry object, then clears the flag at 0xd.
void update_entries(EntryHolder &holder) {
    for (EntrySlot &slot : holder.slots) {
        if (slot.object) {
            update_flag_and_state(slot.object);
        }
    }
    holder.flag_0d = 0;
}
GUEST_EXPORT(0x002d2f4c, update_entries);
