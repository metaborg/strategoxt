module lettest
strategies

   main =
     let lettest(s) = <s> (1, 2)
      in lettest({?(x,y); prim("SSL_addi", x, y)})
     end