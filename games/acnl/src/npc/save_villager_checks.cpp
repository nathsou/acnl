// Checks on the villagers kept in the save data (records of 0x2518 bytes, ten of them), on a table of records
// compared against a player's identity, and an item slot search.
#include <cstring>

#include "guest/guest.hpp"
#include "item/item.hpp"
#include "save/player.hpp"
#include "save/save_data.hpp"
#include "save/villager.hpp"

using guest::gptr;

namespace {


// What get_reference_value returns: a 12-byte value of which one byte is read here.
struct ReferenceValue {
    u8 unknown_00[7];
    s8 unknown_07;
    u8 unknown_08[4];
};
GUEST_SIZE(ReferenceValue, 12);

// One record of IdentityRecords (contents not known yet).
struct IdentityRecord {
    u8 unknown[0x280];
};
GUEST_SIZE(IdentityRecord, 0x280);

// An object holding four records followed by an extra one, each compared with a player's identity.
struct IdentityRecords {
    static constexpr u32 RECORD_COUNT = 4;

    u8 unknown_0000[0x1810];
    IdentityRecord records[RECORD_COUNT];
    IdentityRecord extra;

    bool has_record_matching(gptr<SavePlayer> player) const;
};
GUEST_OFFSET(IdentityRecords, records, 0x1810);
GUEST_OFFSET(IdentityRecords, extra, 0x2210);
GUEST_SIZE(IdentityRecords, 0x2490);

// Still recompiled code (or rewritten elsewhere, called through the game's ABI):
inline constexpr guest::Function<0x002fb378, gptr<ReferenceValue>()> get_reference_value;
inline constexpr guest::Function<0x00300904, u32(gptr<const SaveVillager> villager)> villager_check_300904;
inline constexpr guest::Function<0x00308971, s32(gptr<const SaveVillager> villager, gptr<const SaveVillager> villagers,
                                                 u32 count)>
    expected_index_for;
inline constexpr guest::Function<0x002fe450, gptr<void>()> get_object_2fe450;
inline constexpr guest::Function<0x00309958, u32(gptr<void> object, u32 value)> object_check_309958;
inline constexpr guest::Function<0x00309ccc, s32(s32 index)> index_check_309ccc;
inline constexpr guest::Function<0x00309971, u32(gptr<const SaveVillager> villager)> villager_check_309970;

inline constexpr guest::Function<0x0030a34c, void(gptr<Value12> out, gptr<const Date> source)> make_value12;
inline constexpr guest::Function<0x0030a488, void(gptr<Value12> value, u32 amount, u32 unknown_r2, u32 unknown_r3,
                                                  u32 unknown_stack)>
    advance_value12;
// takes three Value12 by value (x, then the range start and end, presumably)
inline constexpr guest::Function<0x00301564, u32(u32 x0, u32 x1, u32 x2, u32 a0, u32 a1, u32 a2, u32 b0, u32 b1,
                                                 u32 b2)>
    value12_in_range;
inline constexpr guest::Function<0x00312000, u32(gptr<void> object)> get_part_312000;
inline constexpr guest::Function<0x00312008, void(u32 part, u32 value)> part_set_312008;
inline constexpr guest::Function<0x0031201c, void(u32 part)> part_update_31201c;
inline constexpr guest::Function<0x00312078, s32(u32 part)> part_value_312078;
inline constexpr guest::Function<0x002ff6f4, s32(s32 max)> roll_2ff6f4;  // probably a random number below max

inline constexpr guest::Function<0x003107d5, void(Item &out, gptr<void> owner, u32 slot)> get_owner_item;
inline constexpr guest::Function<0x002f777c, void(Item &item)> finish_item;  // probably the Item destructor

inline constexpr guest::Function<0x00311c50, u32(const IdentityRecord &record)> record_identity;
inline constexpr guest::Function<0x002fe940, u32(u32 identity, gptr<const PersonalId> player_identity)> compare_identity;

bool in_range(const Value12 &x, const Value12 &start, const Value12 &end) {
    return value12_in_range(x.words[0], x.words[1], x.words[2], start.words[0], start.words[1], start.words[2],
                            end.words[0], end.words[1], end.words[2]) != 0;
}

}  // namespace

bool SaveVillager::has_flag_2510_bit0() const {
    return (flags_2510 & 1) != 0;
}
GUEST_EXPORT(0x0011a1c9, SaveVillager::has_flag_2510_bit0);

// A condition on a villager (meaning not known yet): fails when f_00300904 says so; passes when the object from
// f_002fe450 passes check 5; otherwise the villager's index must differ from the save's index_42a07, pass two more
// checks, and the reference value's byte 7 must be at least 6.
static bool check_villager_11a390(gptr<SaveVillager> villager) {
    if (villager_check_300904(villager) != 0) {
        return false;
    }
    gptr<SaveData> block = *save_data;
    s32 index = expected_index_for(villager, guest::addr_of(block->villagers[0]), SaveData::VILLAGER_COUNT);
    gptr<void> object = get_object_2fe450();
    if (object && object_check_309958(object, 5) != 0) {
        return true;
    }
    if (block->index_42a07 == index) {
        return false;
    }
    if (index_check_309ccc(index) < 0) {
        return false;
    }
    if (villager_check_309970(villager) == 0) {
        return false;
    }
    return get_reference_value()->unknown_07 >= 6;
}
GUEST_EXPORT(0x0011a391, check_villager_11a390);

// Needs flag_2508, both the given value and the reference value within the 14-step range starting at the value
// built from date_250a; then updates a part of `object` and passes when a roll below 100 is under its value.
bool SaveVillager::check_11a440(gptr<void> object, u32, gptr<const Value12> value) const {
    constexpr u32 RANGE_LENGTH = 14;
    constexpr s32 ROLL_LIMIT = 100;

    guest::StackObject<Value12> start;
    make_value12(start.ptr(), guest::addr_of(date_250a));
    guest::StackObject<Value12> end;
    *end = *start;
    advance_value12(end.ptr(), RANGE_LENGTH, 0, 0, 0);
    if (flag_2508 == 0) {
        return false;
    }
    if (!in_range(*value, *start, *end)) {
        return false;
    }
    if (!in_range(*get_reference_value().cast<Value12>(), *start, *end)) {
        return false;
    }
    u32 part = get_part_312000(object);
    part_set_312008(part, 1);
    part_update_31201c(part);
    s32 roll = roll_2ff6f4(ROLL_LIMIT);
    return roll < part_value_312078(part);
}
GUEST_EXPORT(0x0011a441, SaveVillager::check_11a440);

// The first of an owner's four item slots that is empty, or -1.
static s32 find_empty_owner_slot(gptr<void> owner) {
    constexpr u32 SLOTS = 4;
    for (u32 slot = 0; slot < SLOTS; slot++) {
        guest::StackObject<Item> item;
        get_owner_item(*item, owner, slot);
        bool empty = item->is_empty();
        finish_item(*item);
        if (empty) {
            return s32(slot);
        }
    }
    return -1;
}
GUEST_EXPORT(0x0011a521, find_empty_owner_slot);

// Whether a record (the extra one first, then the four others) has a nonzero identity that f_002fe940 reports
// as 0 (presumably equal) against the player's identity. False for no player.
bool IdentityRecords::has_record_matching(gptr<SavePlayer> player) const {
    if (!player) {
        return false;
    }
    gptr<const PersonalId> player_identity = guest::addr_of(player->identity);
    auto matches = [&](const IdentityRecord &record) {
        u32 identity = record_identity(record);
        return identity != 0 && compare_identity(identity, player_identity) == 0;
    };
    if (matches(extra)) {
        return true;
    }
    for (u32 i = 0; i < RECORD_COUNT; i++) {
        if (matches(records[i])) {
            return true;
        }
    }
    return false;
}
GUEST_EXPORT(0x0011a5f5, IdentityRecords::has_record_matching);

// ---- inputs for the shadow checker's fuzzing (GUEST_FUZZ=1)

// Scratch memory whose every word holds its own address: any pointer the unknown callees load from it stays inside.
static gptr<void> self_referencing_object(guest::Fuzz &f, u32 size) {
    gptr<u32> words = f.allocate(size).cast<u32>();
    for (u32 i = 0; i < size / 4; i++) {
        words[i] = words.addr();
    }
    return words.cast<void>();
}

static gptr<SaveVillager> some_villager(guest::Fuzz &f) {
    auto villager = f.object<SaveVillager>();
    villager->flag_2508 = f.below(2) ? 0 : u8(f.number());
    villager->flags_2510 = f.pick<u32>({0, 1, 0xffffffff, f.number()});
    return villager;
}

GUEST_FUZZ(0x0011a1c9, 200, [](guest::Fuzz &f) { f.arguments(some_villager(f)); });
GUEST_FUZZ(0x0011a391, 200, [](guest::Fuzz &f) { f.arguments(some_villager(f)); });
GUEST_FUZZ(0x0011a441, 200, [](guest::Fuzz &f) {
    auto villager = some_villager(f);
    gptr<void> object = self_referencing_object(f, 0x1000);
    f.arguments(villager, object, f.number(), f.object<Value12>());
});
GUEST_FUZZ(0x0011a521, 200, [](guest::Fuzz &f) { f.arguments(self_referencing_object(f, 0x2600)); });
GUEST_FUZZ(0x0011a5f5, 200, [](guest::Fuzz &f) {
    auto records = self_referencing_object(f, sizeof(IdentityRecords)).cast<IdentityRecords>();
    for (u32 i = 0; i < IdentityRecords::RECORD_COUNT; i++) {
        if (f.below(3) == 0) {
            memset(&records->records[i], 0, sizeof(IdentityRecord));
        }
    }
    if (f.below(3) == 0) {
        memset(&records->extra, 0, sizeof(IdentityRecord));
    }
    // only the player's identity is read: a small window stands for the whole SavePlayer
    constexpr u32 WINDOW = 0x40;
    gptr<void> window = f.allocate(WINDOW);
    f.bytes(window, WINDOW);
    gptr<SavePlayer> player(window.addr() - u32(offsetof(SavePlayer, identity)));
    f.arguments(records, f.below(8) == 0 ? gptr<SavePlayer>() : player);
});
