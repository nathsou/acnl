// Questions about the time of the year that decide which seasonal effects run (snow, cherry blossom petals) and a
// coin flip that is the same all day.
#include "arm.hpp"
#include "core/day_start.hpp"
#include "core/random.hpp"
#include "item/item.hpp"
#include "save/save_data.hpp"

namespace {

inline constexpr guest::Function<0x002f74c8, u8()> read_global_byte_2;
inline constexpr guest::Function<0x002f74e0, u32(u32 mask, u32 index)> table_entry_has_all_bits;

constexpr u32 MODE_FLAG_NO_SEASONAL_EFFECTS = 0x20000;  // modes with this flag in the mode table report none of these
constexpr u32 SNOW_PERIOD_VALUE = 9;                     // period_table_value(0) while snow falls
constexpr u32 PERIOD_VALUE_RANGE_FIRST = 5;              // period_table_value(0) between these (meaning not known yet)
constexpr u32 PERIOD_VALUE_RANGE_LAST = 7;
constexpr u32 PERIOD_VALUE_COLUMN = 0;
constexpr u8 SATURDAY = 6;
constexpr s32 SAKURA_MONTH = 4;
constexpr s32 SAKURA_FIRST_DAY = 7;
constexpr s32 SAKURA_LAST_DAY = 10;
constexpr u32 SEED_YEAR_SHIFT = 9;   // the seed of the coin flip: the date as year * 512 + day * 64 + month ...
constexpr u32 SEED_DAY_SHIFT = 6;
constexpr u32 SEED_DATE_SHIFT = 16;  // ... in the high half, the town's flags_621b8 in the low half
constexpr float COIN_SCALE = 2.0f;

// An object holding an item (a map object number below 0x2000, a plant or the like; what exactly is not known yet).
struct ObjectWithItem {
    u8 unknown_00[0x64];
    Item item;
};
GUEST_OFFSET(ObjectWithItem, item, 0x64);

// The map objects whose numbers are listed share a table of 18 words, one per value of the sixth column of the period
// table (period_table_value(5)).
constexpr u32 PERIOD_VALUE_TABLE_COLUMN = 5;
struct ObjectGroup {
    u16 numbers[4];  // 0 pads the groups with fewer
    u32 table_address;
};
// (what the objects of each group are is not known yet)
constexpr ObjectGroup OBJECT_GROUPS[] = {
    {{0x82, 0x81, 0, 0}, 0x0094f0cc},  // numbers 0x81, 0x82
    {{0x85, 0x88, 0x84, 0x87}, 0x0094f114},  // numbers 0x84, 0x85, 0x87, 0x88
    {{0x8e, 0x8b, 0x8d, 0x8a}, 0x0094f15c},  // numbers 0x8a, 0x8b, 0x8d, 0x8e
    {{0x91, 0x94, 0x90, 0x93}, 0x0094f1a4},  // numbers 0x90, 0x91, 0x93, 0x94
    {{0x97, 0x96, 0, 0}, 0x0094f1ec},  // numbers 0x96, 0x97
};
constexpr u32 NO_VALUE = 0xffffffff;

bool mode_has_seasonal_effects() {
    return table_entry_has_all_bits(MODE_FLAG_NO_SEASONAL_EFFECTS, read_global_byte_2()) == 0;
}

}  // namespace

// Whether the period of the year is the one with snow (never in the modes that report no seasonal effects).
bool is_snow_period() {
    return mode_has_seasonal_effects() && period_table_value(PERIOD_VALUE_COLUMN) == SNOW_PERIOD_VALUE;
}
GUEST_EXPORT(0x0062fb44, is_snow_period);

bool is_period_value_5_to_7() {
    if (!mode_has_seasonal_effects()) {
        return false;
    }
    return period_table_value(PERIOD_VALUE_COLUMN) - PERIOD_VALUE_RANGE_FIRST <=
           PERIOD_VALUE_RANGE_LAST - PERIOD_VALUE_RANGE_FIRST;
}
GUEST_EXPORT(0x0062fac8, is_period_value_5_to_7);
GUEST_EXPORT(0x0062fb04, is_period_value_5_to_7);

// Whether cherry blossom petals fly: both the day start the clock reports and the day start of the reference time are
// in April 7th-10th.
bool is_sakura_petal_time() {
    if (!mode_has_seasonal_effects()) {
        return false;
    }
    TimeStamp reported;
    day_start_by_clock_mode(reported);
    if (reported.month != SAKURA_MONTH) {
        return false;
    }
    TimeStamp today = *reference_time;
    today.move_to_day_start();
    return today.month == SAKURA_MONTH && today.day >= SAKURA_FIRST_DAY && today.day <= SAKURA_LAST_DAY;
}
GUEST_EXPORT(0x00630164, is_sakura_petal_time);

// A coin flip that is the same all day (and in every game with the same town flags): the first number of a generator
// seeded from the date.
bool date_seeded_coin_flip() {
    TimeStamp day_start;
    day_start_by_clock_mode(day_start);
    u32 date = (u32(day_start.year) << SEED_YEAR_SHIFT) + (u32(s32(day_start.day)) << SEED_DAY_SHIFT) + u32(s32(day_start.month));
    Random generator;
    generator.state = (*save_data)->flags_621b8 + (date << SEED_DATE_SHIFT);
    return arm::to_s32(generator.next_float() * COIN_SCALE) != 0;
}
GUEST_EXPORT(0x0062f5c4, date_seeded_coin_flip);

// The word of the object's group table for the period (see OBJECT_GROUPS), NO_VALUE for objects in no group.
u32 seasonal_value_of_object(const ObjectWithItem &object) {
    u32 period_value = period_table_value(PERIOD_VALUE_TABLE_COLUMN);
    for (const ObjectGroup &group : OBJECT_GROUPS) {
        for (u16 number : group.numbers) {
            if (number != 0 && object.item.has_number(number)) {
                return gptr<u32>(group.table_address)[period_value];
            }
        }
    }
    return NO_VALUE;
}
GUEST_EXPORT(0x00595b18, seasonal_value_of_object);

// The opposite of is_snow_period.
bool is_snow_free_period() {
    return !is_snow_period();
}
GUEST_EXPORT(0x006cb9fc, is_snow_free_period);

// Whether the day start the clock reports is a Saturday (the weekday of a time is 0 for Sunday).
bool day_start_is_saturday() {
    TimeStamp day_start;
    day_start_by_clock_mode(day_start);
    return day_start.weekday == SATURDAY;
}
GUEST_EXPORT(0x0071728c, day_start_is_saturday);
