// The CPU's view of the NES address space:
//   $0000-$1FFF  2 KiB of RAM, mirrored four times
//   $2000-$3FFF  the PPU's eight registers, mirrored
//   $4000-$4017  APU registers, OAM DMA ($4014), controller port 1 ($4016)
//   $8000-$FFFF  the cartridge's program ROM
#include "nes/apu.hpp"
#include "nes/cpu.hpp"
#include "nes/ppu.hpp"

namespace nes {

// Super Mario Bros.'s 32 KiB program ROM, built into the executable
inline guest::global<u8[0x8000], 0x0013a904> prg_rom;

// Reading $4016 shifts out the next button, A first; after the eighth the port reads 1.
static u8 read_controller() {
    u8 bit = cpu->controller_bit;
    if (bit > 7) return 1;
    u8 pressed = (cpu->controller1 & (1 << bit)) >> bit;
    if (!cpu->strobe) cpu->controller_bit = bit + 1;
    return pressed;
}

u8 read_byte(u16 address) {
    if (address < 0x2000) return cpu->ram[address & 0x7ff];
    if (address < 0x4000) return ppu_read_register(0x2000 + (address & 7));
    if (address == 0x4016) return read_controller();
    if (address & 0x8000) return prg_rom[address - 0x8000];
    return 0;  // open bus, APU status, expansion area: unused by the game
}
GUEST_EXPORT(0x001202b4, read_byte);

// Writing 1 then 0 to $4016 latches the buttons: reads start again from A.
static void write_controller_strobe(u8 value) {
    cpu->strobe = value & 1;
    if (cpu->strobe) cpu->controller_bit = 0;
}

void write_byte(u16 address, u8 value) {
    if (address < 0x2000) cpu->ram[address & 0x7ff] = value;
    else if (address < 0x4000) ppu_write_register(0x2000 + (address & 7), value);
    else if (address == 0x4014) oam_dma(value << 8);
    else if (address == 0x4016) write_controller_strobe(value);
    else if (address <= 0x401f) apu_write_register(address, value);
}
GUEST_EXPORT(0x00120360, write_byte);

u8 read_zero_page(u8 address) { return cpu->ram[address]; }
GUEST_EXPORT(0x001205cc, read_zero_page);

u8 read_zero_page_x(u8 address) { return cpu->ram[u8(address + cpu->x)]; }
GUEST_EXPORT(0x001205e0, read_zero_page_x);

// Unlike the X form, the index does not wrap around the zero page: the 6502 has no zero page,Y mode for most
// instructions, so `lda $xx,y` is really absolute,Y with a one-byte address.
u8 read_zero_page_y(u8 address) { return cpu->ram[address + cpu->y]; }
GUEST_EXPORT(0x001205fc, read_zero_page_y);

// (the same as read_byte: the compiler made a copy of it here)
u8 read_absolute(u16 address) { return read_byte(address); }
GUEST_EXPORT(0x00120618, read_absolute);

u8 read_absolute_x(u16 address) { return read_byte(address + cpu->x); }
GUEST_EXPORT(0x001206c4, read_absolute_x);

u8 read_absolute_y(u16 address) { return read_byte(address + cpu->y); }
GUEST_EXPORT(0x00120778, read_absolute_y);

// (zp),Y: a 16-bit pointer at `pointer`, plus Y
u8 read_indirect_y(u16 pointer) {
    u8 low = read_byte(pointer);
    u8 high = read_byte(pointer + 1);
    return read_byte((low | high << 8) + cpu->y);
}
GUEST_EXPORT(0x0012082c, read_indirect_y);

}  // namespace nes
