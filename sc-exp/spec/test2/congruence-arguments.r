module congruence-arguments
signature
  constructors
    If : a * b -> b

strategies

  main = <If(id, id)> If("a","b")

