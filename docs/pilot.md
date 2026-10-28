# Pilot: the SMB homebrew (hbsmb)

The pilot target is `3ds.3dsx`, an early (November 2024) 3DS build of the Super Mario Bros. static recompiler from
`moonbit/smb`: devkitARM + libctru + newlib, GCC `-O2`, ARM code, 630 functions. Its source exists (the commit
that matches is `2c8a8cb`, extracted to `data/hbsmb-reference`), which makes it the one target where the
rewrite can be graded against the truth. The reference was not read while rewriting, only afterwards.

## What was rewritten

All of the program's own hand-written code, 105 functions, plus 3 routines of the recompiled game:

| Area | Functions | Source |
|---|---|---|
| `main`, the ROM loader | 2 | `main.cpp`, `nes/cartridge.cpp` |
| CPU state, memory bus, operand reads | 13 | `nes/cpu.*`, `nes/bus.cpp` |
| 6502 instruction helpers | 89 | `nes/instructions.*` |
| PPU memory and registers, APU registers | 4 (+3 with no entry of their own) | `nes/ppu.*`, `nes/apu.*` |
| Game routines: `ReadPortBits`, `UpdateScreen`, `TopScoreCheck` | 3 | `smb/*.cpp` |

What is left is libraries (libctru, newlib, libgcc) and the 6502 code recompiled from SMB (`code.c`).

## Verification

- **Shadow checker** (`GUEST_SHADOW=1`, see `guest/src/runtime.cpp`): every checked call runs the original and
  the rewrite from the same state and compares return registers, preserved registers and every byte either wrote.
  A 3000-frame scripted run checks each hot function 200-8000 times: 0 mismatches. An injected bug
  (`^ 1` on a result) was reported on 2192 of 2192 checked calls.
- **Whole-program equality**: the game's data and bss (NES RAM, PPU and APU state) dumped at frames 600, 601 and
  602 are byte-identical with and without the rewrites, and so are the screenshots. This covers what the checker
  cannot: `main` (never returns) and the ROM loader (system calls).

## Against the reference source

- Function boundaries, semantics and data layout: all correct. Every quirk was reproduced, including
  `ror_absx` writing back to the un-indexed address (a bug in the original) and the PPUSTATUS toggle.
- Names: close without having seen them. `read_byte`, `write_byte`, `ppu_read_register`, `ppu_write_register`,
  `ppu_read`, `ppu_write`, `ppu_init`, `zero_page_x`, `absolute_y`, `pha`, `pla` match exactly; `set_nz` vs
  `update_nz`, `write_pulse_control` vs `pulse_write_control`, `oam_dma` vs `ppu_transfer_oam`,
  `controller_bit` vs `controller1_btn_index`. The game routines' names are exact (from the SMB disassembly), and
  `TopScoreCheck` is the reference line for line, with loops instead of gotos.
- Structure: the CPU and PPU state are separate globals in the reference; the rewrite has structs (`Cpu`, `Ppu`),
  because GCC laid them out contiguously and nothing in the binary tells them apart. Equivalent, arguably easier
  to mod, but not the original's structure.
- One mistake was caught before testing: `sei` and `cld` (both empty functions) had been assigned by address
  order; the order of the calls in `Start` corrected it.

## What worked well

1. **The overlay** (`tools/build.py` + `GUEST_EXPORT`): no change to 3dsrecomp; the original stays in the binary as
   `guest_gen_<address>`; the game always runs, with any subset of functions rewritten. Rebuilding after a new
   export recompiles only the generated files that contain the originals.
2. **The shadow checker**: cheap (in-process, no recording), thorough (byte-exact on all written memory), and it
   runs during normal play. Its few false alarms all came from the checker's own assumptions (r12 is scratch;
   preemption checks on non-loop branches; never-returning functions), each fixed once.
3. **Static analysis over reading generated C**: annotated disassembly (strings, names, jump tables) was enough for
   functions up to ~300 instructions. Two small analyses settled what reading alone could not:
   constants at call sites told zero-page from absolute variants apart (`--args`), and following where
   `hidScanInput` stores `kHeld & ~kOld` identified `hidKeysDown` exactly.
4. **C++ in guest memory**: `gptr<T>`, `global<T, address>`, `Function<address, signature>` and struct layouts with
   `GUEST_OFFSET` checks read like ordinary C++. Templates collapsed 89 instruction helpers to one line each
   (`GUEST_EXPORT(0x001208e4, lda<absolute_x>)`).

## What did not, and what changes for ACNL

1. **Compiler-made function boundaries.** GCC tail-merged code: `apu_write`, `ppu_write_register`, `oam_dma` and
   `update_nz` have no entry of their own (only branches reach them), so the recompiler sees them as part of
   their callers. It also emitted copies (`read_absolute` duplicates `read_byte`, zero page and absolute forms
   compile identically). The rewrite has to restore the source's functions, and the tools must show shared
   blocks once (`fn.py --range` shows each function's own code only).
2. **Coverage.** Checks only cover what a run exercises: 14 rewritten functions were never called from recompiled
   code in the 3000-frame script (e.g. `ldx<zero_page_y>`, `cpy<absolute>`); some of those, like
   `ppu_read_register`, are called only from rewritten C++ and so are checked only through their callers. ACNL needs longer, more varied scripts, and a coverage report that lists rewritten
   functions with no checked calls.
3. **System calls and endless functions** cannot be shadow-checked. Whole-program comparison worked here because
   the NES state advances exactly one frame per vblank; ACNL is multi-threaded and will not be that deterministic,
   so its system-call-heavy code needs narrower comparisons (state of specific objects after an action).
4. **Emulated registers are memory.** The SMB code keeps the 6502's A, X, Y and flags in memory, so a rewrite of a
   game routine must leave them exactly as the original did: the routines stay instruction-level (with names and
   loops), not truly high level. ARM code compiled from C/C++ does not have this problem: only the ABI's registers
   are observable, which is what makes the ACNL rewrite tractable.
5. **Host name clashes**: the game's `main`, newlib's `SEEK_SET` and `stderr` collide with the host's symbols and
   macros. All rewritten code lives in namespaces; library constants get distinct names.
6. **For ACNL specifically**: RVCT (not GCC), C++ with virtual functions (calls through vtables need a typed
   wrapper), CRO modules (functions at slot addresses), a ~10x larger generated code base (build times), the
   floating-point ABI to confirm, and a much larger heap for the checker to protect.
