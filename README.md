# acnl

Readable C++ for games recompiled by [3dsrecomp](../3dsrecomp), one function at a time, with every rewritten
function checked against the recompiled original while the game runs. The goal is **Animal Crossing: New Leaf –
Welcome amiibo** as source code that is simple to read and to mod.

The recompiled C is complete but unreadable (a function per ARM instruction sequence, registers as variables).
This project replaces it piece by piece: a rewritten function is ordinary C++ on typed game structures, and the rest
of the game keeps running as recompiled code around it.

```cpp
// games/acnl/src/save/pockets.cpp
u32 Pockets::total_bells() const {
    u32 total = wallet.get();
    for (u32 slot = 0; slot < SLOTS; slot++) {
        if (slot_locked[slot]) continue;
        if (item_at(slot).category() == CATEGORY_BELLS) total += item_price(item_at(slot));
    }
    return total;
}
GUEST_EXPORT(0x0071da54, Pockets::total_bells);
```

No game files are included: the game data comes from your own dump, through 3dsrecomp (`../3dsrecomp/data/<game>`).

## Status

| Game | Rewritten | Verified |
|---|---|---|
| `hbsmb` (pilot: the SMB homebrew) | 108 functions: all of its own code, 3 game routines | shadow checks + whole-program memory equality |
| `acnl` | about 500 functions so far, most of them written by the rewrite harness | shadow checks + fuzzing on every function, full re-checks |

See [docs/pilot.md](docs/pilot.md) for what the pilot taught, [docs/acnl.md](docs/acnl.md) for the ACNL work, and
[docs/harness.md](docs/harness.md) for the harness that rewrites functions with Claude and keeps the verified ones.

## Building and running

Needs a 3dsrecomp checkout next to this folder, with the game extracted there (see its README), and its
`.venv` (Python with capstone).

```sh
../3dsrecomp/.venv/bin/python tools/build.py acnl         # recompile (first time), prepare, build: build/acnl/acnl
../3dsrecomp/.venv/bin/python tools/run.py acnl --frames 4000 --input "600:A:6,700:A:6" --shot 1000
```

`run.py` runs the game in its own folder (`build/<game>/runs/<name>`, a fresh save), with scripted input
(3dsrecomp's `RECOMP_INPUT` format), and converts the screenshots to PNG.

## Checking rewrites

```sh
python3 tools/run.py acnl --shadow                       # sampled shadow checks
python3 tools/run.py acnl --shadow --env GUEST_FUZZ=1    # plus fuzzing, once, after frame 600 (GUEST_FUZZ_FRAME)
```

- **Shadow checks** (`GUEST_SHADOW=1`): on sampled calls, the original runs first with the game's writable memory
  write-protected; every page it writes is saved and restored, then the rewrite runs from the same state. Return
  registers, preserved registers and every byte either of them wrote must match; the original's results are kept.
  Calls that make system calls can't be replayed and are counted as unchecked.
- **Fuzzing** (`GUEST_FUZZ=1`): a rewrite can declare an input generator with `GUEST_FUZZ`; the checker then runs
  the original and the rewrite on generated inputs. This covers code that a test script does not reach, and edge
  cases (corrupted save data) that play never produces.
- The run folder gets `guest_shadow.log` (each mismatch, with the differing registers and memory) and
  `guest_shadow_summary.txt` (calls, checks, fuzzed inputs, mismatches per function).
- `GUEST_OVERLAY=0` runs the recompiled originals instead of every rewrite (to compare behaviour).

## Writing a rewrite

1. Find the function and read it: `tools/fn.py acnl 0x0071da54` prints its disassembly annotated with the names
   known so far (rewrites, imports, RTTI classes, `symbols.txt`), strings, jump tables, callers and callees.
   `--args` lists the constant arguments callers pass, `--range lo hi` shows a whole area.
2. Write it in C++ under `games/<game>/src`, on structs that mirror the game's memory (`gptr<T>` for guest
   pointers, `GUEST_OFFSET` to check field offsets), and export it at its address with `GUEST_EXPORT`.
   Functions that are still recompiled are called through `guest::Function<address, signature>` declarations.
3. If the function is hard to reach in play, give it a `GUEST_FUZZ` generator.
4. `tools/build.py`, then a `--shadow` run (with `GUEST_FUZZ=1`), until the summary shows only checks and no
   mismatches.

Style: always use braces for `if`, `for`, `while` and `else` bodies, even a single statement.

Rules that keep rewrites exact: keep the original's order of floating-point operations (the build uses
`-ffp-contract=off`), reproduce ARM behaviour where C++ differs (`arm.hpp`: shifts by 32 or more, float-to-int
conversions), keep the original's quirks and bugs, and keep code in namespaces (the host has its own `main`, and
macros like `SEEK_SET` or `stderr`).

## Layout

| Path | What |
|---|---|
| `guest/include/guest/` | the C++ support library: guest memory (`memory.hpp`), calls in both directions and fuzzing (`abi.hpp`) |
| `guest/src/runtime.cpp` | entering rewrites, the shadow checker, fuzzing, reports |
| `games/<game>/src/` | the rewritten code; `game.json` says where the game's data is |
| `tools/build.py` | recompiles the game with 3dsrecomp, renames the rewritten originals, builds with CMake |
| `tools/run.py` | test runs |
| `tools/fn.py`, `program.py` | function analysis: disassembly, call graph, strings, names, call-site constants |
| `tools/rtti.py` | C++ classes, base classes and vtables from the game's RTTI |
| `tools/offsets.py` | where a struct offset is used (e.g. which code touches a save field) |
| `docs/` | notes on the pilot and on ACNL |

## How it fits with 3dsrecomp

3dsrecomp is used unchanged: its recompiler generates the C, its runtime (kernel, services, GPU, audio) runs it.
`tools/build.py` copies the generated C to `build/<game>/gamecode`. In that copy, each rewritten function's
original becomes `guest_gen_<address>`; it stays in the binary as the reference for the checker and for resuming
inside it. `f_<address>`, which the rest of the code calls, jumps to the rewrite.
