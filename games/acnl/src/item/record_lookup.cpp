#include "guest/guest.hpp"
#include "item/item.hpp"
#include "net/net_session.hpp"
#include "save/save_data.hpp"

namespace {

// Still recompiled code:
inline constexpr guest::Function<0x00301e20, u32(u32 id)> is_valid_id;
inline constexpr guest::Function<0x00308971, u32(u32 id, gptr<void> base, u32 limit)> expected_index_for;
inline constexpr guest::Function<0x003098b0, u32(gptr<void> record)> record_check_b;
inline constexpr guest::Function<0x00318960, u32(gptr<void> inner)> inner_kind;
inline constexpr guest::Function<0x00303cdc, void(gptr<void> inner)> clear_inner;
inline constexpr guest::Function<0x0027a48c, void(gptr<void> record)> reset_record_extra;

constexpr u32 RECORD_A_KIND = 8;
constexpr u32 RECORD_B_KIND = 7;

bool record_matches(SavedRecord &record, u32 kind, u32 expected_index) {
    gptr<SavedRecord> self = guest::addr_of(record);
    if (!record.inner.has_value()) {
        return false;
    }
    if (record_check_b(self) != 0) {
        return false;
    }
    if (inner_kind(guest::addr_of(record.inner)) != kind) {
        return false;
    }
    u32 index = u32(s32(record.unknown_21));
    return index < SaveData::VILLAGER_COUNT && index == expected_index;
}

}  // namespace

// Reads the item number: the id without its flag bit.
GUEST_EXPORT(0x0030b6b8, Item::number);

// Whether the main object reports nothing (its query returns 0).
static bool main_object_idle() {
    return (*net_session)->station() == 0;
}
GUEST_EXPORT(0x0030b6c4, main_object_idle);

// Finds the value stored in one of the two saved records that matches the id; NONE_VALUE when neither does.
static u32 lookup_record_value(gptr<SaveVillager> villagers, u32 id) {
    if (!is_valid_id(id)) {
        return SavedRecordInner::NONE_VALUE;
    }
    u32 expected_index = expected_index_for(id, villagers, SaveData::VILLAGER_COUNT);
    // (the villagers are the array in the save data, which the two records follow)
    gptr<SaveData> data(villagers.addr() - u32(offsetof(SaveData, villagers)));
    if (record_matches(data->record_a, RECORD_A_KIND, expected_index)) {
        return data->record_a.inner.value;
    }
    if (record_matches(data->record_b, RECORD_B_KIND, expected_index)) {
        return data->record_b.inner.value;
    }
    return SavedRecordInner::NONE_VALUE;
}
GUEST_EXPORT(0x0030b829, lookup_record_value);

// Puts a record back to its "none" state.
static void reset_record(SavedRecord &self) {
    self.inner.value = SavedRecordInner::NONE_VALUE;
    clear_inner(guest::addr_of(self.inner));
    self.inner.unknown_09 = SavedRecordInner::RESET_BYTE_09;
    self.inner.unknown_0a = SavedRecordInner::RESET_BYTE_0A;
    reset_record_extra(guest::addr_of(self));
    self.unknown_21 = SavedRecord::NO_INDEX;
    self.unknown_22 = 0;
    self.unknown_23 = 0;
    self.unknown_24 = 0;
}
GUEST_EXPORT(0x0030b8bc, reset_record);
