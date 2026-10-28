#include "npc/npc_item_slots.hpp"

void NpcItemSlots::clear_flags_16_17() {
    flags_2510 &= ~FLAGS_16_17;
}
GUEST_EXPORT(0x00307078, NpcItemSlots::clear_flags_16_17);

GUEST_FUZZ(0x00307078, 200, [](guest::Fuzz &f) { f.arguments(f.object<NpcItemSlots>()); });
