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

// a 32-bit constant of either signedness, as its bits
fn num_any(e: &Expr) -> Option<u64> {
    match e {
        Expr::Num(v, Ty::U32) => Some(*v & 0xffff_ffff),
        Expr::Num(v, Ty::S32) => Some(*v & 0xffff_ffff),
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
        // operations on two unsigned 32-bit constants (literal pools: address + pc)
        Expr::Bin(op, a, b) if num_u32(a).is_some() && num_u32(b).is_some() => {
            let (x, y) = (num_u32(a).unwrap() as u32, num_u32(b).unwrap() as u32);
            let v = match op {
                BinOp::Add => Some(x.wrapping_add(y)),
                BinOp::Sub => Some(x.wrapping_sub(y)),
                BinOp::And => Some(x & y),
                BinOp::Or => Some(x | y),
                BinOp::Xor => Some(x ^ y),
                BinOp::Mul => Some(x.wrapping_mul(y)),
                _ => None,
            };
            v.map(|v| Expr::Num(v as u64, Ty::U32))
        }

        // x ^ x -> 0, x - x -> 0 (expressions have no side effects: both sides are the same value)
        Expr::Bin(BinOp::Xor | BinOp::Sub, a, b) if a == b && whole.map_or(false, |t| !t.float()) => Some(Expr::Num(0, whole.unwrap())),
        // x & 0 -> 0, 0 >> k -> 0, 0 << k -> 0
        Expr::Bin(BinOp::And, _, b) if matches!(&**b, Expr::Num(0, _)) && whole.map_or(false, |t| !t.float()) => {
            Some(Expr::Num(0, whole.unwrap()))
        }
        Expr::Bin(BinOp::Shr | BinOp::Shl, a, _) if matches!(&**a, Expr::Num(0, _)) && whole.map_or(false, |t| !t.float()) => {
            Some(Expr::Num(0, whole.unwrap()))
        }
        // (a + c1) + c2 -> a + (c1 + c2), (a - c1) + c2 -> a + (c2 - c1), a unsigned 32-bit (constants of either sign
        // are converted to it)
        Expr::Bin(BinOp::Add, a, b) => match (&**a, num_any(b)) {
            (Expr::Bin(op @ (BinOp::Add | BinOp::Sub), x, y), Some(c2))
                if num_any(y).is_some() && whole == Some(Ty::U32) && type_of(x, types) == Some(Ty::U32) =>
            {
                let c1 = num_any(y).unwrap() as u32;
                let c = if *op == BinOp::Add { c1.wrapping_add(c2 as u32) } else { (c2 as u32).wrapping_sub(c1) };
                Some(Expr::Bin(BinOp::Add, x.clone(), Box::new(Expr::Num(c as u64, Ty::U32))))
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
        // (a + c1) - c2 -> a + (c1 - c2), (a - c1) - c2 -> a - (c1 + c2), a unsigned 32-bit
        Expr::Bin(BinOp::Sub, a, b) if num_any(b).is_some() && whole == Some(Ty::U32) => match &**a {
            Expr::Bin(BinOp::Add, x, y) if num_any(y).is_some() && type_of(x, types) == Some(Ty::U32) => {
                let c = (num_any(y).unwrap() as u32).wrapping_sub(num_any(b).unwrap() as u32);
                Some(Expr::Bin(BinOp::Add, x.clone(), Box::new(Expr::Num(c as u64, Ty::U32))))
            }
            Expr::Bin(BinOp::Sub, x, y) if num_any(y).is_some() && type_of(x, types) == Some(Ty::U32) => {
                let c = (num_any(y).unwrap() as u32).wrapping_add(num_any(b).unwrap() as u32);
                Some(Expr::Bin(BinOp::Sub, x.clone(), Box::new(Expr::Num(c as u64, Ty::U32))))
            }
            _ => None,
        },
        // x - y == 0 -> x == y, x - y != 0 -> x != y (same width: exact in wrapping arithmetic)
        Expr::Bin(op @ (BinOp::Eq | BinOp::Ne), a, b) if matches!(&**b, Expr::Num(0, _)) => match &**a {
            Expr::Bin(BinOp::Sub, x, y) if type_of(a, types).map_or(false, |t| t.bits() >= 32) => {
                Some(Expr::Bin(*op, x.clone(), y.clone()))
            }
            _ => None,
        },
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

fn var(e: &Expr, name: &str) -> bool {
    matches!(e, Expr::Var(v) if v == name)
}

// res >> 31 (the N flag of res = a - b)
fn is_n(e: &Expr, res: &str) -> bool {
    matches!(e, Expr::Bin(BinOp::Shr, x, k) if var(x, res) && matches!(**k, Expr::Num(31, _)))
}

// ((a ^ b) & (a ^ res)) >> 31 (the V flag of res = a - b)
fn is_v(e: &Expr, res: &str, a: &Expr, b: &Expr) -> bool {
    if let Expr::Bin(BinOp::Shr, x, k) = e {
        if !matches!(**k, Expr::Num(31, _)) {
            return false;
        }
        if let Expr::Bin(BinOp::And, p, q) = &**x {
            let ab = |t: &Expr| matches!(t, Expr::Bin(BinOp::Xor, l, r) if **l == *a && **r == *b);
            let ar = |t: &Expr| matches!(t, Expr::Bin(BinOp::Xor, l, r) if **l == *a && var(r, res));
            return (ab(p) && ar(q)) || (ar(p) && ab(q));
        }
    }
    false
}

fn is_zero(e: &Expr, res: &str) -> bool {
    let e = match e {
        Expr::Cast(_, x) => &**x,
        other => other,
    };
    matches!(e, Expr::Bin(BinOp::Eq, x, z) if var(x, res) && matches!(**z, Expr::Num(0, _)))
}

fn is_nonzero(e: &Expr, res: &str) -> bool {
    let e = match e {
        Expr::Cast(_, x) => &**x,
        other => other,
    };
    matches!(e, Expr::Bin(BinOp::Ne, x, z) if var(x, res) && matches!(**z, Expr::Num(0, _)))
}

// The flag tests of a signed comparison of a and b (res = a - b) as the comparison itself.
fn signed_compare(c: &Expr, res: &str, a: &Expr, b: &Expr) -> Option<Expr> {
    let sa = || Box::new(Expr::Cast(Ty::S32, Box::new(a.clone())));
    let sb = || Box::new(Expr::Cast(Ty::S32, Box::new(b.clone())));
    let nv = |e: &Expr, op: BinOp| matches!(e, Expr::Bin(o, n, v) if *o == op
        && ((is_n(n, res) && is_v(v, res, a, b)) || (is_n(v, res) && is_v(n, res, a, b))));
    if nv(c, BinOp::Ne) {
        return Some(Expr::Bin(BinOp::Lt, sa(), sb()));
    }
    if nv(c, BinOp::Eq) {
        return Some(Expr::Bin(BinOp::Ge, sa(), sb()));
    }
    if let Expr::Bin(BinOp::LOr, x, y) = c {
        if is_zero(x, res) && nv(y, BinOp::Ne) {
            return Some(Expr::Bin(BinOp::Le, sa(), sb()));
        }
    }
    if let Expr::Bin(BinOp::LAnd, x, y) = c {
        if is_nonzero(x, res) && nv(y, BinOp::Eq) {
            return Some(Expr::Bin(BinOp::Gt, sa(), sb()));
        }
    }
    None
}

// u32 res = a - b; if (<flags of res>) ...  ->  the comparison in the if (res is then dead)
fn signed_compares(list: &mut [Stmt]) {
    for i in 0..list.len() {
        if let Stmt::If(_, a, b) = &mut list[i] {
            signed_compares(a);
            signed_compares(b);
        }
        if i + 1 >= list.len() {
            continue;
        }
        // u32 res = x << k; if (res >> 31) / if (res != 0) / if (res == 0): a test of bit 31 - k / of the low bits
        if let Stmt::Decl(Ty::U32, r, Some(Expr::Bin(BinOp::Shl, x, k))) = &list[i] {
            if let (Expr::Num(k, _), Stmt::If(c, _, _)) = (&**k, &list[i + 1]) {
                if *k < 32 {
                    let (r, x, k) = (r.clone(), (**x).clone(), *k);
                    let top = Expr::Num(1u64 << (31 - k), Ty::U32);
                    let low = Expr::Num((1u64 << (32 - k)) - 1, Ty::U32);
                    let and = |m: Expr| Expr::Bin(BinOp::And, Box::new(x.clone()), Box::new(m));
                    let new = if is_n(c, &r) {
                        Some(and(top))
                    } else if is_nonzero(c, &r) {
                        Some(Expr::Bin(BinOp::Ne, Box::new(and(low)), Box::new(Expr::Num(0, Ty::U32))))
                    } else if is_zero(c, &r) {
                        Some(Expr::Bin(BinOp::Eq, Box::new(and(low)), Box::new(Expr::Num(0, Ty::U32))))
                    } else {
                        None
                    };
                    if let (Some(n), Stmt::If(c, _, _)) = (new, &mut list[i + 1]) {
                        *c = n;
                    }
                }
            }
        }
        let (res, a, b) = match &list[i] {
            Stmt::Decl(Ty::U32, r, Some(Expr::Bin(BinOp::Sub, a, b))) => (r.clone(), (**a).clone(), (**b).clone()),
            _ => continue,
        };
        if let Stmt::If(c, _, _) = &mut list[i + 1] {
            if let Some(n) = signed_compare(c, &res, &a, &b) {
                *c = n;
            }
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
    signed_compares(&mut f.body);
    while merge_ifs(&mut f.body) {}
}
