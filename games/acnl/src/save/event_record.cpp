// The record of an event that involves players (a requester and up to six participants), and what happens to a player's
// belongings when it is finished.
#include "save/pockets.hpp"
#include "save/player.hpp"

namespace {

constexpr u32 PARTICIPANT_COUNT = 6;
constexpr u8 NONE_VALUE = 0x21;              // the record's value while it holds nothing
constexpr u8 FINISHED_STATE = 3;             // the state after finishing; states below it are running
constexpr u16 NO_VALUE = 0xffff;
constexpr u32 PENDING_CATEGORY = 0x4c;       // items of this category in the pockets become DONE_CATEGORY ones
constexpr u32 DONE_CATEGORY = 0x4d;
constexpr u32 NO_LOCK = 0;

inline constexpr guest::Function<0x006b9858, bool(Item &item, u32 from, u32 to)> convert_item_category;

struct Participant {
    PlayerRef who;
    u16 value;
};
GUEST_SIZE(Participant, 24);

}  // namespace

struct EventRecord {
    u8 time[8];
    u8 value;
    u8 state;
    u8 unknown_0a[2];
    PlayerRef requester;
    u16 requester_value;
    Participant participants[PARTICIPANT_COUNT];
};
GUEST_OFFSET(EventRecord, value, 8);
GUEST_OFFSET(EventRecord, requester, 0xc);
GUEST_OFFSET(EventRecord, requester_value, 0x22);
GUEST_OFFSET(EventRecord, participants, 0x24);
GUEST_SIZE(EventRecord, 0xb4);

// Finishes the event: when the record holds a running event and the player exists, the player's pocket items of category
// 0x4c are converted to category 0x4d; then the record is emptied (value 0x21, state 3, nobody involved).
void finish_event(EventRecord &record, gptr<SavePlayer> player) {
    if (player && player->identity.is_set() && record.value < NONE_VALUE && record.state < FINISHED_STATE) {
        for (u32 slot = 0; slot < Pockets::SLOTS; slot++) {
            Item item = player->pockets.item_with_lock(slot, gptr<u8>(0u));
            if (item.category() == PENDING_CATEGORY && convert_item_category(item, PENDING_CATEGORY, DONE_CATEGORY)) {
                player->pockets.set_slot(slot, item, NO_LOCK, true);
            }
        }
    }
    record.value = NONE_VALUE;
    record.state = FINISHED_STATE;
    record.requester.clear();
    record.requester_value = NO_VALUE;
    for (Participant &participant : record.participants) {
        participant.who.clear();
        participant.value = NO_VALUE;
    }
}
GUEST_EXPORT(0x005bce04, finish_event);
GUEST_FUZZ(0x005bce04, 100, [](guest::Fuzz &f) {
    f.allocate(0x1000);  // (clear of the stack)
    auto record = f.object<EventRecord>();
    record->value = f.pick<u8>({0, 5, NONE_VALUE, 0x30});
    record->state = f.pick<u8>({0, 2, 3, 4});
    auto player = f.object<SavePlayer>();
    player->identity.player.id = f.pick<u16>({0, 1, 0x1234});
    for (u32 slot = 0; slot < Pockets::SLOTS; slot++) {
        player->pockets.items[slot].id = f.below(3) == 0 ? u16(f.number()) : u16(Item::FIRST_ITEM + f.below(Item::ITEM_COUNT));
    }
    f.arguments(record, f.below(5) == 0 ? gptr<SavePlayer>(0u) : player);
});
