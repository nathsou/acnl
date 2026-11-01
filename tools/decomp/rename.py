#!/usr/bin/env python3
"""Applies a name map to decompiled drafts (the names a model chose; never code).

    rename.py NAMES.json IN.cpp OUT.cpp

NAMES.json:
    {"functions": {"0011c0fa": {"name": "find_owner", "comment": "Finds ...", "vars": {"r0_1": "heap"},
                                "labels": {"L_2f8914": "search_heap"}}},
     "globals": {"00975338": "main_heap"},
     "structs": {"Object_002f896c_0": {"name": "RequestInput", "fields": {"byte_0": "mode"}}, "AcNpcSp": {"fields": {"word_1c": "state"}}}}

In each draft: the function's name (definition and GUEST_EXPORT), its variables and labels, the names of the callees it
declares (call_<address> -> the callee's chosen name) and of its globals (global_<address>). Names are checked
(identifiers, no keywords, no collisions inside a draft); a draft whose names do not check keeps its old ones. The
result is proved again with `decomp prove-cpp` (renaming keeps the proof: declarations pair by their order).
"""
import json
import re
import sys

KEYWORDS = set('''alignas alignof and asm auto bool break case catch char class const constexpr const_cast continue
decltype default delete do double dynamic_cast else enum explicit export extern false float for friend goto if inline
int long mutable namespace new noexcept not nullptr operator or private protected public register reinterpret_cast
return short signed sizeof static static_assert static_cast struct switch template this throw true try typedef typeid
typename union unsigned using virtual void volatile while xor u8 u16 u32 u64 s8 s16 s32 s64 gptr guest'''.split())
# the runtime helpers drafts may call (decomp's HELPERS)
KEYWORDS |= set('''vfp_cmpf ror32 lsl_r lsr_r asr_r ror_r lsl_rc lsr_rc asr_rc ror_rc sat32 qadd qsub qdadd qdsub smlaxy smlaxy_add ssat usat ssat16 usat16 sxtb sxth uxtb uxth sxtb16 uxtb16 add16x rev16 sel usad8 pas_lane pas16 pas8 vfp_cmpd cvt_s32 cvt_u32 vfp_round vcvt_sz_f vcvt_uz_f vcvt_sz_d vcvt_uz_d vcvt_sr_f vcvt_ur_f vcvt_sr_d vcvt_ur_d D2F sqrtf sqrt fabsf fabs __builtin_clz clz'''.split())
IDENT = re.compile(r'^[A-Za-z_][A-Za-z0-9_]*$')
DRAFT = re.compile(r'(// f_([0-9a-f]{8}): decompiled.*?\nGUEST_EXPORT\(0x[0-9a-f]{8},[^\n]*\n)', re.S)
WORD = re.compile(r'[A-Za-z_][A-Za-z0-9_]*')


def valid(name):
    return bool(IDENT.match(name)) and name not in KEYWORDS and not name.startswith('__')


def rename_fields(text, names):
    """Fields, by struct: `argK->old` where argK is a gptr<Struct> parameter, and the draft's own struct definitions
    (their field declarations and GUEST_OFFSET checks)."""
    structs = names.get('structs', {})
    if not structs:
        return text
    for st, k in re.findall(r'gptr<(\w+)> arg(\d)\b', text):
        for old, new in structs.get(st, {}).get('fields', {}).items():
            text = re.sub(r'\barg%s->%s\b' % (k, re.escape(old)), 'arg%s->%s' % (k, new), text)
    def struct_body(m):
        fields = structs.get(m.group(2), {}).get('fields', {})
        body = m.group(3)
        for old, new in fields.items():
            body = re.sub(r'(\s)%s;' % re.escape(old), r'\1%s;' % new, body)
        return m.group(1) + body
    text = re.sub(r'(struct (?:__attribute__\(\(packed\)\) )?(\w+) \{\n)(.*?\n\})', struct_body, text, flags=re.S)
    def offset(m):
        new = structs.get(m.group(1), {}).get('fields', {}).get(m.group(2))
        return 'GUEST_OFFSET(%s, %s,' % (m.group(1), new) if new else m.group(0)
    return re.sub(r'GUEST_OFFSET\((\w+), (\w+),', offset, text)


def rename_draft(text, addr, names):
    functions = names.get('functions', {})
    mine = functions.get(addr, {})
    mapping = {}
    if mine.get('name'):
        mapping['f_' + addr] = mine['name']
    mapping.update(mine.get('vars', {}))
    mapping.update(mine.get('labels', {}))
    for word in set(WORD.findall(text)):
        if word.startswith('call_') and word[5:] in functions and functions[word[5:]].get('name'):
            mapping[word] = functions[word[5:]]['name']
        if word.startswith('global_') and word[7:15] in names.get('globals', {}):
            mapping[word] = names['globals'][word[7:15]] + word[15:]
    for st, info in names.get('structs', {}).items():
        if info.get('name'):
            mapping[st] = info['name']
    present = set(WORD.findall(text))
    mapping = {k: v for k, v in mapping.items() if k in present and k != v}
    # checks: identifiers, and no two names (old or new) the same
    if not all(valid(v) for v in mapping.values()):
        return text, 'invalid name'
    final = [mapping.get(w, w) for w in present]
    if len(set(final)) != len(final):
        return text, 'collision'
    # (the first line, `// f_<address>: decompiled ...`, stays: it marks the draft)
    head, rest = text.split('\n', 1)
    out = head + '\n' + WORD.sub(lambda m: mapping.get(m.group(0), m.group(0)), rename_fields(rest, names))
    if mine.get('comment'):
        import textwrap
        lines = [w for line in mine['comment'].splitlines() for w in (textwrap.wrap(line, 116) or [''])]
        comment = ''.join('// ' + line + '\n' for line in lines)
        out = out.replace('namespace d_' + addr + ' {\n', comment + 'namespace d_' + addr + ' {\n', 1)
    return out, None


def main():
    names = json.load(open(sys.argv[1]))
    text = open(sys.argv[2]).read()
    problems = []

    def one(m):
        out, why = rename_draft(m.group(1), m.group(2), names)
        if why:
            problems.append((m.group(2), why))
        return out

    open(sys.argv[3], 'w').write(DRAFT.sub(one, text))
    for addr, why in problems:
        print(addr, why)
    print(len(problems), 'drafts kept their names')


if __name__ == '__main__':
    main()
