#include "guest/guest.hpp"

namespace {

// The global pointer to the player manager (BsPlayerMgr) instance.
inline guest::global<guest::gptr<void>, 0x00950368> player_manager;

constexpr u32 SUB_OBJECT_OFFSET = 0x18;  // an object embedded in the player manager (not known yet)

}  // namespace

// The address of the object embedded 0x18 bytes into the player manager.
guest::gptr<void> player_manager_sub_object() {
    return *player_manager + SUB_OBJECT_OFFSET;
}
GUEST_EXPORT(0x001c4384, player_manager_sub_object);
