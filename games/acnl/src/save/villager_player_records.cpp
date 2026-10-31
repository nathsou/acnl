// Looking up what a villager keeps for a player.
#include "save/villager.hpp"

gptr<VillagerPlayerRecord> SaveVillager::find_player_record(const PersonalId &identity) {
    for (u32 i = 0; i < PLAYER_RECORDS; i++) {
        gptr<VillagerPlayerRecord> record = guest::addr_of(player_records[i]);
        if (identities_match(record->identity, identity)) {
            return record;
        }
    }
    return nullptr;
}
GUEST_EXPORT(0x00309eb9, SaveVillager::find_player_record);
GUEST_EXPORT(0x00309f85, SaveVillager::find_player_record);  // an identical copy
