module test28a
signature
  sorts Exp Type
  constructors
    Var   : String -> Exp
    Plus  : Exp * Exp -> Exp
    Int   : Type
    Float : Type 
    Foo   : List(Type) -> Type
    stderr : Bla

strategies

  debug(s) =
    where(?x; s => y; prim("SSL_printnl", stderr, [y, x]))

  try(s) = 
    s <+ id

  main =
    !Var("a"){Int, Float}
    ; debug(!"a: ")
    ; try( \ Var(s){ts*} -> Var(s){Foo(ts*)} \ )
    ; debug(!"b: ")
    ; ?Var("a"){Foo([Int,Float])}
