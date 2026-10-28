// ResourceGetMaterial: an object holding a model at 0x04 and a g3d::MaterialAnim at 0x10.
#include "guest/guest.hpp"

namespace {

inline constexpr guest::Function<0x004ecb2c, void(gptr<void> material_anim)> material_anim_virtual_5;
inline constexpr guest::Function<0x004f1270, void(gptr<void> model)> model_virtual_3;

}  // namespace

struct ResourceGetMaterial {
    u32 vtable;
    u8 model_04[4];          // start of the model at 0x04 (its extent is not known yet)
    u32 model_resource_08;   // inside the model: nothing is done while it is 0 (meaning not known yet)
    u8 unknown_0c[4];
    u8 material_anim_10;     // start of the g3d::MaterialAnim at 0x10

    void virtual_3();
};
GUEST_OFFSET(ResourceGetMaterial, model_04, 0x04);
GUEST_OFFSET(ResourceGetMaterial, model_resource_08, 0x08);
GUEST_OFFSET(ResourceGetMaterial, material_anim_10, 0x10);

// Once the model has its resource, runs the material animation's and the model's 4th/6th virtual steps.
void ResourceGetMaterial::virtual_3() {
    if (model_resource_08 == 0) {
        return;
    }
    material_anim_virtual_5(guest::addr_of(material_anim_10));
    model_virtual_3(guest::addr_of(model_04));
}
GUEST_EXPORT(0x002fbd80, ResourceGetMaterial::virtual_3);

// ---- inputs for the shadow checker's fuzzing (GUEST_FUZZ=1)

// The model and material code cannot be given random objects safely: only the "not ready" path is fuzzed.
GUEST_FUZZ(0x002fbd80, 200, [](guest::Fuzz &f) {
    auto self = f.object<ResourceGetMaterial>();
    self->model_resource_08 = 0;
    f.arguments(self);
});
