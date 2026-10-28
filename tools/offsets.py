#!/usr/bin/env python3
"""Finds code that computes a given offset from a register: `add rX, rY, #a` (+ `add rX, rX, #b`...) chains and
load/store immediates, i.e. where a struct field is accessed.

    tools/offsets.py acnl 0x6b8c 0x6f08
"""
import os
import re
import sys
from collections import defaultdict

import capstone

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
from program import Program  # noqa: E402

IMM = re.compile(r'^(\w+), (\w+), #(-?0x[0-9a-f]+|-?\d+)$')
MEM = re.compile(r'^(\w+), \[(\w+), #(-?0x[0-9a-f]+|-?\d+)\]')


def scan(p, targets):
    hits = defaultdict(list)
    md = {False: capstone.Cs(capstone.CS_ARCH_ARM, capstone.CS_MODE_ARM),
          True: capstone.Cs(capstone.CS_ARCH_ARM, capstone.CS_MODE_THUMB)}
    for key, fn in p.funcs.items():
        partial = {}  # register -> (base register, offset so far)
        for a, size in fn.insts:
            seg = p.img.seg_of(a)
            ins = next(md[fn.thumb].disasm(seg.data[a - seg.addr:a - seg.addr + size], a), None)
            if ins is None:
                continue
            ops = ins.op_str
            if ins.mnemonic in ('add', 'adds'):
                m = IMM.match(ops)
                if m:
                    dst, src, imm = m.group(1), m.group(2), int(m.group(3), 0)
                    base, off = partial.get(src, (src, 0))
                    total = off + imm
                    partial[dst] = (base, total)
                    if total in targets:
                        hits[total].append((key, a, 'address'))
                    continue
            m = MEM.match(ops)
            if m and ins.mnemonic.startswith(('ldr', 'str')):
                base, off = partial.get(m.group(2), (m.group(2), 0))
                total = off + int(m.group(3), 0)
                if total in targets:
                    hits[total].append((key, a, ins.mnemonic))
            dst = ops.split(',')[0]
            partial.pop(dst, None)
    return hits


def main():
    p = Program(sys.argv[1])
    targets = set(int(t, 16) for t in sys.argv[2:])
    hits = scan(p, targets)
    for t in sorted(targets):
        fns = defaultdict(list)
        for key, a, how in hits[t]:
            fns[key].append('%x:%s' % (a, how))
        print('%#x: %d sites in %d functions' % (t, len(hits[t]), len(fns)))
        for key, sites in sorted(fns.items()):
            f = p.funcs[key]
            print('   %-40s %4d insts %4d callers  %s' % (p.label(key), f.ninsts, len(set(c for _, c in f.callers)),
                                                       ' '.join(sites[:4])))


if __name__ == '__main__':
    main()
