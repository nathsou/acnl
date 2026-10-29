// Flags of the save data.
#include "save/save_data.hpp"

bool save_data_flag_621cf_bit_2() {
    return ((*save_data)->flags_621cf & SaveData::FLAGS_621CF_BIT_2) != 0;
}
GUEST_EXPORT(0x00758e08, save_data_flag_621cf_bit_2);

GUEST_FUZZ(0x00758e08, 200, [](guest::Fuzz &f) { f.arguments(); });
