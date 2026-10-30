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

namespace {

constexpr u32 KIND_INFO_ADDRESS = 0x0087966c;  // a table of the game, indexed by the kind of a counter
constexpr u32 KIND_INFO_SIZE = 16;

}  // namespace

// What the game knows about a kind of player counter (the table has no bounds check, kinds are small).
struct CounterKindInfo {
    u8 unknown_00[0xc];
    u32 limit;  // the most a counter of this kind can reach
    u8 unknown_10[KIND_INFO_SIZE - 0x10];
};
GUEST_OFFSET(CounterKindInfo, limit, 0xc);
GUEST_SIZE(CounterKindInfo, KIND_INFO_SIZE);

gptr<CounterKindInfo> counter_kind_info(u32 kind) {
    return gptr<CounterKindInfo>(KIND_INFO_ADDRESS + kind * KIND_INFO_SIZE);
}
GUEST_EXPORT(0x0029b88c, counter_kind_info);
GUEST_FUZZ(0x0029b88c, 50, [](guest::Fuzz &f) { f.arguments(f.pick<u32>({0, 1, 2, 5, 20, f.below(40)})); });
