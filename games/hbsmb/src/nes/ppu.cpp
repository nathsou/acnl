#include "nes/ppu.hpp"

#include "libc.hpp"
#include "nes/cpu.hpp"

namespace nes {

// Copies the cartridge's 8 KiB of tile graphics and clears the frame.
void ppu_init(gptr<const u8> chr) {
    libc::memcpy(chr_rom.ptr(), chr, sizeof(*chr_rom));
    libc::memset(frame_buffer.ptr(), 0, sizeof(*frame_buffer));
}
GUEST_EXPORT(0x00121898, ppu_init);

// The palette's entries $3F10/$3F14/$3F18/$3F1C are the same bytes as $3F00/$3F04/$3F08/$3F0C.
static bool is_palette_mirror(u16 address) { return (address & ~0xc) == 0x3f10; }

// PPU memory: pattern tables (CHR ROM), name tables, palette
u8 ppu_read(u16 address) {
    if (address < 0x2000) {
        return chr_rom[address];
    }
    if (address < 0x3f00) {
        return ppu->nametables[address - 0x2000];
    }
    if (is_palette_mirror(address)) {
        return ppu->palette[address - 0x3f10];
    }
    if (address < 0x4000) {
        return ppu->palette[address & 0x1f];
    }
    return 0;
}
GUEST_EXPORT(0x001218f0, ppu_read);

// (writes to the pattern tables, which are ROM, land in the palette)
void ppu_write(u16 address, u8 value) {
    if (u16(address - 0x2000) < 0x1f00) {
        ppu->nametables[address - 0x2000] = value;
    } else if (is_palette_mirror(address)) {
        ppu->palette[address - 0x3f10] = value;
    } else if (address < 0x4000) {
        ppu->palette[address & 0x1f] = value;
    }
}
GUEST_EXPORT(0x00121a18, ppu_write);

static void step_vram_address() { ppu->vram_address += (ppu->control & 4) ? 32 : 1; }

u8 ppu_read_register(u16 address) {
    switch (address) {
    case 0x2002: {  // PPUSTATUS: vblank and sprite 0 hit, every other read
        ppu->write_toggle = 0;
        ppu->vblank_toggle ^= 1;
        return ppu->vblank_toggle == 0 ? 0xc0 : 0;
    }
    case 0x2004:  // OAMDATA
        return ppu->oam[ppu->oam_address];
    case 0x2007: {  // PPUDATA
        u8 buffered = ppu->read_buffer;
        ppu->read_buffer = ppu_read(ppu->vram_address);
        step_vram_address();
        return buffered;
    }
    default:
        return 0;
    }
}
GUEST_EXPORT(0x00121968, ppu_read_register);

void ppu_write_register(u16 address, u8 value) {
    switch (address) {
    case 0x2000: ppu->control = value; break;
    case 0x2001: ppu->mask = value; break;
    case 0x2003: ppu->oam_address = value; break;
    case 0x2004: ppu->oam[ppu->oam_address++] = value; break;
    case 0x2005:  // PPUSCROLL: x, then y
        if (ppu->write_toggle == 0) {
            ppu->scroll_x = value;
        } else {
            ppu->scroll_y = value;
        }
        ppu->write_toggle = !ppu->write_toggle;
        break;
    case 0x2006:  // PPUADDR: high byte, then low byte
        if (ppu->write_toggle == 0) {
            ppu->vram_address = (ppu->vram_address & 0x00ff) | value << 8;
        } else {
            ppu->vram_address = (ppu->vram_address & 0xff00) | value;
        }
        ppu->write_toggle = !ppu->write_toggle;
        break;
    case 0x2007:
        ppu_write(ppu->vram_address, value);
        step_vram_address();
        break;
    }
}

// $4014: copies a page of CPU RAM to the sprite attributes. (Pages past the 2 KiB of RAM read whatever follows it.)
void oam_dma(u16 source) { libc::memcpy(guest::addr_of(ppu->oam[0]), guest::addr_of(cpu->ram[0]) + source, sizeof(ppu->oam)); }

}  // namespace nes
