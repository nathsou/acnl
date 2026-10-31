// The C++ the emitter writes, read back into the AST with the meaning it has in the game, the export's ABI around it
// included (guest/include/guest/abi.hpp): what is committed can then be proved equal to the decompiled function
// (check.rs), and through it to the original. The subset the emitter writes, with any names, is accepted; anything
// else is refused with the reason (never guessed).
//
// What the lowering spells out (abi.hpp):
// - entry (detail::invoke): the parameters are read from r0-r3 and s0-s15 in order; the return address is lr;
// - return: the result goes to r0 (s0 for a float), then pc = the entry lr;
// - a call through guest::Function / guest::call_address (detail::call): the arguments are evaluated, then written to
//   r0-r3 (s0-s15), lr = RETURN_TO_HOST, the callee runs and must come back there, and the result is read from r0;
// - guest::svc(n) is rt_svc on the guest CPU (the registers it reads and writes are the CPU's);
// - float == and < are the Z and N bits of vfp_cmpf (3dsrecomp/runtime/cpu.h: Z iff a == b, N iff a < b), which is
//   how the recompiled code compares floats;
// - fields: offsets from the file's packed structs, or the type database for the repository's structs (each such
//   assumption is listed by layout_assumptions, for the compiler to check).
use crate::ast::*;
use crate::typedb::PathStep;
use std::collections::{HashMap, HashSet};

type R<T> = Result<T, String>;

pub const RETURN_TO_HOST: u64 = 0xFFFF_1000;
pub const LR: &str = "__lr"; // the return address at the entry

#[derive(Clone, Debug, PartialEq)]
enum Tok {
    Id(String),
    Num(u64, Ty),
    Flt(f64, Ty),
    P(&'static str),
}

const PUNCT: [&str; 36] = [
    "::", "->", "+=", "-=", "<<", ">>", "<=", ">=", "==", "!=", "&&", "||", "(", ")", "{", "}", "[", "]", "<", ">", ";", ",", ":",
    "=", "+", "-", "*", "/", "%", "&", "|", "^", "~", "!", "?", ".",
];

// the type C++ gives an integer literal (macOS arm64: long is 64 bits)
fn literal_type(v: u64, hex: bool, suffix: &str) -> R<Ty> {
    let s = suffix.to_ascii_lowercase();
    Ok(match s.as_str() {
        "" if v <= i32::MAX as u64 => Ty::S32,
        "" if hex && v <= u32::MAX as u64 => Ty::U32,
        "" | "l" | "ll" if v <= i64::MAX as u64 => Ty::S64,
        "" | "l" | "ll" if hex => Ty::U64,
        "u" if v <= u32::MAX as u64 => Ty::U32,
        "u" | "ul" | "ull" | "lu" | "llu" => Ty::U64,
        _ => return Err(format!("literal suffix {}", suffix)),
    })
}

fn lex(text: &str) -> R<Vec<Tok>> {
    let b = text.as_bytes();
    let mut i = 0;
    let mut out = Vec::new();
    let mut line_start = true;
    while i < b.len() {
        let c = b[i] as char;
        if c == '\n' {
            line_start = true;
            i += 1;
            continue;
        }
        if c.is_whitespace() {
            i += 1;
            continue;
        }
        if text[i..].starts_with("//") {
            while i < b.len() && b[i] != b'\n' {
                i += 1;
            }
            continue;
        }
        if text[i..].starts_with("/*") {
            i = text[i..].find("*/").map(|k| i + k + 2).ok_or("unterminated comment")?;
            continue;
        }
        if c == '#' && line_start {
            // preprocessor lines (#include, #pragma): the headers are the repository's
            while i < b.len() && b[i] != b'\n' {
                i += 1;
            }
            continue;
        }
        line_start = false;
        if c.is_ascii_alphabetic() || c == '_' {
            let s = i;
            while i < b.len() && ((b[i] as char).is_ascii_alphanumeric() || b[i] == b'_') {
                i += 1;
            }
            out.push(Tok::Id(text[s..i].to_string()));
            continue;
        }
        if c.is_ascii_digit() {
            let s = i;
            let hex = text[i..].starts_with("0x") || text[i..].starts_with("0X");
            if hex {
                i += 2;
                while i < b.len() && ((b[i] as char).is_ascii_hexdigit() || b[i] == b'\'') {
                    i += 1;
                }
            } else {
                while i < b.len() && ((b[i] as char).is_ascii_digit() || b[i] == b'\'') {
                    i += 1;
                }
            }
            let is_float = !hex && i < b.len() && (b[i] == b'.' || b[i] == b'e' || b[i] == b'E');
            if is_float {
                if b[i] == b'.' {
                    i += 1;
                    while i < b.len() && (b[i] as char).is_ascii_digit() {
                        i += 1;
                    }
                }
                if i < b.len() && (b[i] == b'e' || b[i] == b'E') {
                    i += 1;
                    if i < b.len() && (b[i] == b'+' || b[i] == b'-') {
                        i += 1;
                    }
                    while i < b.len() && (b[i] as char).is_ascii_digit() {
                        i += 1;
                    }
                }
                let v: f64 = text[s..i].parse().map_err(|_| format!("float literal {}", &text[s..i]))?;
                let single = i < b.len() && (b[i] == b'f' || b[i] == b'F');
                if single {
                    i += 1;
                }
                out.push(Tok::Flt(v, if single { Ty::F32 } else { Ty::F64 }));
                continue;
            }
            let digits: String = text[s..i].chars().filter(|c| *c != '\'').collect();
            let v = if hex { u64::from_str_radix(&digits[2..], 16) } else { digits.parse() }
                .map_err(|_| format!("literal {}", digits))?;
            let ss = i;
            while i < b.len() && matches!(b[i], b'u' | b'U' | b'l' | b'L') {
                i += 1;
            }
            out.push(Tok::Num(v, literal_type(v, hex, &text[ss..i])?));
            continue;
        }
        if c == '"' || c == '\'' {
            return Err("string or character literal".into());
        }
        match PUNCT.iter().find(|p| text[i..].starts_with(**p)) {
            Some(p) => {
                out.push(Tok::P(p));
                i += p.len();
            }
            None => return Err(format!("character {:?}", c)),
        }
    }
    Ok(out)
}

// ---- types

#[derive(Clone, Debug, PartialEq)]
pub enum CType {
    Val(Ty),
    Ptr(Box<CType>),
    Struct(String), // a struct of this file or of the repository (type database)
    Array(Box<CType>, u64),
    Void,
}

fn scalar_name(n: &str) -> Option<Ty> {
    // char and bool are refused: their values in guest memory are not what C++ assumes of them
    match n {
        "u8" | "u16" | "u32" | "u64" | "s8" | "s16" | "s32" | "s64" | "float" | "double" => Ty::from_name(n),
        _ => None,
    }
}

#[derive(Clone, Debug)]
struct Field {
    name: String,
    offset: u64,
    ty: CType,
}

// a guest function the file declares (guest::Function<address, R(A...)>)
#[derive(Clone, Debug)]
struct Callee {
    address: u32,
    ret: CType,
    args: Vec<CType>,
}

// One layout assumption about a repository struct, for the compiler to confirm: offsetof(struct, path) == offset and
// the field's type.
#[derive(Clone, Debug, PartialEq, Eq, Hash)]
pub struct LayoutAssumption {
    pub structure: String,
    pub path: String,
    pub offset: u64,
    pub base: String,
}

#[derive(Default)]
struct Scope {
    structs: HashMap<String, Vec<Field>>, // packed structs of the file
    callees: HashMap<String, Callee>,
}

// ---- places and values

#[derive(Clone, Debug)]
enum Place {
    Mem(Expr, u64, CType),                // address + offset, of this type (file structs, *gptr<T>)
    Db(Expr, String, Vec<PathStep>),      // address, a repository struct and a field path in it
    Cpu(CpuField),
    Var(String),
}

#[derive(Clone, Debug)]
enum V {
    R(Expr, CType),
    Pl(Place),
}

struct Parser<'a> {
    t: Vec<Tok>,
    i: usize,
    scope: &'a Scope,
    vars: HashMap<String, CType>,
    helpers: &'a HashSet<String>,
    fresh: usize,
    ret: CType,
    pub layout: Vec<LayoutAssumption>,
}

fn db_base(b: &str) -> R<CType> {
    Ok(match b {
        "byte" => CType::Val(Ty::U8),
        "sbyte" => CType::Val(Ty::S8),
        "ushort" => CType::Val(Ty::U16),
        "short" => CType::Val(Ty::S16),
        "uint" => CType::Val(Ty::U32),
        "int" => CType::Val(Ty::S32),
        "ulonglong" => CType::Val(Ty::U64),
        "longlong" => CType::Val(Ty::S64),
        "float" => CType::Val(Ty::F32),
        "double" => CType::Val(Ty::F64),
        "ptr" => CType::Ptr(Box::new(CType::Void)),
        other => return Err(format!("field of type {}", other)),
    })
}

fn size_of(scope: &Scope, t: &CType) -> R<u64> {
    Ok(match t {
        CType::Val(ty) => (ty.bits() / 8) as u64,
        CType::Ptr(_) => 4,
        CType::Array(e, n) => size_of(scope, e)? * n,
        CType::Struct(s) => {
            let fs = scope.structs.get(s).ok_or_else(|| format!("size of {}", s))?;
            match fs.last() {
                Some(f) => f.offset + size_of(scope, &f.ty)?,
                None => 0,
            }
        }
        CType::Void => return Err("size of void".into()),
    })
}

fn path_text(path: &[PathStep]) -> String {
    let mut s = String::new();
    for p in path {
        match p {
            PathStep::Field(f) => {
                if !s.is_empty() {
                    s.push('.');
                }
                s.push_str(f);
            }
            PathStep::Index(i) => s.push_str(&format!("[{}]", i)),
        }
    }
    s
}

fn is_float(t: &CType) -> bool {
    matches!(t, CType::Val(ty) if ty.float())
}

impl<'a> Parser<'a> {
    fn peek(&self) -> Option<&Tok> {
        self.t.get(self.i)
    }
    fn peek_at(&self, k: usize) -> Option<&Tok> {
        self.t.get(self.i + k)
    }
    fn is(&self, p: &str) -> bool {
        matches!(self.peek(), Some(Tok::P(x)) if *x == p)
    }
    fn is_id(&self, s: &str) -> bool {
        matches!(self.peek(), Some(Tok::Id(x)) if x == s)
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
            Err(format!("expected '{}' at {:?}", p, self.peek()))
        }
    }
    fn ident(&mut self) -> R<String> {
        match self.peek().cloned() {
            Some(Tok::Id(s)) => {
                self.i += 1;
                Ok(s)
            }
            other => Err(format!("expected a name at {:?}", other)),
        }
    }
    fn expect_id(&mut self, s: &str) -> R<()> {
        if self.is_id(s) {
            self.i += 1;
            Ok(())
        } else {
            Err(format!("expected '{}' at {:?}", s, self.peek()))
        }
    }
    fn number(&mut self) -> R<u64> {
        match self.peek().cloned() {
            Some(Tok::Num(v, _)) => {
                self.i += 1;
                Ok(v)
            }
            other => Err(format!("expected a number at {:?}", other)),
        }
    }
    // '>' closing a template argument list (a '>>' token closes two)
    fn close_angle(&mut self) -> R<()> {
        if self.eat(">") {
            return Ok(());
        }
        if self.is(">>") {
            self.t[self.i] = Tok::P(">");
            return Ok(());
        }
        Err(format!("expected '>' at {:?}", self.peek()))
    }

    // a type, or None when the tokens here are not one
    fn try_type(&mut self) -> R<Option<CType>> {
        let save = self.i;
        if self.is_id("guest") && self.peek_at(1) == Some(&Tok::P("::")) && matches!(self.peek_at(2), Some(Tok::Id(x)) if x == "gptr") {
            self.i += 2;
        }
        let Some(Tok::Id(n)) = self.peek().cloned() else { return Ok(None) };
        if n == "const" {
            self.i += 1;
            return self.try_type();
        }
        if let Some(ty) = scalar_name(&n) {
            self.i += 1;
            return Ok(Some(CType::Val(ty)));
        }
        if n == "void" {
            self.i += 1;
            return Ok(Some(CType::Void));
        }
        if n == "gptr" && self.peek_at(1) == Some(&Tok::P("<")) {
            self.i += 2;
            let inner = self.try_type()?.ok_or("gptr of an unknown type")?;
            self.close_angle()?;
            return Ok(Some(CType::Ptr(Box::new(inner))));
        }
        if self.scope.structs.contains_key(&n) || crate::view::types().map_or(false, |db| db.has_struct(&n)) {
            // a struct name used as a type (not a variable of that name)
            if !self.vars.contains_key(&n) {
                self.i += 1;
                return Ok(Some(CType::Struct(n)));
            }
        }
        self.i = save;
        Ok(None)
    }

    // ---- expressions

    fn rvalue(&mut self, v: V) -> R<(Expr, CType)> {
        match v {
            V::R(e, t) => Ok((e, t)),
            V::Pl(p) => self.load(&p),
        }
    }

    fn place_address(&mut self, p: &Place) -> R<(Expr, CType)> {
        match p {
            Place::Mem(a, off, t) => Ok((add(a.clone(), *off), t.clone())),
            Place::Db(a, s, path) => {
                let db = crate::view::types().ok_or("no type database")?;
                let (off, base) = db.resolve(s, path).ok_or_else(|| format!("{}.{}: not a field", s, path_text(path)))?;
                let t = db_base(&base)?;
                let assumption = LayoutAssumption { structure: s.clone(), path: path_text(path), offset: off, base };
                if !self.layout.contains(&assumption) {
                    self.layout.push(assumption);
                }
                Ok((add(a.clone(), off), t))
            }
            _ => Err("address of a register".into()),
        }
    }

    fn load(&mut self, p: &Place) -> R<(Expr, CType)> {
        match p {
            Place::Var(n) => Ok((Expr::Var(n.clone()), self.vars[n].clone())),
            Place::Cpu(f) => Ok((Expr::Cpu(f.clone()), CType::Val(if matches!(f, CpuField::S(_)) { Ty::F32 } else { Ty::U32 }))),
            _ => {
                let (a, t) = self.place_address(p)?;
                Ok(match &t {
                    CType::Val(Ty::F32) => (Expr::Call("U2F".into(), vec![Expr::Load(Ty::U32, Box::new(a))]), t),
                    CType::Val(ty) if ty.float() => return Err("double in memory".into()),
                    CType::Val(ty) => (Expr::Load(*ty, Box::new(a)), t),
                    CType::Ptr(_) => (Expr::Load(Ty::U32, Box::new(a)), t),
                    other => return Err(format!("value of type {:?}", other)),
                })
            }
        }
    }

    fn primary(&mut self) -> R<V> {
        match self.peek().cloned() {
            Some(Tok::Num(v, ty)) => {
                self.i += 1;
                Ok(V::R(Expr::Num(v, ty), CType::Val(ty)))
            }
            Some(Tok::Flt(v, ty)) => {
                self.i += 1;
                Ok(V::R(Expr::Float(v, ty), CType::Val(ty)))
            }
            Some(Tok::P("(")) => {
                self.i += 1;
                let v = self.expr()?;
                self.expect(")")?;
                Ok(V::R(v.0, v.1))
            }
            Some(Tok::Id(n)) => {
                if n == "guest" && self.peek_at(2) == Some(&Tok::Id("cpu".into())) {
                    self.i += 3;
                    self.expect("(")?;
                    self.expect(")")?;
                    self.expect("->")?;
                    let f = self.ident()?;
                    let field = match f.as_str() {
                        "r" | "s" => {
                            self.expect("[")?;
                            let k = self.number()? as u32;
                            self.expect("]")?;
                            if f == "r" {
                                if k > 15 {
                                    return Err("register number".into());
                                }
                                CpuField::R(k)
                            } else {
                                if k > 31 {
                                    return Err("float register number".into());
                                }
                                CpuField::S(k)
                            }
                        }
                        "nf" | "zf" | "cf" | "vf" | "qf" | "ge" => CpuField::Flag(f),
                        "fpscr" => CpuField::Fpscr,
                        "tls" => CpuField::Tls,
                        other => return Err(format!("cpu field {}", other)),
                    };
                    return Ok(V::Pl(Place::Cpu(field)));
                }
                if n == "std" && self.peek_at(2) == Some(&Tok::Id("bit_cast".into())) {
                    self.i += 3;
                    self.expect("<")?;
                    let t = self.try_type()?.ok_or("bit_cast to an unknown type")?;
                    self.close_angle()?;
                    self.expect("(")?;
                    let (e, et) = self.expr()?;
                    self.expect(")")?;
                    return Ok(match (&t, &et) {
                        (CType::Val(Ty::U32), CType::Val(Ty::F32)) => V::R(Expr::Call("F2U".into(), vec![e]), t),
                        (CType::Val(Ty::F32), CType::Val(Ty::U32)) => V::R(Expr::Call("U2F".into(), vec![e]), t),
                        (CType::Val(Ty::U64), CType::Val(Ty::F64)) => V::R(Expr::Call("D2B".into(), vec![e]), t),
                        _ => return Err(format!("bit_cast from {:?} to {:?}", et, t)),
                    });
                }
                if let Some(t) = self.try_type()? {
                    // a functional cast T(e) / gptr<T>(e)
                    self.expect("(")?;
                    let (e, et) = self.expr()?;
                    self.expect(")")?;
                    return Ok(match (&t, &et) {
                        (CType::Val(ty), CType::Val(_)) => V::R(Expr::Cast(*ty, Box::new(e)), t.clone()),
                        (CType::Ptr(_), CType::Val(ty)) if !ty.float() => V::R(Expr::Cast(Ty::U32, Box::new(e)), t.clone()),
                        _ => return Err(format!("conversion from {:?} to {:?}", et, t)),
                    });
                }
                self.i += 1;
                if let Some(t) = self.vars.get(&n).cloned() {
                    return Ok(match t {
                        CType::Ptr(_) | CType::Val(_) => V::Pl(Place::Var(n)),
                        other => return Err(format!("variable of type {:?}", other)),
                    });
                }
                if self.is("(") {
                    if self.scope.callees.contains_key(&n) || n == "guest" {
                        return Err(format!("call of {} inside an expression", n));
                    }
                    if !self.helpers.contains(&n) {
                        return Err(format!("call of {} (not a runtime helper the decompiled function uses)", n));
                    }
                    self.i += 1;
                    let mut args = Vec::new();
                    if !self.is(")") {
                        loop {
                            // &v: a helper's second result written to a variable (a carry, a saturation flag)
                            if self.eat("&") {
                                let v = self.ident()?;
                                if !matches!(self.vars.get(&v), Some(CType::Val(_))) {
                                    return Err(format!("&{} of a non-variable", v));
                                }
                                args.push(Expr::AddrOf(v));
                            } else {
                                args.push(self.expr()?.0);
                            }
                            if !self.eat(",") {
                                break;
                            }
                        }
                    }
                    self.expect(")")?;
                    let ret = match n.as_str() {
                        "D2F" | "sqrt" | "fabs" => Ty::F64,
                        "sqrtf" | "fabsf" | "vfp_f" => Ty::F32,
                        _ => Ty::U32,
                    };
                    return Ok(V::R(Expr::Call(n, args), CType::Val(ret)));
                }
                Err(format!("unknown name {}", n))
            }
            other => Err(format!("unexpected {:?}", other)),
        }
    }

    fn postfix(&mut self) -> R<V> {
        let mut v = self.primary()?;
        loop {
            if self.eat("->") {
                let (e, t) = self.rvalue(v)?;
                let f = self.ident()?;
                v = match t {
                    CType::Ptr(inner) => self.member(Place::Mem(e, 0, *inner), f)?,
                    other => return Err(format!("-> on {:?}", other)),
                };
            } else if self.eat(".") {
                let f = self.ident()?;
                if f == "addr" && self.is("(") {
                    self.expect("(")?;
                    self.expect(")")?;
                    let (e, t) = self.rvalue(v)?;
                    if !matches!(t, CType::Ptr(_)) {
                        return Err(".addr() of a non-pointer".into());
                    }
                    v = V::R(e, CType::Val(Ty::U32));
                } else {
                    v = match v {
                        V::Pl(p @ (Place::Mem(..) | Place::Db(..))) => self.member(p, f)?,
                        other => return Err(format!(".{} on {:?}", f, other)),
                    };
                }
            } else if self.eat("[") {
                let k = self.number()?;
                self.expect("]")?;
                v = match v {
                    V::Pl(Place::Db(a, s, mut path)) => {
                        path.push(PathStep::Index(k));
                        V::Pl(Place::Db(a, s, path))
                    }
                    V::Pl(Place::Mem(a, off, CType::Array(e, n))) => {
                        if k >= n {
                            return Err("index past the array".into());
                        }
                        let es = size_of(self.scope, &e)?;
                        V::Pl(Place::Mem(a, off + k * es, *e))
                    }
                    other => return Err(format!("[] on {:?}", other)),
                };
            } else {
                return Ok(v);
            }
        }
    }

    // place.field
    fn member(&mut self, p: Place, f: String) -> R<V> {
        Ok(V::Pl(match p {
            Place::Mem(a, off, CType::Struct(s)) => {
                if let Some(fields) = self.scope.structs.get(&s) {
                    let fd = fields.iter().find(|x| x.name == f).ok_or_else(|| format!("{} has no field {}", s, f))?;
                    Place::Mem(a, off + fd.offset, fd.ty.clone())
                } else {
                    // a repository struct: the field path is resolved when the value is used
                    if off != 0 {
                        return Err("repository struct inside a file struct".into());
                    }
                    Place::Db(a, s, vec![PathStep::Field(f)])
                }
            }
            Place::Db(a, s, mut path) => {
                path.push(PathStep::Field(f));
                Place::Db(a, s, path)
            }
            other => return Err(format!(".{} on {:?}", f, other)),
        }))
    }

    fn unary(&mut self) -> R<V> {
        if self.eat("*") {
            let (e, t) = self.unary().and_then(|v| self.rvalue(v))?;
            return match t {
                CType::Ptr(inner) => Ok(V::Pl(Place::Mem(e, 0, *inner))),
                other => Err(format!("* on {:?}", other)),
            };
        }
        for (p, op) in [("-", UnOp::Neg), ("~", UnOp::Not), ("!", UnOp::LNot)] {
            if self.eat(p) {
                let (e, t) = self.unary().and_then(|v| self.rvalue(v))?;
                let rt = match (&op, &t) {
                    (UnOp::LNot, _) => CType::Val(Ty::S32),
                    (_, CType::Val(ty)) if ty.float() => t.clone(),
                    (_, CType::Val(ty)) => CType::Val(promote(*ty)),
                    _ => return Err(format!("{} on {:?}", p, t)),
                };
                return Ok(V::R(Expr::Un(op, Box::new(e)), rt));
            }
        }
        self.postfix()
    }

    fn binary(&mut self, min: u32) -> R<(Expr, CType)> {
        let first = self.unary()?;
        let (mut lhs, mut lt) = self.rvalue(first)?;
        loop {
            let Some(Tok::P(p)) = self.peek().cloned() else { break };
            let Some((op, prec)) = bin_op(p) else { break };
            if prec < min {
                break;
            }
            self.i += 1;
            let (rhs, rt) = self.binary(prec + 1)?;
            if is_float(&lt) || is_float(&rt) {
                let both32 = lt == CType::Val(Ty::F32) && rt == CType::Val(Ty::F32);
                match op {
                    BinOp::Eq | BinOp::Lt if both32 => {
                        // the Z / N bit of the runtime's VFP comparison
                        let bit = if op == BinOp::Eq { 30 } else { 31 };
                        let cmp = Expr::Call("vfp_cmpf".into(), vec![lhs, rhs]);
                        lhs = Expr::Bin(BinOp::And,
                                        Box::new(Expr::Bin(BinOp::Shr, Box::new(cmp), Box::new(Expr::Num(bit, Ty::U32)))),
                                        Box::new(Expr::Num(1, Ty::U32)));
                        lt = CType::Val(Ty::U32);
                        continue;
                    }
                    BinOp::Add | BinOp::Sub | BinOp::Mul | BinOp::Div if lt == rt => {
                        lhs = Expr::Bin(op, Box::new(lhs), Box::new(rhs));
                        continue;
                    }
                    _ => return Err(format!("float operation {:?} on {:?} and {:?}", op, lt, rt)),
                }
            }
            let (CType::Val(a), CType::Val(b)) = (&lt, &rt) else { return Err(format!("{:?} on {:?} and {:?}", op, lt, rt)) };
            let t = match op {
                BinOp::Eq | BinOp::Ne | BinOp::Lt | BinOp::Le | BinOp::Gt | BinOp::Ge | BinOp::LAnd | BinOp::LOr => Ty::S32,
                BinOp::Shl | BinOp::Shr => promote(*a),
                _ => common(*a, *b),
            };
            lhs = Expr::Bin(op, Box::new(lhs), Box::new(rhs));
            lt = CType::Val(t);
        }
        Ok((lhs, lt))
    }

    fn expr(&mut self) -> R<(Expr, CType)> {
        let (c, ct) = self.binary(1)?;
        if !self.eat("?") {
            return Ok((c, ct));
        }
        let (a, at) = self.expr()?;
        self.expect(":")?;
        let (b, bt) = self.expr()?;
        let t = match (&at, &bt) {
            (CType::Val(x), CType::Val(y)) if x == y => at.clone(),
            (CType::Val(x), CType::Val(y)) if !x.float() && !y.float() => CType::Val(common(*x, *y)),
            _ => return Err("?: of mixed types".into()),
        };
        Ok((Expr::Cond(Box::new(c), Box::new(a), Box::new(b)), t))
    }

    // ---- statements

    fn block(&mut self) -> R<Vec<Stmt>> {
        self.expect("{")?;
        let mut out = Vec::new();
        while !self.eat("}") {
            if self.peek().is_none() {
                return Err("unterminated block".into());
            }
            self.stmt(&mut out)?;
        }
        Ok(out)
    }

    fn epilogue(&mut self, value: Option<Expr>, out: &mut Vec<Stmt>) -> R<()> {
        match (&self.ret, value) {
            (CType::Void, None) => {}
            (CType::Val(Ty::F32), Some(e)) => out.push(Stmt::SetCpu(CpuField::S(0), e)),
            (CType::Val(ty), Some(e)) if !ty.float() && ty.bits() <= 32 => out.push(Stmt::SetCpu(CpuField::R(0), Expr::Cast(Ty::U32, Box::new(e)))),
            (CType::Ptr(_), Some(e)) => out.push(Stmt::SetCpu(CpuField::R(0), e)),
            (t, v) => return Err(format!("return of {:?} from a function returning {:?}", v.is_some(), t)),
        }
        out.push(Stmt::SetCpu(CpuField::Pc, Expr::Var(LR.into())));
        out.push(Stmt::Return);
        Ok(())
    }

    // NAME(args) for a guest::Function, or guest::call_address<R>(target, args): Some(result) after the call is
    // lowered into `out` (None: not a call here)
    fn try_call(&mut self, out: &mut Vec<Stmt>) -> R<Option<(Expr, CType)>> {
        let (target, ret, arg_types, by_address) = match self.peek().cloned() {
            Some(Tok::Id(n)) if self.scope.callees.contains_key(&n) && self.peek_at(1) == Some(&Tok::P("(")) => {
                let c = self.scope.callees[&n].clone();
                self.i += 2;
                (Some(c.address), c.ret, Some(c.args), false)
            }
            Some(Tok::Id(n)) if n == "guest" && self.peek_at(2) == Some(&Tok::Id("call_address".into())) => {
                self.i += 3;
                self.expect("<")?;
                let r = self.try_type()?.ok_or("call_address result type")?;
                self.close_angle()?;
                self.expect("(")?;
                (None, r, None, true)
            }
            _ => return Ok(None),
        };
        self.fresh += 1;
        let k = self.fresh;
        let mut values = Vec::new();
        if by_address {
            let (t, tt) = self.expr()?;
            if !matches!(tt, CType::Val(ty) if !ty.float() && ty.bits() == 32) {
                return Err("call_address target".into());
            }
            values.push((t, CType::Val(Ty::U32)));
            if !self.is(")") {
                self.expect(",")?;
            }
        }
        if !self.is(")") {
            loop {
                values.push(self.expr()?);
                if !self.eat(",") {
                    break;
                }
            }
        }
        self.expect(")")?;
        // the arguments are evaluated first (temporaries), then handed over as detail::call does
        let mut core = 0u32;
        let mut single = 0u32;
        let mut temps = Vec::new();
        for (j, (e, t)) in values.iter().enumerate() {
            let name = format!("__call{}_{}", k, j);
            let ty = match t {
                CType::Val(ty) => *ty,
                CType::Ptr(_) => Ty::U32,
                other => return Err(format!("argument of type {:?}", other)),
            };
            out.push(Stmt::Decl(ty, name.clone(), Some(e.clone())));
            temps.push((name, t.clone()));
        }
        let args: &[(String, CType)] = if by_address { &temps[1..] } else { &temps[..] };
        if let Some(decl) = &arg_types {
            if decl.len() != args.len() {
                return Err("wrong number of arguments".into());
            }
        }
        for (j, (name, t)) in args.iter().enumerate() {
            let t = arg_types.as_ref().map(|d| d[j].clone()).unwrap_or(t.clone());
            let v = Expr::Var(name.clone());
            match t {
                CType::Val(Ty::F32) => {
                    if single >= 16 {
                        return Err("float argument on the stack".into());
                    }
                    out.push(Stmt::SetCpu(CpuField::S(single), v));
                    single += 1;
                }
                CType::Val(ty) if !ty.float() && ty.bits() <= 32 => {
                    if core >= 4 {
                        return Err("argument on the stack".into());
                    }
                    out.push(Stmt::SetCpu(CpuField::R(core), Expr::Cast(Ty::U32, Box::new(v))));
                    core += 1;
                }
                CType::Ptr(_) => {
                    if core >= 4 {
                        return Err("argument on the stack".into());
                    }
                    out.push(Stmt::SetCpu(CpuField::R(core), v));
                    core += 1;
                }
                other => return Err(format!("argument of type {:?}", other)),
            }
        }
        out.push(Stmt::SetCpu(CpuField::R(14), Expr::Num(RETURN_TO_HOST, Ty::U32)));
        match target {
            Some(a) => {
                out.push(Stmt::SetCpu(CpuField::Pc, Expr::Num(a as u64, Ty::U32)));
                out.push(Stmt::GuestCall(a, false));
            }
            None => {
                out.push(Stmt::SetCpu(CpuField::Pc, Expr::Var(temps[0].0.clone())));
                out.push(Stmt::Dispatch(false));
            }
        }
        // the callee must come back to RETURN_TO_HOST (detail::call stops the game otherwise)
        out.push(Stmt::ReturnUnlessPc(Expr::Num(RETURN_TO_HOST, Ty::U32)));
        Ok(Some(match ret {
            CType::Void => (Expr::Num(0, Ty::U32), CType::Void),
            CType::Val(Ty::F32) => (Expr::Cpu(CpuField::S(0)), CType::Val(Ty::F32)),
            CType::Val(ty) if !ty.float() && ty.bits() <= 32 => (Expr::Cast(ty, Box::new(Expr::Cpu(CpuField::R(0)))), CType::Val(ty)),
            CType::Ptr(p) => (Expr::Cpu(CpuField::R(0)), CType::Ptr(p)),
            other => return Err(format!("result of type {:?}", other)),
        }))
    }

    fn stmt(&mut self, out: &mut Vec<Stmt>) -> R<()> {
        // label
        if let (Some(Tok::Id(l)), Some(Tok::P(":"))) = (self.peek().cloned(), self.peek_at(1).cloned()) {
            if !matches!(l.as_str(), "default" | "case") {
                self.i += 2;
                self.eat(";");
                out.push(Stmt::Label(l));
                return Ok(());
            }
        }
        if self.is_id("goto") {
            self.i += 1;
            let l = self.ident()?;
            self.expect(";")?;
            out.push(Stmt::Goto(l));
            return Ok(());
        }
        if self.is_id("break") {
            self.i += 1;
            self.expect(";")?;
            out.push(Stmt::Unsupported("break".into()));
            return Ok(());
        }
        if self.is_id("if") {
            self.i += 1;
            self.expect("(")?;
            let (c, _) = self.expr()?;
            self.expect(")")?;
            let a = self.block()?;
            let b = if self.is_id("else") {
                self.i += 1;
                if self.is_id("if") {
                    let mut v = Vec::new();
                    self.stmt(&mut v)?;
                    v
                } else {
                    self.block()?
                }
            } else {
                vec![]
            };
            out.push(Stmt::If(c, a, b));
            return Ok(());
        }
        if self.is_id("do") {
            self.i += 1;
            let mut body = self.block()?;
            self.expect_id("while")?;
            self.expect("(")?;
            let (cond, _) = self.expr()?;
            self.expect(")")?;
            self.expect(";")?;
            let Some(Stmt::Label(top)) = body.first().cloned() else { return Err("do loop without a label".into()) };
            body.remove(0);
            out.push(Stmt::While { top, test: None, body, check: vec![], cond });
            return Ok(());
        }
        if self.is_id("for") {
            self.i += 1;
            self.expect("(")?;
            self.expect(";")?;
            self.expect(";")?;
            self.expect(")")?;
            let mut all = self.block()?;
            // the emitter's shape: test: check; if (!(cond)) { break; } top: body
            let Some(Stmt::Label(test)) = all.first().cloned() else { return Err("for loop without a label".into()) };
            all.remove(0);
            let k = all
                .iter()
                .position(|s| matches!(s, Stmt::If(_, a, b) if b.is_empty() && a.len() == 1 && a[0] == Stmt::Unsupported("break".into())))
                .ok_or("for loop without its exit test")?;
            let Stmt::If(Expr::Un(UnOp::LNot, cond), _, _) = all[k].clone() else { return Err("for loop exit test".into()) };
            let check: Vec<Stmt> = all[..k].to_vec();
            let Some(Stmt::Label(top)) = all.get(k + 1).cloned() else { return Err("for loop without its body label".into()) };
            let body: Vec<Stmt> = all[k + 2..].to_vec();
            out.push(Stmt::While { top, test: Some(test), body, check, cond: *cond });
            return Ok(());
        }
        if self.is_id("switch") {
            self.i += 1;
            self.expect("(")?;
            let (e, _) = self.expr()?;
            self.expect(")")?;
            self.expect("{")?;
            let mut cases = Vec::new();
            while self.is_id("case") {
                self.i += 1;
                let k = self.number()?;
                self.expect(":")?;
                self.expect_id("goto")?;
                let l = self.ident()?;
                self.expect(";")?;
                cases.push((k, l));
            }
            self.expect_id("default")?;
            self.expect(":")?;
            self.expect_id("break")?;
            self.expect(";")?;
            self.expect("}")?;
            out.push(Stmt::Switch(e, cases));
            return Ok(());
        }
        if self.is_id("return") {
            self.i += 1;
            if self.eat(";") {
                return self.epilogue(None, out);
            }
            if let Some((r, rt)) = self.try_call(out)? {
                self.expect(";")?;
                return self.epilogue(if rt == CType::Void { None } else { Some(r) }, out);
            }
            let (e, _) = self.expr()?;
            self.expect(";")?;
            return self.epilogue(Some(e), out);
        }
        // a declaration
        let save = self.i;
        if let Some(t) = self.try_type()? {
            if let Some(Tok::Id(n)) = self.peek().cloned() {
                self.i += 1;
                if self.vars.contains_key(&n) {
                    return Err(format!("{} declared twice", n));
                }
                let ty = match &t {
                    CType::Val(ty) => *ty,
                    CType::Ptr(_) => Ty::U32,
                    other => return Err(format!("local of type {:?}", other)),
                };
                let init = if self.eat("=") {
                    let (e, et) = self.expr()?;
                    if is_float(&et) != ty.float() && !matches!(e, Expr::Num(0, _)) {
                        return Err(format!("{} initialised with a {:?}", n, et));
                    }
                    Some(e)
                } else {
                    None
                };
                self.expect(";")?;
                self.vars.insert(n.clone(), t);
                out.push(Stmt::Decl(ty, n, init));
                return Ok(());
            }
            self.i = save;
        }
        // a system call (guest::svc: rt_svc on the guest CPU)
        if self.is_id("guest") && self.peek_at(2) == Some(&Tok::Id("svc".into())) {
            self.i += 3;
            self.expect("(")?;
            let n = self.number()? as u32;
            self.expect(")")?;
            self.expect(";")?;
            out.push(Stmt::Svc(n));
            return Ok(());
        }
        // a call statement
        if self.try_call(out)?.is_some() {
            self.expect(";")?;
            return Ok(());
        }
        // an assignment
        let target = self.unary()?;
        let V::Pl(place) = target else { return Err("assignment to a value".into()) };
        // x += e / x -= e
        let compound = if self.eat("+=") {
            Some(BinOp::Add)
        } else if self.eat("-=") {
            Some(BinOp::Sub)
        } else {
            self.expect("=")?;
            None
        };
        if let Some(op) = compound {
            let (cur, ct) = self.load(&place)?;
            let (e, et) = self.expr()?;
            self.expect(";")?;
            let (CType::Val(a), CType::Val(b)) = (&ct, &et) else { return Err("compound assignment of a non-integer".into()) };
            if a.float() || b.float() {
                return Err("compound assignment of a float".into());
            }
            let value = Expr::Bin(op, Box::new(cur), Box::new(e));
            match place {
                Place::Var(n) => out.push(Stmt::Assign(n, value)),
                Place::Cpu(f) => out.push(Stmt::SetCpu(f, value)),
                p => {
                    let (addr, t) = self.place_address(&p)?;
                    let CType::Val(ty) = t else { return Err("compound assignment of a pointer field".into()) };
                    out.push(Stmt::Store(ty, addr, value));
                }
            }
            return Ok(());
        }
        let (value, vt) = match self.try_call(out)? {
            Some((e, CType::Void)) => return Err(format!("void result used: {:?}", e)),
            Some(x) => x,
            None => self.expr()?,
        };
        self.expect(";")?;
        match place {
            Place::Var(n) => {
                let t = self.vars[&n].clone();
                if is_float(&t) != is_float(&vt) {
                    return Err(format!("{} = a {:?}", n, vt));
                }
                out.push(Stmt::Assign(n, value));
            }
            Place::Cpu(f) => out.push(Stmt::SetCpu(f, value)),
            p => {
                let (a, t) = self.place_address(&p)?;
                match (&t, &vt) {
                    (CType::Val(Ty::F32), CType::Val(Ty::F32)) => out.push(Stmt::Store(Ty::U32, a, Expr::Call("F2U".into(), vec![value]))),
                    (CType::Val(ty), CType::Val(v)) if !ty.float() && !v.float() => out.push(Stmt::Store(*ty, a, value)),
                    (CType::Ptr(_), CType::Ptr(_)) => out.push(Stmt::Store(Ty::U32, a, value)),
                    _ => return Err(format!("store of a {:?} into a {:?}", vt, t)),
                }
            }
        }
        Ok(())
    }
}

fn add(a: Expr, off: u64) -> Expr {
    if off == 0 {
        a
    } else {
        Expr::Bin(BinOp::Add, Box::new(a), Box::new(Expr::Num(off, Ty::U32)))
    }
}

fn promote(t: Ty) -> Ty {
    match t {
        Ty::U8 | Ty::U16 | Ty::S8 | Ty::S16 | Ty::Bool => Ty::S32,
        other => other,
    }
}

fn common(a: Ty, b: Ty) -> Ty {
    let (a, b) = (promote(a), promote(b));
    if a.bits() == 64 || b.bits() == 64 {
        if a == Ty::U64 || b == Ty::U64 {
            Ty::U64
        } else {
            Ty::S64
        }
    } else if a == Ty::U32 || b == Ty::U32 {
        Ty::U32
    } else {
        Ty::S32
    }
}

fn bin_op(p: &str) -> Option<(BinOp, u32)> {
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

// ---- the file

// One exported function of a file, read back.
pub struct Export {
    pub address: u32, // with bit 0 set for Thumb
    pub function: Result<Function, String>,
    pub layout: Vec<LayoutAssumption>,
}

// skips a balanced (...) / {...} group starting at the opening token
fn skip_group(t: &[Tok], mut i: usize) -> usize {
    let mut depth = 0i32;
    while i < t.len() {
        match &t[i] {
            Tok::P("(") | Tok::P("{") | Tok::P("[") => depth += 1,
            Tok::P(")") | Tok::P("}") | Tok::P("]") => {
                depth -= 1;
                if depth == 0 {
                    return i + 1;
                }
            }
            _ => {}
        }
        i += 1;
    }
    i
}

// What a file of drafts holds: its exports read back, and the layout of its own structs as the reader computed it
// (static_asserts for the compiler to confirm).
pub struct File {
    pub exports: Vec<Export>,
    pub struct_checks: Vec<String>,
}

// Reads every GUEST_EXPORT of a file of drafts. `helpers` are the runtime helper functions calls may name.
pub fn read(text: &str, helpers: &HashSet<String>) -> R<File> {
    let t = lex(text)?;
    // first pass: structs, guest functions, function definitions (by name) and exports
    let mut scope = Scope::default();
    let mut defs: HashMap<String, usize> = HashMap::new(); // function name -> index of its return type
    let mut exports: Vec<(u32, String)> = Vec::new();
    let mut ns: Vec<String> = Vec::new();
    let mut struct_checks = Vec::new();
    let mut i = 0;
    while i < t.len() {
        match &t[i] {
            Tok::Id(n) if n == "namespace" => {
                if let (Some(Tok::Id(name)), Some(Tok::P("{"))) = (t.get(i + 1), t.get(i + 2)) {
                    ns.push(name.clone());
                    i += 3;
                    continue;
                }
                return Err("namespace".into());
            }
            Tok::P("}") => {
                ns.pop();
                i += 1;
            }
            Tok::Id(n) if n == "using" => {
                while i < t.len() && t[i] != Tok::P(";") {
                    i += 1;
                }
                i += 1;
            }
            Tok::Id(n) if n == "GUEST_OFFSET" || n == "GUEST_SIZE" => {
                i = skip_group(&t, i + 1);
                if t.get(i) == Some(&Tok::P(";")) {
                    i += 1;
                }
            }
            Tok::Id(n) if n == "GUEST_EXPORT" => {
                let (Some(Tok::P("(")), Some(Tok::Num(a, _))) = (t.get(i + 1), t.get(i + 2)) else { return Err("GUEST_EXPORT".into()) };
                // the function: the last name before ')'
                let end = skip_group(&t, i + 1);
                let name = t[i + 3..end].iter().rev().find_map(|x| if let Tok::Id(s) = x { Some(s.clone()) } else { None }).ok_or("GUEST_EXPORT name")?;
                exports.push((*a as u32, name));
                i = end;
                if t.get(i) == Some(&Tok::P(";")) {
                    i += 1;
                }
            }
            Tok::Id(n) if n == "struct" => {
                // struct __attribute__((packed)) Name { fields };
                let mut j = i + 1;
                let packed = matches!(t.get(j), Some(Tok::Id(x)) if x == "__attribute__");
                if packed {
                    j = skip_group(&t, j + 1);
                }
                let Some(Tok::Id(name)) = t.get(j).cloned() else { return Err("struct name".into()) };
                if !packed {
                    return Err(format!("struct {} is not packed", name));
                }
                j += 1;
                if t.get(j) != Some(&Tok::P("{")) {
                    return Err(format!("struct {}", name));
                }
                j += 1;
                let mut fields = Vec::new();
                let mut offset = 0u64;
                while t.get(j) != Some(&Tok::P("}")) {
                    let mut p = Parser { t: t.clone(), i: j, scope: &scope, vars: HashMap::new(), helpers, fresh: 0, ret: CType::Void, layout: vec![] };
                    let ft = p.try_type()?.ok_or_else(|| format!("field type in {}", name))?;
                    let fname = p.ident()?;
                    let ft = if p.eat("[") {
                        let n = p.number()?;
                        p.expect("]")?;
                        CType::Array(Box::new(ft), n)
                    } else {
                        ft
                    };
                    p.expect(";")?;
                    j = p.i;
                    let size = size_of(&scope, &ft)?;
                    fields.push(Field { name: fname, offset, ty: ft });
                    offset += size;
                }
                j += 1;
                if t.get(j) == Some(&Tok::P(";")) {
                    j += 1;
                }
                let qualified = ns.iter().map(|n| format!("{}::", n)).collect::<String>() + &name;
                for f in &fields {
                    struct_checks.push(format!("static_assert(offsetof({}, {}) == 0x{:x});", qualified, f.name, f.offset));
                    struct_checks.push(format!("static_assert(sizeof({}::{}) == 0x{:x});", qualified, f.name, size_of(&scope, &f.ty)?));
                }
                scope.structs.insert(name, fields);
                i = j;
            }
            Tok::Id(n) if n == "inline" => {
                // inline constexpr guest::Function<0xADDR, R(A...)> name;
                let mut p = Parser { t: t.clone(), i: i + 1, scope: &scope, vars: HashMap::new(), helpers, fresh: 0, ret: CType::Void, layout: vec![] };
                p.expect_id("constexpr")?;
                p.expect_id("guest")?;
                p.expect("::")?;
                p.expect_id("Function")?;
                p.expect("<")?;
                let address = p.number()? as u32;
                p.expect(",")?;
                let ret = p.try_type()?.ok_or("guest function result type")?;
                p.expect("(")?;
                let mut args = Vec::new();
                if !p.is(")") {
                    loop {
                        args.push(p.try_type()?.ok_or("guest function argument type")?);
                        if matches!(p.peek(), Some(Tok::Id(_))) {
                            p.i += 1; // a parameter name
                        }
                        if !p.eat(",") {
                            break;
                        }
                    }
                }
                p.expect(")")?;
                p.close_angle()?;
                let name = p.ident()?;
                p.expect(";")?;
                i = p.i;
                scope.callees.insert(name, Callee { address, ret, args });
            }
            _ => {
                // a function definition: TYPE NAME ( ... ) { ... }
                let mut p = Parser { t: t.clone(), i, scope: &scope, vars: HashMap::new(), helpers, fresh: 0, ret: CType::Void, layout: vec![] };
                match p.try_type()? {
                    Some(_) => {
                        let name = p.ident()?;
                        if helpers.contains(&name) {
                            return Err(format!("the file defines {}, a runtime helper's name", name));
                        }
                        if !p.is("(") {
                            return Err(format!("{}: not a function", name));
                        }
                        defs.insert(name, i);
                        let j = skip_group(&t, p.i);
                        i = skip_group(&t, j);
                    }
                    None => return Err(format!("unexpected {:?} at the top level", t[i])),
                }
            }
        }
    }
    let _ = ns;
    let mut out = Vec::new();
    for (address, name) in exports {
        let Some(&at) = defs.get(&name) else {
            out.push(Export { address, function: Err(format!("no definition of {}", name)), layout: vec![] });
            continue;
        };
        let mut p = Parser { t: t.clone(), i: at, scope: &scope, vars: HashMap::new(), helpers, fresh: 0, ret: CType::Void, layout: vec![] };
        let f = function(&mut p, address);
        out.push(Export { address, function: f, layout: p.layout });
    }
    Ok(File { exports: out, struct_checks })
}

// A translation unit that holds the file and asserts every layout fact its reading assumed: compiled (syntax only),
// it confirms the offsets and field types against the repository's headers.
pub fn layout_check(text: &str, file: &File) -> String {
    let mut out = String::from("#include \"guest/guest.hpp\"\n#include <bit>\nusing guest::gptr;\n");
    out.push_str(text);
    out.push_str("\n// ---- layout assumptions of tools/decomp (cpp.rs)\n#include <cstddef>\n#include <type_traits>\n");
    out.push_str(concat!(
        "template <typename T, typename B> constexpr bool decomp_same_bits() {\n",
        "    if constexpr (std::is_enum_v<T>) {\n",
        "        return decomp_same_bits<std::underlying_type_t<T>, B>();\n",
        "    } else {\n",
        "        return !std::is_same_v<T, bool> && sizeof(T) == sizeof(B) && std::is_floating_point_v<T> == std::is_floating_point_v<B> &&\n",
        "               std::is_signed_v<T> == std::is_signed_v<B>;\n",
        "    }\n",
        "}\n",
        "template <typename T> constexpr bool decomp_is_gptr = false;\n",
        "template <typename T> constexpr bool decomp_is_gptr<guest::gptr<T>> = true;\n",
    ));
    for c in &file.struct_checks {
        out.push_str(c);
        out.push('\n');
    }
    let mut seen = HashSet::new();
    for e in &file.exports {
        for a in &e.layout {
            if !seen.insert(a.clone()) {
                continue;
            }
            let field = format!("std::remove_cvref_t<decltype(std::declval<{} &>().{})>", a.structure, a.path);
            out.push_str(&format!("static_assert(offsetof({}, {}) == 0x{:x});\n", a.structure, a.path, a.offset));
            let ty = match a.base.as_str() {
                "byte" => "u8",
                "sbyte" => "s8",
                "ushort" => "u16",
                "short" => "s16",
                "uint" => "u32",
                "int" => "s32",
                "ulonglong" => "u64",
                "longlong" => "s64",
                "float" => "float",
                "double" => "double",
                _ => "",
            };
            if ty.is_empty() {
                out.push_str(&format!("static_assert(decomp_is_gptr<{}>);\n", field));
            } else {
                out.push_str(&format!("static_assert(decomp_same_bits<{}, {}>());\n", field, ty));
            }
        }
    }
    out
}

fn function(p: &mut Parser, address: u32) -> R<Function> {
    let ret = p.try_type()?.ok_or("result type")?;
    let name = p.ident()?;
    p.ret = ret;
    p.expect("(")?;
    // detail::invoke: parameters from the registers, in order (AAPCS-VFP)
    let mut body = vec![Stmt::Decl(Ty::U32, LR.into(), Some(Expr::Cpu(CpuField::R(14))))];
    let (mut core, mut single) = (0u32, 0u32);
    if !p.is(")") {
        loop {
            let t = p.try_type()?.ok_or("parameter type")?;
            let n = p.ident()?;
            let (ty, src) = match &t {
                CType::Val(Ty::F32) => {
                    single += 1;
                    (Ty::F32, CpuField::S(single - 1))
                }
                CType::Val(ty) if !ty.float() && ty.bits() <= 32 => {
                    core += 1;
                    (*ty, CpuField::R(core - 1))
                }
                CType::Ptr(_) => {
                    core += 1;
                    (Ty::U32, CpuField::R(core - 1))
                }
                other => return Err(format!("parameter of type {:?}", other)),
            };
            if core > 4 || single > 16 {
                return Err("parameter on the stack".into());
            }
            p.vars.insert(n.clone(), t);
            body.push(Stmt::Decl(ty, n, Some(Expr::Cpu(src))));
            if !p.eat(",") {
                break;
            }
        }
    }
    p.expect(")")?;
    let stmts = p.block()?;
    if stmts.iter().any(|s| contains_break(s)) {
        return Err("break outside the emitter's for loop".into());
    }
    body.extend(stmts);
    // falling off the end of a void function returns
    if p.ret == CType::Void {
        p.epilogue(None, &mut body)?;
    }
    Ok(Function {
        address: address & !1,
        thumb: address & 1 != 0,
        name,
        synced: vec![],
        locals: vec![],
        entries: vec![],
        body,
    })
}

fn contains_break(s: &Stmt) -> bool {
    match s {
        Stmt::Unsupported(w) => w == "break",
        Stmt::If(_, a, b) => a.iter().any(contains_break) || b.iter().any(contains_break),
        Stmt::While { body, check, .. } => body.iter().any(contains_break) || check.iter().any(contains_break),
        _ => false,
    }
}

// The names a function declares (variables, then labels), in the order they appear: a renamed copy of a draft keeps
// the order, which pairs its names with the draft's.
pub fn declared_names(f: &Function) -> (Vec<String>, Vec<String>) {
    fn walk(list: &[Stmt], vars: &mut Vec<String>, labels: &mut Vec<String>) {
        for s in list {
            match s {
                Stmt::Decl(_, n, _) if !n.starts_with("__") => vars.push(n.clone()),
                Stmt::Label(l) => labels.push(l.clone()),
                Stmt::If(_, a, b) => {
                    walk(a, vars, labels);
                    walk(b, vars, labels);
                }
                Stmt::While { top, test, body, check, .. } => {
                    if let Some(t) = test {
                        labels.push(t.clone());
                    }
                    labels.push(top.clone());
                    walk(body, vars, labels);
                    walk(check, vars, labels);
                }
                _ => {}
            }
        }
    }
    let (mut vars, mut labels) = (Vec::new(), Vec::new());
    walk(&f.body, &mut vars, &mut labels);
    (vars, labels)
}

// Renames variables and labels (names not in the map stay).
pub fn rename(f: &mut Function, map: &HashMap<String, String>) {
    fn n(map: &HashMap<String, String>, x: &mut String) {
        if let Some(y) = map.get(x) {
            *x = y.clone();
        }
    }
    fn e(map: &HashMap<String, String>, x: &mut Expr) {
        match x {
            Expr::Var(v) | Expr::AddrOf(v) => n(map, v),
            Expr::Un(_, a) | Expr::Cast(_, a) | Expr::Load(_, a) => e(map, a),
            Expr::Bin(_, a, b) => {
                e(map, a);
                e(map, b);
            }
            Expr::Cond(a, b, c) => {
                e(map, a);
                e(map, b);
                e(map, c);
            }
            Expr::Call(_, args) => args.iter_mut().for_each(|a| e(map, a)),
            _ => {}
        }
    }
    fn s(map: &HashMap<String, String>, list: &mut [Stmt]) {
        for st in list {
            match st {
                Stmt::Decl(_, v, init) => {
                    n(map, v);
                    if let Some(x) = init {
                        e(map, x);
                    }
                }
                Stmt::Assign(v, x) => {
                    n(map, v);
                    e(map, x);
                }
                Stmt::SetCpu(_, x) | Stmt::ReturnUnlessPc(x) => e(map, x),
                Stmt::Store(_, a, b) => {
                    e(map, a);
                    e(map, b);
                }
                Stmt::If(c, a, b) => {
                    e(map, c);
                    s(map, a);
                    s(map, b);
                }
                Stmt::While { top, test, body, check, cond } => {
                    n(map, top);
                    if let Some(t) = test {
                        n(map, t);
                    }
                    e(map, cond);
                    s(map, body);
                    s(map, check);
                }
                Stmt::Goto(l) | Stmt::Label(l) => n(map, l),
                Stmt::Switch(x, cases) => {
                    e(map, x);
                    for (_, l) in cases.iter_mut() {
                        n(map, l);
                    }
                }
                _ => {}
            }
        }
    }
    s(map, &mut f.body);
}
