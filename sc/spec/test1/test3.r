module test3
signature
  constructors
    Nil   : List(a)
    Cons  : a * List(a) -> List(a)
    TNil  : List(a)
    TCons : a * List(a) -> List(a)
    Call  : a * List(a) -> Call

rules

  split(f, g) : x -> (<f> x, <g> x)

strategies

  main = 
    ?[prog | args];
    split(!Call(prog, args), id) 
