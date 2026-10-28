// The emulated NES picture processing unit: its memory and the registers the CPU sees at $2000-$2007.
//
// This build of the game only keeps the PPU's state up to date; it never draws it (the frame renderer is not
// linked in), so the top screen shows a solid color.
#pragma once

#include "guest/guest.hpp"

namespace nes {

struct Ppu {
    u8 oam[0x100];         // sprite attributes, 64 sprites x 4 bytes
    u8 nametables[0x800];  // $2000-$27FF (writes past the end are not mirrored: they land in the fields below)
    u8 palette[0x20];      // $3F00-$3F1F
    u8 vblank_toggle;      // flips on every PPUSTATUS read: the game sees vblank every other read
    u8 write_toggle;       // the shared first/second write latch of PPUSCROLL and PPUADDR
    u8 oam_address;        // OAMADDR
    u8 read_buffer;        // PPUDATA reads return the previous read's byte
    u16 vram_address;      // PPUADDR
    u8 control;            // PPUCTRL; bit 2: PPUDATA steps by 32 (down a column) instead of 1
    u8 mask;               // PPUMASK
    u8 scroll_x, scroll_y; // PPUSCROLL
};
GUEST_OFFSET(Ppu, palette, 0x900);
GUEST_OFFSET(Ppu, vram_address, 0x924);
GUEST_OFFSET(Ppu, scroll_y, 0x929);

inline guest::global<Ppu, 0x001899f8> ppu;
inline guest::global<u8[0x2000], 0x001c632c> chr_rom;              // pattern tables, $0000-$1FFF
inline guest::global<u8[256 * 240 * 3], 0x00199324> frame_buffer;  // RGB, what the renderer would draw

void ppu_init(gptr<const u8> chr);
u8 ppu_read(u16 address);
void ppu_write(u16 address, u8 value);
u8 ppu_read_register(u16 address);
void ppu_write_register(u16 address, u8 value);
void oam_dma(u16 source);

}  // namespace nes
