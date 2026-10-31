#!/usr/bin/env python3
"""Asks a model for the names of decompiled functions: a name map (function, variables, labels, a comment), never code.

    ../acnl/.venv/bin/python tools/decomp/name.py DRAFTS.cpp NAMES.json ADDRESS... [--model M] [--effort E]

Functions are named callees first, each with the names chosen so far applied (its callees appear under their names).
Each answer is checked as rename.py checks names and added to NAMES.json; `rename.py` then applies the map and
`decomp prove-cpp` proves the renamed drafts. The API key comes from .env (never printed). Prices (per million tokens,
input / output) are used to report the cost.
"""
import argparse
import json
import os
import re
import sys

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
import rename  # noqa: E402

PRICES = {'claude-opus-5-5': (4.0, 20.0), 'claude-sonnet-5-5': (2.0, 10.0), 'claude-haiku-5-5': (0.10, 0.50)}

SYSTEM = """You name decompiled C++ functions of a 3DS game (Animal Crossing: New Leaf). Each function was produced by a \
decompiler and proved equal to the machine code; you only choose names and write a short comment. Never change code.

Conventions:
- Function and variable names: snake_case, descriptive, from what the code does (memory it reads and writes, the calls \
it makes, the constants it compares with). Prefer plain words over guesses: `update_counter`, not `handle_player_mail` \
unless the code shows mail. When nothing tells what a value means, name it by its role (`index`, `flags`, `result`).
- Callees appear under their names when they have one (else call_<address>); globals as global_<address> or a name.
- The comment: one or two sentences saying what the function does, in the present tense, without guessing beyond the \
code. Mention what is not known yet when it matters.
- Variables to rename are the locals the function declares (r0_1, r4, res_1, ...) and its labels (L_<address>); keep \
names unique, never C++ keywords. Do not rename parameters arg0..arg3, structs, fields, globals or callees.
Answer with the JSON object only."""

SCHEMA = {
    'type': 'object',
    'properties': {
        'name': {'type': 'string'},
        'comment': {'type': 'string'},
        'vars': {'type': 'array', 'items': {'type': 'object', 'properties': {'from': {'type': 'string'}, 'to': {'type': 'string'}},
                                            'required': ['from', 'to'], 'additionalProperties': False}},
        'labels': {'type': 'array', 'items': {'type': 'object', 'properties': {'from': {'type': 'string'}, 'to': {'type': 'string'}},
                                              'required': ['from', 'to'], 'additionalProperties': False}},
    },
    'required': ['name', 'comment', 'vars', 'labels'],
    'additionalProperties': False,
}


def classes_of(path):
    """function address -> 'Class (virtual function k)' from the RTTI, for context."""
    out = {}
    try:
        rtti = json.load(open(path))
    except OSError:
        return out
    for v in rtti.values():
        for t in v.get('vtables', []):
            if t.get('offset_to_top') != 0:
                continue
            for k, f in enumerate(t.get('functions', [])):
                out.setdefault('%08x' % (f & ~1), '%s (virtual function %d)' % (v.get('class', '?'), k))
    return out


def callee_order(drafts, targets):
    """targets, callees before callers (cycles broken by address)."""
    calls = {a: set(re.findall(r'call_([0-9a-f]{8})', drafts[a])) & set(targets) for a in targets}
    done, order = set(), []

    def visit(a, stack):
        if a in done or a in stack:
            return
        stack.add(a)
        for c in sorted(calls[a]):
            visit(c, stack)
        stack.discard(a)
        done.add(a)
        order.append(a)

    for a in sorted(targets):
        visit(a, set())
    return order


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument('drafts')
    ap.add_argument('names')
    ap.add_argument('addresses', nargs='+')
    ap.add_argument('--model', default='claude-opus-5-5')
    ap.add_argument('--effort', default='low')
    ap.add_argument('--rtti', default='build/acnl/rtti.json')
    args = ap.parse_args()

    from dotenv import load_dotenv
    import anthropic
    load_dotenv(os.path.join(os.path.dirname(os.path.abspath(__file__)), '..', '..', '.env'))
    client = anthropic.Anthropic()

    text = open(args.drafts).read()
    drafts = {m.group(2): m.group(1) for m in rename.DRAFT.finditer(text)}
    names = json.load(open(args.names)) if os.path.exists(args.names) else {'functions': {}, 'globals': {}}
    targets = [a.lower().rjust(8, '0') for a in args.addresses]
    missing = [a for a in targets if a not in drafts]
    if missing:
        sys.exit('no draft for ' + ' '.join(missing))
    classes = classes_of(args.rtti)
    price_in, price_out = PRICES.get(args.model, (0, 0))
    spent = 0.0
    for a in callee_order(drafts, targets):
        shown, _ = rename.rename_draft(drafts[a], a, names)
        context = ''
        if a in classes:
            context = 'RTTI: this function is %s; arg0 is `this`.\n\n' % classes[a]
        response = client.messages.create(
            model=args.model,
            max_tokens=8000,
            system=[{'type': 'text', 'text': SYSTEM, 'cache_control': {'type': 'ephemeral'}}],
            output_config={'effort': args.effort, 'format': {'type': 'json_schema', 'schema': SCHEMA}},
            messages=[{'role': 'user', 'content': context + '```cpp\n' + shown + '```'}],
        )
        if response.stop_reason == 'refusal':
            print(a, 'refused')
            continue
        answer = json.loads(next(b.text for b in response.content if b.type == 'text'))
        entry = {'name': answer['name'], 'comment': answer['comment'],
                 'vars': {p['from']: p['to'] for p in answer['vars']}, 'labels': {p['from']: p['to'] for p in answer['labels']}}
        trial = json.loads(json.dumps(names))
        trial['functions'][a] = entry
        _, why = rename.rename_draft(drafts[a], a, trial)
        u = response.usage
        cost = (u.input_tokens + (u.cache_read_input_tokens or 0) * 0.05 + (u.cache_creation_input_tokens or 0) * 1.25) * price_in / 1e6 \
            + u.output_tokens * price_out / 1e6
        spent += cost
        if why:
            print('%s %s: not used (%s)' % (a, entry['name'], why))
            continue
        names['functions'][a] = entry
        json.dump(names, open(args.names, 'w'), indent=1, sort_keys=True)
        print('%s %-40s in %5d out %5d  $%.4f' % (a, entry['name'], u.input_tokens, u.output_tokens, cost))
    print('spent $%.4f' % spent)


if __name__ == '__main__':
    main()
