// The indirect calls (`rt_dispatch`) whose target is a constant: the veneers that switch between ARM and Thumb
// (`add r12, pc, #1; bx r12`) and the like. They are direct calls of that address.
use crate::ast::{BinOp, CpuField, Expr, Function, Stmt, Ty};
use std::collections::{HashMap, HashSet};

// variable or CPU field ("cpu:" + its key) -> the constant it holds
type Env = HashMap<String, u32>;

// the CPU registers a callee leaves as they were (calling convention), and those a system call does
const CALLEE_KEEPS: &[&str] =
    &["cpu:r4", "cpu:r5", "cpu:r6", "cpu:r7", "cpu:r8", "cpu:r9", "cpu:r10", "cpu:r11", "cpu:r13"];
const KERNEL_KEEPS: &[&str] = &["cpu:r8", "cpu:r9", "cpu:r10", "cpu:r11", "cpu:r13"];

fn cpu(fl: &CpuField) -> String {
    format!("cpu:{}", crate::sym::cpu_key(fl))
}

fn value(e: &Expr, env: &Env) -> Option<u32> {
    match e {
        Expr::Num(k, _) => u32::try_from(*k).ok(),
        Expr::Var(v) => env.get(v).copied(),
        Expr::Cpu(fl) => env.get(&cpu(fl)).copied(),
        Expr::Cast(Ty::U32, x) => value(x, env),
        Expr::Bin(BinOp::Add, x, y) => Some(value(x, env)?.wrapping_add(value(y, env)?)),
        Expr::Bin(BinOp::Sub, x, y) => Some(value(x, env)?.wrapping_sub(value(y, env)?)),
        _ => None,
    }
}

fn set(env: &mut Env, k: String, v: Option<u32>) {
    match v {
        Some(v) => {
            env.insert(k, v);
        }
        None => {
            env.remove(&k);
        }
    }
}

// what holds on both ways in
fn join(a: &Env, b: &Env) -> Env {
    a.iter().filter(|(k, v)| b.get(*k) == Some(*v)).map(|(k, v)| (k.clone(), *v)).collect()
}

fn after_call(env: &mut Env, keeps: &[&str]) {
    env.retain(|k, _| !k.starts_with("cpu:") || keeps.contains(&k.as_str()));
}

// the names a statement list may assign (CPU fields as "cpu:", with "cpu:*" for all of them)
fn assigned(list: &[Stmt], f: &Function, out: &mut HashSet<String>) {
    for s in list {
        match s {
            Stmt::Decl(_, n, _) | Stmt::Assign(n, _) => {
                out.insert(n.clone());
            }
            Stmt::SetCpu(..) | Stmt::GuestCall(..) | Stmt::Dispatch(_) | Stmt::Svc(_) => {
                out.insert("cpu:*".into());
            }
            Stmt::SyncIn => out.extend(f.synced.iter().map(|(v, _)| v.clone())),
            Stmt::If(_, a, b) | Stmt::While { body: a, check: b, .. } => {
                assigned(a, f, out);
                assigned(b, f, out);
            }
            _ => {}
        }
    }
}

// the labels something jumps to (a goto, a switch)
fn targets(list: &[Stmt], out: &mut HashSet<String>) {
    for s in list {
        match s {
            Stmt::Goto(l) => {
                out.insert(l.clone());
            }
            Stmt::Switch(_, cases) => out.extend(cases.iter().map(|(_, l)| l.clone())),
            Stmt::If(_, a, b) | Stmt::While { body: a, check: b, .. } => {
                targets(a, out);
                targets(b, out);
            }
            _ => {}
        }
    }
}

// the labels right after a call's return check
fn return_points(list: &[Stmt], out: &mut HashSet<String>) {
    for (i, s) in list.iter().enumerate() {
        match s {
            Stmt::Label(l) if i > 0 && matches!(list[i - 1], Stmt::ReturnUnlessPc(_)) => {
                out.insert(l.clone());
            }
            Stmt::If(_, a, b) | Stmt::While { body: a, check: b, .. } => {
                return_points(a, out);
                return_points(b, out);
            }
            _ => {}
        }
    }
}

fn walk(list: &[Stmt], prefix: &[usize], f: &Function, jumped: &HashSet<String>, env: &mut Env,
        out: &mut HashMap<Vec<usize>, u32>) {
    for (i, s) in list.iter().enumerate() {
        let p: Vec<usize> = [prefix, &[i]].concat();
        match s {
            Stmt::Decl(_, n, Some(e)) | Stmt::Assign(n, e) => {
                let v = value(e, env);
                set(env, n.clone(), v);
            }
            Stmt::Decl(_, n, None) => {
                env.remove(n);
            }
            Stmt::SetCpu(fl, e) => {
                let v = value(e, env);
                set(env, cpu(fl), v);
            }
            Stmt::SyncOut => {
                for (v, fl) in &f.synced {
                    let x = env.get(v).copied();
                    set(env, cpu(fl), x);
                }
            }
            Stmt::SyncIn => {
                for (v, fl) in &f.synced {
                    let x = env.get(&cpu(fl)).copied();
                    set(env, v.clone(), x);
                }
            }
            Stmt::Dispatch(_) => {
                if let Some(a) = env.get(&cpu(&CpuField::Pc)) {
                    out.insert(p.clone(), *a);
                }
                after_call(env, CALLEE_KEEPS);
            }
            Stmt::GuestCall(..) => after_call(env, CALLEE_KEEPS),
            Stmt::Svc(_) => after_call(env, KERNEL_KEEPS),
            Stmt::Label(l) if jumped.contains(l) => env.clear(),
            Stmt::If(_, a, b) => {
                let mut ea = env.clone();
                let mut eb = env.clone();
                walk(a, &[p.clone(), vec![0]].concat(), f, jumped, &mut ea, out);
                walk(b, &[p.clone(), vec![1]].concat(), f, jumped, &mut eb, out);
                *env = join(&ea, &eb);
            }
            Stmt::While { body, check, test, .. } => {
                // at the top: what no iteration changes
                let mut names = HashSet::new();
                assigned(body, f, &mut names);
                assigned(check, f, &mut names);
                let all_cpu = names.contains("cpu:*");
                env.retain(|k, _| !names.contains(k) && !(all_cpu && k.starts_with("cpu:")));
                let top = env.clone();
                let mut after_body = top.clone();
                walk(body, &[p.clone(), vec![0]].concat(), f, jumped, &mut after_body, out);
                // (a while loop enters at its check)
                let mut at_check = if test.is_some() { join(&top, &after_body) } else { after_body };
                walk(check, &[p.clone(), vec![1]].concat(), f, jumped, &mut at_check, out);
                *env = at_check;
            }
            _ => {}
        }
    }
}

// The indirect calls of a function whose target is a constant: the path of each (as results.rs walks it) -> the
// target (bit 0: Thumb).
pub fn constant_targets(f: &Function) -> HashMap<Vec<usize>, u32> {
    // the other entries resume the function where a call returns, with what the callee keeps, as on the way from
    // the call (the label right after its return check); an entry anywhere else, or a jump, knows nothing
    let mut returns = HashSet::new();
    return_points(&f.body, &mut returns);
    let mut jumped: HashSet<String> =
        f.entries.iter().map(|(_, l)| l.clone()).filter(|l| !returns.contains(l)).collect();
    targets(&f.body, &mut jumped);
    let mut out = HashMap::new();
    walk(&f.body, &[], f, &jumped, &mut Env::new(), &mut out);
    out
}

// the functions of the program (the recompiler's funcs.txt: addresses, bit 0 for Thumb)
fn functions() -> &'static HashSet<u32> {
    static FUNCS: std::sync::OnceLock<HashSet<u32>> = std::sync::OnceLock::new();
    FUNCS.get_or_init(|| {
        std::fs::read_to_string("build/acnl/generated/funcs.txt")
            .unwrap_or_default()
            .lines()
            .filter_map(|l| u32::from_str_radix(l.trim(), 16).ok())
            .collect()
    })
}

// The function with its indirect calls to a constant that is a function's entry written as direct calls of it (the
// same call: the model calls the target either way).
pub fn as_direct_calls(f: &Function) -> Function {
    fn rewrite(list: &mut [Stmt], prefix: &[usize], targets: &HashMap<Vec<usize>, u32>) {
        for (i, s) in list.iter_mut().enumerate() {
            let p: Vec<usize> = [prefix, &[i]].concat();
            match s {
                Stmt::Dispatch(tail) => {
                    if let Some(t) = targets.get(&p).filter(|t| functions().contains(t)) {
                        *s = Stmt::GuestCall(*t, *tail);
                    }
                }
                Stmt::If(_, a, b) | Stmt::While { body: a, check: b, .. } => {
                    rewrite(a, &[p.clone(), vec![0]].concat(), targets);
                    rewrite(b, &[p.clone(), vec![1]].concat(), targets);
                }
                _ => {}
            }
        }
    }
    let targets = constant_targets(f);
    let mut g = f.clone();
    if !targets.is_empty() {
        rewrite(&mut g.body, &[], &targets);
    }
    g
}
