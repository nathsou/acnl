// C-like text of the AST (for reading the decompiler's output; the C++ emitter builds on it).
use crate::ast::*;

fn prec(op: BinOp) -> u32 {
    match op {
        BinOp::LOr => 1,
        BinOp::LAnd => 2,
        BinOp::Or => 3,
        BinOp::Xor => 4,
        BinOp::And => 5,
        BinOp::Eq | BinOp::Ne => 6,
        BinOp::Lt | BinOp::Le | BinOp::Gt | BinOp::Ge => 7,
        BinOp::Shl | BinOp::Shr => 8,
        BinOp::Add | BinOp::Sub => 9,
        BinOp::Mul | BinOp::Div | BinOp::Rem => 10,
    }
}

fn op_text(op: BinOp) -> &'static str {
    match op {
        BinOp::Add => "+",
        BinOp::Sub => "-",
        BinOp::Mul => "*",
        BinOp::Div => "/",
        BinOp::Rem => "%",
        BinOp::And => "&",
        BinOp::Or => "|",
        BinOp::Xor => "^",
        BinOp::Shl => "<<",
        BinOp::Shr => ">>",
        BinOp::Eq => "==",
        BinOp::Ne => "!=",
        BinOp::Lt => "<",
        BinOp::Le => "<=",
        BinOp::Gt => ">",
        BinOp::Ge => ">=",
        BinOp::LAnd => "&&",
        BinOp::LOr => "||",
    }
}

pub fn cpu(f: &CpuField) -> String {
    match f {
        CpuField::R(n) => format!("c->r[{}]", n),
        CpuField::S(n) => format!("c->s[{}]", n),
        CpuField::Flag(s) => format!("c->{}", s),
        CpuField::Fpscr => "c->fpscr".into(),
        CpuField::Tls => "c->tls".into(),
        CpuField::Pc => "c->pc".into(),
    }
}

fn num(v: u64, t: Ty) -> String {
    let suffix = if t == Ty::U32 { "u" } else if t == Ty::U64 { "ull" } else { "" };
    if v < 10 {
        format!("{}{}", v, suffix)
    } else {
        format!("0x{:x}{}", v, suffix)
    }
}

// the expression's text at a context of precedence `outer` (parenthesised when needed)
pub fn expr_at(e: &Expr, outer: u32) -> String {
    match e {
        Expr::Num(v, t) => num(*v, *t),
        Expr::Float(v, _) => format!("{:?}", v),
        Expr::Var(n) => n.clone(),
        Expr::Cpu(f) => cpu(f),
        Expr::Un(op, a) => {
            let o = match op {
                UnOp::Neg => "-",
                UnOp::Not => "~",
                UnOp::LNot => "!",
            };
            format!("{}{}", o, expr_at(a, 11))
        }
        Expr::Bin(op, a, b) => {
            let p = prec(*op);
            let s = format!("{} {} {}", expr_at(a, p - 1), op_text(*op), expr_at(b, p));
            if p <= outer {
                format!("({})", s)
            } else {
                s
            }
        }
        Expr::Cast(t, a) => format!("({}){}", t.c_name(), expr_at(a, 11)),
        Expr::Cond(c, a, b) => {
            let s = format!("{} ? {} : {}", expr_at(c, 0), expr_at(a, 0), expr_at(b, 0));
            if outer > 0 {
                format!("({})", s)
            } else {
                s
            }
        }
        Expr::Load(t, a) => format!("RD{}({})", t.bits(), expr_at(a, 0)),
        Expr::Call(n, args) => format!("{}({})", n, args.iter().map(|a| expr_at(a, 0)).collect::<Vec<_>>().join(", ")),
        Expr::AddrOf(n) => format!("&{}", n),
    }
}

pub fn expr(e: &Expr) -> String {
    expr_at(e, 0)
}

pub fn stmts(list: &[Stmt], indent: usize, out: &mut String) {
    let pad = "    ".repeat(indent);
    for s in list {
        match s {
            Stmt::Decl(t, n, Some(e)) => out.push_str(&format!("{}{} {} = {};\n", pad, t.c_name(), n, expr(e))),
            Stmt::Decl(t, n, None) => out.push_str(&format!("{}{} {};\n", pad, t.c_name(), n)),
            Stmt::Assign(n, e) => out.push_str(&format!("{}{} = {};\n", pad, n, expr(e))),
            Stmt::SetCpu(f, e) => out.push_str(&format!("{}{} = {};\n", pad, cpu(f), expr(e))),
            Stmt::Store(t, a, v) => out.push_str(&format!("{}WR{}({}, {});\n", pad, t.bits(), expr(a), expr(v))),
            Stmt::If(c, a, b) => {
                out.push_str(&format!("{}if ({}) {{\n", pad, expr(c)));
                stmts(a, indent + 1, out);
                if b.is_empty() {
                    out.push_str(&format!("{}}}\n", pad));
                } else {
                    out.push_str(&format!("{}}} else {{\n", pad));
                    stmts(b, indent + 1, out);
                    out.push_str(&format!("{}}}\n", pad));
                }
            }
            Stmt::Goto(l) => out.push_str(&format!("{}goto {};\n", pad, l)),
            Stmt::Label(l) => out.push_str(&format!("{}:\n", l)),
            Stmt::SyncOut => out.push_str(&format!("{}SO();\n", pad)),
            Stmt::SyncIn => out.push_str(&format!("{}SI();\n", pad)),
            Stmt::GuestCall(t, tail) => out.push_str(&format!("{}{}call_{:08x}();\n", pad, if *tail { "return " } else { "" }, t)),
            Stmt::Dispatch(tail) => out.push_str(&format!("{}{}call_indirect(c->pc);\n", pad, if *tail { "return " } else { "" })),
            Stmt::Switch(e, cases) => {
                out.push_str(&format!("{}switch ({}) {{\n", pad, expr(e)));
                for (k, l) in cases {
                    out.push_str(&format!("{}case 0x{:x}: goto {};\n", pad, k, l));
                }
                out.push_str(&format!("{}}}\n", pad));
            }
            Stmt::Svc(n) => out.push_str(&format!("{}svc({});\n", pad, n)),
            Stmt::Preempt => {}
            Stmt::ReturnUnlessPc(_) => {}
            Stmt::Return => out.push_str(&format!("{}return;\n", pad)),
            Stmt::Nop => {}
            Stmt::Unsupported(w) => out.push_str(&format!("{}/* unsupported: {} */\n", pad, w)),
        }
    }
}

pub fn function(f: &Function) -> String {
    let mut out = format!("// {}\n", f.name);
    for (t, n, e) in &f.locals {
        match e {
            Some(e) => out.push_str(&format!("{} {} = {};\n", t.c_name(), n, expr(e))),
            None => out.push_str(&format!("{} {};\n", t.c_name(), n)),
        }
    }
    stmts(&f.body, 0, &mut out);
    out
}
