module innermost

imports lib

signature
  sorts Nat
  constructors
    Zero : Nat
    Succ : Nat -> Nat
    Plus : Nat * Nat -> Nat

rules

  A : Plus(Zero, x) -> x

  B : Plus(Succ(x), y) -> Succ(Plus(x, y))

strategies

  main = iowrap(innermost(A + B))