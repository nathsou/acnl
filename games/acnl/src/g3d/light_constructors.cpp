// Constructors of the g3d light classes: the transform node, then the class's vtable and cleared data fields.
#include "g3d/resource_loader.hpp"
#include "graphics/hemisphere_light.hpp"

using guest::gptr;

namespace {

inline constexpr guest::Function<0x004ee4ec, void(gptr<void> self)> construct_transform_node;

constexpr s32 UNSET_08 = -1;  // meaning not known yet
constexpr u32 AMBIENT_LIGHT_VTABLE = 0x009028cc;
constexpr u32 HEMISPHERE_LIGHT_VTABLE = 0x009029c4;
constexpr u32 FRAGMENT_LIGHT_VTABLE = 0x00902938;

// Both lights share this layout (AmbientLight is not mirrored separately).
HemiSphereLight &construct_light_with_data(HemiSphereLight &self, u32 vtable) {
    construct_transform_node(guest::addr_of(self));
    self.unknown_08 = UNSET_08;
    self.vtable = gptr<u32>(vtable);
    self.data = nullptr;
    self.unknown_10 = 0;
    return self;
}

}  // namespace

HemiSphereLight &construct_ambient_light(HemiSphereLight &self) {
    return construct_light_with_data(self, AMBIENT_LIGHT_VTABLE);
}
GUEST_EXPORT(0x004ec8bc, construct_ambient_light);
GUEST_FUZZ(0x004ec8bc, 100, [](guest::Fuzz &f) { f.arguments(f.object<HemiSphereLight>()); });

HemiSphereLight &construct_hemisphere_light(HemiSphereLight &self) {
    return construct_light_with_data(self, HEMISPHERE_LIGHT_VTABLE);
}
GUEST_EXPORT(0x004eebd8, construct_hemisphere_light);
GUEST_FUZZ(0x004eebd8, 100, [](guest::Fuzz &f) { f.arguments(f.object<HemiSphereLight>()); });

// A light with a resource loader at 0xc and two data pointers at the end.
struct FragmentLight {
    gptr<u32> vtable;
    gptr<void> node;
    s32 unknown_08;
    u8 loader[0x114 - 0xc];
    gptr<void> data_114;
    gptr<void> data_118;
};
GUEST_OFFSET(FragmentLight, loader, 0xc);
GUEST_OFFSET(FragmentLight, data_114, 0x114);
GUEST_OFFSET(FragmentLight, data_118, 0x118);
GUEST_SIZE(FragmentLight, 0x11c);

FragmentLight &construct_fragment_light(FragmentLight &self) {
    construct_transform_node(guest::addr_of(self));
    self.unknown_08 = UNSET_08;
    self.vtable = gptr<u32>(FRAGMENT_LIGHT_VTABLE);
    g3d::construct_resource_loader(*gptr<g3d::ResourceLoader>(guest::addr_of(self).addr() + offsetof(FragmentLight, loader)));
    self.data_114 = nullptr;
    self.data_118 = nullptr;
    return self;
}
GUEST_EXPORT(0x004ed3fc, construct_fragment_light);
GUEST_FUZZ(0x004ed3fc, 100, [](guest::Fuzz &f) { f.arguments(f.object<FragmentLight>()); });
