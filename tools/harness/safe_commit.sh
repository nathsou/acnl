#!/bin/sh
# Full check of every rewritten function; commits and pushes only when nothing mismatches.
# usage: tools/harness/safe_commit.sh "message"
cd "$(dirname "$0")/../.." || exit 1
out=build/acnl/session/check3.txt
.venv/bin/python tools/harness/session.py check --all --timeout 1200 > "$out" 2>&1
grep -E "^(run|FAIL|verified|REGRESSION|COMPILE|LINK)" "$out" | cut -c1-200
if grep -E "mismatch|^REGRESSION|^COMPILE|^LINK" "$out" > /dev/null; then
    echo "NOT committing: mismatches or build errors (see $out)"
    exit 1
fi
# the game must also play: the plain run (no checker) through the intro to the first conversation
smoke=build/acnl/session/smoke.txt
.venv/bin/python tools/run.py acnl --name smoke --frames 1500 --timeout 300 > "$smoke" 2>&1
if grep -q FATAL "$smoke"; then
    echo "NOT committing: the plain run crashes (see $smoke); bisect with GUEST_DISABLE"
    exit 1
fi
git add games guest tools docs
git commit -q -m "$1

Co-Authored-By: Claude Sonnet 5.5 <noreply@anthropic.com>" && git push -q origin main 2>&1 | tail -1
git log --oneline | head -1
