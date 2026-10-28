#include "guest/guest.hpp"

using guest::gptr;
using guest::MemberFunctionPointer;

namespace {

// Equality of two pointers to member functions as the ARM C++ ABI defines it: the same function and the same
// adjustment; null functions are equal whatever the adjustment's non-virtual bits are.
bool same_member_function(const MemberFunctionPointer &a, const MemberFunctionPointer &b) {
    if (a.function != b.function) {
        return false;
    }
    if (a.function == 0 && ((a.adjust | b.adjust) & 1) == 0) {
        return true;
    }
    return a.adjust == b.adjust;
}

// An object with a callback at 0xf0 (class not known yet).
struct CallbackHolderF0 {
    u8 unknown_00[0xf0];
    MemberFunctionPointer callback;

    bool is_known_callback() const;
};
GUEST_OFFSET(CallbackHolderF0, callback, 0xf0);
GUEST_SIZE(CallbackHolderF0, 0xf8);

inline guest::global<MemberFunctionPointer[2], 0x00857d18> known_callbacks_857d18;

// LifeSupportWindow: a callback at 0xc.
struct LifeSupportWindow {
    u8 unknown_00[0xc];
    MemberFunctionPointer callback;

    bool differs_from_first_two() const;  // virtual 4
    bool differs_from_third() const;      // virtual 6
};
GUEST_OFFSET(LifeSupportWindow, callback, 0xc);
GUEST_SIZE(LifeSupportWindow, 0x14);

inline guest::global<MemberFunctionPointer[3], 0x00879e68> life_support_callbacks;

}  // namespace

// Whether the callback is one of the two in the table.
bool CallbackHolderF0::is_known_callback() const {
    const MemberFunctionPointer *table = *known_callbacks_857d18.get();
    return same_member_function(callback, table[1]) || same_member_function(callback, table[0]);
}
GUEST_EXPORT(0x0071ee8c, CallbackHolderF0::is_known_callback);

bool LifeSupportWindow::differs_from_first_two() const {
    const MemberFunctionPointer *table = *life_support_callbacks.get();
    return !(same_member_function(callback, table[0]) || same_member_function(callback, table[1]));
}
GUEST_EXPORT(0x0071f1a4, LifeSupportWindow::differs_from_first_two);

bool LifeSupportWindow::differs_from_third() const {
    const MemberFunctionPointer *table = *life_support_callbacks.get();
    return !same_member_function(callback, table[2]);
}
GUEST_EXPORT(0x0071f228, LifeSupportWindow::differs_from_third);

// ---- inputs for the shadow checker's fuzzing (GUEST_FUZZ=1)

namespace {

void pick_callback(guest::Fuzz &f, MemberFunctionPointer &callback, const MemberFunctionPointer *table, u32 count) {
    switch (f.below(4)) {
    case 0:
        callback = table[f.below(count)];
        break;
    case 1:
        callback = table[f.below(count)];
        callback.adjust = f.pick<s32>({0, 1, 2, 3, s32(f.number())});
        break;
    case 2:
        callback.function = 0;
        callback.adjust = f.below(4);
        break;
    default:
        break;
    }
}

}  // namespace

GUEST_FUZZ(0x0071ee8c, 400, [](guest::Fuzz &f) {
    auto holder = f.object<CallbackHolderF0>();
    pick_callback(f, holder->callback, *known_callbacks_857d18.get(), 2);
    f.arguments(holder);
});
GUEST_FUZZ(0x0071f1a4, 400, [](guest::Fuzz &f) {
    auto window = f.object<LifeSupportWindow>();
    pick_callback(f, window->callback, *life_support_callbacks.get(), 3);
    f.arguments(window);
});
GUEST_FUZZ(0x0071f228, 400, [](guest::Fuzz &f) {
    auto window = f.object<LifeSupportWindow>();
    pick_callback(f, window->callback, *life_support_callbacks.get(), 3);
    f.arguments(window);
});
