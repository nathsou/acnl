// Finding the villager with a given id among the ten of the town.
#include "guest/guest.hpp"
#include "save/save_data.hpp"

namespace {

constexpr u16 VILLAGER_ID_LIMIT = 0x18f;  // ids at or above are not villagers
constexpr u8 PERSONALITY_LIMIT = 8;

inline constexpr guest::Function<0x0076c6d4, u32(gptr<void> block)> check_block;

// The fields is_villager_record looks at.
struct VillagerHeader {
    u8 unknown_00[0x16];
    u8 block_16[0x16];  // checked by check_block
    u16 id;
    u8 personality;  // (meaning not known yet; below PERSONALITY_LIMIT)
    u8 unknown_2f;
};
GUEST_OFFSET(VillagerHeader, block_16, 0x16);
GUEST_OFFSET(VillagerHeader, id, 0x2c);
GUEST_OFFSET(VillagerHeader, personality, 0x2e);

}  // namespace

// Whether the record has an id and a personality in range and a valid block (unlike is_record_valid it does not
// check the first block).
bool is_villager_record(gptr<VillagerHeader> record) {
    if (record->id >= VILLAGER_ID_LIMIT || record->personality >= PERSONALITY_LIMIT) {
        return false;
    }
    return check_block(guest::addr_of(record->block_16).cast<void>()) != 0;
}
GUEST_EXPORT(0x00301e20, is_villager_record);

// The villager of the town (the first of the ten records) with the id; null if none lives there.
gptr<SaveVillager> find_villager_by_id(gptr<SaveVillager> villagers, u32 id) {
    for (u32 index = 0; index < SaveData::VILLAGER_COUNT; index++) {
        gptr<SaveVillager> villager = villagers + index;
        if (is_villager_record(villager.cast<VillagerHeader>()) && villager.cast<VillagerHeader>()->id == id) {
            return villager;
        }
    }
    return nullptr;
}
GUEST_EXPORT(0x001190fd, find_villager_by_id);
GUEST_FUZZ(0x001190fd, 200, [](guest::Fuzz &f) {
    f.arguments(f.allocate(SaveData::VILLAGER_COUNT * sizeof(SaveVillager)).cast<SaveVillager>(),
                f.pick<u32>({0, 1, 100, 0x18e, f.number()}));
});
