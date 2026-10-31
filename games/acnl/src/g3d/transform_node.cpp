// g3d::TransformNode, the game's wrapper around a scene node of the graphics library, and the helpers its
// subclasses (Camera, Model, the lights, Fog...) share to set the node's transform.
#include <bit>

#include "guest/guest.hpp"

using guest::gptr;

namespace g3d {

// The allocator a scene node was made with (vtable slot 3 frees memory).
struct Allocator {
    gptr<u32> vtable;
};

// The transform part of a scene node.
struct Transform {
    // set after every change to the transform (presumably asks for the matrices to be recomputed)
    static constexpr u32 FLAG_CHANGED = 0x800;

    u8 unknown_00[0x30];
    float scale[3];
    u32 flags;
};
GUEST_OFFSET(Transform, scale, 0x30);
GUEST_OFFSET(Transform, flags, 0x3c);

// A scene node of the graphics library.
struct SceneNode {
    static constexpr u32 VTABLE_DESTROY = 0;    // destroys the node (its memory is freed separately)
    static constexpr u32 VTABLE_SLOT_4 = 4;     // takes one word (meaning not known yet)
    static constexpr u32 ALLOCATOR_FREE = 3;

    gptr<u32> vtable;
    gptr<Allocator> allocator;
    u8 unknown_08[0x44];
    Transform transform;
};
GUEST_OFFSET(SceneNode, allocator, 0x04);
GUEST_OFFSET(SceneNode, transform, 0x4c);

struct Vec3 {
    float x, y, z;
};
GUEST_SIZE(Vec3, 12);

struct TransformNode {
    static constexpr u32 VTABLE = 0x00902974;

    gptr<u32> vtable;
    gptr<SceneNode> node;

    void call_node_slot_4(u32 index);
    void set_scale(const Vec3 &scale);
    void update_transform();
};
GUEST_OFFSET(TransformNode, node, 0x04);

struct Camera : TransformNode {
    void virtual_3();
};

namespace {

// words handed to the scene node's vtable slot 4 (indices 0 and 1 are seen)
constexpr gptr<u32> node_argument_table{0x009c90c4};

inline constexpr guest::Function<0x0013451c, void(Transform &transform)> transform_unknown_13451c;

constexpr float MIN_SCALE = 0.01f;
constexpr u32 MIN_SCALE_BITS = 0x3c23d70a;           // 0.01f
constexpr u32 NEGATIVE_MIN_SCALE_BITS = 0xbc23d70a;  // -0.01f

// A scale component of magnitude below 0.01 (zero included) becomes +-0.01 by its sign; the test is on the bits.
float avoid_tiny_scale(float value) {
    u32 bits = std::bit_cast<u32>(value);
    if (s32(bits) < s32(MIN_SCALE_BITS) && bits < NEGATIVE_MIN_SCALE_BITS) {
        return value >= 0.0f ? MIN_SCALE : -MIN_SCALE;
    }
    return value;
}

}  // namespace

// Passes an entry of the global argument table to the scene node's vtable slot 4.
void TransformNode::call_node_slot_4(u32 index) {
    gptr<SceneNode> scene_node = node;
    guest::call_address<void>(scene_node->vtable[SceneNode::VTABLE_SLOT_4], scene_node, node_argument_table[index]);
}
GUEST_EXPORT(0x004ee364, TransformNode::call_node_slot_4);

// Destroys the scene node, frees it with its allocator and forgets it.
void Camera::virtual_3() {
    gptr<SceneNode> scene_node = node;
    if (!scene_node) {
        return;
    }
    guest::call_address<void>(scene_node->vtable[SceneNode::VTABLE_DESTROY], scene_node);
    gptr<Allocator> allocator = scene_node->allocator;
    guest::call_address<void>(allocator->vtable[SceneNode::ALLOCATOR_FREE], allocator, scene_node);
    node = nullptr;
}
GUEST_EXPORT(0x004ee39c, Camera::virtual_3);

void TransformNode::set_scale(const Vec3 &scale) {
    float x = avoid_tiny_scale(scale.x);
    float y = avoid_tiny_scale(scale.y);
    float z = avoid_tiny_scale(scale.z);
    Transform &transform = node->transform;
    transform.scale[0] = x;
    transform.scale[1] = y;
    transform.scale[2] = z;
    transform.flags |= Transform::FLAG_CHANGED;
}
GUEST_EXPORT(0x004ee3e8, TransformNode::set_scale);

void TransformNode::update_transform() {
    Transform &transform = node->transform;
    transform_unknown_13451c(transform);
    transform.flags |= Transform::FLAG_CHANGED;
}
GUEST_EXPORT(0x004ee4c8, TransformNode::update_transform);

TransformNode &construct_transform_node(TransformNode &self) {
    self.vtable = gptr<u32>(TransformNode::VTABLE);
    self.node = nullptr;
    return self;
}
GUEST_EXPORT(0x004ee4ec, construct_transform_node);


}  // namespace g3d
