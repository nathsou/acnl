// Small algebraic clean-ups that keep the C type of every expression (the checker proves them anyway), and the
// merging of predicated ifs into if/else.
use crate::ast::*;
use crate::types::{reads, type_of, Reads};
use std::collections::HashMap;

fn num_u32(e: &Expr) -> Option<u64> {
    match e {
        Expr::Num(v, Ty::U32) => Some(*v),
        _ => None,
    }
}

fn simplify_expr(e: &mut Expr, types: &HashMap<String, Ty>) {
    match e {
        Expr::Un(_, a) | Expr::Cast(_, a) | Expr::Load(_, a) => simplify_expr(a, types),
        Expr::Bin(_, a, b) => {
            simplify_expr(a, types);
            simplify_expr(b, types);
        }
        Expr::Cond(c, a, b) => {
            simplify_expr(c, types);
            simplify_expr(a, types);
            simplify_expr(b, types);
        }
        Expr::Call(_, args) => args.iter_mut().for_each(|a| simplify_expr(a, types)),
        _ => {}
    }
    let whole = type_of(e, types);
    let replacement = match e {
        // (a + c1) + c2 -> a + (c1 + c2), all unsigned 32-bit
        Expr::Bin(BinOp::Add, a, b) => match (&**a, num_u32(b)) {
            (Expr::Bin(BinOp::Add, x, y), Some(c2)) if num_u32(y).is_some() && whole == Some(Ty::U32) => {
                let c1 = num_u32(y).unwrap();
                Some(Expr::Bin(BinOp::Add, x.clone(), Box::new(Expr::Num((c1 + c2) & 0xffff_ffff, Ty::U32))))
            }
            (x, Some(0)) if type_of(x, types) == whole => Some(x.clone()),
            _ => None,
        },
        // (a & c1) & c2 -> a & (c1 & c2), all unsigned 32-bit
        Expr::Bin(BinOp::And, a, b) if num_u32(b).is_some() || matches!(&**b, Expr::Num(_, Ty::S32)) => match &**a {
            Expr::Bin(BinOp::And, x, y) if num_u32(y).is_some() && whole == Some(Ty::U32) => {
                let c2 = match &**b {
                    Expr::Num(v, _) => *v,
                    _ => unreachable!(),
                };
                Some(Expr::Bin(BinOp::And, x.clone(), Box::new(Expr::Num(num_u32(y).unwrap() & c2 & 0xffff_ffff, Ty::U32))))
            }
            _ => None,
        },
        // a - 0 -> a, a | 0 -> a, a ^ 0 -> a (same type)
        Expr::Bin(BinOp::Sub | BinOp::Or | BinOp::Xor, a, b) if matches!(&**b, Expr::Num(0, _)) => {
            if type_of(a, types) == whole {
                Some((**a).clone())
            } else {
                None
            }
        }
        // (T)x where x already has type T
        Expr::Cast(t, a) if type_of(a, types) == Some(*t) => Some((**a).clone()),
        _ => None,
    };
    if let Some(r) = replacement {
        *e = r;
    }
}

fn is_truth_valued(e: &Expr) -> bool {
    matches!(e, Expr::Bin(BinOp::Eq | BinOp::Ne | BinOp::Lt | BinOp::Le | BinOp::Gt | BinOp::Ge | BinOp::LAnd | BinOp::LOr, _, _)
        | Expr::Un(UnOp::LNot, _))
}

// In a condition only truth matters: casts of 0/1 values go, and negated integer comparisons flip.
fn simplify_cond(e: &mut Expr, types: &HashMap<String, Ty>) {
    loop {
        let next = match e {
            Expr::Cast(_, inner) if is_truth_valued(inner) => Some((**inner).clone()),
            Expr::Un(UnOp::LNot, inner) => match &**inner {
                Expr::Cast(_, x) if is_truth_valued(x) => Some(Expr::Un(UnOp::LNot, x.clone())),
                Expr::Un(UnOp::LNot, x) if is_truth_valued(x) => Some((**x).clone()),
                Expr::Bin(op, a, b) => {
                    let int = |x: &Expr| type_of(x, types).map_or(false, |t| !t.float());
                    let flipped = match op {
                        BinOp::Eq => Some(BinOp::Ne),
                        BinOp::Ne => Some(BinOp::Eq),
                        BinOp::Lt => Some(BinOp::Ge),
                        BinOp::Ge => Some(BinOp::Lt),
                        BinOp::Le => Some(BinOp::Gt),
                        BinOp::Gt => Some(BinOp::Le),
                        _ => None,
                    };
                    match flipped {
                        Some(f) if int(a) && int(b) => Some(Expr::Bin(f, a.clone(), b.clone())),
                        _ => None,
                    }
                }
                _ => None,
            },
            _ => None,
        };
        match next {
            Some(n) => *e = n,
            None => break,
        }
    }
}

fn simplify_list(list: &mut [Stmt], types: &mut HashMap<String, Ty>) {
    for s in list.iter_mut() {
        match s {
            Stmt::Decl(t, n, e) => {
                if let Some(e) = e {
                    simplify_expr(e, types);
                }
                types.insert(n.clone(), *t);
            }
            Stmt::Assign(_, e) | Stmt::SetCpu(_, e) | Stmt::ReturnUnlessPc(e) | Stmt::Switch(e, _) => {
                simplify_expr(e, types)
            }
            Stmt::Store(_, a, v) => {
                simplify_expr(a, types);
                simplify_expr(v, types);
            }
            Stmt::If(c, a, b) => {
                simplify_expr(c, types);
                simplify_cond(c, types);
                simplify_list(a, types);
                simplify_list(b, types);
            }
            _ => {}
        }
    }
}

// whether running the statements may change what the condition reads
fn modifies(list: &[Stmt], r: &Reads) -> bool {
    list.iter().any(|s| match s {
        Stmt::Decl(_, n, _) | Stmt::Assign(n, _) => r.vars.contains(n),
        Stmt::Store(..) => r.memory,
        Stmt::SetCpu(..) => r.cpu,
        Stmt::If(_, a, b) => modifies(a, r) || modifies(b, r),
        Stmt::Nop | Stmt::Preempt => false,
        _ => true,
    })
}

fn negation_of(a: &Expr, b: &Expr) -> bool {
    matches!(b, Expr::Un(UnOp::LNot, x) if **x == *a) || matches!(a, Expr::Un(UnOp::LNot, x) if **x == *b)
}

fn has_control(list: &[Stmt]) -> bool {
    list.iter().any(|s| match s {
        Stmt::If(_, a, b) => has_control(a) || has_control(b),
        Stmt::Decl(..) | Stmt::Assign(..) | Stmt::SetCpu(..) | Stmt::Store(..) | Stmt::Nop | Stmt::Preempt => false,
        _ => true,
    })
}

fn merge_ifs(list: &mut Vec<Stmt>) -> bool {
    let mut changed = false;
    for s in list.iter_mut() {
        if let Stmt::If(_, a, b) = s {
            changed |= merge_ifs(a);
            changed |= merge_ifs(b);
        }
    }
    let mut i = 0;
    while i + 1 < list.len() {
        let merged = match (&list[i], &list[i + 1]) {
            (Stmt::If(c1, a1, b1), Stmt::If(c2, a2, b2)) if !has_control(a1) && !has_control(b1) => {
                let mut r = Reads::default();
                reads(c1, &mut r);
                if modifies(a1, &r) || modifies(b1, &r) {
                    None
                } else if c1 == c2 {
                    let mut a = a1.clone();
                    a.extend(a2.iter().cloned());
                    let mut b = b1.clone();
                    b.extend(b2.iter().cloned());
                    Some(Stmt::If(c1.clone(), a, b))
                } else if negation_of(c1, c2) {
                    let mut a = a1.clone();
                    a.extend(b2.iter().cloned());
                    let mut b = b1.clone();
                    b.extend(a2.iter().cloned());
                    Some(Stmt::If(c1.clone(), a, b))
                } else {
                    None
                }
            }
            _ => None,
        };
        if let Some(m) = merged {
            list[i] = m;
            list.remove(i + 1);
            changed = true;
        } else {
            i += 1;
        }
    }
    // if (!c) { A } else { B }  ->  if (c) { B } else { A }
    for s in list.iter_mut() {
        if let Stmt::If(c, a, b) = s {
            if let Expr::Un(UnOp::LNot, inner) = c {
                if !b.is_empty() {
                    let inner = (**inner).clone();
                    let (na, nb) = (b.clone(), a.clone());
                    *s = Stmt::If(inner, na, nb);
                    changed = true;
                }
            }
        }
    }
    changed
}

pub fn simplify(f: &mut Function) {
    let mut types: HashMap<String, Ty> = f.locals.iter().map(|(t, n, _)| (n.clone(), *t)).collect();
    types.insert("entry".into(), Ty::U32);
    simplify_list(&mut f.body, &mut types);
    while merge_ifs(&mut f.body) {}
}
