// Turns forward gotos into ifs (the control-flow graph is unchanged, so the checker proves it like any pass):
//     if (c) goto L; A; L:                      ->  if (!c) { A }
//     if (c) goto L1; A; goto L2; L1: B; L2:    ->  if (!c) { A } else { B }
// when the labels have no other reference (gotos, switch cases, the entry table) and nothing outside A or B jumps into
// them (a loop, or a label, that only their own statements jump to may stay inside).
use crate::ast::*;
use std::collections::HashMap;

fn count_refs(list: &[Stmt], out: &mut HashMap<String, usize>) {
    for s in list {
        match s {
            Stmt::Goto(l) => *out.entry(l.clone()).or_default() += 1,
            Stmt::Switch(_, cases) => {
                for (_, l) in cases {
                    *out.entry(l.clone()).or_default() += 1;
                }
            }
            Stmt::If(_, a, b) => {
                count_refs(a, out);
                count_refs(b, out);
            }
            Stmt::While { top, test, body, check, .. } => {
                // the loop's own jumps (the back edge, the jump to the test)
                *out.entry(top.clone()).or_default() += 1;
                if let Some(t) = test {
                    *out.entry(t.clone()).or_default() += 1;
                }
                count_refs(body, out);
                count_refs(check, out);
            }
            _ => {}
        }
    }
}

// the labels the statements define (loops' included)
fn defined_labels(list: &[Stmt], out: &mut Vec<String>) {
    for s in list {
        match s {
            Stmt::Label(l) => out.push(l.clone()),
            Stmt::If(_, a, b) => {
                defined_labels(a, out);
                defined_labels(b, out);
            }
            Stmt::While { top, test, body, check, .. } => {
                out.push(top.clone());
                out.extend(test.iter().cloned());
                defined_labels(body, out);
                defined_labels(check, out);
            }
            _ => {}
        }
    }
}

// whether something outside the statements jumps to a label they define
fn has_label(list: &[Stmt], refs: &HashMap<String, usize>) -> bool {
    let mut defs = Vec::new();
    defined_labels(list, &mut defs);
    if defs.is_empty() {
        return false;
    }
    let mut inside = HashMap::new();
    count_refs(list, &mut inside);
    defs.iter().any(|l| refs.get(l).copied().unwrap_or(0) != inside.get(l).copied().unwrap_or(0))
}

fn negate(c: &Expr) -> Expr {
    match c {
        Expr::Un(UnOp::LNot, x) => (**x).clone(),
        other => Expr::Un(UnOp::LNot, Box::new(other.clone())),
    }
}

fn goto_only(a: &[Stmt], b: &[Stmt]) -> Option<String> {
    match (a, b) {
        ([Stmt::Goto(l)], []) => Some(l.clone()),
        _ => None,
    }
}

fn step(list: &mut Vec<Stmt>, refs: &HashMap<String, usize>) -> bool {
    for s in list.iter_mut() {
        if let Stmt::If(_, a, b) | Stmt::While { body: a, check: b, .. } = s {
            if step(a, refs) || step(b, refs) {
                return true;
            }
        }
    }
    for i in 0..list.len() {
        let (c, l1) = match &list[i] {
            Stmt::If(c, a, b) => match goto_only(a, b) {
                Some(l) => (c.clone(), l),
                None => continue,
            },
            _ => continue,
        };
        let Some(j) = list[i + 1..].iter().position(|s| matches!(s, Stmt::Label(l) if *l == l1)).map(|p| p + i + 1) else {
            continue;
        };
        let a: Vec<Stmt> = list[i + 1..j].to_vec();
        // (other gotos to the label from inside A still land right after the new if)
        let mut inside = HashMap::new();
        count_refs(&a, &mut inside);
        if refs.get(&l1).copied().unwrap_or(0) != 1 + inside.get(&l1).copied().unwrap_or(0) {
            continue;
        }
        if has_label(&a, refs) {
            continue;
        }
        // if-else: A ends with goto L2, and L2 follows B
        if let Some(Stmt::Goto(l2)) = a.last() {
            // (this removes the first label too: only when nothing inside A still jumps to it)
            if refs.get(l2) == Some(&1) && inside.get(&l1).copied().unwrap_or(0) == 0 {
                if let Some(k) = list[j + 1..].iter().position(|s| matches!(s, Stmt::Label(l) if l == l2)).map(|p| p + j + 1) {
                    let b: Vec<Stmt> = list[j + 1..k].to_vec();
                    if !has_label(&b, refs) {
                        let then: Vec<Stmt> = a[..a.len() - 1].to_vec();
                        let new = Stmt::If(negate(&c), then, b);
                        list.splice(i..k + 1, std::iter::once(new));
                        return true;
                    }
                }
            }
        }
        let new = Stmt::If(negate(&c), a, vec![]);
        // (the label stays while gotos inside still use it)
        let end = if inside.get(&l1).copied().unwrap_or(0) > 0 { j } else { j + 1 };
        list.splice(i..end, std::iter::once(new));
        return true;
    }
    false
}

// whether control can run past the end of the statements (their last one does not return, jump or tail-call)
fn falls_through(list: &[Stmt]) -> bool {
    !matches!(list.last(), Some(Stmt::Return | Stmt::Goto(_) | Stmt::GuestCall(_, true, ..) | Stmt::Dispatch(true, ..)))
}

// Gotos out of an if whose other way does not fall through:
//     if (c) { A; goto L; } S; L:      ->  if (c) { A } else { S } L:
//     L: B; if (c) { A } E             ->  L: B; if (!c) { E } A             (A and E, the rest, do not fall
//                                                                            through; A jumps back to L)
// The second brings the back edge to the top level, where `loops` sees it. The control-flow graph is the same.
// (`follow`: the label control reaches when it runs past the end of the list, the one right after the enclosing if:
// a goto to it from the end of the list, or before a rest that does not fall through, leaves the block anyway)
fn branches(list: &mut Vec<Stmt>, refs: &HashMap<String, usize>, follow: Option<&str>) -> bool {
    let n = list.len();
    for i in 0..n {
        let after: Option<String> = match list.get(i + 1) {
            Some(Stmt::Label(x)) => Some(x.clone()),
            None => follow.map(|f| f.to_string()),
            Some(_) => None,
        };
        match &mut list[i] {
            Stmt::If(_, a, b) => {
                if branches(a, refs, after.as_deref()) || branches(b, refs, after.as_deref()) {
                    return true;
                }
            }
            Stmt::While { body, check, .. } => {
                if branches(body, refs, None) || branches(check, refs, None) {
                    return true;
                }
            }
            _ => {}
        }
    }
    // statements after a return, goto or tail call, up to the next label, never run
    if let Some(k) = (0..list.len().saturating_sub(1)).find(|&k| !falls_through(&list[..=k]) && !matches!(list[k + 1], Stmt::Label(_))) {
        list.remove(k + 1);
        return true;
    }
    // goto L; L:  (a jump to the next statement)
    if let Some(k) = (0..list.len().saturating_sub(1)).find(|&k| matches!((&list[k], &list[k + 1]), (Stmt::Goto(a), Stmt::Label(b)) if a == b)) {
        list.remove(k);
        return true;
    }
    // goto <the label after the block> as the last statement: the block ends there anyway
    if let (Some(Stmt::Goto(l)), Some(f)) = (list.last(), follow) {
        if l == f {
            list.pop();
            return true;
        }
    }
    // the gotos anywhere in the statements
    fn gotos(list: &[Stmt], out: &mut Vec<String>) {
        for s in list {
            match s {
                Stmt::Goto(l) => out.push(l.clone()),
                Stmt::If(_, a, b) | Stmt::While { body: a, check: b, .. } => {
                    gotos(a, out);
                    gotos(b, out);
                }
                _ => {}
            }
        }
    }
    // if (c) { A } else { B; goto L; } T; L:  ->  if (c) { A; T } else { B } L:   (and with A ending in the goto)
    for i in 0..list.len() {
        let Stmt::If(c, a, b) = &list[i] else { continue };
        if a.is_empty() || b.is_empty() {
            continue;
        }
        let (c, a, b) = (c.clone(), a.clone(), b.clone());
        let (goto_in_b, l) = match (a.last(), b.last()) {
            (_, Some(Stmt::Goto(l))) if falls_through(&a) => (true, l.clone()),
            (Some(Stmt::Goto(l)), _) if falls_through(&b) => (false, l.clone()),
            _ => continue,
        };
        let at = list[i + 1..].iter().position(|s| matches!(s, Stmt::Label(x) if *x == l)).map(|p| p + i + 1);
        let at = at.or_else(|| (follow == Some(l.as_str())).then_some(list.len()));
        let Some(j) = at else { continue };
        let tail: Vec<Stmt> = list[i + 1..j].to_vec();
        if has_label(&tail, refs) {
            continue;
        }
        let new = if goto_in_b {
            Stmt::If(c, [a, tail].concat(), b[..b.len() - 1].to_vec())
        } else {
            Stmt::If(c, a[..a.len() - 1].to_vec(), [b, tail].concat())
        };
        list.splice(i..j, std::iter::once(new));
        return true;
    }
    for i in 0..list.len() {
        let (c, a) = match &list[i] {
            Stmt::If(c, a, b) if b.is_empty() && !a.is_empty() => (c.clone(), a.clone()),
            _ => continue,
        };
        // the label right after a tail that does not fall through (in this list, or after the block)
        if let Some(Stmt::Goto(l)) = a.last() {
            let at = list[i + 1..].iter().position(|s| matches!(s, Stmt::Label(x) if x == l)).map(|p| p + i + 1);
            let at = at.or_else(|| (follow == Some(l.as_str())).then_some(list.len()));
            if let Some(j) = at {
                let tail: Vec<Stmt> = list[i + 1..j].to_vec();
                // (the tail reaches the label too when it falls through: either way, the if-else is the same)
                if !tail.is_empty() && !has_label(&tail, refs) {
                    let then = a[..a.len() - 1].to_vec();
                    let new = if then.is_empty() { Stmt::If(negate(&c), tail, vec![]) } else { Stmt::If(c, then, tail) };
                    list.splice(i..j, std::iter::once(new));
                    return true;
                }
                continue;
            }
        }
        // a back edge inside (to a label before it in this list), with a rest that does not fall through
        let mut inside = Vec::new();
        gotos(&a, &mut inside);
        let back = inside.iter().any(|l| list[..i].iter().any(|s| matches!(s, Stmt::Label(x) if x == l)));
        let rest: Vec<Stmt> = list[i + 1..].to_vec();
        if back && !falls_through(&a) && !rest.is_empty() && !falls_through(&rest) && !has_label(&rest, refs) && !has_label(&a, refs) {
            let mut new = vec![Stmt::If(negate(&c), rest, vec![])];
            new.extend(a);
            list.splice(i.., new);
            return true;
        }
    }
    false
}

// A block only one goto enters (a label with one reference, after a statement that does not fall through) moves to
// that goto, ending with a goto to the label that followed it if it fell into it:
//     if (c) goto A; ... return; A: S; B:      ->  if (c) { S; goto B; } ... return; B:
// (switch-like chains of `if (x == k) goto Ak` become ifs holding their blocks). The control-flow graph is the same.
fn motions(body: &mut Vec<Stmt>, refs: &HashMap<String, usize>) -> bool {
    // the goto to `l` anywhere in the statements, replaced by `with`
    fn replace(list: &mut Vec<Stmt>, l: &str, with: &[Stmt]) -> bool {
        for i in 0..list.len() {
            match &mut list[i] {
                Stmt::Goto(x) if x == l => {
                    list.splice(i..i + 1, with.iter().cloned());
                    return true;
                }
                Stmt::If(_, a, b) | Stmt::While { body: a, check: b, .. } => {
                    if replace(a, l, with) || replace(b, l, with) {
                        return true;
                    }
                }
                _ => {}
            }
        }
        false
    }
    fn contains_goto(list: &[Stmt], l: &str) -> bool {
        list.iter().any(|s| match s {
            Stmt::Goto(x) => x == l,
            Stmt::If(_, a, b) | Stmt::While { body: a, check: b, .. } => contains_goto(a, l) || contains_goto(b, l),
            _ => false,
        })
    }
    // a candidate in this list (or a nested one): (label, the block to move, where it sat)
    fn find(list: &[Stmt], refs: &HashMap<String, usize>, top: &[Stmt]) -> Option<(String, Vec<Stmt>, usize)> {
        for j in 1..list.len() {
            let Stmt::Label(a) = &list[j] else { continue };
            if refs.get(a) != Some(&1) || falls_through(&list[..j]) {
                continue;
            }
            let k = list[j + 1..].iter().position(|s| matches!(s, Stmt::Label(_))).map_or(list.len(), |p| p + j + 1);
            let mut block: Vec<Stmt> = list[j + 1..k].to_vec();
            let sat = block.len();
            if block.is_empty() || has_label(&block, refs) || contains_goto(&block, a) {
                continue;
            }
            if falls_through(&block) {
                match list.get(k) {
                    Some(Stmt::Label(b)) => block.push(Stmt::Goto(b.clone())),
                    _ => continue,
                }
            }
            // the goto must be somewhere (not a switch case or the entry table)
            if !contains_goto(top, a) {
                continue;
            }
            return Some((a.clone(), block, sat));
        }
        for s in list {
            if let Stmt::If(_, x, y) | Stmt::While { body: x, check: y, .. } = s {
                if let Some(r) = find(x, refs, top).or_else(|| find(y, refs, top)) {
                    return Some(r);
                }
            }
        }
        None
    }
    let Some((a, block, sat)) = find(body, refs, body) else { return false };
    // take the label and its block out (wherever it is), then put the block at the goto
    fn remove(list: &mut Vec<Stmt>, a: &str, len: usize) -> bool {
        if let Some(j) = list.iter().position(|s| matches!(s, Stmt::Label(x) if x == a)) {
            list.drain(j..j + 1 + len);
            return true;
        }
        for s in list.iter_mut() {
            if let Stmt::If(_, x, y) | Stmt::While { body: x, check: y, .. } = s {
                if remove(x, a, len) || remove(y, a, len) {
                    return true;
                }
            }
        }
        false
    }
    if !remove(body, &a, sat) {
        return false;
    }
    replace(body, &a, &block)
}

// top: B; if (c) goto top;                       -> do { B } while (c)
// top: B; goto top;                               -> do { B } while (1)
// goto t; top: B; t: T; if (c) goto top;          -> while / for (;;)
// when the labels have no other reference and nothing outside B, T jumps into them
fn loops(list: &mut Vec<Stmt>, refs: &HashMap<String, usize>) -> bool {
    for s in list.iter_mut() {
        if let Stmt::If(_, a, b) | Stmt::While { body: a, check: b, .. } = s {
            if loops(a, refs) || loops(b, refs) {
                return true;
            }
        }
    }
    for i in 0..list.len() {
        let top = match &list[i] {
            Stmt::Label(l) if refs.get(l) == Some(&1) => l.clone(),
            _ => continue,
        };
        // the back edge (conditional, or a plain goto: a loop left only by return or jumps)
        let Some(j) = list[i + 1..]
            .iter()
            .position(|s| {
                matches!(s, Stmt::If(_, a, b) if b.is_empty() && matches!(a.as_slice(), [Stmt::Goto(l)] if *l == top))
                    || matches!(s, Stmt::Goto(l) if *l == top)
            })
            .map(|p| p + i + 1)
        else {
            continue;
        };
        let cond = match &list[j] {
            Stmt::If(c, _, _) => c.clone(),
            _ => Expr::Num(1, Ty::S32),
        };
        let inner: Vec<Stmt> = list[i + 1..j].to_vec();
        // rotated: "goto t" right before top, and t inside
        let rotated = i > 0 && matches!(&list[i - 1], Stmt::Goto(t) if refs.get(t) == Some(&1)
            && inner.iter().filter(|s| matches!(s, Stmt::Label(l) if l == t)).count() == 1);
        if rotated {
            let t = match &list[i - 1] {
                Stmt::Goto(t) => t.clone(),
                _ => unreachable!(),
            };
            let k = inner.iter().position(|s| matches!(s, Stmt::Label(l) if *l == t)).unwrap();
            let (body, check) = (inner[..k].to_vec(), inner[k + 1..].to_vec());
            if has_label(&body, refs) || has_label(&check, refs) {
                continue;
            }
            let w = Stmt::While { top, test: Some(t), body, check, cond };
            list.splice(i - 1..j + 1, std::iter::once(w));
            return true;
        }
        if has_label(&inner, refs) {
            continue;
        }
        let w = Stmt::While { top, test: None, body: inner, check: vec![], cond };
        list.splice(i..j + 1, std::iter::once(w));
        return true;
    }
    false
}

// also the preemption points (no-ops in the model: they only let other threads run), which sit on back edges
fn drop_self_moves(list: &mut Vec<Stmt>) {
    list.retain(|s| !matches!(s, Stmt::Assign(x, Expr::Var(y), ..) if x == y) && !matches!(s, Stmt::Preempt));
    for s in list.iter_mut() {
        if let Stmt::If(_, a, b) = s {
            drop_self_moves(a);
            drop_self_moves(b);
        }
    }
}

// the statements of a short block ending in a return (from the label to the return), if it is one
fn return_tail(list: &[Stmt], label: &str) -> Option<Vec<Stmt>> {
    let start = list.iter().position(|s| matches!(s, Stmt::Label(l) if l == label))?;
    let mut out = Vec::new();
    for s in &list[start + 1..] {
        match s {
            Stmt::Return | Stmt::GuestCall(_, true, ..) | Stmt::Dispatch(true, ..) => {
                out.push(s.clone());
                return if out.len() <= 6 { Some(out) } else { None };
            }
            Stmt::Label(_) => continue,
            Stmt::Goto(_) | Stmt::Switch(..) | Stmt::If(..) => return None,
            other => out.push(other.clone()),
        }
        if out.len() > 6 {
            return None;
        }
    }
    None
}

// the statements a copy of a tail writes (not the calling-convention bookkeeping)
fn written(tail: &[Stmt]) -> usize {
    tail.iter()
        .filter(|s| match s {
            Stmt::Assign(_, Expr::Var(v), ..) if v.starts_with("saved_") => false,
            Stmt::Decl(_, n, _, ..) | Stmt::Assign(n, _, ..) => !n.starts_with("saved_") && n != "r13",
            Stmt::Store(..) | Stmt::GuestCall(..) | Stmt::Dispatch(_, ..) => true,
            _ => false,
        })
        .count()
}

// the copies of tails a function may get, in statements (a tail's size times the gotos to it)
const TAIL_COPIES_STATEMENTS: usize = 16;

fn duplicate_tails(list: &mut Vec<Stmt>, top: &[Stmt], refs: &HashMap<String, usize>) -> bool {
    let mut changed = false;
    for s in list.iter_mut() {
        match s {
            Stmt::Goto(l) => {
                if let Some(tail) = return_tail(top, l).filter(|t| written(t) * refs.get(l).copied().unwrap_or(0) <= TAIL_COPIES_STATEMENTS) {
                    // the tail declares nothing that is used later (it ends in a return)
                    *s = Stmt::If(Expr::Num(1, Ty::S32), tail, vec![]);
                    changed = true;
                }
            }
            Stmt::If(_, a, b) => {
                changed |= duplicate_tails(a, top, refs);
                changed |= duplicate_tails(b, top, refs);
            }
            _ => {}
        }
    }
    changed
}

// if (1) { ... } -> its statements
fn flatten_true(list: &mut Vec<Stmt>) {
    let mut i = 0;
    while i < list.len() {
        if let Stmt::If(Expr::Num(1, _), a, b) = &list[i] {
            if b.is_empty() {
                let a = a.clone();
                let n = a.len();
                list.splice(i..i + 1, a);
                i += n;
                continue;
            }
        }
        if let Stmt::If(_, a, b) = &mut list[i] {
            flatten_true(a);
            flatten_true(b);
        }
        i += 1;
    }
}

// Gotos to a join from inside nested ifs, past a short block S that only falls into the join:
//     if (a) { if (b) { A; goto L; } } S; L:   ->   if (a) { if (b) { A } else { S } } else { S } L:
// S is copied to the end of every branch that falls through, and the gotos to L at the ends of branches go (the
// control-flow graph is the same, with S's statements in each of its copies).
const JOIN_COPY_STATEMENTS: usize = 3;
const JOIN_COPIES: usize = 3;

fn join_copies(list: &mut Vec<Stmt>) -> bool {
    // the copies, into the ends of the branches (false: a goto to the join somewhere else)
    fn push(list: &mut Vec<Stmt>, join: &str, tail: &[Stmt], copies: &mut usize) -> bool {
        // `if (c) goto L; R` inside: `if (!c) { R }`, R getting the copies
        let goes = |s: &Stmt| matches!(s, Stmt::If(_, a, b) if b.is_empty() && matches!(a.as_slice(), [Stmt::Goto(l)] if l == join));
        if let Some(k) = list.iter().position(|s| goes(s)).filter(|&k| k + 1 < list.len()) {
            let mut before = HashMap::new();
            count_refs(&list[..k], &mut before);
            if before.contains_key(join) {
                return false;
            }
            let mut rest: Vec<Stmt> = list.split_off(k + 1);
            let Some(Stmt::If(c, _, _)) = list.pop() else { return false };
            if !push(&mut rest, join, tail, copies) {
                return false;
            }
            list.push(Stmt::If(negate(&c), rest, vec![]));
            return true;
        }
        let n = list.len();
        if n > 0 {
            let mut refs = HashMap::new();
            count_refs(&list[..n - 1], &mut refs);
            if refs.contains_key(join) {
                return false;
            }
        }
        match list.last_mut() {
            Some(Stmt::Goto(l)) if l == join => {
                list.pop();
                true
            }
            Some(Stmt::If(_, a, b)) => push(a, join, tail, copies) && push(b, join, tail, copies),
            Some(s) if matches!(s, Stmt::Return | Stmt::Goto(_) | Stmt::GuestCall(_, true, ..) | Stmt::Dispatch(true, ..)) => true,
            Some(s) => {
                let mut refs = HashMap::new();
                count_refs(std::slice::from_ref(s), &mut refs);
                if refs.contains_key(join) {
                    return false;
                }
                list.extend(tail.iter().cloned());
                *copies += 1;
                true
            }
            None => {
                list.extend(tail.iter().cloned());
                *copies += 1;
                true
            }
        }
    }
    for i in 0..list.len() {
        if let Stmt::If(_, a, b) = &mut list[i] {
            if join_copies(a) || join_copies(b) {
                return true;
            }
        }
        if !matches!(list[i], Stmt::If(..)) {
            continue;
        }
        // S: straight statements up to the join's label
        let Some(k) = list[i + 1..].iter().position(|s| !matches!(s, Stmt::Assign(..) | Stmt::Store(..) | Stmt::SetCpu(..))).map(|k| i + 1 + k) else { continue };
        let Some(Stmt::Label(join)) = list.get(k).cloned() else { continue };
        let tail: Vec<Stmt> = list[i + 1..k].to_vec();
        if tail.is_empty() || tail.len() > JOIN_COPY_STATEMENTS {
            continue;
        }
        let mut refs = HashMap::new();
        count_refs(std::slice::from_ref(&list[i]), &mut refs);
        if !refs.contains_key(&join) {
            continue;
        }
        let mut s = list[i].clone();
        let mut copies = 0;
        let ok = match &mut s {
            Stmt::If(_, a, b) => push(a, &join, &tail, &mut copies) && push(b, &join, &tail, &mut copies),
            _ => false,
        };
        if ok && copies <= JOIN_COPIES {
            list[i] = s;
            list.drain(i + 1..k);
            return true;
        }
    }
    false
}

fn remove_unreferenced_labels(list: &mut Vec<Stmt>, refs: &HashMap<String, usize>) {
    list.retain(|s| !matches!(s, Stmt::Label(l) if refs.get(l).copied().unwrap_or(0) == 0));
}

pub fn structure(f: &mut Function) {
    drop_self_moves(&mut f.body);
    // the runtime's re-entry table: only entry 0 is decompiled (and proved)
    f.body.retain(|s| !matches!(s, Stmt::Switch(Expr::Var(v), _) if v == "entry"));
    for _ in 0..50 {
        let top = f.body.clone();
        let mut gotos = HashMap::new();
        count_refs(&f.body, &mut gotos);
        let mut body = std::mem::take(&mut f.body);
        let changed = duplicate_tails(&mut body, &top, &gotos);
        flatten_true(&mut body);
        f.body = body;
        let mut refs = HashMap::new();
        count_refs(&f.body, &mut refs);
        remove_unreferenced_labels(&mut f.body, &refs);
        if !changed {
            break;
        }
    }
    for _ in 0..500 {
        let mut refs = HashMap::new();
        count_refs(&f.body, &mut refs);
        for (_, l) in &f.entries {
            *refs.entry(l.clone()).or_default() += 1;
        }
        if !step(&mut f.body, &refs)
            && !loops(&mut f.body, &refs)
            && !branches(&mut f.body, &refs, None)
            && !motions(&mut f.body, &refs)
            && !(crate::decompile::FULL.with(|m| m.get()) && join_copies(&mut f.body))
        {
            break;
        }
    }
}
