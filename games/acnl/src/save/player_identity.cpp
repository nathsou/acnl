// The identity block of a player (SavePlayer::identity, and copies of it elsewhere in the save).
#include "save/player.hpp"

namespace {

// Checks a block of data inside the identity (non-zero when it is valid; what it checks is not known yet).
inline constexpr guest::Function<0x0076c6d4, u32(gptr<const void> block)> check_block;

}  // namespace

struct PlayerIdentity {
    u16 id;  // 0 when no player is set
    u8 unknown_02[0x14];
    u8 block_16;  // first byte of the block given to check_block (extent not known yet)

    bool is_set() const;
};
GUEST_OFFSET(PlayerIdentity, id, 0);
GUEST_OFFSET(PlayerIdentity, block_16, 0x16);

// An identity is set when its id is non-zero and its block passes check_block.
bool PlayerIdentity::is_set() const {
    if (id == 0) {
        return false;
    }
    return check_block(guest::addr_of(block_16)) != 0;
}
GUEST_EXPORT(0x002fbd54, PlayerIdentity::is_set);

// ---- inputs for the shadow checker's fuzzing (GUEST_FUZZ=1)

GUEST_FUZZ(0x002fbd54, 300, [](guest::Fuzz &f) {
    constexpr u32 SIZE = 0x200;  // generous: the extent of the checked block is not known
    auto identity = f.allocate(SIZE).cast<PlayerIdentity>();
    f.bytes(identity, SIZE);
    if (f.below(4) == 0) {
        identity->id = 0;
    }
    f.arguments(identity);
});
