// Copies between the item rows of the player table at 0x00aaef18, indexed modulo four.
#include "item/item.hpp"

namespace {

constexpr u32 SLOT_MASK = 3;
constexpr u8 ENTRY_FLAG = 1;

// The global player table: two rows of four items (at 0x1c and 0x3c) and a flag byte for each slot (at 0x1c4).
struct PlayerItemTable {
    u8 unknown_00[0x1c];
    Item row_1c[4];
    u8 unknown_2c[0x10];
    Item row_3c[4];
    u8 unknown_4c[0x1c4 - 0x4c];
    u8 flags_1c4[4];
};
GUEST_OFFSET(PlayerItemTable, row_1c, 0x1c);
GUEST_OFFSET(PlayerItemTable, row_3c, 0x3c);
GUEST_OFFSET(PlayerItemTable, flags_1c4, 0x1c4);
inline guest::global<PlayerItemTable, 0x00aaef18> player_item_table;

}  // namespace

// Copies the item of slot `from` of the second row to slot `to` of the first row and marks that slot.
void copy_to_first_row(u32 from, u32 to) {
    u32 source = from & SLOT_MASK;
    u32 destination = to & SLOT_MASK;
    copy_item(player_item_table->row_1c[destination], player_item_table->row_3c[source]);
    player_item_table->flags_1c4[destination] |= ENTRY_FLAG;
}
GUEST_EXPORT(0x005c5b7c, copy_to_first_row);
GUEST_FUZZ(0x005c5b7c, 100, [](guest::Fuzz &f) { f.arguments(f.number(), f.number()); });

// Copies the item of slot `from` of the second row to slot `to` of the same row.
void copy_within_second_row(u32 from, u32 to) {
    copy_item(player_item_table->row_3c[to & SLOT_MASK], player_item_table->row_3c[from & SLOT_MASK]);
}
GUEST_EXPORT(0x005c67b4, copy_within_second_row);
GUEST_FUZZ(0x005c67b4, 100, [](guest::Fuzz &f) { f.arguments(f.number(), f.number()); });
