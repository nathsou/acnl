#include "actor/actor.hpp"

#include "graphics/hemisphere_light.hpp"

s16 atan2_angle(float y, float x);

namespace {

inline constexpr guest::Function<0x00529d78, u32(Actor &self)> base_virtual_11;
inline constexpr guest::Function<0x00529d8c, u32(Actor &self)> base_virtual_2;
inline constexpr guest::Function<0x00529da0, u32(Actor &self)> base_virtual_5;
inline constexpr guest::Function<0x00521a8c, gptr<Actor>(gptr<Actor> self)> construct_process;

inline guest::global<float, 0x0057bb50> initial_float_40;  // literal pool constant

}  // namespace

// The angle of the direction from one point to another on the ground plane (x and z).
s16 angle_between_points(const Float3 &from, const Float3 &to) {
    float dz = to.v[2] - from.v[2];
    float dx = to.v[0] - from.v[0];
    return atan2_angle(dx, dz);
}
GUEST_EXPORT(0x0057ba08, angle_between_points);

bool Actor::virtual_11() {
    return base_virtual_11(*this) != 0;
}
GUEST_EXPORT(0x0057ba2c, Actor::virtual_11);

bool Actor::virtual_2() {
    return base_virtual_2(*this) != 0;
}
GUEST_EXPORT(0x0057ba40, Actor::virtual_2);

bool Actor::virtual_5() {
    return base_virtual_5(*this) != 0;
}
GUEST_EXPORT(0x0057ba54, Actor::virtual_5);

// Builds the Process part, then takes the initial position and angles from the global defaults when present.
Actor &construct_actor(Actor &self_in) {
    Actor &self = *construct_process(guest::addr_of(self_in));
    self.vtable = Actor::VTABLE;
    for (u16 &angle : self.angles_2c) {
        angle = 0;
    }
    self.float_40 = *initial_float_40;
    self.byte_44 = 0;

    if (actor_defaults->position) {
        const ActorPosition position = *actor_defaults->position;
        self.position_14 = position;
        self.position_20 = position;
    }
    if (actor_defaults->angles) {
        const ActorAngles angles = *actor_defaults->angles;
        for (u32 i = 0; i < 3; i++) {
            self.angles_2c[i * 3 + 0] = angles.x;
            self.angles_2c[i * 3 + 1] = angles.y;
            self.angles_2c[i * 3 + 2] = angles.z;
        }
    }
    return self;
}
GUEST_EXPORT(0x0057ba68, construct_actor);
