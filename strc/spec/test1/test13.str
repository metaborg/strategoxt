module test13
imports lib
signature
   constructors
     Add : Int * Int -> Exp

strategies

  eval =
    ?Add(i,j); <add>(i,j)

  main = 
    !Add(1,2);
    eval;
    ?3
