// Small sets of flags kept in a few bytes, and the flags of a few game objects.
#include "core/object_flags_171.hpp"
#include "guest/guest.hpp"

namespace {

inline constexpr guest::Function<0x00584134, gptr<void>()> get_flag_manager;
inline constexpr guest::Function<0x0058c5f0, void(gptr<void> manager, u32 index)> release_flag;

}  // namespace

// An object with pending releases: a flag says they are on, and a set of 50 flags says which are.
struct PendingReleases : ObjectWithFlags171 {
    static constexpr u32 COUNT = 0x32;
    static constexpr u8 ENABLED_BIT = FLAG_BIT_5;  // in flags_171

    u8 unknown_172[0x17d - 0x172];
    u8 pending[(COUNT + 7) / 8];

    void release(u32 index);
};
GUEST_OFFSET(PendingReleases, pending, 0x17d);

// Hands the flag to the manager, then clears it, when releases are on and the flag is set.
void PendingReleases::release(u32 index) {
    if ((flags_171 & ENABLED_BIT) == 0 || index >= COUNT) {
        return;
    }
    u8 mask = u8(1u << (index % 8));
    if ((pending[index / 8] & mask) == 0) {
        return;
    }
    release_flag(get_flag_manager(), index);
    pending[index / 8] = pending[index / 8] & ~mask;
}
GUEST_EXPORT(0x00316f9c, PendingReleases::release);
