module backtrack-test3
imports lib
signature
  constructors
    Val: Int -> Val

strategies
     
  main = 
    if-cpl-loaded(!Val(1); my-plus)

  my-plus = 
    bagof(debug(!"a: "); (Plus1 <++ Plus2 <++ Plus3); debug(!"b: "))

rules
     
  Plus1: Val(x) -> Val(<add> (1,x))
     
  Plus2: Val(x) -> Val(<add> (2,x))
     
  Plus3: Val(x) -> Val(<add> (3,x))
