// Small functions from 0x00280000 to 0x00520000: offsets into the save data and the current player, wrappers that
// return their argument, item tables built from rodata, and the loading of the shared entries from their templates.
#include "item/item.hpp"
#include "net/net_session.hpp"
#include "net/shared_entry.hpp"
#include "save/player.hpp"

using guest::gptr;

namespace {

constexpr u32 SLOT_TABLE_OFFSET = 0x29220;  // the slot records inside the data base
constexpr u32 PLAYER_FIELD_OFFSET = 0x8d84;
constexpr u32 TEMPLATE_BASE_ID = 9;
constexpr u32 TEMPLATE_ID_MASK = 0xff;
constexpr u32 ITEM_ID_COUNT = 8;
constexpr u32 BYTE_17_MAX_SKIP = 4;
constexpr u32 FIELD_24_OFFSET = 0x24;

inline constexpr guest::Function<0x002fb94c, gptr<SavePlayer>()> get_current_player;
inline constexpr guest::Function<0x002fb918, gptr<u8>()> data_block_71900;
inline constexpr guest::Function<0x006268f8, gptr<SharedEntry>(u32 template_id)> entry_template;
inline constexpr guest::Function<0x003081b4, void(gptr<void> destination, gptr<void> source)> copy_8_bytes;
inline constexpr guest::Function<0x00305570, u32(const Item &item)> item_kind_11_byte_17;
inline constexpr guest::Function<0x0076936c, u32(const Item &item)> item_kind_11_top_bits;

inline guest::global<u16[ITEM_ID_COUNT], 0x0084514c> item_ids;
inline guest::global<Item[ITEM_ID_COUNT], 0x00985a10> item_row;

inline guest::global<u16, 0x00950804> number_950804;
inline guest::global<u16, 0x00950806> number_950806;

struct TwoBytes {
    u8 first;
    u8 second;
};

}  // namespace

// The slot records of a save data's data base.
gptr<u8> slot_records_of(gptr<u8> data_base) {
    return data_base + SLOT_TABLE_OFFSET;
}
GUEST_EXPORT(0x002fb310, slot_records_of);

// An address inside the current player's record (the offset applies to a null player too).
gptr<u8> current_player_field_8d84() {
    return get_current_player().cast<u8>() + PLAYER_FIELD_OFFSET;
}
GUEST_EXPORT(0x0051ca3c, current_player_field_8d84);

gptr<u8> data_block_71900_field_24() {
    return data_block_71900() + FIELD_24_OFFSET;
}
GUEST_EXPORT(0x002d3ab4, data_block_71900_field_24);

// Copies eight bytes and returns the destination.
gptr<void> copy_8_bytes_returning_destination(gptr<void> destination, gptr<void> source) {
    copy_8_bytes(destination, source);
    return destination;
}
GUEST_EXPORT(0x00311c70, copy_8_bytes_returning_destination);

// Builds the eight items of the row from the table of item numbers.
void build_item_row() {
    for (u32 i = 0; i < ITEM_ID_COUNT; i++) {
        guest::StackObject<Item> item;
        construct_item(*item, (*item_ids)[i]);
        copy_item((*item_row)[i], *item);
    }
}
GUEST_EXPORT(0x002d57f4, build_item_row);

// Reloads all shared entries from their templates (the entries use the templates after the first nine).
void reload_shared_entries(SharedEntryTable &table) {
    for (u32 i = 0; i < SharedEntryTable::ENTRY_COUNT; i++) {
        table.entries[i] = *entry_template((i + TEMPLATE_BASE_ID) & TEMPLATE_ID_MASK);
    }
}
GUEST_EXPORT(0x0029cb24, reload_shared_entries);

void store_item_number_950804(const Item &item) { *number_950804 = item.number(); }
void store_item_number_950806(const Item &item) { *number_950806 = item.number(); }
GUEST_EXPORT(0x00285144, store_item_number_950804);
GUEST_EXPORT(0x00284f78, store_item_number_950806);

// Stores the item's byte-17 property and a value: the given one below 4, else the item's top bits.
gptr<TwoBytes> store_property_and_top_bits(gptr<TwoBytes> out, const Item &item, u32 value) {
    out->first = u8(item_kind_11_byte_17(item));
    if (value >= BYTE_17_MAX_SKIP) {
        value = item_kind_11_top_bits(item);
    }
    out->second = u8(value);
    return out;
}
GUEST_EXPORT(0x004e95b4, store_property_and_top_bits);
