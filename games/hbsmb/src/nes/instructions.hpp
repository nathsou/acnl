// The 6502 instructions the recompiled game code calls: one function per instruction and addressing mode
// (lda<absolute_x>(0x0778) is `LDA $0778,X`), for the generated game code (instructions.cpp) and rewritten
// game code alike. Stores, branches, jumps and the stack pointer transfers are
// written inline in the game code instead.
//
// The emulated CPU keeps only the carry, zero and negative flags: the game never reads overflow or decimal.
#pragma once

#include "nes/cpu.hpp"

namespace nes {

// ---- operands

using Operand = u8 (*)(u16);

inline u8 immediate(u16 value) { return value; }
inline u8 zero_page(u16 address) { return read_zero_page(address); }
inline u8 zero_page_x(u16 address) { return read_zero_page_x(address); }
inline u8 zero_page_y(u16 address) { return read_zero_page_y(address); }
inline u8 absolute(u16 address) { return read_absolute(address); }
inline u8 absolute_x(u16 address) { return read_absolute_x(address); }
inline u8 absolute_y(u16 address) { return read_absolute_y(address); }
inline u8 indirect_y(u16 pointer) { return read_indirect_y(pointer); }

// Read-modify-write instructions work on a memory address instead.
using Target = u16 (*)(u16);

inline u16 at(u16 address) { return address; }  // zero page or absolute
inline u16 at_x(u16 address) { return address + cpu->x; }  // zero page,X here does not wrap around the page

// ---- loads, transfers

template <Operand operand> void lda(u16 op) { cpu->a = set_nz(operand(op)); }
template <Operand operand> void ldx(u16 op) { cpu->x = set_nz(operand(op)); }
template <Operand operand> void ldy(u16 op) { cpu->y = set_nz(operand(op)); }

inline void tax() { cpu->x = set_nz(cpu->a); }
inline void tay() { cpu->y = set_nz(cpu->a); }
inline void txa() { cpu->a = set_nz(cpu->x); }
inline void tya() { cpu->a = set_nz(cpu->y); }

// ---- arithmetic and logic

template <Operand operand> void adc(u16 op) {
    u16 sum = cpu->a + cpu->carry + operand(op);
    cpu->carry = sum > 0xff;
    cpu->a = set_nz(u8(sum));
}
template <Operand operand> void sbc(u16 op) {
    u16 difference = cpu->a - (cpu->carry ^ 1) - operand(op);
    cpu->carry = difference <= 0xff;  // no borrow
    cpu->a = set_nz(u8(difference));
}

template <Operand operand> void and_(u16 op) { cpu->a = set_nz(cpu->a & operand(op)); }
template <Operand operand> void ora(u16 op) { cpu->a = set_nz(cpu->a | operand(op)); }
template <Operand operand> void eor(u16 op) { cpu->a = set_nz(cpu->a ^ operand(op)); }

// BIT: zero from A & M, negative from bit 7 of M; A is unchanged
template <Operand operand> void bit(u16 op) {
    u8 value = operand(op);
    cpu->zero = (value & cpu->a) == 0;
    cpu->negative = value >> 7;
}

// CMP, CPX, CPY: carry when the register is >= the operand
inline void compare(u8 reg, u8 value) {
    cpu->carry = reg >= value;
    set_nz(reg - value);
}
template <Operand operand> void cmp(u16 op) { compare(cpu->a, operand(op)); }
template <Operand operand> void cpx(u16 op) { compare(cpu->x, operand(op)); }
template <Operand operand> void cpy(u16 op) { compare(cpu->y, operand(op)); }

// ---- increments, decrements

inline void inx() { cpu->x = set_nz(cpu->x + 1); }
inline void iny() { cpu->y = set_nz(cpu->y + 1); }
inline void dex() { cpu->x = set_nz(cpu->x - 1); }
inline void dey() { cpu->y = set_nz(cpu->y - 1); }

template <Target target> void inc(u16 op) {
    u16 address = target(op);
    u8 value = read_byte(address) + 1;
    write_byte(address, value);
    set_nz(value);
}
template <Target target> void dec(u16 op) {
    u16 address = target(op);
    u8 value = read_byte(address) - 1;
    write_byte(address, value);
    set_nz(value);
}

// ---- shifts and rotations (the accumulator forms, then memory)

inline void asl_a() {
    cpu->carry = cpu->a >> 7;
    cpu->a = set_nz(cpu->a << 1);
}
inline void lsr_a() {
    cpu->carry = cpu->a & 1;
    cpu->a = set_nz(cpu->a >> 1);
}
inline void rol_a() {
    u8 a = cpu->a;
    cpu->a = set_nz(a << 1 | cpu->carry);
    cpu->carry = a >> 7;
}
inline void ror_a() {
    u8 a = cpu->a;
    cpu->a = set_nz(a >> 1 | (cpu->carry ? 0x80 : 0));
    cpu->carry = a & 1;
}

inline void asl(u16 address) {
    u8 value = read_byte(address);
    u8 result = value << 1;
    cpu->carry = value >> 7;
    write_byte(address, result);
    set_nz(result);
}
inline void lsr(u16 address) {
    u8 value = read_byte(address);
    u8 result = value >> 1;
    cpu->carry = value & 1;
    write_byte(address, result);
    set_nz(result);
}
inline void rol(u16 address) {
    u8 value = read_byte(address);
    u8 result = value << 1 | cpu->carry;
    cpu->carry = value >> 7;
    write_byte(address, result);
    set_nz(result);
}

// ROR absolute,X. The result goes back to the address without X, a bug in this build of the instruction helpers,
// kept as it is.
inline void ror_absolute_x(u16 address) {
    u8 value = read_absolute_x(address);
    u8 result = cpu->carry << 7 | value >> 1;
    cpu->carry = value & 1;
    write_byte(address, result);
    set_nz(result);
}

// ---- stack, flags

inline void pha() {
    write_byte(0x100 | cpu->sp, cpu->a);
    cpu->sp--;
}
inline void pla() {
    cpu->sp++;
    cpu->a = set_nz(read_byte(0x100 | cpu->sp));
}

// Stores and flag instructions, which the generated code writes inline
inline void sta(u16 address) { write_byte(address, cpu->a); }
inline void stx(u16 address) { write_byte(address, cpu->x); }
inline void sty(u16 address) { write_byte(address, cpu->y); }
inline void sec() { cpu->carry = 1; }
inline void clc() { cpu->carry = 0; }

// Interrupts and decimal mode do not exist here.
inline void sei() {}
inline void cld() {}

}  // namespace nes
