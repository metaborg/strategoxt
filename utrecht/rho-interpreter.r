(* The module \code{rho-interpreter} defines lazy and strict
   evaluation strategies for RhoStratego (as defined in sections
   \ref{ssec:lazy} and \ref{ssec:strict}, respectively), using the
   rewrite rules given in \code{rho-laws}. *)

module rho-interpreter
imports lib rho rho-laws pack-graph

strategies

(* \code{rho-eval-lazy-io} is the ``main'' function of the lazy
 interpreter.  We evaluate a program by first translating it to a
 let-expression consisting of all top-level declaration, and the
 application of the standard function \code{force} to the
 function \code{main} defined in the input program.  \code{force}
 ensures that the resulting term is evaluated completely; this is in
 effect Haskell's \code{show} function. *)

  rho-eval-lazy-io = iowrap(
    ?Program(decls);
    !Let(decls, App(Var(Id("force", 0)), Var(Id("main", 0))));
    remove-hastypes;
    collect-garbage;
    rho-eval-lazy;
    ?Let(decls', result);
(* Even though force forces strictness of the result, 
   there can be some indirection, e.g. 
   \code{let x = 123; in C x}.  So we replace all variables 
   with their definition. *)
    where (<topdown(repeat(\Var(x) -> 
      <LookupVar> (x, decls')\))> result => result');
    !result'
  )

(* This is the lazy evaluator, as explained in section
 \ref{ssec:lazy}.  Note how we have a clean separation between the
 rewrite rules that do the actual work, and the strategy that controls
 how the rewrite rules are applied. *)

  rho-eval-lazy = rec e(
    Let(id, is-nf)
    + ( LetLet
//    + LetVar // non-sharing version
      + LetVar(e)
      + EvalLeft(e);
        (LeftChoice + LeftChoiceCut + RightChoice)
      + repeat(UncutLeft);
        EvalFunc(e);
        ( Beta
        + Distrib
        + PropFunc
        + Let(id, is-con)
        <+ repeat(UncutRight);
          EvalArg(e);
          ( ConMatchP + ConMatchN
          + IntMatchP + IntMatchN
          + AppMatchP + AppMatchN
          + FailMatchP + FailMatchN
          )
        )
      <+ \x -> <fatal-error> ["got stuck in term ", x]\
      ); e
    )

(* \code{rho-eval-lazy-io} is the main function of the strict
 interpreter.  This is a bit simpler than the wrapper around the lazy
 evaluator, since we don't have to force strictness of the result. *)

  rho-eval-strict-io = iowrap(
    ?Program(decls);
    !Let(decls, Var(Id("main", 0)));
    remove-hastypes;
    collect-garbage;
    rho-eval-strict;
    debug;
    \Let(decls', result) -> result\
  )

(* This is the strict evaluator, as explained in section
 \ref{ssec:strict}. *)

  rho-eval-strict = rec e(
    Let(id, rec x(is-nf; (not(is-con) <+ 
                  rec y(Con(id) + App(y, x)))))
    + ( LetLet'(e)
//    + LetVar // non-sharing version
      + LetVar(e)
      + EvalLeft(e);
        (LeftChoice + LeftChoiceCut + RightChoice)
      + repeat(UncutRight);
        EvalArg(e);
        repeat(UncutLeft);
        EvalFunc(e);
        ( FailMatchP + FailMatchN
        <+ PropArg 
        <+ Beta
        + Distrib
        + PropFunc
        + Let(id, is-con)
        + ConMatchP + ConMatchN
        + IntMatchP + IntMatchN
        + AppMatchP + AppMatchN
        )
      <+ \x -> <fatal-error> ["got stuck in term ", x]\
      ); e
    )

(* The remainder of this module is a garbage collector.  It removes
 unused definitions from a let-expression.  The standard strategy
 \code{graph-nodes} does all the hard work: calculating the transitive
 closure under the ``the body of definition $x$ uses $y$'' relation, using
 the body of the expression as the root of the garbage collector. 

 Note that the garbage collector cannot be applied to just any
 let-expression --- only the ``top-level'' let.  For example, to evaluate
 $\term{let} \; ds \; \term{in} \; e_1 e_2$, we first evaluate
 $\term{let} \; ds \; \term{in} \; e_1$.  But if we garbage-collect on
 the latter term, the variables appearing in $e_2$ will not be used as
 roots.
*)

rules

  get-def: ("", Let(_, e)) -> e
  get-def: (x, Let(ds, _)) -> e
  where <LookupVar> (x, ds) => e

  used-vars: e -> <rho-free-vars; map(\Var(y) -> y\)> e

  add-def: ("", e, ds) -> ds
  add-def: (x, e, ds) -> [Def(x, e) | ds]

strategies

  collect-garbage =
    ?Let(ds, e);
    where (<printnl> (stderr, ["before gc: ", <length> ds]));
    where (<graph-nodes(get-def, used-vars, add-def)> 
      ("", Let(ds, e), []) => ds');
    where (<printnl> (stderr, ["after gc:  ", <length> ds']));
    !Let(ds', e)
