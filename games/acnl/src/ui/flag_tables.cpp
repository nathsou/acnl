#include "guest/guest.hpp"

using guest::gptr;

namespace {

constexpr u32 BLOCK_ADDRESS = 0x00957320;
constexpr u32 BLOCK_BYTE_OFFSET = 2;
constexpr u32 TABLE_ADDRESS = 0x00889074;
constexpr u32 NO_ENTRY = 0xa5;

}  // namespace

// A byte of a global block (meaning not known yet).
u8 read_global_byte_2() {
    return gptr<u8>(BLOCK_ADDRESS)[BLOCK_BYTE_OFFSET];
}
GUEST_EXPORT(0x002f74c8, read_global_byte_2);

// True when every bit of mask is set in the table entry for index (never for NO_ENTRY).
bool table_entry_has_all_bits(u32 mask, u32 index) {
    if (index == NO_ENTRY) {
        return false;
    }
    u32 entry = gptr<u32>(TABLE_ADDRESS)[index];
    return (mask & ~entry) == 0;
}
GUEST_EXPORT(0x002f74e0, table_entry_has_all_bits);
