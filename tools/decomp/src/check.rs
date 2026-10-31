// Equivalence of two functions (the original and a decompiled one) over everything a caller can observe.
use crate::ast::Function;
use crate::sym::{Exit, State, Sym};
use z3::ast::{Ast, Bool, BV};
use z3::{Context, SatResult, Solver};

thread_local! {
    // a longer timeout for a retry (set by decompile_and_prove)
    pub static TIMEOUT_OVERRIDE: std::cell::Cell<Option<u32>> = std::cell::Cell::new(None);
}

// a solver that gives up (unknown) after the timeout instead of running forever
fn new_solver(ctx: &Context) -> Solver<'_> {
    // arrays, uninterpreted functions and bit-vectors: Z3's solver for that logic is faster than the default
    let logic = std::env::var("DECOMP_LOGIC").unwrap_or_else(|_| "QF_AUFBV".into());
    let solver = if logic.is_empty() {
        Solver::new(ctx)
    } else {
        Solver::new_for_logic(ctx, logic.as_str()).unwrap_or_else(|| Solver::new(ctx))
    };
    let mut p = z3::Params::new(ctx);
    let ms = TIMEOUT_OVERRIDE.with(|t| t.get()).unwrap_or_else(|| {
        std::env::var("DECOMP_TIMEOUT_MS").ok().and_then(|v| v.parse().ok()).unwrap_or(20_000u32)
    });
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
    let mut init: State = s.initial("in_");
    s.entry_sp = Some(init.cpu["r13"].clone());
    s.save_slots = save_slots.to_vec();
    s.init_frame(&mut init);
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
    equivalent_with_loops_free(ctx, original, candidate, slots, saved, &Relations::default())
}

// What else relates the two programs at the loop headers (for a decompiled function against its C++).
#[derive(Default)]
pub struct Relations {
    // CPU fields left unrelated (a weaker invariant: still sound, as every step is proved from it)
    pub free: HashSet<String>,
    // both keep the pushes, and the slot this far below the entry sp holds the return address, which the candidate
    // keeps in a variable (cpp::LR): that slot holds LR in both
    pub lr_slot: Option<u32>,
    // the original's copies of the registers it restores before returning (saved_rX) equal what the candidate leaves
    // in the CPU (rX, or LR for lr)
    pub restored: Vec<String>,
}

// The same, with the CPU fields in `free` left unrelated at the loop headers (a weaker invariant: still sound, as
// every step is proved from it). For a decompiled function against its C++: the decompiled function keeps
// registers in variables and writes them to the CPU only around calls, the C++ writes only what a call takes.
// Each relation is assumed at a header and proved on arrival.
pub fn equivalent_with_loops_free<'c>(ctx: &'c Context, original: &Function, candidate: &Function, slots: &[u32],
                                  saved: &[(String, u32)], rel: &Relations) -> Verdict {
    let (free, lr_slot) = (&rel.free, rel.lr_slot);
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
    let (otypes, ctypes) = (var_types(original), var_types(candidate));
    // argument registers neither program writes: at the loop headers they still equal their copies argN
    fn written(list: &[Stmt], out: &mut HashSet<String>) {
        for s in list {
            match s {
                Stmt::Decl(_, n, _) | Stmt::Assign(n, _) => {
                    out.insert(n.clone());
                }
                Stmt::SyncIn => {
                    for r in ["r0", "r1", "r2", "r3"] {
                        out.insert(r.into());
                    }
                    out.insert("(SI)".into());
                }
                Stmt::If(_, a, b) | Stmt::While { body: a, check: b, .. } => {
                    written(a, out);
                    written(b, out);
                }
                _ => {}
            }
        }
    }
    let mut w = HashSet::new();
    written(&original.body, &mut w);
    written(&candidate.body, &mut w);
    // SI() writes every register a function keeps in variables
    for f in [original, candidate] {
        let mut wf = HashSet::new();
        written(&f.body, &mut wf);
        if wf.contains("(SI)") {
            w.extend(f.synced.iter().map(|(v, _)| v.clone()));
        }
    }
    // (and lr, which neither writes, still equals the copy of the entry lr the C++ returns through)
    let unwritten_args: Vec<(String, String)> = (0..4)
        .map(|k| (format!("r{}", k), format!("arg{}", k)))
        .chain(std::iter::once(("r14".to_string(), crate::cpp::LR.to_string())))
        .filter(|(r, a)| !w.contains(r) && ctypes.contains_key(a) && otypes.contains_key(a) && otypes.contains_key(r))
        .collect();
    let ocuts: HashSet<usize> = names.iter().map(|n| olabels[n]).collect();
    let ccuts: HashSet<usize> = names.iter().map(|n| clabels[n]).collect();
    let (olive, clive) = (flow::liveness(original), flow::liveness(candidate));
    // sp at each loop header, below the entry sp (measured where the header is first reached, proved after)
    let mut deltas: HashMap<String, u64> = HashMap::new();
    let budget: u64 = match TIMEOUT_OVERRIDE.with(|t| t.get()) {
        Some(ms) => (ms as u64 * 4).div_ceil(1000), // a retry: room for a few slow queries
        None => std::env::var("DECOMP_BUDGET_S").ok().and_then(|v| v.parse().ok()).unwrap_or(60),
    };
    let deadline = std::time::Instant::now() + std::time::Duration::from_secs(budget);
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
            Some(_) if saved.is_empty() && slots.is_empty() => BV::new_const(ctx, "v___entry_sp", 32),
            Some(l) => {
                let Some(d) = deltas.get(l) else { return Verdict::Unknown(format!("no sp offset at {}", l)) };
                // r13 is related at the header (shared value v_r13); the entry sp is above it
                BV::new_const(ctx, "v_r13", 32).bvadd(&s.bv(*d, 32))
            }
        };
        s.entry_sp = Some(esp.clone());
        s.save_slots = slots.to_vec();
        // the save area: at the entry, what memory holds there; at a loop header, unrelated between the programs
        // unless both keep the pushes (lr_slot: then the same bytes, proved equal on arrival), before the invariants
        s.init_frame(&mut oinit);
        s.init_frame(&mut cinit);
        if start.is_some() {
            for k in slots {
                let (o, c) = if lr_slot.is_some() {
                    let v = BV::new_const(ctx, format!("v_frame_{}", k), 8);
                    (v.clone(), v)
                } else {
                    (BV::new_const(ctx, format!("o_frame_{}", k), 8), BV::new_const(ctx, format!("c_frame_{}", k), 8))
                };
                if oinit.frame.contains_key(k) {
                    oinit.frame.insert(*k, o);
                    cinit.frame.insert(*k, c);
                }
            }
        }
        if let Some(l) = &start {
            // related variables: those the candidate needs at the label; the original's other ones are arbitrary
            let mut related = clive.at_label.get(l).cloned().unwrap_or_default();
            if !saved.is_empty() || !slots.is_empty() {
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
            // invariant: an argument register nothing writes still holds the argument
            for (r, a) in &unwritten_args {
                if let (Some((_, av)), Some((rt, _))) = (cinit.vars.get(a).cloned(), oinit.vars.get(r).cloned()) {
                    oinit.vars.insert(r.clone(), (rt, av.clone()));
                    if cinit.vars.contains_key(r) {
                        cinit.vars.insert(r.clone(), (rt, av.clone()));
                    }
                    if let Some((at, _)) = oinit.vars.get(a).cloned() {
                        oinit.vars.insert(a.clone(), (at, av));
                    }
                }
            }
            // invariant: the original's saved_rX copies hold what the candidate leaves in the CPU
            for reg in &rel.restored {
                let name = format!("saved_{}", reg);
                let value = if reg == "r14" { cinit.vars.get(crate::cpp::LR).map(|x| x.1.clone()) } else { cinit.cpu.get(reg).cloned() };
                if let (Some((t, _)), Some(v)) = (oinit.vars.get(&name).cloned(), value) {
                    oinit.vars.insert(name, (t, v));
                }
            }
            // invariant: the return address slot holds LR (both programs)
            if let (Some(off), Some((_, lr))) = (lr_slot, cinit.vars.get(crate::cpp::LR).cloned()) {
                let a = esp.bvsub(&s.bv(off as u64, 32));
                s.store_st(&mut oinit, &a, &lr);
                s.store_st(&mut cinit, &a, &lr);
            }
            // invariant: the original's save area holds the registers the candidate keeps in saved_*
            for (reg, off) in saved {
                if let Some((_, v)) = cinit.vars.get(&format!("saved_{}", reg)) {
                    let a = esp.bvsub(&s.bv(*off as u64, 32));
                    s.store_st(&mut oinit, &a, v);
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
            if !saved.is_empty() || !slots.is_empty() {
                related.insert("r13".to_string());
            }
            todo.push(Some(n.clone()));
            // the sp invariant: r13 = entry sp - delta at the header
            if !saved.is_empty() || !slots.is_empty() {
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
            // the argument invariant at the header (both programs)
            for (r, a) in &unwritten_args {
                for (arr, reach) in [(&oa, &oreach), (&ca, &creach)] {
                    let rv: Option<Vec<(Bool, BV)>> = arr.iter().map(|x| x.2.vars.get(r).map(|y| (x.1.clone(), y.1.clone()))).collect();
                    let av: Option<Vec<(Bool, BV)>> = arr.iter().map(|x| x.2.vars.get(a).map(|y| (x.1.clone(), y.1.clone()))).collect();
                    if let (Some(rv), Some(av)) = (rv, av) {
                        if rv[0].1.get_size() == av[0].1.get_size() {
                            diffs.push((format!("{} = {} at {}", r, a, n), Bool::and(ctx, &[reach, &merge_bv(&rv)._eq(&merge_bv(&av)).not()])));
                        }
                    }
                }
            }
            // both keep the pushes: the same save area bytes at the header
            if lr_slot.is_some() {
                for k in slots {
                    let a: Option<Vec<(Bool, BV)>> = oa.iter().map(|x| x.2.frame.get(k).map(|y| (x.1.clone(), y.clone()))).collect();
                    let b: Option<Vec<(Bool, BV)>> = ca.iter().map(|x| x.2.frame.get(k).map(|y| (x.1.clone(), y.clone()))).collect();
                    if let (Some(a), Some(b)) = (a, b) {
                        diffs.push((format!("save area byte {} at {}", k, n), Bool::and(ctx, &[&oreach, &merge_bv(&a)._eq(&merge_bv(&b)).not()])));
                    }
                }
            }
            // the saved_rX invariant at the header
            for reg in &rel.restored {
                let name = format!("saved_{}", reg);
                let a: Option<Vec<(Bool, BV)>> = oa.iter().map(|x| x.2.vars.get(&name).map(|y| (x.1.clone(), y.1.clone()))).collect();
                let b: Option<Vec<(Bool, BV)>> = ca
                    .iter()
                    .map(|x| {
                        let v = if reg == "r14" { x.2.vars.get(crate::cpp::LR).map(|y| y.1.clone()) } else { x.2.cpu.get(reg).cloned() };
                        v.map(|v| (x.1.clone(), v))
                    })
                    .collect();
                if let (Some(a), Some(b)) = (a, b) {
                    diffs.push((format!("{} at {}", name, n), Bool::and(ctx, &[&oreach, &merge_bv(&a)._eq(&merge_bv(&b)).not()])));
                }
            }
            // the return address slot invariant at the header
            if let Some(off) = lr_slot {
                let addr = esp.bvsub(&s.bv(off as u64, 32));
                for (arr, reach, which) in [(&oa, &oreach, "original"), (&ca, &creach, "candidate")] {
                    let lr: Option<Vec<(Bool, BV)>> = arr.iter().map(|x| x.2.vars.get(crate::cpp::LR).map(|y| (x.1.clone(), y.1.clone()))).collect();
                    let Some(lr) = lr else { return Verdict::Unknown(format!("no return address variable at {}", n)) };
                    let slot: Vec<(Bool, BV)> = arr.iter().map(|x| (x.1.clone(), s.load_st(&x.2, &addr, 4))).collect();
                    diffs.push((format!("lr slot of the {} at {}", which, n), Bool::and(ctx, &[reach, &merge_bv(&slot)._eq(&merge_bv(&lr)).not()])));
                }
            }
            // the save area invariant at the header
            for (reg, off) in saved {
                let name = format!("saved_{}", reg);
                if !related.contains(&name) {
                    continue;
                }
                let addr = esp.bvsub(&s.bv(*off as u64, 32));
                let a: Vec<(Bool, BV)> = oa.iter().map(|x| (x.1.clone(), s.load_st(&x.2, &addr, 4))).collect();
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
            for k in crate::sym::cpu_keys().into_iter().filter(|k| !free.contains(k)) {
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
        if std::env::var("DECOMP_DEBUG").is_ok() {
            // the obligations the simplifier cannot settle alone (the two sides are not the same term)
            let open: Vec<&String> = diffs.iter().filter(|(_, d)| d.simplify().as_bool() != Some(false)).map(|(k, _)| k).collect();
            eprintln!("segment from {}: {} obligations, open: {:?}", start.as_deref().unwrap_or("entry"), diffs.len(), open);
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

// The C++ of a decompiled function, read back (cpp.rs), against the decompiled function `d` of `original` (itself
// proved equal to the original).
pub fn verify_cpp(ctx: &Context, original: &Function, d: &crate::decompile::Decompiled, cpp: &Function) -> Verdict {
    // a renamed draft: its variables and labels get the draft's names back, paired by their order (the proof relates
    // variables at loop headers by name)
    let mut cpp = cpp.clone();
    if let Some(draft) = crate::emit::emit(&d.function)
        .ok()
        .and_then(|t| crate::cpp::read(&t, &HashSet::new()).ok())
        .and_then(|mut f| f.exports.pop())
        .and_then(|e| e.function.ok())
    {
        let (dv, dl) = crate::cpp::declared_names(&draft);
        let (cv, cl) = crate::cpp::declared_names(&cpp);
        if dv.len() == cv.len() && dl.len() == cl.len() {
            let map: HashMap<String, String> = cv.into_iter().zip(dv).chain(cl.into_iter().zip(dl)).filter(|(a, b)| a != b).collect();
            crate::cpp::rename(&mut cpp, &map);
        }
    }
    let cpp = &cpp;
    // the decompiled function gets the C++'s copy of the return address (unused there), to relate them at loops
    let mut df = d.function.clone();
    df.body.insert(0, Stmt::Decl(Ty::U32, crate::cpp::LR.into(), Some(Expr::Cpu(crate::ast::CpuField::R(14)))));
    // the CPU copies of the registers the decompiled function keeps in variables are not related at loop headers,
    // nor pc (the return address a call leaves there differs)
    let mut free: HashSet<String> = df.synced.iter().map(|(_, f)| crate::sym::cpu_key(f)).collect();
    free.insert("pc".into());
    // with the pushes kept, both return through the saved lr; the save area is the pushed slots
    let pushed = if d.save_slots.is_empty() {
        crate::saves::remove_saves(&mut original.clone())
    } else {
        crate::saves::Saves { slots: vec![], registers: vec![] }
    };
    let lr_slot = pushed.registers.iter().find(|(r, _)| r == "r14").map(|(_, off)| *off);
    let restored = d.saved.iter().map(|(r, _)| r.clone()).collect();
    equivalent_with_loops_free(ctx, &df, cpp, &pushed.slots, &[], &Relations { free, lr_slot, restored })
}
