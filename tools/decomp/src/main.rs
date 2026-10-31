mod addresses;
mod ast;
mod check;
mod decompile;
mod flow;
mod inline;
mod parse;
mod print;
mod saves;
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
    let (dd, v) = decompile::decompile_and_prove(&ctx, &orig);
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
                    let (_dd, verdict) = decompile::decompile_and_prove(&ctx, &orig);
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
        Some("selftest") => selftest(&args[2..]),
        Some("sym-all") => sym_all(args.get(2).and_then(|s| s.parse().ok()).unwrap_or(usize::MAX)),
        _ => eprintln!("usage: decomp parse-all | sym-all [N]"),
    }
}
