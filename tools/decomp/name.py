#!/usr/bin/env python3
"""Asks a model for the names of decompiled functions: a name map (function, variables, labels, a comment), never code.

    .venv/bin/python tools/decomp/name.py DRAFTS.cpp NAMES.json [ADDRESS... | --all] [--batch] [--budget DOLLARS]
                                          [--model M] [--effort E]

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
names unique, never C++ keywords. Do not rename parameters arg0..arg3, globals or callees.
- The function's own structs (Object_<address>_<k>, the object an argument points to; Local_<address>_<variable>, the \
object a local points to) and their fields (byte_/half_/word_<offset>) may get names: structs in CamelCase, fields in \
snake_case. Leave other structs alone.
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
        'structs': {'type': 'array', 'items': {'type': 'object', 'properties': {'from': {'type': 'string'}, 'to': {'type': 'string'}},
                                               'required': ['from', 'to'], 'additionalProperties': False}},
        'fields': {'type': 'array', 'items': {'type': 'object', 'properties': {'struct': {'type': 'string'}, 'from': {'type': 'string'},
                                                                               'to': {'type': 'string'}},
                                              'required': ['struct', 'from', 'to'], 'additionalProperties': False}},
    },
    'required': ['name', 'comment', 'vars', 'labels', 'structs', 'fields'],
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


def levels(drafts, targets):
    """targets by level: a function comes after every target it calls (cycles broken by address)."""
    order = callee_order(drafts, targets)
    calls = {a: set(re.findall(r'call_([0-9a-f]{8})', drafts[a])) & set(targets) for a in targets}
    level = {}
    for a in order:
        level[a] = 1 + max((level[c] for c in calls[a] if c in level), default=-1)
    out = []
    for a in order:
        while len(out) <= level[a]:
            out.append([])
        out[level[a]].append(a)
    return out


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument('drafts')
    ap.add_argument('names')
    ap.add_argument('addresses', nargs='*')
    ap.add_argument('--all', action='store_true', help='every draft whose function has no name yet')
    ap.add_argument('--batch', action='store_true', help='through the Batches API (half price), a batch per level')
    ap.add_argument('--budget', type=float, default=5.0, help='stop once this many dollars are spent')
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
    if args.all:
        targets = sorted(a for a in drafts if a not in names.get('functions', {}))
    else:
        targets = [a.lower().rjust(8, '0') for a in args.addresses]
    missing = [a for a in targets if a not in drafts]
    if missing:
        sys.exit('no draft for ' + ' '.join(missing))
    classes = classes_of(args.rtti)
    price_in, price_out = PRICES.get(args.model, (0, 0))
    if args.batch:
        price_in, price_out = price_in / 2, price_out / 2
    spent = [0.0]

    def params(a):
        shown, _ = rename.rename_draft(drafts[a], a, names)
        context = ''
        if a in classes:
            context = 'RTTI: this function is %s; arg0 is `this`.\n\n' % classes[a]
        return dict(model=args.model, max_tokens=8000,
                    system=[{'type': 'text', 'text': SYSTEM, 'cache_control': {'type': 'ephemeral'}}],
                    output_config={'effort': args.effort, 'format': {'type': 'json_schema', 'schema': SCHEMA}},
                    messages=[{'role': 'user', 'content': context + '```cpp\n' + shown + '```'}])

    def take(a, response):
        u = response.usage
        cost = (u.input_tokens + (u.cache_read_input_tokens or 0) * 0.05 + (u.cache_creation_input_tokens or 0) * 1.25) * price_in / 1e6 \
            + u.output_tokens * price_out / 1e6
        spent[0] += cost
        if response.stop_reason == 'refusal':
            print(a, 'refused')
            return
        answer = json.loads(next(b.text for b in response.content if b.type == 'text'))
        entry = {'name': answer['name'], 'comment': answer['comment'],
                 'vars': {p['from']: p['to'] for p in answer['vars']}, 'labels': {p['from']: p['to'] for p in answer['labels']}}
        trial = json.loads(json.dumps(names))
        trial['functions'][a] = entry
        own = ('Object_%s_' % a, 'Local_%s_' % a)
        structs = {}
        for p in answer['structs']:
            if p['from'].startswith(own):
                structs.setdefault(p['from'], {})['name'] = p['to']
        for p in answer['fields']:
            if p['struct'].startswith(own):
                structs.setdefault(p['struct'], {}).setdefault('fields', {})[p['from']] = p['to']
        trial.setdefault('structs', {}).update(structs)
        _, why = rename.rename_draft(drafts[a], a, trial)
        if why:
            print('%s %s: not used (%s)' % (a, entry['name'], why))
            return
        names['functions'][a] = entry
        names.setdefault('structs', {}).update(structs)
        print('%s %-40s in %5d out %5d  $%.4f' % (a, entry['name'], u.input_tokens, u.output_tokens, cost))

    def save():
        json.dump(names, open(args.names, 'w'), indent=1, sort_keys=True)

    if not args.batch:
        for a in callee_order(drafts, targets):
            if spent[0] >= args.budget:
                print('budget reached')
                break
            take(a, client.messages.create(**params(a)))
            save()
    else:
        import time
        from anthropic.types.message_create_params import MessageCreateParamsNonStreaming
        from anthropic.types.messages.batch_create_params import Request
        for k, level in enumerate(levels(drafts, targets)):
            if spent[0] >= args.budget:
                print('budget reached')
                break
            batch = client.messages.batches.create(requests=[
                Request(custom_id=a, params=MessageCreateParamsNonStreaming(**params(a))) for a in level])
            print('level %d: %d functions, batch %s' % (k, len(level), batch.id), flush=True)
            while client.messages.batches.retrieve(batch.id).processing_status != 'ended':
                time.sleep(30)
            for result in client.messages.batches.results(batch.id):
                if result.result.type == 'succeeded':
                    take(result.custom_id, result.result.message)
                else:
                    print(result.custom_id, result.result.type)
            save()
    print('spent $%.4f' % spent[0])


if __name__ == '__main__':
    main()
