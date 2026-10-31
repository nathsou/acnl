#include "graphics/hemisphere_light.hpp"

bool HemiSphereLight::set_value_e4(float value) {
    data->value_e4 = value;
    return true;
}
GUEST_EXPORT(0x004eeac8, HemiSphereLight::set_value_e4);

bool HemiSphereLight::set_vec4_b8(const Float4 &value) {
    data->vec4_b8 = value;
    return true;
}
GUEST_EXPORT(0x004eead8, HemiSphereLight::set_vec4_b8);

