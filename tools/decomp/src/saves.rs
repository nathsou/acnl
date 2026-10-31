// Removes the saving and restoring of callee-saved registers: the prologue's "push {r4-r11, lr}" stores become
// locals (saved_r4 = r4), the matching pops read them back. Returns the byte offsets below the entry sp of the
// removed slots: the checker leaves exactly those out of the comparison of memory (and callees never see them).
use crate::ast::*;

fn callee_saved(r: &str) -> bool {
    matches!(r, "r4" | "r5" | "r6" | "r7" | "r8" | "r9" | "r10" | "r11" | "r14")
}

fn ea_plus(e: &Expr) -> Option<u64> {
    match e {
        Expr::Bin(BinOp::Add, a, b) => match (&**a, &**b) {
            (Expr::Var(v), Expr::Num(k, _)) if v == "ea" => Some(*k),
            _ => None,
        },
        Expr::Var(v) if v == "ea" => Some(0),
        _ => None,
    }
}

// rewrites pops "ea = r13; rX = RD32(ea + k) ...": the slot of rX is at the same k as in the push
fn rewrite_pops(list: &mut [Stmt], saved: &[(String, u64)]) -> bool {
    let mut ok = true;
    let mut in_pop = false;
    let mut pending: Option<u64> = None;
    for s in list.iter_mut() {
        match s {
            Stmt::Decl(Ty::U32, n, Some(Expr::Var(v))) if n == "ea" && v == "r13" => in_pop = true,
            Stmt::Decl(_, n, _) if n == "ea" => in_pop = false,
            // ldr rX, [sp], #4: u32 v = RD32(ea); ...; rX = v (the register is named by the later assignment)
            Stmt::Decl(Ty::U32, v, Some(Expr::Load(Ty::U32, a))) if in_pop && v == "v" => {
                pending = ea_plus(a);
            }
            Stmt::Assign(r, Expr::Var(v)) if v == "v" && pending.is_some() => {
                let k = pending.take().unwrap();
                let target = if r == "tpc" { "r14".to_string() } else { r.clone() };
                if let Some((reg, _)) = saved.iter().find(|(reg, kk)| *reg == target && *kk == k) {
                    *s = Stmt::Assign(r.clone(), Expr::Var(format!("saved_{}", reg)));
                } else if callee_saved(&target) {
                    ok = false;
                }
            }
            Stmt::Assign(r, Expr::Load(Ty::U32, a)) if in_pop => {
                if let Some(k) = ea_plus(a) {
                    let target = if r == "tpc" { "r14".to_string() } else { r.clone() };
                    if let Some((reg, _)) = saved.iter().find(|(reg, kk)| *reg == target && *kk == k) {
                        *s = Stmt::Assign(r.clone(), Expr::Var(format!("saved_{}", reg)));
                    } else if callee_saved(&target) {
                        ok = false; // restores a register from somewhere else: leave the function alone
                    }
                }
            }
            Stmt::Assign(n, _) if in_pop && n == "r13" => in_pop = false,
            Stmt::If(_, a, b) => {
                ok &= rewrite_pops(a, saved);
                ok &= rewrite_pops(b, saved);
            }
            _ => {}
        }
    }
    ok
}

pub struct Saves {
    pub slots: Vec<u32>,              // bytes below the entry sp
    pub registers: Vec<(String, u32)>, // each saved register and the offset below the entry sp of its slot
}

pub fn remove_saves(f: &mut Function) -> Saves {
    let none = || Saves { slots: vec![], registers: vec![] };
    // the push right after the entry label
    let entry = match f.body.iter().position(|s| matches!(s, Stmt::Label(_))) {
        Some(i) => i + 1,
        None => return none(),
    };
    // the push may be scheduled after other instructions of the entry block
    let mut start = entry;
    loop {
        match f.body.get(start) {
            Some(Stmt::Decl(Ty::U32, n, Some(Expr::Bin(BinOp::Sub, a, _)))) if n == "ea" && **a == Expr::Var("r13".into()) => break,
            Some(Stmt::Decl(..)) | Some(Stmt::Assign(..)) | Some(Stmt::Store(..)) | Some(Stmt::Nop) | Some(Stmt::Preempt) => start += 1,
            _ => return none(),
        }
    }
    let frame = match f.body.get(start) {
        Some(Stmt::Decl(Ty::U32, n, Some(Expr::Bin(BinOp::Sub, a, b)))) if n == "ea" => match (&**a, &**b) {
            (Expr::Var(v), Expr::Num(k, _)) if v == "r13" => *k,
            _ => return none(),
        },
        _ => return none(),
    };
    let mut saved: Vec<(String, u64)> = Vec::new();
    let mut i = start + 1;
    while let Some(Stmt::Store(Ty::U32, a, Expr::Var(r))) = f.body.get(i) {
        match ea_plus(a) {
            Some(k) if callee_saved(r) => saved.push((r.clone(), k)),
            Some(_) => {}
            None => return none(),
        }
        i += 1;
    }
    if !matches!(f.body.get(i), Some(Stmt::Assign(n, Expr::Var(v))) if n == "r13" && v == "ea") || saved.is_empty() {
        return none();
    }
    let mut copy = f.body.clone();
    if !rewrite_pops(&mut copy[i + 1..], &saved) {
        return none();
    }
    // the stores become locals
    for j in start + 1..i {
        if let Stmt::Store(Ty::U32, _, Expr::Var(r)) = &copy[j] {
            if saved.iter().any(|(reg, _)| reg == r) {
                let r = r.clone();
                copy[j] = Stmt::Decl(Ty::U32, format!("saved_{}", r), Some(Expr::Var(r)));
            }
        }
    }
    f.body = copy;
    let mut slots = Vec::new();
    let mut registers = Vec::new();
    for (r, k) in &saved {
        // address = entry sp - frame + k + b  =  entry sp - (frame - k - b)
        registers.push((r.clone(), (frame - k) as u32));
        for b in 0..4u64 {
            slots.push((frame - k - b) as u32);
        }
    }
    Saves { slots, registers }
}
