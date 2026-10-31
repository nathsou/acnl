// PersonalId::is_set (the identity block of a player, and copies of it elsewhere in the save).
#include "save/player.hpp"

namespace {

// Checks the town part of an identity (non-zero when it is valid; what it checks is not known yet).
inline constexpr guest::Function<0x0076c6d4, u32(gptr<const void> block)> check_town_part;

}  // namespace

// An identity is set when its player id is non-zero and its town part passes the check.
bool PersonalId::is_set() const {
    if (player.id == 0) {
        return false;
    }
    return check_town_part(guest::addr_of(town)) != 0;
}
GUEST_EXPORT(0x002fbd54, PersonalId::is_set);
