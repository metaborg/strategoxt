module test41
signature
  constructors
    Nil   : List(a)
    Cons  : a * List(a) -> List(a)

    Zero  : Nat
    Succ  : Nat -> Nat
    Plus  : Nat * Nat -> Nat

rules

  A : Plus(Zero, x) -> x
  B : Plus(Succ(x), y) -> Succ(Plus(x, y))

  Ident : x -> x

strategies
 
  bottomup(s) =
    rec x(all(x); s)

  eval = 
    bottomup(A <+ B <+ Ident)

  main =  
    !Plus(Succ(Plus(Succ(Zero), Succ(Zero))), Succ(Zero));
    eval
