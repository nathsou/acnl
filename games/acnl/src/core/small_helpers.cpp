#include "guest/guest.hpp"

using guest::gptr;

constexpr u32 TABLE_9B4A24 = 0x009b4a24;

// Reads an entry of a global table of 32-bit values (what it holds is not known yet).
static u32 read_table_9b4a24(u32 index) {
    return gptr<u32>(TABLE_9B4A24)[index];
}
GUEST_EXPORT(0x002fe7cc, read_table_9b4a24);

// Sets a flag word to 1 if it was 0; returns 1 when this call was the one that set it, else 0.
static u32 claim_flag(gptr<u32> flag) {
    if (*flag != 0) {
        return 0;
    }
    *flag = 1;
    return 1;
}
GUEST_EXPORT(0x002fe7dd, claim_flag);
