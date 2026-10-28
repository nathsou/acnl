// State around BsCommonDialog, the game's common dialog.
#pragma once

#include "guest/guest.hpp"

// The global at 0x0094ee3c: the dialog currently open (BsCommonDialog::virtual_3 registers itself here).
struct DialogState {
    u8 notify;  // when set, opening a dialog sets state_94fd0c->mode to 2
    u8 unknown_01[3];
    u32 current_dialog;  // guest address of the open dialog
};
GUEST_OFFSET(DialogState, current_dialog, 4);
inline guest::global<DialogState, 0x0094ee3c> dialog_state;
