module rho-cleanup
imports lib rho

signature
  constructors
    Any    : Term
    BinOp  : Term * String * Term -> Term
    ConOp  : Term * String * Term -> Term
    Infix  : Term * Term * Term -> Term
    Congr  : String * List(Term) -> Term
    Prod   : List(Term) -> Term
    List   : List(Term) -> Term
    TProd  : List(Type) -> Type
    TList  : Type -> Type
    Data   : String -> Decl
    Sig    : List(String) * Type -> Decl
    TSig   : List(String) * Type -> Decl
    TermE  : TermL
    TermN  : Term -> TermL
    TermC  : Term * TermL -> TermL
    TypeE  : TypeL
    TypeN  : Type -> TypeL
    TypeC  : Type * TypeL -> TypeL
    IdN    : String -> IdL
    IdC    : String * IdL -> IdL
    ConIdN : String -> ConIdL
    ConIdC : String * ConIdL -> ConIdL

rules
  C: Var(x) -> Var(Id(x, 0))
  C: Def(x, e) -> Def(Id(x, 0), e)
  C: Int(s) -> Int(<string-to-int> s)
  C: Any() -> Var(Id(<new> (), 0))
  C: BinOp(l, op, r) -> App(App(Var(op), l), r)
  C: ConOp(l, op, r) -> App(App(Con(op), l), r)
  C: Infix(l, op, r) -> App(App(op, l), r)
  C: PrimOp(s) -> PrimOp(<fixup> s)
  C: Const(Str(s)) -> Const(Str(<fixup> s))
  C: Congr(c, es) -> Rule(pat, body)
     where 
       <map(new)> es => nms;
       <foldl(\(nm, y) -> App(y, Var(nm))\)> (nms, Con(c)) => pat;
       <foldl(\((nm, e), y) -> App(y, App(e, Var(nm)))\)> 
         (<zip(id)> (nms, es), Con(c)) => body
  C: Prod(es) -> e
     where <foldr(!Con("Void"), \(l, r) -> App(App(Con("Tup"), l), r)\)> es => e
  C: List(es) -> e
     where <foldr(!Con("[]"), \(l, r) -> App(App(Con(":"), l), r)\)> es => e
  C: TProd(ts) -> t
     where <foldr(!TCon("Void"), \(l, r) -> TApp(TApp(TCon("Tup"), l), r)\)> ts => t
  C: TList(t) -> TApp(TCon("[]"), t)
  C: Data(nm) -> Data(nm, [])
  C: Sig(nms, tp) -> <map(\nm -> Sig(nm, tp)\)> nms
  C: TSig(nms, tp) -> <map(\nm -> TSig(nm, tp)\)> nms

  D: TermE() -> []
  D: TermN(t) -> [t]
  D: TermC(t, ts) -> [t | ts]
  D: TypeE() -> []
  D: TypeN(t) -> [t]
  D: TypeC(t, ts) -> [t | ts]
  D: IdN(x) -> [Id(x, 0)]
  D: IdC(x, xs) -> [Id(x, 0) | xs]
  D: ConIdN(x) -> [x]
  D: ConIdC(x, xs) -> [x | xs]

  (* Flatten lists. *)
  E: xs@[_|_] -> <map(is-list <+ \x -> [x]\); concat> xs
  
strategies

  rho-cleanup = iowrap(bottomup(try(D)); topdown(try(C)); topdown(try(E)))

  fixup = explode-string; Tl; init; implode-string
