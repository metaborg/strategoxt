module constructor-declaration
imports list-cons

rules

  A : [x, y | z] -> []

  B : ZZZ(x, y) -> BBB(x)

strategies

  main = A; B


