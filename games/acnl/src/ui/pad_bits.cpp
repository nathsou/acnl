// Tests on the first pad of the input manager (the global at 0x009752d4). Nothing is reported while the error/EULA
// manager is busy.
#include "guest/guest.hpp"

using guest::gptr;

namespace {

// The state of one pad: two words of button bits (which is which is not known yet).
struct PadState {
    u32 unknown_00;
    u32 bits_04;
    u32 bits_08;
    u8 unknown_0c[0x110 - 0xc];
    u32 bits_110;
};
GUEST_OFFSET(PadState, bits_04, 4);
GUEST_OFFSET(PadState, bits_08, 8);
GUEST_OFFSET(PadState, bits_110, 0x110);

struct InputManager {
    u8 unknown_00[0xd0];
    u32 pad_count;
    u8 unknown_d4[4];
    gptr<gptr<PadState>> pads;
};
GUEST_OFFSET(InputManager, pad_count, 0xd0);
GUEST_OFFSET(InputManager, pads, 0xd8);

inline guest::global<gptr<InputManager>, 0x009752d4> input_manager;

inline constexpr guest::Function<0x005ce6dc, bool()> err_eula_is_idle_with_byte_fac;
inline constexpr guest::Function<0x005c2cf4, bool()> condition_5c2cf4;

constexpr u32 BIT_0 = 1;

// The first pad; with no pads the game reads from address 0.
gptr<PadState> first_pad() {
    gptr<InputManager> manager = *input_manager;
    if (manager->pad_count == 0) {
        return gptr<PadState>(0u);
    }
    return *manager->pads;
}

// Points the manager at pads built for a fuzz input.
void fuzz_input_manager(guest::Fuzz &f) {
    auto manager = f.object<InputManager>();
    auto pad = f.object<PadState>();
    auto pads = f.object<gptr<PadState>>();
    *pads = pad;
    manager->pad_count = 1;
    manager->pads = pads;
    *input_manager = manager;
}

}  // namespace

bool pad_has_bit_08(u32 mask) {
    if (err_eula_is_idle_with_byte_fac()) {
        return false;
    }
    return (first_pad()->bits_08 & mask) != 0;
}
GUEST_EXPORT(0x00521cf4, pad_has_bit_08);
GUEST_FUZZ(0x00521cf4, 200, [](guest::Fuzz &f) {
    fuzz_input_manager(f);
    f.arguments(f.pick<u32>({1, 0x8000, 0x10000, 0xffffffffu, f.number()}));
});

bool pad_has_bit_04(u32 mask) {
    if (err_eula_is_idle_with_byte_fac()) {
        return false;
    }
    return (first_pad()->bits_04 & mask) != 0;
}
GUEST_EXPORT(0x00521d3c, pad_has_bit_04);
GUEST_FUZZ(0x00521d3c, 200, [](guest::Fuzz &f) {
    fuzz_input_manager(f);
    f.arguments(f.pick<u32>({1, 2, 0x8000, 0x80000, 0xffffffffu, f.number()}));
});

// Bit 0 of the first pad's second word, when condition 0x005c2cf4 holds.
bool pad_bit_04_0_when_5c2cf4() {
    if (!condition_5c2cf4()) {
        return false;
    }
    if (err_eula_is_idle_with_byte_fac()) {
        return false;
    }
    return (first_pad()->bits_04 & BIT_0) != 0;
}
GUEST_EXPORT(0x00521d84, pad_bit_04_0_when_5c2cf4);
GUEST_FUZZ(0x00521d84, 200, [](guest::Fuzz &f) {
    fuzz_input_manager(f);
    f.arguments();
});

bool pad_has_bit_110(u32 mask) {
    if (err_eula_is_idle_with_byte_fac()) {
        return false;
    }
    return (first_pad()->bits_110 & mask) != 0;
}
GUEST_EXPORT(0x00304c1c, pad_has_bit_110);
GUEST_FUZZ(0x00304c1c, 200, [](guest::Fuzz &f) {
    fuzz_input_manager(f);
    f.arguments(f.pick<u32>({1, 2, 0x8000, 0x80000, 0xffffffffu, f.number()}));
});
