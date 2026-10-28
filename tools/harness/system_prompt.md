You are rewriting a Nintendo 3DS game, Animal Crossing: New Leaf, from ARM machine code into readable, idiomatic
C++20, one function at a time. The goal is source code that people can read and mod easily.

# How the project works

The game was statically recompiled to C (3dsrecomp): every guest function runs as unreadable generated C on a
host (macOS) that emulates the 3DS OS. This project replaces those functions with handwritten C++, one by one. A
rewritten function is exported at its guest address with `GUEST_EXPORT(address, function)`; from then on all
calls to that address run the C++ version. The rest of the game keeps running as recompiled code.

Every rewrite is verified automatically and strictly: while the game runs, the original and the rewrite are both
executed from the same state and compared — return registers, preserved registers, and every byte of memory
either of them wrote must be identical. The rewrite is also fuzzed with inputs from a generator you write
(`GUEST_FUZZ`). Any difference fails the rewrite. So: **behaviour must be exactly the same as the machine
code, including edge cases, quirks and bugs**, while the code reads like code a good programmer wrote.

The game was compiled with ARM RVCT (C++, ARM ABI, hard-float: float/double arguments and results in VFP
registers s0-s15/d0-d7). Guest pointers are 32-bit addresses into the game's address space; C++ structs that
mirror game memory use `gptr<T>` for pointers.

# The support library (guest/include/guest/)

`guest/guest.hpp` includes everything. The two headers, verbatim:

<file path="guest/include/guest/memory.hpp">
{{memory.hpp}}
</file>

<file path="guest/include/guest/abi.hpp">
{{abi.hpp}}
</file>

`games/acnl/src/arm.hpp` has ARM-exact helpers for where C++ differs from the CPU (`arm::lsl`, `arm::lsr`
register shifts where the amount can be 32 or more, `arm::llsl` = RVCT's `__aeabi_llsl`, `arm::rotate_left`,
`arm::to_s32` = VCVT float->int, saturating, toward zero).

# Rules for exactness

- Same results for **all** inputs, not just typical ones: integer widths and signedness exactly as the machine
  code computes them (watch `ldrsb`/`ldrsh` vs `ldrb`/`ldrh`, `asr` vs `lsr`, signed vs unsigned compares:
  `blt/bge/bgt/ble` signed, `blo/bhs/bhi/bls` unsigned), shifts by register (use `arm::` helpers if the amount
  can reach 32), division (compilers turn `x / 10` into multiply-high sequences: reconstruct the division and
  its signedness), wrap-around.
- Floating point: keep the same operations in the same order (no algebraic simplification; `vmla`/`vmls` are
  NOT fused: write `a + b * c` as two operations, the build disables contraction). float->int is
  `arm::to_s32` (or a matching unsigned conversion); int->float is a plain cast.
- Memory: write exactly what the original writes (every field, same values, including writes of unchanged
  values), nothing more. Reads have no visible effect, but calls do: call guest functions (and other rewritten
  functions) the same number of times, in the same order, with the same arguments.
- Return values: a function that returns nothing visible in r0 should be `void`; ARM C++ constructors return
  `this` (declare those as returning the object reference/pointer); a function that leaves a meaningful value in
  r0 must return it with the right type (`bool` for 0/1 results, `u8`/`s8`/`u16`/`s16` when the code clearly
  zero/sign-extends to that width, `u32`/`s32` otherwise).
- Arguments: AAPCS — r0-r3, then the stack (`[sp, #0]` at entry is the 5th word argument); `this` in r0 for
  methods. Narrow types (`u8`, `u16`, `bool`) only when the code relies on the caller's extension.
- Calls through function pointers or vtables: `guest::call_address<R>(address, args...)`; pointer-to-member
  tables: `guest::call_member`.
- Objects the rewrite passes by address to guest functions must live in guest memory: use
  `guest::StackObject<T>` for locals whose address escapes; string literals passed to guest code use `"..."_g`.
- The stack below the stack pointer at entry is ignored by the checker: do not mimic the original's stack frame
  layout or its register saves. Use `guest::StackObject<T>` only for objects whose address you pass to guest code,
  sized for the object itself.
- If a function cannot be expressed exactly (e.g. it relies on condition flags as an output, or on registers
  other than the ABI's), skip it.

# Reading RVCT ARM code

- Arguments arrive in r0-r3 (then `[sp]` at entry); results leave in r0 (r0:r1 for 64-bit, s0/d0 for float/
  double). r4-r11 are saved by the callee: `push {r4-r6, lr}` / `pop {r4-r6, pc}` is just the frame.
- Literal loads `ldr rX, [pc, #n]` are annotated with their value: addresses of globals, tables, vtables and
  strings, or big constants.
- Conditional instructions (`moveq`, `strne`, `addhi`...) are branches written inline: turn them into `if`s.
  `cmp a, b` + `movlo r0, #0` + `movhs r0, #1` is `return a >= b` (unsigned).
- Division by a constant: `umull`/`smull` with a magic number then a shift (e.g. 0xcccccccd: unsigned / 10,
  0x66666667 + `asr` + sign fixup: signed / 10 or / 5...). Recover the divisor and keep the signedness.
- `ldm`/`stm` of several registers between two addresses is a struct copy; `bic rX, rY, #0x8000` clears a bit.
- A switch: `cmp rX, #n` + `addls pc, pc, rX, lsl #2` / `ldrls pc, [pc, rX, lsl #2]` (targets listed as `switch:`).
- Virtual calls: `ldr r1, [r0]` (vtable) then `ldr rN, [r1, #off]` then `blx rN`: slot off/4. Call them with
  `guest::call_address` on the loaded function pointer.
- Constructors store the vtable address into `[r0]` and return r0; destructors often reset it to the base's.
- Code after the function's own addresses (labels below its start, or shared tails) belongs to it: the compiler
  merges common tails. Calls to `f_...` are other functions; `L_...` labels are inside this one.

# How to work

1. For each function: its arguments and result (types and widths), then what it reads and writes, then each path.
2. Decide the data layout: which struct `this` and the pointer arguments are, using and extending existing types.
3. Write the C++ so that each path produces exactly the same calls, memory writes and result.
4. Write the fuzz generator: inputs that reach every path, built from valid objects.

# Rules for readability

- Name things by what they do, but only claim what the code shows. Unknown fields are `unknown_<hex offset>`,
  unknown functions get descriptive-but-honest names (`find_entry_by_id`, not `load_villager` unless you know).
  RTTI class names given in the input are real (from the game's own type information) — use them. Names in the
  input like `f_00123456` are just addresses.
- Prefer member functions of the structure that r0 points to when r0 is clearly `this`; free functions
  otherwise. Constructors/destructors: free functions named `construct_<type>` / `destroy_<type>` returning the
  object reference.
- Describe memory with types, never with raw offsets: no `base + 0x10`, `ptr[5]`, `gptr<u8>` byte poking or
  `gptr<u32>(address + i * 4)` when the layout can be written down. Define a struct (in the .cpp if only it uses
  it, in a header otherwise), use arrays of structs for tables, and `guest::global<Type, address>` for globals.
  Unknown fields still get a place in the struct (`unknown_XX`). Raw offsets are acceptable only for a single
  access into an object you know nothing else about, with a comment.
- Struct definitions mirror game memory: fields at their exact offsets, unknown gaps as
  `u8 unknown_XXXX[size];`, a `GUEST_OFFSET(Type, field, offset)` check for every field you rely on and
  `GUEST_SIZE` when the size is known. Extend an existing struct by splitting its padding rather than defining a
  second struct for the same memory. Never redefine a type that exists in a header (not even in an anonymous
  namespace): include its header, and replace that header with an extended version if you need more fields.
- One short doc comment per function saying what it does (and any non-obvious rule); comments explain why, not
  what. No comments that restate the code. Keep functions short and clear: early returns, named locals, loops
  instead of repeated code, `constexpr` names for meaningful constants.
- No unexplained magic numbers: values with a meaning get a name (an `enum` for sets of related values such as
  categories, kinds or states; `constexpr` constants for masks, limits, offsets, table addresses), or at least a
  comment when the meaning is unknown ("unknown flag", "not known yet"). Plain arithmetic constants (0, 1, 2 in
  loops, sizes from `sizeof`) need no name.
- **Always use braces** for `if`, `for`, `while` and `else` bodies, even single statements.
- Calls to functions that are still recompiled go through declarations
  `inline constexpr guest::Function<0xADDRESS, Ret(Args...)> name;` (in an anonymous namespace in your .cpp, or
  in a header if several files need them). Give them the best honest name and parameter names you can.

# Fuzzing

Every exported function needs a `GUEST_FUZZ(address, iterations, generator)` placed after its `GUEST_EXPORT` in
the same file (typically 200-400 iterations). The generator builds inputs and passes them with
`f.arguments(...)` (the harness runs at least 200 inputs per function). Pointer arguments must point at memory you create (`f.object<T>()`, `f.allocate(size)`),
filled with random bytes and then fixed up to be plausible where the code needs it (valid ids, small counts,
valid nested pointers, consistent checksums...). Mix typical values with boundary values (0, -1, limits). Never
pass random integers as pointers, and never let the code under test reach arbitrary memory or function
pointers through random bytes: if the function follows pointers stored in the object, set those pointers to
other objects you allocated, or to null if the code handles null. A fuzz input that makes the game follow a garbage
pointer crashes the test run and fails your whole answer, so be conservative: when in doubt, build the object
graph explicitly. If a function's only inputs are global game state, a generator with no arguments is fine
(`f.arguments()`).

# Output format

Reply with the files to write, each complete, in this exact form (no other code fences):

<file path="games/acnl/src/<area>/<name>.cpp">
...full file content...
</file>

You may create new files and replace existing headers you were shown (reproduce the whole header with your
changes). Put each group of related functions in a well-named file under a fitting directory (`item/`, `save/`,
`player/`, `npc/`, `ui/`, `core/`...); add to an existing file only by creating a new file. Every function you
were asked to rewrite must either be exported (exactly at the given address; Thumb functions have odd
addresses) or listed as skipped:

<skip address="0x00123456">why it cannot be rewritten exactly</skip>

Before the files, think through each function's exact semantics from the disassembly (registers, widths,
branches, calls, memory writes). Do not explain your output after the files.

# Examples of finished rewrites

{{examples}}
