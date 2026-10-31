// Scans of the thirty-two records of a table for the ones that hold an identity, and the sums and CRCs of other
// blocks of the same area.
#include "core/encrypted_int.hpp"
#include "guest/guest.hpp"
#include "save/personal_id.hpp"
#include "save/save_data.hpp"

namespace {

constexpr u32 RECORD_COUNT = 0x20;
constexpr u32 RECORD_SIZE = 0x14b0;
constexpr u32 IDENTITY_OFFSET = 0x1420;
constexpr u32 SUM_COUNT = 5;
constexpr u32 CRC_START = 0xffffffff;
constexpr u32 CRC_FINAL_XOR = 0xffffffff;
constexpr u32 TABLE_CRC_SIZE = 0x29604;
constexpr u32 SMALL_CRC_SIZE = 0xbe4;
constexpr u8 STATE_LIMIT = 2;
constexpr u8 FLAG_BIT_1 = 0x02;

inline constexpr guest::Function<0x003193e8, u32(gptr<const u8> data, u32 size, u32 start, u32 final_xor)> crc32;
inline constexpr guest::Function<0x002fbd54, bool(gptr<void> identity)> identity_is_set;
inline constexpr guest::Function<0x002fb328, gptr<SaveData>()> get_save_data;

struct IdentityRecord {
    u8 unknown_0000[IDENTITY_OFFSET];
    PersonalId identity;
    u8 unknown_144c[RECORD_SIZE - IDENTITY_OFFSET - sizeof(PersonalId)];
};
GUEST_OFFSET(IdentityRecord, identity, IDENTITY_OFFSET);
GUEST_SIZE(IdentityRecord, RECORD_SIZE);

struct IdentityTable {
    u8 header[8];
    IdentityRecord records[RECORD_COUNT];
};
GUEST_OFFSET(IdentityTable, records, 8);

struct EncryptedSums {
    u8 unknown_00[8];
    EncryptedInt values[SUM_COUNT];
};
GUEST_OFFSET(EncryptedSums, values, 8);

struct TableWithCrc {
    u32 crc;
    u8 data[TABLE_CRC_SIZE];
};

struct SmallWithCrc {
    u32 crc;
    u8 data[SMALL_CRC_SIZE];
};

struct StateHolder {
    u8 unknown_00[0x10];
    u8 state_10;
};
GUEST_OFFSET(StateHolder, state_10, 0x10);

}  // namespace

// How many records hold an identity.
u32 count_set_records(IdentityTable &table) {
    u32 count = 0;
    for (IdentityRecord &record : table.records) {
        if (identity_is_set(guest::addr_of(record.identity).cast<void>())) {
            count++;
        }
    }
    return count;
}
GUEST_EXPORT(0x0071d334, count_set_records);

// Whether some record holds an identity.
bool any_record_set(IdentityTable &table) {
    for (IdentityRecord &record : table.records) {
        if (identity_is_set(guest::addr_of(record.identity).cast<void>())) {
            return true;
        }
    }
    return false;
}
GUEST_EXPORT(0x0071d3e4, any_record_set);

// Whether some record holds no identity.
bool any_record_free(IdentityTable &table) {
    for (IdentityRecord &record : table.records) {
        if (!identity_is_set(guest::addr_of(record.identity).cast<void>())) {
            return true;
        }
    }
    return false;
}
GUEST_EXPORT(0x0071d42c, any_record_free);

// The sum of the five encrypted values.
u32 sum_of_encrypted_values(const EncryptedSums &sums) {
    u32 sum = 0;
    for (const EncryptedInt &value : sums.values) {
        sum += value.get();
    }
    return sum;
}
GUEST_EXPORT(0x0071d838, sum_of_encrypted_values);

bool table_crc_matches(TableWithCrc &block) {
    return block.crc == crc32(guest::addr_of(block.data[0]), TABLE_CRC_SIZE, CRC_START, CRC_FINAL_XOR);
}
GUEST_EXPORT(0x0071d48c, table_crc_matches);

void seal_small_with_crc(SmallWithCrc &block) {
    block.crc = crc32(guest::addr_of(block.data[0]), SMALL_CRC_SIZE, CRC_START, CRC_FINAL_XOR);
}
GUEST_EXPORT(0x0071fbec, seal_small_with_crc);

bool small_with_crc_matches(SmallWithCrc &block) {
    return crc32(guest::addr_of(block.data[0]), SMALL_CRC_SIZE, CRC_START, CRC_FINAL_XOR) == block.crc;
}
GUEST_EXPORT(0x0071fc14, small_with_crc_matches);

// Whether the state is at least 2 and the save data's flag byte at 0x621d3 has bit 1 clear.
bool state_allows_and_flag_clear(StateHolder &holder) {
    if (holder.state_10 < STATE_LIMIT) {
        return false;
    }
    return (get_save_data()->flags_621d3 & FLAG_BIT_1) == 0;
}
GUEST_EXPORT(0x0071c594, state_allows_and_flag_clear);
