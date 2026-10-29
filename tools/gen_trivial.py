#!/usr/bin/env python3
"""Writes games/acnl/src/core/trivial_functions.cpp: the not yet rewritten ARM functions of the game that only
do one of a few trivial things, found by their instruction pattern:

    bx lr                              -> does nothing
    mov r0, #N / ldr r0, [pc]; bx lr   -> returns a constant
    vldr s0, [pc]; bx lr               -> returns a float constant
    ldr r0, [pc]; ldr* r0, [r0, #O]    -> reads a global (the literal plus O is its address)
    ldr r1, [pc]; str r1, [r0]         -> stores a constant word (typically a vtable) in its object
    field reads, member addresses, constant stores, global byte stores and constant pair copies

Run it again after more rewrites: it only emits what is left (functions it exported before stay in the file).
"""
import os
import re
import struct
import sys

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
sys.path.insert(0, os.path.join(ROOT, 'tools'))
sys.path.insert(0, os.path.join(ROOT, 'tools', 'harness'))
import fn as fnmod  # noqa: E402
import harness as h  # noqa: E402
from program import Program  # noqa: E402

OUT = os.path.join(ROOT, 'games', 'acnl', 'src', 'core', 'trivial_functions.cpp')
THIS = 'games/acnl/src/core/trivial_functions.cpp'
NUM = r'(0x[0-9a-f]+|\d+)'

READERS = {'ldr': 'read_u32', 'ldrb': 'read_u8', 'ldrsb': 'read_s8', 'ldrh': 'read_u16', 'ldrsh': 'read_s16'}


def body_of(p, key):
    lines = [l for l in fnmod.disasm(p, key).split('\n') if not re.match(r'^L_[0-9a-f]+:', l)]
    notes = {}
    out = []
    for l in lines:
        m = re.match(r'^\s+([0-9a-f]{8})\s+(.*)$', l)
        text = m.group(2)
        out.append(' '.join(re.sub(r';.*$', '', text).split()))
    return '\n'.join(out)


def literal_at(p, key, index):
    """The value of the literal pool word the index-th instruction loads."""
    fn = p.funcs[key]
    insts = fn.insts
    addr = insts[index][0]
    return dict(fn.lits).get(addr)


def classify(p, key):
    fn = p.funcs[key]
    if fn.thumb or key >= 0x40000000:
        return None
    body = body_of(p, key)
    if body == 'bx lr':
        return ('nothing',)
    m = re.match(r'^mov r0, #%s\nbx lr$' % NUM, body)
    if m:
        return ('constant', int(m.group(1), 0))
    if body == 'ldr r0, [pc]\nbx lr' or re.match(r'^ldr r0, \[pc, #%s\]\nbx lr$' % NUM, body):
        value = literal_at(p, key, 0)
        return ('constant', value) if value is not None else None
    if body == 'vldr s0, [pc]\nbx lr' or re.match(r'^vldr s0, \[pc, #%s\]\nbx lr$' % NUM, body):
        addr = fn.insts[0][0] + 8 + (int(re.search(r'#(0x[0-9a-f]+|\d+)', body).group(1), 0) if '#' in body.split('\n')[0] else 0)
        seg = p.img.seg_of(addr)
        bits = struct.unpack('<I', seg.data[addr - seg.addr:addr - seg.addr + 4])[0]
        return ('float', bits)
    m = re.match(r'^ldr r0, \[pc(?:, #%s)?\]\n(ldr|ldrb|ldrsb|ldrh|ldrsh) r0, \[r0(?:, #%s)?\]\nbx lr$' % (NUM, NUM), body)
    if m:
        literal = literal_at(p, key, 0)
        if literal is None or p.relocated_data(literal):
            return None
        return ('global', m.group(2), literal + int(m.group(3) or '0', 0))
    m = re.match(r'^ldr r1, \[pc(?:, #%s)?\]\nstr r1, \[r0\]\nbx lr$' % NUM, body)
    if m:
        value = literal_at(p, key, 0)
        return ('store_word', value) if value is not None else None
    m = re.match(r'^(ldr|ldrb|ldrsb|ldrh|ldrsh) r0, \[r0(?:, #%s)?\]\nbx lr$' % NUM, body)
    if m:
        return ('field', m.group(1), int(m.group(2) or '0', 0))
    m = re.match(r'^add r0, r0, #%s\nbx lr$' % NUM, body)
    if m:
        return ('member_address', int(m.group(1), 0))
    m = re.match(r'^add r0, r0, #%s\nadd r0, r0, #%s\nbx lr$' % (NUM, NUM), body)
    if m:
        return ('member_address', int(m.group(1), 0) + int(m.group(2), 0))
    m = re.match(r'^add r0, r0, #%s\n(ldr|ldrb|ldrsb|ldrh|ldrsh) r0, \[r0(?:, #%s)?\]\nbx lr$' % (NUM, NUM), body)
    if m:
        return ('field', m.group(2), int(m.group(1), 0) + int(m.group(3) or '0', 0))
    m = re.match(r'^mov r1, #%s\n(strb|str) r1, \[r0(?:, #%s)?\]\nbx lr$' % (NUM, NUM), body)
    if m and int(m.group(1), 0) <= 0xff:
        return ('store_constant', m.group(2), int(m.group(3) or '0', 0), int(m.group(1), 0))
    m = re.match(r'^ldr r1, \[pc(?:, #%s)?\]\nmov r0, #%s\nstrb r0, \[r1(?:, #%s)?\]\nbx lr$' % (NUM, NUM, NUM), body)
    if m:
        literal = literal_at(p, key, 0)
        if literal is None or p.relocated_data(literal):
            return None
        return ('global_store_constant', literal + int(m.group(3) or '0', 0), int(m.group(2), 0))
    m = re.match(r'^ldr r1, \[pc(?:, #%s)?\]\nstrb r0, \[r1(?:, #%s)?\]\nbx lr$' % (NUM, NUM), body)
    if m:
        literal = literal_at(p, key, 0)
        if literal is None or p.relocated_data(literal):
            return None
        return ('global_store_byte', literal + int(m.group(2) or '0', 0))
    m = re.match(r'^ldr r1, \[r0, #%s\]\nadd r0, r0, r1\nbx lr$' % NUM, body)
    if m:
        return ('adjusted_this', int(m.group(1), 0))
    m = re.match(r'^ldr r2, \[pc(?:, #%s)?\]\nldr r0, \[pc(?:, #%s)?\]\nldm r2, \{r1, r2\}\nstm r0, \{r1, r2\}\nbx lr$' % (NUM, NUM), body)
    if m:
        source = literal_at(p, key, 0)
        dest = literal_at(p, key, 1)
        if source is None or dest is None or p.relocated_data(dest) or p.relocated_data(source):
            return None
        return ('copy_pair', source, dest)
    return None


def main():
    p = Program('acnl')
    state = h.State()
    found = []
    for key, f in sorted(p.funcs.items()):
        status = state.data['functions'].get('%x' % key, {}).get('status')
        if key in p.rewritten and p.rewritten[key] != THIS:
            continue
        if status == 'skipped' or not f.callers or f.ninsts > 6 or f.svcs or p.callees(key) or f.icalls:
            continue
        kind = classify(p, key)
        if kind:
            found.append((key, kind))
    out = ['''// Trivial functions: ones that do nothing, return a constant, read a global or store a constant word in their object.
// Generated by tools/gen_trivial.py from the instruction patterns; what the constants and globals stand for is not
// known yet (many are the virtual getters of small classes: the returned numbers are probably type identifiers).
#include <bit>

#include "guest/guest.hpp"

using guest::gptr;

namespace {

template <u32 Value>
u32 return_constant() {
    return Value;
}

template <u32 Bits>
float return_float_constant() {
    return std::bit_cast<float>(Bits);
}

template <u32 Address>
u32 read_u32() {
    return *guest::global<u32, Address>();
}

template <u32 Address>
u8 read_u8() {
    return *guest::global<u8, Address>();
}

template <u32 Address>
s8 read_s8() {
    return *guest::global<s8, Address>();
}

template <u32 Address>
u16 read_u16() {
    return *guest::global<u16, Address>();
}

template <u32 Address>
s16 read_s16() {
    return *guest::global<s16, Address>();
}

template <u32 Value>
void store_word(gptr<u32> object) {
    *object = Value;
}

// Offsets and constants travel in one template argument so that the export macros stay comma free.
constexpr u32 pack(u32 offset, u32 value) {
    return offset << 8 | value;
}

// A field of an object whose type is not known yet, read at a fixed offset (one access per function).
template <u32 Offset>
u32 read_field_u32(gptr<u8> object) {
    return *gptr<u32>(object.addr() + Offset);
}

template <u32 Offset>
u8 read_field_u8(gptr<u8> object) {
    return object[Offset];
}

template <u32 Offset>
s8 read_field_s8(gptr<u8> object) {
    return s8(object[Offset]);
}

template <u32 Offset>
u16 read_field_u16(gptr<u8> object) {
    return *gptr<u16>(object.addr() + Offset);
}

template <u32 Offset>
s16 read_field_s16(gptr<u8> object) {
    return *gptr<s16>(object.addr() + Offset);
}

// The address of a member that lies at a fixed offset inside the object.
template <u32 Offset>
gptr<u8> member_address(gptr<u8> object) {
    return gptr<u8>(object.addr() + Offset);
}

// The object's address moved by the word stored at the offset (adjusting this for a base class).
template <u32 Offset>
gptr<u8> adjusted_this(gptr<u8> object) {
    return gptr<u8>(object.addr() + *gptr<u32>(object.addr() + Offset));
}

// Stores a constant byte / word in the object (the argument packs the offset and the value).
template <u32 Packed>
void store_byte_constant(gptr<u8> object) {
    object[Packed >> 8] = u8(Packed);
}

template <u32 Packed>
void store_word_constant(gptr<u8> object) {
    *gptr<u32>(object.addr() + (Packed >> 8)) = Packed & 0xff;
}

// Writes a constant or an argument to a byte of the game's data.
inline void write_global_byte(gptr<u8> address, u32 value) {
    *address = u8(value);
}

// Copies two words from one place of the game's data to another (both are read first).
inline void copy_two_words(gptr<u32> destination, gptr<const u32> source) {
    u32 first = source[0];
    u32 second = source[1];
    destination[0] = first;
    destination[1] = second;
}

constexpr u32 FUZZ_RUNS = 10;
constexpr u32 FUZZ_OBJECT_SIZE = 16;
constexpr u32 FUZZ_FIELD_SLACK = 16;
constexpr u32 MAX_FUZZ_OBJECT = 0x2000;

void fuzz_field_object(guest::Fuzz &f, u32 size) {
    auto object = f.allocate(size).cast<u8>();
    f.bytes(object, size);
    f.arguments(object);
}

}  // namespace

// Does nothing.
void do_nothing() {}
''']
    for key, kind in found:
        t = kind[0]
        if t == 'nothing':
            out.append('GUEST_EXPORT(0x%08x, do_nothing);' % key)
            out.append('GUEST_FUZZ(0x%08x, FUZZ_RUNS, [](guest::Fuzz &f) { f.arguments(); });' % key)
        elif t == 'constant':
            out.append('GUEST_EXPORT(0x%08x, return_constant<0x%x>);' % (key, kind[1]))
            out.append('GUEST_FUZZ(0x%08x, FUZZ_RUNS, [](guest::Fuzz &f) { f.arguments(); });' % key)
        elif t == 'float':
            out.append('GUEST_EXPORT(0x%08x, return_float_constant<0x%08x>);' % (key, kind[1]))
            out.append('GUEST_FUZZ(0x%08x, FUZZ_RUNS, [](guest::Fuzz &f) { f.arguments(); });' % key)
        elif t == 'global':
            out.append('GUEST_EXPORT(0x%08x, %s<0x%08x>);' % (key, READERS[kind[1]], kind[2]))
            out.append('GUEST_FUZZ(0x%08x, FUZZ_RUNS, [](guest::Fuzz &f) { f.arguments(); });' % key)
        elif t == 'store_word':
            out.append('GUEST_EXPORT(0x%08x, store_word<0x%08x>);' % (key, kind[1]))
            out.append('GUEST_FUZZ(0x%08x, FUZZ_RUNS, [](guest::Fuzz &f) { f.arguments(f.allocate(FUZZ_OBJECT_SIZE)); });' % key)
        elif t == 'field':
            suffix = {'ldr': 'u32', 'ldrb': 'u8', 'ldrsb': 's8', 'ldrh': 'u16', 'ldrsh': 's16'}[kind[1]]
            out.append('GUEST_EXPORT(0x%08x, read_field_%s<0x%x>);' % (key, suffix, kind[2]))
            out.append('GUEST_FUZZ(0x%08x, FUZZ_RUNS, [](guest::Fuzz &f) { fuzz_field_object(f, 0x%x + FUZZ_FIELD_SLACK); });' % (key, kind[2]))
        elif t == 'member_address':
            out.append('GUEST_EXPORT(0x%08x, member_address<0x%x>);' % (key, kind[1]))
            out.append('GUEST_FUZZ(0x%08x, FUZZ_RUNS, [](guest::Fuzz &f) { fuzz_field_object(f, FUZZ_FIELD_SLACK); });' % key)
        elif t == 'adjusted_this':
            out.append('GUEST_EXPORT(0x%08x, adjusted_this<0x%x>);' % (key, kind[1]))
            out.append('GUEST_FUZZ(0x%08x, FUZZ_RUNS, [](guest::Fuzz &f) { fuzz_field_object(f, 0x%x + FUZZ_FIELD_SLACK); });' % (key, kind[1]))
        elif t == 'store_constant':
            template = 'store_byte_constant' if kind[1] == 'strb' else 'store_word_constant'
            out.append('GUEST_EXPORT(0x%08x, %s<pack(0x%x, 0x%x)>);' % (key, template, kind[2], kind[3]))
            out.append('GUEST_FUZZ(0x%08x, FUZZ_RUNS, [](guest::Fuzz &f) { fuzz_field_object(f, 0x%x + FUZZ_FIELD_SLACK); });' % (key, kind[2]))
        elif t == 'global_store_constant':
            name = 'set_byte_%x_to_%x' % (kind[1], kind[2])
            out.append('void %s() { write_global_byte(gptr<u8>(0x%08x), 0x%x); }' % (name, kind[1], kind[2]))
            out.append('GUEST_EXPORT(0x%08x, %s);' % (key, name))
            out.append('GUEST_FUZZ(0x%08x, FUZZ_RUNS, [](guest::Fuzz &f) { f.arguments(); });' % key)
        elif t == 'global_store_byte':
            name = 'set_byte_%x_%x' % (kind[1], key)
            out.append('void %s(u32 value) { write_global_byte(gptr<u8>(0x%08x), value); }' % (name, kind[1]))
            out.append('GUEST_EXPORT(0x%08x, %s);' % (key, name))
            out.append('GUEST_FUZZ(0x%08x, FUZZ_RUNS, [](guest::Fuzz &f) { f.arguments(f.number()); });' % key)
        elif t == 'copy_pair':
            name = 'copy_pair_%x_to_%x' % (kind[1], kind[2])
            out.append('void %s() { copy_two_words(gptr<u32>(0x%08x), gptr<const u32>(0x%08x)); }' % (name, kind[2], kind[1]))
            out.append('GUEST_EXPORT(0x%08x, %s);' % (key, name))
            out.append('GUEST_FUZZ(0x%08x, FUZZ_RUNS, [](guest::Fuzz &f) { f.arguments(); });' % key)
    with open(OUT, 'w') as f:
        f.write('\n'.join(out) + '\n')
    counts = {}
    for _, kind in found:
        counts[kind[0]] = counts.get(kind[0], 0) + 1
    print(len(found), 'functions ->', OUT, counts)


if __name__ == '__main__':
    main()
