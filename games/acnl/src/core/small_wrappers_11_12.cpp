// Small functions of the 0x00110000..0x00122000 area: a range test on flags, two destructors that release an owned
// object, and a few selections by mode.
#include "core/flag_bytes.hpp"
#include "guest/guest.hpp"

using guest::gptr;

void release_owned_object(gptr<void> object);
u32 mode_95721c_index();

namespace {

constexpr u32 FLAG_COUNT = 33;
constexpr u32 OWNING_VTABLE = 0x0090b5a4;

// Value returned for mode 0 of the first selection, and the value for the other modes (what they are is not known:
// the first is the address of a function).
constexpr u32 SELECTION_FOR_MODE_0 = 0x00145000;
constexpr u32 SELECTION_FOR_OTHER_MODES = 0x000f0000;

// The argument values the memory-range selections know.
constexpr u32 REGION_2 = 0x20000;
constexpr u32 REGION_3 = 0x30000;
constexpr u32 ADDRESS_REGION_2_A = 0x1f2fffff;
constexpr u32 ADDRESS_REGION_3_A = 0x1f5fffff;
constexpr u32 ADDRESS_REGION_3_ON = 0x1f380000;
constexpr u32 ADDRESS_REGION_3_OFF = 0x1f300000;
constexpr u32 ADDRESS_REGION_2_ON = 0x1f180000;
constexpr u32 ADDRESS_REGION_2_OFF = 0x1f000000;

inline guest::global<s8, 0x0097d8a1> flag_97d8a1;

struct OwningHolder {
    u32 vtable;
    gptr<void> owned;
};
GUEST_OFFSET(OwningHolder, owned, 4);

struct OwnedPointer {
    gptr<void> owned;
};

}  // namespace

// Whether any flag from `begin` up to (not including) `end` is set.
bool any_flag_set_in_range(const FlagBytes<FLAG_COUNT> &flags, s32 begin, s32 end) {
    for (s32 i = begin; i < end; i++) {
        if (flags.test(u32(i))) {
            return true;
        }
    }
    return false;
}
GUEST_EXPORT(0x0011b5a5, any_flag_set_in_range);
GUEST_FUZZ(0x0011b5a5, 200, [](guest::Fuzz &f) {
    f.arguments(f.object<FlagBytes<FLAG_COUNT>>(), f.pick<s32>({-2, 0, 3, 31, 32}), f.pick<s32>({-1, 0, 5, 33, 40}));
});

OwningHolder &destroy_owning_holder(OwningHolder &holder) {
    holder.vtable = OWNING_VTABLE;
    release_owned_object(holder.owned);
    return holder;
}
GUEST_EXPORT(0x0011bda5, destroy_owning_holder);
GUEST_FUZZ(0x0011bda5, 20, [](guest::Fuzz &f) {
    auto holder = f.object<OwningHolder>();
    holder->owned = nullptr;
    f.arguments(holder);
});

OwnedPointer &release_pointer_holder(OwnedPointer &holder) {
    release_owned_object(holder.owned);
    return holder;
}
GUEST_EXPORT(0x0011c1fd, release_pointer_holder);
GUEST_FUZZ(0x0011c1fd, 20, [](guest::Fuzz &f) {
    auto holder = f.object<OwnedPointer>();
    holder->owned = nullptr;
    f.arguments(holder);
});

u32 selection_for_mode() {
    return mode_95721c_index() == 0 ? SELECTION_FOR_MODE_0 : SELECTION_FOR_OTHER_MODES;
}
GUEST_EXPORT(0x00120344, selection_for_mode);
GUEST_FUZZ(0x00120344, 20, [](guest::Fuzz &f) { f.arguments(); });

// An address by region (the original also reads the flag, without using it).
u32 address_for_region_a(u32 region) {
    if (region == REGION_2) {
        return ADDRESS_REGION_2_A;
    }
    if (region == REGION_3) {
        return ADDRESS_REGION_3_A;
    }
    return 0;
}
GUEST_EXPORT(0x00121824, address_for_region_a);
GUEST_FUZZ(0x00121824, 50, [](guest::Fuzz &f) { f.arguments(f.pick<u32>({0, REGION_2, REGION_3, 0x10000, 0xffffffffu})); });

// An address by region and the flag at 0x0097d8a1.
u32 address_for_region_b(u32 region) {
    bool on = *flag_97d8a1 != 0;
    if (region == REGION_2) {
        return on ? ADDRESS_REGION_2_ON : ADDRESS_REGION_2_OFF;
    }
    if (region == REGION_3) {
        return on ? ADDRESS_REGION_3_ON : ADDRESS_REGION_3_OFF;
    }
    return 0;
}
GUEST_EXPORT(0x00121860, address_for_region_b);
GUEST_FUZZ(0x00121860, 100, [](guest::Fuzz &f) {
    *flag_97d8a1 = f.pick<s8>({0, 1, -1});
    f.arguments(f.pick<u32>({0, REGION_2, REGION_3, 0x10000, 0xffffffffu}));
});
