// Forward propagation of register values: an assignment `x = e` whose value is read exactly once, before anything
// e reads can change and with x dead afterwards, is folded into that use (r0 = r0 + 0xb00; r0 = r0 + 6 becomes
// r0 = r0 + 0xb00 + 6). Only uses at the same nesting level or in an if's condition are folded.
use crate::ast::*;
use crate::flow::{liveness, Liveness, Path};
use crate::inline::{addr_taken, count_stmt, interferes, subst_stmt, trivial};
use crate::types::{reads, type_of, Reads};
use std::collections::HashMap;

fn cond_uses(s: &Stmt, x: &str) -> (usize, usize) {
    // (uses in the statement's own expressions, uses inside nested branches)
    match s {
        Stmt::If(c, a, b) => {
            let mut only_c = Stmt::If(c.clone(), vec![], vec![]);
            let n = count_stmt(&only_c, x);
            only_c = Stmt::Nop;
            let _ = only_c;
            (n, a.iter().chain(b).map(|s| count_stmt(s, x)).sum())
        }
        other => (count_stmt(other, x), 0),
    }
}

fn subst_cond(s: &mut Stmt, x: &str, by: &Expr) {
    if let Stmt::If(c, _, _) = s {
        let mut tmp = Stmt::If(c.clone(), vec![], vec![]);
        subst_stmt(&mut tmp, x, by);
        if let Stmt::If(nc, _, _) = tmp {
            *c = nc;
        }
    } else {
        subst_stmt(s, x, by);
    }
}

// one propagation in this list (or a nested one); returns whether something changed
fn step(list: &mut Vec<Stmt>, prefix: &Path, lv: &Liveness, types: &HashMap<String, Ty>,
        synced: &std::collections::HashSet<String>) -> bool {
    for i in 0..list.len() {
        let mut p = prefix.clone();
        p.push(i);
        if let Stmt::If(_, a, b) = &mut list[i] {
            let mut pa = p.clone();
            pa.push(0);
            let mut pb = p.clone();
            pb.push(1);
            if step(a, &pa, lv, types, synced) || step(b, &pb, lv, types, synced) {
                return true;
            }
            continue;
        }
        let (x, e) = match &list[i] {
            Stmt::Assign(x, e) => (x.clone(), e.clone()),
            _ => continue,
        };
        let mut r = Reads::default();
        reads(&e, &mut r);
        if r.out_params || addr_taken(&list[i + 1..], &x) {
            continue;
        }
        let Some(tx) = types.get(&x).copied() else { continue };
        let Some(te) = type_of(&e, types) else { continue };
        // the statement that reads x, before anything interferes
        let mut found = None;
        for j in i + 1..list.len() {
            // SO() reads every synced register (into the CPU state a call or the caller sees)
            if matches!(list[j], Stmt::SyncOut) && synced.contains(&x) {
                break;
            }
            let (own, nested) = cond_uses(&list[j], &x);
            if nested > 0 {
                break;
            }
            let redefines = matches!(&list[j], Stmt::Decl(_, y, _) | Stmt::Assign(y, _) if *y == x);
            if own > 0 {
                found = Some((j, own, redefines));
                break;
            }
            if redefines || interferes(&list[j], &r, &x) {
                break;
            }
        }
        let Some((j, uses, redefines)) = found else { continue };
        if uses > 1 && !trivial(&e) {
            continue;
        }
        // x must not be read later through this definition
        let mut pj = prefix.clone();
        pj.push(j);
        let live_after = lv.live_out.get(&pj).map_or(true, |s| s.contains(&x));
        if live_after && !redefines {
            continue;
        }
        // nothing between i and j may change what e reads (j itself evaluates its operands first)
        if list[i + 1..j].iter().any(|s| interferes(s, &r, &x)) {
            continue;
        }
        // assignments, conditions and stores evaluate the use before any write: only those may hold it
        if !matches!(&list[j], Stmt::Assign(..) | Stmt::Decl(..) | Stmt::Store(..) | Stmt::SetCpu(..) | Stmt::If(..)) {
            continue;
        }
        let by = if te == tx { e.clone() } else { Expr::Cast(tx, Box::new(e.clone())) };
        subst_cond(&mut list[j], &x, &by);
        list.remove(i);
        return true;
    }
    false
}

fn size(list: &[Stmt]) -> usize {
    list.iter().map(|s| if let Stmt::If(_, a, b) = s { 1 + size(a) + size(b) } else { 1 }).sum()
}

// statements above which propagation is skipped (it recomputes liveness after each fold)
const MAX_STATEMENTS: usize = 600;

pub fn propagate(f: &mut Function) {
    if size(&f.body) > MAX_STATEMENTS {
        return;
    }
    let mut types: HashMap<String, Ty> = f.locals.iter().map(|(t, n, _)| (n.clone(), *t)).collect();
    types.insert("entry".into(), Ty::U32);
    collect_decls(&f.body, &mut types);
    for _ in 0..2000 {
        let lv = liveness(f);
        let synced: std::collections::HashSet<String> = f.synced.iter().map(|(v, _)| v.clone()).collect();
        if !step(&mut f.body, &vec![], &lv, &types, &synced) {
            break;
        }
    }
}

fn collect_decls(list: &[Stmt], types: &mut HashMap<String, Ty>) {
    for s in list {
        match s {
            Stmt::Decl(t, n, _) => {
                types.insert(n.clone(), *t);
            }
            Stmt::If(_, a, b) => {
                collect_decls(a, types);
                collect_decls(b, types);
            }
            _ => {}
        }
    }
}
