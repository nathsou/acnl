// Float tables of seven entries indexed by a small number (an index out of range reads entry 0), and a state byte
// at 0x0095df98 whose value 7 means "off" (meaning not known yet).
#include "guest/guest.hpp"

using guest::gptr;

namespace {

constexpr u32 TABLE_ENTRIES = 7;
constexpr u8 STATE_OFF = 7;

inline guest::global<u8, 0x0095df98> state_95df98;

constexpr u32 ENTRY_SIZE = 16;

// The address of a 16-byte entry of such a table (an index out of range gives entry 0).
template <u32 TableAddress>
gptr<u8> entry_address(u32 index) {
    return gptr<u8>(TableAddress + (index < TABLE_ENTRIES ? index : 0) * ENTRY_SIZE);
}

template <u32 TableAddress>
float table_value(u32 index) {
    gptr<float> table(TableAddress);
    return table[index < TABLE_ENTRIES ? index : 0];
}

void fuzz_table_index(guest::Fuzz &f) {
    f.arguments(f.pick<u32>({0, 1, TABLE_ENTRIES - 1, TABLE_ENTRIES, TABLE_ENTRIES + 1, 0xffffffffu, f.below(10)}));
}

}  // namespace

GUEST_EXPORT(0x0062f1c4, table_value<0x00895178>);
GUEST_EXPORT(0x0062f1e0, table_value<0x00895140>);
GUEST_EXPORT(0x0062f1fc, table_value<0x00895108>);
GUEST_EXPORT(0x0062f528, table_value<0x00895124>);
GUEST_EXPORT(0x0062f63c, table_value<0x008950ec>);
GUEST_EXPORT(0x0062fb7c, table_value<0x008950b4>);
GUEST_EXPORT(0x0062fb98, table_value<0x008950d0>);
GUEST_EXPORT(0x0062f7b0, entry_address<0x00895194>);
GUEST_EXPORT(0x0062f7c8, entry_address<0x00895204>);
GUEST_EXPORT(0x0062f7e0, entry_address<0x00895274>);
GUEST_FUZZ(0x0062f1c4, 100, [](guest::Fuzz &f) { fuzz_table_index(f); });
GUEST_FUZZ(0x0062f1e0, 100, [](guest::Fuzz &f) { fuzz_table_index(f); });
GUEST_FUZZ(0x0062f1fc, 100, [](guest::Fuzz &f) { fuzz_table_index(f); });
GUEST_FUZZ(0x0062f528, 100, [](guest::Fuzz &f) { fuzz_table_index(f); });
GUEST_FUZZ(0x0062f63c, 100, [](guest::Fuzz &f) { fuzz_table_index(f); });
GUEST_FUZZ(0x0062fb7c, 100, [](guest::Fuzz &f) { fuzz_table_index(f); });
GUEST_FUZZ(0x0062fb98, 100, [](guest::Fuzz &f) { fuzz_table_index(f); });
GUEST_FUZZ(0x0062f7b0, 100, [](guest::Fuzz &f) { fuzz_table_index(f); });
GUEST_FUZZ(0x0062f7c8, 100, [](guest::Fuzz &f) { fuzz_table_index(f); });
GUEST_FUZZ(0x0062f7e0, 100, [](guest::Fuzz &f) { fuzz_table_index(f); });

bool state_95df98_is_on() {
    return state_95df98 != STATE_OFF;
}
GUEST_EXPORT(0x0062f218, state_95df98_is_on);
GUEST_FUZZ(0x0062f218, 50, [](guest::Fuzz &f) {
    state_95df98 = f.pick<u8>({0, 1, STATE_OFF - 1, STATE_OFF, STATE_OFF + 1, 0xff});
    f.arguments();
});

void switch_off_state_95df98() {
    state_95df98 = STATE_OFF;
}
GUEST_EXPORT(0x0062f234, switch_off_state_95df98);
GUEST_FUZZ(0x0062f234, 50, [](guest::Fuzz &f) {
    state_95df98 = f.pick<u8>({0, 1, STATE_OFF, 0xff});
    f.arguments();
});
