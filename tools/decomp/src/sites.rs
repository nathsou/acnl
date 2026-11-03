// The argument registers of the indirect calls (DECOMP_SITES=1): an assumption about the program, not a fact the
// checker proves (docs/decomp.md, "Call-site prototypes").
//
// The game's compiler puts the target of an indirect call (`blx rK`) in the first argument register that holds no
// argument: `blx r1` passes `this` only, `blx r2` two arguments, `blx r3` three, `blx r12` four (14,636, 5,067,
// 2,536 and 1,365 of the program's calls). A 64-bit argument skips a register to start at an even one, so a core
// register above K written since the function's entry or its last call is passed too, with those below it. Float
// arguments are s0 up to the highest float register written since then. The assumption is that the callee reads no
// other argument register: an indirect call's callee is then modelled like a callee with that signature
// (signatures.rs), so a draft passes it only those registers, and its caller's own signature can be proved without
// the others.
use crate::ast::{CpuField, Expr, Function, Stmt};
use std::collections::{HashMap, HashSet};

pub type Path = Vec<usize>;

pub fn enabled() -> bool {
    std::env::var("DECOMP_SITES").map_or(false, |v| v == "1")
}

// the registers of a call's arguments: r0 to the highest core register, s0 to the highest float register
fn registers(core: Option<u32>, floats: Option<u32>) -> Vec<String> {
    let mut out: Vec<String> = core.map_or(vec![], |n| (0..=n).map(|k| format!("r{}", k)).collect());
    out.extend(floats.map_or(vec![], |n| (0..=n).map(|k| format!("s{}", k)).collect()));
    out
}

// the register holding the target of the indirect call at `i`: `tpc = rK; ... c->pc = tpc; rt_dispatch(c, 0);`
fn target_register(list: &[Stmt], i: usize, field_of: &HashMap<&str, &CpuField>) -> Option<u32> {
    let mut var: Option<&String> = None;
    for s in list[..i].iter().rev() {
        match (s, var) {
            (Stmt::SetCpu(CpuField::Pc, Expr::Var(t)), None) => match field_of.get(t.as_str()) {
                Some(CpuField::R(k)) => return Some(*k),
                _ => var = Some(t),
            },
            (Stmt::Assign(t, Expr::Var(x), ..), Some(v)) if t == v => {
                return match field_of.get(x.as_str()) {
                    Some(CpuField::R(k)) => Some(*k),
                    _ => None,
                };
            }
            (Stmt::GuestCall(..) | Stmt::Dispatch(_, ..) | Stmt::Svc(_) | Stmt::Label(_), _) => return None,
            _ => {}
        }
    }
    None
}

// The site of an indirect call: the argument registers its callee reads (None: no assumption, all of them).
fn site(target: u32, written: &HashSet<String>) -> Option<Vec<String>> {
    let below = match target {
        0..=3 => target as i64 - 1,
        12 => 3,
        _ => return None,
    };
    let core = (target as i64 + 1..=3).filter(|k| written.contains(&format!("r{}", k))).max().unwrap_or(-1).max(below);
    let floats = (0..16).filter(|k| written.contains(&format!("s{}", k))).max();
    Some(registers(u32::try_from(core).ok(), floats))
}

// Inserts the site before each indirect call of the original (tail calls included; not those to a constant: dispatch.rs).
pub fn annotate(f: &mut Function) {
    let written = crate::flow::written_since_call(f);
    let constant = crate::dispatch::constant_targets(f);
    let synced = f.synced.clone();
    let field_of: HashMap<&str, &CpuField> = synced.iter().map(|(v, fl)| (v.as_str(), fl)).collect();
    fn walk(list: &mut Vec<Stmt>, prefix: &[usize], written: &HashMap<Path, HashSet<String>>,
            constant: &HashMap<Path, u32>, field_of: &HashMap<&str, &CpuField>) {
        let mut at: Vec<(usize, Vec<String>)> = Vec::new();
        for i in 0..list.len() {
            let p: Path = [prefix, &[i]].concat();
            match &mut list[i] {
                Stmt::Dispatch(_, ..) if !constant.contains_key(&p) => {
                    let regs = target_register(list, i, field_of).zip(written.get(&p)).and_then(|(k, w)| site(k, w));
                    if let Some(regs) = regs {
                        at.push((i, regs));
                    }
                }
                Stmt::If(_, a, b) | Stmt::While { body: a, check: b, .. } => {
                    walk(a, &[p.clone(), vec![0]].concat(), written, constant, field_of);
                    walk(b, &[p.clone(), vec![1]].concat(), written, constant, field_of);
                }
                _ => {}
            }
        }
        // (from the end, so that the indices before stay right)
        for (i, regs) in at.into_iter().rev() {
            list.insert(i, Stmt::Site(regs));
        }
    }
    walk(&mut f.body, &[], &written, &constant, &field_of);
}

// The site of each indirect call of a function (its path -> the registers): the last Site before it in its list, with
// no other call in between.
pub fn at_calls(f: &Function) -> HashMap<Path, Vec<String>> {
    at_calls_where(f, false)
}

// the same, for the tail calls only
pub fn at_tail_calls(f: &Function) -> HashMap<Path, Vec<String>> {
    at_calls_where(f, true)
}

fn at_calls_where(f: &Function, tails_only: bool) -> HashMap<Path, Vec<String>> {
    fn walk(list: &[Stmt], prefix: &[usize], tails_only: bool, out: &mut HashMap<Path, Vec<String>>) {
        let mut pending: Option<&Vec<String>> = None;
        for (i, s) in list.iter().enumerate() {
            let p: Path = [prefix, &[i]].concat();
            match s {
                Stmt::Site(regs) => pending = Some(regs),
                Stmt::Dispatch(tail, ..) => {
                    if let Some(regs) = pending.take() {
                        if *tail || !tails_only {
                            out.insert(p, regs.clone());
                        }
                    }
                }
                Stmt::GuestCall(..) | Stmt::Svc(_) | Stmt::Label(_) => pending = None,
                Stmt::If(_, a, b) | Stmt::While { body: a, check: b, .. } => {
                    pending = None;
                    walk(a, &[p.clone(), vec![0]].concat(), tails_only, out);
                    walk(b, &[p.clone(), vec![1]].concat(), tails_only, out);
                }
                _ => {}
            }
        }
    }
    let mut out = HashMap::new();
    walk(&f.body, &[], tails_only, &mut out);
    out
}
