// Function signatures: the argument registers (r0-r3, s0-s15) a function's behaviour depends on, proved by
// non-interference: two runs that agree on those registers and differ on the other argument registers leave memory and
// the effects the same, and r0, r1, s0 and s1 the same whenever they entered the same (an untouched register passes
// through). The call model (sym.rs) then makes those results of a call depend on the callee's arguments only, so the
// C++ passes only them. The other results (scratch registers, flags) still depend on every argument register.
use crate::ast::{CpuField, Expr, Function, Stmt};
use crate::check::{Relations, Verdict};
use std::collections::HashMap;
use z3::Context;

pub const ARGS: [&str; 20] = [
    "r0", "r1", "r2", "r3", "s0", "s1", "s2", "s3", "s4", "s5", "s6", "s7", "s8", "s9", "s10", "s11", "s12", "s13", "s14",
    "s15",
];

// the results a caller observes, which a signature makes depend on the arguments only
pub const RESULTS: [&str; 4] = ["r0", "r1", "s0", "s1"];

// function address (bit 0 clear) -> its argument registers: read from DECOMP_SIGNATURES (default
// build/acnl/decomp_signatures.txt) on first use, extended by `insert` while signatures are being proved
static TABLE: std::sync::OnceLock<std::sync::RwLock<HashMap<u32, Vec<String>>>> = std::sync::OnceLock::new();

pub fn path() -> String {
    std::env::var("DECOMP_SIGNATURES").unwrap_or("build/acnl/decomp_signatures.txt".into())
}

// "address reg reg ..." per line
pub fn parse_table(text: &str) -> HashMap<u32, Vec<String>> {
    text.lines()
        .filter_map(|l| {
            let mut w = l.split_whitespace();
            let a = u32::from_str_radix(w.next()?, 16).ok()?;
            Some((a & !1, w.map(|r| r.to_string()).collect()))
        })
        .collect()
}

fn table() -> &'static std::sync::RwLock<HashMap<u32, Vec<String>>> {
    TABLE.get_or_init(|| std::sync::RwLock::new(parse_table(&std::fs::read_to_string(path()).unwrap_or_default())))
}

// Starts from this table instead of the file (proving signatures from scratch).
pub fn reset(map: HashMap<u32, Vec<String>>) {
    *table().write().unwrap() = map;
}

pub fn insert(address: u32, regs: Vec<String>) {
    table().write().unwrap().insert(address & !1, regs);
}

pub fn of(address: u32) -> Option<Vec<String>> {
    table().read().unwrap().get(&(address & !1)).cloned()
}

// The signatures a proof about `f` can use (those of its direct callees), hashed: part of the proof cache's key, so
// that a proof made with other callee signatures is not taken for this one.
pub fn callee_key(f: &Function) -> u64 {
    let mut called = Vec::new();
    direct_callees(&f.body, &mut called);
    called.sort();
    called.dedup();
    let t = table().read().unwrap();
    let mut h: u64 = 0xcbf2_9ce4_8422_2325;
    for c in called {
        if let Some(regs) = t.get(&(c & !1)) {
            for b in format!("{:x} {};", c & !1, regs.join(" ")).bytes() {
                h = (h ^ b as u64).wrapping_mul(0x100_0000_01b3);
            }
        }
    }
    h
}

// the guest functions a function calls directly (tail calls included)
pub fn direct_callees(list: &[Stmt], out: &mut Vec<u32>) {
    for s in list {
        match s {
            Stmt::GuestCall(t, _) => out.push(*t),
            Stmt::If(_, a, b) | Stmt::While { body: a, check: b, .. } => {
                direct_callees(a, out);
                direct_callees(b, out);
            }
            _ => {}
        }
    }
}

// Whether `f` behaves the same when the registers in `changed` hold other values (opaque ones), comparing every
// observable but `skip` (a register changed may pass through to its own result).
fn same_when_changed(ctx: &Context, f: &Function, changed: &[&str], skip: Option<&str>) -> bool {
    if changed.is_empty() {
        return true;
    }
    // the copy: the registers hold other values from the start, in the CPU and in the locals the prologue copies them
    // to (any 32 bits; a float register gets them as its bit pattern, not converted)
    let field = |k: &str| match k.strip_prefix('s') {
        Some(n) => CpuField::S(n.parse().unwrap()),
        None => CpuField::R(k[1..].parse().unwrap()),
    };
    let value = |k: &str| {
        let any = Expr::Call(format!("havoc_{}", k), vec![]);
        if k.starts_with('s') { Expr::Call("U2F".into(), vec![any]) } else { any }
    };
    let mut g = f.clone();
    for (_, _, init) in g.locals.iter_mut() {
        if let Some(Expr::Cpu(fl)) = init {
            let key = crate::sym::cpu_key(fl);
            if changed.contains(&key.as_str()) {
                *init = Some(value(&key));
            }
        }
    }
    let mut prefix: Vec<Stmt> = changed.iter().map(|k| Stmt::SetCpu(field(k), value(k))).collect();
    prefix.extend(std::mem::take(&mut g.body));
    g.body = prefix;
    let rel = Relations {
        free: changed.iter().map(|k| k.to_string()).collect(),
        unobserved: skip.iter().map(|k| k.to_string()).collect(),
        ..Default::default()
    };
    matches!(crate::check::equivalent_with_loops_free(ctx, f, &g, &[], &[], &rel), Verdict::Proved)
}

// Whether `f`'s observed results depend on the argument registers in `reads` only: the other argument registers that
// are no results changed at once (everything else the same), then each result register that is no argument alone
// (everything but itself the same). Changing the registers one group after the other, the conditional statement
// follows: memory, effects, and every result that entered the same, stay the same.
fn non_interference(ctx: &Context, f: &Function, reads: &[String]) -> bool {
    let others: Vec<&str> = ARGS.iter().copied().filter(|k| !reads.iter().any(|r| r == k)).collect();
    let group: Vec<&str> = others.iter().copied().filter(|k| !RESULTS.contains(k)).collect();
    if !same_when_changed(ctx, f, &group, None) {
        return false;
    }
    others.iter().filter(|k| RESULTS.contains(*k)).all(|k| same_when_changed(ctx, f, &[k], Some(k)))
}

// The argument registers the calls of a function may read: a direct callee's signature (all without one), every one
// for an indirect call or a system call.
fn call_reads(list: &[Stmt], out: &mut Vec<String>) {
    for s in list {
        match s {
            Stmt::GuestCall(t, _) => match of(*t) {
                Some(regs) => out.extend(regs),
                None => out.extend(ARGS.iter().map(|k| k.to_string())),
            },
            Stmt::Dispatch(_) | Stmt::Svc(_) => out.extend(ARGS.iter().map(|k| k.to_string())),
            Stmt::If(_, a, b) | Stmt::While { body: a, check: b, .. } => {
                call_reads(a, out);
                call_reads(b, out);
            }
            _ => {}
        }
    }
}

// The argument registers `f` reads, proved (None: not proved, so it takes them all).
pub fn prove(ctx: &Context, f: &Function) -> Option<Vec<String>> {
    // the guess: the registers it keeps in variables that are read before being written, and the ones it does not
    // keep that its calls read (the CPU's values go to its callees)
    let lv = crate::flow::liveness(f);
    let field: HashMap<&str, String> = f.synced.iter().map(|(v, fl)| (v.as_str(), crate::sym::cpu_key(fl))).collect();
    let kept: Vec<&String> = field.values().collect();
    let mut passed = Vec::new();
    call_reads(&f.body, &mut passed);
    let mut reads: Vec<String> = ARGS
        .iter()
        .filter(|k| {
            let live = field.iter().any(|(v, fl)| fl == *k && lv.at_entry.contains(*v));
            live || (passed.iter().any(|x| x == *k) && !kept.iter().any(|x| x == k))
        })
        .map(|k| k.to_string())
        .collect();
    reads.sort_by_key(|k| ARGS.iter().position(|x| x == k));
    let debug = std::env::var("DECOMP_DEBUG").is_ok();
    if reads.len() == ARGS.len() {
        if debug {
            eprintln!("{:x}: reads every argument register", f.address);
        }
        return None;
    }
    if non_interference(ctx, f, &reads) {
        // liveness over-approximates (a register written on every branch looks read): drop core registers that
        // are not needed, one at a time (they decide how many arguments a call passes)
        for k in ["r3", "r2", "r1", "r0"] {
            if reads.iter().any(|r| r == k) {
                let fewer: Vec<String> = reads.iter().filter(|r| *r != k).cloned().collect();
                if non_interference(ctx, f, &fewer) {
                    reads = fewer;
                }
            }
        }
        // the float registers a callee without a signature is passed look read: none of them, at once
        if reads.iter().any(|r| r.starts_with('s')) {
            let fewer: Vec<String> = reads.iter().filter(|r| !r.starts_with('s')).cloned().collect();
            if non_interference(ctx, f, &fewer) {
                reads = fewer;
            }
        }
        Some(reads)
    } else {
        if debug {
            eprintln!("{:x}: not proved with {:?}", f.address, reads);
        }
        None
    }
}
