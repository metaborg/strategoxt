module assignment
imports list-cons
signature
  constructors
    A : Term
    G : Term -> Term
    F : Term * Term -> Term

strategies

  main = <bla> G(A())

  s = ?G(x); !F(x,x)

  bla = s => F(x, y)