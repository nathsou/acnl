// Initialisers and small updates of objects of the 0x001b0000..0x001d0000 area (their classes are not known yet).
#include "arm.hpp"
#include "guest/guest.hpp"
#include "item/item.hpp"
#include "script/word.hpp"

using guest::gptr;

s32 random_below(s32 max);
Item &construct_item(Item &self, u16 id);
Item &copy_item(Item &self, const Item &other);

namespace {

constexpr u32 LETTER_COUNT = 24;
constexpr u32 PICKED_LETTERS = 3;
constexpr u32 LIST_SIZE = 16;
constexpr u32 SHORT_LIST_SIZE = 10;
constexpr u32 ENTRY_COUNT = 0x23;
constexpr u8 ENTRY_UNSET = 0xff;
constexpr u32 SLOT_BITS = 8;  // the main object's slot picks a byte of the packed word
constexpr u32 SLOT_VALUE_MASK = 0x7f;
constexpr u32 LOW_VALUE_MASK = 0x7fff;
constexpr u16 LOW_KEEP_MASK = 0x8000;
constexpr u32 WAIT_FLAGS_MASK = 0x3c000000;
constexpr u32 WAIT_FLAGS_SHIFT = 0x1a;
constexpr u32 STATION_COUNT = 4;
constexpr u32 WORD_CAPACITY_17 = 0x11;
constexpr u32 ENTRY_SIZE = 6;
constexpr u32 CONSTRUCT_ENTRY = 0x001b65e8;
constexpr s32 NO_INDEX = -1;

inline guest::global<u8[LETTER_COUNT], 0x0088e784> letters;
inline guest::global<s32, 0x0094fd40> selected_index;

inline constexpr guest::Function<0x00301d0d, gptr<void>(gptr<void> base, u32 function, u32 stride, u32 count)>
    for_each_element;
inline constexpr guest::Function<0x00624f00, u32(u32 station)> station_is_waited_for;
inline constexpr guest::Function<0x00305f44, u32()> query_current_main_object;

// Sixteen items followed by sixteen bytes.
struct ItemListWithFlags {
    Item items[LIST_SIZE];
    u8 flags[LIST_SIZE];
};
GUEST_OFFSET(ItemListWithFlags, flags, 0x40);

struct ItemList {
    Item items[LIST_SIZE];
};

struct Entry {
    u16 first;
    u8 second;
    u8 third;
    u8 fourth;
    u8 fifth;
};
GUEST_SIZE(Entry, ENTRY_SIZE);

struct EntryTable {
    Entry entries[ENTRY_COUNT];
    u8 flag_d2;
};
GUEST_OFFSET(EntryTable, flag_d2, 0xd2);

struct PackedWordObject {
    u8 unknown_00[8];
    u32 word_08;
    u16 half_0c;
};
GUEST_OFFSET(PackedWordObject, word_08, 8);
GUEST_OFFSET(PackedWordObject, half_0c, 0xc);

}  // namespace

// Picks three letters at random from the table of 24.
void pick_random_letters(gptr<u8> out) {
    for (u32 i = 0; i < PICKED_LETTERS; i++) {
        out[i] = (*letters)[random_below(LETTER_COUNT)];
    }
}
GUEST_EXPORT(0x001b1af8, pick_random_letters);

// Empties the sixteen items and clears their sixteen flag bytes.
void clear_item_list(ItemListWithFlags &list) {
    for (u32 i = 0; i < LIST_SIZE; i++) {
        copy_item(list.items[i], *empty_item);
        list.flags[i] = 0;
    }
}
GUEST_EXPORT(0x001b2184, clear_item_list);

// Clears the two top flag bits of every item of the list.
void clear_top_flag_bits_of_items(ItemList &list) {
    for (Item &item : list.items) {
        item.flags = u16(item.flags & ~Item::FLAGS_TOP_BITS);
    }
}
GUEST_EXPORT(0x001b21bc, clear_top_flag_bits_of_items);

// Empties the item at the selected index (a global), then forgets the selection.
void clear_selected_item(gptr<Item> items) {
    Item empty;
    construct_item(empty, Item::EMPTY);
    gptr<Item> slot(items.addr() + u32(*selected_index) * sizeof(Item));
    copy_item(*slot, empty);
    *selected_index = NO_INDEX;
}
GUEST_EXPORT(0x001b4b80, clear_selected_item);

// Empties the first ten items, then forgets the selection.
void clear_first_ten_items(gptr<Item> items) {
    for (u32 i = 0; i < SHORT_LIST_SIZE; i++) {
        Item empty;
        construct_item(empty, Item::EMPTY);
        copy_item(items[i], empty);
    }
    *selected_index = NO_INDEX;
}
GUEST_EXPORT(0x001b4bc8, clear_first_ten_items);

// A word descriptor of capacity 17 (compare construct_word_ptr_sv, whose capacity is 11).
script::WordPtrSv &construct_word_ptr_sv_17(script::WordPtrSv &self, gptr<void> buffer) {
    script::construct_word_ptr(self, buffer, WORD_CAPACITY_17);
    self.vtable = script::WordPtrSv::VTABLE;
    return self;
}
GUEST_EXPORT(0x001b6000, construct_word_ptr_sv_17);
GUEST_EXPORT(0x005b7680, construct_word_ptr_sv_17);

// Constructs the 35 six-byte entries, then sets each to its unset state.
void init_entry_table(EntryTable &table) {
    for_each_element(guest::addr_of(table).cast<void>(), CONSTRUCT_ENTRY, ENTRY_SIZE, ENTRY_COUNT);
    for (Entry &entry : table.entries) {
        entry.fourth = ENTRY_UNSET;
        entry.first = 0;
        entry.second = 0;
        entry.third = 0;
        entry.fifth = ENTRY_UNSET;
    }
    table.flag_d2 = 0;
}
GUEST_EXPORT(0x001b6618, init_entry_table);

// Stores a 7-bit value in the byte of the packed word that belongs to the main object's slot; without a slot, stores
// 15 bits in the halfword at 0xc (keeping its top bit).
void store_value_for_main_slot(PackedWordObject &object, u32 value) {
    u32 slot = query_current_main_object();
    if (slot != 0) {
        u32 shift = slot * SLOT_BITS - SLOT_BITS;
        u32 word = object.word_08;
        object.word_08 = (word & ~arm::lsl(SLOT_VALUE_MASK, shift)) | arm::lsl(value & SLOT_VALUE_MASK, shift);
    } else {
        object.half_0c = u16((object.half_0c & LOW_KEEP_MASK) | (value & LOW_VALUE_MASK));
    }
}
GUEST_EXPORT(0x001cdd68, store_value_for_main_slot);

// Sets, in bits 27-29 of the word at 8, one flag per station (1-3) that is waited for; the four bits are cleared first.
void update_wait_flags(PackedWordObject &object) {
    object.word_08 = object.word_08 & ~WAIT_FLAGS_MASK;
    for (u32 station = 1; station < STATION_COUNT; station++) {
        if (station_is_waited_for(station) != 0) {
            object.word_08 = object.word_08 | (1u << (station + WAIT_FLAGS_SHIFT));
        }
    }
}
GUEST_EXPORT(0x001cde4c, update_wait_flags);
