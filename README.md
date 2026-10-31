# acnl

**Animal Crossing: New Leaf – Welcome amiibo** as readable, moddable C++, rewritten from the game's code as recompiled
by [3dsrecomp](../3dsrecomp). Every rewritten function replaces the recompiled one at its address; the rest of the game
keeps running as recompiled code around it.

```cpp
// games/acnl/src/save/pockets.cpp
u32 Pockets::total_bells() const {
    u32 total = wallet.get();
    for (u32 slot = 0; slot < SLOTS; slot++) {
        if (slot_locked[slot]) {
            continue;
        }
        if (item_at(slot).category() == CATEGORY_BELLS) {
            total += item_at(slot).price();
        }
    }
    return total;
}
GUEST_EXPORT(0x0071da54, Pockets::total_bells);
```

No game files are included: the game data comes from your own dump, through 3dsrecomp (`../3dsrecomp/data/<game>`).

## How the rewrite is done

The recompiled C is complete but unreadable (registers as variables, flags, gotos, a re-entry table per function).
The rewrite is mechanical where it can be, and proved equal to the original rather than tested:

1. `tools/decomp` (Rust, Z3) decompiles each function of the generated C into structured code and proves, for every
   input, that it computes the same thing as the original. 89.6 % of the 90,344 functions prove today.
2. It writes the proved function as C++ in this repository's conventions (structs with checked offsets, `gptr`,
   callees as `guest::Function`). The C++ file is read back and proved equal to the decompiled function, so what is
   committed is proved equal to the original (in progress).
3. Program-wide analyses recover signatures, struct layouts and classes (RTTI, vtables).
4. Names and comments are the only part that needs understanding: a model returns name maps (never code), the tool
   applies them and proves the result again.

See [docs/decomp.md](docs/decomp.md) for the decompiler, what a proof covers and the plan, and
[docs/acnl.md](docs/acnl.md) for what is known about the game.

## Building and running

Needs a 3dsrecomp checkout next to this folder, with the game extracted there (see its README), and its `.venv`
(Python with capstone); Rust and Homebrew's Z3 for the decompiler.

```sh
../3dsrecomp/.venv/bin/python tools/build.py acnl         # recompile (first time), prepare, build
../3dsrecomp/.venv/bin/python tools/run.py acnl --frames 4000 --input "600:A:6,700:A:6" --shot 1000
../3dsrecomp/.venv/bin/python tools/run.py acnl --deep --frames 100000 --timeout 900   # a new game up to the town hall
(cd tools/decomp && cargo build --release)
tools/decomp/target/release/decomp decompile 304014       # the decompiled view of a function and its proof
```

`run.py` runs the game in its own folder (`build/acnl/runs/<name>`, a fresh save), with scripted input (3dsrecomp's
`RECOMP_INPUT` format), and converts the screenshots to PNG. `--no-overlay` (`GUEST_OVERLAY=0`) runs the recompiled
originals instead of every rewrite, `GUEST_DISABLE=<address>,...` instead of the listed ones.

## Writing C++ by hand

The 3,400 functions in `games/acnl/src` were written by hand before the decompiler, and checked by running them
against the original. To write or change one:

1. `tools/fn.py acnl 0x0071da54` prints the function's disassembly annotated with the names known so far
   (rewrites, imports, RTTI classes), strings, jump tables, callers and callees; `--args` lists the constant
   arguments callers pass, `--range lo hi` shows a whole area.
2. Write it under `games/acnl/src` on structs that mirror the game's memory (`gptr<T>` for guest pointers,
   `GUEST_OFFSET` to check field offsets), and export it at its address with `GUEST_EXPORT`. Functions that are still
   recompiled are called through `guest::Function<address, signature>`.

Style: braces around every `if`, `for`, `while` and `else` body; no magic numbers (enums, named constants, or a
comment on the line). Rules that keep rewrites exact: keep the original's order of floating-point operations (the
build uses `-ffp-contract=off`), reproduce ARM behaviour where C++ differs (`arm.hpp`: shifts by 32 or more,
float-to-int conversions), keep the original's quirks and bugs, and keep code in namespaces (the host has its own
`main`, and macros like `SEEK_SET` or `stderr`).

## Layout

| Path | What |
|---|---|
| `games/acnl/src/` | the rewritten code; `game.json` says where the game's data is |
| `guest/include/guest/` | the C++ support library: guest memory (`memory.hpp`), calls in both directions (`abi.hpp`) |
| `guest/src/runtime.cpp` | entering rewrites (or their originals: `GUEST_OVERLAY`, `GUEST_DISABLE`) |
| `tools/decomp/` | the proving decompiler and the C++ emitter |
| `tools/build.py` | recompiles the game with 3dsrecomp, renames the rewritten originals, builds with CMake |
| `tools/run.py` | test runs |
| `tools/fn.py`, `program.py` | function analysis: disassembly, call graph, strings, names, call-site constants |
| `tools/rtti.py` | C++ classes, base classes and vtables from the game's RTTI |
| `tools/offsets.py` | where a struct offset is used (e.g. which code touches a save field) |

## How it fits with 3dsrecomp

3dsrecomp is used unchanged: its recompiler generates the C, its runtime (kernel, services, GPU, audio) runs it.
`tools/build.py` copies the generated C to `build/acnl/gamecode`. In that copy, each rewritten function's original
becomes `guest_gen_<address>`; it stays in the binary to run instead of the rewrite on demand, and for resuming
inside it. `f_<address>`, which the rest of the code calls, jumps to the rewrite.
