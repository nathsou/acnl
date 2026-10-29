#!/bin/sh
# Full check of every rewritten function; commits and pushes only when nothing mismatches.
# usage: tools/harness/safe_commit.sh "message"
cd "$(dirname "$0")/../.." || exit 1
out=build/acnl/session/check3.txt
.venv/bin/python tools/harness/session.py check --all --timeout 900 > "$out" 2>&1
grep -E "^(run|FAIL|verified|REGRESSION|COMPILE|LINK)" "$out" | cut -c1-200
if grep -E "mismatch|^REGRESSION|^COMPILE|^LINK" "$out" > /dev/null; then
    echo "NOT committing: mismatches or build errors (see $out)"
    exit 1
fi
git add games guest tools docs
git commit -q -m "$1

Co-Authored-By: Claude Sonnet 5.5 <noreply@anthropic.com>" && git push -q origin main 2>&1 | tail -1
git log --oneline | head -1
