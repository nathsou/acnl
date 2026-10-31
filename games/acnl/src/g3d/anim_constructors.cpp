// Constructors of g3d::BaseAnim and its relatives: an object of the animation library with a kind byte, a heap
// allocator and a vtable that tells the variants apart.
#include "guest/guest.hpp"

using guest::gptr;

namespace {

inline constexpr guest::Function<0x005673c8, gptr<void>(gptr<void> allocator)> construct_heap_allocator;
inline constexpr guest::Function<0x00301d0d, gptr<void>(gptr<void> base, u32 function, u32 stride, u32 count)>
    for_each_element;

constexpr u32 BASE_VTABLE = 0x00902b5c;  // set first; the variant's own vtable replaces it
constexpr u32 VARIANT_VTABLE_4ECB80 = 0x009028e8;
constexpr u32 VARIANT_VTABLE_4ECF18 = 0x00902910;
constexpr u32 VARIANT_VTABLE_4EE868 = 0x0090299c;
constexpr u32 VARIANT_VTABLE_4EF9B4 = 0x009029f0;
constexpr u8 ANIM_KIND = 2;
constexpr u32 ALLOCATOR_OFFSET = 0xc;
constexpr u32 GROUP_ANIM_COUNT = 4;
constexpr u32 GROUP_ANIM_VTABLE = 0x009029e0;
constexpr u32 GROUP_ANIM_OFFSET = 0x14;
constexpr u32 CONSTRUCT_GROUP_ELEMENT = 0x004ef9b4;  // construct_base_anim_4ef9b4 below, as the element constructor

struct BaseAnim {
    u32 vtable;
    u8 kind;
    u8 unknown_05[3];
    u32 value_08;
    u8 allocator[8];  // a HeapAllocator
    u32 value_14;
};
GUEST_OFFSET(BaseAnim, kind, 4);
GUEST_OFFSET(BaseAnim, allocator, ALLOCATOR_OFFSET);
GUEST_OFFSET(BaseAnim, value_14, 0x14);
GUEST_SIZE(BaseAnim, 0x18);

// A BaseAnim with two more fields.
struct BaseAnimEx : BaseAnim {
    u32 value_18;
    u8 flag_1c;
};
GUEST_OFFSET(BaseAnimEx, value_18, 0x18);
GUEST_OFFSET(BaseAnimEx, flag_1c, 0x1c);

BaseAnim &construct_base_anim(BaseAnim &self, u32 vtable) {
    self.kind = ANIM_KIND;
    self.vtable = BASE_VTABLE;
    self.value_08 = 0;
    construct_heap_allocator(guest::addr_of(self.allocator).cast<void>());
    self.value_14 = 0;
    self.vtable = vtable;
    return self;
}

struct GroupSkeletalAnim {
    u32 vtable;
    u32 value_04;
    u32 value_08;
    u8 allocator[8];
    BaseAnim anims[GROUP_ANIM_COUNT];
};
GUEST_OFFSET(GroupSkeletalAnim, allocator, 0xc);
GUEST_OFFSET(GroupSkeletalAnim, anims, GROUP_ANIM_OFFSET);

}  // namespace

BaseAnim &construct_base_anim_4ee868(BaseAnim &self) { return construct_base_anim(self, VARIANT_VTABLE_4EE868); }
BaseAnim &construct_base_anim_4ef9b4(BaseAnim &self) { return construct_base_anim(self, VARIANT_VTABLE_4EF9B4); }
BaseAnim &construct_base_anim_4ecf18(BaseAnim &self) { return construct_base_anim(self, VARIANT_VTABLE_4ECF18); }
GUEST_EXPORT(0x004ee868, construct_base_anim_4ee868);
GUEST_EXPORT(0x004ef9b4, construct_base_anim_4ef9b4);
GUEST_EXPORT(0x004ecf18, construct_base_anim_4ecf18);

// The variant that also clears a word at 0x18 and a flag byte at 0x1c.
BaseAnimEx &construct_base_anim_4ecb80(BaseAnimEx &self) {
    construct_base_anim(self, VARIANT_VTABLE_4ECB80);
    self.value_18 = 0;
    self.flag_1c = 0;
    return self;
}
GUEST_EXPORT(0x004ecb80, construct_base_anim_4ecb80);

GroupSkeletalAnim &construct_group_skeletal_anim(GroupSkeletalAnim &self) {
    self.value_04 = 0;
    self.vtable = GROUP_ANIM_VTABLE;
    self.value_08 = 0;
    construct_heap_allocator(guest::addr_of(self.allocator).cast<void>());
    for_each_element(guest::addr_of(self.anims[0]).cast<void>(), CONSTRUCT_GROUP_ELEMENT, sizeof(BaseAnim), GROUP_ANIM_COUNT);
    return self;
}
GUEST_EXPORT(0x004ef48c, construct_group_skeletal_anim);
