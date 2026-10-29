// A villager record picked by index, and an object that keeps eight items with a code and a value each.
#include "core/encrypted_int.hpp"
#include "guest/guest.hpp"
#include "item/item.hpp"
#include "save/villager.hpp"

using guest::gptr;

namespace {

constexpr u32 VILLAGER_COUNT = 10;
constexpr u32 SLOT_COUNT = 8;
constexpr u32 CODE_LIMIT = 10;
constexpr u32 CODE_BIAS = 4;  // the codes are kept 4 higher

inline constexpr guest::Function<0x002fe470, u32(gptr<SaveVillager> record)> is_record_valid;

// Eight items, each with a one-byte code and a value.
struct ItemSlotTable {
    u8 unknown_00[0x14];
    Item items[SLOT_COUNT];
    u8 codes[SLOT_COUNT];
    EncryptedInt values[SLOT_COUNT];
};
GUEST_OFFSET(ItemSlotTable, items, 0x14);
GUEST_OFFSET(ItemSlotTable, codes, 0x34);
GUEST_OFFSET(ItemSlotTable, values, 0x3c);

}  // namespace

// The index-th villager of the array when it is a valid record, else null.
gptr<SaveVillager> valid_villager_at(gptr<SaveVillager> villagers, u32 index) {
    if (index >= VILLAGER_COUNT) {
        return gptr<SaveVillager>(0u);
    }
    gptr<SaveVillager> record(villagers.addr() + index * u32(sizeof(SaveVillager)));
    if (record == nullptr || is_record_valid(record) == 0) {
        return gptr<SaveVillager>(0u);
    }
    return record;
}
GUEST_EXPORT(0x003058c9, valid_villager_at);
GUEST_FUZZ(0x003058c9, 200, [](guest::Fuzz &f) {
    f.arguments(f.allocate(VILLAGER_COUNT * sizeof(SaveVillager)).cast<SaveVillager>(), f.pick<u32>({0, 1, 9, 10, f.number()}));
});

// Fills a slot (when it and the code are in range): the item, the code and the value.
void set_slot(ItemSlotTable &table, u32 index, const Item &item, u32 code, u32 value) {
    if (index >= SLOT_COUNT || code >= CODE_LIMIT) {
        return;
    }
    copy_item(table.items[index], item);
    table.codes[index] = u8(code + CODE_BIAS);
    table.values[index].set(value);
}
GUEST_EXPORT(0x003058ec, set_slot);
GUEST_FUZZ(0x003058ec, 200, [](guest::Fuzz &f) {
    f.arguments(f.object<ItemSlotTable>(), f.pick<u32>({0, 3, 7, 8, f.number()}), f.object<Item>(),
                f.pick<u32>({0, 5, 9, 10, f.number()}), f.number());
});
