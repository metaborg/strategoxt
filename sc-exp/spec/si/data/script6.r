module script6
signature
  sorts Exp
  constructors
    Zero : Exp
    Succ : Exp -> Exp
    Plus : Exp * Exp -> Exp

rules

  A : Plus(Zero, x) -> x
  B : Plus(Succ(x), y) -> Succ(Plus(x, y))