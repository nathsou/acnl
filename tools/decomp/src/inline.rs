// Inlines the generated code's block temporaries ({ u32 a = r0; u32 b = 0x10u; u32 res = a + b; r0 = res; }
// becomes r0 = r0 + 0x10u). A temporary is replaced only when nothing its expression reads can change before
// its use, and it is used at most once (or is a plain variable or constant). The checker proves the result anyway.
use crate::ast::*;
use crate::types::{reads, type_of, Reads};
use std::collections::{HashMap, HashSet};

fn count_expr(e: &Expr, x: &str) -> usize {
    match e {
        Expr::Var(n) | Expr::AddrOf(n) => (n == x) as usize,
        Expr::Num(..) | Expr::Float(..) | Expr::Cpu(_) => 0,
        Expr::Un(_, a) | Expr::Cast(_, a) | Expr::Load(_, a) => count_expr(a, x),
        Expr::Bin(_, a, b) => count_expr(a, x) + count_expr(b, x),
        Expr::Cond(c, a, b) => count_expr(c, x) + count_expr(a, x) + count_expr(b, x),
        Expr::Call(_, args) => args.iter().map(|a| count_expr(a, x)).sum(),
    }
}

pub(crate) fn count_stmt(s: &Stmt, x: &str) -> usize {
    match s {
        Stmt::Decl(_, _, Some(e)) | Stmt::Assign(_, e) | Stmt::SetCpu(_, e) | Stmt::ReturnUnlessPc(e) => count_expr(e, x),
        Stmt::Store(_, a, v) => count_expr(a, x) + count_expr(v, x),
        Stmt::If(c, a, b) => count_expr(c, x) + a.iter().chain(b).map(|s| count_stmt(s, x)).sum::<usize>(),
        Stmt::Switch(e, _) => count_expr(e, x),
        _ => 0,
    }
}

fn subst_expr(e: &mut Expr, x: &str, by: &Expr) {
    match e {
        Expr::Var(n) if n == x => *e = by.clone(),
        Expr::Un(_, a) | Expr::Cast(_, a) | Expr::Load(_, a) => subst_expr(a, x, by),
        Expr::Bin(_, a, b) => {
            subst_expr(a, x, by);
            subst_expr(b, x, by);
        }
        Expr::Cond(c, a, b) => {
            subst_expr(c, x, by);
            subst_expr(a, x, by);
            subst_expr(b, x, by);
        }
        Expr::Call(_, args) => args.iter_mut().for_each(|a| subst_expr(a, x, by)),
        _ => {}
    }
}

pub(crate) fn subst_stmt(s: &mut Stmt, x: &str, by: &Expr) {
    match s {
        Stmt::Decl(_, _, Some(e)) | Stmt::Assign(_, e) | Stmt::SetCpu(_, e) | Stmt::ReturnUnlessPc(e) => {
            subst_expr(e, x, by)
        }
        Stmt::Store(_, a, v) => {
            subst_expr(a, x, by);
            subst_expr(v, x, by);
        }
        Stmt::If(c, a, b) => {
            subst_expr(c, x, by);
            a.iter_mut().chain(b.iter_mut()).for_each(|s| subst_stmt(s, x, by));
        }
        Stmt::Switch(e, _) => subst_expr(e, x, by),
        _ => {}
    }
}

// Whether running s may change what an expression with reads r computes, or redefine x.
pub(crate) fn interferes(s: &Stmt, r: &Reads, x: &str) -> bool {
    let var_hit = |n: &str| n == x || r.vars.iter().any(|v| v == n);
    match s {
        Stmt::Decl(_, n, e) => var_hit(n) || e.as_ref().map_or(false, |e| writes_through(e, r, x)),
        Stmt::Assign(n, e) => var_hit(n) || writes_through(e, r, x),
        Stmt::SetCpu(_, e) => r.cpu || writes_through(e, r, x),
        Stmt::Store(..) => r.memory,
        Stmt::SyncOut => r.cpu,
        Stmt::SyncIn => true,
        Stmt::If(c, a, b) => writes_through(c, r, x) || a.iter().chain(b).any(|s| interferes(s, r, x) || control(s)),
        Stmt::Nop | Stmt::Preempt => false,
        _ => true, // calls, jumps, labels, returns
    }
}

// an &v argument writes v
fn writes_through(e: &Expr, r: &Reads, x: &str) -> bool {
    let mut w = Reads::default();
    reads(e, &mut w);
    w.out_params && (w.vars.iter().any(|v| v == x || r.vars.contains(v)))
}

fn control(s: &Stmt) -> bool {
    !matches!(s, Stmt::Decl(..) | Stmt::Assign(..) | Stmt::SetCpu(..) | Stmt::Store(..) | Stmt::Nop | Stmt::Preempt)
}

fn addr_taken_expr(e: &Expr, x: &str) -> bool {
    match e {
        Expr::AddrOf(n) => n == x,
        Expr::Un(_, a) | Expr::Cast(_, a) | Expr::Load(_, a) => addr_taken_expr(a, x),
        Expr::Bin(_, a, b) => addr_taken_expr(a, x) || addr_taken_expr(b, x),
        Expr::Cond(c, a, b) => addr_taken_expr(c, x) || addr_taken_expr(a, x) || addr_taken_expr(b, x),
        Expr::Call(_, args) => args.iter().any(|a| addr_taken_expr(a, x)),
        _ => false,
    }
}

// whether &x appears anywhere in the statements (x is then written by a helper and must stay a variable)
pub(crate) fn addr_taken(list: &[Stmt], x: &str) -> bool {
    list.iter().any(|s| match s {
        Stmt::Decl(_, _, Some(e)) | Stmt::Assign(_, e) | Stmt::SetCpu(_, e) | Stmt::ReturnUnlessPc(e) | Stmt::Switch(e, _) => {
            addr_taken_expr(e, x)
        }
        Stmt::Store(_, a, v) => addr_taken_expr(a, x) || addr_taken_expr(v, x),
        Stmt::If(c, a, b) => addr_taken_expr(c, x) || addr_taken(a, x) || addr_taken(b, x),
        _ => false,
    })
}

pub(crate) fn trivial(e: &Expr) -> bool {
    matches!(e, Expr::Var(_) | Expr::Num(..) | Expr::Cast(_, _)) && !matches!(e, Expr::Cast(_, a) if !trivial(a))
}

// One sweep over a statement list (and the lists inside its ifs); returns whether anything changed.
fn sweep(list: &mut Vec<Stmt>, keep: &HashSet<String>, types: &mut HashMap<String, Ty>) -> bool {
    let mut changed = false;
    for s in list.iter_mut() {
        if let Stmt::If(_, a, b) = s {
            changed |= sweep(a, keep, &mut types.clone());
            changed |= sweep(b, keep, &mut types.clone());
        }
    }
    let mut i = 0;
    while i < list.len() {
        let (t, x, e) = match &list[i] {
            Stmt::Decl(t, x, Some(e)) if !keep.contains(x) => (*t, x.clone(), e.clone()),
            Stmt::Decl(t, x, _) => {
                types.insert(x.clone(), *t);
                i += 1;
                continue;
            }
            _ => {
                i += 1;
                continue;
            }
        };
        let mut r = Reads::default();
        reads(&e, &mut r);
        if r.out_params || addr_taken(&list[i + 1..], &x) {
            types.insert(x.clone(), t);
            i += 1;
            continue;
        }
        // find the uses before anything interferes
        let mut uses = 0;
        let mut end = list.len();
        let mut blocked = false;
        for j in i + 1..list.len() {
            let n = count_stmt(&list[j], &x);
            let redefines = matches!(&list[j], Stmt::Decl(_, y, _) | Stmt::Assign(y, _) if *y == x);
            if interferes(&list[j], &r, &x) && !redefines {
                // a use inside the interfering statement (other than as its first evaluated operand) is not safe
                if n > 0 && !matches!(&list[j], Stmt::Assign(..) | Stmt::Decl(..) | Stmt::Store(..) | Stmt::SetCpu(..)) {
                    blocked = true;
                }
                uses += n;
                end = j + 1;
                break;
            }
            uses += n;
            if redefines {
                end = j + 1;
                break;
            }
        }
        // still used after the window (on another path or after interference): leave it
        let after: usize = list[end..]
            .iter()
            .take_while(|s| !matches!(s, Stmt::Decl(_, y, _) if *y == x))
            .map(|s| count_stmt(s, &x))
            .sum();
        let ty_e = type_of(&e, types);
        if blocked || after > 0 || (uses > 1 && !trivial(&e)) || ty_e.is_none() {
            types.insert(x.clone(), t);
            i += 1;
            continue;
        }
        let by = if ty_e == Some(t) { e.clone() } else { Expr::Cast(t, Box::new(e.clone())) };
        for s in list[i + 1..end].iter_mut() {
            subst_stmt(s, &x, &by);
        }
        list.remove(i);
        changed = true;
    }
    changed
}

// Inlines until nothing changes. `keep`: the function's register copies (never inlined).
pub fn inline_temporaries(f: &mut Function) {
    let keep: HashSet<String> = f.locals.iter().map(|(_, n, _)| n.clone()).collect();
    loop {
        let mut types: HashMap<String, Ty> = f.locals.iter().map(|(t, n, _)| (n.clone(), *t)).collect();
        types.insert("entry".into(), Ty::U32);
        if !sweep(&mut f.body, &keep, &mut types) {
            break;
        }
    }
    drop_nops(&mut f.body);
}

fn drop_nops(list: &mut Vec<Stmt>) {
    list.retain(|s| !matches!(s, Stmt::Nop));
    for s in list.iter_mut() {
        if let Stmt::If(_, a, b) = s {
            drop_nops(a);
            drop_nops(b);
        }
    }
}
