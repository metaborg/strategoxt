module dynrules
imports list dynamic-rules io
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
           debug(!"inline a: "); Declare; debug(!"inline b: "); all(i); debug(!"inline c: ")
           <+ debug(!"inline d: "); Inline; debug(!"inline da: "); i; debug(!"inline db: ")
	   <+ debug(!"inline e: "); Subst; debug(!"inline ea: "); i; debug(!"inline b: ")
           <+ debug(!"inline f: ");  debug(!"inline fa: "); all(i); debug(!"inline fb: ")
        |}
  )
 
  Declare = 
    Let(list(DeclareFun + DeclareVar), id)

  DeclareVar =
    ?Vdec(x,e); 
    debug(!"DeclareVar: ");
    rules(
      Inline : Var(x) -> e
      Subst  : Var(x) -> Undefined
    )

  DeclareFun =
    ?Fdec(f, xs, e); 
    debug(!"DeclareFun: ");
    rules(
      Inline : 
        Call(f,es) -> e
        where debug(!"Inline: ")
	    ; <debug(!"Inline: "); zip({?(x,e); rules(Subst : Var(x) -> e)})> (xs, es)
    )
    ; where(<table-getlist> "Inline"; debug(!"Inline rule: "))

