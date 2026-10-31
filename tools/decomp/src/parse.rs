// Parser for the recompiler's generated C (one function at a time). Anything outside the subset becomes
// Stmt::Unsupported, so a function is either understood completely or left alone.
use crate::ast::*;

#[derive(Clone, Debug, PartialEq)]
enum Tok {
    Ident(String),
    Num(u64, bool), // value, has a u/U suffix
    Float(f64),
    Punct(&'static str),
}

const PUNCTS: [&str; 41] = [
    "<<=", ">>=", "->", "++", "--", "<<", ">>", "<=", ">=", "==", "!=", "&&", "||", "+=", "-=", "*=", "/=", "&=", "|=",
    "^=", "%=", "(", ")", "[", "]", "{", "}", ";", ",", "?", ":", "=", "<", ">", "+", "-", "*", "/", "%", "&", "|",
];
const PUNCTS1: [&str; 4] = ["^", "~", "!", "."];

fn lex(src: &str) -> Result<Vec<Tok>, String> {
    let b = src.as_bytes();
    let mut i = 0;
    let mut out = Vec::new();
    'outer: while i < b.len() {
        let ch = b[i] as char;
        if ch.is_whitespace() {
            i += 1;
            continue;
        }
        if src[i..].starts_with("/*") {
            match src[i + 2..].find("*/") {
                Some(e) => {
                    i += e + 4;
                    continue;
                }
                None => return Err("unterminated comment".into()),
            }
        }
        if src[i..].starts_with("//") {
            while i < b.len() && b[i] != b'\n' {
                i += 1;
            }
            continue;
        }
        if ch.is_ascii_alphabetic() || ch == '_' {
            let s = i;
            while i < b.len() && ((b[i] as char).is_ascii_alphanumeric() || b[i] == b'_') {
                i += 1;
            }
            out.push(Tok::Ident(src[s..i].to_string()));
            continue;
        }
        if ch.is_ascii_digit() || (ch == '.' && i + 1 < b.len() && (b[i + 1] as char).is_ascii_digit()) {
            let s = i;
            if src[i..].starts_with("0x") || src[i..].starts_with("0X") {
                i += 2;
                while i < b.len() && (b[i] as char).is_ascii_hexdigit() {
                    i += 1;
                }
                let v = u64::from_str_radix(&src[s + 2..i], 16).map_err(|e| e.to_string())?;
                let mut unsigned = false;
                while i < b.len() && matches!(b[i], b'u' | b'U' | b'l' | b'L') {
                    unsigned |= matches!(b[i], b'u' | b'U');
                    i += 1;
                }
                out.push(Tok::Num(v, unsigned));
                continue;
            }
            let mut is_float = false;
            while i < b.len() && ((b[i] as char).is_ascii_digit() || b[i] == b'.' || b[i] == b'e' || b[i] == b'E'
                || ((b[i] == b'-' || b[i] == b'+') && (b[i - 1] == b'e' || b[i - 1] == b'E')))
            {
                is_float |= matches!(b[i], b'.' | b'e' | b'E');
                i += 1;
            }
            let text = &src[s..i];
            if is_float {
                let v: f64 = text.parse().map_err(|_| format!("bad float {}", text))?;
                if i < b.len() && (b[i] == b'f' || b[i] == b'F') {
                    i += 1;
                }
                out.push(Tok::Float(v));
            } else {
                let v: u64 = text.parse().map_err(|_| format!("bad number {}", text))?;
                let mut unsigned = false;
                while i < b.len() && matches!(b[i], b'u' | b'U' | b'l' | b'L') {
                    unsigned |= matches!(b[i], b'u' | b'U');
                    i += 1;
                }
                out.push(Tok::Num(v, unsigned));
            }
            continue;
        }
        for p in PUNCTS.iter().chain(PUNCTS1.iter()) {
            if src[i..].starts_with(p) {
                out.push(Tok::Punct(p));
                i += p.len();
                continue 'outer;
            }
        }
        return Err(format!("unexpected character {:?}", ch));
    }
    Ok(out)
}

struct P {
    t: Vec<Tok>,
    i: usize,
}

type R<T> = Result<T, String>;

impl P {
    fn peek(&self) -> Option<&Tok> {
        self.t.get(self.i)
    }
    fn peek_at(&self, k: usize) -> Option<&Tok> {
        self.t.get(self.i + k)
    }
    fn is(&self, p: &str) -> bool {
        matches!(self.peek(), Some(Tok::Punct(q)) if *q == p)
    }
    fn is_ident(&self, s: &str) -> bool {
        matches!(self.peek(), Some(Tok::Ident(q)) if q == s)
    }
    fn eat(&mut self, p: &str) -> bool {
        if self.is(p) {
            self.i += 1;
            true
        } else {
            false
        }
    }
    fn expect(&mut self, p: &str) -> R<()> {
        if self.eat(p) {
            Ok(())
        } else {
            Err(format!("expected {} at {:?}", p, self.peek()))
        }
    }
    fn ident(&mut self) -> R<String> {
        match self.peek().cloned() {
            Some(Tok::Ident(s)) => {
                self.i += 1;
                Ok(s)
            }
            t => Err(format!("expected identifier at {:?}", t)),
        }
    }
    fn num(&mut self) -> R<u64> {
        match self.peek().cloned() {
            Some(Tok::Num(v, _)) => {
                self.i += 1;
                Ok(v)
            }
            t => Err(format!("expected number at {:?}", t)),
        }
    }

    // ---- statements

    fn block(&mut self) -> R<Vec<Stmt>> {
        self.expect("{")?;
        let mut out = Vec::new();
        while !self.is("}") {
            if self.peek().is_none() {
                return Err("unterminated block".into());
            }
            self.stmt(&mut out)?;
        }
        self.expect("}")?;
        Ok(out)
    }

    fn body_or_stmt(&mut self) -> R<Vec<Stmt>> {
        if self.is("{") {
            self.block()
        } else {
            let mut v = Vec::new();
            self.stmt(&mut v)?;
            Ok(v)
        }
    }

    fn guest_target(name: &str) -> Option<u32> {
        let (thumb, hex) = if let Some(h) = name.strip_prefix("f_") {
            (false, h)
        } else if let Some(h) = name.strip_prefix("t_") {
            (true, h)
        } else {
            return None;
        };
        if hex.len() != 8 {
            return None;
        }
        u32::from_str_radix(hex, 16).ok().map(|a| a | thumb as u32)
    }

    fn stmt(&mut self, out: &mut Vec<Stmt>) -> R<()> {
        if self.is("{") {
            let b = self.block()?;
            out.extend(b);
            return Ok(());
        }
        if self.eat(";") {
            return Ok(());
        }
        // labels
        if let (Some(Tok::Ident(l)), Some(Tok::Punct(":"))) = (self.peek().cloned(), self.peek_at(1)) {
            if l != "default" {
                self.i += 2;
                out.push(Stmt::Label(l));
                return Ok(());
            }
        }
        if self.is_ident("goto") {
            self.i += 1;
            let l = self.ident()?;
            self.expect(";")?;
            out.push(Stmt::Goto(l));
            return Ok(());
        }
        if self.is_ident("return") {
            self.i += 1;
            if self.eat(";") {
                out.push(Stmt::Return);
                return Ok(());
            }
            // return f_X(c, 0);  (tail call)
            let name = self.ident()?;
            if name == "rt_dispatch" {
                self.call_args_c()?;
                self.expect(";")?;
                out.push(Stmt::Dispatch(true));
                return Ok(());
            }
            let target = Self::guest_target(&name).ok_or_else(|| format!("return of {}", name))?;
            self.call_args_c()?;
            self.expect(";")?;
            out.push(Stmt::GuestCall(target, true));
            return Ok(());
        }
        if self.is_ident("__attribute__") {
            // __attribute__((musttail)) return f_X(c, 0);
            self.i += 1;
            self.expect("(")?;
            self.expect("(")?;
            self.ident()?;
            self.expect(")")?;
            self.expect(")")?;
            return self.stmt(out);
        }
        if self.is_ident("if") {
            self.i += 1;
            self.expect("(")?;
            // if (__builtin_expect(rt_preempt_flag, 0)) { SO(); c->pc = N; rt_preempt(c); SI(); }
            if self.is_ident("__builtin_expect") && matches!(self.peek_at(2), Some(Tok::Ident(s)) if s == "rt_preempt_flag") {
                let save = self.i;
                self.i += 2;
                self.ident()?;
                self.expect(",")?;
                self.num()?;
                self.expect(")")?;
                self.expect(")")?;
                let body = self.body_or_stmt()?;
                if body.iter().any(|s| matches!(s, Stmt::Preempt)) {
                    out.push(Stmt::Preempt);
                    return Ok(());
                }
                self.i = save;
            }
            // if (__builtin_expect(c->pc != N, 0)) return;
            if self.is_ident("__builtin_expect") {
                let save = self.i;
                self.i += 1;
                self.expect("(")?;
                let e = self.expr()?;
                self.expect(",")?;
                self.num()?;
                self.expect(")")?;
                self.expect(")")?;
                if let Expr::Bin(BinOp::Ne, l, r) = &e {
                    if **l == Expr::Cpu(CpuField::Pc) && self.is_ident("return") {
                        self.i += 1;
                        self.expect(";")?;
                        out.push(Stmt::ReturnUnlessPc((**r).clone()));
                        return Ok(());
                    }
                }
                self.i = save;
            }
            let cond = self.expr()?;
            self.expect(")")?;
            let then = self.body_or_stmt()?;
            let els = if self.is_ident("else") {
                self.i += 1;
                self.body_or_stmt()?
            } else {
                Vec::new()
            };
            out.push(Stmt::If(cond, then, els));
            return Ok(());
        }
        if self.is_ident("switch") {
            self.i += 1;
            self.expect("(")?;
            let e = self.expr()?;
            self.expect(")")?;
            let (cases, _) = self.switch_cases()?;
            out.push(Stmt::Switch(e, cases));
            return Ok(());
        }
        if self.is_ident("do") {
            // do { ... } while (0)
            self.i += 1;
            let b = self.block()?;
            if !self.is_ident("while") {
                return Err("do without while".into());
            }
            self.i += 1;
            self.expect("(")?;
            if self.num()? != 0 {
                return Err("do-while loop".into());
            }
            self.expect(")")?;
            self.expect(";")?;
            out.extend(b);
            return Ok(());
        }
        // declarations
        if let Some(Tok::Ident(t)) = self.peek().cloned() {
            if let Some(ty) = Ty::from_name(&t) {
                if matches!(self.peek_at(1), Some(Tok::Ident(_))) {
                    self.i += 1;
                    loop {
                        let name = self.ident()?;
                        let init = if self.eat("=") { Some(self.expr()?) } else { None };
                        out.push(Stmt::Decl(ty, name, init));
                        if !self.eat(",") {
                            break;
                        }
                    }
                    self.expect(";")?;
                    return Ok(());
                }
            }
        }
        // (void)x;
        if self.is("(") && matches!(self.peek_at(1), Some(Tok::Ident(s)) if s == "void") {
            self.i += 2;
            self.expect(")")?;
            self.expr()?;
            self.expect(";")?;
            out.push(Stmt::Nop);
            return Ok(());
        }
        // calls with a statement meaning
        if let (Some(Tok::Ident(name)), Some(Tok::Punct("("))) = (self.peek().cloned(), self.peek_at(1)) {
            match name.as_str() {
                "SO" | "SI" => {
                    self.i += 2;
                    self.expect(")")?;
                    self.expect(";")?;
                    out.push(if name == "SO" { Stmt::SyncOut } else { Stmt::SyncIn });
                    return Ok(());
                }
                "WR8" | "WR16" | "WR32" | "WR64" => {
                    self.i += 2;
                    let a = self.expr()?;
                    self.expect(",")?;
                    let v = self.expr()?;
                    self.expect(")")?;
                    self.expect(";")?;
                    let ty = match name.as_str() {
                        "WR8" => Ty::U8,
                        "WR16" => Ty::U16,
                        "WR32" => Ty::U32,
                        _ => Ty::U64,
                    };
                    out.push(Stmt::Store(ty, a, v));
                    return Ok(());
                }
                "rt_preempt" => {
                    self.i += 2;
                    self.ident()?;
                    self.expect(")")?;
                    self.expect(";")?;
                    out.push(Stmt::Preempt);
                    return Ok(());
                }
                "rt_dispatch" => {
                    self.i += 2;
                    self.call_args_rest()?;
                    self.expect(";")?;
                    out.push(Stmt::Dispatch(false));
                    return Ok(());
                }
                "rt_svc" => {
                    self.i += 2;
                    self.ident()?;
                    self.expect(",")?;
                    let n = self.num()? as u32;
                    self.expect(")")?;
                    self.expect(";")?;
                    out.push(Stmt::Svc(n));
                    return Ok(());
                }
                _ => {
                    if let Some(target) = Self::guest_target(&name) {
                        self.i += 1;
                        self.call_args_c()?;
                        self.expect(";")?;
                        out.push(Stmt::GuestCall(target, false));
                        return Ok(());
                    }
                }
            }
        }
        // assignments: x = e; c->f = e; x op= e;
        let lhs = self.unary()?;
        for (op, bop) in [
            ("+=", BinOp::Add),
            ("-=", BinOp::Sub),
            ("&=", BinOp::And),
            ("|=", BinOp::Or),
            ("^=", BinOp::Xor),
            ("<<=", BinOp::Shl),
            (">>=", BinOp::Shr),
            ("*=", BinOp::Mul),
        ] {
            if self.eat(op) {
                let r = self.expr()?;
                self.expect(";")?;
                let e = Expr::Bin(bop, Box::new(lhs.clone()), Box::new(r));
                out.push(Self::assign(lhs, e)?);
                return Ok(());
            }
        }
        if self.eat("=") {
            let r = self.expr()?;
            self.expect(";")?;
            out.push(Self::assign(lhs, r)?);
            return Ok(());
        }
        if self.eat(";") {
            // an expression statement: only helper calls with out-pointers are meaningful
            if let Expr::Call(name, _) = &lhs {
                out.push(Stmt::Unsupported(format!("call statement {}", name)));
                return Ok(());
            }
            out.push(Stmt::Nop);
            return Ok(());
        }
        Err(format!("statement at {:?}", self.peek()))
    }

    // { case K: goto L; ... default: break; }
    fn switch_cases(&mut self) -> R<(Vec<(u64, String)>, ())> {
        self.expect("{")?;
        let mut cases = Vec::new();
        while !self.eat("}") {
            if self.is_ident("case") {
                self.i += 1;
                let n = self.num()?;
                self.expect(":")?;
                if !self.is_ident("goto") {
                    return Err("case without goto".into());
                }
                self.i += 1;
                let l = self.ident()?;
                self.expect(";")?;
                cases.push((n, l));
            } else if self.is_ident("default") {
                self.i += 1;
                self.expect(":")?;
                if !self.is_ident("break") {
                    return Err("default without break".into());
                }
                self.i += 1;
                self.expect(";")?;
            } else {
                return Err(format!("switch at {:?}", self.peek()));
            }
        }
        Ok((cases, ()))
    }

    fn assign(lhs: Expr, e: Expr) -> R<Stmt> {
        match lhs {
            Expr::Var(v) => Ok(Stmt::Assign(v, e)),
            Expr::Cpu(f) => Ok(Stmt::SetCpu(f, e)),
            other => Err(format!("assignment to {:?}", other)),
        }
    }

    // (c, N) after a guest function name
    fn call_args_c(&mut self) -> R<()> {
        self.expect("(")?;
        self.call_args_rest()
    }
    fn call_args_rest(&mut self) -> R<()> {
        let mut depth = 1;
        while depth > 0 {
            match self.peek() {
                Some(Tok::Punct("(")) => depth += 1,
                Some(Tok::Punct(")")) => depth -= 1,
                None => return Err("unterminated call".into()),
                _ => {}
            }
            self.i += 1;
        }
        Ok(())
    }

    // ---- expressions

    fn expr(&mut self) -> R<Expr> {
        let c = self.binary(0)?;
        if self.eat("?") {
            let a = self.expr()?;
            self.expect(":")?;
            let b = self.expr()?;
            return Ok(Expr::Cond(Box::new(c), Box::new(a), Box::new(b)));
        }
        Ok(c)
    }

    fn binop(&self) -> Option<(BinOp, u32)> {
        let p = match self.peek() {
            Some(Tok::Punct(p)) => *p,
            _ => return None,
        };
        Some(match p {
            "||" => (BinOp::LOr, 1),
            "&&" => (BinOp::LAnd, 2),
            "|" => (BinOp::Or, 3),
            "^" => (BinOp::Xor, 4),
            "&" => (BinOp::And, 5),
            "==" => (BinOp::Eq, 6),
            "!=" => (BinOp::Ne, 6),
            "<" => (BinOp::Lt, 7),
            "<=" => (BinOp::Le, 7),
            ">" => (BinOp::Gt, 7),
            ">=" => (BinOp::Ge, 7),
            "<<" => (BinOp::Shl, 8),
            ">>" => (BinOp::Shr, 8),
            "+" => (BinOp::Add, 9),
            "-" => (BinOp::Sub, 9),
            "*" => (BinOp::Mul, 10),
            "/" => (BinOp::Div, 10),
            "%" => (BinOp::Rem, 10),
            _ => return None,
        })
    }

    fn binary(&mut self, min: u32) -> R<Expr> {
        let mut l = self.unary()?;
        while let Some((op, prec)) = self.binop() {
            if prec <= min {
                break;
            }
            self.i += 1;
            let r = self.binary(prec)?;
            l = Expr::Bin(op, Box::new(l), Box::new(r));
        }
        Ok(l)
    }

    fn cast_ahead(&self) -> Option<Ty> {
        if !self.is("(") {
            return None;
        }
        if let Some(Tok::Ident(t)) = self.peek_at(1) {
            if let Some(ty) = Ty::from_name(t) {
                if matches!(self.peek_at(2), Some(Tok::Punct(")"))) {
                    return Some(ty);
                }
            }
        }
        None
    }

    fn unary(&mut self) -> R<Expr> {
        if let Some(ty) = self.cast_ahead() {
            self.i += 3;
            let e = self.unary()?;
            return Ok(Expr::Cast(ty, Box::new(e)));
        }
        if self.eat("-") {
            return Ok(Expr::Un(UnOp::Neg, Box::new(self.unary()?)));
        }
        if self.eat("~") {
            return Ok(Expr::Un(UnOp::Not, Box::new(self.unary()?)));
        }
        if self.eat("!") {
            return Ok(Expr::Un(UnOp::LNot, Box::new(self.unary()?)));
        }
        if self.eat("&") {
            return Ok(Expr::AddrOf(self.ident()?));
        }
        self.postfix()
    }

    fn postfix(&mut self) -> R<Expr> {
        match self.peek().cloned() {
            Some(Tok::Num(v, unsigned)) => {
                self.i += 1;
                let ty = if v > 0xffff_ffff {
                    Ty::U64
                } else if unsigned || v > 0x7fff_ffff {
                    Ty::U32
                } else {
                    Ty::S32
                };
                Ok(Expr::Num(v, ty))
            }
            Some(Tok::Float(v)) => {
                self.i += 1;
                Ok(Expr::Float(v, Ty::F64))
            }
            Some(Tok::Punct("(")) => {
                self.i += 1;
                let e = self.expr()?;
                self.expect(")")?;
                Ok(e)
            }
            Some(Tok::Ident(name)) => {
                self.i += 1;
                if name == "c" && self.eat("->") {
                    let f = self.ident()?;
                    return Ok(Expr::Cpu(match f.as_str() {
                        "r" | "s" => {
                            self.expect("[")?;
                            let n = self.num()? as u32;
                            self.expect("]")?;
                            if f == "r" {
                                CpuField::R(n)
                            } else {
                                CpuField::S(n)
                            }
                        }
                        "pc" => CpuField::Pc,
                        "tls" => CpuField::Tls,
                        "fpscr" => CpuField::Fpscr,
                        "nf" | "zf" | "cf" | "vf" | "qf" | "ge" => CpuField::Flag(f),
                        other => return Err(format!("c->{}", other)),
                    }));
                }
                if self.eat("(") {
                    let mut args = Vec::new();
                    if !self.eat(")") {
                        loop {
                            args.push(self.expr()?);
                            if self.eat(")") {
                                break;
                            }
                            self.expect(",")?;
                        }
                    }
                    return Ok(match name.as_str() {
                        "RD8" => Expr::Load(Ty::U8, Box::new(args.remove(0))),
                        "RD16" => Expr::Load(Ty::U16, Box::new(args.remove(0))),
                        "RD32" => Expr::Load(Ty::U32, Box::new(args.remove(0))),
                        "RD64" => Expr::Load(Ty::U64, Box::new(args.remove(0))),
                        "__builtin_expect" => args.remove(0),
                        _ => Expr::Call(name, args),
                    });
                }
                Ok(Expr::Var(name))
            }
            t => Err(format!("expression at {:?}", t)),
        }
    }
}

// The pairs "c->r[0] = r0;" of a SO() macro body.
fn synced_pairs(text: &str) -> R<Vec<(String, CpuField)>> {
    let toks = lex(text)?;
    let mut p = P { t: toks, i: 0 };
    let mut out = Vec::new();
    while p.peek().is_some() {
        if p.is_ident("c") && matches!(p.peek_at(1), Some(Tok::Punct("->"))) {
            let f = p.postfix()?;
            p.expect("=")?;
            let v = p.ident()?;
            p.expect(";")?;
            if let Expr::Cpu(f) = f {
                out.push((v, f));
            }
        } else {
            p.i += 1;
        }
    }
    Ok(out)
}

// One generated function, from "void f_XXXXXXXX(CPU *c, u32 entry) {" to its closing brace.
pub fn function(text: &str) -> R<Function> {
    let first = text.lines().next().ok_or("empty")?;
    let name = first.split('(').next().unwrap().trim_start_matches("void ").trim().to_string();
    let target = P::guest_target(&name).ok_or_else(|| format!("name {}", name))?;
    let mut synced = Vec::new();
    let mut code = String::new();
    for line in text.lines().skip(1) {
        let l = line.trim_start();
        if let Some(rest) = l.strip_prefix("#define SO()") {
            synced = synced_pairs(rest)?;
            continue;
        }
        if l.starts_with('#') {
            continue;
        }
        code.push_str(line);
        code.push('\n');
    }
    // drop the final closing brace of the function
    let end = code.rfind('}').ok_or("no closing brace")?;
    code.truncate(end);
    let code = code.replace("u8 *const M = MEMBASE;", "").replace("(void)M;", "");
    let mut p = P { t: lex(&code)?, i: 0 };
    let mut body = Vec::new();
    let mut entries = Vec::new();
    while p.peek().is_some() {
        if body.is_empty() && p.is_ident("switch") && matches!(p.peek_at(2), Some(Tok::Ident(s)) if s == "entry") {
            // switch (entry) { case N: goto L; ... default: break; }
            p.i += 4;
            let (cases, _) = p.switch_cases()?;
            entries = cases.into_iter().map(|(n, l)| (n as u32, l)).collect();
            continue;
        }
        p.stmt(&mut body)?;
    }
    // the locals declared before the first label are the function's register copies
    let mut locals = Vec::new();
    let mut rest = Vec::new();
    let mut prologue = true;
    for s in body {
        match s {
            Stmt::Decl(t, n, init) if prologue => locals.push((t, n, init)),
            Stmt::Nop if prologue => {}
            other => {
                prologue = false;
                rest.push(other);
            }
        }
    }
    Ok(Function { address: target & !1, thumb: target & 1 != 0, name, synced, locals, entries, body: rest })
}

// Every function of the generated files, as (address with the Thumb bit, text).
pub fn split_functions(src: &str) -> Vec<(u32, String)> {
    let mut out = Vec::new();
    let mut start = None;
    let mut addr = 0;
    for (pos, line) in line_offsets(src) {
        if line.starts_with("void f_") || line.starts_with("void t_") {
            if line.contains("(CPU *c, u32 entry) {") {
                let name = &line[5..15];
                if let Some(a) = P::guest_target(name) {
                    start = Some(pos);
                    addr = a;
                }
            }
        } else if line == "}" {
            if let Some(s) = start.take() {
                out.push((addr, src[s..pos + 1].to_string()));
            }
        }
    }
    out
}

fn line_offsets(src: &str) -> impl Iterator<Item = (usize, &str)> {
    let mut pos = 0;
    src.split('\n').map(move |l| {
        let p = pos;
        pos += l.len() + 1;
        (p, l)
    })
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn parses_a_small_function() {
        let text = "void f_00304014(CPU *c, u32 entry) {
  u32 r0 = c->r[0], r1 = c->r[1], r3 = c->r[3], r14 = c->r[14];
  u32 nf = c->nf, zf = c->zf, cf = c->cf, vf = c->vf;
  u32 tpc = 0; u8 *const M = MEMBASE; (void)M; (void)tpc;
#define SO() do { c->r[0] = r0; c->r[1] = r1; c->r[3] = r3; c->r[14] = r14; c->nf = nf; c->zf = zf; c->cf = cf; c->vf = vf; } while (0)
#define SI() do { r0 = c->r[0]; } while (0)
L_304014:
  { u32 a = r0; u32 b = 0xb00u; u32 res = a + b; r0 = res; } /* add */
  { u32 a = r1; u32 b = 0x0u; u32 res = a - b; zf = res == 0; (void)res; } /* cmp */
  { u32 ea = r0 + 0x3u; u32 v = RD8(ea); r3 = v; }
  if (!zf) { { u32 a = r3; u32 b = 0x8u; u32 res = a | b; r1 = res; } }
  { u32 ea = r0 + 0x3u; WR8(ea, r1); }
  tpc = r14; c->pc = tpc; SO(); return;
#undef SO
#undef SI
}";
        let f = function(text).unwrap();
        assert_eq!(f.address, 0x304014);
        assert_eq!(f.synced.len(), 8);
        assert!(f.body.iter().any(|s| matches!(s, Stmt::Store(Ty::U8, _, _))));
        assert!(f.body.iter().any(|s| matches!(s, Stmt::Return)));
    }
}
