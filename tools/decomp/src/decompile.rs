// The decompiler's passes, in order. Every pass keeps the function in the same language, so the result can be
// proved equal to the original by check.rs.
use crate::ast::Function;
use crate::{addresses, flow, inline, propagate, saves, simplify, structure};

pub struct Decompiled {
    pub function: Function,
    pub save_slots: Vec<u32>,             // the removed register save area (bytes below the entry sp)
    pub saved: Vec<(String, u32)>,        // the saved registers and their slots (offset below the entry sp)
    pub private: Vec<(String, u32)>,      // the private frame words kept in variables (private.rs), by distance
}

pub fn decompile(original: &Function) -> Decompiled {
    decompile_traced(original, &mut |_, _, _| {})
}

// Bump when the checker or the meaning of the AST changes: earlier proofs in the cache then no longer count.
const CHECKER_VERSION: u64 = 4;

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
    // (the call model depends on the signatures of the callees, when they have one)
    let sig = crate::signatures::callee_key(original);
    let none = 0xcbf2_9ce4_8422_2325;
    let mut h: u64 = 0xcbf2_9ce4_8422_2325 ^ CHECKER_VERSION ^ if sig == none { 0 } else { sig } ^ crate::results::key(original.address);
    // (and on which callees return their first argument, when some do)
    let kept = crate::returns::callee_key(original);
    if kept != crate::returns::NO_CALLEE {
        h ^= kept;
    }
    let mut text = format!("{}\n{:?}\n{:?}", crate::print::function(&d.function), d.save_slots, d.saved);
    if !d.private.is_empty() {
        text.push_str(&format!("\n{:?}", d.private));
    }
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

thread_local! {
    // the rewrites that can make a proof time out where the plainer function's did not (multiplications, join copies,
    // the returned first argument kept, structuring twice): off for a second try
    pub static FULL: std::cell::Cell<bool> = std::cell::Cell::new(true);
}

// Decompiles and proves; when removing the register saves does not give a proof, tries again keeping them; when the
// private frame words (private.rs) do not, tries again without them.
pub fn decompile_and_prove(ctx: &z3::Context, original: &Function) -> (Decompiled, crate::check::Verdict) {
    let (d, v) = decompile_and_prove_full(ctx, original);
    if matches!(v, crate::check::Verdict::Proved) || d.private.is_empty() {
        return (d, v);
    }
    crate::private::ENABLED.with(|e| {
        let was = e.get();
        e.set(Some(false));
        let r = decompile_and_prove_full(ctx, original);
        e.set(was);
        if matches!(r.1, crate::check::Verdict::Proved) { r } else { (d, v) }
    })
}

fn decompile_and_prove_full(ctx: &z3::Context, original: &Function) -> (Decompiled, crate::check::Verdict) {
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
    let (d, v) = if matches!(v, crate::check::Verdict::Proved) || first.save_slots.is_empty() {
        (first, v)
    } else {
        let second = decompile_with(original, false, &mut |_, _, _| {});
        let v2 = verify_cached(ctx, original, &second);
        (second, v2)
    };
    // some rewrites can make the solver time out where the plainer function did not: once more without them
    let timed_out = matches!(&v, crate::check::Verdict::Unknown(_));
    if !timed_out || !FULL.with(|m| m.get()) {
        return (d, v);
    }
    FULL.with(|m| m.set(false));
    let r = decompile_and_prove_full(ctx, original);
    FULL.with(|m| m.set(true));
    if matches!(r.1, crate::check::Verdict::Proved) { r } else { (d, v) }
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
    let full = FULL.with(|m| m.get());
    if full {
        crate::returns::keep_first_argument(&mut f);
    }
    after("returns::keep_first_argument", &f, &save_slots);
    // the private frame words in variables (an assumption, opt-in)
    let private = if crate::private::enabled() {
        let words = crate::private::private_words(original, &save_slots);
        crate::private::keep_in_variables(&mut f, &words, &save_slots)
    } else {
        vec![]
    };
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
    // again: simplifying joins conditions (`if (a) { if (b) goto L; }` into `if (a && b) goto L;`), which structures
    if full {
        structure::structure(&mut f);
        after("structure::structure", &f, &save_slots);
        simplify::simplify(&mut f);
        after("simplify::simplify", &f, &save_slots);
        flow::remove_dead_code(&mut f);
        after("flow::remove_dead_code", &f, &save_slots);
    }
    Decompiled { function: f, save_slots, saved, private }
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

    // f(r1 = 4); f(r0 = r4, r1 = 3); f(r0 = r4, r1 = 2); g() with f reading r1 only and g reading r2: g's r2 is the
    // third call's scratch result, which depends on its r2, the second call's scratch result, which depends on the
    // second call's r0: the r0 = r4 before the second call stays (though no call reads r0 through its signature)
    const SCRATCH_CHAIN: &str = "L_a000:
  { u32 a = 0; (void)a; u32 b = r0; u32 res = b; r4 = res; }
  { u32 a = 0; (void)a; u32 b = 0x4u; u32 res = b; r1 = res; }
  r14 = 0xa00cu; SO(); f_0000b000(c, 0); SI(); if (__builtin_expect(c->pc != 0xa00cu, 0)) return;
L_a00c:
  { u32 a = 0; (void)a; u32 b = r4; u32 res = b; r0 = res; }
  { u32 a = 0; (void)a; u32 b = 0x3u; u32 res = b; r1 = res; }
  r14 = 0xa018u; SO(); f_0000b000(c, 0); SI(); if (__builtin_expect(c->pc != 0xa018u, 0)) return;
L_a018:
  { u32 a = 0; (void)a; u32 b = r4; u32 res = b; r0 = res; }
  { u32 a = 0; (void)a; u32 b = 0x2u; u32 res = b; r1 = res; }
  r14 = 0xa020u; SO(); f_0000b000(c, 0); SI(); if (__builtin_expect(c->pc != 0xa020u, 0)) return;
L_a020:
  r14 = 0xa024u; SO(); f_0000c000(c, 0); SI(); if (__builtin_expect(c->pc != 0xa024u, 0)) return;
L_a024:
  { u32 a = 0; (void)a; u32 b = 0x1u; u32 res = b; r0 = res; }
  tpc = r14; c->pc = tpc; SO(); return;";

    #[test]
    fn keeps_arguments_whose_scratch_results_flow_on() {
        crate::signatures::insert(0xb000, vec!["r1".into()]);
        crate::signatures::insert(0xc000, vec!["r2".into()]);
        let text = function("f_0000a000", &["r0", "r1", "r4", "r14"], SCRATCH_CHAIN);
        assert!(matches!(prove(&text), Verdict::Proved));
    }

    // a virtual call, a call through a function pointer field, and a veneer to a constant
    const INDIRECT_CALLS: &str = "L_d000:
  { u32 ea = r0 + 0x0u; u32 v = RD32(ea); r1 = v; }
  { u32 ea = r1 + 0x10u; u32 v = RD32(ea); r1 = v; }
  tpc = r1; r14 = 0xd00du; SO(); c->pc = tpc; rt_dispatch(c, 0); SI(); if (__builtin_expect(c->pc != 0xd00du, 0)) return;
L_d00c:
  { u32 ea = r4 + 0x8u; u32 v = RD32(ea); r1 = v; }
  tpc = r1; r14 = 0xd015u; SO(); c->pc = tpc; rt_dispatch(c, 0); SI(); if (__builtin_expect(c->pc != 0xd015u, 0)) return;
L_d014:
  { u32 a = 0xd01cu; u32 b = 0x1u; u32 res = a + b; r12 = res; }
  tpc = r12; c->pc = tpc; SO(); __attribute__((musttail)) return rt_dispatch(c, 0);";

    #[test]
    fn finds_indirect_calls_to_a_constant() {
        let f = parse::function(&function("f_0000d000", &["r0", "r1", "r4", "r12", "r14"], INDIRECT_CALLS)).unwrap();
        let found: Vec<u32> = crate::dispatch::constant_targets(&f).into_values().collect();
        assert_eq!(found, vec![0xd01d]);
    }

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

    // push {r4, lr}; sub sp, #8; a local stored before a call and read after it; ARGUMENT: more before the call (its
    // address passed). The callee's reach is set by each test (a callee of its own for each: the tests share the table).
    const LOCAL: &str = "L_6000:
  { u32 ea = r13 - 8; WR32(ea + 0, r4); WR32(ea + 4, r14); r13 = r13 - 8; }
  r13 = r13 - 0x8u;
  { u32 a = r0; u32 b = 0x1u; u32 res = a + b; r0 = res; }
  WR32(r13 + 0x4u, r0);
  ARGUMENT
  r14 = 0x6014u; SO(); f_CALLEE(c, 0); SI(); if (__builtin_expect(c->pc != 0x6014u, 0)) return;
L_6014:
  r0 = RD32(r13 + 0x4u);
  r13 = r13 + 0x8u;
  { u32 ea = r13 + 0; u32 nb = r13 + 8; r13 = nb; r4 = RD32(ea + 0); tpc = RD32(ea + 4); } c->pc = tpc; SO(); return;";

    // r1 = 1 when r0 is negative (the sign bit tested through a mask), r1 = 2 when r2's bit 3 is set (lsls #28: the N
    // flag)
    const SIGN_TESTS: &str = "L_e000:
  { u32 a = 0; (void)a; u32 b = 0x0u; u32 res = b; r1 = res; } /* e000: movs */
  { u32 a = r0; u32 b = 0x80000000u; u32 res = a & b; nf = res >> 31; zf = res == 0; r3 = res; } /* e002: ands */
  if (!zf) { { u32 a = 0; (void)a; u32 b = 0x1u; u32 res = b; r1 = res; } } /* e006: movne */
  { u32 b0 = r2; u32 b = (b0 << 28); u32 res = b; nf = res >> 31; zf = res == 0; r3 = res; } /* e008: lsls */
  if (nf) { { u32 a = 0; (void)a; u32 b = 0x2u; u32 res = b; r1 = res; } } /* e00a: movmi */
  tpc = r14; c->pc = tpc; SO(); return; /* e00c: bx lr */";

    // r0 = 1 when s0 <= s1 or either is NaN (vcmp; vmrs; movle: Z or N != V)
    const FLOAT_LE: &str = "void f_0000f000(CPU *c, u32 entry) {
  u32 r0 = c->r[0], r14 = c->r[14];
  u32 nf = c->nf, zf = c->zf, cf = c->cf, vf = c->vf;
  u32 fpsr = c->fpscr;
  float S0 = c->s[0], S1 = c->s[1];
  u32 tpc = 0; u8 *const M = MEMBASE; (void)M; (void)tpc;
#define SO() do { c->r[0] = r0; c->r[14] = r14; c->nf = nf; c->zf = zf; c->cf = cf; c->vf = vf; c->fpscr = fpsr; c->s[0] = S0; c->s[1] = S1; } while (0)
#define SI() do { r0 = c->r[0]; r14 = c->r[14]; nf = c->nf; zf = c->zf; cf = c->cf; vf = c->vf; fpsr = c->fpscr; S0 = c->s[0]; S1 = c->s[1]; } while (0)
L_f000:
  { u32 a = 0; (void)a; u32 b = 0x0u; u32 res = b; r0 = res; } /* f000: mov */
  fpsr = (fpsr & 0x0fffffffu) | vfp_cmpf(S0, S1); /* f004: vcmp.f32 */
  nf = fpsr >> 31; zf = (fpsr >> 30) & 1; vf = (fpsr >> 28) & 1; /* f008: vmrs apsr_nzcv, fpscr */
  if (zf || nf != vf) { { u32 a = 0; (void)a; u32 b = 0x1u; u32 res = b; r0 = res; } } /* f00c: movle */
  tpc = r14; c->pc = tpc; SO(); return; /* f010: bx lr */
#undef SO
#undef SI
}";

    // a loop that reads a CPU field the proof leaves unrelated at its header (Relations::free)
    const READS_CPU_IN_LOOP: &str = "L_2000:
  BEFORE
  { u32 a = 0; (void)a; u32 b = 0x0u; u32 res = b; r0 = res; }
L_2004:
  { u32 a = r0; u32 b = c->r[2]; u32 res = a + b; r0 = res; }
  { u32 a = r1; u32 b = 0x1u; u32 res = a - b; zf = res == 0; r1 = res; }
  if (!zf) { goto L_2004; }
  tpc = r14; c->pc = tpc; SO(); return;";

    #[test]
    fn unrelated_cpu_fields_differ_at_loop_headers() {
        // a field left unrelated holds a value of its own in each program at the header: two programs that leave
        // other values there before the loop are not taken for equal
        let f = |before: &str| {
            parse::function(&function("f_00002000", &["r0", "r1", "r14"], &READS_CPU_IN_LOOP.replace("BEFORE", before))).unwrap()
        };
        let (a, b) = (f(""), f("c->r[2] = 0x5u;"));
        let cfg = z3::Config::new();
        let ctx = z3::Context::new(&cfg);
        let related = crate::check::Relations::default();
        assert!(matches!(crate::check::equivalent_with_loops_free(&ctx, &a, &a, &[], &[], &related), Verdict::Proved));
        let free = crate::check::Relations { free: ["r2".to_string()].into_iter().collect(), ..Default::default() };
        assert!(!matches!(crate::check::equivalent_with_loops_free(&ctx, &a, &b, &[], &[], &free), Verdict::Proved));
    }

    #[test]
    fn round_trip_float_comparison() {
        // the flags' test as the float comparison (LE also holds for NaN: !(a > b)); >= instead is caught
        let f = parse::function(FLOAT_LE).unwrap();
        let cfg = z3::Config::new();
        let ctx = z3::Context::new(&cfg);
        let (d, v) = decompile_and_prove(&ctx, &f);
        assert!(matches!(v, Verdict::Proved));
        let text = crate::emit::emit(&d).expect("emits");
        let helpers = std::collections::HashSet::new();
        let read = |t: &str| crate::cpp::read(t, &helpers).unwrap().exports.remove(0).function.unwrap();
        match crate::check::verify_cpp(&ctx, &f, &d, &read(&text)) {
            Verdict::Proved => {}
            Verdict::Differs(w) | Verdict::Unknown(w) => panic!("{}\n{}", w, text),
        }
        assert!(text.contains("if (!(S0 > S1))"), "{}", text);
        let changed = text.replacen("if (!(S0 > S1))", "if (!(S0 >= S1))", 1);
        assert!(matches!(crate::check::verify_cpp(&ctx, &f, &d, &read(&changed)), Verdict::Differs(_)), "{}", changed);
    }

    #[test]
    fn keeps_each_statements_instruction_address() {
        let f = parse::function(&function("f_0000e000", &["r0", "r1", "r2", "r3", "r14"], SIGN_TESTS)).unwrap();
        let origins: Vec<u32> = f.body.iter().filter_map(|s| match s {
            crate::ast::Stmt::Assign(v, _, o) if v == "r1" || v == "r3" => Some(o.0),
            _ => None,
        }).collect();
        assert_eq!(origins, vec![0xe000, 0xe002, 0xe008]);
    }

    #[test]
    fn round_trip_sign_and_bit_tests() {
        // the sign bit and bit 3 tested as comparisons (a changed bit is caught)
        round_trip("f_0000e000", &["r0", "r1", "r2", "r3", "r14"], SIGN_TESTS, ("& 8u", "& 4u"));
    }

    fn private_local(callee: u32, argument: &str, reach: crate::private::Stack) -> (super::Decompiled, Verdict) {
        crate::private::insert_reach(callee, reach);
        crate::private::ENABLED.with(|e| e.set(Some(true)));
        let text = function("f_00006000", &["r0", "r1", "r4", "r13", "r14"], &LOCAL.replace("ARGUMENT", argument).replace("CALLEE", &format!("{:08x}", callee)));
        let f = parse::function(&text).unwrap();
        let cfg = z3::Config::new();
        let ctx = z3::Context::new(&cfg);
        let r = decompile_and_prove(&ctx, &f);
        crate::private::ENABLED.with(|e| e.set(None));
        r
    }

    #[test]
    fn keeps_a_private_word_in_a_variable() {
        let (d, v) = private_local(0x4000, "", crate::private::Stack::Bytes(0));
        assert!(matches!(v, Verdict::Proved));
        assert_eq!(d.private, vec![("local_c".to_string(), 0xc)]);
        let text = crate::print::function(&d.function);
        assert!(!text.contains("RD32(r13"), "the word is read back without a load:\n{}", text);
    }

    #[test]
    fn a_word_handed_out_or_a_stack_argument_is_not_private() {
        let (d, _) = private_local(0x4100, "r1 = r13 + 0x4u;", crate::private::Stack::Bytes(0));
        assert!(d.private.is_empty(), "its address is passed");
        let (d, _) = private_local(0x4200, "", crate::private::Stack::Bytes(8));
        assert!(d.private.is_empty(), "the callee reads it");
        let (d, _) = private_local(0x4300, "", crate::private::Stack::Any);
        assert!(d.private.is_empty(), "a callee whose reach is not known");
    }

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
                    Stmt::Assign(r, Expr::Var(v), ..) if r == "r4" && v == "saved_r4" => {
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
        let text = crate::emit::emit(&d).expect("emits");
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

    // a load 8 bytes before the argument (0xfffffff8 in the guest's 32-bit arithmetic)
    const BEFORE: &str = "L_6000:
  { u32 ea = r0 + 0xfffffff8u; u32 v = RD32(ea); r0 = v; }
  tpc = r14; c->pc = tpc; SO(); return;";

    #[test]
    fn round_trip_field_before_the_object() {
        // no field at 0xfffffff8: on the host, g_mem + address + 0xfffffff8 is 4 GiB past the object
        // (written `arg0.addr() - 8u`; a changed offset is caught)
        round_trip("f_00006000", &["r0", "r14"], BEFORE, ("- 8u", "- 0xcu"));
    }

    #[test]
    fn rejects_a_field_before_the_object() {
        let f = parse::function(&function("f_00006000", &["r0", "r14"], BEFORE)).unwrap();
        let cfg = z3::Config::new();
        let ctx = z3::Context::new(&cfg);
        let (d, _) = decompile_and_prove(&ctx, &f);
        assert!(!crate::emit::emit(&d).unwrap().contains("unknown_0[0xfffffff8]"));
        let helpers = std::collections::HashSet::new();
        let hand = |offset: &str| {
            format!("struct __attribute__((packed)) Before {{\n    u8 unknown_0[{}];\n    u32 word;\n}};\n\nu32 f_00006000(gptr<Before> arg0) {{\n    return arg0->word;\n}}\nGUEST_EXPORT(0x00006000, f_00006000);\n", offset)
        };
        let read = |t: &str| crate::cpp::read(t, &helpers).unwrap().exports.remove(0).function;
        assert!(read(&hand("0x8")).is_ok());
        let e = read(&hand("0xfffffff8"));
        assert!(e.as_ref().is_err_and(|w| w.contains("does not wrap")), "{:?}", e.map(|_| ()));
    }

    // a shrink-wrapped prologue: an early return before the push, then a call and a return through the saved lr (the
    // call written inside the returned sum)
    const SHRINK_WRAPPED: &str = "L_7000:
  { u32 a = r0; u32 b = 0x0u; u32 res = a - b; zf = res == 0; (void)res; }
  if (zf) { tpc = r14; c->pc = tpc; SO(); return; }
  { u32 ea = r13 - 8; WR32(ea + 0, r4); WR32(ea + 4, r14); r13 = ea; }
  { u32 a = 0; (void)a; u32 b = r0; u32 res = b; r4 = res; }
  r14 = 0x7014u; SO(); f_00004000(c, 0); SI(); if (__builtin_expect(c->pc != 0x7014u, 0)) return;
L_7014:
  { u32 a = r0; u32 b = r4; u32 res = a + b; r0 = res; }
  { u32 ea = r13; r4 = RD32(ea + 0); tpc = RD32(ea + 4); r13 = ea + 8; } c->pc = tpc; SO(); return;";

    #[test]
    fn round_trip_shrink_wrapped() {
        round_trip("f_00007000", &["r0", "r4", "r13", "r14"], SHRINK_WRAPPED, (") + r0;", ") - r0;"));
    }

    // a loop in a function that writes neither r0 nor r1 (a caller still observes them: the C++ leaves them in the CPU)
    const LOOP_KEEPING_ARGUMENTS: &str = "L_8000:
  { u32 a = 0; (void)a; u32 b = 0x0u; u32 res = b; r2 = res; }
L_8004:
  { u32 ea = r0 + 0x4u; WR8(ea, r2); }
  { u32 a = r2; u32 b = 0x1u; u32 res = a + b; r2 = res; }
  { u32 a = r2; u32 b = r1; u32 res = a - b; zf = res == 0; (void)res; }
  if (!zf) { if (__builtin_expect(rt_preempt_flag, 0)) { SO(); c->pc = 0x8004u; rt_preempt(c); SI(); } goto L_8004; }
  tpc = r14; c->pc = tpc; SO(); return;";

    #[test]
    fn round_trip_loop_keeping_arguments() {
        round_trip("f_00008000", &["r0", "r1", "r2", "r14"], LOOP_KEEPING_ARGUMENTS, ("r2 += 1u", "r2 += 2u"));
    }

    #[test]
    fn round_trip_renamed_loop() {
        // the loop's draft with every variable and label renamed proves too
        let f = parse::function(&function("f_00002000", &["r0", "r1", "r14"], LOOP)).unwrap();
        let cfg = z3::Config::new();
        let ctx = z3::Context::new(&cfg);
        let (d, _) = decompile_and_prove(&ctx, &f);
        let text = crate::emit::emit(&d).unwrap();
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
        round_trip("f_00002000", &["r0", "r1", "r14"], LOOP, ("r0 += r1", "r0 -= r1"));
    }

    #[test]
    fn round_trip_call_and_saves() {
        round_trip("f_00005000", &["r0", "r4", "r13", "r14"], SAVES, ("arg0.addr() + 1u", "arg0.addr() + 2u"));
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

    #[test]
    fn reads_a_call_inside_an_expression_only_where_its_order_is_fixed() {
        // (C++ leaves open the order of a call against the rest of its expression, and of a call's arguments)
        let helpers = std::collections::HashSet::new();
        let file = |body: &str| {
            format!(
                "inline constexpr guest::Function<0x00004000, u32(u32)> f;\ninline constexpr guest::Function<0x00005000, u32(u32, u32)> g;\n\nu32 f_00006000(u32 arg0, gptr<u32> arg1) {{\n{}\n}}\nGUEST_EXPORT(0x00006000, f_00006000);\n",
                body
            )
        };
        let read = |b: &str| -> Result<(), String> { crate::cpp::read(&file(b), &helpers)?.exports.remove(0).function.map(|_| ()) };
        for ok in [
            "    return g(f(arg0), 1u);",
            "    if (f(arg0) == 0) {\n        return 1u;\n    }\n    return 0u;",
            "    u32 x = f(arg0) + 1u;\n    return x;",
            "    return f(f(arg0));",
            "    g(f(*arg1), arg0);\n    return 0u;",
            "    gptr<u32> p = gptr<u32>(f(arg0) - 4u);\n    return *p;",
            "    return f(arg0) == 0 ? 2u : arg0;",
        ] {
            assert!(read(ok).is_ok(), "{}: {:?}", ok, read(ok));
        }
        for refused in [
            "    return g(f(arg0), *arg1);",
            "    return g(f(arg0), f(1u));",
            "    return f(arg0) + f(1u);",
            "    return g(f(arg0) + f(1u), 0u);",
            "    return f(arg0) + *arg1;",
            "    return arg0 != 0 && f(arg0) != 0;",
            "    return arg0 == 0 ? f(arg0) : 1u;",
            "    *arg1 = f(arg0) + 1u;\n    return 0u;",
            "    u32 x = arg0;\n    x += f(arg0);\n    return x;",
        ] {
            assert!(read(refused).is_err(), "{}", refused);
        }
    }

    #[test]
    fn folds_calls_only_into_lines_cpp_reads() {
        // (the emitter's text check against what cpp.rs reads: a call inside an expression with nothing beside it that
        // reads memory or the CPU)
        for ok in [
            "    if (call_0012fb3c(r0) == 0) {",
            "    return call_0031c31c(r0, r1_3, r3) + 0xcu;",
            "    u32 r0_20 = call_001c1eb8(call_00304530(r0_18));",
            "    call_0045ee4c(call_0044f0f4(*global_00974a6c, ea_7->word_0), r0 + 0x20u);",
            "    arg0->word_4 = call_00301d0c(r0_5 + 0x1b0u, guest::cpu()->r[1]);",
            "    gptr<Local_0020763c_ea_11> ea_11 = gptr<Local_0020763c_ea_11>(call_00301d0c(*global_00974a6c));",
        ] {
            assert!(crate::emit::reads_nested(ok), "{}", ok);
        }
        for refused in [
            "    u32 r0_6 = call_005bf744(call_00567ef0(r4_1 - 0x248u) - 0x14cu, guest::cpu()->r[1]);",
            "    u32 r0_4 = call_0012fea0(call_00136474(0x8b2f4cu), *global_008b2f4c, 0u);",
            "    return call_00573aac(r0_1) == 0 ? 0u : r0_1;",
            "    *gptr<u32>(r4 + 0x398a0u) = (call_00726a54(r4 + 4u) - r4) - 0x388a0u;",
            "    u32 x = call_00726a54(r4) + call_00726a54(r5);",
            "    } while (call_00726a54(r4) != 0);",
        ] {
            assert!(!crate::emit::reads_nested(refused), "{}", refused);
        }
    }

    #[test]
    fn reads_the_address_of_a_field() {
        // (guest::addr_of(place): a field's guest address, as the hand-written proved overrides write it)
        let helpers = std::collections::HashSet::new();
        let file = |body: &str| {
            format!(
                "struct __attribute__((packed)) Pair {{\n    u32 first;\n    u16 second[2];\n}};\n\nu32 f_00006000(gptr<Pair> arg0) {{\n{}\n}}\nGUEST_EXPORT(0x00006000, f_00006000);\n",
                body
            )
        };
        let read = |b: &str| crate::cpp::read(&file(b), &helpers).and_then(|mut f| f.exports.remove(0).function);
        let f = read("    return guest::addr_of(arg0->second[1]).addr();").unwrap();
        let ret = f.body.iter().find_map(|s| match s {
            crate::ast::Stmt::SetCpu(crate::ast::CpuField::R(0), e) => Some(e.clone()),
            _ => None,
        });
        // arg0 + 4 (first) + 2 (one u16)
        assert!(format!("{:?}", ret).contains("Num(6"), "{:?}", ret);
        assert!(read("    u32 x = 0u;\n    return guest::addr_of(x).addr();").is_err());
    }
}
