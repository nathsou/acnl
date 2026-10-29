// Small accessors from 0x001a0000 to 0x0026b000: item copies into whichever of two owners exists, the main
// station's flags, a handful of global-state questions and the nine-entry mode tables.
#include "item/item.hpp"
#include "save/save_data.hpp"

using guest::gptr;

namespace {

constexpr u32 GLOBAL_BYTE_ON = 1;
constexpr u32 ENTRY_FIRST = 0x10;
constexpr u32 ENTRY_SECOND = 0x19;
constexpr u32 ENTRY_THIRD = 0;
constexpr u32 ENTRY_FOURTH = 0x11;
constexpr u32 GLOBAL_BYTE_5D = 0x5d;
constexpr u32 BLOCK_OFFSET = 0xbc50;
constexpr u32 PAD_MASK_8000 = 0x8000;
constexpr u8 STATE_LIMIT = 3;
constexpr u32 TARGET_FUZZ_SIZE = 0x40;
constexpr u32 PRIMARY_OFFSET_10 = 0x10;
constexpr u32 FALLBACK_OFFSET_C = 0xc;
constexpr u32 PRIMARY_OFFSET_18 = 0x18;
constexpr u32 FALLBACK_OFFSET_14 = 0x14;
constexpr u32 PRIMARY_OFFSET_14 = 0x14;
constexpr u32 FALLBACK_OFFSET_10 = 0x10;
constexpr u32 TOGGLE_COUNT = 4;
constexpr u32 TOGGLE_SIZE = 0x18;
constexpr u32 RECORD_COUNT = 4;
constexpr u32 RECORD_SIZE = 12;
constexpr u8 RECORD_FLAG_0 = 1;

inline constexpr guest::Function<0x002f74c8, u8()> read_global_byte_2;
inline constexpr guest::Function<0x006e225c, gptr<s16>(u32 index)> entry_20_pointer;
inline constexpr guest::Function<0x00304c1c, bool(u32 mask)> pad_has_bit_110;
inline constexpr guest::Function<0x004ee904, void(gptr<void> object, u32 mode)> toggle_set_mode;
inline constexpr guest::Function<0x002fb328, gptr<SaveData>()> get_save_data;
inline guest::global<u8, 0x00981fec> flag_981fec;
inline guest::global<gptr<u8>, 0x00981ff0> block_981ff0;

// An object that holds a primary and a fallback pointer; items are written to whichever exists, at an offset in it.
struct ItemTarget {
    gptr<u8> primary;
    gptr<u8> fallback;
};

gptr<ItemTarget> fuzz_target(guest::Fuzz &f) {
    auto target = f.object<ItemTarget>();
    target->primary = f.below(3) != 0 ? f.allocate(TARGET_FUZZ_SIZE).cast<u8>() : gptr<u8>(0u);
    target->fallback = f.below(3) != 0 ? f.allocate(TARGET_FUZZ_SIZE).cast<u8>() : gptr<u8>(0u);
    return target;
}

// Copies the item to primary + primary_offset when there is a primary, else to fallback + fallback_offset.
void copy_item_to_target(ItemTarget &target, const Item &item, u32 primary_offset, u32 fallback_offset) {
    if (target.primary != nullptr) {
        copy_item(*(target.primary + primary_offset).cast<Item>(), item);
    } else if (target.fallback != nullptr) {
        copy_item(*(target.fallback + fallback_offset).cast<Item>(), item);
    }
}

// Four toggle objects of 0x18 bytes after 0xe0.
struct ToggleOwner {
    u8 unknown_00[0xe0];
    u8 toggles[TOGGLE_COUNT * TOGGLE_SIZE];
};
GUEST_OFFSET(ToggleOwner, toggles, 0xe0);

struct StateOwner {
    u8 unknown_00[0xe];
    u8 state_0e;
};
GUEST_OFFSET(StateOwner, state_0e, 0xe);

}  // namespace

void store_item_10_c(ItemTarget &target, const Item &item) { copy_item_to_target(target, item, PRIMARY_OFFSET_10, FALLBACK_OFFSET_C); }
void store_item_0_0(ItemTarget &target, const Item &item) { copy_item_to_target(target, item, 0, 0); }
void store_item_4_4(ItemTarget &target, const Item &item) { copy_item_to_target(target, item, 4, 4); }
void store_item_18_14(ItemTarget &target, const Item &item) { copy_item_to_target(target, item, PRIMARY_OFFSET_18, FALLBACK_OFFSET_14); }
void store_item_14_10(ItemTarget &target, const Item &item) { copy_item_to_target(target, item, PRIMARY_OFFSET_14, FALLBACK_OFFSET_10); }
GUEST_EXPORT(0x001ad1d0, store_item_10_c);
GUEST_EXPORT(0x001ad1fc, store_item_0_0);
GUEST_EXPORT(0x001ad224, store_item_4_4);
GUEST_EXPORT(0x001ad27c, store_item_18_14);
GUEST_EXPORT(0x001ad2a8, store_item_14_10);
GUEST_FUZZ(0x001ad1d0, 100, [](guest::Fuzz &f) { f.arguments(fuzz_target(f), f.object<Item>()); });
GUEST_FUZZ(0x001ad1fc, 100, [](guest::Fuzz &f) { f.arguments(fuzz_target(f), f.object<Item>()); });
GUEST_FUZZ(0x001ad224, 100, [](guest::Fuzz &f) { f.arguments(fuzz_target(f), f.object<Item>()); });
GUEST_FUZZ(0x001ad27c, 100, [](guest::Fuzz &f) { f.arguments(fuzz_target(f), f.object<Item>()); });
GUEST_FUZZ(0x001ad2a8, 100, [](guest::Fuzz &f) { f.arguments(fuzz_target(f), f.object<Item>()); });

// Sets the mode of the toggle object at the index (indices from 4 on are ignored).
void set_toggle_mode(ToggleOwner &owner, u32 mode, u32 index) {
    if (index >= TOGGLE_COUNT) {
        return;
    }
    toggle_set_mode(guest::addr_of(owner.toggles[index * TOGGLE_SIZE]).cast<void>(), mode);
}
GUEST_EXPORT(0x001ab824, set_toggle_mode);
GUEST_FUZZ(0x001ab824, 100, [](guest::Fuzz &f) {
    f.arguments(f.object<ToggleOwner>(), f.below(4), f.pick<u32>({0, 1, 3, 4, f.number()}));
});

// A signed halfword of one of two entries (picked by the global byte).
s32 entry_half_for_global_byte_a() {
    return entry_20_pointer(read_global_byte_2() == GLOBAL_BYTE_ON ? ENTRY_FIRST : ENTRY_SECOND)[8];
}
GUEST_EXPORT(0x001a1c44, entry_half_for_global_byte_a);
GUEST_FUZZ(0x001a1c44, 50, [](guest::Fuzz &f) { f.arguments(); });

s32 entry_half_for_global_byte_b() {
    return entry_20_pointer(read_global_byte_2() == GLOBAL_BYTE_ON ? ENTRY_FOURTH : ENTRY_THIRD)[8];
}
GUEST_EXPORT(0x001a3118, entry_half_for_global_byte_b);
GUEST_FUZZ(0x001a3118, 50, [](guest::Fuzz &f) { f.arguments(); });

// Whether the pad has bit 0x8000 and the state is at least 3.
bool pad_8000_and_state(StateOwner &owner) {
    return pad_has_bit_110(PAD_MASK_8000) && owner.state_0e >= STATE_LIMIT;
}
GUEST_EXPORT(0x001b7500, pad_8000_and_state);
GUEST_FUZZ(0x001b7500, 50, [](guest::Fuzz &f) { f.arguments(f.object<StateOwner>()); });

// The block behind the pointer at 0x00981ff0 plus 0xbc50 while global byte 2 is 0x5d and the flag is set; else null.
gptr<u8> block_for_global_byte_5d() {
    if (read_global_byte_2() == GLOBAL_BYTE_5D && *flag_981fec != 0 && *block_981ff0 != nullptr) {
        return *block_981ff0 + BLOCK_OFFSET;
    }
    return gptr<u8>(0u);
}
GUEST_EXPORT(0x001f3888, block_for_global_byte_5d);
GUEST_FUZZ(0x001f3888, 50, [](guest::Fuzz &f) { f.arguments(); });

// Whether bit 0 of the flag byte of any of the four records in the save data is set.
bool any_record_flag_0() {
    gptr<SaveData> save = get_save_data();
    for (u32 i = 0; i < RECORD_COUNT; i++) {
        if ((save->record_flags_6fe82[i * RECORD_SIZE] & RECORD_FLAG_0) != 0) {
            return true;
        }
    }
    return false;
}
GUEST_EXPORT(0x0022678c, any_record_flag_0);
GUEST_FUZZ(0x0022678c, 50, [](guest::Fuzz &f) {
    for (u32 i = 0; i < RECORD_COUNT; i++) {
        get_save_data()->record_flags_6fe82[i * RECORD_SIZE] = u8(f.below(3));
    }
    f.arguments();
});
