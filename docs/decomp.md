# decomp: proved decompilation of the recompiled C

`tools/decomp` (Rust) turns the recompiler's generated C for a function into readable code and proves, with Z3,
that the two compute the same thing for every input. The aim is a starting point for rewrites that needs only names,
types and comments, without trusting the decompiler: every output it prints has been checked against the original.

    cd tools/decomp && cargo build --release && cd ../..
    tools/decomp/target/release/decomp decompile 304014 6513d8   # print the view and the verdict
    tools/decomp/target/release/decomp check-all [N] [THREADS]    # decompile and prove every function (or the first N)
    tools/decomp/target/release/decomp selftest 304014            # a mutated decompilation must be rejected
    tools/decomp/target/release/decomp parse-all                  # parser coverage

It reads `build/acnl/generated/code_*.c` (run from the repository root after a build). Z3 comes from Homebrew
(`tools/decomp/.cargo/config.toml` points the z3 crate at it).

## How it works

- `parse.rs` reads the generated C subset (register copies, flags, `RD`/`WR` memory macros, labels and gotos, the
  entry table, calls) into `ast.rs`. 99.9 % of the 90k functions parse.
- The decompiled function is built in the same language, by passes that each keep the meaning: `inline.rs` (block
  temporaries), `flow.rs` (liveness under the calling convention, dead code), `propagate.rs` (register values into
  their single use), `simplify.rs` (constant folding, conditions, predicated ifs into if/else), `saves.rs` (removes the
  saving of callee-saved registers), `structure.rs` (gotos into ifs, duplicated return tails, the entry table).
- `sym.rs` gives both programs one meaning by symbolic execution: values are bit-vectors, guest memory is an array of
  bytes, paths are merged at joins. `check.rs` asks Z3 for an input where the original and the decompiled function
  differ in what a caller can observe; none means proved. Functions with loops are proved segment by segment between
  the loop headers (the decompiler keeps every label, so both have the same cut points): from each header, with the
  live variables, CPU state and memory equal, both must reach the same next headers under the same conditions, in
  related states, and leave with equal observables (an induction over the iterations).
- `view.rs` prints the reader's view: a signature from the argument registers read on entry, returns, calls as
  `f_XXXXXXXX(r0, r1, r2, r3)`, without the CPU-state plumbing. The view is a printout of the proved AST; what it hides
  is listed in the file.

## What a proof means (the model and its assumptions)

Observed after a return: r0, r1, s0, s1, r4-r11, sp, the return address, guest memory (except the removed register
save area) and an "effects" token for everything outside guest memory. Scratch registers and flags are not compared.

- Floats are bit patterns; float arithmetic, comparisons and conversions are uninterpreted functions. The decompiler
  never rearranges them, so equal operations on equal inputs are enough (no IEEE reasoning).
- A guest call is opaque: its results (r0-r3, r12, lr, flags, s0-s15, memory, effects) are functions of its target,
  r0-r3, sp, s0-s15, the effects token and the memory it sees. Callees keep r4-r11 and sp, return normally, and do not
  read or write the caller's register save area (calling convention).
- Only entry 0 of a function is decompiled (the others are the runtime resuming a function in the middle).
- Preemption points (`rt_preempt`) only switch threads and are ignored.
- The stack pointer is in [0x1000, 0xf0000000).
- When the register saves are removed, no other memory access of the function reaches the save area; the checker
  verifies that this assumption does not rule out any way out of the function (no vacuous proofs).
- The checker itself is tested by mutation (`selftest`): changing a constant of a decompiled function must be caught.
