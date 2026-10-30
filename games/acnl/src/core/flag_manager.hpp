// The manager of a set of 64 flags that things request and release (the global one is at 0x0098a030).
#pragma once

#include "guest/guest.hpp"

struct FlagManager {
    u8 unknown_00[0x18];
    u64 requested;  // bit n: flag n is requested
    u64 withdrawn;  // bit n: flag n was withdrawn before it was granted (requesting it again only undoes that)

    void request(u32 index);
    void release(u32 index);  // the flag is no longer requested
};
GUEST_OFFSET(FlagManager, requested, 0x18);
GUEST_OFFSET(FlagManager, withdrawn, 0x20);

inline guest::global<FlagManager, 0x0098a030> flag_manager;
