#include "guest/guest.hpp"

namespace {

// ---- the packed ids: the table in bits 8-11, then up to two indices in nibbles (high in bits 4-7, low in 0-3).
// Which kind of object each table holds is not known yet.
constexpr u32 TABLE_SHIFT = 8;
constexpr u32 HIGH_SHIFT = 4;
enum PackedTable : u32 {
    TABLE_OBJECT_LISTS = 0,   // high: object (below 8), low: entry in its list (below 10)
    TABLE_ENTRIES = 1,        // high: entry (below 10)
    TABLE_ARRAY_2 = 2,        // low: index (below 8)
    TABLE_ARRAY_3 = 3,        // low: index (below 8)
    TABLE_ARRAY_4 = 4,        // high: index (below 4)
    TABLE_SINGLE_5 = 5,       // one object
    TABLE_ARRAY_6 = 6,        // low: index (below 8)
};
constexpr u32 NOT_FOUND = 0xffff;

constexpr u32 packed_id(PackedTable table, u32 high, u32 low) {
    return table << TABLE_SHIFT | high << HIGH_SHIFT | low;
}

// How many indices each table has
constexpr u32 TABLE_0_OBJECTS = 8;
constexpr u32 TABLE_0_ENTRIES = 10;
constexpr u32 TABLE_1_ENTRIES = 10;
constexpr u32 TABLE_2_COUNT = 8;
constexpr u32 TABLE_3_COUNT = 8;
constexpr u32 TABLE_4_COUNT = 4;
constexpr u32 TABLE_6_COUNT = 8;

// Offsets from the object (or the base returned by get_base) to what each table lists
constexpr u32 TABLE_0_LIST_OFFSET = 0x2c;       // in the object of f_2fb96c
constexpr u32 TABLE_2_OFFSET = 0x6226c + 0x4c;  // from the base
constexpr u32 TABLE_3_OFFSET = 0x66820;         // from the base
constexpr u32 TABLE_3_STRIDE = 2160;
constexpr u32 TABLE_3_ENTRY_OFFSET = 0x7c;      // inside each element
constexpr u32 TABLE_6_OFFSET = 0x4bef0;         // from the base
constexpr u32 TABLE_6_STRIDE = 271 * 8;
constexpr u32 TABLE_1_ENTRIES_OFFSET = 4;       // in the object of f_2fb310
constexpr u32 TABLE_1_ENTRY_OFFSET = 0x30;      // inside each entry
constexpr u32 TABLE_4_BASE_ADJUST = 0xfff951c8u;  // subtracted from the base (wraps)
constexpr u32 TABLE_4_ENTRY_OFFSET = 0x304;     // inside each entry
constexpr u32 TABLE_5_OFFSET = 0x70e9c;         // from the base

constexpr u32 PACKED_ID_RANGE = 0x700;  // fuzz addresses near small values, like packed ids

inline constexpr guest::Function<0x002fb96c, u32(u32 index)> f_2fb96c;
inline constexpr guest::Function<0x0020bf50, u32(u32 object, u32 index)> f_20bf50;
inline constexpr guest::Function<0x002fae84, u32(u32 unused)> get_base_2fae84;
inline constexpr guest::Function<0x00304ed8, u32(u32 object, u32 index)> f_304ed8;
inline constexpr guest::Function<0x002fb310, u32(u32 base)> f_2fb310;
inline constexpr guest::Function<0x003058c9, u32(u32 object, u32 index)> f_3058c8;  // Thumb
inline constexpr guest::Function<0x006bc388, u32(u32 object, u32 index)> f_6bc388;

u32 base() {
    return get_base_2fae84(0);
}

}  // namespace

// The inverse of locate_by_packed_id: the packed id of the data address, or NOT_FOUND when it belongs to none of
// the tables.
u32 find_packed_id(u32 address) {
    for (u32 high = 0; high < TABLE_0_OBJECTS; high++) {
        u32 object = f_2fb96c(high);
        if (object == 0) {
            continue;
        }
        for (u32 low = 0; low < TABLE_0_ENTRIES; low++) {
            if (f_20bf50(object + TABLE_0_LIST_OFFSET, low) == address) {
                return packed_id(TABLE_OBJECT_LISTS, high, low);
            }
        }
    }

    u32 table_2 = base() + TABLE_2_OFFSET;
    for (u32 low = 0; low < TABLE_2_COUNT; low++) {
        if (f_304ed8(table_2, low) == address) {
            return packed_id(TABLE_ARRAY_2, 0, low);
        }
    }

    u32 table_3 = base() + TABLE_3_OFFSET;
    for (u32 low = 0; low < TABLE_3_COUNT; low++) {
        if (table_3 + low * TABLE_3_STRIDE + TABLE_3_ENTRY_OFFSET == address) {
            return packed_id(TABLE_ARRAY_3, 0, low);
        }
    }

    u32 table_6 = base() + TABLE_6_OFFSET;
    for (u32 low = 0; low < TABLE_6_COUNT; low++) {
        if (table_6 + low * TABLE_6_STRIDE == address) {
            return packed_id(TABLE_ARRAY_6, 0, low);
        }
    }

    for (u32 high = 0; high < TABLE_1_ENTRIES; high++) {
        u32 object = f_2fb310(base());
        u32 entry = f_3058c8(object + TABLE_1_ENTRIES_OFFSET, high);
        if (entry != 0 && entry + TABLE_1_ENTRY_OFFSET == address) {
            return packed_id(TABLE_ENTRIES, high, 0);
        }
    }

    for (u32 high = 0; high < TABLE_4_COUNT; high++) {
        u32 entry = f_6bc388(base() - TABLE_4_BASE_ADJUST, high);
        if (entry + TABLE_4_ENTRY_OFFSET == address) {
            return packed_id(TABLE_ARRAY_4, high, 0);
        }
    }

    if (base() + TABLE_5_OFFSET == address) {
        return packed_id(TABLE_SINGLE_5, 0, 0);
    }
    return NOT_FOUND;
}
GUEST_EXPORT(0x006aac60, find_packed_id);
GUEST_FUZZ(0x006aac60, 300, [](guest::Fuzz &f) {
    f.arguments(f.pick<u32>({0, 1, 0xffffffff, f.number(), f.below(PACKED_ID_RANGE)}));
});
