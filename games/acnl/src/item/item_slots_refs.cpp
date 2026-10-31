// Accessors of the item slots of an owner that has a primary and a fallback set of slots (or items), and of rows of
// ten items picked by index.
#include "core/encrypted_int.hpp"
#include "item/item_slots.hpp"
#include "net/net_session.hpp"
#include "save/save_data.hpp"

namespace {

constexpr u32 SLOT_1 = 1;
constexpr u32 SLOT_3 = 3;
constexpr u32 SLOT_6 = 6;
constexpr u32 SLOT_2 = 2;
constexpr u32 SLOT_4 = 4;
constexpr u32 SLOT_5 = 5;
constexpr u32 SLOT_7 = 7;
constexpr u8 CATEGORY_BLOCKING = 8;
constexpr u32 ROW_SIZE = 10;
constexpr u32 PAIR_SIZE = 2;
constexpr u16 REPLACEMENT_ID = 0x2083;
constexpr u32 PRICE_FACTOR = 10;
constexpr u32 MAIN_BIT_BASE = 0x1a;
constexpr u32 STATION_COUNT = 4;
constexpr u32 SLOT_STRIDE_WORDS = 0x371;
constexpr u32 MAIN_SLOT_INDEX = 4;
constexpr u32 ENTRY_SIZE = 8;
constexpr u32 ENTRY_OFFSET = 0x2058;

inline constexpr guest::Function<0x00303110, gptr<Item>(gptr<ItemSlots> slots)> fallback_slot_2_if_class_3;
inline constexpr guest::Function<0x003031c8, gptr<Item>(gptr<ItemSlots> slots)> fallback_slot_1_if_class_2;
inline constexpr guest::Function<0x00303138, gptr<Item>(gptr<ItemSlots> slots)> fallback_slot_3_if_class_4;
inline constexpr guest::Function<0x003031f0, gptr<Item>(gptr<Item> item)> fallback_item_if_class_1;
inline constexpr guest::Function<0x00305f44, u32()> query_current_main_object;
inline constexpr guest::Function<0x00624f00, u32(u32 station)> station_is_waited_for;
inline constexpr guest::Function<0x002ff8b0, u32(u32 index)> slot_value;
inline constexpr guest::Function<0x002fb328, gptr<SaveData>()> get_save_data;
inline guest::global<s32, 0x0094fd40> selected_index;

// Something that holds a pointer to its own slots and one to a fallback.
struct SlotsOwner {
    gptr<ItemSlots> slots;
    gptr<ItemSlots> fallback;
};

struct ItemOwner {
    gptr<Item> item;
    gptr<Item> fallback;
};

// Two items with a flag each.
struct FlaggedPair {
    Item items[PAIR_SIZE];
    u8 flags[PAIR_SIZE];
};
GUEST_OFFSET(FlaggedPair, flags, 8);

struct PriceHolder {
    u32 unknown_00[4];
    u32 values[STATION_COUNT];
};
GUEST_OFFSET(PriceHolder, values, 0x10);

struct BitsHolder {
    u8 unknown_00[8];
    u32 bits;
};
GUEST_OFFSET(BitsHolder, bits, 8);

// The row's item at the index when it is of kind 2 or has data, else the empty item.
gptr<Item> row_item(gptr<Item> row, u32 index) {
    if (index >= ROW_SIZE) {
        return empty_item.ptr();
    }
    gptr<Item> item = guest::addr_of(row[index]);
    if (item->is_kind_2() || item->is_item()) {
        return item;
    }
    return empty_item.ptr();
}

}  // namespace

gptr<Item> owner_slot_2_if_class_3(SlotsOwner &owner) {
    if (owner.slots != nullptr) {
        return owner.slots->slot_if_class(SLOT_2, WEAR_CLASS_3);
    }
    return owner.fallback == nullptr ? empty_item.ptr() : fallback_slot_2_if_class_3(owner.fallback);
}
GUEST_EXPORT(0x0070b0b8, owner_slot_2_if_class_3);

// Whether the item can be worn together with what the owner wears: never when it has no wear class or is empty; items of
// class 7 when the mode allows them; when the owner's slot 2 item has the blocking category, only items of that
// category and those of the classes other than 3, 4 and 5.
bool can_wear_with_owner_slot_2(u32 unused, const Item &item, SlotsOwner &owner) {
    if (item.is_empty()) {
        return false;
    }
    WearClass wear_class = item.wear_class();
    u8 category = item.category();
    u8 slot_2_category = owner_slot_2_if_class_3(owner)->category();
    if (wear_class == WEAR_CLASS_NONE) {
        return false;
    }
    if (wear_class == WEAR_CLASS_7) {
        return item.is_wear_class_7_in_mode_with_flag_4();
    }
    if (slot_2_category == CATEGORY_BLOCKING && category != CATEGORY_BLOCKING) {
        return wear_class != WEAR_CLASS_3 && wear_class != WEAR_CLASS_4 && wear_class != WEAR_CLASS_5;
    }
    return true;
}
GUEST_EXPORT(0x0026f808, can_wear_with_owner_slot_2);

gptr<Item> owner_slot_1_if_class_2(SlotsOwner &owner) {
    if (owner.slots != nullptr) {
        return owner.slots->slot_if_class(SLOT_1, WEAR_CLASS_2);
    }
    return owner.fallback == nullptr ? empty_item.ptr() : fallback_slot_1_if_class_2(owner.fallback);
}
GUEST_EXPORT(0x0070b044, owner_slot_1_if_class_2);

// Slot 7's item when it has class 7, else the empty item (no fallback).
gptr<Item> owner_slot_7_if_class_7(SlotsOwner &owner) {
    if (owner.slots != nullptr && owner.slots->slots[SLOT_7].is_wear_class_7()) {
        return guest::addr_of(owner.slots->slots[SLOT_7]);
    }
    return empty_item.ptr();
}
GUEST_EXPORT(0x0070b088, owner_slot_7_if_class_7);

// Slot 4's item when it has class 4, unless slot 2 holds a class-3 item of the blocking category.
gptr<Item> owner_slot_4_if_class_4(SlotsOwner &owner) {
    if (owner.slots == nullptr) {
        return owner.fallback == nullptr ? empty_item.ptr() : fallback_slot_3_if_class_4(owner.fallback);
    }
    gptr<Item> slot_2 = owner.slots->slot_if_class(SLOT_2, WEAR_CLASS_3);
    if (slot_2->category() == CATEGORY_BLOCKING) {
        return empty_item.ptr();
    }
    return owner.slots->slot_if_class(SLOT_4, WEAR_CLASS_4);
}
GUEST_EXPORT(0x0070af88, owner_slot_4_if_class_4);

// The owner's item when it is the first item or has class 1, else the empty item; the fallback when there is none.
gptr<Item> owner_item_if_class_1(ItemOwner &owner) {
    if (owner.item != nullptr) {
        if (owner.item->is_first_item() || owner.item->wear_class() == WEAR_CLASS_1) {
            return owner.item;
        }
        return empty_item.ptr();
    }
    return owner.fallback == nullptr ? empty_item.ptr() : fallback_item_if_class_1(owner.fallback);
}
GUEST_EXPORT(0x0070afec, owner_item_if_class_1);

gptr<Item> slots_slot_5_if_class_6(ItemSlots &slots) { return slots.slot_if_class(SLOT_5, WEAR_CLASS_6); }

gptr<Item> slots_slot_4_if_class_5(ItemSlots &slots) { return slots.slot_if_class(SLOT_4, WEAR_CLASS_5); }
GUEST_EXPORT(0x0070f010, slots_slot_5_if_class_6);
GUEST_EXPORT(0x0070f034, slots_slot_4_if_class_5);

// Whether the row's picked item is empty.
bool row_item_is_empty(gptr<Item> row, u32 index) {
    return row_item(row, index)->is_empty();
}
GUEST_EXPORT(0x0070bf38, row_item_is_empty);

// The row's item at the selected index (a global).
gptr<Item> selected_row_item(gptr<Item> row) {
    if (u32(*selected_index) >= ROW_SIZE) {
        return empty_item.ptr();
    }
    return row_item(row, u32(*selected_index));
}
GUEST_EXPORT(0x0070bf80, selected_row_item);

gptr<Item> row_item_at(gptr<Item> row, u32 index) { return row_item(row, index); }
GUEST_EXPORT(0x0070bfd8, row_item_at);

// Copies the pair's item at the index to out (the empty item from index 2 on).
void copy_pair_item(Item &out, FlaggedPair &pair, u32 index) {
    copy_item(out, index < PAIR_SIZE ? pair.items[index] : *empty_item);
}
GUEST_EXPORT(0x0070c07c, copy_pair_item);

// The same, but an item whose flag is set is replaced by the replacement item.
void copy_pair_item_or_replacement(Item &out, FlaggedPair &pair, u32 index) {
    if (index >= PAIR_SIZE) {
        copy_item(out, *empty_item);
    } else if (pair.flags[index] != 0) {
        construct_item(out, REPLACEMENT_ID);
    } else {
        copy_item(out, pair.items[index]);
    }
}
GUEST_EXPORT(0x0070c130, copy_pair_item_or_replacement);

// Ten times the encrypted value times the factor.
u32 encrypted_value_times_ten(const EncryptedInt &value, u32 factor) {
    return value.get() * factor * PRICE_FACTOR;
}
GUEST_EXPORT(0x0070c16c, encrypted_value_times_ten);

// The holder's value for the main object.
u32 value_for_main_object(PriceHolder &holder) {
    return holder.values[query_current_main_object()];
}
GUEST_EXPORT(0x0070c310, value_for_main_object);

// The sum of the values of the first station and the ones that are waited for.
u32 sum_of_waited_values(PriceHolder &holder) {
    u32 sum = 0;
    for (u32 station = 0; station < STATION_COUNT; station++) {
        if (station == 0 || station_is_waited_for(station) != 0) {
            sum += holder.values[station];
        }
    }
    return sum;
}
GUEST_EXPORT(0x0070cb5c, sum_of_waited_values);

// True without a main object; otherwise whether the holder's bits include the main object's bit (from 0x1a up).
bool main_object_bit_set(BitsHolder &holder) {
    u32 main = query_current_main_object();
    if (main == 0) {
        return true;
    }
    return (holder.bits & (1u << (query_current_main_object() + MAIN_BIT_BASE))) != 0;
}
GUEST_EXPORT(0x0070e4b0, main_object_bit_set);

// The entry of the main slot (null for slots from 4 on).
gptr<u8> main_slot_entry(gptr<u8> table) {
    u32 slot = slot_value(MAIN_SLOT_INDEX);
    if (slot >= STATION_COUNT) {
        return gptr<u8>(0u);
    }
    return table + (slot * SLOT_STRIDE_WORDS * ENTRY_SIZE + ENTRY_OFFSET);
}
GUEST_EXPORT(0x0070ef04, main_slot_entry);
GUEST_EXPORT(0x001df3d4, main_slot_entry);

u32 save_value_6e2a8() { return get_save_data()->value_6e2a8; }
GUEST_EXPORT(0x0070b36c, save_value_6e2a8);
u32 save_value_6e2ac() { return get_save_data()->value_6e2ac; }
GUEST_EXPORT(0x0070b2fc, save_value_6e2ac);

// How much the first value exceeds the second (0 if it does not).
u32 save_excess_6e2a8() {
    gptr<SaveData> save = get_save_data();
    u32 first = save->value_6e2a8;
    u32 second = save->value_6e2ac;
    return second < first ? first - second : 0;
}
GUEST_EXPORT(0x0070b460, save_excess_6e2a8);

// Slot 6's item when it has class 6; the fallback's slot 5 when there are no slots of its own.
gptr<Item> owner_slot_6_if_class_6(SlotsOwner &owner) {
    if (owner.slots != nullptr) {
        return owner.slots->slot_if_class(SLOT_6, WEAR_CLASS_6);
    }
    return owner.fallback == nullptr ? empty_item.ptr() : slots_slot_5_if_class_6(*owner.fallback);
}
GUEST_EXPORT(0x0070b0fc, owner_slot_6_if_class_6);

// Copies of single-slot accessors made for other callers.
gptr<Item> slots_slot_3_if_class_3(ItemSlots &slots) { return slots.slot_if_class(SLOT_3, WEAR_CLASS_3); }
gptr<Item> slots_slot_5_if_class_5(ItemSlots &slots) { return slots.slot_if_class(SLOT_5, WEAR_CLASS_5); }
gptr<Item> slots_slot_4_if_class_4(ItemSlots &slots) { return slots.slot_if_class(SLOT_4, WEAR_CLASS_4); }
GUEST_EXPORT(0x0071a578, slots_slot_3_if_class_3);
GUEST_EXPORT(0x0071a694, slots_slot_5_if_class_5);
GUEST_EXPORT(0x0071a6b8, slots_slot_4_if_class_4);

// Slot 4's item when it has class 4, unless slot 2 holds a class-3 item of the blocking category.
gptr<Item> slots_slot_4_if_slot_2_allows(ItemSlots &slots) {
    gptr<Item> slot_2 = slots.slot_if_class(SLOT_2, WEAR_CLASS_3);
    if (slot_2->category() == CATEGORY_BLOCKING) {
        return empty_item.ptr();
    }
    return slots.slot_if_class(SLOT_4, WEAR_CLASS_4);
}
GUEST_EXPORT(0x0071a3a8, slots_slot_4_if_slot_2_allows);
