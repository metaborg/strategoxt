module test35
signature
  constructors
    Stream    : ImplDep -> Stream

    Path      : String -> FileLoc

    stdin     : FileLoc
    stdout    : FileLoc
    stderr    : FileLoc


strategies

  Hd     : [x | _] -> x
  Tl     : [_ | l] -> l

  member = 
    debug(!"member? ");
    (?x, fetch(?x))
    ; debug(!"member: ")

  fetch(s) =
    rec x(debug(!"fetch? "); ([s | id] <+ [id | x]); debug(!"fetch: "))

  debug =
    where(<printnl> (stderr, [<id>]))

  debug(msg) =
    where(<printnl> (stderr, [<msg>,<id>]))

  printnl =
    ?(name, strs); where(prim("SSL_printnl", name, strs))

  main =
    <debug; different; debug> ["F","G","X","e_0","f_0","d_0"]

  different =
    debug(!"different? ")
    ; ([] + where(!(<Hd>, <Tl>); not(member))
            ; where(Tl; different))
    ; debug(!"different: ")
    