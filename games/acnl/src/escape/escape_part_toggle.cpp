#include "guest/guest.hpp"

namespace {

// Recompiled code:
inline constexpr guest::Function<0x40290e98, void(gptr<void> part)> run_part_action;
inline constexpr guest::Function<0x40301298, void(gptr<void> manager, gptr<void> target, u32 size, gptr<void> source,
                                                  gptr<const char> text)>
    register_part;
inline constexpr guest::Function<0x40290ed0, void(gptr<void> part)> release_part;

constexpr u32 REGISTERED_SIZE = 11;
constexpr u32 REGISTERED_TEXT = 0x00975bee;
inline guest::relocated_global<gptr<void>, 0x402fe4c4> registry;  // (CRO data: relocated by the loader)

struct EscapePartOwner {
    u8 unknown_00[0x11c];
    u8 part_11c[8];
    u32 value_124;
};
GUEST_OFFSET(EscapePartOwner, part_11c, 0x11c);
GUEST_OFFSET(EscapePartOwner, value_124, 0x124);

struct ToggleSource {
    u8 unknown_00[0xc];
    u8 part_0c;
};

struct ToggleHolder {
    u8 unknown_00[0xc];
    u32 value_0c;
};
GUEST_OFFSET(ToggleHolder, value_0c, 0xc);

// An object whose part at 0x7c is registered (state 1) or released (state 0).
struct EscapeToggle {
    u8 unknown_00[0x4c];
    gptr<ToggleSource> source;
    u8 unknown_50[0x7c - 0x50];
    u8 part_7c[12];
    gptr<ToggleHolder> holder;
    u32 value_8c;
    u8 unknown_90[4];
    s8 registered;
    u8 unknown_95[3];

    void set_registered(u32 on);
};
GUEST_OFFSET(EscapeToggle, source, 0x4c);
GUEST_OFFSET(EscapeToggle, part_7c, 0x7c);
GUEST_OFFSET(EscapeToggle, holder, 0x88);
GUEST_OFFSET(EscapeToggle, value_8c, 0x8c);
GUEST_OFFSET(EscapeToggle, registered, 0x94);

}  // namespace

// Runs the action of the part at 0x11c, if its value at 0x124 is set.
static void run_owner_part_action(EscapePartOwner &self) {
    if (self.value_124 == 0) {
        return;
    }
    run_part_action(guest::addr_of(self.part_11c[0]));
}
GUEST_EXPORT(0x402fe154, run_owner_part_action);

// Turning on registers the part once; turning off releases it only if the holder still matches, and clears the state.
void EscapeToggle::set_registered(u32 on) {
    if (on != 0) {
        if (registered != 0) {
            return;
        }
        register_part(*registry, guest::addr_of(part_7c[0]), REGISTERED_SIZE,
                      guest::addr_of(source->part_0c), gptr<const char>(REGISTERED_TEXT));
        registered = 1;
        return;
    }
    if (registered == 0) {
        return;
    }
    if (holder && value_8c == holder->value_0c) {
        release_part(guest::addr_of(part_7c[0]));
    }
    registered = 0;
}
GUEST_EXPORT(0x402fe444, EscapeToggle::set_registered);
