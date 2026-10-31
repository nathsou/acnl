// Looking up the actor kind of an object or an item.
#include "item/actor_kind.hpp"

namespace {

inline constexpr guest::Function<0x006d9058, u32(const Item &item)> item_actor_kind_index;

// An object that points at another one with an actor kind at 0xc9 (what they are is not known yet).
struct ActorRef {
    struct KindedObject {
        u8 unknown_00[0xc9];
        u8 kind;
    };

    gptr<KindedObject> object;  // may be null
};

constexpr u8 CATEGORY_WITH_KIND = 0x27;  // the category of the items that stand for an actor (meaning not known yet)

}  // namespace

// The actor kind's value (UNKNOWN_KIND_VALUE for a kind past the table).
static u32 actor_kind_value(u32 kind) {
    return kind < ActorKind::COUNT ? actor_kinds[kind].value_19 : ActorKind::UNKNOWN_KIND_VALUE;
}
GUEST_EXPORT(0x001e90bc, actor_kind_value);

// The kind value of the referenced object (UNKNOWN_KIND_VALUE without one).
u32 actor_ref_kind_value(const ActorRef &ref) {
    if (!ref.object) {
        return ActorKind::UNKNOWN_KIND_VALUE;
    }
    return actor_kind_value(ref.object->kind);
}
GUEST_EXPORT(0x0071aa00, actor_ref_kind_value);

// The actor kind of the item, as a byte.
u8 item_actor_kind(const Item &item) {
    return u8(item_actor_kind_index(item));
}
GUEST_EXPORT(0x00615964, item_actor_kind);

// For an item of the actor category: gives the two bytes of its kind and returns true; false for other items.
bool item_actor_kind_bytes(u32 &first, u32 &second, const Item &item) {
    if (item.category() != CATEGORY_WITH_KIND) {
        return false;
    }
    const ActorKind &kind = actor_kinds[u8(item_actor_kind_index(item))];
    first = kind.value_48;
    second = kind.value_49;
    return true;
}
GUEST_EXPORT(0x00615e30, item_actor_kind_bytes);
