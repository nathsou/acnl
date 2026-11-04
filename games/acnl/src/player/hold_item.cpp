// Taking an item in hand: the request the game makes (the one-screen tool ring makes it too) and the player state it
// starts. Proved equal to the original: written in the C++ that tools/decomp reads back (docs/decomp.md, "Proved
// overrides"), and checked with `decomp prove-cpp games/acnl/src/player/hold_item.cpp`.
#include "guest/guest.hpp"
#include "player/slot_object.hpp"

using guest::gptr;

namespace hold_item {

inline constexpr u32 MAIN_OBJECT = 4u;   // look_up_object's slot number for the main slot's object: the local player
inline constexpr u32 EXCLUDE_IDLE = 0u;  // look_up_object: no object whose state is none
inline constexpr u32 HOLD_BLOCKED_BIT = 5u;  // SlotObject::flags_8c5: set, no item is taken in hand (what sets it: not known yet)
inline constexpr u32 STATE_HOLD_ITEM = 0x38u;  // the player state that takes the request's item in hand
inline constexpr u32 CHANGE_NOW = 0u;  // change_state's last argument as this caller passes it (meaning not known yet)

// The record a player state reads its request from (state_params: the player's own, at +0x8bc).
struct __attribute__((packed)) StateRequest {
    u8 unknown_0[0xe];
    u32 item;  // an Item (id, then flags), copied as one word
    u8 flag;   // the requester's second argument
};
GUEST_OFFSET(StateRequest, item, 0xe);
GUEST_OFFSET(StateRequest, flag, 0x12);

inline constexpr guest::Function<0x005c33d0, u32(u32 slot, u32 include_idle)> look_up_object;
inline constexpr guest::Function<0x00656c20, u32(u32 player)> state_request;
inline constexpr guest::Function<0x0064d0b8, u32(u32 player, u32 state, u32 request, u32 mode)> change_state;
inline constexpr guest::Function<0x00660d14, u32(u32 player, u32 item, u32 flag)> start_hold_state;

// Asks the local player to take the item in hand (`item`: an Item's address). Returns 0 when there is no player, or
// when it takes nothing in hand now; otherwise what changing its state returns.
u32 request_hold_item(u32 item, u32 flag) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    gptr<SlotObject> player = gptr<SlotObject>(look_up_object(MAIN_OBJECT, EXCLUDE_IDLE));
    if (player.addr() == 0u) {
        return 0u;
    }
    if ((u32(player->flags_8c5) >> HOLD_BLOCKED_BIT & 1u) != 0) {
        return 0u;
    }
    frame.release();
    return start_hold_state(player.addr(), item, flag);
}
GUEST_EXPORT(0x005c1b6c, request_hold_item);

// Puts the item (an Item's address) and the flag in the player's state request, then changes its state to the one
// that takes the item in hand.
u32 start_hold_state_now(u32 player, gptr<u32> item, u32 flag) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    gptr<StateRequest> request = gptr<StateRequest>(state_request(player));
    request->item = *item;
    request->flag = u8(flag);
    frame.release();
    return change_state(player, STATE_HOLD_ITEM, request.addr(), CHANGE_NOW);
}
GUEST_EXPORT(0x00660d14, start_hold_state_now);

}  // namespace hold_item
