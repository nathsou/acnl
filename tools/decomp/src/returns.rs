// The functions that return their first argument (`decomp returns OUT [THREADS]`, read from DECOMP_RETURNS): the ARM
// C++ ABI has constructors and destructors return `this`, and many other functions hand their r0 back too. Proved per
// function by symbolic execution: on every way out, r0 is the r0 it was called with. The call model (sym.rs) then
// gives a call of such a function its own r0 back as its result, and the decompiler writes the value as the argument
// it passed (`call_x(p + 0x10); call_y(p + 0x20);` rather than `r0_2 = call_x(p + 0x10); call_y(r0_2 + 0x10);`).
//
// The table is a least fixed point: the first round proves the functions whose calls need nothing, each later round
// those whose callees the rounds before proved (sound by induction on the rounds: every fact rests on facts proved
// before). Recursive cycles are left out.
use crate::ast::{CpuField, Expr, Function, Stmt, Ty};
use crate::sym::Sym;
use std::collections::HashSet;
use z3::ast::{Ast, Bool};
use z3::{Context, SatResult, Solver};

static TABLE: std::sync::OnceLock<std::sync::RwLock<HashSet<u32>>> = std::sync::OnceLock::new();

fn table() -> &'static std::sync::RwLock<HashSet<u32>> {
    TABLE.get_or_init(|| {
        let text = std::env::var("DECOMP_RETURNS").ok().and_then(|p| std::fs::read_to_string(p).ok()).unwrap_or_default();
        std::sync::RwLock::new(text.lines().filter_map(|l| u32::from_str_radix(l.trim(), 16).ok()).map(|a| a & !1).collect())
    })
}

pub fn reset(set: HashSet<u32>) {
    *table().write().unwrap() = set;
}

pub fn insert(address: u32) {
    table().write().unwrap().insert(address & !1);
}

// whether the function at `address` returns its first argument
pub fn returns_first_argument(address: u32) -> bool {
    table().read().unwrap().contains(&(address & !1))
}

pub const NO_CALLEE: u64 = 0x8422_2325_cbf2_9ce4;

// part of the proof cache's key: whether the function's direct callees return their first argument
pub fn callee_key(f: &Function) -> u64 {
    let mut called = Vec::new();
    crate::signatures::direct_callees(&f.body, &mut called);
    called.sort();
    called.dedup();
    let mut h: u64 = NO_CALLEE;
    for c in called {
        if returns_first_argument(c) {
            h = (h ^ (c & !1) as u64).wrapping_mul(0x100_0000_01b3);
        }
    }
    h
}

// the statements of a function above which it is not tried (symbolic execution of the largest ones takes gigabytes)
const MAX_STATEMENTS: usize = 400;

fn size(list: &[Stmt]) -> usize {
    list.iter()
        .map(|s| match s {
            Stmt::If(_, a, b) | Stmt::While { body: a, check: b, .. } => 1 + size(a) + size(b),
            _ => 1,
        })
        .sum()
}

// Whether `f` leaves r0 as it was called with on every way out (loops, and the largest functions: not tried).
pub fn prove(ctx: &Context, f: &Function) -> bool {
    if size(&f.body) > MAX_STATEMENTS {
        return false;
    }
    let mut s = Sym::new(ctx);
    let mut init = s.initial("in_");
    s.entry_sp = Some(init.cpu["r13"].clone());
    s.init_frame(&mut init);
    let f = &crate::dispatch::as_direct_calls(f);
    let Ok(exits) = s.run(f, &init) else { return false };
    if exits.is_empty() {
        return false;
    }
    let r0 = &init.cpu["r0"];
    // (most proofs need no solver: the value at every exit is the entry's)
    if exits.iter().all(|e| e.state.cpu["r0"].simplify() == *r0) {
        return true;
    }
    let solver = Solver::new(ctx);
    let mut p = z3::Params::new(ctx);
    p.set_u32("timeout", 2_000);
    solver.set_params(&p);
    let sp = &init.cpu["r13"];
    solver.assert(&sp.bvuge(&s.bv(0x1000, 32)));
    solver.assert(&sp.bvult(&s.bv(0xf000_0000, 32)));
    for x in s.facts.iter().chain(s.assumptions.iter()) {
        solver.assert(x);
    }
    let differs: Vec<Bool> = exits.iter().map(|e| Bool::and(ctx, &[&e.cond, &e.state.cpu["r0"]._eq(r0).not()])).collect();
    let refs: Vec<&Bool> = differs.iter().collect();
    solver.assert(&Bool::or(ctx, &refs));
    solver.check() == SatResult::Unsat
}

// The decompiler's pass: after a call of a function that returns its first argument, r0 is set again to the value
// the call was given (the same value in the model), so that later passes can use that value directly. A fresh
// variable keeps it across the call.
pub fn keep_first_argument(f: &mut Function) {
    let Some(r0) = f.synced.iter().find(|(_, fl)| *fl == CpuField::R(0)).map(|(v, _)| v.clone()) else { return };
    let mut fresh = 0;
    fn walk(list: &mut Vec<Stmt>, r0: &str, fresh: &mut usize, decls: &mut Vec<String>) {
        let mut i = 0;
        while i < list.len() {
            match &mut list[i] {
                Stmt::If(_, a, b) | Stmt::While { body: a, check: b, .. } => {
                    walk(a, r0, fresh, decls);
                    walk(b, r0, fresh, decls);
                }
                Stmt::GuestCall(t, false) if returns_first_argument(*t) => {
                    // SO() ... call; SI(): keep r0 before the SO() and give it back after the SI()
                    let so = list[..i].iter().rposition(|s| matches!(s, Stmt::SyncOut));
                    let si = list[i + 1..].iter().position(|s| matches!(s, Stmt::SyncIn)).map(|k| i + 1 + k);
                    let between = |s: &Stmt| matches!(s, Stmt::SetCpu(..) | Stmt::Assign(..));
                    if let (Some(so), Some(si)) = (so, si) {
                        let clean = list[so + 1..i].iter().all(|s| matches!(s, Stmt::SetCpu(..)))
                            && list[i + 1..si].iter().all(between);
                        if clean {
                            *fresh += 1;
                            let v = format!("r0_kept{}", fresh);
                            decls.push(v.clone());
                            list.insert(si + 1, Stmt::Assign(r0.to_string(), Expr::Var(v.clone())));
                            list.insert(so, Stmt::Assign(v, Expr::Var(r0.to_string())));
                            i = si + 3;
                            continue;
                        }
                    }
                }
                _ => {}
            }
            i += 1;
        }
    }
    let mut decls = Vec::new();
    walk(&mut f.body, &r0, &mut fresh, &mut decls);
    for v in decls {
        f.locals.push((Ty::U32, v, None));
    }
}
