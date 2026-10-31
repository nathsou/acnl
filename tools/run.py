#!/usr/bin/env python3
"""Runs a built game for testing, in its own folder (build/<game>/runs/<name>), and reports what happened.

    tools/run.py acnl --frames 1500 --input "120:A:5,200:RIGHT:120" --shot 300
    tools/run.py acnl --no-overlay         # the recompiled originals only (GUEST_OVERLAY=0)
    tools/run.py acnl --deep --frames 100000 --timeout 900   # a new game up to the town hall (about frame 90,000)

Screenshots (every --shot frames) are converted to PNG. The end of the game's log is printed.
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


# The new-game script of --deep: the player's and the town's name typed at these frames, the map's "Here!" touched,
# and A pressed every DEEP_A_PERIOD frames otherwise (through the intro and the conversations).
DEEP_EVENTS = [(16600, 'TEXT_Test'), (16900, 'T@262/222:8'), (44000, 'TEXT_Town'), (44300, 'T@262/222:8'),
               (52000, 'T@250/215:8'), (60000, 'T@250/215:8')]
DEEP_START = 600       # the first A press
DEEP_A_PERIOD = 70
DEEP_QUIET = 150       # no A presses this close to an event
DEEP_A_FRAMES = 6      # how long each A press lasts


def deep_input(end):
    """The RECOMP_INPUT string of the new-game script up to frame `end`."""
    events = ['%d:%s' % e for e in DEEP_EVENTS]
    presses = ['%d:A:%d' % (f, DEEP_A_FRAMES) for f in range(DEEP_START, end, DEEP_A_PERIOD)
               if all(abs(f - frame) >= DEEP_QUIET for frame, _ in DEEP_EVENTS)]
    return ','.join(events + presses)


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
    ap.add_argument('--deep', action='store_true', help='play the new-game script (instead of --input)')
    ap.add_argument('--shot', type=int, default=0, help='screenshot every n frames')
    ap.add_argument('--shot-from', type=int, default=0)
    ap.add_argument('--speed', type=int, default=400)
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
    if args.deep:
        env['RECOMP_INPUT'] = deep_input(args.frames)
    elif args.input:
        env['RECOMP_INPUT'] = args.input
    if args.shot:
        env['RECOMP_SHOT'] = str(args.shot)
        env['RECOMP_SHOT_FROM'] = str(args.shot_from)
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
            lines = open(log, errors='replace').readlines()
            print('--- %s (last lines)' % os.path.relpath(log, run))
            sys.stdout.writelines(lines[-12:])

if __name__ == '__main__':
    main()
