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

// ---- inputs for the shadow checker's fuzzing (GUEST_FUZZ=1)

static constexpr u32 DATA_SCRATCH = 0x400;

static guest::gptr<HemiSphereLight> light_with_data(guest::Fuzz &f) {
    auto light = f.object<HemiSphereLight>();
    auto data = f.allocate(DATA_SCRATCH);
    f.bytes(data, DATA_SCRATCH);
    light->data = data.cast<HemiSphereLightData>();
    return light;
}

GUEST_FUZZ(0x004eeac8, 300, [](guest::Fuzz &f) {
    f.arguments(light_with_data(f), f.pick<float>({0.0f, 1.0f, -1.0f, f.real()}));
});
GUEST_FUZZ(0x004eead8, 300, [](guest::Fuzz &f) { f.arguments(light_with_data(f), f.object<Float4>()); });
