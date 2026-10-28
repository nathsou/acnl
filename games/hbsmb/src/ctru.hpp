// libctru, the homebrew library for the 3DS system services, called through the game's own copy.
#pragma once

#include "guest/guest.hpp"

namespace ctru {

enum Screen : u32 { GFX_TOP = 0, GFX_BOTTOM = 1 };
enum Side : u32 { GFX_LEFT = 0, GFX_RIGHT = 1 };
enum GspEvent : u32 { GSPGPU_EVENT_VBLANK0 = 2 };
enum Key : u32 { KEY_R = 1 << 8, KEY_L = 1 << 9 };

inline constexpr guest::Function<0x00122ea4, void()> gfxInitDefault;
inline constexpr guest::Function<0x00122eb4, void()> gfxExit;
inline constexpr guest::Function<0x00122dbc, void(Screen screen, bool enable)> gfxSetDoubleBuffering;
inline constexpr guest::Function<0x00122f68, gptr<u8>(Screen screen, Side side, gptr<u16> width, gptr<u16> height)>
    gfxGetFramebuffer;
inline constexpr guest::Function<0x00123008, void()> gfxFlushBuffers;
inline constexpr guest::Function<0x00123108, void()> gfxSwapBuffers;
inline constexpr guest::Function<0x00122a58, gptr<void>(Screen screen, gptr<void> console)> consoleInit;
inline constexpr guest::Function<0x00124708, bool()> aptMainLoop;
inline constexpr guest::Function<0x0012608c, void()> hidScanInput;
inline constexpr guest::Function<0x00126330, u32()> hidKeysDown;
inline constexpr guest::Function<0x00125a44, void(GspEvent event, bool next)> gspWaitForEvent;

inline void gspWaitForVBlank() { gspWaitForEvent(GSPGPU_EVENT_VBLANK0, true); }

}  // namespace ctru
