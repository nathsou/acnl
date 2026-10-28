#!/usr/bin/env python3
"""Builds a game: recompiled code from 3dsrecomp, with the functions rewritten in games/<game>/src replacing it.

    tools/build.py hbsmb            # build/hbsmb/hbsmb
    tools/build.py acnl --regen     # also re-run the recompiler

Steps:
1. Recompile the game's code to C with 3dsrecomp (build/<game>/generated; only when missing or with --regen).
2. Find the rewritten functions: every GUEST_EXPORT(<address>, <function>) in games/<game>/src.
3. Prepare build/<game>/gamecode, the code that gets compiled: a copy of the recompiled code in which each
   rewritten function's original is renamed guest_gen_<address> (kept as the reference for the shadow checker
   and for resuming inside it), and glue.c, where f_<address> (what the rest of the code calls) jumps to the
   rewrite. Unchanged files are hard links, so only files with rewritten functions get recompiled.
4. Configure and build with CMake + Ninja.
"""
import argparse
import json
import os
import re
import subprocess
import sys

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
EXPORT_RE = re.compile(r'\bGUEST_EXPORT\(\s*(0x[0-9a-fA-F]+)\s*,')
DEF_RE = re.compile(r'^void ([ft])_([0-9a-f]{8})\(CPU \*c, u32 entry\) \{$', re.M)
TABLE_RE = re.compile(r'^  \{(0x[0-9a-f]+)u, ([ft]_[0-9a-f]{8}), (\d+)\},$', re.M)


def game_config(game):
    path = os.path.join(ROOT, 'games', game, 'game.json')
    cfg = json.load(open(path))
    cfg['data'] = os.path.normpath(os.path.join(ROOT, cfg['data']))
    cfg['recomp'] = os.path.normpath(os.path.join(ROOT, cfg.get('recomp', '../3dsrecomp')))
    return cfg


def fname(key):
    return ('t_%08x' if key & 1 else 'f_%08x') % (key & ~1)


def regenerate(cfg, out):
    recomp = cfg['recomp']
    py = os.path.join(recomp, '.venv/bin/python')
    if not os.path.exists(py):
        py = sys.executable
    cmd = [py, '-m', 'tools.recomp.gen', cfg['data'], os.path.abspath(out)]
    tid = cfg.get('title_id')
    extra = os.path.join(recomp, 'games', tid, 'functions.txt') if tid else None
    if extra and os.path.exists(extra):
        cmd += ['--extra', extra]
    print('recompiling:', ' '.join(cmd))
    subprocess.check_call(cmd, cwd=recomp)


def find_exports(game):
    """{key: spelling of the address in the source}"""
    exports = {}
    src = os.path.join(ROOT, 'games', game, 'src')
    for dirpath, _, files in os.walk(src):
        for f in files:
            if not f.endswith(('.cpp', '.hpp', '.h')):
                continue
            path = os.path.join(dirpath, f)
            for m in EXPORT_RE.finditer(open(path).read()):
                key = int(m.group(1), 16)
                if key in exports and exports[key] != m.group(1):
                    sys.exit('%s: %s exported twice' % (path, m.group(1)))
                exports[key] = m.group(1)
    return exports


def write_if_changed(path, text):
    if os.path.exists(path) and not os.path.islink(path):
        with open(path) as f:
            if f.read() == text:
                return
        os.remove(path)
    elif os.path.lexists(path):
        os.remove(path)
    with open(path, 'w') as f:
        f.write(text)


def link(src, dst):
    if os.path.exists(dst) and os.path.samefile(src, dst):
        return
    replaced = os.path.lexists(dst)
    if replaced:
        os.remove(dst)
    os.link(src, dst)
    if replaced:
        os.utime(dst, None)  # (a patched copy was there: make the build system recompile it)


def prepare(generated, gamecode, exports):
    os.makedirs(gamecode, exist_ok=True)
    known = set(int(l, 16) for l in open(os.path.join(generated, 'funcs.txt')) if l.strip())
    missing = [hex(k) for k in exports if k not in known]
    if missing:
        sys.exit('GUEST_EXPORT of addresses the recompiler has no function at: %s' % ', '.join(missing))
    by_name = {fname(k): k for k in exports}
    wanted = set()
    for f in sorted(os.listdir(generated)):
        if not (f.endswith('.c') or f.endswith('.h')):
            continue
        src, dst = os.path.join(generated, f), os.path.join(gamecode, f)
        wanted.add(f)
        text = open(src).read()
        if f == 'table.c':
            # resume sites inside a rewritten function continue in its original
            def tab(m):
                name, k = m.group(2), int(m.group(3))
                if name in by_name and k != 0:
                    return '  {%su, guest_gen_%s, %d},' % (m.group(1), exports[by_name[name]], k)
                return m.group(0)
            new = TABLE_RE.sub(tab, text)
            decls = ''.join('void guest_gen_%s(CPU *c, u32 entry);\n' % exports[k] for k in sorted(exports))
            new = new.replace('#include "guest.h"\n', '#include "guest.h"\n' + decls, 1)
        else:
            def ren(m):
                name = m.group(1) + '_' + m.group(2)
                if name in by_name:
                    return 'void guest_gen_%s(CPU *c, u32 entry) {' % exports[by_name[name]]
                return m.group(0)
            new = DEF_RE.sub(ren, text)
        if new != text:
            write_if_changed(dst, new)
        else:
            link(src, dst)
    glue = ['// Generated by tools/build.py: calls to rewritten functions go to the rewrites (games/*/src).',
            '#include "guest.h"', '']
    for k in sorted(exports):
        a = exports[k]
        glue.append('void guest_entry_%s(CPU *c, u32 entry);' % a)
        glue.append('void %s(CPU *c, u32 entry) { __attribute__((musttail)) return guest_entry_%s(c, entry); }' % (fname(k), a))
    write_if_changed(os.path.join(gamecode, 'glue.c'), '\n'.join(glue) + '\n')
    wanted.add('glue.c')
    for f in os.listdir(gamecode):
        if f not in wanted:
            os.remove(os.path.join(gamecode, f))


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument('game')
    ap.add_argument('--regen', action='store_true', help='re-run the recompiler')
    ap.add_argument('--no-build', action='store_true')
    args = ap.parse_args()
    cfg = game_config(args.game)
    out = os.path.join(ROOT, 'build', args.game)
    generated = os.path.join(out, 'generated')
    if args.regen or not os.path.exists(os.path.join(generated, 'table.c')):
        regenerate(cfg, generated)
    exports = find_exports(args.game)
    prepare(generated, os.path.join(out, 'gamecode'), exports)
    print('%d rewritten functions' % len(exports))
    if args.no_build:
        return
    cmake_dir = os.path.join(out, 'cmake')
    if not os.path.exists(os.path.join(cmake_dir, 'build.ninja')):
        subprocess.check_call(['cmake', '-S', ROOT, '-B', cmake_dir, '-G', 'Ninja',
                               '-DCMAKE_C_COMPILER=clang', '-DCMAKE_CXX_COMPILER=clang++',
                               '-DGAME=' + args.game, '-DRECOMP_DIR=' + cfg['recomp'],
                               '-DGAME_TID=' + cfg.get('title_id', '*')])
    subprocess.check_call(['ninja', '-C', cmake_dir])
    exe = os.path.join(out, args.game)
    if os.path.lexists(exe):
        os.remove(exe)
    os.symlink(os.path.join('cmake', args.game), exe)


if __name__ == '__main__':
    main()
