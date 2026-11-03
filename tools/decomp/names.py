#!/usr/bin/env python3
"""The names of the decompiled code, kept apart from it (games/acnl/names), keyed by what the original program fixes,
so that they survive changes to the decompiler and re-emitting the drafts.

    names.py add NAMES_DIR DRAFTS.cpp MAP.json      merge a name map (rename.py's format, generated names) into the layer
    names.py apply NAMES_DIR IN.cpp OUT.cpp [STRUCTS.hpp OUT.hpp]
                                                    name the drafts (and the recovered structs' header) from the layer
    names.py lost NAMES_DIR DRAFTS.cpp              the names whose key no draft has any more

The layer (one file per kind, a line per name, sorted; `#` starts a comment line):
    functions.txt  <address> <name>
    comments.txt   <address> <text>                 (a function's comment, lines joined by ` \\n `)
    variables.txt  <function> <key> <name>          a variable by its value's key (values.rs Key, the drafts' `// keys:`
                                                    line): `r0@46bcc8` is r0 as the instruction at 0x46bcc8 sets it,
                                                    `r1@entry` its value at the entry; other identifiers (arg0, labels
                                                    L_<address>, local_<distance>) are their own key
    fields.txt     <struct> <offset> <name>         a field by its offset, whatever type the decompiler gives it
    structs.txt    <struct> <name>                  the generated structs (Object_<function>_<argument>, Frame_<function>,
                                                    and Local_<function>@<key> for a typed local's, by its variable's key)
    globals.txt    <address> <name>

A key matches a value when the register is the same and one of the instructions defining the value is the key's (or
both are the entry value): a value the decompiler later joins with another, or splits, keeps its name. A name whose key
no longer matches is reported (`lost`), never moved to something else. rename.py does the renaming and its checks; the
result is proved again with `decomp prove-cpp`.
"""
import json
import os
import re
import sys

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
import rename  # noqa: E402

KINDS = ('functions', 'comments', 'variables', 'fields', 'structs', 'globals')
FIELD = re.compile(r'^(byte|half|word|float|dword)_([0-9a-f]+)$')
KEYS = re.compile(r'^// keys: (.*)$', re.M)
# a typed local's struct is named after its variable (Local_<function>_<variable>): the layer keys it by the variable's key
LOCAL = re.compile(r'^Local_([0-9a-f]{8})_(\w+)$')


def load(d):
    layer = {k: {} for k in KINDS}
    for kind in KINDS:
        path = os.path.join(d, kind + '.txt')
        if not os.path.exists(path):
            continue
        for line in open(path):
            line = line.rstrip('\n')
            if not line or line.startswith('#'):
                continue
            if kind == 'comments':
                a, text = line.split(' ', 1)
                layer[kind][a] = text.replace(' \\n ', '\n')
            elif kind in ('variables', 'fields'):
                a, key, name = line.split()
                layer[kind].setdefault(a, {})[key] = name
            else:
                a, name = line.split()
                layer[kind][a] = name
    return layer


def save(d, layer):
    os.makedirs(d, exist_ok=True)
    for kind in KINDS:
        lines = []
        for a in sorted(layer[kind]):
            v = layer[kind][a]
            if kind == 'comments':
                lines.append('%s %s' % (a, v.replace('\n', ' \\n ')))
            elif kind in ('variables', 'fields'):
                lines.extend('%s %s %s' % (a, key, v[key]) for key in sorted(v))
            else:
                lines.append('%s %s' % (a, v))
        with open(os.path.join(d, kind + '.txt'), 'w') as f:
            f.write(''.join(l + '\n' for l in lines))


def drafts(text):
    """address -> the draft's text"""
    return {m.group(2): m.group(1) for m in rename.DRAFT.finditer(text)}


def keys_of(draft):
    """generated name -> (variable, set of instructions as hex text, with 'entry')"""
    out = {}
    m = KEYS.search(draft)
    for item in (m.group(1).split() if m else []):
        name, key = item.split('=')
        var, _, at = key.partition('@')
        out[name] = (var, set(at.split(',')) if at else set())
    return out


def key_of(name, keys):
    """the key a name map's generated variable name stands for: its value's register and first instruction (the entry
    first), or the identifier itself"""
    if name not in keys:
        return name
    var, at = keys[name]
    if not at:
        return var
    first = 'entry' if 'entry' in at else min(at, key=lambda a: int(a, 16))
    return '%s@%s' % (var, first)


def code_words(text):
    """the identifiers of a draft's code (comments name nothing, the `// keys:` line included)"""
    return set(rename.WORD.findall(re.sub(r'//[^\n]*', '', text)))


def resolve(key, keys, present):
    """the generated name a key stands for in a draft (None: lost)"""
    var, _, at = key.partition('@')
    if not at:
        return key if key in present else None
    found = [n for n, (v, ats) in keys.items() if v == var and at in ats and n in present]
    return found[0] if len(found) == 1 else None


def field_offset(generated):
    m = FIELD.match(generated)
    return '%x' % int(m.group(2), 16) if m else None


def add(d, drafts_path, map_path):
    layer = load(d)
    names = json.load(open(map_path))
    texts = drafts(open(drafts_path).read()) if drafts_path != '-' else {}
    unkeyed = []
    for a, info in names.get('functions', {}).items():
        a = '%08x' % (int(a, 16) & ~1)
        if info.get('name') and rename.valid(info['name']):
            layer['functions'][a] = info['name']
        if info.get('comment'):
            layer['comments'][a] = info['comment']
        keys = keys_of(texts[a]) if a in texts else {}
        for old, new in list(info.get('vars', {}).items()) + list(info.get('labels', {}).items()):
            if not rename.valid(new):
                continue
            if a not in texts:
                unkeyed.append((a, old))
                continue
            layer['variables'].setdefault(a, {})[key_of(old, keys)] = new
    for g, new in names.get('globals', {}).items():
        if rename.valid(new):
            layer['globals']['%08x' % int(g, 16)] = new
    for st, info in names.get('structs', {}).items():
        m = LOCAL.match(st)
        if m:
            if m.group(1) not in texts:
                unkeyed.append((st, ''))
                continue
            st = 'Local_%s@%s' % (m.group(1), key_of(m.group(2), keys_of(texts[m.group(1)])))
        if info.get('name') and rename.valid(info['name']):
            layer['structs'][st] = info['name']
        for old, new in info.get('fields', {}).items():
            off = field_offset(old)
            if off is None or not rename.valid(new):
                unkeyed.append((st, old))
                continue
            layer['fields'].setdefault(st, {})[off] = new
    save(d, layer)
    for a, old in unkeyed:
        print('not keyed (no draft or not a generated name):', a, old)


def name_map(layer, addr, draft, functions=None):
    """rename.py's map for one draft, from the layer (lost: the keys of this function that match nothing);
    `functions`: the layer's function names in rename.py's form, when the caller has them already"""
    keys = keys_of(draft)
    present = code_words(draft)
    variables, lost = {}, []
    for key, new in layer['variables'].get(addr, {}).items():
        old = resolve(key, keys, present)
        if old is None:
            lost.append(key)
        else:
            variables[old] = new
    if functions is None:
        functions = function_map(layer)
    mine = dict(functions.get(addr, {}))
    mine['vars'] = variables
    if addr in layer['comments']:
        mine['comment'] = layer['comments'][addr]
    functions = dict(functions)
    functions[addr] = mine
    return {'functions': functions, 'globals': layer['globals'], 'structs': structs_map(layer, draft)}, lost


def function_map(layer):
    return {a: {'name': n} for a, n in layer['functions'].items()}


def structs_map(layer, text):
    """rename.py's struct map for a text: each struct's chosen name and its fields' (by offset)"""
    words = code_words(text)
    # (a typed local's struct: its key in the layer -> its generated name here, matched like a variable's key)
    local = {}
    keys = keys_of(text)
    for key in set(layer['structs']) | set(layer['fields']):
        if key.startswith('Local_') and '@' in key:
            function, var_key = key[len('Local_'):].split('@', 1)
            var = resolve(var_key, keys, words)
            if var and 'Local_%s_%s' % (function, var) in words:
                local[key] = 'Local_%s_%s' % (function, var)
    offsets = {}
    for w in words:
        off = field_offset(w)
        if off is not None:
            offsets.setdefault(off, []).append(w)
    out = {}
    for key in set(layer['structs']) | set(layer['fields']):
        st = local.get(key, key)
        if st not in words:
            continue
        info = {}
        if key in layer['structs']:
            info['name'] = layer['structs'][key]
        fields = {}
        for off, new in layer['fields'].get(key, {}).items():
            for generated in offsets.get(off, []):
                fields[generated] = new
        if fields:
            info['fields'] = fields
        out[st] = info
    return out


def apply(d, src, dst, header=None, header_out=None):
    layer = load(d)
    text = open(src).read()
    problems, lost = [], []
    functions = function_map(layer)

    def one(m):
        draft, addr = m.group(1), m.group(2)
        names, gone = name_map(layer, addr, draft, functions)
        lost.extend((addr, k) for k in gone)
        out, why = rename.rename_draft(draft, addr, names)
        if why:
            problems.append((addr, why))
        return out

    open(dst, 'w').write(rename.DRAFT.sub(one, text))
    if header:
        h = open(header).read()
        open(header_out, 'w').write(rename.rename_fields(h, {'structs': structs_map(layer, h)}))
    for addr, why in problems:
        print(addr, 'kept its generated names:', why)
    for addr, key in lost:
        print(addr, 'lost:', key)
    print('%d drafts kept their generated names, %d names lost' % (len(problems), len(lost)))


def lost(d, drafts_path):
    layer = load(d)
    for addr, draft in sorted(drafts(open(drafts_path).read()).items()):
        for key in name_map(layer, addr, draft)[1]:
            print(addr, key, layer['variables'][addr][key])


def main():
    cmd = sys.argv[1] if len(sys.argv) > 1 else ''
    if cmd == 'add':
        add(*sys.argv[2:5])
    elif cmd == 'apply':
        apply(*sys.argv[2:7])
    elif cmd == 'lost':
        lost(*sys.argv[2:4])
    else:
        sys.exit(__doc__)


if __name__ == '__main__':
    main()
