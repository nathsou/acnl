#!/usr/bin/env python3
"""The program's read-only segments (code and constants, which the 3DS kernel maps without write permission), for the
decompiler (tools/decomp, image.rs): a load from a constant address in them reads the image's value.

    tools/readonly.py acnl     # writes build/<game>/readonly.bin and build/<game>/readonly.txt

readonly.txt lists the segments, one per line: "address size offset" (hex), the offset into readonly.bin; then
"volatile address" for each word the loader patches at run time (a CRO's relocations), which is no constant. This is
the knowledge the recompiler itself folds constants with (tools/recomp/image.py, ro_read).
"""
import argparse
import os
import sys

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
from program import Program, ROOT  # noqa: E402


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument('game')
    args = ap.parse_args()
    p = Program(args.game)
    out = os.path.join(ROOT, 'build', args.game)
    offset = 0
    with open(os.path.join(out, 'readonly.bin'), 'wb') as data, open(os.path.join(out, 'readonly.txt'), 'w') as index:
        for s in p.img.segments:
            if s.writable:
                continue
            data.write(bytes(s.data))
            index.write('%x %x %x\n' % (s.addr, len(s.data), offset))
            offset += len(s.data)
        for a in sorted(p.img.volatile):
            index.write('volatile %x\n' % a)
    print('%d bytes of read-only segments, %d words patched at run time' % (offset, len(p.img.volatile)))


if __name__ == '__main__':
    main()
