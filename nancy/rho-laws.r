(*
  TODO:

  - examples: object thingies

*)

module rho-laws
imports rho rho-bindings fixpoint-traversal

strategies

  // evaluation strategy for rho terms

  rho-eval = 
    innermost(
      (Fire <+ FireFail) 
      + Distrib 
      + Distrib'
      + NullUnit
    )

rules

  Fire :
    App(Rule(t1, t2), t3) -> <rho-substitute> (sbs, t2)
    where <rho-match> [(t1, t3)] => sbs

  FireFail :
    App(Rule(t1, t2), t3) -> Null

  Distrib :
    App(Pair(t1, t2), t3) -> Pair(App(t1, t3), App(t2, t3))

  Distrib' :
    App(Null, t) -> Null

  NullUnit :
    Pair(Null, t) -> t

  NullUnit :
    Pair(t, Null) -> t

strategies

  // evaluation strategy for rho terms with explicit matching and
  // substitution

  rho-eval = 
    innermost(
      (FireExplicit <+ FireFail) 
      + Distrib 
      + Distrib'
      + NullUnit
      + SubsExplicit
    )

rules

  // explicit matching

  FireExplicit :
    App(Rule(Var(x), t1), t2) -> Subs([(Var(x), t1)], t2)

  FireExplicit :
    App(Rule(Null, t), Null) -> t

  FireExplicit :
    App(Rule(Con(c), t), Con(c)) -> t

  FireExplicit :
    App(Rule(Pair(p1,p2), t), Pair(t1,t2)) -> 
    App(App(Rule(p1, Rule(p2, t)), t1), t2)

  FireExplicit :
    App(Rule(App(p1,p2), t), App(t1,t2)) -> 
    App(App(Rule(p1, Rule(p2, t)), t1), t2)

rules

  // explicit substitution

  SubsExplicit :
    Subs(ren, Var(x)) -> t
    where <lookup> (Var(x), ren) => t

  SubsExplicit :
    Subs(ren, Var(x)) -> Var(x)
    where <not(lookup)> (Var(x), ren)

  SubsExplicit :
    Subs(ren, Con(c)) -> Con(c)

  SubsExplicit :
    Subs(ren, Null) -> Null

  SubsExplicit :
    Subs(ren, App(t1, t2)) -> App(Subs(ren, t1), Subs(ren, t2))
    
  SubsExplicit :
    Subs(ren, Pair(t1, t2)) -> Pair(Subs(ren, t1), Subs(ren, t2))
    
  SubsExplicit :
    Subs(ren, Rule(t1, t2)) -> 
    Rule(Subs(ren', t1), Subs(<conc> (ren', ren), t2))
    where <collect(Var(id))> t1 => vs;
          map( \x -> (x, Var(<new>()))\ ) => ren'
