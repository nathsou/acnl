// Finding the villager with a given id among the ten of the town.
#include "guest/guest.hpp"
#include "save/save_data.hpp"

namespace {

constexpr u16 VILLAGER_ID_LIMIT = 0x18f;  // ids at or above are not villagers
constexpr u8 PERSONALITY_LIMIT = 8;

inline constexpr guest::Function<0x0076c6d4, u32(gptr<void> block)> check_block;
inline constexpr guest::Function<0x002ff81c, bool(gptr<void> first, gptr<void> second)> records_equal;


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
GUEST_FUZZ(0x00301e20, 200, [](guest::Fuzz &f) {
    auto record = f.object<VillagerHeader>();
    record->id = u16(f.pick<u32>({0, 1, 100, VILLAGER_ID_LIMIT - 1, VILLAGER_ID_LIMIT, f.number()}));
    record->personality = u8(f.pick<u32>({0, 3, PERSONALITY_LIMIT - 1, PERSONALITY_LIMIT, f.number()}));
    f.arguments(record);
});

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
GUEST_EXPORT(0x00308d05, find_villager_by_id);
GUEST_FUZZ(0x00308d05, 200, [](guest::Fuzz &f) {
    f.arguments(f.allocate(SaveData::VILLAGER_COUNT * sizeof(SaveVillager)).cast<SaveVillager>(), f.pick<u32>({0, 1, 100, 0x18e, f.number()}));
});
GUEST_FUZZ(0x001190fd, 200, [](guest::Fuzz &f) {
    f.arguments(f.allocate(SaveData::VILLAGER_COUNT * sizeof(SaveVillager)).cast<SaveVillager>(),
                f.pick<u32>({0, 1, 100, 0x18e, f.number()}));
});

// The number of valid villager records among the ten of the town.
u32 count_villager_records(gptr<SaveVillager> villagers) {
    u32 count = 0;
    for (u32 index = 0; index < SaveData::VILLAGER_COUNT; index++) {
        if (is_villager_record((villagers + index).cast<VillagerHeader>())) {
            count++;
        }
    }
    return count;
}
GUEST_EXPORT(0x00118c75, count_villager_records);
GUEST_FUZZ(0x00118c75, 100, [](guest::Fuzz &f) {
    f.arguments(f.allocate(SaveData::VILLAGER_COUNT * sizeof(SaveVillager)).cast<SaveVillager>());
});

// The index in the list of the first villager that is the same as this one (same id, and both blocks equal);
// -1 if the villager is not valid or none matches.
s32 index_of_same_villager(gptr<SaveVillager> villager, gptr<SaveVillager> list, u32 count) {
    if (!is_villager_record(villager.cast<VillagerHeader>())) {
        return -1;
    }
    for (u32 index = 0; index < count; index++) {
        gptr<VillagerHeader> candidate = (list + index).cast<VillagerHeader>();
        gptr<VillagerHeader> own = villager.cast<VillagerHeader>();
        if (own->id != candidate->id) {
            continue;
        }
        if (records_equal(own.cast<void>(), candidate.cast<void>()) &&
            records_equal(guest::addr_of(own->block_16).cast<void>(), guest::addr_of(candidate->block_16).cast<void>())) {
            return s32(index);
        }
    }
    return -1;
}
GUEST_EXPORT(0x00308971, index_of_same_villager);
GUEST_FUZZ(0x00308971, 100, [](guest::Fuzz &f) {
    f.arguments(f.allocate(sizeof(SaveVillager)).cast<SaveVillager>(), f.allocate(3 * sizeof(SaveVillager)).cast<SaveVillager>(), f.below(4));
});
