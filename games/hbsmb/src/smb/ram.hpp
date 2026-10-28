// Super Mario Bros.'s variables in NES RAM and the hardware registers it uses, named as in the game's well-known
// disassembly (doppelganger's smbdis.asm), so that its comments and the community's documentation apply.
#pragma once

#include "guest/guest.hpp"

namespace smb {

// hardware
constexpr u16 PPU_CTRL_REG1 = 0x2000;
constexpr u16 PPU_STATUS = 0x2002;
constexpr u16 PPU_SCROLL_REG = 0x2005;
constexpr u16 PPU_ADDRESS = 0x2006;
constexpr u16 PPU_DATA = 0x2007;
constexpr u16 JOYPAD_PORT = 0x4016;

// zero page: $00-$01 is a scratch pointer (the current VRAM update buffer in UpdateScreen)
constexpr u16 Temp0 = 0x00, Temp1 = 0x01;

constexpr u16 SavedJoypadBits = 0x06fc;  // [2], one per controller
constexpr u16 JoypadBitMask = 0x074a;    // [2]
constexpr u16 Mirror_PPU_CTRL_REG1 = 0x0778;
constexpr u16 TopScoreDisplay = 0x07d7;     // [6] BCD digits, most significant first
constexpr u16 PlayerScoreDisplay = 0x07dd;  // [6] Mario's, then [6] Luigi's at $07E3

}  // namespace smb
