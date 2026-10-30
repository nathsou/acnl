// The growth of the items 0x334d and 0x334e (probably something planted), which the game advances in steps.
#include "core/random.hpp"
#include "item/item.hpp"

namespace {

constexpr u16 GROWING_NUMBER_A = 0x334d;
constexpr u16 GROWING_NUMBER_B = 0x334e;
constexpr u16 STAGE_MASK = 0x000f;     // flags bits 0-3: the stage
constexpr u16 PROGRESS_MASK = 0x00f0;  // flags bits 4-7: progress towards the next stage
constexpr u32 PROGRESS_SHIFT = 4;
constexpr u32 PROGRESS_LIMIT = 7;      // progress is not raised any more from here, the stage is
constexpr u32 FINAL_STAGE = 8;         // stages from here on are fully grown
constexpr u32 PROGRESS_DENOMINATOR = FINAL_STAGE;  // the stage advances with probability 1 / (denominator - progress)

}  // namespace

// One growth step for an item that grows: with probability 1 / (8 - progress) the stage goes up (and the progress
// goes back to 0), otherwise the progress goes up (the stage goes up whenever the progress is already 7). Returns
// whether the item is fully grown afterwards, which is also what it returns for fully grown items and (as false)
// for items that do not grow.
bool grow_one_step(Item &item) {
    u16 number = item.number();
    if (number != GROWING_NUMBER_A && number != GROWING_NUMBER_B) {
        return false;
    }
    u32 stage = item.flags & STAGE_MASK;
    if (stage >= FINAL_STAGE) {
        return true;
    }
    u32 progress = (item.flags & PROGRESS_MASK) >> PROGRESS_SHIFT;
    if (progress < PROGRESS_LIMIT && random_below(PROGRESS_DENOMINATOR - progress) != 0) {
        item.flags = u16((item.flags & ~PROGRESS_MASK) | (((progress + 1) & STAGE_MASK) << PROGRESS_SHIFT));
    } else {
        item.flags = u16((item.flags & ~(PROGRESS_MASK | STAGE_MASK)) | ((stage + 1) & STAGE_MASK));
    }
    return (item.flags & STAGE_MASK) >= FINAL_STAGE;
}
GUEST_EXPORT(0x006baba4, grow_one_step);
GUEST_FUZZ(0x006baba4, 300, [](guest::Fuzz &f) {
    auto item = f.object<Item>();
    item->id = u16(f.pick<u32>({GROWING_NUMBER_A, GROWING_NUMBER_B, 0xb34d, 0x334f, f.number()}));
    item->flags = u16(f.below(10) | f.below(10) << PROGRESS_SHIFT | (f.below(2) ? 0 : f.number() & 0xff00));
    f.arguments(item);
});
