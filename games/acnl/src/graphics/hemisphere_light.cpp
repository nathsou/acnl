#include "graphics/hemisphere_light.hpp"

bool HemiSphereLight::set_vec4_c8(const Float4 &value) {
    data->vec4_c8 = value;
    return true;
}
GUEST_EXPORT(0x004eea20, HemiSphereLight::set_vec4_c8);

bool HemiSphereLight::set_vec3_d8(const Float3 &value) {
    data->vec3_d8 = value;
    return true;
}
GUEST_EXPORT(0x004eea38, HemiSphereLight::set_vec3_d8);

bool BsLightHemiSphereBase::reset_to_initial() {
    current = initial;
    hemisphere_light_set_first(light, current.first);
    light.set_vec4_c8(current.second);
    return hemisphere_light_set_value(light, current.value);
}
GUEST_EXPORT(0x004eea50, BsLightHemiSphereBase::reset_to_initial);

