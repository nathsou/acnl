// Whether an item is on offer now: each item's availability rule (ItemData::availability_rule) names a condition on the
// season, the month, the player's data or the villagers of the town.
#include "core/time_stamp.hpp"
#include "item/item.hpp"
#include "save/save_data.hpp"

namespace {

// The rules, by the item data's byte. Most of them are a season or a month.
enum Rule : u8 {
    RULE_PAIR_MATCH = 0x3f,       // the item is one of the pair in the save data
    RULE_VILLAGER_PHOTO = 0x72,   // a villager with the id of the item's number (within its category) lives in town
    RULE_PLAYER_MONTH = 0x7d,     // the month is the one stored in the player's data
    RULE_NOVEMBER = 0x84,         // the month is November and the item is one of two special ones
    RULE_DECEMBER = 0x85,
    RULE_SPRING_A = 0x75,
    RULE_SUMMER_A = 0x76,
    RULE_AUTUMN_A = 0x77,
    RULE_WINTER_A = 0x78,
    RULE_SPRING_B = 0x79,
    RULE_SUMMER_B = 0x7a,
    RULE_AUTUMN_B = 0x7b,
    RULE_WINTER_B = 0x7c,
    RULE_FEBRUARY = 0xaa,
    RULE_MARCH = 0x7f,
    RULE_APRIL = 0x80,
    RULE_MAY = 0x81,
    RULE_JUNE = 0x82,
    RULE_AUGUST = 0x83,
    RULE_OCTOBER = 0x73,
};

enum Month : s8 {
    FEBRUARY = 2,
    MARCH = 3,
    APRIL = 4,
    MAY = 5,
    JUNE = 6,
    AUGUST = 8,
    OCTOBER = 10,
    NOVEMBER = 11,
    DECEMBER = 12,
};

enum Season : u32 {
    SPRING = 0,
    SUMMER = 1,
    AUTUMN = 2,
    WINTER = 3,
};

// The two numbers the November rule lets through.
constexpr u16 NOVEMBER_ITEM_A = 0x2098;
constexpr u16 NOVEMBER_ITEM_B = 0x209c;

inline constexpr guest::Function<0x00303770, gptr<SavePlayer>(u32 slot)> player_record_for_slot;
inline constexpr guest::Function<0x001190fd, gptr<SaveVillager>(gptr<SaveVillager> villagers, u32 id)> find_villager_by_id;
inline constexpr guest::Function<0x002fb328, gptr<SaveData>()> get_save_data;

bool pair_contains(const ItemPair &pair, const Item &item) {
    for (const Item &candidate : pair.items) {
        if (item.has_number(candidate.number())) {
            return true;
        }
    }
    return false;
}

}  // namespace

// Whether the item is on offer at the time of the reference clock, for the player of the slot.
bool item_is_available(const Item &item, u32 player_slot) {
    if (!item.is_item()) {
        return false;
    }
    gptr<ItemData> data = item.data();
    if (data == nullptr) {
        return false;
    }
    u8 rule = data->availability_rule >= ItemData::RULE_LIMIT ? 0 : data->availability_rule;
    TimeStamp now = *reference_time;
    s32 month = now.month;
    switch (rule) {
    case RULE_PAIR_MATCH:
        return pair_contains(get_save_data()->pair_6ae48, item);
    case RULE_PLAYER_MONTH:
        return month == s32(player_record_for_slot(player_slot)->month_55d4);
    case RULE_VILLAGER_PHOTO:
        return find_villager_by_id(guest::addr_of(get_save_data()->villagers[0]), u16(item_offset_in_category(item))) != nullptr;
    case RULE_SPRING_A:
    case RULE_SPRING_B:
        return now.season() == SPRING;
    case RULE_SUMMER_A:
    case RULE_SUMMER_B:
        return now.season() == SUMMER;
    case RULE_AUTUMN_A:
    case RULE_AUTUMN_B:
        return now.season() == AUTUMN;
    case RULE_WINTER_A:
    case RULE_WINTER_B:
        return now.season() == WINTER;
    case RULE_FEBRUARY:
        return month == FEBRUARY;
    case RULE_MARCH:
        return month == MARCH;
    case RULE_APRIL:
        return month == APRIL;
    case RULE_MAY:
        return month == MAY;
    case RULE_JUNE:
        return month == JUNE;
    case RULE_AUGUST:
        return month == AUGUST;
    case RULE_OCTOBER:
        return month == OCTOBER;
    case RULE_NOVEMBER:
        return month == NOVEMBER && (item.has_number(NOVEMBER_ITEM_A) || item.has_number(NOVEMBER_ITEM_B));
    case RULE_DECEMBER:
        return month == DECEMBER;
    default:
        return false;
    }
}
GUEST_EXPORT(0x00188fd4, item_is_available);
