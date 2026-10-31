// Turns forward gotos into ifs (the control-flow graph is unchanged, so the checker proves it like any pass):
//     if (c) goto L; A; L:                      ->  if (!c) { A }
//     if (c) goto L1; A; goto L2; L1: B; L2:    ->  if (!c) { A } else { B }
// when the labels have no other reference (gotos, switch cases, the entry table) and A, B contain no labels.
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
            _ => {}
        }
    }
}

fn has_label(list: &[Stmt]) -> bool {
    list.iter().any(|s| match s {
        Stmt::Label(_) => true,
        Stmt::If(_, a, b) => has_label(a) || has_label(b),
        _ => false,
    })
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
        if let Stmt::If(_, a, b) = s {
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
        if has_label(&a) {
            continue;
        }
        // if-else: A ends with goto L2, and L2 follows B
        if let Some(Stmt::Goto(l2)) = a.last() {
            if refs.get(l2) == Some(&1) {
                if let Some(k) = list[j + 1..].iter().position(|s| matches!(s, Stmt::Label(l) if l == l2)).map(|p| p + j + 1) {
                    let b: Vec<Stmt> = list[j + 1..k].to_vec();
                    if !has_label(&b) {
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

fn drop_self_moves(list: &mut Vec<Stmt>) {
    list.retain(|s| !matches!(s, Stmt::Assign(x, Expr::Var(y)) if x == y));
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

fn duplicate_tails(list: &mut Vec<Stmt>, top: &[Stmt]) -> bool {
    let mut changed = false;
    for s in list.iter_mut() {
        match s {
            Stmt::Goto(l) => {
                if let Some(tail) = return_tail(top, l) {
                    // the tail declares nothing that is used later (it ends in a return)
                    *s = Stmt::If(Expr::Num(1, Ty::S32), tail, vec![]);
                    changed = true;
                }
            }
            Stmt::If(_, a, b) => {
                changed |= duplicate_tails(a, top);
                changed |= duplicate_tails(b, top);
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
        let mut body = std::mem::take(&mut f.body);
        let changed = duplicate_tails(&mut body, &top);
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
        if !step(&mut f.body, &refs) {
            break;
        }
    }
}
