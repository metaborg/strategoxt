module test14
signature
   constructors
     Add : Int * Int -> Exp

strategies

  try(s) =
    s <+ id

  list(s) =
    rec x([] + [s | x])

  main = 
    list(try(?Add(1,x)));
    (!x <+ !2)
