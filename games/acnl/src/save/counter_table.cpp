// The counter table of a player, and the current player's counters.
#include "save/player.hpp"

namespace {

constexpr u32 NO_LIMIT = 0xffffffff;
inline constexpr guest::Function<0x002fb94c, gptr<SavePlayer>()> get_current_player;

}  // namespace

void CounterTable::clear() {
    for (EncryptedInt &counter : counters) {
        counter.set(0);
    }
    for (u32 &word : words_c0) {
        word = 0;
    }
    extra_d8.set(0);
    extra_e0.set(0);
}
GUEST_EXPORT(0x0024b7f8, CounterTable::clear);
GUEST_EXPORT(0x003034d8, CounterTable::clear);  // (a second copy of the same code)
GUEST_FUZZ(0x0024b7f8, 100, [](guest::Fuzz &f) { f.arguments(f.object<CounterTable>()); });
GUEST_FUZZ(0x003034d8, 100, [](guest::Fuzz &f) { f.arguments(f.object<CounterTable>()); });

void CounterTable::add(u32 index, u32 amount) {
    if (index >= COUNT) {
        return;
    }
    counters[index].add(amount, NO_LIMIT);
}
GUEST_EXPORT(0x0024b8a8, CounterTable::add);
GUEST_FUZZ(0x0024b8a8, 200, [](guest::Fuzz &f) {
    f.arguments(f.object<CounterTable>(), f.pick<u32>({0, 5, 23, 24, 0xffffffffu}), f.pick<u32>({0, 1, 100, 0xffffffffu, f.number()}));
});

// Adds to a counter of the current player.
void add_to_current_player_counter(u32 index, u32 amount) {
    gptr<SavePlayer> player = get_current_player();
    if (!player) {
        return;
    }
    player->counters.add(index, amount);
}
GUEST_EXPORT(0x0024b7b8, add_to_current_player_counter);
GUEST_FUZZ(0x0024b7b8, 200, [](guest::Fuzz &f) { f.arguments(f.pick<u32>({0, 5, 23, 24, 0xffffffffu}), f.pick<u32>({0, 1, 100, f.number()})); });
