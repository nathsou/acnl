#!/usr/bin/env python3
"""The names already known, as a name map to start from: the rewrites' functions and the program's symbols (the type
database's names.txt, default build/tools/ghidra/names.txt).

    seed_names.py OUT.json [NAMES.txt]

A qualified name becomes an identifier (`a::b` -> `a__b`); a name two functions share gets their address appended.
`name.py` then names the others, with these appearing for the callees they name.
"""
import collections
import json
import re
import sys


def ident(name):
    return re.sub(r'[^A-Za-z0-9_]', '_', name.replace('::', '__'))


def main():
    out = sys.argv[1]
    src = sys.argv[2] if len(sys.argv) > 2 else 'build/tools/ghidra/names.txt'
    names = {}
    for line in open(src):
        parts = line.split()
        if len(parts) != 3 or re.match(r'^[ft]_[0-9a-f]{8}$', parts[2]):
            continue
        names['%08x' % (int(parts[0], 16) & ~1)] = ident(parts[2])
    count = collections.Counter(names.values())
    functions = {a: {'name': n if count[n] == 1 else '%s_%s' % (n, a)} for a, n in names.items()}
    json.dump({'functions': functions, 'globals': {}, 'structs': {}}, open(out, 'w'), indent=1, sort_keys=True)
    print(len(functions), 'names')


if __name__ == '__main__':
    main()
