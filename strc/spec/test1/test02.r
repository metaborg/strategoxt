module test2
imports list-cons
signature
  constructors
    Call : a * List(a) -> Call

strategies

  main = 
    ?[prog | args];
    !Call(prog, args)
