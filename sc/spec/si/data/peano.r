module peano
imports fixpoint-traversal
signature
  sorts Nat
  constructors
    Zero : Nat
    Succ : Nat -> Nat
    Plus : Nat * Nat -> Nat
    Mul  : Nat * Nat -> Nat
    Mod  : Nat * Nat -> Nat

rules

  P1 : Plus(Zero, x) -> x
  P2 : Plus(Succ(x), y) -> Succ(Plus(x, y))

  P3 : Mul(Zero, x) -> Zero
  P4 : Mul(Succ(x), y) -> Plus(y, Mul(x, y))

  P5 : Sub(x, Zero) -> x
  P6 : Sub(Succ(x), Succ(y)) -> Sub(x, y)

strategies

  eval-peano = innermost(P1 + P2 + P3 + P4 + P5 + P6)

