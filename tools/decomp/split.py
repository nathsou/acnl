#!/usr/bin/env python3
"""Splits a file of decomp drafts (decomp emit-batch) into one file per 64 KiB address area.

    split.py DRAFTS.cpp OUTDIR [--drop ADDRESSES.txt] [--keep ADDRESSES.txt]

Each output file gets the drafts of its area, sorted by address, with the headers they need. --drop leaves out the
listed functions, --keep writes only the listed ones.
"""
import argparse
import os
import re

HEADER = '''// Functions decompiled by tools/decomp (docs/decomp.md): each is proved equal to the recompiled original. The names are generated (d_<address>::f_<address>, Object_<address>_<argument>, word_<offset>)
// and still to be chosen.
#include "guest/guest.hpp"
'''

DRAFT = re.compile(r'((?:#include "[^"]+"\n)*)(// f_([0-9a-f]{8}): decompiled.*?\nGUEST_EXPORT\(0x[0-9a-f]{8},[^\n]*\n)', re.S)


def exported(src, skip):
    """Addresses the sources outside `skip` already export (a draft of one would be a duplicate symbol)."""
    out = set()
    for d, _, files in os.walk(src):
        if os.path.abspath(d).startswith(os.path.abspath(skip)):
            continue
        for f in files:
            if f.endswith('.cpp'):
                out |= set(int(x, 16) & ~1 for x in re.findall(r'GUEST_EXPORT(?:_FRAMED)?\((0x[0-9a-fA-F]+)', open(os.path.join(d, f)).read()))
    return out


def addresses(path):
    return set(int(l.split()[0], 16) & ~1 for l in open(path) if l.strip())


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument('drafts')
    ap.add_argument('outdir')
    ap.add_argument('--drop')
    ap.add_argument('--keep')
    a = ap.parse_args()
    drop = addresses(a.drop) if a.drop else set()
    src = os.path.join(os.path.dirname(os.path.dirname(os.path.dirname(os.path.abspath(__file__)))), 'games', 'acnl', 'src')
    drop |= exported(src, a.outdir)
    keep = addresses(a.keep) if a.keep else None
    areas = {}
    for m in DRAFT.finditer(open(a.drafts).read()):
        addr = int(m.group(3), 16)
        if addr in drop or (keep is not None and addr not in keep):
            continue
        includes = set(re.findall(r'#include "([^"]+)"', m.group(1)))
        areas.setdefault(addr >> 16, []).append((addr, includes, m.group(2)))
    os.makedirs(a.outdir, exist_ok=True)
    total = 0
    for area, drafts in sorted(areas.items()):
        drafts.sort()
        includes = sorted(set().union(*(d[1] for d in drafts)))
        text = HEADER + ''.join('#include "%s"\n' % i for i in includes)
        text += '\n#include <bit>\n\nusing guest::gptr;\n\n' + '\n'.join(d[2] for d in drafts)
        with open(os.path.join(a.outdir, 'area_%04x.cpp' % area), 'w') as f:
            f.write(text)
        total += len(drafts)
    print('%d drafts in %d files' % (total, len(areas)))


if __name__ == '__main__':
    main()
