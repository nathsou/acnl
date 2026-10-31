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
