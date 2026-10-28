#!/usr/bin/env python3
"""C++ run-time type information: class names, base classes and virtual function tables (ARM C++ ABI, which
RVCT follows: the Itanium layout).

    tools/rtti.py acnl                 # writes build/acnl/rtti.json, prints a summary
    tools/rtti.py acnl --class Player  # classes whose name contains "Player", with their vtables

Layout:
  typeinfo name     "N6script10MailInsertE" (a mangled type, without the _ZTS prefix)
  typeinfo object   [vptr of the typeinfo class, name] + for __si_class_type_info: [base typeinfo]
                    + for __vmi_class_type_info: [flags, base count, (base typeinfo, offset << 8 | flags)...]
  vtable            [offset to top, typeinfo object, virtual function 0, 1, ...]; objects point at function 0
"""
import argparse
import json
import os
import re
import struct
import subprocess
import sys

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
from program import Program, ROOT  # noqa: E402

NAME_CHARS = re.compile(rb'[A-Za-z0-9_]')


def parse_source_name(b, i):
    """<length><identifier> at b[i:], returns end index or None."""
    j = i
    while j < len(b) and 48 <= b[j] <= 57:
        j += 1
    if j == i or (b[i] == 48 and j > i + 1):
        return None
    n = int(b[i:j])
    if n == 0 or j + n > len(b):
        return None
    ident = b[j:j + n]
    if not all(NAME_CHARS.match(bytes([c])) for c in ident) or ident[:1].isdigit():
        return None
    return j + n


def looks_mangled(s):
    """A plausible mangled class type: <name>, N<name>...E, optionally with templates (accepted loosely)."""
    b = s.encode()
    if b[:1] == b'N':
        if not b.endswith(b'E'):
            return False
        end = parse_source_name(b, 1)
        return end is not None
    end = parse_source_name(b, 0)
    return end == len(b) or (end is not None and b[end:end + 1] == b'I' and b.endswith(b'E'))


def demangle(names):
    tool = '/opt/homebrew/opt/llvm/bin/llvm-cxxfilt'
    if not os.path.exists(tool):
        tool = 'c++filt'
    out = subprocess.run([tool], input='\n'.join('_ZTS' + n for n in names), capture_output=True, text=True).stdout
    res = {}
    for n, d in zip(names, out.split('\n')):
        res[n] = d.replace('typeinfo name for ', '') if d.startswith('typeinfo name for ') else n
    return res


def extract(p):
    img = p.img
    data_segs = [s for s in img.segments if s not in img.texts]
    words = {}  # value -> [addresses] over data and rodata
    for s in data_segs:
        d = s.data
        for o in range(0, len(d) - 3, 4):
            v = struct.unpack_from('<I', d, o)[0]
            words.setdefault(v, []).append(s.addr + o)
    # 1. typeinfo names: NUL-terminated mangled strings that some word points at
    names = {}
    for v in words:
        s = p.cstring(v, minlen=2)
        if s and looks_mangled(s) and (img.read32(v - 1) is None or img.seg_of(v - 1).data[v - 1 - img.seg_of(v - 1).addr] == 0):
            names[v] = s
    # 2. typeinfo objects: [vptr, name]
    tinfos = {}
    for name_addr, s in names.items():
        for ref in words.get(name_addr, []):
            obj = ref - 4
            vptr = img.read32(obj)
            if vptr is None or img.seg_of(vptr) is None:
                continue
            tinfos[obj] = {'name': s, 'vptr': vptr}
    # the three typeinfo classes, by their vptr: no bases (most common for roots), one base, several
    by_vptr = {}
    for obj, t in tinfos.items():
        by_vptr.setdefault(t['vptr'], []).append(obj)
    for obj, t in tinfos.items():
        nxt = img.read32(obj + 8)
        if nxt in tinfos:
            t['kind'] = 'single'
            t['bases'] = [{'typeinfo': nxt, 'offset': 0}]
    # vmi: a vptr whose objects have [flags, count, (base, offset_flags)...] after the name
    for vptr, objs in by_vptr.items():
        if any(tinfos[o].get('kind') == 'single' for o in objs):
            continue
        vmi = 0
        for o in objs:
            cnt = img.read32(o + 12)
            if cnt and cnt < 16 and all(img.read32(o + 16 + 8 * i) in tinfos for i in range(cnt)):
                vmi += 1
        if vmi > len(objs) // 2:
            for o in objs:
                cnt = img.read32(o + 12) or 0
                bases = []
                for i in range(min(cnt, 16)):
                    b = img.read32(o + 16 + 8 * i)
                    if b in tinfos:
                        bases.append({'typeinfo': b, 'offset': (img.read32(o + 20 + 8 * i) or 0) >> 8})
                tinfos[o]['kind'] = 'multiple'
                tinfos[o]['bases'] = bases
    for t in tinfos.values():
        t.setdefault('kind', 'root')
        t.setdefault('bases', [])
    # 3. vtables: [offset to top, typeinfo, functions...]
    code = set(p.funcs) | set(k & ~1 for k in p.funcs)
    for obj, t in tinfos.items():
        t['vtables'] = []
        for ref in words.get(obj, []):
            top = img.read32(ref - 4)
            if top is None or (top != 0 and top < 0xfff00000):
                continue  # a base reference inside another typeinfo, not a vtable
            fns = []
            a = ref + 4
            while True:
                v = img.read32(a)
                if v is None or (v not in code and v != 0):
                    break
                if v == 0 and fns and img.read32(a + 4) in tinfos:
                    break  # the next vtable's offset-to-top
                fns.append(v)
                a += 4
                if img.read32(a + 4) in tinfos and img.read32(a) in (0,) or (img.read32(a) or 0) >= 0xfff00000:
                    if img.read32(a + 4) in tinfos:
                        break
            if fns:
                t['vtables'].append({'address': ref + 4, 'offset_to_top': top - (1 << 32) if top >= 0x80000000 else top,
                                     'functions': fns})
    dem = demangle(sorted(set(t['name'] for t in tinfos.values())))
    for t in tinfos.values():
        t['class'] = dem[t['name']]
    return tinfos


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument('game')
    ap.add_argument('--class', dest='cls')
    args = ap.parse_args()
    p = Program(args.game)
    path = os.path.join(ROOT, 'build', args.game, 'rtti.json')
    if os.path.exists(path) and os.path.getmtime(path) > os.path.getmtime(os.path.join(p.generated, 'funcs.txt')):
        tinfos = {int(k): v for k, v in json.load(open(path)).items()}
    else:
        tinfos = extract(p)
        json.dump({str(k): v for k, v in tinfos.items()}, open(path, 'w'), indent=1)
    if args.cls:
        for obj, t in sorted(tinfos.items(), key=lambda kv: kv[1]['class']):
            if args.cls.lower() in t['class'].lower():
                bases = ', '.join(tinfos[b['typeinfo']]['class'] + ('@%#x' % b['offset'] if b['offset'] else '')
                                  for b in t['bases'] if b['typeinfo'] in tinfos)
                print('%s  (typeinfo %08x%s)' % (t['class'], obj, ', bases: ' + bases if bases else ''))
                for vt in t['vtables']:
                    print('  vtable %08x (offset %d): %s' % (vt['address'], vt['offset_to_top'],
                                                            ' '.join('%x' % f for f in vt['functions'])))
        return
    kinds = {}
    for t in tinfos.values():
        kinds[t['kind']] = kinds.get(t['kind'], 0) + 1
    nv = sum(len(t['vtables']) for t in tinfos.values())
    nf = len(set(f for t in tinfos.values() for vt in t['vtables'] for f in vt['functions']))
    print('%d classes (%s), %d vtables, %d distinct virtual functions' % (
        len(tinfos), ', '.join('%s %d' % kv for kv in sorted(kinds.items())), nv, nf))


if __name__ == '__main__':
    main()
