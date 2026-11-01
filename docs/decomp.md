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

Round trip (C++ read back and proved, `prove-cpp`), on the batch of 6,249 drafts (2026-11-01): 5,933 proved (95 %);
201 of the others are fragments of other functions (jump table targets, shared epilogues), which the draft of their
function covers. 5,921 drafts are in `games/acnl/src/decompiled`, and with all of them enabled the game reaches the
title screen and a new game reaches the town hall.

Naming pilot (13 functions, Claude Opus 5.5 at low effort): $0.09, about $0.007 a function; every renamed draft proves
again. Names are good where the code or its callees say what it does, mechanical for thin wrappers of unnamed callees:
naming goes callees first over the whole program, starting from the 18,979 names already known (`seed_names.py`).

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
- A callee with a proved signature (`decomp signatures`, below): its results a caller observes (r0, r1, s0, s1), its
  memory and effects depend on its argument registers only, sp, the memory and the effects token (and each result on
  its own value: a register it leaves alone passes through); its scratch results still depend on every argument
  register. Without a table (`DECOMP_SIGNATURES`, default `build/acnl/decomp_signatures.txt`) every callee takes them all.
- A system call (`rt_svc`) is opaque too: r0-r7, memory and effects become functions of its number, r0-r7, sp, the
  thread's TLS address, the memory and the effects token; the other registers stay, and so does the caller's save area.
- Only entry 0 of a function is decompiled (the others are the runtime resuming a function in the middle).
- Preemption points (`rt_preempt`) only switch threads and are ignored.
- The stack pointer is in [0x1000, 0xf0000000).
- A tail call (a branch to another function) returns to the lr it was given.
- Callees are functions, not fragments of one: 12.7k of the 91.6k generated functions start at a label inside
  another function (jump table targets, shared epilogues that pop that function's saved registers and pc). They do
  not return to the lr they are given, so `prove-cpp` refuses a draft of one and a draft that calls one (in the
  original equivalence both sides make the same call, so it holds whatever the callee does). A tail call to an
  epilogue written as `return call_X(...)` came back to the epilogue's popped pc instead of the C++ caller in the game.
- The register save area (the bytes the prologue's push writes) is a region of its own: only accesses at a known
  distance below the entry sp reach it (pushes, pops); accesses through pointers and callees never do (calling
  convention: compiled code never reads saved registers through a pointer). With it, removing the saves proves in
  a fraction of a second. `DECOMP_FRAME=0` uses one memory with an assumption per access through a pointer instead,
  checked not to rule out any way out of the function (much slower).
- Results no caller reads are not compared (`decomp results`, results.rs): r0, r1, s0 or s1 is observed only when
  some caller reads it after the call or passes it on (a tail call, a register it does not keep), to a fixed point.
  Every caller of a function no pointer reaches (the recompiler's `pointed.txt`: its address appears nowhere as a
  value) is a direct call or branch of the program; a function a pointer reaches also gets what the program's indirect
  call sites (`rt_dispatch`) read. The rewrites' calls read what their C++ result types read (`guest::Function<A,
  R(...)>`, `call_address<R>`, a template's `R` by the types it is used with in its file); code that does not parse
  reads everything. The emitter then writes `void` functions and no write-back of an unread r1. This rests on the
  whole program as recompiled: code that calls such a function some other way is not covered.
  An indirect call to a constant (dispatch.rs: a veneer between ARM and Thumb, `add r12, pc, #1; bx r12`) is a
  direct call of that address (14,197 of the 44,911 indirect calls), or an indirect one when the address is no
  function's entry. The other indirect call sites read all four results: after them comes, sooner or later, a callee
  without a signature (it takes r0-r3 and s0-s15), so about 89% of the functions have r1 observed and 99% s0.
  Splitting the virtual calls by vtable slot was tried (2026-11-01; 22,653 calls are `*(*(p) + 4k)`, with the
  assumption that slot k reaches the word at `t + 4k` of a table the program names, or a function whose address the
  code forms): it changed nothing (r1 observed in 82,233 of 92,095 functions, s0 in 91,078), because each of the 191
  slots called reads all four results too, and the functions of one slot together read every argument register
  (classes differ in arity). Only 1,081 virtual calls are on the
  caller's own `this`, so knowing the class there would not help much either. With the indirect calls reading r0
  only (a measurement, not sound), r1 would be observed in 20,722 functions and s0 in 17,251: the noise in the drafts
  comes mostly from the signatures, which list every register when a virtual call lies anywhere below.
- The checker itself is tested by mutation (`selftest`): changing a constant of a decompiled function must be caught.

## Signatures (`decomp signatures OUT [N] [THREADS]`)

Which argument registers (r0-r3, s0-s15) a function's behaviour depends on, proved by non-interference: the function
against a copy of itself that starts by giving the other argument registers arbitrary values. First the ones that are no
results (r2, r3, s2-s15) at once, comparing everything; then each result register that is no argument (r0, r1, s0, s1)
alone, comparing everything but itself. Changing the registers one group after the other, the statement the call
model uses follows. The guess comes from liveness (the registers read before being written, and those its calls read);
a wrong guess is never a wrong signature, only no signature. Functions are proved callees first, in one pass over the
call graph: a function waits until every function it calls has been tried, and is proved with their signatures (sound
by induction: every fact is proved under facts proved before); the functions of a recursive cycle go one after the
other, each with the signatures of those before it. With a signature, the C++ passes a callee only its arguments:
`call_0011c00c(r0)` instead of four registers. A cached proof (`decomp_proved.txt`) is keyed by the signatures of the
function's own callees, so extending the table keeps every proof that does not depend on the change.

A callee's scratch results (r2, r3, r12, s2-s15, flags) depend on every argument register, so a call keeps all of them
when one of its scratch results is read: through a variable (liveness), or through the CPU, when a register the
function does not keep is read by the next call (`flow::scratch_flows`). That next call reads it through its signature,
or because its own scratch results are read later in turn (to a fixed point): `f(r1 = 4); f(r1 = 3); g(r2)` with
`f` reading r1 only still needs the first call's r0, which its r2 result depends on, through the second call's r2.
Missing that chain cost 59 of the 5,921 committed drafts their proof (the prover refused them; none was wrong).

A function whose every argument register looks read (the float registers often only go on to a callee without a
signature) is still tried: dropping core registers decides how many arguments its calls pass.

## C++ drafts

`emit.rs` writes a proved decompilation as C++ that compiles in this repository (a namespace per function, packed
structs of the argument objects with `GUEST_OFFSET` checks, callees as `guest::Function`, `GUEST_EXPORT`), for a
person (or a model's name map) to name. A draft stands for the proved AST statement for statement: registers start
from the guest CPU as in the generated prologue, are read back from it after calls as `SI()` does, the argument
registers a function does not keep are passed from the CPU, float arguments are handed over before calls, a function
using its stack frame keeps sp in step with the CPU, and before a plain return the registers a caller sees that the
function changed (r1, s0, s1, r4-r11, sp) go back to the CPU. What it cannot write that way yet is refused with the
reason.

What makes it read like code rather than registers (each step keeps the statements' meaning; `prove-cpp` proves the
result):

- The stack frame as one object. When sp moves only by constants (the same depth wherever paths meet, deepest at
  every call, back at every return, no tail call), the export pushes the registers the original pushes
  (`GUEST_EXPORT_FRAMED`, so callees see the same stack, saved values included) and a `guest::StackFrame frame(N)`
  holds the rest of the frame; locals are `*frame.at<u32>(k)` and their addresses `frame.at(k).addr()`. A kept push
  (`ea = sp - 4; *ea = r4; sp = ea`) counts as a constant move too. A tail call keeps the old form (the export's frame
  lasts until the C++ returns; the original pops before branching).
- The frame's slots read and written in place, each at one offset with one type and none overlapping another, are
  the fields of a struct the size of the frame: `guest::StackFrameOf<Frame_<address>> frame;`, `frame->word_10`
  (`StackFrameOf<T>` is a `StackFrame` of `sizeof(T)` bytes whose `->` is the T at sp). Addresses of slots stay
  `frame.at(k).addr()`.
- Locals that are the base of field accesses (two or more, fields not overlapping, not the entry value of a register)
  are pointers to a struct of their own: `gptr<Local_<address>_<name>> x`, `x->word_4`; a call's result too, as
  `x = gptr<S>(call(...))`. A parameter given as the register itself and never assigned is one as well
  (`gptr<Object_<address>_<k>> rk` in the signature).
- After another call, trailing `guest::cpu()->r[k]` arguments are left out (a call writes only the arguments it is
  given; the registers past them are what the previous call left, as in the original), as many at every call of the
  callee as the widest needs.
- Declarations at the first assignment (`u32 r0_1 = call_x(r1);`) when the variable's other uses follow in the same
  block and no goto jumps into that stretch; a value used once is written into its use when nothing between changes
  what it reads (and, if it reads memory, only plain variables are assigned between); `x = x + e` is `x += e`.
- `guest::cpu()->r[N] = x;` before a return is left out when x was read from that register in the same block with
  no call or CPU write between (the CPU still holds it), and so is the read once nothing else uses it.
- Values the CPU holds (values.rs): a value of r1-r3 or s0-s15 defined only by reading the register back after calls
  and read only by calls (as their argument in that register) and returns (its write-back) is still in the register
  wherever it is read (every call is followed by such a reading, so no call comes between). It is not read back, the
  calls take `guest::cpu()->r[k]` (and leave it out when it trails), and its write-back goes; not for a value a loop
  header relates.
- An indirect call to a function's address (an ARM/Thumb veneer: `add r12, pc, #1; bx r12`, dispatch.rs) is a call
  of that function, with its signature: `return call_00100834(...)` rather than `call_address<u32>(0x100835u, ...)`.
- Constants: a value defined as a constant plus a constant (`r0_32 = r0_31 - 0x2c`, r0_31 a constant) is a constant
  too; `K + x` is written `x + K`; a vtable's address (the RTTI's) is `vtable_<class>` (`vtable_<class>_at_<offset>`
  for a base class's), declared `inline constexpr u32 vtable_X = 0x...u;`. The declarations that name a constant
  (globals, callees, field offsets, vtables) carry no "(from the original)" comment; lines of code with a hex literal
  do.
- `if (c) { return 1u; } return 0u;` is `return c;` (`0u`, `1u`: the comparison turned around), other plain values
  `return c ? a : b;`.
- Gotos: `if (c) { A; goto L; } S; L:` is `if (c) { A } else { S }` (also when L follows the enclosing block, and
  with other gotos to L inside S); `L: B; if (c) { A } E` with A jumping back to L and A, E not falling through is
  `L: B; if (!c) { E } A`, so the back edge reaches the top level and becomes a loop (`do { } while (1)` when it is
  unconditional: the checker lowers a constant-true condition to a jump); unreachable statements after a jump go,
  and so does a goto to the next statement; `if (a) { if (b) X }` is `if (a && b) X`; an else holding one if prints
  as `else if`. A block only one goto enters (not fallen into) moves to that goto, with a goto to the label it fell
  into; `if (c) { A } else { B; goto L; } T; L:` is `if (c) { A; T } else { B }`: together, switch-like chains of
  `if (x == k) goto Ak` become else-if chains holding their blocks.
- A void function's last `return;` goes; `u32 r6 = r0;` with r0 never assigned again is r0 (loop-free functions),
  and so is `u32 r0 = arg0.addr();` (its uses read `arg0.addr()`); `(x - K) == 0` reads `x == K`; a comparison of a
  widened unsigned byte or halfword drops the widening; a sign-extended load reads `*gptr<s8>(a)`.
- A tail call after the frame: `frame.release();` gives the StackFrame back first (the original pops before
  branching); the export then pushes nothing, the StackFrame holds the whole frame.
- Loops: a label only when something besides the loop jumps to it (`prove-cpp` pairs label-less loops with the
  decompiled function's in order); structuring keeps a loop, or a label only its own statements jump to, inside an
  `if` or a loop body, and looks inside loop bodies.
- Conditions: `res = a - 0` compares (`cmp r0, #0`) as `s32(a) < 0`; `x = A; if (!x) x = B;` is `A || B` (and `&&`
  for `if (x)`); `if (A) X; if (B) X;` with X returning is `if (A || B) X`; a copy `x = t` right before a condition
  that reads t lets it read x (so `t = r1 >> 1; r1 = t; while (t)` is `r1 >>= ...; while (r1)`); negated comparisons
  flip inside loops too. Complementary predicated ifs merge into an if/else even when the second condition is written
  differently (`nf != vf` and `nf == vf`, `!c || z` and `c && !z`: compared once negations are pushed in), before the
  flags they test are substituted into conditions (`nf = res >> 31; vf = ...;` read by a later if, when nothing between
  changes them, and not a flag the if itself sets); the signed comparison of `res = a - b` is then found in later ifs
  too. `cmp; movlt; movge` becomes `x = s32(a) < 6 ? 0x1800 : 0`.
- Shifts: `lsl_r(x, n & m)` with m < 32 is `x << (n & m)` (and lsr, asr); a shift's carry nobody reads is the plain
  shift (`lsl_rc` and `lsl_r` give the same value; the model now knows that value, the carry stays opaque).
- `if (c) { x = A; } else { x = B; }` is `x = c ? A : B;` (`c ? 1 : 0` the condition itself); a register read folded
  into the write-back of the same register (a statement doing nothing) is left out; a write-back of a parameter's
  own register before any call is left out (the CPU still holds the entry value).
- `s32(x & 0x80000000) >= 0` is `s32(x) >= 0`; `s32(u32(e))` with e an s32 is `e`; a constant stored that fits the
  field is a plain number; a conversion to the assigned variable's own type is left out (not then folded elsewhere).
- An exit block may hold labels only exit gotos reach, and its size counts what is written (not the bookkeeping).

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
  holds the file, compiled before anything is proved: a stale database cannot give a wrong proof. A field is reached
  on the host at `g_mem + address + offset`, which does not wrap at 32 bits as the guest does, so offsets of
  0x80000000 or more are refused (the emitter writes such an access as `*gptr<T>(address + offset)` instead): a
  field at 0xfffffff8 is 8 bytes before the object in the game but 4 GiB after it on the host. That one read past the
  guest memory and crashed the game at random moments, with no proof failing;
- shifts are by constants below the width, or by `x & m` with m below it (C++ leaves the others undefined, the model
  defines them);
- `GUEST_EXPORT_FRAMED(A, f, mask)` is `detail::invoke`'s `PushedFrame`: the masked registers stored below sp as a
  push stores them and sp lowered past them before the function runs, sp back at its return; the proof then counts
  those bytes as the save area (the decompiled function, with the saves removed, leaves them alone);
- `guest::StackFrame frame(N)`, at the top of the function only: sp lowered by N, back at every return;
  `frame.at<T>(k)` is a pointer to the CPU's sp + k;
- the build compiles the C++ with `-fwrapv -fno-strict-aliasing -ffp-contract=off` (CMakeLists.txt): signed
  arithmetic wraps, memory is bytes whatever the type of the pointer, and float operations round one at a time, as
  the model assumes.

When the decompiled function keeps its pushes (functions with loops), the C++ keeps them too and returns through its
copy of the entry lr: at the loop headers both are related by the invariant that the lr slot still holds that lr,
and the save area bytes are the same in both (assumed at a header, proved on arrival). A register a caller observes
that the C++ leaves in the CPU (it keeps no variable for it, or touches neither the variable nor the CPU's copy) holds
what the decompiled function keeps in its variable, at every header (assumed there, proved on arrival like the rest).
`DECOMP_DEBUG=1` prints, for each segment, the obligations the simplifier cannot settle alone.

A short block that ends the function (straight code ending in a return or a tail call) is written in place of each goto
to it, an early return; labels nothing jumps to are left out.

Each register and temporary is split into its values (`values.rs`: definitions joined by the uses they reach), so a
register that holds an address, then a count, then a call's result becomes three variables (`r0`, `r0_1`, `r0_2`),
each of which can be named on its own. The value a register has at the entry, and the values live at a loop header,
keep the register's name (the proof relates variables by name at headers). A copy is left out when its source is not
written on any path to its reads. With callee signatures, liveness counts only a callee's arguments (and the results
read after it) as read by a call, so calls pass only their arguments and parameters that were only forwarded go.

Only the subset the emitter writes is accepted (with any names); `char` and `bool` fields are refused (their values in
guest memory are not what C++ assumes), and so is a file that defines a function named like a runtime helper. Renamed
variables, structs, fields, labels and functions prove as before: the proof relates variables at loop headers by name,
so the reader pairs a renamed draft's declarations and labels with the draft's by their order (renaming keeps it) and
proves with the draft's names. The checker is tested by mutation: changing a constant, a comparison, an operand or a
field of the C++ is caught.

## Structs (`decomp structs [OUTDIR] [HEADER] [THREADS]`)

The objects functions receive, as structs shared across the program (`structs.rs`). Facts come from every function's
decompilation: the fields an argument's object has (offsets and types of its accesses), the constants stored at its
offset 0 (vtables) and the arguments passed on unchanged (entry values, copies seen through). With the program's RTTI
(`build/acnl/rtti.json`: 4923 classes, their bases and vtables) the arguments are typed by class: a vtable's functions
receive `this` of its class, a function storing a vtable at its argument's offset 0 builds or destroys one, and an
argument passed on makes the callee's argument at least that class (the closest common ancestor of all it receives),
until nothing changes. A class's struct holds the fields its typed arguments access and its primary bases' fields, at
their offsets (packed). First run: 3705 class structs for 25392 arguments of 25229 functions. The header goes to
`games/acnl/src/recovered/structs.hpp` and the type database (structs, parameter types) to OUTDIR; with
`DECOMP_TYPES=OUTDIR` the emitter writes the class instead of a per-function struct. The facts are hints: each draft
that uses a struct still has its layout checked by the compiler and is proved as usual. Without RTTI, arguments are
joined across calls by equality (union-find), which joins too much through generic callees.

## Names (`name.py`, `rename.py`)

A model chooses names; it never writes code. `name.py DRAFTS NAMES.json ADDRESS...` asks it for a name map per
function (name, comment, variable and label renames), callees first so that each prompt shows its callees' names, with
the RTTI class of a virtual function as context, and checks every answer. `rename.py NAMES.json IN OUT` applies a map
(functions, variables, labels, callees, globals, comments) with the same checks (identifiers, no keywords or runtime
helpers, no collisions); `prove-cpp` then proves the renamed drafts (declarations pair by their order).

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
