module dynrules
imports list dynamic-rules
signature
  constructors
    Var  : String -> Exp
    Let  : List(Decl) * Exp -> Exp
    Call : String * List(Exp) -> Exp
    Fdec : String * List(String) * Exp -> Decl
    Vdec : String * Exp -> Decl

strategies

  main = inline

  inline = 
  rec i({| Subst, Inline :
           Declare; all(i)
           <+ Inline; i
	   <+ Subst
           <+ all(i)
        |}
  )
 
  Declare = 
    Let(list(DeclareFun + DeclareVar), id)

  DeclareVar =
    ?Vdec(x,e); 
    rules(
      Inline : Var(x) -> e
      Subst  : Var(x) -> Var(x)
    )

  DeclareFun =
    ?Fdec(f, xs, e); 
    rules(
      Inline : 
        Call(f,es) -> e
        where <zip({?(x,e); rules(Subst : Var(x) -> e)})> (xs, es)
    )

