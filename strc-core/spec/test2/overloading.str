module overloading
imports list-cons tuple-cons
imports simple-traversal
signature
  constructors
    A   : Term
    B   : Term
    C   : Term
    D   : Term 
    F   : Term -> Term
    G   : Term * Term -> Term

strategies

  main' = stdio([f(RA); RD, f(RA, RB); RC])

  main = 
   <[f(RA); RD, f(RA, RB); RC]> [F(A),G(A,B)] => [F(D),G(D,C)]

  f(s) = F(s)

  f(s1, s2) = G(s1, s2)

rules

  RA   : A -> B

  RB   : B -> C

  RC   : G(x[B], y) -> G(x[D], y)

  RD   : F(x[B]) -> F(x[D](oncebu))