#include "core/state_94fd0c.hpp"

#include "item/item.hpp"
#include "save/player.hpp"

namespace {

constexpr s32 SLOT_BIAS = 0x14;
constexpr u8 MODE_REQUESTED = 2;

inline constexpr guest::Function<0x006d1ffc, u32(u32 request, u32 unknown)> try_request;
inline constexpr guest::Function<0x00194bc0, void(u32 object, u32 argument)> notify_object;
inline constexpr guest::Function<0x002fb94c, gptr<SavePlayer>(Item &dest)> get_current_player;
inline constexpr guest::Function<0x00724424, const Item &(Pockets &pockets, s32 slot, u32 unknown)> pockets_get_item;

constexpr u32 NOTIFY_REQUEST = 0x7b;

}  // namespace

// Returns a field of the global state.
u32 get_state_30() {
    return state_94fd0c->unknown_30;
}
GUEST_EXPORT(0x006d1e64, get_state_30);
GUEST_FUZZ(0x006d1e64, 200, [](guest::Fuzz &f) { f.arguments(); });

// Makes the 0x7b request; when it is accepted, marks the state and notifies the object.
u32 request_and_notify(u32 object, u32 argument) {
    u32 result = try_request(NOTIFY_REQUEST, 0);
    if (result != 0) {
        state_94fd0c->mode = MODE_REQUESTED;
        notify_object(object, argument);
    }
    return result;
}
GUEST_EXPORT(0x006d1e74, request_and_notify);
GUEST_FUZZ(0x006d1e74, 200, [](guest::Fuzz &f) {
    auto object = f.allocate(0x100);
    f.bytes(object, 0x100);
    memset(object.get(), 0, 0x100);
    f.arguments(object.addr(), u32(9));
});

// Makes a request; when it is accepted, resets field 0x50 and marks the state.
u32 request_and_reset(u32 request) {
    u32 result = try_request(request, 0);
    if (result != 0) {
        state_94fd0c->unknown_50 = -1;
        state_94fd0c->mode = MODE_REQUESTED;
    }
    return result;
}
GUEST_EXPORT(0x006d1eb8, request_and_reset);
GUEST_FUZZ(0x006d1eb8, 200, [](guest::Fuzz &f) { f.arguments(f.pick<u32>({0x42, 0x43})); });

// The pocket slot number, without the bias of 20 it may carry.
s32 unbiased_pocket_slot() {
    s32 slot = state_94fd0c->pocket_slot_44;
    if (slot >= SLOT_BIAS) {
        slot -= SLOT_BIAS;
    }
    return slot;
}
GUEST_EXPORT(0x006d1ee8, unbiased_pocket_slot);
GUEST_FUZZ(0x006d1ee8, 200, [](guest::Fuzz &f) { f.arguments(); });

// Copies the item in the current player's pocket slot (from the global state) into dest.
Item &copy_selected_pocket_item(Item &dest) {
    gptr<SavePlayer> player = get_current_player(dest);
    const Item &item = pockets_get_item(player->pockets, state_94fd0c->pocket_slot_44, 0);
    return copy_item(dest, item);
}
GUEST_EXPORT(0x006d1f00, copy_selected_pocket_item);
GUEST_FUZZ(0x006d1f00, 200, [](guest::Fuzz &f) { f.arguments(f.object<Item>()); });
