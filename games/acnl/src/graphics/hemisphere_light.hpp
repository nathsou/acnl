// Hemisphere lights: BsLightHemiSphereBase (and its Fix/Catalog subclasses) drive a light object whose data block
// holds float vectors at fixed offsets. What each vector means (colours, direction...) is not known yet; they are
// named after their offsets in the data block.
#pragma once

#include "guest/guest.hpp"

struct Float3 {
    float v[3];
};
GUEST_SIZE(Float3, 12);

struct Float4 {
    float v[4];
};
GUEST_SIZE(Float4, 16);

// The block the light object points to (its full size is not known).
struct HemiSphereLightData {
    u8 unknown_00[0xc8];
    Float4 vec4_c8;
    Float3 vec3_d8;
};
GUEST_OFFSET(HemiSphereLightData, vec4_c8, 0xc8);
GUEST_OFFSET(HemiSphereLightData, vec3_d8, 0xd8);

struct HemiSphereLight {
    u8 unknown_00[0xc];
    guest::gptr<HemiSphereLightData> data;
    u8 unknown_10[8];

    // The setters report success (always true).
    bool set_vec4_c8(const Float4 &value);
    bool set_vec3_d8(const Float3 &value);
};
GUEST_OFFSET(HemiSphereLight, data, 0xc);
GUEST_SIZE(HemiSphereLight, 0x18);

// The parameters BsLightHemiSphereBase applies to its light.
struct HemiSphereParams {
    Float4 first;   // given to the setter at 0x004eead8
    Float4 second;  // the light's vec4_c8
    float value;    // given to the setter at 0x004eeac8
};
GUEST_SIZE(HemiSphereParams, 0x24);

struct BsLightHemiSphereBase {
    u8 unknown_00[0x58];
    HemiSphereParams current;
    HemiSphereLight light;
    HemiSphereParams initial;

    // virtual 20: goes back to the initial parameters and applies them to the light.
    bool reset_to_initial();
};
GUEST_OFFSET(BsLightHemiSphereBase, current, 0x58);
GUEST_OFFSET(BsLightHemiSphereBase, light, 0x7c);
GUEST_OFFSET(BsLightHemiSphereBase, initial, 0x94);

// Still recompiled code:
inline constexpr guest::Function<0x004eead8, bool(HemiSphereLight &self, const Float4 &value)>
    hemisphere_light_set_first;
inline constexpr guest::Function<0x004eeac8, bool(HemiSphereLight &self, float value)> hemisphere_light_set_value;
