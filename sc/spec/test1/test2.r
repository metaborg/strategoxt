module test2
signature
  constructors
    Call : a * List(a) -> Call

strategies

  main = 
    ?[prog | args];
    !Call(prog, args)
