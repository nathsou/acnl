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

// Decompiles and proves; when removing the register saves does not give a proof, tries again keeping them.
pub fn decompile_and_prove(ctx: &z3::Context, original: &Function) -> (Decompiled, crate::check::Verdict) {
    let first = decompile_with(original, true, &mut |_, _, _| {});
    let v = crate::check::verify(ctx, original, &first);
    if matches!(v, crate::check::Verdict::Proved) || first.save_slots.is_empty() {
        return (first, v);
    }
    let second = decompile_with(original, false, &mut |_, _, _| {});
    let v2 = crate::check::verify(ctx, original, &second);
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
    // register saves are removed only without loops: with loops the save-area invariants make the proof slow,
    // so the proved form keeps the pushes and pops (the view does not show them)
    let (_, _, headers) = crate::sym::Sym::graph(&f);
    let sv = if headers.is_empty() && remove_saves {
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
