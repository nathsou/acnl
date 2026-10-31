#include "save/player.hpp"

void SavePlayer::deposit(u32 bells) { bank.add(bells, BANK_MAX); }
GUEST_EXPORT(0x00305a40, SavePlayer::deposit);
