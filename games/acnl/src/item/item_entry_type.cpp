// The type byte of the small indexed item table (item numbers up to 0xfd), with out-of-range values folded.
#include "item/item.hpp"

namespace {

// An entry of the table indexed_item_entry looks into; only the type byte is known.
struct IndexedItemEntry {
    u8 unknown_00[0x0a];
    u8 type;
};
GUEST_OFFSET(IndexedItemEntry, type, 0x0a);

constexpr u16 LAST_INDEXED_NUMBER = 0xfd;  // item numbers above this have no entry
constexpr u32 TYPE_COUNT = 0x1d;           // also returned for numbers without an entry

inline constexpr guest::Function<0x002fd010, gptr<IndexedItemEntry>(const Item &item)> indexed_item_entry;

}  // namespace

// The entry type of an item: TYPE_COUNT for item numbers past the table, 0 for a missing entry or a type out of
// range.
u32 indexed_item_type(const Item &item) {
    if (item.number() > LAST_INDEXED_NUMBER) {
        return TYPE_COUNT;
    }
    gptr<IndexedItemEntry> entry = indexed_item_entry(item);
    if (!entry) {
        return 0;
    }
    u32 type = entry->type;
    return type < TYPE_COUNT ? type : 0;
}
GUEST_EXPORT(0x002fccdc, indexed_item_type);
