module test14
imports lib
signature
   constructors
     Add : Int * Int -> Exp

strategies

  main = 
    list(try(?Add(1,x)));
    (!x <+ !2)
