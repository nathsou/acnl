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

// ---- inputs for the shadow checker's fuzzing (GUEST_FUZZ=1)

// generous room: the still-recompiled setters write other fields of the data block
static constexpr u32 LIGHT_DATA_SCRATCH = 0x400;

static void give_light_data(guest::Fuzz &f, HemiSphereLight &light) {
    auto data = f.allocate(LIGHT_DATA_SCRATCH);
    f.bytes(data, LIGHT_DATA_SCRATCH);
    light.data = data.cast<HemiSphereLightData>();
}

GUEST_FUZZ(0x004eea20, 300, [](guest::Fuzz &f) {
    auto light = f.object<HemiSphereLight>();
    give_light_data(f, *light);
    f.arguments(light, f.object<Float4>());
});
GUEST_FUZZ(0x004eea38, 300, [](guest::Fuzz &f) {
    auto light = f.object<HemiSphereLight>();
    give_light_data(f, *light);
    f.arguments(light, f.object<Float3>());
});
GUEST_FUZZ(0x004eea50, 300, [](guest::Fuzz &f) {
    auto self = f.object<BsLightHemiSphereBase>();
    give_light_data(f, self->light);
    f.arguments(self);
});
