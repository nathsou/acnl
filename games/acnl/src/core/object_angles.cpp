// The direction (as a 16-bit angle) an object has to another point: its target, or the object it is following.
#include "graphics/hemisphere_light.hpp"
#include "guest/guest.hpp"

using guest::gptr;

s16 angle_between_points(const Float3 &from, const Float3 &to);

namespace {

struct ObjectWithTarget {
    u8 unknown_00[0x14];
    Float3 position;
    u8 unknown_20[0x48 - 0x20];
    Float3 target;
};
GUEST_OFFSET(ObjectWithTarget, position, 0x14);
GUEST_OFFSET(ObjectWithTarget, target, 0x48);

// An object that faces a followed point while it is within reach of it.
struct FollowingObject {
    u8 unknown_00[0x14];
    Float3 position;
    u8 unknown_20[0x3a - 0x20];
    s16 stored_angle;
    u8 unknown_3c[0xd8 - 0x3c];
    float reach;
    u8 unknown_dc[0xf4 - 0xdc];
    Float3 followed;
    float distance;  // 0x100 follows right after the three coordinates at 0xf4
};
GUEST_OFFSET(FollowingObject, position, 0x14);
GUEST_OFFSET(FollowingObject, stored_angle, 0x3a);
GUEST_OFFSET(FollowingObject, reach, 0xd8);
GUEST_OFFSET(FollowingObject, followed, 0xf4);

}  // namespace

// The angle from the object's position to its target.
s32 angle_to_target(const ObjectWithTarget &object) {
    return angle_between_points(object.position, object.target);
}
GUEST_EXPORT(0x00711bf4, angle_to_target);

// The stored angle while the object is in reach of the followed point (distance not below the reach, or not a number);
// otherwise the angle from the followed point to the object. `ignore_reach` always takes the second.
s32 angle_from_followed_point(const FollowingObject &object, bool ignore_reach) {
    if (!ignore_reach && !(object.distance < object.reach)) {
        return object.stored_angle;
    }
    return angle_between_points(object.followed, object.position);
}
GUEST_EXPORT(0x0071ebf4, angle_from_followed_point);
