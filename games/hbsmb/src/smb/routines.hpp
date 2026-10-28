// Super Mario Bros.'s own code, recompiled from the NES program. Names are the routines' labels in the game's
// disassembly. Rewritten routines are declared here too; the rest is still recompiled code.
#pragma once

#include "guest/guest.hpp"

namespace smb {

inline constexpr guest::Function<0x00103694, void()> start;                   // reset: initializes the game
inline constexpr guest::Function<0x0011fbfc, void()> non_maskable_interrupt;  // vblank: runs one frame

void read_port_bits();   // X: the controller (0 or 1)
void update_screen();
void top_score_check();  // X: the player's last score digit, as an index from PlayerScoreDisplay - 6

}  // namespace smb
