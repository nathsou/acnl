#include <cstring>

#include "guest/guest.hpp"

using guest::gptr;

namespace {

constexpr u32 VTABLE_SLOT_0 = 0;                    // byte offsets in a vtable
constexpr u32 VTABLE_SLOT_2 = 8;
constexpr u32 VALUE_BIAS_ADDRESS = 0x00569540;      // literal pool float of f_00569508 (meaning not known yet)

// An object holding a float, a word it forwards to a linked object, and two owned objects.
struct LinkedObject {
    u32 vtable;
    float value;
    u32 unknown_08;
    u8 unknown_0c[0xc];
    gptr<u32> target;    // a polymorphic object (its first word is its vtable)
    u8 unknown_1c[4];
    gptr<void> owned_20;
};
GUEST_OFFSET(LinkedObject, value, 0x04);
GUEST_OFFSET(LinkedObject, unknown_08, 0x08);
GUEST_OFFSET(LinkedObject, target, 0x18);
GUEST_OFFSET(LinkedObject, owned_20, 0x20);

constexpr u32 TARGET_FIELD_10 = 0x10;  // where unknown_08 is copied in the target

inline constexpr guest::Function<0x0013ad90, void(gptr<void> object)> release_target;
inline constexpr guest::Function<0x002f88b8, void(gptr<void> object)> release_owned_20;

u32 virtual_function(u32 vtable, u32 slot_offset) { return *gptr<u32>(vtable + slot_offset); }

}  // namespace

// Releases the target (its virtual slot 0, then release_target) and the object at +0x20, clearing both fields.
// Nothing happens without a target.
static void release_linked_objects(LinkedObject &self) {
    if (!self.target) {
        return;
    }
    guest::call_address<void>(virtual_function(*self.target, VTABLE_SLOT_0), self.target);
    release_target(self.target);
    self.target = nullptr;
    release_owned_20(self.owned_20);
    self.owned_20 = nullptr;
}
GUEST_EXPORT(0x005694c8, release_linked_objects);

// Calls virtual slot 2 with the value minus a fixed bias, then copies unknown_08 into the target.
static void apply_value(LinkedObject &self) {
    float bias = *gptr<float>(VALUE_BIAS_ADDRESS);
    float biased = self.value - bias;
    guest::call_address<void>(virtual_function(self.vtable, VTABLE_SLOT_2), guest::addr_of(self), biased);
    if (self.target) {
        *gptr<u32>(self.target.addr() + TARGET_FIELD_10) = self.unknown_08;
    }
}
GUEST_EXPORT(0x00569508, apply_value);

// ---- inputs for the shadow checker's fuzzing (GUEST_FUZZ=1)

namespace {
constexpr u32 HARMLESS_FUNCTION = 0x00303660;  // EncryptedInt::get: only reads 8 bytes at r0

gptr<LinkedObject> some_linked_object(guest::Fuzz &f) {
    auto object = f.object<LinkedObject>();
    object->target = nullptr;
    object->owned_20 = nullptr;
    return object;
}
}  // namespace

GUEST_FUZZ(0x005694c8, 200, [](guest::Fuzz &f) { f.arguments(some_linked_object(f)); });
GUEST_FUZZ(0x00569508, 300, [](guest::Fuzz &f) {
    auto object = some_linked_object(f);
    auto vtable = f.allocate(3 * sizeof(u32)).cast<u32>();
    for (u32 i = 0; i < 3; i++) {
        vtable[i] = HARMLESS_FUNCTION;
    }
    object->vtable = vtable.addr();
    object->value = f.pick<float>({0.0f, 1.0f, -1.0f, f.real()});
    if (f.below(2) != 0) {
        object->target = f.object<LinkedObject>().cast<u32>();
    }
    f.arguments(object);
});
