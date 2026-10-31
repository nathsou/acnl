#include "ui/bs_common_dialog.hpp"

// The address of the dialog currently open.
u32 current_dialog() {
    return dialog_state->current_dialog;
}
GUEST_EXPORT(0x00251374, current_dialog);
