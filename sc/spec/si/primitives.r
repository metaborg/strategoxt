(*
  
  for each primitive p defined by a definition of the form

     p' = prim(p)

  generate an evaluation rule

     EvalPrim : App(Prim(p), t) -> <p'> t

  there is one default rule

     EvalPrimFail : App(Prim(p), t) -> Fail

*)

module primitives
imports lib strategy

strategies

  main = 
    iowrap(
      get-primitives; 
      \ rdefs -> Specification([Rules(rdefs)]) \
    )

  get-primitives =
    collect(EvalPrimitive)

rules

  EvalPrimitive :
    SDef(name,[],Prim(p)) ->
    RDef("EvalPrim", [], 
         Rule(Op("App", [Op("Prim", [Str(p)]), Var("t")]),
              App(Call(SVar(name),[]), Var("t")),
              Id))

