// The part of an actor (a villager, an animal, the player's avatar...) that holds the action it is doing: a state, its
// priority and the state's parameters. core/actor_actions.cpp has the functions that start the different actions.
#pragma once

#include "core/word_pair.hpp"
#include "graphics/hemisphere_light.hpp"
#include "guest/guest.hpp"
#include "item/item.hpp"

// The parameters of an actor's action (cleared when the action changes).
struct ActionParameters {
    WordPair pair;     // two words (meaning not known yet)
    float speed;
    Float3 vector;
    float second_value;
    float value_494;
    u16 angle_a;
    u16 angle_b;
    u8 flag_byte;
    u8 byte_49d;
    u16 half_49e;
    Item item_4a0;
    u8 marker;         // ACTOR_ACTION_MARKER once an action is set
    u8 byte_4a5;
    u8 byte_4a6;
    u8 byte_4a7;
};
GUEST_OFFSET(ActionParameters, half_49e, 0x26);
GUEST_OFFSET(ActionParameters, item_4a0, 0x28);
GUEST_OFFSET(ActionParameters, marker, 0x2c);
GUEST_SIZE(ActionParameters, 0x30);

struct ActorObject {
    static constexpr float MINIMUM_SPEED = 0.01f;  // speeds that are not positive become this
    static constexpr u8 ACTION_MARKER = 2;
    static constexpr u8 STATE_LIMIT = 0x1d;        // states from here on can always be replaced

    u8 unknown_000[0x2c];
    u32 value_2c;
    u8 unknown_030[0x474 - 0x30];
    u8 state;
    u8 priority;  // a state change to a lower priority is refused while the state is below STATE_LIMIT
    u8 unknown_476[2];
    ActionParameters parameters;
    u8 byte_4a8;
    u8 unknown_4a9[0x510 - 0x4a9];
    float scales[3];  // three sizes the scaled actions take their parameters from
    u8 unknown_51c[0x554 - 0x51c];
    u8 byte_554;

    bool is_in_state(u32 wanted) const;
    bool state_below_limit() const;
    // Starts an action: sets the state and its priority and the action's parameters (clearing the ones not given), unless
    // the priority is lower than the current one while the state is below STATE_LIMIT. Whether the action started.
    bool begin_action(u32 new_state, u32 new_priority, const Float3 &vector, float speed, float second_value,
                      const u16 &angle_a, const u16 &angle_b, u32 flag_byte, const WordPair &pair);
};
GUEST_OFFSET(ActorObject, value_2c, 0x2c);
GUEST_OFFSET(ActorObject, state, 0x474);
GUEST_OFFSET(ActorObject, scales, 0x510);
GUEST_OFFSET(ActorObject, parameters, 0x478);
GUEST_OFFSET(ActorObject, byte_4a8, 0x4a8);
GUEST_OFFSET(ActorObject, byte_554, 0x554);
