#!/usr/bin/env python3
"""Runs a built game for testing, in its own folder (build/<game>/runs/<name>), and reports what happened.

    tools/run.py hbsmb --frames 1500 --input "120:START:5,200:RIGHT:1200" --shot 300
    tools/run.py hbsmb --shadow            # check the rewritten functions against the originals (GUEST_SHADOW)

Screenshots (every --shot frames) are converted to PNG. The shadow checker's report (guest_shadow.log) and the
end of the game's log are printed.
"""
import argparse
import glob
import json
import os
import shutil
import struct
import subprocess
import sys
import time
import zlib

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))


def ppm_to_png(src, dst):
    with open(src, 'rb') as f:
        data = f.read()
    parts = data.split(maxsplit=4)
    w, h = int(parts[1]), int(parts[2])
    pixels = parts[4][:w * h * 3]
    raw = b''.join(b'\0' + pixels[y * w * 3:(y + 1) * w * 3] for y in range(h))
    def chunk(tag, body):
        c = struct.pack('>I', len(body)) + tag + body
        return c + struct.pack('>I', zlib.crc32(tag + body) & 0xffffffff)
    png = b'\x89PNG\r\n\x1a\n' + chunk(b'IHDR', struct.pack('>IIBBBBB', w, h, 8, 2, 0, 0, 0))
    png += chunk(b'IDAT', zlib.compress(raw, 6)) + chunk(b'IEND', b'')
    with open(dst, 'wb') as f:
        f.write(png)


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument('game')
    ap.add_argument('--name', default='test')
    ap.add_argument('--frames', type=int, default=1200)
    ap.add_argument('--input', default='')
    ap.add_argument('--shot', type=int, default=0, help='screenshot every n frames')
    ap.add_argument('--shot-from', type=int, default=0)
    ap.add_argument('--speed', type=int, default=400)
    ap.add_argument('--shadow', nargs='?', const='1', default=None, help='1 (sampled) or all')
    ap.add_argument('--no-overlay', action='store_true', help='run the recompiled originals only')
    ap.add_argument('--env', action='append', default=[], help='extra NAME=value')
    ap.add_argument('--timeout', type=int, default=600)
    args = ap.parse_args()

    cfg = json.load(open(os.path.join(ROOT, 'games', args.game, 'game.json')))
    data = os.path.normpath(os.path.join(ROOT, cfg['data']))
    run = os.path.join(ROOT, 'build', args.game, 'runs', args.name)
    if os.path.exists(run):
        shutil.rmtree(run)
    os.makedirs(run)
    for name, src in cfg.get('sdmc', {}).items():
        dst = os.path.join(run, 'save', 'sdmc', name)
        os.makedirs(os.path.dirname(dst), exist_ok=True)
        shutil.copy(os.path.join(ROOT, src), dst)
    env = dict(os.environ)
    env.update(RECOMP_FRAMES=str(args.frames), RECOMP_SPEED=str(args.speed), RECOMP_NOAUDIO='1', GPU_SCALE='1')
    if args.input:
        env['RECOMP_INPUT'] = args.input
    if args.shot:
        env['RECOMP_SHOT'] = str(args.shot)
        env['RECOMP_SHOT_FROM'] = str(args.shot_from)
    if args.shadow:
        env['GUEST_SHADOW'] = args.shadow
    if args.no_overlay:
        env['GUEST_OVERLAY'] = '0'
    for kv in args.env:
        k, _, v = kv.partition('=')
        env[k] = v
    exe = os.path.join(ROOT, 'build', args.game, 'cmake', args.game)
    t0 = time.time()
    with open(os.path.join(run, 'stdout.txt'), 'w') as out:
        try:
            rc = subprocess.call([exe, data], cwd=run, env=env, stdout=out, stderr=subprocess.STDOUT,
                                 timeout=args.timeout)
        except subprocess.TimeoutExpired:
            rc = 'timeout'
    print('exit %s after %.1f s; run folder %s' % (rc, time.time() - t0, run))
    for ppm in sorted(glob.glob(os.path.join(run, '*.ppm'))):
        ppm_to_png(ppm, ppm[:-4] + '.png')
        os.remove(ppm)
    logs = glob.glob(os.path.join(run, 'save', '*', 'log.txt')) + [os.path.join(run, 'stdout.txt')]
    for log in logs:
        if os.path.exists(log):
            lines = [l for l in open(log, errors='replace') if '[shadow]' not in l]
            print('--- %s (last lines)' % os.path.relpath(log, run))
            sys.stdout.writelines(lines[-12:])
    for name in ('guest_shadow.log', 'guest_shadow_summary.txt'):
        path = os.path.join(run, name)
        if os.path.exists(path):
            print('--- ' + name)
            sys.stdout.write(open(path).read()[-20000:])


if __name__ == '__main__':
    main()
