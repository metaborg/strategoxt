(* The module \code{rho-laws} defines the semantic rules of the
   RhoStratego language, as defined in section \ref{sec:semantics}. 
*)

module rho-laws
imports lib rho rho-bindings rho-utils

rules

(* The following rules corresponding rather directly to those in
   section \ref{sec:semantics}. 
*)

  LetLift: e -> Let([], e)

  LetLet: 
    Let(ds1, Let(ds2, e)) -> Let(<conc> (ds2', ds1), e')
    where <rho-rename> Let(ds2, e) => Let(ds2', e')

(** {\sc LetLet'} is the most complex rule by far.  It deals with
 let-expressions in the strict evaluator.  We add all definitions to
 the global environment after renaming (just like the {\sc LetLet}
 rule does), and then we evaluate each definition in the order in
 which they appear in the let-expression.  If any of them fails, the
 entire expression fails. 

 Some rules, like this one, are parameterised with a strategy
 determining evaluation of the subterms. *)

  LetLet'(e):
    Let(ds1, Let(ds2, e)) -> e''
    where
      <rho-rename> Let(ds2, e) => Let(ds2', e');
      <conc> (ds2', ds1) => ds';
      <foldl(
        \(_, Let(ds, Fail)) -> Let(ds, Fail)\ <+
        Eval1Let(e)
      )> (ds2', Let(ds', e')) => e''

  Eval1Let(e):
    (Def(x, _), Let(ds, e)) -> Let(ds', e')
    where
      <e> Let(ds, Var(x)) => Let(ds', e2);
      <Fail <+ !e> e2 => e'

  LetVar:
    Let(ds, Var(x)) -> Let(ds, <LookupVar> (x, ds))

  LetVar(e):
    Let(ds, Var(x)) -> Let(ds'', e')
    where <debug(!"eval ")> x;
          <LookupVar> (x, ds) => e;
          <e> Let(ds, e) => Let(ds', e');
          <map(try(?Def(x, _); !Def(x, e')))> ds' => ds''

  Beta:
    Let(ds, App(Rule(Var(x), e1), e2)) -> 
    Let(ds, Let([Def(x, e2)], e1))

  ConMatchP:
    Let(ds, App(Rule(Con(c), e), Con(c))) -> Let(ds, e)

  ConMatchN:
    Let(ds, App(Rule(Con(c), _), e2)) -> Let(ds, Fail)
    where <is-nf; not(?Con(c))> e2

  IntMatchP:
    Let(ds, App(Rule(Const(Int(n)), e), Const(Int(n)))) -> 
    Let(ds, e)

  IntMatchN:
    Let(ds, App(Rule(Const(Int(n)), _), e2)) -> Let(ds, Fail)
    where <is-nf; not(?Const(Int(n)))> e2

  AppMatchP:
    Let(ds, App(Rule(App(p1, p2), e3), App(e1, e2))) ->
    Let(ds, App(App(Rule(p1, Rule(p2, e3)), e1), e2))
    where <is-nf> App(e1, e2)

  AppMatchN:
    Let(ds, App(Rule(App(p1, p2), _), e2)) -> Let(ds, Fail)
    where <is-nf; not(?App(_, _))> e2

  FailMatchP:
    Let(ds, App(Rule(Fail, e), Fail)) -> Let(ds, e)

  FailMatchN:
    Let(ds, App(Rule(Fail, _), e2)) -> Let(ds, Fail)
    where <is-nf; not(Fail)> e2

  EvalFunc(e):
    Let(ds, App(e1, e2)) -> Let(ds', App(e1', e2))
    where <e> Let(ds, e1) => Let(ds', e1')
  
  EvalArg(e):
    Let(ds, App(e1, e2)) -> Let(ds', App(e1, e2'))
    where <e> Let(ds, e2) => Let(ds', e2')
  
  EvalLeft(e):
    Let(ds, LChoice(e1, e2)) -> Let(ds', LChoice(e1', e2))
    where <e> Let(ds, e1) => Let(ds', e1')

  EvalRight(e):
    Let(ds, LChoice(e1, e2)) -> Let(ds', LChoice(e1, e2'))
    where <e> Let(ds, e2) => Let(ds', e2')

  LeftChoice:
    Let(ds, LChoice(e1, _)) -> Let(ds, e1)
    where <is-nf; not(Fail + Cut(id) + Rule(id, id))> e1

  LeftChoiceCut:
    Let(ds, LChoice(Cut(e1), _)) -> Let(ds, e1)

  RightChoice:
    Let(ds, LChoice(Fail, e)) -> Let(ds, e)

  PropFunc:
    Let(ds, App(Fail, _)) -> Let(ds, Fail)

  PropArg:
    Let(ds, App(_, Fail)) -> Let(ds, Fail)

  UncutLeft:
    Let(ds, App(Cut(e1), e2)) -> Let(ds, App(e1, e2))

  UncutRight:
    Let(ds, App(e1, Cut(e2))) -> Let(ds, App(e1, e2))

  Distrib:
    Let(ds, App(LChoice(e1, e2), e3)) ->
    Let(ds, Let([Def(x, e3)], 
      LChoice(App(e1, Var(x)), App(e2, Var(x)))))
    where !Id("_x", <unique-int> ()) => x

strategies

(* \code{is-con} and \code{is-nf} determine whether a term is a
   constructor application or a normal form, respectively. 
*)

  is-con = rec x(Con(id) + App(x, id))

  is-nf = 
    Const(id) + Rule(id, id)
    + is-con + Fail + Cut(id)
    + LChoice(Rule(id, id), id)
