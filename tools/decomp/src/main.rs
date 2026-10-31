mod addresses;
mod ast;
mod check;
mod cpp;
mod decompile;
mod emit;
mod flow;
mod inline;
mod parse;
mod print;
mod saves;
mod signatures;
mod propagate;
mod simplify;
mod structure;
mod sym;
mod typedb;
mod types;
mod view;

use std::collections::HashMap;
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
        match emit::emit(&dd.function) {
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
                                check::Verdict::Proved => emit::emit(&dd.function),
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
const HELPERS: [&str; 53] = [
    "vfp_cmpf", "ror32", "lsl_r", "lsr_r", "asr_r", "ror_r", "lsl_rc", "lsr_rc", "asr_rc", "ror_rc", "sat32", "qadd", "qsub", "qdadd",
    "qdsub", "smlaxy", "smlaxy_add", "ssat", "usat", "ssat16", "usat16", "sxtb", "sxth", "uxtb", "uxth", "sxtb16", "uxtb16",
    "add16x", "rev16", "sel", "usad8", "pas_lane", "pas16", "pas8", "vfp_cmpd", "cvt_s32", "cvt_u32", "vfp_round",
    "vcvt_sz_f", "vcvt_uz_f", "vcvt_sz_d", "vcvt_uz_d", "vcvt_sr_f", "vcvt_ur_f", "vcvt_sr_d", "vcvt_ur_d", "D2F", "sqrtf",
    "sqrt", "fabsf", "fabs", "__builtin_clz", "clz",
];

// Proves the signatures of all functions (or the first N): which argument registers each one reads.
fn signatures_all(out: &str, n: usize, threads: usize) {
    let funcs: Vec<(u32, String)> = generated_functions().into_iter().take(n).collect();
    let chunks: Vec<Vec<(u32, String)>> = (0..threads).map(|t| funcs.iter().skip(t).step_by(threads).cloned().collect()).collect();
    let handles: Vec<_> = chunks
        .into_iter()
        .map(|chunk| {
            std::thread::spawn(move || {
                let cfg = z3::Config::new();
                let ctx = z3::Context::new(&cfg);
                let mut res = Vec::new();
                for (addr, text) in chunk {
                    if let Ok(f) = parse::function(&text) {
                        if let Some(regs) = signatures::prove(&ctx, &f) {
                            res.push((addr & !1, regs));
                        }
                    }
                }
                res
            })
        })
        .collect();
    let mut all: Vec<(u32, Vec<String>)> = handles.into_iter().flat_map(|h| h.join().unwrap()).collect();
    all.sort();
    let text: String = all.iter().map(|(a, r)| format!("{:08x} {}\n", a, r.join(" "))).collect();
    fs::write(out, text).unwrap();
    println!("{} of {} functions have a proved signature ({})", all.len(), funcs.len(), out);
}

// The C++ of a draft proved equal to the decompiled function, itself proved equal to the original: the verdict.
fn prove_export(ctx: &z3::Context, e: &cpp::Export) -> Result<(), String> {
    let f = e.function.as_ref().map_err(|w| format!("unreadable: {}", w))?;
    let orig = find(e.address).ok_or("no original")?;
    let (dd, v) = decompile::decompile_and_prove_retrying(ctx, &orig);
    match v {
        check::Verdict::Proved => {}
        check::Verdict::Differs(w) => return Err(format!("the decompiled function is not proved: differs {}", w)),
        check::Verdict::Unknown(w) => return Err(format!("the decompiled function is not proved: {}", w)),
    }
    let v = check::verify_cpp(ctx, &orig, &dd, f);
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
    let handles: Vec<_> = (0..threads)
        .map(|t| {
            let exports = exports.clone();
            let broken = broken.clone();
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
                            (e.address, prove_export(&ctx, e))
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
        Some("signatures") => signatures_all(args.get(2).map(|s| s.as_str()).unwrap_or("build/acnl/decomp_signatures.txt"),
                                             args.get(3).and_then(|s| s.parse().ok()).unwrap_or(usize::MAX),
                                             args.get(4).and_then(|s| s.parse().ok()).unwrap_or(8)),
        Some("prove-cpp") => prove_cpp(&args[2], args.get(3).map(|s| s.as_str()).filter(|s| *s != "-"),
                                       args.get(4).and_then(|s| s.parse().ok()).unwrap_or(8)),
        Some("sym-all") => sym_all(args.get(2).and_then(|s| s.parse().ok()).unwrap_or(usize::MAX)),
        _ => eprintln!("usage: decomp decompile ADDR... | check-all [N] [THREADS] | dump [OUT] [N] [THREADS] | selftest ADDR... | bisect ADDR | parse-all | sym-all [N]"),
    }
}
