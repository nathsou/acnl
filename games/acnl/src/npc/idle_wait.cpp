// Picking how long an idle actor waits, and what it waits for.
#include "arm.hpp"
#include "core/actor_actions.hpp"

namespace {

inline constexpr guest::Function<0x002ff6f8, s32(s32 max)> random_below;
inline constexpr guest::Function<0x00565c10, float(float scale)> random_up_to;

constexpr s32 WAIT_RANGE = 50;           // the first wait: 10 to 59
constexpr u32 WAIT_MINIMUM = 10;
constexpr float SECOND_WAIT_RANGE = 50.0f;  // the second wait: 10 to 60 (as a whole number)
constexpr float SECOND_WAIT_MINIMUM = 10.0f;
constexpr u32 ACTOR_OFFSET = 0x78;
constexpr u32 FIRST_PRIORITY = 0;
inline guest::global<float, 0x0088069c> second_value_for_waiting;

}  // namespace

// An actor that waits.
struct WaitingActor {
    u8 unknown_00[0x14];
    Float3 position;
    u8 unknown_20[ACTOR_OFFSET - 0x20];
    ActorObject actor;
    u8 unknown_after_actor[0x1d70 - ACTOR_OFFSET - sizeof(ActorObject)];
    u32 wait_frames;
    u32 second_wait;
    u32 word_1d78;
    Float3 wait_position;  // the position the actor was at when it started to wait
    u32 word_1d88;
};
GUEST_OFFSET(WaitingActor, position, 0x14);
GUEST_OFFSET(WaitingActor, actor, ACTOR_OFFSET);
GUEST_OFFSET(WaitingActor, wait_frames, 0x1d70);
GUEST_OFFSET(WaitingActor, wait_position, 0x1d7c);
GUEST_OFFSET(WaitingActor, word_1d88, 0x1d88);

// Draws two random waits, notes the position and starts the idle action.
bool start_waiting(WaitingActor &self) {
    self.wait_frames = u32(random_below(WAIT_RANGE)) + WAIT_MINIMUM;
    self.second_wait = u32(arm::to_s32(random_up_to(SECOND_WAIT_RANGE) + SECOND_WAIT_MINIMUM));
    self.word_1d78 = 0;
    self.wait_position = self.position;
    self.word_1d88 = 0;
    return begin_action_0(self.actor, *second_value_for_waiting, FIRST_PRIORITY);
}
GUEST_EXPORT(0x006049ac, start_waiting);
GUEST_FUZZ(0x006049ac, 100, [](guest::Fuzz &f) {
    f.allocate(0x1000);  // (clear of the stack the original works on)
    auto actor = f.allocate(sizeof(WaitingActor)).cast<WaitingActor>();
    actor->actor.priority = u8(f.below(3));
    actor->actor.state = f.pick<u8>({0, 5, 0x30});
    f.arguments(actor);
});
