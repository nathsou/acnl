#!/usr/bin/env python3
"""Proves the hand-written functions kept as proved overrides: each source file of the game outside decompiled/ whose
header says "Proved equal to the original" (docs/decomp.md, "Proved overrides").

    prove_overrides.py [GAME]      (from the repository's root, with tools/decomp built: cargo build --release)

The proof uses the program-wide analyses the drafts are emitted with (DECOMP_TYPES, DECOMP_SIGNATURES, ...): the
defaults below are those files; set a variable to use another. Exits non-zero unless every function is proved.
"""
import glob
import os
import re
import subprocess
import sys

MARKER = 'Proved equal to the original'
DECOMP = 'tools/decomp/target/release/decomp'
ANALYSES = {
    'DECOMP_TYPES': 'build/{game}/types',
    'DECOMP_SIGNATURES': 'build/tools/sig_v4.txt',
    'DECOMP_RESULTS': 'build/{game}/decomp_results_v2.txt',
    'DECOMP_RETURNS': 'build/tools/returns.txt',
    'DECOMP_STACK_ARGS': 'build/tools/stack_args.txt',
    'DECOMP_TIMEOUT_MS': '120000',
}


def overrides(game):
    out = []
    for path in sorted(glob.glob('games/%s/src/**/*.cpp' % game, recursive=True)):
        if '/decompiled/' in path:
            continue
        # (the marker in the file's opening comment)
        head = []
        for line in open(path):
            if not line.startswith('//'):
                break
            head.append(line)
        if MARKER in ' '.join(l[2:].strip() for l in head):
            out.append(path)
    return out


def main():
    game = sys.argv[1] if len(sys.argv) > 1 else 'acnl'
    env = dict(os.environ)
    for k, v in ANALYSES.items():
        env.setdefault(k, v.format(game=game))
    failed = 0
    for path in overrides(game):
        r = subprocess.run([DECOMP, 'prove-cpp', path, '-', '2'], env=env, capture_output=True, text=True)
        lines = (r.stdout + r.stderr).strip().splitlines()
        m = next((re.match(r'(\d+) of (\d+) proved', l) for l in lines if re.match(r'\d+ of \d+ proved', l)), None)
        ok = m is not None and m.group(1) == m.group(2) and r.returncode == 0
        print('%s  %s' % ('proved' if ok else 'NOT PROVED', path))
        if not ok:
            failed += 1
            for l in lines[-8:]:
                print('    ' + l)
    sys.exit(1 if failed else 0)


if __name__ == '__main__':
    main()
