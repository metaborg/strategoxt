module test45
imports tuple-cons list-cons

strategies

   main =  foo(|[1, 2, 3]) 

   foo(|xs*) = !xs*

   bar(|xs*) :  _ -> [xs*]

   foobar(|x) = !x ; {xs* : ?xs*; !xs*}

   foobar(|x) = !x ; ?xs*; !xs*