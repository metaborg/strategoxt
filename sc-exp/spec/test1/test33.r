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

  main = 
   <inline>
      Let([Fdec("f", ["x"], Call("h", [Var("x")])), Vdec("y", Var("z"))]
	 ,[Call("f", [Var("y")])])
   => Let([Fdec("f",["x"],Call("h",[Var("x")])),Vdec("y",Var("z"))],
          [Call("h",[Var("z")])])

  inline = 
  rec i({| Subst, Inline :
           Declare; all(i)
           <+ Inline; i
	   <+ Subst; i
           <+ all(i)
        |}
  )
 
  Declare = 
    Let(list(DeclareFun + DeclareVar), id)

  DeclareVar =
    ?Vdec(x,e); 
    rules(
      Inline : Var(x) -> e
      Subst  : Var(x) -> Undefined
    )

  DeclareFun =
    ?Fdec(f, xs, e); 
    rules(
      Inline : 
        Call(f,es) -> e
        where <zip({?(x,e); rules(Subst : Var(x) -> e)})> (xs, es)
    )

