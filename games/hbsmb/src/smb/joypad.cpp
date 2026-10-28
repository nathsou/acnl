#include "nes/instructions.hpp"
#include "smb/ram.hpp"
#include "smb/routines.hpp"

namespace smb {

using namespace nes;

// Reads the eight buttons of controller X (A, B, Select, Start, Up, Down, Left, Right, from bit 7 down) into
// SavedJoypadBits,X. Select and Start count once: while they stay held, they are hidden from SavedJoypadBits.
void read_port_bits() {
    ldy<immediate>(8);
    do {
        pha();
        lda<absolute_x>(JOYPAD_PORT);  // the next button, in bit 0
        sta(Temp0);
        lsr_a();
        ora<zero_page>(Temp0);
        lsr_a();                       // into the carry
        pla();
        rol_a();                       // and from the carry into A
        dey();
    } while (!cpu->zero);
    sta(SavedJoypadBits + cpu->x);

    pha();
    and_<immediate>(0b0011'0000);      // Select or Start...
    and_<absolute_x>(JoypadBitMask);   // ...already down last time?
    if (!cpu->zero) {
        pla();
        and_<immediate>(0b1100'1111);
        sta(SavedJoypadBits + cpu->x);
    } else {
        pla();
        sta(JoypadBitMask + cpu->x);
    }
}
GUEST_EXPORT(0x0010307c, read_port_bits);

}  // namespace smb
