module BacktrackTest
imports lib
signature
  constructors
    Val: Int -> Val

strategies

  main = 
    if-cpl-loaded(test1)

  test1 =
    !Val(1); debug(!"A: "); my-plus

  my-plus = 
    ( debug(!"a: "); Plus1; debug(!"b: ") 
    ++ debug(!"c: "); Plus2; debug(!"d: ")
    ); debug(!"e: "); ?Val(3)

rules
     
  Plus1: 
    Val(x) -> Val(<add> (1,x))
     
  Plus2: 
    Val(x) -> Val(<debug(!"before add: "); add; debug(!"after add: ")> (2,x))
    where debug(!"Plus2: ")
