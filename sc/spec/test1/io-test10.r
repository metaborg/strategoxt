module test10  
imports lib
signature
  constructors
    Zero  : Nat
    Succ  : Nat -> Nat
    Plus  : Nat * Nat -> Nat

rules

  A : Plus(Zero, x) -> x
  B : Plus(Succ(x), y) -> Succ(Plus(x, y))

strategies

  eval = 
    innermost(A + B)

  main = 
    iowrap(eval)
