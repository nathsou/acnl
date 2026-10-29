"""A game's program for the analysis tools: its functions (from the recompiler's discovery), call graph, string and
data references, and the names known so far.

Names come from games/<game>/symbols.txt (`0x00101234 name  # optional comment`, functions and data alike) and
from the rewritten functions themselves (GUEST_EXPORT(<address>, <name>) in games/<game>/src).
"""
import os
import pickle
import re
import string
import sys
from collections import defaultdict

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
sys.path.insert(0, os.path.join(ROOT, 'tools'))
import build  # noqa: E402

CACHE_VERSION = 4


def _import_recomp(recomp_dir):
    if recomp_dir not in sys.path:
        sys.path.insert(0, recomp_dir)
    from tools.recomp import gen, image, ins  # noqa: F401
    return gen, image, ins


class Function:
    __slots__ = ('key', 'start', 'end', 'thumb', 'ninsts', 'calls', 'tails', 'icalls', 'svcs', 'lits',
                 'strings', 'callers', 'insts', 'jump_tables', 'jts')

    def __init__(self, key):
        self.key = key
        self.start = key & ~1
        self.thumb = bool(key & 1)
        self.calls = []      # (site, target key)
        self.tails = []      # (site, target key): tail calls
        self.icalls = 0
        self.svcs = []
        self.lits = []       # (site, value) of literal-pool loads
        self.strings = []    # (site, address, text)
        self.callers = []    # (site, caller key)
        self.insts = []      # (addr, size)
        self.jump_tables = 0
        self.jts = {}        # site -> jump table targets (keys, bit 0 = Thumb)


class Program:
    def __init__(self, game):
        self.game = game
        self.cfg = build.game_config(game)
        self.out = os.path.join(ROOT, 'build', game)
        self.generated = os.path.join(self.out, 'generated')
        if not os.path.exists(os.path.join(self.generated, 'funcs.txt')):
            build.regenerate(self.cfg, self.generated)
        gen, image, ins = _import_recomp(self.cfg['recomp'])
        self._gen, self._ins = gen, ins
        self.img = image.Image(self.cfg['data'])
        self.funcs = self._load()
        self.load_names()

    # ---- names

    def load_names(self):
        self.names = {}      # address (key for functions) -> name
        self.auto_names = {}
        self.comments = {}
        path = os.path.join(ROOT, 'games', self.game, 'symbols.txt')
        if os.path.exists(path):
            for line in open(path):
                body, _, comment = line.partition('#')
                parts = body.split()
                if len(parts) >= 2:
                    a = int(parts[0], 16)
                    self.names[a] = parts[1]
                    if comment.strip():
                        self.comments[a] = comment.strip()
        self.rewritten = {}
        self.imported = {}
        src = os.path.join(ROOT, 'games', self.game, 'src')
        imp = re.compile(r'guest::Function<\s*(0x[0-9a-fA-F]+)\s*,[^;]*?>\s*(\w+)\s*;', re.S)
        rx = re.compile(r'\bGUEST_EXPORT\(\s*(0x[0-9a-fA-F]+)\s*,\s*&?([\w:<>, ]+?)\s*\);')
        for dirpath, _, files in os.walk(src):
            for f in files:
                path = os.path.join(dirpath, f)
                text = open(path).read()
                for m in imp.finditer(text):
                    a = int(m.group(1), 16)
                    self.names.setdefault(a, m.group(2))
                    self.imported[a] = os.path.relpath(path, ROOT)
                for m in rx.finditer(text):
                    a = int(m.group(1), 16)
                    self.names[a] = m.group(2)
                    self.rewritten[a] = os.path.relpath(path, ROOT)
        self.load_rtti_names()

    def load_rtti_names(self):
        """Names from C++ RTTI (tools/rtti.py): each virtual function after the class that introduces it
        (Class::virtual_<slot>), and functions that store a class's vtable pointer as its constructors or
        destructors. Lower priority than symbols.txt and the rewrites."""
        import json
        path = os.path.join(self.out, 'rtti.json')
        if not os.path.exists(path):
            return
        tinfos = json.load(open(path))
        best = {}  # function -> (vtable length, name)
        vtables = {}  # vtable address -> class
        for t in tinfos.values():
            for vt in t['vtables']:
                vtables[vt['address']] = t['class']
                for slot, f in enumerate(vt['functions']):
                    if f == 0:
                        continue
                    cand = (len(vt['functions']), '%s::virtual_%d' % (t['class'], slot))
                    if f not in best or cand < best[f]:
                        best[f] = cand
        for f, (_, n) in best.items():
            self.auto_names.setdefault(f, n)
        for key, fn in self.funcs.items():
            for _, v in fn.lits:
                if v in vtables and key not in best:
                    cls = vtables[v]
                    self.auto_names.setdefault(key, '%s::%s' % (cls, cls.split('::')[-1].split('<')[0]))

    def name(self, a):
        n = self.names.get(a) or self.auto_names.get(a)
        if n is None and (a | 1) in self.funcs:
            n = self.names.get(a | 1) or self.auto_names.get(a | 1)
        return n

    def label(self, key):
        n = self.name(key)
        return '%s %s' % (self._gen.fname(key), n) if n else self._gen.fname(key)

    def lookup(self, text):
        """A function key from an address or a name."""
        try:
            a = int(text, 16)
        except ValueError:
            for k, n in self.names.items():
                if n == text:
                    return k
            sys.exit('unknown function %s' % text)
        if a in self.funcs:
            return a
        if (a | 1) in self.funcs:
            return a | 1
        for k, f in self.funcs.items():
            if f.start <= a < f.end:
                return k
        sys.exit('no function at %x' % a)

    # ---- analysis

    def analyzer(self):
        if not hasattr(self, '_an'):
            an = self._gen.Analyzer(self.img, log=lambda *a: None)
            for k in self.funcs:
                an.funcs[k] = True
            self._an = an
        return self._an

    def _load(self):
        cache = os.path.join(self.out, 'analysis.pkl')
        funcs_txt = os.path.join(self.generated, 'funcs.txt')
        stamp = (CACHE_VERSION, os.path.getmtime(funcs_txt))
        if os.path.exists(cache):
            with open(cache, 'rb') as f:
                data = pickle.load(f)
            if data['stamp'] == stamp:
                return data['funcs']
        keys = [int(l, 16) for l in open(funcs_txt) if l.strip()]
        funcs = {k: Function(k) for k in keys}
        self.funcs = funcs
        an = self.analyzer()
        I = self._ins
        for k in keys:
            fn = funcs[k]
            insts, _ = an.explore(k)
            addrs = sorted(insts)
            fn.ninsts = len(addrs)
            fn.end = max(a + insts[a].size for a in addrs) if addrs else fn.start
            fn.insts = [(a, insts[a].size) for a in addrs]
            for a in addrs:
                i = insts[a]
                if i.kind == I.CALL:
                    fn.calls.append((a, i.target))
                elif i.kind == I.B and (i.target | (k & 1)) in funcs and i.target != fn.start:
                    fn.tails.append((a, i.target | (k & 1)))
                elif i.kind == I.ICALL:
                    fn.icalls += 1
                elif i.kind == I.SVC:
                    fn.svcs.append(i.imm)
                elif i.kind == I.JMP and i.jt:
                    fn.jump_tables += 1
                    fn.jts[a] = list(i.jt)
                if i.reads_pc_lit is not None:
                    v = self.img.read32(i.reads_pc_lit)
                    if v is not None:
                        fn.lits.append((a, v))
                        s = self.cstring(v)
                        if s:
                            fn.strings.append((a, v, s))
        for k, fn in funcs.items():
            for site, t in fn.calls + fn.tails:
                if t in funcs:
                    funcs[t].callers.append((site, k))
        with open(cache, 'wb') as f:
            pickle.dump({'stamp': stamp, 'funcs': funcs}, f)
        return funcs

    def cstring(self, a, minlen=3):
        s = self.img.seg_of(a)
        if s is None or s in self.img.texts:
            return None
        out = []
        o = a - s.addr
        while o < len(s.data) and len(out) < 200:
            ch = s.data[o]
            if ch == 0:
                break
            c = chr(ch)
            if c not in string.printable or c in '\x0b\x0c':
                return None
            out.append(c)
            o += 1
        if len(out) < minlen or o >= len(s.data):
            return None
        return ''.join(out)

    def relocated_data(self, a):
        """In a CRO module's data or bss: the loader moves those segments, so the address is not a constant."""
        s = self.img.seg_of(a)
        return s is not None and s.writable and s.addr >= 0x40000000

    def segment_name(self, a):
        s = self.img.seg_of(a)
        if s:
            return s.name
        info = self.img.info
        bss_lo = info['data']['addr'] + info['data']['size']
        if bss_lo <= a < bss_lo + info.get('bss_size', 0) + 0x1000:
            return 'bss'
        return None

    def callees(self, key):
        fn = self.funcs[key]
        return sorted(set(t for _, t in fn.calls + fn.tails))

    def reachable_size(self, key, seen=None):
        """Instructions in the function and everything it calls (approximate: shared callees counted once)."""
        seen = set() if seen is None else seen
        stack, total = [key], 0
        while stack:
            k = stack.pop()
            if k in seen or k not in self.funcs:
                continue
            seen.add(k)
            total += self.funcs[k].ninsts
            stack.extend(self.callees(k))
        return total
