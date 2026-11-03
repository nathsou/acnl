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
// Whether a way the solver's facts leave possible is one the assumptions rule out (a vacuous proof).
fn excluded_by_assumptions(solver: &Solver, way: &Bool, assumptions: &[Bool]) -> bool {
    solver.push();
    solver.assert(way);
    let possible = solver.check() == SatResult::Sat;
    let excluded = possible && {
        for a in assumptions {
            solver.assert(a);
        }
        solver.check() != SatResult::Sat
    };
    solver.pop(1);
    excluded
}

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
    equivalent_skipping(ctx, original, candidate, save_slots, &HashSet::new())
}

// The same, not comparing the observed registers in `skip`.
pub fn equivalent_skipping(ctx: &Context, original: &Function, candidate: &Function, save_slots: &[u32], skip: &HashSet<String>) -> Verdict {
    // (calls to a constant address as direct calls on both sides: the call model decides by the statement)
    let (original, candidate) = (&crate::dispatch::as_direct_calls(original), &crate::dispatch::as_direct_calls(candidate));
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
    for x in &s.facts {
        solver.assert(x);
    }
    let mut diffs: Vec<(String, Bool)> = Vec::new();
    for k in OBSERVED.iter().copied().filter(|k| !skip.contains(*k)) {
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
    // (an exit the facts alone rule out is one the program cannot take)
    if !s.assumptions.is_empty() {
        for (k, e) in b.iter().enumerate() {
            if excluded_by_assumptions(&solver, &e.cond, &s.assumptions) {
                return Verdict::Unknown(format!("assumptions exclude exit {} of the candidate", k));
            }
        }
    }
    for x in &s.assumptions {
        solver.assert(x);
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
                Stmt::Decl(t, n, _, ..) => {
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
    // observed registers not compared at the exits
    pub unobserved: HashSet<String>,
    // (original variable, candidate CPU field): a register the original keeps in a variable and the candidate leaves
    // in the CPU (it keeps no variable for it): the two hold the same value
    pub mirrored: Vec<(String, String)>,
}

// The same, with the CPU fields in `free` left unrelated at the loop headers (a weaker invariant: still sound, as
// every step is proved from it). For a decompiled function against its C++: the decompiled function keeps
// registers in variables and writes them to the CPU only around calls, the C++ writes only what a call takes.
// Each relation is assumed at a header and proved on arrival.
pub fn equivalent_with_loops_free<'c>(ctx: &'c Context, original: &Function, candidate: &Function, slots: &[u32],
                                  saved: &[(String, u32)], rel: &Relations) -> Verdict {
    let (original, candidate) = (&crate::dispatch::as_direct_calls(original), &crate::dispatch::as_direct_calls(candidate));
    let (free, lr_slot) = (&rel.free, rel.lr_slot);
    let (_, olabels, oheaders) = Sym::graph(original);
    if oheaders.is_empty() {
        return equivalent_skipping(ctx, original, candidate, slots, &rel.unobserved);
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
                Stmt::Decl(_, n, _, ..) | Stmt::Assign(n, _, ..) => {
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
    // what the original reads from a loop header on: a register it restores from its saved copy before returning is
    // only needed for what it computes (not for the caller), the others for both
    let olive_used = flow::liveness_with(original, false);
    let needed_at = |l: &str| -> HashSet<String> {
        let mut n: HashSet<String> = olive.at_label.get(l).cloned().unwrap_or_default();
        n.retain(|v| !rel.restored.contains(v));
        if let Some(used) = olive_used.at_label.get(l) {
            n.extend(used.iter().filter(|v| rel.restored.contains(*v)).cloned());
        }
        n
    };
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
                let shared_sp = v == "r13" && !ctypes.contains_key(v) && (!saved.is_empty() || !slots.is_empty());
                let name = if related.contains(v) && (ctypes.get(v) == Some(t) || shared_sp) { format!("v_{}", v) } else { format!("o_{}", v) };
                oinit.vars.insert(v.clone(), (*t, BV::new_const(ctx, name, t.bits())));
            }
            // the CPU fields left unrelated: a value of its own in each program (they are not proved equal on arrival;
            // the invariants below may still tie some of them to a variable)
            for k in free {
                if oinit.cpu.contains_key(k) {
                    oinit.cpu.insert(k.clone(), BV::new_const(ctx, format!("o_cpu_{}", k), 32));
                    cinit.cpu.insert(k.clone(), BV::new_const(ctx, format!("c_cpu_{}", k), 32));
                }
            }
            // a candidate that keeps sp in the CPU (GUEST_EXPORT_FRAMED): the CPU's sp is the related one
            if !ctypes.contains_key("r13") && (!saved.is_empty() || !slots.is_empty()) {
                cinit.cpu.insert("r13".into(), BV::new_const(ctx, "v_r13", 32));
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
            // invariant: the candidate leaves in the CPU what the original keeps in its variable (the candidate's CPU
            // copy is not otherwise related: the original's is dead)
            // one value for the three: the one the saved copy holds when the original restores the register (that
            // invariant set it), else the original's variable's (which the other invariants set)
            let needed = start.as_ref().map(|l| needed_at(l)).unwrap_or_default();
            for (v, k) in rel.mirrored.iter().filter(|(v, _)| needed.contains(v)) {
                let (Some((t, var)), Some(cpu)) = (oinit.vars.get(v).cloned(), cinit.cpu.get(k).cloned()) else { continue };
                if t.bits() != 32 {
                    continue;
                }
                let value = if rel.restored.contains(k) { cpu } else { var };
                oinit.vars.insert(v.clone(), (t, value.clone()));
                if let Some((ct, _)) = cinit.vars.get(v).cloned() {
                    cinit.vars.insert(v.clone(), (ct, value.clone()));
                }
                cinit.cpu.insert(k.clone(), value);
            }
            // invariant: the return address slot holds LR (both programs)
            if let (Some(off), Some((_, lr))) = (lr_slot, cinit.vars.get(crate::cpp::LR).cloned()) {
                let a = esp.bvsub(&s.bv(off as u64, 32));
                s.store_st(&mut oinit, &a, &lr);
                s.store_st(&mut cinit, &a, &lr);
            }
            // invariant: the original's save area holds the registers the candidate keeps in saved_*
            for (reg, off) in saved {
                if let Some((_, v)) = cinit.vars.get(&slot_variable(reg)) {
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
        for x in &s.facts {
            solver.assert(x);
        }
        // the assumptions must leave every way on of the candidate possible (no vacuous proof)
        if !s.assumptions.is_empty() {
            let ways: Vec<Bool> = cexits.iter().map(|e| e.cond.clone()).chain(carr.iter().map(|a| a.1.clone())).collect();
            for (k, w) in ways.iter().enumerate() {
                if excluded_by_assumptions(&solver, w, &s.assumptions) {
                    return Verdict::Unknown(format!("assumptions exclude way {} of the candidate", k));
                }
            }
        }
        for a in &s.assumptions {
            solver.assert(a);
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
            for k in OBSERVED.iter().copied().filter(|k| !rel.unobserved.contains(*k)) {
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
                let sp_at: Vec<(Bool, BV)> = ca
                    .iter()
                    .filter_map(|x| x.2.vars.get("r13").map(|y| y.1.clone()).or_else(|| x.2.cpu.get("r13").cloned()).map(|y| (x.1.clone(), y)))
                    .collect();
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
            // the mirrored registers at the header (those the original reads from there on)
            let needed = needed_at(n);
            for (v, k) in rel.mirrored.iter().filter(|(v, _)| needed.contains(v)) {
                let a: Option<Vec<(Bool, BV)>> = oa.iter().map(|x| x.2.vars.get(v).map(|y| (x.1.clone(), y.1.clone()))).collect();
                let b: Vec<(Bool, BV)> = ca.iter().map(|x| (x.1.clone(), x.2.cpu[k].clone())).collect();
                if let Some(a) = a {
                    if a[0].1.get_size() == 32 {
                        diffs.push((format!("{} = cpu {} at {}", v, k, n), Bool::and(ctx, &[&oreach, &merge_bv(&a)._eq(&merge_bv(&b)).not()])));
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
                let name = slot_variable(reg);
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
            for v in related.iter().filter(|v| !((v.starts_with("saved_") || v.starts_with("local_")) && !otypes.contains_key(*v))) {
                let a: Option<Vec<(Bool, BV)>> = oa.iter().map(|x| x.2.vars.get(v).map(|y| (x.1.clone(), y.1.clone()))).collect();
                // (sp: the CPU's, for a candidate that keeps it there)
                let b: Option<Vec<(Bool, BV)>> = ca
                    .iter()
                    .map(|x| match x.2.vars.get(v) {
                        Some(y) => Some((x.1.clone(), y.1.clone())),
                        None if v == "r13" => x.2.cpu.get("r13").map(|y| (x.1.clone(), y.clone())),
                        None => None,
                    })
                    .collect();
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
                if std::env::var("DECOMP_DEBUG_MODEL").is_ok() {
                    eprintln!("{}", m);
                }
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

// the candidate's variable for a word of the save area: a saved register's copy, or a private word's variable
fn slot_variable(reg: &str) -> String {
    if reg.starts_with("local_") { reg.to_string() } else { format!("saved_{}", reg) }
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
        .take_while(|s| matches!(s, Stmt::Decl(_, n, Some(Expr::Var(_)), ..) if n.starts_with("arg")))
        .cloned()
        .collect();
    let mut body = ghosts;
    body.extend(std::mem::take(&mut o.body));
    o.body = body;
    // the results no caller reads are not compared (results.rs)
    let rel = Relations { unobserved: crate::results::unobserved(original.address), ..Default::default() };
    // the private frame words kept in variables (private.rs): a region of the frame like the save area, related to
    // their variables at loop headers like the saved registers
    let mut slots = d.save_slots.clone();
    let mut saved = d.saved.clone();
    for (v, k) in &d.private {
        slots.extend((0..4).map(|i| k - i));
        saved.push((v.clone(), *k));
    }
    equivalent_with_loops_free(ctx, &o, &d.function, &slots, &saved, &rel)
}

// The C++ of a decompiled function, read back (cpp.rs), against the decompiled function `d` of `original` (itself
// proved equal to the original).
pub fn verify_cpp(ctx: &Context, original: &Function, d: &crate::decompile::Decompiled, cpp: &Function) -> Verdict {
    // a renamed draft: its variables and labels get the draft's names back, paired by their order (the proof relates
    // variables at loop headers by name)
    let mut cpp = cpp.clone();
    // (read with the runtime's helpers, as prove-cpp reads the drafts: else a draft calling one does not read back)
    let helpers: HashSet<String> = crate::HELPERS.iter().map(|s| s.to_string()).collect();
    if let Some(draft) = crate::emit::emit(d)
        .ok()
        .and_then(|t| crate::cpp::read(&t, &helpers).ok())
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
    // loops written without their labels: the decompiled function's, by their order (the proof relates the programs at
    // loop headers by label; a wrong pairing fails it)
    fn loop_labels(list: &[Stmt], out: &mut Vec<String>) {
        for s in list {
            match s {
                Stmt::If(_, a, b) => {
                    loop_labels(a, out);
                    loop_labels(b, out);
                }
                Stmt::While { top, test, body, check, .. } => {
                    out.push(top.clone());
                    out.push(test.clone().unwrap_or_default());
                    loop_labels(body, out);
                    loop_labels(check, out);
                }
                _ => {}
            }
        }
    }
    let (mut dl, mut cl) = (Vec::new(), Vec::new());
    loop_labels(&d.function.body, &mut dl);
    loop_labels(&cpp.body, &mut cl);
    if dl.len() == cl.len() {
        let map: HashMap<String, String> =
            cl.into_iter().zip(dl).filter(|(c, d)| c.starts_with(crate::cpp::LOOP_LABEL) && !d.is_empty()).collect();
        crate::cpp::rename(&mut cpp, &map);
    }
    let cpp = &cpp;
    // the decompiled function gets the C++'s copy of the return address (unused there), to relate them at loops
    let mut df = d.function.clone();
    df.body.insert(0, Stmt::Decl(Ty::U32, crate::cpp::LR.into(), Some(Expr::Cpu(crate::ast::CpuField::R(14))), crate::ast::Origin(0)));
    // the CPU copies of the registers the decompiled function keeps in variables are not related at loop headers,
    // nor pc (the return address a call leaves there differs)
    let mut free: HashSet<String> = df.synced.iter().map(|(_, f)| crate::sym::cpu_key(f)).collect();
    free.insert("pc".into());
    // with the pushes kept, both return through the saved lr; the save area is the pushed slots
    // (a C++ export that pushes as the original did, GUEST_EXPORT_FRAMED, writes the removed save area: its region)
    let framed = cpp.body.iter().any(|s| matches!(s, Stmt::Decl(_, n, _, ..) if n == crate::cpp::FRAME));
    let (slots, lr_slot) = if d.save_slots.is_empty() {
        crate::saves::pushed_slots(original)
    } else if framed {
        (d.save_slots.clone(), None)
    } else {
        (vec![], None)
    };
    let restored = d.saved.iter().map(|(r, _)| r.clone()).collect();
    // the registers the C++ leaves in the CPU (it declares no variable for them)
    let mut declared: HashSet<String> = cpp.locals.iter().map(|(_, n, _)| n.clone()).collect();
    fn decls(list: &[Stmt], out: &mut HashSet<String>) {
        for s in list {
            match s {
                Stmt::Decl(_, n, _, ..) => {
                    out.insert(n.clone());
                }
                Stmt::If(_, a, b) | Stmt::While { body: a, check: b, .. } => {
                    decls(a, out);
                    decls(b, out);
                }
                _ => {}
            }
        }
    }
    decls(&cpp.body, &mut declared);
    // the CPU fields the C++ writes (a call writes the scratch registers)
    fn cpu_writes(list: &[Stmt], out: &mut HashSet<String>) {
        for s in list {
            match s {
                Stmt::SetCpu(f, _) => {
                    out.insert(crate::sym::cpu_key(f));
                }
                Stmt::GuestCall(..) | Stmt::Dispatch(_, ..) | Stmt::Svc(_) | Stmt::SyncOut => {
                    out.extend(["r0", "r1", "r2", "r3", "r12", "r14"].iter().map(|k| k.to_string()));
                    out.extend((0..16).map(|k| format!("s{}", k)));
                }
                Stmt::If(_, a, b) | Stmt::While { body: a, check: b, .. } => {
                    cpu_writes(a, out);
                    cpu_writes(b, out);
                }
                _ => {}
            }
        }
    }
    let mut written = HashSet::new();
    cpu_writes(&cpp.body, &mut written);
    // (a declaration's value counts, unless it is the variable's own register's entry value: that register from the
    // CPU, or the parameter that holds it; `u32 r6 = r0;` is an assignment of r6)
    let register_of = |n: &str| -> String {
        match n.rsplit_once('_') {
            Some((b, k)) if !k.is_empty() && k.bytes().all(|c| c.is_ascii_digit()) => b.to_string(),
            _ => n.to_string(),
        }
    };
    let params: HashMap<String, String> = cpp
        .body
        .iter()
        .filter_map(|s| if let Stmt::Decl(_, n, Some(Expr::Cpu(f)), ..) = s { Some((n.clone(), crate::sym::cpu_key(f))) } else { None })
        .collect();
    let mut entry_values: HashSet<String> = HashSet::new();
    fn entry_decls(list: &[Stmt], params: &HashMap<String, String>, register_of: &dyn Fn(&str) -> String, out: &mut HashSet<String>) {
        for s in list {
            match s {
                Stmt::Decl(_, n, Some(Expr::Cpu(f)), ..) if crate::sym::cpu_key(f) == register_of(n) => {
                    out.insert(n.clone());
                }
                Stmt::Decl(_, n, Some(Expr::Var(p)), ..) if params.get(p).map_or(false, |k| *k == register_of(n)) => {
                    out.insert(n.clone());
                }
                Stmt::If(_, a, b) | Stmt::While { body: a, check: b, .. } => {
                    entry_decls(a, params, register_of, out);
                    entry_decls(b, params, register_of, out);
                }
                _ => {}
            }
        }
    }
    entry_decls(&cpp.body, &params, &register_of, &mut entry_values);
    fn assigns(list: &[Stmt], entry: &HashSet<String>, out: &mut HashSet<String>) {
        for s in list {
            match s {
                Stmt::Assign(n, _, ..) => {
                    out.insert(n.clone());
                }
                Stmt::Decl(_, n, Some(_), ..) if !entry.contains(n) && !n.starts_with("__") => {
                    out.insert(n.clone());
                }
                Stmt::If(_, a, b) | Stmt::While { body: a, check: b, .. } => {
                    assigns(a, entry, out);
                    assigns(b, entry, out);
                }
                _ => {}
            }
        }
    }
    let mut assigned = HashSet::new();
    assigns(&cpp.body, &entry_values, &mut assigned);
    // a value split off a register (values.rs: rN_k) is a variable for that register
    let base = |n: &String| match n.rsplit_once('_') {
        Some((b, k)) if !k.is_empty() && k.bytes().all(|c| c.is_ascii_digit()) => b.to_string(),
        _ => n.clone(),
    };
    let declared: HashSet<String> = declared.iter().map(base).collect();
    let assigned: HashSet<String> = assigned.iter().map(base).collect();
    // a register the C++ leaves in the CPU: it keeps no variable for it, or neither writes the CPU's copy nor its
    // variable (both keep the entry value); lr is related through the return address the C++ keeps
    let mirrored = df
        .synced
        .iter()
        .map(|(v, f)| (v.clone(), crate::sym::cpu_key(f)))
        .filter(|(v, k)| {
            k != "pc" && k != "r14" && (!declared.contains(v) || (!written.contains(k) && !assigned.contains(v)))
        })
        .collect();
    equivalent_with_loops_free(ctx, &df, cpp, &slots, &[], &Relations { free, lr_slot, restored, unobserved: crate::results::unobserved(original.address), mirrored })
}
