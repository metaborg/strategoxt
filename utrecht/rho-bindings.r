(* The module \code{rho-bindings} defines strategies for renaming of and
   substitutions on RhoStratego terms and types, using the
   language-independent generic strategies defined in
   \cite{langindtrav}. *)

module rho-bindings
imports lib substitution rho

(* First we define renaming and substitutions for terms.  This is done
 by the generic \code{rename} and \code{substitute} strategies, which
 must be parameterised with a number of strategies:
 \begin{itemize}
 \item \code{AtVar(s)} that applies some strategy 
   to an identifier (such as replacing it with a new name).
 \item \code{RhoBound} that returns the variables defined
   in an expression (i.e., the variables in the left-hand side of a
   function and those defined in a let-expression).
 \item \code{RhoBoundIn} indicates {\em where} variables
   are bound.  This is slightly complicated by the fact that variables
   defined in transformational patterns are not bound in the
   right-hand side of the function in which the pattern appears.
 \item \code{RhoPaste} replaces variables at binding
   sites.
 \item \code{RhoNewVar} generates a new identifier, given an existing
   identifier. In the RhoStratego interpreter and compiler,
   identifiers are not simply strings but (name, number) tuples.  This
   is to preserve the original name when renaming, for more
   intelligible output or error messages.  When we rename an
   identifier, the name stays the same, but the number is a new unique
   number.
 \end{itemize}
*)

rules

  IsVar: Var(x) -> [Var(x)]

  AtVar(s): Var(x) -> Var(<s> Var(x))

  RhoBound: Rule(t1, t2) -> <collect(Var(id))> t1

  RhoBound: Let(defs, t) -> 
    <map(\Def(Id(nm, n), t) -> Var(Id(nm, n))\ )> defs

  RhoNewVar: Var(Id(name, nr)) -> Id(name, <unique-int> ())

strategies

  boundin-pat(bnd,ubnd) =
    rec x(XPat(ubnd) + Var(id); bnd + App(x, x) + Const(id))

  RhoBoundIn(bnd, ubnd, ignore) =
    Rule(boundin-pat(bnd, ubnd), bnd) +
    Let(bnd, bnd)

  RhoPaste(nwvars) = 
    Rule(id, id) +
    Let(split(nwvars, id); 
        zip(\ (x, Def(_, t)) -> Def(x, t)\ )
       ,id)

  rho-substitute = substitute(
    Var(id), AtVar, RhoBound, RhoBoundIn, RhoPaste)

  rho-free-vars = free-vars(IsVar, RhoBound)
 
  rho-rename = rename(
    AtVar, RhoBound, RhoBoundIn, RhoPaste, RhoNewVar)


(* Similarly, we define renaming and substitutions for types. *)

rules

  IsTVar: TVar(x) -> [TVar(x)]

  AtTVar(s): TVar(x) -> TVar(<s> x)

  RhoTBound: TForAll(var, tp) -> [var]

strategies

  RhoTBoundIn(bnd, ubnd, ignore) = TForAll(bnd, bnd)

  RhoTPaste(nwvars) = TForAll(nwvars; \[x] -> x\, id)

  rho-free-tvars = free-vars(IsTVar, RhoTBound)
 
  rho-trename = rename(
    AtTVar, RhoTBound, RhoTBoundIn, RhoTPaste)


(* The generic renamer defined in Stratego's standard library is not
 entirely generic enough: it doesn't allow us to define how new
 variable names are generated --- it just generates a random new
 string not currently in use.  However, we want to retain the original
 name of a variable when we rename it, in the manner described above.
 Therefore the following renamer is parameterised with a strategy
 defining how new identifiers are to be generated. 
*)

rules

  RnBinding(bndvrs, paste : term * (term -> vars) -> term, newvar) :
    (t, env1) -> (<paste(!ys)> t, env1, env2)
    where <bndvrs> t => xs; map(newvar) => ys; 
          <conc>(<zip(id)>(xs,ys), env1) => env2

strategies

  rename(isvar : name * (name -> env) -> term
        , bndvars
        , boundin : term * (term -> term) * (term -> term) * (term -> term) -> term
        , paste : term * (term -> vars) -> term
        , newvar
        )
  = \ t -> (t, []) \ ;
    rec x(env-alltd(RnVar(isvar)
                    <+ RnBinding(bndvars, paste, newvar);
                       DistBinding(x, boundin)))

  unique-int = prim("uniqueInt")
