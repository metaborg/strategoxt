module test5
signature
  constructors
    Nil   : List(a)
    Cons  : a * List(a) -> List(a)
    TNil  : List(a)
    TCons : a * List(a) -> List(a)
    F     : a -> a
    F     : a * a -> a 

strategies
 
  eq = ?(x, x)

  main =  
    !(F(1),F(1));
    eq;
    !F(3)
