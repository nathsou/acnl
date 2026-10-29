// Small methods of the g3d light classes (BsLight* helpers) that set fields of the light's data blocks.
#include <cstring>

#include "graphics/hemisphere_light.hpp"
#include "guest/guest.hpp"

using guest::gptr;

namespace {

// Block the light writes its direction into (0x118 of the light).
struct LightDirectionBlock {
    u8 unknown_000[0x17c];
    Float3 direction_17c;
};
GUEST_OFFSET(LightDirectionBlock, direction_17c, 0x17c);

// Block with a vector and a derived word (0x114 of the light, when used as a data block).
struct LightVectorBlock {
    static constexpr u32 VECTOR_COUNT = 4;

    u8 unknown_000[0xbc];
    Float4 vectors[VECTOR_COUNT];
    u32 words[VECTOR_COUNT];  // the word derived from each vector
};
GUEST_OFFSET(LightVectorBlock, vectors, 0xbc);
GUEST_OFFSET(LightVectorBlock, words, 0xfc);
GUEST_SIZE(LightVectorBlock, 0x10c);

struct LightObject {
    u8 unknown_00[0x114];
    gptr<LightVectorBlock> block_114;
    gptr<LightDirectionBlock> block_118;
};
GUEST_OFFSET(LightObject, block_114, 0x114);
GUEST_OFFSET(LightObject, block_118, 0x118);

inline constexpr guest::Function<0x0056a378, void(Float3 &vec)> normalize_vector;
inline constexpr guest::Function<0x00736914, u32(Float4 &vec)> vector_derived_word;

}  // namespace

// Stores the normalized vector as the direction of the light.
static bool light_set_direction(LightObject &self, const Float3 &direction) {
    guest::StackObject<Float3> normalized;
    *normalized = direction;
    normalize_vector(*normalized);
    self.block_118->direction_17c = *normalized;
    return true;
}
GUEST_EXPORT(0x004ed054, light_set_direction);

// Stores a vector in the light's data block and the word derived from it.
template <u32 Index>
static bool light_set_vector(LightObject &self, const Float4 &value) {
    LightVectorBlock &block = *self.block_114;
    block.vectors[Index] = value;
    block.words[Index] = vector_derived_word(block.vectors[Index]);
    return true;
}
static bool light_set_vector_0(LightObject &self, const Float4 &value) { return light_set_vector<0>(self, value); }
static bool light_set_vector_1(LightObject &self, const Float4 &value) { return light_set_vector<1>(self, value); }
static bool light_set_vector_2(LightObject &self, const Float4 &value) { return light_set_vector<2>(self, value); }
static bool light_set_vector_3(LightObject &self, const Float4 &value) { return light_set_vector<3>(self, value); }
GUEST_EXPORT(0x004ed098, light_set_vector_0);
GUEST_EXPORT(0x004ed0cc, light_set_vector_1);
GUEST_EXPORT(0x004ed100, light_set_vector_2);
GUEST_EXPORT(0x004ed134, light_set_vector_3);

// ---- inputs for the shadow checker's fuzzing (GUEST_FUZZ=1)

namespace {

gptr<void> zeroed(guest::Fuzz &f, u32 size) {
    gptr<void> p = f.allocate(size);
    std::memset(p.get(), 0, size);
    return p;
}

gptr<Float3> some_vector3(guest::Fuzz &f) {
    auto v = f.object<Float3>();
    for (u32 i = 0; i < 3; i++) {
        v->v[i] = f.pick<float>({0.0f, 1.0f, -1.0f, f.real(), f.real()});
    }
    return v;
}

}  // namespace

GUEST_FUZZ(0x004ed054, 300, [](guest::Fuzz &f) {
    auto light = zeroed(f, sizeof(LightObject)).cast<LightObject>();
    light->block_118 = zeroed(f, sizeof(LightDirectionBlock)).cast<LightDirectionBlock>();
    f.arguments(light, some_vector3(f));
});
static void fuzz_set_vector(guest::Fuzz &f) {
    auto light = zeroed(f, sizeof(LightObject)).cast<LightObject>();
    light->block_114 = zeroed(f, sizeof(LightVectorBlock)).cast<LightVectorBlock>();
    auto value = f.object<Float4>();
    for (u32 i = 0; i < 4; i++) {
        value->v[i] = f.pick<float>({0.0f, 1.0f, -1.0f, f.real()});
    }
    f.arguments(light, value);
}
GUEST_FUZZ(0x004ed098, 300, [](guest::Fuzz &f) { fuzz_set_vector(f); });
GUEST_FUZZ(0x004ed0cc, 300, [](guest::Fuzz &f) { fuzz_set_vector(f); });
GUEST_FUZZ(0x004ed100, 300, [](guest::Fuzz &f) { fuzz_set_vector(f); });
GUEST_FUZZ(0x004ed134, 300, [](guest::Fuzz &f) { fuzz_set_vector(f); });
