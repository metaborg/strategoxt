module io-test11
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

  try(s) = s <+ id
 
  repeat(s)	= rec x(try(s; x)) 
  topdown(s)	= rec x(s; all(x))
  bottomup(s)	= rec x(all(x); s)
  downup(s)	= rec x(s; all(x); s)
  downup(s1,s2) = rec x(s1; all(x); s2)
  innermost(s)	= rec x(all(x); rec y(s; bottomup(y) <+ id))

  eval = 
    innermost(A + B)

  main = 
    iowrap(eval)
