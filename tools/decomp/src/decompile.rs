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
    let mut f = original.clone();
    let sv = if std::env::var("DECOMP_NOSAVES").is_err() {
        saves::remove_saves(&mut f)
    } else {
        saves::Saves { slots: vec![], registers: vec![] }
    };
    let (save_slots, saved) = (sv.slots, sv.registers);
    for _ in 0..8 {
        let before = format!("{:?}", f.body);
        inline::inline_temporaries(&mut f);
        flow::remove_dead_code(&mut f);
        simplify::simplify(&mut f);
        propagate::propagate(&mut f);
        flow::remove_dead_code(&mut f);
        simplify::simplify(&mut f);
        if format!("{:?}", f.body) == before {
            break;
        }
    }
    addresses::normalize_addresses(&mut f);
    flow::remove_dead_code(&mut f);
    propagate::propagate(&mut f);
    flow::remove_dead_code(&mut f);
    simplify::simplify(&mut f);
    structure::structure(&mut f);
    simplify::simplify(&mut f);
    Decompiled { function: f, save_slots, saved }
}
