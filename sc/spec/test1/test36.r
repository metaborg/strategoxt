module test36
signature
  constructors
    Stream : a -> b
    stdout : FILE

strategies

  main = 
    ?foo
    ; <fclose> Stream(0)
    ; gclose(|1)
    ; !foo

  fclose =
    ?Stream(o)
    ; prim("SSL_printnl", stdout, [o])
   <+ ?p
      ; prim("SSL_printnl", stdout, [p])


  gclose( | foo) =
    rec x(
    { bar : 
      !foo
      ; ?bar
      ; prim("SSL_printnl", stdout, [bar])
    }
    )
    

