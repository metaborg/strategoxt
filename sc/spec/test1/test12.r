module test12
signature
  sorts Term
  constructors
    I : Term
    F : Term * Term -> Term
    G : Term -> Term

rules

  R : F(x, x) -> G(x)

strategies

  main =
    <R> F(I, I) => G(I)

  
