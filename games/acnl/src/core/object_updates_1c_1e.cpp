// Updates of objects of the 0x001c0000..0x001e0000 area: scale changes, an item set copy, a fader start, and the
// flags of the players that are set up.
#include "core/fuzz_helpers.hpp"
#include "graphics/hemisphere_light.hpp"
#include "item/item.hpp"
#include "save/player.hpp"
#include "save/save_data.hpp"
#include "sound/sound_fader.hpp"

using guest::gptr;

Item &copy_item(Item &self, const Item &other);

namespace {

constexpr u32 SET_ITEM_COUNT = 8;
constexpr float FADE_TARGET = 0.0f;
constexpr s32 FADE_STEPS = 2;
constexpr float SLOW_FADE_TARGET = 0.45f;
constexpr s32 COUNTDOWN_START = 0x1e;
constexpr u8 STATE_WAITING = 2;
constexpr u8 STATE_FADING = 3;
constexpr u16 PLAYER_FLAG_BASE = 0x1000;  // one flag per player slot, from bit 12

inline constexpr guest::Function<0x004ee3e8, void(gptr<u8> node, gptr<Float3> scale)> set_node_scale;
inline constexpr guest::Function<0x002fae84, gptr<void>()> get_data_base;
inline constexpr guest::Function<0x002fb7e8, gptr<SavePlayer>(gptr<SavePlayer> players, u32 index)> player_at;

// An object with a transform node at 0x78 and the node's current uniform scale at 0x238.
struct ScaledObject {
    u8 unknown_000[0x78];
    gptr<u32> node_vtable;
    gptr<u8> node;
    u8 unknown_80[0x238 - 0x80];
    float scale;
};
GUEST_OFFSET(ScaledObject, node, 0x7c);
GUEST_OFFSET(ScaledObject, scale, 0x238);

struct ItemSet {
    Item items[SET_ITEM_COUNT];
    u8 flag;
};
GUEST_OFFSET(ItemSet, flag, 0x20);

struct ItemSetHolder {
    u8 unknown_000[0x200];
    ItemSet set;
};
GUEST_OFFSET(ItemSetHolder, set, 0x200);

struct FadingObject {
    u8 unknown_000[0xf4];
    SoundFader fader;
    s32 countdown_108;
};
GUEST_OFFSET(FadingObject, fader, 0xf4);
GUEST_OFFSET(FadingObject, countdown_108, 0x108);

struct Voice {
    u8 unknown_00[0x18];
    u32 level_bits_18;
    u8 unknown_1c[0xb4 - 0x1c];
    u8 state_b4;
    u8 unknown_b5[2];
    u8 value_b7;
    u8 unknown_b8[0xcc - 0xb8];
    SoundFader fader_cc;
    u8 unknown_e0_pad[0xe0 - 0xe0];
    u8 flag_e0;
};
GUEST_OFFSET(Voice, level_bits_18, 0x18);
GUEST_OFFSET(Voice, state_b4, 0xb4);
GUEST_OFFSET(Voice, value_b7, 0xb7);
GUEST_OFFSET(Voice, fader_cc, 0xcc);
GUEST_OFFSET(Voice, flag_e0, 0xe0);

struct PlayerFlagsObject {
    u8 unknown_00[0x22];
    u16 flags_22;
};
GUEST_OFFSET(PlayerFlagsObject, flags_22, 0x22);

gptr<ScaledObject> fuzz_scaled(guest::Fuzz &f) {
    auto object = f.object<ScaledObject>();
    object->node = f.allocate(0x400).cast<u8>();
    f.bytes(object->node, 0x400);
    object->scale = f.pick<float>({0.0f, 1.0f, 0.5f, -2.0f, f.real()});
    return object;
}

}  // namespace

// Gives the node a uniform scale, when that differs from the current one.
void set_uniform_scale(ScaledObject &object, float scale) {
    if (object.scale == scale) {
        return;
    }
    guest::StackObject<Float3> vector;
    vector->v[0] = scale;
    vector->v[1] = scale;
    vector->v[2] = scale;
    set_node_scale(guest::addr_of(object.node_vtable).cast<u8>(), vector.ptr());
    object.scale = scale;
}
GUEST_EXPORT(0x001d2e98, set_uniform_scale);
GUEST_FUZZ(0x001d2e98, 200, [](guest::Fuzz &f) {
    auto object = fuzz_scaled(f);
    f.arguments(object, f.pick<float>({object->scale, 0.25f, 3.0f, 0.0f, f.real()}));
});

// Moves the uniform scale towards the target in equal steps: one step of (target - scale) / steps (the whole way
// without steps).
void approach_uniform_scale(ScaledObject &object, float target, s32 steps) {
    if (steps < 0) {
        steps = 0;
    }
    float current = object.scale;
    float next = target;
    if (steps != 0) {
        next = (target - current) / float(steps) + current;
    }
    set_uniform_scale(object, next);
}
GUEST_EXPORT(0x001ce4d0, approach_uniform_scale);
GUEST_FUZZ(0x001ce4d0, 200, [](guest::Fuzz &f) {
    auto object = fuzz_scaled(f);
    f.arguments(object, f.pick<float>({1.0f, 0.5f, 4.0f, f.real()}), f.pick<s32>({-3, 0, 1, 2, 10, 100}));
});

// Copies the eight items and the byte of another item set.
void copy_item_set(ItemSetHolder &holder, const ItemSet &source) {
    for (u32 i = 0; i < SET_ITEM_COUNT; i++) {
        copy_item(holder.set.items[i], source.items[i]);
    }
    holder.set.flag = source.flag;
}
GUEST_EXPORT(0x001d32c8, copy_item_set);
GUEST_FUZZ(0x001d32c8, 100, [](guest::Fuzz &f) { f.arguments(f.object<ItemSetHolder>(), f.object<ItemSet>()); });

// Starts a quick fade to silence, or (without the flag) only arms the countdown.
void start_quiet_fade(FadingObject &object, u32 immediately) {
    if (immediately == 0) {
        object.countdown_108 = COUNTDOWN_START;
        return;
    }
    object.fader.start_fade(FADE_TARGET, FADE_STEPS);
    object.countdown_108 = 0;
}
GUEST_EXPORT(0x001d7070, start_quiet_fade);
GUEST_FUZZ(0x001d7070, 100, [](guest::Fuzz &f) { f.arguments(f.object<FadingObject>(), f.pick<u32>({0, 1, 2})); });

// While the voice waits (state 2): stores the value, jumps its fader to 0.45 and moves on to the fading state.
void begin_voice_fade(gptr<gptr<Voice>> holder, u32 value) {
    Voice &voice = **holder;
    if (voice.state_b4 != STATE_WAITING) {
        return;
    }
    voice.value_b7 = u8(value);
    voice.fader_cc.start_fade(SLOW_FADE_TARGET, 0);
    voice.level_bits_18 = std::bit_cast<u32>(voice.fader_cc.level);
    voice.flag_e0 = 1;
    voice.state_b4 = STATE_FADING;
}
GUEST_EXPORT(0x001db0c8, begin_voice_fade);
GUEST_FUZZ(0x001db0c8, 100, [](guest::Fuzz &f) {
    auto holder = f.object<gptr<Voice>>();
    auto voice = f.object<Voice>();
    voice->state_b4 = f.pick<u8>({0, 1, 2, 2, 3});
    *holder = voice;
    f.arguments(holder, f.number());
});

// Flags the object for every player slot (0-3) whose player has an identity.
void flag_players_with_identity(PlayerFlagsObject &object) {
    for (u32 slot = 0; slot < SaveData::PLAYER_COUNT; slot++) {
        gptr<SaveData> data = save_data_of_base(get_data_base().addr());
        gptr<SavePlayer> player = player_at(guest::addr_of(data->players[0]), slot);
        if (!player) {
            continue;
        }
        if (!player->identity.is_set()) {
            continue;
        }
        object.flags_22 = u16(object.flags_22 | (PLAYER_FLAG_BASE << slot));
    }
}
GUEST_EXPORT(0x001e0190, flag_players_with_identity);
GUEST_FUZZ(0x001e0190, 50, [](guest::Fuzz &f) { f.arguments(f.object<PlayerFlagsObject>()); });
