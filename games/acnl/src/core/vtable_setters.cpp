// Constructors and destructors of derived classes that run the base routine and then (or first) give the object their
// own vtable.
#include "guest/guest.hpp"

using guest::gptr;

namespace {

constexpr u32 WORD_FIX_33_VTABLE = 0x00909f18;
constexpr u32 WORD_FIX_38_VTABLE = 0x00909fc0;
constexpr u32 CAMERA_VTABLE = 0x00902b34;
constexpr u32 DYNAMIC_CYLINDER_VTABLE = 0x0090ab60;
constexpr u32 MOVE_BG_VTABLE = 0x0090ab70;
constexpr u32 FADER_MOMENT_VTABLE = 0x008ebb28;
constexpr u32 REMAKE_TEX_LOADER_VTABLE = 0x0090287c;
constexpr u32 FTR_RES_LOADER_VTABLE = 0x0090288c;

inline constexpr guest::Function<0x005664d8, gptr<u32>(gptr<u32> self, u32 byte_04, u32 initial_state)> construct_fader_base;
inline constexpr guest::Function<0x004ee514, gptr<u32>(gptr<u32> self)> set_base_vtable;
inline constexpr guest::Function<0x005371e0, gptr<u32>(gptr<u32> self)> construct_res_loader;
inline constexpr guest::Function<0x004ee594, gptr<u32>(gptr<u32> self)> construct_resource_loader;
inline constexpr guest::Function<0x002ffb64, void(gptr<void> memory)> free_memory;

inline guest::global<gptr<void>[2], 0x00957214> buffer_holder;
inline guest::global<u32, 0x00ab7de4> buffer_state;

gptr<u32> set_vtable(gptr<u32> self, u32 vtable) {
    *self = vtable;
    return self;
}

}  // namespace

gptr<u32> destroy_word_fix_33(gptr<u32> self) { return set_vtable(self, WORD_FIX_33_VTABLE); }
gptr<u32> destroy_word_fix_38(gptr<u32> self) { return set_vtable(self, WORD_FIX_38_VTABLE); }
gptr<u32> destroy_dynamic_cylinder(gptr<u32> self) { return set_vtable(self, DYNAMIC_CYLINDER_VTABLE); }
gptr<u32> destroy_move_bg(gptr<u32> self) { return set_vtable(self, MOVE_BG_VTABLE); }
GUEST_EXPORT(0x002fe884, destroy_word_fix_33);
GUEST_EXPORT(0x003050f4, destroy_word_fix_38);
GUEST_EXPORT(0x006145ac, destroy_dynamic_cylinder);
GUEST_EXPORT(0x006148ac, destroy_move_bg);

// The camera's own vtable is replaced at once by the base vtable.
gptr<u32> destroy_camera(gptr<u32> self) {
    *self = CAMERA_VTABLE;
    return set_base_vtable(self);
}
GUEST_EXPORT(0x004f21ec, destroy_camera);

gptr<u32> construct_fader_moment(gptr<u32> self, u32 byte_04, u32 initial_state) {
    gptr<u32> base = construct_fader_base(self, byte_04, initial_state);
    return set_vtable(base, FADER_MOMENT_VTABLE);
}
GUEST_EXPORT(0x001c8290, construct_fader_moment);

gptr<u32> construct_remake_tex_loader(gptr<u32> self) {
    return set_vtable(construct_res_loader(self), REMAKE_TEX_LOADER_VTABLE);
}
GUEST_EXPORT(0x004e332c, construct_remake_tex_loader);

gptr<u32> construct_ftr_res_loader(gptr<u32> self) {
    return set_vtable(construct_resource_loader(self), FTR_RES_LOADER_VTABLE);
}
GUEST_EXPORT(0x004ea478, construct_ftr_res_loader);

// Frees the held buffer (the second word of the holder) and forgets it; the state is cleared; always true.
bool free_held_buffer() {
    gptr<void> buffer = (*buffer_holder)[1];
    if (buffer != nullptr) {
        free_memory(buffer);
        (*buffer_holder)[1] = nullptr;
    }
    *buffer_state = 0;
    return true;
}
GUEST_EXPORT(0x00242158, free_held_buffer);
