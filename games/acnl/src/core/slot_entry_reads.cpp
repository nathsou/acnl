// Reads of the table of slot entries the game keeps (twenty bytes each, 64 of them after a 16-byte header): by the
// slot number an object holds, by a plain index, or by counting the slots an object has switched on.
#include "guest/guest.hpp"

namespace {

constexpr u32 SLOT_COUNT = 64;
constexpr s32 NO_SLOT = -1;
constexpr u32 ENTRY_SIZE = 20;

inline constexpr guest::Function<0x006158c4, gptr<void>()> global_word_14;

struct SlotEntry {
    u32 value_00;
    u16 value_04;
    u8 unknown_06[2];
    s8 value_08;
    u8 byte_09;
    u8 byte_0a;
    u8 byte_0b;
    u8 unknown_0c;
    u8 byte_0d;
    u8 byte_0e;
    u8 byte_0f;
    u8 unknown_10[2];
    u16 half_12;
};
GUEST_SIZE(SlotEntry, ENTRY_SIZE);

struct SlotTable {
    u8 header[0x10];
    SlotEntry entries[SLOT_COUNT];
};
GUEST_OFFSET(SlotTable, entries, 0x10);

// An object that holds a slot number at 0xc and switches slots on in bytes from 0x10.
struct SlotUser {
    u8 unknown_00[0xc];
    s8 slot;
    u8 unknown_0d[3];
    u8 enabled[SLOT_COUNT];
};
GUEST_OFFSET(SlotUser, slot, 0xc);
GUEST_OFFSET(SlotUser, enabled, 0x10);

gptr<SlotTable> table() {
    return global_word_14().cast<SlotTable>();
}

// The entry at the index; the index is not checked (the original reads whatever lies there).
gptr<SlotEntry> entry_at(s32 index) {
    return guest::addr_of(table()->entries[0]) + index;
}

// The index of the n-th slot (counting from 0) the object has switched on; -1 when there are fewer.
s32 nth_enabled_slot(const SlotUser &user, u32 n) {
    u32 seen = 0;
    for (u32 slot = 0; slot < SLOT_COUNT; slot++) {
        if (user.enabled[slot] == 0) {
            continue;
        }
        if (seen == n) {
            return s32(s8(slot));
        }
        seen++;
    }
    return NO_SLOT;
}

gptr<SlotUser> fuzz_user(guest::Fuzz &f) {
    auto user = f.object<SlotUser>();
    user->slot = s8(f.pick<u32>({0, 1, 5, 63}));
    for (u8 &flag : user->enabled) {
        flag = u8(f.below(4) == 0);
    }
    return user;
}

}  // namespace

u32 slot_byte_0b(const SlotUser &user) { return entry_at(user.slot)->byte_0b; }
u32 slot_byte_09(const SlotUser &user) { return entry_at(user.slot)->byte_09; }
u32 slot_half_12_low(const SlotUser &user) { return entry_at(user.slot)->half_12 & 0xff; }
u32 slot_byte_0d(const SlotUser &user) { return entry_at(user.slot)->byte_0d; }
u32 slot_byte_0a(const SlotUser &user) { return entry_at(user.slot)->byte_0a; }
u32 slot_byte_0e(const SlotUser &user) { return entry_at(user.slot)->byte_0e; }
u32 slot_byte_0f(const SlotUser &user) { return entry_at(user.slot)->byte_0f; }
GUEST_EXPORT(0x0076e728, slot_byte_0b);
GUEST_EXPORT(0x0076e7c8, slot_byte_09);
GUEST_EXPORT(0x0076e7e8, slot_half_12_low);
GUEST_EXPORT(0x0076eb20, slot_byte_0d);
GUEST_EXPORT(0x0076eb40, slot_byte_0a);
GUEST_EXPORT(0x0076eb60, slot_byte_0e);
GUEST_EXPORT(0x0076ebb8, slot_byte_0f);
GUEST_FUZZ(0x0076e728, 100, [](guest::Fuzz &f) { f.arguments(fuzz_user(f)); });
GUEST_FUZZ(0x0076e7c8, 100, [](guest::Fuzz &f) { f.arguments(fuzz_user(f)); });
GUEST_FUZZ(0x0076e7e8, 100, [](guest::Fuzz &f) { f.arguments(fuzz_user(f)); });
GUEST_FUZZ(0x0076eb20, 100, [](guest::Fuzz &f) { f.arguments(fuzz_user(f)); });
GUEST_FUZZ(0x0076eb40, 100, [](guest::Fuzz &f) { f.arguments(fuzz_user(f)); });
GUEST_FUZZ(0x0076eb60, 100, [](guest::Fuzz &f) { f.arguments(fuzz_user(f)); });
GUEST_FUZZ(0x0076ebb8, 100, [](guest::Fuzz &f) { f.arguments(fuzz_user(f)); });

// The first word of the entry at the index.
u32 slot_value_at(u32 index) { return entry_at(s32(index))->value_00; }
GUEST_EXPORT(0x006c52c8, slot_value_at);
GUEST_FUZZ(0x006c52c8, 100, [](guest::Fuzz &f) { f.arguments(f.below(SLOT_COUNT)); });

// Byte 9 of the entry of the n-th switched-on slot.
u32 nth_enabled_slot_byte_09(const SlotUser &user, u32 n) { return entry_at(nth_enabled_slot(user, n))->byte_09; }
GUEST_EXPORT(0x0076ecd0, nth_enabled_slot_byte_09);
GUEST_FUZZ(0x0076ecd0, 100, [](guest::Fuzz &f) { f.arguments(fuzz_user(f), f.below(4)); });

// The first word of the entry of the n-th switched-on slot.
u32 nth_enabled_slot_value(const SlotUser &user, u32 n) { return entry_at(nth_enabled_slot(user, n))->value_00; }
GUEST_EXPORT(0x0076ed5c, nth_enabled_slot_value);
GUEST_FUZZ(0x0076ed5c, 100, [](guest::Fuzz &f) { f.arguments(fuzz_user(f), f.below(4)); });

// The signed byte 8 of the entry of the n-th switched-on slot.
s32 nth_enabled_slot_value_08(const SlotUser &user, u32 n) { return entry_at(nth_enabled_slot(user, n))->value_08; }
GUEST_EXPORT(0x0076edb4, nth_enabled_slot_value_08);
GUEST_FUZZ(0x0076edb4, 100, [](guest::Fuzz &f) { f.arguments(fuzz_user(f), f.below(4)); });
