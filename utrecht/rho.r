(* The module \code{rho} defines the type signatures of the abstract
   syntax of the RhoStratego language. *)

module rho

signature
  sorts Program Decl Term Type Id
  constructors 
    Program : List(Decl) -> Program

    Def     : Id * Term -> Decl         // x = f y 123
    Sig     : Id * Type -> Decl         // a :: Foo -> Bar
    TSig    : Id * Type -> Decl         // A :: Foo -> Bar
    Data    : String * List(String) -> Decl
    Syn     : String * List(String) * Type -> Decl

    Con     : String -> Term            // A
    Var     : Id -> Term                // x
    Const   : Const -> Term
    Int     : String -> Const           // n
    Str     : String -> Const           // "..."
    Rule    : Term * Term -> Term       // e -> e
    App     : Term * Term -> Term       // e e
    Fail    : Term                      // fail
    LChoice : Term * Term -> Term       // e <+ e
    Let     : List(Decl) * Term -> Term // let ds in e
    Cut     : Term -> Term              // ^e
    PrimOp  : String -> Term            // primOp "foo"
    XPat    : Term -> Term              // {x}
    HasType : Term * Type -> Term       // e :: t
    RTTC    : Type * Term -> Term       // t ? pat

    Id      : String * Int -> Id        // (orig. var name, unique var number)

    TCon    : String -> Type            // Int
    TVar    : String -> Type            // x
    TApp    : Type * Type -> Type       // t t
    TForAll : String * Type -> Type     // a . t
    TFun    : Type * Type -> Type       // t -> t 
    TRTTC   : Type -> Type              // ?t
    TGen    : Type * List(Type) -> Type // Gen(a_0, [a_1, ..., a_n])

strategies

(* The following strategies are supposed to verify that a term is a
   valid RhoStratego term, but they are not complete. *)

  rho-term =
  rec t(
    Var(is-string)
    + Con(is-string)
    + App(t, t)
    + Rule(rho-pattern, t)
    + Pair(t, t)
    + Fail
  )
 
  rho-pattern =
  rec p(
    Var(is-string)
    + Con(is-string)
    + App(p, p)
  )
