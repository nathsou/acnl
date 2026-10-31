// The results callers observe, across the program: which of r0, r1, s0 and s1 some caller reads after calling a
// function. A function code can reach through a pointer (the recompiler's pointed.txt) may have callers nobody knows:
// all its results are observed. For the others every caller is a direct call or branch of the program, and a result
// is observed when a caller reads it after the call (or passes it on: a tail call, a register it does not keep),
// computed to a fixed point. The checker compares, and the emitter writes, only observed results (a function whose
// r0 nobody reads is `void`); this rests on the fact computed here (an assumption of every proof that uses it).
use crate::ast::*;
use std::collections::{HashMap, HashSet};

pub const RESULTS: [&str; 4] = ["r0", "r1", "s0", "s1"];

// function address (bit 0 clear) -> the results its callers observe (functions not listed: all of them)
static TABLE: std::sync::OnceLock<std::sync::RwLock<HashMap<u32, HashSet<String>>>> = std::sync::OnceLock::new();

pub fn path() -> String {
    std::env::var("DECOMP_RESULTS").unwrap_or("build/acnl/decomp_results.txt".into())
}

fn table() -> &'static std::sync::RwLock<HashMap<u32, HashSet<String>>> {
    TABLE.get_or_init(|| {
        let text = std::fs::read_to_string(path()).unwrap_or_default();
        let map = text
            .lines()
            .filter_map(|l| {
                let mut w = l.split_whitespace();
                let a = u32::from_str_radix(w.next()?, 16).ok()?;
                Some((a & !1, w.map(|r| r.to_string()).collect()))
            })
            .collect();
        std::sync::RwLock::new(map)
    })
}

pub fn reset(map: HashMap<u32, HashSet<String>>) {
    *table().write().unwrap() = map;
}

// whether a caller may read result `k` (a register that is no result: always)
pub fn observed(address: u32, k: &str) -> bool {
    if !RESULTS.contains(&k) {
        return true;
    }
    table().read().unwrap().get(&(address & !1)).map_or(true, |s| s.contains(k))
}

pub fn unobserved(address: u32) -> HashSet<String> {
    RESULTS.iter().filter(|k| !observed(address, k)).map(|k| k.to_string()).collect()
}

// part of the proof cache's key (the proof of a function depends on what its callers observe)
pub fn key(address: u32) -> u64 {
    let u = unobserved(address);
    RESULTS.iter().enumerate().filter(|(_, k)| u.contains(**k)).map(|(i, _)| 1u64 << (i + 48)).sum()
}

// What a function's calls contribute: for each callee, the results read after the call (or passed on).
pub fn contributions(f: &Function, mine: &HashSet<String>, out: &mut HashMap<u32, HashSet<String>>) {
    let lv = crate::flow::liveness_with(f, false);
    let field_of: HashMap<String, String> = f.synced.iter().map(|(v, fl)| (v.clone(), crate::sym::cpu_key(fl))).collect();
    let kept: HashSet<&String> = field_of.values().collect();
    fn walk(list: &[Stmt], prefix: &[usize], lv: &crate::flow::Liveness, field_of: &HashMap<String, String>,
            kept: &HashSet<&String>, mine: &HashSet<String>, out: &mut HashMap<u32, HashSet<String>>) {
        for (i, s) in list.iter().enumerate() {
            let p: Vec<usize> = [prefix, &[i]].concat();
            match s {
                Stmt::GuestCall(t, tail) => {
                    let set = out.entry(*t & !1).or_default();
                    if *tail {
                        set.extend(mine.iter().cloned());
                        continue;
                    }
                    // what is live after the SI() that follows the call
                    let mut next = p.clone();
                    *next.last_mut().unwrap() += 1;
                    match lv.live_out.get(&next) {
                        Some(live) => {
                            for v in live {
                                if let Some(k) = field_of.get(v) {
                                    if RESULTS.contains(&k.as_str()) {
                                        set.insert(k.clone());
                                    }
                                }
                            }
                        }
                        None => set.extend(RESULTS.iter().map(|k| k.to_string())),
                    }
                    // a result the function does not keep stays in the CPU, and passes on to its own callers
                    for k in RESULTS {
                        if !kept.contains(&k.to_string()) && mine.contains(k) {
                            set.insert(k.to_string());
                        }
                    }
                }
                Stmt::If(_, a, b) => {
                    walk(a, &[p.clone(), vec![0]].concat(), lv, field_of, kept, mine, out);
                    walk(b, &[p.clone(), vec![1]].concat(), lv, field_of, kept, mine, out);
                }
                Stmt::While { body, check, .. } => {
                    walk(body, &[p.clone(), vec![0]].concat(), lv, field_of, kept, mine, out);
                    walk(check, &[p.clone(), vec![1]].concat(), lv, field_of, kept, mine, out);
                }
                _ => {}
            }
        }
    }
    walk(&f.body, &[], &lv, &field_of, &kept, mine, out);
}
