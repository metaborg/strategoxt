module overloading
imports lib
signature
  constructors
  A   : a
  B   : a
  C   : a
  F   : a -> a
  G   : a * a -> a

strategies

  main = stdio(f(A))

  f(s1, s2) = G(s1, s2)

rules

  A   :	A -> B

  B   :	B -> C