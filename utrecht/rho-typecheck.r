(** The module \code{rho-typecheck} implements a type checker 
 (or rather, a type inferencer) for RhoStratego.  A number of
improvements can be made to this implementation.

First, error messages could be improved vastly.  Currently little
 information is given about the cause of the rejection of a program. 

Second, the following program is rejected by the type checker:
\begin{verbatim}
x = id 123;
y = id "foo";
id = x -> x;
\end{verbatim}
Placing \code{id} on top will make the program acceptable.
 Alternatively, the programmer could provide a type signature for
 \code{id}.  The
 problem is that definitions are typed from top to bottom.  When we
 type \code{x}, \code{id} is given the type \code{Int \ra $\alpha$},
 since we do not know that \code{id} is polymorphic.  The application
 \code{id "foo"} will then be rejected. 

The solution is to order the definitions in a list of 
{\em binding groups} (a smallest possible set of mutually recursive
definitions), where no binding group refers to definitions in later
 binding groups \cite{thih}.  This will cause \code{id} to be
 typechecked (and given a polymorphic type) before \code{x} and
 \code{y}.
*)

module rho-typecheck
imports lib rho rho-utils

strategies

(** We type-check a program by expanding type synonyms, putting all
 declarations in a let-expression with a dummy body, and then
 type-checking that
 let-expression.  The initial environment $\Gamma$ consists of the
 constructor type signatures.  The variables in those type signatures
 must be renamed in order to prevent name clashes.  The result of the
 type-checker is the original program with each term decorated with
 its type. *)

  rho-typecheck = iowrap(
    ?Program(decls); 
    where (<get-syns> decls => syns);
    where (<topdown(repeat(explode-syn(!syns)))> decls => decls');
    where (<get-tsigs; map(\(c, t) -> (Id(c, 0), 
      <new-names> t)\)> decls' => initenv);
    !([initenv], Let(decls', Fail));
    rec i(infer(i) <+ \e -> <bad(!"unknown term")> e\);
    \(_, HasType(Let(decls'', _), _)) -> Program(decls'')\
  )

(** The strategy \code{explode-syn} expands type synonyms. *)

  explode-syn(syns) =
    where (syns => syns);
    listify-tapp; ?(TCon(c), targs);
    where (<lookup> (c, syns) => (vars, t));
    where (<zip(id)> (vars, targs) => subs);
    where (<subs> (subs, t) => t');
    !t'

rules

(** Environments are maintained as a {\em stack} of type assignments.
 The advantage is that we can easily add and remove groups of
 variables to and from the environment.  The following strategies
 manage environments. *)

  push-env: (env, envs) -> [env | envs]
  pop-env: [env | envs] -> (env, envs)
  lookup-env: (nm, env) -> <lookup> (nm, <concat> env)

(** The strategy \code{infer} infers the type of a term, given a type
 environment.  The code follows the algorithm given in section
 \ref{ssec:typeinf}. \\
First, the trivial rules for typing literals.
*)

  infer(i): 
    (env, e@Const(Int(_))) -> (env, HasType(e, TCon("Int")))

  infer(i): 
    (env, e@Const(Str(_))) -> (env, HasType(e, TCon("String")))

(** The {\sc Fail} rule. *)

  infer(i): 
    (env, e@Fail) -> (env, HasType(e, TVar(<new> ())))

(** The {\sc Con} rule.  Constructor types are carried around in
    the same environment as regular variables. *)

  infer(i): 
    (env, e@Con(c)) -> (env, HasType(e, <findcon> (env, c)))

(** Primops have some random type $\alpha$; this can be
    constrained using a type annotation or signature. *) 

  infer(i): 
    (env, e@PrimOp(s)) -> (env, HasType(e, TVar(<new> ())))

(** The {\sc Cut} rule; just compute the type of the argument of
    the cut. *)

  infer(i): 
    (env, Cut(e)) -> (env', HasType(Cut(e'), t))
    where <i> (env, e) => (env', e'@HasType(_, t))

(** The {\sc Var} rule, following by an application of the 
    {\sc Inst} rule, since all variables uses are instantiated
    automatically in the Hindley-Milner system. *)

  infer(i):
    (env, e@Var(nm)) -> (env, HasType(e, <specialise> t))
    where
      <lookup-env <+ bad(!"undefined variable")> (nm, env) => t

(** The {\sc App} rule.  If necessary, we apply the {\sc Gen}
    rule to the type of the argument in order to support rank-2
    types. *)

  infer(i):
    (env, App(e1, e2)) ->
    (env''''', HasType(App(e1', e2'), tres))
    where
      <i> (env, e1) => (env', e1'@HasType(_, t1));
      new => varg; new => vres;
      <push-env> ([("", TVar(varg)), 
        ("", TVar(vres))], env') => env'';
      <supertype <+ bad(!"not a function")>
        (TFun(TVar(varg), TVar(vres)), t1) => s;
      <subs-env> (s, env'') => env''';
      <i> (env''', e2) => (env'''', e2'@HasType(_, t2));
      <Hd; Hd; Snd> env'''' => targ;
      <!(targ, t2); supertype
       <+ !(targ, <try-to-generalise> (env'''', t2)); supertype
       <+ bad(!"wrong argument")> () => s';
      <subs-env; pop-env> (s', env'''') => 
        ([(_, _), (_, tres)], env''''')

(** The {\sc Choice} rule. *)

  infer(i):
    (env, LChoice(e1, e2)) -> 
    (env''''', HasType(LChoice(e1', e2'), t))
    where
      <i> (env, e1) => (env', e1'@HasType(_, t1));
      <push-env> ([("", t1)], env') => env'';
      <i> (env'', e2) => (env''', e2'@HasType(_, t2));
      <pop-env> env''' => ([("", t1')], env'''');
      <match-choice <+ Swap; match-choice <+
       bad(!"choice alts do not match")> 
       (env'''', t1', t2) => (env''''', t)

  match-choice: (env, t1, t2) -> (env', t)
    where
      <supertype> (t1, t2) => s;
      <subs> (s, t1) => t;
      <subs-env> (s, env) => env'

(** Type annotations. *)

  infer(i):
    (env, HasType(e, t)) -> (env'', HasType(e', t''))
    where
      <i> (env, e) => (env', e'@HasType(_, t'));
      <supertype <+ bad(!"supertype in hastype")> (t, t') => s;
      <subs> (s, t) => t'';
      <subs-env> (s, env') => env''

(** The {\sc Abs} rule. *)

  infer(i):
    (env, Rule(pat, body)) ->
    (env''''', HasType(Rule(HasType(pat, tpat'), body'), t))
    where
      <rec p(pattype(p) <+ \p -> <bad(!"unknown pattern")> p\)> 
        (env, pat) => (patenv, tpat);
      <push-env> (patenv, env) => env';
      <push-env> ([("", tpat)], env') => env'';
      <i> (env'', body) => (env''', body'@HasType(_, tbody));
      <pop-env> env''' => ([(_, tpat')], env'''');
      <pop-env> env'''' => (_, env''''');
      <contract> (env''''', TFun(tpat', tbody)) => t

(** The {\sc Let} rule, with applications of the {\sc Gen} rule
 to the inferred types of all definitions.  The code is a bit complex
 because we have to deal with definitions without signatures as well as
 signatures without definitions (this is legal; the definitions may be
 given in different compilation units). *)

  infer(i):
    (env, Let(decls, body)) -> 
    (env, HasType(Let(decls'', body'), tbody))
    where
      <get-sigs> decls => localenv;
      <get-defs> decls => defs;

      <map(\(nm, _) -> <lookup; ![] <+
        ![(nm, TVar(<new> ()))]> (nm, localenv)
      \); concat> defs => localenv';
      
      <push-env> (<conc> (localenv, localenv'), env) => subenv;
      where (<foldl({t1, t1', t2, env, env', env'', e', s: \
        ((nm, e), (env, defs)) -> 
        (env'', [Def(nm, e') | defs])
        where
          <i> (env, e) => (env', e'@HasType(_, t1));
          <debug(!"inferred: ")> t1;
          <try-to-generalise> (env', t1) => t1';
          <lookup-env> (nm, env) => t2;
          <supertype <+ bad(!"supertype in def")> (t2, t1') => s;
          <subs-env> (s, env') => env''
      \})> (defs, (subenv, [])) => (subenv', defs'));
      <i> (subenv', body) => (subenv'', body'@HasType(_, tbody));
      <pop-env> subenv'' => (localenv'', env');

      <filter(not(Def(id, id) + Sig(id, id)))> decls => decls';
      <map(\(nm, t) -> Sig(nm, t)\)> localenv'' => sigs;
      <concat> [decls', defs', sigs] => decls''
(** The strategy \code{pattype} computes the type of a pattern, as
 well as an environment containing type assignments for all variables
 occurring in the pattern.  This code follows the typing rules in
 figure \ref{fig:infrules2}.
*)

  pattype(p): (_, Const(Int(_))) -> ([], TCon("Int"))

  pattype(p): (_, Const(Str(_))) -> ([], TCon("String"))

  pattype(p): (_, Fail) -> ([], TVar(<new> ()))

  pattype(p): (_, Var(nm)) -> ([(nm, TVar(tvar))], TVar(tvar))
    where new => tvar

  pattype(p): (inenv, p) -> (env, t')
    where
      <listify-app> p => (Con(c), ps);
      <findcon> (inenv, c) => t;
      <foldl(patapply(!inenv, p))> (ps, ([], t)) => (env, t');
      <not(?TFun(_, _)) <+ 
       bad(!"incomplete constructor pattern")> t'

  patapply(inenv, p): (p, (env, t)) -> (env'', tres')
   where
     inenv => inenv;
     <?TFun(targ, tres) <+ bad(!"not a function pattern")> t;
     <p> (inenv, p) => (env', targ');
     <supertype <+ bad(!"bad pat argument")> (targ', targ) => s;
     <subs-env> (s, [<conc> (env, env')]) => [env''];
     <subs> (s, tres) => tres'

  pattype(p): 
    (inenv, p) -> 
    ([(c, t0) | env], TGen(TVar(x0), <map(Snd)> env))
    where
      <listify-app> p => (Var(c), ps);
      <map(\Var(x) -> (x, TVar(<new> ()))\) <+ 
       bad(!"bad app pattern match")> ps => env;
      new => x0;
      <foldr(!TVar(x0), \((_, a), b) -> TFun(a, b)\)> env => t0

  pattype(p): 
    (inenv, HasType(pat, t)) -> (env', t'')
    where
      <p> (inenv, pat) => (env, t');
      <supertype <+ bad(!"bad hastype pat")> (t, t') => s;
      <subs> (s, t) => t'';
      <subs-env> (s, [env]) => [env']

  pattype(p):
    (inenv, RTTC(t, pat)) -> (env, TRTTC(t))
    where <p> (inenv, pat) => (env, t')

(** The strategy \code{findcon} finds a constructor in the type
environment and returns its type, with all type variables renamed. *)

  findcon: (env, c) -> <new-names> t
    where
      <lookup-env <+ 
       bad(!"unknown constructor")> (Id(c, 0), env) => t

(** The strategy \code{specialise} implements the {\sc Inst} rule
 given in figure \ref{fig:infrules}. *)

strategies

  specialise = outer-generalise; repeat(\TForAll(x, t) -> t\)

(** The strategy \code{try-to-generalise} implements 
 (a sequence of applications of) the {\sc Gen} rule.  It generalises
 all free variables that do not occur in the environment. *)

rules

  try-to-generalise: (env, t) -> t'
    where
      <fvars; reverse> t => fv;
      <foldl(\(x, _t) -> <occurs-in-env; !_t <+ !TForAll(x, _t)> 
        (env, x)\)> (fv, t) => t'

(** The strategy \code{supertype} implements the supertype function
 defined in section \ref{ssec:typeinf}. *)

strategies

  supertype = 
    (outer-generalise, outer-generalise); rec s(supertype(s))

rules

  supertype(s): (TCon(c), TCon(c)) -> []
  supertype(s): (TVar(x), TVar(x)) -> []
  supertype(s): (TVar(x), TVar(y)) -> [(x, TVar(y)), (y, TVar(x))]
  // x mag niet voorkomen in t!
  supertype(s): (TVar(x), t) -> [(x, t)]
  supertype(s): (t, TVar(x)) -> [(x, t)]
  supertype(s): (TApp(l1, r1), TApp(l2, r2)) -> <conc> (sl, sr)
    where 
      <s> (l1, l2) => sl;
      <s> (<subs> (sl, r1), <subs> (sl, r2)) => sr
  supertype(s): (TFun(TVar(x), t2), TFun(TRTTC(t3), t4)) -> s'
    where
      <s> (TFun(TVar(x), t2), TFun(t3, t4)) => s;
      <filter((not(?x), id))> s => s'
  supertype(s): (TFun(t1, t2), TFun(TRTTC(t3), t4)) -> s
    where <s> (t2, t4) => s
  supertype(s): (TFun(t1, t2), TFun(t3, t4)) -> <conc> (s1, s2)
    where 
      <s> (t3, t1) => s1;
      <s> (<subs> (s1, t2), <subs> (s1, t4)) => s2
  supertype(s): (TForAll(x1, t1), TForAll(x2, t2)) -> s
    where
      <s> (t1, <subs1> ((x2, TVar(x1)), t2)) => s;
      <not(lookup)> (x1, s)
  supertype(s): (t1, t2@TForAll(_, _)) -> s
    where
      <rho-trename> t2 => TForAll(x2', t2');
      <s> (t1, t2') => s
  supertype(s): (TForAll(x, t1), t2) -> s
    where <s> (t1, t2) => s; <not(lookup)> (x, s)
  supertype(s): t -> <fail> t

(** The strategies \code{subs} and \code{subs-env} perform
 substitutions over single types or entire type environments,
 respectively. *)

strategies

  subs = foldl(subs1)

  subs-env = 
    ?(s, env); !env; 
    map(map(\(nm, def) -> (nm, <subs> (s, def))\))

  subs1 = rec s(subs1(s))

rules

  subs1(s): ((x, t), TVar(x)) -> t
  subs1(s): ((x, t), TForAll(y, t2)) -> 
            TForAll(y, <s> ((x, t), t2))
    where <not(eq)> (x, y)
  subs1(s): (sub, TApp(t1, t2)) -> 
            TApp(<s> (sub, t1), <s> (sub, t2))
  subs1(s): (sub, TFun(t1, t2)) -> 
            TFun(<s> (sub, t1), <s> (sub, t2))
  subs1(s): (sub, TRTTC(t)) -> TRTTC(<s> (sub, t))
  subs1(s): x@(sub, TGen(t, ts)) -> 
            TGen(<s> (sub, t), <map(\t' -> <s> (sub, t')\)> ts)
  subs1(s): (_, t) -> t

(** The strategy \code{fvars} returns a list of free variables
 occurring in a type. *)

strategies

  fvars = rec f(fvars(f))

rules

  fvars(f): TVar(x) -> [x]
  fvars(f): TCon(_) -> []
  fvars(f): TApp(t1, t2) -> <union'> (<f> t1, <f> t2)
  fvars(f): TFun(t1, t2) -> <union'> (<f> t1, <f> t2)
  fvars(f): TRTTC(t) -> <f> t
  fvars(f): TForAll(x, t) -> <f; filter(not(?x))> t
  fvars(f): TGen(t, ts) -> <f> t

(** The strategy \code{occurs-in-env} succeeds if the specified
 variable occurs free in the environment. *)

strategies

  occurs-in-env = 
    ?(env, x); !env; concat; map(Snd); 
    fetch(fvars; fetch(?x))

(** The strategy \code{outer-generalise} floats quantifiers to the top
 of a type.
 For example, $A \ra \forall \alpha . \alpha$ is transformed into the
 equivalent type $\forall \alpha . A \ra \alpha$.  This makes it
 easier to compare types. *)

strategies

  outer-generalise = 
    rho-trename; rec x(bottomup(repeat(outer-generalise'(x))))

rules

  outer-generalise'(x): 
    TFun(t1, TForAll(x, t2)) -> TForAll(x, <x> TFun(t1, t2))

(** The strategy \code{contract} implements the {\sc Contract} rule. *)

strategies

  contract = ?(env, t); !t; topdown(try(contract'(!env, !t)))

rules

  contract'(env, t'): TGen(t, ts) -> t
    where 
      env => env; t' => t';
      <map({x: ?TVar(x); where 
        (<not(occurs-in-env)> (env, x))})> [t | ts];
      <map({x: ?TVar(x); where 
        (<not(occurs-in-env)> ([[("", t')]], x))})> ts

(** The remainder is support code. *)

rules

  listify-tapp: t -> (t0, <reverse> ts)
    where 
      <rec x(\TApp(a, b) -> [b | <x> a]\ <+ ?t0; ![])> t => ts

  listify-app: e -> (e0, <reverse> es)
    where 
      <rec x(\App(a, b) -> [b | <x> a]\ <+ ?e0; ![])> e => es

  union': (l1, l2) -> <conc> (l1, 
            <filter(not({x: ?x; !l1; fetch(?x)}))> l2)

  new-names: t -> <try-to-generalise; specialise> ([], t)

strategies

  bad(msg) = debug; !["type error: ", <msg> ()]; fatal-error