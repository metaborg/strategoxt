(* The module \code{rho-utils} provides several support strategies
   used in the other modules. *)

module rho-utils
imports lib rho rho-bindings

rules

(* \code{LookupVar} returns the body of the definition of some
   variable \code{x}, or prints a fatal error message if it isn't
   defined. 
*)

  LookupVar: (x, ds) -> e
    where <fetch(?Def(x, e)) <+ 
      (<fatal-error> ["undefined var ", x])> ds

strategies

(* These strategies extract various types of declarations from a list
   of declarations. *)

  get-sigs = filter(\Sig(nm, tp) -> (nm, tp)\)
  get-tsigs = filter(\TSig(nm, tp) -> (nm, tp)\)
  get-data = filter(\Data(nm, vars) -> (nm, vars)\)
  get-syns = filter(\Syn(nm, vars, tp) -> (nm, (vars, tp))\)
  get-defs = filter(\Def(nm, e) -> (nm, e)\)

(* \code{remove-hastypes} removes all type annotations from a term. *)

  remove-hastypes = topdown(repeat(\HasType(e, t) -> e\))
