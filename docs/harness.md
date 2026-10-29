# The rewrite harness

`tools/harness/harness.py` rewrites functions with Claude through the API and keeps only the ones the shadow
checker verifies. The API key comes from `.env` (`ANTHROPIC_API_KEY`, never committed).

```sh
.venv/bin/python tools/harness/harness.py run --rounds 20 --batches 40 --model claude-sonnet-5-5 \
    --escalate claude-opus-5-5 --escalate-effort high --budget 50       # add --batch-api for half price
.venv/bin/python tools/harness/harness.py repair                       # full check, send failing files back
.venv/bin/python tools/harness/harness.py bench --models claude-sonnet-5-5:medium,claude-opus-5-5:medium
```

## A round

1. **Selection.** Game-code functions only (not the SDK, NintendoWare or sead, from the RTTI library map),
   3-160 instructions, no system calls, at least one caller. Bottom-up: functions whose callees are already named
   come first, then the most-called. Each group is up to 5 neighbours in the binary (usually one source file).
2. **Prompt.** A cached system prompt: the support library's headers, exactness and readability rules, a guide
   to RVCT idioms, two finished rewrites as examples. Per group: every header of the project, the rewritten code
   closest to the group (callers', callees', neighbours'), and for each function its annotated disassembly,
   callers, callees and the constants callers pass.
3. **Structure and lint.** The answer must export exactly the requested functions (or explain a skip), give each
   a fuzz generator, import only real function starts, and not touch files changed since its prompt. A lint
   rejects raw-offset memory access, unexplained magic numbers and redefined types once, asking for a readable
   version.
4. **Compile** the rewrites. Errors are blamed by file (including clang's "requested here" notes), or by compiling
   each group alone. Failing groups are reverted.
5. **Verify** in one game run: shadow checks during the intro, then fuzzing of only the new functions (at least
   200 inputs each). Crashes during fuzzing are recovered in-process (the input is dropped); a crash in normal play
   is bisected with `GUEST_DISABLE` to find the responsible groups.
6. **Accept** a group when all its functions verify (10 real checks or 50 fuzzed inputs, no mismatch). Failures go
   back once with the checker's findings, on the escalation model. Every 100 verified functions: commit and push.
7. **Repair**, every few rounds: every rewritten function is checked and fuzzed again; files with failures go back
   to the escalation model, and functions that still fail are taken out (they run as recompiled code again).

## Benchmarks (6 groups, 30 functions, first attempt, no retries)

| Setup | Haiku 5.5 | Sonnet 5.5 | Opus 5.5 |
|---|---|---|---|
| First prompt | 8 verified, $0.019 each | 17, $0.037 each | 21, $0.071 each |
| With lint, related code and the RVCT guide | — | 20, $0.053 each | 20, $0.10 each |

Opus wrote the most readable code (structs, typed globals, honest names) with the first prompt; Sonnet tended to
raw offsets until the lint and the related-code context. Haiku thinks a lot (25-50k output tokens per group) and
gets about a quarter of the functions through.

## What went wrong on the way (and is fixed)

- Fuzzing ran out of time: the test run stopped at a frame count that kept advancing while fuzzing. Runs now end
  when fuzzing is done (`GUEST_FUZZ_EXIT`).
- Reverting a failed group deleted a header that a verified group had overwritten; now no group may write a file
  that changed (or appeared) since its prompt, and a full check before repairs catches anything inconsistent.
- Restored generated files kept their old timestamps, so the build kept stale objects (`build.py` touches them).
- A failed lookup inside a static-local initializer aborted the process during fuzzing; imports are now cached
  without a guard, and checked against the function list before compiling.
- Assertions (`Break`) hit by fuzz inputs deadlocked inside the kernel; they are now caught before it.
- Functions verified by real calls only can still be wrong on unusual inputs: the repair pass found five such
  functions from the first round; four were fixed, one was taken out.

## Checker bugs found later (and fixed)

Found while rewriting by hand (`tools/harness/session.py`), each of them made fuzzed checks pass that should not have:

- While fuzzing, a run that made a system call released the "check in progress" flag, so another game thread could
  start its own check and reset the journal under the fuzz loop. Pages were then not restored, the rewrite ran on the
  original's results, and rewrites that read before they write looked right. The fuzz loop now keeps the flag.
- Setting page protections over a 255 MB range stops at the first hole the game leaves in it, leaving the main stack
  (at the top) writable. Protection now falls back to smaller pieces.
- `ABI`: member functions got their reference arguments as copies, so a member function writing through a
  reference wrote to a temporary. Arguments are now forwarded.

The rewrites that were verified under the old checker were all checked again: two had wrong field offsets
(`StateTask::run`, and one more fixed since).

A last known weakness: during checks of real game calls, another game thread working on the same memory can very
rarely make the original and the rewrite start from different states (one `queue_append` mismatch in about 7,500
calls, gone on the next run). A mismatch that does not repeat is this; one that does is real.
