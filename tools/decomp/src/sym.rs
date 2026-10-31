// Symbolic execution of a Function (original or decompiled) with Z3, giving the meaning both are compared by.
//
// Values are bit-vectors; floats are their bit patterns, and float arithmetic, comparisons and conversions are
// uninterpreted functions (the decompiler never rearranges them, so equal operations on equal inputs suffice).
// Guest memory is an array from 32-bit addresses to bytes. A guest call is opaque: its results (r0-r3, r12, lr, the
// flags, s0-s15, memory and a "world" token for effects outside guest memory) are uninterpreted functions of its
// target, r0-r3, sp, memory and world. Assumptions of the model (calling convention): callees keep r4-r11 and sp,
// return normally, and leave the caller's register save area alone.
use crate::ast::*;
use std::collections::{BTreeMap, HashMap, HashSet};
use z3::ast::{Array, Ast, Bool, BV};
use z3::{Context, FuncDecl, Sort};

pub type Result<T> = std::result::Result<T, String>;

#[derive(Clone)]
pub struct State<'c> {
    pub vars: BTreeMap<String, (Ty, BV<'c>)>,
    pub cpu: BTreeMap<String, BV<'c>>, // CpuField keys ("r0", "s3", "zf", "pc" ...)
    pub mem: Array<'c>,
    pub world: BV<'c>,
    // the register save area, by byte offset below the entry sp: a region of its own, reached only by accesses at a
    // known distance from the entry sp (pushes and pops); accesses through pointers and callees never reach it (the
    // calling convention: compiled code never reads saved registers through a pointer)
    pub frame: BTreeMap<u32, BV<'c>>,
}

pub fn cpu_key(f: &CpuField) -> String {
    match f {
        CpuField::R(n) => format!("r{}", n),
        CpuField::S(n) => format!("s{}", n),
        CpuField::Flag(s) => s.clone(),
        CpuField::Fpscr => "fpscr".into(),
        CpuField::Tls => "tls".into(),
        CpuField::Pc => "pc".into(),
    }
}

pub fn cpu_keys() -> Vec<String> {
    let mut v: Vec<String> = (0..16).map(|i| format!("r{}", i)).collect();
    v.extend((0..32).map(|i| format!("s{}", i)));
    v.extend(["nf", "zf", "cf", "vf", "qf", "ge", "fpscr", "tls", "pc"].iter().map(|s| s.to_string()));
    v
}

pub struct Sym<'c> {
    pub ctx: &'c Context,
    pub save_slots: Vec<u32>, // offsets below the entry sp of the caller's register save area (bytes)
    pub entry_sp: Option<BV<'c>>,
    calls: usize,
    pub assumptions: Vec<Bool<'c>>,
    // while set, every memory access through a pointer is assumed to stay out of the save area (compiled code never
    // reaches saved registers that way); accesses at a known distance from the entry sp are exact and need no assumption
    pub guard_save_area: bool,
}

// One instruction of the flattened program.
#[derive(Clone, Debug)]
enum Ins {
    Do(Stmt),
    Jump(String),
    JumpIf(Expr, String),
    Label(String),
    Switch(Expr, Vec<(u64, String)>),
}

fn flatten(stmts: &[Stmt], out: &mut Vec<Ins>, fresh: &mut usize) {
    for s in stmts {
        match s {
            Stmt::If(c, a, b) => {
                *fresh += 1;
                let (else_l, end_l) = (format!("__else{}", fresh), format!("__end{}", fresh));
                out.push(Ins::JumpIf(Expr::Un(UnOp::LNot, Box::new(c.clone())), else_l.clone()));
                flatten(a, out, fresh);
                out.push(Ins::Jump(end_l.clone()));
                out.push(Ins::Label(else_l));
                flatten(b, out, fresh);
                out.push(Ins::Label(end_l));
            }
            Stmt::Goto(l) => out.push(Ins::Jump(l.clone())),
            Stmt::Label(l) => out.push(Ins::Label(l.clone())),
            Stmt::Switch(e, cases) => out.push(Ins::Switch(e.clone(), cases.clone())),
            Stmt::While { top, test, body, check, cond } => {
                if let Some(t) = test {
                    out.push(Ins::Jump(t.clone()));
                }
                out.push(Ins::Label(top.clone()));
                flatten(body, out, fresh);
                if let Some(t) = test {
                    out.push(Ins::Label(t.clone()));
                }
                flatten(check, out, fresh);
                out.push(Ins::JumpIf(cond.clone(), top.clone()));
            }
            other => out.push(Ins::Do(other.clone())),
        }
    }
}

struct Block {
    ins: Vec<Ins>,
    // successors are computed during execution
}

// Basic blocks: a label starts one, a jump or return ends one. Block 0 is the entry.
fn blocks(prog: Vec<Ins>) -> (Vec<Block>, HashMap<String, usize>) {
    let mut bl: Vec<Block> = vec![Block { ins: vec![] }];
    let mut labels = HashMap::new();
    for ins in prog {
        match &ins {
            Ins::Label(l) => {
                if !bl.last().unwrap().ins.is_empty() {
                    bl.push(Block { ins: vec![] });
                }
                labels.insert(l.clone(), bl.len() - 1);
            }
            Ins::Jump(_) | Ins::Switch(..) | Ins::Do(Stmt::Return) | Ins::Do(Stmt::GuestCall(_, true))
            | Ins::Do(Stmt::Dispatch(true)) => {
                bl.last_mut().unwrap().ins.push(ins);
                bl.push(Block { ins: vec![] });
                continue;
            }
            _ => {}
        }
        if !matches!(ins, Ins::Label(_)) {
            bl.last_mut().unwrap().ins.push(ins);
        }
    }
    (bl, labels)
}

fn successors(bl: &[Block], labels: &HashMap<String, usize>) -> Vec<Vec<usize>> {
    let mut succ: Vec<Vec<usize>> = vec![vec![]; bl.len()];
    for (b, block) in bl.iter().enumerate() {
        let mut falls = true;
        for i in &block.ins {
            match i {
                Ins::Jump(l) => {
                    if let Some(&t) = labels.get(l) {
                        succ[b].push(t);
                    }
                    falls = false;
                }
                Ins::JumpIf(_, l) => {
                    if let Some(&t) = labels.get(l) {
                        succ[b].push(t);
                    }
                }
                Ins::Switch(_, c) => {
                    for (_, l) in c {
                        if let Some(&t) = labels.get(l) {
                            succ[b].push(t);
                        }
                    }
                }
                Ins::Do(Stmt::Return) | Ins::Do(Stmt::GuestCall(_, true)) | Ins::Do(Stmt::Dispatch(true)) => falls = false,
                _ => {}
            }
            if !falls {
                break;
            }
        }
        if falls && b + 1 < bl.len() {
            succ[b].push(b + 1);
        }
    }
    succ
}

pub struct Exit<'c> {
    pub cond: Bool<'c>,
    pub state: State<'c>,
}

impl<'c> Sym<'c> {
    pub fn new(ctx: &'c Context) -> Self {
        Sym { ctx, save_slots: vec![], entry_sp: None, calls: 0, assumptions: vec![], guard_save_area: false }
    }

    pub fn bv(&self, v: u64, bits: u32) -> BV<'c> {
        BV::from_u64(self.ctx, v, bits)
    }

    fn uf(&self, name: &str, args: &[&BV<'c>], bits: u32) -> BV<'c> {
        let sorts: Vec<Sort> = args.iter().map(|a| Sort::bitvector(self.ctx, a.get_size())).collect();
        let refs: Vec<&Sort> = sorts.iter().collect();
        let f = FuncDecl::new(self.ctx, name, &refs, &Sort::bitvector(self.ctx, bits));
        let dargs: Vec<&dyn Ast<'c>> = args.iter().map(|a| *a as &dyn Ast<'c>).collect();
        f.apply(&dargs).as_bv().unwrap()
    }

    fn uf_mem(&self, name: &str, args: &[&BV<'c>], mem: &Array<'c>) -> Array<'c> {
        let mut sorts: Vec<Sort> = args.iter().map(|a| Sort::bitvector(self.ctx, a.get_size())).collect();
        let msort = Sort::array(self.ctx, &Sort::bitvector(self.ctx, 32), &Sort::bitvector(self.ctx, 8));
        sorts.push(msort.clone());
        let refs: Vec<&Sort> = sorts.iter().collect();
        let f = FuncDecl::new(self.ctx, name, &refs, &msort);
        let mut dargs: Vec<&dyn Ast<'c>> = args.iter().map(|a| *a as &dyn Ast<'c>).collect();
        dargs.push(mem);
        f.apply(&dargs).as_array().unwrap()
    }

    pub fn initial(&self, prefix: &str) -> State<'c> {
        let mut cpu = BTreeMap::new();
        for k in cpu_keys() {
            let bits = 32;
            cpu.insert(k.clone(), BV::new_const(self.ctx, format!("{}{}", prefix, k), bits));
        }
        let msort = Sort::bitvector(self.ctx, 8);
        let asort = Sort::bitvector(self.ctx, 32);
        State {
            vars: BTreeMap::new(),
            cpu,
            mem: Array::new_const(self.ctx, format!("{}mem", prefix), &asort, &msort),
            world: BV::new_const(self.ctx, format!("{}world", prefix), 32),
            frame: BTreeMap::new(),
        }
    }

    // ---- expressions

    fn resize(&self, v: &BV<'c>, from: Ty, to: Ty) -> BV<'c> {
        let (fb, tb) = (from.bits(), to.bits());
        if from.float() != to.float() && from != Ty::Bool && to != Ty::Bool {
            // int <-> float conversion (C semantics): opaque
            let name = format!("cvt_{}_{}", from.c_name(), to.c_name());
            return self.uf(&name, &[v], tb);
        }
        if from.float() && to.float() && from != to {
            return self.uf(&format!("cvt_{}_{}", from.c_name(), to.c_name()), &[v], tb);
        }
        if to == Ty::Bool {
            return v._eq(&self.bv(0, fb)).not().ite(&self.bv(1, 1), &self.bv(0, 1));
        }
        if tb == fb {
            v.clone()
        } else if tb < fb {
            v.extract(tb - 1, 0)
        } else if from.signed() {
            v.sign_ext(tb - fb)
        } else {
            v.zero_ext(tb - fb)
        }
    }

    fn promote(t: Ty) -> Ty {
        match t {
            Ty::U8 | Ty::U16 | Ty::S8 | Ty::S16 | Ty::Bool => Ty::S32,
            other => other,
        }
    }

    fn common(a: Ty, b: Ty) -> Ty {
        let (a, b) = (Self::promote(a), Self::promote(b));
        if a == Ty::F64 || b == Ty::F64 {
            return Ty::F64;
        }
        if a == Ty::F32 || b == Ty::F32 {
            return Ty::F32;
        }
        if a.bits() == 64 || b.bits() == 64 {
            if a == Ty::U64 || b == Ty::U64 {
                return Ty::U64;
            }
            return Ty::S64;
        }
        if a == Ty::U32 || b == Ty::U32 {
            Ty::U32
        } else {
            Ty::S32
        }
    }

    fn truth(&self, v: &BV<'c>) -> Bool<'c> {
        v._eq(&self.bv(0, v.get_size())).not()
    }

    fn of_bool(&self, b: &Bool<'c>) -> BV<'c> {
        b.ite(&self.bv(1, 32), &self.bv(0, 32))
    }

    // whether the save area is modelled as a region of its own (State::frame); DECOMP_FRAME=0: one memory, with an
    // assumption per access through a pointer instead (slower)
    fn frame_model(&self) -> bool {
        !self.save_slots.is_empty() && self.entry_sp.is_some() && std::env::var("DECOMP_FRAME").map_or(true, |x| x != "0")
    }

    // the save area byte at this address, if it is one (a known distance below the entry sp)
    fn frame_offset(&self, a: &BV<'c>) -> Option<u32> {
        if !self.frame_model() {
            return None;
        }
        let d = self.entry_sp.as_ref().unwrap().bvsub(a).simplify().as_u64()?;
        let d = u32::try_from(d).ok()?;
        if self.save_slots.contains(&d) {
            Some(d)
        } else {
            None
        }
    }

    // the save area of a state from its memory (at the entry: what the bytes there hold)
    pub fn init_frame(&self, st: &mut State<'c>) {
        if !self.frame_model() {
            return;
        }
        let esp = self.entry_sp.clone().unwrap();
        for k in &self.save_slots {
            let a = esp.bvsub(&self.bv(*k as u64, 32));
            st.frame.insert(*k, st.mem.select(&a).as_bv().unwrap());
        }
    }

    pub fn load_st(&self, st: &State<'c>, addr: &BV<'c>, bytes: u32) -> BV<'c> {
        if !self.frame_model() {
            return self.load(&st.mem, addr, bytes);
        }
        let mut v: Option<BV> = None;
        for i in 0..bytes {
            let a = addr.bvadd(&self.bv(i as u64, 32));
            let b = match self.frame_offset(&a).and_then(|k| st.frame.get(&k)) {
                Some(b) => b.clone(),
                None => st.mem.select(&a).as_bv().unwrap(),
            };
            v = Some(match v {
                None => b,
                Some(lo) => b.concat(&lo),
            });
        }
        v.unwrap()
    }

    pub fn store_st(&self, st: &mut State<'c>, addr: &BV<'c>, val: &BV<'c>) {
        if !self.frame_model() {
            st.mem = self.store(&st.mem, addr, val);
            return;
        }
        let (addr, val) = (self.norm(addr), self.norm(val));
        for i in 0..val.get_size() / 8 {
            let a = addr.bvadd(&self.bv(i as u64, 32));
            let byte = val.extract(i * 8 + 7, i * 8);
            match self.frame_offset(&a) {
                Some(k) => {
                    st.frame.insert(k, byte);
                }
                None => st.mem = st.mem.store(&a, &byte),
            }
        }
    }

    fn guard(&mut self, addr: &BV<'c>, bytes: u32) {
        if !self.guard_save_area || self.save_slots.is_empty() || self.frame_model() {
            return;
        }
        let Some(esp) = self.entry_sp.clone() else { return };
        // an access at a known distance from the entry sp (pushes, pops, locals) is exact: no assumption needed
        if addr.bvsub(&esp).simplify().as_u64().is_some() {
            return;
        }
        let below = *self.save_slots.iter().max().unwrap() as u64;
        // [addr, addr + bytes) does not meet [esp - below, esp)
        let lo = esp.bvsub(&self.bv(below, 32));
        let end = addr.bvadd(&self.bv(bytes as u64, 32));
        let ok = Bool::or(self.ctx, &[&end.bvule(&lo), &addr.bvuge(&esp)]);
        self.assumptions.push(ok);
    }

    pub fn load(&self, mem: &Array<'c>, addr: &BV<'c>, bytes: u32) -> BV<'c> {
        let mut v: Option<BV> = None;
        for i in 0..bytes {
            let a = addr.bvadd(&self.bv(i as u64, 32));
            let b = mem.select(&a).as_bv().unwrap();
            v = Some(match v {
                None => b,
                Some(lo) => b.concat(&lo),
            });
        }
        v.unwrap()
    }

    // equal values as one term where Z3's simplifier can tell (constants folded, casts of casts): the two programs'
    // states are then often the same terms, which the solver compares at once (DECOMP_NORM=0 turns it off)
    pub fn norm(&self, v: &BV<'c>) -> BV<'c> {
        if std::env::var("DECOMP_NORM").map_or(true, |x| x != "0") {
            v.simplify()
        } else {
            v.clone()
        }
    }

    pub fn store(&self, mem: &Array<'c>, addr: &BV<'c>, val: &BV<'c>) -> Array<'c> {
        let (addr, val) = (&self.norm(addr), &self.norm(val));
        let bytes = val.get_size() / 8;
        let mut m = mem.clone();
        for i in 0..bytes {
            let a = addr.bvadd(&self.bv(i as u64, 32));
            m = m.store(&a, &val.extract(i * 8 + 7, i * 8));
        }
        m
    }

    pub fn eval(&mut self, st: &mut State<'c>, e: &Expr) -> Result<(Ty, BV<'c>)> {
        Ok(match e {
            Expr::Num(v, ty) => (*ty, self.bv(*v, ty.bits())),
            Expr::Float(v, ty) => {
                if *ty == Ty::F32 {
                    (Ty::F32, self.bv((*v as f32).to_bits() as u64, 32))
                } else {
                    (Ty::F64, self.bv(v.to_bits(), 64))
                }
            }
            Expr::Var(n) => st.vars.get(n).cloned().ok_or_else(|| format!("unknown variable {}", n))?,
            Expr::Cpu(f) => {
                let ty = match f {
                    CpuField::S(_) => Ty::F32,
                    _ => Ty::U32,
                };
                let k = cpu_key(f);
                (ty, st.cpu.get(&k).cloned().ok_or_else(|| format!("CPU field {}", k))?)
            }
            Expr::Un(op, a) => {
                let (t, v) = self.eval(st, a)?;
                if t.float() {
                    return match op {
                        UnOp::Neg => Ok((t, self.uf(&format!("fneg_{}", t.c_name()), &[&v], t.bits()))),
                        UnOp::LNot => {
                            let z = self.uf(&format!("fiszero_{}", t.c_name()), &[&v], 1);
                            Ok((Ty::S32, z.zero_ext(31)))
                        }
                        UnOp::Not => Err("~ on a float".into()),
                    };
                }
                match op {
                    UnOp::LNot => {
                        let z = v._eq(&self.bv(0, t.bits()));
                        (Ty::S32, self.of_bool(&z))
                    }
                    _ => {
                        let pt = Self::promote(t);
                        let pv = self.resize(&v, t, pt);
                        (pt, if *op == UnOp::Neg { pv.bvneg() } else { pv.bvnot() })
                    }
                }
            }
            Expr::Bin(op, a, b) => {
                if matches!(op, BinOp::LAnd | BinOp::LOr) {
                    let (ta, va) = self.eval(st, a)?;
                    let (tb, vb) = self.eval(st, b)?;
                    let (x, y) = (self.truth_ty(&va, ta), self.truth_ty(&vb, tb));
                    let r = if *op == BinOp::LAnd { Bool::and(self.ctx, &[&x, &y]) } else { Bool::or(self.ctx, &[&x, &y]) };
                    return Ok((Ty::S32, self.of_bool(&r)));
                }
                let (ta, va) = self.eval(st, a)?;
                let (tb, vb) = self.eval(st, b)?;
                if matches!(op, BinOp::Shl | BinOp::Shr) {
                    let pt = Self::promote(ta);
                    let pv = self.resize(&va, ta, pt);
                    let amount = self.resize(&vb, tb, if pt.bits() == 64 { Ty::U64 } else { Ty::U32 });
                    let r = match op {
                        BinOp::Shl => pv.bvshl(&amount),
                        _ if pt.signed() => pv.bvashr(&amount),
                        _ => pv.bvlshr(&amount),
                    };
                    return Ok((pt, r));
                }
                let ct = Self::common(ta, tb);
                let (x, y) = (self.resize(&va, ta, ct), self.resize(&vb, tb, ct));
                if ct.float() {
                    let name = format!("f{:?}_{}", op, ct.c_name());
                    return Ok(match op {
                        BinOp::Eq | BinOp::Ne | BinOp::Lt | BinOp::Le | BinOp::Gt | BinOp::Ge => {
                            (Ty::S32, self.uf(&name, &[&x, &y], 1).zero_ext(31))
                        }
                        _ => (ct, self.uf(&name, &[&x, &y], ct.bits())),
                    });
                }
                let s = ct.signed();
                match op {
                    BinOp::Add => (ct, x.bvadd(&y)),
                    BinOp::Sub => (ct, x.bvsub(&y)),
                    BinOp::Mul => (ct, x.bvmul(&y)),
                    BinOp::Div => (ct, if s { x.bvsdiv(&y) } else { x.bvudiv(&y) }),
                    BinOp::Rem => (ct, if s { x.bvsrem(&y) } else { x.bvurem(&y) }),
                    BinOp::And => (ct, x.bvand(&y)),
                    BinOp::Or => (ct, x.bvor(&y)),
                    BinOp::Xor => (ct, x.bvxor(&y)),
                    BinOp::Eq => (Ty::S32, self.of_bool(&x._eq(&y))),
                    BinOp::Ne => (Ty::S32, self.of_bool(&x._eq(&y).not())),
                    BinOp::Lt => (Ty::S32, self.of_bool(&if s { x.bvslt(&y) } else { x.bvult(&y) })),
                    BinOp::Le => (Ty::S32, self.of_bool(&if s { x.bvsle(&y) } else { x.bvule(&y) })),
                    BinOp::Gt => (Ty::S32, self.of_bool(&if s { x.bvsgt(&y) } else { x.bvugt(&y) })),
                    BinOp::Ge => (Ty::S32, self.of_bool(&if s { x.bvsge(&y) } else { x.bvuge(&y) })),
                    BinOp::Shl | BinOp::Shr | BinOp::LAnd | BinOp::LOr => unreachable!(),
                }
            }
            Expr::Cast(ty, a) => {
                let (t, v) = self.eval(st, a)?;
                (*ty, self.resize(&v, t, *ty))
            }
            Expr::Cond(c, a, b) => {
                let (tc, vc) = self.eval(st, c)?;
                let (ta, va) = self.eval(st, a)?;
                let (tb, vb) = self.eval(st, b)?;
                let ct = if ta == tb { ta } else { Self::common(ta, tb) };
                let cond = self.truth_ty(&vc, tc);
                (ct, cond.ite(&self.resize(&va, ta, ct), &self.resize(&vb, tb, ct)))
            }
            Expr::Load(ty, a) => {
                let (t, v) = self.eval(st, a)?;
                let addr = self.resize(&v, t, Ty::U32);
                self.guard(&addr, ty.bits() / 8);
                (*ty, self.load_st(st, &addr, ty.bits() / 8))
            }
            Expr::Call(name, args) => self.helper(st, name, args)?,
            Expr::AddrOf(n) => return Err(format!("&{} outside a helper call", n)),
        })
    }

    fn truth_ty(&self, v: &BV<'c>, t: Ty) -> Bool<'c> {
        if t.float() {
            self.uf(&format!("fiszero_{}", t.c_name()), &[v], 1)._eq(&self.bv(0, 1))
        } else {
            self.truth(v)
        }
    }

    // the runtime's helper functions (runtime/cpu.h)
    fn helper(&mut self, st: &mut State<'c>, name: &str, args: &[Expr]) -> Result<(Ty, BV<'c>)> {
        let mut vals = Vec::new();
        let mut outs = Vec::new();
        for a in args {
            if let Expr::AddrOf(v) = a {
                outs.push(v.clone());
                continue;
            }
            vals.push(self.eval(st, a)?);
        }
        let u32v = |s: &Self, i: usize| -> BV<'c> { s.resize(&vals[i].1, vals[i].0, Ty::U32) };
        if !outs.is_empty() {
            // helpers with a second result through a pointer (carry, saturation): opaque, both results
            let ins: Vec<BV> = vals.iter().map(|(t, v)| self.resize(v, *t, if t.bits() == 64 { Ty::U64 } else { Ty::U32 })).collect();
            let refs: Vec<&BV> = ins.iter().collect();
            for (k, o) in outs.iter().enumerate() {
                let (ot, ov) = st.vars.get(o).cloned().ok_or_else(|| format!("unknown variable {}", o))?;
                let mut r = refs.clone();
                r.push(&ov);
                let nv = self.uf(&format!("{}_out{}", name, k), &r, ot.bits());
                st.vars.insert(o.clone(), (ot, nv));
            }
            let mut r = refs.clone();
            let old: Vec<BV> = outs.iter().map(|o| st.vars[o].1.clone()).collect();
            r.extend(old.iter());
            return Ok((Ty::U32, self.uf(name, &r, 32)));
        }
        Ok(match name {
            "F2U" => (Ty::U32, vals[0].1.clone()),
            "D2B" => (Ty::U64, vals[0].1.clone()), // a double's bits
            "U2F" => (Ty::F32, u32v(self, 0)),
            "ror32" | "ror_r" => {
                let x = u32v(self, 0);
                let n = u32v(self, 1).bvand(&self.bv(31, 32));
                (Ty::U32, x.bvrotr(&n))
            }
            "lsl_r" | "lsr_r" | "asr_r" => {
                let x = u32v(self, 0);
                let a = u32v(self, 1);
                let big = a.bvuge(&self.bv(32, 32));
                let r = match name {
                    "lsl_r" => big.ite(&self.bv(0, 32), &x.bvshl(&a)),
                    "lsr_r" => big.ite(&self.bv(0, 32), &x.bvlshr(&a)),
                    _ => big.ite(&x.bvashr(&self.bv(31, 32)), &x.bvashr(&a)),
                };
                (Ty::U32, r)
            }
            "sxtb" => (Ty::U32, u32v(self, 0).extract(7, 0).sign_ext(24)),
            "sxth" => (Ty::U32, u32v(self, 0).extract(15, 0).sign_ext(16)),
            "uxtb" => (Ty::U32, u32v(self, 0).extract(7, 0).zero_ext(24)),
            "uxth" => (Ty::U32, u32v(self, 0).extract(15, 0).zero_ext(16)),
            _ => {
                // anything else is a pure function of its arguments
                let ret = match name {
                    "D2F" => Ty::F64,
                    "sqrtf" | "fabsf" | "vfp_f" => Ty::F32,
                    "sqrt" | "fabs" => Ty::F64,
                    _ => Ty::U32,
                };
                let refs: Vec<&BV> = vals.iter().map(|v| &v.1).collect();
                (ret, self.uf(name, &refs, ret.bits()))
            }
        })
    }

    // ---- statements

    fn assign(&mut self, st: &mut State<'c>, name: &str, t: Ty, v: BV<'c>) -> Result<()> {
        let (vt, _) = st.vars.get(name).cloned().ok_or_else(|| format!("assignment to undeclared {}", name))?;
        let nv = self.norm(&self.resize(&v, t, vt));
        st.vars.insert(name.to_string(), (vt, nv));
        Ok(())
    }

    fn sync_out(&self, st: &mut State<'c>, synced: &[(String, CpuField)]) {
        for (v, f) in synced {
            if let Some((t, val)) = st.vars.get(v) {
                let nv = self.resize(val, *t, Ty::U32);
                st.cpu.insert(cpu_key(f), nv);
            }
        }
    }

    fn sync_in(&self, st: &mut State<'c>, synced: &[(String, CpuField)]) {
        for (v, f) in synced {
            if let (Some((t, _)), Some(cv)) = (st.vars.get(v).cloned(), st.cpu.get(&cpu_key(f)).cloned()) {
                let nv = self.resize(&cv, Ty::U32, t);
                st.vars.insert(v.clone(), (t, nv));
            }
        }
    }

    // an opaque guest call: the calling convention's view of what changes
    pub fn call(&mut self, st: &mut State<'c>, target: &BV<'c>) {
        self.calls += 1;
        // the caller's save area is not the callee's business: it sees a canonical content, which is put back after
        let saved: Vec<(BV, BV)> = match &self.entry_sp {
            Some(_) if self.frame_model() => vec![],
            Some(esp) => self
                .save_slots
                .iter()
                .map(|off| {
                    let a = esp.bvsub(&self.bv(*off as u64, 32));
                    (a.clone(), st.mem.select(&a).as_bv().unwrap())
                })
                .collect(),
            None => vec![],
        };
        let mut seen = st.mem.clone();
        for (a, _) in &saved {
            seen = seen.store(a, &self.bv(0, 8));
        }
        let digest = self.uf_mem_digest(&seen);
        let r: Vec<BV> = (0..4).map(|i| st.cpu[&format!("r{}", i)].clone()).collect();
        let sp = st.cpu["r13"].clone();
        let mut args: Vec<&BV> = vec![target];
        args.extend(r.iter());
        args.push(&sp);
        let fl: Vec<BV> = (0..16).map(|i| st.cpu[&format!("s{}", i)].clone()).collect();
        args.extend(fl.iter());  // float arguments
        args.push(&st.world);
        // a callee with a proved signature (signatures.rs): memory, effects and the results a caller observes depend on
        // its argument registers only (each result also on its own value: a register it leaves alone passes through)
        let sig = target.simplify().as_u64().and_then(|t| crate::signatures::of(t as u32));
        let few: Option<Vec<BV>> = sig.map(|regs| regs.iter().map(|k| st.cpu[k].clone()).collect());
        let mut fewer: Vec<&BV> = vec![target];
        if let Some(v) = &few {
            fewer.extend(v.iter());
            fewer.push(&sp);
            fewer.push(&st.world);
        }
        let mut m = match &few {
            Some(_) => self.uf_mem("call_mem_sig", &fewer, &seen),
            None => self.uf_mem("call_mem", &args, &seen),
        };
        for (a, old) in &saved {
            m = m.store(a, old);
        }
        args.push(&digest);
        fewer.push(&digest);
        let mut out = Vec::new();
        for k in ["r0", "r1", "r2", "r3", "r12", "r14", "nf", "zf", "cf", "vf", "qf", "ge", "fpscr"] {
            let v = match &few {
                Some(_) if crate::signatures::RESULTS.contains(&k) => {
                    let own = st.cpu[k].clone();
                    let mut a = fewer.clone();
                    a.push(&own);
                    self.uf(&format!("call_{}_sig", k), &a, 32)
                }
                _ => self.uf(&format!("call_{}", k), &args, 32),
            };
            out.push((k.to_string(), v));
        }
        for i in 0..16 {
            let k = format!("s{}", i);
            let v = match &few {
                Some(_) if crate::signatures::RESULTS.contains(&k.as_str()) => {
                    let own = st.cpu[&k].clone();
                    let mut a = fewer.clone();
                    a.push(&own);
                    self.uf(&format!("call_{}_sig", k), &a, 32)
                }
                _ => self.uf(&format!("call_{}", k), &args, 32),
            };
            out.push((k, v));
        }
        let w = match &few {
            Some(_) => self.uf("call_world_sig", &fewer, 32),
            None => self.uf("call_world", &args, 32),
        };
        for (k, v) in out {
            st.cpu.insert(k, v);
        }
        st.world = w;
        st.mem = m;
    }

    // a system call (rt_svc): the kernel's view of what changes, r0-r7 (its handlers write r0-r5), guest memory and
    // the world (other threads run meanwhile); it reads r0-r7, sp, the thread's TLS (IPC buffers), memory and the
    // world, and leaves the caller's register save area alone like a callee
    pub fn svc(&mut self, st: &mut State<'c>, n: u32) {
        let saved: Vec<(BV, BV)> = match &self.entry_sp {
            Some(_) if self.frame_model() => vec![],
            Some(esp) => self
                .save_slots
                .iter()
                .map(|off| {
                    let a = esp.bvsub(&self.bv(*off as u64, 32));
                    (a.clone(), st.mem.select(&a).as_bv().unwrap())
                })
                .collect(),
            None => vec![],
        };
        let mut seen = st.mem.clone();
        for (a, _) in &saved {
            seen = seen.store(a, &self.bv(0, 8));
        }
        let digest = self.uf_mem_digest(&seen);
        let number = self.bv(n as u64, 32);
        let regs: Vec<BV> = (0..8).map(|i| st.cpu[&format!("r{}", i)].clone()).collect();
        let (sp, tls) = (st.cpu["r13"].clone(), st.cpu["tls"].clone());
        let mut args: Vec<&BV> = vec![&number];
        args.extend(regs.iter());
        args.push(&sp);
        args.push(&tls);
        args.push(&st.world);
        let mut m = self.uf_mem("svc_mem", &args, &seen);
        for (a, old) in &saved {
            m = m.store(a, old);
        }
        args.push(&digest);
        let outs: Vec<(String, BV)> = (0..8).map(|i| (format!("r{}", i), self.uf(&format!("svc_r{}", i), &args, 32))).collect();
        let w = self.uf("svc_world", &args, 32);
        for (k, v) in outs {
            st.cpu.insert(k, v);
        }
        st.world = w;
        st.mem = m;
    }

    fn uf_mem_digest(&self, mem: &Array<'c>) -> BV<'c> {
        let msort = Sort::array(self.ctx, &Sort::bitvector(self.ctx, 32), &Sort::bitvector(self.ctx, 8));
        let f = FuncDecl::new(self.ctx, "mem_digest", &[&msort], &Sort::bitvector(self.ctx, 64));
        f.apply(&[mem]).as_bv().unwrap()
    }

    // Runs a function from `init`; returns the exits (path condition, state) or why it cannot.
    pub fn run(&mut self, f: &Function, init: &State<'c>) -> Result<Vec<Exit<'c>>> {
        let (exits, arrivals) = self.run_segment(f, None, init, &HashSet::new())?;
        if !arrivals.is_empty() {
            return Err("loop".into());
        }
        Ok(exits)
    }

    // The block graph of a function: blocks, label -> block, and the blocks that are loop headers (targets of
    // back edges from the entry's depth-first search).
    pub fn graph(f: &Function) -> (Vec<Vec<usize>>, HashMap<String, usize>, HashSet<usize>) {
        let mut prog = Vec::new();
        let mut fresh = 0;
        flatten(&f.body, &mut prog, &mut fresh);
        let (bl, labels) = blocks(prog);
        let succ = successors(&bl, &labels);
        let mut headers = HashSet::new();
        let mut state = vec![0u8; bl.len()];
        let mut stack: Vec<(usize, usize)> = vec![(0, 0)];
        state[0] = 1;
        while let Some((b, k)) = stack.pop() {
            if k < succ[b].len() {
                stack.push((b, k + 1));
                let t = succ[b][k];
                match state[t] {
                    0 => {
                        state[t] = 1;
                        stack.push((t, 0));
                    }
                    1 => {
                        headers.insert(t);
                    }
                    _ => {}
                }
            } else {
                state[b] = 2;
            }
        }
        (succ, labels, headers)
    }

    // Runs from the entry (start None: the locals are initialised from the CPU) or from the block of a label, up to
    // the exits and the arrivals at the cut blocks (block index, condition, state).
    pub fn run_segment(&mut self, f: &Function, start: Option<usize>, init: &State<'c>, cuts: &HashSet<usize>)
                       -> Result<(Vec<Exit<'c>>, Vec<(usize, Bool<'c>, State<'c>)>)> {
        let mut prog = Vec::new();
        let mut fresh = 0;
        flatten(&f.body, &mut prog, &mut fresh);
        let (bl, labels) = blocks(prog);
        let mut st0 = init.clone();
        if start.is_none() {
            for (t, n, e) in &f.locals {
                let v = match e {
                    Some(e) => {
                        let (et, ev) = self.eval(&mut st0, e)?;
                        self.resize(&ev, et, *t)
                    }
                    None => self.bv(0, t.bits()),
                };
                st0.vars.insert(n.clone(), (*t, v));
            }
            st0.vars.insert("entry".into(), (Ty::U32, self.bv(0, 32)));
        }
        let first = start.unwrap_or(0);
        let mut incoming: Vec<Vec<(Bool<'c>, State<'c>)>> = (0..bl.len()).map(|_| vec![]).collect();
        incoming[first].push((Bool::from_bool(self.ctx, true), st0));
        self.run_blocks(f, &bl, &labels, incoming, first, cuts)
    }

    #[allow(clippy::type_complexity)]
    fn run_blocks(&mut self, f: &Function, bl: &[Block], labels: &HashMap<String, usize>,
                  mut incoming: Vec<Vec<(Bool<'c>, State<'c>)>>, first: usize, cuts: &HashSet<usize>)
                  -> Result<(Vec<Exit<'c>>, Vec<(usize, Bool<'c>, State<'c>)>)> {
        let order = self.topo(bl, labels, first, cuts)?;
        let mut exits = Vec::new();
        let mut arrivals: Vec<(usize, Bool<'c>, State<'c>)> = Vec::new();
        // a jump into a cut block (other than the start of this run) ends the segment there
        macro_rules! arrive {
            ($t:expr, $c:expr, $st:expr) => {{
                let t: usize = $t;
                if cuts.contains(&t) {
                    arrivals.push((t, $c, $st));
                } else {
                    incoming[t].push(($c, $st));
                }
            }};
        }
        for &b in &order {
            let ins = std::mem::take(&mut incoming[b]);
            if ins.is_empty() {
                continue;
            }
            let (pc, mut st) = self.merge(ins);
            let mut k = 0;
            let mut fell = true;
            let mut pc = pc;
            let block = bl[b].ins.clone();
            while k < block.len() {
                match &block[k] {
                    Ins::Do(s) => match s {
                        Stmt::Return | Stmt::GuestCall(_, true) | Stmt::Dispatch(true) => {
                            // a tail call: the callee returns to the lr it was given (the caller's caller)
                            if let Stmt::GuestCall(t, true) = s {
                                self.sync_out(&mut st, &f.synced);
                                let target = self.bv(*t as u64, 32);
                                let lr = st.cpu["r14"].clone();
                                self.call(&mut st, &target);
                                st.cpu.insert("pc".into(), lr);
                            }
                            if let Stmt::Dispatch(true) = s {
                                let target = st.cpu["pc"].clone();
                                let lr = st.cpu["r14"].clone();
                                self.call(&mut st, &target);
                                st.cpu.insert("pc".into(), lr);
                            }
                            exits.push(Exit { cond: pc.clone(), state: st.clone() });
                            fell = false;
                            break;
                        }
                        other => self.exec(&mut st, other, f)?,
                    },
                    Ins::Jump(l) => {
                        let t = *labels.get(l).ok_or_else(|| format!("no label {}", l))?;
                        arrive!(t, pc.clone(), st.clone());
                        fell = false;
                        break;
                    }
                    Ins::JumpIf(c, l) => {
                        let (tc, vc) = self.eval(&mut st, c)?;
                        let cond = self.truth_ty(&vc, tc);
                        let t = *labels.get(l).ok_or_else(|| format!("no label {}", l))?;
                        arrive!(t, Bool::and(self.ctx, &[&pc, &cond]), st.clone());
                        pc = Bool::and(self.ctx, &[&pc, &cond.not()]);
                    }
                    Ins::Switch(e, cases) => {
                        let (te, ve) = self.eval(&mut st, e)?;
                        let v = self.resize(&ve, te, Ty::U64);
                        let mut none = pc.clone();
                        for (kk, l) in cases {
                            let hit = v._eq(&self.bv(*kk, 64));
                            let t = *labels.get(l).ok_or_else(|| format!("no label {}", l))?;
                            arrive!(t, Bool::and(self.ctx, &[&none, &hit]), st.clone());
                            none = Bool::and(self.ctx, &[&none, &hit.not()]);
                        }
                        pc = none;
                    }
                    Ins::Label(_) => {}
                }
                k += 1;
            }
            if fell {
                if b + 1 >= bl.len() {
                    return Err("falls off the end".into());
                }
                arrive!(b + 1, pc, st);
            }
        }
        Ok((exits, arrivals))
    }

    // Topological order of the blocks reachable from `first` without entering a cut block (Err("loop") if a cycle
    // remains).
    fn topo(&self, bl: &[Block], labels: &HashMap<String, usize>, first: usize, cuts: &HashSet<usize>)
            -> Result<Vec<usize>> {
        let succ = successors(bl, labels);
        let mut state = vec![0u8; bl.len()];
        let mut order = Vec::new();
        let mut stack: Vec<(usize, usize)> = vec![(first, 0)];
        state[first] = 1;
        while let Some((b, k)) = stack.pop() {
            if k < succ[b].len() {
                stack.push((b, k + 1));
                let t = succ[b][k];
                if cuts.contains(&t) {
                    continue;
                }
                match state[t] {
                    0 => {
                        state[t] = 1;
                        stack.push((t, 0));
                    }
                    1 => return Err("loop".into()),
                    _ => {}
                }
            } else {
                state[b] = 2;
                order.push(b);
            }
        }
        order.reverse();
        Ok(order)
    }

    fn merge(&self, ins: Vec<(Bool<'c>, State<'c>)>) -> (Bool<'c>, State<'c>) {
        if ins.len() == 1 {
            return ins.into_iter().next().unwrap();
        }
        let conds: Vec<&Bool> = ins.iter().map(|(c, _)| c).collect();
        let pc = Bool::or(self.ctx, &conds);
        let mut st = ins.last().unwrap().1.clone();
        // a variable some paths do not define has an unconstrained value on those paths
        let mut all: BTreeMap<String, Ty> = BTreeMap::new();
        for (_, s) in &ins {
            for (k, (t, _)) in &s.vars {
                all.entry(k.clone()).or_insert(*t);
            }
        }
        for (k, t) in all {
            let value_in = |s: &State<'c>| -> BV<'c> {
                match s.vars.get(&k) {
                    Some((vt, v)) if *vt == t => v.clone(),
                    _ => BV::fresh_const(self.ctx, "undefined", t.bits()),
                }
            };
            let mut v = value_in(&ins.last().unwrap().1);
            for (c, s) in ins.iter().rev().skip(1) {
                v = c.ite(&value_in(s), &v);
            }
            st.vars.insert(k, (t, v));
        }
        let keys: Vec<String> = st.cpu.keys().cloned().collect();
        for k in keys {
            let mut v = st.cpu[&k].clone();
            for (c, s) in ins.iter().rev().skip(1) {
                v = c.ite(&s.cpu[&k], &v);
            }
            st.cpu.insert(k, v);
        }
        let fkeys: Vec<u32> = st.frame.keys().cloned().collect();
        for k in fkeys {
            let mut v = st.frame[&k].clone();
            for (c, s) in ins.iter().rev().skip(1) {
                if let Some(x) = s.frame.get(&k) {
                    v = c.ite(x, &v);
                }
            }
            st.frame.insert(k, v);
        }
        let mut m = st.mem.clone();
        let mut w = st.world.clone();
        for (c, s) in ins.iter().rev().skip(1) {
            m = c.ite(&s.mem, &m);
            w = c.ite(&s.world, &w);
        }
        st.mem = m;
        st.world = w;
        (pc, st)
    }

    fn exec(&mut self, st: &mut State<'c>, s: &Stmt, f: &Function) -> Result<()> {
        match s {
            Stmt::Decl(t, n, e) => {
                let v = match e {
                    Some(e) => {
                        let (et, ev) = self.eval(st, e)?;
                        self.norm(&self.resize(&ev, et, *t))
                    }
                    None => self.bv(0, t.bits()),
                };
                st.vars.insert(n.clone(), (*t, v));
            }
            Stmt::Assign(n, e) => {
                let (t, v) = self.eval(st, e)?;
                self.assign(st, n, t, v)?;
            }
            Stmt::SetCpu(fl, e) => {
                let (t, v) = self.eval(st, e)?;
                let nv = self.resize(&v, t, if matches!(fl, CpuField::S(_)) { Ty::F32 } else { Ty::U32 });
                let nv = self.resize(&nv, if matches!(fl, CpuField::S(_)) { Ty::F32 } else { Ty::U32 }, Ty::U32);
                st.cpu.insert(cpu_key(fl), self.norm(&nv));
            }
            Stmt::Store(ty, a, v) => {
                let (ta, va) = self.eval(st, a)?;
                let (tv, vv) = self.eval(st, v)?;
                let addr = self.resize(&va, ta, Ty::U32);
                let val = self.resize(&vv, tv, *ty);
                self.guard(&addr, ty.bits() / 8);
                self.store_st(st, &addr, &val);
            }
            Stmt::SyncOut => self.sync_out(st, &f.synced),
            Stmt::SyncIn => self.sync_in(st, &f.synced),
            Stmt::GuestCall(t, false) => {
                let target = self.bv(*t as u64, 32);
                self.call(st, &target);
                // calls return normally (to the return address the caller set up)
            }
            Stmt::Dispatch(false) => {
                let target = st.cpu["pc"].clone();
                self.call(st, &target);
            }
            Stmt::ReturnUnlessPc(expected) => {
                // assumption: the callee came back normally
                let (t, v) = self.eval(st, expected)?;
                let e = self.resize(&v, t, Ty::U32);
                st.cpu.insert("pc".into(), e);
            }
            Stmt::Preempt | Stmt::Nop => {}
            Stmt::Svc(n) => self.svc(st, *n),
            Stmt::Unsupported(w) => return Err(format!("unsupported: {}", w)),
            other => return Err(format!("statement {:?}", other)),
        }
        Ok(())
    }
}
