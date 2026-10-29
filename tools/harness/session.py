#!/usr/bin/env python3
"""The harness without the API: for rewriting functions by hand (or in a Claude Code session) with the same
selection, checks and verification as harness.py.

    .venv/bin/python tools/harness/session.py next --groups 4     # writes build/acnl/session/next.md
    .venv/bin/python tools/harness/session.py check               # lint, compile, verify the unverified exports
    .venv/bin/python tools/harness/session.py skip 0x123456 why   # never select this function again
    .venv/bin/python tools/harness/session.py commit              # commit + push the verified functions

`next` lists groups of neighbouring functions with their annotated disassembly, callers, callees and the paths
of the rewritten files closest to them. `check` takes every exported function that is not verified yet, runs
the lint and the import checks on its file, compiles, runs the game once with shadow checks and fuzzing limited
to those functions, and records the verified ones (state shared with harness.py). Nothing is reverted: failing
files are reported for fixing. `commit` commits when the tree builds.
"""
import argparse
import os
import sys

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))

import harness as h  # noqa: E402
from program import Program  # noqa: E402

OUT = os.path.join(h.ROOT, 'build', h.GAME, 'session')


def related_paths(p, group, limit=6):
    scores = {}
    for k in group:
        f = p.funcs[k]
        near = set(p.callees(k)) | set(c for _, c in f.callers)
        for a, path in p.rewritten.items():
            if a in near:
                scores[path] = scores.get(path, 0) + 10
            elif abs((a & ~1) - f.start) < 0x2000:
                scores[path] = scores.get(path, 0) + 1
    return [path for path, _ in sorted(scores.items(), key=lambda kv: -kv[1])[:limit]]


def main_next(args):
    p = Program(h.GAME)
    state = h.State()
    if args.range or args.real:
        lo, hi = (int(x, 16) for x in args.range.split('-')) if args.range else (0, 1 << 32)
        h.GAME_RANGES = [(max(a, lo), min(b, hi)) for a, b in h.GAME_RANGES if a < hi and b > lo]
    if args.real:  # only functions the game calls directly: verified by real calls, not just fuzzing
        for k, f in p.funcs.items():
            if not f.callers:
                state.data['functions'].setdefault('%x' % k, {'status': 'new', 'attempts': 0})['status'] = 'skipped'
    groups = h.select_groups(p, state, args.groups, size=args.size, max_insts=args.max_insts)
    os.makedirs(OUT, exist_ok=True)
    parts = []
    for g in groups:
        rel = related_paths(p, g)
        parts.append('# Group %s\nrelated files: %s\n\n%s' % (
            ', '.join('0x%08x' % k for k in g), ', '.join(rel) or '(none)',
            '\n\n'.join(h.function_text(p, k) for k in g)))
    path = os.path.join(OUT, 'next.md')
    with open(path, 'w') as f:
        f.write('\n\n'.join(parts) + '\n')
    for g in groups:
        print(' '.join('%x' % k for k in g), '(%d insts)' % sum(p.funcs[k].ninsts for k in g))
    print(path, os.path.getsize(path), 'bytes')


def main_check(args):
    p = Program(h.GAME)
    state = h.State()
    todo = sorted(a for a in p.rewritten if args.all or state.data['functions'].get('%x' % a, {}).get('status') != 'verified')
    if args.only:
        todo = [a for a in todo if p.rewritten[a] in args.only]
    if not todo:
        print('nothing to check')
        return
    files = sorted(set(p.rewritten[a] for a in todo))
    print('checking %d functions in %d files' % (len(todo), len(files)))
    job = h.Job(todo, None, None)
    job.files = {path: open(os.path.join(h.ROOT, path)).read() for path in files}
    problems = [x for x in (h.check_imports(p, job), h.lint(job)) if x]
    for x in problems:
        print('LINT/IMPORTS:', x)
    ok, errs = h.compile_rewrites()
    if not ok:
        for path, e in errs.items():
            print('COMPILE %s:\n%s' % (path, e[:1500]))
        return
    ok, out = h.link()
    if not ok:
        print('LINK:', out[-2000:])
        return
    rows, mism, crashed, blamed, status = h.verify(todo, timeout=max(args.timeout, 2400) if args.deep else args.timeout,
                                                   deep=args.deep)
    print('run:', status, '(blamed %x)' % blamed if blamed else '')
    good = 0
    for a in todo:
        ok, why = h.verdict(rows.get(a))
        if ok and not crashed or ok and blamed and blamed != a:
            if args.all and state.data['functions'].get('%x' % a, {}).get('status') == 'verified':
                good += 1
                continue
            st = state.fn(a)
            if st.get('status') != 'verified':
                state.data['uncommitted'] += 1
            st['status'] = 'verified'
            good += 1
        else:
            print('FAIL %x %s (%s): %s' % (a, p.label(a), p.rewritten[a], why))
            for line in mism.get(a, [])[:args.lines]:
                print('   ', line[:300])
    for a, row in sorted(rows.items()):
        if a not in todo and row['mismatch']:
            print('REGRESSION %x %s (%s): %d mismatches' % (a, p.label(a), p.rewritten.get(a), row['mismatch']))
            for line in mism.get(a, [])[:args.lines]:
                print('   ', line[:300])
    state.save()
    total = sum(1 for v in state.data['functions'].values() if v['status'] == 'verified')
    print('verified %d/%d; %d uncommitted, %d verified in all' % (good, len(todo), state.data['uncommitted'], total))


def main_skip(args):
    state = h.State()
    st = state.fn(int(args.address, 16))
    st.update(status='skipped', why=' '.join(args.why))
    state.save()


def main_commit(args):
    h.commit_if_due(h.State(), force=True)


def main():
    ap = argparse.ArgumentParser()
    sub = ap.add_subparsers(dest='cmd', required=True)
    n = sub.add_parser('next')
    n.add_argument('--groups', type=int, default=4)
    n.add_argument('--size', type=int, default=6)
    n.add_argument('--max-insts', type=int, default=160)
    n.add_argument('--range', help='only functions in lo-hi (hex), to work through one area of the binary')
    n.add_argument('--real', action='store_true', help='only functions with direct callers')
    c = sub.add_parser('check')
    c.add_argument('only', nargs='*', help='only these files (paths from the repo root)')
    c.add_argument('--timeout', type=int, default=900)
    c.add_argument('--deep', action='store_true', help='run the long scripted session (to the town hall) before fuzzing: much more real calls, several minutes')
    c.add_argument('--all', action='store_true', help='check every rewritten function again (after library or header changes)')
    c.add_argument('--lines', type=int, default=8, help='mismatch lines shown per failing function')
    s = sub.add_parser('skip')
    s.add_argument('address')
    s.add_argument('why', nargs='+')
    sub.add_parser('commit')
    args = ap.parse_args()
    {'next': main_next, 'check': main_check, 'skip': main_skip, 'commit': main_commit}[args.cmd](args)


if __name__ == '__main__':
    main()
