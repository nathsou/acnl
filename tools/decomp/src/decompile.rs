// The decompiler's passes, in order. Every pass keeps the function in the same language, so the result can be
// proved equal to the original by check.rs.
use crate::ast::Function;
use crate::{addresses, flow, inline, propagate, saves, simplify, structure};

pub struct Decompiled {
    pub function: Function,
    pub save_slots: Vec<u32>,             // the removed register save area (bytes below the entry sp)
    pub saved: Vec<(String, u32)>,        // the saved registers and their slots (offset below the entry sp)
}

pub fn decompile(original: &Function) -> Decompiled {
    decompile_traced(original, &mut |_, _, _| {})
}

// Bump when the checker or the meaning of the AST changes: earlier proofs in the cache then no longer count.
const CHECKER_VERSION: u64 = 3;

// Proofs already done (DECOMP_CACHE, default build/acnl/decomp_proved.txt): "address hash" per line, the hash of a
// decompiled function proved equal to the original at that address (FNV-1a of its printout and CHECKER_VERSION).
static CACHE: std::sync::OnceLock<std::sync::Mutex<std::collections::HashSet<(u32, u64)>>> = std::sync::OnceLock::new();

fn cache_path() -> String {
    std::env::var("DECOMP_CACHE").unwrap_or("build/acnl/decomp_proved.txt".into())
}

fn cache() -> &'static std::sync::Mutex<std::collections::HashSet<(u32, u64)>> {
    CACHE.get_or_init(|| {
        let text = std::fs::read_to_string(cache_path()).unwrap_or_default();
        let set = text
            .lines()
            .filter_map(|l| {
                let mut w = l.split_whitespace();
                Some((u32::from_str_radix(w.next()?, 16).ok()?, u64::from_str_radix(w.next()?, 16).ok()?))
            })
            .collect();
        std::sync::Mutex::new(set)
    })
}

fn proof_key(original: &Function, d: &Decompiled) -> (u32, u64) {
    // (the call model depends on the signature table, when there is one)
    let sig = if crate::signatures::table().map.is_empty() { 0 } else { crate::signatures::table().hash };
    let mut h: u64 = 0xcbf2_9ce4_8422_2325 ^ CHECKER_VERSION ^ sig;
    let text = format!("{}\n{:?}\n{:?}", crate::print::function(&d.function), d.save_slots, d.saved);
    for b in text.bytes() {
        h = (h ^ b as u64).wrapping_mul(0x100_0000_01b3);
    }
    (original.address, h)
}

// verify, or the proof found earlier for this very decompilation
fn verify_cached(ctx: &z3::Context, original: &Function, d: &Decompiled) -> crate::check::Verdict {
    let key = proof_key(original, d);
    if cache().lock().unwrap().contains(&key) {
        return crate::check::Verdict::Proved;
    }
    let v = crate::check::verify(ctx, original, d);
    if matches!(v, crate::check::Verdict::Proved) {
        cache().lock().unwrap().insert(key);
        use std::io::Write;
        if let Ok(mut f) = std::fs::OpenOptions::new().create(true).append(true).open(cache_path()) {
            let _ = writeln!(f, "{:08x} {:016x}", key.0, key.1);
        }
    }
    v
}

// Decompiles and proves; when removing the register saves does not give a proof, tries again keeping them.
pub fn decompile_and_prove(ctx: &z3::Context, original: &Function) -> (Decompiled, crate::check::Verdict) {
    let first = decompile_with(original, true, &mut |_, _, _| {});
    let v = verify_cached(ctx, original, &first);
    if std::env::var("DECOMP_DEBUG").is_ok() {
        let w = match &v {
            crate::check::Verdict::Proved => "proved".to_string(),
            crate::check::Verdict::Differs(w) => format!("differs {}", w),
            crate::check::Verdict::Unknown(w) => format!("unknown {}", w),
        };
        eprintln!("{:x}: saves removed: {:?} -> {}", original.address, first.save_slots, w);
    }
    if matches!(v, crate::check::Verdict::Proved) || first.save_slots.is_empty() {
        return (first, v);
    }
    let second = decompile_with(original, false, &mut |_, _, _| {});
    let v2 = verify_cached(ctx, original, &second);
    (second, v2)
}

// The same, retrying once with a longer solver timeout (DECOMP_RETRY_MS) when the first try timed out.
pub fn decompile_and_prove_retrying(ctx: &z3::Context, original: &Function) -> (Decompiled, crate::check::Verdict) {
    let (d, v) = decompile_and_prove(ctx, original);
    let timed_out = matches!(&v, crate::check::Verdict::Unknown(w) if w.contains("timeout") || w.contains("canceled") || w.contains("budget"));
    let retry: Option<u32> = std::env::var("DECOMP_RETRY_MS").ok().and_then(|x| x.parse().ok());
    match (timed_out, retry) {
        (true, Some(ms)) => {
            crate::check::TIMEOUT_OVERRIDE.with(|t| t.set(Some(ms)));
            let r = decompile_and_prove(ctx, original);
            crate::check::TIMEOUT_OVERRIDE.with(|t| t.set(None));
            r
        }
        _ => (d, v),
    }
}

// The same, calling `after(pass, function, save slots)` after every pass (to find a pass that breaks equivalence).
pub fn decompile_traced(original: &Function, after: &mut dyn FnMut(&str, &Function, &[u32])) -> Decompiled {
    decompile_with(original, std::env::var("DECOMP_NOSAVES").is_err(), after)
}

pub fn decompile_with(original: &Function, remove_saves: bool, after: &mut dyn FnMut(&str, &Function, &[u32])) -> Decompiled {
    let mut f = original.clone();
    // the register saves (the save area is a region of its own in the proof: cheap, loops included)
    let sv = if remove_saves {
        saves::remove_saves(&mut f)
    } else {
        saves::Saves { slots: vec![], registers: vec![] }
    };
    let (save_slots, saved) = (sv.slots, sv.registers);
    for _ in 0..8 {
        let before = format!("{:?}", f.body);
        inline::inline_temporaries(&mut f);
        after("inline::inline_temporaries", &f, &save_slots);
        flow::remove_dead_code(&mut f);
        after("flow::remove_dead_code", &f, &save_slots);
        simplify::simplify(&mut f);
        after("simplify::simplify", &f, &save_slots);
        propagate::propagate(&mut f);
        after("propagate::propagate", &f, &save_slots);
        flow::remove_dead_code(&mut f);
        after("flow::remove_dead_code", &f, &save_slots);
        simplify::simplify(&mut f);
        after("simplify::simplify", &f, &save_slots);
        if format!("{:?}", f.body) == before {
            break;
        }
    }
    addresses::normalize_addresses(&mut f);
    after("addresses::normalize_addresses", &f, &save_slots);
    flow::remove_dead_code(&mut f);
    after("flow::remove_dead_code", &f, &save_slots);
    propagate::propagate(&mut f);
    after("propagate::propagate", &f, &save_slots);
    flow::remove_dead_code(&mut f);
    after("flow::remove_dead_code", &f, &save_slots);
    simplify::simplify(&mut f);
    after("simplify::simplify", &f, &save_slots);
    structure::structure(&mut f);
    after("structure::structure", &f, &save_slots);
    simplify::simplify(&mut f);
    after("simplify::simplify", &f, &save_slots);
    flow::remove_dead_code(&mut f);
    after("flow::remove_dead_code", &f, &save_slots);
    Decompiled { function: f, save_slots, saved }
}

#[cfg(test)]
mod tests {
    use crate::check::Verdict;
    use crate::decompile::decompile_and_prove;
    use crate::parse;

    // a function in the recompiler's format (written for the tests, not taken from the game)
    fn function(name: &str, regs: &[&str], body: &str) -> String {
        let decl = regs.iter().map(|r| format!("{} = c->r[{}]", r, &r[1..])).collect::<Vec<_>>().join(", ");
        let so = regs.iter().map(|r| format!("c->r[{}] = {};", &r[1..], r)).collect::<Vec<_>>().join(" ");
        let si = regs.iter().map(|r| format!("{} = c->r[{}];", r, &r[1..])).collect::<Vec<_>>().join(" ");
        format!(
            "void {}(CPU *c, u32 entry) {{\n  u32 {};\n  u32 nf = c->nf, zf = c->zf, cf = c->cf, vf = c->vf;\n  u32 tpc = 0; u8 *const M = MEMBASE; (void)M; (void)tpc;\n#define SO() do {{ {} c->nf = nf; c->zf = zf; c->cf = cf; c->vf = vf; }} while (0)\n#define SI() do {{ {} nf = c->nf; zf = c->zf; cf = c->cf; vf = c->vf; }} while (0)\n{}\n#undef SO\n#undef SI\n}}",
            name, decl, so, si, body
        )
    }

    fn prove(text: &str) -> Verdict {
        let f = parse::function(text).expect("parses");
        let cfg = z3::Config::new();
        let ctx = z3::Context::new(&cfg);
        decompile_and_prove(&ctx, &f).1
    }

    const PREDICATED: &str = "L_1000:
  { u32 a = r1; u32 b = 0x0u; u32 res = a - b; zf = res == 0; (void)res; }
  if (zf) { { u32 a = 0; (void)a; u32 b = 0x1u; u32 res = b; r0 = res; } }
  if (!zf) { { u32 a = 0; (void)a; u32 b = 0x2u; u32 res = b; r0 = res; } }
  { u32 ea = r2 + 0x4u; WR8(ea, r0); }
  tpc = r14; c->pc = tpc; SO(); return;";

    const LOOP: &str = "L_2000:
  { u32 a = 0; (void)a; u32 b = 0x0u; u32 res = b; r0 = res; }
L_2004:
  { u32 a = r0; u32 b = r1; u32 res = a + b; r0 = res; }
  { u32 a = r1; u32 b = 0x1u; u32 res = a - b; zf = res == 0; r1 = res; }
  if (!zf) { if (__builtin_expect(rt_preempt_flag, 0)) { SO(); c->pc = 0x2004u; rt_preempt(c); SI(); } goto L_2004; }
  tpc = r14; c->pc = tpc; SO(); return;";

    const CALL: &str = "L_3000:
  { u32 a = r0; u32 b = 0x10u; u32 res = a + b; r1 = res; }
  r14 = 0x300cu; SO(); f_00004000(c, 0); SI(); if (__builtin_expect(c->pc != 0x300cu, 0)) return;
L_300c:
  { u32 a = r0; u32 b = 0x1u; u32 res = a + b; r0 = res; }
  tpc = r14; c->pc = tpc; SO(); return;";

    #[test]
    fn proves_predicated_code() {
        assert!(matches!(prove(&function("f_00001000", &["r0", "r1", "r2", "r14"], PREDICATED)), Verdict::Proved));
    }

    #[test]
    fn proves_a_loop() {
        assert!(matches!(prove(&function("f_00002000", &["r0", "r1", "r14"], LOOP)), Verdict::Proved));
    }

    #[test]
    fn proves_a_call_with_an_argument() {
        assert!(matches!(prove(&function("f_00003000", &["r0", "r1", "r14"], CALL)), Verdict::Proved));
    }

    // push {r4, lr}; r4 = r0 + 1; a store through r0; a call; r0 = r4; pop {r4, pc}
    const SAVES: &str = "L_5000:
  { u32 ea = r13 - 8; WR32(ea + 0, r4); WR32(ea + 4, r14); r13 = r13 - 8; }
  { u32 a = r0; u32 b = 0x1u; u32 res = a + b; r4 = res; }
  { u32 ea = r0 + 0x4u; WR32(ea, r4); }
  r14 = 0x5014u; SO(); f_00004000(c, 0); SI(); if (__builtin_expect(c->pc != 0x5014u, 0)) return;
L_5014:
  { u32 a = 0; (void)a; u32 b = r4; u32 res = b; r0 = res; }
  { u32 ea = r13 + 0; u32 nb = r13 + 8; r13 = nb; r4 = RD32(ea + 0); tpc = RD32(ea + 4); } c->pc = tpc; SO(); return;";

    #[test]
    fn removes_the_register_saves() {
        let f = parse::function(&function("f_00005000", &["r0", "r4", "r13", "r14"], SAVES)).unwrap();
        let cfg = z3::Config::new();
        let ctx = z3::Context::new(&cfg);
        let (d, v) = decompile_and_prove(&ctx, &f);
        assert!(matches!(v, Verdict::Proved));
        assert!(!d.save_slots.is_empty(), "the saves are removed");
    }

    #[test]
    fn rejects_a_missing_restore() {
        // the decompiled function with its saves removed, but r4 not restored from its copy before returning
        let f = parse::function(&function("f_00005000", &["r0", "r4", "r13", "r14"], SAVES)).unwrap();
        let cfg = z3::Config::new();
        let ctx = z3::Context::new(&cfg);
        let mut d = crate::decompile::decompile_with(&f, true, &mut |_, _, _| {});
        assert!(!d.save_slots.is_empty());
        fn unrestore(list: &mut Vec<crate::ast::Stmt>) -> bool {
            use crate::ast::{Expr, Stmt};
            let mut changed = false;
            for s in list.iter_mut() {
                match s {
                    Stmt::Assign(r, Expr::Var(v)) if r == "r4" && v == "saved_r4" => {
                        *s = Stmt::Nop;
                        changed = true;
                    }
                    Stmt::If(_, a, b) => changed |= unrestore(a) | unrestore(b),
                    _ => {}
                }
            }
            changed
        }
        assert!(unrestore(&mut d.function.body), "the restore is there to remove");
        assert!(matches!(crate::check::verify(&ctx, &f, &d), Verdict::Differs(_)));
    }

    // the C++ of a decompiled function, read back: proved equal; a changed copy is not
    fn round_trip(name: &str, regs: &[&str], body: &str, change: (&str, &str)) {
        let f = parse::function(&function(name, regs, body)).unwrap();
        let cfg = z3::Config::new();
        let ctx = z3::Context::new(&cfg);
        let (d, v) = decompile_and_prove(&ctx, &f);
        assert!(matches!(v, Verdict::Proved));
        let text = crate::emit::emit(&d.function).expect("emits");
        let helpers = std::collections::HashSet::new();
        let read = |t: &str| crate::cpp::read(t, &helpers).unwrap().exports.remove(0).function.unwrap();
        match crate::check::verify_cpp(&ctx, &f, &d, &read(&text)) {
            Verdict::Proved => {}
            Verdict::Differs(w) | Verdict::Unknown(w) => panic!("{}\n{}", w, text),
        }
        assert!(text.contains(change.0), "{}", text);
        let changed = text.replacen(change.0, change.1, 1);
        assert!(matches!(crate::check::verify_cpp(&ctx, &f, &d, &read(&changed)), Verdict::Differs(_)), "{}", changed);
    }

    #[test]
    fn round_trip_renamed_loop() {
        // the loop's draft with every variable and label renamed proves too
        let f = parse::function(&function("f_00002000", &["r0", "r1", "r14"], LOOP)).unwrap();
        let cfg = z3::Config::new();
        let ctx = z3::Context::new(&cfg);
        let (d, _) = decompile_and_prove(&ctx, &f);
        let text = crate::emit::emit(&d.function).unwrap();
        let mut renamed = text.clone();
        for (a, b) in [("r0", "sum"), ("r1", "count"), ("res", "left"), ("L_2004", "next"), ("f_00002000", "sum_down")] {
            renamed = renamed.replace(a, b);
        }
        let helpers = std::collections::HashSet::new();
        let g = crate::cpp::read(&renamed, &helpers).unwrap().exports.remove(0).function.unwrap();
        match crate::check::verify_cpp(&ctx, &f, &d, &g) {
            Verdict::Proved => {}
            Verdict::Differs(w) | Verdict::Unknown(w) => panic!("{}\n{}", w, renamed),
        }
    }

    #[test]
    fn round_trip_predicated() {
        round_trip("f_00001000", &["r0", "r1", "r2", "r14"], PREDICATED, ("2u", "3u"));
    }

    #[test]
    fn round_trip_loop() {
        round_trip("f_00002000", &["r0", "r1", "r14"], LOOP, ("r0 + r1", "r0 - r1"));
    }

    #[test]
    fn round_trip_call_and_saves() {
        round_trip("f_00005000", &["r0", "r4", "r13", "r14"], SAVES, ("r0 + 1u", "r0 + 2u"));
    }

    #[test]
    fn proves_signatures() {
        let cfg = z3::Config::new();
        let ctx = z3::Context::new(&cfg);
        let sig = |name: &str, regs: &[&str], body: &str| {
            crate::signatures::prove(&ctx, &parse::function(&function(name, regs, body)).unwrap())
        };
        // compares r1, stores through r2, writes r0 before reading it
        assert_eq!(sig("f_00001000", &["r0", "r1", "r2", "r14"], PREDICATED), Some(vec!["r1".to_string(), "r2".to_string()]));
        // a loop over r1
        assert_eq!(sig("f_00002000", &["r0", "r1", "r14"], LOOP), Some(vec!["r1".to_string()]));
    }

    #[test]
    fn rejects_a_changed_function() {
        // the decompilation of one function checked against another (a different constant)
        let a = parse::function(&function("f_00001000", &["r0", "r1", "r2", "r14"], PREDICATED)).unwrap();
        let b = parse::function(&function("f_00001000", &["r0", "r1", "r2", "r14"], &PREDICATED.replace("0x2u", "0x3u"))).unwrap();
        let cfg = z3::Config::new();
        let ctx = z3::Context::new(&cfg);
        let d = crate::decompile::decompile(&b);
        assert!(matches!(crate::check::verify(&ctx, &a, &d), Verdict::Differs(_)));
    }
}
