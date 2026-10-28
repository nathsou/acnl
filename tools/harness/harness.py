#!/usr/bin/env python3
"""Rewrites recompiled functions with Claude, verifies them with the shadow checker, commits the ones that pass.

    .venv/bin/python tools/harness/harness.py run --rounds 10 --batches 24 --model claude-sonnet-5-5
    .venv/bin/python tools/harness/harness.py bench --models claude-haiku-5-5,claude-sonnet-5-5 --batches 6

A round: pick groups of neighbouring, not-yet-rewritten game functions (bottom-up: functions whose callees are
already named first), ask the model for each group in parallel, apply the answers, compile (a group whose files
do not compile gets one repair turn with the errors), run the game once with shadow checks and fuzzing limited to
the new functions, keep the groups whose functions all verify, send the others back once with the checker's
findings (on the escalation model), and commit + push every 100 verified functions.

State: build/acnl/harness/state.json (per function: status, attempts) and a log of every exchange in
build/acnl/harness/log/. API key: ANTHROPIC_API_KEY from .env.
"""
import argparse
import asyncio
import hashlib
import json
import os
import re
import shutil
import subprocess
import sys
import time

ROOT = os.path.dirname(os.path.dirname(os.path.dirname(os.path.abspath(__file__))))
sys.path.insert(0, os.path.join(ROOT, 'tools'))

import anthropic  # noqa: E402
from dotenv import load_dotenv  # noqa: E402

import fn as fntool  # noqa: E402
from program import Program  # noqa: E402

GAME = 'acnl'
SRC = os.path.join(ROOT, 'games', GAME, 'src')
HDIR = os.path.join(ROOT, 'build', GAME, 'harness')
CMAKE = os.path.join(ROOT, 'build', GAME, 'cmake')

# the game's own code (from the RTTI library map, docs/acnl.md); the rest is the SDK, NintendoWare and sead
GAME_RANGES = [(0x100000, 0x140000), (0x180000, 0x340000), (0x4e0000, 0x540000), (0x550000, 0x720000),
               (0x740000, 0x780000), (0x7c0000, 0x7d0000), (0x7f0000, 0x830000), (0x40000000, 0x48000000)]

PRICES = {  # $ per million tokens: input, output, cache read, cache write (5 min)
    'claude-haiku-5-5': (0.10, 0.50, 0.01, 0.125),
    'claude-sonnet-5-5': (2.0, 10.0, 0.20, 2.5),
    'claude-opus-5-5': (4.0, 20.0, 0.20, 5.0),
}

PASS_CHECKS, PASS_FUZZED = 10, 50  # verified: no mismatch and this many real calls checked, or fuzzed inputs


def log(*a):
    print(time.strftime('%H:%M:%S'), *a, flush=True)


# ---------------------------------------------------------------- state

class State:
    def __init__(self):
        os.makedirs(os.path.join(HDIR, 'log'), exist_ok=True)
        self.path = os.path.join(HDIR, 'state.json')
        self.data = json.load(open(self.path)) if os.path.exists(self.path) else {'functions': {}, 'cost': 0.0,
                                                                                    'uncommitted': 0}

    def fn(self, key):
        return self.data['functions'].setdefault('%x' % key, {'status': 'new', 'attempts': 0})

    def save(self):
        tmp = self.path + '.tmp'
        json.dump(self.data, open(tmp, 'w'), indent=1)
        os.replace(tmp, self.path)


# ---------------------------------------------------------------- selection

def in_game(a):
    return any(lo <= a < hi for lo, hi in GAME_RANGES)


def select_groups(p, state, count, size=6, max_insts=160):
    """Groups of neighbouring candidate functions, best first."""
    done = set(p.rewritten)
    cands = []
    for k, f in p.funcs.items():
        st = state.data['functions'].get('%x' % k, {})
        if k in done or st.get('status') in ('verified', 'skipped', 'failed') or not in_game(f.start):
            continue
        if f.svcs or not (3 <= f.ninsts <= max_insts) or f.jump_tables > 2:
            continue
        callees = p.callees(k)
        unnamed = sum(1 for c in callees if not p.name(c))
        callers = len(set(c for _, c in f.callers))
        if callers == 0 and not p.name(k):
            continue  # unreachable (or only through tables we cannot see): poor verification
        # bottom-up: unnamed callees cost the most; widely used functions first; small ones first
        score = unnamed * 100 - min(callers, 50) * 3 + f.ninsts / 10
        cands.append((score, k))
    cands.sort()
    taken, groups = set(), []
    by_addr = sorted(k for _, k in cands)
    pos = {k: i for i, k in enumerate(by_addr)}
    for _, k in cands:
        if k in taken:
            continue
        # grow a group around k with candidates nearby in the binary (same source file, usually)
        i = pos[k]
        group = [k]
        for j in list(range(i + 1, min(i + 12, len(by_addr)))) + list(range(i - 1, max(i - 12, -1), -1)):
            n = by_addr[j]
            if n in taken or n in group or abs((n & ~1) - (k & ~1)) > 0x1000:
                continue
            if sum(p.funcs[g].ninsts for g in group) + p.funcs[n].ninsts > 400:
                continue
            group.append(n)
            if len(group) >= size:
                break
        taken.update(group)
        groups.append(sorted(group))
        if len(groups) >= count:
            break
    return groups


# ---------------------------------------------------------------- context

def call_site_args_text(p, key):
    from collections import Counter
    seen = {r: Counter() for r in ('r0', 'r1', 'r2', 'r3')}
    for site, caller in p.funcs[key].callers[:200]:
        for r, v in fntool.call_site_args(p, site, caller).items():
            seen[r][v] += 1
    out = []
    for r, c in seen.items():
        if c:
            out.append('%s at call sites: %s' % (r, ', '.join('%#x%s' % (v, ' x%d' % n if n > 1 else '')
                                                         for v, n in sorted(c.items())[:16])))
    return out


def function_text(p, key):
    f = p.funcs[key]
    lines = ['## %s  (%s, %08x-%08x, %d instructions)' % (
        p.label(key), 'Thumb, export at the odd address 0x%08x' % key if f.thumb else 'ARM', f.start, f.end,
        f.ninsts)]
    callers = sorted(set(c for _, c in f.callers))
    lines.append('callers (%d): %s' % (len(callers), ', '.join(p.label(c) for c in callers[:12]) +
                                        (' ...' if len(callers) > 12 else '')))
    callees = p.callees(key)
    if callees:
        lines.append('calls: ' + ', '.join(
            p.label(c) + (' [rewritten, %s]' % p.rewritten[c] if c in p.rewritten else
                          ' [declared in %s]' % p.imported[c] if c in p.imported else '') for c in callees))
    if f.icalls:
        lines.append('indirect calls: %d' % f.icalls)
    lines += call_site_args_text(p, key)
    lines.append('```')
    lines.append(fntool.disasm(p, key))
    lines.append('```')
    return '\n'.join(lines)


def headers_text():
    parts = []
    for dirpath, _, files in os.walk(SRC):
        for name in sorted(files):
            if name.endswith('.hpp'):
                path = os.path.join(dirpath, name)
                rel = os.path.relpath(path, ROOT)
                parts.append('<file path="%s">\n%s</file>' % (rel, open(path).read()))
    return '\n\n'.join(parts)


def file_hashes():
    h = {}
    for dirpath, _, files in os.walk(SRC):
        for name in files:
            path = os.path.join(dirpath, name)
            h[os.path.relpath(path, ROOT)] = hashlib.sha1(open(path, 'rb').read()).hexdigest()
    return h


def system_prompt():
    tpl = open(os.path.join(ROOT, 'tools', 'harness', 'system_prompt.md')).read()
    inc = os.path.join(ROOT, 'guest', 'include', 'guest')
    examples = []
    for rel in ('core/encrypted_int.hpp', 'core/encrypted_int.cpp', 'save/pockets.hpp', 'save/pockets.cpp'):
        examples.append('<file path="games/acnl/src/%s">\n%s</file>' % (rel, open(os.path.join(SRC, rel)).read()))
    return (tpl.replace('{{memory.hpp}}', open(os.path.join(inc, 'memory.hpp')).read())
               .replace('{{abi.hpp}}', open(os.path.join(inc, 'abi.hpp')).read())
               .replace('{{examples}}', '\n\n'.join(examples)))


def user_prompt(p, group):
    names = ', '.join('0x%08x' % k for k in group)
    return ('Rewrite these functions: %s.\n\n# Existing headers (the project so far)\n\n%s\n\n'
            '# The functions\n\n%s\n') % (names, headers_text(), '\n\n'.join(function_text(p, k) for k in group))


# ---------------------------------------------------------------- model calls

class Client:
    def __init__(self):
        load_dotenv(os.path.join(ROOT, '.env'))
        self.client = anthropic.AsyncAnthropic(max_retries=6, timeout=900)
        self.system = system_prompt()
        self.sem = asyncio.Semaphore(int(os.environ.get('HARNESS_CONCURRENCY', '16')))

    async def ask(self, model, messages, effort):
        kw = {}
        if model in ('claude-sonnet-5-5', 'claude-opus-5-5'):
            kw = dict(betas=['server-side-fallback-2026-07-01'], fallbacks='default')
        async with self.sem:
            async with self.client.beta.messages.stream(
                    model=model, max_tokens=64000,
                    system=[{'type': 'text', 'text': self.system, 'cache_control': {'type': 'ephemeral'}}],
                    thinking={'type': 'adaptive'}, output_config={'effort': effort},
                    messages=messages, **kw) as stream:
                msg = await stream.get_final_message()
        u = msg.usage
        pin, pout, pcr, pcw = PRICES.get(msg.model, PRICES.get(model))
        cost = (u.input_tokens * pin + u.output_tokens * pout + (u.cache_read_input_tokens or 0) * pcr +
                (u.cache_creation_input_tokens or 0) * pcw) / 1e6
        text = ''.join(b.text for b in msg.content if b.type == 'text')
        return text, cost, msg.stop_reason, {'in': u.input_tokens, 'out': u.output_tokens,
                                             'cache_read': u.cache_read_input_tokens,
                                             'cache_write': u.cache_creation_input_tokens}


FILE_RE = re.compile(r'<file path="([^"]+)">\n?(.*?)</file>', re.S)
SKIP_RE = re.compile(r'<skip address="(0x[0-9a-fA-F]+)">(.*?)</skip>', re.S)


def parse_answer(text):
    files = {path.strip(): body for path, body in FILE_RE.findall(text)}
    skips = {int(a, 16): why.strip() for a, why in SKIP_RE.findall(text)}
    return files, skips


# ---------------------------------------------------------------- integration

EXPORT_RE = re.compile(r'\bGUEST_EXPORT\(\s*(0x[0-9a-fA-F]+)\s*,')
FUZZ_RE = re.compile(r'\bGUEST_FUZZ\(\s*(0x[0-9a-fA-F]+)\s*,')


class Job:
    """One group of functions through generation, repair and verification."""

    def __init__(self, group, model, effort):
        self.group, self.model, self.effort = group, model, effort
        self.messages = []
        self.files, self.skips = {}, {}
        self.cost = 0.0
        self.backup = {}       # path -> previous content (None: new file)
        self.hashes = {}       # path -> hash when the prompt was made
        self.problem = None
        self.id = '%x' % group[0]

    def exports(self):
        found = set()
        for body in self.files.values():
            found.update(int(a, 16) for a in EXPORT_RE.findall(body))
        return found


def check_answer(job):
    """Structural checks before touching the tree. Returns an error message or None."""
    if not job.files:
        return 'no <file> blocks in the answer'
    for path in job.files:
        if not path.startswith('games/%s/src/' % GAME) or not path.endswith(('.cpp', '.hpp')) or '..' in path:
            return 'file path not allowed: %s' % path
        full = os.path.join(ROOT, path)
        if os.path.exists(full) and path.endswith('.cpp'):
            return 'existing .cpp files cannot be replaced (%s): put the code in a new file' % path
    exports = job.exports()
    want = set(job.group)
    extra = exports - want
    if extra:
        return 'exported functions you were not asked for: %s' % ', '.join('0x%08x' % a for a in sorted(extra))
    missing = want - exports - set(job.skips)
    if missing:
        return 'functions neither exported nor skipped: %s' % ', '.join('0x%08x' % a for a in sorted(missing))
    fuzzed = set()
    for body in job.files.values():
        fuzzed.update(int(a, 16) for a in FUZZ_RE.findall(body))
    if exports - fuzzed:
        return 'exported functions without GUEST_FUZZ: %s' % ', '.join('0x%08x' % a for a in sorted(exports - fuzzed))
    return None


def apply(job, current):
    """Writes the job's files if the headers it replaces have not changed since its prompt."""
    for path in job.files:
        if path in current and path in job.hashes and current[path] != job.hashes[path]:
            return 'conflict: %s changed since the prompt' % path
    for path, body in job.files.items():
        full = os.path.join(ROOT, path)
        job.backup[path] = open(full).read() if os.path.exists(full) else None
        os.makedirs(os.path.dirname(full), exist_ok=True)
        with open(full, 'w') as f:
            f.write(body if body.endswith('\n') else body + '\n')
    return None


def revert(job):
    for path, old in job.backup.items():
        full = os.path.join(ROOT, path)
        if old is None:
            if os.path.exists(full):
                os.remove(full)
        else:
            with open(full, 'w') as f:
                f.write(old)
    job.backup = {}


def run(cmd, timeout=1800, **kw):
    r = subprocess.run(cmd, capture_output=True, text=True, timeout=timeout, **kw)
    return r.returncode, r.stdout + r.stderr


def compile_rewrites():
    """Compiles the rewritten sources only. Returns (ok, {path: errors})."""
    rc, out = run([sys.executable, os.path.join(ROOT, 'tools', 'build.py'), GAME, '--no-build'])
    if rc != 0:
        return False, {'(build.py)': out[-3000:]}
    rc, out = run(['ninja', '-C', CMAKE, '-k', '0', 'rewrite'])
    if rc == 0:
        return True, {}
    errs = {}
    # each error, with the files of its notes ("in instantiation ... requested here"): blame every file involved
    blocks = re.split(r'\n(?=/[^:\n]+\.(?:cpp|hpp):\d+:\d+: (?:error|fatal error):)', out)
    for block in blocks:
        m = re.match(r'(/[^:\n]+\.(?:cpp|hpp)):\d+:\d+: (?:error|fatal error):.*', block)
        if not m:
            continue
        text = m.group(0).replace(ROOT + '/', '')
        notes = re.findall(r'^(/[^:\n]+\.(?:cpp|hpp)):\d+:\d+: note: .*$', block, re.M)
        for path in set([m.group(1)] + notes):
            errs.setdefault(os.path.relpath(path, ROOT), []).append(text)
    if not errs:
        errs['(unknown)'] = [out[-3000:]]
    return False, {k: '\n'.join(v[:20]) for k, v in errs.items()}


def link():
    rc, out = run([sys.executable, os.path.join(ROOT, 'tools', 'build.py'), GAME])
    return rc == 0, out[-4000:]


TEST_INPUT = ','.join('%d:A:6' % f for f in range(600, 4000, 90))


def verify(addresses, timeout=900):
    """One game run with shadow checks, fuzzing only `addresses`. Returns (summary rows, mismatch text, blamed)."""
    env_args = ['--env', 'GUEST_FUZZ=1', '--env', 'GUEST_FUZZ_FRAME=3600', '--env', 'GUEST_FUZZ_MIN=200',
                '--env', 'GUEST_FUZZ_EXIT=1',
                '--env', 'GUEST_FUZZ_ONLY=' + ','.join('%x' % a for a in addresses)]
    name = 'harness'
    cmd = [sys.executable, os.path.join(ROOT, 'tools', 'run.py'), GAME, '--name', name, '--frames', '40000',
           '--input', TEST_INPUT, '--shadow', '--timeout', str(timeout)] + env_args
    rc, out = run(cmd, timeout=timeout + 120)
    rundir = os.path.join(ROOT, 'build', GAME, 'runs', name)
    rows = {}
    summ = os.path.join(rundir, 'guest_shadow_summary.txt')
    if os.path.exists(summ):
        for line in open(summ).read().splitlines()[1:]:
            parts = line.split()
            if len(parts) >= 7:
                rows[int(parts[0], 16)] = {'calls': int(parts[-8]), 'checked': int(parts[-7]),
                                           'fuzzed': int(parts[-6]), 'unchecked': int(parts[-5]),
                                           'mismatch': int(parts[-4])}
    mism = {}
    logp = os.path.join(rundir, 'guest_shadow.log')
    if os.path.exists(logp):
        cur = None
        for line in open(logp).read().splitlines():
            m = re.match(r'MISMATCH .*?\((0x)?([0-9a-f]{8})\)', line)
            if m:
                cur = int(m.group(2), 16)
                mism.setdefault(cur, []).append(line)
            elif line.startswith('    ') and cur is not None:
                mism[cur].append(line)
    blamed = None
    prog = os.path.join(rundir, 'guest_fuzz_progress.txt')
    status_line = out.strip().splitlines()[0] if out.strip() else ''
    crashed = not status_line.startswith('exit 0')
    if crashed and os.path.exists(prog):
        first = open(prog).read().split()
        if first and first[0] != 'done':
            blamed = int(first[0], 16)
    return rows, mism, crashed, blamed, status_line


def verdict(row):
    if row is None:
        return False, 'never called and not fuzzed'
    if row['mismatch']:
        return False, 'mismatch'
    real = row['checked'] - row['fuzzed']
    if real >= PASS_CHECKS or row['fuzzed'] >= PASS_FUZZED:
        return True, 'ok (%d real checks, %d fuzzed)' % (real, row['fuzzed'])
    return False, 'not enough checks (%d real, %d fuzzed, %d unchecked)' % (real, row['fuzzed'], row['unchecked'])


# ---------------------------------------------------------------- the loop

async def generate(client, p, job, feedback=None):
    if not job.messages:
        job.hashes = file_hashes()
        job.messages = [{'role': 'user', 'content': user_prompt(p, job.group)}]
    elif feedback:
        job.messages.append({'role': 'user', 'content': feedback})
    try:
        text, cost, stop, usage = await client.ask(job.model, job.messages, job.effort)
    except anthropic.APIError as e:
        job.problem = 'API error: %s' % e
        return job
    job.cost += cost
    job.messages.append({'role': 'assistant', 'content': text or '(empty)'})
    with open(os.path.join(HDIR, 'log', '%s-%s-%d.json' % (job.id, job.model.split('-')[1], len(job.messages) // 2)),
              'w') as f:
        json.dump({'model': job.model, 'effort': job.effort, 'usage': usage, 'cost': cost, 'stop': stop,
                   'prompt': job.messages[-2]['content'] if len(job.messages) <= 2 else feedback,
                   'answer': text}, f, indent=1)
    if stop == 'refusal':
        job.problem = 'refused'
        return job
    job.files, job.skips = parse_answer(text)
    job.problem = check_answer(job)
    return job


def commit_if_due(state, force=False):
    if state.data['uncommitted'] < 100 and not (force and state.data['uncommitted']):
        return
    n = sum(1 for v in state.data['functions'].values() if v['status'] == 'verified')
    msg = 'ACNL: %d more functions rewritten by the harness (%d in all)' % (state.data['uncommitted'], n)
    run(['git', 'add', '-A', 'games', 'tools', 'docs', 'guest'], cwd=ROOT)
    rc, out = run(['git', 'commit', '-q', '-m', msg + '\n\nCo-Authored-By: Claude Opus 5.5 <noreply@anthropic.com>'],
                  cwd=ROOT)
    if rc == 0:
        rc2, out2 = run(['git', 'push', '-q', 'origin', 'main'], cwd=ROOT)
        log('committed: %s%s' % (msg, '' if rc2 == 0 else ' (push failed: %s)' % out2[-200:]))
        state.data['uncommitted'] = 0
        state.save()


async def round_(client, state, jobs, escalate):
    """Generates, applies, compiles and verifies jobs; returns the jobs that need another attempt."""
    p = Program(GAME)
    await asyncio.gather(*[generate(client, p, j) for j in jobs if not j.files and not j.problem])
    for j in jobs:
        state.data['cost'] += j.cost
        j.cost = 0.0
    # 1. structure, then apply
    current = file_hashes()
    live = []
    for j in jobs:
        if not j.problem:
            j.problem = apply(j, current)
        if j.problem:
            log('job %s: %s' % (j.id, j.problem))
            continue
        current = file_hashes()
        live.append(j)
    # 2. compile; a job whose files fail is reverted and asked once to repair
    ok, errs = compile_rewrites()
    if not ok:
        bad = [j for j in live if any(path in errs for path in j.files)]
        if not bad:  # an error elsewhere (e.g. a shared header): find the culprits by compiling each job alone
            for j in live:
                revert(j)
            for j in live:
                apply(j, file_hashes())
                okj, errj = compile_rewrites()
                revert(j)
                if not okj:
                    bad.append(j)
                    errs.update({path: v for path, v in errj.items()})
                    for path in j.files:
                        errs.setdefault(path, '\n'.join(errj.values())[:2000])
            for j in live:
                if j not in bad:
                    apply(j, file_hashes())
        for j in bad:
            revert(j)
            j.problem = 'compile errors:\n' + '\n'.join(errs.get(path, '') for path in j.files if path in errs)
            live.remove(j)
        ok, errs2 = compile_rewrites()
        if not ok:  # still failing: give up on everything this round
            for j in live:
                revert(j)
                j.problem = 'compile errors (shared): ' + json.dumps(errs2)[:2000]
            live = []
    # 3. verify everything that compiled, in one run
    retry = [j for j in jobs if j.problem]
    if live:
        built, out = link()
        if not built:
            for j in live:
                revert(j)
                j.problem = 'link failed: ' + out[-1500:]
            return jobs
        addrs = sorted(a for j in live for a in j.exports())
        for attempt in range(4):
            rows, mism, crashed, blamed, status = verify(addrs)
            if not crashed:
                break
            log('run failed (%s), blamed %s' % (status, '%x' % blamed if blamed else 'nothing'))
            if blamed is None:
                break
            addrs = [a for a in addrs if a != blamed]
            for j in live:
                if blamed in j.exports():
                    j.crash = blamed
        for j in live:
            results = {}
            for a in j.exports():
                if getattr(j, 'crash', None) == a:
                    results[a] = (False, 'the game crashed or hung while fuzzing it')
                elif crashed:
                    results[a] = (False, 'the game run failed: ' + status)
                else:
                    results[a] = verdict(rows.get(a))
            failed = {a: r for a, r in results.items() if not r[0]}
            if not failed:
                for a in j.exports():
                    st = state.fn(a)
                    st.update(status='verified', model=j.model, how=results[a][1])
                    state.data['uncommitted'] += 1
                for a, why in j.skips.items():
                    state.fn(a).update(status='skipped', why=why[:300])
                log('job %s: verified %d (%s)' % (j.id, len(results), j.model))
                j.done = True
            else:
                revert(j)
                lines = []
                for a, (okk, why) in sorted(failed.items()):
                    lines.append('0x%08x: %s' % (a, why))
                    lines += mism.get(a, [])[:12]
                j.problem = 'verification failed:\n' + '\n'.join(lines)
                log('job %s: %s' % (j.id, j.problem.splitlines()[1][:150]))
                retry.append(j)
    state.save()
    commit_if_due(state)
    return retry


def feedback_for(j):
    return ('Your answer was not accepted:\n\n%s\n\nReply with the corrected complete files (same format). '
            'Functions that verified are not listed; keep them as they were. If a function cannot be made exact, '
            'skip it.' % j.problem)


async def main_run(args):
    state = State()
    client = Client()
    for r in range(args.rounds):
        if state.data['cost'] >= args.budget:
            log('budget reached: $%.2f' % state.data['cost'])
            break
        p = Program(GAME)
        groups = select_groups(p, state, args.batches, size=args.group_size)
        if not groups:
            log('nothing left to select')
            break
        jobs = [Job(g, args.model, args.effort) for g in groups]
        log('round %d: %d groups, %d functions, spent so far $%.2f' % (
            r + 1, len(jobs), sum(len(g) for g in groups), state.data['cost']))
        retry = await round_(client, state, jobs, args.escalate)
        # one more attempt for failures, with feedback, on the escalation model
        again = []
        for j in retry:
            if j.problem and not j.problem.startswith(('API error', 'conflict')):
                for a in j.group:
                    state.fn(a)['attempts'] += 1
                if args.escalate and args.escalate != j.model:
                    j.model = args.escalate
                fb = feedback_for(j)
                j.files, j.skips, j.backup = {}, {}, {}
                j.problem = None
                again.append((j, fb))
        if again:
            await asyncio.gather(*[generate(client, Program(GAME), j, fb) for j, fb in again])
            final = await round_(client, state, [j for j, _ in again], None)
            for j in final:
                for a in j.group:
                    st = state.fn(a)
                    if st['status'] != 'verified':
                        st['status'] = 'failed' if st['attempts'] >= args.max_attempts else 'new'
                        st['last_problem'] = (j.problem or '')[:500]
        state.save()
        log('round %d done: %d verified in all, $%.2f spent' % (
            r + 1, sum(1 for v in state.data['functions'].values() if v['status'] == 'verified'), state.data['cost']))
    commit_if_due(state, force=True)


async def main_bench(args):
    """The same groups through each model (no retries): verified functions and cost per model."""
    state = State()
    p = Program(GAME)
    groups = select_groups(p, State.__new__(State) if False else state, args.batches, size=args.group_size)
    client = Client()
    results = {}
    for spec in args.models.split(','):
        model, _, effort = spec.partition(':')
        effort = effort or args.effort
        jobs = [Job(g, model, effort) for g in groups]
        t0 = time.time()
        await asyncio.gather(*[generate(client, p, j) for j in jobs])
        cost = sum(j.cost for j in jobs)
        gen_time = time.time() - t0
        # verify this model's answers alone, then take them out again
        scratch = State.__new__(State)
        scratch.path = os.path.join(HDIR, 'bench-scratch.json')
        scratch.data = {'functions': {}, 'cost': 0.0, 'uncommitted': -10 ** 9}
        for j in jobs:
            j.cost = 0.0
        await round_(client, scratch, jobs, None)
        verified = sum(1 for v in scratch.data['functions'].values() if v['status'] == 'verified')
        total = sum(len(g) for g in groups)
        problems = [j.problem.splitlines()[0][:80] for j in jobs if j.problem]
        for j in jobs:
            if getattr(j, 'done', False):
                revert(j)
        results[spec] = {'verified': verified, 'total': total, 'cost': round(cost, 4),
                         'per_verified': round(cost / verified, 4) if verified else None,
                         'gen_seconds': round(gen_time), 'problems': problems}
        log('bench %s: %s' % (spec, json.dumps(results[spec])))
        state.data['cost'] += cost
        state.save()
    compile_rewrites()
    json.dump(results, open(os.path.join(HDIR, 'bench.json'), 'w'), indent=1)
    print(json.dumps(results, indent=1))


def main():
    ap = argparse.ArgumentParser()
    sub = ap.add_subparsers(dest='cmd', required=True)
    r = sub.add_parser('run')
    r.add_argument('--rounds', type=int, default=1)
    r.add_argument('--batches', type=int, default=16)
    r.add_argument('--group-size', type=int, default=6)
    r.add_argument('--model', default='claude-sonnet-5-5')
    r.add_argument('--effort', default='medium')
    r.add_argument('--escalate', default='claude-opus-5-5')
    r.add_argument('--max-attempts', type=int, default=2)
    r.add_argument('--budget', type=float, default=100.0)
    b = sub.add_parser('bench')
    b.add_argument('--models', default='claude-haiku-5-5,claude-sonnet-5-5,claude-opus-5-5')
    b.add_argument('--batches', type=int, default=6)
    b.add_argument('--group-size', type=int, default=5)
    b.add_argument('--effort', default='medium')
    s = sub.add_parser('select')
    s.add_argument('--batches', type=int, default=10)
    args = ap.parse_args()
    if args.cmd == 'select':
        p = Program(GAME)
        for g in select_groups(p, State(), args.batches):
            print(' '.join(p.label(k) for k in g), sum(p.funcs[k].ninsts for k in g))
        return
    asyncio.run(main_run(args) if args.cmd == 'run' else main_bench(args))


if __name__ == '__main__':
    main()
