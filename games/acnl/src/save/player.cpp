#include "save/player.hpp"

void SavePlayer::deposit(u32 bells) { bank.add(bells, BANK_MAX); }
GUEST_EXPORT(0x00305a40, SavePlayer::deposit);

// (only the bank is real memory: deposit touches nothing else)
GUEST_FUZZ(0x00305a40, 300, [](guest::Fuzz &f) {
    auto bank = f.object<EncryptedInt>();
    bank->checksum = EncryptedInt::checksum_of(bank->scrambled);
    f.arguments(gptr<SavePlayer>(bank.addr() - offsetof(SavePlayer, bank)), f.number());
});
