// Flag bits kept per index in a byte table of the scene object: the index is brought into the 0x200-0x3ff range
// when it is out of range, then a flag of its byte is set or cleared.
#include "guest/guest.hpp"

namespace {

constexpr u32 INDEX_LIMIT = 0x400;
constexpr u32 INDEX_MASK = 0x3ff;
constexpr u32 LOW_HALF_LIMIT = 0x200;
constexpr u32 TABLE_BYTES = 0x402;
constexpr u32 EXTRA_BYTE_INDEX = 0x401;
constexpr u8 FLAG_BIT_2 = 0x04;
constexpr u8 FLAG_BIT_0 = 0x01;

struct SceneFlags {
    u8 unknown_00000[0x1102c];
    u8 flags[TABLE_BYTES];
};
GUEST_OFFSET(SceneFlags, flags, 0x1102c);

// An index from 0x400 up is folded into 0..0x3ff, and the small ones among those move up by 0x200.
u32 flag_index(u32 raw) {
    u32 index = raw & INDEX_MASK;
    if (raw >= INDEX_LIMIT && index < LOW_HALF_LIMIT) {
        index += LOW_HALF_LIMIT;
    }
    return index;
}

}  // namespace

void clear_scene_flag_2(SceneFlags &scene, u32 raw) { scene.flags[flag_index(raw)] &= u8(~FLAG_BIT_2); }
void set_scene_flag_2(SceneFlags &scene, u32 raw) { scene.flags[flag_index(raw)] |= FLAG_BIT_2; }
void clear_scene_flag_0(SceneFlags &scene, u32 raw) { scene.flags[flag_index(raw)] &= u8(~FLAG_BIT_0); }
void set_scene_flag_0(SceneFlags &scene, u32 raw) { scene.flags[flag_index(raw)] |= FLAG_BIT_0; }
GUEST_EXPORT(0x00520584, clear_scene_flag_2);
GUEST_EXPORT(0x005205b8, set_scene_flag_2);
GUEST_EXPORT(0x00520a18, clear_scene_flag_0);
GUEST_EXPORT(0x00520a4c, set_scene_flag_0);

// Whether the byte after the table has all the bits of the mask.
bool extra_byte_has_bits(SceneFlags &scene, u32 mask) {
    return (mask & ~u32(scene.flags[EXTRA_BYTE_INDEX])) == 0;
}
GUEST_EXPORT(0x005205ec, extra_byte_has_bits);
