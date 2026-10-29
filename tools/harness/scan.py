#!/usr/bin/env python3
"""Finds the next functions to rewrite by hand, beyond what session.py next selects.

    scan.py closed LO HI [--min N]     functions of LO..HI instructions whose callees are all rewritten (by address area)
    scan.py dump START COUNT [MAX]     disassembly of the next COUNT closed functions from START (max MAX instructions)
    scan.py leafs MAX                  functions without callees of at most MAX instructions
    scan.py families                   leaf functions (<= 16 instructions) grouped by instruction pattern

`closed` and `leafs` write build/acnl/session/{closed,leafs}.txt, `dump` reads closed.txt.
"""
import bisect
import collections
import os
import re
import sys

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
sys.path.insert(0, os.path.join(os.path.dirname(os.path.abspath(__file__)), '..'))

import harness as h  # noqa: E402
import fn as fnmod  # noqa: E402
from program import Program  # noqa: E402

OUT = os.path.join(h.ROOT, 'build', h.GAME, 'session')
CRO_BASE = 0x40000000


def falls_into_function(p, key):
    """Whether an instruction of the function runs on into the entry of another function (a boundary the analysis found
    inside the code): the listing then stops short, and the rewrite has to include the rest."""
    an = p.analyzer()
    thumb = key & 1
    start = key & ~1
    for addr, size in p.funcs[key].insts:
        inst = an.decode(addr, thumb)
        if inst is not None and inst.falls_through:
            following = addr + size
            if following != start and (following | thumb) in p.funcs:
                return True
    return False


def has_foreign_code(p, key, starts):
    """Whether some instruction of the function lies beyond the next function's entry (blocks shared with others)."""
    start = key & ~1
    i = bisect.bisect_right(starts, start)
    if i >= len(starts):
        return False
    return any(addr >= starts[i] for addr, _ in p.funcs[key].insts)


def candidates(p, state):
    """Functions the game calls that are neither rewritten, verified nor skipped."""
    starts = sorted(set(k & ~1 for k in p.funcs))
    for k, f in sorted(p.funcs.items(), key=lambda kv: kv[0] & ~1):
        a = k & ~1
        if k in p.rewritten or not f.callers or f.svcs or f.icalls:
            continue
        if state.data['functions'].get('%x' % k, {}).get('status') in ('verified', 'skipped'):
            continue
        if not any(lo <= a < hi for lo, hi in h.GAME_RANGES) or a >= CRO_BASE:
            continue
        if falls_into_function(p, k) or has_foreign_code(p, k, starts):
            continue
        yield k, f


def save(name, rows):
    os.makedirs(OUT, exist_ok=True)
    with open(os.path.join(OUT, name), 'w') as out:
        out.write('\n'.join('%x %d %d' % r for r in rows))


def histogram(rows):
    for area, n in sorted(collections.Counter(a >> 16 for a, _, _ in rows).items()):
        print('%x %d' % (area << 16, n))


def main_closed(p, state, args):
    lo, hi = int(args[0]), int(args[1])
    rows = []
    for k, f in candidates(p, state):
        callees = p.callees(k)
        if lo <= f.ninsts <= hi and callees and all(c in p.rewritten for c in callees):
            rows.append((k & ~1, f.ninsts, len(set(c for _, c in f.callers))))
    print(len(rows))
    histogram(rows)
    save('closed.txt', rows)


def main_leafs(p, state, args):
    rows = [(k & ~1, f.ninsts, len(f.callers)) for k, f in candidates(p, state)
            if f.ninsts <= int(args[0]) and not p.callees(k)]
    print(len(rows))
    histogram(rows)
    save('leafs.txt', rows)


def main_dump(p, state, args):
    start, count = int(args[0], 16), int(args[1])
    longest = int(args[2]) if len(args) > 2 else 40
    with open(os.path.join(OUT, 'closed.txt')) as f:
        rows = [tuple(int(x, 16) if i == 0 else int(x) for i, x in enumerate(line.split())) for line in f]
    for a, ninsts, ncallers in [r for r in rows if r[0] >= start and r[1] <= longest][:count]:
        key = next(k for k in (a, a | 1) if k in p.funcs)
        print('## %x %s  (%d insts, %d callers)  calls: %s' % (
            key, p.label(key), ninsts, ncallers, ', '.join(p.label(c) for c in p.callees(key))))
        print(re.sub(r'^\s+[0-9a-f]{8}\s+', '', fnmod.disasm(p, key, own_only=True), flags=re.M))


def main_families(p, state, args):
    families = collections.defaultdict(list)
    for k, f in candidates(p, state):
        if f.ninsts > 16 or p.callees(k):
            continue
        lines = [l for l in fnmod.disasm(p, k).split('\n') if not re.match(r'^L_[0-9a-f]+:', l)]
        body = '\n'.join(' '.join(re.sub(r';.*$', '', re.sub(r'^\s+[0-9a-f]{8}\s+', '', l)).split()) for l in lines)
        body = re.sub(r'^b L_[0-9a-f]+\n', '', body)
        if body.startswith(('ldr pc', 'mov r0, r0', 'add ip, pc')):
            continue
        shape = re.sub(r'L_[0-9a-f]+', 'L', re.sub(r'#?-?0x[0-9a-f]+|#-?\d+', 'N', body))
        families[shape].append(k & ~1)
    ranked = sorted(families.items(), key=lambda kv: -len(kv[1]))
    print(sum(len(v) for v in families.values()), len(ranked))
    for shape, members in ranked[:40]:
        print(len(members), repr(shape[:200]))


def main():
    if len(sys.argv) < 2 or sys.argv[1] not in ('closed', 'dump', 'leafs', 'families'):
        sys.exit(__doc__)
    p = Program(h.GAME)
    {'closed': main_closed, 'dump': main_dump, 'leafs': main_leafs, 'families': main_families}[sys.argv[1]](
        p, h.State(), sys.argv[2:])


if __name__ == '__main__':
    main()
