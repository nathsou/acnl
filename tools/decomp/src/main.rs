mod addresses;
mod ast;
mod check;
mod cpp;
mod decompile;
mod dispatch;
mod emit;
mod flow;
mod image;
mod inline;
mod parse;
mod print;
mod saves;
mod signatures;
mod sites;
mod propagate;
mod results;
mod returns;
mod simplify;
mod structs;
mod structure;
mod sym;
mod typedb;
mod types;
mod values;
mod view;

use std::collections::{HashMap, HashSet};
use std::fs;

const GENERATED: &str = "build/acnl/generated";

fn generated_functions() -> Vec<(u32, String)> {
    let mut paths: Vec<_> = fs::read_dir(GENERATED)
        .expect("run from the acnl repository root after a build")
        .filter_map(|e| e.ok().map(|e| e.path()))
        .filter(|p| p.file_name().map_or(false, |n| n.to_string_lossy().starts_with("code_")))
        .collect();
    paths.sort();
    let mut out = Vec::new();
    for p in paths {
        out.extend(parse::split_functions(&fs::read_to_string(&p).unwrap()));
    }
    out
}

fn unsupported(stmts: &[ast::Stmt], out: &mut Vec<String>) {
    for s in stmts {
        match s {
            ast::Stmt::Unsupported(why) => out.push(why.clone()),
            ast::Stmt::If(_, a, b) => {
                unsupported(a, out);
                unsupported(b, out);
            }
            _ => {}
        }
    }
}

fn parse_all() {
    let funcs = generated_functions();
    let (mut ok, mut partial) = (0, 0);
    let mut errors: HashMap<String, usize> = HashMap::new();
    for (_, text) in &funcs {
        match parse::function(text) {
            Ok(f) => {
                let mut why = Vec::new();
                unsupported(&f.body, &mut why);
                if why.is_empty() {
                    ok += 1;
                } else {
                    partial += 1;
                    for w in why {
                        *errors.entry(w).or_default() += 1;
                    }
                }
            }
            Err(e) => {
                let key: String = e.chars().take(90).collect();
                *errors.entry(key).or_default() += 1;
            }
        }
    }
    println!("{} functions: {} parsed, {} with unsupported statements, {} errors", funcs.len(), ok, partial,
             funcs.len() - ok - partial);
    let mut v: Vec<_> = errors.into_iter().collect();
    v.sort_by(|a, b| b.1.cmp(&a.1));
    for (e, n) in v.into_iter().take(25) {
        println!("{:6} {}", n, e);
    }
}

// Runs every parsed function through the symbolic interpreter (as a self-check of the model): how many it can
// execute, and why the others fail.
fn sym_all(limit: usize) {
    let funcs = generated_functions();
    let cfg = z3::Config::new();
    let ctx = z3::Context::new(&cfg);
    let (mut ok, mut total) = (0, 0);
    let mut errors: HashMap<String, usize> = HashMap::new();
    for (_, text) in funcs.iter().take(limit) {
        let f = match parse::function(text) {
            Ok(f) => f,
            Err(_) => continue,
        };
        total += 1;
        let mut s = sym::Sym::new(&ctx);
        let init = s.initial("in_");
        match s.run(&f, &init) {
            Ok(_) => ok += 1,
            Err(e) => *errors.entry(e.chars().take(60).collect()).or_default() += 1,
        }
    }
    println!("{} functions: {} executed", total, ok);
    let mut v: Vec<_> = errors.into_iter().collect();
    v.sort_by(|a, b| b.1.cmp(&a.1));
    for (e, n) in v.into_iter().take(15) {
        println!("{:6} {}", n, e);
    }
}

fn find(addr: u32) -> Option<ast::Function> {
    generated_functions().into_iter().find(|(a, _)| *a & !1 == addr & !1).and_then(|(_, t)| parse::function(&t).ok())
}

// Decompiles one function, prints it and proves it equal to the original.
fn decompile_one(addr: u32) {
    let orig = match find(addr) {
        Some(f) => f,
        None => return println!("{:x}: not found or not parsed", addr),
    };
    let cfg = z3::Config::new();
    let ctx = z3::Context::new(&cfg);
    let (dd, v) = decompile::decompile_and_prove_retrying(&ctx, &orig);
    let d = dd.function.clone();
    if std::env::var("DECOMP_RAW").is_ok() {
        println!("{}", print::function(&d));
    } else {
        println!("{}", view::view(&d));
    }
    let verdict = match v {
        check::Verdict::Proved => "proved".to_string(),
        check::Verdict::Differs(w) => format!("DIFFERS: {}", w),
        check::Verdict::Unknown(w) => format!("unknown: {}", w),
    };
    println!("// {:x}: {}", addr, verdict);
}

// Changes the first constant of a store's value: the checker must then find a difference.
fn mutate(list: &mut [ast::Stmt]) -> bool {
    fn bump(e: &mut ast::Expr) -> bool {
        match e {
            ast::Expr::Num(v, _) => {
                *v ^= 1;
                true
            }
            ast::Expr::Un(_, a) | ast::Expr::Cast(_, a) | ast::Expr::Load(_, a) => bump(a),
            ast::Expr::Bin(_, a, b) => bump(a) || bump(b),
            _ => false,
        }
    }
    for s in list.iter_mut() {
        let hit = match s {
            ast::Stmt::Store(_, _, v) => bump(v),
            ast::Stmt::Assign(n, e) if n == "r0" => bump(e),
            ast::Stmt::If(_, a, b) => mutate(a) || mutate(b),
            _ => false,
        };
        if hit {
            return true;
        }
    }
    false
}

fn selftest(addrs: &[String]) {
    let cfg = z3::Config::new();
    let ctx = z3::Context::new(&cfg);
    for a in addrs {
        let addr = u32::from_str_radix(a.trim_start_matches("0x"), 16).unwrap();
        let Some(orig) = find(addr) else { continue };
        let mut dd = decompile::decompile(&orig);
        if !mutate(&mut dd.function.body) {
            println!("{:x}: nothing to mutate", addr);
            continue;
        }
        let v = match check::verify(&ctx, &orig, &dd) {
            check::Verdict::Proved => "PROVED (checker missed the mutation!)".to_string(),
            check::Verdict::Differs(w) => format!("caught: {}", w),
            check::Verdict::Unknown(w) => format!("unknown: {}", w),
        };
        println!("{:x}: {}", addr, v);
    }
}

// Decompiles and proves every function it can (or the first N), in parallel; prints a summary and any
// function whose decompiled form differs (a decompiler bug).
fn check_all(limit: usize, threads: usize) {
    let funcs: Vec<(u32, String)> = generated_functions().into_iter().take(limit).collect();
    check_functions(funcs, threads);
}

// the same for the functions listed in a file (hex addresses, one per line)
fn check_list(list: &str, threads: usize) {
    let wanted: std::collections::HashSet<u32> = std::fs::read_to_string(list)
        .unwrap()
        .lines()
        .filter_map(|l| u32::from_str_radix(l.trim().trim_start_matches("0x"), 16).ok())
        .map(|a| a & !1)
        .collect();
    let funcs: Vec<(u32, String)> = generated_functions().into_iter().filter(|(a, _)| wanted.contains(&(a & !1))).collect();
    check_functions(funcs, threads);
}

fn check_functions(funcs: Vec<(u32, String)>, threads: usize) {
    let chunks: Vec<Vec<(u32, String)>> = (0..threads)
        .map(|t| funcs.iter().skip(t).step_by(threads).cloned().collect())
        .collect();
    let handles: Vec<_> = chunks
        .into_iter()
        .map(|chunk| {
            std::thread::spawn(move || {
                let cfg = z3::Config::new();
                let ctx = z3::Context::new(&cfg);
                let mut out: Vec<(u32, String)> = Vec::new();
                for (addr, text) in chunk {
                    let orig = match parse::function(&text) {
                        Ok(f) => f,
                        Err(_) => {
                            out.push((addr, "unparsed".into()));
                            continue;
                        }
                    };
                    let t0 = std::time::Instant::now();
                    let (_dd, verdict) = decompile::decompile_and_prove_retrying(&ctx, &orig);
                    let t1 = t0.elapsed().as_secs_f32();
                    let v = match verdict {
                        check::Verdict::Proved => "proved".to_string(),
                        check::Verdict::Differs(w) => format!("DIFFERS {}", w),
                        check::Verdict::Unknown(w) => format!("unknown {}", w.chars().take(40).collect::<String>()),
                    };
                    let total = t0.elapsed().as_secs_f32();
                    if total > 10.0 {
                        eprintln!("slow {:x}: decompile {:.1}s, total {:.1}s: {}", addr, t1, total, v);
                    }
                    out.push((addr, v));
                }
                out
            })
        })
        .collect();
    let mut all: Vec<(u32, String)> = handles.into_iter().flat_map(|h| h.join().unwrap()).collect();
    all.sort();
    let mut counts: HashMap<String, usize> = HashMap::new();
    for (a, v) in &all {
        let key = if v.starts_with("DIFFERS") { "DIFFERS".to_string() } else { v.clone() };
        *counts.entry(key).or_default() += 1;
        if v != "proved" {
            println!("{:x} {}", a, v);
        }
    }
    let mut c: Vec<_> = counts.into_iter().collect();
    c.sort_by(|a, b| b.1.cmp(&a.1));
    for (k, n) in c.iter().take(12) {
        println!("{:7} {}", n, k);
    }
}

// The original against itself with the save area of its push: must always be proved (tests the call model).
fn self_equal(addr: u32) {
    let Some(orig) = find(addr) else { return };
    let mut tmp = orig.clone();
    let slots = saves::remove_saves(&mut tmp).slots;
    let cfg = z3::Config::new();
    let ctx = z3::Context::new(&cfg);
    let v = match check::equivalent(&ctx, &orig, &orig, &slots) {
        check::Verdict::Proved => "proved".to_string(),
        check::Verdict::Differs(w) => format!("DIFFERS: {}", w),
        check::Verdict::Unknown(w) => format!("unknown: {}", w),
    };
    println!("{:x} slots {:?}: {}", addr, slots, v);
}

// Functions (among the first N) with a loop and a removable register save, for testing.
fn loops_with_saves(n: usize) {
    let mut found = 0;
    for (addr, text) in generated_functions().into_iter().take(n) {
        let Ok(f) = parse::function(&text) else { continue };
        let (_, _, headers) = sym::Sym::graph(&f);
        if headers.is_empty() {
            continue;
        }
        let mut tmp = f.clone();
        if !saves::remove_saves(&mut tmp).slots.is_empty() {
            print!("{:x} ", addr);
            found += 1;
            if found >= 20 {
                break;
            }
        }
    }
    println!();
}

// Proves the function after every pass of the decompiler: the first pass that breaks equivalence is the bug.
fn bisect(addr: u32) {
    let Some(orig) = find(addr) else { return };
    let cfg = z3::Config::new();
    let ctx = z3::Context::new(&cfg);
    let mut n = 0;
    let mut broken = false;
    let mut prev: Option<String> = None;
    decompile::decompile_traced(&orig, &mut |pass, f, slots| {
        n += 1;
        if broken {
            return;
        }
        let d = decompile::Decompiled { function: f.clone(), save_slots: slots.to_vec(), saved: vec![] };
        let v = check::verify(&ctx, &orig, &d);
        let text = match v {
            check::Verdict::Proved => "proved".to_string(),
            check::Verdict::Differs(w) => {
                broken = true;
                format!("DIFFERS {}", w)
            }
            check::Verdict::Unknown(w) => format!("unknown {}", w),
        };
        println!("{:3} {:40} {}", n, pass, text);
        if broken {
            if let Some(p) = &prev {
                println!("---- before:\n{}", p);
            }
            println!("---- after:\n{}", print::function(f));
        }
        prev = Some(print::function(f));
    });
}

// Writes the view of every function (or the first N) to OUT/<address>.c with its verdict on the first line, and
// OUT/index.txt (address, verdict). Generated from the game: it stays in build/, like the recompiled C.
fn dump(out: &str, limit: usize, threads: usize) {
    std::fs::create_dir_all(out).unwrap();
    let funcs: Vec<(u32, String)> = generated_functions().into_iter().take(limit).collect();
    let chunks: Vec<Vec<(u32, String)>> =
        (0..threads).map(|t| funcs.iter().skip(t).step_by(threads).cloned().collect()).collect();
    let out_dir = out.to_string();
    let handles: Vec<_> = chunks
        .into_iter()
        .map(|chunk| {
            let out_dir = out_dir.clone();
            std::thread::spawn(move || {
                let cfg = z3::Config::new();
                let ctx = z3::Context::new(&cfg);
                let mut index = Vec::new();
                for (addr, text) in chunk {
                    let Ok(orig) = parse::function(&text) else {
                        index.push((addr, "unparsed".to_string()));
                        continue;
                    };
                    let (dd, v) = decompile::decompile_and_prove_retrying(&ctx, &orig);
                    let verdict = match v {
                        check::Verdict::Proved => "proved".to_string(),
                        check::Verdict::Differs(w) => format!("not proved (differs: {})", w),
                        check::Verdict::Unknown(w) => format!("not proved ({})", w),
                    };
                    let body = format!("// {}\n{}", verdict, view::view(&dd.function));
                    std::fs::write(format!("{}/{:08x}.c", out_dir, addr), body).unwrap();
                    index.push((addr, verdict));
                }
                index
            })
        })
        .collect();
    let mut all: Vec<(u32, String)> = handles.into_iter().flat_map(|h| h.join().unwrap()).collect();
    all.sort();
    let text: String = all.iter().map(|(a, v)| format!("{:08x} {}\n", a, v)).collect();
    std::fs::write(format!("{}/index.txt", out), text).unwrap();
    println!("{} functions written to {}", all.len(), out);
}

// C++ drafts of proved decompilations (refused when not proved or not expressible yet).
fn emit_drafts(addrs: &[String]) {
    let cfg = z3::Config::new();
    let ctx = z3::Context::new(&cfg);
    for a in addrs {
        let addr = u32::from_str_radix(a.trim_start_matches("0x"), 16).unwrap();
        let Some(orig) = find(addr) else { continue };
        let (dd, v) = decompile::decompile_and_prove_retrying(&ctx, &orig);
        if !matches!(v, check::Verdict::Proved) {
            println!("// {:x}: not proved, no draft", addr);
            continue;
        }
        match emit::emit(&dd) {
            Ok(code) => println!("{}", code),
            Err(e) => println!("// {:x}: no draft: {}", addr, e),
        }
    }
}

// Drafts of the listed functions (hex addresses, one per line) into one C++ file, in parallel; prints why the others
// have none.
fn emit_batch(list: &str, out: &str, threads: usize) {
    let wanted: std::collections::HashSet<u32> = std::fs::read_to_string(list)
        .unwrap()
        .lines()
        .filter_map(|l| u32::from_str_radix(l.trim().trim_start_matches("0x"), 16).ok())
        .map(|a| a & !1)
        .collect();
    let funcs: Vec<(u32, String)> = generated_functions().into_iter().filter(|(a, _)| wanted.contains(&(a & !1))).collect();
    let chunks: Vec<Vec<(u32, String)>> =
        (0..threads).map(|t| funcs.iter().skip(t).step_by(threads).cloned().collect()).collect();
    let handles: Vec<_> = chunks
        .into_iter()
        .map(|chunk| {
            std::thread::spawn(move || {
                let cfg = z3::Config::new();
                let ctx = z3::Context::new(&cfg);
                let mut res = Vec::new();
                for (addr, text) in chunk {
                    let r = match parse::function(&text) {
                        Err(e) => Err(format!("unparsed: {}", e)),
                        Ok(orig) => {
                            let (dd, v) = decompile::decompile_and_prove_retrying(&ctx, &orig);
                            match v {
                                check::Verdict::Proved => emit::emit(&dd),
                                check::Verdict::Differs(w) => Err(format!("not proved: differs {}", w)),
                                check::Verdict::Unknown(w) => Err(format!("not proved: {}", w)),
                            }
                        }
                    };
                    res.push((addr, r));
                }
                res
            })
        })
        .collect();
    let mut all: Vec<(u32, Result<String, String>)> = handles.into_iter().flat_map(|h| h.join().unwrap()).collect();
    all.sort_by_key(|x| x.0);
    let mut text = String::from("// Drafts from tools/decomp (generated; not for the repository).\n#include \"guest/guest.hpp\"\n\n#include <bit>\n\nusing guest::gptr;\n\n");
    let mut why: HashMap<String, usize> = HashMap::new();
    let mut n = 0;
    for (_, r) in &all {
        match r {
            Ok(code) => {
                text.push_str(code);
                text.push('\n');
                n += 1;
            }
            Err(e) => *why.entry(e.chars().take(70).collect()).or_default() += 1,
        }
    }
    std::fs::write(out, text).unwrap();
    println!("{} drafts of {} functions in {}", n, all.len(), out);
    let mut v: Vec<_> = why.into_iter().collect();
    v.sort_by(|a, b| b.1.cmp(&a.1));
    for (e, c) in v.into_iter().take(10) {
        println!("{:6} {}", c, e);
    }
}

// The runtime's helper functions (3dsrecomp/runtime/cpu.h, libm) a C++ draft may call.
const HELPERS: [&str; 63] = [
    "vfp_cmpf", "ror32", "lsl_r", "lsr_r", "asr_r", "ror_r", "lsl_rc", "lsr_rc", "asr_rc", "ror_rc", "sat32", "qadd", "qsub", "qdadd",
    "qdsub", "smlaxy", "smlaxy_add", "ssat", "usat", "ssat16", "usat16", "sxtb", "sxth", "uxtb", "uxth", "sxtb16", "uxtb16",
    "add16x", "rev16", "sel", "usad8", "pas_lane", "pas16", "pas8", "vfp_cmpd", "cvt_s32", "cvt_u32", "vfp_round",
    "vcvt_sz_f", "vcvt_uz_f", "vcvt_sz_d", "vcvt_uz_d", "vcvt_sr_f", "vcvt_ur_f", "vcvt_sr_d", "vcvt_ur_d", "D2F", "sqrtf",
    "sqrt", "fabsf", "fabs", "__builtin_clz", "clz",
    "pas_qadd16", "pas_qasx", "pas_qsax", "pas_qsub16", "pas_sadd16", "pas_ssax", "pas_ssub16", "pas_uhadd8", "pas_uqsub8", "__builtin_bswap32",
];

// Proves the signatures of all functions (or the first N), callees before callers: a function is proved once every
// function it calls has been tried, with their signatures (sound by induction: each one is proved under signatures
// proved before). The functions of a recursive cycle are proved one after the other, in address order, each with the
// signatures of those before it. Starts from no signatures; writes OUT as it goes.
fn signatures_all(out: &str, n: usize, threads: usize) {
    use std::collections::{HashSet, VecDeque};
    let funcs: Vec<(u32, String)> = generated_functions().into_iter().take(n).collect();
    let parsed: Vec<Option<ast::Function>> = funcs.iter().map(|(_, t)| parse::function(t).ok()).collect();
    let index: HashMap<u32, usize> = funcs.iter().enumerate().map(|(i, (a, _))| (a & !1, i)).collect();
    let count = funcs.len();
    // the call graph (direct calls, within the functions considered)
    let calls: Vec<Vec<usize>> = parsed
        .iter()
        .map(|f| {
            let mut c = Vec::new();
            if let Some(f) = f {
                signatures::direct_callees(&f.body, &mut c);
            }
            let mut v: Vec<usize> = c.iter().filter_map(|t| index.get(&(t & !1)).copied()).collect();
            v.sort();
            v.dedup();
            v
        })
        .collect();
    // strongly connected components (Tarjan, iterative); each one is proved as a unit
    let mut comp = vec![usize::MAX; count];
    let mut comps: Vec<Vec<usize>> = Vec::new();
    {
        let (mut idx, mut low, mut on) = (vec![usize::MAX; count], vec![0; count], vec![false; count]);
        let (mut next, mut stack) = (0, Vec::new());
        for root in 0..count {
            if idx[root] != usize::MAX {
                continue;
            }
            let mut work: Vec<(usize, usize)> = vec![(root, 0)];
            while let Some(&mut (v, ref mut k)) = work.last_mut() {
                if *k == 0 {
                    idx[v] = next;
                    low[v] = next;
                    next += 1;
                    stack.push(v);
                    on[v] = true;
                }
                if *k < calls[v].len() {
                    let w = calls[v][*k];
                    *k += 1;
                    if idx[w] == usize::MAX {
                        work.push((w, 0));
                    } else if on[w] {
                        low[v] = low[v].min(idx[w]);
                    }
                    continue;
                }
                work.pop();
                if let Some(&(u, _)) = work.last() {
                    low[u] = low[u].min(low[v]);
                }
                if low[v] == idx[v] {
                    let mut members = Vec::new();
                    loop {
                        let w = stack.pop().unwrap();
                        on[w] = false;
                        comp[w] = comps.len();
                        members.push(w);
                        if w == v {
                            break;
                        }
                    }
                    members.sort_by_key(|&m| funcs[m].0);
                    comps.push(members);
                }
            }
        }
    }
    // a component waits for the components it calls
    let mut waits = vec![0usize; comps.len()];
    let mut callers: Vec<HashSet<usize>> = vec![HashSet::new(); comps.len()];
    for v in 0..count {
        for &w in &calls[v] {
            if comp[w] != comp[v] && callers[comp[w]].insert(comp[v]) {
                waits[comp[v]] += 1;
            }
        }
    }
    // DECOMP_SIG_EXTEND=1: keep the table read (DECOMP_SIGNATURES) and prove only the functions it lacks (its
    // signatures were proved callee-first too, with the signatures of their own callees)
    let extend = std::env::var("DECOMP_SIG_EXTEND").is_ok();
    if !extend {
        signatures::reset(HashMap::new());
    }
    let ready: VecDeque<usize> = (0..comps.len()).filter(|&c| waits[c] == 0).collect();
    struct Queue {
        ready: VecDeque<usize>,
        waits: Vec<usize>,
        left: usize,
        found: Vec<(u32, Vec<String>)>,
    }
    let state = std::sync::Arc::new((std::sync::Mutex::new(Queue { ready, waits, left: comps.len(), found: Vec::new() }), std::sync::Condvar::new()));
    let shared = std::sync::Arc::new((funcs, parsed, comps, callers));
    let file = std::sync::Arc::new(std::sync::Mutex::new(fs::File::create(out).unwrap()));
    let handles: Vec<_> = (0..threads)
        .map(|_| {
            let (state, shared, file) = (state.clone(), shared.clone(), file.clone());
            std::thread::spawn(move || {
                let cfg = z3::Config::new();
                let ctx = z3::Context::new(&cfg);
                let (funcs, parsed, comps, callers) = &*shared;
                loop {
                    let c = {
                        let (m, cv) = &*state;
                        let mut q = m.lock().unwrap();
                        loop {
                            if let Some(c) = q.ready.pop_front() {
                                break c;
                            }
                            if q.left == 0 {
                                return;
                            }
                            q = cv.wait(q).unwrap();
                        }
                    };
                    for &v in &comps[c] {
                        let Some(f) = &parsed[v] else { continue };
                        let known = signatures::of(funcs[v].0 & !1);
                        if let Some(regs) = known.or_else(|| signatures::prove(&ctx, f)) {
                            let a = funcs[v].0 & !1;
                            signatures::insert(a, regs.clone());
                            use std::io::Write;
                            let _ = writeln!(file.lock().unwrap(), "{:08x} {}", a, regs.join(" "));
                            state.0.lock().unwrap().found.push((a, regs));
                        }
                    }
                    let (m, cv) = &*state;
                    let mut q = m.lock().unwrap();
                    q.left -= 1;
                    for &d in &callers[c] {
                        q.waits[d] -= 1;
                        if q.waits[d] == 0 {
                            q.ready.push_back(d);
                        }
                    }
                    cv.notify_all();
                }
            })
        })
        .collect();
    for h in handles {
        h.join().unwrap();
    }
    let mut all = std::mem::take(&mut state.0.lock().unwrap().found);
    all.sort();
    let text: String = all.iter().map(|(a, r)| format!("{:08x} {}\n", a, r.join(" "))).collect();
    fs::write(out, text).unwrap();
    println!("{} of {} functions have a proved signature ({})", all.len(), shared.0.len(), out);
}

// Recovers the structs functions receive (structs.rs) from every function's decompilation (not proved: the facts are
// hints; each draft that uses a struct is checked and proved as usual). Writes the type database with them added to
// the existing one (DECOMP_TYPES, default build/tools/ghidra) into OUTDIR, and their header to HEADER.
fn structs_all(outdir: &str, header: &str, threads: usize) {
    let funcs: Vec<(u32, String)> = generated_functions();
    let chunks: Vec<Vec<(u32, String)>> = (0..threads).map(|t| funcs.iter().skip(t).step_by(threads).cloned().collect()).collect();
    let handles: Vec<_> = chunks
        .into_iter()
        .map(|chunk| {
            std::thread::spawn(move || {
                let mut out = Vec::new();
                for (addr, text) in chunk {
                    let Ok(orig) = parse::function(&text) else { continue };
                    let d = decompile::decompile_with(&orig, true, &mut |_, _, _| {});
                    out.push((addr & !1, structs::facts(&d.function)));
                }
                out
            })
        })
        .collect();
    let all: HashMap<u32, structs::Facts> = handles.into_iter().flat_map(|h| h.join().unwrap()).collect();
    let db = view::types();
    let skip = |a: u32, k: usize| db.map_or(false, |db| db.param(a, k).map_or(false, |st| db.header(&st).is_some()));
    // with the RTTI's classes when there are (DECOMP_RTTI, default build/acnl/rtti.json), else by joining across calls
    let taken = structs::taken_names("games/acnl/src");
    let classes = structs::classes(&std::env::var("DECOMP_RTTI").unwrap_or("build/acnl/rtti.json".into()), &taken);
    let r = if classes.is_empty() { structs::unify(&all, &skip) } else { structs::by_class(&all, &classes, &skip) };
    let src = std::env::var("DECOMP_TYPES").unwrap_or("build/tools/ghidra".into());
    let read = |f: &str, empty: &str| -> serde_json::Value {
        serde_json::from_str(&fs::read_to_string(format!("{}/{}", src, f)).unwrap_or_else(|_| empty.to_string())).unwrap()
    };
    let (mut types, mut params) = (read("types.json", "{\"structs\": {}}"), read("param_types.json", "{}"));
    structs::add_to_db(&r, &mut types, &mut params);
    fs::create_dir_all(outdir).unwrap();
    fs::write(format!("{}/types.json", outdir), serde_json::to_string(&types).unwrap()).unwrap();
    fs::write(format!("{}/param_types.json", outdir), serde_json::to_string(&params).unwrap()).unwrap();
    for f in ["names.txt", "sigs.json"] {
        let _ = fs::copy(format!("{}/{}", src, f), format!("{}/{}", outdir, f));
    }
    fs::write(header, structs::header(&r)).unwrap();
    let typed: usize = r.params.values().map(|m| m.len()).sum();
    println!("{} structs for {} arguments of {} functions ({} functions read)", r.structs.len(), typed, r.params.len(), all.len());
}

// The results callers observe (results.rs), to a fixed point over the program, written to OUT ("address results..."
// per line; a function absent from it has all its results observed).
// The functions that return their first argument (returns.rs), in rounds: each round tries the functions that call
// one found in the round before (the first round: all of them), with the table found so far.
fn returns_all(out: &str, threads: usize) {
    let funcs: Vec<(u32, String)> = generated_functions();
    let parsed: Vec<(u32, ast::Function)> =
        funcs.iter().filter_map(|(a, t)| parse::function(t).ok().map(|f| (*a & !1, f))).collect();
    let callees: Vec<HashSet<u32>> = parsed
        .iter()
        .map(|(_, f)| {
            let mut c = Vec::new();
            signatures::direct_callees(&f.body, &mut c);
            c.into_iter().map(|t| t & !1).collect()
        })
        .collect();
    returns::reset(HashSet::new());
    let parsed = std::sync::Arc::new(parsed);
    let mut todo: Vec<usize> = (0..parsed.len()).collect();
    let mut found: HashSet<u32> = HashSet::new();
    for round in 1.. {
        let todo_shared = std::sync::Arc::new(todo.clone());
        let handles: Vec<_> = (0..threads)
            .map(|t| {
                let (parsed, todo) = (parsed.clone(), todo_shared.clone());
                std::thread::spawn(move || {
                    let cfg = z3::Config::new();
                    let ctx = z3::Context::new(&cfg);
                    todo.iter().skip(t).step_by(threads).filter(|&&i| returns::prove(&ctx, &parsed[i].1)).map(|&i| parsed[i].0).collect::<Vec<u32>>()
                })
            })
            .collect();
        let new: HashSet<u32> = handles.into_iter().flat_map(|h| h.join().unwrap()).filter(|a| !found.contains(a)).collect();
        println!("round {}: {} tried, {} new", round, todo.len(), new.len());
        if new.is_empty() {
            break;
        }
        for a in &new {
            returns::insert(*a);
        }
        found.extend(new.iter().copied());
        // (the table so far, after every round)
        let mut lines: Vec<String> = found.iter().map(|a| format!("{:08x}", a)).collect();
        lines.sort();
        fs::write(out, lines.join("\n") + "\n").unwrap();
        todo = (0..parsed.len()).filter(|&i| !found.contains(&parsed[i].0) && callees[i].iter().any(|c| new.contains(c))).collect();
    }
    let mut lines: Vec<String> = found.iter().map(|a| format!("{:08x}", a)).collect();
    lines.sort();
    fs::write(out, lines.join("\n") + "\n").unwrap();
    println!("{} functions return their first argument", found.len());
}

fn results_all(out: &str, threads: usize) {
    let funcs: Vec<(u32, String)> = generated_functions();
    let mut all_observed: HashSet<u32> = HashSet::new();
    let function_keys: HashSet<u32> = funcs.iter().map(|(a, _)| *a & !1).collect();
    // reachable through a pointer: callers unknown but for the indirect call sites, whose reads they get
    let pointed: HashSet<u32> = fs::read_to_string(format!("{}/pointed.txt", GENERATED))
        .expect("the recompiler's pointed.txt")
        .lines()
        .filter_map(|l| u32::from_str_radix(l.trim(), 16).ok())
        .map(|a| a & !1)
        .collect();
    // what callers outside the analysed code read: by callee (INDIRECT for calls through a pointer)
    let mut outside: HashMap<u32, HashSet<String>> = HashMap::new();
    let every: HashSet<String> = results::RESULTS.iter().map(|k| k.to_string()).collect();
    let call = regex_lite_calls();
    let mut parsed: Vec<(u32, ast::Function)> = Vec::new();
    for (a, text) in &funcs {
        match parse::function(text) {
            Ok(f) => parsed.push((*a & !1, f)),
            Err(_) => {
                all_observed.extend(call(text));
                if text.contains("rt_dispatch(") {
                    outside.entry(results::INDIRECT).or_default().extend(every.iter().cloned());
                }
            }
        }
    }
    // the rewrites call guest functions through the C++ ABI: the results their declared result types read
    let mut stack = vec![std::path::PathBuf::from("games/acnl/src")];
    while let Some(d) = stack.pop() {
        for e in fs::read_dir(&d).into_iter().flatten().flatten() {
            let p = e.path();
            if p.is_dir() {
                if p.file_name().map_or(false, |n| n != "decompiled") {
                    stack.push(p);
                }
            } else if let Ok(text) = fs::read_to_string(&p) {
                rewrite_reads(&text, &mut outside);
            }
        }
    }
    let parsed = std::sync::Arc::new(parsed);
    let mut table: HashMap<u32, HashSet<String>> =
        parsed.iter().filter(|(a, _)| !all_observed.contains(a)).map(|(a, _)| (*a, HashSet::new())).collect();
    table.insert(results::INDIRECT, HashSet::new());
    if std::env::var("DECOMP_DEBUG").is_ok() {
        eprintln!("outside the analysed code, through a pointer: {:?}", outside.get(&results::INDIRECT));
    }
    for round in 1.. {
        results::reset(table.clone());
        let handles: Vec<_> = (0..threads)
            .map(|t| {
                let parsed = parsed.clone();
                std::thread::spawn(move || {
                    let mut out: HashMap<u32, HashSet<String>> = HashMap::new();
                    for (a, f) in parsed.iter().skip(t).step_by(threads) {
                        let mine: HashSet<String> = results::RESULTS.iter().filter(|k| results::observed(*a, k)).map(|k| k.to_string()).collect();
                        if std::env::var("DECOMP_DEBUG").is_ok() {
                            // who makes the indirect calls read r1 / s0
                            let mut one = HashMap::new();
                            results::contributions(f, &mine, &mut one);
                            if let Some(s) = one.get(&results::INDIRECT) {
                                if s.contains("r1") || s.contains("s0") {
                                    eprintln!("indirect {:08x}: {:?} (mine {:?})", a, s, mine);
                                }
                            }
                        }
                        results::contributions(f, &mine, &mut out);
                    }
                    out
                })
            })
            .collect();
        let mut next: HashMap<u32, HashSet<String>> = table.keys().map(|a| (*a, HashSet::new())).collect();
        for h in handles {
            for (callee, set) in h.join().unwrap() {
                if let Some(s) = next.get_mut(&callee) {
                    s.extend(set);
                } else if !function_keys.contains(&callee) {
                    // an indirect call to a constant that is no function's entry: some function's other entry
                    next.get_mut(&results::INDIRECT).unwrap().extend(set);
                }
            }
        }
        for (callee, set) in &outside {
            if let Some(s) = next.get_mut(callee) {
                s.extend(set.iter().cloned());
            }
        }
        // a function a pointer reaches: what the indirect call sites read too
        let indirect = next[&results::INDIRECT].clone();
        for a in &pointed {
            if let Some(s) = next.get_mut(a) {
                s.extend(indirect.iter().cloned());
            }
        }
        let changed = next != table;
        table = next;
        let none = table.values().filter(|s| s.is_empty()).count();
        let partial = table.values().filter(|s| !s.is_empty() && s.len() < every.len()).count();
        println!("round {}: {} functions with all callers known, {} observe nothing, {} some", round, table.len(), none, partial);
        if !changed {
            break;
        }
    }
    let mut lines: Vec<String> = table
        .iter()
        .map(|(a, s)| {
            let mut ks: Vec<&str> = results::RESULTS.iter().copied().filter(|k| s.contains(*k)).collect();
            ks.sort();
            format!("{:08x} {}", a, ks.join(" "))
        })
        .collect();
    lines.sort();
    fs::write(out, lines.join("\n") + "\n").unwrap();
}

// What a rewrite's calls into guest code read: `guest::Function<0xADDR, R(...)>` by its result type, and
// `call_address<R>` / `call_member<R>` (through a pointer: INDIRECT).
fn rewrite_reads(text: &str, out: &mut HashMap<u32, HashSet<String>>) {
    for (i, _) in text.match_indices("Function<0x") {
        let rest = &text[i + 11..];
        let hex: String = rest.chars().take_while(|c| c.is_ascii_hexdigit()).collect();
        let Ok(a) = u32::from_str_radix(&hex, 16) else { continue };
        // the result type: from the comma after the address to the parameter list's '(' (templates nest no '(')
        let after = &rest[hex.len()..];
        let ty = after.strip_prefix(',').and_then(|t| t.find('(').map(|k| &t[..k]));
        let reads = match ty {
            Some(t) => results::read_by_type(t),
            None => results::RESULTS.to_vec(),
        };
        out.entry(a & !1).or_default().extend(reads.iter().map(|k| k.to_string()));
    }
    for name in ["call_address<", "call_member<"] {
        for (i, _) in text.match_indices(name) {
            let rest = &text[i + name.len()..];
            // the template argument: up to the '>' that closes it
            let mut depth = 0;
            let mut end = None;
            for (k, ch) in rest.char_indices() {
                match ch {
                    '<' => depth += 1,
                    '>' if depth == 0 => {
                        end = Some(k);
                        break;
                    }
                    '>' => depth -= 1,
                    _ => {}
                }
            }
            let reads = match end {
                Some(k) => template_reads(text, i, &rest[..k]),
                None => results::RESULTS.to_vec(),
            };
            out.entry(results::INDIRECT).or_default().extend(reads.iter().map(|k| k.to_string()));
        }
    }
}

// The results a call with result type `ty` reads; for a template's own parameter (`template <typename R, ...> R
// name(...)` around the call at `at`), those of the types `name<T>(` is used with in the file.
fn template_reads(text: &str, at: usize, ty: &str) -> Vec<&'static str> {
    let ty = ty.trim();
    let is_param = ty.chars().all(|c| c.is_ascii_alphanumeric() || c == '_') && text[..at].contains(&format!("template <typename {}", ty));
    if !is_param {
        return results::read_by_type(ty);
    }
    // the function the template declares: `R name(` after the last `template <typename R`
    let decl = text[..at].rfind(&format!("template <typename {}", ty)).unwrap();
    let after = &text[decl..at];
    let Some(k) = after.find(&format!("\n    {} ", ty)).or_else(|| after.find(&format!("\n{} ", ty))) else { return results::RESULTS.to_vec() };
    let head = &after[k..];
    let name: String = head.trim_start().splitn(2, ' ').nth(1).unwrap_or("").chars().take_while(|c| c.is_ascii_alphanumeric() || *c == '_').collect();
    if name.is_empty() {
        return results::RESULTS.to_vec();
    }
    let mut reads: Vec<&'static str> = Vec::new();
    for (i, _) in text.match_indices(&format!("{}<", name)) {
        let rest = &text[i + name.len() + 1..];
        let Some(close) = rest.find(">(") else { continue };
        for r in results::read_by_type(&rest[..close]) {
            if !reads.contains(&r) {
                reads.push(r);
            }
        }
    }
    reads
}

// the targets of the guest calls in a generated function's text (f_XXXXXXXX(c / t_XXXXXXXX(c)
fn regex_lite_calls() -> impl Fn(&str) -> Vec<u32> {
    |text: &str| {
        let mut out = Vec::new();
        for (i, _) in text.match_indices("(c, ") {
            if i >= 10 {
                let w = &text[i - 10..i];
                if (w.starts_with("f_") || w.starts_with("t_")) && w[2..].chars().all(|c| c.is_ascii_hexdigit()) {
                    if let Ok(a) = u32::from_str_radix(&w[2..], 16) {
                        out.push(a & !1);
                    }
                }
            }
        }
        out
    }
}

// Functions whose entry is also a label inside another function (entry -> that function): pieces of it, such as
// jump table targets and shared epilogues, that the recompiler's discovery also made functions. They run in the
// frame of the function they belong to (an epilogue pops its saved registers and pc), so they do not return to the lr
// they are given, which the call model assumes of every callee: neither a draft of one nor a draft calling one is
// proved (the draft of the function they belong to holds their code).
fn fragments(funcs: &HashMap<u32, String>) -> HashMap<u32, u32> {
    let mut out = HashMap::new();
    for (a, text) in funcs {
        for line in text.lines() {
            let Some(hex) = line.strip_prefix("L_").and_then(|r| r.strip_suffix(':')) else { continue };
            if let Ok(l) = u32::from_str_radix(hex, 16) {
                if l != a & !1 && funcs.contains_key(&l) {
                    out.entry(l).or_insert(*a & !1);
                }
            }
        }
    }
    out
}

struct Program {
    functions: HashMap<u32, String>, // generated functions by address (bit 0 clear)
    fragments: HashMap<u32, u32>,
}

// The C++ of a draft proved equal to the decompiled function, itself proved equal to the original: the verdict.
fn prove_export(ctx: &z3::Context, e: &cpp::Export, p: &Program) -> Result<(), String> {
    let f = e.function.as_ref().map_err(|w| format!("unreadable: {}", w))?;
    if let Some(owner) = p.fragments.get(&(e.address & !1)) {
        return Err(format!("a fragment of f_{:08x}", owner));
    }
    let mut called = Vec::new();
    signatures::direct_callees(&f.body, &mut called);
    if let Some(t) = called.iter().find(|t| p.fragments.contains_key(&(*t & !1))) {
        return Err(format!("calls f_{:08x}, a fragment of another function", t));
    }
    let text = p.functions.get(&(e.address & !1)).ok_or("no original")?;
    let orig = parse::function(text).map_err(|w| format!("original: {}", w))?;
    let (dd, v) = decompile::decompile_and_prove_retrying(ctx, &orig);
    match v {
        check::Verdict::Proved => {}
        check::Verdict::Differs(w) => return Err(format!("the decompiled function is not proved: differs {}", w)),
        check::Verdict::Unknown(w) => return Err(format!("the decompiled function is not proved: {}", w)),
    }
    let mut v = check::verify_cpp(ctx, &orig, &dd, f);
    // a proof that ran out of time: once more with four times the solver's time (DECOMP_TIMEOUT_MS, default 20 s)
    if matches!(&v, check::Verdict::Unknown(w) if w.contains("timeout") || w.contains("canceled") || w.contains("budget")) {
        let ms: u32 = std::env::var("DECOMP_TIMEOUT_MS").ok().and_then(|x| x.parse().ok()).unwrap_or(20_000);
        check::TIMEOUT_OVERRIDE.with(|t| t.set(Some(ms.saturating_mul(4))));
        v = check::verify_cpp(ctx, &orig, &dd, f);
        check::TIMEOUT_OVERRIDE.with(|t| t.set(None));
    }
    match v {
        check::Verdict::Proved => Ok(()),
        check::Verdict::Differs(w) => Err(format!("differs: {}", w)),
        check::Verdict::Unknown(w) => Err(format!("unknown: {}", w)),
    }
}

// Proves every GUEST_EXPORT of a C++ file of drafts; writes the proved addresses to OUT (one per line).
fn prove_cpp(path: &str, out: Option<&str>, threads: usize) {
    let text = fs::read_to_string(path).unwrap();
    let helpers: std::collections::HashSet<String> = HELPERS.iter().map(|s| s.to_string()).collect();
    let file = match cpp::read(&text, &helpers) {
        Ok(x) => x,
        Err(e) => return println!("{}: {}", path, e),
    };
    // the layout facts the reading assumed, confirmed by the compiler against the repository's headers
    let check = cpp::layout_check(&text, &file);
    let check_path = format!("{}/decomp_layout_check.cpp", std::env::var("DECOMP_WORK").unwrap_or("build/acnl".into()));
    fs::write(&check_path, check).unwrap();
    let sdk = std::process::Command::new("xcrun").arg("--show-sdk-path").output().map(|o| String::from_utf8_lossy(&o.stdout).trim().to_string()).unwrap_or_default();
    let cxx = std::env::var("CXX").unwrap_or("clang++".into());
    let compiled = std::process::Command::new(&cxx)
        .args(["-std=gnu++20", "-fsyntax-only", "-Iguest/include", "-Igames/acnl/src", "-I../3dsrecomp/runtime", "-isysroot", &sdk, &check_path])
        .output();
    // errors inside a draft's namespace leave that draft out (it does not compile); anywhere else (a layout
    // assertion) they stop everything
    let mut broken: std::collections::HashSet<u32> = std::collections::HashSet::new();
    match compiled {
        Ok(o) if o.status.success() => {}
        Ok(o) => {
            let err = String::from_utf8_lossy(&o.stderr);
            let check_text = fs::read_to_string(&check_path).unwrap_or_default();
            let lines: Vec<&str> = check_text.lines().collect();
            let mut fatal = Vec::new();
            for l in err.lines().filter(|l| l.contains(": error:")) {
                let n: usize = l.split(':').nth(1).and_then(|x| x.parse().ok()).unwrap_or(0);
                // the draft around the line: the last "namespace d_X {" before it, unless closed in between
                let mut owner = None;
                for k in (0..n.min(lines.len())).rev() {
                    if lines[k].starts_with("}  // namespace d_") {
                        break;
                    }
                    if let Some(rest) = lines[k].strip_prefix("namespace d_") {
                        owner = u32::from_str_radix(rest.trim_end_matches(" {"), 16).ok();
                        break;
                    }
                }
                match owner {
                    Some(a) => {
                        broken.insert(a);
                    }
                    None => fatal.push(l.to_string()),
                }
            }
            if !fatal.is_empty() {
                println!("layout check failed ({}):\n{}", check_path, fatal.iter().take(10).cloned().collect::<Vec<_>>().join("\n"));
                return;
            }
        }
        Err(e) => {
            println!("layout check: cannot run {}: {}", cxx, e);
            return;
        }
    }
    let exports = std::sync::Arc::new(file.exports);
    let broken = std::sync::Arc::new(broken);
    let functions: HashMap<u32, String> = generated_functions().into_iter().map(|(a, t)| (a & !1, t)).collect();
    let program = std::sync::Arc::new(Program { fragments: fragments(&functions), functions });
    let handles: Vec<_> = (0..threads)
        .map(|t| {
            let exports = exports.clone();
            let broken = broken.clone();
            let program = program.clone();
            std::thread::spawn(move || {
                let cfg = z3::Config::new();
                let ctx = z3::Context::new(&cfg);
                exports
                    .iter()
                    .skip(t)
                    .step_by(threads)
                    .map(|e| {
                        if broken.contains(&(e.address & !1)) {
                            (e.address, Err("does not compile".to_string()))
                        } else {
                            (e.address, prove_export(&ctx, e, &program))
                        }
                    })
                    .collect::<Vec<_>>()
            })
        })
        .collect();
    let mut all: Vec<(u32, Result<(), String>)> = handles.into_iter().flat_map(|h| h.join().unwrap()).collect();
    all.sort_by_key(|x| x.0);
    let mut why: HashMap<String, usize> = HashMap::new();
    let mut proved = String::new();
    for (a, r) in &all {
        match r {
            Ok(()) => proved.push_str(&format!("{:08x}\n", a)),
            Err(w) => {
                if all.len() <= 20 {
                    println!("{:08x}: {}", a, w);
                }
                *why.entry(w.chars().take(80).collect()).or_default() += 1;
            }
        }
    }
    let n = proved.lines().count();
    println!("{} of {} proved", n, all.len());
    let mut v: Vec<_> = why.into_iter().collect();
    v.sort_by(|a, b| b.1.cmp(&a.1));
    for (e, c) in v.into_iter().take(15) {
        println!("{:6} {}", c, e);
    }
    if let Some(o) = out {
        fs::write(o, proved).unwrap();
        // and why the others are not
        let failed: String = all.iter().filter_map(|(a, r)| r.as_ref().err().map(|w| format!("{:08x} {}\n", a, w))).collect();
        fs::write(format!("{}.failed", o), failed).unwrap();
    }
}

fn main() {
    let args: Vec<String> = std::env::args().collect();
    match args.get(1).map(|s| s.as_str()) {
        Some("parse-all") => parse_all(),
        Some("returns") => returns_all(args.get(2).map(|s| s.as_str()).unwrap_or("build/acnl/decomp_returns.txt"), args.get(3).and_then(|s| s.parse().ok()).unwrap_or(8)),
        Some("results") => results_all(args.get(2).map(|s| s.as_str()).unwrap_or("build/acnl/decomp_results.txt"), args.get(3).and_then(|s| s.parse().ok()).unwrap_or(8)),
        Some("structs") => structs_all(
            args.get(2).map(|s| s.as_str()).unwrap_or("build/acnl/types"),
            args.get(3).map(|s| s.as_str()).unwrap_or("games/acnl/src/recovered/structs.hpp"),
            args.get(4).and_then(|s| s.parse().ok()).unwrap_or(8),
        ),
        Some("decompile") => {
            for a in &args[2..] {
                decompile_one(u32::from_str_radix(a.trim_start_matches("0x"), 16).unwrap());
            }
        }
        Some("check-all") => check_all(args.get(2).and_then(|s| s.parse().ok()).unwrap_or(usize::MAX),
                                       args.get(3).and_then(|s| s.parse().ok()).unwrap_or(8)),
        Some("self-equal") => self_equal(u32::from_str_radix(args[2].trim_start_matches("0x"), 16).unwrap()),
        Some("loops-with-saves") => loops_with_saves(args.get(2).and_then(|s| s.parse().ok()).unwrap_or(3000)),
        Some("bisect") => bisect(u32::from_str_radix(args[2].trim_start_matches("0x"), 16).unwrap()),
        Some("dump") => dump(args.get(2).map(|s| s.as_str()).unwrap_or("build/acnl/decomp"),
                             args.get(3).and_then(|s| s.parse().ok()).unwrap_or(usize::MAX),
                             args.get(4).and_then(|s| s.parse().ok()).unwrap_or(8)),
        Some("emit") => emit_drafts(&args[2..]),
        Some("emit-batch") => emit_batch(&args[2], &args[3], args.get(4).and_then(|s| s.parse().ok()).unwrap_or(8)),
        Some("check-list") => check_list(&args[2], args.get(3).and_then(|s| s.parse().ok()).unwrap_or(8)),
        Some("selftest") => selftest(&args[2..]),
        // the signature of each function given, with the table's signatures for its callees (DECOMP_DEBUG=1: why not)
        Some("signature") => {
            let cfg = z3::Config::new();
            let ctx = z3::Context::new(&cfg);
            for a in &args[2..] {
                let addr = u32::from_str_radix(a.trim_start_matches("0x"), 16).unwrap();
                match find(addr) {
                    Some(f) => println!("{:08x}: {:?}", addr, signatures::prove(&ctx, &f)),
                    None => println!("{:08x}: not found", addr),
                }
            }
        }
        Some("signatures") => signatures_all(args.get(2).map(|s| s.as_str()).unwrap_or("build/acnl/decomp_signatures.txt"),
                                             args.get(3).and_then(|s| s.parse().ok()).unwrap_or(usize::MAX),
                                             args.get(4).and_then(|s| s.parse().ok()).unwrap_or(8)),
        Some("prove-cpp") => prove_cpp(&args[2], args.get(3).map(|s| s.as_str()).filter(|s| *s != "-"),
                                       args.get(4).and_then(|s| s.parse().ok()).unwrap_or(8)),
        Some("sym-all") => sym_all(args.get(2).and_then(|s| s.parse().ok()).unwrap_or(usize::MAX)),
        _ => eprintln!("usage: decomp decompile ADDR... | check-all [N] [THREADS] | dump [OUT] [N] [THREADS] | selftest ADDR... | bisect ADDR | parse-all | sym-all [N]"),
    }
}
