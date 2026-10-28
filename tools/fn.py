#!/usr/bin/env python3
"""Shows a function for rewriting: annotated disassembly, callers, callees, strings.

    tools/fn.py hbsmb 0x00101234       (or a name from symbols.txt / a rewrite)
    tools/fn.py hbsmb main --no-asm    (only the summary)
"""
import argparse
import os
import re
import sys

import capstone

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
from program import Program  # noqa: E402

HEX = re.compile(r'#?0x([0-9a-f]+)')


def describe(p, v):
    """What a constant points at, if anything."""
    n = p.name(v)
    if n:
        return n
    if v in p.funcs or (v | 1) in p.funcs:
        return p.label(v if v in p.funcs else v | 1)
    s = p.cstring(v)
    if s:
        return '"%s"' % s.replace('\n', '\\n')
    seg = p.segment_name(v)
    if seg:
        return '%s:%08x' % (seg, v)
    return None


def disasm(p, key, own_only=False):
    fn = p.funcs[key]
    md = capstone.Cs(capstone.CS_ARCH_ARM, capstone.CS_MODE_THUMB if fn.thumb else capstone.CS_MODE_ARM)
    lits = dict(fn.lits)
    targets = set()
    for site, t in fn.calls + fn.tails:
        targets.add(t & ~1)
    out = []
    branch_targets = set()
    rows = []
    for ts in fn.jts.values():
        branch_targets.update(t & ~1 for t in ts)
    insts = fn.insts
    if own_only:
        # only the function's own body: code it shares with others (tail-merged blocks) is shown with them
        later = [k & ~1 for k in p.funcs if (k & ~1) > fn.start]
        limit = min(later) if later else fn.end
        insts = [(a, s) for a, s in insts if fn.start <= a < limit]
    for a, size in insts:
        seg = p.img.seg_of(a)
        code = seg.data[a - seg.addr:a - seg.addr + size]
        ins = next(md.disasm(code, a), None)
        if ins is None:
            rows.append((a, '.word', code.hex(), ''))
            continue
        text = ins.op_str
        note = []
        if a in lits:
            d = describe(p, lits[a])
            note.append('=%08x%s' % (lits[a], ' ' + d if d else ''))
        if ins.mnemonic.startswith('b') and not ins.mnemonic.startswith(('bic', 'bfc', 'bfi')):
            m = HEX.search(text)
            if m:
                t = int(m.group(1), 16)
                if (t in p.funcs or (t | 1) in p.funcs) and t != fn.start:
                    note.append(p.label(t if t in p.funcs else t | 1))
                else:
                    branch_targets.add(t)
                    text = HEX.sub('L_%x' % t, text, count=1)
        if a in fn.jts:
            ts = fn.jts[a]
            note.append('switch: ' + ' '.join('%d:L_%x' % (n, t & ~1) for n, t in enumerate(ts)))
        rows.append((a, ins.mnemonic, text, '; ' + ', '.join(note) if note else ''))
    for a, mn, text, note in rows:
        if a in branch_targets:
            out.append('L_%x:' % a)
        out.append('  %08x  %-8s %-34s %s' % (a, mn, text, note))
    return '\n'.join(out)


ARG_RE = re.compile(r'^(r[0-3])$')


def call_site_args(p, site, caller):
    """Constants in r0-r3 at a call site, from the instructions just before it (same function, no branch between)."""
    fn = p.funcs[caller]
    md = capstone.Cs(capstone.CS_ARCH_ARM, capstone.CS_MODE_THUMB if fn.thumb else capstone.CS_MODE_ARM)
    md.detail = True
    lits = dict(fn.lits)
    before = [(a, s) for a, s in fn.insts if a < site][-10:]
    known, dead = {}, set()
    for a, size in reversed(before):
        seg = p.img.seg_of(a)
        ins = next(md.disasm(seg.data[a - seg.addr:a - seg.addr + size], a), None)
        if ins is None or ins.mnemonic.startswith('b') and ins.mnemonic not in ('bic', 'bics'):
            break
        ops = ins.op_str.split(', ')
        dst = ops[0] if ops else ''
        if not ARG_RE.match(dst) or dst in known or dst in dead:
            continue
        if ins.mnemonic in ('mov', 'movs', 'mvn') and len(ops) == 2 and ops[1].startswith('#'):
            v = int(ops[1][1:], 0) & 0xffffffff
            known[dst] = (~v & 0xffffffff) if ins.mnemonic == 'mvn' else v
        elif ins.mnemonic == 'ldr' and a in lits:
            known[dst] = lits[a]
        else:
            dead.add(dst)
    return known


def print_args(p, key):
    from collections import Counter
    seen = {r: Counter() for r in ('r0', 'r1', 'r2', 'r3')}
    for site, caller in p.funcs[key].callers:
        for r, v in call_site_args(p, site, caller).items():
            seen[r][v] += 1
    for r, c in seen.items():
        if c:
            print('%s at call sites: %s' % (r, ', '.join('%#x%s' % (v, ' x%d' % n if n > 1 else '') for v, n in sorted(c.items())[:24])))


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument('game')
    ap.add_argument('function', nargs='+', help='address or name; with --range: first and last address')
    ap.add_argument('--no-asm', action='store_true')
    ap.add_argument('--range', action='store_true', help='every function in [first, last), own code only')
    ap.add_argument('--args', action='store_true', help='constant arguments at the call sites')
    args = ap.parse_args()
    p = Program(args.game)
    if args.range:
        lo, hi = int(args.function[0], 16), int(args.function[1], 16)
        for k in sorted(p.funcs, key=lambda k: k & ~1):
            if lo <= (k & ~1) < hi:
                f = p.funcs[k]
                callers = len(set(c for _, c in f.callers))
                print('\n%s  (%d callers)' % (p.label(k), callers))
                print(disasm(p, k, own_only=True))
        return
    for name in args.function:
        key = p.lookup(name)
        if args.args:
            print(p.label(key))
            print_args(p, key)
            continue
        show(p, key, args.no_asm)


def show(p, key, no_asm):
    fn = p.funcs[key]
    print('%s  (%s, %08x-%08x, %d instructions%s)' % (
        p.label(key), 'Thumb' if fn.thumb else 'ARM', fn.start, fn.end, fn.ninsts,
        ', rewritten in ' + p.rewritten[key] if key in p.rewritten else ''))
    if key in p.comments:
        print('  # ' + p.comments[key])
    callers = sorted(set(k for _, k in fn.callers))
    print('callers (%d): %s' % (len(callers), ', '.join(p.label(k) for k in callers[:20]) + (' ...' if len(callers) > 20 else '')))
    callees = p.callees(key)
    print('calls (%d): %s' % (len(callees), ', '.join(p.label(k) for k in callees)))
    if fn.icalls:
        print('indirect calls: %d' % fn.icalls)
    if fn.svcs:
        print('svc: %s' % ', '.join('0x%x' % s for s in fn.svcs))
    if fn.strings:
        print('strings: ' + '; '.join('"%s"' % s.replace('\n', '\\n') for _, _, s in fn.strings))
    if not no_asm:
        print(disasm(p, key))


if __name__ == '__main__':
    main()
