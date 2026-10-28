// The emulated NES CPU (a 6502) as the recompiled Super Mario Bros. code sees it: registers, the three flags the
// game's code needs, the first controller, and the 2 KiB of work RAM.
#pragma once

#include "guest/guest.hpp"

namespace nes {

struct Cpu {
    u8 controller1;        // buttons held: A B Select Start Up Down Left Right, bit 0 = A
    u8 a, x, y;
    u8 sp;                 // stack pointer (the stack is page 1 of RAM)
    u8 carry, zero, negative;
    u8 strobe;             // last bit 0 written to $4016: while 1, reads return the A button
    u8 controller_bit;     // next button a $4016 read returns
    u8 unused[2];
    u8 ram[0x800];
};
GUEST_OFFSET(Cpu, ram, 0xc);

inline guest::global<Cpu, 0x001891ec> cpu;

// Sets the zero and negative flags from a result, like most 6502 instructions do.
inline u8 set_nz(u8 value) {
    cpu->zero = value == 0;
    cpu->negative = value >> 7;
    return value;
}

void cpu_init();

// The CPU address space ($0000-$FFFF)
u8 read_byte(u16 address);
void write_byte(u16 address, u8 value);

// Operand reads in each 6502 addressing mode (the generated code calls them with the instruction's operand)
u8 read_zero_page(u8 address);
u8 read_zero_page_x(u8 address);
u8 read_zero_page_y(u8 address);
u8 read_absolute(u16 address);
u8 read_absolute_x(u16 address);
u8 read_absolute_y(u16 address);
u8 read_indirect_y(u16 pointer);

}  // namespace nes
