#!/usr/bin/env python3
"""Measures how readable decompiled drafts are: their length and the noise left in them, and, for the functions the
rewrites also have, how much longer the draft is than the hand-written version.

    readability.py DRAFTS.cpp [SRC_DIR]     (SRC_DIR default games/acnl/src; its decompiled/ is left out)

Lines are the function's own (its definition to the closing brace, blank lines left out). Noise:
  decls   declarations at the top of the function (`u32 r0_1 = 0;`)
  cpu     statements that touch the CPU (`guest::cpu()->...`)
  sp      statements that move the stack pointer (`guest::cpu()->r[13]`, `r13 = ...`)
  goto    gotos and labels
  orig    `// (from the original)` comments
"""
import collections
import glob
import os
import re
import sys

DRAFT = re.compile(r'// f_([0-9a-f]{8}): decompiled.*?\nGUEST_EXPORT(?:_FRAMED)?\(0x[0-9a-f]{8},[^\n]*\n', re.S)
EXPORT = re.compile(r'GUEST_EXPORT(?:_FRAMED)?\(0x([0-9a-f]+),\s*([\w:]+)')


def body_at(text, start):
    """The text from `start` to the brace closing the first brace after it."""
    open_at = text.find('{', start)
    if open_at < 0:
        return None
    depth = 0
    for i in range(open_at, len(text)):
        if text[i] == '{':
            depth += 1
        elif text[i] == '}':
            depth -= 1
            if depth == 0:
                return text[start:i + 1]
    return None


def lines_of(body):
    return [l for l in body.splitlines() if l.strip() and not l.strip().startswith('//')]


def draft_function(draft):
    m = re.search(r'^\S[^\n]* f_[0-9a-f]{8}\(', draft, re.M)
    return body_at(draft, m.start()) if m else None


def hand_functions(src):
    """address -> the hand-written function's text."""
    out = {}
    for path in glob.glob(os.path.join(src, '**', '*.cpp'), recursive=True):
        if '/decompiled/' in path:
            continue
        text = open(path).read()
        for m in EXPORT.finditer(text):
            name = m.group(2)
            # the definition: the qualified name followed by `(`, before the export, at the start of a line's code
            pattern = re.compile(r'^[^\n;{}]*\b%s\s*\(' % re.escape(name), re.M)
            found = [d for d in pattern.finditer(text, 0, m.start())]
            if not found:
                continue
            body = body_at(text, found[-1].start())
            if body:
                out['%08x' % (int(m.group(1), 16) & ~1)] = body
    return out


def noise(lines):
    c = collections.Counter()
    for l in lines:
        s = l.strip()
        if re.match(r'^(u8|u16|u32|u64|s8|s16|s32|s64|f32|f64|float|double) \w+ = 0;$', s):
            c['decls'] += 1
        if 'guest::cpu()' in s:
            c['cpu'] += 1
        if 'cpu()->r[13]' in s or re.match(r'^r13 = ', s):
            c['sp'] += 1
        if s.startswith('goto ') or ' goto ' in s or re.match(r'^L_[0-9a-f]+:;', s):
            c['goto'] += 1
        if '(from the original)' in l:
            c['orig'] += 1
    return c


def main():
    drafts = open(sys.argv[1]).read()
    src = sys.argv[2] if len(sys.argv) > 2 else 'games/acnl/src'
    hand = hand_functions(src)
    total, n, sizes = collections.Counter(), 0, []
    pairs = []
    for m in DRAFT.finditer(drafts):
        f = draft_function(m.group(0))
        if not f:
            continue
        ls = lines_of(f)
        n += 1
        sizes.append(len(ls))
        total['lines'] += len(ls)
        total.update(noise(ls))
        if m.group(1) in hand:
            pairs.append((len(ls), len(lines_of(hand[m.group(1)]))))
    if not n:
        sys.exit('no drafts')
    sizes.sort()
    print('%d drafts, %d lines (median %d, p90 %d)' % (n, total['lines'], sizes[n // 2], sizes[int(n * .9)]))
    for k in ('decls', 'cpu', 'sp', 'goto', 'orig'):
        print('  %-6s %6d lines (%4.1f%%)' % (k, total[k], 100.0 * total[k] / total['lines']))
    if pairs:
        d, h = sum(p[0] for p in pairs), sum(p[1] for p in pairs)
        ratios = sorted(p[0] / max(p[1], 1) for p in pairs)
        print('%d with a hand-written version: %d lines against %d (%.2fx; median %.2fx)'
              % (len(pairs), d, h, d / max(h, 1), ratios[len(ratios) // 2]))


if __name__ == '__main__':
    main()
