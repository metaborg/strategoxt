module backtrack-test2
imports lib
signature
  constructors
    Val: Int -> Val

strategies
     
  main = 
    if-cpl-loaded(!Val(1); my-plus)

  my-plus = 
    ( Plus1 <++ Plus2); ?Val(3)

rules
     
  Plus1: Val(x) -> Val(<add> (1,x))
     
  Plus2: Val(x) -> Val(<add> (2,x))
