// A byte rolled according to how far the game has progressed.
#include "core/random.hpp"
#include "save/save_data.hpp"

namespace {

constexpr u32 STAGE_SHIFT = 4;         // the stage is the top nibble of flags_621ce
constexpr u32 FIRST_STAGES = 4;        // stages 0 to 3 have their own ranges, later ones all give LAST_TIER
constexpr u32 LAST_TIER = 9;
constexpr u32 TIER_SHIFT = 4;          // the tier is the high nibble of the byte
constexpr u32 LOW_BASE = 10;           // the low nibble is LOW_BASE plus a roll
constexpr s32 LOW_ROLLS = 6;

// The tiers each stage can give: a first tier and how many follow it (stage 3 gives only 8).
struct TierRange {
    u32 first;
    s32 rolls;
};
constexpr TierRange TIER_RANGES[FIRST_STAGES] = {{1, 3}, {4, 2}, {6, 2}, {8, 0}};

inline constexpr guest::Function<0x002fb328, gptr<SaveData>()> get_save_data;

}  // namespace

// Sets the byte at offset 9 of the object: a tier from the game's stage (stage 0 gives 1 to 3, 1 gives 4 to 5, 2 gives
// 6 to 7, 3 gives 8, later ones 9) in the high nibble and LOW_BASE plus a roll of 0 to 5 in the low nibble.
void roll_stage_byte(gptr<u8> object) {
    u32 stage = get_save_data()->flags_621ce >> STAGE_SHIFT;
    u32 tier = LAST_TIER;
    if (stage < FIRST_STAGES) {
        const TierRange &range = TIER_RANGES[stage];
        tier = range.first;
        if (range.rolls != 0) {
            tier += u32(random_below(range.rolls));
        }
    }
    object[9] = u8((tier << TIER_SHIFT) | (u32(random_below(LOW_ROLLS)) + LOW_BASE));
}
GUEST_EXPORT(0x006efc48, roll_stage_byte);
