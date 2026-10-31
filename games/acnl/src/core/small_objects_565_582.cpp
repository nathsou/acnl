// Small helpers from 0x00565000 to 0x00582000: an angle between two points, the first animation value of a
// character, a turn test and a pair of zeroed word quads.
#include "core/word_pair.hpp"
#include "graphics/hemisphere_light.hpp"
#include "guest/guest.hpp"

using guest::gptr;

s16 atan2_angle(float y, float x);
s16 angle_between_points(const Float3 &from, const Float3 &to);
WordQuad &construct_word_quad_zero(WordQuad &self);

namespace {

constexpr u32 X_INDEX = 0;
constexpr u32 Z_INDEX = 2;
constexpr u32 FIRST_ANIMATION_OFFSET = 0x2c8;
constexpr u32 FIRST_ANIMATION_ACTIVE_OFFSET = 0x2d0;
constexpr u32 SECOND_ANIMATION_OFFSET = 0x57c;
constexpr u32 SECOND_ANIMATION_ACTIVE_OFFSET = 0x584;
constexpr u32 THIRD_ANIMATION_OFFSET = 0x59c;
constexpr u32 THIRD_ANIMATION_ACTIVE_OFFSET = 0x5a4;

inline constexpr guest::Function<0x007461b4, float(gptr<void> animated_object)> animation_value_38;

// A character that owns up to three animated objects, each used when its field at +8 is set.
struct AnimatedCharacter {
    u8 unknown_000[FIRST_ANIMATION_OFFSET];
    u8 first_object[8];
    u32 first_active;
    u8 unknown_2d4[SECOND_ANIMATION_OFFSET - FIRST_ANIMATION_OFFSET - 12];
    u8 second_object[8];
    u32 second_active;
    u8 unknown_588[THIRD_ANIMATION_OFFSET - SECOND_ANIMATION_OFFSET - 12];
    u8 third_object[8];
    u32 third_active;
};
GUEST_OFFSET(AnimatedCharacter, first_object, FIRST_ANIMATION_OFFSET);
GUEST_OFFSET(AnimatedCharacter, first_active, FIRST_ANIMATION_ACTIVE_OFFSET);
GUEST_OFFSET(AnimatedCharacter, second_object, SECOND_ANIMATION_OFFSET);
GUEST_OFFSET(AnimatedCharacter, second_active, SECOND_ANIMATION_ACTIVE_OFFSET);
GUEST_OFFSET(AnimatedCharacter, third_object, THIRD_ANIMATION_OFFSET);
GUEST_OFFSET(AnimatedCharacter, third_active, THIRD_ANIMATION_ACTIVE_OFFSET);

// An actor with a position at 0x14 and a facing angle at 0x2e.
struct FacingActor {
    u8 unknown_00[0x14];
    Float3 position;
    u8 unknown_20[0x2e - 0x20];
    u16 facing;
};
GUEST_OFFSET(FacingActor, position, 0x14);
GUEST_OFFSET(FacingActor, facing, 0x2e);

}  // namespace

// The angle from one point to the other on the ground plane (x and z).
s32 angle_to_point(const Float3 &from, const Float3 &to) {
    float dx = to.v[X_INDEX] - from.v[X_INDEX];
    float dz = to.v[Z_INDEX] - from.v[Z_INDEX];
    return atan2_angle(dx, dz);
}
GUEST_EXPORT(0x00565a4c, angle_to_point);

// The animation value of the first of the character's objects that is in use (0 when none is).
float character_animation_value(AnimatedCharacter &character) {
    if (character.first_active != 0) {
        return animation_value_38(guest::addr_of(character.first_object[0]).cast<void>());
    }
    if (character.second_active != 0) {
        return animation_value_38(guest::addr_of(character.second_object[0]).cast<void>());
    }
    if (character.third_active != 0) {
        return animation_value_38(guest::addr_of(character.third_object[0]).cast<void>());
    }
    return 0.0f;
}
GUEST_EXPORT(0x005706fc, character_animation_value);

// Stores the angle to the point in `out`, and whether turning from the actor's facing to it is a smaller change than
// the angle in `limit`.
bool turn_is_smaller_than(FacingActor &actor, gptr<s16> out, const Float3 &point, gptr<s16> limit) {
    s16 angle = angle_between_points(actor.position, point);
    *out = angle;
    s32 turn = s16(u16(angle) - actor.facing);
    s32 allowed = *limit;
    return (turn < 0 ? -turn : turn) < (allowed < 0 ? -allowed : allowed);
}
GUEST_EXPORT(0x00577fc0, turn_is_smaller_than);

// Two zeroed word quads followed by four zero words.
struct QuadPair {
    WordQuad first;
    WordQuad second;
    u32 words[4];
};
GUEST_SIZE(QuadPair, 0x30);

QuadPair &construct_quad_pair(QuadPair &self) {
    construct_word_quad_zero(self.first);
    construct_word_quad_zero(self.second);
    for (u32 &word : self.words) {
        word = 0;
    }
    return self;
}
GUEST_EXPORT(0x005819ec, construct_quad_pair);
