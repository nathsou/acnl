// Updates of objects of the 0x00200000..0x00220000 area (their classes are not known yet): a random pick among the
// slots not yet used, state changes driven by the global byte at 0x002f74c8, preset item sets and a pending-item
// slot.
#include "guest/guest.hpp"
#include "core/word_pair.hpp"
#include "hobj/house_object.hpp"
#include "item/item.hpp"
#include "item/item_slots.hpp"

using guest::gptr;

s32 random_below(s32 max);
Item &construct_item(Item &self, u16 id);
Item &copy_item(Item &self, const Item &other);
u8 read_global_byte_2();
bool table_entry_has_all_bits(u32 mask, u32 index);
void clear_inner(gptr<WordPair> inner);

namespace {

constexpr u32 FIRST_CANDIDATE = 0x3a;
constexpr u32 CANDIDATE_END = 0x6c;
constexpr u32 FALLBACK_RANGE = 0x32;
constexpr u32 USED_BITS_OFFSET = 0x1a;
constexpr s32 NONE_PICKED = -1;
constexpr u8 GLOBAL_BYTE_RESETS = 0x5e;
constexpr u8 GLOBAL_BYTE_STATE_9D = 0x9d;
constexpr u32 TABLE_MASK_20 = 0x20;
constexpr u32 STATE_NORMAL = 3;
constexpr u32 STATE_SPECIAL = 0xd;
constexpr u32 NOTIFY_SLOT = 0x18 / 4;
constexpr u32 RECORD_COUNT = 4;
constexpr s32 COIN_TOSS = 2;
constexpr u8 NOT_PENDING = 0;

struct SlotPicker {
    u8 unknown_00[USED_BITS_OFFSET];
    u8 used_bits[16];
};
GUEST_OFFSET(SlotPicker, used_bits, USED_BITS_OFFSET);

struct ModeObject {
    u32 vtable;
    u8 unknown_04[0x31];
    s8 mode_35;
    u8 unknown_36;
    u8 flag_37;
    u8 unknown_38[4];
    u32 state_3c;
};
GUEST_OFFSET(ModeObject, mode_35, 0x35);
GUEST_OFFSET(ModeObject, flag_37, 0x37);
GUEST_OFFSET(ModeObject, state_3c, 0x3c);

struct PendingItem {
    u8 flag;
    u8 busy;
    u8 unknown_02[6];
    Item item;
};
GUEST_OFFSET(PendingItem, item, 8);
inline guest::global<PendingItem, 0x0094ed70> pending_item;

struct Record12 {
    u8 inner[8];
    u8 bytes[4];
};
GUEST_SIZE(Record12, 12);

struct RecordList {
    Record12 records[RECORD_COUNT];
};

struct ItemHolder {
    u8 unknown_000[0x37c];
    Item item_37c;
};
GUEST_OFFSET(ItemHolder, item_37c, 0x37c);

void set_preset(ItemSlots &slots, u32 index, u16 id) {
    Item item;
    construct_item(item, id);
    copy_item(slots.slots[index], item);
}

}  // namespace

// Picks one of the slots 0x3a..0x6b whose bit is clear in the object's used bits, every candidate equally likely;
// a random number below 50 when every slot is used.
s32 pick_unused_slot(const SlotPicker &picker) {
    s32 picked = NONE_PICKED;
    s32 seen = 0;
    for (u32 slot = FIRST_CANDIDATE; slot < CANDIDATE_END; slot++) {
        if (picker.used_bits[slot / 8] & (1u << (slot & 7))) {
            continue;
        }
        seen++;
        if (random_below(seen) == 0) {
            picked = s32(slot - FIRST_CANDIDATE);
        }
    }
    if (picked == NONE_PICKED) {
        picked = random_below(FALLBACK_RANGE);
    }
    return picked;
}
GUEST_EXPORT(0x0020bbf8, pick_unused_slot);

// Stores a new mode (the global byte 0x5e forces mode 0) and, when it changed, calls the object's virtual function 6.
u32 change_mode(ModeObject &object, s32 new_mode) {
    if (read_global_byte_2() == GLOBAL_BYTE_RESETS) {
        new_mode = 0;
    }
    s32 current = object.mode_35;
    if (current == new_mode) {
        return u32(current);
    }
    object.mode_35 = s8(new_mode);
    return guest::call_address<u32>(*gptr<u32>(object.vtable + NOTIFY_SLOT * 4), guest::addr_of(object));
}
GUEST_EXPORT(0x0020ad0c, change_mode);

// Jumps to change_mode.
GUEST_EXPORT(0x0024fc44, change_mode);
GUEST_EXPORT(0x002503ac, change_mode);
GUEST_EXPORT(0x002d595c, change_mode);
GUEST_EXPORT(0x002d5bc8, change_mode);

// Sets the flag at 0x37 (when the table entry for the global byte has bit 0x20, unless the byte is 0x5e) and
// switches the state at 0x3c between 3 and 0xd.
void update_flag_and_state(ModeObject &object) {
    u32 flag = 0;
    if (table_entry_has_all_bits(TABLE_MASK_20, read_global_byte_2())) {
        flag = read_global_byte_2() != GLOBAL_BYTE_RESETS ? 1 : 0;
    }
    object.flag_37 = u8(flag);
    bool special = read_global_byte_2() == GLOBAL_BYTE_STATE_9D && object.state_3c == STATE_NORMAL;
    object.state_3c = special ? STATE_SPECIAL : STATE_NORMAL;
}
GUEST_EXPORT(0x0020ad4c, update_flag_and_state);

// Stores one of two items at random.
void store_random_item_a(ItemSlots &slots) {
    s32 choice = random_below(COIN_TOSS);
    if (choice == 0) {
        set_preset(slots, 0, 0x2598);  // item number
    } else if (choice == 1) {
        set_preset(slots, 3, 0x26fe);  // item number
    }
}
GUEST_EXPORT(0x0020d6a8, store_random_item_a);

void store_item_set_a(ItemSlots &slots) {
    set_preset(slots, 0, 0x25da);  // item number
    set_preset(slots, 1, 0x26cc);  // item number
    set_preset(slots, 3, 0x2767);  // item number
}
GUEST_EXPORT(0x0020d77c, store_item_set_a);

void store_item_set_b(ItemSlots &slots) {
    set_preset(slots, 0, 0x2598);  // item number
    set_preset(slots, 3, 0x26fe);  // item number
}
GUEST_EXPORT(0x0020d7f4, store_item_set_b);

// Resets the four records: their first eight bytes to the "never" value and their four flag bytes to 0.
void reset_records(RecordList &list) {
    for (Record12 &record : list.records) {
        clear_inner(gptr<WordPair>(guest::addr_of(record).addr()));
        for (u8 &byte : record.bytes) {
            byte = 0;
        }
    }
}
GUEST_EXPORT(0x0020d858, reset_records);

// Remembers an item as pending, unless one is already or the item is empty.
void set_pending_item(const Item &item) {
    if (pending_item->busy != 0 || item.is_empty()) {
        return;
    }
    pending_item->flag = 1;
    copy_item(pending_item->item, item);
}
GUEST_EXPORT(0x00216420, set_pending_item);

// Forgets the pending item (when none is in progress).
void clear_pending_item() {
    if (pending_item->busy != 0) {
        return;
    }
    copy_item(pending_item->item, *empty_item);
    pending_item->flag = NOT_PENDING;
}
GUEST_EXPORT(0x00216468, clear_pending_item);

void set_item_37c(ItemHolder &holder, const Item &item) {
    Item copy;
    copy_item(copy, item);
    copy_item(holder.item_37c, copy);
}
GUEST_EXPORT(0x00205f50, set_item_37c);
