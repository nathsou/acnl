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
        if refs.get(&l1) != Some(&1) {
            continue;
        }
        let Some(j) = list[i + 1..].iter().position(|s| matches!(s, Stmt::Label(l) if *l == l1)).map(|p| p + i + 1) else {
            continue;
        };
        let a: Vec<Stmt> = list[i + 1..j].to_vec();
        if has_label(&a, refs) {
            continue;
        }
        // if-else: A ends with goto L2, and L2 follows B
        if let Some(Stmt::Goto(l2)) = a.last() {
            if refs.get(l2) == Some(&1) {
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
        list.splice(i..j + 1, std::iter::once(new));
        return true;
    }
    false
}

// top: B; if (c) goto top;                       -> do { B } while (c)
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
        // the back edge
        let Some(j) = list[i + 1..].iter().position(|s| matches!(s, Stmt::If(_, a, b) if b.is_empty() && matches!(a.as_slice(), [Stmt::Goto(l)] if *l == top))).map(|p| p + i + 1) else {
            continue;
        };
        let cond = match &list[j] {
            Stmt::If(c, _, _) => c.clone(),
            _ => unreachable!(),
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
    list.retain(|s| !matches!(s, Stmt::Assign(x, Expr::Var(y)) if x == y) && !matches!(s, Stmt::Preempt));
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
            Stmt::Return | Stmt::GuestCall(_, true) | Stmt::Dispatch(true) => {
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
            Stmt::Assign(_, Expr::Var(v)) if v.starts_with("saved_") => false,
            Stmt::Decl(_, n, _) | Stmt::Assign(n, _) => !n.starts_with("saved_") && n != "r13",
            Stmt::Store(..) | Stmt::GuestCall(..) | Stmt::Dispatch(_) => true,
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
        if !step(&mut f.body, &refs) && !loops(&mut f.body, &refs) {
            break;
        }
    }
}
