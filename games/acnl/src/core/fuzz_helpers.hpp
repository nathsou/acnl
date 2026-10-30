// Building blocks for GUEST_FUZZ generators.
#pragma once

#include "guest/guest.hpp"
#include "item/item.hpp"

namespace fuzz {

constexpr u32 ENCRYPTED_INT_GET = 0x00303660;  // EncryptedInt::get: reads two words of its object, writes nothing

// A vtable whose first `slots` entries all point at EncryptedInt::get (a harmless read-only function that returns a
// value computed from the object's first two words).
inline guest::gptr<u32> harmless_vtable(guest::Fuzz &f, u32 slots = 8) {
    auto vtable = f.allocate(slots * 4).cast<u32>();
    for (u32 i = 0; i < slots; i++) {
        vtable[i] = ENCRYPTED_INT_GET;
    }
    return vtable;
}

// An item with a random number of the category's range (flags zero).
inline guest::gptr<Item> item_in_category(guest::Fuzz &f, u8 category) {
    auto item = f.object<Item>();
    guest::gptr<CategoryInfo> info = category_info(category);
    item->id = u16(info->first_item_number + f.below(info->item_count));
    return item;
}

}  // namespace fuzz
