#include "nes/instructions.hpp"
#include "smb/ram.hpp"
#include "smb/routines.hpp"

namespace smb {

using namespace nes;

// Copies the VRAM update buffer that ($00) points to into the PPU, during vblank. The buffer is a list of
// updates, each: VRAM address (high, low), a control byte, data; a 0 ends the list. The control byte's bit 7
// writes a column (the PPU steps by 32) instead of a row, bit 6 repeats a single data byte, and bits 0-5 are
// the length.
void update_screen() {
    for (;;) {
        ldx<absolute>(PPU_STATUS);  // resets the PPU's address latch
        ldy<immediate>(0);
        lda<indirect_y>(Temp0);
        if (cpu->zero) {  // the end: reset the scroll to 0, 0 (InitScroll)
            sta(PPU_SCROLL_REG);
            sta(PPU_SCROLL_REG);
            return;
        }

        // WriteBufferToScreen
        sta(PPU_ADDRESS);
        iny();
        lda<indirect_y>(Temp0);
        sta(PPU_ADDRESS);
        iny();
        lda<indirect_y>(Temp0);  // the control byte
        asl_a();                 // bit 7 to the carry
        pha();
        lda<absolute>(Mirror_PPU_CTRL_REG1);
        ora<immediate>(0b0000'0100);  // the PPU steps by 32...
        if (!cpu->carry) {
            and_<immediate>(0b1111'1011);  // ...or by 1
        }
        sta(PPU_CTRL_REG1);  // (WritePPUReg1)
        sta(Mirror_PPU_CTRL_REG1);
        pla();
        asl_a();  // bit 6 to the carry
        if (cpu->carry) {
            ora<immediate>(0b0000'0010);  // remember "repeat" in bit 1 (the carry after the shifts below)
            iny();
        }
        lsr_a();
        lsr_a();
        tax();  // the length
        do {
            if (!cpu->carry) {
                iny();  // the next data byte, unless repeating
            }
            lda<indirect_y>(Temp0);
            sta(PPU_DATA);
            dex();
        } while (!cpu->zero);

        // ($00) += Y + 1: the next update
        sec();
        tya();
        adc<zero_page>(Temp0);
        sta(Temp0);
        lda<immediate>(0);
        adc<zero_page>(Temp1);
        sta(Temp1);

        // VRAM address $3F00, then $0000 (the game resets it twice)
        lda<immediate>(0x3f);
        sta(PPU_ADDRESS);
        lda<immediate>(0);
        sta(PPU_ADDRESS);
        sta(PPU_ADDRESS);
        sta(PPU_ADDRESS);
    }
}
GUEST_EXPORT(0x0010315c, update_screen);

}  // namespace smb
