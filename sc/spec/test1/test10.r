module test10
signature
  constructors
    Nil   : List(a)
    Cons  : a * List(a) -> List(a)

    Zero  : Nat
    Succ  : Nat -> Nat
    Plus  : Nat * Nat -> Nat

rules

  Eval1 : Plus(Zero, x) -> <Eval2> x
  Eval1 : Plus(Succ(x), y) -> Succ(<Eval2> Plus(x, y))
  Eval1 : Zero -> Zero
  Eval1 : Succ(x) -> Succ(<Eval1>x)
  Eval1 : Plus(x,y) -> <Eval1>Plus(<Eval1>x,<Eval1>y)

strategies

  Eval2 = Eval1

  main =  
    !Plus(Succ(Plus(Succ(Zero), Succ(Zero))), Succ(Zero));
    Eval2


