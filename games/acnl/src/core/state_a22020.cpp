#include "core/state_a22020.hpp"

namespace {
// Still recompiled; it is given the sub-state, the caller's argument and the sub-state's flag_155.
inline constexpr guest::Function<0x00747548, u32(gptr<UnknownSubStateB8> sub, u32 argument, u32 flag_155)>
    sub_state_check_747548;
}  // namespace

// True when the sub-state has flag_144 set and flag_30 clear.
bool UnknownStateA22020::flag_144_without_flag_30() const {
    if (!sub) {
        return false;
    }
    return sub->flag_144 != 0 && sub->flag_30 == 0;
}
GUEST_EXPORT(0x00746f8c, UnknownStateA22020::flag_144_without_flag_30);

// With flag_155 set and a zero argument the answer is 0; otherwise f_00747548 decides.
u32 UnknownStateA22020::check_747548(u32 argument) const {
    if (!sub) {
        return 0;
    }
    u8 flag_155 = sub->flag_155;
    if (flag_155 != 0 && argument == 0) {
        return 0;
    }
    return sub_state_check_747548(sub, argument, flag_155);
}
GUEST_EXPORT(0x00746fa0, UnknownStateA22020::check_747548);

// True in mode 3, or in mode 5 when value_118 equals value_120.
bool UnknownStateA22020::mode_3_or_matching_values() const {
    if (!sub) {
        return false;
    }
    if (sub->mode == UnknownSubStateB8::MODE_3) {
        return true;
    }
    if (sub->mode != UnknownSubStateB8::MODE_5) {
        return false;
    }
    return sub->value_118[0] == sub->value_120[0] && sub->value_118[1] == sub->value_120[1];
}
GUEST_EXPORT(0x00746fb4, UnknownStateA22020::mode_3_or_matching_values);

// flag_154, in modes above 1; always false when flag_155 is set and the argument is zero.
bool UnknownStateA22020::flag_154_in_active_mode(u32 argument) const {
    if (!sub) {
        return false;
    }
    if (sub->flag_155 != 0 && argument == 0) {
        return false;
    }
    if (sub->mode <= 1) {
        return false;
    }
    return sub->flag_154 != 0;
}
GUEST_EXPORT(0x00746fc8, UnknownStateA22020::flag_154_in_active_mode);

bool UnknownStateA22020::has_unknown_14() const {
    return unknown_14 != 0;
}
GUEST_EXPORT(0x00746fdc, UnknownStateA22020::has_unknown_14);

// ---- inputs for the shadow checker's fuzzing (GUEST_FUZZ=1)

static gptr<UnknownStateA22020> some_state(guest::Fuzz &f) {
    auto state = f.object<UnknownStateA22020>();
    if (f.below(5) == 0) {
        state->sub = nullptr;
        return state;
    }
    // extra room past the known fields, for whatever f_00747548 reads
    auto sub = f.allocate(0x400).cast<UnknownSubStateB8>();
    f.bytes(sub, 0x400);
    sub->mode = f.below(4) ? u8(f.below(7)) : u8(f.number());
    if (f.below(2)) {
        sub->flag_30 = 0;
    }
    if (f.below(2)) {
        sub->flag_144 = 0;
    }
    if (f.below(2)) {
        sub->flag_154 = 0;
    }
    if (f.below(2)) {
        sub->flag_155 = 0;
    }
    if (f.below(2)) {
        sub->value_120[0] = sub->value_118[0];
        if (f.below(4)) {
            sub->value_120[1] = sub->value_118[1];
        }
    }
    state->sub = sub;
    return state;
}

GUEST_FUZZ(0x00746f8c, 300, [](guest::Fuzz &f) { f.arguments(some_state(f)); });
GUEST_FUZZ(0x00746fa0, 300, [](guest::Fuzz &f) {
    auto state = some_state(f);
    f.arguments(state, f.pick<u32>({0, 1, f.number()}));
});
GUEST_FUZZ(0x00746fb4, 300, [](guest::Fuzz &f) { f.arguments(some_state(f)); });
GUEST_FUZZ(0x00746fc8, 300, [](guest::Fuzz &f) {
    auto state = some_state(f);
    f.arguments(state, f.pick<u32>({0, 1, f.number()}));
});
GUEST_FUZZ(0x00746fdc, 200, [](guest::Fuzz &f) {
    auto state = f.object<UnknownStateA22020>();
    if (f.below(2)) {
        state->unknown_14 = 0;
    }
    f.arguments(state);
});
