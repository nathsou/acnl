// Equivalence of two functions (the original and a decompiled one) over everything a caller can observe.
use crate::ast::Function;
use crate::sym::{Exit, State, Sym};
use z3::ast::{Ast, Bool, BV};
use z3::{Context, SatResult, Solver};

// a solver that gives up (unknown) after the timeout instead of running forever
fn new_solver(ctx: &Context) -> Solver<'_> {
    let solver = Solver::new(ctx);
    let mut p = z3::Params::new(ctx);
    let ms = std::env::var("DECOMP_TIMEOUT_MS").ok().and_then(|v| v.parse().ok()).unwrap_or(20_000u32);
    p.set_u32("timeout", ms);
    solver.set_params(&p);
    solver
}

pub enum Verdict {
    Proved,
    Differs(String), // what differs, for the first counterexample found
    Unknown(String),
}

// what a caller sees after the function returns (calling convention): the result registers, the callee-saved
// registers and sp, where it returns to, guest memory and effects outside it
const OBSERVED: [&str; 14] = ["r0", "r1", "s0", "s1", "r4", "r5", "r6", "r7", "r8", "r9", "r10", "r11", "r13", "pc"];

fn merged<'c>(s: &Sym<'c>, exits: &[Exit<'c>], key: &str) -> BV<'c> {
    let mut v = exits.last().unwrap().state.cpu[key].clone();
    for e in exits.iter().rev().skip(1) {
        v = e.cond.ite(&e.state.cpu[key], &v);
    }
    let _ = s;
    v
}

pub fn equivalent(ctx: &Context, original: &Function, candidate: &Function, save_slots: &[u32]) -> Verdict {
    let mut s = Sym::new(ctx);
    let init: State = s.initial("in_");
    s.entry_sp = Some(init.cpu["r13"].clone());
    s.save_slots = save_slots.to_vec();
    let a = match s.run(original, &init) {
        Ok(x) => x,
        Err(e) => return Verdict::Unknown(format!("original: {}", e)),
    };
    s.guard_save_area = true;
    let b = match s.run(candidate, &init) {
        Ok(x) => x,
        Err(e) => return Verdict::Unknown(format!("candidate: {}", e)),
    };
    s.guard_save_area = false;
    if a.is_empty() || b.is_empty() {
        return Verdict::Unknown("no exit".into());
    }
    let solver = new_solver(ctx);
    // guest objects and the stack do not wrap around the top of the address space
    let sp = &init.cpu["r13"];
    solver.assert(&sp.bvuge(&s.bv(0x1000, 32)));
    solver.assert(&sp.bvult(&s.bv(0xf000_0000, 32)));
    for x in &s.assumptions {
        solver.assert(x);
    }
    let mut diffs: Vec<(String, Bool)> = Vec::new();
    for k in OBSERVED {
        let (va, vb) = (merged(&s, &a, k), merged(&s, &b, k));
        diffs.push((k.to_string(), va._eq(&vb).not()));
    }
    // memory outside the save area
    let addr = BV::new_const(ctx, "probe", 32);
    let (mut ma, mut mb) = (a.last().unwrap().state.mem.clone(), b.last().unwrap().state.mem.clone());
    for e in a.iter().rev().skip(1) {
        ma = e.cond.ite(&e.state.mem, &ma);
    }
    for e in b.iter().rev().skip(1) {
        mb = e.cond.ite(&e.state.mem, &mb);
    }
    let mut outside = vec![];
    for off in save_slots {
        outside.push(addr._eq(&sp.bvsub(&s.bv(*off as u64, 32))).not());
    }
    let refs: Vec<&Bool> = outside.iter().collect();
    let out = Bool::and(ctx, &refs);
    let mem_diff = Bool::and(ctx, &[&out, &ma.select(&addr).as_bv().unwrap()._eq(&mb.select(&addr).as_bv().unwrap()).not()]);
    diffs.push(("memory".into(), mem_diff));
    let (mut wa, mut wb) = (a.last().unwrap().state.world.clone(), b.last().unwrap().state.world.clone());
    for e in a.iter().rev().skip(1) {
        wa = e.cond.ite(&e.state.world, &wa);
    }
    for e in b.iter().rev().skip(1) {
        wb = e.cond.ite(&e.state.world, &wb);
    }
    diffs.push(("effects".into(), wa._eq(&wb).not()));
    // the two must also leave on the same paths: any difference in observables shows up above
    // the assumptions must not rule out a way out of the candidate (that would make the proof vacuous)
    if !s.assumptions.is_empty() {
        for (k, e) in b.iter().enumerate() {
            solver.push();
            solver.assert(&e.cond);
            let r = solver.check();
            solver.pop(1);
            if r != SatResult::Sat {
                return Verdict::Unknown(format!("assumptions exclude exit {} of the candidate", k));
            }
        }
    }
    let any: Vec<&Bool> = diffs.iter().map(|(_, d)| d).collect();
    solver.assert(&Bool::or(ctx, &any));
    match solver.check() {
        SatResult::Unsat => Verdict::Proved,
        SatResult::Unknown => Verdict::Unknown(solver.get_reason_unknown().unwrap_or_default()),
        SatResult::Sat => {
            let m = solver.get_model().unwrap();
            let which: Vec<String> = diffs
                .iter()
                .filter(|(_, d)| m.eval(d, true).and_then(|v| v.as_bool()).unwrap_or(false))
                .map(|(k, _)| k.clone())
                .collect();
            Verdict::Differs(which.join(", "))
        }
    }
}

// ---- functions with loops: one proof per segment between cut points (the loop headers)

use crate::ast::{Expr, Stmt, Ty};
use crate::flow;
use std::collections::{HashMap, HashSet};

fn label_of_block(labels: &HashMap<String, usize>, b: usize) -> Option<String> {
    let mut names: Vec<&String> = labels.iter().filter(|(n, &x)| x == b && !n.starts_with("__")).map(|(n, _)| n).collect();
    names.sort();
    names.first().map(|s| (*s).clone())
}

fn var_types(f: &Function) -> HashMap<String, Ty> {
    fn walk(list: &[Stmt], out: &mut HashMap<String, Ty>) {
        for s in list {
            match s {
                Stmt::Decl(t, n, _) => {
                    out.insert(n.clone(), *t);
                }
                Stmt::If(_, a, b) | Stmt::While { body: a, check: b, .. } => {
                    walk(a, out);
                    walk(b, out);
                }
                _ => {}
            }
        }
    }
    let mut out: HashMap<String, Ty> = f.locals.iter().map(|(t, n, _)| (n.clone(), *t)).collect();
    out.insert("entry".into(), Ty::U32);
    walk(&f.body, &mut out);
    out
}

fn merge_bv<'c>(items: &[(Bool<'c>, BV<'c>)]) -> BV<'c> {
    let mut v = items.last().unwrap().1.clone();
    for (c, x) in items.iter().rev().skip(1) {
        v = c.ite(x, &v);
    }
    v
}

fn any_cond<'c>(ctx: &'c Context, conds: &[Bool<'c>]) -> Bool<'c> {
    let refs: Vec<&Bool> = conds.iter().collect();
    if refs.is_empty() {
        Bool::from_bool(ctx, false)
    } else {
        Bool::or(ctx, &refs)
    }
}

pub fn equivalent_with_loops<'c>(ctx: &'c Context, original: &Function, candidate: &Function, slots: &[u32],
                             saved: &[(String, u32)]) -> Verdict {
    let (_, olabels, oheaders) = Sym::graph(original);
    if oheaders.is_empty() {
        return equivalent(ctx, original, candidate, slots);
    }
    // the cut points: the candidate's loop headers (its labels are a subset of the original's); a cycle of the
    // original they do not cut shows up as a loop when its segment runs (unknown, never a wrong proof)
    let (_, clabels, cheaders) = Sym::graph(candidate);
    let mut names = Vec::new();
    for b in &cheaders {
        match label_of_block(&clabels, *b) {
            Some(n) if olabels.contains_key(&n) => names.push(n),
            _ => return Verdict::Unknown("loop header without a shared label".into()),
        }
    }
    if names.is_empty() {
        return Verdict::Unknown("the candidate has no loop where the original has one".into());
    }
    let ocuts: HashSet<usize> = names.iter().map(|n| olabels[n]).collect();
    let ccuts: HashSet<usize> = names.iter().map(|n| clabels[n]).collect();
    let (olive, clive) = (flow::liveness(original), flow::liveness(candidate));
    let (otypes, ctypes) = (var_types(original), var_types(candidate));
    // sp at each loop header, below the entry sp (measured where the header is first reached, proved after)
    let mut deltas: HashMap<String, u64> = HashMap::new();
    let deadline = std::time::Instant::now()
        + std::time::Duration::from_secs(std::env::var("DECOMP_BUDGET_S").ok().and_then(|v| v.parse().ok()).unwrap_or(60));
    let mut todo: Vec<Option<String>> = vec![None];
    let mut done: HashSet<Option<String>> = HashSet::new();
    while let Some(start) = todo.pop() {
        if !done.insert(start.clone()) {
            continue;
        }
        if std::time::Instant::now() > deadline {
            return Verdict::Unknown("time budget".into());
        }
        let mut s = Sym::new(ctx);
        let shared: State = s.initial("in_");
        let (mut oinit, mut cinit) = (shared.clone(), shared.clone());
        // the entry sp (where the save area is): the function's sp at the entry, a parameter of the segment otherwise
        let esp = match &start {
            None => shared.cpu["r13"].clone(),
            Some(_) if saved.is_empty() => BV::new_const(ctx, "v___entry_sp", 32),
            Some(l) => {
                let Some(d) = deltas.get(l) else { return Verdict::Unknown(format!("no sp offset at {}", l)) };
                // r13 is related at the header (shared value v_r13); the entry sp is above it
                BV::new_const(ctx, "v_r13", 32).bvadd(&s.bv(*d, 32))
            }
        };
        s.entry_sp = Some(esp.clone());
        s.save_slots = slots.to_vec();
        if let Some(l) = &start {
            // related variables: those the candidate needs at the label; the original's other ones are arbitrary
            let mut related = clive.at_label.get(l).cloned().unwrap_or_default();
            if !saved.is_empty() {
                related.insert("r13".to_string());
            }
            for (v, t) in &ctypes {
                let name = if related.contains(v) { format!("v_{}", v) } else { format!("c_{}", v) };
                cinit.vars.insert(v.clone(), (*t, BV::new_const(ctx, name, t.bits())));
            }
            for (v, t) in &otypes {
                let name = if related.contains(v) && ctypes.get(v) == Some(t) { format!("v_{}", v) } else { format!("o_{}", v) };
                oinit.vars.insert(v.clone(), (*t, BV::new_const(ctx, name, t.bits())));
            }
            let _ = &olive;
            // invariant: the original's save area holds the registers the candidate keeps in saved_*
            for (reg, off) in saved {
                if let Some((_, v)) = cinit.vars.get(&format!("saved_{}", reg)) {
                    let a = esp.bvsub(&s.bv(*off as u64, 32));
                    oinit.mem = s.store(&oinit.mem, &a, v);
                }
            }
        }
        let ostart = start.as_ref().map(|l| olabels[l]);
        let cstart = start.as_ref().map(|l| clabels[l]);
        let (oexits, oarr) = match s.run_segment(original, ostart, &oinit, &ocuts) {
            Ok(x) => x,
            Err(e) => return Verdict::Unknown(format!("original: {}", e)),
        };
        s.guard_save_area = true;
        let (cexits, carr) = match s.run_segment(candidate, cstart, &cinit, &ccuts) {
            Ok(x) => x,
            Err(e) => return Verdict::Unknown(format!("candidate: {}", e)),
        };
        s.guard_save_area = false;
        let solver = new_solver(ctx);
        let sp = &shared.cpu["r13"];
        solver.assert(&sp.bvuge(&s.bv(0x1000, 32)));
        solver.assert(&sp.bvult(&s.bv(0xf000_0000, 32)));
        solver.assert(&esp.bvuge(&s.bv(0x1000, 32)));
        solver.assert(&esp.bvult(&s.bv(0xf000_0000, 32)));
        for a in &s.assumptions {
            solver.assert(a);
        }
        // the assumptions must leave every way on of the candidate possible (no vacuous proof)
        if !s.assumptions.is_empty() {
            let ways: Vec<Bool> = cexits.iter().map(|e| e.cond.clone()).chain(carr.iter().map(|a| a.1.clone())).collect();
            for (k, w) in ways.iter().enumerate() {
                solver.push();
                solver.assert(w);
                let r = solver.check();
                solver.pop(1);
                if r != SatResult::Sat {
                    return Verdict::Unknown(format!("assumptions exclude way {} of the candidate", k));
                }
            }
        }
        // memory is compared outside the save area
        let outside = |probe: &BV<'c>| -> Bool<'c> {
            let mut v: Vec<Bool> = Vec::new();
            for off in slots {
                v.push(probe._eq(&esp.bvsub(&s.bv(*off as u64, 32))).not());
            }
            let refs: Vec<&Bool> = v.iter().collect();
            if refs.is_empty() { Bool::from_bool(ctx, true) } else { Bool::and(ctx, &refs) }
        };
        let mut diffs: Vec<(String, Bool)> = Vec::new();
        // leaving the function: same condition, same observables
        let oc: Vec<Bool> = oexits.iter().map(|e| e.cond.clone()).collect();
        let cc: Vec<Bool> = cexits.iter().map(|e| e.cond.clone()).collect();
        let (oleave, cleave) = (any_cond(ctx, &oc), any_cond(ctx, &cc));
        diffs.push(("exit condition".into(), oleave._eq(&cleave).not()));
        if !oexits.is_empty() && !cexits.is_empty() {
            for k in OBSERVED {
                let a: Vec<(Bool, BV)> = oexits.iter().map(|e| (e.cond.clone(), e.state.cpu[k].clone())).collect();
                let b: Vec<(Bool, BV)> = cexits.iter().map(|e| (e.cond.clone(), e.state.cpu[k].clone())).collect();
                diffs.push((k.to_string(), Bool::and(ctx, &[&oleave, &merge_bv(&a)._eq(&merge_bv(&b)).not()])));
            }
            let probe = BV::new_const(ctx, "probe_exit", 32);
            let a: Vec<(Bool, BV)> = oexits.iter().map(|e| (e.cond.clone(), e.state.mem.select(&probe).as_bv().unwrap())).collect();
            let b: Vec<(Bool, BV)> = cexits.iter().map(|e| (e.cond.clone(), e.state.mem.select(&probe).as_bv().unwrap())).collect();
            diffs.push(("memory".into(), Bool::and(ctx, &[&oleave, &outside(&probe), &merge_bv(&a)._eq(&merge_bv(&b)).not()])));
            let a: Vec<(Bool, BV)> = oexits.iter().map(|e| (e.cond.clone(), e.state.world.clone())).collect();
            let b: Vec<(Bool, BV)> = cexits.iter().map(|e| (e.cond.clone(), e.state.world.clone())).collect();
            diffs.push(("effects".into(), Bool::and(ctx, &[&oleave, &merge_bv(&a)._eq(&merge_bv(&b)).not()])));
        }
        // reaching a loop header: same condition, related states
        for n in &names {
            let (ob, cb) = (olabels[n], clabels[n]);
            let oa: Vec<&(usize, Bool, State)> = oarr.iter().filter(|x| x.0 == ob).collect();
            let ca: Vec<&(usize, Bool, State)> = carr.iter().filter(|x| x.0 == cb).collect();
            let oc: Vec<Bool> = oa.iter().map(|x| x.1.clone()).collect();
            let cc: Vec<Bool> = ca.iter().map(|x| x.1.clone()).collect();
            let (oreach, creach) = (any_cond(ctx, &oc), any_cond(ctx, &cc));
            diffs.push((format!("reaching {}", n), oreach._eq(&creach).not()));
            if oa.is_empty() || ca.is_empty() {
                continue;
            }
            let mut related = clive.at_label.get(n).cloned().unwrap_or_default();
            if !saved.is_empty() {
                related.insert("r13".to_string());
            }
            todo.push(Some(n.clone()));
            // the sp invariant: r13 = entry sp - delta at the header
            if !saved.is_empty() {
                let sp_at: Vec<(Bool, BV)> = ca.iter().filter_map(|x| x.2.vars.get("r13").map(|y| (x.1.clone(), y.1.clone()))).collect();
                if sp_at.len() != ca.len() {
                    return Verdict::Unknown(format!("r13 at {}", n));
                }
                let below = esp.bvsub(&merge_bv(&sp_at));
                match deltas.get(n) {
                    Some(d) => diffs.push((format!("sp at {}", n), Bool::and(ctx, &[&creach, &below._eq(&s.bv(*d, 32)).not()]))),
                    None => match below.simplify().as_u64() {
                        Some(d) => {
                            deltas.insert(n.clone(), d);
                            diffs.push((format!("sp at {}", n), Bool::and(ctx, &[&creach, &below._eq(&s.bv(d, 32)).not()])));
                        }
                        None => return Verdict::Unknown(format!("sp offset at {} is not constant", n)),
                    },
                }
            }
            // the save area invariant at the header
            for (reg, off) in saved {
                let name = format!("saved_{}", reg);
                if !related.contains(&name) {
                    continue;
                }
                let addr = esp.bvsub(&s.bv(*off as u64, 32));
                let a: Vec<(Bool, BV)> = oa.iter().map(|x| (x.1.clone(), s.load(&x.2.mem, &addr, 4))).collect();
                let b: Option<Vec<(Bool, BV)>> = ca.iter().map(|x| x.2.vars.get(&name).map(|y| (x.1.clone(), y.1.clone()))).collect();
                match b {
                    Some(b) => diffs.push((format!("{} slot at {}", reg, n), Bool::and(ctx, &[&oreach, &merge_bv(&a)._eq(&merge_bv(&b)).not()]))),
                    None => return Verdict::Unknown(format!("{} at {} not in the candidate", name, n)),
                }
            }
            for v in related.iter().filter(|v| !(v.starts_with("saved_") && !otypes.contains_key(*v))) {
                let a: Option<Vec<(Bool, BV)>> = oa.iter().map(|x| x.2.vars.get(v).map(|y| (x.1.clone(), y.1.clone()))).collect();
                let b: Option<Vec<(Bool, BV)>> = ca.iter().map(|x| x.2.vars.get(v).map(|y| (x.1.clone(), y.1.clone()))).collect();
                match (a, b) {
                    (Some(a), Some(b)) if a[0].1.get_size() == b[0].1.get_size() => {
                        diffs.push((format!("{} at {}", v, n), Bool::and(ctx, &[&oreach, &merge_bv(&a)._eq(&merge_bv(&b)).not()])))
                    }
                    _ => return Verdict::Unknown(format!("{} at {} not in both", v, n)),
                }
            }
            for k in crate::sym::cpu_keys() {
                let a: Vec<(Bool, BV)> = oa.iter().map(|x| (x.1.clone(), x.2.cpu[&k].clone())).collect();
                let b: Vec<(Bool, BV)> = ca.iter().map(|x| (x.1.clone(), x.2.cpu[&k].clone())).collect();
                diffs.push((format!("cpu {} at {}", k, n), Bool::and(ctx, &[&oreach, &merge_bv(&a)._eq(&merge_bv(&b)).not()])));
            }
            let probe = BV::new_const(ctx, format!("probe_{}", n), 32);
            let a: Vec<(Bool, BV)> = oa.iter().map(|x| (x.1.clone(), x.2.mem.select(&probe).as_bv().unwrap())).collect();
            let b: Vec<(Bool, BV)> = ca.iter().map(|x| (x.1.clone(), x.2.mem.select(&probe).as_bv().unwrap())).collect();
            diffs.push((format!("memory at {}", n), Bool::and(ctx, &[&oreach, &outside(&probe), &merge_bv(&a)._eq(&merge_bv(&b)).not()])));
            let a: Vec<(Bool, BV)> = oa.iter().map(|x| (x.1.clone(), x.2.world.clone())).collect();
            let b: Vec<(Bool, BV)> = ca.iter().map(|x| (x.1.clone(), x.2.world.clone())).collect();
            diffs.push((format!("effects at {}", n), Bool::and(ctx, &[&oreach, &merge_bv(&a)._eq(&merge_bv(&b)).not()])));
        }
        let any: Vec<&Bool> = diffs.iter().map(|(_, d)| d).collect();
        solver.assert(&Bool::or(ctx, &any));
        match solver.check() {
            SatResult::Unsat => {}
            SatResult::Unknown => return Verdict::Unknown(solver.get_reason_unknown().unwrap_or_default()),
            SatResult::Sat => {
                let m = solver.get_model().unwrap();
                let which: Vec<String> = diffs
                    .iter()
                    .filter(|(_, d)| m.eval(d, true).and_then(|v| v.as_bool()).unwrap_or(false))
                    .map(|(k, _)| k.clone())
                    .take(4)
                    .collect();
                return Verdict::Differs(format!("from {}: {}", start.as_deref().unwrap_or("entry"), which.join(", ")));
            }
        }
    }
    Verdict::Proved
}

// The proof for a decompilation: with the save area when registers were unsaved, by segments when it has loops.
pub fn verify(ctx: &Context, original: &Function, d: &crate::decompile::Decompiled) -> Verdict {
    // the candidate's copies of its arguments (argN = rN, first thing): the original gets the same unread copies,
    // so both carry them through the segments of a loop
    let mut o = original.clone();
    let ghosts: Vec<Stmt> = d
        .function
        .body
        .iter()
        .take_while(|s| matches!(s, Stmt::Decl(_, n, Some(Expr::Var(_))) if n.starts_with("arg")))
        .cloned()
        .collect();
    let mut body = ghosts;
    body.extend(std::mem::take(&mut o.body));
    o.body = body;
    equivalent_with_loops(ctx, &o, &d.function, &d.save_slots, &d.saved)
}
