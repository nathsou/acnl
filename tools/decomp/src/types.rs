// C types of expressions without solving anything (the same rules sym.rs applies), for the rewriting passes.
use crate::ast::*;
use std::collections::HashMap;

pub fn promote(t: Ty) -> Ty {
    match t {
        Ty::U8 | Ty::U16 | Ty::S8 | Ty::S16 | Ty::Bool => Ty::S32,
        other => other,
    }
}

pub fn common(a: Ty, b: Ty) -> Ty {
    let (a, b) = (promote(a), promote(b));
    if a == Ty::F64 || b == Ty::F64 {
        return Ty::F64;
    }
    if a == Ty::F32 || b == Ty::F32 {
        return Ty::F32;
    }
    if a.bits() == 64 || b.bits() == 64 {
        return if a == Ty::U64 || b == Ty::U64 { Ty::U64 } else { Ty::S64 };
    }
    if a == Ty::U32 || b == Ty::U32 {
        Ty::U32
    } else {
        Ty::S32
    }
}

fn helper_type(name: &str) -> Ty {
    match name {
        "U2F" | "sqrtf" | "fabsf" | "vfp_f" => Ty::F32,
        "D2F" | "sqrt" | "fabs" => Ty::F64,
        "D2B" => Ty::U64, // a double's bits
        _ => Ty::U32,
    }
}

// The type of an expression given the declared types of the variables in scope (None: unknown variable).
pub fn type_of(e: &Expr, vars: &HashMap<String, Ty>) -> Option<Ty> {
    Some(match e {
        Expr::Num(_, t) | Expr::Float(_, t) => *t,
        Expr::Var(n) => *vars.get(n)?,
        Expr::Cpu(CpuField::S(_)) => Ty::F32,
        Expr::Cpu(_) => Ty::U32,
        Expr::Un(UnOp::LNot, _) => Ty::S32,
        Expr::Un(_, a) => promote(type_of(a, vars)?),
        Expr::Bin(op, a, b) => match op {
            BinOp::Eq | BinOp::Ne | BinOp::Lt | BinOp::Le | BinOp::Gt | BinOp::Ge | BinOp::LAnd | BinOp::LOr => Ty::S32,
            BinOp::Shl | BinOp::Shr => promote(type_of(a, vars)?),
            _ => common(type_of(a, vars)?, type_of(b, vars)?),
        },
        Expr::Cast(t, _) | Expr::Load(t, _) => *t,
        Expr::Cond(_, a, b) => {
            let (ta, tb) = (type_of(a, vars)?, type_of(b, vars)?);
            if ta == tb {
                ta
            } else {
                common(ta, tb)
            }
        }
        Expr::Call(n, _) => helper_type(n),
        Expr::AddrOf(_) => return None,
    })
}

// What an expression reads: variables, CPU fields, memory.
#[derive(Default, Debug)]
pub struct Reads {
    pub vars: Vec<String>,
    pub cpu: bool,
    pub memory: bool,
    pub out_params: bool, // &x arguments (the helper writes x)
}

pub fn reads(e: &Expr, r: &mut Reads) {
    match e {
        Expr::Num(..) | Expr::Float(..) => {}
        Expr::Var(n) => r.vars.push(n.clone()),
        Expr::Cpu(_) => r.cpu = true,
        Expr::Un(_, a) | Expr::Cast(_, a) => reads(a, r),
        Expr::Bin(_, a, b) => {
            reads(a, r);
            reads(b, r);
        }
        Expr::Cond(c, a, b) => {
            reads(c, r);
            reads(a, r);
            reads(b, r);
        }
        Expr::Load(_, a) => {
            r.memory = true;
            reads(a, r);
        }
        Expr::Call(_, args) => {
            for a in args {
                reads(a, r);
            }
        }
        Expr::AddrOf(n) => {
            r.out_params = true;
            r.vars.push(n.clone());
        }
    }
}
