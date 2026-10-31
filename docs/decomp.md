# decomp: proved decompilation of the recompiled C

`tools/decomp` (Rust) turns the recompiler's generated C for a function into readable code and proves, with Z3,
that the two compute the same thing for every input. The aim is a starting point for rewrites that needs only names,
types and comments, without trusting the decompiler: every output it prints has been checked against the original.

    cd tools/decomp && cargo build --release && cd ../..
    tools/decomp/target/release/decomp decompile 304014 6513d8   # print the view and the verdict
    tools/decomp/target/release/decomp check-all [N] [THREADS]    # decompile and prove every function (or the first N)
    tools/decomp/target/release/decomp selftest 304014            # a mutated decompilation must be rejected
    tools/decomp/target/release/decomp parse-all                  # parser coverage
    tools/decomp/target/release/decomp emit 304014                # a C++ draft of a proved decompilation
    tools/decomp/target/release/decomp emit-batch LIST OUT.cpp    # drafts of the functions listed in LIST
    tools/decomp/target/release/decomp prove-cpp FILE.cpp [OUT]    # prove a file's C++ equal to the originals
    tools/decomp/target/release/decomp dump build/acnl/decomp     # the view of every function, with its verdict
    tools/decomp/target/release/decomp bisect 304014              # proves after every pass (finds a broken pass)

It reads `build/acnl/generated/code_*.c` (run from the repository root after a build). Z3 comes from Homebrew
(`tools/decomp/.cargo/config.toml` points the z3 crate at it).

## Results (2026-10-31, whole corpus)

All 90,344 generated functions, 5 s per solver query, 10 threads, 1 h 40 min: 80,937 proved (89.6 %), 8,636 solver
timeouts (most prove with 60 s: `DECOMP_RETRY_MS`), about 720 with system calls or rare statements (not handled), 6 that
differ (decompiler bugs the checker caught; a decompilation that is not proved is never used).

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
- A system call (`rt_svc`) is opaque too: r0-r7, memory and effects become functions of its number, r0-r7, sp, the
  thread's TLS address, the memory and the effects token; the other registers stay, and so does the caller's save area.
- Only entry 0 of a function is decompiled (the others are the runtime resuming a function in the middle).
- Preemption points (`rt_preempt`) only switch threads and are ignored.
- The stack pointer is in [0x1000, 0xf0000000).
- A tail call (a branch to another function) returns to the lr it was given.
- The register save area (the bytes the prologue's push writes) is a region of its own: only accesses at a known
  distance below the entry sp reach it (pushes, pops); accesses through pointers and callees never do (calling
  convention: compiled code never reads saved registers through a pointer). With it, removing the saves proves in
  a fraction of a second. `DECOMP_FRAME=0` uses one memory with an assumption per access through a pointer instead,
  checked not to rule out any way out of the function (much slower).
- The checker itself is tested by mutation (`selftest`): changing a constant of a decompiled function must be caught.

## C++ drafts

`emit.rs` writes a proved decompilation as C++ that compiles in this repository (a namespace per function, packed
structs of the argument objects with `GUEST_OFFSET` checks, callees as `guest::Function`, `GUEST_EXPORT`), for a
person (or a model's name map) to name. A draft stands for the proved AST statement for statement: registers start
from the guest CPU as in the generated prologue, are read back from it after calls as `SI()` does, the argument
registers a function does not keep are passed from the CPU, float arguments are handed over before calls, a function
using its stack frame keeps sp in step with the CPU, and before a plain return the registers a caller sees that the
function changed (r1, s0, s1, r4-r11, sp) go back to the CPU. What it cannot write that way yet is refused with the
reason.

## Proving the C++ (`prove-cpp`)

`cpp.rs` reads the C++ back into the AST, with the meaning it has in the game, and `prove-cpp` proves it equal to the
decompiled function (itself proved equal to the original, `decomp_proved.txt` caches those proofs by a hash of the
decompiled function). The two have the same statements, so this proof is fast and is repeated after every rename or
edit. The reading spells out what runs around the C++ (guest/include/guest/abi.hpp):

- the export (`detail::invoke`): parameters from r0-r3 and s0-s15 in order, the result to r0 (s0), pc = the lr at entry;
- a call (`guest::Function`, `guest::call_address`): the arguments are evaluated, then written to r0-r3 (s0-s15),
  lr = `RETURN_TO_HOST`, the callee runs and must return there, the result comes from r0;
- `guest::svc(n)` is `rt_svc` on the guest CPU; `guest::cpu()` fields are the CPU's;
- float `==` and `<` are the Z and N bits of the runtime's `vfp_cmpf` (exactly how it computes them);
- field offsets come from the file's packed structs or, for the repository's structs, from the type database. Every
  such assumption becomes a `static_assert` (offset, size, signedness or pointer type) in a translation unit that
  holds the file, compiled before anything is proved: a stale database cannot give a wrong proof.

When the decompiled function keeps its pushes (functions with loops), the C++ keeps them too and returns through its
copy of the entry lr: at the loop headers both are related by the invariant that the lr slot still holds that lr,
and the save area bytes are the same in both (assumed at a header, proved on arrival). `DECOMP_DEBUG=1` prints, for
each segment, the obligations the simplifier cannot settle alone.

Only the subset the emitter writes is accepted (with any names); `char` and `bool` fields are refused (their values in
guest memory are not what C++ assumes), and so is a file that defines a function named like a runtime helper. Renamed
variables, structs, fields, labels and functions prove as before: the proof relates variables at loop headers by name,
so the reader pairs a renamed draft's declarations and labels with the draft's by their order (renaming keeps it) and
proves with the draft's names. The checker is tested by mutation: changing a constant, a comparison, an operand or a
field of the C++ is caught.

## games/acnl/src/decompiled

The proved drafts go there (`split.py DRAFTS.cpp OUTDIR` splits a batch into files). Their names are generated and
recognisable, to be replaced by real ones later:

- functions: `d_<address>::f_<address>` (the namespace keeps each draft's helpers apart);
- the objects their arguments point to: `Object_<address>_<argument>`, fields `byte_/half_/word_<offset>`;
- callees: `call_<address>` (`guest::Function`), registers `r0`-`r14`, flags `nf/zf/cf/vf`.

## Plan for the full rewrite (2026-10-31)

Everything mechanical is done by tools; a model is used only for names and short comments. Equivalence is proved,
never sampled:

1. `original ≡ D`: the decompiler's output D (its AST) is proved equal to the recompiled original (above; slow
   queries, done once per function, cached).
2. `D ≡ C++`: the C++ file that is committed is read back and proved equal to D (`prove-cpp`, above). By
   transitivity the committed C++ equals the original for every input, without fuzzing.
3. Program-wide analyses (algorithmic): signatures (argument registers, whether callers read r1), types and structs
   (unification of pointer types across calls, RTTI classes and vtables), library and twin recognition.
4. Names: a model returns name maps (structs, fields, functions, parameters, locals, constants) and comments, never
   code; the tool applies them, regenerates the C++ and proves step 2 again. Structs first (their names spread to every
   function that uses them), then functions callees before callers. In batches through the API.
5. Faster proofs: memory as a sequence of stores with loads and stores as uninterpreted functions (sound, and enough
   whenever no pass reorders memory operations), the byte-array model only as the fallback.
6. Code layout (algorithmic, then named): functions are placed by the translation unit they came from, recovered from
   the binary (RVCT links each object file's functions, literal pools and constant data contiguously; class methods
   from RTTI and vtables, file-local helpers called only by their neighbours and shared rodata mark the boundaries).
   One .cpp per unit, folders by library and subsystem (SDK, NintendoWare and sead ranges from the RTTI namespaces,
   one folder per CRO module, the game's code by call-graph clusters), a header per struct or class used across
   units. Placement is metadata the emitter reads; files are named `tu_<address>.cpp` until the naming step names
   them with the rest. Moving code does not touch the proofs, which are per function.
