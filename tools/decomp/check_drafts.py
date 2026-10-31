#!/usr/bin/env python3
"""Checks decomp drafts with the harness and keeps the verified ones.

    check_drafts.py DRAFTS.cpp [--out games/acnl/src/decompiled] [--timeout 2400] [--rounds 6]

Splits the drafts into area files (split.py), runs `session.py check` on them, drops the functions that mismatch or
that a crash is blamed on, and runs again until a run has neither. Then rewrites the area files with only the verified
functions (the others, not reached or not fuzzed enough, are listed in build/acnl/decomp_unverified.txt).
"""
import argparse
import glob
import os
import re
import subprocess
import sys

ROOT = os.path.dirname(os.path.dirname(os.path.dirname(os.path.abspath(__file__))))
PY = os.path.join(ROOT, '.venv', 'bin', 'python')


def run(cmd, **kw):
    return subprocess.run(cmd, cwd=ROOT, capture_output=True, text=True, **kw)


def split(drafts, out, drop=None, keep=None):
    for f in glob.glob(os.path.join(out, 'area_*.cpp')):
        os.remove(f)
    cmd = [sys.executable, os.path.join(ROOT, 'tools/decomp/split.py'), drafts, out]
    if drop:
        cmd += ['--drop', drop]
    if keep:
        cmd += ['--keep', keep]
    r = run(cmd)
    print(r.stdout.strip(), flush=True)


def write(path, addrs):
    with open(path, 'w') as f:
        f.write(''.join('%x\n' % a for a in sorted(addrs)))


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument('drafts')
    ap.add_argument('--out', default='games/acnl/src/decompiled')
    ap.add_argument('--timeout', type=int, default=2400)
    ap.add_argument('--rounds', type=int, default=6)
    a = ap.parse_args()
    out = os.path.join(ROOT, a.out)
    work = os.path.join(ROOT, 'build', 'acnl')
    drop_path = os.path.join(work, 'decomp_dropped.txt')
    dropped = set()
    verified, unverified = set(), set()
    for rnd in range(a.rounds):
        write(drop_path, dropped)
        split(a.drafts, out, drop=drop_path)
        files = sorted(glob.glob(os.path.join(out, 'area_*.cpp')))
        rel = [os.path.relpath(f, ROOT) for f in files]
        r = run([PY, 'tools/harness/session.py', 'check'] + rel + ['--timeout', str(a.timeout), '--lines', '2'])
        log = r.stdout + r.stderr
        with open(os.path.join(work, 'decomp_check_round%d.log' % rnd), 'w') as f:
            f.write(log)
        if 'COMPILE' in log or 'LINK:' in log:
            print(log[-3000:])
            sys.exit('build failed')
        new = set()
        for m in re.finditer(r'^FAIL ([0-9a-f]+) .*?: (mismatch.*|crashed.*)$', log, re.M):
            new.add(int(m.group(1), 16) & ~1)
        m = re.search(r'\(blamed ([0-9a-f]+)\)', log)
        if m:
            new.add(int(m.group(1), 16) & ~1)
        fails = set(int(x, 16) & ~1 for x in re.findall(r'^FAIL ([0-9a-f]+) ', log, re.M))
        exported = set()
        for f in files:
            exported |= set(int(x, 16) & ~1 for x in re.findall(r'GUEST_EXPORT\((0x[0-9a-f]+)', open(f).read()))
        verified = exported - fails
        unverified = fails - new
        status = re.search(r'^run: .*$', log, re.M)
        print('round %d: %s; %d verified, %d dropped now, %d not verified' % (
            rnd, status.group(0)[:120] if status else '?', len(verified), len(new), len(unverified)), flush=True)
        if not new:
            break
        dropped |= new
    write(os.path.join(work, 'decomp_verified.txt'), verified)
    write(os.path.join(work, 'decomp_unverified.txt'), unverified)
    split(a.drafts, out, keep=os.path.join(work, 'decomp_verified.txt'))


if __name__ == '__main__':
    main()
