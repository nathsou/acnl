// Small helpers of ModuleMiniGame0 and the escape minigame code.
#include "minigame0/minigame0_data.hpp"

using guest::gptr;

namespace {

// Still recompiled/rewritten code:
inline constexpr guest::Function<0x402fab08, u32(u32 index)> bit_for_index;

// An object with a word of flags at 0x7c (what it is is not known yet).
struct EscapeFlagsOwner {
    u8 unknown_00[0x7c];
    u32 flags_7c;

    bool has_flag(u32 index) const;
};
GUEST_OFFSET(EscapeFlagsOwner, flags_7c, 0x7c);

}  // namespace

// Whether the flag for an index (below 17) is set in flags_7c.
bool EscapeFlagsOwner::has_flag(u32 index) const {
    return (bit_for_index(index) & flags_7c) != 0;
}
GUEST_EXPORT(0x40302c20, EscapeFlagsOwner::has_flag);

// Stores a word in the minigame globals (meaning not known yet).
void set_minigame0_value_0c(u32 value) {
    minigame0_globals->value_0c = value;
}
GUEST_EXPORT(0x40303324, set_minigame0_value_0c);

// Copies the first five bytes of the table entry for an index to out.
void copy_tag_entry(u32 index, gptr<u8> out) {
    gptr<MiniGame0TagEntry> entry = minigame0_tag_table.ptr() + index;
    for (u32 i = 0; i < MiniGame0TagEntry::COPIED_SIZE; i++) {
        out[i] = entry->bytes[i];
    }
}
GUEST_EXPORT(0x40303554, copy_tag_entry);
