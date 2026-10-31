// Flag sets with a fixed number of flags: clearing a flag of a 10-flag object, and setting or clearing a flag of the
// 32-flag set at 0x00952aec. Indices past the end are ignored.
#include "core/flag_bytes.hpp"

namespace {

constexpr u32 SMALL_FLAG_COUNT = 10;
constexpr u32 GLOBAL_FLAG_COUNT = 32;
constexpr u32 TABLE_FLAG_COUNT = 399;  // 0x18f flags in an object's byte array at 0x8f3c

struct FlagTableObject {
    u8 unknown_0000[0x8f3c];
    FlagBytes<TABLE_FLAG_COUNT> flags;
};
GUEST_OFFSET(FlagTableObject, flags, 0x8f3c);

inline guest::global<FlagBytes<GLOBAL_FLAG_COUNT>, 0x00952aec> global_flags;

}  // namespace

void clear_flag_of_10(FlagBytes<SMALL_FLAG_COUNT> &flags, u32 index) {
    flags.assign(index, false);
}
GUEST_EXPORT(0x00307564, clear_flag_of_10);

void set_global_flag(u32 index) {
    global_flags->set(index);
}
GUEST_EXPORT(0x002b7f74, set_global_flag);

void clear_global_flag(u32 index) {
    global_flags->assign(index, false);
}
GUEST_EXPORT(0x002b8010, clear_global_flag);

void set_table_flag(FlagTableObject &object, u32 index) {
    object.flags.set(index);
}
GUEST_EXPORT(0x006bd07c, set_table_flag);
