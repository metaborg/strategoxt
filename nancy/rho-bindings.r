module rho-bindings
imports rho unification substitution free-variables
rules

  IsVar : Var(x) -> [Var(x)]

  AtVar(s) : Var(x) -> Var(<s> Var(x))

  RhoBound : Rule(t1, t2) -> <collect(Var(id))> t1

strategies

  RhoBoundIn(bnd, ubnd, ignore) =
    Rule(bnd, bnd)

  RhoPaste(nwvars) = id

  rho-unify = unify(Var(id))

  rho-match = pattern-match(Var(id))

  rho-substitute = substitute(Var(id), AtVar, RhoBound, RhoBoundIn, RhoPaste)

  rho-free-vars = free-vars(IsVar, RhoBound)
 
  rho-rename = rename(AtVar, RhoBound)

